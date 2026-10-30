#include "paleo.h"
#include <math.h>
typedef struct Pc911 *P910;
typedef struct R913 R913;
typedef struct R913 *P912;
struct R913 {  rt_int kind; rt_int line; rt_int ival; P910 s; P910 prags;  };
typedef struct Pc915 *P914;
typedef struct A916 A916;
struct A916 { rt_int lo, hi, lo2, hi2; P912 *p; };
typedef struct R918 R918;
typedef struct R918 *P917;
struct R918 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P910 name; P910 tag; P910 prags; P917 labels; P917 a; P917 b; P917 c; P917 d; P917 e; P917 next;  };
typedef struct R920 R920;
typedef struct R920 *P919;
typedef struct R922 R922;
typedef struct R922 *P921;
struct R922 {  P910 s; P921 next;  };
struct R920 {  P910 lo; P910 hi; P910 lo2; P910 hi2; P910 slen; rt_int mlo; rt_int mhi; int hasm; P917 args; int dyn; rt_int lvl; P910 prec; P921 bnds;  };
typedef struct R924 R924;
typedef struct R924 *P923;
typedef struct R926 R926;
typedef struct R926 *P925;
struct R926 {  P910 name; P923 t; P919 c; P917 st; P925 next;  };
typedef struct R928 R928;
typedef struct R928 *P927;
typedef struct R930 R930;
typedef struct R930 *P929;
struct R930 {  P910 name; rt_int mode; P923 t; P919 c; P910 cfield; P929 next;  };
typedef struct Pc932 *P931;
typedef struct A933 A933;
struct A933 { rt_int lo, hi, lo2, hi2; P927 *p; };
typedef struct R935 R935;
typedef struct R935 *P934;
struct R935 {  rt_int depth; P917 imps; int all_imp; P934 next;  };
typedef struct R937 R937;
typedef struct R937 *P936;
struct R937 {  rt_int kind; rt_int i; P910 s; P923 t;  };
struct R928 {  rt_int kind; P910 name; P923 t; P919 c; P910 access; P910 cname; int ro_flag; rt_int mvalue; int hasmv; P917 st; P917 decl; P929 params; P923 result; rt_int depth; rt_int level; int byref; P927 members; P927 mnext; P917 binds; P927 insts; P931 env; P927 chain; P927 stack; P927 owner; P934 gctx; P936 mv; P921 reqs; int reqdone; P917 home; P917 capn; P927 tbinds;  };
typedef struct R939 R939;
typedef struct R939 *P938;
struct R939 {  P923 t; P938 next;  };
struct R924 {  rt_int kind; P910 name; P917 lits; P923 elem; P923 idx; P923 idx2; P919 elemcons; P917 elemst; P923 under; P917 tparams; P917 ocap; P925 fields; P923 target; P917 decl; P910 cname; int forward; int defined; int helpers; P927 initp; P927 finalp; P927 tpsyms; P927 gen; P927 gbinds; P923 next; rt_int ndim; P938 idxs; P927 assignp; P927 eqp; P927 ltp;  };
typedef struct R941 R941;
typedef struct R941 *P940;
struct R941 {  P921 head; P921 tail;  };
typedef struct R943 R943;
typedef struct R943 *P942;
struct R943 {  P910 match; P910 label; rt_int depth; P942 next;  };
typedef struct R945 R945;
typedef struct R945 *P944;
struct R945 {  P917 d; P944 next; rt_int depth;  };
typedef struct R947 R947;
typedef struct R947 *P946;
struct R947 {  P917 d; P910 w; P946 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P910 result_;
 P910 t_1016;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_1019;
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
 rstr r_1020;
 rt_int i_1021;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_1025;
 rstr w_1026;
 rt_int i_1027;
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
 P940 result_;
 P940 b_1031;
};
struct f_put_27fr { int dummy;
 P940 b_25;
 rstr *s_26;
 P921 l_1033;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P940 b_30;
 P921 l_1035;
};
struct f_splice_34fr { int dummy;
 P940 a_32;
 P940 b_33;
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
 P912 t_1037;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_1039;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_1040;
 rt_int k_1041;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_1045;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_1046;
 P910 r_1047;
 int more_1048;
 rt_int k_1049;
 int go_1050;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_1051;
 rt_int k_1052;
 rstr p_1053;
 int ok_1054;
 int known_1055;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_1056;
 rt_int j_1057;
 rt_int n_1058;
 int c_1059;
 rstr w_1060;
 rt_int k_1061;
 rstr w_1065;
 rt_int k_1066;
 rstr two_1070;
};
struct f_read_source_58fr { int dummy;
 rstr line_1071;
};
struct f_nn_61fr { int dummy;
 rt_int kind_59;
 rt_int line_60;
 P917 result_;
 P917 x_1072;
};
struct f_append_65fr { int dummy;
 P917 *head_62;
 P917 *tail_63;
 P917 x_64;
};
struct f_list_len_67fr { int dummy;
 P917 l_66;
 rt_int result_;
 rt_int n_1074;
 P917 p_1075;
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
 P910 result_;
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
 P910 result_;
};
struct f_name_node_90fr { int dummy;
 P917 result_;
 P917 x_1076;
};
struct f_id_list_91fr { int dummy;
 P917 result_;
 P917 head_1077;
 P917 tail_1078;
};
struct f_p_subtype_92fr { int dummy;
 P917 result_;
 rt_int line_1079;
 P917 x_1080;
 rstr w_1081;
 P917 head_1082;
 P917 tail_1083;
 P917 head_1084;
 P917 tail_1085;
 int more_1086;
 P917 names_1087;
 P917 st_1088;
 P917 cmp_1089;
 P917 head_1090;
 P917 tail_1091;
 int more_1092;
 P917 lit_1093;
};
struct f_constraint_list_93fr { int dummy;
 P917 result_;
 P917 head_1094;
 P917 tail_1095;
 int more_1096;
 rt_int line_1097;
 P917 lo_1098;
 P917 r_1099;
};
struct f_actual_params_94fr { int dummy;
 P917 result_;
 P917 head_1100;
 P917 tail_1101;
};
struct f_is_type_word_96fr { int dummy;
 rstr *w_95;
 int result_;
};
struct f_actual_tt_97fr { int dummy;
 P917 result_;
 P917 head_1102;
 P917 tail_1103;
 int more_1104;
};
struct f_binop_102fr { int dummy;
 P910 op_98;
 P917 l_99;
 P917 r_100;
 rt_int line_101;
 P917 result_;
 P917 x_1105;
};
struct f_expr_103fr { int dummy;
 P917 result_;
 P917 l_1106;
 P910 op_1107;
 rt_int line_1108;
};
struct f_expr_and_104fr { int dummy;
 P917 result_;
 P917 l_1109;
 rt_int line_1110;
};
struct f_expr_not_105fr { int dummy;
 P917 result_;
 P917 x_1111;
};
struct f_is_rel_107fr { int dummy;
 rstr *s_106;
 int result_;
};
struct f_expr_rel_108fr { int dummy;
 P917 result_;
 P917 l_1112;
 P910 op_1113;
 rt_int line_1114;
};
struct f_expr_add_109fr { int dummy;
 P917 result_;
 P917 l_1115;
 P910 op_1116;
 rt_int line_1117;
};
struct f_expr_mul_110fr { int dummy;
 P917 result_;
 P917 l_1118;
 P910 op_1119;
 rt_int line_1120;
};
struct f_expr_pow_111fr { int dummy;
 P917 result_;
 P917 l_1121;
 rt_int line_1122;
};
struct f_expr_prefix_112fr { int dummy;
 P917 result_;
 P917 x_1123;
};
struct f_postfix_113fr { int dummy;
 P917 result_;
 P917 p_1124;
 rt_int line_1125;
 P917 x_1126;
 P917 head_1127;
 P917 tail_1128;
 int more_1129;
 P917 lo_1130;
 P917 r_1131;
 P917 x_1132;
 P917 x_1133;
 P917 x_1134;
};
struct f_primary_114fr { int dummy;
 P917 result_;
 rt_int line_1135;
 P917 x_1136;
 rt_int k_1137;
 rstr w_1138;
 P917 head_1139;
 P917 tail_1140;
 int more_1141;
};
struct f_constructor_item_115fr { int dummy;
 P917 result_;
 rt_int line_1142;
 P917 it_1143;
 P917 first_1144;
 P917 keys_1145;
 P917 ktail_1146;
 P917 lab_1147;
 rt_int save_1148;
 P917 more_1149;
 P917 tail2_1150;
 int ok_1151;
 int go_1152;
 P917 l2_1153;
};
struct f_at_body_end_116fr { int dummy;
 int result_;
};
struct f_body_117fr { int dummy;
 P917 result_;
 P917 head_1154;
 P917 tail_1155;
 int stmts_1156;
 P917 after_1157;
 P917 x_1158;
};
struct f_body_element_118fr { int dummy;
 P917 result_;
 P917 x_1159;
 P910 pr_1160;
 P917 p_1161;
};
struct f_declaration_119fr { int dummy;
 P917 result_;
 rt_int line_1162;
 P917 head_1163;
 P917 tail_1164;
 P917 names_1165;
 P917 x_1166;
};
struct f_object_decl_120fr { int dummy;
 P917 result_;
 rt_int line_1167;
 int is_var_1168;
 P917 names_1169;
 P917 st_1170;
 P917 init_1171;
 P917 loc_1172;
 rt_int loc_kind_1173;
 P917 head_1174;
 P917 tail_1175;
 P917 x_1176;
};
struct f_abbrev_decl_121fr { int dummy;
 P917 result_;
 P917 x_1177;
};
struct f_skip_rep_122fr { int dummy;
 rt_int depth_1178;
};
struct f_type_decl_123fr { int dummy;
 P917 result_;
 rt_int line_1179;
 P910 name_1180;
 P917 params_1181;
 P917 x_1182;
 P917 tts_1183;
};
struct f_mode_of_125fr { int dummy;
 rstr *w_124;
 rt_int result_;
};
struct f_formal_params_126fr { int dummy;
 P917 result_;
 P917 head_1184;
 P917 tail_1185;
 int more_1186;
 rt_int mode_1187;
 P917 names_1188;
 P917 ntail_1189;
 P917 st_1190;
 P917 p_1191;
};
struct f_imports_list_128fr { int dummy;
 P917 owner_127;
 int result_;
 P917 head_1192;
 P917 tail_1193;
 int more_1194;
 int ro_1195;
 P917 x_1196;
};
struct f_is_definable_130fr { int dummy;
 rstr *w_129;
 int result_;
};
struct f_definable_name_131fr { int dummy;
 P910 result_;
 P910 r_1197;
};
struct f_subprogram_decl_132fr { int dummy;
 P917 result_;
 rt_int line_1198;
 P917 x_1199;
 int is_abn_1200;
 int is_func_1201;
 int dummy_1202;
};
struct f_capsule_decl_133fr { int dummy;
 P917 result_;
 P917 x_1203;
 int dummy_1204;
 P917 head_1205;
 P917 tail_1206;
 int more_1207;
 P917 n_1208;
};
struct f_formal_tt_134fr { int dummy;
 P917 result_;
 P917 head_1209;
 P917 tail_1210;
 int more_1211;
};
struct f_generic_decl_135fr { int dummy;
 P917 result_;
 P917 x_1212;
 P917 head_1213;
 P917 tail_1214;
 int more_1215;
 P917 names_1216;
 rt_int kind_1217;
 P917 st_1218;
 P917 items_1219;
 P917 p_1220;
 P917 nhead_1221;
 P917 ntail_1222;
 P917 it_1223;
};
struct f_type_list_136fr { int dummy;
 P917 result_;
 P917 head_1224;
 P917 tail_1225;
 int more_1226;
 P917 n_1227;
};
struct f_task_decl_137fr { int dummy;
 P917 result_;
 P917 x_1228;
 int dummy_1229;
};
struct f_expose_decl_138fr { int dummy;
 P917 result_;
 P917 x_1230;
 P917 head_1231;
 P917 tail_1232;
 int more_1233;
 P917 n_1234;
 P917 head_1235;
 P917 tail_1236;
 int more_1237;
 P917 n_1238;
 P917 tgt_1239;
};
struct f_is_compound_kw_140fr { int dummy;
 rstr *w_139;
 int result_;
};
struct f_statement_141fr { int dummy;
 P917 result_;
 P917 labels_1240;
 P917 ltail_1241;
 P910 match_1242;
 P917 s_1243;
};
struct f_unlabeled_statement_142fr { int dummy;
 P917 result_;
 rt_int line_1244;
 P917 x_1245;
 P917 head_1246;
 P917 tail_1247;
 P917 invs_1248;
 P917 itail_1249;
 int more_1250;
 P917 target_1251;
};
struct f_arm_146fr { int dummy;
 P917 cond_143;
 P917 b_144;
 rt_int line_145;
 P917 result_;
 P917 x_1252;
};
struct f_if_stmt_147fr { int dummy;
 P917 result_;
 P917 x_1253;
 P917 head_1254;
 P917 tail_1255;
 P917 cond_1256;
 int go_1257;
};
struct f_case_stmt_148fr { int dummy;
 P917 result_;
 P917 x_1258;
 P917 head_1259;
 P917 tail_1260;
 P917 labs_1261;
 P917 ltail_1262;
 int more_1263;
 P917 l_1264;
};
struct f_repeat_stmt_149fr { int dummy;
 P917 result_;
 P917 x_1265;
};
struct f_guard_stmt_150fr { int dummy;
 P917 result_;
 P917 x_1266;
 P917 head_1267;
 P917 tail_1268;
 P917 h_1269;
};
struct f_program_151fr { int dummy;
 P917 result_;
 P917 head_1270;
 P917 tail_1271;
 P910 pr_1272;
 P917 u_1273;
};
struct f_hash_153fr { int dummy;
 rstr *s_152;
 rt_int result_;
 rt_int h_1274;
 rt_int i_1275;
};
struct f_lookup_155fr { int dummy;
 rstr *name_154;
 P927 result_;
 P927 y_1279;
};
struct f_lookup_decl_157fr { int dummy;
 P917 d_156;
 P927 result_;
 P927 y_1280;
};
struct f_define_160fr { int dummy;
 P927 y_158;
 rt_int line_159;
 rt_int h_1281;
 P927 z_1282;
};
struct f_overloadable_162fr { int dummy;
 P927 y_161;
 int result_;
};
struct f_same_tt_165fr { int dummy;
 P917 a_163;
 P917 b_164;
 int result_;
 P917 x_1283;
 P917 y_1284;
};
struct f_same_signature_168fr { int dummy;
 P929 a_166;
 P929 b_167;
 int result_;
 P929 x_1285;
 P929 y_1286;
};
struct f_open_scope_169fr { int dummy;
};
struct f_close_scope_170fr { int dummy;
};
struct f_new_sym_173fr { int dummy;
 rt_int kind_171;
 P910 name_172;
 P927 result_;
 P927 y_1287;
};
struct f_new_typ_175fr { int dummy;
 rt_int kind_174;
 P923 result_;
 P923 t_1289;
};
struct f_new_cons_176fr { int dummy;
 P919 result_;
 P919 c_1291;
};
struct f_scalar_kind_178fr { int dummy;
 P923 t_177;
 int result_;
};
struct f_bound_ctype_180fr { int dummy;
 P923 t_179;
 rstr result_;
};
struct f_cbound_183fr { int dummy;
 P919 c_181;
 rstr *b_182;
 rstr result_;
 P910 p_1293;
 rt_int i_1294;
};
struct f_clo_185fr { int dummy;
 P919 c_184;
 rstr result_;
};
struct f_chi_187fr { int dummy;
 P919 c_186;
 rstr result_;
};
struct f_sub_lo_190fr { int dummy;
 P923 t_188;
 P919 c_189;
 rstr result_;
};
struct f_sub_hi_193fr { int dummy;
 P923 t_191;
 P919 c_192;
 rstr result_;
};
struct f_raw_storage_196fr { int dummy;
 rstr *name_194;
 rstr *ct_195;
 rstr result_;
 rstr g_1298;
 rstr f_1299;
};
struct f_copy_cons_198fr { int dummy;
 P919 c_197;
 P919 result_;
 P919 r_1300;
};
struct f_freeze_201fr { int dummy;
 P919 c_199;
 P923 t_200;
 P919 result_;
 P919 r_1302;
 P910 saved_field_1303;
 rstr ct_1304;
 rstr la_1305;
 rstr lf_1306;
 rstr ha_1307;
 rstr hf_1308;
};
struct f_checked_205fr { int dummy;
 P923 t_202;
 P919 c_203;
 rstr *v_204;
 rstr result_;
};
struct f_same_lits_208fr { int dummy;
 P917 a_206;
 P917 b_207;
 int result_;
 P917 x_1309;
 P917 y_1310;
};
struct f_str_elem_210fr { int dummy;
 P923 t_209;
 P923 result_;
};
struct f_same_213fr { int dummy;
 P923 a_211;
 P923 b_212;
 int result_;
 P938 x_1311;
 P938 y_1312;
 P925 f_1313;
 P925 g_1314;
};
struct f_base_of_215fr { int dummy;
 P923 t_214;
 P923 result_;
};
struct f_base_cons_218fr { int dummy;
 P923 t_216;
 P919 c_217;
 P919 result_;
};
struct f_kind_name_220fr { int dummy;
 P923 t_219;
 rstr result_;
};
struct f_check_type_224fr { int dummy;
 P923 got_221;
 P923 want_222;
 rt_int line_223;
};
struct f_ctype_226fr { int dummy;
 P923 t_225;
 rstr result_;
};
struct f_struct_body_228fr { int dummy;
 P923 t_227;
 rstr result_;
};
struct f_field_decls_230fr { int dummy;
 P923 t_229;
 rstr result_;
 P925 f_1317;
 P910 s_1318;
};
struct f_declare_ctype_232fr { int dummy;
 P923 t_231;
 P923 u_1319;
 P917 p_1320;
 P910 fs_1321;
 rstr sn_1322;
 P919 pc_1323;
 P923 target_1324;
 P917 p_1325;
 P910 fs_1326;
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
 P923 t_237;
 rstr result_;
 P910 r_1327;
 rt_int k_1328;
};
struct f_acnt_241fr { int dummy;
 P923 t_239;
 rstr *base_240;
 rstr result_;
 P910 r_1332;
 rt_int k_1333;
};
struct f_cons_lo_244fr { int dummy;
 P919 c_242;
 rt_int k_243;
 P910 result_;
 P921 l_1337;
 rt_int i_1338;
};
struct f_cons_hi_247fr { int dummy;
 P919 c_245;
 rt_int k_246;
 P910 result_;
 P921 l_1342;
 rt_int i_1343;
};
struct f_idx_type_250fr { int dummy;
 P923 t_248;
 rt_int k_249;
 P923 result_;
 P938 l_1347;
 rt_int i_1348;
};
struct f_init_ascii_251fr { int dummy;
 P917 head_1352;
 P917 tail_1353;
 rt_int start_1354;
 rt_int i_1355;
 P917 lit_1359;
 P917 h2_1360;
 P917 t2_1361;
 P917 l1_1362;
 P917 l2_1363;
 P917 l3_1364;
};
struct f_enum2_254fr { int dummy;
 rstr *a_252;
 rstr *b_253;
 P923 result_;
 P923 t_1365;
 P917 l1_1366;
 P917 l2_1367;
};
struct f_lit_index_257fr { int dummy;
 P917 lits_255;
 rstr *name_256;
 rt_int result_;
 rt_int i_1368;
 P917 l_1369;
};
struct f_resolve_subtype_260fr { int dummy;
 P917 st_258;
 P919 *c_259;
 P919 c_259v;
 P923 result_;
 P923 t_1370;
 int ok_1371;
 P923 dummy_1372;
 P923 et_1374;
 P919 ec_1375;
 P923 et_1376;
 P917 ix_1377;
 rt_int k_1378;
 P938 tail_1379;
 P921 btail_1380;
 P919 ic_1381;
 P923 it_1382;
 P910 lo_1383;
 P910 hi_1384;
 P938 tl_1385;
 P921 l1_1387;
 P921 l2_1388;
 P919 ec_1391;
 P917 comp_1392;
 P925 tail_1393;
 P919 cc_1394;
 P925 f_1395;
 P917 lits_1397;
 P917 ltail_1398;
 P925 f_1399;
 P917 l_1400;
 P919 ec_1401;
 P917 gt_1402;
 P919 ec_1403;
 P910 base_1404;
};
struct f_float_lit_262fr { int dummy;
 P917 e_261;
 int result_;
};
struct f_tag_constraint_266fr { int dummy;
 P923 t_263;
 P917 e_264;
 P919 c_265;
 P923 dummy_1405;
};
struct f_named_subtype_269fr { int dummy;
 P917 st_267;
 P919 *c_268;
 P919 c_268v;
 P923 result_;
 P923 t_1406;
 P927 y_1407;
 rstr name_1408;
 P927 binds_1409;
 P931 saved_env_1410;
 rt_int saved_gdepth_1411;
 P927 nb_1412;
};
struct f_invoke_abbrev_273fr { int dummy;
 P927 y_270;
 P917 st_271;
 P919 *c_272;
 P919 c_272v;
 P923 result_;
 P917 p_1413;
 P917 a_1414;
 P923 t_1415;
 P927 z_1416;
 P919 pc_1417;
 P923 at_1418;
 int ok_1419;
};
struct f_apply_constraint_278fr { int dummy;
 P923 t_274;
 P917 args_275;
 P919 c_276;
 rt_int line_277;
 P923 dummy_1420;
 int ok_1421;
};
struct f_value_subtype_282fr { int dummy;
 P917 e_279;
 P919 *c_280;
 P919 c_280v;
 P910 *base_281;
 P910 base_281v;
 P923 result_;
 P923 t_1422;
 P919 c0_1423;
 int ro_1424;
 rt_int k_1425;
 rstr lo_1429;
 rstr hi_1430;
 P921 l1_1431;
 P921 l2_1432;
 P917 p_1435;
 P917 head_1436;
 P917 tail_1437;
 P917 sel_1438;
};
struct f_reverse_pairs_284fr { int dummy;
 P921 l_283;
 P921 result_;
 P921 r_1439;
 P921 p_1440;
 P921 a_1441;
 P921 b_1442;
};
struct f_inquiry_287fr { int dummy;
 P917 st_285;
 P919 *c_286;
 P919 c_286v;
 P923 result_;
 P910 base_1443;
 P923 t_1444;
 rstr name_1445;
 P917 sub_1446;
 P919 c2_1447;
 rt_int k_1448;
 int ok_1449;
 P919 ac_1450;
};
struct f_as_subtype_289fr { int dummy;
 P917 e_288;
 P917 result_;
 P917 st_1451;
 rstr name_1452;
 P927 y_1453;
};
struct f_tt_subtype_294fr { int dummy;
 P910 name_290;
 P917 tt_291;
 P917 args_292;
 rt_int line_293;
 P917 result_;
 P917 st_1454;
};
struct f_type_name_296fr { int dummy;
 rstr *name_295;
 int result_;
 P927 y_1455;
};
struct f_empty_set_298fr { int dummy;
 P923 t_297;
 rstr result_;
};
struct f_opened_300fr { int dummy;
 P923 t_299;
 int result_;
 P944 c_1456;
};
struct f_replace_all_304fr { int dummy;
 rstr *s_301;
 rstr *pat_302;
 rstr *r_303;
 rstr result_;
 rt_int i_1457;
};
struct f_subst_306fr { int dummy;
 rstr *s_305;
 rstr result_;
 P921 l_1458;
 P910 r_1459;
};
struct f_new_type_310fr { int dummy;
 P927 y_307;
 P917 st_308;
 P919 *c_309;
 P919 c_309v;
 P923 result_;
 P917 d_1460;
 P917 p_1461;
 P919 uc_1462;
 P927 z_1463;
 P919 zc_1464;
};
struct f_init_storage_314fr { int dummy;
 rstr *lval_311;
 P923 t_312;
 P919 c_313;
};
struct f_init_call_317fr { int dummy;
 P927 y_315;
 rstr *lval_316;
 rstr result_;
 P910 link_1465;
 rt_int i_1466;
};
struct f_needs_fin_319fr { int dummy;
 P923 t_318;
 int result_;
 P925 f_1470;
};
struct f_fin_code_322fr { int dummy;
 rstr *lval_320;
 P923 t_321;
 rstr result_;
 P910 r_1471;
 rstr i_1472;
 P925 f_1473;
 P925 f_1474;
 rt_int i_1475;
};
struct f_tparam_type_325fr { int dummy;
 P923 t_323;
 rstr *name_324;
 P923 result_;
 P927 z_1476;
};
struct f_make_storage_329fr { int dummy;
 rstr *lval_326;
 P923 t_327;
 P919 c_328;
 P917 p_1477;
 P917 a_1478;
 P919 uc_1479;
 P923 ut_1480;
 P923 at_1481;
 P923 pt_1482;
 rstr v_1483;
 P921 saved_1484;
 P921 l1_1485;
 P921 l2_1486;
 P923 at_1489;
 rstr acc_1490;
 rstr use_1491;
 rt_int k_1492;
 rstr i_1496;
 P925 f_1497;
 P925 f_1498;
 rt_int i_1499;
};
struct f_flat_331fr { int dummy;
 P923 t_330;
 int result_;
 P925 f_1503;
};
struct f_uninit_value_333fr { int dummy;
 P923 t_332;
 rstr result_;
};
struct f_init_chk_336fr { int dummy;
 P923 t_334;
 rstr *v_335;
 rstr result_;
 P923 b_1504;
};
struct f_manifest_339fr { int dummy;
 P917 e_337;
 int *ok_338;
 int ok_338v;
 rt_int result_;
 P936 v_1505;
};
struct f_mk_mval_342fr { int dummy;
 rt_int kind_340;
 rt_int i_341;
 P936 result_;
 P936 v_1506;
};
struct f_ipow_345fr { int dummy;
 rt_int a_343;
 rt_int b_344;
 rt_int result_;
 rt_int r_1508;
 rt_int i_1509;
};
struct f_meval_348fr { int dummy;
 P917 e_346;
 int *ok_347;
 int ok_347v;
 P936 result_;
 P936 a_1513;
 P936 b_1514;
 int ok2_1515;
 P910 op_1516;
 P927 y_1517;
 P936 r_1518;
};
struct f_bool_text_350fr { int dummy;
 int b_349;
 rstr result_;
};
struct f_bool_i_352fr { int dummy;
 int b_351;
 rt_int result_;
};
struct f_mstr_354fr { int dummy;
 P936 v_353;
 rstr result_;
};
struct f_ascii_char_356fr { int dummy;
 rt_int i_355;
 int result_;
 rstr printable_1519;
};
struct f_user_defined_358fr { int dummy;
 rstr *op_357;
 int result_;
 P927 y_1520;
};
struct f_mcopy_360fr { int dummy;
 P923 t_359;
 rstr result_;
 rstr ct_1521;
 rstr name_1522;
 P921 l_1523;
};
struct f_composite_362fr { int dummy;
 P923 t_361;
 int result_;
};
struct f_user_call2_368fr { int dummy;
 P927 y_363;
 rstr *a_364;
 int lv_a_365;
 rstr *b_366;
 int lv_b_367;
 rstr result_;
 P910 args_1525;
 rt_int i_1526;
};
struct f_user_arg_372fr { int dummy;
 P929 pm_369;
 rstr *v_370;
 int lv_371;
 rstr result_;
 rstr ct_1530;
};
struct f_top_level_374fr { int dummy;
 P927 y_373;
 int result_;
};
struct f_assign_code_379fr { int dummy;
 rstr *lval_375;
 P923 t_376;
 rstr *v_377;
 P919 c_378;
 rstr result_;
};
struct f_copy_code_382fr { int dummy;
 P923 t_380;
 rstr *v_381;
 rstr result_;
};
struct f_eq_code_386fr { int dummy;
 P923 t_383;
 rstr *a_384;
 rstr *b_385;
 rstr result_;
};
struct f_elem_assign_390fr { int dummy;
 rstr *lval_387;
 P923 t_388;
 rstr *v_389;
 rstr result_;
};
struct f_seen_name_393fr { int dummy;
 P921 l_391;
 rstr *s_392;
 int result_;
 P921 p_1531;
};
struct f_emit_helpers_394fr { int dummy;
 P923 order_1532;
 P923 t_1533;
 P921 done_1534;
 P921 l_1535;
 rstr c_1536;
};
struct f_helper_bodies_396fr { int dummy;
 P923 t_395;
 rstr c_1538;
 P940 b_1539;
 P923 e_1540;
 P910 sizes_1541;
 P910 bounds_1542;
 rt_int k_1543;
 rstr l_1547;
 rstr h_1548;
 P921 saved_1549;
 P917 p_1550;
 P921 l1_1551;
 P921 l2_1552;
 P925 f_1555;
 rt_int i_1556;
 P910 cases_as_1557;
 P910 cases_cp_1558;
 P910 cases_eq_1559;
 rstr fn_1560;
 P925 f_1561;
 P910 conds_1562;
 rstr fn_1563;
 rstr fn_1564;
};
struct f_declare_body_398fr { int dummy;
 P917 elems_397;
 P917 e_1565;
 P927 g_1566;
 P927 y_1567;
 P927 y_1568;
 P927 y_1569;
 P923 t_1570;
 P927 y_1571;
 P927 y_1572;
 P931 snap_1573;
 rt_int i_1577;
 P927 g_1581;
 P927 y_1582;
 P927 y_1583;
};
struct f_manifest_const_400fr { int dummy;
 P917 d_399;
 int ok_1584;
 P936 v_1585;
 P927 y_1586;
 P923 t_1587;
 P910 ctext_1588;
 P940 saved_1589;
};
struct f_exported_404fr { int dummy;
 P917 d_401;
 rstr *name_402;
 int *ro_403;
 int ro_403v;
 int result_;
 P917 p_1592;
};
struct f_copy_sym_406fr { int dummy;
 P927 y_405;
 P927 result_;
 P927 z_1593;
};
struct f_gen_capsule_408fr { int dummy;
 P917 d_407;
 P927 y_1595;
 P910 saved_1596;
 P917 p_1597;
 P929 tail_1598;
 P929 pm_1599;
};
struct f_capsule_params_412fr { int dummy;
 P917 d_409;
 P917 args_410;
 rt_int line_411;
 P917 p_1601;
 P917 a_1602;
 P923 t_1603;
 P923 vt_1604;
 P919 c_1605;
 P910 lv_1606;
 P919 lc_1607;
 int ro_1608;
 P927 y_1609;
 rstr f_1610;
 rstr g_1611;
 P927 y_1612;
 rstr v_1613;
 rstr access_1614;
};
struct f_elaborate_capsule_417fr { int dummy;
 P917 d_413;
 P927 y_414;
 P917 args_415;
 P917 owner_416;
 P944 cr_1615;
 P934 ctx_1616;
 P942 saved_gotos_1617;
 P927 m_1618;
 P917 p_1619;
 int ro_1620;
 P946 w_1623;
 P927 z_1625;
};
struct f_exports_op_420fr { int dummy;
 P917 d_418;
 rstr *op_419;
 int result_;
 P917 p_1626;
};
struct f_renamed_423fr { int dummy;
 P917 d_421;
 P927 z_422;
 P910 result_;
 P917 r_1627;
};
struct f_pick_capsule_425fr { int dummy;
 P917 d_424;
 P927 result_;
 P927 y_1628;
 P927 first_1629;
 P927 fit_1630;
 rt_int n_1631;
};
struct f_capsule_instance_428fr { int dummy;
 P927 g_426;
 P917 d_427;
 P927 result_;
 P917 gd_1632;
 P917 pat_1633;
 P927 binds_1634;
 P927 inst_1635;
 P931 saved_env_1636;
 rt_int saved_gdepth_1637;
 P927 b_1638;
};
struct f_gen_expose_430fr { int dummy;
 P917 d_429;
 P927 y_1639;
 P927 m_1640;
 P917 p_1641;
 P917 r_1642;
 P927 inst_1643;
 int found_1644;
 P927 z_1645;
 int found_1646;
 P927 z_1647;
};
struct f_finish_ptr_432fr { int dummy;
 P923 t_431;
 P917 d_1648;
 P917 p_1649;
 P919 c_1650;
 rstr dummy_1651;
 rt_int pass_1652;
 P927 y_1656;
 P919 pc_1657;
};
struct f_ptr_args_434fr { int dummy;
 P919 c_433;
 P917 result_;
};
struct f_bind_ptr_params_439fr { int dummy;
 P917 formals_435;
 P917 actuals_436;
 rstr *cell_437;
 rt_int line_438;
 P917 p_1658;
 P917 a_1659;
 P923 vt_1660;
 P919 pc_1661;
 P927 y_1662;
 rstr v_1663;
 rstr pv_1664;
};
struct f_alloc_cell_444fr { int dummy;
 P917 s_440;
 rstr *lv_441;
 P923 t_442;
 P919 c_443;
 P917 d_1665;
 P919 tc_1666;
 P923 vt_1667;
 rstr pt_1668;
 rstr cell_1669;
 rstr fn_1670;
 rstr v_1671;
};
struct f_freeze_args_448fr { int dummy;
 P919 c_445;
 P923 t_446;
 rt_int line_447;
 P919 result_;
 P919 r_1672;
 P917 p_1673;
 P917 a_1674;
 P917 head_1675;
 P917 tail_1676;
 P910 saved_1677;
 P919 pc_1678;
 P923 vt_1679;
 P923 pt_1680;
 rstr nm_1681;
 P927 y_1682;
 P917 n_1683;
 rstr v_1684;
 rstr access_1685;
};
struct f_ptr_subtype_check_452fr { int dummy;
 P923 t_449;
 P919 c_450;
 P917 src_451;
 P910 lv_1686;
 P923 st_1687;
 P919 sc_1688;
 int ro_1689;
 P910 cond_1690;
 P917 a_1691;
 P917 b_1692;
 P923 at_1693;
 P923 bt_1694;
 rstr x_1695;
 rstr y_1696;
};
struct f_normal_function_455fr { int dummy;
 P917 d_453;
 P927 y_454;
 P929 p_1697;
 P917 imp_1698;
 int ro_1699;
 P927 z_1700;
};
struct f_declare_subprogram_457fr { int dummy;
 P917 d_456;
};
struct f_build_subprogram_459fr { int dummy;
 P917 d_458;
 P927 result_;
 P927 y_1701;
 P917 p_1702;
 P929 tail_1703;
 P929 pm_1704;
 P919 rc_1706;
 P929 pm_1707;
 P940 saved_1708;
 P927 z_1709;
};
struct f_has_pragmat_462fr { int dummy;
 P910 pr_460;
 rstr *p_461;
 int result_;
 rt_int i_1710;
};
struct f_suppressing_464fr { int dummy;
 P910 pr_463;
 P910 result_;
 P910 r_1714;
 rt_int i_1715;
 rt_int j_1716;
 rt_int k_1717;
};
struct f_suppressed_466fr { int dummy;
 rstr *x_465;
 int result_;
 rstr w_1718;
 rt_int i_1719;
};
struct f_element_468fr { int dummy;
 P917 e_467;
 P910 saved_1723;
};
struct f_element1_470fr { int dummy;
 P917 e_469;
 rt_int k_1724;
 P927 g_1725;
 rt_int i_1729;
 P923 t_1733;
 rstr c_1734;
};
struct f_storage_473fr { int dummy;
 rstr *name_471;
 P923 t_472;
 rstr result_;
 rstr g_1735;
 rstr f_1736;
};
struct f_bind_476fr { int dummy;
 P927 y_474;
 rstr *access_475;
};
struct f_var_decl_478fr { int dummy;
 P917 d_477;
 P919 c_1737;
 P923 t_1738;
 P927 y_1739;
 rstr access_1740;
 P923 it_1741;
 rstr n_1742;
 P923 vt_1743;
 rstr v_1744;
};
struct f_open_fin_480fr { int dummy;
 rstr *fc_479;
 rstr f_1745;
 P921 l_1746;
};
struct f_close_fins_482fr { int dummy;
 P921 saved_481;
};
struct f_const_decl_484fr { int dummy;
 P917 d_483;
 P919 c_1748;
 P923 t_1749;
 P923 vt_1750;
 P927 y_1751;
 int ok_1752;
 rstr v_1753;
 rstr access_1754;
};
struct f_subprogram_486fr { int dummy;
 P917 d_485;
};
struct f_gen_subprogram_489fr { int dummy;
 P917 d_487;
 P927 y_488;
 P940 saved_code_1755;
 P940 saved_fields_1756;
 int saved_in_1757;
 P927 saved_sym_1758;
 P942 saved_exits_1759;
 P942 saved_gotos_1760;
 rt_int saved_frames_1761;
 P910 args_1762;
 P929 pm_1763;
 P921 saved_handlers_1764;
 P921 saved_cleanups_1765;
 P934 ctx_1766;
 P910 head_1767;
 P910 frame_1768;
 P910 parent_1769;
 P910 copy_back_1770;
 P910 pfin_1771;
 P921 saved_fins_1772;
 P919 saved_rc_1773;
 P910 saved_ret_1774;
 P910 saved_rflag_1775;
 P917 pn_1776;
 P910 nonrec_end_1777;
 int has_pfin_1778;
 rstr ct_1780;
 rstr f_1781;
 P927 p_1782;
 P919 pc_1783;
 P919 ac_1784;
 P919 fc_1785;
 P923 ft_1786;
 rstr bt_1787;
 P919 rc_1788;
 P923 rt_1789;
 rstr g_1790;
 P910 leave_1791;
 rstr xu_1792;
};
struct f_waits_of_491fr { int dummy;
 P917 d_490;
 rstr result_;
 P946 w_1793;
};
struct f_task_waits_493fr { int dummy;
 P917 elems_492;
 rstr result_;
 P917 e_1794;
 P910 r_1795;
};
struct f_await_tasks_495fr { int dummy;
 P917 elems_494;
 rstr w_1796;
};
struct f_capsule_elements_497fr { int dummy;
 P917 elems_496;
 P917 e_1797;
};
struct f_declare_labels_499fr { int dummy;
 P917 elems_498;
 P917 e_1798;
 P917 l_1799;
 P942 x_1800;
};
struct f_start_labels_500fr { int dummy;
 P942 x_1802;
};
struct f_goto_label_502fr { int dummy;
 rstr *name_501;
 P942 result_;
 P942 x_1803;
};
struct f_has_return_504fr { int dummy;
 P917 e_503;
 int result_;
 P917 x_1804;
};
struct f_capsule_body_506fr { int dummy;
 P917 elems_505;
 P910 saved_ret_1805;
 P910 saved_flag_1806;
 rt_int saved_frames_1807;
 P917 e_1808;
 int stmt_1809;
};
struct f_body_elements_508fr { int dummy;
 P917 elems_507;
};
struct f_gen_body_510fr { int dummy;
 P917 elems_509;
 P921 saved_1810;
 P942 saved_gotos_1811;
 rstr xu_1812;
};
struct f_open_unhandled_512fr { int dummy;
 P917 elems_511;
 rstr result_;
 P917 e_1813;
 P910 conds_1814;
 rstr f_1815;
};
struct f_close_unhandled_514fr { int dummy;
 rstr *xu_513;
 rt_int i_1816;
 rstr f_1817;
};
struct f_pop_frames_516fr { int dummy;
 rt_int upto_515;
 rt_int i_1818;
 P921 c_1819;
};
struct f_push_cleanup_518fr { int dummy;
 rstr *s_517;
 P921 c_1820;
};
struct f_pop_cleanup_519fr { int dummy;
};
struct f_gen_statement_521fr { int dummy;
 P917 s_520;
 P910 label_1822;
 P917 gl_1823;
 P942 x_1824;
 P942 x_1827;
};
struct f_st_assign_523fr { int dummy;
 P917 s_522;
 P910 lv_1828;
 P923 t_1829;
 P923 vt_1830;
 P919 c_1831;
 int ro_1832;
 rstr lo_1833;
 rstr hi_1834;
 rstr v_1835;
 rstr lo_1836;
 rstr hi_1837;
 rstr v_1838;
 rstr v_1839;
};
struct f_st_call_525fr { int dummy;
 P917 s_524;
 P917 c_1840;
 P923 t_1841;
 P917 x_1842;
};
struct f_st_if_527fr { int dummy;
 P917 s_526;
 P917 a_1843;
 int first_1844;
 P923 t_1845;
 int taken_1846;
 int ok_1847;
 P936 mv_1848;
 rstr c_1849;
};
struct f_manifest_case_529fr { int dummy;
 P917 s_528;
 int result_;
 int ok_1850;
 P936 sv_1851;
 P917 a_1852;
 P917 lab_1853;
 P936 lo_1854;
 P936 hi_1855;
};
struct f_st_case_531fr { int dummy;
 P917 s_530;
 P923 st_1856;
 P923 vt_1857;
 int first_1858;
 P917 a_1859;
};
struct f_st_case2_533fr { int dummy;
 P917 s_532;
 P923 st_1860;
 P923 vt_1861;
 int first_1862;
 P917 a_1863;
 rstr sel_1864;
 rstr tmp_1865;
 P917 lab_1866;
 P910 conds_1867;
 rstr v_1868;
 rstr lo_1869;
 rstr hi_1870;
 rstr lo_1871;
 rstr hi_1872;
};
struct f_user_for_537fr { int dummy;
 P917 s_534;
 P923 t_535;
 P919 c_536;
 P927 y_1873;
 P921 saved_1874;
 P917 p_1875;
 P917 iv_1876;
 P923 st_1877;
 rstr access_1878;
 P910 uv_1879;
 P921 l1_1880;
 P921 l2_1881;
 rstr lo_1884;
 rstr hi_1885;
};
struct f_st_repeat_539fr { int dummy;
 P917 s_538;
 P923 t_1886;
 P919 c_1887;
 rstr cond_1888;
 rstr access_1889;
 rstr lov_1890;
 rstr hiv_1891;
 rstr it_1892;
 P927 y_1893;
};
struct f_st_exit_541fr { int dummy;
 P917 s_540;
 P942 x_1894;
};
struct f_st_return_543fr { int dummy;
 P917 s_542;
 P923 vt_1895;
 rstr v_1896;
};
struct f_result_checked_547fr { int dummy;
 P923 t_544;
 P919 c_545;
 rstr *v_546;
 rstr result_;
};
struct f_exc_id_550fr { int dummy;
 rstr *name_548;
 rt_int line_549;
 rstr result_;
 P927 y_1897;
};
struct f_st_guard_552fr { int dummy;
 P917 s_551;
 P917 h_1898;
 int first_1899;
 P921 hv_1900;
 rstr f_1901;
 rstr x_1902;
 P917 h1_1904;
 P921 seen_1905;
 P917 n1_1906;
 P917 n_1907;
 P910 conds_1908;
};
struct f_st_alloc_554fr { int dummy;
 P917 s_553;
 P910 lv_1909;
 P923 t_1910;
 P923 target_1911;
 P923 vt_1912;
 P919 c_1913;
 P919 tc_1914;
 int ro_1915;
 P917 d_1916;
 P917 p_1917;
 P917 a_1918;
 rstr tcn_1919;
 rstr cell_1920;
 rstr fn_1921;
 rstr v_1922;
};
struct f_act_ref_556fr { int dummy;
 P917 e_555;
 rstr result_;
 P910 lv_1923;
 P923 t_1924;
 P919 c_1925;
 int ro_1926;
 rstr v_1927;
};
struct f_st_create_558fr { int dummy;
 P917 s_557;
 P927 y_1928;
 P929 pm_1929;
 P917 a_1930;
 P910 lv_1931;
 P923 lt_1932;
 P923 vt_1933;
 P919 lc_1934;
 int ro_1935;
 P923 at_1936;
 P919 ac_1937;
 int aro_1938;
 P910 act_1939;
 rstr nf_1940;
 P910 link_1941;
 rt_int i_1942;
 rstr v_1946;
};
struct f_hidden_var_562fr { int dummy;
 rstr *name_559;
 P923 t_560;
 rstr *place_561;
 P927 y_1947;
};
struct f_user_create_568fr { int dummy;
 P917 s_563;
 P927 y_564;
 rstr *uv_565;
 P923 ut_566;
 rstr *nf_567;
 P923 t_1948;
 P940 saved_1949;
 P940 hook_1950;
 P917 un_1951;
 rstr hn_1952;
 rstr aa_1953;
 rstr uname_1954;
 rstr aname_1955;
 P917 start_1956;
 P917 an_1957;
};
struct f_wait_alt_573fr { int dummy;
 P917 inv_569;
 rstr *arr_570;
 rt_int i_571;
 int mixed_572;
 rstr result_;
 P910 lv_1958;
 P923 t_1959;
 P923 vt_1960;
 P919 c_1961;
 int ro_1962;
 P917 fn_1963;
 P917 args_1964;
 rstr slot_1965;
 P910 dv_1966;
 P923 dt_1967;
 rstr tmp_1968;
 rstr v_1969;
 rstr v_1970;
};
struct f_builtin_wait_575fr { int dummy;
 P917 inv_574;
 int result_;
 P910 lv_1971;
 P923 t_1972;
 P919 c_1973;
 int ro_1974;
 P940 saved_1975;
 int ok_1976;
};
struct f_wait_op_580fr { int dummy;
 P917 inv_576;
 rstr *op_577;
 rstr *q_578;
 int is_stmt_579;
 rstr result_;
 P917 x_1979;
 P917 f_1980;
 P917 qn_1981;
 P923 t_1982;
 rstr r_1983;
};
struct f_user_wait_585fr { int dummy;
 P917 s_581;
 rstr *arr_582;
 rstr *w_583;
 rt_int n_584;
 P917 a_1984;
 rt_int i_1985;
 P910 tests_1986;
 P910 revokes_1987;
 P917 inv_1988;
 P917 st_1989;
 P919 c_1990;
 P923 qt_1991;
 rstr qname_1992;
 P927 y_1993;
 rstr access_1994;
};
struct f_st_wait_587fr { int dummy;
 P917 s_586;
 P917 a_1995;
 rt_int n_1996;
 int first_1997;
 P940 inits_1998;
 int user_1999;
 rstr arr_2000;
 rstr w_2001;
 P917 inv_2002;
 P917 inv_2003;
 P910 conds_2004;
 rt_int i_2005;
};
struct f_call_node_591fr { int dummy;
 rstr *name_588;
 P917 arg_589;
 rt_int line_590;
 P917 result_;
 P917 x_2009;
 P917 f_2010;
};
struct f_user_region_593fr { int dummy;
 P917 s_592;
 P923 t_2011;
 rstr f_2012;
 rstr lock_2013;
 rstr unlock_2014;
};
struct f_st_region_595fr { int dummy;
 P917 s_594;
 P910 lv_2015;
 P923 t_2016;
 P919 c_2017;
 int ro_2018;
 rstr lk_2019;
 rstr f_2020;
};
struct f_gparam_598fr { int dummy;
 P917 g_596;
 rstr *name_597;
 P917 result_;
 P917 p_2021;
};
struct f_bind_sym_600fr { int dummy;
 P917 p_599;
 P927 result_;
 P927 y_2022;
};
struct f_same_binds_603fr { int dummy;
 P927 a_601;
 P927 b_602;
 int result_;
 P927 x_2023;
 P927 y_2024;
};
struct f_same_binding_606fr { int dummy;
 P927 a_604;
 P927 b_605;
 int result_;
};
struct f_tt_binds_611fr { int dummy;
 P917 gd_607;
 P917 formals_608;
 P917 actuals_609;
 rt_int line_610;
 P927 result_;
 P917 f_2025;
 P917 a_2026;
 P927 binds_2027;
 P919 c_2028;
 P923 at_2029;
 P917 p_2030;
 P927 b_2031;
 P917 st_2032;
 int ok_2033;
 int ok_2034;
};
struct f_type_allowed_615fr { int dummy;
 P923 t_612;
 P917 items_613;
 P927 binds_614;
 int result_;
 P917 it_2035;
 P923 b_2036;
 rstr w_2037;
 P919 c_2038;
};
struct f_resolve_in_binds_619fr { int dummy;
 P917 st_616;
 P927 binds_617;
 P919 *c_618;
 P919 c_618v;
 P923 result_;
 P927 b_2039;
 P923 t_2040;
 P927 z_2041;
};
struct f_pick_operation_626fr { int dummy;
 rt_int kind_620;
 rstr *name_621;
 P917 sig_622;
 P917 res_623;
 P927 binds_624;
 rt_int line_625;
 P927 result_;
 P927 y_2042;
 P919 c_2043;
 rt_int want_2044;
 rt_int pass_2045;
 int ok_2049;
 P917 s_2050;
 P929 pm_2051;
};
struct f_kind_word_628fr { int dummy;
 rt_int kind_627;
 rstr result_;
};
struct f_need_binds_632fr { int dummy;
 P917 gd_629;
 P927 binds_630;
 rt_int line_631;
 P927 result_;
 P917 it_2052;
 P927 r_2053;
 int found_2054;
 P927 y_2055;
 P927 z_2056;
};
struct f_generic_use_634fr { int dummy;
 P917 st_633;
 int result_;
};
struct f_infer_from_639fr { int dummy;
 P917 gd_635;
 P917 pat_636;
 P923 t_637;
 P927 known_638;
 P927 result_;
 P927 binds_2057;
 P917 e_2058;
 P917 tp_2059;
 P910 nm_2060;
 P927 q_2061;
 int have_2062;
 P927 g_2063;
 P927 b_2064;
};
struct f_instantiate_type_645fr { int dummy;
 P927 g_640;
 P917 tt_641;
 P917 args_642;
 P919 *c_643;
 P919 c_643v;
 rt_int line_644;
 P923 result_;
 P917 gd_2065;
 P917 pat_2066;
 P927 binds_2067;
 P927 inst_2068;
 P923 t_2069;
 P944 saved_caps_2070;
 P931 saved_env_2071;
 rt_int saved_gdepth_2072;
 P927 b_2073;
 P927 y_2074;
 P919 yc_2075;
};
struct f_instantiate_650fr { int dummy;
 P927 g_646;
 P917 tt_647;
 P917 args_648;
 rt_int line_649;
 P927 result_;
 P917 gd_2077;
 P917 pat_2078;
 P927 binds_2079;
 P917 f_2080;
 P917 a_2081;
 P917 fp_2082;
 P927 inst_2083;
 P923 at_2084;
 P919 c_2085;
 P934 saved_fctx_2086;
 int saved_in_2087;
 rt_int saved_level_2088;
 P927 saved_sym_2089;
 P940 saved_code_2090;
 P931 saved_env_2091;
 rt_int saved_gdepth_2092;
 rstr v_2093;
 int known_2094;
 P927 q_2095;
 P927 b_2096;
 rstr v_2097;
 P927 b_2098;
};
struct f_access_of_652fr { int dummy;
 P927 y_651;
 rstr result_;
 P910 p_2099;
 rt_int i_2100;
};
struct f_import_of_655fr { int dummy;
 P917 l_653;
 rstr *name_654;
 P917 result_;
 P917 p_2104;
};
struct f_check_import_658fr { int dummy;
 P927 y_656;
 rt_int line_657;
 int result_;
 P934 c_2105;
 int ro_2106;
 P917 imp_2107;
};
struct f_c_ident_660fr { int dummy;
 rstr *s_659;
 rstr result_;
 P910 r_2108;
 rt_int i_2109;
};
struct f_cell_deref_663fr { int dummy;
 P923 t_661;
 rstr *p_662;
 rstr result_;
};
struct f_deref_666fr { int dummy;
 rstr *base_664;
 P923 t_665;
 rstr result_;
};
struct f_is_lvalue_668fr { int dummy;
 P917 e_667;
 int result_;
 P927 y_2113;
};
struct f_lvalue_674fr { int dummy;
 P917 e_669;
 P910 *code_670;
 P910 code_670v;
 P923 *t_671;
 P923 t_671v;
 P919 *c_672;
 P919 c_672v;
 int *ro_673;
 int ro_673v;
 P910 base_2114;
 P923 bt_2115;
 P919 bc_2116;
 P927 y_2117;
};
struct f_select_on_682fr { int dummy;
 rstr *base_675;
 P923 bt_676;
 P917 e_677;
 int *ro_678;
 P910 *code_679;
 P910 code_679v;
 P923 *t_680;
 P923 t_680v;
 P919 *c_681;
 P919 c_681v;
 P917 p_2118;
 P919 pc_2119;
 P917 p_2120;
 P925 f_2121;
 rt_int i_2122;
 rstr fn_2123;
 P925 f_2124;
};
struct f_has_call_684fr { int dummy;
 rstr *s_683;
 int result_;
 rt_int i_2125;
};
struct f_need_slice_686fr { int dummy;
 P923 t_685;
 rstr c_2129;
 rstr n_2130;
 P921 l_2131;
};
struct f_ix_690fr { int dummy;
 rstr *i_687;
 rstr *lo_688;
 rstr *hi_689;
 rstr result_;
};
struct f_index_on_699fr { int dummy;
 rstr *base_691;
 P923 bt_692;
 P917 e_693;
 int *ro_694;
 int lv_695;
 P910 *code_696;
 P910 code_696v;
 P923 *t_697;
 P923 t_697v;
 P919 *c_698;
 P919 c_698v;
 P917 a_2133;
 P923 it_2134;
 rstr lo_2135;
 rstr hi_2136;
 P910 off_2137;
 rt_int k_2138;
 P910 b_2139;
 P910 pre_2140;
 rstr i_2141;
 rstr l_2142;
 rstr h_2143;
 rstr lo_2144;
 rstr hi_2145;
 rstr i_2146;
};
struct f_own_attribute_701fr { int dummy;
 P917 e_700;
 int result_;
 P940 saved_2147;
 P923 bt_2148;
 int ok_2149;
 rstr base_2152;
 P917 p_2153;
 P925 f_2154;
};
struct f_gexpr_705fr { int dummy;
 P917 e_702;
 P923 want_703;
 P923 *t_704;
 P923 t_704v;
 rstr result_;
 rt_int k_2155;
 P910 code_2156;
 P919 c_2157;
 int ro_2158;
 P923 bt_2159;
 P919 ctx_2160;
 P910 r_2161;
 rt_int i_2162;
 rt_int pos_2166;
 rt_int i_2167;
 P927 y_2168;
 int ro_2169;
 P917 call_2170;
 P917 fname_2171;
 rstr a_2172;
 rstr a_2173;
 rstr a_2174;
 P917 nm_2175;
 P927 y_2176;
 rstr base_2177;
 rstr base_2178;
};
struct f_resolved_708fr { int dummy;
 P917 e_706;
 P923 *t_707;
 P923 t_707v;
 rstr result_;
 P919 c_2179;
 P923 vt_2180;
 P927 y_2181;
 P917 tt_2182;
 P917 call_2183;
 P917 f_2184;
 P917 fname_2185;
 rstr v_2186;
};
struct f_gexpr_in_713fr { int dummy;
 P917 e_709;
 P923 want_710;
 P919 c_711;
 P923 *t_712;
 P923 t_712v;
 rstr result_;
};
struct f_ascii_lit_715fr { int dummy;
 int ch_714;
 rstr result_;
 P917 l_2187;
 rt_int i_2188;
};
struct f_octal_717fr { int dummy;
 rt_int n_716;
 rstr result_;
 rstr r_2192;
};
struct f_str_cat_part_719fr { int dummy;
 P923 t_718;
 P923 result_;
};
struct f_peek_type_721fr { int dummy;
 P917 e_720;
 P923 result_;
 P940 saved_2193;
 P923 t_2194;
 rstr v_2197;
};
struct f_set_operands_724fr { int dummy;
 P917 e_722;
 P923 want_723;
 P923 result_;
 P923 t_2198;
};
struct f_user_dot_726fr { int dummy;
 P917 e_725;
 P917 result_;
 P917 arg_2199;
};
struct f_user_subscript_728fr { int dummy;
 P917 e_727;
 P917 result_;
 P910 name_2200;
 P917 args_2201;
 P917 tail_2202;
 P917 a_2203;
};
struct f_op_call_732fr { int dummy;
 rstr *name_729;
 P917 args_730;
 rt_int line_731;
 P917 result_;
 P917 call_2204;
 P917 f_2205;
};
struct f_derived_relation_734fr { int dummy;
 P917 e_733;
 P917 result_;
 P917 l_2206;
 P917 r_2207;
 int has_eq_2208;
 int has_lt_2209;
};
struct f_rel_node_739fr { int dummy;
 rstr *op_735;
 P917 a_736;
 P917 b_737;
 rt_int line_738;
 P917 result_;
};
struct f_rel_not_742fr { int dummy;
 P917 x_740;
 rt_int line_741;
 P917 result_;
 P917 n_2210;
};
struct f_copy_node_744fr { int dummy;
 P917 e_743;
 P917 result_;
 P917 x_2211;
};
struct f_wrap_apply_746fr { int dummy;
 P917 e_745;
 P917 result_;
 P917 x_2213;
};
struct f_c_string_748fr { int dummy;
 rstr *s_747;
 rstr result_;
 rt_int n_2214;
 rt_int i_2215;
 rstr r_2219;
 rt_int j_2220;
 rt_int i_2221;
};
struct f_enum_type_of_751fr { int dummy;
 rstr *lit_749;
 rt_int line_750;
 P923 result_;
 P927 y_2225;
 P919 c_2226;
 P917 st_2227;
};
struct f_ptr_attribute_753fr { int dummy;
 P917 e_752;
 int result_;
 P910 lv_2228;
 P923 t_2229;
 P919 c_2230;
 int ro_2231;
 P917 p_2232;
 P940 saved_2233;
};
struct f_attribute_756fr { int dummy;
 P917 e_754;
 P923 *t_755;
 P923 t_755v;
 rstr result_;
 P923 bt_2234;
 P919 c_2235;
 P910 base_2236;
 P917 sub_2237;
 rstr name_2238;
 P917 p_2239;
 P917 a_2240;
 P919 pc_2241;
 rstr v_2242;
 P917 p_2243;
 P917 a_2244;
 P923 pt_2245;
 rstr v_2246;
};
struct f_subtype_compare_761fr { int dummy;
 P917 sa_757;
 P917 sb_758;
 rstr *op_759;
 rt_int line_760;
 rstr result_;
 P919 ca_2247;
 P919 cb_2248;
 P923 ta_2249;
 P923 tb_2250;
 P910 r_2251;
 rstr yes_2252;
 rstr no_2253;
 rt_int k_2254;
 P917 a_2258;
 P917 b_2259;
 P923 at_2260;
 P923 bt2_2261;
 rstr x_2262;
 rstr y_2263;
};
struct f_float_prec_763fr { int dummy;
 P919 c_762;
 rstr result_;
};
struct f_file_attribute_769fr { int dummy;
 P917 e_764;
 P923 bt_765;
 P919 c_766;
 P910 base_767;
 P923 *t_768;
 P923 t_768v;
 rstr result_;
};
struct f_gbinop_773fr { int dummy;
 P917 e_770;
 P923 want_771;
 P923 *t_772;
 P923 t_772v;
 rstr result_;
 P910 op_2264;
 P923 ta_2265;
 P923 tb_2266;
 P923 hint_2267;
 P927 uy_2268;
 P917 l_2269;
 P917 r_2270;
 P917 call_2271;
 P917 fname_2272;
 rstr s_2273;
 rstr a_2274;
 rstr a_2275;
 rstr b_2276;
 rstr a_2277;
 rstr b_2278;
 P923 at_2279;
 rstr a_2280;
 rstr b_2281;
 P923 wa_2282;
 P923 wb_2283;
 P923 ws_2284;
 P923 ce_2285;
 rstr a_2286;
 rstr b_2287;
 rstr dummy_2288;
 rstr a_2289;
 rstr b_2290;
 P923 ct_2291;
 rstr a_2292;
 rstr b_2293;
};
struct f_constructor_778fr { int dummy;
 P917 e_774;
 P923 want_775;
 P919 ctx_776;
 P923 *t_777;
 P923 t_777v;
 rstr result_;
 P917 it_2294;
 P925 f_2295;
 P923 vt_2296;
 P910 s_2297;
 rstr v_2298;
 rt_int i_2299;
 rstr tmp_2300;
 rstr v_2301;
 rstr tmp_2302;
 P910 parts_2303;
 P917 k_2304;
 P910 shared_2305;
 rstr v_2306;
 rstr v_2307;
};
struct f_comp_value_782fr { int dummy;
 P923 t_779;
 P919 c_780;
 rstr *v_781;
 rstr result_;
};
struct f_has_at_784fr { int dummy;
 rstr *s_783;
 int result_;
 rt_int i_2308;
};
struct f_set_elem_787fr { int dummy;
 P923 st_785;
 rstr *v_786;
 rstr result_;
};
struct f_array_cons_792fr { int dummy;
 P917 e_788;
 P923 at_789;
 P919 ctx_790;
 P923 *t_791;
 P923 t_791v;
 rstr result_;
 rstr tmp_2312;
 P910 parts_2313;
 P917 it_2314;
 int positional_2315;
 rt_int k_2316;
 P910 lo_2320;
 P910 hi_2321;
};
struct f_fill_items_798fr { int dummy;
 P917 items_793;
 P923 at_794;
 rstr *tmp_795;
 P921 prefix_796;
 rt_int dim_797;
 rstr result_;
 P917 it_2322;
 rt_int pos_2323;
 P910 r_2324;
 P923 vt_2325;
 rstr v_2326;
 P917 k_2327;
 rt_int d_2328;
 P921 pre_2329;
 P910 loops_2330;
 P910 ends_2331;
 rstr v_2332;
 rstr xv_2333;
 P917 k_2334;
 rstr xv_2335;
 rstr v_2336;
};
struct f_e_line_800fr { int dummy;
 P917 e_799;
 rt_int result_;
};
struct f_add_line_803fr { int dummy;
 P921 l_801;
 rstr *s_802;
 P921 result_;
 P921 r_2337;
 P921 tail_2338;
 P921 x_2339;
 P921 p_2340;
};
struct f_item_value_808fr { int dummy;
 P917 e_804;
 P923 at_805;
 rt_int line_806;
 P923 *vt_807;
 P923 vt_807v;
 rstr result_;
 rstr v_2343;
};
struct f_key_loop_813fr { int dummy;
 P917 k_809;
 P923 at_810;
 rt_int d_811;
 rstr *xv_812;
 rstr result_;
 P923 it_2344;
 rstr lo_2345;
 rstr hi_2346;
};
struct f_store_at_818fr { int dummy;
 P923 at_814;
 rstr *tmp_815;
 P921 xs_816;
 rt_int n_817;
 rstr result_;
 P910 off_2347;
 P921 x_2348;
 rt_int k_2349;
 rstr l_2350;
 rstr h_2351;
};
struct f_fits_821fr { int dummy;
 P927 y_819;
 P917 args_820;
 int result_;
 P917 a_2352;
 P929 pm_2353;
 P923 t_2354;
 P940 saved_2355;
 int ok_2356;
 P910 lv_2357;
 P919 lc_2358;
 int ro_2359;
 rstr v_2362;
};
struct f_resolve_overload_827fr { int dummy;
 rstr *name_822;
 P917 tt_823;
 P917 args_824;
 int is_stmt_825;
 rt_int line_826;
 P927 result_;
 P927 y_2363;
 P927 first_2364;
 rt_int n_2365;
 rt_int pass_2366;
};
struct f_tt_fits_830fr { int dummy;
 P927 y_828;
 P917 tt_829;
 int result_;
 P917 f_2370;
 P917 a_2371;
 P940 saved_2372;
 int ok_2373;
 P919 fc_2376;
 P919 ac_2377;
 P917 fst_2378;
 P923 ft_2379;
 P923 at_2380;
 P917 ast_2381;
};
struct f_overload_chain_833fr { int dummy;
 rstr *name_831;
 rt_int pass_832;
 P927 result_;
};
struct f_is_builtin_835fr { int dummy;
 rstr *n_834;
 int result_;
};
struct f_is_low_level_837fr { int dummy;
 rstr *n_836;
 int result_;
};
struct f_me_high_841fr { int dummy;
 P917 tt_838;
 rt_int line_839;
 P923 *t_840;
 P923 t_840v;
 rstr result_;
 P919 c_2382;
};
struct f_type_tag_843fr { int dummy;
 P923 t_842;
 rstr result_;
};
struct f_lock_ref_846fr { int dummy;
 P917 e_844;
 rstr *name_845;
 rstr result_;
 P910 lv_2383;
 P923 t_2384;
 P919 c_2385;
 int ro_2386;
};
struct f_user_op_849fr { int dummy;
 rstr *op_847;
 P917 args_848;
 P927 result_;
 P927 y_2387;
 rt_int pass_2388;
};
struct f_gcall_853fr { int dummy;
 P917 e_850;
 int is_stmt_851;
 P923 *t_852;
 P923 t_852v;
 rstr result_;
 P917 gd_2392;
 P917 fn_2393;
 P917 tt_2394;
 P927 y_2395;
 P910 args_2396;
 P917 a_2397;
 P929 pm_2398;
 P923 lt_2399;
 P923 vt_2400;
 P910 lv_2401;
 P919 lc_2402;
 int ro_2403;
 P927 alt_2404;
 P944 cr_2405;
 rt_int i_2406;
 rstr v_2410;
 rstr ct_2411;
 rstr v_2412;
 rstr chk_2413;
};
struct f_requires_855fr { int dummy;
 P927 y_854;
 P921 result_;
 P917 imp_2414;
};
struct f_add_req_858fr { int dummy;
 P927 y_856;
 rstr *name_857;
 P921 l_2415;
};
struct f_require_calls_861fr { int dummy;
 P927 y_859;
 P917 e_860;
 P917 x_2417;
 P917 callee_2418;
 P927 z_2419;
 P921 l_2420;
};
struct f_declared_in_864fr { int dummy;
 P917 elems_862;
 rstr *name_863;
 int result_;
 P917 e_2421;
};
struct f_check_requires_867fr { int dummy;
 P927 y_865;
 rt_int line_866;
 P921 l_2422;
 P927 z_2423;
};
struct f_act_delay_args_869fr { int dummy;
 P917 args_868;
 rstr result_;
 P923 at_2424;
 P923 t1_2425;
 rstr a_2426;
 rstr v_2427;
 rstr v_2428;
};
struct f_same_subtypes_872fr { int dummy;
 P917 gd_870;
 P917 args_871;
 rstr result_;
 P917 p_2429;
 P910 r_2430;
 P917 fp_2431;
 P917 a_2432;
 P910 flo_2433;
 P910 fhi_2434;
 P923 st_2435;
 P919 c_2436;
 P910 base_2437;
 P910 lo_2438;
 P910 hi_2439;
};
struct f_mailbox_low_877fr { int dummy;
 rstr *name_873;
 P917 args_874;
 rt_int line_875;
 P923 *t_876;
 P923 t_876v;
 rstr result_;
 P910 qv_2440;
 P910 mv_2441;
 P910 dv_2442;
 P923 qt_2443;
 P923 mt_2444;
 P923 dt_2445;
 P923 at_2446;
 P919 c_2447;
 int ro_2448;
 int send_2449;
 rstr v_2450;
};
struct f_exponent_want_880fr { int dummy;
 rstr *op_878;
 P923 ta_879;
 P923 result_;
};
struct f_file_ref_884fr { int dummy;
 P917 e_881;
 int text_882;
 rt_int line_883;
 rstr result_;
 P923 t_2451;
 rstr f_2452;
};
struct f_text_file_886fr { int dummy;
 P923 t_885;
 int result_;
};
struct f_conversion_891fr { int dummy;
 P917 tt_887;
 P917 args_888;
 rt_int line_889;
 P923 *t_890;
 P923 t_890v;
 rstr result_;
 P919 c_2453;
 P923 at_2454;
 P923 target_2455;
 rstr a_2456;
 P910 r_2457;
};
struct f_float_digits_893fr { int dummy;
 P917 e_892;
 rstr result_;
 P910 lv_2458;
 P923 t_2459;
 P919 c_2460;
 int ro_2461;
 rt_int n_2462;
 int lead_2463;
 rt_int i_2464;
 P940 saved_2468;
};
struct f_enum_names_895fr { int dummy;
 P923 t_894;
 rstr result_;
 P917 l_2469;
 P910 r_2470;
};
struct f_actual_bounds_899fr { int dummy;
 P923 ft_896;
 P923 t_897;
 P919 c_898;
 rstr result_;
};
struct f_builtin_906fr { int dummy;
 rstr *name_900;
 P917 tt_901;
 P917 args_902;
 rt_int line_903;
 int is_stmt_904;
 P923 *t_905;
 P923 t_905v;
 rstr result_;
 P923 at_2471;
 rt_int n_2472;
 rstr a_2473;
 rstr a_2474;
 rstr a_2475;
 rstr a_2476;
 rstr a_2477;
 rstr a_2478;
 rstr a_2479;
 rstr n1_2480;
 rstr m1_2481;
 rstr a_2482;
 rstr f_2483;
 rstr a_2484;
 rstr a_2485;
 P923 ft_2486;
 rstr f_2487;
 P910 lv_2488;
 P919 lc_2489;
 int ro_2490;
 rstr a_2491;
 P910 lv_2492;
 P919 lc_2493;
 int ro_2494;
 rstr f_2495;
 P910 lv_2496;
 P919 lc_2497;
 int ro_2498;
 rstr f_2499;
 rstr nm_2500;
 rstr st_2501;
 rstr f_2502;
 rstr d_2503;
 rstr f_2504;
 rstr v_2505;
 rstr a_2506;
 rstr b_2507;
 P910 lv_2508;
 P910 dv_2509;
 P919 lc_2510;
 int ro_2511;
 P923 mt_2512;
 P923 dt_2513;
 rstr v_2514;
 P910 lv_2515;
 P919 lc_2516;
 int ro_2517;
 P923 mt_2518;
 P910 lv_2519;
 P910 dv_2520;
 P910 bv_2521;
 P919 lc_2522;
 int ro_2523;
 P923 mt_2524;
 P923 dt_2525;
 P923 bt_2526;
 rstr v_2527;
 rstr v_2528;
 rstr v_2529;
 rstr v_2530;
 rstr a_2531;
 P910 bv_2532;
 P919 bc_2533;
 int ro_2534;
 P923 bt_2535;
 rstr l_2536;
 P910 pv_2537;
 P919 pc_2538;
 int ro_2539;
 P923 pt_2540;
 rstr dev_2541;
 rstr cmd_2542;
 P910 dv_2543;
 P919 dc_2544;
 int ro_2545;
 P923 dt_2546;
};
struct f_translate_908fr { int dummy;
 P917 units_907;
 P917 u_2547;
 P917 l_2549;
 rstr w_2550;
};
struct f_print_program_909fr { int dummy;
};
struct Pc911 { rt_int p_n; rstr all; };
struct Pc915 { rt_int p_n; A916 all; };
struct Pc932 { rt_int p_n; A933 all; };
static void as_R947(R947 *d, R947 s);
static R947 cp_R947(R947 s);
static int eq_R947(R947 a, R947 b);
static void as_R945(R945 *d, R945 s);
static R945 cp_R945(R945 s);
static int eq_R945(R945 a, R945 b);
static void as_R943(R943 *d, R943 s);
static R943 cp_R943(R943 s);
static int eq_R943(R943 a, R943 b);
static void as_R941(R941 *d, R941 s);
static R941 cp_R941(R941 s);
static int eq_R941(R941 a, R941 b);
static void as_R939(R939 *d, R939 s);
static R939 cp_R939(R939 s);
static int eq_R939(R939 a, R939 b);
static void as_R937(R937 *d, R937 s);
static R937 cp_R937(R937 s);
static int eq_R937(R937 a, R937 b);
static void as_R935(R935 *d, R935 s);
static R935 cp_R935(R935 s);
static int eq_R935(R935 a, R935 b);
static void as_A933(A933 *d, A933 s);
static A933 cp_A933(A933 s);
static int eq_A933(A933 a, A933 b);
static void as_R930(R930 *d, R930 s);
static R930 cp_R930(R930 s);
static int eq_R930(R930 a, R930 b);
static void as_R928(R928 *d, R928 s);
static R928 cp_R928(R928 s);
static int eq_R928(R928 a, R928 b);
static void as_R926(R926 *d, R926 s);
static R926 cp_R926(R926 s);
static int eq_R926(R926 a, R926 b);
static void as_R924(R924 *d, R924 s);
static R924 cp_R924(R924 s);
static int eq_R924(R924 a, R924 b);
static void as_R922(R922 *d, R922 s);
static R922 cp_R922(R922 s);
static int eq_R922(R922 a, R922 b);
static void as_R920(R920 *d, R920 s);
static R920 cp_R920(R920 s);
static int eq_R920(R920 a, R920 b);
static void as_R918(R918 *d, R918 s);
static R918 cp_R918(R918 s);
static int eq_R918(R918 a, R918 b);
static void as_A916(A916 *d, A916 s);
static A916 cp_A916(A916 s);
static int eq_A916(A916 a, A916 b);
static void as_R913(R913 *d, R913 s);
static R913 cp_R913(R913 s);
static int eq_R913(R913 a, R913 b);
static P910 f_mk_3(rstr *s_2);
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
static P940 f_new_buffer_24(void);
static void f_put_27(P940 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P940 b_30);
static void f_splice_34(P940 a_32, P940 b_33);
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
static P917 f_nn_61(rt_int kind_59, rt_int line_60);
static void f_append_65(P917 *head_62, P917 *tail_63, P917 x_64);
static rt_int f_list_len_67(P917 l_66);
static rt_int f_cur_line_68(void);
static int f_at_kw_70(rstr *w_69);
static int f_at_op_72(rstr *w_71);
static int f_at_kind_74(rt_int k_73);
static rt_int f_kind_at_76(rt_int k_75);
static P910 f_text_at_78(rt_int k_77);
static void f_perror_80(rstr *msg_79);
static int f_accept_kw_82(rstr *w_81);
static int f_accept_op_84(rstr *w_83);
static void f_expect_kw_86(rstr *w_85);
static void f_expect_op_88(rstr *w_87);
static P910 f_expect_id_89(void);
static P917 f_name_node_90(void);
static P917 f_id_list_91(void);
static P917 f_p_subtype_92(void);
static P917 f_constraint_list_93(void);
static P917 f_actual_params_94(void);
static int f_is_type_word_96(rstr *w_95);
static P917 f_actual_tt_97(void);
static P917 f_binop_102(P910 op_98, P917 l_99, P917 r_100, rt_int line_101);
static P917 f_expr_103(void);
static P917 f_expr_and_104(void);
static P917 f_expr_not_105(void);
static int f_is_rel_107(rstr *s_106);
static P917 f_expr_rel_108(void);
static P917 f_expr_add_109(void);
static P917 f_expr_mul_110(void);
static P917 f_expr_pow_111(void);
static P917 f_expr_prefix_112(void);
static P917 f_postfix_113(void);
static P917 f_primary_114(void);
static P917 f_constructor_item_115(void);
static int f_at_body_end_116(void);
static P917 f_body_117(void);
static P917 f_body_element_118(void);
static P917 f_declaration_119(void);
static P917 f_object_decl_120(void);
static P917 f_abbrev_decl_121(void);
static void f_skip_rep_122(void);
static P917 f_type_decl_123(void);
static rt_int f_mode_of_125(rstr *w_124);
static P917 f_formal_params_126(void);
static int f_imports_list_128(P917 owner_127);
static int f_is_definable_130(rstr *w_129);
static P910 f_definable_name_131(void);
static P917 f_subprogram_decl_132(void);
static P917 f_capsule_decl_133(void);
static P917 f_formal_tt_134(void);
static P917 f_generic_decl_135(void);
static P917 f_type_list_136(void);
static P917 f_task_decl_137(void);
static P917 f_expose_decl_138(void);
static int f_is_compound_kw_140(rstr *w_139);
static P917 f_statement_141(void);
static P917 f_unlabeled_statement_142(void);
static P917 f_arm_146(P917 cond_143, P917 b_144, rt_int line_145);
static P917 f_if_stmt_147(void);
static P917 f_case_stmt_148(void);
static P917 f_repeat_stmt_149(void);
static P917 f_guard_stmt_150(void);
static P917 f_program_151(void);
static rt_int f_hash_153(rstr *s_152);
static P927 f_lookup_155(rstr *name_154);
static P927 f_lookup_decl_157(P917 d_156);
static void f_define_160(P927 y_158, rt_int line_159);
static int f_overloadable_162(P927 y_161);
static int f_same_tt_165(P917 a_163, P917 b_164);
static int f_same_signature_168(P929 a_166, P929 b_167);
static void f_open_scope_169(void);
static void f_close_scope_170(void);
static P927 f_new_sym_173(rt_int kind_171, P910 name_172);
static P923 f_new_typ_175(rt_int kind_174);
static P919 f_new_cons_176(void);
static int f_scalar_kind_178(P923 t_177);
static rstr f_bound_ctype_180(P923 t_179);
static rstr f_cbound_183(P919 c_181, rstr *b_182);
static rstr f_clo_185(P919 c_184);
static rstr f_chi_187(P919 c_186);
static rstr f_sub_lo_190(P923 t_188, P919 c_189);
static rstr f_sub_hi_193(P923 t_191, P919 c_192);
static rstr f_raw_storage_196(rstr *name_194, rstr *ct_195);
static P919 f_copy_cons_198(P919 c_197);
static P919 f_freeze_201(P919 c_199, P923 t_200);
static rstr f_checked_205(P923 t_202, P919 c_203, rstr *v_204);
static int f_same_lits_208(P917 a_206, P917 b_207);
static P923 f_str_elem_210(P923 t_209);
static int f_same_213(P923 a_211, P923 b_212);
static P923 f_base_of_215(P923 t_214);
static P919 f_base_cons_218(P923 t_216, P919 c_217);
static rstr f_kind_name_220(P923 t_219);
static void f_check_type_224(P923 got_221, P923 want_222, rt_int line_223);
static rstr f_ctype_226(P923 t_225);
static rstr f_struct_body_228(P923 t_227);
static rstr f_field_decls_230(P923 t_229);
static void f_declare_ctype_232(P923 t_231);
static rstr f_dim_lo_234(rt_int k_233);
static rstr f_dim_hi_236(rt_int k_235);
static rstr f_more_dims_238(P923 t_237);
static rstr f_acnt_241(P923 t_239, rstr *base_240);
static P910 f_cons_lo_244(P919 c_242, rt_int k_243);
static P910 f_cons_hi_247(P919 c_245, rt_int k_246);
static P923 f_idx_type_250(P923 t_248, rt_int k_249);
static void f_init_ascii_251(void);
static P923 f_enum2_254(rstr *a_252, rstr *b_253);
static rt_int f_lit_index_257(P917 lits_255, rstr *name_256);
static P923 f_resolve_subtype_260(P917 st_258, P919 *c_259);
static int f_float_lit_262(P917 e_261);
static void f_tag_constraint_266(P923 t_263, P917 e_264, P919 c_265);
static P923 f_named_subtype_269(P917 st_267, P919 *c_268);
static P923 f_invoke_abbrev_273(P927 y_270, P917 st_271, P919 *c_272);
static void f_apply_constraint_278(P923 t_274, P917 args_275, P919 c_276, rt_int line_277);
static P923 f_value_subtype_282(P917 e_279, P919 *c_280, P910 *base_281);
static P921 f_reverse_pairs_284(P921 l_283);
static P923 f_inquiry_287(P917 st_285, P919 *c_286);
static P917 f_as_subtype_289(P917 e_288);
static P917 f_tt_subtype_294(P910 name_290, P917 tt_291, P917 args_292, rt_int line_293);
static int f_type_name_296(rstr *name_295);
static rstr f_empty_set_298(P923 t_297);
static int f_opened_300(P923 t_299);
static rstr f_replace_all_304(rstr *s_301, rstr *pat_302, rstr *r_303);
static rstr f_subst_306(rstr *s_305);
static P923 f_new_type_310(P927 y_307, P917 st_308, P919 *c_309);
static void f_init_storage_314(rstr *lval_311, P923 t_312, P919 c_313);
static rstr f_init_call_317(P927 y_315, rstr *lval_316);
static int f_needs_fin_319(P923 t_318);
static rstr f_fin_code_322(rstr *lval_320, P923 t_321);
static P923 f_tparam_type_325(P923 t_323, rstr *name_324);
static void f_make_storage_329(rstr *lval_326, P923 t_327, P919 c_328);
static int f_flat_331(P923 t_330);
static rstr f_uninit_value_333(P923 t_332);
static rstr f_init_chk_336(P923 t_334, rstr *v_335);
static rt_int f_manifest_339(P917 e_337, int *ok_338);
static P936 f_mk_mval_342(rt_int kind_340, rt_int i_341);
static rt_int f_ipow_345(rt_int a_343, rt_int b_344);
static P936 f_meval_348(P917 e_346, int *ok_347);
static rstr f_bool_text_350(int b_349);
static rt_int f_bool_i_352(int b_351);
static rstr f_mstr_354(P936 v_353);
static int f_ascii_char_356(rt_int i_355);
static int f_user_defined_358(rstr *op_357);
static rstr f_mcopy_360(P923 t_359);
static int f_composite_362(P923 t_361);
static rstr f_user_call2_368(P927 y_363, rstr *a_364, int lv_a_365, rstr *b_366, int lv_b_367);
static rstr f_user_arg_372(P929 pm_369, rstr *v_370, int lv_371);
static int f_top_level_374(P927 y_373);
static rstr f_assign_code_379(rstr *lval_375, P923 t_376, rstr *v_377, P919 c_378);
static rstr f_copy_code_382(P923 t_380, rstr *v_381);
static rstr f_eq_code_386(P923 t_383, rstr *a_384, rstr *b_385);
static rstr f_elem_assign_390(rstr *lval_387, P923 t_388, rstr *v_389);
static int f_seen_name_393(P921 l_391, rstr *s_392);
static void f_emit_helpers_394(void);
static void f_helper_bodies_396(P923 t_395);
static void f_declare_body_398(P917 elems_397);
static void f_manifest_const_400(P917 d_399);
static int f_exported_404(P917 d_401, rstr *name_402, int *ro_403);
static P927 f_copy_sym_406(P927 y_405);
static void f_gen_capsule_408(P917 d_407);
static void f_capsule_params_412(P917 d_409, P917 args_410, rt_int line_411);
static void f_elaborate_capsule_417(P917 d_413, P927 y_414, P917 args_415, P917 owner_416);
static int f_exports_op_420(P917 d_418, rstr *op_419);
static P910 f_renamed_423(P917 d_421, P927 z_422);
static P927 f_pick_capsule_425(P917 d_424);
static P927 f_capsule_instance_428(P927 g_426, P917 d_427);
static void f_gen_expose_430(P917 d_429);
static void f_finish_ptr_432(P923 t_431);
static P917 f_ptr_args_434(P919 c_433);
static void f_bind_ptr_params_439(P917 formals_435, P917 actuals_436, rstr *cell_437, rt_int line_438);
static void f_alloc_cell_444(P917 s_440, rstr *lv_441, P923 t_442, P919 c_443);
static P919 f_freeze_args_448(P919 c_445, P923 t_446, rt_int line_447);
static void f_ptr_subtype_check_452(P923 t_449, P919 c_450, P917 src_451);
static void f_normal_function_455(P917 d_453, P927 y_454);
static void f_declare_subprogram_457(P917 d_456);
static P927 f_build_subprogram_459(P917 d_458);
static int f_has_pragmat_462(P910 pr_460, rstr *p_461);
static P910 f_suppressing_464(P910 pr_463);
static int f_suppressed_466(rstr *x_465);
static void f_element_468(P917 e_467);
static void f_element1_470(P917 e_469);
static rstr f_storage_473(rstr *name_471, P923 t_472);
static void f_bind_476(P927 y_474, rstr *access_475);
static void f_var_decl_478(P917 d_477);
static void f_open_fin_480(rstr *fc_479);
static void f_close_fins_482(P921 saved_481);
static void f_const_decl_484(P917 d_483);
static void f_subprogram_486(P917 d_485);
static void f_gen_subprogram_489(P917 d_487, P927 y_488);
static rstr f_waits_of_491(P917 d_490);
static rstr f_task_waits_493(P917 elems_492);
static void f_await_tasks_495(P917 elems_494);
static void f_capsule_elements_497(P917 elems_496);
static void f_declare_labels_499(P917 elems_498);
static void f_start_labels_500(void);
static P942 f_goto_label_502(rstr *name_501);
static int f_has_return_504(P917 e_503);
static void f_capsule_body_506(P917 elems_505);
static void f_body_elements_508(P917 elems_507);
static void f_gen_body_510(P917 elems_509);
static rstr f_open_unhandled_512(P917 elems_511);
static void f_close_unhandled_514(rstr *xu_513);
static void f_pop_frames_516(rt_int upto_515);
static void f_push_cleanup_518(rstr *s_517);
static void f_pop_cleanup_519(void);
static void f_gen_statement_521(P917 s_520);
static void f_st_assign_523(P917 s_522);
static void f_st_call_525(P917 s_524);
static void f_st_if_527(P917 s_526);
static int f_manifest_case_529(P917 s_528);
static void f_st_case_531(P917 s_530);
static void f_st_case2_533(P917 s_532);
static void f_user_for_537(P917 s_534, P923 t_535, P919 c_536);
static void f_st_repeat_539(P917 s_538);
static void f_st_exit_541(P917 s_540);
static void f_st_return_543(P917 s_542);
static rstr f_result_checked_547(P923 t_544, P919 c_545, rstr *v_546);
static rstr f_exc_id_550(rstr *name_548, rt_int line_549);
static void f_st_guard_552(P917 s_551);
static void f_st_alloc_554(P917 s_553);
static rstr f_act_ref_556(P917 e_555);
static void f_st_create_558(P917 s_557);
static void f_hidden_var_562(rstr *name_559, P923 t_560, rstr *place_561);
static void f_user_create_568(P917 s_563, P927 y_564, rstr *uv_565, P923 ut_566, rstr *nf_567);
static rstr f_wait_alt_573(P917 inv_569, rstr *arr_570, rt_int i_571, int mixed_572);
static int f_builtin_wait_575(P917 inv_574);
static rstr f_wait_op_580(P917 inv_576, rstr *op_577, rstr *q_578, int is_stmt_579);
static void f_user_wait_585(P917 s_581, rstr *arr_582, rstr *w_583, rt_int n_584);
static void f_st_wait_587(P917 s_586);
static P917 f_call_node_591(rstr *name_588, P917 arg_589, rt_int line_590);
static void f_user_region_593(P917 s_592);
static void f_st_region_595(P917 s_594);
static P917 f_gparam_598(P917 g_596, rstr *name_597);
static P927 f_bind_sym_600(P917 p_599);
static int f_same_binds_603(P927 a_601, P927 b_602);
static int f_same_binding_606(P927 a_604, P927 b_605);
static P927 f_tt_binds_611(P917 gd_607, P917 formals_608, P917 actuals_609, rt_int line_610);
static int f_type_allowed_615(P923 t_612, P917 items_613, P927 binds_614);
static P923 f_resolve_in_binds_619(P917 st_616, P927 binds_617, P919 *c_618);
static P927 f_pick_operation_626(rt_int kind_620, rstr *name_621, P917 sig_622, P917 res_623, P927 binds_624, rt_int line_625);
static rstr f_kind_word_628(rt_int kind_627);
static P927 f_need_binds_632(P917 gd_629, P927 binds_630, rt_int line_631);
static int f_generic_use_634(P917 st_633);
static P927 f_infer_from_639(P917 gd_635, P917 pat_636, P923 t_637, P927 known_638);
static P923 f_instantiate_type_645(P927 g_640, P917 tt_641, P917 args_642, P919 *c_643, rt_int line_644);
static P927 f_instantiate_650(P927 g_646, P917 tt_647, P917 args_648, rt_int line_649);
static rstr f_access_of_652(P927 y_651);
static P917 f_import_of_655(P917 l_653, rstr *name_654);
static int f_check_import_658(P927 y_656, rt_int line_657);
static rstr f_c_ident_660(rstr *s_659);
static rstr f_cell_deref_663(P923 t_661, rstr *p_662);
static rstr f_deref_666(rstr *base_664, P923 t_665);
static int f_is_lvalue_668(P917 e_667);
static void f_lvalue_674(P917 e_669, P910 *code_670, P923 *t_671, P919 *c_672, int *ro_673);
static void f_select_on_682(rstr *base_675, P923 bt_676, P917 e_677, int *ro_678, P910 *code_679, P923 *t_680, P919 *c_681);
static int f_has_call_684(rstr *s_683);
static void f_need_slice_686(P923 t_685);
static rstr f_ix_690(rstr *i_687, rstr *lo_688, rstr *hi_689);
static void f_index_on_699(rstr *base_691, P923 bt_692, P917 e_693, int *ro_694, int lv_695, P910 *code_696, P923 *t_697, P919 *c_698);
static int f_own_attribute_701(P917 e_700);
static rstr f_gexpr_705(P917 e_702, P923 want_703, P923 *t_704);
static rstr f_resolved_708(P917 e_706, P923 *t_707);
static rstr f_gexpr_in_713(P917 e_709, P923 want_710, P919 c_711, P923 *t_712);
static rstr f_ascii_lit_715(int ch_714);
static rstr f_octal_717(rt_int n_716);
static P923 f_str_cat_part_719(P923 t_718);
static P923 f_peek_type_721(P917 e_720);
static P923 f_set_operands_724(P917 e_722, P923 want_723);
static P917 f_user_dot_726(P917 e_725);
static P917 f_user_subscript_728(P917 e_727);
static P917 f_op_call_732(rstr *name_729, P917 args_730, rt_int line_731);
static P917 f_derived_relation_734(P917 e_733);
static P917 f_rel_node_739(rstr *op_735, P917 a_736, P917 b_737, rt_int line_738);
static P917 f_rel_not_742(P917 x_740, rt_int line_741);
static P917 f_copy_node_744(P917 e_743);
static P917 f_wrap_apply_746(P917 e_745);
static rstr f_c_string_748(rstr *s_747);
static P923 f_enum_type_of_751(rstr *lit_749, rt_int line_750);
static int f_ptr_attribute_753(P917 e_752);
static rstr f_attribute_756(P917 e_754, P923 *t_755);
static rstr f_subtype_compare_761(P917 sa_757, P917 sb_758, rstr *op_759, rt_int line_760);
static rstr f_float_prec_763(P919 c_762);
static rstr f_file_attribute_769(P917 e_764, P923 bt_765, P919 c_766, P910 base_767, P923 *t_768);
static rstr f_gbinop_773(P917 e_770, P923 want_771, P923 *t_772);
static rstr f_constructor_778(P917 e_774, P923 want_775, P919 ctx_776, P923 *t_777);
static rstr f_comp_value_782(P923 t_779, P919 c_780, rstr *v_781);
static int f_has_at_784(rstr *s_783);
static rstr f_set_elem_787(P923 st_785, rstr *v_786);
static rstr f_array_cons_792(P917 e_788, P923 at_789, P919 ctx_790, P923 *t_791);
static rstr f_fill_items_798(P917 items_793, P923 at_794, rstr *tmp_795, P921 prefix_796, rt_int dim_797);
static rt_int f_e_line_800(P917 e_799);
static P921 f_add_line_803(P921 l_801, rstr *s_802);
static rstr f_item_value_808(P917 e_804, P923 at_805, rt_int line_806, P923 *vt_807);
static rstr f_key_loop_813(P917 k_809, P923 at_810, rt_int d_811, rstr *xv_812);
static rstr f_store_at_818(P923 at_814, rstr *tmp_815, P921 xs_816, rt_int n_817);
static int f_fits_821(P927 y_819, P917 args_820);
static P927 f_resolve_overload_827(rstr *name_822, P917 tt_823, P917 args_824, int is_stmt_825, rt_int line_826);
static int f_tt_fits_830(P927 y_828, P917 tt_829);
static P927 f_overload_chain_833(rstr *name_831, rt_int pass_832);
static int f_is_builtin_835(rstr *n_834);
static int f_is_low_level_837(rstr *n_836);
static rstr f_me_high_841(P917 tt_838, rt_int line_839, P923 *t_840);
static rstr f_type_tag_843(P923 t_842);
static rstr f_lock_ref_846(P917 e_844, rstr *name_845);
static P927 f_user_op_849(rstr *op_847, P917 args_848);
static rstr f_gcall_853(P917 e_850, int is_stmt_851, P923 *t_852);
static P921 f_requires_855(P927 y_854);
static void f_add_req_858(P927 y_856, rstr *name_857);
static void f_require_calls_861(P927 y_859, P917 e_860);
static int f_declared_in_864(P917 elems_862, rstr *name_863);
static void f_check_requires_867(P927 y_865, rt_int line_866);
static rstr f_act_delay_args_869(P917 args_868);
static rstr f_same_subtypes_872(P917 gd_870, P917 args_871);
static rstr f_mailbox_low_877(rstr *name_873, P917 args_874, rt_int line_875, P923 *t_876);
static P923 f_exponent_want_880(rstr *op_878, P923 ta_879);
static rstr f_file_ref_884(P917 e_881, int text_882, rt_int line_883);
static int f_text_file_886(P923 t_885);
static rstr f_conversion_891(P917 tt_887, P917 args_888, rt_int line_889, P923 *t_890);
static rstr f_float_digits_893(P917 e_892);
static rstr f_enum_names_895(P923 t_894);
static rstr f_actual_bounds_899(P923 ft_896, P923 t_897, P919 c_898);
static rstr f_builtin_906(rstr *name_900, P917 tt_901, P917 args_902, rt_int line_903, int is_stmt_904, P923 *t_905);
static void f_translate_908(P917 units_907);
static void f_print_program_909(void);
static int ex_compile_error_1;
static P914 g_toks_948;
static rt_int g_ntoks_949;
static rt_int g_tpos_950;
static rt_int g_src_line_951;
static P910 g_pending_prag_952;
static P931 g_table_953;
static P931 g_genv_954;
static P927 g_all_insts_955;
static rt_int g_depth_956;
static P927 g_scope_stack_957;
static P923 g_all_types_958;
static rt_int g_serial_959;
static P940 g_out_types_960;
static P940 g_out_helpers_961;
static P940 g_out_protos_962;
static P940 g_out_globals_963;
static P940 g_out_funcs_964;
static P940 g_out_init_965;
static P940 g_out_excs_966;
static P940 g_code_967;
static P940 g_fields_buf_968;
static int g_in_func_969;
static rt_int g_cur_level_970;
static P934 g_fctx_971;
static P944 g_caps_972;
static P946 g_cap_waits_973;
static P921 g_psub_974;
static P910 g_st_field_975;
static P940 g_out_frames_976;
static P940 g_out_roots_977;
static int g_uses_free_978;
static P921 g_fins_979;
static int g_uses_findyn_980;
static P927 g_func_sym_981;
static P919 g_func_rc_982;
static P910 g_cap_ret_983;
static P910 g_cap_rflag_984;
static rt_int g_ret_frames_985;
static rt_int g_gdepth_986;
static P910 g_suppress_987;
static P919 g_cons_ctx_988;
static int g_mark_uninit_989;
static P942 g_exits_990;
static P942 g_gotos_991;
static rt_int g_frames_992;
static P921 g_handlers_993;
static P921 g_cleanups_994;
static rt_int g_trial_995;
static P921 g_mcopies_996;
static P923 g_ty_int_997;
static P923 g_ty_bool_998;
static P923 g_ty_float_999;
static P923 g_ty_ascii_1000;
static P923 g_ty_string_1001;
static P923 g_ty_void_1002;
static P923 g_ty_file_1003;
static P923 g_ty_nil_1004;
static P923 g_ty_lock_1005;
static P923 g_ty_latch_1006;
static P923 g_ty_act_1007;
static P923 g_file_mode_type_1008;
static P923 g_ty_send_st_1009;
static P923 g_ty_receive_st_1010;
static P923 g_ty_text_file_1011;
static P923 g_file_state_type_1012;
static P923 g_file_disp_type_1013;
static P923 g_file_access_type_1014;
static P919 g_no_cons_1015;
static P910 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_1016 = NULL;
{ P910 cell1017 = rt_alloc(sizeof *cell1017);
rt_int pv1018 = ((rt_int)(((*F->s_2)).len));
cell1017->p_n = pv1018;
cell1017->all = rt_str_new(pv1018);
rt_str_assign(&cell1017->all, (*F->s_2));
F->t_1016 = cell1017;
}
F->result_ = F->t_1016;
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
F->r_1019 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_1019, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_1019;
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
F->r_1020 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_1020, (*F->s_14));
{ rt_int lo1022 = ((rt_int)1LL), hi1023 = ((rt_int)(((*F->s_14)).len));
for (rt_int it1024 = lo1022; it1024 <= hi1023; it1024++) {
F->i_1021 = it1024;
if (((65 <= rt_r_echk(rt_str_get(F->r_1020, F->i_1021))) && (rt_r_echk(rt_str_get(F->r_1020, F->i_1021)) <= 90))) {
(*rt_str_at(&F->r_1020, F->i_1021)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_r_echk(rt_str_get(F->r_1020, F->i_1021))) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_1020;
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
F->l_1025 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_1026 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_1025), rt_str(" ", 1)));
{ rt_int lo1028 = ((rt_int)1LL), hi1029 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_1026).len))), ((rt_int)1LL));
for (rt_int it1030 = lo1028; it1030 <= hi1029; it1030++) {
F->i_1027 = it1030;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_1027, rt_sub(rt_add(F->i_1027, ((rt_int)((F->w_1026).len))), ((rt_int)1LL))), F->w_1026)) {
F->result_ = rt_str_cat(F->l_1025, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_1025;
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
g_serial_959 = rt_add(rt_r_ichk(g_serial_959), ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(rt_r_ichk(g_serial_959)));
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
if ((rt_r_ichk(g_trial_995) == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P940 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_1031 = NULL;
{ R941 *cell1032 = rt_alloc(sizeof(R941));
(*cell1032).head = NULL;
(*cell1032).tail = NULL;
F->b_1031 = cell1032;
}
F->result_ = F->b_1031;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P940 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_1033 = NULL;
{ R922 *cell1034 = rt_alloc(sizeof(R922));
(*cell1034).s = NULL;
(*cell1034).next = NULL;
F->l_1033 = cell1034;
}
(*(P921)rt_nil_check(F->l_1033)).s = f_mk_3(&(*F->s_26));
if (((*(P940)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P940)rt_nil_check(F->b_25)).head = F->l_1033;
} else {
(*(P921)rt_nil_check((*(P940)rt_nil_check(F->b_25)).tail)).next = F->l_1033;
}
(*(P940)rt_nil_check(F->b_25)).tail = F->l_1033;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_967, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P940 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_1035 = NULL;
F->l_1035 = (*(P940)rt_nil_check(F->b_30)).head;
while ((F->l_1035 != NULL)) {
rt_putln((((P910)rt_nil_check((*(P921)rt_nil_check(F->l_1035)).s))->all));
F->l_1035 = (*(P921)rt_nil_check(F->l_1035)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P940 a_32, P940 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P940)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P940)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P940)rt_nil_check(F->a_32)).head = (*(P940)rt_nil_check(F->b_33)).head;
} else {
(*(P921)rt_nil_check((*(P940)rt_nil_check(F->a_32)).tail)).next = (*(P940)rt_nil_check(F->b_33)).head;
}
(*(P940)rt_nil_check(F->a_32)).tail = (*(P940)rt_nil_check(F->b_33)).tail;
(*(P940)rt_nil_check(F->b_33)).head = NULL;
(*(P940)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel1036 = (*F->w_35);
if (0 || rt_str_eq(sel1036, rt_str("ABBREV", 6)) || rt_str_eq(sel1036, rt_str("ABNORMAL", 8)) || rt_str_eq(sel1036, rt_str("ALL", 3)) || rt_str_eq(sel1036, rt_str("ALLOC", 5)) || rt_str_eq(sel1036, rt_str("ASSERT", 6)) || rt_str_eq(sel1036, rt_str("BEGIN", 5)) || rt_str_eq(sel1036, rt_str("BY", 2)) || rt_str_eq(sel1036, rt_str("CAPSULE", 7)) || rt_str_eq(sel1036, rt_str("CASE", 4)) || rt_str_eq(sel1036, rt_str("CONST", 5)) || rt_str_eq(sel1036, rt_str("CREATE", 6)) || rt_str_eq(sel1036, rt_str("DO", 2)) || rt_str_eq(sel1036, rt_str("ELSE", 4)) || rt_str_eq(sel1036, rt_str("ELSEIF", 6)) || rt_str_eq(sel1036, rt_str("END", 3)) || rt_str_eq(sel1036, rt_str("EXCEPTION", 9)) || rt_str_eq(sel1036, rt_str("EXIT", 4)) || rt_str_eq(sel1036, rt_str("EXPORTS", 7)) || rt_str_eq(sel1036, rt_str("EXPOSE", 6)) || rt_str_eq(sel1036, rt_str("EXTERNAL", 8)) || rt_str_eq(sel1036, rt_str("FOR", 3)) || rt_str_eq(sel1036, rt_str("FROM", 4)) || rt_str_eq(sel1036, rt_str("FUNC", 4)) || rt_str_eq(sel1036, rt_str("GENERIC", 7)) || rt_str_eq(sel1036, rt_str("GOTO", 4)) || rt_str_eq(sel1036, rt_str("GUARD", 5)) || rt_str_eq(sel1036, rt_str("IF", 2)) || rt_str_eq(sel1036, rt_str("IMPORTS", 7)) || rt_str_eq(sel1036, rt_str("LOCATION", 8)) || rt_str_eq(sel1036, rt_str("NAMED", 5)) || rt_str_eq(sel1036, rt_str("NEEDS", 5)) || rt_str_eq(sel1036, rt_str("NEW", 3)) || rt_str_eq(sel1036, rt_str("NONE", 4)) || rt_str_eq(sel1036, rt_str("OUT", 3)) || rt_str_eq(sel1036, rt_str("OF", 2)) || rt_str_eq(sel1036, rt_str("PRAG", 4)) || rt_str_eq(sel1036, rt_str("PROC", 4)) || rt_str_eq(sel1036, rt_str("RAISE", 5)) || rt_str_eq(sel1036, rt_str("READONLY", 8)) || rt_str_eq(sel1036, rt_str("REVERSE", 7)) || rt_str_eq(sel1036, rt_str("REGION", 6)) || rt_str_eq(sel1036, rt_str("RENAMING", 8)) || rt_str_eq(sel1036, rt_str("REP", 3)) || rt_str_eq(sel1036, rt_str("REPEAT", 6)) || rt_str_eq(sel1036, rt_str("RERAISE", 7)) || rt_str_eq(sel1036, rt_str("RETURN", 6)) || rt_str_eq(sel1036, rt_str("SUBTYPE", 7)) || rt_str_eq(sel1036, rt_str("TASK", 4)) || rt_str_eq(sel1036, rt_str("THEN", 4)) || rt_str_eq(sel1036, rt_str("TO", 2)) || rt_str_eq(sel1036, rt_str("TYPE", 4)) || rt_str_eq(sel1036, rt_str("VAR", 3)) || rt_str_eq(sel1036, rt_str("WAIT", 4)) || rt_str_eq(sel1036, rt_str("WHEN", 4)) || rt_str_eq(sel1036, rt_str("WHILE", 5))) {
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
F->t_1037 = NULL;
{ R913 *cell1038 = rt_alloc(sizeof(R913));
(*cell1038).s = NULL;
(*cell1038).prags = NULL;
F->t_1037 = cell1038;
}
(*(P912)rt_nil_check(F->t_1037)).kind = F->kind_39;
(*(P912)rt_nil_check(F->t_1037)).line = rt_r_ichk(g_src_line_951);
(*(P912)rt_nil_check(F->t_1037)).ival = F->ival_41;
(*(P912)rt_nil_check(F->t_1037)).s = f_mk_3(&(*F->s_40));
(*(P912)rt_nil_check(F->t_1037)).prags = g_pending_prag_952;
g_pending_prag_952 = NULL;
g_ntoks_949 = rt_add(rt_r_ichk(g_ntoks_949), ((rt_int)1LL));
(((P914)rt_nil_check(g_toks_948))->all).p[(rt_index(rt_r_ichk(g_ntoks_949), (((P914)rt_nil_check(g_toks_948))->all).lo, (((P914)rt_nil_check(g_toks_948))->all).hi) - (((P914)rt_nil_check(g_toks_948))->all).lo)] = F->t_1037;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_1039 = RT_R_IUNDEF;
F->j_1039 = rt_add(F->i_44, ((rt_int)1LL));
while (((rt_r_ichk(F->j_1039) <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1039)))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1039))))) || (rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1039))) == 95)))) {
if (((rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1039))) == 95) && ((rt_r_ichk(F->j_1039) == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_1039), ((rt_int)1LL))))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_1039), ((rt_int)1LL)))))))))) {
f_fail_23(rt_r_ichk(g_src_line_951), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_1039 = rt_add(rt_r_ichk(F->j_1039), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_1039);
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
F->w_1040 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_1040, (*F->s_46));
{ rt_int lo1042 = ((rt_int)1LL), hi1043 = ((rt_int)((F->w_1040).len));
for (rt_int it1044 = lo1042; it1044 <= hi1043; it1044++) {
F->k_1041 = it1044;
(*rt_str_at(&F->w_1040, F->k_1041)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1040, F->k_1041)));
}
}
F->result_ = F->w_1040;
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
F->j_1045 = RT_R_IUNDEF;
F->j_1045 = F->i_49;
while (((rt_r_ichk(F->j_1045) <= ((rt_int)(((*F->line_48)).len))) && ((rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_1045))) == 32) || (rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_1045))) == 9)))) {
F->j_1045 = rt_add(rt_r_ichk(F->j_1045), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_1045);
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
F->j_1046 = RT_R_IUNDEF;
F->j_1046 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_1047 = NULL;
F->r_1047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_1048 = RT_R_EUNDEF;
F->more_1048 = 1;
if (((rt_r_ichk(F->j_1046) > ((rt_int)(((*F->line_51)).len))) || (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1046))) != 40))) {
f_fail_23(rt_r_ichk(g_src_line_951), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_1046 = rt_add(rt_r_ichk(F->j_1046), ((rt_int)1LL));
while (rt_r_echk(F->more_1048)) {
F->k_1049 = RT_R_IUNDEF;
F->j_1046 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1046));
if (((rt_r_ichk(F->j_1046) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1046))))))) {
f_fail_23(rt_r_ichk(g_src_line_951), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_1049 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_1046));
F->r_1047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_1047))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_1046), rt_sub(rt_r_ichk(F->k_1049), ((rt_int)1LL))); b_; }))); b_; }));
F->j_1046 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_1049));
if (((rt_r_ichk(F->j_1046) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1046))) == 40))) {
F->go_1050 = RT_R_EUNDEF;
F->go_1050 = 1;
F->r_1047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_1047))->all), rt_str("(", 1)); b_; }));
F->j_1046 = rt_add(rt_r_ichk(F->j_1046), ((rt_int)1LL));
while (rt_r_echk(F->go_1050)) {
F->j_1046 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1046));
if (((rt_r_ichk(F->j_1046) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1046))))))) {
f_fail_23(rt_r_ichk(g_src_line_951), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_1049 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_1046));
F->r_1047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_1047))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_1046), rt_sub(rt_r_ichk(F->k_1049), ((rt_int)1LL))); b_; }))); b_; }));
F->j_1046 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_1049));
if (((rt_r_ichk(F->j_1046) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1046))) == 44))) {
F->r_1047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_1047))->all), rt_str(",", 1)); b_; }));
F->j_1046 = rt_add(rt_r_ichk(F->j_1046), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_1046) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1046))) == 41))) {
F->j_1046 = rt_add(rt_r_ichk(F->j_1046), ((rt_int)1LL));
F->go_1050 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_951), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_1047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_1047))->all), rt_str(")", 1)); b_; }));
}
F->r_1047 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_1047))->all), rt_str(";", 1)); b_; }));
F->j_1046 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1046));
if (((rt_r_ichk(F->j_1046) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1046))) == 44))) {
F->j_1046 = rt_add(rt_r_ichk(F->j_1046), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_1046) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1046))) == 41))) {
F->j_1046 = rt_add(rt_r_ichk(F->j_1046), ((rt_int)1LL));
F->more_1048 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_951), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P910)rt_nil_check(F->r_1047))->all));
if ((g_pending_prag_952 == NULL)) {
g_pending_prag_952 = F->r_1047;
} else {
g_pending_prag_952 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(g_pending_prag_952))->all), (((P910)rt_nil_check(F->r_1047))->all)); b_; }));
}
F->result_ = rt_r_ichk(F->j_1046);
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
F->i_1051 = RT_R_IUNDEF;
F->i_1051 = ((rt_int)1LL);
F->k_1052 = RT_R_IUNDEF;
while ((rt_r_ichk(F->i_1051) <= ((rt_int)(((*F->r_54)).len)))) {
F->k_1052 = rt_r_ichk(F->i_1051);
while ((rt_r_echk(rt_str_get((*F->r_54), rt_r_ichk(F->k_1052))) != 59)) {
F->k_1052 = rt_add(rt_r_ichk(F->k_1052), ((rt_int)1LL));
}
{
F->p_1053 = rt_str_copy(rt_str_slice((*F->r_54), rt_r_ichk(F->i_1051), rt_sub(rt_r_ichk(F->k_1052), ((rt_int)1LL))));
F->ok_1054 = ((((((((((rt_str_eq(F->p_1053, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_1053, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_1053, rt_str("OPEN", 4))) || rt_str_eq(F->p_1053, rt_str("CLOSED", 6))) || rt_str_eq(F->p_1053, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_1053, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_1053, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1053, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_1053, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_1053, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_1053).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_1053, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_1055 = ((((((((((rt_int)((F->p_1053).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_1053, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_1053, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_1053, rt_str("OPEN", 4))) || rt_str_eq(F->p_1053, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_1053).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_1053, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_1053, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1053, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_1053).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_1053, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_1055 && (!F->ok_1054))) {
f_fail_23(rt_r_ichk(g_src_line_951), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_1053); b_; }));
}
}
F->i_1051 = rt_add(rt_r_ichk(F->k_1052), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_1056 = RT_R_IUNDEF;
F->i_1056 = ((rt_int)1LL);
F->j_1057 = RT_R_IUNDEF;
F->j_1057 = ((rt_int)0LL);
F->n_1058 = RT_R_IUNDEF;
F->n_1058 = ((rt_int)(((*F->line_56)).len));
F->c_1059 = RT_R_EUNDEF;
while ((rt_r_ichk(F->i_1056) <= rt_r_ichk(F->n_1058))) {
F->c_1059 = rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->i_1056)));
if (((((rt_r_echk(F->c_1059) == 32) || (rt_r_echk(F->c_1059) == 9)) || (rt_r_echk(F->c_1059) == 13)) || (rt_r_echk(F->c_1059) == 12))) {
F->i_1056 = rt_add(rt_r_ichk(F->i_1056), ((rt_int)1LL));
} else if ((rt_r_echk(F->c_1059) == 37)) {
F->i_1056 = rt_add(rt_r_ichk(F->n_1058), ((rt_int)1LL));
} else if (f_is_letter_9(rt_r_echk(F->c_1059))) {
F->j_1057 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->i_1056));
{
F->w_1060 = rt_str_new(rt_sub(rt_r_ichk(F->j_1057), rt_r_ichk(F->i_1056)));
rt_str_assign(&F->w_1060, rt_str_slice((*F->line_56), rt_r_ichk(F->i_1056), rt_sub(rt_r_ichk(F->j_1057), ((rt_int)1LL))));
{ rt_int lo1062 = ((rt_int)1LL), hi1063 = ((rt_int)((F->w_1060).len));
for (rt_int it1064 = lo1062; it1064 <= hi1063; it1064++) {
F->k_1061 = it1064;
(*rt_str_at(&F->w_1060, F->k_1061)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1060, F->k_1061)));
}
}
if (rt_str_eq(F->w_1060, rt_str("PRAGMAT", 7))) {
while (((rt_r_ichk(F->j_1057) <= rt_r_ichk(F->n_1058)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1057))) != 59))) {
F->j_1057 = rt_add(rt_r_ichk(F->j_1057), ((rt_int)1LL));
}
F->j_1057 = rt_add(rt_r_ichk(F->j_1057), ((rt_int)1LL));
} else if (rt_str_eq(F->w_1060, rt_str("PRAG", 4))) {
F->j_1057 = f_lex_prag_53(&(*F->line_56), rt_r_ichk(F->j_1057));
} else if (f_is_reserved_36(&F->w_1060)) {
f_add_token_42((((rt_int)2LL)), &F->w_1060, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_1060)) {
f_add_token_42((((rt_int)3LL)), &F->w_1060, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_1060, ((rt_int)0LL));
}
}
F->i_1056 = rt_r_ichk(F->j_1057);
} else if (f_is_digit_11(rt_r_echk(F->c_1059))) {
F->j_1057 = rt_r_ichk(F->i_1056);
while (((rt_r_ichk(F->j_1057) <= rt_r_ichk(F->n_1058)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1057)))))) {
F->j_1057 = rt_add(rt_r_ichk(F->j_1057), ((rt_int)1LL));
}
if ((((rt_r_ichk(F->j_1057) < rt_r_ichk(F->n_1058)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1057))) == 46)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_1057), ((rt_int)1LL))))))) {
F->j_1057 = rt_add(rt_r_ichk(F->j_1057), ((rt_int)1LL));
while (((rt_r_ichk(F->j_1057) <= rt_r_ichk(F->n_1058)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1057)))))) {
F->j_1057 = rt_add(rt_r_ichk(F->j_1057), ((rt_int)1LL));
}
if (((rt_r_ichk(F->j_1057) <= rt_r_ichk(F->n_1058)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1057))) == 69) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1057))) == 101)))) {
F->j_1057 = rt_add(rt_r_ichk(F->j_1057), ((rt_int)1LL));
if (((rt_r_ichk(F->j_1057) <= rt_r_ichk(F->n_1058)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1057))) == 43) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1057))) == 45)))) {
F->j_1057 = rt_add(rt_r_ichk(F->j_1057), ((rt_int)1LL));
}
while (((rt_r_ichk(F->j_1057) <= rt_r_ichk(F->n_1058)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1057)))))) {
F->j_1057 = rt_add(rt_r_ichk(F->j_1057), ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_1056), rt_sub(rt_r_ichk(F->j_1057), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_1056), rt_sub(rt_r_ichk(F->j_1057), ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), rt_r_ichk(F->i_1056), rt_sub(rt_r_ichk(F->j_1057), ((rt_int)1LL)))));
}
F->i_1056 = rt_r_ichk(F->j_1057);
} else if ((((rt_r_echk(F->c_1059) == 39) && (rt_r_ichk(F->i_1056) < rt_r_ichk(F->n_1058))) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_1056), ((rt_int)1LL)))) == 39))) {
F->j_1057 = rt_add(rt_r_ichk(F->i_1056), ((rt_int)2LL));
while (((rt_r_ichk(F->j_1057) < rt_r_ichk(F->n_1058)) && (!((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1057))) == 39) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_1057), ((rt_int)1LL)))) == 39))))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1057))) == 34)) {
f_fail_23(rt_r_ichk(g_src_line_951), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_1057 = rt_add(rt_r_ichk(F->j_1057), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_1057) >= rt_r_ichk(F->n_1058))) {
f_fail_23(rt_r_ichk(g_src_line_951), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1056), ((rt_int)2LL)), rt_sub(rt_r_ichk(F->j_1057), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1056 = rt_add(rt_r_ichk(F->j_1057), ((rt_int)2LL));
} else if ((rt_r_echk(F->c_1059) == 39)) {
F->j_1057 = rt_add(rt_r_ichk(F->i_1056), ((rt_int)1LL));
if (((rt_r_ichk(F->j_1057) > rt_r_ichk(F->n_1058)) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1057))))))) {
f_fail_23(rt_r_ichk(g_src_line_951), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_1057 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->j_1057));
{
F->w_1065 = rt_str_new(rt_sub(rt_sub(rt_r_ichk(F->j_1057), rt_r_ichk(F->i_1056)), ((rt_int)1LL)));
rt_str_assign(&F->w_1065, rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1056), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_1057), ((rt_int)1LL))));
{ rt_int lo1067 = ((rt_int)1LL), hi1068 = ((rt_int)((F->w_1065).len));
for (rt_int it1069 = lo1067; it1069 <= hi1068; it1069++) {
F->k_1066 = it1069;
(*rt_str_at(&F->w_1065, F->k_1066)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1065, F->k_1066)));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_1065, ((rt_int)0LL));
}
F->i_1056 = rt_r_ichk(F->j_1057);
} else if ((rt_r_echk(F->c_1059) == 34)) {
F->j_1057 = rt_add(rt_r_ichk(F->i_1056), ((rt_int)1LL));
while (((rt_r_ichk(F->j_1057) <= rt_r_ichk(F->n_1058)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1057))) != 34))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1057))) == 39)) {
f_fail_23(rt_r_ichk(g_src_line_951), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_1057 = rt_add(rt_r_ichk(F->j_1057), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_1057) > rt_r_ichk(F->n_1058))) {
f_fail_23(rt_r_ichk(g_src_line_951), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1056), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_1057), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1056 = rt_add(rt_r_ichk(F->j_1057), ((rt_int)1LL));
} else {
{
F->two_1070 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_1070, rt_str("  ", 2));
(*rt_str_at(&F->two_1070, ((rt_int)1LL))) = rt_r_echk(F->c_1059);
if ((rt_r_ichk(F->i_1056) < rt_r_ichk(F->n_1058))) {
(*rt_str_at(&F->two_1070, ((rt_int)2LL))) = rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_1056), ((rt_int)1LL))));
}
if (((((((rt_str_eq(F->two_1070, rt_str(":=", 2)) || rt_str_eq(F->two_1070, rt_str("=>", 2))) || rt_str_eq(F->two_1070, rt_str("..", 2))) || rt_str_eq(F->two_1070, rt_str("**", 2))) || rt_str_eq(F->two_1070, rt_str("/=", 2))) || rt_str_eq(F->two_1070, rt_str("<=", 2))) || rt_str_eq(F->two_1070, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_1070, ((rt_int)0LL));
F->i_1056 = rt_add(rt_r_ichk(F->i_1056), ((rt_int)2LL));
} else if (((rt_str_eq(F->two_1070, rt_str("<<", 2)) || rt_str_eq(F->two_1070, rt_str(">>", 2))) || rt_str_eq(F->two_1070, rt_str("::", 2)))) {
if (rt_str_eq(F->two_1070, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_1070, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_1056 = rt_add(rt_r_ichk(F->i_1056), ((rt_int)2LL));
} else if ((((((((((((((((((rt_r_echk(F->c_1059) == 40) || (rt_r_echk(F->c_1059) == 41)) || (rt_r_echk(F->c_1059) == 91)) || (rt_r_echk(F->c_1059) == 93)) || (rt_r_echk(F->c_1059) == 44)) || (rt_r_echk(F->c_1059) == 58)) || (rt_r_echk(F->c_1059) == 59)) || (rt_r_echk(F->c_1059) == 46)) || (rt_r_echk(F->c_1059) == 35)) || (rt_r_echk(F->c_1059) == 43)) || (rt_r_echk(F->c_1059) == 45)) || (rt_r_echk(F->c_1059) == 42)) || (rt_r_echk(F->c_1059) == 47)) || (rt_r_echk(F->c_1059) == 38)) || (rt_r_echk(F->c_1059) == 61)) || (rt_r_echk(F->c_1059) == 60)) || (rt_r_echk(F->c_1059) == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(rt_r_echk(F->c_1059)); b_; }), ((rt_int)0LL));
F->i_1056 = rt_add(rt_r_ichk(F->i_1056), ((rt_int)1LL));
} else {
f_fail_23(rt_r_ichk(g_src_line_951), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_1071 = rt_str_new(rt_sizeln());
rt_r_readln(&F->line_1071);
g_src_line_951 = rt_add(rt_r_ichk(g_src_line_951), ((rt_int)1LL));
f_lex_line_57(&F->line_1071);
}
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static P917 f_nn_61(rt_int kind_59, rt_int line_60) {
  struct f_nn_61fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_59 = kind_59;
F->line_60 = line_60;
F->x_1072 = NULL;
{ R918 *cell1073 = rt_alloc(sizeof(R918));
(*cell1073).name = NULL;
(*cell1073).tag = NULL;
(*cell1073).prags = NULL;
(*cell1073).labels = NULL;
(*cell1073).a = NULL;
(*cell1073).b = NULL;
(*cell1073).c = NULL;
(*cell1073).d = NULL;
(*cell1073).e = NULL;
(*cell1073).next = NULL;
F->x_1072 = cell1073;
}
(*(P917)rt_nil_check(F->x_1072)).kind = F->kind_59;
(*(P917)rt_nil_check(F->x_1072)).line = F->line_60;
F->result_ = F->x_1072;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_65(P917 *head_62, P917 *tail_63, P917 x_64) {
  struct f_append_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_62 = head_62;
F->tail_63 = tail_63;
F->x_64 = x_64;
if (((*F->head_62) == NULL)) {
(*F->head_62) = F->x_64;
} else {
(*(P917)rt_nil_check((*F->tail_63))).next = F->x_64;
}
(*F->tail_63) = F->x_64;
while (((*(P917)rt_nil_check((*F->tail_63))).next != NULL)) {
(*F->tail_63) = (*(P917)rt_nil_check((*F->tail_63))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_67(P917 l_66) {
  struct f_list_len_67fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_66 = l_66;
F->n_1074 = RT_R_IUNDEF;
F->n_1074 = ((rt_int)0LL);
F->p_1075 = NULL;
F->p_1075 = F->l_66;
while ((F->p_1075 != NULL)) {
F->n_1074 = rt_add(rt_r_ichk(F->n_1074), ((rt_int)1LL));
F->p_1075 = (*(P917)rt_nil_check(F->p_1075)).next;
}
F->result_ = rt_r_ichk(F->n_1074);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_68(void) {
  struct f_cur_line_68fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = rt_r_ichk((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).line);
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
F->result_ = ((rt_r_ichk((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)2LL))) && rt_str_eq((((P910)rt_nil_check((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_69)));
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
F->result_ = ((rt_r_ichk((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)3LL))) && rt_str_eq((((P910)rt_nil_check((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_71)));
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
F->result_ = (rt_r_ichk((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).kind) == F->k_73);
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
if ((rt_add(rt_r_ichk(g_tpos_950), F->k_75) > rt_r_ichk(g_ntoks_949))) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = rt_r_ichk((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_950), F->k_75), b_.lo, b_.hi) - b_.lo)]; }))).kind);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P910 f_text_at_78(rt_int k_77) {
  struct f_text_at_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_77 = k_77;
if ((rt_add(rt_r_ichk(g_tpos_950), F->k_77) > rt_r_ichk(g_ntoks_949))) {
F->result_ = (*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_ntoks_949), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_950), F->k_77), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23(rt_r_ichk((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_79), rt_str(" (at ", 5)), (((P910)rt_nil_check((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_82(rstr *w_81) {
  struct f_accept_kw_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_81 = w_81;
if (f_at_kw_70(&(*F->w_81))) {
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
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
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
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
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
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
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P910 f_expect_id_89(void) {
  struct f_expect_id_89fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->result_ = (*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_950), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_name_node_90(void) {
  struct f_name_node_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1076 = NULL;
F->x_1076 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P917)rt_nil_check(F->x_1076)).name = f_expect_id_89();
F->result_ = F->x_1076;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_id_list_91(void) {
  struct f_id_list_91fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1077 = NULL;
F->tail_1078 = NULL;
f_append_65(&F->head_1077, &F->tail_1078, f_name_node_90());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_1077, &F->tail_1078, f_name_node_90());
}
F->result_ = F->head_1077;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_p_subtype_92(void) {
  struct f_p_subtype_92fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1079 = RT_R_IUNDEF;
F->line_1079 = f_cur_line_68();
F->x_1080 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->x_1080 = f_nn_61((((rt_int)81LL)), rt_r_ichk(F->line_1079));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P917)rt_nil_check(F->x_1080)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1080;
goto ret_;
}
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_1081 = rt_str_copy((((P910)rt_nil_check((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
if (rt_str_eq(F->w_1081, rt_str("ARRAY", 5))) {
F->x_1080 = f_nn_61((((rt_int)74LL)), rt_r_ichk(F->line_1079));
{
F->head_1082 = NULL;
F->tail_1083 = NULL;
f_append_65(&F->head_1082, &F->tail_1083, f_p_subtype_92());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_1082, &F->tail_1083, f_p_subtype_92());
}
(*(P917)rt_nil_check(F->x_1080)).a = F->head_1082;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P917)rt_nil_check(F->x_1080)).b = f_p_subtype_92();
} else if ((rt_str_eq(F->w_1081, rt_str("RECORD", 6)) || rt_str_eq(F->w_1081, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_1081, rt_str("RECORD", 6))) {
F->x_1080 = f_nn_61((((rt_int)75LL)), rt_r_ichk(F->line_1079));
} else {
F->x_1080 = f_nn_61((((rt_int)76LL)), rt_r_ichk(F->line_1079));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1084 = NULL;
F->tail_1085 = NULL;
F->more_1086 = RT_R_EUNDEF;
F->more_1086 = 1;
while (rt_r_echk(F->more_1086)) {
F->names_1087 = NULL;
F->names_1087 = f_id_list_91();
F->st_1088 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1088 = f_p_subtype_92();
while ((F->names_1087 != NULL)) {
F->cmp_1089 = NULL;
F->cmp_1089 = f_nn_61((((rt_int)63LL)), rt_r_ichk((*(P917)rt_nil_check(F->names_1087)).line));
(*(P917)rt_nil_check(F->cmp_1089)).name = (*(P917)rt_nil_check(F->names_1087)).name;
(*(P917)rt_nil_check(F->cmp_1089)).a = F->st_1088;
f_append_65(&F->head_1084, &F->tail_1085, F->cmp_1089);
F->names_1087 = (*(P917)rt_nil_check(F->names_1087)).next;
}
F->more_1086 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P917)rt_nil_check(F->x_1080)).a = F->head_1084;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_1081, rt_str("UNION", 5)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1080)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1081, rt_str("ENUM", 4))) {
F->x_1080 = f_nn_61((((rt_int)72LL)), rt_r_ichk(F->line_1079));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1090 = NULL;
F->tail_1091 = NULL;
F->more_1092 = RT_R_EUNDEF;
F->more_1092 = 1;
while (rt_r_echk(F->more_1092)) {
F->lit_1093 = NULL;
F->lit_1093 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_1079));
if ((!f_at_kind_74((((rt_int)6LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P917)rt_nil_check(F->lit_1093)).name = (*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
f_append_65(&F->head_1090, &F->tail_1091, F->lit_1093);
F->more_1092 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P917)rt_nil_check(F->x_1080)).a = F->head_1090;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1080)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P917)rt_nil_check(F->x_1080)).c = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_1081, rt_str("STRING", 6)) || rt_str_eq(F->w_1081, rt_str("SET", 3))) || rt_str_eq(F->w_1081, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_1081, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_1081, rt_str("STRING", 6))) {
F->x_1080 = f_nn_61((((rt_int)73LL)), rt_r_ichk(F->line_1079));
} else if (rt_str_eq(F->w_1081, rt_str("SET", 3))) {
F->x_1080 = f_nn_61((((rt_int)77LL)), rt_r_ichk(F->line_1079));
} else if (rt_str_eq(F->w_1081, rt_str("MAILBOX", 7))) {
F->x_1080 = f_nn_61((((rt_int)78LL)), rt_r_ichk(F->line_1079));
} else {
F->x_1080 = f_nn_61((((rt_int)79LL)), rt_r_ichk(F->line_1079));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P917)rt_nil_check(F->x_1080)).a = f_p_subtype_92();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1080)).b = f_actual_params_94();
}
} else if (rt_str_eq(F->w_1081, rt_str("INT", 3))) {
F->x_1080 = f_nn_61((((rt_int)70LL)), rt_r_ichk(F->line_1079));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1080)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P917)rt_nil_check(F->x_1080)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1081, rt_str("FLOAT", 5))) {
F->x_1080 = f_nn_61((((rt_int)71LL)), rt_r_ichk(F->line_1079));
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1080)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1080)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P917)rt_nil_check(F->x_1080)).c = f_expr_103();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_1080 = f_nn_61((((rt_int)80LL)), rt_r_ichk(F->line_1079));
(*(P917)rt_nil_check(F->x_1080)).name = f_mk_3(&F->w_1081);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1080)).a = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1080)).b = f_constraint_list_93();
(*(P917)rt_nil_check(F->x_1080)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_1080;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_constraint_list_93(void) {
  struct f_constraint_list_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1094 = NULL;
F->tail_1095 = NULL;
F->more_1096 = RT_R_EUNDEF;
F->more_1096 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1096)) {
F->line_1097 = RT_R_IUNDEF;
F->line_1097 = f_cur_line_68();
F->lo_1098 = NULL;
F->lo_1098 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1099 = NULL;
F->r_1099 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_1097));
(*(P917)rt_nil_check(F->r_1099)).a = F->lo_1098;
(*(P917)rt_nil_check(F->r_1099)).b = f_expr_103();
f_append_65(&F->head_1094, &F->tail_1095, F->r_1099);
} else {
f_append_65(&F->head_1094, &F->tail_1095, F->lo_1098);
}
F->more_1096 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1094;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_actual_params_94(void) {
  struct f_actual_params_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1100 = NULL;
F->tail_1101 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_65(&F->head_1100, &F->tail_1101, f_expr_103());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_1100, &F->tail_1101, f_expr_103());
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1100;
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

static P917 f_actual_tt_97(void) {
  struct f_actual_tt_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1102 = NULL;
F->tail_1103 = NULL;
F->more_1104 = RT_R_EUNDEF;
F->more_1104 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1104)) {
if ((f_at_kind_74((((rt_int)1LL))) && f_is_type_word_96(&(((P910)rt_nil_check((*(P912)rt_nil_check((((P914)rt_nil_check(g_toks_948))->all).p[(rt_index(rt_r_ichk(g_tpos_950), (((P914)rt_nil_check(g_toks_948))->all).lo, (((P914)rt_nil_check(g_toks_948))->all).hi) - (((P914)rt_nil_check(g_toks_948))->all).lo)])).s))->all)))) {
f_append_65(&F->head_1102, &F->tail_1103, f_p_subtype_92());
} else {
f_append_65(&F->head_1102, &F->tail_1103, f_expr_103());
}
F->more_1104 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1102;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_binop_102(P910 op_98, P917 l_99, P917 r_100, rt_int line_101) {
  struct f_binop_102fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_98 = op_98;
F->l_99 = l_99;
F->r_100 = r_100;
F->line_101 = line_101;
F->x_1105 = NULL;
F->x_1105 = f_nn_61((((rt_int)9LL)), F->line_101);
(*(P917)rt_nil_check(F->x_1105)).name = F->op_98;
(*(P917)rt_nil_check(F->x_1105)).a = F->l_99;
(*(P917)rt_nil_check(F->x_1105)).b = F->r_100;
F->result_ = F->x_1105;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_expr_103(void) {
  struct f_expr_103fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1106 = NULL;
F->l_1106 = f_expr_and_104();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_1107 = NULL;
F->op_1107 = (*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1108 = RT_R_IUNDEF;
F->line_1108 = f_cur_line_68();
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->l_1106 = f_binop_102(F->op_1107, F->l_1106, f_expr_and_104(), rt_r_ichk(F->line_1108));
}
F->result_ = F->l_1106;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_expr_and_104(void) {
  struct f_expr_and_104fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1109 = NULL;
F->l_1109 = f_expr_not_105();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_1110 = RT_R_IUNDEF;
F->line_1110 = f_cur_line_68();
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->l_1109 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_1109, f_expr_not_105(), rt_r_ichk(F->line_1110));
}
F->result_ = F->l_1109;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_expr_not_105(void) {
  struct f_expr_not_105fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_1111 = NULL;
F->x_1111 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1111)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P917)rt_nil_check(F->x_1111)).a = f_expr_not_105();
F->result_ = F->x_1111;
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

static P917 f_expr_rel_108(void) {
  struct f_expr_rel_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1112 = NULL;
F->l_1112 = f_expr_add_109();
while ((f_at_kind_74((((rt_int)3LL))) && f_is_rel_107(&(((P910)rt_nil_check((*(P912)rt_nil_check((((P914)rt_nil_check(g_toks_948))->all).p[(rt_index(rt_r_ichk(g_tpos_950), (((P914)rt_nil_check(g_toks_948))->all).lo, (((P914)rt_nil_check(g_toks_948))->all).hi) - (((P914)rt_nil_check(g_toks_948))->all).lo)])).s))->all)))) {
F->op_1113 = NULL;
F->op_1113 = (*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1114 = RT_R_IUNDEF;
F->line_1114 = f_cur_line_68();
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->l_1112 = f_binop_102(F->op_1113, F->l_1112, f_expr_add_109(), rt_r_ichk(F->line_1114));
}
F->result_ = F->l_1112;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_expr_add_109(void) {
  struct f_expr_add_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1115 = NULL;
F->l_1115 = f_expr_mul_110();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_1116 = NULL;
F->op_1116 = (*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1117 = RT_R_IUNDEF;
F->line_1117 = f_cur_line_68();
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->l_1115 = f_binop_102(F->op_1116, F->l_1115, f_expr_mul_110(), rt_r_ichk(F->line_1117));
}
F->result_ = F->l_1115;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_expr_mul_110(void) {
  struct f_expr_mul_110fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1118 = NULL;
F->l_1118 = f_expr_pow_111();
while (((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_1119 = NULL;
F->op_1119 = (*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1120 = RT_R_IUNDEF;
F->line_1120 = f_cur_line_68();
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->l_1118 = f_binop_102(F->op_1119, F->l_1118, f_expr_pow_111(), rt_r_ichk(F->line_1120));
}
F->result_ = F->l_1118;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_expr_pow_111(void) {
  struct f_expr_pow_111fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1121 = NULL;
F->l_1121 = f_expr_prefix_112();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_1122 = RT_R_IUNDEF;
F->line_1122 = f_cur_line_68();
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->l_1121 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_1121, f_expr_prefix_112(), rt_r_ichk(F->line_1122));
}
F->result_ = F->l_1121;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_expr_prefix_112(void) {
  struct f_expr_prefix_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_1123 = NULL;
F->x_1123 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
(*(P917)rt_nil_check(F->x_1123)).name = (*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1123)).a = f_expr_prefix_112();
F->result_ = F->x_1123;
goto ret_;
}
F->result_ = f_postfix_113();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_postfix_113(void) {
  struct f_postfix_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_1124 = NULL;
F->p_1124 = f_primary_114();
while (1) {
F->line_1125 = RT_R_IUNDEF;
F->line_1125 = f_cur_line_68();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1126 = NULL;
F->x_1126 = f_nn_61((((rt_int)10LL)), rt_r_ichk(F->line_1125));
F->head_1127 = NULL;
F->tail_1128 = NULL;
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1129 = RT_R_EUNDEF;
F->more_1129 = 1;
while (rt_r_echk(F->more_1129)) {
F->lo_1130 = NULL;
F->lo_1130 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1131 = NULL;
F->r_1131 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_1125));
(*(P917)rt_nil_check(F->r_1131)).a = F->lo_1130;
(*(P917)rt_nil_check(F->r_1131)).b = f_expr_103();
f_append_65(&F->head_1127, &F->tail_1128, F->r_1131);
} else {
f_append_65(&F->head_1127, &F->tail_1128, F->lo_1130);
}
F->more_1129 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P917)rt_nil_check(F->x_1126)).a = F->p_1124;
(*(P917)rt_nil_check(F->x_1126)).b = F->head_1127;
F->p_1124 = F->x_1126;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1132 = NULL;
F->x_1132 = f_nn_61((((rt_int)11LL)), rt_r_ichk(F->line_1125));
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1132)).a = F->p_1124;
(*(P917)rt_nil_check(F->x_1132)).name = (*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->p_1124 = F->x_1132;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && (rt_r_ichk((*(P917)rt_nil_check(F->p_1124)).kind) == (((rt_int)7LL))))) {
F->x_1133 = NULL;
F->x_1133 = f_nn_61((((rt_int)12LL)), rt_r_ichk(F->line_1125));
(*(P917)rt_nil_check(F->x_1133)).a = F->p_1124;
(*(P917)rt_nil_check(F->x_1133)).b = f_actual_tt_97();
F->p_1124 = F->x_1133;
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1134 = NULL;
F->x_1134 = f_nn_61((((rt_int)13LL)), rt_r_ichk(F->line_1125));
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1134)).a = F->p_1124;
(*(P917)rt_nil_check(F->x_1134)).b = f_p_subtype_92();
F->p_1124 = F->x_1134;
} else {
F->result_ = F->p_1124;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_primary_114(void) {
  struct f_primary_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1135 = RT_R_IUNDEF;
F->line_1135 = f_cur_line_68();
F->x_1136 = NULL;
F->k_1137 = RT_R_IUNDEF;
F->k_1137 = rt_r_ichk((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).kind);
if ((rt_r_ichk(F->k_1137) == (((rt_int)4LL)))) {
F->x_1136 = f_nn_61((((rt_int)1LL)), rt_r_ichk(F->line_1135));
(*(P917)rt_nil_check(F->x_1136)).ival = rt_r_ichk((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).ival);
(*(P917)rt_nil_check(F->x_1136)).name = (*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->result_ = F->x_1136;
goto ret_;
}
if ((((rt_r_ichk(F->k_1137) == (((rt_int)5LL))) || (rt_r_ichk(F->k_1137) == (((rt_int)7LL)))) || (rt_r_ichk(F->k_1137) == (((rt_int)6LL))))) {
if ((rt_r_ichk(F->k_1137) == (((rt_int)5LL)))) {
F->x_1136 = f_nn_61((((rt_int)2LL)), rt_r_ichk(F->line_1135));
} else if ((rt_r_ichk(F->k_1137) == (((rt_int)7LL)))) {
F->x_1136 = f_nn_61((((rt_int)3LL)), rt_r_ichk(F->line_1135));
} else {
F->x_1136 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_1135));
}
(*(P917)rt_nil_check(F->x_1136)).name = (*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->result_ = F->x_1136;
goto ret_;
}
if ((rt_r_ichk(F->k_1137) == (((rt_int)1LL)))) {
F->w_1138 = rt_str_copy((((P910)rt_nil_check((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1138, rt_str("TRUE", 4)) || rt_str_eq(F->w_1138, rt_str("FALSE", 5)))) {
F->x_1136 = f_nn_61((((rt_int)5LL)), rt_r_ichk(F->line_1135));
if (rt_str_eq(F->w_1138, rt_str("TRUE", 4))) {
(*(P917)rt_nil_check(F->x_1136)).ival = ((rt_int)1LL);
}
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->result_ = F->x_1136;
goto ret_;
}
if (rt_str_eq(F->w_1138, rt_str("NIL", 3))) {
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)6LL)), rt_r_ichk(F->line_1135));
goto ret_;
}
F->result_ = f_name_node_90();
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1136 = f_nn_61((((rt_int)17LL)), rt_r_ichk(F->line_1135));
(*(P917)rt_nil_check(F->x_1136)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1136;
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1139 = NULL;
F->tail_1140 = NULL;
F->x_1136 = f_nn_61((((rt_int)14LL)), rt_r_ichk(F->line_1135));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1141 = RT_R_EUNDEF;
F->more_1141 = 1;
while (rt_r_echk(F->more_1141)) {
f_append_65(&F->head_1139, &F->tail_1140, f_constructor_item_115());
F->more_1141 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P917)rt_nil_check(F->x_1136)).a = F->head_1139;
F->result_ = F->x_1136;
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

static P917 f_constructor_item_115(void) {
  struct f_constructor_item_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1142 = RT_R_IUNDEF;
F->line_1142 = f_cur_line_68();
F->it_1143 = NULL;
F->it_1143 = f_nn_61((((rt_int)15LL)), rt_r_ichk(F->line_1142));
F->first_1144 = NULL;
F->first_1144 = f_expr_103();
F->keys_1145 = NULL;
F->ktail_1146 = NULL;
F->lab_1147 = NULL;
F->lab_1147 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1142));
(*(P917)rt_nil_check(F->lab_1147)).a = F->first_1144;
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P917)rt_nil_check(F->lab_1147)).b = f_expr_103();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_65(&F->keys_1145, &F->ktail_1146, F->lab_1147);
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1148 = RT_R_IUNDEF;
F->save_1148 = rt_r_ichk(g_tpos_950);
F->more_1149 = NULL;
F->tail2_1150 = NULL;
F->ok_1151 = RT_R_EUNDEF;
F->ok_1151 = 0;
F->go_1152 = RT_R_EUNDEF;
F->go_1152 = 1;
while ((rt_r_echk(F->go_1152) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1153 = NULL;
F->l2_1153 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1142));
(*(P917)rt_nil_check(F->l2_1153)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P917)rt_nil_check(F->l2_1153)).b = f_expr_103();
}
f_append_65(&F->more_1149, &F->tail2_1150, F->l2_1153);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1151 = 1;
F->go_1152 = 0;
} else if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1152 = 0;
}
}
if (rt_r_echk(F->ok_1151)) {
f_append_65(&F->keys_1145, &F->ktail_1146, F->lab_1147);
f_append_65(&F->keys_1145, &F->ktail_1146, F->more_1149);
} else {
g_tpos_950 = rt_r_ichk(F->save_1148);
}
}
if (((F->keys_1145 == NULL) && ((*(P917)rt_nil_check(F->lab_1147)).b != NULL))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1145 != NULL)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P917)rt_nil_check(F->it_1143)).a = F->keys_1145;
(*(P917)rt_nil_check(F->it_1143)).b = f_expr_103();
} else {
(*(P917)rt_nil_check(F->it_1143)).b = F->first_1144;
}
F->result_ = F->it_1143;
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

static P917 f_body_117(void) {
  struct f_body_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1154 = NULL;
F->tail_1155 = NULL;
F->stmts_1156 = RT_R_EUNDEF;
F->stmts_1156 = 0;
F->after_1157 = NULL;
while ((!f_at_body_end_116())) {
F->x_1158 = NULL;
F->x_1158 = f_body_element_118();
if (((F->x_1158 != NULL) && ((((rt_r_ichk((*(P917)rt_nil_check(F->x_1158)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P917)rt_nil_check(F->x_1158)).kind) == (((rt_int)41LL)))) || (rt_r_ichk((*(P917)rt_nil_check(F->x_1158)).kind) == (((rt_int)49LL)))) || (rt_r_ichk((*(P917)rt_nil_check(F->x_1158)).kind) == (((rt_int)48LL)))))) {
if (rt_r_echk(F->stmts_1156)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->x_1158)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1158 != NULL) && (rt_r_ichk((*(P917)rt_nil_check(F->x_1158)).kind) >= (((rt_int)42LL)))) && (rt_r_ichk((*(P917)rt_nil_check(F->x_1158)).kind) <= (((rt_int)51LL))))) {
if ((rt_r_echk(F->stmts_1156) && (F->after_1157 == NULL))) {
F->after_1157 = F->x_1158;
}
} else if (((F->x_1158 != NULL) && (rt_r_ichk((*(P917)rt_nil_check(F->x_1158)).kind) != (((rt_int)33LL))))) {
if ((F->after_1157 != NULL)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->after_1157)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1156 = 1;
}
f_append_65(&F->head_1154, &F->tail_1155, F->x_1158);
}
F->result_ = F->head_1154;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_body_element_118(void) {
  struct f_body_element_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1159 = NULL;
F->pr_1160 = NULL;
F->pr_1160 = (*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1159 = f_declaration_119();
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1159 = f_nn_61((((rt_int)33LL)), f_cur_line_68());
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1159)).a = f_expr_103();
} else {
F->x_1159 = f_statement_141();
}
if ((F->pr_1160 != NULL)) {
F->p_1161 = NULL;
F->p_1161 = F->x_1159;
while ((F->p_1161 != NULL)) {
if (((*(P917)rt_nil_check(F->p_1161)).prags == NULL)) {
(*(P917)rt_nil_check(F->p_1161)).prags = F->pr_1160;
} else {
(*(P917)rt_nil_check(F->p_1161)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->pr_1160))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1161)).prags))->all)); b_; }));
}
F->p_1161 = (*(P917)rt_nil_check(F->p_1161)).next;
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1159;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_declaration_119(void) {
  struct f_declaration_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1162 = RT_R_IUNDEF;
F->line_1162 = f_cur_line_68();
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
F->head_1163 = NULL;
F->tail_1164 = NULL;
F->names_1165 = NULL;
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->names_1165 = f_id_list_91();
while ((F->names_1165 != NULL)) {
F->x_1166 = NULL;
F->x_1166 = f_nn_61((((rt_int)49LL)), rt_r_ichk(F->line_1162));
(*(P917)rt_nil_check(F->x_1166)).name = (*(P917)rt_nil_check(F->names_1165)).name;
f_append_65(&F->head_1163, &F->tail_1164, F->x_1166);
F->names_1165 = (*(P917)rt_nil_check(F->names_1165)).next;
}
F->result_ = F->head_1163;
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

static P917 f_object_decl_120(void) {
  struct f_object_decl_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1167 = RT_R_IUNDEF;
F->line_1167 = f_cur_line_68();
F->is_var_1168 = RT_R_EUNDEF;
F->is_var_1168 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1169 = NULL;
F->st_1170 = NULL;
F->init_1171 = NULL;
F->loc_1172 = NULL;
F->loc_kind_1173 = RT_R_IUNDEF;
F->loc_kind_1173 = ((rt_int)0LL);
F->head_1174 = NULL;
F->tail_1175 = NULL;
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->names_1169 = f_id_list_91();
if (rt_r_echk(F->is_var_1168)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1170 = f_p_subtype_92();
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P910)rt_nil_check((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->loc_kind_1173 = ((rt_int)1LL);
} else {
F->loc_kind_1173 = ((rt_int)2LL);
}
F->loc_1172 = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1171 = f_expr_103();
}
} else {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1170 = f_p_subtype_92();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1171 = f_expr_103();
}
while ((F->names_1169 != NULL)) {
F->x_1176 = NULL;
if (rt_r_echk(F->is_var_1168)) {
F->x_1176 = f_nn_61((((rt_int)40LL)), rt_r_ichk(F->line_1167));
} else {
F->x_1176 = f_nn_61((((rt_int)41LL)), rt_r_ichk(F->line_1167));
}
(*(P917)rt_nil_check(F->x_1176)).name = (*(P917)rt_nil_check(F->names_1169)).name;
(*(P917)rt_nil_check(F->x_1176)).a = F->st_1170;
(*(P917)rt_nil_check(F->x_1176)).b = F->init_1171;
(*(P917)rt_nil_check(F->x_1176)).c = F->loc_1172;
(*(P917)rt_nil_check(F->x_1176)).ival = rt_r_ichk(F->loc_kind_1173);
f_append_65(&F->head_1174, &F->tail_1175, F->x_1176);
F->names_1169 = (*(P917)rt_nil_check(F->names_1169)).next;
}
F->result_ = F->head_1174;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_abbrev_decl_121(void) {
  struct f_abbrev_decl_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1177 = NULL;
F->x_1177 = f_nn_61((((rt_int)42LL)), f_cur_line_68());
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1177)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1177)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1177)).b = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P917)rt_nil_check(F->x_1177)).a = f_p_subtype_92();
F->result_ = F->x_1177;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_skip_rep_122(void) {
  struct f_skip_rep_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->depth_1178 = RT_R_IUNDEF;
F->depth_1178 = ((rt_int)0LL);
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; }))) {
while (((!((rt_r_ichk(F->depth_1178) == ((rt_int)0LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) && (!f_at_kind_74((((rt_int)0LL)))))) {
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })))) {
F->depth_1178 = rt_add(rt_r_ichk(F->depth_1178), ((rt_int)1LL));
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->depth_1178 = rt_sub(rt_r_ichk(F->depth_1178), ((rt_int)1LL));
}
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
}
}
ret_:
  RT_FPOP();
  return;
}

static P917 f_type_decl_123(void) {
  struct f_type_decl_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1179 = RT_R_IUNDEF;
F->line_1179 = f_cur_line_68();
F->name_1180 = NULL;
F->params_1181 = NULL;
F->x_1182 = NULL;
F->tts_1183 = NULL;
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->name_1180 = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1183 = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1181 = f_formal_params_126();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P910)rt_nil_check((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->x_1182 = f_nn_61((((rt_int)44LL)), rt_r_ichk(F->line_1179));
(*(P917)rt_nil_check(F->x_1182)).d = F->params_1181;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1182)).b = f_formal_params_126();
}
} else {
F->x_1182 = f_nn_61((((rt_int)43LL)), rt_r_ichk(F->line_1179));
(*(P917)rt_nil_check(F->x_1182)).b = F->params_1181;
}
(*(P917)rt_nil_check(F->x_1182)).name = F->name_1180;
(*(P917)rt_nil_check(F->x_1182)).e = F->tts_1183;
(*(P917)rt_nil_check(F->x_1182)).a = f_p_subtype_92();
f_skip_rep_122();
F->result_ = F->x_1182;
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

static P917 f_formal_params_126(void) {
  struct f_formal_params_126fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1184 = NULL;
F->tail_1185 = NULL;
F->more_1186 = RT_R_EUNDEF;
F->more_1186 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1186)) {
F->mode_1187 = RT_R_IUNDEF;
F->mode_1187 = (((rt_int)1LL));
F->names_1188 = NULL;
F->ntail_1189 = NULL;
F->st_1190 = NULL;
if ((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1187 = f_mode_of_125(&(((P910)rt_nil_check((*(P912)rt_nil_check((((P914)rt_nil_check(g_toks_948))->all).p[(rt_index(rt_r_ichk(g_tpos_950), (((P914)rt_nil_check(g_toks_948))->all).lo, (((P914)rt_nil_check(g_toks_948))->all).hi) - (((P914)rt_nil_check(g_toks_948))->all).lo)])).s))->all));
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
}
f_append_65(&F->names_1188, &F->ntail_1189, f_name_node_90());
while ((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_76(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P910)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P910)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
f_append_65(&F->names_1188, &F->ntail_1189, f_name_node_90());
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1190 = f_p_subtype_92();
while ((F->names_1188 != NULL)) {
F->p_1191 = NULL;
F->p_1191 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P917)rt_nil_check(F->names_1188)).line));
(*(P917)rt_nil_check(F->p_1191)).name = (*(P917)rt_nil_check(F->names_1188)).name;
(*(P917)rt_nil_check(F->p_1191)).ival = rt_r_ichk(F->mode_1187);
(*(P917)rt_nil_check(F->p_1191)).a = F->st_1190;
f_append_65(&F->head_1184, &F->tail_1185, F->p_1191);
F->names_1188 = (*(P917)rt_nil_check(F->names_1188)).next;
}
F->more_1186 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1184;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_128(P917 owner_127) {
  struct f_imports_list_128fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_127 = owner_127;
F->head_1192 = NULL;
F->tail_1193 = NULL;
F->more_1194 = RT_R_EUNDEF;
F->more_1194 = 1;
if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P917)rt_nil_check(F->owner_127)).flag = rt_add(rt_r_ichk((*(P917)rt_nil_check(F->owner_127)).flag), ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (rt_r_echk(F->more_1194)) {
F->ro_1195 = RT_R_EUNDEF;
F->ro_1195 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1196 = NULL;
F->x_1196 = f_name_node_90();
if (rt_r_echk(F->ro_1195)) {
(*(P917)rt_nil_check(F->x_1196)).ival = ((rt_int)1LL);
}
f_append_65(&F->head_1192, &F->tail_1193, F->x_1196);
F->more_1194 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P917)rt_nil_check(F->owner_127)).d = F->head_1192;
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

static P910 f_definable_name_131(void) {
  struct f_definable_name_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))))) {
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)2LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P910)rt_nil_check((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_950), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)); b_; }));
goto ret_;
} else if (((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P910)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str("*", 1)))) {
F->r_1197 = NULL;
F->r_1197 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; }))) {
F->r_1197 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_1197))->all), rt_str("*", 1)); b_; }));
} else if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1197 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_1197))->all), rt_str("..", 2)); b_; }));
} else if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->r_1197 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_1197))->all), rt_str(",", 1)); b_; }));
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a subscripting selector is made of *, .. and ,", 46); b_; }));
}
}
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_1197))->all), rt_str(")", 1)); b_; }));
goto ret_;
}
if ((f_at_kind_74((((rt_int)1LL))) || (f_at_kind_74((((rt_int)3LL))) && f_is_definable_130(&(((P910)rt_nil_check((*(P912)rt_nil_check((((P914)rt_nil_check(g_toks_948))->all).p[(rt_index(rt_r_ichk(g_tpos_950), (((P914)rt_nil_check(g_toks_948))->all).lo, (((P914)rt_nil_check(g_toks_948))->all).hi) - (((P914)rt_nil_check(g_toks_948))->all).lo)])).s))->all))))) {
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->result_ = (*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_950), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P917 f_subprogram_decl_132(void) {
  struct f_subprogram_decl_132fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1198 = RT_R_IUNDEF;
F->line_1198 = f_cur_line_68();
F->x_1199 = NULL;
F->is_abn_1200 = RT_R_EUNDEF;
F->is_abn_1200 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1201 = RT_R_EUNDEF;
F->is_func_1201 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
F->dummy_1202 = RT_R_EUNDEF;
if (rt_r_echk(F->is_func_1201)) {
F->x_1199 = f_nn_61((((rt_int)46LL)), rt_r_ichk(F->line_1198));
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1199 = f_nn_61((((rt_int)45LL)), rt_r_ichk(F->line_1198));
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
if (rt_r_echk(F->is_abn_1200)) {
(*(P917)rt_nil_check(F->x_1199)).flag = ((rt_int)1LL);
}
(*(P917)rt_nil_check(F->x_1199)).name = f_definable_name_131();
if ((((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->x_1199)).name))->all), rt_str(">", 1)) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->x_1199)).name))->all), rt_str("<=", 2))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->x_1199)).name))->all), rt_str(">=", 2))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->x_1199)).name))->all), rt_str("/=", 2)))) {
f_fail_23(rt_r_ichk(F->line_1198), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->x_1199)).name))->all), rt_str(" is not a definable symbol", 26)); b_; }));
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1199)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1199)).a = f_formal_params_126();
}
if (rt_r_echk(F->is_func_1201)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P917)rt_nil_check(F->x_1199)).b = f_p_subtype_92();
}
F->dummy_1202 = f_imports_list_128(F->x_1199);
if (((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P917)rt_nil_check(F->x_1199)).prags == NULL)) {
(*(P917)rt_nil_check(F->x_1199)).prags = (*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P917)rt_nil_check(F->x_1199)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->x_1199)).prags))->all), (((P910)rt_nil_check((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P917)rt_nil_check(F->x_1199)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (rt_r_echk(F->is_func_1201)) {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P910)rt_nil_check(f_definable_name_131()))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->x_1199)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P910)rt_nil_check((*(P917)rt_nil_check(F->x_1199)).name))->all)); b_; }));
}
F->result_ = F->x_1199;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_capsule_decl_133(void) {
  struct f_capsule_decl_133fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1203 = NULL;
F->x_1203 = f_nn_61((((rt_int)47LL)), f_cur_line_68());
F->dummy_1204 = RT_R_EUNDEF;
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1203)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1203)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1203)).b = f_formal_params_126();
}
F->dummy_1204 = f_imports_list_128(F->x_1203);
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P917)rt_nil_check(F->x_1203)).ival = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P917)rt_nil_check(F->x_1203)).ival = ((rt_int)0LL);
} else {
F->head_1205 = NULL;
F->tail_1206 = NULL;
F->more_1207 = RT_R_EUNDEF;
F->more_1207 = 1;
while (rt_r_echk(F->more_1207)) {
F->n_1208 = NULL;
F->n_1208 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P917)rt_nil_check(F->n_1208)).ival = ((rt_int)1LL);
}
(*(P917)rt_nil_check(F->n_1208)).name = f_definable_name_131();
f_append_65(&F->head_1205, &F->tail_1206, F->n_1208);
F->more_1207 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P917)rt_nil_check(F->x_1203)).a = F->head_1205;
(*(P917)rt_nil_check(F->x_1203)).ival = ((rt_int)2LL);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P917)rt_nil_check(F->x_1203)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((((P910)rt_nil_check(f_expect_id_89()))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->x_1203)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1203;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_formal_tt_134(void) {
  struct f_formal_tt_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1209 = NULL;
F->tail_1210 = NULL;
F->more_1211 = RT_R_EUNDEF;
F->more_1211 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1211)) {
f_append_65(&F->head_1209, &F->tail_1210, f_name_node_90());
F->more_1211 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1209;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_generic_decl_135(void) {
  struct f_generic_decl_135fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1212 = NULL;
F->x_1212 = f_nn_61((((rt_int)51LL)), f_cur_line_68());
F->head_1213 = NULL;
F->tail_1214 = NULL;
F->more_1215 = RT_R_EUNDEF;
F->more_1215 = 1;
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
while (rt_r_echk(F->more_1215)) {
F->names_1216 = NULL;
F->names_1216 = f_id_list_91();
F->kind_1217 = RT_R_IUNDEF;
F->kind_1217 = ((rt_int)6LL);
F->st_1218 = NULL;
F->items_1219 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1217 = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1217 = ((rt_int)2LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1217 = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1217 = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1217 = ((rt_int)5LL);
} else if (((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P910)rt_nil_check((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("STRING", 6))) && (!((f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P910)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->kind_1217 = ((rt_int)7LL);
} else if (((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P910)rt_nil_check((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("ENUM", 4))) && (!((f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P910)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->kind_1217 = ((rt_int)8LL);
} else {
F->st_1218 = f_p_subtype_92();
}
if (((rt_r_ichk(F->kind_1217) <= ((rt_int)5LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
F->items_1219 = f_type_list_136();
}
if (((rt_r_ichk(F->kind_1217) == ((rt_int)4LL)) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1218 = f_p_subtype_92();
}
while ((F->names_1216 != NULL)) {
F->p_1220 = NULL;
F->p_1220 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P917)rt_nil_check(F->names_1216)).line));
(*(P917)rt_nil_check(F->p_1220)).name = (*(P917)rt_nil_check(F->names_1216)).name;
(*(P917)rt_nil_check(F->p_1220)).ival = rt_r_ichk(F->kind_1217);
(*(P917)rt_nil_check(F->p_1220)).a = F->st_1218;
(*(P917)rt_nil_check(F->p_1220)).b = F->items_1219;
f_append_65(&F->head_1213, &F->tail_1214, F->p_1220);
F->names_1216 = (*(P917)rt_nil_check(F->names_1216)).next;
}
F->more_1215 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->nhead_1221 = NULL;
F->ntail_1222 = NULL;
F->more_1215 = 1;
while (rt_r_echk(F->more_1215)) {
F->it_1223 = NULL;
F->it_1223 = f_nn_61((((rt_int)52LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
(*(P917)rt_nil_check(F->it_1223)).ival = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
(*(P917)rt_nil_check(F->it_1223)).ival = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
(*(P917)rt_nil_check(F->it_1223)).ival = ((rt_int)5LL);
}
(*(P917)rt_nil_check(F->it_1223)).name = f_definable_name_131();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P917)rt_nil_check(F->it_1223)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P917)rt_nil_check(F->it_1223)).b = f_type_list_136();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
(*(P917)rt_nil_check(F->it_1223)).a = f_p_subtype_92();
}
f_append_65(&F->nhead_1221, &F->ntail_1222, F->it_1223);
F->more_1215 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P917)rt_nil_check(F->x_1212)).d = F->nhead_1221;
}
(*(P917)rt_nil_check(F->x_1212)).a = F->head_1213;
(*(P917)rt_nil_check(F->x_1212)).b = f_declaration_119();
(*(P917)rt_nil_check(F->x_1212)).name = (*(P917)rt_nil_check((*(P917)rt_nil_check(F->x_1212)).b)).name;
F->result_ = F->x_1212;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_type_list_136(void) {
  struct f_type_list_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1224 = NULL;
F->tail_1225 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1226 = RT_R_EUNDEF;
F->more_1226 = 1;
while (rt_r_echk(F->more_1226)) {
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P910)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(",", 1)) || rt_str_eq((((P910)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(")", 1))))) {
F->n_1227 = NULL;
F->n_1227 = f_nn_61((((rt_int)80LL)), f_cur_line_68());
(*(P917)rt_nil_check(F->n_1227)).name = f_expect_id_89();
f_append_65(&F->head_1224, &F->tail_1225, F->n_1227);
} else {
f_append_65(&F->head_1224, &F->tail_1225, f_p_subtype_92());
}
F->more_1226 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1224;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_task_decl_137(void) {
  struct f_task_decl_137fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1228 = NULL;
F->x_1228 = f_nn_61((((rt_int)50LL)), f_cur_line_68());
F->dummy_1229 = RT_R_EUNDEF;
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1228)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1228)).e = f_formal_tt_134();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1228)).a = f_formal_params_126();
}
F->dummy_1229 = f_imports_list_128(F->x_1228);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P917)rt_nil_check(F->x_1228)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P910)rt_nil_check(f_expect_id_89()))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->x_1228)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P910)rt_nil_check((*(P917)rt_nil_check(F->x_1228)).name))->all)); b_; }));
}
F->result_ = F->x_1228;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_expose_decl_138(void) {
  struct f_expose_decl_138fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1230 = NULL;
F->x_1230 = f_nn_61((((rt_int)48LL)), f_cur_line_68());
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P917)rt_nil_check(F->x_1230)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1231 = NULL;
F->tail_1232 = NULL;
F->more_1233 = RT_R_EUNDEF;
F->more_1233 = 1;
while (rt_r_echk(F->more_1233)) {
F->n_1234 = NULL;
F->n_1234 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P917)rt_nil_check(F->n_1234)).ival = ((rt_int)1LL);
}
(*(P917)rt_nil_check(F->n_1234)).name = f_definable_name_131();
f_append_65(&F->head_1231, &F->tail_1232, F->n_1234);
F->more_1233 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P917)rt_nil_check(F->x_1230)).a = F->head_1231;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P917)rt_nil_check(F->x_1230)).flag = ((rt_int)1LL);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P917)rt_nil_check(F->x_1230)).flag = rt_add(rt_r_ichk((*(P917)rt_nil_check(F->x_1230)).flag), ((rt_int)2LL));
}
(*(P917)rt_nil_check(F->x_1230)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1230)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1230)).b = f_actual_params_94();
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1235 = NULL;
F->tail_1236 = NULL;
F->more_1237 = RT_R_EUNDEF;
F->more_1237 = 1;
while (rt_r_echk(F->more_1237)) {
F->n_1238 = NULL;
F->n_1238 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
F->tgt_1239 = NULL;
F->tgt_1239 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P917)rt_nil_check(F->n_1238)).name = f_definable_name_131();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P917)rt_nil_check(F->tgt_1239)).name = f_definable_name_131();
(*(P917)rt_nil_check(F->n_1238)).a = F->tgt_1239;
f_append_65(&F->head_1235, &F->tail_1236, F->n_1238);
F->more_1237 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P917)rt_nil_check(F->x_1230)).c = F->head_1235;
}
F->result_ = F->x_1230;
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

static P917 f_statement_141(void) {
  struct f_statement_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1240 = NULL;
F->ltail_1241 = NULL;
F->match_1242 = NULL;
F->s_1243 = NULL;
while (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P910)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_65(&F->labels_1240, &F->ltail_1241, f_name_node_90());
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
}
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_140(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P910)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all); b_; })))) {
F->match_1242 = f_expect_id_89();
}
F->s_1243 = f_unlabeled_statement_142();
if ((F->match_1242 != NULL)) {
if ((((((((rt_r_ichk((*(P917)rt_nil_check(F->s_1243)).kind) != (((rt_int)22LL))) && (rt_r_ichk((*(P917)rt_nil_check(F->s_1243)).kind) != (((rt_int)23LL)))) && (rt_r_ichk((*(P917)rt_nil_check(F->s_1243)).kind) != (((rt_int)24LL)))) && (rt_r_ichk((*(P917)rt_nil_check(F->s_1243)).kind) != (((rt_int)25LL)))) && (rt_r_ichk((*(P917)rt_nil_check(F->s_1243)).kind) != (((rt_int)26LL)))) && (rt_r_ichk((*(P917)rt_nil_check(F->s_1243)).kind) != (((rt_int)35LL)))) && (rt_r_ichk((*(P917)rt_nil_check(F->s_1243)).kind) != (((rt_int)36LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_1243)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P910)rt_nil_check(f_expect_id_89()))->all), (((P910)rt_nil_check(F->match_1242))->all)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_1243)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P910)rt_nil_check(F->match_1242))->all)); b_; }));
}
(*(P917)rt_nil_check(F->s_1243)).tag = F->match_1242;
}
(*(P917)rt_nil_check(F->s_1243)).labels = F->labels_1240;
F->result_ = F->s_1243;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_unlabeled_statement_142(void) {
  struct f_unlabeled_statement_142fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1244 = RT_R_IUNDEF;
F->line_1244 = f_cur_line_68();
F->x_1245 = NULL;
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
F->x_1245 = f_nn_61((((rt_int)25LL)), rt_r_ichk(F->line_1244));
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1245)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1245;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_150();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1245 = f_nn_61((((rt_int)27LL)), rt_r_ichk(F->line_1244));
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1245)).name = f_expect_id_89();
F->result_ = F->x_1245;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1245 = f_nn_61((((rt_int)28LL)), rt_r_ichk(F->line_1244));
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P917)rt_nil_check(F->x_1245)).a = f_expr_103();
}
F->result_ = F->x_1245;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1245 = f_nn_61((((rt_int)29LL)), rt_r_ichk(F->line_1244));
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1245)).name = f_expect_id_89();
F->result_ = F->x_1245;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1245 = f_nn_61((((rt_int)30LL)), rt_r_ichk(F->line_1244));
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1245)).name = f_expect_id_89();
F->result_ = F->x_1245;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)31LL)), rt_r_ichk(F->line_1244));
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1245 = f_nn_61((((rt_int)34LL)), rt_r_ichk(F->line_1244));
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1245)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1245)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1245)).b = f_actual_params_94();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P917)rt_nil_check(F->x_1245)).a = f_postfix_113();
F->result_ = F->x_1245;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1246 = NULL;
F->tail_1247 = NULL;
F->x_1245 = f_nn_61((((rt_int)35LL)), rt_r_ichk(F->line_1244));
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1248 = NULL;
F->itail_1249 = NULL;
F->more_1250 = RT_R_EUNDEF;
F->more_1250 = 1;
while (rt_r_echk(F->more_1250)) {
f_append_65(&F->invs_1248, &F->itail_1249, f_postfix_113());
F->more_1250 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1246, &F->tail_1247, f_arm_146(F->invs_1248, f_body_117(), rt_r_ichk(F->line_1244)));
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P917)rt_nil_check(F->x_1245)).a = F->head_1246;
F->result_ = F->x_1245;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1245 = f_nn_61((((rt_int)36LL)), rt_r_ichk(F->line_1244));
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1245)).a = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P917)rt_nil_check(F->x_1245)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1245;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1245 = f_nn_61((((rt_int)32LL)), rt_r_ichk(F->line_1244));
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1245)).a = f_postfix_113();
if ((!(f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P910)rt_nil_check((*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P917)rt_nil_check(F->x_1245)).b = f_actual_params_94();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P917)rt_nil_check(F->x_1245)).c = f_expr_103();
}
F->result_ = F->x_1245;
goto ret_;
}
{
F->target_1251 = NULL;
F->target_1251 = f_postfix_113();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1245 = f_nn_61((((rt_int)20LL)), rt_r_ichk(F->line_1244));
(*(P917)rt_nil_check(F->x_1245)).a = F->target_1251;
(*(P917)rt_nil_check(F->x_1245)).b = f_expr_103();
} else {
F->x_1245 = f_nn_61((((rt_int)21LL)), rt_r_ichk(F->line_1244));
(*(P917)rt_nil_check(F->x_1245)).a = F->target_1251;
}
}
F->result_ = F->x_1245;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_arm_146(P917 cond_143, P917 b_144, rt_int line_145) {
  struct f_arm_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_143 = cond_143;
F->b_144 = b_144;
F->line_145 = line_145;
F->x_1252 = NULL;
F->x_1252 = f_nn_61((((rt_int)60LL)), F->line_145);
(*(P917)rt_nil_check(F->x_1252)).a = F->cond_143;
(*(P917)rt_nil_check(F->x_1252)).b = F->b_144;
F->result_ = F->x_1252;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_if_stmt_147(void) {
  struct f_if_stmt_147fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1253 = NULL;
F->x_1253 = f_nn_61((((rt_int)22LL)), f_cur_line_68());
F->head_1254 = NULL;
F->tail_1255 = NULL;
F->cond_1256 = NULL;
F->go_1257 = RT_R_EUNDEF;
F->go_1257 = 1;
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
F->cond_1256 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1254, &F->tail_1255, f_arm_146(F->cond_1256, f_body_117(), rt_r_ichk((*(P917)rt_nil_check(F->x_1253)).line)));
while (rt_r_echk(F->go_1257)) {
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1256 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1254, &F->tail_1255, f_arm_146(F->cond_1256, f_body_117(), rt_r_ichk((*(P917)rt_nil_check(F->x_1253)).line)));
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P917)rt_nil_check(F->x_1253)).flag = ((rt_int)1LL);
(*(P917)rt_nil_check(F->x_1253)).b = f_body_117();
} else {
F->go_1257 = 0;
}
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P917)rt_nil_check(F->x_1253)).a = F->head_1254;
F->result_ = F->x_1253;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_case_stmt_148(void) {
  struct f_case_stmt_148fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1258 = NULL;
F->x_1258 = f_nn_61((((rt_int)23LL)), f_cur_line_68());
F->head_1259 = NULL;
F->tail_1260 = NULL;
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1258)).a = f_expr_103();
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1261 = NULL;
F->ltail_1262 = NULL;
F->more_1263 = RT_R_EUNDEF;
F->more_1263 = 1;
while (rt_r_echk(F->more_1263)) {
F->l_1264 = NULL;
F->l_1264 = f_nn_61((((rt_int)61LL)), f_cur_line_68());
(*(P917)rt_nil_check(F->l_1264)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P917)rt_nil_check(F->l_1264)).b = f_expr_103();
}
f_append_65(&F->labs_1261, &F->ltail_1262, F->l_1264);
F->more_1263 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1259, &F->tail_1260, f_arm_146(F->labs_1261, f_body_117(), rt_r_ichk((*(P917)rt_nil_check(F->x_1258)).line)));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P917)rt_nil_check(F->x_1258)).flag = ((rt_int)1LL);
(*(P917)rt_nil_check(F->x_1258)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P917)rt_nil_check(F->x_1258)).b = F->head_1259;
F->result_ = F->x_1258;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_repeat_stmt_149(void) {
  struct f_repeat_stmt_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1265 = NULL;
F->x_1265 = f_nn_61((((rt_int)24LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P917)rt_nil_check(F->x_1265)).flag = ((rt_int)1LL);
(*(P917)rt_nil_check(F->x_1265)).name = f_expect_id_89();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P917)rt_nil_check(F->x_1265)).ival = ((rt_int)1LL);
}
(*(P917)rt_nil_check(F->x_1265)).a = f_p_subtype_92();
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P917)rt_nil_check(F->x_1265)).a = f_expr_103();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P917)rt_nil_check(F->x_1265)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1265;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_guard_stmt_150(void) {
  struct f_guard_stmt_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1266 = NULL;
F->x_1266 = f_nn_61((((rt_int)26LL)), f_cur_line_68());
F->head_1267 = NULL;
F->tail_1268 = NULL;
g_tpos_950 = rt_add(rt_r_ichk(g_tpos_950), ((rt_int)1LL));
(*(P917)rt_nil_check(F->x_1266)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1269 = NULL;
F->h_1269 = f_nn_61((((rt_int)62LL)), f_cur_line_68());
(*(P917)rt_nil_check(F->h_1269)).a = f_id_list_91();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P917)rt_nil_check(F->h_1269)).b = f_body_117();
f_append_65(&F->head_1267, &F->tail_1268, F->h_1269);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P917)rt_nil_check(F->x_1266)).flag = ((rt_int)1LL);
(*(P917)rt_nil_check(F->x_1266)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P917)rt_nil_check(F->x_1266)).b = F->head_1267;
F->result_ = F->x_1266;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_program_151(void) {
  struct f_program_151fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1270 = NULL;
F->tail_1271 = NULL;
while ((!f_at_kind_74((((rt_int)0LL))))) {
if ((!f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1272 = NULL;
F->pr_1272 = (*(P912)rt_nil_check(({ A916 b_ = (((P914)rt_nil_check(g_toks_948))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_950), b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1273 = NULL;
F->u_1273 = f_capsule_decl_133();
(*(P917)rt_nil_check(F->u_1273)).prags = F->pr_1272;
f_append_65(&F->head_1270, &F->tail_1271, F->u_1273);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1270;
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
F->h_1274 = RT_R_IUNDEF;
F->h_1274 = ((rt_int)0LL);
{ rt_int lo1276 = ((rt_int)1LL), hi1277 = ((rt_int)(((*F->s_152)).len));
for (rt_int it1278 = lo1276; it1278 <= hi1277; it1278++) {
F->i_1275 = it1278;
F->h_1274 = rt_mod(rt_add(rt_mul(rt_r_ichk(F->h_1274), ((rt_int)31LL)), ((rt_int)(rt_r_echk(rt_str_get((*F->s_152), F->i_1275))) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = rt_r_ichk(F->h_1274);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P927 f_lookup_155(rstr *name_154) {
  struct f_lookup_155fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_154 = name_154;
F->y_1279 = NULL;
F->y_1279 = ({ A933 b_ = (((P931)rt_nil_check(g_table_953))->all); b_.p[(rt_index(f_hash_153(&(*F->name_154)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_954 != NULL)) {
while ((F->y_1279 != NULL)) {
if (((rt_r_ichk((*(P927)rt_nil_check(F->y_1279)).depth) >= rt_r_ichk(g_gdepth_986)) && rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_1279)).name))->all), (*F->name_154)))) {
F->result_ = F->y_1279;
goto ret_;
}
F->y_1279 = (*(P927)rt_nil_check(F->y_1279)).chain;
}
F->y_1279 = ({ A933 b_ = (((P931)rt_nil_check(g_genv_954))->all); b_.p[(rt_index(f_hash_153(&(*F->name_154)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1279 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_1279)).name))->all), (*F->name_154))) {
F->result_ = F->y_1279;
goto ret_;
}
F->y_1279 = (*(P927)rt_nil_check(F->y_1279)).chain;
}
F->y_1279 = ({ A933 b_ = (((P931)rt_nil_check(g_table_953))->all); b_.p[(rt_index(f_hash_153(&(*F->name_154)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1279 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_1279)).name))->all), (*F->name_154))) {
F->result_ = F->y_1279;
goto ret_;
}
F->y_1279 = (*(P927)rt_nil_check(F->y_1279)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P927 f_lookup_decl_157(P917 d_156) {
  struct f_lookup_decl_157fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_156 = d_156;
F->y_1280 = NULL;
F->y_1280 = ({ A933 b_ = (((P931)rt_nil_check(g_table_953))->all); b_.p[(rt_index(f_hash_153(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->d_156)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1280 != NULL)) {
if (((*(P927)rt_nil_check(F->y_1280)).decl == F->d_156)) {
F->result_ = F->y_1280;
goto ret_;
}
F->y_1280 = (*(P927)rt_nil_check(F->y_1280)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_160(P927 y_158, rt_int line_159) {
  struct f_define_160fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_158 = y_158;
F->line_159 = line_159;
F->h_1281 = RT_R_IUNDEF;
F->h_1281 = f_hash_153(&(((P910)rt_nil_check((*(P927)rt_nil_check(F->y_158)).name))->all));
F->z_1282 = NULL;
F->z_1282 = ({ A933 b_ = (((P931)rt_nil_check(g_table_953))->all); b_.p[(rt_index(rt_r_ichk(F->h_1281), b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1282 != NULL)) {
if ((((rt_r_ichk((*(P927)rt_nil_check(F->z_1282)).depth) == rt_r_ichk(g_depth_956)) && rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->z_1282)).name))->all), (((P910)rt_nil_check((*(P927)rt_nil_check(F->y_158)).name))->all))) && (!(((f_overloadable_162(F->y_158) && f_overloadable_162(F->z_1282)) && (rt_r_ichk((*(P927)rt_nil_check(F->z_1282)).kind) == rt_r_ichk((*(P927)rt_nil_check(F->y_158)).kind))) && (!(f_same_signature_168((*(P927)rt_nil_check(F->y_158)).params, (*(P927)rt_nil_check(F->z_1282)).params) && f_same_tt_165((*(P927)rt_nil_check(F->y_158)).decl, (*(P927)rt_nil_check(F->z_1282)).decl))))))) {
f_fail_23(F->line_159, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_158)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1282 = (*(P927)rt_nil_check(F->z_1282)).chain;
}
(*(P927)rt_nil_check(F->y_158)).depth = rt_r_ichk(g_depth_956);
(*(P927)rt_nil_check(F->y_158)).chain = ({ A933 b_ = (((P931)rt_nil_check(g_table_953))->all); b_.p[(rt_index(rt_r_ichk(F->h_1281), b_.lo, b_.hi) - b_.lo)]; });
(((P931)rt_nil_check(g_table_953))->all).p[(rt_index(rt_r_ichk(F->h_1281), (((P931)rt_nil_check(g_table_953))->all).lo, (((P931)rt_nil_check(g_table_953))->all).hi) - (((P931)rt_nil_check(g_table_953))->all).lo)] = F->y_158;
(*(P927)rt_nil_check(F->y_158)).stack = g_scope_stack_957;
g_scope_stack_957 = F->y_158;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_162(P927 y_161) {
  struct f_overloadable_162fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_161 = y_161;
F->result_ = ((((rt_r_ichk((*(P927)rt_nil_check(F->y_161)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P927)rt_nil_check(F->y_161)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P927)rt_nil_check(F->y_161)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P927)rt_nil_check(F->y_161)).kind) == (((rt_int)8LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_165(P917 a_163, P917 b_164) {
  struct f_same_tt_165fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_163 = a_163;
F->b_164 = b_164;
F->x_1283 = NULL;
F->y_1284 = NULL;
if (((F->a_163 == NULL) || (F->b_164 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1283 = (*(P917)rt_nil_check(F->a_163)).e;
F->y_1284 = (*(P917)rt_nil_check(F->b_164)).e;
while (((F->x_1283 != NULL) && (F->y_1284 != NULL))) {
if ((!rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->x_1283)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->y_1284)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1283 = (*(P917)rt_nil_check(F->x_1283)).next;
F->y_1284 = (*(P917)rt_nil_check(F->y_1284)).next;
}
F->result_ = ((F->x_1283 == NULL) && (F->y_1284 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_168(P929 a_166, P929 b_167) {
  struct f_same_signature_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_166 = a_166;
F->b_167 = b_167;
F->x_1285 = NULL;
F->x_1285 = F->a_166;
F->y_1286 = NULL;
F->y_1286 = F->b_167;
while (((F->x_1285 != NULL) && (F->y_1286 != NULL))) {
if ((!f_same_213((*(P929)rt_nil_check(F->x_1285)).t, (*(P929)rt_nil_check(F->y_1286)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1285 = (*(P929)rt_nil_check(F->x_1285)).next;
F->y_1286 = (*(P929)rt_nil_check(F->y_1286)).next;
}
F->result_ = ((F->x_1285 == NULL) && (F->y_1286 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_169(void) {
  struct f_open_scope_169fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_956 = rt_add(rt_r_ichk(g_depth_956), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_170(void) {
  struct f_close_scope_170fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_957 != NULL) && (rt_r_ichk((*(P927)rt_nil_check(g_scope_stack_957)).depth) == rt_r_ichk(g_depth_956)))) {
(((P931)rt_nil_check(g_table_953))->all).p[(rt_index(f_hash_153(&(((P910)rt_nil_check((*(P927)rt_nil_check(g_scope_stack_957)).name))->all)), (((P931)rt_nil_check(g_table_953))->all).lo, (((P931)rt_nil_check(g_table_953))->all).hi) - (((P931)rt_nil_check(g_table_953))->all).lo)] = (*(P927)rt_nil_check(g_scope_stack_957)).chain;
g_scope_stack_957 = (*(P927)rt_nil_check(g_scope_stack_957)).stack;
}
g_depth_956 = rt_sub(rt_r_ichk(g_depth_956), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P927 f_new_sym_173(rt_int kind_171, P910 name_172) {
  struct f_new_sym_173fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_171 = kind_171;
F->name_172 = name_172;
F->y_1287 = NULL;
{ R928 *cell1288 = rt_alloc(sizeof(R928));
(*cell1288).name = NULL;
(*cell1288).t = NULL;
(*cell1288).c = NULL;
(*cell1288).access = NULL;
(*cell1288).cname = NULL;
(*cell1288).st = NULL;
(*cell1288).decl = NULL;
(*cell1288).params = NULL;
(*cell1288).result = NULL;
(*cell1288).members = NULL;
(*cell1288).mnext = NULL;
(*cell1288).binds = NULL;
(*cell1288).insts = NULL;
(*cell1288).env = NULL;
(*cell1288).chain = NULL;
(*cell1288).stack = NULL;
(*cell1288).owner = NULL;
(*cell1288).gctx = NULL;
(*cell1288).mv = NULL;
(*cell1288).reqs = NULL;
(*cell1288).home = NULL;
(*cell1288).capn = NULL;
(*cell1288).tbinds = NULL;
F->y_1287 = cell1288;
}
(*(P927)rt_nil_check(F->y_1287)).kind = F->kind_171;
(*(P927)rt_nil_check(F->y_1287)).name = F->name_172;
F->result_ = F->y_1287;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P923 f_new_typ_175(rt_int kind_174) {
  struct f_new_typ_175fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_174 = kind_174;
F->t_1289 = NULL;
{ R924 *cell1290 = rt_alloc(sizeof(R924));
(*cell1290).name = NULL;
(*cell1290).lits = NULL;
(*cell1290).elem = NULL;
(*cell1290).idx = NULL;
(*cell1290).idx2 = NULL;
(*cell1290).elemcons = NULL;
(*cell1290).elemst = NULL;
(*cell1290).under = NULL;
(*cell1290).tparams = NULL;
(*cell1290).ocap = NULL;
(*cell1290).fields = NULL;
(*cell1290).target = NULL;
(*cell1290).decl = NULL;
(*cell1290).cname = NULL;
(*cell1290).initp = NULL;
(*cell1290).finalp = NULL;
(*cell1290).tpsyms = NULL;
(*cell1290).gen = NULL;
(*cell1290).gbinds = NULL;
(*cell1290).next = NULL;
(*cell1290).idxs = NULL;
(*cell1290).assignp = NULL;
(*cell1290).eqp = NULL;
(*cell1290).ltp = NULL;
F->t_1289 = cell1290;
}
(*(P923)rt_nil_check(F->t_1289)).kind = F->kind_174;
F->result_ = F->t_1289;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P919 f_new_cons_176(void) {
  struct f_new_cons_176fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1291 = NULL;
{ R920 *cell1292 = rt_alloc(sizeof(R920));
(*cell1292).lo = NULL;
(*cell1292).hi = NULL;
(*cell1292).lo2 = NULL;
(*cell1292).hi2 = NULL;
(*cell1292).slen = NULL;
(*cell1292).args = NULL;
(*cell1292).prec = NULL;
(*cell1292).bnds = NULL;
F->c_1291 = cell1292;
}
F->result_ = F->c_1291;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_178(P923 t_177) {
  struct f_scalar_kind_178fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_177 = t_177;
F->result_ = ((F->t_177 != NULL) && (((rt_r_ichk((*(P923)rt_nil_check(F->t_177)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_177)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_177)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_180(P923 t_179) {
  struct f_bound_ctype_180fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_179 = t_179;
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_179)).kind) == (((rt_int)3LL)))) {
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

static rstr f_cbound_183(P919 c_181, rstr *b_182) {
  struct f_cbound_183fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_181 = c_181;
F->b_182 = b_182;
F->p_1293 = NULL;
F->p_1293 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!rt_r_echk((*(P919)rt_nil_check(F->c_181)).dyn)) || (rt_r_ichk((*(P919)rt_nil_check(F->c_181)).lvl) <= ((rt_int)0LL)))) {
F->result_ = (*F->b_182);
goto ret_;
}
{ rt_int lo1295 = ((rt_int)1LL), hi1296 = rt_sub(rt_r_ichk(g_cur_level_970), rt_r_ichk((*(P919)rt_nil_check(F->c_181)).lvl));
for (rt_int it1297 = lo1295; it1297 <= hi1296; it1297++) {
F->i_1294 = it1297;
F->p_1293 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->p_1293))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->p_1293))->all), rt_str("->", 2)), (*F->b_182));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_185(P919 c_184) {
  struct f_clo_185fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_184 = c_184;
F->result_ = f_cbound_183(F->c_184, &(((P910)rt_nil_check((*(P919)rt_nil_check(F->c_184)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_187(P919 c_186) {
  struct f_chi_187fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_186 = c_186;
F->result_ = f_cbound_183(F->c_186, &(((P910)rt_nil_check((*(P919)rt_nil_check(F->c_186)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_190(P923 t_188, P919 c_189) {
  struct f_sub_lo_190fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_188 = t_188;
F->c_189 = c_189;
if (((F->c_189 != NULL) && ((*(P919)rt_nil_check(F->c_189)).lo != NULL))) {
F->result_ = f_clo_185(F->c_189);
goto ret_;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_188)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_188)).kind) == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_193(P923 t_191, P919 c_192) {
  struct f_sub_hi_193fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_191 = t_191;
F->c_192 = c_192;
if (((F->c_192 != NULL) && ((*(P919)rt_nil_check(F->c_192)).lo != NULL))) {
F->result_ = f_chi_187(F->c_192);
goto ret_;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_191)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_191)).kind) == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_67((*(P923)rt_nil_check(F->t_191)).lits), ((rt_int)1LL)));
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
if ((!rt_r_echk(g_in_func_969))) {
F->g_1298 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_194)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_963, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_195)), rt_str(" ", 1)), F->g_1298), rt_str(";", 1)); b_; }));
g_st_field_975 = f_mk_3(&F->g_1298);
F->result_ = F->g_1298;
goto ret_;
}
{
F->f_1299 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_194), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_968, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_195)), rt_str(" ", 1)), F->f_1299), rt_str(";", 1)); b_; }));
g_st_field_975 = f_mk_3(&F->f_1299);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1299);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P919 f_copy_cons_198(P919 c_197) {
  struct f_copy_cons_198fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_197 = c_197;
F->r_1300 = NULL;
{ R920 *cell1301 = rt_alloc(sizeof(R920));
(*cell1301).lo = NULL;
(*cell1301).hi = NULL;
(*cell1301).lo2 = NULL;
(*cell1301).hi2 = NULL;
(*cell1301).slen = NULL;
(*cell1301).args = NULL;
(*cell1301).prec = NULL;
(*cell1301).bnds = NULL;
F->r_1300 = cell1301;
}
(*(P919)rt_nil_check(F->r_1300)).lo = (*(P919)rt_nil_check(F->c_197)).lo;
(*(P919)rt_nil_check(F->r_1300)).hi = (*(P919)rt_nil_check(F->c_197)).hi;
(*(P919)rt_nil_check(F->r_1300)).lo2 = (*(P919)rt_nil_check(F->c_197)).lo2;
(*(P919)rt_nil_check(F->r_1300)).hi2 = (*(P919)rt_nil_check(F->c_197)).hi2;
(*(P919)rt_nil_check(F->r_1300)).slen = (*(P919)rt_nil_check(F->c_197)).slen;
(*(P919)rt_nil_check(F->r_1300)).mlo = rt_r_ichk((*(P919)rt_nil_check(F->c_197)).mlo);
(*(P919)rt_nil_check(F->r_1300)).mhi = rt_r_ichk((*(P919)rt_nil_check(F->c_197)).mhi);
(*(P919)rt_nil_check(F->r_1300)).hasm = rt_r_echk((*(P919)rt_nil_check(F->c_197)).hasm);
(*(P919)rt_nil_check(F->r_1300)).args = (*(P919)rt_nil_check(F->c_197)).args;
(*(P919)rt_nil_check(F->r_1300)).dyn = rt_r_echk((*(P919)rt_nil_check(F->c_197)).dyn);
(*(P919)rt_nil_check(F->r_1300)).lvl = rt_r_ichk((*(P919)rt_nil_check(F->c_197)).lvl);
(*(P919)rt_nil_check(F->r_1300)).prec = (*(P919)rt_nil_check(F->c_197)).prec;
F->result_ = F->r_1300;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P919 f_freeze_201(P919 c_199, P923 t_200) {
  struct f_freeze_201fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_199 = c_199;
F->t_200 = t_200;
F->r_1302 = NULL;
F->saved_field_1303 = NULL;
F->saved_field_1303 = g_st_field_975;
if ((((((F->c_199 == NULL) || ((*(P919)rt_nil_check(F->c_199)).lo == NULL)) || rt_r_echk((*(P919)rt_nil_check(F->c_199)).hasm)) || rt_r_echk((*(P919)rt_nil_check(F->c_199)).dyn)) || (!f_scalar_kind_178(F->t_200)))) {
F->result_ = F->c_199;
goto ret_;
}
F->r_1302 = f_copy_cons_198(F->c_199);
{
F->ct_1304 = rt_str_copy(f_bound_ctype_180(F->t_200));
F->la_1305 = rt_str_copy(f_raw_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1304));
F->lf_1306 = rt_str_copy((((P910)rt_nil_check(g_st_field_975))->all));
F->ha_1307 = rt_str_copy(f_raw_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1304));
F->hf_1308 = rt_str_copy((((P910)rt_nil_check(g_st_field_975))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1305, rt_str(" = ", 3)), f_clo_185(F->c_199)), rt_str("; ", 2)), F->ha_1307), rt_str(" = ", 3)), f_chi_187(F->c_199)), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_969)) {
(*(P919)rt_nil_check(F->r_1302)).lo = f_mk_3(&F->lf_1306);
(*(P919)rt_nil_check(F->r_1302)).hi = f_mk_3(&F->hf_1308);
(*(P919)rt_nil_check(F->r_1302)).dyn = 1;
(*(P919)rt_nil_check(F->r_1302)).lvl = rt_r_ichk(g_cur_level_970);
} else {
(*(P919)rt_nil_check(F->r_1302)).lo = f_mk_3(&F->la_1305);
(*(P919)rt_nil_check(F->r_1302)).hi = f_mk_3(&F->ha_1307);
(*(P919)rt_nil_check(F->r_1302)).dyn = 0;
}
}
g_st_field_975 = F->saved_field_1303;
F->result_ = F->r_1302;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_205(P923 t_202, P919 c_203, rstr *v_204) {
  struct f_checked_205fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_202 = t_202;
F->c_203 = c_203;
F->v_204 = v_204;
if ((((F->c_203 == NULL) || (!f_scalar_kind_178(F->t_202))) || f_suppressed_466(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_204);
goto ret_;
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->t_202)).kind) != (((rt_int)3LL))) && rt_r_echk((*(P919)rt_nil_check(F->c_203)).hasm))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_204)), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P919)rt_nil_check(F->c_203)).mlo))), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P919)rt_nil_check(F->c_203)).mhi))), rt_str(")", 1));
goto ret_;
} else if (((*(P919)rt_nil_check(F->c_203)).lo == NULL)) {
F->result_ = (*F->v_204);
goto ret_;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_202)).kind) == (((rt_int)3LL)))) {
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

static int f_same_lits_208(P917 a_206, P917 b_207) {
  struct f_same_lits_208fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_206 = a_206;
F->b_207 = b_207;
F->x_1309 = NULL;
F->x_1309 = F->a_206;
F->y_1310 = NULL;
F->y_1310 = F->b_207;
while (((F->x_1309 != NULL) && (F->y_1310 != NULL))) {
if ((!rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->x_1309)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->y_1310)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1309 = (*(P917)rt_nil_check(F->x_1309)).next;
F->y_1310 = (*(P917)rt_nil_check(F->y_1310)).next;
}
F->result_ = ((F->x_1309 == NULL) && (F->y_1310 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P923 f_str_elem_210(P923 t_209) {
  struct f_str_elem_210fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_209 = t_209;
if (((*(P923)rt_nil_check(F->t_209)).elem == NULL)) {
F->result_ = g_ty_ascii_1000;
goto ret_;
}
F->result_ = (*(P923)rt_nil_check(F->t_209)).elem;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_213(P923 a_211, P923 b_212) {
  struct f_same_213fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_211 = a_211;
F->b_212 = b_212;
if ((F->a_211 == F->b_212)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_211 == NULL) || (F->b_212 == NULL)) || (rt_r_ichk((*(P923)rt_nil_check(F->a_211)).kind) != rt_r_ichk((*(P923)rt_nil_check(F->b_212)).kind)))) {
F->result_ = 0;
goto ret_;
}
if (((rt_r_ichk((*(P923)rt_nil_check(F->a_211)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->a_211)).kind) == (((rt_int)10LL))))) {
F->result_ = f_same_213(f_str_elem_210(F->a_211), f_str_elem_210(F->b_212));
goto ret_;
}
if (((((rt_r_ichk((*(P923)rt_nil_check(F->a_211)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->a_211)).kind) == (((rt_int)2LL)))) || (rt_r_ichk((*(P923)rt_nil_check(F->a_211)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P923)rt_nil_check(F->a_211)).kind) == (((rt_int)9LL))))) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->a_211)).kind) == (((rt_int)4LL)))) {
F->result_ = f_same_lits_208((*(P923)rt_nil_check(F->a_211)).lits, (*(P923)rt_nil_check(F->b_212)).lits);
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->a_211)).kind) == (((rt_int)6LL)))) {
F->x_1311 = NULL;
F->x_1311 = (*(P923)rt_nil_check(F->a_211)).idxs;
F->y_1312 = NULL;
F->y_1312 = (*(P923)rt_nil_check(F->b_212)).idxs;
while (((F->x_1311 != NULL) && (F->y_1312 != NULL))) {
if ((!f_same_213((*(P938)rt_nil_check(F->x_1311)).t, (*(P938)rt_nil_check(F->y_1312)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1311 = (*(P938)rt_nil_check(F->x_1311)).next;
F->y_1312 = (*(P938)rt_nil_check(F->y_1312)).next;
}
F->result_ = (((F->x_1311 == NULL) && (F->y_1312 == NULL)) && f_same_213((*(P923)rt_nil_check(F->a_211)).elem, (*(P923)rt_nil_check(F->b_212)).elem));
goto ret_;
}
if (((rt_r_ichk((*(P923)rt_nil_check(F->a_211)).kind) == (((rt_int)16LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->a_211)).kind) == (((rt_int)12LL))))) {
F->result_ = f_same_213((*(P923)rt_nil_check(F->a_211)).elem, (*(P923)rt_nil_check(F->b_212)).elem);
goto ret_;
}
if (((rt_r_ichk((*(P923)rt_nil_check(F->a_211)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->a_211)).kind) == (((rt_int)17LL))))) {
F->f_1313 = NULL;
F->f_1313 = (*(P923)rt_nil_check(F->a_211)).fields;
F->g_1314 = NULL;
F->g_1314 = (*(P923)rt_nil_check(F->b_212)).fields;
while (((F->f_1313 != NULL) && (F->g_1314 != NULL))) {
if (((!rt_str_eq((((P910)rt_nil_check((*(P925)rt_nil_check(F->f_1313)).name))->all), (((P910)rt_nil_check((*(P925)rt_nil_check(F->g_1314)).name))->all))) || (!f_same_213((*(P925)rt_nil_check(F->f_1313)).t, (*(P925)rt_nil_check(F->g_1314)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1313 = (*(P925)rt_nil_check(F->f_1313)).next;
F->g_1314 = (*(P925)rt_nil_check(F->g_1314)).next;
}
F->result_ = ((F->f_1313 == NULL) && (F->g_1314 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P923 f_base_of_215(P923 t_214) {
  struct f_base_of_215fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_214 = t_214;
if ((((F->t_214 != NULL) && (rt_r_ichk((*(P923)rt_nil_check(F->t_214)).kind) == (((rt_int)15LL)))) && ((*(P923)rt_nil_check(F->t_214)).tparams == NULL))) {
F->result_ = f_base_of_215((*(P923)rt_nil_check(F->t_214)).under);
goto ret_;
}
F->result_ = F->t_214;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P919 f_base_cons_218(P923 t_216, P919 c_217) {
  struct f_base_cons_218fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_216 = t_216;
F->c_217 = c_217;
if (((((F->t_216 != NULL) && (rt_r_ichk((*(P923)rt_nil_check(F->t_216)).kind) == (((rt_int)15LL)))) && ((*(P923)rt_nil_check(F->t_216)).tparams == NULL)) && ((*(P923)rt_nil_check(F->t_216)).elemcons != NULL))) {
F->result_ = f_base_cons_218((*(P923)rt_nil_check(F->t_216)).under, (*(P923)rt_nil_check(F->t_216)).elemcons);
goto ret_;
}
F->result_ = F->c_217;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_220(P923 t_219) {
  struct f_kind_name_220fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_219 = t_219;
{ rt_int sel1315 = rt_r_ichk((*(P923)rt_nil_check(F->t_219)).kind);
if (0 || (sel1315 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1315 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1315 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1315 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1315 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1315 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1315 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1315 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1315 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_219)).name))->all));
goto ret_;
} else if (0 || (sel1315 == (((rt_int)11LL)))) {
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

static void f_check_type_224(P923 got_221, P923 want_222, rt_int line_223) {
  struct f_check_type_224fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_221 = got_221;
F->want_222 = want_222;
F->line_223 = line_223;
if ((F->want_222 == NULL)) {
goto ret_;
}
if (((rt_r_ichk((*(P923)rt_nil_check(F->got_221)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P923)rt_nil_check(F->want_222)).kind) == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_213(F->got_221, F->want_222))) {
f_fail_23(F->line_223, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_220(F->got_221)), rt_str(" where ", 7)), f_kind_name_220(F->want_222)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_226(P923 t_225) {
  struct f_ctype_226fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_225 = t_225;
{ rt_int sel1316 = rt_r_ichk((*(P923)rt_nil_check(F->t_225)).kind);
if (0 || (sel1316 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1316 == (((rt_int)2LL))) || (sel1316 == (((rt_int)4LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1316 == (((rt_int)10LL)))) {
F->result_ = rt_str("rt_r_file *", 11);
goto ret_;
} else if (0 || (sel1316 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1316 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1316 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1316 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1316 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1316 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1316 == (((rt_int)16LL)))) {
F->result_ = rt_str("yset", 4);
goto ret_;
} else {
if (((*(P923)rt_nil_check(F->t_225)).cname == NULL)) {
f_declare_ctype_232(F->t_225);
} else if (((((rt_r_ichk((*(P923)rt_nil_check(F->t_225)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_225)).kind) == (((rt_int)17LL)))) && rt_r_echk((*(P923)rt_nil_check(F->t_225)).forward)) && (!rt_r_echk((*(P923)rt_nil_check(F->t_225)).defined)))) {
(*(P923)rt_nil_check(F->t_225)).defined = 1;
f_put_27(g_out_types_960, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_225)).cname))->all)), rt_str(" ", 1)), f_struct_body_228(F->t_225)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_225)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_228(P923 t_227) {
  struct f_struct_body_228fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_227 = t_227;
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_227)).kind) == (((rt_int)17LL)))) {
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

static rstr f_field_decls_230(P923 t_229) {
  struct f_field_decls_230fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_229 = t_229;
F->f_1317 = NULL;
F->f_1317 = (*(P923)rt_nil_check(F->t_229)).fields;
F->s_1318 = NULL;
F->s_1318 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1317 != NULL)) {
F->s_1318 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->s_1318))->all), f_ctype_226((*(P925)rt_nil_check(F->f_1317)).t)), rt_str(" ", 1)), f_field_c_17(&(((P910)rt_nil_check((*(P925)rt_nil_check(F->f_1317)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1317 = (*(P925)rt_nil_check(F->f_1317)).next;
}
F->result_ = (((P910)rt_nil_check(F->s_1318))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_232(P923 t_231) {
  struct f_declare_ctype_232fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_231 = t_231;
F->u_1319 = NULL;
F->u_1319 = g_all_types_958;
if (((rt_r_ichk((*(P923)rt_nil_check(F->t_231)).kind) == (((rt_int)8LL))) && ((*(P923)rt_nil_check(F->t_231)).target == NULL))) {
f_finish_ptr_432(F->t_231);
if (((*(P923)rt_nil_check(F->t_231)).cname != NULL)) {
goto ret_;
}
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_231)).kind) != (((rt_int)8LL)))) {
while ((F->u_1319 != NULL)) {
if (((rt_r_ichk((*(P923)rt_nil_check(F->u_1319)).kind) == rt_r_ichk((*(P923)rt_nil_check(F->t_231)).kind)) && f_same_213(F->u_1319, F->t_231))) {
(*(P923)rt_nil_check(F->t_231)).cname = (*(P923)rt_nil_check(F->u_1319)).cname;
goto ret_;
}
F->u_1319 = (*(P923)rt_nil_check(F->u_1319)).next;
}
}
if (((rt_r_ichk((*(P923)rt_nil_check(F->t_231)).kind) == (((rt_int)15LL))) && ((*(P923)rt_nil_check(F->t_231)).tparams == NULL))) {
(*(P923)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_226((*(P923)rt_nil_check(F->t_231)).under); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_231)).kind) == (((rt_int)6LL)))) {
(*(P923)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_231)).kind) == (((rt_int)15LL)))) {
(*(P923)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->t_231)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_231)).kind) == (((rt_int)17LL))))) {
(*(P923)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P923)rt_nil_check(F->t_231)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P923)rt_nil_check(F->t_231)).next = g_all_types_958;
g_all_types_958 = F->t_231;
if ((((rt_r_ichk((*(P923)rt_nil_check(F->t_231)).kind) == (((rt_int)8LL))) && ((*(P923)rt_nil_check(F->t_231)).decl != NULL)) && ((*(P917)rt_nil_check((*(P923)rt_nil_check(F->t_231)).decl)).b != NULL))) {
F->p_1320 = NULL;
F->p_1320 = (*(P917)rt_nil_check((*(P923)rt_nil_check(F->t_231)).decl)).b;
F->fs_1321 = NULL;
F->fs_1321 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1322 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1320 != NULL)) {
F->pc_1323 = NULL;
F->fs_1321 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->fs_1321))->all), rt_str(" ", 1)), f_ctype_226(f_resolve_subtype_260((*(P917)rt_nil_check(F->p_1320)).a, &F->pc_1323))), rt_str(" p_", 3)), f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1320)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1320 = (*(P917)rt_nil_check(F->p_1320)).next;
}
f_put_27(g_out_types_960, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1322), rt_str(" *", 2)), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_961, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1322), rt_str(" {", 2)), (((P910)rt_nil_check(F->fs_1321))->all)), rt_str(" ", 1)), f_ctype_226((*(P923)rt_nil_check(F->t_231)).target)), rt_str(" all; };", 8)); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_231)).kind) == (((rt_int)8LL)))) {
F->target_1324 = NULL;
F->target_1324 = (*(P923)rt_nil_check(F->t_231)).target;
if (((rt_r_ichk((*(P923)rt_nil_check(F->target_1324)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->target_1324)).kind) == (((rt_int)17LL))))) {
if (((*(P923)rt_nil_check(F->target_1324)).cname == NULL)) {
(*(P923)rt_nil_check(F->target_1324)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P923)rt_nil_check(F->target_1324)).next = g_all_types_958;
g_all_types_958 = F->target_1324;
f_put_27(g_out_types_960, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P910)rt_nil_check((*(P923)rt_nil_check(F->target_1324)).cname))->all)), rt_str(" ", 1)), (((P910)rt_nil_check((*(P923)rt_nil_check(F->target_1324)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P923)rt_nil_check(F->target_1324)).forward = 1;
}
f_put_27(g_out_types_960, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P910)rt_nil_check((*(P923)rt_nil_check(F->target_1324)).cname))->all)), rt_str(" *", 2)), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_960, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_226(F->target_1324)), rt_str(" *", 2)), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_231)).kind) == (((rt_int)6LL)))) {
f_put_27(g_out_types_960, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_231)).cname))->all)), rt_str(" ", 1)), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_960, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_231)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_226((*(P923)rt_nil_check(F->t_231)).elem)), rt_str(" *p;", 4)), f_more_dims_238(F->t_231)), rt_str(" };", 3)); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_231)).kind) == (((rt_int)15LL)))) {
F->p_1325 = NULL;
F->p_1325 = (*(P923)rt_nil_check(F->t_231)).tparams;
F->fs_1326 = NULL;
F->fs_1326 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1325 != NULL)) {
F->fs_1326 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->fs_1326))->all), f_ctype_226(f_tparam_type_325(F->t_231, &(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1325)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1325)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1325 = (*(P917)rt_nil_check(F->p_1325)).next;
}
f_put_27(g_out_types_960, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_231)).cname))->all)), rt_str(" ", 1)), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_960, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_231)).cname))->all)), rt_str(" {", 2)), (((P910)rt_nil_check(F->fs_1326))->all)), f_ctype_226((*(P923)rt_nil_check(F->t_231)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_960, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_231)).cname))->all)), rt_str(" ", 1)), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_231)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P923)rt_nil_check(F->t_231)).defined = 1;
f_put_27(g_out_types_960, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_231)).cname))->all)), rt_str(" ", 1)), f_struct_body_228(F->t_231)), rt_str(";", 1)); b_; }));
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

static rstr f_more_dims_238(P923 t_237) {
  struct f_more_dims_238fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_237 = t_237;
F->r_1327 = NULL;
F->r_1327 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1329 = ((rt_int)3LL), hi1330 = rt_r_ichk((*(P923)rt_nil_check(F->t_237)).ndim);
for (rt_int it1331 = lo1329; it1331 <= hi1330; it1331++) {
F->k_1328 = it1331;
F->r_1327 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_1327))->all), rt_str(" rt_int ", 8)), f_dim_lo_234(F->k_1328)), rt_str(", ", 2)), f_dim_hi_236(F->k_1328)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P910)rt_nil_check(F->r_1327))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_241(P923 t_239, rstr *base_240) {
  struct f_acnt_241fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_239 = t_239;
F->base_240 = base_240;
F->r_1332 = NULL;
F->r_1332 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_240)), rt_str(")", 1)); b_; }));
{ rt_int lo1334 = ((rt_int)3LL), hi1335 = rt_r_ichk((*(P923)rt_nil_check(F->t_239)).ndim);
for (rt_int it1336 = lo1334; it1336 <= hi1335; it1336++) {
F->k_1333 = it1336;
F->r_1332 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_1332))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_240)), rt_str(".", 1)), f_dim_lo_234(F->k_1333)), rt_str(", ", 2)), (*F->base_240)), rt_str(".", 1)), f_dim_hi_236(F->k_1333)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P910)rt_nil_check(F->r_1332))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P910 f_cons_lo_244(P919 c_242, rt_int k_243) {
  struct f_cons_lo_244fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_242 = c_242;
F->k_243 = k_243;
F->l_1337 = NULL;
if ((F->k_243 == ((rt_int)1LL))) {
F->result_ = (*(P919)rt_nil_check(F->c_242)).lo;
goto ret_;
} else if ((F->k_243 == ((rt_int)2LL))) {
F->result_ = (*(P919)rt_nil_check(F->c_242)).lo2;
goto ret_;
}
F->l_1337 = (*(P919)rt_nil_check(F->c_242)).bnds;
{ rt_int lo1339 = ((rt_int)1LL), hi1340 = rt_sub(rt_add(F->k_243, F->k_243), ((rt_int)6LL));
for (rt_int it1341 = lo1339; it1341 <= hi1340; it1341++) {
F->i_1338 = it1341;
if ((F->l_1337 != NULL)) {
F->l_1337 = (*(P921)rt_nil_check(F->l_1337)).next;
}
}
}
if ((F->l_1337 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P921)rt_nil_check(F->l_1337)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P910 f_cons_hi_247(P919 c_245, rt_int k_246) {
  struct f_cons_hi_247fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_245 = c_245;
F->k_246 = k_246;
F->l_1342 = NULL;
if ((F->k_246 == ((rt_int)1LL))) {
F->result_ = (*(P919)rt_nil_check(F->c_245)).hi;
goto ret_;
} else if ((F->k_246 == ((rt_int)2LL))) {
F->result_ = (*(P919)rt_nil_check(F->c_245)).hi2;
goto ret_;
}
F->l_1342 = (*(P919)rt_nil_check(F->c_245)).bnds;
{ rt_int lo1344 = ((rt_int)1LL), hi1345 = rt_sub(rt_add(F->k_246, F->k_246), ((rt_int)5LL));
for (rt_int it1346 = lo1344; it1346 <= hi1345; it1346++) {
F->i_1343 = it1346;
if ((F->l_1342 != NULL)) {
F->l_1342 = (*(P921)rt_nil_check(F->l_1342)).next;
}
}
}
if ((F->l_1342 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P921)rt_nil_check(F->l_1342)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P923 f_idx_type_250(P923 t_248, rt_int k_249) {
  struct f_idx_type_250fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_248 = t_248;
F->k_249 = k_249;
F->l_1347 = NULL;
F->l_1347 = (*(P923)rt_nil_check(F->t_248)).idxs;
{ rt_int lo1349 = ((rt_int)2LL), hi1350 = F->k_249;
for (rt_int it1351 = lo1349; it1351 <= hi1350; it1351++) {
F->i_1348 = it1351;
F->l_1347 = (*(P938)rt_nil_check(F->l_1347)).next;
}
}
F->result_ = (*(P938)rt_nil_check(F->l_1347)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_251(void) {
  struct f_init_ascii_251fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1352 = NULL;
F->tail_1353 = NULL;
F->start_1354 = RT_R_IUNDEF;
F->start_1354 = ((rt_int)1LL);
{ rt_int lo1356 = ((rt_int)1LL), hi1357 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1358 = lo1356; it1358 <= hi1357; it1358++) {
F->i_1355 = it1358;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1355) == 32)) {
F->lit_1359 = NULL;
F->lit_1359 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P917)rt_nil_check(F->lit_1359)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), rt_r_ichk(F->start_1354), rt_sub(F->i_1355, ((rt_int)1LL))); b_; }));
f_append_65(&F->head_1352, &F->tail_1353, F->lit_1359);
F->start_1354 = rt_add(F->i_1355, ((rt_int)1LL));
}
}
}
g_ty_ascii_1000 = f_new_typ_175((((rt_int)4LL)));
(*(P923)rt_nil_check(g_ty_ascii_1000)).lits = F->head_1352;
(*(P923)rt_nil_check(g_ty_ascii_1000)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1360 = NULL;
F->t2_1361 = NULL;
F->l1_1362 = NULL;
F->l1_1362 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1363 = NULL;
F->l2_1363 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1364 = NULL;
F->l3_1364 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P917)rt_nil_check(F->l1_1362)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P917)rt_nil_check(F->l2_1363)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P917)rt_nil_check(F->l3_1364)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_65(&F->h2_1360, &F->t2_1361, F->l1_1362);
f_append_65(&F->h2_1360, &F->t2_1361, F->l2_1363);
f_append_65(&F->h2_1360, &F->t2_1361, F->l3_1364);
g_file_mode_type_1008 = f_new_typ_175((((rt_int)4LL)));
(*(P923)rt_nil_check(g_file_mode_type_1008)).lits = F->h2_1360;
}
g_file_state_type_1012 = f_enum2_254(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OLD", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }));
g_file_disp_type_1013 = f_enum2_254(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SAVE", 4); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DELETE", 6); b_; }));
g_file_access_type_1014 = f_enum2_254(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEQ", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RANDOM", 6); b_; }));
g_ty_text_file_1011 = f_new_typ_175((((rt_int)10LL)));
(*(P923)rt_nil_check(g_ty_text_file_1011)).elem = g_ty_ascii_1000;
g_ty_send_st_1009 = f_new_typ_175((((rt_int)1LL)));
(*(P923)rt_nil_check(g_ty_send_st_1009)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEND_ST", 7); b_; }));
g_ty_receive_st_1010 = f_new_typ_175((((rt_int)1LL)));
(*(P923)rt_nil_check(g_ty_receive_st_1010)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RECEIVE_ST", 10); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P923 f_enum2_254(rstr *a_252, rstr *b_253) {
  struct f_enum2_254fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_252 = a_252;
F->b_253 = b_253;
F->t_1365 = NULL;
F->t_1365 = f_new_typ_175((((rt_int)4LL)));
F->l1_1366 = NULL;
F->l1_1366 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1367 = NULL;
F->l2_1367 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P917)rt_nil_check(F->l1_1366)).name = f_mk_3(&(*F->a_252));
(*(P917)rt_nil_check(F->l2_1367)).name = f_mk_3(&(*F->b_253));
(*(P917)rt_nil_check(F->l1_1366)).next = F->l2_1367;
(*(P923)rt_nil_check(F->t_1365)).lits = F->l1_1366;
F->result_ = F->t_1365;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_lit_index_257(P917 lits_255, rstr *name_256) {
  struct f_lit_index_257fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_255 = lits_255;
F->name_256 = name_256;
F->i_1368 = RT_R_IUNDEF;
F->i_1368 = ((rt_int)0LL);
F->l_1369 = NULL;
F->l_1369 = F->lits_255;
while ((F->l_1369 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->l_1369)).name))->all), (*F->name_256))) {
F->result_ = rt_r_ichk(F->i_1368);
goto ret_;
}
F->i_1368 = rt_add(rt_r_ichk(F->i_1368), ((rt_int)1LL));
F->l_1369 = (*(P917)rt_nil_check(F->l_1369)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P923 f_resolve_subtype_260(P917 st_258, P919 *c_259) {
  struct f_resolve_subtype_260fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_258 = st_258;
F->c_259 = c_259;
F->c_259v = *F->c_259;
F->t_1370 = NULL;
F->ok_1371 = RT_R_EUNDEF;
F->dummy_1372 = NULL;
F->c_259v = f_new_cons_176();
{ rt_int sel1373 = rt_r_ichk((*(P917)rt_nil_check(F->st_258)).kind);
if (0 || (sel1373 == (((rt_int)70LL)))) {
if (((*(P917)rt_nil_check(F->st_258)).a != NULL)) {
(*(P919)rt_nil_check(F->c_259v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705((*(P917)rt_nil_check(F->st_258)).a, g_ty_int_997, &F->dummy_1372); b_; }));
(*(P919)rt_nil_check(F->c_259v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705((*(P917)rt_nil_check(F->st_258)).b, g_ty_int_997, &F->dummy_1372); b_; }));
(*(P919)rt_nil_check(F->c_259v)).mlo = f_manifest_339((*(P917)rt_nil_check(F->st_258)).a, &F->ok_1371);
(*(P919)rt_nil_check(F->c_259v)).hasm = rt_r_echk(F->ok_1371);
(*(P919)rt_nil_check(F->c_259v)).mhi = f_manifest_339((*(P917)rt_nil_check(F->st_258)).b, &F->ok_1371);
(*(P919)rt_nil_check(F->c_259v)).hasm = (rt_r_echk((*(P919)rt_nil_check(F->c_259v)).hasm) && rt_r_echk(F->ok_1371));
}
F->result_ = g_ty_int_997;
goto ret_;
} else if (0 || (sel1373 == (((rt_int)71LL)))) {
if (((*(P917)rt_nil_check(F->st_258)).a != NULL)) {
(*(P919)rt_nil_check(F->c_259v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705((*(P917)rt_nil_check(F->st_258)).a, g_ty_int_997, &F->dummy_1372); b_; }));
}
if (((*(P917)rt_nil_check(F->st_258)).b != NULL)) {
(*(P919)rt_nil_check(F->c_259v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705((*(P917)rt_nil_check(F->st_258)).b, g_ty_float_999, &F->dummy_1372); b_; }));
(*(P919)rt_nil_check(F->c_259v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705((*(P917)rt_nil_check(F->st_258)).c, g_ty_float_999, &F->dummy_1372); b_; }));
(*(P919)rt_nil_check(F->c_259v)).hasm = (f_float_lit_262((*(P917)rt_nil_check(F->st_258)).b) && f_float_lit_262((*(P917)rt_nil_check(F->st_258)).c));
}
F->result_ = g_ty_float_999;
goto ret_;
} else if (0 || (sel1373 == (((rt_int)72LL)))) {
F->t_1370 = f_new_typ_175((((rt_int)4LL)));
(*(P923)rt_nil_check(F->t_1370)).lits = (*(P917)rt_nil_check(F->st_258)).a;
if (((*(P917)rt_nil_check(F->st_258)).b != NULL)) {
(*(P919)rt_nil_check(F->c_259v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705((*(P917)rt_nil_check(F->st_258)).b, F->t_1370, &F->dummy_1372); b_; }));
(*(P919)rt_nil_check(F->c_259v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705((*(P917)rt_nil_check(F->st_258)).c, F->t_1370, &F->dummy_1372); b_; }));
if (((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->st_258)).b)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->st_258)).c)).kind) == (((rt_int)4LL))))) {
(*(P919)rt_nil_check(F->c_259v)).mlo = f_lit_index_257((*(P923)rt_nil_check(F->t_1370)).lits, &(((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->st_258)).b)).name))->all));
(*(P919)rt_nil_check(F->c_259v)).mhi = f_lit_index_257((*(P923)rt_nil_check(F->t_1370)).lits, &(((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->st_258)).c)).name))->all));
(*(P919)rt_nil_check(F->c_259v)).hasm = 1;
}
}
F->result_ = F->t_1370;
goto ret_;
} else if (0 || (sel1373 == (((rt_int)73LL)))) {
F->t_1370 = f_resolve_subtype_260((*(P917)rt_nil_check(F->st_258)).a, &F->c_259v);
if (((*(P923)rt_nil_check(f_base_of_215(F->t_1370))).kind != (((rt_int)4LL)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->st_258)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component type of a string is an enumeration type", 53); b_; }));
}
if ((f_same_213(F->t_1370, g_ty_ascii_1000) && ((F->c_259v == NULL) || ((*(P919)rt_nil_check(F->c_259v)).lo == NULL)))) {
F->t_1370 = g_ty_string_1001;
} else {
F->et_1374 = NULL;
F->et_1374 = F->t_1370;
F->t_1370 = f_new_typ_175((((rt_int)5LL)));
(*(P923)rt_nil_check(F->t_1370)).elem = F->et_1374;
(*(P923)rt_nil_check(F->t_1370)).elemcons = F->c_259v;
}
F->c_259v = f_new_cons_176();
if (((*(P917)rt_nil_check(F->st_258)).b != NULL)) {
(*(P919)rt_nil_check(F->c_259v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705((*(P917)rt_nil_check(F->st_258)).b, g_ty_int_997, &F->dummy_1372); b_; }));
}
F->result_ = F->t_1370;
goto ret_;
} else if (0 || (sel1373 == (((rt_int)74LL)))) {
{
F->ec_1375 = NULL;
F->et_1376 = NULL;
F->et_1376 = f_resolve_subtype_260((*(P917)rt_nil_check(F->st_258)).b, &F->ec_1375);
F->ix_1377 = NULL;
F->ix_1377 = (*(P917)rt_nil_check(F->st_258)).a;
F->k_1378 = RT_R_IUNDEF;
F->k_1378 = ((rt_int)0LL);
F->tail_1379 = NULL;
F->btail_1380 = NULL;
F->t_1370 = f_new_typ_175((((rt_int)6LL)));
(*(P923)rt_nil_check(F->t_1370)).elem = F->et_1376;
(*(P923)rt_nil_check(F->t_1370)).elemcons = F->ec_1375;
(*(P923)rt_nil_check(F->t_1370)).elemst = (*(P917)rt_nil_check(F->st_258)).b;
(*(P919)rt_nil_check(F->c_259v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P919)rt_nil_check(F->c_259v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1377 != NULL)) {
F->ic_1381 = NULL;
F->it_1382 = NULL;
F->it_1382 = f_resolve_subtype_260(F->ix_1377, &F->ic_1381);
F->lo_1383 = NULL;
F->hi_1384 = NULL;
F->tl_1385 = NULL;
if ((((*(P923)rt_nil_check(f_base_of_215(F->it_1382))).kind != (((rt_int)1LL))) && ((*(P923)rt_nil_check(f_base_of_215(F->it_1382))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->st_258)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1381 = f_base_cons_218(F->it_1382, F->ic_1381);
F->k_1378 = rt_add(rt_r_ichk(F->k_1378), ((rt_int)1LL));
{ R939 *cell1386 = rt_alloc(sizeof(R939));
(*cell1386).t = NULL;
(*cell1386).next = NULL;
F->tl_1385 = cell1386;
}
(*(P938)rt_nil_check(F->tl_1385)).t = F->it_1382;
if ((F->tail_1379 == NULL)) {
(*(P923)rt_nil_check(F->t_1370)).idxs = F->tl_1385;
} else {
(*(P938)rt_nil_check(F->tail_1379)).next = F->tl_1385;
}
F->tail_1379 = F->tl_1385;
if (((F->ic_1381 != NULL) && ((*(P919)rt_nil_check(F->ic_1381)).lo != NULL))) {
F->lo_1383 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_185(F->ic_1381); b_; }));
F->hi_1384 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_187(F->ic_1381); b_; }));
} else if (((*(P923)rt_nil_check(f_base_of_215(F->it_1382))).kind == (((rt_int)4LL)))) {
F->lo_1383 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1384 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P923)rt_nil_check(f_base_of_215(F->it_1382))).lits), ((rt_int)1LL))); b_; }));
}
if ((rt_r_ichk(F->k_1378) == ((rt_int)1LL))) {
(*(P923)rt_nil_check(F->t_1370)).idx = F->it_1382;
(*(P919)rt_nil_check(F->c_259v)).lo = F->lo_1383;
(*(P919)rt_nil_check(F->c_259v)).hi = F->hi_1384;
} else if ((rt_r_ichk(F->k_1378) == ((rt_int)2LL))) {
(*(P923)rt_nil_check(F->t_1370)).idx2 = F->it_1382;
(*(P919)rt_nil_check(F->c_259v)).lo2 = F->lo_1383;
(*(P919)rt_nil_check(F->c_259v)).hi2 = F->hi_1384;
} else if ((F->lo_1383 != NULL)) {
F->l1_1387 = NULL;
F->l2_1388 = NULL;
{ R922 *cell1389 = rt_alloc(sizeof(R922));
(*cell1389).s = NULL;
(*cell1389).next = NULL;
F->l1_1387 = cell1389;
}
{ R922 *cell1390 = rt_alloc(sizeof(R922));
(*cell1390).s = NULL;
(*cell1390).next = NULL;
F->l2_1388 = cell1390;
}
(*(P921)rt_nil_check(F->l1_1387)).s = F->lo_1383;
(*(P921)rt_nil_check(F->l2_1388)).s = F->hi_1384;
(*(P921)rt_nil_check(F->l1_1387)).next = F->l2_1388;
if ((F->btail_1380 == NULL)) {
(*(P919)rt_nil_check(F->c_259v)).bnds = F->l1_1387;
} else {
(*(P921)rt_nil_check(F->btail_1380)).next = F->l1_1387;
}
F->btail_1380 = F->l2_1388;
}
F->ix_1377 = (*(P917)rt_nil_check(F->ix_1377)).next;
}
(*(P923)rt_nil_check(F->t_1370)).ndim = rt_r_ichk(F->k_1378);
}
F->result_ = F->t_1370;
goto ret_;
} else if (0 || (sel1373 == (((rt_int)77LL)))) {
F->t_1370 = f_new_typ_175((((rt_int)16LL)));
{
F->ec_1391 = NULL;
(*(P923)rt_nil_check(F->t_1370)).elem = f_resolve_subtype_260((*(P917)rt_nil_check(F->st_258)).a, &F->ec_1391);
(*(P923)rt_nil_check(F->t_1370)).elemcons = F->ec_1391;
if ((((*(P923)rt_nil_check(f_base_of_215((*(P923)rt_nil_check(F->t_1370)).elem))).kind != (((rt_int)1LL))) && ((*(P923)rt_nil_check(f_base_of_215((*(P923)rt_nil_check(F->t_1370)).elem))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->st_258)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component subtype of a set is an INT or ENUM subtype", 56); b_; }));
}
if ((((*(P923)rt_nil_check(f_base_of_215((*(P923)rt_nil_check(F->t_1370)).elem))).kind == (((rt_int)1LL))) && ((F->ec_1391 == NULL) || ((*(P919)rt_nil_check(F->ec_1391)).lo == NULL)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->st_258)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SET[INT] needs a range here: a set of every INT cannot be represented", 69); b_; }));
}
}
F->result_ = F->t_1370;
goto ret_;
} else if (0 || (sel1373 == (((rt_int)75LL))) || (sel1373 == (((rt_int)76LL)))) {
if ((rt_r_ichk((*(P917)rt_nil_check(F->st_258)).kind) == (((rt_int)76LL)))) {
F->t_1370 = f_new_typ_175((((rt_int)17LL)));
} else {
F->t_1370 = f_new_typ_175((((rt_int)7LL)));
}
{
F->comp_1392 = NULL;
F->comp_1392 = (*(P917)rt_nil_check(F->st_258)).a;
F->tail_1393 = NULL;
while ((F->comp_1392 != NULL)) {
F->cc_1394 = NULL;
F->f_1395 = NULL;
{ R926 *cell1396 = rt_alloc(sizeof(R926));
(*cell1396).name = NULL;
(*cell1396).t = NULL;
(*cell1396).c = NULL;
(*cell1396).st = NULL;
(*cell1396).next = NULL;
F->f_1395 = cell1396;
}
(*(P925)rt_nil_check(F->f_1395)).name = (*(P917)rt_nil_check(F->comp_1392)).name;
(*(P925)rt_nil_check(F->f_1395)).t = f_resolve_subtype_260((*(P917)rt_nil_check(F->comp_1392)).a, &F->cc_1394);
(*(P925)rt_nil_check(F->f_1395)).c = F->cc_1394;
(*(P925)rt_nil_check(F->f_1395)).st = (*(P917)rt_nil_check(F->comp_1392)).a;
if ((F->tail_1393 == NULL)) {
(*(P923)rt_nil_check(F->t_1370)).fields = F->f_1395;
} else {
(*(P925)rt_nil_check(F->tail_1393)).next = F->f_1395;
}
F->tail_1393 = F->f_1395;
F->comp_1392 = (*(P917)rt_nil_check(F->comp_1392)).next;
}
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_1370)).kind) == (((rt_int)17LL)))) {
F->lits_1397 = NULL;
F->ltail_1398 = NULL;
F->f_1399 = NULL;
F->f_1399 = (*(P923)rt_nil_check(F->t_1370)).fields;
while ((F->f_1399 != NULL)) {
F->l_1400 = NULL;
F->l_1400 = f_nn_61((((rt_int)4LL)), rt_r_ichk((*(P917)rt_nil_check(F->st_258)).line));
if (rt_str_eq((((P910)rt_nil_check((*(P925)rt_nil_check(F->f_1399)).name))->all), rt_str("TAG", 3))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->st_258)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P917)rt_nil_check(F->l_1400)).name = (*(P925)rt_nil_check(F->f_1399)).name;
f_append_65(&F->lits_1397, &F->ltail_1398, F->l_1400);
F->f_1399 = (*(P925)rt_nil_check(F->f_1399)).next;
}
(*(P923)rt_nil_check(F->t_1370)).elem = f_new_typ_175((((rt_int)4LL)));
(*(P923)rt_nil_check((*(P923)rt_nil_check(F->t_1370)).elem)).lits = F->lits_1397;
if (((*(P917)rt_nil_check(F->st_258)).b != NULL)) {
f_tag_constraint_266(F->t_1370, (*(P917)rt_nil_check(F->st_258)).b, F->c_259v);
}
}
F->result_ = F->t_1370;
goto ret_;
} else if (0 || (sel1373 == (((rt_int)79LL)))) {
F->t_1370 = f_new_typ_175((((rt_int)10LL)));
{
F->ec_1401 = NULL;
(*(P923)rt_nil_check(F->t_1370)).elem = f_resolve_subtype_260((*(P917)rt_nil_check(F->st_258)).a, &F->ec_1401);
(*(P923)rt_nil_check(F->t_1370)).elemcons = F->ec_1401;
}
(*(P919)rt_nil_check(F->c_259v)).args = (*(P917)rt_nil_check(F->st_258)).b;
F->result_ = F->t_1370;
goto ret_;
} else if (0 || (sel1373 == (((rt_int)78LL)))) {
if (((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P927)rt_nil_check(f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1402 = NULL;
F->gt_1402 = f_copy_node_744((*(P917)rt_nil_check(F->st_258)).a);
(*(P917)rt_nil_check(F->gt_1402)).next = NULL;
F->result_ = f_instantiate_type_645(f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1402, (*(P917)rt_nil_check(F->st_258)).b, &F->c_259v, rt_r_ichk((*(P917)rt_nil_check(F->st_258)).line));
goto ret_;
}
{
F->ec_1403 = NULL;
F->t_1370 = f_new_typ_175((((rt_int)12LL)));
(*(P923)rt_nil_check(F->t_1370)).elem = f_resolve_subtype_260((*(P917)rt_nil_check(F->st_258)).a, &F->ec_1403);
(*(P923)rt_nil_check(F->t_1370)).elemcons = F->ec_1403;
if (((*(P917)rt_nil_check(F->st_258)).b != NULL)) {
(*(P919)rt_nil_check(F->c_259v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705((*(P917)rt_nil_check(F->st_258)).b, g_ty_int_997, &F->dummy_1372); b_; }));
}
}
F->result_ = F->t_1370;
goto ret_;
} else if (0 || (sel1373 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_269(F->st_258, &F->c_259v);
goto ret_;
} else if (0 || (sel1373 == (((rt_int)81LL)))) {
{
F->base_1404 = NULL;
F->result_ = f_value_subtype_282((*(P917)rt_nil_check(F->st_258)).a, &F->c_259v, &F->base_1404);
goto ret_;
}
} else {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->st_258)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_259) = F->c_259v;
  RT_FPOP();
  return F->result_;
}

static int f_float_lit_262(P917 e_261) {
  struct f_float_lit_262fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_261 = e_261;
if (((rt_r_ichk((*(P917)rt_nil_check(F->e_261)).kind) == (((rt_int)8LL))) && (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_261)).name))->all), rt_str("-", 1)) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_261)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_262((*(P917)rt_nil_check(F->e_261)).a);
goto ret_;
}
F->result_ = ((rt_r_ichk((*(P917)rt_nil_check(F->e_261)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P917)rt_nil_check(F->e_261)).kind) == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_266(P923 t_263, P917 e_264, P919 c_265) {
  struct f_tag_constraint_266fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_263 = t_263;
F->e_264 = e_264;
F->c_265 = c_265;
F->dummy_1405 = NULL;
(*(P919)rt_nil_check(F->c_265)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705(F->e_264, (*(P923)rt_nil_check(F->t_263)).elem, &F->dummy_1405); b_; }));
f_check_type_224(F->dummy_1405, (*(P923)rt_nil_check(F->t_263)).elem, rt_r_ichk((*(P917)rt_nil_check(F->e_264)).line));
(*(P919)rt_nil_check(F->c_265)).hi = (*(P919)rt_nil_check(F->c_265)).lo;
if ((rt_r_ichk((*(P917)rt_nil_check(F->e_264)).kind) == (((rt_int)4LL)))) {
(*(P919)rt_nil_check(F->c_265)).mlo = f_lit_index_257((*(P923)rt_nil_check((*(P923)rt_nil_check(F->t_263)).elem)).lits, &(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_264)).name))->all));
(*(P919)rt_nil_check(F->c_265)).mhi = rt_r_ichk((*(P919)rt_nil_check(F->c_265)).mlo);
(*(P919)rt_nil_check(F->c_265)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P923 f_named_subtype_269(P917 st_267, P919 *c_268) {
  struct f_named_subtype_269fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_267 = st_267;
F->c_268 = c_268;
F->c_268v = *F->c_268;
F->t_1406 = NULL;
F->y_1407 = NULL;
F->y_1407 = f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->st_267)).name))->all));
F->name_1408 = rt_str_copy((((P910)rt_nil_check((*(P917)rt_nil_check(F->st_267)).name))->all));
F->c_268v = f_new_cons_176();
if (((F->y_1407 == NULL) && ((rt_str_eq(F->name_1408, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1408, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1408, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_287(F->st_267, &F->c_268v);
goto ret_;
}
if ((F->y_1407 == NULL)) {
if (rt_str_eq(F->name_1408, rt_str("BOOL", 4))) {
F->t_1406 = g_ty_bool_998;
} else if (rt_str_eq(F->name_1408, rt_str("ASCII", 5))) {
F->t_1406 = g_ty_ascii_1000;
} else if (rt_str_eq(F->name_1408, rt_str("DATA_LOCK", 9))) {
F->t_1406 = g_ty_lock_1005;
} else if (rt_str_eq(F->name_1408, rt_str("LATCH", 5))) {
F->t_1406 = g_ty_latch_1006;
} else if (rt_str_eq(F->name_1408, rt_str("ACT", 3))) {
F->t_1406 = g_ty_act_1007;
} else if (rt_str_eq(F->name_1408, rt_str("INT", 3))) {
F->t_1406 = g_ty_int_997;
} else if (rt_str_eq(F->name_1408, rt_str("SEND_ST", 7))) {
F->t_1406 = g_ty_send_st_1009;
} else if (rt_str_eq(F->name_1408, rt_str("RECEIVE_ST", 10))) {
F->t_1406 = g_ty_receive_st_1010;
} else if (rt_str_eq(F->name_1408, rt_str("FLOAT", 5))) {
F->t_1406 = g_ty_float_999;
} else {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->st_267)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1408); b_; }));
}
if (((*(P917)rt_nil_check(F->st_267)).b != NULL)) {
f_apply_constraint_278(F->t_1406, (*(P917)rt_nil_check(F->st_267)).b, F->c_268v, rt_r_ichk((*(P917)rt_nil_check(F->st_267)).line));
}
F->result_ = F->t_1406;
goto ret_;
}
if (((rt_r_ichk((*(P927)rt_nil_check(F->y_1407)).kind) == (((rt_int)10LL))) && ((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_1407)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_1407)).decl)).b)).kind) == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_645(F->y_1407, (*(P917)rt_nil_check(F->st_267)).a, (*(P917)rt_nil_check(F->st_267)).b, &F->c_268v, rt_r_ichk((*(P917)rt_nil_check(F->st_267)).line));
goto ret_;
}
if (((rt_r_ichk((*(P927)rt_nil_check(F->y_1407)).kind) == (((rt_int)10LL))) && (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_1407)).decl)).b)).kind) == (((rt_int)42LL))))) {
F->binds_1409 = NULL;
F->binds_1409 = f_tt_binds_611((*(P927)rt_nil_check(F->y_1407)).decl, (*(P917)rt_nil_check((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_1407)).decl)).b)).e, (*(P917)rt_nil_check(F->st_267)).a, rt_r_ichk((*(P917)rt_nil_check(F->st_267)).line));
F->saved_env_1410 = NULL;
F->saved_env_1410 = g_genv_954;
F->saved_gdepth_1411 = RT_R_IUNDEF;
F->saved_gdepth_1411 = rt_r_ichk(g_gdepth_986);
f_open_scope_169();
while ((F->binds_1409 != NULL)) {
F->nb_1412 = NULL;
F->nb_1412 = (*(P927)rt_nil_check(F->binds_1409)).mnext;
f_define_160(F->binds_1409, rt_r_ichk((*(P917)rt_nil_check(F->st_267)).line));
F->binds_1409 = F->nb_1412;
}
g_genv_954 = (*(P927)rt_nil_check(F->y_1407)).env;
g_gdepth_986 = rt_r_ichk(g_depth_956);
F->t_1406 = f_resolve_subtype_260((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_1407)).decl)).b)).a, &F->c_268v);
g_genv_954 = F->saved_env_1410;
g_gdepth_986 = rt_r_ichk(F->saved_gdepth_1411);
f_close_scope_170();
if (((*(P917)rt_nil_check(F->st_267)).b != NULL)) {
F->c_268v = f_copy_cons_198(F->c_268v);
f_apply_constraint_278(F->t_1406, (*(P917)rt_nil_check(F->st_267)).b, F->c_268v, rt_r_ichk((*(P917)rt_nil_check(F->st_267)).line));
}
F->result_ = F->t_1406;
goto ret_;
}
if ((((rt_r_ichk((*(P927)rt_nil_check(F->y_1407)).kind) == (((rt_int)5LL))) && ((*(P927)rt_nil_check(F->y_1407)).t != NULL)) && (rt_r_ichk((*(P923)rt_nil_check((*(P927)rt_nil_check(F->y_1407)).t)).kind) == (((rt_int)15LL))))) {
F->result_ = f_new_type_310(F->y_1407, F->st_267, &F->c_268v);
goto ret_;
}
if ((((rt_r_ichk((*(P927)rt_nil_check(F->y_1407)).kind) == (((rt_int)5LL))) && ((*(P927)rt_nil_check(F->y_1407)).t != NULL)) && (rt_r_ichk((*(P923)rt_nil_check((*(P927)rt_nil_check(F->y_1407)).t)).kind) == (((rt_int)8LL))))) {
(*(P919)rt_nil_check(F->c_268v)).args = (*(P917)rt_nil_check(F->st_267)).b;
F->result_ = (*(P927)rt_nil_check(F->y_1407)).t;
goto ret_;
}
if ((((rt_r_ichk((*(P927)rt_nil_check(F->y_1407)).kind) == (((rt_int)6LL))) && ((*(P927)rt_nil_check(F->y_1407)).decl != NULL)) && ((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_1407)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_273(F->y_1407, F->st_267, &F->c_268v);
goto ret_;
}
if ((((rt_r_ichk((*(P927)rt_nil_check(F->y_1407)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P927)rt_nil_check(F->y_1407)).kind) == (((rt_int)5LL)))) && ((*(P927)rt_nil_check(F->y_1407)).t != NULL))) {
if (((*(P927)rt_nil_check(F->y_1407)).c != NULL)) {
F->c_268v = (*(P927)rt_nil_check(F->y_1407)).c;
}
F->t_1406 = (*(P927)rt_nil_check(F->y_1407)).t;
} else if ((((rt_r_ichk((*(P927)rt_nil_check(F->y_1407)).kind) == (((rt_int)5LL))) && ((*(P927)rt_nil_check(F->y_1407)).decl != NULL)) && (rt_r_ichk((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_1407)).decl)).kind) == (((rt_int)43LL))))) {
F->result_ = f_new_type_310(F->y_1407, F->st_267, &F->c_268v);
goto ret_;
} else if (((rt_r_ichk((*(P927)rt_nil_check(F->y_1407)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P927)rt_nil_check(F->y_1407)).kind) == (((rt_int)5LL))))) {
F->t_1406 = f_resolve_subtype_260((*(P927)rt_nil_check(F->y_1407)).st, &F->c_268v);
} else {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->st_267)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1408, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P917)rt_nil_check(F->st_267)).b != NULL)) {
F->c_268v = f_copy_cons_198(F->c_268v);
f_apply_constraint_278(F->t_1406, (*(P917)rt_nil_check(F->st_267)).b, F->c_268v, rt_r_ichk((*(P917)rt_nil_check(F->st_267)).line));
}
F->result_ = F->t_1406;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_268) = F->c_268v;
  RT_FPOP();
  return F->result_;
}

static P923 f_invoke_abbrev_273(P927 y_270, P917 st_271, P919 *c_272) {
  struct f_invoke_abbrev_273fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_270 = y_270;
F->st_271 = st_271;
F->c_272 = c_272;
F->c_272v = *F->c_272;
F->p_1413 = NULL;
F->p_1413 = (*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_270)).decl)).b;
F->a_1414 = NULL;
F->a_1414 = (*(P917)rt_nil_check(F->st_271)).b;
F->t_1415 = NULL;
if ((f_list_len_67(F->p_1413) != f_list_len_67(F->a_1414))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->st_271)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_270)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1413))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_169();
while ((F->p_1413 != NULL)) {
F->z_1416 = NULL;
F->z_1416 = f_new_sym_173((((rt_int)2LL)), (*(P917)rt_nil_check(F->p_1413)).name);
F->pc_1417 = NULL;
F->at_1418 = NULL;
F->ok_1419 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P917)rt_nil_check(F->p_1413)).ival) != (((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->st_271)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P927)rt_nil_check(F->z_1416)).t = f_resolve_subtype_260((*(P917)rt_nil_check(F->p_1413)).a, &F->pc_1417);
(*(P927)rt_nil_check(F->z_1416)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_705(F->a_1414, (*(P927)rt_nil_check(F->z_1416)).t, &F->at_1418)), rt_str(")", 1)); b_; }));
f_check_type_224(F->at_1418, (*(P927)rt_nil_check(F->z_1416)).t, rt_r_ichk((*(P917)rt_nil_check(F->st_271)).line));
(*(P927)rt_nil_check(F->z_1416)).mvalue = f_manifest_339(F->a_1414, &F->ok_1419);
(*(P927)rt_nil_check(F->z_1416)).hasmv = rt_r_echk(F->ok_1419);
(*(P927)rt_nil_check(F->z_1416)).mv = f_meval_348(F->a_1414, &F->ok_1419);
if ((!rt_r_echk(F->ok_1419))) {
(*(P927)rt_nil_check(F->z_1416)).mv = NULL;
}
(*(P927)rt_nil_check(F->z_1416)).ro_flag = 1;
f_define_160(F->z_1416, rt_r_ichk((*(P917)rt_nil_check(F->st_271)).line));
F->p_1413 = (*(P917)rt_nil_check(F->p_1413)).next;
F->a_1414 = (*(P917)rt_nil_check(F->a_1414)).next;
}
F->t_1415 = f_resolve_subtype_260((*(P927)rt_nil_check(F->y_270)).st, &F->c_272v);
f_close_scope_170();
F->result_ = F->t_1415;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_272) = F->c_272v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_278(P923 t_274, P917 args_275, P919 c_276, rt_int line_277) {
  struct f_apply_constraint_278fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_274 = t_274;
F->args_275 = args_275;
F->c_276 = c_276;
F->line_277 = line_277;
F->dummy_1420 = NULL;
F->ok_1421 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P923)rt_nil_check(F->t_274)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_274)).kind) == (((rt_int)4LL))))) {
if (((rt_r_ichk((*(P917)rt_nil_check(F->args_275)).kind) != (((rt_int)16LL))) || ((*(P917)rt_nil_check(F->args_275)).next != NULL))) {
f_fail_23(F->line_277, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P919)rt_nil_check(F->c_276)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705((*(P917)rt_nil_check(F->args_275)).a, F->t_274, &F->dummy_1420); b_; }));
f_check_type_224(F->dummy_1420, F->t_274, F->line_277);
(*(P919)rt_nil_check(F->c_276)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705((*(P917)rt_nil_check(F->args_275)).b, F->t_274, &F->dummy_1420); b_; }));
f_check_type_224(F->dummy_1420, F->t_274, F->line_277);
(*(P919)rt_nil_check(F->c_276)).hasm = 0;
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_274)).kind) == (((rt_int)1LL)))) {
(*(P919)rt_nil_check(F->c_276)).mlo = f_manifest_339((*(P917)rt_nil_check(F->args_275)).a, &F->ok_1421);
(*(P919)rt_nil_check(F->c_276)).hasm = rt_r_echk(F->ok_1421);
(*(P919)rt_nil_check(F->c_276)).mhi = f_manifest_339((*(P917)rt_nil_check(F->args_275)).b, &F->ok_1421);
(*(P919)rt_nil_check(F->c_276)).hasm = (rt_r_echk((*(P919)rt_nil_check(F->c_276)).hasm) && rt_r_echk(F->ok_1421));
} else if (((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->args_275)).a)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->args_275)).b)).kind) == (((rt_int)4LL))))) {
(*(P919)rt_nil_check(F->c_276)).mlo = f_lit_index_257((*(P923)rt_nil_check(f_base_of_215(F->t_274))).lits, &(((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->args_275)).a)).name))->all));
(*(P919)rt_nil_check(F->c_276)).mhi = f_lit_index_257((*(P923)rt_nil_check(f_base_of_215(F->t_274))).lits, &(((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->args_275)).b)).name))->all));
(*(P919)rt_nil_check(F->c_276)).hasm = 1;
}
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_274)).kind) == (((rt_int)3LL)))) {
(*(P919)rt_nil_check(F->c_276)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705(F->args_275, g_ty_int_997, &F->dummy_1420); b_; }));
if (((*(P917)rt_nil_check(F->args_275)).next != NULL)) {
if ((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->args_275)).next)).kind) != (((rt_int)16LL)))) {
f_fail_23(F->line_277, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P919)rt_nil_check(F->c_276)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705((*(P917)rt_nil_check((*(P917)rt_nil_check(F->args_275)).next)).a, g_ty_float_999, &F->dummy_1420); b_; }));
(*(P919)rt_nil_check(F->c_276)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705((*(P917)rt_nil_check((*(P917)rt_nil_check(F->args_275)).next)).b, g_ty_float_999, &F->dummy_1420); b_; }));
(*(P919)rt_nil_check(F->c_276)).hasm = (f_float_lit_262((*(P917)rt_nil_check((*(P917)rt_nil_check(F->args_275)).next)).a) && f_float_lit_262((*(P917)rt_nil_check((*(P917)rt_nil_check(F->args_275)).next)).b));
}
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_274)).kind) == (((rt_int)5LL)))) {
(*(P919)rt_nil_check(F->c_276)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705(F->args_275, g_ty_int_997, &F->dummy_1420); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_274)).kind) == (((rt_int)12LL)))) {
(*(P919)rt_nil_check(F->c_276)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705(F->args_275, g_ty_int_997, &F->dummy_1420); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_274)).kind) == (((rt_int)17LL)))) {
f_tag_constraint_266(F->t_274, F->args_275, F->c_276);
} else {
f_fail_23(F->line_277, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P923 f_value_subtype_282(P917 e_279, P919 *c_280, P910 *base_281) {
  struct f_value_subtype_282fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_279 = e_279;
F->c_280 = c_280;
F->c_280v = *F->c_280;
F->base_281 = base_281;
F->base_281v = *F->base_281;
F->t_1422 = NULL;
F->c0_1423 = NULL;
F->ro_1424 = RT_R_EUNDEF;
if (f_is_lvalue_668(F->e_279)) {
f_lvalue_674(F->e_279, &F->base_281v, &F->t_1422, &F->c0_1423, &F->ro_1424);
} else {
F->base_281v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705(F->e_279, NULL, &F->t_1422); b_; }));
}
if ((F->c0_1423 == NULL)) {
F->c_280v = f_new_cons_176();
} else {
F->c_280v = f_copy_cons_198(F->c0_1423);
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_1422)).kind) == (((rt_int)5LL)))) {
(*(P919)rt_nil_check(F->c_280v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P910)rt_nil_check(F->base_281v))->all)), rt_str(").len", 5)); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_1422)).kind) == (((rt_int)6LL)))) {
(*(P919)rt_nil_check(F->c_280v)).bnds = NULL;
{ rt_int lo1426 = ((rt_int)1LL), hi1427 = rt_r_ichk((*(P923)rt_nil_check(F->t_1422)).ndim);
for (rt_int it1428 = lo1426; it1428 <= hi1427; it1428++) {
F->k_1425 = it1428;
F->lo_1429 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P910)rt_nil_check(F->base_281v))->all)), rt_str(").", 2)), f_dim_lo_234(F->k_1425)));
F->hi_1430 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P910)rt_nil_check(F->base_281v))->all)), rt_str(").", 2)), f_dim_hi_236(F->k_1425)));
if ((F->k_1425 == ((rt_int)1LL))) {
(*(P919)rt_nil_check(F->c_280v)).lo = f_mk_3(&F->lo_1429);
(*(P919)rt_nil_check(F->c_280v)).hi = f_mk_3(&F->hi_1430);
} else if ((F->k_1425 == ((rt_int)2LL))) {
(*(P919)rt_nil_check(F->c_280v)).lo2 = f_mk_3(&F->lo_1429);
(*(P919)rt_nil_check(F->c_280v)).hi2 = f_mk_3(&F->hi_1430);
} else {
F->l1_1431 = NULL;
F->l2_1432 = NULL;
{ R922 *cell1433 = rt_alloc(sizeof(R922));
(*cell1433).s = NULL;
(*cell1433).next = NULL;
F->l1_1431 = cell1433;
}
{ R922 *cell1434 = rt_alloc(sizeof(R922));
(*cell1434).s = NULL;
(*cell1434).next = NULL;
F->l2_1432 = cell1434;
}
(*(P921)rt_nil_check(F->l1_1431)).s = f_mk_3(&F->lo_1429);
(*(P921)rt_nil_check(F->l2_1432)).s = f_mk_3(&F->hi_1430);
(*(P921)rt_nil_check(F->l1_1431)).next = F->l2_1432;
(*(P921)rt_nil_check(F->l2_1432)).next = (*(P919)rt_nil_check(F->c_280v)).bnds;
(*(P919)rt_nil_check(F->c_280v)).bnds = F->l1_1431;
}
}
}
(*(P919)rt_nil_check(F->c_280v)).bnds = f_reverse_pairs_284((*(P919)rt_nil_check(F->c_280v)).bnds);
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_1422)).kind) == (((rt_int)12LL)))) {
(*(P919)rt_nil_check(F->c_280v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P910)rt_nil_check(F->base_281v))->all)), rt_str(")->cap", 6)); b_; }));
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->t_1422)).kind) == (((rt_int)15LL))) && ((*(P923)rt_nil_check(F->t_1422)).tparams != NULL))) {
F->p_1435 = NULL;
F->p_1435 = (*(P923)rt_nil_check(F->t_1422)).tparams;
F->head_1436 = NULL;
F->tail_1437 = NULL;
while ((F->p_1435 != NULL)) {
F->sel_1438 = NULL;
F->sel_1438 = f_nn_61((((rt_int)11LL)), rt_r_ichk((*(P917)rt_nil_check(F->e_279)).line));
(*(P917)rt_nil_check(F->sel_1438)).a = F->e_279;
(*(P917)rt_nil_check(F->sel_1438)).name = (*(P917)rt_nil_check(F->p_1435)).name;
f_append_65(&F->head_1436, &F->tail_1437, F->sel_1438);
F->p_1435 = (*(P917)rt_nil_check(F->p_1435)).next;
}
(*(P919)rt_nil_check(F->c_280v)).args = F->head_1436;
}
F->result_ = F->t_1422;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_280) = F->c_280v;  (*F->base_281) = F->base_281v;
  RT_FPOP();
  return F->result_;
}

static P921 f_reverse_pairs_284(P921 l_283) {
  struct f_reverse_pairs_284fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_283 = l_283;
F->r_1439 = NULL;
F->p_1440 = NULL;
F->p_1440 = F->l_283;
while ((F->p_1440 != NULL)) {
F->a_1441 = NULL;
F->a_1441 = F->p_1440;
F->b_1442 = NULL;
F->b_1442 = (*(P921)rt_nil_check(F->p_1440)).next;
F->p_1440 = (*(P921)rt_nil_check(F->b_1442)).next;
(*(P921)rt_nil_check(F->b_1442)).next = F->r_1439;
F->r_1439 = F->a_1441;
}
F->result_ = F->r_1439;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P923 f_inquiry_287(P917 st_285, P919 *c_286) {
  struct f_inquiry_287fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_285 = st_285;
F->c_286 = c_286;
F->c_286v = *F->c_286;
F->base_1443 = NULL;
F->t_1444 = NULL;
F->name_1445 = rt_str_copy((((P910)rt_nil_check((*(P917)rt_nil_check(F->st_285)).name))->all));
if (((*(P917)rt_nil_check(F->st_285)).b == NULL)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->st_285)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1445, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1445, rt_str("TYPEOF", 6))) {
F->sub_1446 = NULL;
F->sub_1446 = f_as_subtype_289((*(P917)rt_nil_check(F->st_285)).b);
F->c2_1447 = NULL;
if ((F->sub_1446 != NULL)) {
F->t_1444 = f_resolve_subtype_260(F->sub_1446, &F->c2_1447);
} else {
F->t_1444 = f_value_subtype_282((*(P917)rt_nil_check(F->st_285)).b, &F->c2_1447, &F->base_1443);
}
F->c_286v = f_new_cons_176();
F->result_ = F->t_1444;
goto ret_;
}
F->t_1444 = f_value_subtype_282((*(P917)rt_nil_check(F->st_285)).b, &F->c_286v, &F->base_1443);
if (rt_str_eq(F->name_1445, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1444;
goto ret_;
}
{
F->k_1448 = RT_R_IUNDEF;
F->k_1448 = ((rt_int)1LL);
F->ok_1449 = RT_R_EUNDEF;
F->ok_1449 = 1;
F->ac_1450 = NULL;
F->ac_1450 = F->c_286v;
if (((*(P917)rt_nil_check((*(P917)rt_nil_check(F->st_285)).b)).next != NULL)) {
F->k_1448 = f_manifest_339((*(P917)rt_nil_check((*(P917)rt_nil_check(F->st_285)).b)).next, &F->ok_1449);
}
while (((rt_r_ichk((*(P923)rt_nil_check(F->t_1444)).kind) == (((rt_int)15LL))) && ((*(P923)rt_nil_check(F->t_1444)).tparams == NULL))) {
F->t_1444 = (*(P923)rt_nil_check(F->t_1444)).under;
}
if (((((rt_r_ichk((*(P923)rt_nil_check(F->t_1444)).kind) != (((rt_int)6LL))) || (!rt_r_echk(F->ok_1449))) || (rt_r_ichk(F->k_1448) < ((rt_int)1LL))) || (rt_r_ichk(F->k_1448) > rt_r_ichk((*(P923)rt_nil_check(F->t_1444)).ndim)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->st_285)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_286v = f_new_cons_176();
(*(P919)rt_nil_check(F->c_286v)).lo = f_cons_lo_244(F->ac_1450, rt_r_ichk(F->k_1448));
(*(P919)rt_nil_check(F->c_286v)).hi = f_cons_hi_247(F->ac_1450, rt_r_ichk(F->k_1448));
F->result_ = f_idx_type_250(F->t_1444, rt_r_ichk(F->k_1448));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_286) = F->c_286v;
  RT_FPOP();
  return F->result_;
}

static P917 f_as_subtype_289(P917 e_288) {
  struct f_as_subtype_289fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_288 = e_288;
F->st_1451 = NULL;
if ((F->e_288 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_288)).kind) == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_289((*(P917)rt_nil_check(F->e_288)).a);
goto ret_;
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_288)).kind) == (((rt_int)7LL)))) {
if ((!f_type_name_296(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_288)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1451 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P917)rt_nil_check(F->e_288)).line));
(*(P917)rt_nil_check(F->st_1451)).name = (*(P917)rt_nil_check(F->e_288)).name;
F->result_ = F->st_1451;
goto ret_;
} else if (((rt_r_ichk((*(P917)rt_nil_check(F->e_288)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_294((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).a)).name, (*(P917)rt_nil_check(F->e_288)).b, NULL, rt_r_ichk((*(P917)rt_nil_check(F->e_288)).line));
goto ret_;
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_288)).kind) != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).a)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).a)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_294((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).a)).a)).name, (*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).a)).b, (*(P917)rt_nil_check(F->e_288)).b, rt_r_ichk((*(P917)rt_nil_check(F->e_288)).line));
goto ret_;
} else if ((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).a)).kind) != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1452 = rt_str_copy((((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).a)).name))->all));
F->y_1453 = NULL;
F->y_1453 = f_lookup_155(&F->name_1452);
if ((rt_str_eq(F->name_1452, rt_str("INT", 3)) && (F->y_1453 == NULL))) {
if (((((*(P917)rt_nil_check(F->e_288)).b == NULL) || (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).b)).kind) != (((rt_int)16LL)))) || ((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1451 = f_nn_61((((rt_int)70LL)), rt_r_ichk((*(P917)rt_nil_check(F->e_288)).line));
(*(P917)rt_nil_check(F->st_1451)).a = (*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).b)).a;
(*(P917)rt_nil_check(F->st_1451)).b = (*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).b)).b;
F->result_ = F->st_1451;
goto ret_;
} else if ((rt_str_eq(F->name_1452, rt_str("FLOAT", 5)) && (F->y_1453 == NULL))) {
F->st_1451 = f_nn_61((((rt_int)71LL)), rt_r_ichk((*(P917)rt_nil_check(F->e_288)).line));
(*(P917)rt_nil_check(F->st_1451)).a = (*(P917)rt_nil_check(F->e_288)).b;
if ((((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).b)).next != NULL) && (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).b)).next)).kind) == (((rt_int)16LL))))) {
(*(P917)rt_nil_check(F->st_1451)).b = (*(P917)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).b)).next)).a;
(*(P917)rt_nil_check(F->st_1451)).c = (*(P917)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).b)).next)).b;
}
F->result_ = F->st_1451;
goto ret_;
} else if (((!f_type_name_296(&F->name_1452)) && (!((F->y_1453 == NULL) && ((rt_str_eq(F->name_1452, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1452, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1452, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1451 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P917)rt_nil_check(F->e_288)).line));
(*(P917)rt_nil_check(F->st_1451)).name = (*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_288)).a)).name;
(*(P917)rt_nil_check(F->st_1451)).b = (*(P917)rt_nil_check(F->e_288)).b;
(*(P917)rt_nil_check(F->st_1451)).flag = ((rt_int)1LL);
F->result_ = F->st_1451;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_tt_subtype_294(P910 name_290, P917 tt_291, P917 args_292, rt_int line_293) {
  struct f_tt_subtype_294fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_290 = name_290;
F->tt_291 = tt_291;
F->args_292 = args_292;
F->line_293 = line_293;
F->st_1454 = NULL;
if (rt_str_eq((((P910)rt_nil_check(F->name_290))->all), rt_str("STRING", 6))) {
F->st_1454 = f_nn_61((((rt_int)73LL)), F->line_293);
} else if (rt_str_eq((((P910)rt_nil_check(F->name_290))->all), rt_str("SET", 3))) {
F->st_1454 = f_nn_61((((rt_int)77LL)), F->line_293);
} else if ((rt_str_eq((((P910)rt_nil_check(F->name_290))->all), rt_str("MAILBOX", 7)) && ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P927)rt_nil_check(f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1454 = f_nn_61((((rt_int)78LL)), F->line_293);
} else if (rt_str_eq((((P910)rt_nil_check(F->name_290))->all), rt_str("FILE", 4))) {
F->st_1454 = f_nn_61((((rt_int)79LL)), F->line_293);
} else if (f_type_name_296(&(((P910)rt_nil_check(F->name_290))->all))) {
F->st_1454 = f_nn_61((((rt_int)80LL)), F->line_293);
(*(P917)rt_nil_check(F->st_1454)).name = F->name_290;
(*(P917)rt_nil_check(F->st_1454)).a = F->tt_291;
(*(P917)rt_nil_check(F->st_1454)).b = F->args_292;
F->result_ = F->st_1454;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P917)rt_nil_check(F->st_1454)).a = F->tt_291;
(*(P917)rt_nil_check(F->st_1454)).b = F->args_292;
F->result_ = F->st_1454;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_name_296(rstr *name_295) {
  struct f_type_name_296fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_295 = name_295;
F->y_1455 = NULL;
F->y_1455 = f_lookup_155(&(*F->name_295));
if ((F->y_1455 == NULL)) {
F->result_ = ((((((((rt_str_eq((*F->name_295), rt_str("INT", 3)) || rt_str_eq((*F->name_295), rt_str("BOOL", 4))) || rt_str_eq((*F->name_295), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_295), rt_str("ASCII", 5))) || rt_str_eq((*F->name_295), rt_str("ACT", 3))) || rt_str_eq((*F->name_295), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_295), rt_str("LATCH", 5))) || rt_str_eq((*F->name_295), rt_str("SEND_ST", 7))) || rt_str_eq((*F->name_295), rt_str("RECEIVE_ST", 10)));
goto ret_;
}
F->result_ = (((rt_r_ichk((*(P927)rt_nil_check(F->y_1455)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P927)rt_nil_check(F->y_1455)).kind) == (((rt_int)6LL)))) || ((rt_r_ichk((*(P927)rt_nil_check(F->y_1455)).kind) == (((rt_int)10LL))) && (((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_1455)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_1455)).decl)).b)).kind) == (((rt_int)44LL)))) || (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_1455)).decl)).b)).kind) == (((rt_int)42LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_empty_set_298(P923 t_297) {
  struct f_empty_set_298fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_297 = t_297;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_new(", 10), f_sub_lo_190(f_base_of_215((*(P923)rt_nil_check(F->t_297)).elem), f_base_cons_218((*(P923)rt_nil_check(F->t_297)).elem, (*(P923)rt_nil_check(F->t_297)).elemcons))), rt_str(", ", 2)), f_sub_hi_193(f_base_of_215((*(P923)rt_nil_check(F->t_297)).elem), f_base_cons_218((*(P923)rt_nil_check(F->t_297)).elem, (*(P923)rt_nil_check(F->t_297)).elemcons))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_300(P923 t_299) {
  struct f_opened_300fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_299 = t_299;
F->c_1456 = NULL;
F->c_1456 = g_caps_972;
if ((((rt_r_ichk((*(P923)rt_nil_check(F->t_299)).kind) != (((rt_int)15LL))) || ((*(P923)rt_nil_check(F->t_299)).ocap == NULL)) || (rt_r_ichk((*(P917)rt_nil_check((*(P923)rt_nil_check(F->t_299)).ocap)).ival) == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1456 != NULL)) {
if (((*(P944)rt_nil_check(F->c_1456)).d == (*(P923)rt_nil_check(F->t_299)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1456 = (*(P944)rt_nil_check(F->c_1456)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_replace_all_304(rstr *s_301, rstr *pat_302, rstr *r_303) {
  struct f_replace_all_304fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_301 = s_301;
F->pat_302 = pat_302;
F->r_303 = r_303;
F->i_1457 = RT_R_IUNDEF;
F->i_1457 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_302)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_301)).len)) < ((rt_int)(((*F->pat_302)).len))))) {
F->result_ = (*F->s_301);
goto ret_;
}
while ((rt_sub(rt_add(rt_r_ichk(F->i_1457), ((rt_int)(((*F->pat_302)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_301)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_301), rt_r_ichk(F->i_1457), rt_sub(rt_add(rt_r_ichk(F->i_1457), ((rt_int)(((*F->pat_302)).len))), ((rt_int)1LL))), (*F->pat_302))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_301), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1457), ((rt_int)1LL))), (*F->r_303)), f_replace_all_304(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_301), rt_add(rt_r_ichk(F->i_1457), ((rt_int)(((*F->pat_302)).len))), ((rt_int)(((*F->s_301)).len))); b_; }), &(*F->pat_302), &(*F->r_303)));
goto ret_;
}
F->i_1457 = rt_add(rt_r_ichk(F->i_1457), ((rt_int)1LL));
}
F->result_ = (*F->s_301);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_subst_306(rstr *s_305) {
  struct f_subst_306fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_305 = s_305;
F->l_1458 = NULL;
F->l_1458 = g_psub_974;
F->r_1459 = NULL;
F->r_1459 = f_mk_3(&(*F->s_305));
while ((F->l_1458 != NULL)) {
F->r_1459 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_304(&(((P910)rt_nil_check(F->r_1459))->all), &(((P910)rt_nil_check((*(P921)rt_nil_check(F->l_1458)).s))->all), &(((P910)rt_nil_check((*(P921)rt_nil_check((*(P921)rt_nil_check(F->l_1458)).next)).s))->all)); b_; }));
F->l_1458 = (*(P921)rt_nil_check((*(P921)rt_nil_check(F->l_1458)).next)).next;
}
F->result_ = (((P910)rt_nil_check(F->r_1459))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P923 f_new_type_310(P927 y_307, P917 st_308, P919 *c_309) {
  struct f_new_type_310fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_307 = y_307;
F->st_308 = st_308;
F->c_309 = c_309;
F->c_309v = *F->c_309;
F->d_1460 = NULL;
F->d_1460 = (*(P927)rt_nil_check(F->y_307)).decl;
F->p_1461 = NULL;
F->uc_1462 = NULL;
F->c_309v = f_new_cons_176();
if (((*(P927)rt_nil_check(F->y_307)).t == NULL)) {
(*(P927)rt_nil_check(F->y_307)).t = f_new_typ_175((((rt_int)15LL)));
(*(P923)rt_nil_check((*(P927)rt_nil_check(F->y_307)).t)).name = (*(P927)rt_nil_check(F->y_307)).name;
(*(P923)rt_nil_check((*(P927)rt_nil_check(F->y_307)).t)).decl = F->d_1460;
(*(P923)rt_nil_check((*(P927)rt_nil_check(F->y_307)).t)).tparams = (*(P917)rt_nil_check(F->d_1460)).b;
if ((g_caps_972 != NULL)) {
(*(P923)rt_nil_check((*(P927)rt_nil_check(F->y_307)).t)).ocap = (*(P944)rt_nil_check(g_caps_972)).d;
}
f_open_scope_169();
F->p_1461 = (*(P917)rt_nil_check(F->d_1460)).b;
while ((F->p_1461 != NULL)) {
F->z_1463 = NULL;
F->z_1463 = f_new_sym_173((((rt_int)2LL)), (*(P917)rt_nil_check(F->p_1461)).name);
F->zc_1464 = NULL;
(*(P927)rt_nil_check(F->z_1463)).t = f_resolve_subtype_260((*(P917)rt_nil_check(F->p_1461)).a, &F->zc_1464);
(*(P927)rt_nil_check(F->z_1463)).mnext = (*(P923)rt_nil_check((*(P927)rt_nil_check(F->y_307)).t)).tpsyms;
(*(P923)rt_nil_check((*(P927)rt_nil_check(F->y_307)).t)).tpsyms = F->z_1463;
(*(P927)rt_nil_check(F->z_1463)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1461)).name))->all))), rt_str("@", 1)); b_; }));
f_define_160(F->z_1463, rt_r_ichk((*(P917)rt_nil_check(F->d_1460)).line));
F->p_1461 = (*(P917)rt_nil_check(F->p_1461)).next;
}
(*(P923)rt_nil_check((*(P927)rt_nil_check(F->y_307)).t)).under = f_resolve_subtype_260((*(P917)rt_nil_check(F->d_1460)).a, &F->uc_1462);
(*(P923)rt_nil_check((*(P927)rt_nil_check(F->y_307)).t)).elemcons = F->uc_1462;
f_close_scope_170();
}
(*(P919)rt_nil_check(F->c_309v)).args = (*(P917)rt_nil_check(F->st_308)).b;
F->result_ = (*(P927)rt_nil_check(F->y_307)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_309) = F->c_309v;
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_314(rstr *lval_311, P923 t_312, P919 c_313) {
  struct f_init_storage_314fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_311 = lval_311;
F->t_312 = t_312;
F->c_313 = c_313;
f_make_storage_329(&(*F->lval_311), F->t_312, F->c_313);
if (((*(P923)rt_nil_check(F->t_312)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_317((*(P923)rt_nil_check(F->t_312)).initp, &(*F->lval_311)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_317(P927 y_315, rstr *lval_316) {
  struct f_init_call_317fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_315 = y_315;
F->lval_316 = lval_316;
F->link_1465 = NULL;
F->link_1465 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P927)rt_nil_check(F->y_315)).level) > ((rt_int)0LL))) {
F->link_1465 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1467 = ((rt_int)1LL), hi1468 = rt_sub(rt_r_ichk(g_cur_level_970), rt_r_ichk((*(P927)rt_nil_check(F->y_315)).level));
for (rt_int it1469 = lo1467; it1469 <= hi1468; it1469++) {
F->i_1466 = it1469;
F->link_1465 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->link_1465))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1465 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->link_1465))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_315)).cname))->all), rt_str("(", 1)), (((P910)rt_nil_check(F->link_1465))->all)), rt_str("&", 1)), (*F->lval_316)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_319(P923 t_318) {
  struct f_needs_fin_319fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_318 = t_318;
if ((F->t_318 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P923)rt_nil_check(F->t_318)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_318)).kind) == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_319((*(P923)rt_nil_check(F->t_318)).under);
goto ret_;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_318)).kind) == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_319((*(P923)rt_nil_check(F->t_318)).elem);
goto ret_;
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->t_318)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_318)).kind) == (((rt_int)17LL))))) {
F->f_1470 = NULL;
F->f_1470 = (*(P923)rt_nil_check(F->t_318)).fields;
while ((F->f_1470 != NULL)) {
if (f_needs_fin_319((*(P925)rt_nil_check(F->f_1470)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1470 = (*(P925)rt_nil_check(F->f_1470)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_322(rstr *lval_320, P923 t_321) {
  struct f_fin_code_322fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_320 = lval_320;
F->t_321 = t_321;
F->r_1471 = NULL;
F->r_1471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P923)rt_nil_check(F->t_321)).finalp != NULL)) {
F->r_1471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_317((*(P923)rt_nil_check(F->t_321)).finalp, &(*F->lval_320)), rt_str(" ", 1)); b_; }));
}
if (((rt_r_ichk((*(P923)rt_nil_check(F->t_321)).kind) == (((rt_int)15LL))) && ((*(P923)rt_nil_check(F->t_321)).tparams == NULL))) {
F->result_ = rt_str_cat((((P910)rt_nil_check(F->r_1471))->all), f_fin_code_322(&(*F->lval_320), (*(P923)rt_nil_check(F->t_321)).under));
goto ret_;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_321)).kind) == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P910)rt_nil_check(F->r_1471))->all), f_fin_code_322(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_320), rt_str(".all", 4)); b_; }), (*(P923)rt_nil_check(F->t_321)).under));
goto ret_;
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->t_321)).kind) == (((rt_int)6LL))) && f_needs_fin_319((*(P923)rt_nil_check(F->t_321)).elem))) {
F->i_1472 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_1471))->all), rt_str("for (rt_int ", 12)), F->i_1472), rt_str(" = 0; ", 6)), F->i_1472), rt_str(" < ", 3)), f_acnt_241(F->t_321, &(*F->lval_320))), rt_str("; ", 2)), F->i_1472), rt_str("++) { ", 6)), f_fin_code_322(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_320), rt_str(".p[", 3)), F->i_1472), rt_str("]", 1)); b_; }), (*(P923)rt_nil_check(F->t_321)).elem)), rt_str(" }", 2));
goto ret_;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_321)).kind) == (((rt_int)7LL)))) {
F->f_1473 = NULL;
F->f_1473 = (*(P923)rt_nil_check(F->t_321)).fields;
while ((F->f_1473 != NULL)) {
if (f_needs_fin_319((*(P925)rt_nil_check(F->f_1473)).t)) {
F->r_1471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_1471))->all), f_fin_code_322(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_320), rt_str(".", 1)), f_field_c_17(&(((P910)rt_nil_check((*(P925)rt_nil_check(F->f_1473)).name))->all))); b_; }), (*(P925)rt_nil_check(F->f_1473)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1473 = (*(P925)rt_nil_check(F->f_1473)).next;
}
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_321)).kind) == (((rt_int)17LL)))) {
F->f_1474 = NULL;
F->f_1474 = (*(P923)rt_nil_check(F->t_321)).fields;
F->i_1475 = RT_R_IUNDEF;
F->i_1475 = ((rt_int)0LL);
F->r_1471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_1471))->all), rt_str("switch (", 8)), (*F->lval_320)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1474 != NULL)) {
if (f_needs_fin_319((*(P925)rt_nil_check(F->f_1474)).t)) {
F->r_1471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_1471))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1475))), rt_str(": ", 2)), f_fin_code_322(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_320), rt_str(".u.", 3)), f_field_c_17(&(((P910)rt_nil_check((*(P925)rt_nil_check(F->f_1474)).name))->all))); b_; }), (*(P925)rt_nil_check(F->f_1474)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1475 = rt_add(rt_r_ichk(F->i_1475), ((rt_int)1LL));
F->f_1474 = (*(P925)rt_nil_check(F->f_1474)).next;
}
F->r_1471 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_1471))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P910)rt_nil_check(F->r_1471))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P923 f_tparam_type_325(P923 t_323, rstr *name_324) {
  struct f_tparam_type_325fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_323 = t_323;
F->name_324 = name_324;
F->z_1476 = NULL;
F->z_1476 = (*(P923)rt_nil_check(F->t_323)).tpsyms;
while ((F->z_1476 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->z_1476)).name))->all), (*F->name_324))) {
F->result_ = (*(P927)rt_nil_check(F->z_1476)).t;
goto ret_;
}
F->z_1476 = (*(P927)rt_nil_check(F->z_1476)).mnext;
}
F->result_ = g_ty_int_997;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_329(rstr *lval_326, P923 t_327, P919 c_328) {
  struct f_make_storage_329fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_326 = lval_326;
F->t_327 = t_327;
F->c_328 = c_328;
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_327)).kind) == (((rt_int)15LL)))) {
F->p_1477 = NULL;
F->p_1477 = (*(P923)rt_nil_check(F->t_327)).tparams;
F->a_1478 = NULL;
F->a_1478 = (*(P919)rt_nil_check(F->c_328)).args;
F->uc_1479 = NULL;
F->ut_1480 = NULL;
F->at_1481 = NULL;
if ((f_list_len_67(F->a_1478) != f_list_len_67(F->p_1477))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_327)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1477))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1477 != NULL)) {
F->pt_1482 = f_tparam_type_325(F->t_327, &(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1477)).name))->all));
F->v_1483 = rt_str_copy(f_gexpr_705(F->a_1478, F->pt_1482, &F->at_1481));
f_check_type_224(F->at_1481, F->pt_1482, rt_r_ichk((*(P917)rt_nil_check(F->a_1478)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_326), rt_str(".p_", 3)), f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1477)).name))->all))), rt_str(" = ", 3)), F->v_1483), rt_str(";", 1)); b_; }));
F->p_1477 = (*(P917)rt_nil_check(F->p_1477)).next;
F->a_1478 = (*(P917)rt_nil_check(F->a_1478)).next;
}
{
F->saved_1484 = NULL;
F->saved_1484 = g_psub_974;
F->p_1477 = (*(P923)rt_nil_check(F->t_327)).tparams;
while ((F->p_1477 != NULL)) {
F->l1_1485 = NULL;
F->l2_1486 = NULL;
{ R922 *cell1487 = rt_alloc(sizeof(R922));
(*cell1487).s = NULL;
(*cell1487).next = NULL;
F->l1_1485 = cell1487;
}
{ R922 *cell1488 = rt_alloc(sizeof(R922));
(*cell1488).s = NULL;
(*cell1488).next = NULL;
F->l2_1486 = cell1488;
}
(*(P921)rt_nil_check(F->l1_1485)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1477)).name))->all))), rt_str("@", 1)); b_; }));
(*(P921)rt_nil_check(F->l2_1486)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_326), rt_str(".p_", 3)), f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1477)).name))->all))); b_; }));
(*(P921)rt_nil_check(F->l1_1485)).next = F->l2_1486;
(*(P921)rt_nil_check(F->l2_1486)).next = g_psub_974;
g_psub_974 = F->l1_1485;
F->p_1477 = (*(P917)rt_nil_check(F->p_1477)).next;
}
if (((*(P923)rt_nil_check(F->t_327)).tparams == NULL)) {
f_init_storage_314(&(*F->lval_326), (*(P923)rt_nil_check(F->t_327)).under, (*(P923)rt_nil_check(F->t_327)).elemcons);
} else {
f_init_storage_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_326), rt_str(".all", 4)); b_; }), (*(P923)rt_nil_check(F->t_327)).under, (*(P923)rt_nil_check(F->t_327)).elemcons);
}
g_psub_974 = F->saved_1484;
}
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_327)).kind) == (((rt_int)12LL)))) {
if (((*(P919)rt_nil_check(F->c_328)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_326), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_326)), rt_str(", ", 2)), f_subst_306(&(((P910)rt_nil_check((*(P919)rt_nil_check(F->c_328)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_226((*(P923)rt_nil_check(F->t_327)).elem)), rt_str("), ", 3)), f_mcopy_360((*(P923)rt_nil_check(F->t_327)).elem)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_327)).kind) == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_326)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_327)).kind) == (((rt_int)16LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_326), rt_str(" = ", 3)), f_empty_set_298(F->t_327)), rt_str(";", 1)); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_327)).kind) == (((rt_int)10LL)))) {
F->at_1489 = NULL;
if ((((F->c_328 == NULL) || ((*(P919)rt_nil_check(F->c_328)).args == NULL)) || ((*(P917)rt_nil_check((*(P919)rt_nil_check(F->c_328)).args)).next == NULL))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a file variable needs its access and use: FILE[S](access, use)", 62); b_; }));
}
if (((!f_text_file_886(F->t_327)) && (!f_flat_331((*(P923)rt_nil_check(F->t_327)).elem)))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the components of a file on the simulated machine hold no strings, arrays, sets or pointers", 91); b_; }));
}
{
F->acc_1490 = rt_str_copy(f_gexpr_705((*(P919)rt_nil_check(F->c_328)).args, g_file_access_type_1014, &F->at_1489));
F->use_1491 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check((*(P919)rt_nil_check(F->c_328)).args)).next, g_file_mode_type_1008, &F->at_1489));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_326), rt_str(" = rt_r_file_new(", 17)), F->acc_1490), rt_str(", ", 2)), F->use_1491), rt_str(", sizeof(", 9)), f_ctype_226((*(P923)rt_nil_check(F->t_327)).elem)), rt_str("), ", 3)), f_bool_text_350(f_text_file_886(F->t_327))), rt_str(");", 2)); b_; }));
}
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_327)).kind) == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_326), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_327)).kind) == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_326), rt_str(" = NULL;", 8)); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_327)).kind) == (((rt_int)5LL)))) {
if (((*(P919)rt_nil_check(F->c_328)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_326), rt_str(" = rt_str_new(", 14)), f_subst_306(&(((P910)rt_nil_check((*(P919)rt_nil_check(F->c_328)).slen))->all))), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_327)).kind) == (((rt_int)6LL)))) {
if (((*(P919)rt_nil_check(F->c_328)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1493 = ((rt_int)1LL), hi1494 = rt_r_ichk((*(P923)rt_nil_check(F->t_327)).ndim);
for (rt_int it1495 = lo1493; it1495 <= hi1494; it1495++) {
F->k_1492 = it1495;
if ((f_cons_lo_244(F->c_328, F->k_1492) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_326), rt_str(".", 1)), f_dim_lo_234(F->k_1492)), rt_str(" = ", 3)), f_subst_306(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P910)rt_nil_check(f_cons_lo_244(F->c_328, F->k_1492)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_326)), rt_str(".", 1)), f_dim_hi_236(F->k_1492)), rt_str(" = ", 3)), f_subst_306(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P910)rt_nil_check(f_cons_hi_247(F->c_328, F->k_1492)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_327)).ndim) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_326), rt_str(".lo2 = ", 7)), (*F->lval_326)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_326), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_226((*(P923)rt_nil_check(F->t_327)).elem)), rt_str(") * (size_t)", 12)), f_acnt_241(F->t_327, &(*F->lval_326))), rt_str(" + 1);", 6)); b_; }));
if (((((((((((rt_r_ichk((*(P923)rt_nil_check((*(P923)rt_nil_check(F->t_327)).elem)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P923)rt_nil_check((*(P923)rt_nil_check(F->t_327)).elem)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P923)rt_nil_check((*(P923)rt_nil_check(F->t_327)).elem)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P923)rt_nil_check((*(P923)rt_nil_check(F->t_327)).elem)).kind) == (((rt_int)15LL)))) || (rt_r_ichk((*(P923)rt_nil_check((*(P923)rt_nil_check(F->t_327)).elem)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P923)rt_nil_check((*(P923)rt_nil_check(F->t_327)).elem)).kind) == (((rt_int)12LL)))) || (rt_r_ichk((*(P923)rt_nil_check((*(P923)rt_nil_check(F->t_327)).elem)).kind) == (((rt_int)13LL)))) || (rt_r_ichk((*(P923)rt_nil_check((*(P923)rt_nil_check(F->t_327)).elem)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P923)rt_nil_check((*(P923)rt_nil_check(F->t_327)).elem)).kind) == (((rt_int)17LL)))) || (rt_r_echk(g_mark_uninit_989) && (!rt_str_eq(f_uninit_value_333((*(P923)rt_nil_check(F->t_327)).elem), rt_str("", 0)))))) {
F->i_1496 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1496), rt_str(" = 0; ", 6)), F->i_1496), rt_str(" < ", 3)), f_acnt_241(F->t_327, &(*F->lval_326))), rt_str("; ", 2)), F->i_1496), rt_str("++) {", 5)); b_; }));
f_init_storage_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_326), rt_str(".p[", 3)), F->i_1496), rt_str("]", 1)); b_; }), (*(P923)rt_nil_check(F->t_327)).elem, (*(P923)rt_nil_check(F->t_327)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_327)).kind) == (((rt_int)7LL)))) {
F->f_1497 = NULL;
F->f_1497 = (*(P923)rt_nil_check(F->t_327)).fields;
while ((F->f_1497 != NULL)) {
f_init_storage_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_326), rt_str(".", 1)), f_field_c_17(&(((P910)rt_nil_check((*(P925)rt_nil_check(F->f_1497)).name))->all))); b_; }), (*(P925)rt_nil_check(F->f_1497)).t, (*(P925)rt_nil_check(F->f_1497)).c);
F->f_1497 = (*(P925)rt_nil_check(F->f_1497)).next;
}
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_327)).kind) == (((rt_int)17LL)))) {
if (((F->c_328 != NULL) && rt_r_echk((*(P919)rt_nil_check(F->c_328)).hasm))) {
F->f_1498 = NULL;
F->f_1498 = (*(P923)rt_nil_check(F->t_327)).fields;
{ rt_int lo1500 = ((rt_int)1LL), hi1501 = rt_r_ichk((*(P919)rt_nil_check(F->c_328)).mlo);
for (rt_int it1502 = lo1500; it1502 <= hi1501; it1502++) {
F->i_1499 = it1502;
F->f_1498 = (*(P925)rt_nil_check(F->f_1498)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_326), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk((*(P919)rt_nil_check(F->c_328)).mlo))), rt_str(";", 1)); b_; }));
f_init_storage_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_326), rt_str(".u.", 3)), f_field_c_17(&(((P910)rt_nil_check((*(P925)rt_nil_check(F->f_1498)).name))->all))); b_; }), (*(P925)rt_nil_check(F->f_1498)).t, (*(P925)rt_nil_check(F->f_1498)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_326), rt_str(".tag = -1;", 10)); b_; }));
}
} else if ((rt_r_echk(g_mark_uninit_989) && (!rt_str_eq(f_uninit_value_333(F->t_327), rt_str("", 0))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_326), rt_str(" = ", 3)), f_uninit_value_333(F->t_327)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_flat_331(P923 t_330) {
  struct f_flat_331fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_330 = t_330;
if (((rt_r_ichk((*(P923)rt_nil_check(F->t_330)).kind) == (((rt_int)15LL))) && ((*(P923)rt_nil_check(F->t_330)).tparams == NULL))) {
F->result_ = f_flat_331((*(P923)rt_nil_check(F->t_330)).under);
goto ret_;
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->t_330)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_330)).kind) == (((rt_int)17LL))))) {
F->f_1503 = NULL;
F->f_1503 = (*(P923)rt_nil_check(F->t_330)).fields;
while ((F->f_1503 != NULL)) {
if ((!f_flat_331((*(P925)rt_nil_check(F->f_1503)).t))) {
F->result_ = 0;
goto ret_;
}
F->f_1503 = (*(P925)rt_nil_check(F->f_1503)).next;
}
F->result_ = 1;
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P923)rt_nil_check(F->t_330)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_330)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_330)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_330)).kind) == (((rt_int)2LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_uninit_value_333(P923 t_332) {
  struct f_uninit_value_333fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_332 = t_332;
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_332)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str("RT_R_IUNDEF", 11);
goto ret_;
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->t_332)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_332)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str("RT_R_EUNDEF", 11);
goto ret_;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_332)).kind) == (((rt_int)3LL)))) {
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

static rstr f_init_chk_336(P923 t_334, rstr *v_335) {
  struct f_init_chk_336fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_334 = t_334;
F->v_335 = v_335;
F->b_1504 = NULL;
F->b_1504 = f_base_of_215(F->t_334);
if (f_suppressed_466(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))) {
F->result_ = (*F->v_335);
goto ret_;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->b_1504)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_ichk(", 10), (*F->v_335)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->b_1504)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->b_1504)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_echk(", 10), (*F->v_335)), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->b_1504)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fchk(", 10), (*F->v_335)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_335);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_manifest_339(P917 e_337, int *ok_338) {
  struct f_manifest_339fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_337 = e_337;
F->ok_338 = ok_338;
F->ok_338v = *F->ok_338;
F->v_1505 = NULL;
F->v_1505 = f_meval_348(F->e_337, &F->ok_338v);
if ((rt_r_echk(F->ok_338v) && (rt_r_ichk((*(P936)rt_nil_check(F->v_1505)).kind) == (((rt_int)1LL))))) {
F->result_ = rt_r_ichk((*(P936)rt_nil_check(F->v_1505)).i);
goto ret_;
}
F->ok_338v = 0;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_338v)) (*F->ok_338) = F->ok_338v;
  RT_FPOP();
  return F->result_;
}

static P936 f_mk_mval_342(rt_int kind_340, rt_int i_341) {
  struct f_mk_mval_342fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_340 = kind_340;
F->i_341 = i_341;
F->v_1506 = NULL;
{ R937 *cell1507 = rt_alloc(sizeof(R937));
(*cell1507).s = NULL;
(*cell1507).t = NULL;
F->v_1506 = cell1507;
}
(*(P936)rt_nil_check(F->v_1506)).kind = F->kind_340;
(*(P936)rt_nil_check(F->v_1506)).i = F->i_341;
F->result_ = F->v_1506;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_ipow_345(rt_int a_343, rt_int b_344) {
  struct f_ipow_345fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_343 = a_343;
F->b_344 = b_344;
F->r_1508 = RT_R_IUNDEF;
F->r_1508 = ((rt_int)1LL);
{ rt_int lo1510 = ((rt_int)1LL), hi1511 = F->b_344;
for (rt_int it1512 = lo1510; it1512 <= hi1511; it1512++) {
F->i_1509 = it1512;
F->r_1508 = rt_mul(rt_r_ichk(F->r_1508), F->a_343);
}
}
F->result_ = rt_r_ichk(F->r_1508);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P936 f_meval_348(P917 e_346, int *ok_347) {
  struct f_meval_348fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_346 = e_346;
F->ok_347 = ok_347;
F->ok_347v = *F->ok_347;
F->a_1513 = NULL;
F->b_1514 = NULL;
F->ok2_1515 = RT_R_EUNDEF;
F->op_1516 = NULL;
F->ok_347v = 0;
if ((F->e_346 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_346)).kind) == (((rt_int)1LL)))) {
F->ok_347v = 1;
F->result_ = f_mk_mval_342((((rt_int)1LL)), rt_r_ichk((*(P917)rt_nil_check(F->e_346)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_346)).kind) == (((rt_int)5LL)))) {
F->ok_347v = 1;
F->result_ = f_mk_mval_342((((rt_int)2LL)), rt_r_ichk((*(P917)rt_nil_check(F->e_346)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_346)).kind) == (((rt_int)2LL)))) {
F->ok_347v = 1;
F->result_ = f_mk_mval_342((((rt_int)3LL)), ((rt_int)0LL));
goto ret_;
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_346)).kind) == (((rt_int)3LL)))) {
F->ok_347v = 1;
F->a_1513 = f_mk_mval_342((((rt_int)5LL)), ((rt_int)0LL));
(*(P936)rt_nil_check(F->a_1513)).s = (*(P917)rt_nil_check(F->e_346)).name;
F->result_ = F->a_1513;
goto ret_;
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_346)).kind) == (((rt_int)4LL)))) {
if ((f_lit_index_257((*(P923)rt_nil_check(g_ty_ascii_1000)).lits, &(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_346)).name))->all)) >= ((rt_int)0LL))) {
F->ok_347v = 1;
F->a_1513 = f_mk_mval_342((((rt_int)4LL)), f_lit_index_257((*(P923)rt_nil_check(g_ty_ascii_1000)).lits, &(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_346)).name))->all)));
(*(P936)rt_nil_check(F->a_1513)).t = g_ty_ascii_1000;
(*(P936)rt_nil_check(F->a_1513)).s = (*(P917)rt_nil_check(F->e_346)).name;
F->result_ = F->a_1513;
goto ret_;
}
F->a_1513 = f_mk_mval_342((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P936)rt_nil_check(F->a_1513)).s = (*(P917)rt_nil_check(F->e_346)).name;
F->ok_347v = 1;
F->result_ = F->a_1513;
goto ret_;
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_346)).kind) == (((rt_int)17LL)))) {
F->result_ = f_meval_348((*(P917)rt_nil_check(F->e_346)).a, &F->ok_347v);
goto ret_;
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_346)).kind) == (((rt_int)7LL)))) {
F->y_1517 = NULL;
F->y_1517 = f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_346)).name))->all));
if ((((F->y_1517 != NULL) && (rt_r_ichk((*(P927)rt_nil_check(F->y_1517)).kind) == (((rt_int)2LL)))) && ((*(P927)rt_nil_check(F->y_1517)).mv != NULL))) {
F->ok_347v = 1;
F->result_ = (*(P927)rt_nil_check(F->y_1517)).mv;
goto ret_;
} else if ((((F->y_1517 != NULL) && (rt_r_ichk((*(P927)rt_nil_check(F->y_1517)).kind) == (((rt_int)2LL)))) && rt_r_echk((*(P927)rt_nil_check(F->y_1517)).hasmv))) {
F->ok_347v = 1;
F->result_ = f_mk_mval_342((((rt_int)1LL)), rt_r_ichk((*(P927)rt_nil_check(F->y_1517)).mvalue));
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_346)).kind) == (((rt_int)8LL)))) {
F->a_1513 = f_meval_348((*(P917)rt_nil_check(F->e_346)).a, &F->ok_347v);
if ((!rt_r_echk(F->ok_347v))) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_346)).name))->all), rt_str("NOT", 3)) && (rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).kind) == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_342((((rt_int)2LL)), rt_sub(((rt_int)1LL), rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i)));
goto ret_;
} else if ((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_346)).name))->all), rt_str("-", 1)) && (rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).kind) == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_342((((rt_int)1LL)), rt_neg(rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i)));
goto ret_;
} else if (((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_346)).name))->all), rt_str("+", 1)) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_346)).name))->all), rt_str("-", 1))) && ((rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).kind) == (((rt_int)3LL)))))) {
F->result_ = F->a_1513;
goto ret_;
}
F->ok_347v = 0;
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P917)rt_nil_check(F->e_346)).kind) != (((rt_int)9LL))) || f_user_defined_358(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_346)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1516 = (*(P917)rt_nil_check(F->e_346)).name;
F->a_1513 = f_meval_348((*(P917)rt_nil_check(F->e_346)).a, &F->ok_347v);
F->b_1514 = f_meval_348((*(P917)rt_nil_check(F->e_346)).b, &F->ok2_1515);
F->ok_347v = (rt_r_echk(F->ok_347v) && rt_r_echk(F->ok2_1515));
if ((!rt_r_echk(F->ok_347v))) {
F->result_ = NULL;
goto ret_;
}
F->ok_347v = 0;
if (((rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).kind) == (((rt_int)1LL))) && (rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).kind) == (((rt_int)1LL))))) {
F->ok_347v = 1;
if (rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_342((((rt_int)1LL)), rt_add(rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i), rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i)));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_342((((rt_int)1LL)), rt_sub(rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i), rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i)));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_342((((rt_int)1LL)), rt_mul(rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i), rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i)));
goto ret_;
} else if ((rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("DIV", 3)) && (rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_342((((rt_int)1LL)), rt_div(rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i), rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i)));
goto ret_;
} else if ((rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("MOD", 3)) && (rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_342((((rt_int)1LL)), rt_mod(rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i), rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i)));
goto ret_;
} else if ((rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("**", 2)) && (rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i) >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_342((((rt_int)1LL)), f_ipow_345(rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i), rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i)));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_342((((rt_int)2LL)), f_bool_i_352((rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i) == rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i))));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_342((((rt_int)2LL)), f_bool_i_352((rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i) != rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i))));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_342((((rt_int)2LL)), f_bool_i_352((rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i) < rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i))));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_342((((rt_int)2LL)), f_bool_i_352((rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i) <= rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i))));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_342((((rt_int)2LL)), f_bool_i_352((rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i) > rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i))));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_342((((rt_int)2LL)), f_bool_i_352((rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i) >= rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).kind) == (((rt_int)3LL)))) && (((rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("+", 1)) || rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("-", 1))) || rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("*", 1))) || rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("/", 1))))) {
F->ok_347v = 1;
F->result_ = F->a_1513;
goto ret_;
} else if ((((rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).kind) == (((rt_int)1LL)))) && rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("**", 2)))) {
F->ok_347v = 1;
F->result_ = F->a_1513;
goto ret_;
} else if (((rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).kind) == (((rt_int)2LL))) && (rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).kind) == (((rt_int)2LL))))) {
F->ok_347v = 1;
if (rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_342((((rt_int)2LL)), rt_mul(rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i), rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i)));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_342((((rt_int)2LL)), f_bool_i_352((rt_add(rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i), rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i)) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("XOR", 3)) || rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_342((((rt_int)2LL)), f_bool_i_352((rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i) != rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i))));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_342((((rt_int)2LL)), f_bool_i_352((rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).i) == rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).kind) == (((rt_int)4LL)))) && (rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("=", 1)) || rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("/=", 2))))) {
F->ok_347v = 1;
if (rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_342((((rt_int)2LL)), f_bool_i_352(rt_str_eq((((P910)rt_nil_check((*(P936)rt_nil_check(F->a_1513)).s))->all), (((P910)rt_nil_check((*(P936)rt_nil_check(F->b_1514)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_342((((rt_int)2LL)), f_bool_i_352((!rt_str_eq((((P910)rt_nil_check((*(P936)rt_nil_check(F->a_1513)).s))->all), (((P910)rt_nil_check((*(P936)rt_nil_check(F->b_1514)).s))->all)))));
goto ret_;
} else if ((((rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).kind) == (((rt_int)5LL)))) && (rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("=", 1)) || rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("/=", 2))))) {
F->ok_347v = 1;
if (rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_342((((rt_int)2LL)), f_bool_i_352(rt_str_eq((((P910)rt_nil_check((*(P936)rt_nil_check(F->a_1513)).s))->all), (((P910)rt_nil_check((*(P936)rt_nil_check(F->b_1514)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_342((((rt_int)2LL)), f_bool_i_352((!rt_str_eq((((P910)rt_nil_check((*(P936)rt_nil_check(F->a_1513)).s))->all), (((P910)rt_nil_check((*(P936)rt_nil_check(F->b_1514)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P910)rt_nil_check(F->op_1516))->all), rt_str("&", 1)) && ((rt_r_ichk((*(P936)rt_nil_check(F->a_1513)).kind) == (((rt_int)5LL))) || ((*(P936)rt_nil_check(F->a_1513)).t == g_ty_ascii_1000))) && ((rt_r_ichk((*(P936)rt_nil_check(F->b_1514)).kind) == (((rt_int)5LL))) || ((*(P936)rt_nil_check(F->b_1514)).t == g_ty_ascii_1000)))) {
F->r_1518 = NULL;
F->r_1518 = f_mk_mval_342((((rt_int)5LL)), ((rt_int)0LL));
F->ok_347v = 1;
(*(P936)rt_nil_check(F->r_1518)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_354(F->a_1513), f_mstr_354(F->b_1514)); b_; }));
F->result_ = F->r_1518;
goto ret_;
}
F->ok_347v = 0;
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_347v)) (*F->ok_347) = F->ok_347v;
  RT_FPOP();
  return F->result_;
}

static rstr f_bool_text_350(int b_349) {
  struct f_bool_text_350fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_349 = b_349;
if (F->b_349) {
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

static rt_int f_bool_i_352(int b_351) {
  struct f_bool_i_352fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_351 = b_351;
if (F->b_351) {
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

static rstr f_mstr_354(P936 v_353) {
  struct f_mstr_354fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_353 = v_353;
if ((rt_r_ichk((*(P936)rt_nil_check(F->v_353)).kind) == (((rt_int)5LL)))) {
F->result_ = (((P910)rt_nil_check((*(P936)rt_nil_check(F->v_353)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_356(rt_r_ichk((*(P936)rt_nil_check(F->v_353)).i)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ascii_char_356(rt_int i_355) {
  struct f_ascii_char_356fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_355 = i_355;
F->printable_1519 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_355 >= ((rt_int)32LL)) && (F->i_355 <= ((rt_int)126LL)))) {
F->result_ = rt_r_echk(rt_str_get(F->printable_1519, rt_sub(F->i_355, ((rt_int)31LL))));
goto ret_;
}
F->result_ = 32;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_user_defined_358(rstr *op_357) {
  struct f_user_defined_358fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_357 = op_357;
F->y_1520 = NULL;
F->y_1520 = f_lookup_155(&(*F->op_357));
F->result_ = ((F->y_1520 != NULL) && ((rt_r_ichk((*(P927)rt_nil_check(F->y_1520)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P927)rt_nil_check(F->y_1520)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_360(P923 t_359) {
  struct f_mcopy_360fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_359 = t_359;
F->ct_1521 = rt_str_copy(f_ctype_226(F->t_359));
F->name_1522 = rt_str_new(rt_add(((rt_int)((F->ct_1521).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1522, rt_str_cat(rt_str("mc_", 3), F->ct_1521));
F->l_1523 = NULL;
if ((!f_seen_name_393(g_mcopies_996, &F->name_1522))) {
{ R922 *cell1524 = rt_alloc(sizeof(R922));
(*cell1524).s = NULL;
(*cell1524).next = NULL;
F->l_1523 = cell1524;
}
(*(P921)rt_nil_check(F->l_1523)).s = f_mk_3(&F->name_1522);
(*(P921)rt_nil_check(F->l_1523)).next = g_mcopies_996;
g_mcopies_996 = F->l_1523;
f_put_27(g_out_protos_962, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1522), rt_str("(void *d, const void *s);", 25)); b_; }));
if (((rt_r_ichk((*(P923)rt_nil_check(F->t_359)).kind) == (((rt_int)15LL))) && f_top_level_374((*(P923)rt_nil_check(F->t_359)).assignp))) {
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1522), rt_str("(void *d, const void *s) { ", 27)), f_user_call2_368((*(P923)rt_nil_check(F->t_359)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(", 2), F->ct_1521), rt_str(" *)d", 4)); b_; }), 1, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1521), rt_str(" *)s", 4)); b_; }), 0)), rt_str("; }", 3)); b_; }));
} else {
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1522), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1521), rt_str(" *)d = ", 7)), f_copy_code_382(F->t_359, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1521), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
}
F->result_ = F->name_1522;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_362(P923 t_361) {
  struct f_composite_362fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_361 = t_361;
F->result_ = ((((rt_r_ichk((*(P923)rt_nil_check(F->t_361)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_361)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_361)).kind) == (((rt_int)17LL)))) || ((rt_r_ichk((*(P923)rt_nil_check(F->t_361)).kind) == (((rt_int)15LL))) && ((*(P923)rt_nil_check(F->t_361)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_call2_368(P927 y_363, rstr *a_364, int lv_a_365, rstr *b_366, int lv_b_367) {
  struct f_user_call2_368fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_363 = y_363;
F->a_364 = a_364;
F->lv_a_365 = lv_a_365;
F->b_366 = b_366;
F->lv_b_367 = lv_b_367;
F->args_1525 = NULL;
F->args_1525 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P927)rt_nil_check(F->y_363)).level) > ((rt_int)0LL))) {
F->args_1525 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1527 = ((rt_int)1LL), hi1528 = rt_sub(rt_r_ichk(g_cur_level_970), rt_r_ichk((*(P927)rt_nil_check(F->y_363)).level));
for (rt_int it1529 = lo1527; it1529 <= hi1528; it1529++) {
F->i_1526 = it1529;
F->args_1525 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->args_1525))->all), rt_str("->up", 4)); b_; }));
}
}
F->args_1525 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->args_1525))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_363)).cname))->all), rt_str("(", 1)), (((P910)rt_nil_check(F->args_1525))->all)), f_user_arg_372((*(P927)rt_nil_check(F->y_363)).params, &(*F->a_364), F->lv_a_365)), rt_str(", ", 2)), f_user_arg_372((*(P929)rt_nil_check((*(P927)rt_nil_check(F->y_363)).params)).next, &(*F->b_366), F->lv_b_367)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_arg_372(P929 pm_369, rstr *v_370, int lv_371) {
  struct f_user_arg_372fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pm_369 = pm_369;
F->v_370 = v_370;
F->lv_371 = lv_371;
if ((rt_r_ichk((*(P929)rt_nil_check(F->pm_369)).mode) == (((rt_int)1LL)))) {
F->result_ = f_copy_code_382((*(P929)rt_nil_check(F->pm_369)).t, &(*F->v_370));
goto ret_;
} else if (F->lv_371) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("&(", 2), (*F->v_370)), rt_str(")", 1));
goto ret_;
}
{
F->ct_1530 = rt_str_copy(f_ctype_226((*(P929)rt_nil_check(F->pm_369)).t));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1530), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1530), rt_str(")); *b_ = ", 10)), (*F->v_370)), rt_str("; b_; })", 8));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_top_level_374(P927 y_373) {
  struct f_top_level_374fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_373 = y_373;
F->result_ = ((F->y_373 != NULL) && (rt_r_ichk((*(P927)rt_nil_check(F->y_373)).level) == ((rt_int)0LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_379(rstr *lval_375, P923 t_376, rstr *v_377, P919 c_378) {
  struct f_assign_code_379fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_375 = lval_375;
F->t_376 = t_376;
F->v_377 = v_377;
F->c_378 = c_378;
if ((((rt_r_ichk((*(P923)rt_nil_check(F->t_376)).kind) == (((rt_int)15LL))) && ((*(P923)rt_nil_check(F->t_376)).assignp != NULL)) && (rt_r_echk(g_in_func_969) || f_top_level_374((*(P923)rt_nil_check(F->t_376)).assignp)))) {
F->result_ = rt_str_cat(f_user_call2_368((*(P923)rt_nil_check(F->t_376)).assignp, &(*F->lval_375), 1, &(*F->v_377), 0), rt_str(";", 1));
goto ret_;
}
if (((rt_r_ichk((*(P923)rt_nil_check(F->t_376)).kind) == (((rt_int)15LL))) && ((*(P923)rt_nil_check(F->t_376)).tparams == NULL))) {
F->result_ = f_assign_code_379(&(*F->lval_375), (*(P923)rt_nil_check(F->t_376)).under, &(*F->v_377), F->c_378);
goto ret_;
}
if ((((rt_r_ichk((*(P923)rt_nil_check(F->t_376)).kind) == (((rt_int)17LL))) && (F->c_378 != NULL)) && ((*(P919)rt_nil_check(F->c_378)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_226(F->t_376)), rt_str(" u_ = ", 6)), (*F->v_377)), rt_str("; if (u_.tag != (", 17)), (((P910)rt_nil_check((*(P919)rt_nil_check(F->c_378)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_226(F->t_376)), rt_str("(&", 2)), (*F->lval_375)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_362(F->t_376)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_226(F->t_376)), rt_str("(&", 2)), (*F->lval_375)), rt_str(", ", 2)), (*F->v_377)), rt_str(");", 2));
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_376)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_375)), rt_str(", ", 2)), (*F->v_377)), rt_str(");", 2));
goto ret_;
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->t_376)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_376)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_226(F->t_376)), rt_str("(&", 2)), (*F->lval_375)), rt_str(", ", 2)), (*F->v_377)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_375), rt_str(" = ", 3)), f_checked_205(F->t_376, F->c_378, &(*F->v_377))), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_382(P923 t_380, rstr *v_381) {
  struct f_copy_code_382fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_380 = t_380;
F->v_381 = v_381;
if (((rt_r_ichk((*(P923)rt_nil_check(F->t_380)).kind) == (((rt_int)15LL))) && ((*(P923)rt_nil_check(F->t_380)).tparams == NULL))) {
F->result_ = f_copy_code_382((*(P923)rt_nil_check(F->t_380)).under, &(*F->v_381));
goto ret_;
}
if (f_composite_362(F->t_380)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_226(F->t_380)), rt_str("(", 1)), (*F->v_381)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_380)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_381)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->t_380)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_380)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_226(F->t_380)), rt_str("(", 1)), (*F->v_381)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_381);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_386(P923 t_383, rstr *a_384, rstr *b_385) {
  struct f_eq_code_386fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_383 = t_383;
F->a_384 = a_384;
F->b_385 = b_385;
if ((((rt_r_ichk((*(P923)rt_nil_check(F->t_383)).kind) == (((rt_int)15LL))) && ((*(P923)rt_nil_check(F->t_383)).eqp != NULL)) && (rt_r_echk(g_in_func_969) || f_top_level_374((*(P923)rt_nil_check(F->t_383)).eqp)))) {
F->result_ = f_user_call2_368((*(P923)rt_nil_check(F->t_383)).eqp, &(*F->a_384), 0, &(*F->b_385), 0);
goto ret_;
}
if (((rt_r_ichk((*(P923)rt_nil_check(F->t_383)).kind) == (((rt_int)15LL))) && ((*(P923)rt_nil_check(F->t_383)).tparams == NULL))) {
F->result_ = f_eq_code_386((*(P923)rt_nil_check(F->t_383)).under, &(*F->a_384), &(*F->b_385));
goto ret_;
}
if (f_composite_362(F->t_383)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_226(F->t_383)), rt_str("(", 1)), (*F->a_384)), rt_str(", ", 2)), (*F->b_385)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_383)).kind) == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), (*F->a_384)), rt_str(", ", 2)), (*F->b_385)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_383)).kind) == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_384)), rt_str(" == ", 4)), (*F->b_385)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_383)).kind) == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_384)), rt_str(" == ", 4)), (*F->b_385)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_383)).kind) == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_383)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_384)), rt_str(", ", 2)), (*F->b_385)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->t_383)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_383)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_226(F->t_383)), rt_str("(", 1)), (*F->a_384)), rt_str(", ", 2)), (*F->b_385)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_384)), rt_str(" == ", 4)), (*F->b_385)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_390(rstr *lval_387, P923 t_388, rstr *v_389) {
  struct f_elem_assign_390fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_387 = lval_387;
F->t_388 = t_388;
F->v_389 = v_389;
F->result_ = f_assign_code_379(&(*F->lval_387), F->t_388, &(*F->v_389), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_393(P921 l_391, rstr *s_392) {
  struct f_seen_name_393fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_391 = l_391;
F->s_392 = s_392;
F->p_1531 = NULL;
F->p_1531 = F->l_391;
while ((F->p_1531 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P921)rt_nil_check(F->p_1531)).s))->all), (*F->s_392))) {
F->result_ = 1;
goto ret_;
}
F->p_1531 = (*(P921)rt_nil_check(F->p_1531)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_394(void) {
  struct f_emit_helpers_394fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_1532 = NULL;
F->t_1533 = NULL;
F->t_1533 = g_all_types_958;
F->done_1534 = NULL;
while ((F->t_1533 != NULL)) {
if ((f_composite_362(F->t_1533) && (!f_seen_name_393(F->done_1534, &(((P910)rt_nil_check((*(P923)rt_nil_check(F->t_1533)).cname))->all))))) {
F->l_1535 = NULL;
F->c_1536 = rt_str_new(((rt_int)(((((P910)rt_nil_check((*(P923)rt_nil_check(F->t_1533)).cname))->all)).len)));
rt_str_assign(&F->c_1536, (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_1533)).cname))->all));
{ R922 *cell1537 = rt_alloc(sizeof(R922));
(*cell1537).s = NULL;
(*cell1537).next = NULL;
F->l_1535 = cell1537;
}
(*(P921)rt_nil_check(F->l_1535)).s = (*(P923)rt_nil_check(F->t_1533)).cname;
(*(P921)rt_nil_check(F->l_1535)).next = F->done_1534;
F->done_1534 = F->l_1535;
f_put_27(g_out_helpers_961, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1536), rt_str("(", 1)), F->c_1536), rt_str(" *d, ", 5)), F->c_1536), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_961, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1536), rt_str(" cp_", 4)), F->c_1536), rt_str("(", 1)), F->c_1536), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_961, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1536), rt_str("(", 1)), F->c_1536), rt_str(" a, ", 4)), F->c_1536), rt_str(" b);", 4)); b_; }));
f_helper_bodies_396(F->t_1533);
}
F->t_1533 = (*(P923)rt_nil_check(F->t_1533)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_396(P923 t_395) {
  struct f_helper_bodies_396fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_395 = t_395;
F->c_1538 = rt_str_new(((rt_int)(((((P910)rt_nil_check((*(P923)rt_nil_check(F->t_395)).cname))->all)).len)));
rt_str_assign(&F->c_1538, (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_395)).cname))->all));
F->b_1539 = NULL;
F->b_1539 = g_out_funcs_964;
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_395)).kind) == (((rt_int)6LL)))) {
F->e_1540 = NULL;
F->e_1540 = (*(P923)rt_nil_check(F->t_395)).elem;
F->sizes_1541 = NULL;
F->sizes_1541 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1542 = NULL;
F->bounds_1542 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1544 = ((rt_int)1LL), hi1545 = rt_r_ichk((*(P923)rt_nil_check(F->t_395)).ndim);
for (rt_int it1546 = lo1544; it1546 <= hi1545; it1546++) {
F->k_1543 = it1546;
F->l_1547 = rt_str_copy(f_dim_lo_234(F->k_1543));
F->h_1548 = rt_str_copy(f_dim_hi_236(F->k_1543));
F->sizes_1541 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->sizes_1541))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1547), rt_str(", d->", 5)), F->h_1548), rt_str(") != RT_R_EXT(s.", 16)), F->l_1547), rt_str(", s.", 4)), F->h_1548), rt_str(")", 1)); b_; }));
F->bounds_1542 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->bounds_1542))->all), rt_str(" || a.", 6)), F->l_1547), rt_str(" != b.", 6)), F->l_1547), rt_str(" || a.", 6)), F->h_1548), rt_str(" != b.", 6)), F->h_1548); b_; }));
}
}
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1538), rt_str("(", 1)), F->c_1538), rt_str(" *d, ", 5)), F->c_1538), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P910)rt_nil_check(F->sizes_1541))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_241(F->t_395, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_390(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1540, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_390(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1540, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1538), rt_str(" cp_", 4)), F->c_1538), rt_str("(", 1)), F->c_1538), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1538), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_226(F->e_1540)), rt_str(") * (size_t)", 12)), f_acnt_241(F->t_395, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_241(F->t_395, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_382(F->e_1540, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1538), rt_str("(", 1)), F->c_1538), rt_str(" a, ", 4)), F->c_1538), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P910)rt_nil_check(F->bounds_1542))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_241(F->t_395, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_386(F->e_1540, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_395)).kind) == (((rt_int)15LL)))) {
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1538), rt_str("(", 1)), F->c_1538), rt_str(" *d, ", 5)), F->c_1538), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_178((*(P923)rt_nil_check(F->t_395)).under) && ((*(P923)rt_nil_check(F->t_395)).elemcons != NULL)) && ((*(P919)rt_nil_check((*(P923)rt_nil_check(F->t_395)).elemcons)).lo != NULL))) {
F->saved_1549 = NULL;
F->saved_1549 = g_psub_974;
F->p_1550 = NULL;
F->p_1550 = (*(P923)rt_nil_check(F->t_395)).tparams;
while ((F->p_1550 != NULL)) {
F->l1_1551 = NULL;
F->l2_1552 = NULL;
{ R922 *cell1553 = rt_alloc(sizeof(R922));
(*cell1553).s = NULL;
(*cell1553).next = NULL;
F->l1_1551 = cell1553;
}
{ R922 *cell1554 = rt_alloc(sizeof(R922));
(*cell1554).s = NULL;
(*cell1554).next = NULL;
F->l2_1552 = cell1554;
}
(*(P921)rt_nil_check(F->l1_1551)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1550)).name))->all))), rt_str("@", 1)); b_; }));
(*(P921)rt_nil_check(F->l2_1552)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1550)).name))->all))); b_; }));
(*(P921)rt_nil_check(F->l1_1551)).next = F->l2_1552;
(*(P921)rt_nil_check(F->l2_1552)).next = g_psub_974;
g_psub_974 = F->l1_1551;
F->p_1550 = (*(P917)rt_nil_check(F->p_1550)).next;
}
if ((rt_r_ichk((*(P923)rt_nil_check((*(P923)rt_nil_check(F->t_395)).under)).kind) == (((rt_int)3LL)))) {
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_306(&(((P910)rt_nil_check((*(P919)rt_nil_check((*(P923)rt_nil_check(F->t_395)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_306(&(((P910)rt_nil_check((*(P919)rt_nil_check((*(P923)rt_nil_check(F->t_395)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_306(&(((P910)rt_nil_check((*(P919)rt_nil_check((*(P923)rt_nil_check(F->t_395)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_306(&(((P910)rt_nil_check((*(P919)rt_nil_check((*(P923)rt_nil_check(F->t_395)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_974 = F->saved_1549;
} else {
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_390(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P923)rt_nil_check(F->t_395)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1538), rt_str(" cp_", 4)), F->c_1538), rt_str("(", 1)), F->c_1538), rt_str(" s) { s.all = ", 14)), f_copy_code_382((*(P923)rt_nil_check(F->t_395)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1538), rt_str("(", 1)), F->c_1538), rt_str(" a, ", 4)), F->c_1538), rt_str(" b) { return ", 13)), f_eq_code_386((*(P923)rt_nil_check(F->t_395)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_395)).kind) == (((rt_int)17LL)))) {
F->f_1555 = NULL;
F->f_1555 = (*(P923)rt_nil_check(F->t_395)).fields;
F->i_1556 = RT_R_IUNDEF;
F->i_1556 = ((rt_int)0LL);
F->cases_as_1557 = NULL;
F->cases_as_1557 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1558 = NULL;
F->cases_cp_1558 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1559 = NULL;
F->cases_eq_1559 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1555 != NULL)) {
F->fn_1560 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P910)rt_nil_check((*(P925)rt_nil_check(F->f_1555)).name))->all))));
F->cases_as_1557 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->cases_as_1557))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1556))), rt_str(": d->", 5)), F->fn_1560), rt_str(" = ", 3)), f_copy_code_382((*(P925)rt_nil_check(F->f_1555)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1560); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1558 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->cases_cp_1558))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1556))), rt_str(": d.", 4)), F->fn_1560), rt_str(" = ", 3)), f_copy_code_382((*(P925)rt_nil_check(F->f_1555)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1560); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1559 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->cases_eq_1559))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1556))), rt_str(": return ", 9)), f_eq_code_386((*(P925)rt_nil_check(F->f_1555)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1560); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1560); b_; }))), rt_str(";", 1)); b_; }));
F->i_1556 = rt_add(rt_r_ichk(F->i_1556), ((rt_int)1LL));
F->f_1555 = (*(P925)rt_nil_check(F->f_1555)).next;
}
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1538), rt_str("(", 1)), F->c_1538), rt_str(" *d, ", 5)), F->c_1538), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P910)rt_nil_check(F->cases_as_1557))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1538), rt_str(" cp_", 4)), F->c_1538), rt_str("(", 1)), F->c_1538), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1538), rt_str(" d = s; switch (s.tag) {", 24)), (((P910)rt_nil_check(F->cases_cp_1558))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1538), rt_str("(", 1)), F->c_1538), rt_str(" a, ", 4)), F->c_1538), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P910)rt_nil_check(F->cases_eq_1559))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1561 = NULL;
F->f_1561 = (*(P923)rt_nil_check(F->t_395)).fields;
F->conds_1562 = NULL;
F->conds_1562 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1538), rt_str("(", 1)), F->c_1538), rt_str(" *d, ", 5)), F->c_1538), rt_str(" s) {", 5)); b_; }));
while ((F->f_1561 != NULL)) {
F->fn_1563 = rt_str_copy(f_field_c_17(&(((P910)rt_nil_check((*(P925)rt_nil_check(F->f_1561)).name))->all)));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_390(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1563); b_; }), (*(P925)rt_nil_check(F->f_1561)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1563); b_; }))); b_; }));
F->f_1561 = (*(P925)rt_nil_check(F->f_1561)).next;
}
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1538), rt_str(" cp_", 4)), F->c_1538), rt_str("(", 1)), F->c_1538), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1538), rt_str(" d = s;", 7)); b_; }));
F->f_1561 = (*(P923)rt_nil_check(F->t_395)).fields;
while ((F->f_1561 != NULL)) {
F->fn_1564 = rt_str_copy(f_field_c_17(&(((P910)rt_nil_check((*(P925)rt_nil_check(F->f_1561)).name))->all)));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1564), rt_str(" = ", 3)), f_copy_code_382((*(P925)rt_nil_check(F->f_1561)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1564); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1562 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->conds_1562))->all), rt_str(" && ", 4)), f_eq_code_386((*(P925)rt_nil_check(F->f_1561)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1564); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1564); b_; }))); b_; }));
F->f_1561 = (*(P925)rt_nil_check(F->f_1561)).next;
}
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1538), rt_str("(", 1)), F->c_1538), rt_str(" a, ", 4)), F->c_1538), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P910)rt_nil_check(F->conds_1562))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_398(P917 elems_397) {
  struct f_declare_body_398fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_397 = elems_397;
F->e_1565 = NULL;
F->e_1565 = F->elems_397;
while ((F->e_1565 != NULL)) {
if ((rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).kind) == (((rt_int)51LL)))) {
F->g_1566 = NULL;
F->g_1566 = f_new_sym_173((((rt_int)10LL)), (*(P917)rt_nil_check(F->e_1565)).name);
(*(P927)rt_nil_check(F->g_1566)).decl = F->e_1565;
(*(P927)rt_nil_check(F->g_1566)).level = rt_r_ichk(g_cur_level_970);
(*(P927)rt_nil_check(F->g_1566)).owner = g_func_sym_981;
(*(P927)rt_nil_check(F->g_1566)).gctx = g_fctx_971;
f_define_160(F->g_1566, rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).line));
}
F->e_1565 = (*(P917)rt_nil_check(F->e_1565)).next;
}
F->e_1565 = F->elems_397;
while ((F->e_1565 != NULL)) {
if (((rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).kind) == (((rt_int)41LL))) && (rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).flag) == ((rt_int)0LL)))) {
f_manifest_const_400(F->e_1565);
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).kind) == (((rt_int)47LL)))) {
f_gen_capsule_408(F->e_1565);
} else if ((((rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).kind) == (((rt_int)48LL))) && (rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).flag) != ((rt_int)1LL))) && (rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).flag) != ((rt_int)3LL)))) {
f_gen_expose_430(F->e_1565);
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).kind) == (((rt_int)49LL)))) {
F->y_1567 = NULL;
F->y_1567 = f_new_sym_173((((rt_int)7LL)), (*(P917)rt_nil_check(F->e_1565)).name);
(*(P927)rt_nil_check(F->y_1567)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_1565)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_160(F->y_1567, rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).line));
f_put_27(g_out_globals_963, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P910)rt_nil_check((*(P927)rt_nil_check(F->y_1567)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_966, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P910)rt_nil_check((*(P927)rt_nil_check(F->y_1567)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_1565)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).kind) == (((rt_int)42LL)))) {
F->y_1568 = NULL;
F->y_1568 = f_new_sym_173((((rt_int)6LL)), (*(P917)rt_nil_check(F->e_1565)).name);
(*(P927)rt_nil_check(F->y_1568)).st = (*(P917)rt_nil_check(F->e_1565)).a;
(*(P927)rt_nil_check(F->y_1568)).decl = F->e_1565;
f_define_160(F->y_1568, rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).line));
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).kind) == (((rt_int)44LL)))) {
F->y_1569 = NULL;
F->y_1569 = f_new_sym_173((((rt_int)5LL)), (*(P917)rt_nil_check(F->e_1565)).name);
F->t_1570 = NULL;
F->t_1570 = f_new_typ_175((((rt_int)8LL)));
(*(P923)rt_nil_check(F->t_1570)).name = (*(P917)rt_nil_check(F->e_1565)).name;
(*(P923)rt_nil_check(F->t_1570)).decl = F->e_1565;
(*(P927)rt_nil_check(F->y_1569)).t = F->t_1570;
f_define_160(F->y_1569, rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).line));
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).kind) == (((rt_int)43LL)))) {
F->y_1571 = NULL;
F->y_1571 = f_new_sym_173((((rt_int)5LL)), (*(P917)rt_nil_check(F->e_1565)).name);
(*(P927)rt_nil_check(F->y_1571)).st = (*(P917)rt_nil_check(F->e_1565)).a;
(*(P927)rt_nil_check(F->y_1571)).decl = F->e_1565;
f_define_160(F->y_1571, rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).line));
}
F->e_1565 = (*(P917)rt_nil_check(F->e_1565)).next;
}
F->e_1565 = F->elems_397;
while ((F->e_1565 != NULL)) {
if ((((rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).kind) == (((rt_int)50LL))))) {
F->y_1572 = NULL;
f_declare_subprogram_457(F->e_1565);
F->y_1572 = f_lookup_decl_157(F->e_1565);
(*(P927)rt_nil_check(F->y_1572)).home = F->elems_397;
f_normal_function_455(F->e_1565, F->y_1572);
}
F->e_1565 = (*(P917)rt_nil_check(F->e_1565)).next;
}
F->e_1565 = F->elems_397;
{
F->snap_1573 = NULL;
while ((F->e_1565 != NULL)) {
if ((rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).kind) == (((rt_int)51LL)))) {
if ((F->snap_1573 == NULL)) {
{ P931 cell1574 = rt_alloc(sizeof *cell1574);
rt_int pv1575 = (((rt_int)4093LL));
cell1574->p_n = pv1575;
cell1574->all.lo = ((rt_int)0LL); cell1574->all.hi = pv1575;
cell1574->all.lo2 = cell1574->all.hi2 = 1;
cell1574->all.p = rt_alloc(sizeof(P927) * (size_t)(RT_CNT(cell1574->all)) + 1);
for (rt_int i1576 = 0; i1576 < (RT_CNT(cell1574->all)); i1576++) {
cell1574->all.p[i1576] = NULL;
}
F->snap_1573 = cell1574;
}
{ rt_int lo1578 = ((rt_int)0LL), hi1579 = (((rt_int)4093LL));
for (rt_int it1580 = lo1578; it1580 <= hi1579; it1580++) {
F->i_1577 = it1580;
(((P931)rt_nil_check(F->snap_1573))->all).p[(rt_index(F->i_1577, (((P931)rt_nil_check(F->snap_1573))->all).lo, (((P931)rt_nil_check(F->snap_1573))->all).hi) - (((P931)rt_nil_check(F->snap_1573))->all).lo)] = ({ A933 b_ = (((P931)rt_nil_check(g_table_953))->all); b_.p[(rt_index(F->i_1577, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1581 = NULL;
F->g_1581 = f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_1565)).name))->all));
(*(P927)rt_nil_check(F->g_1581)).env = F->snap_1573;
}
}
F->e_1565 = (*(P917)rt_nil_check(F->e_1565)).next;
}
}
F->e_1565 = F->elems_397;
while ((F->e_1565 != NULL)) {
if (((rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).kind) == (((rt_int)45LL))) && (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_1565)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_1565)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1582 = NULL;
F->y_1582 = f_lookup_decl_157(F->e_1565);
if (((((F->y_1582 != NULL) && ((*(P927)rt_nil_check(F->y_1582)).params != NULL)) && ((*(P929)rt_nil_check((*(P927)rt_nil_check(F->y_1582)).params)).next == NULL)) && ((rt_r_ichk((*(P923)rt_nil_check((*(P929)rt_nil_check((*(P927)rt_nil_check(F->y_1582)).params)).t)).kind) == (((rt_int)15LL))) || (rt_r_ichk((*(P923)rt_nil_check((*(P929)rt_nil_check((*(P927)rt_nil_check(F->y_1582)).params)).t)).kind) == (((rt_int)8LL)))))) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_1565)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P923)rt_nil_check((*(P929)rt_nil_check((*(P927)rt_nil_check(F->y_1582)).params)).t)).initp = F->y_1582;
} else {
(*(P923)rt_nil_check((*(P929)rt_nil_check((*(P927)rt_nil_check(F->y_1582)).params)).t)).finalp = F->y_1582;
}
}
}
if ((((rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).kind) == (((rt_int)45LL))) && rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_1565)).name))->all), rt_str(":=", 2))) || ((rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).kind) == (((rt_int)46LL))) && (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_1565)).name))->all), rt_str("=", 1)) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_1565)).name))->all), rt_str("<", 1)))))) {
F->y_1583 = NULL;
F->y_1583 = f_lookup_decl_157(F->e_1565);
if (((((((F->y_1583 != NULL) && ((*(P927)rt_nil_check(F->y_1583)).params != NULL)) && ((*(P929)rt_nil_check((*(P927)rt_nil_check(F->y_1583)).params)).next != NULL)) && ((*(P929)rt_nil_check((*(P929)rt_nil_check((*(P927)rt_nil_check(F->y_1583)).params)).next)).next == NULL)) && (rt_r_ichk((*(P923)rt_nil_check((*(P929)rt_nil_check((*(P927)rt_nil_check(F->y_1583)).params)).t)).kind) == (((rt_int)15LL)))) && f_same_213((*(P929)rt_nil_check((*(P927)rt_nil_check(F->y_1583)).params)).t, (*(P929)rt_nil_check((*(P929)rt_nil_check((*(P927)rt_nil_check(F->y_1583)).params)).next)).t))) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_1565)).name))->all), rt_str(":=", 2))) {
if ((rt_r_ichk((*(P929)rt_nil_check((*(P927)rt_nil_check(F->y_1583)).params)).mode) != (((rt_int)2LL)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_1565)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the first formal of := is a VAR formal (13.2)", 45); b_; }));
}
(*(P923)rt_nil_check((*(P929)rt_nil_check((*(P927)rt_nil_check(F->y_1583)).params)).t)).assignp = F->y_1583;
} else if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_1565)).name))->all), rt_str("=", 1))) {
(*(P923)rt_nil_check((*(P929)rt_nil_check((*(P927)rt_nil_check(F->y_1583)).params)).t)).eqp = F->y_1583;
} else {
(*(P923)rt_nil_check((*(P929)rt_nil_check((*(P927)rt_nil_check(F->y_1583)).params)).t)).ltp = F->y_1583;
}
}
}
F->e_1565 = (*(P917)rt_nil_check(F->e_1565)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_400(P917 d_399) {
  struct f_manifest_const_400fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_399 = d_399;
F->ok_1584 = RT_R_EUNDEF;
F->v_1585 = NULL;
F->y_1586 = NULL;
F->t_1587 = NULL;
F->ctext_1588 = NULL;
if (((*(P917)rt_nil_check(F->d_399)).a != NULL)) {
if (((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->d_399)).a)).kind) != (((rt_int)70LL))) || ((*(P917)rt_nil_check((*(P917)rt_nil_check(F->d_399)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1585 = f_meval_348((*(P917)rt_nil_check(F->d_399)).b, &F->ok_1584);
if ((!rt_r_echk(F->ok_1584))) {
goto ret_;
}
{
F->saved_1589 = NULL;
F->saved_1589 = g_code_967;
g_code_967 = f_new_buffer_24();
g_trial_995 = rt_add(rt_r_ichk(g_trial_995), ((rt_int)1LL));
{ rt_frame xf1590;
if (RT_TRY(xf1590)) {
F->ctext_1588 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_705((*(P917)rt_nil_check(F->d_399)).b, NULL, &F->t_1587)), rt_str(")", 1)); b_; }));
RT_POP(xf1590);
} else {
RT_POP(xf1590);
int x1591 = rt_xcur;
if (0 || x1591 == ex_compile_error_1) {
F->ok_1584 = 0;
} else {
rt_raise(x1591);
}
}
}
g_trial_995 = rt_sub(rt_r_ichk(g_trial_995), ((rt_int)1LL));
F->ok_1584 = (rt_r_echk(F->ok_1584) && ((*(P940)rt_nil_check(g_code_967)).head == NULL));
g_code_967 = F->saved_1589;
}
if (((!rt_r_echk(F->ok_1584)) || (((*(P917)rt_nil_check(F->d_399)).a != NULL) && (rt_r_ichk((*(P923)rt_nil_check(F->t_1587)).kind) != (((rt_int)1LL)))))) {
goto ret_;
}
if ((rt_r_ichk((*(P936)rt_nil_check(F->v_1585)).kind) == (((rt_int)4LL)))) {
(*(P936)rt_nil_check(F->v_1585)).t = F->t_1587;
(*(P936)rt_nil_check(F->v_1585)).i = f_lit_index_257((*(P923)rt_nil_check(f_base_of_215(F->t_1587))).lits, &(((P910)rt_nil_check((*(P936)rt_nil_check(F->v_1585)).s))->all));
}
(*(P917)rt_nil_check(F->d_399)).flag = ((rt_int)1LL);
F->y_1586 = f_new_sym_173((((rt_int)2LL)), (*(P917)rt_nil_check(F->d_399)).name);
(*(P927)rt_nil_check(F->y_1586)).t = F->t_1587;
(*(P927)rt_nil_check(F->y_1586)).c = f_new_cons_176();
(*(P927)rt_nil_check(F->y_1586)).mv = F->v_1585;
if ((rt_r_ichk((*(P936)rt_nil_check(F->v_1585)).kind) == (((rt_int)1LL)))) {
(*(P927)rt_nil_check(F->y_1586)).mvalue = rt_r_ichk((*(P936)rt_nil_check(F->v_1585)).i);
(*(P927)rt_nil_check(F->y_1586)).hasmv = 1;
}
(*(P927)rt_nil_check(F->y_1586)).ro_flag = 1;
(*(P927)rt_nil_check(F->y_1586)).access = F->ctext_1588;
f_define_160(F->y_1586, rt_r_ichk((*(P917)rt_nil_check(F->d_399)).line));
ret_:
  RT_FPOP();
  return;
}

static int f_exported_404(P917 d_401, rstr *name_402, int *ro_403) {
  struct f_exported_404fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_401 = d_401;
F->name_402 = name_402;
F->ro_403 = ro_403;
F->ro_403v = *F->ro_403;
F->p_1592 = NULL;
F->p_1592 = (*(P917)rt_nil_check(F->d_401)).a;
F->ro_403v = 0;
if ((rt_r_ichk((*(P917)rt_nil_check(F->d_401)).ival) == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1592 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1592)).name))->all), (*F->name_402))) {
F->ro_403v = (rt_r_ichk((*(P917)rt_nil_check(F->p_1592)).ival) == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1592 = (*(P917)rt_nil_check(F->p_1592)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ro_403v)) (*F->ro_403) = F->ro_403v;
  RT_FPOP();
  return F->result_;
}

static P927 f_copy_sym_406(P927 y_405) {
  struct f_copy_sym_406fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_405 = y_405;
F->z_1593 = NULL;
{ R928 *cell1594 = rt_alloc(sizeof(R928));
(*cell1594).name = NULL;
(*cell1594).t = NULL;
(*cell1594).c = NULL;
(*cell1594).access = NULL;
(*cell1594).cname = NULL;
(*cell1594).st = NULL;
(*cell1594).decl = NULL;
(*cell1594).params = NULL;
(*cell1594).result = NULL;
(*cell1594).members = NULL;
(*cell1594).mnext = NULL;
(*cell1594).binds = NULL;
(*cell1594).insts = NULL;
(*cell1594).env = NULL;
(*cell1594).chain = NULL;
(*cell1594).stack = NULL;
(*cell1594).owner = NULL;
(*cell1594).gctx = NULL;
(*cell1594).mv = NULL;
(*cell1594).reqs = NULL;
(*cell1594).home = NULL;
(*cell1594).capn = NULL;
(*cell1594).tbinds = NULL;
F->z_1593 = cell1594;
}
(*(P927)rt_nil_check(F->z_1593)).kind = rt_r_ichk((*(P927)rt_nil_check(F->y_405)).kind);
(*(P927)rt_nil_check(F->z_1593)).name = (*(P927)rt_nil_check(F->y_405)).name;
(*(P927)rt_nil_check(F->z_1593)).t = (*(P927)rt_nil_check(F->y_405)).t;
(*(P927)rt_nil_check(F->z_1593)).c = (*(P927)rt_nil_check(F->y_405)).c;
(*(P927)rt_nil_check(F->z_1593)).access = (*(P927)rt_nil_check(F->y_405)).access;
(*(P927)rt_nil_check(F->z_1593)).cname = (*(P927)rt_nil_check(F->y_405)).cname;
(*(P927)rt_nil_check(F->z_1593)).ro_flag = rt_r_echk((*(P927)rt_nil_check(F->y_405)).ro_flag);
(*(P927)rt_nil_check(F->z_1593)).mvalue = rt_r_ichk((*(P927)rt_nil_check(F->y_405)).mvalue);
(*(P927)rt_nil_check(F->z_1593)).hasmv = rt_r_echk((*(P927)rt_nil_check(F->y_405)).hasmv);
(*(P927)rt_nil_check(F->z_1593)).st = (*(P927)rt_nil_check(F->y_405)).st;
(*(P927)rt_nil_check(F->z_1593)).decl = (*(P927)rt_nil_check(F->y_405)).decl;
(*(P927)rt_nil_check(F->z_1593)).params = (*(P927)rt_nil_check(F->y_405)).params;
(*(P927)rt_nil_check(F->z_1593)).result = (*(P927)rt_nil_check(F->y_405)).result;
(*(P927)rt_nil_check(F->z_1593)).level = rt_r_ichk((*(P927)rt_nil_check(F->y_405)).level);
(*(P927)rt_nil_check(F->z_1593)).byref = rt_r_echk((*(P927)rt_nil_check(F->y_405)).byref);
(*(P927)rt_nil_check(F->z_1593)).members = (*(P927)rt_nil_check(F->y_405)).members;
(*(P927)rt_nil_check(F->z_1593)).env = (*(P927)rt_nil_check(F->y_405)).env;
F->result_ = F->z_1593;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_408(P917 d_407) {
  struct f_gen_capsule_408fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_407 = d_407;
F->y_1595 = NULL;
F->y_1595 = f_new_sym_173((((rt_int)8LL)), (*(P917)rt_nil_check(F->d_407)).name);
F->saved_1596 = NULL;
F->saved_1596 = g_suppress_987;
F->p_1597 = NULL;
F->p_1597 = (*(P917)rt_nil_check(F->d_407)).b;
F->tail_1598 = NULL;
(*(P927)rt_nil_check(F->y_1595)).decl = F->d_407;
while ((F->p_1597 != NULL)) {
F->pm_1599 = NULL;
{ R930 *cell1600 = rt_alloc(sizeof(R930));
(*cell1600).name = NULL;
(*cell1600).t = NULL;
(*cell1600).c = NULL;
(*cell1600).cfield = NULL;
(*cell1600).next = NULL;
F->pm_1599 = cell1600;
}
(*(P929)rt_nil_check(F->pm_1599)).name = (*(P917)rt_nil_check(F->p_1597)).name;
(*(P929)rt_nil_check(F->pm_1599)).mode = rt_r_ichk((*(P917)rt_nil_check(F->p_1597)).ival);
(*(P929)rt_nil_check(F->pm_1599)).t = f_resolve_subtype_260((*(P917)rt_nil_check(F->p_1597)).a, &(*(P929)rt_nil_check(F->pm_1599)).c);
if ((F->tail_1598 == NULL)) {
(*(P927)rt_nil_check(F->y_1595)).params = F->pm_1599;
} else {
(*(P929)rt_nil_check(F->tail_1598)).next = F->pm_1599;
}
F->tail_1598 = F->pm_1599;
F->p_1597 = (*(P917)rt_nil_check(F->p_1597)).next;
}
if (((*(P917)rt_nil_check(F->d_407)).b == NULL)) {
g_suppress_987 = f_suppressing_464((*(P917)rt_nil_check(F->d_407)).prags);
f_elaborate_capsule_417(F->d_407, F->y_1595, NULL, F->d_407);
g_suppress_987 = F->saved_1596;
}
f_define_160(F->y_1595, rt_r_ichk((*(P917)rt_nil_check(F->d_407)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_412(P917 d_409, P917 args_410, rt_int line_411) {
  struct f_capsule_params_412fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_409 = d_409;
F->args_410 = args_410;
F->line_411 = line_411;
F->p_1601 = NULL;
F->p_1601 = (*(P917)rt_nil_check(F->d_409)).b;
F->a_1602 = NULL;
F->a_1602 = F->args_410;
F->t_1603 = NULL;
F->vt_1604 = NULL;
F->c_1605 = NULL;
while (((F->p_1601 != NULL) && (F->a_1602 != NULL))) {
F->t_1603 = f_resolve_subtype_260((*(P917)rt_nil_check(F->p_1601)).a, &F->c_1605);
if ((rt_r_ichk((*(P917)rt_nil_check(F->p_1601)).ival) == (((rt_int)3LL)))) {
f_fail_23(F->line_411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if (((rt_r_ichk((*(P917)rt_nil_check(F->p_1601)).ival) == (((rt_int)2LL))) || (rt_r_ichk((*(P917)rt_nil_check(F->p_1601)).ival) == (((rt_int)4LL))))) {
F->lv_1606 = NULL;
F->lc_1607 = NULL;
F->ro_1608 = RT_R_EUNDEF;
F->y_1609 = NULL;
F->y_1609 = f_new_sym_173((((rt_int)1LL)), (*(P917)rt_nil_check(F->p_1601)).name);
f_lvalue_674(F->a_1602, &F->lv_1606, &F->vt_1604, &F->lc_1607, &F->ro_1608);
f_check_type_224(F->vt_1604, F->t_1603, F->line_411);
if ((rt_r_echk(F->ro_1608) && (rt_r_ichk((*(P917)rt_nil_check(F->p_1601)).ival) == (((rt_int)2LL))))) {
f_fail_23(F->line_411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1601)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (rt_r_echk(g_in_func_969)) {
F->f_1610 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1601)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_968, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_226(F->t_1603)), rt_str(" *", 2)), F->f_1610), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1610), rt_str(" = &", 4)), (((P910)rt_nil_check(F->lv_1606))->all)), rt_str(";", 1)); b_; }));
(*(P927)rt_nil_check(F->y_1609)).level = rt_r_ichk(g_cur_level_970);
(*(P927)rt_nil_check(F->y_1609)).access = f_mk_3(&F->f_1610);
(*(P927)rt_nil_check(F->y_1609)).byref = 1;
} else {
F->g_1611 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1601)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_963, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_226(F->t_1603)), rt_str(" *", 2)), F->g_1611), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_977, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1611), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1611, rt_str(" = &", 4)), (((P910)rt_nil_check(F->lv_1606))->all)), rt_str(";", 1)); b_; }));
(*(P927)rt_nil_check(F->y_1609)).level = ((rt_int)0LL);
(*(P927)rt_nil_check(F->y_1609)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1611), rt_str(")", 1)); b_; }));
}
(*(P927)rt_nil_check(F->y_1609)).t = F->t_1603;
(*(P927)rt_nil_check(F->y_1609)).c = F->lc_1607;
(*(P927)rt_nil_check(F->y_1609)).ro_flag = (rt_r_ichk((*(P917)rt_nil_check(F->p_1601)).ival) == (((rt_int)4LL)));
f_define_160(F->y_1609, F->line_411);
} else {
F->y_1612 = NULL;
F->y_1612 = f_new_sym_173((((rt_int)2LL)), (*(P917)rt_nil_check(F->p_1601)).name);
F->v_1613 = rt_str_copy(f_gexpr_705(F->a_1602, F->t_1603, &F->vt_1604));
f_check_type_224(F->vt_1604, F->t_1603, F->line_411);
{
F->access_1614 = rt_str_copy(f_storage_473(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1601)).name))->all), F->t_1603));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1614, rt_str(" = ", 3)), f_copy_code_382(F->t_1603, &F->v_1613)), rt_str(";", 1)); b_; }));
f_bind_476(F->y_1612, &F->access_1614);
}
(*(P927)rt_nil_check(F->y_1612)).t = F->t_1603;
(*(P927)rt_nil_check(F->y_1612)).c = F->c_1605;
(*(P927)rt_nil_check(F->y_1612)).ro_flag = 1;
f_define_160(F->y_1612, F->line_411);
}
F->p_1601 = (*(P917)rt_nil_check(F->p_1601)).next;
F->a_1602 = (*(P917)rt_nil_check(F->a_1602)).next;
}
if (((F->p_1601 != NULL) || (F->a_1602 != NULL))) {
f_fail_23(F->line_411, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P910)rt_nil_check((*(P917)rt_nil_check(F->d_409)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_417(P917 d_413, P927 y_414, P917 args_415, P917 owner_416) {
  struct f_elaborate_capsule_417fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_413 = d_413;
F->y_414 = y_414;
F->args_415 = args_415;
F->owner_416 = owner_416;
F->cr_1615 = NULL;
F->ctx_1616 = NULL;
F->saved_gotos_1617 = NULL;
F->m_1618 = NULL;
F->p_1619 = NULL;
F->p_1619 = (*(P917)rt_nil_check(F->d_413)).a;
F->ro_1620 = RT_R_EUNDEF;
{ R945 *cell1621 = rt_alloc(sizeof(R945));
(*cell1621).d = NULL;
(*cell1621).next = NULL;
F->cr_1615 = cell1621;
}
(*(P944)rt_nil_check(F->cr_1615)).d = F->d_413;
(*(P944)rt_nil_check(F->cr_1615)).next = g_caps_972;
g_caps_972 = F->cr_1615;
f_open_scope_169();
(*(P944)rt_nil_check(F->cr_1615)).depth = rt_r_ichk(g_depth_956);
if (((*(P917)rt_nil_check(F->d_413)).b != NULL)) {
f_capsule_params_412(F->d_413, F->args_415, rt_r_ichk((*(P917)rt_nil_check(F->owner_416)).line));
}
{ R935 *cell1622 = rt_alloc(sizeof(R935));
(*cell1622).imps = NULL;
(*cell1622).next = NULL;
F->ctx_1616 = cell1622;
}
(*(P934)rt_nil_check(F->ctx_1616)).depth = rt_r_ichk(g_depth_956);
(*(P934)rt_nil_check(F->ctx_1616)).imps = (*(P917)rt_nil_check(F->d_413)).d;
(*(P934)rt_nil_check(F->ctx_1616)).all_imp = (rt_r_ichk((*(P917)rt_nil_check(F->d_413)).flag) >= ((rt_int)2LL));
(*(P934)rt_nil_check(F->ctx_1616)).next = g_fctx_971;
g_fctx_971 = F->ctx_1616;
F->saved_gotos_1617 = g_gotos_991;
g_gotos_991 = NULL;
f_declare_labels_499((*(P917)rt_nil_check(F->d_413)).c);
f_declare_body_398((*(P917)rt_nil_check(F->d_413)).c);
f_capsule_body_506((*(P917)rt_nil_check(F->d_413)).c);
{
F->w_1623 = NULL;
{ R947 *cell1624 = rt_alloc(sizeof(R947));
(*cell1624).d = NULL;
(*cell1624).w = NULL;
(*cell1624).next = NULL;
F->w_1623 = cell1624;
}
(*(P946)rt_nil_check(F->w_1623)).d = F->owner_416;
(*(P946)rt_nil_check(F->w_1623)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_493((*(P917)rt_nil_check(F->d_413)).c); b_; }));
(*(P946)rt_nil_check(F->w_1623)).next = g_cap_waits_973;
g_cap_waits_973 = F->w_1623;
}
g_fctx_971 = (*(P934)rt_nil_check(g_fctx_971)).next;
F->m_1618 = g_scope_stack_957;
while (((F->m_1618 != NULL) && (rt_r_ichk((*(P927)rt_nil_check(F->m_1618)).depth) == rt_r_ichk(g_depth_956)))) {
if (((((rt_r_ichk((*(P927)rt_nil_check(F->m_1618)).kind) == (((rt_int)5LL))) && ((*(P927)rt_nil_check(F->m_1618)).t == NULL)) && ((*(P927)rt_nil_check(F->m_1618)).decl != NULL)) && (rt_r_ichk((*(P917)rt_nil_check((*(P927)rt_nil_check(F->m_1618)).decl)).kind) == (((rt_int)43LL))))) {
(*(P927)rt_nil_check(F->m_1618)).t = f_new_type_310(F->m_1618, f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P917)rt_nil_check(F->d_413)).line)), &(*(P927)rt_nil_check(F->m_1618)).c);
} else if ((((rt_r_ichk((*(P927)rt_nil_check(F->m_1618)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P927)rt_nil_check(F->m_1618)).kind) == (((rt_int)6LL)))) && ((*(P927)rt_nil_check(F->m_1618)).t == NULL))) {
(*(P927)rt_nil_check(F->m_1618)).t = f_resolve_subtype_260((*(P927)rt_nil_check(F->m_1618)).st, &(*(P927)rt_nil_check(F->m_1618)).c);
} else if (((rt_r_ichk((*(P927)rt_nil_check(F->m_1618)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P923)rt_nil_check((*(P927)rt_nil_check(F->m_1618)).t)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_432((*(P927)rt_nil_check(F->m_1618)).t);
}
F->m_1618 = (*(P927)rt_nil_check(F->m_1618)).stack;
}
F->m_1618 = g_scope_stack_957;
while (((F->m_1618 != NULL) && (rt_r_ichk((*(P927)rt_nil_check(F->m_1618)).depth) == rt_r_ichk(g_depth_956)))) {
if (f_exported_404(F->d_413, &(((P910)rt_nil_check((*(P927)rt_nil_check(F->m_1618)).name))->all), &F->ro_1620)) {
F->z_1625 = NULL;
F->z_1625 = f_copy_sym_406(F->m_1618);
if (rt_r_echk(F->ro_1620)) {
(*(P927)rt_nil_check(F->z_1625)).ro_flag = 1;
}
(*(P927)rt_nil_check(F->z_1625)).mnext = (*(P927)rt_nil_check(F->y_414)).members;
(*(P927)rt_nil_check(F->y_414)).members = F->z_1625;
}
F->m_1618 = (*(P927)rt_nil_check(F->m_1618)).stack;
}
while ((F->p_1619 != NULL)) {
if ((((!rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1619)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1619)).name))->all), rt_str("=", 1)))) && ((f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1619)).name))->all)) == NULL) || ((*(P927)rt_nil_check(f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1619)).name))->all)))).depth != rt_r_ichk(g_depth_956))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->d_413)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1619)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P910)rt_nil_check((*(P917)rt_nil_check(F->d_413)).name))->all)); b_; }));
}
F->p_1619 = (*(P917)rt_nil_check(F->p_1619)).next;
}
f_close_scope_170();
g_caps_972 = (*(P944)rt_nil_check(g_caps_972)).next;
g_gotos_991 = F->saved_gotos_1617;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_420(P917 d_418, rstr *op_419) {
  struct f_exports_op_420fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_418 = d_418;
F->op_419 = op_419;
F->p_1626 = NULL;
if ((F->d_418 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1626 = (*(P917)rt_nil_check(F->d_418)).a;
while ((F->p_1626 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1626)).name))->all), (*F->op_419))) {
F->result_ = 1;
goto ret_;
}
F->p_1626 = (*(P917)rt_nil_check(F->p_1626)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P910 f_renamed_423(P917 d_421, P927 z_422) {
  struct f_renamed_423fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_421 = d_421;
F->z_422 = z_422;
F->r_1627 = NULL;
F->r_1627 = (*(P917)rt_nil_check(F->d_421)).c;
while ((F->r_1627 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->r_1627)).name))->all), (((P910)rt_nil_check((*(P927)rt_nil_check(F->z_422)).name))->all))) {
F->result_ = (*(P917)rt_nil_check((*(P917)rt_nil_check(F->r_1627)).a)).name;
goto ret_;
}
F->r_1627 = (*(P917)rt_nil_check(F->r_1627)).next;
}
F->result_ = (*(P927)rt_nil_check(F->z_422)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P927 f_pick_capsule_425(P917 d_424) {
  struct f_pick_capsule_425fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_424 = d_424;
F->y_1628 = NULL;
F->y_1628 = ({ A933 b_ = (((P931)rt_nil_check(g_table_953))->all); b_.p[(rt_index(f_hash_153(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->d_424)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
F->first_1629 = NULL;
F->fit_1630 = NULL;
F->n_1631 = RT_R_IUNDEF;
F->n_1631 = ((rt_int)0LL);
while ((F->y_1628 != NULL)) {
if ((rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_1628)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->d_424)).name))->all)) && (rt_r_ichk((*(P927)rt_nil_check(F->y_1628)).kind) == (((rt_int)8LL))))) {
F->n_1631 = rt_add(rt_r_ichk(F->n_1631), ((rt_int)1LL));
if ((F->first_1629 == NULL)) {
F->first_1629 = F->y_1628;
}
if (((F->fit_1630 == NULL) && f_fits_821(F->y_1628, (*(P917)rt_nil_check(F->d_424)).b))) {
F->fit_1630 = F->y_1628;
}
}
F->y_1628 = (*(P927)rt_nil_check(F->y_1628)).chain;
}
if ((rt_r_ichk(F->n_1631) > ((rt_int)1LL))) {
if ((F->fit_1630 == NULL)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->d_424)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no capsule ", 11), (((P910)rt_nil_check((*(P917)rt_nil_check(F->d_424)).name))->all)), rt_str(" has formals that fit these actual parameters", 45)); b_; }));
}
F->result_ = F->fit_1630;
goto ret_;
}
if ((F->first_1629 == NULL)) {
F->result_ = f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->d_424)).name))->all));
goto ret_;
}
F->result_ = F->first_1629;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P927 f_capsule_instance_428(P927 g_426, P917 d_427) {
  struct f_capsule_instance_428fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_426 = g_426;
F->d_427 = d_427;
F->gd_1632 = NULL;
F->gd_1632 = (*(P927)rt_nil_check(F->g_426)).decl;
F->pat_1633 = NULL;
F->pat_1633 = (*(P917)rt_nil_check(F->gd_1632)).b;
F->binds_1634 = NULL;
F->binds_1634 = f_need_binds_632(F->gd_1632, f_tt_binds_611(F->gd_1632, (*(P917)rt_nil_check(F->pat_1633)).e, (*(P917)rt_nil_check(F->d_427)).e, rt_r_ichk((*(P917)rt_nil_check(F->d_427)).line)), rt_r_ichk((*(P917)rt_nil_check(F->d_427)).line));
F->inst_1635 = NULL;
F->inst_1635 = (*(P927)rt_nil_check(F->g_426)).insts;
F->saved_env_1636 = NULL;
F->saved_env_1636 = g_genv_954;
F->saved_gdepth_1637 = RT_R_IUNDEF;
F->saved_gdepth_1637 = rt_r_ichk(g_gdepth_986);
if (((rt_r_ichk((*(P917)rt_nil_check(F->d_427)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P917)rt_nil_check(F->d_427)).flag) != ((rt_int)3LL)))) {
while ((F->inst_1635 != NULL)) {
if (f_same_binds_603((*(P927)rt_nil_check(F->inst_1635)).tbinds, F->binds_1634)) {
F->result_ = F->inst_1635;
goto ret_;
}
F->inst_1635 = (*(P927)rt_nil_check(F->inst_1635)).insts;
}
}
F->inst_1635 = f_new_sym_173((((rt_int)8LL)), (*(P917)rt_nil_check(F->pat_1633)).name);
(*(P927)rt_nil_check(F->inst_1635)).decl = F->pat_1633;
(*(P927)rt_nil_check(F->inst_1635)).tbinds = F->binds_1634;
f_open_scope_169();
{
F->b_1638 = NULL;
F->b_1638 = F->binds_1634;
while ((F->b_1638 != NULL)) {
f_define_160(F->b_1638, rt_r_ichk((*(P917)rt_nil_check(F->d_427)).line));
F->b_1638 = (*(P927)rt_nil_check(F->b_1638)).mnext;
}
}
g_genv_954 = (*(P927)rt_nil_check(F->g_426)).env;
g_gdepth_986 = rt_r_ichk(g_depth_956);
f_elaborate_capsule_417(F->pat_1633, F->inst_1635, (*(P917)rt_nil_check(F->d_427)).b, F->d_427);
g_genv_954 = F->saved_env_1636;
g_gdepth_986 = rt_r_ichk(F->saved_gdepth_1637);
f_close_scope_170();
if (((rt_r_ichk((*(P917)rt_nil_check(F->d_427)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P917)rt_nil_check(F->d_427)).flag) != ((rt_int)3LL)))) {
(*(P927)rt_nil_check(F->inst_1635)).insts = (*(P927)rt_nil_check(F->g_426)).insts;
(*(P927)rt_nil_check(F->g_426)).insts = F->inst_1635;
}
F->result_ = F->inst_1635;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_expose_430(P917 d_429) {
  struct f_gen_expose_430fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_429 = d_429;
F->y_1639 = NULL;
F->y_1639 = f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->d_429)).name))->all));
F->m_1640 = NULL;
F->p_1641 = NULL;
F->p_1641 = (*(P917)rt_nil_check(F->d_429)).a;
F->r_1642 = NULL;
F->r_1642 = (*(P917)rt_nil_check(F->d_429)).c;
if ((((F->y_1639 != NULL) && (rt_r_ichk((*(P927)rt_nil_check(F->y_1639)).kind) == (((rt_int)10LL)))) && (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_1639)).decl)).b)).kind) == (((rt_int)47LL))))) {
F->y_1639 = f_capsule_instance_428(F->y_1639, F->d_429);
} else {
F->y_1639 = f_pick_capsule_425(F->d_429);
if (((F->y_1639 == NULL) || (rt_r_ichk((*(P927)rt_nil_check(F->y_1639)).kind) != (((rt_int)8LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->d_429)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->d_429)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
if (((*(P917)rt_nil_check(F->d_429)).e != NULL)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->d_429)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->d_429)).name))->all), rt_str(" is not a generic capsule", 25)); b_; }));
}
}
if ((((*(P927)rt_nil_check(F->y_1639)).tbinds != NULL) || (((*(P927)rt_nil_check(F->y_1639)).decl != NULL) && ((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_1639)).decl)).e != NULL)))) {
} else if (((rt_r_ichk((*(P917)rt_nil_check(F->d_429)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P917)rt_nil_check(F->d_429)).flag) == ((rt_int)3LL)))) {
F->inst_1643 = NULL;
F->inst_1643 = f_new_sym_173((((rt_int)8LL)), (*(P927)rt_nil_check(F->y_1639)).name);
(*(P927)rt_nil_check(F->inst_1643)).decl = (*(P927)rt_nil_check(F->y_1639)).decl;
f_elaborate_capsule_417((*(P927)rt_nil_check(F->y_1639)).decl, F->inst_1643, (*(P917)rt_nil_check(F->d_429)).b, F->d_429);
F->y_1639 = F->inst_1643;
} else if ((((*(P927)rt_nil_check(F->y_1639)).decl != NULL) && ((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_1639)).decl)).b != NULL))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->d_429)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P910)rt_nil_check((*(P917)rt_nil_check(F->d_429)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P917)rt_nil_check(F->d_429)).b != NULL)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->d_429)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1642 != NULL)) {
F->found_1644 = RT_R_EUNDEF;
F->found_1644 = 0;
F->m_1640 = (*(P927)rt_nil_check(F->y_1639)).members;
while ((F->m_1640 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->m_1640)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->r_1642)).name))->all))) {
F->found_1644 = 1;
}
F->m_1640 = (*(P927)rt_nil_check(F->m_1640)).mnext;
}
if ((!rt_r_echk(F->found_1644))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->d_429)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->r_1642)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P910)rt_nil_check((*(P917)rt_nil_check(F->d_429)).name))->all)); b_; }));
}
F->r_1642 = (*(P917)rt_nil_check(F->r_1642)).next;
}
if ((rt_r_ichk((*(P917)rt_nil_check(F->d_429)).ival) == ((rt_int)1LL))) {
F->m_1640 = (*(P927)rt_nil_check(F->y_1639)).members;
while ((F->m_1640 != NULL)) {
F->z_1645 = NULL;
F->z_1645 = f_copy_sym_406(F->m_1640);
(*(P927)rt_nil_check(F->z_1645)).name = f_renamed_423(F->d_429, F->m_1640);
f_define_160(F->z_1645, rt_r_ichk((*(P917)rt_nil_check(F->d_429)).line));
F->m_1640 = (*(P927)rt_nil_check(F->m_1640)).mnext;
}
goto ret_;
}
while ((F->p_1641 != NULL)) {
F->found_1646 = RT_R_EUNDEF;
F->found_1646 = 0;
F->m_1640 = (*(P927)rt_nil_check(F->y_1639)).members;
while ((F->m_1640 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->m_1640)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1641)).name))->all))) {
F->z_1647 = NULL;
F->z_1647 = f_copy_sym_406(F->m_1640);
if ((rt_r_ichk((*(P917)rt_nil_check(F->p_1641)).ival) == ((rt_int)1LL))) {
(*(P927)rt_nil_check(F->z_1647)).ro_flag = 1;
}
(*(P927)rt_nil_check(F->z_1647)).name = f_renamed_423(F->d_429, F->m_1640);
f_define_160(F->z_1647, rt_r_ichk((*(P917)rt_nil_check(F->d_429)).line));
F->found_1646 = 1;
}
F->m_1640 = (*(P927)rt_nil_check(F->m_1640)).mnext;
}
if ((!rt_r_echk(F->found_1646))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->d_429)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1641)).name))->all), rt_str(" is not exported by ", 20)), (((P910)rt_nil_check((*(P917)rt_nil_check(F->d_429)).name))->all)); b_; }));
}
F->p_1641 = (*(P917)rt_nil_check(F->p_1641)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_432(P923 t_431) {
  struct f_finish_ptr_432fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_431 = t_431;
F->d_1648 = NULL;
F->d_1648 = (*(P923)rt_nil_check(F->t_431)).decl;
F->p_1649 = NULL;
F->c_1650 = NULL;
F->dummy_1651 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1651, rt_str(" ", 1));
if (((*(P923)rt_nil_check(F->t_431)).target != NULL)) {
goto ret_;
}
f_open_scope_169();
{ rt_int lo1653 = ((rt_int)1LL), hi1654 = ((rt_int)2LL);
for (rt_int it1655 = lo1653; it1655 <= hi1654; it1655++) {
F->pass_1652 = it1655;
if ((F->pass_1652 == ((rt_int)1LL))) {
F->p_1649 = (*(P917)rt_nil_check(F->d_1648)).d;
} else {
F->p_1649 = (*(P917)rt_nil_check(F->d_1648)).b;
}
while ((F->p_1649 != NULL)) {
F->y_1656 = NULL;
F->y_1656 = f_new_sym_173((((rt_int)2LL)), (*(P917)rt_nil_check(F->p_1649)).name);
F->pc_1657 = NULL;
(*(P927)rt_nil_check(F->y_1656)).t = f_resolve_subtype_260((*(P917)rt_nil_check(F->p_1649)).a, &F->pc_1657);
(*(P927)rt_nil_check(F->y_1656)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_160(F->y_1656, rt_r_ichk((*(P917)rt_nil_check(F->d_1648)).line));
F->p_1649 = (*(P917)rt_nil_check(F->p_1649)).next;
}
}
}
(*(P923)rt_nil_check(F->t_431)).target = f_resolve_subtype_260((*(P917)rt_nil_check(F->d_1648)).a, &F->c_1650);
f_close_scope_170();
(*rt_str_at(&F->dummy_1651, ((rt_int)1LL))) = rt_str_get(f_ctype_226(F->t_431), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1651, ((rt_int)1LL))) = rt_str_get(f_ctype_226((*(P923)rt_nil_check(F->t_431)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P917 f_ptr_args_434(P919 c_433) {
  struct f_ptr_args_434fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_433 = c_433;
if ((F->c_433 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P919)rt_nil_check(F->c_433)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_439(P917 formals_435, P917 actuals_436, rstr *cell_437, rt_int line_438) {
  struct f_bind_ptr_params_439fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_435 = formals_435;
F->actuals_436 = actuals_436;
F->cell_437 = cell_437;
F->line_438 = line_438;
F->p_1658 = NULL;
F->p_1658 = F->formals_435;
F->a_1659 = NULL;
F->a_1659 = F->actuals_436;
F->vt_1660 = NULL;
if ((f_list_len_67(F->formals_435) != f_list_len_67(F->actuals_436))) {
f_fail_23(F->line_438, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_67(F->formals_435))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1658 != NULL)) {
F->pc_1661 = NULL;
F->y_1662 = NULL;
F->y_1662 = f_new_sym_173((((rt_int)2LL)), (*(P917)rt_nil_check(F->p_1658)).name);
(*(P927)rt_nil_check(F->y_1662)).t = f_resolve_subtype_260((*(P917)rt_nil_check(F->p_1658)).a, &F->pc_1661);
{
F->v_1663 = rt_str_copy(f_gexpr_705(F->a_1659, (*(P927)rt_nil_check(F->y_1662)).t, &F->vt_1660));
F->pv_1664 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_224(F->vt_1660, (*(P927)rt_nil_check(F->y_1662)).t, F->line_438);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_226((*(P927)rt_nil_check(F->y_1662)).t), rt_str(" ", 1)), F->pv_1664), rt_str(" = ", 3)), f_checked_205((*(P927)rt_nil_check(F->y_1662)).t, F->pc_1661, &F->v_1663)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_437), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_437), rt_str("->p_", 4)), f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1658)).name))->all))), rt_str(" = ", 3)), F->pv_1664), rt_str(";", 1)); b_; }));
}
(*(P927)rt_nil_check(F->y_1662)).access = f_mk_3(&F->pv_1664);
}
f_define_160(F->y_1662, F->line_438);
F->p_1658 = (*(P917)rt_nil_check(F->p_1658)).next;
F->a_1659 = (*(P917)rt_nil_check(F->a_1659)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_444(P917 s_440, rstr *lv_441, P923 t_442, P919 c_443) {
  struct f_alloc_cell_444fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_440 = s_440;
F->lv_441 = lv_441;
F->t_442 = t_442;
F->c_443 = c_443;
F->d_1665 = NULL;
F->d_1665 = (*(P923)rt_nil_check(F->t_442)).decl;
F->tc_1666 = NULL;
F->vt_1667 = NULL;
F->pt_1668 = rt_str_copy(f_ctype_226(F->t_442));
F->cell_1669 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_319((*(P923)rt_nil_check(F->t_442)).target)) {
F->fn_1670 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_978 = 1;
g_uses_findyn_980 = 1;
f_put_27(g_out_protos_962, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1670), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1670), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_969)) {
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P910)rt_nil_check((*(P927)rt_nil_check(g_func_sym_981)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_322(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1668), rt_str(")cell_)->all)", 13)); b_; }), (*(P923)rt_nil_check(F->t_442)).target)); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_969)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1668), rt_str(" ", 1)), F->cell_1669), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1669), rt_str(", ", 2)), F->fn_1670), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1668), rt_str(" ", 1)), F->cell_1669), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1669), rt_str(", ", 2)), F->fn_1670), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1668), rt_str(" ", 1)), F->cell_1669), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1669), rt_str(");", 2)); b_; }));
}
f_open_scope_169();
f_bind_ptr_params_439((*(P917)rt_nil_check(F->d_1665)).d, f_ptr_args_434(F->c_443), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P917)rt_nil_check(F->s_440)).line));
f_bind_ptr_params_439((*(P917)rt_nil_check(F->d_1665)).b, (*(P917)rt_nil_check(F->s_440)).b, &F->cell_1669, rt_r_ichk((*(P917)rt_nil_check(F->s_440)).line));
F->vt_1667 = f_resolve_subtype_260((*(P917)rt_nil_check(F->d_1665)).a, &F->tc_1666);
f_init_storage_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1669, rt_str("->all", 5)); b_; }), (*(P923)rt_nil_check(F->t_442)).target, F->tc_1666);
f_close_scope_170();
if (((*(P917)rt_nil_check(F->s_440)).c != NULL)) {
F->v_1671 = rt_str_copy(f_gexpr_in_713((*(P917)rt_nil_check(F->s_440)).c, (*(P923)rt_nil_check(F->t_442)).target, F->tc_1666, &F->vt_1667));
f_check_type_224(F->vt_1667, (*(P923)rt_nil_check(F->t_442)).target, rt_r_ichk((*(P917)rt_nil_check(F->s_440)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_379(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1669, rt_str("->all", 5)); b_; }), (*(P923)rt_nil_check(F->t_442)).target, &F->v_1671, F->tc_1666); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_441), rt_str(" = ", 3)), F->cell_1669), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P919 f_freeze_args_448(P919 c_445, P923 t_446, rt_int line_447) {
  struct f_freeze_args_448fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_445 = c_445;
F->t_446 = t_446;
F->line_447 = line_447;
F->r_1672 = NULL;
F->r_1672 = f_copy_cons_198(F->c_445);
F->p_1673 = NULL;
F->p_1673 = (*(P917)rt_nil_check((*(P923)rt_nil_check(F->t_446)).decl)).d;
F->a_1674 = NULL;
F->a_1674 = (*(P919)rt_nil_check(F->c_445)).args;
F->head_1675 = NULL;
F->tail_1676 = NULL;
F->saved_1677 = NULL;
F->saved_1677 = g_st_field_975;
if ((f_list_len_67(F->p_1673) != f_list_len_67(F->a_1674))) {
f_fail_23(F->line_447, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check((*(P923)rt_nil_check(F->t_446)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1673))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1674 != NULL)) {
F->pc_1678 = NULL;
F->vt_1679 = NULL;
F->pt_1680 = NULL;
F->pt_1680 = f_resolve_subtype_260((*(P917)rt_nil_check(F->p_1673)).a, &F->pc_1678);
F->nm_1681 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1682 = NULL;
F->y_1682 = f_new_sym_173((((rt_int)2LL)), f_mk_3(&F->nm_1681));
F->n_1683 = NULL;
F->n_1683 = f_nn_61((((rt_int)7LL)), F->line_447);
F->v_1684 = rt_str_copy(f_gexpr_705(F->a_1674, F->pt_1680, &F->vt_1679));
F->access_1685 = rt_str_copy(f_raw_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_226(F->pt_1680); b_; })));
f_check_type_224(F->vt_1679, F->pt_1680, F->line_447);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1685, rt_str(" = ", 3)), f_checked_205(F->pt_1680, F->pc_1678, &F->v_1684)), rt_str(";", 1)); b_; }));
(*(P927)rt_nil_check(F->y_1682)).t = F->pt_1680;
(*(P927)rt_nil_check(F->y_1682)).ro_flag = 1;
f_bind_476(F->y_1682, &F->access_1685);
f_define_160(F->y_1682, F->line_447);
(*(P917)rt_nil_check(F->n_1683)).name = f_mk_3(&F->nm_1681);
f_append_65(&F->head_1675, &F->tail_1676, F->n_1683);
F->a_1674 = (*(P917)rt_nil_check(F->a_1674)).next;
F->p_1673 = (*(P917)rt_nil_check(F->p_1673)).next;
}
(*(P919)rt_nil_check(F->r_1672)).args = F->head_1675;
g_st_field_975 = F->saved_1677;
F->result_ = F->r_1672;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_452(P923 t_449, P919 c_450, P917 src_451) {
  struct f_ptr_subtype_check_452fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_449 = t_449;
F->c_450 = c_450;
F->src_451 = src_451;
F->lv_1686 = NULL;
F->st_1687 = NULL;
F->sc_1688 = NULL;
F->ro_1689 = RT_R_EUNDEF;
F->cond_1690 = NULL;
F->cond_1690 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1691 = NULL;
F->b_1692 = NULL;
F->at_1693 = NULL;
F->bt_1694 = NULL;
if ((((((rt_r_ichk((*(P923)rt_nil_check(F->t_449)).kind) != (((rt_int)8LL))) || (F->c_450 == NULL)) || ((*(P919)rt_nil_check(F->c_450)).args == NULL)) || (F->src_451 == NULL)) || (!f_is_lvalue_668(F->src_451)))) {
goto ret_;
}
f_lvalue_674(F->src_451, &F->lv_1686, &F->st_1687, &F->sc_1688, &F->ro_1689);
if (((F->sc_1688 == NULL) || ((*(P919)rt_nil_check(F->sc_1688)).args == NULL))) {
goto ret_;
}
F->a_1691 = (*(P919)rt_nil_check(F->c_450)).args;
F->b_1692 = (*(P919)rt_nil_check(F->sc_1688)).args;
while (((F->a_1691 != NULL) && (F->b_1692 != NULL))) {
F->x_1695 = rt_str_copy(f_gexpr_705(F->a_1691, NULL, &F->at_1693));
F->y_1696 = rt_str_copy(f_gexpr_705(F->b_1692, F->at_1693, &F->bt_1694));
F->cond_1690 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->cond_1690))->all), rt_str(" || !", 5)), f_eq_code_386(F->at_1693, &F->x_1695, &F->y_1696)); b_; }));
F->a_1691 = (*(P917)rt_nil_check(F->a_1691)).next;
F->b_1692 = (*(P917)rt_nil_check(F->b_1692)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P910)rt_nil_check(F->cond_1690))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_normal_function_455(P917 d_453, P927 y_454) {
  struct f_normal_function_455fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_453 = d_453;
F->y_454 = y_454;
F->p_1697 = NULL;
F->p_1697 = (*(P927)rt_nil_check(F->y_454)).params;
F->imp_1698 = NULL;
F->imp_1698 = (*(P917)rt_nil_check(F->d_453)).d;
if (((rt_r_ichk((*(P917)rt_nil_check(F->d_453)).kind) != (((rt_int)46LL))) || (rt_mod(rt_r_ichk((*(P917)rt_nil_check(F->d_453)).flag), ((rt_int)2LL)) == ((rt_int)1LL)))) {
goto ret_;
}
while ((F->p_1697 != NULL)) {
if (((rt_r_ichk((*(P929)rt_nil_check(F->p_1697)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P929)rt_nil_check(F->p_1697)).mode) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->d_453)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may have only CONST and READONLY formal parameters: ", 70), (((P910)rt_nil_check((*(P917)rt_nil_check(F->d_453)).name))->all)); b_; }));
}
F->p_1697 = (*(P929)rt_nil_check(F->p_1697)).next;
}
if ((((*(P917)rt_nil_check(F->d_453)).d == NULL) && (rt_r_ichk((*(P917)rt_nil_check(F->d_453)).flag) < ((rt_int)2LL)))) {
goto ret_;
}
if (((g_caps_972 == NULL) || (rt_r_ichk(g_depth_956) != rt_r_ichk((*(P944)rt_nil_check(g_caps_972)).depth)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->d_453)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function with an imports list must be local to a capsule body: ", 72), (((P910)rt_nil_check((*(P917)rt_nil_check(F->d_453)).name))->all)); b_; }));
}
while ((F->imp_1698 != NULL)) {
F->ro_1699 = RT_R_EUNDEF;
F->z_1700 = NULL;
F->z_1700 = f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->imp_1698)).name))->all));
if ((((F->z_1700 != NULL) && (rt_r_ichk((*(P927)rt_nil_check(F->z_1700)).kind) == (((rt_int)1LL)))) && (rt_r_ichk((*(P927)rt_nil_check(F->z_1700)).depth) != rt_r_ichk((*(P944)rt_nil_check(g_caps_972)).depth)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->d_453)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function imports only variables of its capsule body: ", 62), (((P910)rt_nil_check((*(P917)rt_nil_check(F->imp_1698)).name))->all)); b_; }));
}
if ((f_exported_404((*(P944)rt_nil_check(g_caps_972)).d, &(((P910)rt_nil_check((*(P917)rt_nil_check(F->imp_1698)).name))->all), &F->ro_1699) && (rt_r_ichk((*(P917)rt_nil_check((*(P944)rt_nil_check(g_caps_972)).d)).ival) != ((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->d_453)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may not import an exported variable: ", 55), (((P910)rt_nil_check((*(P917)rt_nil_check(F->imp_1698)).name))->all)); b_; }));
}
F->imp_1698 = (*(P917)rt_nil_check(F->imp_1698)).next;
}
(*(P927)rt_nil_check(F->y_454)).capn = (*(P944)rt_nil_check(g_caps_972)).d;
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_457(P917 d_456) {
  struct f_declare_subprogram_457fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_456 = d_456;
f_define_160(f_build_subprogram_459(F->d_456), rt_r_ichk((*(P917)rt_nil_check(F->d_456)).line));
ret_:
  RT_FPOP();
  return;
}

static P927 f_build_subprogram_459(P917 d_458) {
  struct f_build_subprogram_459fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_458 = d_458;
F->y_1701 = NULL;
F->p_1702 = NULL;
F->p_1702 = (*(P917)rt_nil_check(F->d_458)).a;
F->tail_1703 = NULL;
if ((rt_r_ichk((*(P917)rt_nil_check(F->d_458)).kind) == (((rt_int)46LL)))) {
F->y_1701 = f_new_sym_173((((rt_int)3LL)), (*(P917)rt_nil_check(F->d_458)).name);
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->d_458)).kind) == (((rt_int)50LL)))) {
F->y_1701 = f_new_sym_173((((rt_int)9LL)), (*(P917)rt_nil_check(F->d_458)).name);
} else {
F->y_1701 = f_new_sym_173((((rt_int)4LL)), (*(P917)rt_nil_check(F->d_458)).name);
}
while ((F->p_1702 != NULL)) {
F->pm_1704 = NULL;
if (((rt_r_ichk((*(P917)rt_nil_check(F->d_458)).kind) == (((rt_int)50LL))) && (rt_r_ichk((*(P917)rt_nil_check(F->p_1702)).ival) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->d_458)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a task may not have OUT formal parameters", 41); b_; }));
}
{ R930 *cell1705 = rt_alloc(sizeof(R930));
(*cell1705).name = NULL;
(*cell1705).t = NULL;
(*cell1705).c = NULL;
(*cell1705).cfield = NULL;
(*cell1705).next = NULL;
F->pm_1704 = cell1705;
}
(*(P929)rt_nil_check(F->pm_1704)).name = (*(P917)rt_nil_check(F->p_1702)).name;
(*(P929)rt_nil_check(F->pm_1704)).mode = rt_r_ichk((*(P917)rt_nil_check(F->p_1702)).ival);
(*(P929)rt_nil_check(F->pm_1704)).t = f_resolve_subtype_260((*(P917)rt_nil_check(F->p_1702)).a, &(*(P929)rt_nil_check(F->pm_1704)).c);
(*(P929)rt_nil_check(F->pm_1704)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1702)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1703 == NULL)) {
(*(P927)rt_nil_check(F->y_1701)).params = F->pm_1704;
} else {
(*(P929)rt_nil_check(F->tail_1703)).next = F->pm_1704;
}
F->tail_1703 = F->pm_1704;
F->p_1702 = (*(P917)rt_nil_check(F->p_1702)).next;
}
(*(P927)rt_nil_check(F->y_1701)).result = g_ty_void_1002;
if (((*(P917)rt_nil_check(F->d_458)).b != NULL)) {
F->rc_1706 = NULL;
F->pm_1707 = NULL;
F->pm_1707 = (*(P927)rt_nil_check(F->y_1701)).params;
F->saved_1708 = NULL;
F->saved_1708 = g_code_967;
g_code_967 = f_new_buffer_24();
f_open_scope_169();
while ((F->pm_1707 != NULL)) {
F->z_1709 = NULL;
F->z_1709 = f_new_sym_173((((rt_int)2LL)), (*(P929)rt_nil_check(F->pm_1707)).name);
(*(P927)rt_nil_check(F->z_1709)).t = (*(P929)rt_nil_check(F->pm_1707)).t;
(*(P927)rt_nil_check(F->z_1709)).c = (*(P929)rt_nil_check(F->pm_1707)).c;
(*(P927)rt_nil_check(F->z_1709)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_160(F->z_1709, rt_r_ichk((*(P917)rt_nil_check(F->d_458)).line));
F->pm_1707 = (*(P929)rt_nil_check(F->pm_1707)).next;
}
(*(P927)rt_nil_check(F->y_1701)).result = f_resolve_subtype_260((*(P917)rt_nil_check(F->d_458)).b, &F->rc_1706);
f_close_scope_170();
g_code_967 = F->saved_1708;
}
(*(P927)rt_nil_check(F->y_1701)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_660(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->d_458)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P927)rt_nil_check(F->y_1701)).decl = F->d_458;
(*(P927)rt_nil_check(F->y_1701)).level = rt_r_ichk(g_cur_level_970);
if ((rt_r_ichk((*(P917)rt_nil_check(F->d_458)).kind) == (((rt_int)50LL)))) {
f_put_27(g_out_globals_963, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P910)rt_nil_check((*(P927)rt_nil_check(F->y_1701)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1701;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_462(P910 pr_460, rstr *p_461) {
  struct f_has_pragmat_462fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_460 = pr_460;
F->p_461 = p_461;
if ((F->pr_460 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1711 = ((rt_int)1LL), hi1712 = rt_sub(((rt_int)(((((P910)rt_nil_check(F->pr_460))->all)).len)), ((rt_int)(((*F->p_461)).len)));
for (rt_int it1713 = lo1711; it1713 <= hi1712; it1713++) {
F->i_1710 = it1713;
if (((rt_str_eq(rt_str_slice((((P910)rt_nil_check(F->pr_460))->all), F->i_1710, rt_sub(rt_add(F->i_1710, ((rt_int)(((*F->p_461)).len))), ((rt_int)1LL))), (*F->p_461)) && (rt_r_echk(rt_str_get((((P910)rt_nil_check(F->pr_460))->all), rt_add(F->i_1710, ((rt_int)(((*F->p_461)).len))))) == 59)) && ((F->i_1710 == ((rt_int)1LL)) || (rt_r_echk(rt_str_get((((P910)rt_nil_check(F->pr_460))->all), rt_sub(F->i_1710, ((rt_int)1LL)))) == 59)))) {
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

static P910 f_suppressing_464(P910 pr_463) {
  struct f_suppressing_464fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_463 = pr_463;
F->r_1714 = NULL;
F->r_1714 = g_suppress_987;
F->i_1715 = RT_R_IUNDEF;
F->i_1715 = ((rt_int)1LL);
if ((F->pr_463 == NULL)) {
F->result_ = F->r_1714;
goto ret_;
}
if ((F->r_1714 == NULL)) {
F->r_1714 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(rt_r_ichk(F->i_1715), ((rt_int)9LL)) <= ((rt_int)(((((P910)rt_nil_check(F->pr_463))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P910)rt_nil_check(F->pr_463))->all), rt_r_ichk(F->i_1715), rt_add(rt_r_ichk(F->i_1715), ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1716 = RT_R_IUNDEF;
F->j_1716 = rt_add(rt_r_ichk(F->i_1715), ((rt_int)9LL));
F->k_1717 = RT_R_IUNDEF;
F->k_1717 = rt_r_ichk(F->j_1716);
while ((rt_r_echk(rt_str_get((((P910)rt_nil_check(F->pr_463))->all), rt_r_ichk(F->k_1717))) != 41)) {
if ((rt_r_echk(rt_str_get((((P910)rt_nil_check(F->pr_463))->all), rt_r_ichk(F->k_1717))) == 44)) {
F->r_1714 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_1714))->all), rt_str_slice((((P910)rt_nil_check(F->pr_463))->all), rt_r_ichk(F->j_1716), rt_sub(rt_r_ichk(F->k_1717), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1716 = rt_add(rt_r_ichk(F->k_1717), ((rt_int)1LL));
}
F->k_1717 = rt_add(rt_r_ichk(F->k_1717), ((rt_int)1LL));
}
F->r_1714 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_1714))->all), rt_str_slice((((P910)rt_nil_check(F->pr_463))->all), rt_r_ichk(F->j_1716), rt_sub(rt_r_ichk(F->k_1717), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1715 = rt_r_ichk(F->k_1717);
}
F->i_1715 = rt_add(rt_r_ichk(F->i_1715), ((rt_int)1LL));
}
F->result_ = F->r_1714;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_suppressed_466(rstr *x_465) {
  struct f_suppressed_466fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_465 = x_465;
F->w_1718 = rt_str_new(rt_add(((rt_int)(((*F->x_465)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1718, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_465)), rt_str(" ", 1)));
if ((g_suppress_987 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1720 = ((rt_int)1LL), hi1721 = rt_add(rt_sub(((rt_int)(((((P910)rt_nil_check(g_suppress_987))->all)).len)), ((rt_int)((F->w_1718).len))), ((rt_int)1LL));
for (rt_int it1722 = lo1720; it1722 <= hi1721; it1722++) {
F->i_1719 = it1722;
if (rt_str_eq(rt_str_slice((((P910)rt_nil_check(g_suppress_987))->all), F->i_1719, rt_sub(rt_add(F->i_1719, ((rt_int)((F->w_1718).len))), ((rt_int)1LL))), F->w_1718)) {
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

static void f_element_468(P917 e_467) {
  struct f_element_468fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_467 = e_467;
F->saved_1723 = NULL;
F->saved_1723 = g_suppress_987;
g_suppress_987 = f_suppressing_464((*(P917)rt_nil_check(F->e_467)).prags);
f_element1_470(F->e_467);
g_suppress_987 = F->saved_1723;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_470(P917 e_469) {
  struct f_element1_470fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_469 = e_469;
F->k_1724 = RT_R_IUNDEF;
F->k_1724 = rt_r_ichk((*(P917)rt_nil_check(F->e_469)).kind);
if (((rt_r_ichk(F->k_1724) == (((rt_int)48LL))) && ((rt_r_ichk((*(P917)rt_nil_check(F->e_469)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P917)rt_nil_check(F->e_469)).flag) == ((rt_int)3LL))))) {
f_gen_expose_430(F->e_469);
} else if ((((rt_r_ichk(F->k_1724) == (((rt_int)45LL))) || (rt_r_ichk(F->k_1724) == (((rt_int)46LL)))) || (rt_r_ichk(F->k_1724) == (((rt_int)50LL))))) {
f_subprogram_486(F->e_469);
} else if ((rt_r_ichk(F->k_1724) == (((rt_int)51LL)))) {
F->g_1725 = NULL;
F->g_1725 = f_lookup_decl_157(F->e_469);
if ((F->g_1725 != NULL)) {
{ P931 cell1726 = rt_alloc(sizeof *cell1726);
rt_int pv1727 = (((rt_int)4093LL));
cell1726->p_n = pv1727;
cell1726->all.lo = ((rt_int)0LL); cell1726->all.hi = pv1727;
cell1726->all.lo2 = cell1726->all.hi2 = 1;
cell1726->all.p = rt_alloc(sizeof(P927) * (size_t)(RT_CNT(cell1726->all)) + 1);
for (rt_int i1728 = 0; i1728 < (RT_CNT(cell1726->all)); i1728++) {
cell1726->all.p[i1728] = NULL;
}
(*(P927)rt_nil_check(F->g_1725)).env = cell1726;
}
{ rt_int lo1730 = ((rt_int)0LL), hi1731 = (((rt_int)4093LL));
for (rt_int it1732 = lo1730; it1732 <= hi1731; it1732++) {
F->i_1729 = it1732;
(((P931)rt_nil_check((*(P927)rt_nil_check(F->g_1725)).env))->all).p[(rt_index(F->i_1729, (((P931)rt_nil_check((*(P927)rt_nil_check(F->g_1725)).env))->all).lo, (((P931)rt_nil_check((*(P927)rt_nil_check(F->g_1725)).env))->all).hi) - (((P931)rt_nil_check((*(P927)rt_nil_check(F->g_1725)).env))->all).lo)] = ({ A933 b_ = (((P931)rt_nil_check(g_table_953))->all); b_.p[(rt_index(F->i_1729, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((((rt_r_ichk(F->k_1724) == (((rt_int)49LL))) || (rt_r_ichk(F->k_1724) == (((rt_int)42LL)))) || (rt_r_ichk(F->k_1724) == (((rt_int)43LL)))) || (rt_r_ichk(F->k_1724) == (((rt_int)47LL)))) || (rt_r_ichk(F->k_1724) == (((rt_int)48LL))))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1724) == (((rt_int)44LL)))) {
f_finish_ptr_432((*(P927)rt_nil_check(f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_469)).name))->all)))).t);
} else if ((rt_r_ichk(F->k_1724) == (((rt_int)40LL)))) {
f_var_decl_478(F->e_469);
} else if (((rt_r_ichk(F->k_1724) == (((rt_int)41LL))) && (rt_r_ichk((*(P917)rt_nil_check(F->e_469)).flag) == ((rt_int)0LL)))) {
f_const_decl_484(F->e_469);
} else if ((rt_r_ichk(F->k_1724) == (((rt_int)41LL)))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1724) == (((rt_int)33LL)))) {
F->t_1733 = NULL;
F->c_1734 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_469)).a, g_ty_bool_998, &F->t_1733));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1734), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_521(F->e_469);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_473(rstr *name_471, P923 t_472) {
  struct f_storage_473fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_471 = name_471;
F->t_472 = t_472;
if ((!rt_r_echk(g_in_func_969))) {
F->g_1735 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_471))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_963, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_226(F->t_472)), rt_str(" ", 1)), F->g_1735), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_977, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1735), rt_str(");", 2)); b_; }));
g_st_field_975 = f_mk_3(&F->g_1735);
F->result_ = F->g_1735;
goto ret_;
}
{
F->f_1736 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_471)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_968, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_226(F->t_472)), rt_str(" ", 1)), F->f_1736), rt_str(";", 1)); b_; }));
g_st_field_975 = f_mk_3(&F->f_1736);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1736);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_476(P927 y_474, rstr *access_475) {
  struct f_bind_476fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_474 = y_474;
F->access_475 = access_475;
if (rt_r_echk(g_in_func_969)) {
(*(P927)rt_nil_check(F->y_474)).level = rt_r_ichk(g_cur_level_970);
(*(P927)rt_nil_check(F->y_474)).access = g_st_field_975;
} else {
(*(P927)rt_nil_check(F->y_474)).level = ((rt_int)0LL);
(*(P927)rt_nil_check(F->y_474)).access = f_mk_3(&(*F->access_475));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_478(P917 d_477) {
  struct f_var_decl_478fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_477 = d_477;
F->c_1737 = NULL;
F->t_1738 = NULL;
F->t_1738 = f_resolve_subtype_260((*(P917)rt_nil_check(F->d_477)).a, &F->c_1737);
F->y_1739 = NULL;
F->y_1739 = f_new_sym_173((((rt_int)1LL)), (*(P917)rt_nil_check(F->d_477)).name);
F->access_1740 = rt_str_copy(f_storage_473(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->d_477)).name))->all), F->t_1738));
F->c_1737 = f_freeze_201(F->c_1737, F->t_1738);
if ((((rt_r_ichk((*(P923)rt_nil_check(F->t_1738)).kind) == (((rt_int)8LL))) && (F->c_1737 != NULL)) && ((*(P919)rt_nil_check(F->c_1737)).args != NULL))) {
F->c_1737 = f_freeze_args_448(F->c_1737, F->t_1738, rt_r_ichk((*(P917)rt_nil_check(F->d_477)).line));
}
g_mark_uninit_989 = 1;
f_init_storage_314(&F->access_1740, F->t_1738, F->c_1737);
g_mark_uninit_989 = 0;
if ((rt_r_ichk((*(P917)rt_nil_check(F->d_477)).ival) == ((rt_int)1LL))) {
F->it_1741 = NULL;
F->n_1742 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->d_477)).c, g_ty_int_997, &F->it_1741));
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_1738)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->d_477)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_213((*(P923)rt_nil_check(F->t_1738)).elem, g_ty_ascii_1000)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1740), rt_str(", ", 2)), F->n_1742), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1740), rt_str(", ", 2)), F->n_1742), rt_str(", 0);", 5)); b_; }));
}
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->d_477)).ival) == ((rt_int)2LL))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->d_477)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the simulated machine has no addressable memory: LOCATION takes INTERRUPT n only", 80); b_; }));
}
if (((*(P917)rt_nil_check(F->d_477)).b != NULL)) {
F->vt_1743 = NULL;
F->v_1744 = rt_str_copy(f_gexpr_in_713((*(P917)rt_nil_check(F->d_477)).b, F->t_1738, F->c_1737, &F->vt_1743));
f_check_type_224(F->vt_1743, F->t_1738, rt_r_ichk((*(P917)rt_nil_check(F->d_477)).line));
f_ptr_subtype_check_452(F->t_1738, F->c_1737, (*(P917)rt_nil_check(F->d_477)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_379(&F->access_1740, F->t_1738, &F->v_1744, F->c_1737); b_; }));
}
(*(P927)rt_nil_check(F->y_1739)).t = F->t_1738;
(*(P927)rt_nil_check(F->y_1739)).c = F->c_1737;
f_bind_476(F->y_1739, &F->access_1740);
f_define_160(F->y_1739, rt_r_ichk((*(P917)rt_nil_check(F->d_477)).line));
if (f_needs_fin_319(F->t_1738)) {
f_open_fin_480(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_322(&F->access_1740, F->t_1738); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_480(rstr *fc_479) {
  struct f_open_fin_480fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_479 = fc_479;
F->f_1745 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1746 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1745), rt_str("; if (RT_TRY(", 13)), F->f_1745), rt_str(")) {", 4)); b_; }));
f_push_cleanup_518(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1745), rt_str("); ", 3)), (*F->fc_479)); b_; }));
{ R922 *cell1747 = rt_alloc(sizeof(R922));
(*cell1747).s = NULL;
(*cell1747).next = NULL;
F->l_1746 = cell1747;
}
(*(P921)rt_nil_check(F->l_1746)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1745), rt_str("); ", 3)), (*F->fc_479)), rt_str(" } else { RT_POP(", 17)), F->f_1745), rt_str("); ", 3)), (*F->fc_479)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P921)rt_nil_check(F->l_1746)).next = g_fins_979;
g_fins_979 = F->l_1746;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_482(P921 saved_481) {
  struct f_close_fins_482fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_481 = saved_481;
while (((g_fins_979 != F->saved_481) && (g_fins_979 != NULL))) {
f_emit_29(&(((P910)rt_nil_check((*(P921)rt_nil_check(g_fins_979)).s))->all));
f_pop_cleanup_519();
g_fins_979 = (*(P921)rt_nil_check(g_fins_979)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_484(P917 d_483) {
  struct f_const_decl_484fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_483 = d_483;
F->c_1748 = NULL;
F->c_1748 = f_new_cons_176();
F->t_1749 = NULL;
F->vt_1750 = NULL;
F->y_1751 = NULL;
F->y_1751 = f_new_sym_173((((rt_int)2LL)), (*(P917)rt_nil_check(F->d_483)).name);
F->ok_1752 = RT_R_EUNDEF;
if (((*(P917)rt_nil_check(F->d_483)).a != NULL)) {
F->t_1749 = f_resolve_subtype_260((*(P917)rt_nil_check(F->d_483)).a, &F->c_1748);
}
{
F->v_1753 = rt_str_copy(f_gexpr_in_713((*(P917)rt_nil_check(F->d_483)).b, F->t_1749, F->c_1748, &F->vt_1750));
if ((F->t_1749 != NULL)) {
f_check_type_224(F->vt_1750, F->t_1749, rt_r_ichk((*(P917)rt_nil_check(F->d_483)).line));
} else {
F->t_1749 = F->vt_1750;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_1749)).kind) == (((rt_int)1LL)))) {
(*(P927)rt_nil_check(F->y_1751)).mvalue = f_manifest_339((*(P917)rt_nil_check(F->d_483)).b, &F->ok_1752);
(*(P927)rt_nil_check(F->y_1751)).hasmv = rt_r_echk(F->ok_1752);
}
{
F->access_1754 = rt_str_copy(f_storage_473(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->d_483)).name))->all), F->t_1749));
if (((*(P923)rt_nil_check(F->t_1749)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_317((*(P923)rt_nil_check(F->t_1749)).initp, &F->access_1754); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1754, rt_str(" = ", 3)), f_checked_205(F->t_1749, F->c_1748, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_382(F->t_1749, &F->v_1753); b_; }))), rt_str(";", 1)); b_; }));
f_bind_476(F->y_1751, &F->access_1754);
if (f_needs_fin_319(F->t_1749)) {
f_open_fin_480(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_322(&F->access_1754, F->t_1749); b_; }));
}
}
}
(*(P927)rt_nil_check(F->y_1751)).t = F->t_1749;
(*(P927)rt_nil_check(F->y_1751)).c = F->c_1748;
(*(P927)rt_nil_check(F->y_1751)).ro_flag = 1;
f_define_160(F->y_1751, rt_r_ichk((*(P917)rt_nil_check(F->d_483)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_486(P917 d_485) {
  struct f_subprogram_486fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_485 = d_485;
f_gen_subprogram_489(F->d_485, f_lookup_decl_157(F->d_485));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_489(P917 d_487, P927 y_488) {
  struct f_gen_subprogram_489fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_487 = d_487;
F->y_488 = y_488;
F->saved_code_1755 = NULL;
F->saved_code_1755 = g_code_967;
F->saved_fields_1756 = NULL;
F->saved_fields_1756 = g_fields_buf_968;
F->saved_in_1757 = RT_R_EUNDEF;
F->saved_in_1757 = rt_r_echk(g_in_func_969);
F->saved_sym_1758 = NULL;
F->saved_sym_1758 = g_func_sym_981;
F->saved_exits_1759 = NULL;
F->saved_exits_1759 = g_exits_990;
F->saved_gotos_1760 = NULL;
F->saved_gotos_1760 = g_gotos_991;
F->saved_frames_1761 = RT_R_IUNDEF;
F->saved_frames_1761 = rt_r_ichk(g_frames_992);
F->args_1762 = NULL;
F->args_1762 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1763 = NULL;
F->pm_1763 = (*(P927)rt_nil_check(F->y_488)).params;
F->saved_handlers_1764 = NULL;
F->saved_handlers_1764 = g_handlers_993;
F->saved_cleanups_1765 = NULL;
F->saved_cleanups_1765 = g_cleanups_994;
F->ctx_1766 = NULL;
F->head_1767 = NULL;
F->frame_1768 = NULL;
F->frame_1768 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_488)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_1769 = NULL;
F->copy_back_1770 = NULL;
F->copy_back_1770 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1771 = NULL;
F->pfin_1771 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1772 = NULL;
F->saved_fins_1772 = g_fins_979;
F->saved_rc_1773 = NULL;
F->saved_rc_1773 = g_func_rc_982;
F->saved_ret_1774 = NULL;
F->saved_ret_1774 = g_cap_ret_983;
F->saved_rflag_1775 = NULL;
F->saved_rflag_1775 = g_cap_rflag_984;
F->pn_1776 = NULL;
F->pn_1776 = (*(P917)rt_nil_check(F->d_487)).a;
F->nonrec_end_1777 = NULL;
F->has_pfin_1778 = RT_R_EUNDEF;
if (rt_r_echk(g_in_func_969)) {
F->parent_1769 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P927)rt_nil_check(g_func_sym_981)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_979 = NULL;
g_func_rc_982 = NULL;
g_cap_ret_983 = NULL;
g_cap_rflag_984 = NULL;
g_code_967 = f_new_buffer_24();
g_fields_buf_968 = f_new_buffer_24();
g_in_func_969 = 1;
g_func_sym_981 = F->y_488;
g_exits_990 = NULL;
g_gotos_991 = NULL;
g_frames_992 = ((rt_int)0LL);
g_handlers_993 = NULL;
g_cleanups_994 = NULL;
g_cur_level_970 = rt_add(rt_r_ichk(g_cur_level_970), ((rt_int)1LL));
f_open_scope_169();
{ R935 *cell1779 = rt_alloc(sizeof(R935));
(*cell1779).imps = NULL;
(*cell1779).next = NULL;
F->ctx_1766 = cell1779;
}
(*(P934)rt_nil_check(F->ctx_1766)).depth = rt_r_ichk(g_depth_956);
(*(P934)rt_nil_check(F->ctx_1766)).imps = (*(P917)rt_nil_check(F->d_487)).d;
(*(P934)rt_nil_check(F->ctx_1766)).all_imp = (rt_r_ichk((*(P917)rt_nil_check(F->d_487)).flag) >= ((rt_int)2LL));
(*(P934)rt_nil_check(F->ctx_1766)).next = g_fctx_971;
g_fctx_971 = F->ctx_1766;
if ((F->parent_1769 != NULL)) {
f_put_27(g_fields_buf_968, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P910)rt_nil_check(F->parent_1769))->all)), rt_str(" *up;", 5)); b_; }));
if ((rt_r_ichk((*(P927)rt_nil_check(F->y_488)).kind) != (((rt_int)9LL)))) {
F->args_1762 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P910)rt_nil_check(F->parent_1769))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1763 != NULL)) {
F->ct_1780 = rt_str_copy(f_ctype_226((*(P929)rt_nil_check(F->pm_1763)).t));
F->f_1781 = rt_str_copy((((P910)rt_nil_check((*(P929)rt_nil_check(F->pm_1763)).cfield))->all));
F->p_1782 = NULL;
F->pc_1783 = NULL;
F->pc_1783 = (*(P929)rt_nil_check(F->pm_1763)).c;
F->ac_1784 = NULL;
if ((((rt_int)(((((P910)rt_nil_check(F->args_1762))->all)).len)) > ((rt_int)0LL))) {
F->args_1762 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->args_1762))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_178((*(P929)rt_nil_check(F->pm_1763)).t)) {
F->fc_1785 = NULL;
F->ft_1786 = NULL;
F->ft_1786 = f_resolve_subtype_260((*(P917)rt_nil_check(F->pn_1776)).a, &F->fc_1785);
F->pc_1783 = f_freeze_201(F->fc_1785, (*(P929)rt_nil_check(F->pm_1763)).t);
}
if ((rt_r_ichk((*(P929)rt_nil_check(F->pm_1763)).mode) == (((rt_int)1LL)))) {
F->p_1782 = f_new_sym_173((((rt_int)2LL)), (*(P929)rt_nil_check(F->pm_1763)).name);
f_put_27(g_fields_buf_968, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1780), rt_str(" ", 1)), F->f_1781), rt_str(";", 1)); b_; }));
F->args_1762 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->args_1762))->all), F->ct_1780), rt_str(" ", 1)), F->f_1781); b_; }));
(*(P927)rt_nil_check(F->p_1782)).access = f_mk_3(&F->f_1781);
if ((rt_r_ichk((*(P927)rt_nil_check(F->y_488)).kind) != (((rt_int)9LL)))) {
if (((*(P923)rt_nil_check((*(P929)rt_nil_check(F->pm_1763)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_317((*(P923)rt_nil_check((*(P929)rt_nil_check(F->pm_1763)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1781); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1781), rt_str(" = ", 3)), f_checked_205((*(P929)rt_nil_check(F->pm_1763)).t, F->pc_1783, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_382((*(P929)rt_nil_check(F->pm_1763)).t, &F->f_1781); b_; }))), rt_str(";", 1)); b_; }));
if (f_needs_fin_319((*(P929)rt_nil_check(F->pm_1763)).t)) {
F->pfin_1771 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->pfin_1771))->all), f_fin_code_322(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1781); b_; }), (*(P929)rt_nil_check(F->pm_1763)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_1782 = f_new_sym_173((((rt_int)1LL)), (*(P929)rt_nil_check(F->pm_1763)).name);
f_put_27(g_fields_buf_968, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1780), rt_str(" *", 2)), F->f_1781), rt_str(";", 1)); b_; }));
F->args_1762 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->args_1762))->all), F->ct_1780), rt_str(" *", 2)), F->f_1781); b_; }));
(*(P927)rt_nil_check(F->p_1782)).access = f_mk_3(&F->f_1781);
(*(P927)rt_nil_check(F->p_1782)).byref = 1;
if ((rt_r_ichk((*(P927)rt_nil_check(F->y_488)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1781), rt_str(" = ", 3)), F->f_1781), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_178((*(P929)rt_nil_check(F->pm_1763)).t)) {
F->bt_1787 = rt_str_copy(f_bound_ctype_180((*(P929)rt_nil_check(F->pm_1763)).t));
f_put_27(g_fields_buf_968, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_1787), rt_str(" ", 1)), F->f_1781), rt_str("lo, ", 4)), F->f_1781), rt_str("hi;", 3)); b_; }));
F->args_1762 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->args_1762))->all), rt_str(", ", 2)), F->bt_1787), rt_str(" ", 1)), F->f_1781), rt_str("lo, ", 4)), F->bt_1787), rt_str(" ", 1)), F->f_1781), rt_str("hi", 2)); b_; }));
if ((rt_r_ichk((*(P927)rt_nil_check(F->y_488)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1781), rt_str("lo = ", 5)), F->f_1781), rt_str("lo; F->", 7)), F->f_1781), rt_str("hi = ", 5)), F->f_1781), rt_str("hi;", 3)); b_; }));
}
F->ac_1784 = f_new_cons_176();
(*(P919)rt_nil_check(F->ac_1784)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1781, rt_str("lo", 2)); b_; }));
(*(P919)rt_nil_check(F->ac_1784)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1781, rt_str("hi", 2)); b_; }));
(*(P919)rt_nil_check(F->ac_1784)).dyn = 1;
(*(P919)rt_nil_check(F->ac_1784)).lvl = rt_r_ichk(g_cur_level_970);
if (((F->pc_1783 == NULL) || ((*(P919)rt_nil_check(F->pc_1783)).lo == NULL))) {
F->pc_1783 = F->ac_1784;
} else if ((rt_r_ichk((*(P929)rt_nil_check(F->pm_1763)).mode) != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_1781), rt_str("lo <= F->", 9)), F->f_1781), rt_str("hi && (F->", 10)), F->f_1781), rt_str("lo != ", 6)), f_sub_lo_190((*(P929)rt_nil_check(F->pm_1763)).t, F->pc_1783)), rt_str(" || F->", 7)), F->f_1781), rt_str("hi != ", 6)), f_sub_hi_193((*(P929)rt_nil_check(F->pm_1763)).t, F->pc_1783)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if (((rt_r_ichk((*(P929)rt_nil_check(F->pm_1763)).mode) == (((rt_int)3LL))) && (rt_r_ichk((*(P927)rt_nil_check(F->y_488)).kind) != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_968, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1780), rt_str(" ", 1)), F->f_1781), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1781), rt_str("v = ", 4)), f_copy_code_382((*(P929)rt_nil_check(F->pm_1763)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1781); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P923)rt_nil_check((*(P929)rt_nil_check(F->pm_1763)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_317((*(P923)rt_nil_check((*(P929)rt_nil_check(F->pm_1763)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1781), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_1784 == NULL)) {
F->ac_1784 = (*(P929)rt_nil_check(F->pm_1763)).c;
}
if ((!rt_str_eq(f_uninit_value_333(f_base_of_215((*(P929)rt_nil_check(F->pm_1763)).t)), rt_str("", 0)))) {
F->copy_back_1770 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->copy_back_1770))->all), rt_str("  if (!rt_r_undef_", 18)), f_kind_name_220(f_base_of_215((*(P929)rt_nil_check(F->pm_1763)).t))), rt_str("(F->", 4)), F->f_1781), rt_str("v)) ", 4)), f_assign_code_379(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1781), rt_str(")", 1)); b_; }), (*(P929)rt_nil_check(F->pm_1763)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1781), rt_str("v", 1)); b_; }), F->ac_1784)); b_; }));
} else {
F->copy_back_1770 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->copy_back_1770))->all), rt_str("  ", 2)), f_assign_code_379(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1781), rt_str(")", 1)); b_; }), (*(P929)rt_nil_check(F->pm_1763)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1781), rt_str("v", 1)); b_; }), F->ac_1784)); b_; }));
}
if (f_needs_fin_319((*(P929)rt_nil_check(F->pm_1763)).t)) {
F->pfin_1771 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->pfin_1771))->all), f_fin_code_322(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1781), rt_str("v", 1)); b_; }), (*(P929)rt_nil_check(F->pm_1763)).t)), rt_str(" ", 1)); b_; }));
}
(*(P927)rt_nil_check(F->p_1782)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1781, rt_str("v", 1)); b_; }));
(*(P927)rt_nil_check(F->p_1782)).byref = 0;
}
}
(*(P927)rt_nil_check(F->p_1782)).t = (*(P929)rt_nil_check(F->pm_1763)).t;
(*(P927)rt_nil_check(F->p_1782)).c = F->pc_1783;
(*(P927)rt_nil_check(F->p_1782)).level = rt_r_ichk(g_cur_level_970);
(*(P927)rt_nil_check(F->p_1782)).ro_flag = ((rt_r_ichk((*(P929)rt_nil_check(F->pm_1763)).mode) == (((rt_int)1LL))) || (rt_r_ichk((*(P929)rt_nil_check(F->pm_1763)).mode) == (((rt_int)4LL))));
f_define_160(F->p_1782, rt_r_ichk((*(P917)rt_nil_check(F->d_487)).line));
F->pm_1763 = (*(P929)rt_nil_check(F->pm_1763)).next;
F->pn_1776 = (*(P917)rt_nil_check(F->pn_1776)).next;
}
if ((rt_r_ichk((*(P923)rt_nil_check((*(P927)rt_nil_check(F->y_488)).result)).kind) != (((rt_int)9LL)))) {
if (((*(P917)rt_nil_check(F->d_487)).b != NULL)) {
F->rc_1788 = NULL;
F->rt_1789 = NULL;
F->rt_1789 = f_resolve_subtype_260((*(P917)rt_nil_check(F->d_487)).b, &F->rc_1788);
g_func_rc_982 = f_freeze_201(F->rc_1788, (*(P927)rt_nil_check(F->y_488)).result);
}
f_put_27(g_fields_buf_968, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_226((*(P927)rt_nil_check(F->y_488)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P923)rt_nil_check((*(P927)rt_nil_check(F->y_488)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_317((*(P923)rt_nil_check((*(P927)rt_nil_check(F->y_488)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_1778 = (((rt_int)(((((P910)rt_nil_check(F->pfin_1771))->all)).len)) > ((rt_int)0LL));
if (rt_r_echk(F->has_pfin_1778)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_518(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_462((*(P917)rt_nil_check(F->d_487)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_462((*(P917)rt_nil_check(F->d_487)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_1790 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_1791 = NULL;
F->leave_1791 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_1790), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_963, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_1790), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_1790), rt_str(", ", 2)), f_bool_text_350(f_has_pragmat_462((*(P917)rt_nil_check(F->d_487)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_350(f_has_pragmat_462((*(P917)rt_nil_check(F->d_487)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P910)rt_nil_check((*(P917)rt_nil_check(F->d_487)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_518(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_1770 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->copy_back_1770))->all), rt_str("  ", 2)), (((P910)rt_nil_check(F->leave_1791))->all)); b_; }));
F->nonrec_end_1777 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P910)rt_nil_check(F->leave_1791))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
f_declare_labels_499((*(P917)rt_nil_check(F->d_487)).c);
f_declare_body_398((*(P917)rt_nil_check(F->d_487)).c);
{
F->xu_1792 = rt_str_copy(f_open_unhandled_512((*(P917)rt_nil_check(F->d_487)).c));
f_body_elements_508((*(P917)rt_nil_check(F->d_487)).c);
f_close_fins_482(NULL);
f_close_unhandled_514(&F->xu_1792);
}
if ((F->nonrec_end_1777 != NULL)) {
f_emit_29(&(((P910)rt_nil_check(F->nonrec_end_1777))->all));
f_pop_cleanup_519();
}
if (rt_r_echk(F->has_pfin_1778)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P910)rt_nil_check(F->pfin_1771))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_519();
F->copy_back_1770 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->copy_back_1770))->all), rt_str("  ", 2)), (((P910)rt_nil_check(F->pfin_1771))->all)); b_; }));
}
f_close_scope_170();
g_fctx_971 = (*(P934)rt_nil_check(g_fctx_971)).next;
g_cur_level_970 = rt_sub(rt_r_ichk(g_cur_level_970), ((rt_int)1LL));
if (((((rt_int)(((((P910)rt_nil_check(F->args_1762))->all)).len)) == ((rt_int)0LL)) || (rt_r_ichk((*(P927)rt_nil_check(F->y_488)).kind) == (((rt_int)9LL))))) {
F->args_1762 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if ((rt_r_ichk((*(P927)rt_nil_check(F->y_488)).kind) == (((rt_int)9LL)))) {
F->args_1762 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1767 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_226((*(P927)rt_nil_check(F->y_488)).result)), rt_str(" ", 1)), (((P910)rt_nil_check((*(P927)rt_nil_check(F->y_488)).cname))->all)), rt_str("(", 1)), (((P910)rt_nil_check(F->args_1762))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_962, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->head_1767))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->head_1767))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_976, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P910)rt_nil_check(F->frame_1768))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_976, g_fields_buf_968);
f_put_27(g_out_frames_976, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if ((rt_r_ichk((*(P927)rt_nil_check(F->y_488)).kind) == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P910)rt_nil_check(F->frame_1768))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P910)rt_nil_check(F->frame_1768))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_964, g_code_967);
if ((rt_r_ichk((*(P923)rt_nil_check((*(P927)rt_nil_check(F->y_488)).result)).kind) != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P910)rt_nil_check(F->copy_back_1770))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_964, &(((P910)rt_nil_check(F->copy_back_1770))->all));
}
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P910)rt_nil_check(F->copy_back_1770))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_964, &(((P910)rt_nil_check(F->copy_back_1770))->all));
}
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_967 = F->saved_code_1755;
g_fields_buf_968 = F->saved_fields_1756;
g_in_func_969 = rt_r_echk(F->saved_in_1757);
g_func_sym_981 = F->saved_sym_1758;
g_exits_990 = F->saved_exits_1759;
g_gotos_991 = F->saved_gotos_1760;
g_frames_992 = rt_r_ichk(F->saved_frames_1761);
g_handlers_993 = F->saved_handlers_1764;
g_cleanups_994 = F->saved_cleanups_1765;
g_fins_979 = F->saved_fins_1772;
g_func_rc_982 = F->saved_rc_1773;
g_cap_ret_983 = F->saved_ret_1774;
g_cap_rflag_984 = F->saved_rflag_1775;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_491(P917 d_490) {
  struct f_waits_of_491fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_490 = d_490;
F->w_1793 = NULL;
F->w_1793 = g_cap_waits_973;
while ((F->w_1793 != NULL)) {
if (((*(P946)rt_nil_check(F->w_1793)).d == F->d_490)) {
F->result_ = (((P910)rt_nil_check((*(P946)rt_nil_check(F->w_1793)).w))->all);
goto ret_;
}
F->w_1793 = (*(P946)rt_nil_check(F->w_1793)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_493(P917 elems_492) {
  struct f_task_waits_493fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_492 = elems_492;
F->e_1794 = NULL;
F->e_1794 = F->elems_492;
F->r_1795 = NULL;
F->r_1795 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1794 != NULL)) {
if ((rt_r_ichk((*(P917)rt_nil_check(F->e_1794)).kind) == (((rt_int)50LL)))) {
F->r_1795 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_1795))->all), rt_str(" rt_await_decl(&", 16)), (((P910)rt_nil_check((*(P927)rt_nil_check(f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_1794)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if (((rt_r_ichk((*(P917)rt_nil_check(F->e_1794)).kind) == (((rt_int)47LL))) || ((rt_r_ichk((*(P917)rt_nil_check(F->e_1794)).kind) == (((rt_int)48LL))) && ((rt_r_ichk((*(P917)rt_nil_check(F->e_1794)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P917)rt_nil_check(F->e_1794)).flag) == ((rt_int)3LL)))))) {
F->r_1795 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_1795))->all), f_waits_of_491(F->e_1794)); b_; }));
}
F->e_1794 = (*(P917)rt_nil_check(F->e_1794)).next;
}
F->result_ = (((P910)rt_nil_check(F->r_1795))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_495(P917 elems_494) {
  struct f_await_tasks_495fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_494 = elems_494;
F->w_1796 = rt_str_copy(f_task_waits_493(F->elems_494));
if ((((rt_int)((F->w_1796).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_1796);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_497(P917 elems_496) {
  struct f_capsule_elements_497fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_496 = elems_496;
F->e_1797 = NULL;
F->e_1797 = F->elems_496;
while ((F->e_1797 != NULL)) {
if (((rt_r_ichk((*(P917)rt_nil_check(F->e_1797)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P917)rt_nil_check(F->e_1797)).kind) <= (((rt_int)36LL))))) {
f_start_labels_500();
}
f_element_468(F->e_1797);
F->e_1797 = (*(P917)rt_nil_check(F->e_1797)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_499(P917 elems_498) {
  struct f_declare_labels_499fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_498 = elems_498;
F->e_1798 = NULL;
F->e_1798 = F->elems_498;
while ((F->e_1798 != NULL)) {
F->l_1799 = NULL;
F->l_1799 = (*(P917)rt_nil_check(F->e_1798)).labels;
while ((F->l_1799 != NULL)) {
F->x_1800 = NULL;
F->x_1800 = g_gotos_991;
while (((F->x_1800 != NULL) && (rt_r_ichk((*(P942)rt_nil_check(F->x_1800)).depth) == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P910)rt_nil_check((*(P942)rt_nil_check(F->x_1800)).match))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->l_1799)).name))->all))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->l_1799)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P910)rt_nil_check((*(P917)rt_nil_check(F->l_1799)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_1800 = (*(P942)rt_nil_check(F->x_1800)).next;
}
{ R943 *cell1801 = rt_alloc(sizeof(R943));
(*cell1801).match = NULL;
(*cell1801).label = NULL;
(*cell1801).next = NULL;
F->x_1800 = cell1801;
}
(*(P942)rt_nil_check(F->x_1800)).match = (*(P917)rt_nil_check(F->l_1799)).name;
(*(P942)rt_nil_check(F->x_1800)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P942)rt_nil_check(F->x_1800)).depth = rt_neg(((rt_int)1LL));
(*(P942)rt_nil_check(F->x_1800)).next = g_gotos_991;
g_gotos_991 = F->x_1800;
F->l_1799 = (*(P917)rt_nil_check(F->l_1799)).next;
}
F->e_1798 = (*(P917)rt_nil_check(F->e_1798)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_500(void) {
  struct f_start_labels_500fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1802 = NULL;
F->x_1802 = g_gotos_991;
while (((F->x_1802 != NULL) && (rt_r_ichk((*(P942)rt_nil_check(F->x_1802)).depth) == rt_neg(((rt_int)1LL))))) {
(*(P942)rt_nil_check(F->x_1802)).depth = rt_r_ichk(g_frames_992);
F->x_1802 = (*(P942)rt_nil_check(F->x_1802)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P942 f_goto_label_502(rstr *name_501) {
  struct f_goto_label_502fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_501 = name_501;
F->x_1803 = NULL;
F->x_1803 = g_gotos_991;
while ((F->x_1803 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P942)rt_nil_check(F->x_1803)).match))->all), (*F->name_501))) {
F->result_ = F->x_1803;
goto ret_;
}
F->x_1803 = (*(P942)rt_nil_check(F->x_1803)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_504(P917 e_503) {
  struct f_has_return_504fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_503 = e_503;
F->x_1804 = NULL;
F->x_1804 = F->e_503;
while ((F->x_1804 != NULL)) {
if ((rt_r_ichk((*(P917)rt_nil_check(F->x_1804)).kind) == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if ((((((rt_r_ichk((*(P917)rt_nil_check(F->x_1804)).kind) != (((rt_int)45LL))) && (rt_r_ichk((*(P917)rt_nil_check(F->x_1804)).kind) != (((rt_int)46LL)))) && (rt_r_ichk((*(P917)rt_nil_check(F->x_1804)).kind) != (((rt_int)50LL)))) && (rt_r_ichk((*(P917)rt_nil_check(F->x_1804)).kind) != (((rt_int)47LL)))) && (rt_r_ichk((*(P917)rt_nil_check(F->x_1804)).kind) != (((rt_int)51LL))))) {
if ((((((*(P917)rt_nil_check(F->x_1804)).a != NULL) && f_has_return_504((*(P917)rt_nil_check(F->x_1804)).a)) || (((*(P917)rt_nil_check(F->x_1804)).b != NULL) && f_has_return_504((*(P917)rt_nil_check(F->x_1804)).b))) || (((*(P917)rt_nil_check(F->x_1804)).c != NULL) && f_has_return_504((*(P917)rt_nil_check(F->x_1804)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_1804 = (*(P917)rt_nil_check(F->x_1804)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_506(P917 elems_505) {
  struct f_capsule_body_506fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_505 = elems_505;
F->saved_ret_1805 = NULL;
F->saved_ret_1805 = g_cap_ret_983;
F->saved_flag_1806 = NULL;
F->saved_flag_1806 = g_cap_rflag_984;
F->saved_frames_1807 = RT_R_IUNDEF;
F->saved_frames_1807 = rt_r_ichk(g_ret_frames_985);
F->e_1808 = NULL;
F->e_1808 = F->elems_505;
if ((!f_has_return_504(F->elems_505))) {
g_cap_ret_983 = NULL;
g_cap_rflag_984 = NULL;
f_capsule_elements_497(F->elems_505);
} else {
g_cap_rflag_984 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_196(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(g_cap_rflag_984))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_1808 != NULL)) {
F->stmt_1809 = RT_R_EUNDEF;
F->stmt_1809 = ((rt_r_ichk((*(P917)rt_nil_check(F->e_1808)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P917)rt_nil_check(F->e_1808)).kind) <= (((rt_int)36LL))));
g_cap_ret_983 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_985 = rt_r_ichk(g_frames_992);
if (rt_r_echk(F->stmt_1809)) {
f_start_labels_500();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P910)rt_nil_check(g_cap_rflag_984))->all)), rt_str(") {", 3)); b_; }));
}
f_element_468(F->e_1808);
if (rt_r_echk(F->stmt_1809)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(g_cap_ret_983))->all), rt_str(": ;", 3)); b_; }));
F->e_1808 = (*(P917)rt_nil_check(F->e_1808)).next;
}
}
g_cap_ret_983 = F->saved_ret_1805;
g_cap_rflag_984 = F->saved_flag_1806;
g_ret_frames_985 = rt_r_ichk(F->saved_frames_1807);
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_508(P917 elems_507) {
  struct f_body_elements_508fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_507 = elems_507;
f_capsule_elements_497(F->elems_507);
f_await_tasks_495(F->elems_507);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_510(P917 elems_509) {
  struct f_gen_body_510fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_509 = elems_509;
F->saved_1810 = NULL;
F->saved_1810 = g_fins_979;
F->saved_gotos_1811 = NULL;
F->saved_gotos_1811 = g_gotos_991;
f_open_scope_169();
f_declare_labels_499(F->elems_509);
f_declare_body_398(F->elems_509);
{
F->xu_1812 = rt_str_copy(f_open_unhandled_512(F->elems_509));
f_body_elements_508(F->elems_509);
f_close_fins_482(F->saved_1810);
f_close_unhandled_514(&F->xu_1812);
}
f_close_scope_170();
g_gotos_991 = F->saved_gotos_1811;
ret_:
  RT_FPOP();
  return;
}

static rstr f_open_unhandled_512(P917 elems_511) {
  struct f_open_unhandled_512fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_511 = elems_511;
F->e_1813 = NULL;
F->e_1813 = F->elems_511;
F->conds_1814 = NULL;
F->conds_1814 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->e_1813 != NULL)) {
if ((rt_r_ichk((*(P917)rt_nil_check(F->e_1813)).kind) == (((rt_int)49LL)))) {
F->conds_1814 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->conds_1814))->all), rt_str(" || rt_xcur == ", 15)), (((P910)rt_nil_check((*(P927)rt_nil_check(f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_1813)).name))->all)))).cname))->all)); b_; }));
}
F->e_1813 = (*(P917)rt_nil_check(F->e_1813)).next;
}
if ((((rt_int)(((((P910)rt_nil_check(F->conds_1814))->all)).len)) == ((rt_int)1LL))) {
F->result_ = rt_str("", 0);
goto ret_;
}
{
F->f_1815 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xu", 2); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1815), rt_str("; if (RT_TRY(", 13)), F->f_1815), rt_str(")) {", 4)); b_; }));
f_push_cleanup_518(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1815), rt_str(");", 2)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(F->f_1815, rt_str(":", 1)), (((P910)rt_nil_check(F->conds_1814))->all));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_close_unhandled_514(rstr *xu_513) {
  struct f_close_unhandled_514fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->xu_513 = xu_513;
F->i_1816 = RT_R_IUNDEF;
F->i_1816 = ((rt_int)1LL);
if (rt_str_eq((*F->xu_513), rt_str("", 0))) {
goto ret_;
}
while ((rt_r_echk(rt_str_get((*F->xu_513), rt_r_ichk(F->i_1816))) != 58)) {
F->i_1816 = rt_add(rt_r_ichk(F->i_1816), ((rt_int)1LL));
}
{
F->f_1817 = rt_str_copy(rt_str_slice((*F->xu_513), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1816), ((rt_int)1LL))));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1817), rt_str("); } else { RT_POP(", 19)), F->f_1817), rt_str("); if (", 7)), rt_str_slice((*F->xu_513), rt_add(rt_r_ichk(F->i_1816), ((rt_int)1LL)), ((rt_int)(((*F->xu_513)).len)))), rt_str(") rt_raise(rt_exc(", 18)), f_q_18()), rt_str("X_UNHANDLED", 11)), f_q_18()), rt_str(")); rt_raise(rt_xcur); }", 24)); b_; }));
f_pop_cleanup_519();
}
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_516(rt_int upto_515) {
  struct f_pop_frames_516fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_515 = upto_515;
F->i_1818 = RT_R_IUNDEF;
F->i_1818 = rt_r_ichk(g_frames_992);
F->c_1819 = NULL;
F->c_1819 = g_cleanups_994;
while ((rt_r_ichk(F->i_1818) > F->upto_515)) {
f_emit_29(&(((P910)rt_nil_check((*(P921)rt_nil_check(F->c_1819)).s))->all));
F->c_1819 = (*(P921)rt_nil_check(F->c_1819)).next;
F->i_1818 = rt_sub(rt_r_ichk(F->i_1818), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_518(rstr *s_517) {
  struct f_push_cleanup_518fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_517 = s_517;
F->c_1820 = NULL;
{ R922 *cell1821 = rt_alloc(sizeof(R922));
(*cell1821).s = NULL;
(*cell1821).next = NULL;
F->c_1820 = cell1821;
}
(*(P921)rt_nil_check(F->c_1820)).s = f_mk_3(&(*F->s_517));
(*(P921)rt_nil_check(F->c_1820)).next = g_cleanups_994;
g_cleanups_994 = F->c_1820;
g_frames_992 = rt_add(rt_r_ichk(g_frames_992), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_519(void) {
  struct f_pop_cleanup_519fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_994 = (*(P921)rt_nil_check(g_cleanups_994)).next;
g_frames_992 = rt_sub(rt_r_ichk(g_frames_992), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_521(P917 s_520) {
  struct f_gen_statement_521fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_520 = s_520;
F->label_1822 = NULL;
F->gl_1823 = NULL;
F->gl_1823 = (*(P917)rt_nil_check(F->s_520)).labels;
while ((F->gl_1823 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P942)rt_nil_check(f_goto_label_502(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->gl_1823)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_1823 = (*(P917)rt_nil_check(F->gl_1823)).next;
}
if (((*(P917)rt_nil_check(F->s_520)).tag != NULL)) {
F->x_1824 = NULL;
{ R943 *cell1825 = rt_alloc(sizeof(R943));
(*cell1825).match = NULL;
(*cell1825).label = NULL;
(*cell1825).next = NULL;
F->x_1824 = cell1825;
}
F->label_1822 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P942)rt_nil_check(F->x_1824)).match = (*(P917)rt_nil_check(F->s_520)).tag;
(*(P942)rt_nil_check(F->x_1824)).label = F->label_1822;
(*(P942)rt_nil_check(F->x_1824)).depth = rt_r_ichk(g_frames_992);
(*(P942)rt_nil_check(F->x_1824)).next = g_exits_990;
g_exits_990 = F->x_1824;
}
{ rt_int sel1826 = rt_r_ichk((*(P917)rt_nil_check(F->s_520)).kind);
if (0 || (sel1826 == (((rt_int)20LL)))) {
f_st_assign_523(F->s_520);
} else if (0 || (sel1826 == (((rt_int)21LL)))) {
f_st_call_525(F->s_520);
} else if (0 || (sel1826 == (((rt_int)22LL)))) {
f_st_if_527(F->s_520);
} else if (0 || (sel1826 == (((rt_int)23LL)))) {
f_st_case_531(F->s_520);
} else if (0 || (sel1826 == (((rt_int)24LL)))) {
f_st_repeat_539(F->s_520);
} else if (0 || (sel1826 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_510((*(P917)rt_nil_check(F->s_520)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel1826 == (((rt_int)27LL)))) {
f_st_exit_541(F->s_520);
} else if (0 || (sel1826 == (((rt_int)29LL)))) {
{
F->x_1827 = NULL;
F->x_1827 = f_goto_label_502(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->s_520)).name))->all));
if ((F->x_1827 == NULL)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_520)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->s_520)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_516(rt_r_ichk((*(P942)rt_nil_check(F->x_1827)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P910)rt_nil_check((*(P942)rt_nil_check(F->x_1827)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel1826 == (((rt_int)28LL)))) {
f_st_return_543(F->s_520);
} else if (0 || (sel1826 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_550(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->s_520)).name))->all), rt_r_ichk((*(P917)rt_nil_check(F->s_520)).line))), rt_str(");", 2)); b_; }));
} else if (0 || (sel1826 == (((rt_int)31LL)))) {
if ((g_handlers_993 == NULL)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_520)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P910)rt_nil_check((*(P921)rt_nil_check(g_handlers_993)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel1826 == (((rt_int)26LL)))) {
f_st_guard_552(F->s_520);
} else if (0 || (sel1826 == (((rt_int)32LL)))) {
f_st_alloc_554(F->s_520);
} else if (0 || (sel1826 == (((rt_int)34LL)))) {
f_st_create_558(F->s_520);
} else if (0 || (sel1826 == (((rt_int)35LL)))) {
f_st_wait_587(F->s_520);
} else if (0 || (sel1826 == (((rt_int)36LL)))) {
f_st_region_595(F->s_520);
} else {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_520)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P917)rt_nil_check(F->s_520)).tag != NULL)) {
g_exits_990 = (*(P942)rt_nil_check(g_exits_990)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->label_1822))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_523(P917 s_522) {
  struct f_st_assign_523fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_522 = s_522;
F->lv_1828 = NULL;
F->t_1829 = NULL;
F->vt_1830 = NULL;
F->c_1831 = NULL;
F->ro_1832 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->s_522)).a)).kind) == (((rt_int)10LL))) && ((*(P917)rt_nil_check((*(P917)rt_nil_check(F->s_522)).a)).b != NULL)) && (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->s_522)).a)).b)).kind) == (((rt_int)16LL))))) {
f_lvalue_674((*(P917)rt_nil_check((*(P917)rt_nil_check(F->s_522)).a)).a, &F->lv_1828, &F->t_1829, &F->c_1831, &F->ro_1832);
while ((rt_r_ichk((*(P923)rt_nil_check(F->t_1829)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_432(F->t_1829);
F->lv_1828 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_666(&(((P910)rt_nil_check(F->lv_1828))->all), F->t_1829); b_; }));
F->t_1829 = (*(P923)rt_nil_check(F->t_1829)).target;
}
if (((rt_r_ichk((*(P923)rt_nil_check(F->t_1829)).kind) == (((rt_int)15LL))) && ((*(P923)rt_nil_check(F->t_1829)).tparams == NULL))) {
F->t_1829 = (*(P923)rt_nil_check(F->t_1829)).under;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_1829)).kind) == (((rt_int)15LL)))) {
F->lv_1828 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->lv_1828))->all), rt_str(".all", 4)); b_; }));
F->t_1829 = (*(P923)rt_nil_check(F->t_1829)).under;
}
if ((((!rt_r_echk(F->ro_1832)) && (rt_r_ichk((*(P923)rt_nil_check(F->t_1829)).kind) == (((rt_int)6LL)))) && (rt_r_ichk((*(P923)rt_nil_check(F->t_1829)).ndim) == ((rt_int)1LL)))) {
F->lo_1833 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->s_522)).a)).b)).a, (*(P923)rt_nil_check(F->t_1829)).idx, &F->vt_1830));
F->hi_1834 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->s_522)).a)).b)).b, (*(P923)rt_nil_check(F->t_1829)).idx, &F->vt_1830));
F->v_1835 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->s_522)).b, F->t_1829, &F->vt_1830));
f_need_slice_686(F->t_1829);
f_check_type_224(F->vt_1830, F->t_1829, rt_r_ichk((*(P917)rt_nil_check(F->s_522)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_226(F->t_1829)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_226(F->t_1829)), rt_str("(", 1)), (((P910)rt_nil_check(F->lv_1828))->all)), rt_str(", ", 2)), F->lo_1833), rt_str(", ", 2)), F->hi_1834), rt_str("); as_", 6)), f_ctype_226(F->t_1829)), rt_str("(&sl_, ", 7)), F->v_1835), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((rt_r_echk(F->ro_1832) || (rt_r_ichk((*(P923)rt_nil_check(F->t_1829)).kind) != (((rt_int)5LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_522)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_1836 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->s_522)).a)).b)).a, g_ty_int_997, &F->vt_1830));
F->hi_1837 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->s_522)).a)).b)).b, g_ty_int_997, &F->vt_1830));
F->v_1838 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->s_522)).b, g_ty_string_1001, &F->vt_1830));
f_check_type_224(F->vt_1830, g_ty_string_1001, rt_r_ichk((*(P917)rt_nil_check(F->s_522)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P910)rt_nil_check(F->lv_1828))->all)), rt_str(", ", 2)), F->lo_1836), rt_str(", ", 2)), F->hi_1837), rt_str(", ", 2)), F->v_1838), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_674((*(P917)rt_nil_check(F->s_522)).a, &F->lv_1828, &F->t_1829, &F->c_1831, &F->ro_1832);
if (rt_r_echk(F->ro_1832)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_522)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_300(F->t_1829)) && (!f_exports_op_420((*(P923)rt_nil_check(F->t_1829)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_522)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_1829)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_1839 = rt_str_copy(f_gexpr_in_713((*(P917)rt_nil_check(F->s_522)).b, F->t_1829, F->c_1831, &F->vt_1830));
f_check_type_224(F->vt_1830, F->t_1829, rt_r_ichk((*(P917)rt_nil_check(F->s_522)).line));
f_ptr_subtype_check_452(F->t_1829, F->c_1831, (*(P917)rt_nil_check(F->s_522)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_379(&(((P910)rt_nil_check(F->lv_1828))->all), F->t_1829, &F->v_1839, F->c_1831); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_525(P917 s_524) {
  struct f_st_call_525fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_524 = s_524;
F->c_1840 = NULL;
F->c_1840 = (*(P917)rt_nil_check(F->s_524)).a;
F->t_1841 = NULL;
if (((rt_r_ichk((*(P917)rt_nil_check(F->c_1840)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P917)rt_nil_check(F->c_1840)).kind) == (((rt_int)12LL))))) {
F->x_1842 = NULL;
F->x_1842 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P917)rt_nil_check(F->c_1840)).line));
(*(P917)rt_nil_check(F->x_1842)).a = F->c_1840;
F->c_1840 = F->x_1842;
}
if ((rt_r_ichk((*(P917)rt_nil_check(F->c_1840)).kind) != (((rt_int)10LL)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_524)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_853(F->c_1840, 1, &F->t_1841), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_527(P917 s_526) {
  struct f_st_if_527fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_526 = s_526;
F->a_1843 = NULL;
F->a_1843 = (*(P917)rt_nil_check(F->s_526)).a;
F->first_1844 = RT_R_EUNDEF;
F->first_1844 = 1;
F->t_1845 = NULL;
F->taken_1846 = RT_R_EUNDEF;
F->taken_1846 = 0;
F->ok_1847 = RT_R_EUNDEF;
F->mv_1848 = NULL;
while (((F->a_1843 != NULL) && (!rt_r_echk(F->taken_1846)))) {
F->mv_1848 = f_meval_348((*(P917)rt_nil_check(F->a_1843)).a, &F->ok_1847);
if (((rt_r_echk(F->ok_1847) && (rt_r_ichk((*(P936)rt_nil_check(F->mv_1848)).kind) == (((rt_int)2LL)))) && (rt_r_ichk((*(P936)rt_nil_check(F->mv_1848)).i) == ((rt_int)0LL)))) {
F->a_1843 = (*(P917)rt_nil_check(F->a_1843)).next;
} else {
if ((rt_r_echk(F->ok_1847) && (rt_r_ichk((*(P936)rt_nil_check(F->mv_1848)).kind) == (((rt_int)2LL))))) {
F->taken_1846 = 1;
if (rt_r_echk(F->first_1844)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_1849 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->a_1843)).a, g_ty_bool_998, &F->t_1845));
f_check_type_224(F->t_1845, g_ty_bool_998, rt_r_ichk((*(P917)rt_nil_check(F->s_526)).line));
if (rt_r_echk(F->first_1844)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_1849), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_1849), rt_str(") {", 3)); b_; }));
}
}
F->first_1844 = 0;
f_gen_body_510((*(P917)rt_nil_check(F->a_1843)).b);
F->a_1843 = (*(P917)rt_nil_check(F->a_1843)).next;
}
}
if (((rt_r_ichk((*(P917)rt_nil_check(F->s_526)).flag) == ((rt_int)1LL)) && (!rt_r_echk(F->taken_1846)))) {
if (rt_r_echk(F->first_1844)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_1844 = 0;
f_gen_body_510((*(P917)rt_nil_check(F->s_526)).b);
}
if ((!rt_r_echk(F->first_1844))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_manifest_case_529(P917 s_528) {
  struct f_manifest_case_529fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_528 = s_528;
F->ok_1850 = RT_R_EUNDEF;
F->sv_1851 = NULL;
F->sv_1851 = f_meval_348((*(P917)rt_nil_check(F->s_528)).a, &F->ok_1850);
F->a_1852 = NULL;
F->a_1852 = (*(P917)rt_nil_check(F->s_528)).b;
if (((!rt_r_echk(F->ok_1850)) || (((rt_r_ichk((*(P936)rt_nil_check(F->sv_1851)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P936)rt_nil_check(F->sv_1851)).kind) != (((rt_int)2LL)))) && (rt_r_ichk((*(P936)rt_nil_check(F->sv_1851)).kind) != (((rt_int)4LL)))))) {
F->result_ = 0;
goto ret_;
}
while ((F->a_1852 != NULL)) {
F->lab_1853 = NULL;
F->lab_1853 = (*(P917)rt_nil_check(F->a_1852)).a;
while ((F->lab_1853 != NULL)) {
F->lo_1854 = NULL;
F->lo_1854 = f_meval_348((*(P917)rt_nil_check(F->lab_1853)).a, &F->ok_1850);
F->hi_1855 = NULL;
F->hi_1855 = F->lo_1854;
if (((!rt_r_echk(F->ok_1850)) || (rt_r_ichk((*(P936)rt_nil_check(F->lo_1854)).kind) != rt_r_ichk((*(P936)rt_nil_check(F->sv_1851)).kind)))) {
F->result_ = 0;
goto ret_;
}
if (((*(P917)rt_nil_check(F->lab_1853)).b != NULL)) {
F->hi_1855 = f_meval_348((*(P917)rt_nil_check(F->lab_1853)).b, &F->ok_1850);
if ((((!rt_r_echk(F->ok_1850)) || (rt_r_ichk((*(P936)rt_nil_check(F->hi_1855)).kind) != rt_r_ichk((*(P936)rt_nil_check(F->sv_1851)).kind))) || (rt_r_ichk((*(P936)rt_nil_check(F->sv_1851)).kind) == (((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
}
if ((((rt_r_ichk((*(P936)rt_nil_check(F->sv_1851)).kind) == (((rt_int)4LL))) && rt_str_eq((((P910)rt_nil_check((*(P936)rt_nil_check(F->sv_1851)).s))->all), (((P910)rt_nil_check((*(P936)rt_nil_check(F->lo_1854)).s))->all))) || (((rt_r_ichk((*(P936)rt_nil_check(F->sv_1851)).kind) != (((rt_int)4LL))) && (rt_r_ichk((*(P936)rt_nil_check(F->lo_1854)).i) <= rt_r_ichk((*(P936)rt_nil_check(F->sv_1851)).i))) && (rt_r_ichk((*(P936)rt_nil_check(F->sv_1851)).i) <= rt_r_ichk((*(P936)rt_nil_check(F->hi_1855)).i))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_510((*(P917)rt_nil_check(F->a_1852)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
F->result_ = 1;
goto ret_;
}
F->lab_1853 = (*(P917)rt_nil_check(F->lab_1853)).next;
}
F->a_1852 = (*(P917)rt_nil_check(F->a_1852)).next;
}
if ((rt_r_ichk((*(P917)rt_nil_check(F->s_528)).flag) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_510((*(P917)rt_nil_check(F->s_528)).c);
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

static void f_st_case_531(P917 s_530) {
  struct f_st_case_531fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_530 = s_530;
F->st_1856 = NULL;
F->vt_1857 = NULL;
F->first_1858 = RT_R_EUNDEF;
F->first_1858 = 1;
F->a_1859 = NULL;
F->a_1859 = (*(P917)rt_nil_check(F->s_530)).b;
if (f_manifest_case_529(F->s_530)) {
goto ret_;
}
f_st_case2_533(F->s_530);
ret_:
  RT_FPOP();
  return;
}

static void f_st_case2_533(P917 s_532) {
  struct f_st_case2_533fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_532 = s_532;
F->st_1860 = NULL;
F->vt_1861 = NULL;
F->first_1862 = RT_R_EUNDEF;
F->first_1862 = 1;
F->a_1863 = NULL;
F->a_1863 = (*(P917)rt_nil_check(F->s_532)).b;
F->sel_1864 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->s_532)).a, NULL, &F->st_1860));
F->tmp_1865 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_226(F->st_1860)), rt_str(" ", 1)), F->tmp_1865), rt_str(" = ", 3)), F->sel_1864), rt_str(";", 1)); b_; }));
while ((F->a_1863 != NULL)) {
F->lab_1866 = NULL;
F->lab_1866 = (*(P917)rt_nil_check(F->a_1863)).a;
F->conds_1867 = NULL;
F->conds_1867 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_1866 != NULL)) {
if (((*(P917)rt_nil_check(F->lab_1866)).b == NULL)) {
F->v_1868 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->lab_1866)).a, F->st_1860, &F->vt_1861));
f_check_type_224(F->vt_1861, F->st_1860, rt_r_ichk((*(P917)rt_nil_check(F->s_532)).line));
F->conds_1867 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->conds_1867))->all), rt_str(" || ", 4)), f_eq_code_386(F->st_1860, &F->tmp_1865, &F->v_1868)); b_; }));
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->st_1860)).kind) == (((rt_int)15LL))) && ((*(P923)rt_nil_check(F->st_1860)).ltp != NULL))) {
F->lo_1869 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->lab_1866)).a, F->st_1860, &F->vt_1861));
F->hi_1870 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->lab_1866)).b, F->st_1860, &F->vt_1861));
F->conds_1867 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->conds_1867))->all), rt_str(" || (!", 6)), f_user_call2_368((*(P923)rt_nil_check(F->st_1860)).ltp, &F->tmp_1865, 1, &F->lo_1869, 0)), rt_str(" && !", 5)), f_user_call2_368((*(P923)rt_nil_check(F->st_1860)).ltp, &F->hi_1870, 0, &F->tmp_1865, 1)), rt_str(")", 1)); b_; }));
} else {
F->lo_1871 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->lab_1866)).a, F->st_1860, &F->vt_1861));
F->hi_1872 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->lab_1866)).b, F->st_1860, &F->vt_1861));
F->conds_1867 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->conds_1867))->all), rt_str(" || (", 5)), F->tmp_1865), rt_str(" >= ", 4)), F->lo_1871), rt_str(" && ", 4)), F->tmp_1865), rt_str(" <= ", 4)), F->hi_1872), rt_str(")", 1)); b_; }));
}
F->lab_1866 = (*(P917)rt_nil_check(F->lab_1866)).next;
}
if (rt_r_echk(F->first_1862)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P910)rt_nil_check(F->conds_1867))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P910)rt_nil_check(F->conds_1867))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1862 = 0;
f_gen_body_510((*(P917)rt_nil_check(F->a_1863)).b);
F->a_1863 = (*(P917)rt_nil_check(F->a_1863)).next;
}
if (rt_r_echk(F->first_1862)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P917)rt_nil_check(F->s_532)).flag) == ((rt_int)1LL))) {
f_gen_body_510((*(P917)rt_nil_check(F->s_532)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_user_for_537(P917 s_534, P923 t_535, P919 c_536) {
  struct f_user_for_537fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_534 = s_534;
F->t_535 = t_535;
F->c_536 = c_536;
F->y_1873 = NULL;
F->y_1873 = f_new_sym_173((((rt_int)2LL)), (*(P917)rt_nil_check(F->s_534)).name);
F->saved_1874 = NULL;
F->saved_1874 = g_psub_974;
F->p_1875 = NULL;
F->p_1875 = (*(P923)rt_nil_check(F->t_535)).tparams;
F->iv_1876 = NULL;
F->iv_1876 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P917)rt_nil_check(F->s_534)).line));
F->st_1877 = NULL;
F->access_1878 = rt_str_copy(f_storage_473(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->s_534)).name))->all), F->t_535));
F->uv_1879 = NULL;
F->uv_1879 = f_mk_3(&F->access_1878);
if (((*(P923)rt_nil_check(F->t_535)).tparams != NULL)) {
F->uv_1879 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->access_1878, rt_str(".all", 4)); b_; }));
}
if ((((!f_scalar_kind_178(f_base_of_215((*(P923)rt_nil_check(F->t_535)).under))) || ((*(P923)rt_nil_check(F->t_535)).elemcons == NULL)) || ((*(P919)rt_nil_check((*(P923)rt_nil_check(F->t_535)).elemcons)).lo == NULL))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_534)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a FOR over ", 11), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_535)).name))->all)), rt_str(" needs an underlying subtype with a range", 41)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_init_storage_314(&F->access_1878, F->t_535, F->c_536);
while ((F->p_1875 != NULL)) {
F->l1_1880 = NULL;
F->l2_1881 = NULL;
{ R922 *cell1882 = rt_alloc(sizeof(R922));
(*cell1882).s = NULL;
(*cell1882).next = NULL;
F->l1_1880 = cell1882;
}
{ R922 *cell1883 = rt_alloc(sizeof(R922));
(*cell1883).s = NULL;
(*cell1883).next = NULL;
F->l2_1881 = cell1883;
}
(*(P921)rt_nil_check(F->l1_1880)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1875)).name))->all))), rt_str("@", 1)); b_; }));
(*(P921)rt_nil_check(F->l2_1881)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(F->access_1878, rt_str(".p_", 3)), f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_1875)).name))->all))); b_; }));
(*(P921)rt_nil_check(F->l1_1880)).next = F->l2_1881;
(*(P921)rt_nil_check(F->l2_1881)).next = g_psub_974;
g_psub_974 = F->l1_1880;
F->p_1875 = (*(P917)rt_nil_check(F->p_1875)).next;
}
{
F->lo_1884 = rt_str_copy(f_subst_306(&(((P910)rt_nil_check((*(P919)rt_nil_check((*(P923)rt_nil_check(F->t_535)).elemcons)).lo))->all)));
F->hi_1885 = rt_str_copy(f_subst_306(&(((P910)rt_nil_check((*(P919)rt_nil_check((*(P923)rt_nil_check(F->t_535)).elemcons)).hi))->all)));
g_psub_974 = F->saved_1874;
if ((rt_r_ichk((*(P917)rt_nil_check(F->s_534)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->uv_1879))->all), rt_str(" = ", 3)), F->hi_1885), rt_str("; if (", 6)), F->lo_1884), rt_str(" <= ", 4)), (((P910)rt_nil_check(F->uv_1879))->all)), rt_str(") for (;;) {", 12)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->uv_1879))->all), rt_str(" = ", 3)), F->lo_1884), rt_str("; if (", 6)), (((P910)rt_nil_check(F->uv_1879))->all)), rt_str(" <= ", 4)), F->hi_1885), rt_str(") for (;;) {", 12)); b_; }));
}
f_open_scope_169();
(*(P927)rt_nil_check(F->y_1873)).t = F->t_535;
(*(P927)rt_nil_check(F->y_1873)).c = F->c_536;
f_bind_476(F->y_1873, &F->access_1878);
(*(P927)rt_nil_check(F->y_1873)).ro_flag = 1;
f_define_160(F->y_1873, rt_r_ichk((*(P917)rt_nil_check(F->s_534)).line));
f_gen_body_510((*(P917)rt_nil_check(F->s_534)).b);
(*(P917)rt_nil_check(F->iv_1876)).name = (*(P917)rt_nil_check(F->s_534)).name;
if ((rt_r_ichk((*(P917)rt_nil_check(F->s_534)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P910)rt_nil_check(F->uv_1879))->all)), rt_str(" == ", 4)), F->lo_1884), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_379(&F->access_1878, F->t_535, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_853(f_call_node_591(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRED", 4); b_; }), F->iv_1876, rt_r_ichk((*(P917)rt_nil_check(F->s_534)).line)), 0, &F->st_1877); b_; }), F->c_536); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P910)rt_nil_check(F->uv_1879))->all)), rt_str(" == ", 4)), F->hi_1885), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_379(&F->access_1878, F->t_535, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_853(f_call_node_591(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUCC", 4); b_; }), F->iv_1876, rt_r_ichk((*(P917)rt_nil_check(F->s_534)).line)), 0, &F->st_1877); b_; }), F->c_536); b_; }));
}
f_close_scope_170();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} }", 3); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_539(P917 s_538) {
  struct f_st_repeat_539fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_538 = s_538;
F->t_1886 = NULL;
F->c_1887 = NULL;
if ((rt_r_ichk((*(P917)rt_nil_check(F->s_538)).flag) == ((rt_int)0LL))) {
F->cond_1888 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->s_538)).a, g_ty_bool_998, &F->t_1886));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_1888), rt_str(") {", 3)); b_; }));
f_gen_body_510((*(P917)rt_nil_check(F->s_538)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_1886 = f_resolve_subtype_260((*(P917)rt_nil_check(F->s_538)).a, &F->c_1887);
if (((rt_r_ichk((*(P923)rt_nil_check(F->t_1886)).kind) == (((rt_int)15LL))) && (((*(P923)rt_nil_check(F->t_1886)).tparams != NULL) || (!f_scalar_kind_178(f_base_of_215(F->t_1886)))))) {
f_user_for_537(F->s_538, F->t_1886, F->c_1887);
goto ret_;
}
F->c_1887 = f_base_cons_218(F->t_1886, F->c_1887);
if ((((*(P923)rt_nil_check(f_base_of_215(F->t_1886))).kind == (((rt_int)4LL))) && ((*(P919)rt_nil_check(F->c_1887)).lo == NULL))) {
F->c_1887 = f_new_cons_176();
(*(P919)rt_nil_check(F->c_1887)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P919)rt_nil_check(F->c_1887)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P923)rt_nil_check(f_base_of_215(F->t_1886))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P919)rt_nil_check(F->c_1887)).lo == NULL)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_538)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_1889 = rt_str_copy(f_storage_473(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->s_538)).name))->all), F->t_1886));
F->lov_1890 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_1891 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_1892 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_1893 = NULL;
F->y_1893 = f_new_sym_173((((rt_int)2LL)), (*(P917)rt_nil_check(F->s_538)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_1890), rt_str(" = ", 3)), f_clo_185(F->c_1887)), rt_str(", ", 2)), F->hiv_1891), rt_str(" = ", 3)), f_chi_187(F->c_1887)), rt_str(";", 1)); b_; }));
if ((rt_r_ichk((*(P917)rt_nil_check(F->s_538)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1892), rt_str(" = ", 3)), F->hiv_1891), rt_str("; ", 2)), F->it_1892), rt_str(" >= ", 4)), F->lov_1890), rt_str("; ", 2)), F->it_1892), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_1892), rt_str(" = ", 3)), F->lov_1890), rt_str("; ", 2)), F->it_1892), rt_str(" <= ", 4)), F->hiv_1891), rt_str("; ", 2)), F->it_1892), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1889, rt_str(" = ", 3)), F->it_1892), rt_str(";", 1)); b_; }));
f_open_scope_169();
(*(P927)rt_nil_check(F->y_1893)).t = F->t_1886;
(*(P927)rt_nil_check(F->y_1893)).c = F->c_1887;
f_bind_476(F->y_1893, &F->access_1889);
(*(P927)rt_nil_check(F->y_1893)).ro_flag = 1;
f_define_160(F->y_1893, rt_r_ichk((*(P917)rt_nil_check(F->s_538)).line));
f_gen_body_510((*(P917)rt_nil_check(F->s_538)).b);
f_close_scope_170();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_541(P917 s_540) {
  struct f_st_exit_541fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_540 = s_540;
F->x_1894 = NULL;
F->x_1894 = g_exits_990;
while ((F->x_1894 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P942)rt_nil_check(F->x_1894)).match))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->s_540)).name))->all))) {
f_pop_frames_516(rt_r_ichk((*(P942)rt_nil_check(F->x_1894)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P910)rt_nil_check((*(P942)rt_nil_check(F->x_1894)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_1894 = (*(P942)rt_nil_check(F->x_1894)).next;
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_540)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P910)rt_nil_check((*(P917)rt_nil_check(F->s_540)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_543(P917 s_542) {
  struct f_st_return_543fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_542 = s_542;
F->vt_1895 = NULL;
if ((g_cap_ret_983 != NULL)) {
if (((*(P917)rt_nil_check(F->s_542)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_542)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_516(rt_r_ichk(g_ret_frames_985));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(g_cap_rflag_984))->all), rt_str(" = 1; goto ", 11)), (((P910)rt_nil_check(g_cap_ret_983))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!rt_r_echk(g_in_func_969))) {
f_pop_frames_516(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check((*(P927)rt_nil_check(g_func_sym_981)).result)).kind) == (((rt_int)9LL)))) {
if (((*(P917)rt_nil_check(F->s_542)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_542)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_516(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P917)rt_nil_check(F->s_542)).a == NULL)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_542)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_1896 = rt_str_copy(f_gexpr_in_713((*(P917)rt_nil_check(F->s_542)).a, (*(P927)rt_nil_check(g_func_sym_981)).result, g_func_rc_982, &F->vt_1895));
f_check_type_224(F->vt_1895, (*(P927)rt_nil_check(g_func_sym_981)).result, rt_r_ichk((*(P917)rt_nil_check(F->s_542)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_547((*(P927)rt_nil_check(g_func_sym_981)).result, g_func_rc_982, &F->v_1896)), rt_str(";", 1)); b_; }));
f_pop_frames_516(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_547(P923 t_544, P919 c_545, rstr *v_546) {
  struct f_result_checked_547fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_544 = t_544;
F->c_545 = c_545;
F->v_546 = v_546;
if ((F->c_545 == NULL)) {
F->result_ = (*F->v_546);
goto ret_;
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->t_544)).kind) == (((rt_int)5LL))) && ((*(P919)rt_nil_check(F->c_545)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_546)), rt_str(", ", 2)), (((P910)rt_nil_check((*(P919)rt_nil_check(F->c_545)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->t_544)).kind) == (((rt_int)6LL))) && ((*(P919)rt_nil_check(F->c_545)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->t_544)), rt_str(" r_ = ", 6)), (*F->v_546)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P910)rt_nil_check((*(P919)rt_nil_check(F->c_545)).lo))->all)), rt_str(", ", 2)), (((P910)rt_nil_check((*(P919)rt_nil_check(F->c_545)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_205(F->t_544, F->c_545, &(*F->v_546));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_550(rstr *name_548, rt_int line_549) {
  struct f_exc_id_550fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_548 = name_548;
F->line_549 = line_549;
F->y_1897 = NULL;
F->y_1897 = f_lookup_155(&(*F->name_548));
if (((F->y_1897 != NULL) && (rt_r_ichk((*(P927)rt_nil_check(F->y_1897)).kind) == (((rt_int)7LL))))) {
F->result_ = (((P910)rt_nil_check((*(P927)rt_nil_check(F->y_1897)).cname))->all);
goto ret_;
}
if (((((rt_int)(((*F->name_548)).len)) > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_548), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_548)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_549, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_548), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_552(P917 s_551) {
  struct f_st_guard_552fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_551 = s_551;
F->h_1898 = NULL;
F->h_1898 = (*(P917)rt_nil_check(F->s_551)).b;
F->first_1899 = RT_R_EUNDEF;
F->first_1899 = 1;
F->hv_1900 = NULL;
{
F->f_1901 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_1902 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_518(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1901), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_1901), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_1901), rt_str(")) {", 4)); b_; }));
f_gen_body_510((*(P917)rt_nil_check(F->s_551)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1901), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_519();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1901), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_1902), rt_str(" = rt_xcur;", 11)); b_; }));
{ R922 *cell1903 = rt_alloc(sizeof(R922));
(*cell1903).s = NULL;
(*cell1903).next = NULL;
F->hv_1900 = cell1903;
}
(*(P921)rt_nil_check(F->hv_1900)).s = f_mk_3(&F->x_1902);
(*(P921)rt_nil_check(F->hv_1900)).next = g_handlers_993;
g_handlers_993 = F->hv_1900;
{
F->h1_1904 = NULL;
F->h1_1904 = (*(P917)rt_nil_check(F->s_551)).b;
F->seen_1905 = NULL;
while ((F->h1_1904 != NULL)) {
F->n1_1906 = NULL;
F->n1_1906 = (*(P917)rt_nil_check(F->h1_1904)).a;
while ((F->n1_1906 != NULL)) {
if (f_seen_name_393(F->seen_1905, &(((P910)rt_nil_check((*(P917)rt_nil_check(F->n1_1906)).name))->all))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->n1_1906)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->n1_1906)).name))->all), rt_str(" has two handlers in one guard statement", 40)); b_; }));
}
F->seen_1905 = f_add_line_803(F->seen_1905, &(((P910)rt_nil_check((*(P917)rt_nil_check(F->n1_1906)).name))->all));
F->n1_1906 = (*(P917)rt_nil_check(F->n1_1906)).next;
}
F->h1_1904 = (*(P917)rt_nil_check(F->h1_1904)).next;
}
}
while ((F->h_1898 != NULL)) {
F->n_1907 = NULL;
F->n_1907 = (*(P917)rt_nil_check(F->h_1898)).a;
F->conds_1908 = NULL;
F->conds_1908 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_1907 != NULL)) {
F->conds_1908 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->conds_1908))->all), rt_str(" || ", 4)), F->x_1902), rt_str(" == ", 4)), f_exc_id_550(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->n_1907)).name))->all), rt_r_ichk((*(P917)rt_nil_check(F->s_551)).line))); b_; }));
F->n_1907 = (*(P917)rt_nil_check(F->n_1907)).next;
}
if (rt_r_echk(F->first_1899)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P910)rt_nil_check(F->conds_1908))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P910)rt_nil_check(F->conds_1908))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1899 = 0;
f_gen_body_510((*(P917)rt_nil_check(F->h_1898)).b);
F->h_1898 = (*(P917)rt_nil_check(F->h_1898)).next;
}
if (rt_r_echk(F->first_1899)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P917)rt_nil_check(F->s_551)).flag) == ((rt_int)1LL))) {
f_gen_body_510((*(P917)rt_nil_check(F->s_551)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_1902), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_993 = (*(P921)rt_nil_check(g_handlers_993)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_554(P917 s_553) {
  struct f_st_alloc_554fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_553 = s_553;
F->lv_1909 = NULL;
F->t_1910 = NULL;
F->target_1911 = NULL;
F->vt_1912 = NULL;
F->c_1913 = NULL;
F->tc_1914 = NULL;
F->ro_1915 = RT_R_EUNDEF;
F->d_1916 = NULL;
F->p_1917 = NULL;
F->a_1918 = NULL;
f_lvalue_674((*(P917)rt_nil_check(F->s_553)).a, &F->lv_1909, &F->t_1910, &F->c_1913, &F->ro_1915);
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_1910)).kind) != (((rt_int)8LL)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_553)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_432(F->t_1910);
F->d_1916 = (*(P923)rt_nil_check(F->t_1910)).decl;
F->target_1911 = (*(P923)rt_nil_check(F->t_1910)).target;
if ((f_list_len_67((*(P917)rt_nil_check(F->s_553)).b) != f_list_len_67((*(P917)rt_nil_check(F->d_1916)).b))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_553)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_67((*(P917)rt_nil_check(F->d_1916)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P917)rt_nil_check(F->d_1916)).b != NULL)) {
f_alloc_cell_444(F->s_553, &(((P910)rt_nil_check(F->lv_1909))->all), F->t_1910, F->c_1913);
goto ret_;
}
{
F->tcn_1919 = rt_str_copy(f_ctype_226(F->target_1911));
F->cell_1920 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_319(F->target_1911)) {
F->fn_1921 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_978 = 1;
g_uses_findyn_980 = 1;
f_put_27(g_out_protos_962, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1921), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1921), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_969)) {
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P910)rt_nil_check((*(P927)rt_nil_check(g_func_sym_981)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_322(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_1919), rt_str(" *)cell_)", 9)); b_; }), F->target_1911)); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_969)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1919), rt_str(" *", 2)), F->cell_1920), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1919), rt_str("), ", 3)), F->fn_1921), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_1919), rt_str(" *", 2)), F->cell_1920), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_1919), rt_str("), ", 3)), F->fn_1921), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_1919), rt_str(" *", 2)), F->cell_1920), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_1919), rt_str("));", 3)); b_; }));
}
f_open_scope_169();
f_bind_ptr_params_439((*(P917)rt_nil_check(F->d_1916)).d, f_ptr_args_434(F->c_1913), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P917)rt_nil_check(F->s_553)).line));
F->vt_1912 = f_resolve_subtype_260((*(P917)rt_nil_check(F->d_1916)).a, &F->tc_1914);
f_init_storage_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1920), rt_str(")", 1)); b_; }), F->target_1911, F->tc_1914);
f_close_scope_170();
if (((*(P917)rt_nil_check(F->s_553)).c != NULL)) {
F->v_1922 = rt_str_copy(f_gexpr_in_713((*(P917)rt_nil_check(F->s_553)).c, F->target_1911, F->tc_1914, &F->vt_1912));
f_check_type_224(F->vt_1912, F->target_1911, rt_r_ichk((*(P917)rt_nil_check(F->s_553)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_379(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_1920), rt_str(")", 1)); b_; }), F->target_1911, &F->v_1922, F->tc_1914); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->lv_1909))->all), rt_str(" = ", 3)), F->cell_1920), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_556(P917 e_555) {
  struct f_act_ref_556fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_555 = e_555;
F->lv_1923 = NULL;
F->t_1924 = NULL;
F->c_1925 = NULL;
F->ro_1926 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P917)rt_nil_check(F->e_555)).kind) == (((rt_int)7LL))) && rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_555)).name))->all), rt_str("ME", 2))) && (f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_668(F->e_555))) {
F->v_1927 = rt_str_copy(f_gexpr_705(F->e_555, g_ty_act_1007, &F->t_1924));
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_1924)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_555)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_1927;
goto ret_;
}
f_lvalue_674(F->e_555, &F->lv_1923, &F->t_1924, &F->c_1925, &F->ro_1926);
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_1924)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_555)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P910)rt_nil_check(F->lv_1923))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_558(P917 s_557) {
  struct f_st_create_558fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_557 = s_557;
F->y_1928 = NULL;
F->y_1928 = f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->s_557)).name))->all));
F->pm_1929 = NULL;
F->a_1930 = NULL;
F->a_1930 = (*(P917)rt_nil_check(F->s_557)).b;
F->lv_1931 = NULL;
F->lt_1932 = NULL;
F->vt_1933 = NULL;
F->lc_1934 = NULL;
F->ro_1935 = RT_R_EUNDEF;
if (((F->y_1928 != NULL) && (rt_r_ichk((*(P927)rt_nil_check(F->y_1928)).kind) == (((rt_int)10LL))))) {
F->y_1928 = f_instantiate_650(F->y_1928, (*(P917)rt_nil_check(F->s_557)).e, (*(P917)rt_nil_check(F->s_557)).b, rt_r_ichk((*(P917)rt_nil_check(F->s_557)).line));
}
if (((F->y_1928 == NULL) || (rt_r_ichk((*(P927)rt_nil_check(F->y_1928)).kind) != (((rt_int)9LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_557)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->s_557)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_1929 = (*(P927)rt_nil_check(F->y_1928)).params;
{
F->at_1936 = NULL;
F->ac_1937 = NULL;
F->aro_1938 = RT_R_EUNDEF;
F->act_1939 = NULL;
F->nf_1940 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_674((*(P917)rt_nil_check(F->s_557)).a, &F->lv_1931, &F->at_1936, &F->ac_1937, &F->aro_1938);
if ((rt_r_ichk((*(P923)rt_nil_check(F->at_1936)).kind) == (((rt_int)14LL)))) {
F->act_1939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_556((*(P917)rt_nil_check(F->s_557)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P910)rt_nil_check((*(P927)rt_nil_check(F->y_1928)).cname))->all)), rt_str("fr *", 4)), F->nf_1940), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_1940), rt_str(");", 2)); b_; }));
if ((rt_r_ichk((*(P927)rt_nil_check(F->y_1928)).level) > ((rt_int)0LL))) {
F->link_1941 = NULL;
F->link_1941 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1943 = ((rt_int)1LL), hi1944 = rt_sub(rt_r_ichk(g_cur_level_970), rt_r_ichk((*(P927)rt_nil_check(F->y_1928)).level));
for (rt_int it1945 = lo1943; it1945 <= hi1944; it1945++) {
F->i_1942 = it1945;
F->link_1941 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->link_1941))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1940, rt_str("->up = ", 7)), (((P910)rt_nil_check(F->link_1941))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_1930 != NULL) && (F->pm_1929 != NULL))) {
if ((rt_r_ichk((*(P929)rt_nil_check(F->pm_1929)).mode) == (((rt_int)1LL)))) {
F->v_1946 = rt_str_copy(f_gexpr_in_713(F->a_1930, (*(P929)rt_nil_check(F->pm_1929)).t, (*(P929)rt_nil_check(F->pm_1929)).c, &F->vt_1933));
f_check_type_224(F->vt_1933, (*(P929)rt_nil_check(F->pm_1929)).t, rt_r_ichk((*(P917)rt_nil_check(F->s_557)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1940, rt_str("->", 2)), (((P910)rt_nil_check((*(P929)rt_nil_check(F->pm_1929)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_382((*(P929)rt_nil_check(F->pm_1929)).t, &F->v_1946)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_674(F->a_1930, &F->lv_1931, &F->lt_1932, &F->lc_1934, &F->ro_1935);
f_check_type_224(F->lt_1932, (*(P929)rt_nil_check(F->pm_1929)).t, rt_r_ichk((*(P917)rt_nil_check(F->s_557)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1940, rt_str("->", 2)), (((P910)rt_nil_check((*(P929)rt_nil_check(F->pm_1929)).cfield))->all)), rt_str(" = &", 4)), (((P910)rt_nil_check(F->lv_1931))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_178((*(P929)rt_nil_check(F->pm_1929)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_1940, rt_str("->", 2)), (((P910)rt_nil_check((*(P929)rt_nil_check(F->pm_1929)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_190(F->lt_1932, F->lc_1934)), rt_str("; ", 2)), F->nf_1940), rt_str("->", 2)), (((P910)rt_nil_check((*(P929)rt_nil_check(F->pm_1929)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_193(F->lt_1932, F->lc_1934)), rt_str(";", 1)); b_; }));
}
}
F->a_1930 = (*(P917)rt_nil_check(F->a_1930)).next;
F->pm_1929 = (*(P929)rt_nil_check(F->pm_1929)).next;
}
if (((F->a_1930 != NULL) || (F->pm_1929 != NULL))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->s_557)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P910)rt_nil_check((*(P917)rt_nil_check(F->s_557)).name))->all)); b_; }));
}
if ((F->act_1939 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P910)rt_nil_check(F->act_1939))->all)), rt_str(", &", 3)), (((P910)rt_nil_check((*(P927)rt_nil_check(F->y_1928)).cname))->all)), rt_str("decl, ", 6)), (((P910)rt_nil_check((*(P927)rt_nil_check(F->y_1928)).cname))->all)), rt_str(", ", 2)), F->nf_1940), rt_str("); }", 4)); b_; }));
} else {
f_user_create_568(F->s_557, F->y_1928, &(((P910)rt_nil_check(F->lv_1931))->all), F->at_1936, &F->nf_1940);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_562(rstr *name_559, P923 t_560, rstr *place_561) {
  struct f_hidden_var_562fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_559 = name_559;
F->t_560 = t_560;
F->place_561 = place_561;
F->y_1947 = NULL;
F->y_1947 = f_new_sym_173((((rt_int)1LL)), f_mk_3(&(*F->name_559)));
(*(P927)rt_nil_check(F->y_1947)).t = F->t_560;
(*(P927)rt_nil_check(F->y_1947)).level = ((rt_int)0LL);
(*(P927)rt_nil_check(F->y_1947)).access = f_mk_3(&(*F->place_561));
f_define_160(F->y_1947, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_568(P917 s_563, P927 y_564, rstr *uv_565, P923 ut_566, rstr *nf_567) {
  struct f_user_create_568fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_563 = s_563;
F->y_564 = y_564;
F->uv_565 = uv_565;
F->ut_566 = ut_566;
F->nf_567 = nf_567;
F->t_1948 = NULL;
F->saved_1949 = NULL;
F->saved_1949 = g_code_967;
F->hook_1950 = NULL;
F->hook_1950 = f_new_buffer_24();
F->un_1951 = NULL;
F->un_1951 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P917)rt_nil_check(F->s_563)).line));
F->hn_1952 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_1953 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_1954 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_1955 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_169();
f_hidden_var_562(&F->uname_1954, F->ut_566, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_226(F->ut_566)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P917)rt_nil_check(F->un_1951)).name = f_mk_3(&F->uname_1954);
g_code_967 = F->hook_1950;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_853(f_call_node_591(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_1951, rt_r_ichk((*(P917)rt_nil_check(F->s_563)).line)), 1, &F->t_1948)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_853(f_call_node_591(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_1951, rt_r_ichk((*(P917)rt_nil_check(F->s_563)).line)), 1, &F->t_1948)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_853(f_call_node_591(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_1951, rt_r_ichk((*(P917)rt_nil_check(F->s_563)).line)), 1, &F->t_1948)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_853(f_call_node_591(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_1951, rt_r_ichk((*(P917)rt_nil_check(F->s_563)).line)), 1, &F->t_1948)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_967 = F->saved_1949;
f_put_27(g_out_protos_962, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1952), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_1952), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (rt_r_echk(g_in_func_969)) {
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P910)rt_nil_check((*(P927)rt_nil_check(g_func_sym_981)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_964, F->hook_1950);
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_1953), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_1953, rt_str("->hook = ", 9)), F->hn_1952), rt_str("; ", 2)), F->aa_1953), rt_str("->ua = &", 8)), (*F->uv_565)), rt_str("; ", 2)), F->aa_1953), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_843(F->ut_566)), f_q_18()), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_969)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_1953, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_1953), rt_str(", &", 3)), (((P910)rt_nil_check((*(P927)rt_nil_check(F->y_564)).cname))->all)), rt_str("decl, ", 6)), (((P910)rt_nil_check((*(P927)rt_nil_check(F->y_564)).cname))->all)), rt_str(", ", 2)), (*F->nf_567)), rt_str(");", 2)); b_; }));
f_hidden_var_562(&F->aname_1955, g_ty_act_1007, &F->aa_1953);
{
F->start_1956 = NULL;
F->start_1956 = f_call_node_591(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P917)rt_nil_check(F->s_563)).a, rt_r_ichk((*(P917)rt_nil_check(F->s_563)).line));
F->an_1957 = NULL;
F->an_1957 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P917)rt_nil_check(F->s_563)).line));
(*(P917)rt_nil_check(F->an_1957)).name = f_mk_3(&F->aname_1955);
(*(P917)rt_nil_check((*(P917)rt_nil_check(F->start_1956)).b)).next = F->an_1957;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_853(F->start_1956, 1, &F->t_1948), rt_str(";", 1)); b_; }));
}
f_close_scope_170();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_573(P917 inv_569, rstr *arr_570, rt_int i_571, int mixed_572) {
  struct f_wait_alt_573fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_569 = inv_569;
F->arr_570 = arr_570;
F->i_571 = i_571;
F->mixed_572 = mixed_572;
F->lv_1958 = NULL;
F->t_1959 = NULL;
F->vt_1960 = NULL;
F->c_1961 = NULL;
F->ro_1962 = RT_R_EUNDEF;
F->fn_1963 = NULL;
F->args_1964 = NULL;
F->slot_1965 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_570), rt_str("[", 1)), f_itos_7(F->i_571)), rt_str("]", 1)));
if (((rt_r_ichk((*(P917)rt_nil_check(F->inv_569)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->inv_569)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->inv_569)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_1963 = (*(P917)rt_nil_check(F->inv_569)).a;
F->args_1964 = (*(P917)rt_nil_check(F->inv_569)).b;
if ((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_1963)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_1963)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_674(F->args_1964, &F->lv_1958, &F->t_1959, &F->c_1961, &F->ro_1962);
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_1959)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->inv_569)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_1963)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_1966 = NULL;
F->dt_1967 = NULL;
f_lvalue_674((*(P917)rt_nil_check(F->args_1964)).next, &F->dv_1966, &F->dt_1967, &F->c_1961, &F->ro_1962);
f_check_type_224(F->dt_1967, (*(P923)rt_nil_check(F->t_1959)).elem, rt_r_ichk((*(P917)rt_nil_check(F->inv_569)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1965, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P910)rt_nil_check(F->lv_1958))->all)), rt_str(", &", 3)), (((P910)rt_nil_check(F->dv_1966))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_1968 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_1969 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->args_1964)).next, (*(P923)rt_nil_check(F->t_1959)).elem, &F->vt_1960));
f_check_type_224(F->vt_1960, (*(P923)rt_nil_check(F->t_1959)).elem, rt_r_ichk((*(P917)rt_nil_check(F->inv_569)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_226((*(P923)rt_nil_check(F->t_1959)).elem), rt_str(" ", 1)), F->tmp_1968), rt_str(" = ", 3)), F->v_1969), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1965, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P910)rt_nil_check(F->lv_1958))->all)), rt_str(", &", 3)), F->tmp_1968), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_1963)).name))->all), rt_str("DELAY_UNTIL", 11)) && (f_list_len_67(F->args_1964) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1965, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_r_act_deadline(", 65)), f_act_delay_args_869(F->args_1964)), rt_str(")};", 3));
goto ret_;
} else if ((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_1963)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_1963)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_1970 = rt_str_copy(f_gexpr_705(F->args_1964, g_ty_int_997, &F->vt_1960));
if ((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_1963)).name))->all), rt_str("DELAY", 5)) && F->mixed_572)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1965, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_1970), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_1963)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1965, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_1970), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1965, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_1970), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_1963)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_1965, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_556(F->args_1964)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->inv_569)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_1963)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_575(P917 inv_574) {
  struct f_builtin_wait_575fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_574 = inv_574;
F->lv_1971 = NULL;
F->t_1972 = NULL;
F->c_1973 = NULL;
F->ro_1974 = RT_R_EUNDEF;
F->saved_1975 = NULL;
F->saved_1975 = g_code_967;
F->ok_1976 = RT_R_EUNDEF;
F->ok_1976 = 0;
if (((rt_r_ichk((*(P917)rt_nil_check(F->inv_574)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->inv_574)).a)).kind) != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->inv_574)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->inv_574)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->inv_574)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->inv_574)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->inv_574)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_995 = rt_add(rt_r_ichk(g_trial_995), ((rt_int)1LL));
g_code_967 = f_new_buffer_24();
{ rt_frame xf1977;
if (RT_TRY(xf1977)) {
f_lvalue_674((*(P917)rt_nil_check(F->inv_574)).b, &F->lv_1971, &F->t_1972, &F->c_1973, &F->ro_1974);
F->ok_1976 = (rt_r_ichk((*(P923)rt_nil_check(F->t_1972)).kind) == (((rt_int)12LL)));
RT_POP(xf1977);
} else {
RT_POP(xf1977);
int x1978 = rt_xcur;
if (0 || x1978 == ex_compile_error_1) {
F->ok_1976 = 0;
} else {
rt_raise(x1978);
}
}
}
g_trial_995 = rt_sub(rt_r_ichk(g_trial_995), ((rt_int)1LL));
g_code_967 = F->saved_1975;
F->result_ = rt_r_echk(F->ok_1976);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_580(P917 inv_576, rstr *op_577, rstr *q_578, int is_stmt_579) {
  struct f_wait_op_580fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_576 = inv_576;
F->op_577 = op_577;
F->q_578 = q_578;
F->is_stmt_579 = is_stmt_579;
F->x_1979 = NULL;
F->x_1979 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P917)rt_nil_check(F->inv_576)).line));
F->f_1980 = NULL;
F->f_1980 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P917)rt_nil_check(F->inv_576)).line));
F->qn_1981 = NULL;
F->qn_1981 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P917)rt_nil_check(F->inv_576)).line));
F->t_1982 = NULL;
(*(P917)rt_nil_check(F->f_1980)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->inv_576)).a)).name))->all), rt_str("_", 1)), (*F->op_577)); b_; }));
(*(P917)rt_nil_check(F->qn_1981)).name = f_mk_3(&(*F->q_578));
(*(P917)rt_nil_check(F->qn_1981)).next = (*(P917)rt_nil_check(F->inv_576)).b;
(*(P917)rt_nil_check(F->x_1979)).a = F->f_1980;
(*(P917)rt_nil_check(F->x_1979)).b = F->qn_1981;
{
F->r_1983 = rt_str_copy(f_gcall_853(F->x_1979, F->is_stmt_579, &F->t_1982));
if ((!F->is_stmt_579)) {
f_check_type_224(F->t_1982, g_ty_bool_998, rt_r_ichk((*(P917)rt_nil_check(F->inv_576)).line));
}
F->result_ = F->r_1983;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_585(P917 s_581, rstr *arr_582, rstr *w_583, rt_int n_584) {
  struct f_user_wait_585fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_581 = s_581;
F->arr_582 = arr_582;
F->w_583 = w_583;
F->n_584 = n_584;
F->a_1984 = NULL;
F->a_1984 = (*(P917)rt_nil_check(F->s_581)).a;
F->i_1985 = RT_R_IUNDEF;
F->i_1985 = ((rt_int)0LL);
F->tests_1986 = NULL;
F->tests_1986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_1987 = NULL;
F->revokes_1987 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_169();
while ((F->a_1984 != NULL)) {
F->inv_1988 = NULL;
F->inv_1988 = (*(P917)rt_nil_check(F->a_1984)).a;
while ((F->inv_1988 != NULL)) {
if (f_builtin_wait_575(F->inv_1988)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_573(F->inv_1988, &(*F->arr_582), rt_r_ichk(F->i_1985), 1); b_; }));
} else {
F->st_1989 = NULL;
F->st_1989 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P917)rt_nil_check(F->inv_1988)).line));
F->c_1990 = NULL;
F->qt_1991 = NULL;
F->qname_1992 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_1993 = NULL;
F->y_1993 = f_new_sym_173((((rt_int)1LL)), f_mk_3(&F->qname_1992));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_582), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->i_1985))), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P917)rt_nil_check(F->st_1989)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->inv_1988)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_1991 = f_resolve_subtype_260(F->st_1989, &F->c_1990);
{
F->access_1994 = rt_str_copy(f_storage_473(&F->qname_1992, F->qt_1991));
f_init_storage_314(&F->access_1994, F->qt_1991, F->c_1990);
(*(P927)rt_nil_check(F->y_1993)).t = F->qt_1991;
(*(P927)rt_nil_check(F->y_1993)).c = F->c_1990;
f_bind_476(F->y_1993, &F->access_1994);
f_define_160(F->y_1993, rt_r_ichk((*(P917)rt_nil_check(F->inv_1988)).line));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_580(F->inv_1988, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_1992, 1), rt_str(";", 1)); b_; }));
F->tests_1986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->tests_1986))->all), rt_str("if (", 4)), f_wait_op_580(F->inv_1988, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_1992, 0)), rt_str(") { ", 4)), f_wait_op_580(F->inv_1988, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_1992, 1)), rt_str("; ", 2)), (*F->w_583)), rt_str(" = ", 3)), f_itos_7(rt_r_ichk(F->i_1985))), rt_str("; break; } ", 11)); b_; }));
F->revokes_1987 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->revokes_1987))->all), f_wait_op_580(F->inv_1988, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_1992, 1)), rt_str("; ", 2)); b_; }));
}
F->i_1985 = rt_add(rt_r_ichk(F->i_1985), ((rt_int)1LL));
F->inv_1988 = (*(P917)rt_nil_check(F->inv_1988)).next;
}
F->a_1984 = (*(P917)rt_nil_check(F->a_1984)).next;
}
f_close_scope_170();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_583)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P910)rt_nil_check(F->tests_1986))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_583), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_584)), rt_str(", ", 2)), (*F->arr_582)), rt_str("); if (", 7)), (*F->w_583)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_584)), rt_str(", ", 2)), (*F->arr_582)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_583)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_583)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P910)rt_nil_check(F->revokes_1987))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_587(P917 s_586) {
  struct f_st_wait_587fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_586 = s_586;
F->a_1995 = NULL;
F->a_1995 = (*(P917)rt_nil_check(F->s_586)).a;
F->n_1996 = RT_R_IUNDEF;
F->n_1996 = ((rt_int)0LL);
F->first_1997 = RT_R_EUNDEF;
F->first_1997 = 1;
F->inits_1998 = NULL;
F->inits_1998 = f_new_buffer_24();
F->user_1999 = RT_R_EUNDEF;
F->user_1999 = 0;
F->arr_2000 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_2001 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_1995 != NULL)) {
F->inv_2002 = NULL;
F->inv_2002 = (*(P917)rt_nil_check(F->a_1995)).a;
F->n_1996 = rt_add(rt_r_ichk(F->n_1996), f_list_len_67((*(P917)rt_nil_check(F->a_1995)).a));
while ((F->inv_2002 != NULL)) {
if ((!f_builtin_wait_575(F->inv_2002))) {
F->user_1999 = 1;
}
F->inv_2002 = (*(P917)rt_nil_check(F->inv_2002)).next;
}
F->a_1995 = (*(P917)rt_nil_check(F->a_1995)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_2000), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->n_1996))), rt_str("];", 2)); b_; }));
if (rt_r_echk(F->user_1999)) {
f_user_wait_585(F->s_586, &F->arr_2000, &F->w_2001, rt_r_ichk(F->n_1996));
} else {
F->a_1995 = (*(P917)rt_nil_check(F->s_586)).a;
F->n_1996 = ((rt_int)0LL);
while ((F->a_1995 != NULL)) {
F->inv_2003 = NULL;
F->inv_2003 = (*(P917)rt_nil_check(F->a_1995)).a;
while ((F->inv_2003 != NULL)) {
f_put_27(F->inits_1998, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_573(F->inv_2003, &F->arr_2000, rt_r_ichk(F->n_1996), 0); b_; }));
F->n_1996 = rt_add(rt_r_ichk(F->n_1996), ((rt_int)1LL));
F->inv_2003 = (*(P917)rt_nil_check(F->inv_2003)).next;
}
F->a_1995 = (*(P917)rt_nil_check(F->a_1995)).next;
}
f_splice_34(g_code_967, F->inits_1998);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_2001), rt_str(" = rt_wait(", 11)), f_itos_7(rt_r_ichk(F->n_1996))), rt_str(", ", 2)), F->arr_2000), rt_str(");", 2)); b_; }));
}
F->a_1995 = (*(P917)rt_nil_check(F->s_586)).a;
F->n_1996 = ((rt_int)0LL);
while ((F->a_1995 != NULL)) {
F->conds_2004 = NULL;
F->conds_2004 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo2006 = ((rt_int)1LL), hi2007 = f_list_len_67((*(P917)rt_nil_check(F->a_1995)).a);
for (rt_int it2008 = lo2006; it2008 <= hi2007; it2008++) {
F->i_2005 = it2008;
F->conds_2004 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->conds_2004))->all), rt_str(" || ", 4)), F->w_2001), rt_str(" == ", 4)), f_itos_7(rt_r_ichk(F->n_1996))); b_; }));
F->n_1996 = rt_add(rt_r_ichk(F->n_1996), ((rt_int)1LL));
}
}
if (rt_r_echk(F->first_1997)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P910)rt_nil_check(F->conds_2004))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P910)rt_nil_check(F->conds_2004))->all)), rt_str(") {", 3)); b_; }));
}
F->first_1997 = 0;
f_gen_body_510((*(P917)rt_nil_check(F->a_1995)).b);
F->a_1995 = (*(P917)rt_nil_check(F->a_1995)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P917 f_call_node_591(rstr *name_588, P917 arg_589, rt_int line_590) {
  struct f_call_node_591fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_588 = name_588;
F->arg_589 = arg_589;
F->line_590 = line_590;
F->x_2009 = NULL;
F->x_2009 = f_nn_61((((rt_int)10LL)), F->line_590);
F->f_2010 = NULL;
F->f_2010 = f_nn_61((((rt_int)7LL)), F->line_590);
(*(P917)rt_nil_check(F->f_2010)).name = f_mk_3(&(*F->name_588));
(*(P917)rt_nil_check(F->x_2009)).a = F->f_2010;
(*(P917)rt_nil_check(F->x_2009)).b = f_copy_node_744(F->arg_589);
(*(P917)rt_nil_check((*(P917)rt_nil_check(F->x_2009)).b)).next = NULL;
F->result_ = F->x_2009;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_593(P917 s_592) {
  struct f_user_region_593fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_592 = s_592;
F->t_2011 = NULL;
F->f_2012 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_2013 = rt_str_copy(f_gcall_853(f_call_node_591(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P917)rt_nil_check(F->s_592)).a, rt_r_ichk((*(P917)rt_nil_check(F->s_592)).line)), 1, &F->t_2011));
F->unlock_2014 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_853(f_call_node_591(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P917)rt_nil_check(F->s_592)).a, rt_r_ichk((*(P917)rt_nil_check(F->s_592)).line)), 1, &F->t_2011)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_2013), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2012), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2012), rt_str(")) {", 4)); b_; }));
f_push_cleanup_518(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2012), rt_str("); ", 3)), F->unlock_2014); b_; }));
f_gen_body_510((*(P917)rt_nil_check(F->s_592)).b);
f_pop_cleanup_519();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2012), rt_str("); ", 3)), F->unlock_2014); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2012), rt_str("); ", 3)), F->unlock_2014), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_595(P917 s_594) {
  struct f_st_region_595fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_594 = s_594;
F->lv_2015 = NULL;
F->t_2016 = NULL;
F->c_2017 = NULL;
F->ro_2018 = RT_R_EUNDEF;
F->lk_2019 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_2020 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_674((*(P917)rt_nil_check(F->s_594)).a, &F->lv_2015, &F->t_2016, &F->c_2017, &F->ro_2018);
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_2016)).kind) != (((rt_int)13LL)))) {
f_user_region_593(F->s_594);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_2019), rt_str(" = &", 4)), (((P910)rt_nil_check(F->lv_2015))->all)), rt_str("; rt_region_enter(", 18)), F->lk_2019), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2020), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2020), rt_str(")) {", 4)); b_; }));
f_push_cleanup_518(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2020), rt_str("); rt_region_leave(", 19)), F->lk_2019), rt_str(");", 2)); b_; }));
f_gen_body_510((*(P917)rt_nil_check(F->s_594)).b);
f_pop_cleanup_519();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2020), rt_str("); rt_region_leave(", 19)), F->lk_2019), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2020), rt_str("); rt_region_leave(", 19)), F->lk_2019), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P917 f_gparam_598(P917 g_596, rstr *name_597) {
  struct f_gparam_598fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_596 = g_596;
F->name_597 = name_597;
F->p_2021 = NULL;
F->p_2021 = (*(P917)rt_nil_check(F->g_596)).a;
while ((F->p_2021 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2021)).name))->all), (*F->name_597))) {
F->result_ = F->p_2021;
goto ret_;
}
F->p_2021 = (*(P917)rt_nil_check(F->p_2021)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P927 f_bind_sym_600(P917 p_599) {
  struct f_bind_sym_600fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_599 = p_599;
F->y_2022 = NULL;
if ((rt_r_ichk((*(P917)rt_nil_check(F->p_599)).ival) <= ((rt_int)2LL))) {
F->y_2022 = f_new_sym_173((((rt_int)5LL)), (*(P917)rt_nil_check(F->p_599)).name);
} else {
F->y_2022 = f_new_sym_173((((rt_int)2LL)), (*(P917)rt_nil_check(F->p_599)).name);
}
F->result_ = F->y_2022;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_603(P927 a_601, P927 b_602) {
  struct f_same_binds_603fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_601 = a_601;
F->b_602 = b_602;
F->x_2023 = NULL;
F->x_2023 = F->a_601;
F->y_2024 = NULL;
F->y_2024 = F->b_602;
while (((F->x_2023 != NULL) && (F->y_2024 != NULL))) {
if (((!rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->x_2023)).name))->all), (((P910)rt_nil_check((*(P927)rt_nil_check(F->y_2024)).name))->all))) || (!f_same_binding_606(F->x_2023, F->y_2024)))) {
F->result_ = 0;
goto ret_;
}
F->x_2023 = (*(P927)rt_nil_check(F->x_2023)).mnext;
F->y_2024 = (*(P927)rt_nil_check(F->y_2024)).mnext;
}
F->result_ = ((F->x_2023 == NULL) && (F->y_2024 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_606(P927 a_604, P927 b_605) {
  struct f_same_binding_606fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_604 = a_604;
F->b_605 = b_605;
if ((rt_r_ichk((*(P927)rt_nil_check(F->a_604)).kind) == (((rt_int)5LL)))) {
F->result_ = ((rt_r_ichk((*(P927)rt_nil_check(F->b_605)).kind) == (((rt_int)5LL))) && f_same_213((*(P927)rt_nil_check(F->a_604)).t, (*(P927)rt_nil_check(F->b_605)).t));
goto ret_;
}
if (((rt_r_ichk((*(P927)rt_nil_check(F->a_604)).kind) == (((rt_int)2LL))) && rt_r_echk((*(P927)rt_nil_check(F->a_604)).hasmv))) {
F->result_ = (rt_r_echk((*(P927)rt_nil_check(F->b_605)).hasmv) && (rt_r_ichk((*(P927)rt_nil_check(F->a_604)).mvalue) == rt_r_ichk((*(P927)rt_nil_check(F->b_605)).mvalue)));
goto ret_;
}
if (((rt_r_ichk((*(P927)rt_nil_check(F->a_604)).kind) == (((rt_int)2LL))) && ((*(P927)rt_nil_check(F->a_604)).mv != NULL))) {
if (((((*(P927)rt_nil_check(F->b_605)).mv == NULL) || (rt_r_ichk((*(P936)rt_nil_check((*(P927)rt_nil_check(F->a_604)).mv)).kind) != rt_r_ichk((*(P936)rt_nil_check((*(P927)rt_nil_check(F->b_605)).mv)).kind))) || (!f_same_213((*(P927)rt_nil_check(F->a_604)).t, (*(P927)rt_nil_check(F->b_605)).t)))) {
F->result_ = 0;
goto ret_;
} else if ((rt_r_ichk((*(P936)rt_nil_check((*(P927)rt_nil_check(F->a_604)).mv)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_eq((((P910)rt_nil_check((*(P936)rt_nil_check((*(P927)rt_nil_check(F->a_604)).mv)).s))->all), (((P910)rt_nil_check((*(P936)rt_nil_check((*(P927)rt_nil_check(F->b_605)).mv)).s))->all));
goto ret_;
}
F->result_ = (rt_r_ichk((*(P936)rt_nil_check((*(P927)rt_nil_check(F->a_604)).mv)).i) == rt_r_ichk((*(P936)rt_nil_check((*(P927)rt_nil_check(F->b_605)).mv)).i));
goto ret_;
}
F->result_ = ((((*(P927)rt_nil_check(F->a_604)).cname != NULL) && ((*(P927)rt_nil_check(F->b_605)).cname != NULL)) && rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->a_604)).cname))->all), (((P910)rt_nil_check((*(P927)rt_nil_check(F->b_605)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P927 f_tt_binds_611(P917 gd_607, P917 formals_608, P917 actuals_609, rt_int line_610) {
  struct f_tt_binds_611fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_607 = gd_607;
F->formals_608 = formals_608;
F->actuals_609 = actuals_609;
F->line_610 = line_610;
F->f_2025 = NULL;
F->f_2025 = F->formals_608;
F->a_2026 = NULL;
F->a_2026 = F->actuals_609;
F->binds_2027 = NULL;
F->c_2028 = NULL;
F->at_2029 = NULL;
while (((F->f_2025 != NULL) && (F->a_2026 != NULL))) {
F->p_2030 = NULL;
F->p_2030 = f_gparam_598(F->gd_607, &(((P910)rt_nil_check((*(P917)rt_nil_check(F->f_2025)).name))->all));
F->b_2031 = NULL;
if ((F->p_2030 == NULL)) {
f_fail_23(F->line_610, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->f_2025)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_2031 = f_bind_sym_600(F->p_2030);
if ((rt_r_ichk((*(P917)rt_nil_check(F->p_2030)).ival) <= ((rt_int)2LL))) {
if ((rt_r_ichk((*(P917)rt_nil_check(F->a_2026)).kind) >= (((rt_int)70LL)))) {
(*(P927)rt_nil_check(F->b_2031)).t = f_resolve_subtype_260(F->a_2026, &F->c_2028);
} else {
F->st_2032 = NULL;
F->st_2032 = f_nn_61((((rt_int)80LL)), F->line_610);
(*(P917)rt_nil_check(F->st_2032)).name = (*(P917)rt_nil_check(F->a_2026)).name;
(*(P927)rt_nil_check(F->b_2031)).t = f_resolve_subtype_260(F->st_2032, &F->c_2028);
}
(*(P927)rt_nil_check(F->b_2031)).c = F->c_2028;
if ((((*(P917)rt_nil_check(F->p_2030)).b != NULL) && (!f_type_allowed_615((*(P927)rt_nil_check(F->b_2031)).t, (*(P917)rt_nil_check(F->p_2030)).b, F->binds_2027)))) {
f_fail_23(F->line_610, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2030)).name))->all)); b_; }));
}
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->p_2030)).ival) <= ((rt_int)5LL))) {
if ((rt_r_ichk((*(P917)rt_nil_check(F->a_2026)).kind) != (((rt_int)7LL)))) {
f_fail_23(F->line_610, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2030)).name))->all)); b_; }));
}
F->b_2031 = f_copy_sym_406(f_pick_operation_626(rt_r_ichk((*(P917)rt_nil_check(F->p_2030)).ival), &(((P910)rt_nil_check((*(P917)rt_nil_check(F->a_2026)).name))->all), (*(P917)rt_nil_check(F->p_2030)).b, (*(P917)rt_nil_check(F->p_2030)).a, F->binds_2027, F->line_610));
(*(P927)rt_nil_check(F->b_2031)).name = (*(P917)rt_nil_check(F->p_2030)).name;
} else if (((rt_r_ichk((*(P917)rt_nil_check(F->p_2030)).ival) == ((rt_int)7LL)) || (rt_r_ichk((*(P917)rt_nil_check(F->p_2030)).ival) == ((rt_int)8LL)))) {
F->ok_2033 = RT_R_EUNDEF;
(*(P927)rt_nil_check(F->b_2031)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_705(F->a_2026, NULL, &F->at_2029)), rt_str(")", 1)); b_; }));
(*(P927)rt_nil_check(F->b_2031)).t = F->at_2029;
if ((((rt_r_ichk((*(P917)rt_nil_check(F->p_2030)).ival) == ((rt_int)7LL)) && (rt_r_ichk((*(P923)rt_nil_check(F->at_2029)).kind) != (((rt_int)5LL)))) || ((rt_r_ichk((*(P917)rt_nil_check(F->p_2030)).ival) == ((rt_int)8LL)) && ((*(P923)rt_nil_check(f_base_of_215(F->at_2029))).kind != (((rt_int)4LL)))))) {
f_fail_23(F->line_610, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2030)).name))->all)), rt_str(" is not of the kind its constraint requires", 43)); b_; }));
}
(*(P927)rt_nil_check(F->b_2031)).mv = f_meval_348(F->a_2026, &F->ok_2033);
if ((!rt_r_echk(F->ok_2033))) {
f_fail_23(F->line_610, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2030)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
if ((rt_r_ichk((*(P936)rt_nil_check((*(P927)rt_nil_check(F->b_2031)).mv)).kind) == (((rt_int)4LL)))) {
(*(P936)rt_nil_check((*(P927)rt_nil_check(F->b_2031)).mv)).i = f_lit_index_257((*(P923)rt_nil_check(f_base_of_215(F->at_2029))).lits, &(((P910)rt_nil_check((*(P936)rt_nil_check((*(P927)rt_nil_check(F->b_2031)).mv)).s))->all));
}
} else {
F->ok_2034 = RT_R_EUNDEF;
(*(P927)rt_nil_check(F->b_2031)).t = f_resolve_subtype_260((*(P917)rt_nil_check(F->p_2030)).a, &F->c_2028);
(*(P927)rt_nil_check(F->b_2031)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_checked_205((*(P927)rt_nil_check(F->b_2031)).t, F->c_2028, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_705(F->a_2026, (*(P927)rt_nil_check(F->b_2031)).t, &F->at_2029); b_; }))), rt_str(")", 1)); b_; }));
f_check_type_224(F->at_2029, (*(P927)rt_nil_check(F->b_2031)).t, F->line_610);
(*(P927)rt_nil_check(F->b_2031)).mvalue = f_manifest_339(F->a_2026, &F->ok_2034);
(*(P927)rt_nil_check(F->b_2031)).hasmv = rt_r_echk(F->ok_2034);
(*(P927)rt_nil_check(F->b_2031)).mv = f_meval_348(F->a_2026, &F->ok_2034);
if ((!rt_r_echk(F->ok_2034))) {
f_fail_23(F->line_610, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2030)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
}
(*(P927)rt_nil_check(F->b_2031)).mnext = F->binds_2027;
F->binds_2027 = F->b_2031;
F->f_2025 = (*(P917)rt_nil_check(F->f_2025)).next;
F->a_2026 = (*(P917)rt_nil_check(F->a_2026)).next;
}
F->result_ = F->binds_2027;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_allowed_615(P923 t_612, P917 items_613, P927 binds_614) {
  struct f_type_allowed_615fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_612 = t_612;
F->items_613 = items_613;
F->binds_614 = binds_614;
F->it_2035 = NULL;
F->it_2035 = F->items_613;
F->b_2036 = NULL;
F->b_2036 = f_base_of_215(F->t_612);
while ((F->it_2035 != NULL)) {
if ((((rt_r_ichk((*(P917)rt_nil_check(F->it_2035)).kind) == (((rt_int)80LL))) && ((*(P917)rt_nil_check(F->it_2035)).b == NULL)) && (f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->it_2035)).name))->all)) == NULL))) {
F->w_2037 = rt_str_copy((((P910)rt_nil_check((*(P917)rt_nil_check(F->it_2035)).name))->all));
if (((((((((((rt_str_eq(F->w_2037, rt_str("INT", 3)) && (rt_r_ichk((*(P923)rt_nil_check(F->b_2036)).kind) == (((rt_int)1LL)))) || (rt_str_eq(F->w_2037, rt_str("FLOAT", 5)) && (rt_r_ichk((*(P923)rt_nil_check(F->b_2036)).kind) == (((rt_int)3LL))))) || (rt_str_eq(F->w_2037, rt_str("BOOL", 4)) && (rt_r_ichk((*(P923)rt_nil_check(F->b_2036)).kind) == (((rt_int)2LL))))) || (rt_str_eq(F->w_2037, rt_str("ENUM", 4)) && (rt_r_ichk((*(P923)rt_nil_check(F->b_2036)).kind) == (((rt_int)4LL))))) || (rt_str_eq(F->w_2037, rt_str("STRING", 6)) && (rt_r_ichk((*(P923)rt_nil_check(F->b_2036)).kind) == (((rt_int)5LL))))) || (rt_str_eq(F->w_2037, rt_str("ARRAY", 5)) && (rt_r_ichk((*(P923)rt_nil_check(F->b_2036)).kind) == (((rt_int)6LL))))) || (rt_str_eq(F->w_2037, rt_str("RECORD", 6)) && (rt_r_ichk((*(P923)rt_nil_check(F->b_2036)).kind) == (((rt_int)7LL))))) || (rt_str_eq(F->w_2037, rt_str("UNION", 5)) && (rt_r_ichk((*(P923)rt_nil_check(F->b_2036)).kind) == (((rt_int)17LL))))) || (rt_str_eq(F->w_2037, rt_str("SET", 3)) && (rt_r_ichk((*(P923)rt_nil_check(F->b_2036)).kind) == (((rt_int)16LL))))) || (rt_str_eq(F->w_2037, rt_str("ASCII", 5)) && f_same_213(F->t_612, g_ty_ascii_1000)))) {
F->result_ = 1;
goto ret_;
}
} else {
F->c_2038 = NULL;
if (f_same_213(f_resolve_in_binds_619(F->it_2035, F->binds_614, &F->c_2038), F->t_612)) {
F->result_ = 1;
goto ret_;
}
}
F->it_2035 = (*(P917)rt_nil_check(F->it_2035)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P923 f_resolve_in_binds_619(P917 st_616, P927 binds_617, P919 *c_618) {
  struct f_resolve_in_binds_619fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_616 = st_616;
F->binds_617 = binds_617;
F->c_618 = c_618;
F->c_618v = *F->c_618;
F->b_2039 = NULL;
F->b_2039 = F->binds_617;
F->t_2040 = NULL;
f_open_scope_169();
while ((F->b_2039 != NULL)) {
F->z_2041 = NULL;
F->z_2041 = f_copy_sym_406(F->b_2039);
f_define_160(F->z_2041, rt_r_ichk((*(P917)rt_nil_check(F->st_616)).line));
F->b_2039 = (*(P927)rt_nil_check(F->b_2039)).mnext;
}
F->t_2040 = f_resolve_subtype_260(F->st_616, &F->c_618v);
f_close_scope_170();
F->result_ = F->t_2040;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_618) = F->c_618v;
  RT_FPOP();
  return F->result_;
}

static P927 f_pick_operation_626(rt_int kind_620, rstr *name_621, P917 sig_622, P917 res_623, P927 binds_624, rt_int line_625) {
  struct f_pick_operation_626fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_620 = kind_620;
F->name_621 = name_621;
F->sig_622 = sig_622;
F->res_623 = res_623;
F->binds_624 = binds_624;
F->line_625 = line_625;
F->y_2042 = NULL;
F->c_2043 = NULL;
F->want_2044 = RT_R_IUNDEF;
F->want_2044 = (((rt_int)4LL));
if ((F->kind_620 == ((rt_int)4LL))) {
F->want_2044 = (((rt_int)3LL));
} else if ((F->kind_620 == ((rt_int)5LL))) {
F->want_2044 = (((rt_int)9LL));
}
{ rt_int lo2046 = ((rt_int)1LL), hi2047 = ((rt_int)3LL);
for (rt_int it2048 = lo2046; it2048 <= hi2047; it2048++) {
F->pass_2045 = it2048;
F->y_2042 = f_overload_chain_833(&(*F->name_621), F->pass_2045);
while ((F->y_2042 != NULL)) {
if (((rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_2042)).name))->all), (*F->name_621)) && ((rt_r_ichk((*(P927)rt_nil_check(F->y_2042)).kind) == rt_r_ichk(F->want_2044)) || ((F->kind_620 == ((rt_int)0LL)) && ((rt_r_ichk((*(P927)rt_nil_check(F->y_2042)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P927)rt_nil_check(F->y_2042)).kind) == (((rt_int)3LL))))))) && ((F->pass_2045 != ((rt_int)1LL)) || (rt_r_ichk((*(P927)rt_nil_check(F->y_2042)).depth) >= rt_r_ichk(g_gdepth_986))))) {
F->ok_2049 = RT_R_EUNDEF;
F->ok_2049 = 1;
if (((F->sig_622 != NULL) || (F->kind_620 == ((rt_int)0LL)))) {
F->s_2050 = NULL;
F->s_2050 = F->sig_622;
F->pm_2051 = NULL;
F->pm_2051 = (*(P927)rt_nil_check(F->y_2042)).params;
while (((rt_r_echk(F->ok_2049) && (F->s_2050 != NULL)) && (F->pm_2051 != NULL))) {
F->ok_2049 = f_same_213(f_resolve_in_binds_619(F->s_2050, F->binds_624, &F->c_2043), (*(P929)rt_nil_check(F->pm_2051)).t);
F->s_2050 = (*(P917)rt_nil_check(F->s_2050)).next;
F->pm_2051 = (*(P929)rt_nil_check(F->pm_2051)).next;
}
F->ok_2049 = ((rt_r_echk(F->ok_2049) && (F->s_2050 == NULL)) && (F->pm_2051 == NULL));
}
if ((rt_r_echk(F->ok_2049) && (F->res_623 != NULL))) {
F->ok_2049 = ((rt_r_ichk((*(P927)rt_nil_check(F->y_2042)).kind) == (((rt_int)3LL))) && f_same_213(f_resolve_in_binds_619(F->res_623, F->binds_624, &F->c_2043), (*(P927)rt_nil_check(F->y_2042)).result));
}
if (rt_r_echk(F->ok_2049)) {
F->result_ = F->y_2042;
goto ret_;
}
}
F->y_2042 = (*(P927)rt_nil_check(F->y_2042)).chain;
}
}
}
f_fail_23(F->line_625, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no ", 3), f_kind_word_628(F->kind_620)), (*F->name_621)), rt_str(" has the interface the generic requires", 39)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_word_628(rt_int kind_627) {
  struct f_kind_word_628fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_627 = kind_627;
if ((F->kind_627 == ((rt_int)3LL))) {
F->result_ = rt_str("procedure ", 10);
goto ret_;
} else if ((F->kind_627 == ((rt_int)4LL))) {
F->result_ = rt_str("function ", 9);
goto ret_;
} else if ((F->kind_627 == ((rt_int)5LL))) {
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

static P927 f_need_binds_632(P917 gd_629, P927 binds_630, rt_int line_631) {
  struct f_need_binds_632fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_629 = gd_629;
F->binds_630 = binds_630;
F->line_631 = line_631;
F->it_2052 = NULL;
F->it_2052 = (*(P917)rt_nil_check(F->gd_629)).d;
F->r_2053 = NULL;
F->r_2053 = F->binds_630;
while ((F->it_2052 != NULL)) {
F->found_2054 = RT_R_EUNDEF;
F->found_2054 = 0;
F->y_2055 = NULL;
F->y_2055 = ({ A933 b_ = (((P931)rt_nil_check(g_table_953))->all); b_.p[(rt_index(f_hash_153(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->it_2052)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while (((F->y_2055 != NULL) && (!rt_r_echk(F->found_2054)))) {
if ((rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_2055)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->it_2052)).name))->all)) && (((rt_r_ichk((*(P927)rt_nil_check(F->y_2055)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P927)rt_nil_check(F->y_2055)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P927)rt_nil_check(F->y_2055)).kind) == (((rt_int)9LL)))))) {
F->found_2054 = 1;
}
F->y_2055 = (*(P927)rt_nil_check(F->y_2055)).chain;
}
if (rt_r_echk(F->found_2054)) {
F->z_2056 = NULL;
F->z_2056 = f_copy_sym_406(f_pick_operation_626(rt_r_ichk((*(P917)rt_nil_check(F->it_2052)).ival), &(((P910)rt_nil_check((*(P917)rt_nil_check(F->it_2052)).name))->all), (*(P917)rt_nil_check(F->it_2052)).b, (*(P917)rt_nil_check(F->it_2052)).a, F->r_2053, F->line_631));
(*(P927)rt_nil_check(F->z_2056)).mnext = F->r_2053;
F->r_2053 = F->z_2056;
} else if ((!f_is_definable_130(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->it_2052)).name))->all)))) {
f_fail_23(F->line_631, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the generic needs ", 18), (((P910)rt_nil_check((*(P917)rt_nil_check(F->it_2052)).name))->all)), rt_str(", which is not known where it is invoked", 40)); b_; }));
}
F->it_2052 = (*(P917)rt_nil_check(F->it_2052)).next;
}
F->result_ = F->r_2053;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_634(P917 st_633) {
  struct f_generic_use_634fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_633 = st_633;
if ((rt_r_ichk((*(P917)rt_nil_check(F->st_633)).kind) == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P927)rt_nil_check(f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P917)rt_nil_check(F->st_633)).kind) == (((rt_int)80LL))) && ((*(P917)rt_nil_check(F->st_633)).a != NULL)) && (f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->st_633)).name))->all)) != NULL)) && ((*(P927)rt_nil_check(f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->st_633)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P927 f_infer_from_639(P917 gd_635, P917 pat_636, P923 t_637, P927 known_638) {
  struct f_infer_from_639fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_635 = gd_635;
F->pat_636 = pat_636;
F->t_637 = t_637;
F->known_638 = known_638;
F->binds_2057 = NULL;
F->binds_2057 = F->known_638;
F->e_2058 = NULL;
F->e_2058 = (*(P917)rt_nil_check(F->pat_636)).a;
F->tp_2059 = NULL;
if (((F->t_637 == NULL) || ((*(P923)rt_nil_check(F->t_637)).gen == NULL))) {
F->result_ = F->binds_2057;
goto ret_;
}
F->tp_2059 = (*(P917)rt_nil_check((*(P927)rt_nil_check((*(P923)rt_nil_check(F->t_637)).gen)).decl)).a;
if ((rt_r_ichk((*(P917)rt_nil_check(F->pat_636)).kind) == (((rt_int)78LL)))) {
F->e_2058 = f_copy_node_744((*(P917)rt_nil_check(F->pat_636)).a);
(*(P917)rt_nil_check(F->e_2058)).next = NULL;
}
while (((F->e_2058 != NULL) && (F->tp_2059 != NULL))) {
F->nm_2060 = NULL;
if (((rt_r_ichk((*(P917)rt_nil_check(F->e_2058)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P917)rt_nil_check(F->e_2058)).kind) == (((rt_int)80LL))))) {
F->nm_2060 = (*(P917)rt_nil_check(F->e_2058)).name;
}
if ((((F->nm_2060 != NULL) && (f_gparam_598(F->gd_635, &(((P910)rt_nil_check(F->nm_2060))->all)) != NULL)) && ((*(P917)rt_nil_check(f_gparam_598(F->gd_635, &(((P910)rt_nil_check(F->nm_2060))->all)))).ival <= ((rt_int)2LL)))) {
F->q_2061 = NULL;
F->q_2061 = F->binds_2057;
F->have_2062 = RT_R_EUNDEF;
F->have_2062 = 0;
while ((F->q_2061 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->q_2061)).name))->all), (((P910)rt_nil_check(F->nm_2060))->all))) {
F->have_2062 = 1;
}
F->q_2061 = (*(P927)rt_nil_check(F->q_2061)).mnext;
}
if ((!rt_r_echk(F->have_2062))) {
F->g_2063 = NULL;
F->g_2063 = (*(P923)rt_nil_check(F->t_637)).gbinds;
while ((F->g_2063 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->g_2063)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->tp_2059)).name))->all))) {
F->b_2064 = NULL;
F->b_2064 = f_bind_sym_600(f_gparam_598(F->gd_635, &(((P910)rt_nil_check(F->nm_2060))->all)));
(*(P927)rt_nil_check(F->b_2064)).t = (*(P927)rt_nil_check(F->g_2063)).t;
(*(P927)rt_nil_check(F->b_2064)).c = (*(P927)rt_nil_check(F->g_2063)).c;
(*(P927)rt_nil_check(F->b_2064)).mnext = F->binds_2057;
F->binds_2057 = F->b_2064;
}
F->g_2063 = (*(P927)rt_nil_check(F->g_2063)).mnext;
}
}
}
F->e_2058 = (*(P917)rt_nil_check(F->e_2058)).next;
F->tp_2059 = (*(P917)rt_nil_check(F->tp_2059)).next;
}
F->result_ = F->binds_2057;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P923 f_instantiate_type_645(P927 g_640, P917 tt_641, P917 args_642, P919 *c_643, rt_int line_644) {
  struct f_instantiate_type_645fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_640 = g_640;
F->tt_641 = tt_641;
F->args_642 = args_642;
F->c_643 = c_643;
F->c_643v = *F->c_643;
F->line_644 = line_644;
F->gd_2065 = NULL;
F->gd_2065 = (*(P927)rt_nil_check(F->g_640)).decl;
F->pat_2066 = NULL;
F->pat_2066 = (*(P917)rt_nil_check(F->gd_2065)).b;
F->binds_2067 = NULL;
F->binds_2067 = f_tt_binds_611(F->gd_2065, (*(P917)rt_nil_check(F->pat_2066)).e, F->tt_641, F->line_644);
F->inst_2068 = NULL;
F->inst_2068 = g_all_insts_955;
F->t_2069 = NULL;
F->saved_caps_2070 = NULL;
F->saved_caps_2070 = g_caps_972;
F->saved_env_2071 = NULL;
F->saved_env_2071 = g_genv_954;
F->saved_gdepth_2072 = RT_R_IUNDEF;
F->saved_gdepth_2072 = rt_r_ichk(g_gdepth_986);
F->c_643v = f_new_cons_176();
(*(P919)rt_nil_check(F->c_643v)).args = F->args_642;
while ((F->inst_2068 != NULL)) {
if ((((*(P927)rt_nil_check(F->inst_2068)).decl == F->pat_2066) && f_same_binds_603((*(P927)rt_nil_check(F->inst_2068)).members, F->binds_2067))) {
F->result_ = (*(P927)rt_nil_check(F->inst_2068)).t;
goto ret_;
}
F->inst_2068 = (*(P927)rt_nil_check(F->inst_2068)).insts;
}
f_open_scope_169();
{
F->b_2073 = NULL;
F->b_2073 = F->binds_2067;
while ((F->b_2073 != NULL)) {
f_define_160(F->b_2073, F->line_644);
F->b_2073 = (*(P927)rt_nil_check(F->b_2073)).mnext;
}
}
g_caps_972 = NULL;
g_genv_954 = (*(P927)rt_nil_check(F->g_640)).env;
g_gdepth_986 = rt_r_ichk(g_depth_956);
{
F->y_2074 = NULL;
F->y_2074 = f_new_sym_173((((rt_int)5LL)), (*(P917)rt_nil_check(F->pat_2066)).name);
F->yc_2075 = NULL;
(*(P927)rt_nil_check(F->y_2074)).decl = F->pat_2066;
if ((rt_r_ichk((*(P917)rt_nil_check(F->pat_2066)).kind) == (((rt_int)44LL)))) {
F->t_2069 = f_new_typ_175((((rt_int)8LL)));
(*(P923)rt_nil_check(F->t_2069)).name = (*(P917)rt_nil_check(F->pat_2066)).name;
(*(P923)rt_nil_check(F->t_2069)).decl = F->pat_2066;
(*(P927)rt_nil_check(F->y_2074)).t = F->t_2069;
f_define_160(F->y_2074, F->line_644);
f_finish_ptr_432(F->t_2069);
} else {
f_define_160(F->y_2074, F->line_644);
F->t_2069 = f_new_type_310(F->y_2074, f_nn_61((((rt_int)80LL)), F->line_644), &F->yc_2075);
}
}
g_caps_972 = F->saved_caps_2070;
g_genv_954 = F->saved_env_2071;
g_gdepth_986 = rt_r_ichk(F->saved_gdepth_2072);
(*(P923)rt_nil_check(F->t_2069)).gen = F->g_640;
(*(P923)rt_nil_check(F->t_2069)).gbinds = F->binds_2067;
f_close_scope_170();
{ R928 *cell2076 = rt_alloc(sizeof(R928));
(*cell2076).name = NULL;
(*cell2076).t = NULL;
(*cell2076).c = NULL;
(*cell2076).access = NULL;
(*cell2076).cname = NULL;
(*cell2076).st = NULL;
(*cell2076).decl = NULL;
(*cell2076).params = NULL;
(*cell2076).result = NULL;
(*cell2076).members = NULL;
(*cell2076).mnext = NULL;
(*cell2076).binds = NULL;
(*cell2076).insts = NULL;
(*cell2076).env = NULL;
(*cell2076).chain = NULL;
(*cell2076).stack = NULL;
(*cell2076).owner = NULL;
(*cell2076).gctx = NULL;
(*cell2076).mv = NULL;
(*cell2076).reqs = NULL;
(*cell2076).home = NULL;
(*cell2076).capn = NULL;
(*cell2076).tbinds = NULL;
F->inst_2068 = cell2076;
}
(*(P927)rt_nil_check(F->inst_2068)).kind = (((rt_int)5LL));
(*(P927)rt_nil_check(F->inst_2068)).name = (*(P927)rt_nil_check(F->g_640)).name;
(*(P927)rt_nil_check(F->inst_2068)).decl = F->pat_2066;
(*(P927)rt_nil_check(F->inst_2068)).t = F->t_2069;
(*(P927)rt_nil_check(F->inst_2068)).members = F->binds_2067;
(*(P927)rt_nil_check(F->inst_2068)).insts = g_all_insts_955;
g_all_insts_955 = F->inst_2068;
F->result_ = F->t_2069;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_643) = F->c_643v;
  RT_FPOP();
  return F->result_;
}

static P927 f_instantiate_650(P927 g_646, P917 tt_647, P917 args_648, rt_int line_649) {
  struct f_instantiate_650fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_646 = g_646;
F->tt_647 = tt_647;
F->args_648 = args_648;
F->line_649 = line_649;
F->gd_2077 = NULL;
F->gd_2077 = (*(P927)rt_nil_check(F->g_646)).decl;
F->pat_2078 = NULL;
F->pat_2078 = (*(P917)rt_nil_check(F->gd_2077)).b;
F->binds_2079 = NULL;
F->f_2080 = NULL;
F->f_2080 = (*(P917)rt_nil_check(F->pat_2078)).e;
F->a_2081 = NULL;
F->a_2081 = F->tt_647;
F->fp_2082 = NULL;
F->fp_2082 = (*(P917)rt_nil_check(F->pat_2078)).a;
F->inst_2083 = NULL;
F->at_2084 = NULL;
F->c_2085 = NULL;
F->saved_fctx_2086 = NULL;
F->saved_fctx_2086 = g_fctx_971;
F->saved_in_2087 = RT_R_EUNDEF;
F->saved_in_2087 = rt_r_echk(g_in_func_969);
F->saved_level_2088 = RT_R_IUNDEF;
F->saved_level_2088 = rt_r_ichk(g_cur_level_970);
F->saved_sym_2089 = NULL;
F->saved_sym_2089 = g_func_sym_981;
F->saved_code_2090 = NULL;
F->saved_code_2090 = g_code_967;
F->saved_env_2091 = NULL;
F->saved_env_2091 = g_genv_954;
F->saved_gdepth_2092 = RT_R_IUNDEF;
F->saved_gdepth_2092 = rt_r_ichk(g_gdepth_986);
F->binds_2079 = f_tt_binds_611(F->gd_2077, F->f_2080, F->a_2081, F->line_649);
F->a_2081 = F->args_648;
while (((F->fp_2082 != NULL) && (F->a_2081 != NULL))) {
if (f_generic_use_634((*(P917)rt_nil_check(F->fp_2082)).a)) {
F->v_2093 = rt_str_copy(f_gexpr_705(F->a_2081, NULL, &F->at_2084));
F->binds_2079 = f_infer_from_639(F->gd_2077, (*(P917)rt_nil_check(F->fp_2082)).a, F->at_2084, F->binds_2079);
} else if ((((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->fp_2082)).a)).kind) == (((rt_int)80LL))) && (f_gparam_598(F->gd_2077, &(((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->fp_2082)).a)).name))->all)) != NULL)) && ((*(P917)rt_nil_check(f_gparam_598(F->gd_2077, &(((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->fp_2082)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_2094 = RT_R_EUNDEF;
F->known_2094 = 0;
F->q_2095 = NULL;
F->q_2095 = F->binds_2079;
while ((F->q_2095 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->q_2095)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->fp_2082)).a)).name))->all))) {
F->known_2094 = 1;
}
F->q_2095 = (*(P927)rt_nil_check(F->q_2095)).mnext;
}
if ((!rt_r_echk(F->known_2094))) {
F->b_2096 = NULL;
F->b_2096 = f_bind_sym_600(f_gparam_598(F->gd_2077, &(((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->fp_2082)).a)).name))->all)));
F->v_2097 = rt_str_copy(f_gexpr_705(F->a_2081, NULL, &F->at_2084));
(*(P927)rt_nil_check(F->b_2096)).t = F->at_2084;
(*(P927)rt_nil_check(F->b_2096)).c = g_no_cons_1015;
if ((((*(P917)rt_nil_check(f_gparam_598(F->gd_2077, &(((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->fp_2082)).a)).name))->all)))).b != NULL) && (!f_type_allowed_615(F->at_2084, (*(P917)rt_nil_check(f_gparam_598(F->gd_2077, &(((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->fp_2082)).a)).name))->all)))).b, F->binds_2079)))) {
f_fail_23(F->line_649, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->fp_2082)).a)).name))->all)); b_; }));
}
(*(P927)rt_nil_check(F->b_2096)).mnext = F->binds_2079;
F->binds_2079 = F->b_2096;
}
}
F->fp_2082 = (*(P917)rt_nil_check(F->fp_2082)).next;
F->a_2081 = (*(P917)rt_nil_check(F->a_2081)).next;
}
F->binds_2079 = f_need_binds_632(F->gd_2077, F->binds_2079, F->line_649);
F->inst_2083 = g_all_insts_955;
while ((F->inst_2083 != NULL)) {
if ((((*(P927)rt_nil_check(F->inst_2083)).decl == F->pat_2078) && f_same_binds_603((*(P927)rt_nil_check(F->inst_2083)).members, F->binds_2079))) {
F->result_ = F->inst_2083;
goto ret_;
}
F->inst_2083 = (*(P927)rt_nil_check(F->inst_2083)).insts;
}
g_fctx_971 = (*(P927)rt_nil_check(F->g_646)).gctx;
g_in_func_969 = (rt_r_ichk((*(P927)rt_nil_check(F->g_646)).level) > ((rt_int)0LL));
g_cur_level_970 = rt_r_ichk((*(P927)rt_nil_check(F->g_646)).level);
g_func_sym_981 = (*(P927)rt_nil_check(F->g_646)).owner;
g_code_967 = f_new_buffer_24();
f_open_scope_169();
g_gdepth_986 = rt_r_ichk(g_depth_956);
{
F->b_2098 = NULL;
F->b_2098 = F->binds_2079;
while ((F->b_2098 != NULL)) {
f_define_160(F->b_2098, F->line_649);
F->b_2098 = (*(P927)rt_nil_check(F->b_2098)).mnext;
}
}
g_genv_954 = (*(P927)rt_nil_check(F->g_646)).env;
F->inst_2083 = f_build_subprogram_459(F->pat_2078);
(*(P927)rt_nil_check(F->inst_2083)).members = F->binds_2079;
(*(P927)rt_nil_check(F->inst_2083)).insts = g_all_insts_955;
g_all_insts_955 = F->inst_2083;
f_define_160(F->inst_2083, F->line_649);
f_gen_subprogram_489(F->pat_2078, F->inst_2083);
f_close_scope_170();
g_fctx_971 = F->saved_fctx_2086;
g_in_func_969 = rt_r_echk(F->saved_in_2087);
g_cur_level_970 = rt_r_ichk(F->saved_level_2088);
g_func_sym_981 = F->saved_sym_2089;
g_code_967 = F->saved_code_2090;
g_genv_954 = F->saved_env_2091;
g_gdepth_986 = rt_r_ichk(F->saved_gdepth_2092);
F->result_ = F->inst_2083;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_652(P927 y_651) {
  struct f_access_of_652fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_651 = y_651;
F->p_2099 = NULL;
F->p_2099 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if ((rt_r_ichk((*(P927)rt_nil_check(F->y_651)).level) <= ((rt_int)0LL))) {
F->result_ = (((P910)rt_nil_check((*(P927)rt_nil_check(F->y_651)).access))->all);
goto ret_;
}
{ rt_int lo2101 = ((rt_int)1LL), hi2102 = rt_sub(rt_r_ichk(g_cur_level_970), rt_r_ichk((*(P927)rt_nil_check(F->y_651)).level));
for (rt_int it2103 = lo2101; it2103 <= hi2102; it2103++) {
F->i_2100 = it2103;
F->p_2099 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->p_2099))->all), rt_str("->up", 4)); b_; }));
}
}
if (rt_r_echk((*(P927)rt_nil_check(F->y_651)).byref)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P910)rt_nil_check(F->p_2099))->all)), rt_str("->", 2)), (((P910)rt_nil_check((*(P927)rt_nil_check(F->y_651)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->p_2099))->all), rt_str("->", 2)), (((P910)rt_nil_check((*(P927)rt_nil_check(F->y_651)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_import_of_655(P917 l_653, rstr *name_654) {
  struct f_import_of_655fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_653 = l_653;
F->name_654 = name_654;
F->p_2104 = NULL;
F->p_2104 = F->l_653;
while ((F->p_2104 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2104)).name))->all), (*F->name_654))) {
F->result_ = F->p_2104;
goto ret_;
}
F->p_2104 = (*(P917)rt_nil_check(F->p_2104)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_658(P927 y_656, rt_int line_657) {
  struct f_check_import_658fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_656 = y_656;
F->line_657 = line_657;
F->c_2105 = NULL;
F->c_2105 = g_fctx_971;
F->ro_2106 = RT_R_EUNDEF;
F->ro_2106 = 0;
while (((F->c_2105 != NULL) && (rt_r_ichk((*(P927)rt_nil_check(F->y_656)).depth) < rt_r_ichk((*(P934)rt_nil_check(F->c_2105)).depth)))) {
if ((!rt_r_echk((*(P934)rt_nil_check(F->c_2105)).all_imp))) {
F->imp_2107 = NULL;
F->imp_2107 = f_import_of_655((*(P934)rt_nil_check(F->c_2105)).imps, &(((P910)rt_nil_check((*(P927)rt_nil_check(F->y_656)).name))->all));
if ((F->imp_2107 == NULL)) {
f_fail_23(F->line_657, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_656)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if ((rt_r_ichk((*(P917)rt_nil_check(F->imp_2107)).ival) == ((rt_int)1LL))) {
F->ro_2106 = 1;
}
}
F->c_2105 = (*(P934)rt_nil_check(F->c_2105)).next;
}
F->result_ = rt_r_echk(F->ro_2106);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_660(rstr *s_659) {
  struct f_c_ident_660fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_659 = s_659;
if (((((rt_int)(((*F->s_659)).len)) > ((rt_int)1LL)) && (rt_r_echk(rt_str_get((*F->s_659), ((rt_int)1LL))) == 46))) {
F->result_ = rt_str_cat(rt_str("dot_", 4), f_lower_s_15(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_659), ((rt_int)2LL), ((rt_int)(((*F->s_659)).len))); b_; })));
goto ret_;
} else if (((((rt_int)(((*F->s_659)).len)) > ((rt_int)1LL)) && (rt_r_echk(rt_str_get((*F->s_659), ((rt_int)1LL))) == 40))) {
F->r_2108 = NULL;
F->r_2108 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel_", 4); b_; }));
{ rt_int lo2110 = ((rt_int)2LL), hi2111 = rt_sub(((rt_int)(((*F->s_659)).len)), ((rt_int)1LL));
for (rt_int it2112 = lo2110; it2112 <= hi2111; it2112++) {
F->i_2109 = it2112;
if ((rt_r_echk(rt_str_get((*F->s_659), F->i_2109)) == 42)) {
F->r_2108 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_2108))->all), rt_str("s", 1)); b_; }));
} else if ((rt_r_echk(rt_str_get((*F->s_659), F->i_2109)) == 44)) {
F->r_2108 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_2108))->all), rt_str("_", 1)); b_; }));
} else if ((rt_r_echk(rt_str_get((*F->s_659), F->i_2109)) == 46)) {
F->r_2108 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_2108))->all), rt_str("r", 1)); b_; }));
}
}
}
F->result_ = (((P910)rt_nil_check(F->r_2108))->all);
goto ret_;
} else if (rt_str_eq((*F->s_659), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_659), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_659), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_659), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_659), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_659), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_659), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_659), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_659), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_659), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_659), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_659), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_659), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_659), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_659));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cell_deref_663(P923 t_661, rstr *p_662) {
  struct f_cell_deref_663fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_661 = t_661;
F->p_662 = p_662;
if ((((*(P923)rt_nil_check(F->t_661)).decl != NULL) && ((*(P917)rt_nil_check((*(P923)rt_nil_check(F->t_661)).decl)).b != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->p_662)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*F->p_662)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_666(rstr *base_664, P923 t_665) {
  struct f_deref_666fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_664 = base_664;
F->t_665 = t_665;
if ((((*(P923)rt_nil_check(F->t_665)).decl != NULL) && ((*(P917)rt_nil_check((*(P923)rt_nil_check(F->t_665)).decl)).b != NULL))) {
if (f_suppressed_466(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->base_664)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_226(F->t_665)), rt_str(")rt_nil_check(", 14)), (*F->base_664)), rt_str("))->all)", 8));
goto ret_;
}
if (f_suppressed_466(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_226(F->t_665)), rt_str(")(", 2)), (*F->base_664)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_226(F->t_665)), rt_str(")rt_nil_check(", 14)), (*F->base_664)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_668(P917 e_667) {
  struct f_is_lvalue_668fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_667 = e_667;
if ((rt_r_ichk((*(P917)rt_nil_check(F->e_667)).kind) == (((rt_int)7LL)))) {
F->y_2113 = NULL;
F->y_2113 = f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_667)).name))->all));
F->result_ = ((F->y_2113 != NULL) && ((rt_r_ichk((*(P927)rt_nil_check(F->y_2113)).kind) == (((rt_int)1LL))) || (((rt_r_ichk((*(P927)rt_nil_check(F->y_2113)).kind) == (((rt_int)2LL))) && ((*(P927)rt_nil_check(F->y_2113)).mv == NULL)) && (!rt_r_echk((*(P927)rt_nil_check(F->y_2113)).hasmv)))));
goto ret_;
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_667)).kind) == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_668((*(P917)rt_nil_check(F->e_667)).a);
goto ret_;
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_667)).kind) == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_667)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_668((*(P917)rt_nil_check(F->e_667)).a));
goto ret_;
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_667)).kind) == (((rt_int)10LL)))) {
if ((((*(P917)rt_nil_check(F->e_667)).b != NULL) && (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_667)).b)).kind) == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_668((*(P917)rt_nil_check(F->e_667)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_674(P917 e_669, P910 *code_670, P923 *t_671, P919 *c_672, int *ro_673) {
  struct f_lvalue_674fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_669 = e_669;
F->code_670 = code_670;
F->code_670v = *F->code_670;
F->t_671 = t_671;
F->t_671v = *F->t_671;
F->c_672 = c_672;
F->c_672v = *F->c_672;
F->ro_673 = ro_673;
F->ro_673v = *F->ro_673;
F->base_2114 = NULL;
F->bt_2115 = NULL;
F->bc_2116 = NULL;
if ((rt_r_ichk((*(P917)rt_nil_check(F->e_669)).kind) == (((rt_int)7LL)))) {
F->y_2117 = NULL;
F->y_2117 = f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_669)).name))->all));
if ((F->y_2117 == NULL)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_669)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_669)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P927)rt_nil_check(F->y_2117)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P927)rt_nil_check(F->y_2117)).kind) != (((rt_int)2LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_669)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_669)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_670v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_652(F->y_2117); b_; }));
F->t_671v = (*(P927)rt_nil_check(F->y_2117)).t;
F->c_672v = (*(P927)rt_nil_check(F->y_2117)).c;
F->ro_673v = rt_r_echk((*(P927)rt_nil_check(F->y_2117)).ro_flag);
if (((rt_r_ichk((*(P927)rt_nil_check(F->y_2117)).kind) == (((rt_int)1LL))) && f_check_import_658(F->y_2117, rt_r_ichk((*(P917)rt_nil_check(F->e_669)).line)))) {
F->ro_673v = 1;
}
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_669)).kind) == (((rt_int)17LL)))) {
f_lvalue_674((*(P917)rt_nil_check(F->e_669)).a, &F->code_670v, &F->t_671v, &F->c_672v, &F->ro_673v);
} else if (((((rt_r_ichk((*(P917)rt_nil_check(F->e_669)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_669)).a)).kind) == (((rt_int)7LL)))) && rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_669)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_670v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_841((*(P917)rt_nil_check(F->e_669)).b, rt_r_ichk((*(P917)rt_nil_check(F->e_669)).line), &F->t_671v); b_; }));
F->c_672v = g_no_cons_1015;
F->ro_673v = 0;
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_669)).kind) == (((rt_int)11LL)))) {
f_lvalue_674((*(P917)rt_nil_check(F->e_669)).a, &F->base_2114, &F->bt_2115, &F->bc_2116, &F->ro_673v);
f_select_on_682(&(((P910)rt_nil_check(F->base_2114))->all), F->bt_2115, F->e_669, &F->ro_673v, &F->code_670v, &F->t_671v, &F->c_672v);
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_669)).kind) == (((rt_int)10LL)))) {
f_lvalue_674((*(P917)rt_nil_check(F->e_669)).a, &F->base_2114, &F->bt_2115, &F->bc_2116, &F->ro_673v);
f_index_on_699(&(((P910)rt_nil_check(F->base_2114))->all), F->bt_2115, F->e_669, &F->ro_673v, 1, &F->code_670v, &F->t_671v, &F->c_672v);
} else {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_669)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_670) = F->code_670v;  (*F->t_671) = F->t_671v;  (*F->c_672) = F->c_672v;  if (!rt_r_undef_BOOL(F->ro_673v)) (*F->ro_673) = F->ro_673v;
  RT_FPOP();
  return;
}

static void f_select_on_682(rstr *base_675, P923 bt_676, P917 e_677, int *ro_678, P910 *code_679, P923 *t_680, P919 *c_681) {
  struct f_select_on_682fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_675 = base_675;
F->bt_676 = bt_676;
F->e_677 = e_677;
F->ro_678 = ro_678;
F->code_679 = code_679;
F->code_679v = *F->code_679;
F->t_680 = t_680;
F->t_680v = *F->t_680;
F->c_681 = c_681;
F->c_681v = *F->c_681;
F->c_681v = g_no_cons_1015;
if ((rt_r_ichk((*(P923)rt_nil_check(F->bt_676)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_432(F->bt_676);
(*F->ro_678) = 0;
if (((*(P923)rt_nil_check(F->bt_676)).decl != NULL)) {
F->p_2118 = NULL;
F->p_2118 = (*(P917)rt_nil_check((*(P923)rt_nil_check(F->bt_676)).decl)).b;
while ((F->p_2118 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2118)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_677)).name))->all))) {
F->pc_2119 = NULL;
F->code_679v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_226(F->bt_676)), rt_str(")rt_nil_check(", 14)), (*F->base_675)), rt_str("))->p_", 6)), f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2118)).name))->all))), rt_str(")", 1)); b_; }));
F->t_680v = f_resolve_subtype_260((*(P917)rt_nil_check(F->p_2118)).a, &F->pc_2119);
(*F->ro_678) = 1;
goto ret_;
}
F->p_2118 = (*(P917)rt_nil_check(F->p_2118)).next;
}
}
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_677)).name))->all), rt_str("ALL", 3))) {
F->code_679v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_666(&(*F->base_675), F->bt_676); b_; }));
F->t_680v = (*(P923)rt_nil_check(F->bt_676)).target;
goto ret_;
}
f_select_on_682(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_666(&(*F->base_675), F->bt_676); b_; }), (*(P923)rt_nil_check(F->bt_676)).target, F->e_677, &(*F->ro_678), &F->code_679v, &F->t_680v, &F->c_681v);
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->bt_676)).kind) == (((rt_int)15LL)))) {
F->p_2120 = NULL;
F->p_2120 = (*(P923)rt_nil_check(F->bt_676)).tparams;
while ((F->p_2120 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2120)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_677)).name))->all))) {
F->code_679v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_675), rt_str(".p_", 3)), f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2120)).name))->all))); b_; }));
F->t_680v = f_tparam_type_325(F->bt_676, &(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2120)).name))->all));
(*F->ro_678) = 1;
goto ret_;
}
F->p_2120 = (*(P917)rt_nil_check(F->p_2120)).next;
}
F->p_2120 = (*(P923)rt_nil_check(F->bt_676)).tparams;
if ((!f_opened_300(F->bt_676))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_677)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P910)rt_nil_check((*(P923)rt_nil_check(F->bt_676)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P923)rt_nil_check(F->bt_676)).tparams == NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_677)).name))->all), rt_str("ALL", 3))) {
F->code_679v = f_mk_3(&(*F->base_675));
F->t_680v = (*(P923)rt_nil_check(F->bt_676)).under;
goto ret_;
}
f_select_on_682(&(*F->base_675), (*(P923)rt_nil_check(F->bt_676)).under, F->e_677, &(*F->ro_678), &F->code_679v, &F->t_680v, &F->c_681v);
goto ret_;
}
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_677)).name))->all), rt_str("ALL", 3))) {
F->code_679v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_675), rt_str(".all", 4)); b_; }));
F->t_680v = (*(P923)rt_nil_check(F->bt_676)).under;
goto ret_;
}
while ((F->p_2120 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2120)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_677)).name))->all))) {
F->code_679v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_675), rt_str(".p_", 3)), f_lower_s_15(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2120)).name))->all))); b_; }));
F->t_680v = f_tparam_type_325(F->bt_676, &(((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2120)).name))->all));
(*F->ro_678) = 1;
goto ret_;
}
F->p_2120 = (*(P917)rt_nil_check(F->p_2120)).next;
}
f_select_on_682(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_675), rt_str(".all", 4)); b_; }), (*(P923)rt_nil_check(F->bt_676)).under, F->e_677, &(*F->ro_678), &F->code_679v, &F->t_680v, &F->c_681v);
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->bt_676)).kind) == (((rt_int)17LL)))) {
F->f_2121 = NULL;
F->f_2121 = (*(P923)rt_nil_check(F->bt_676)).fields;
F->i_2122 = RT_R_IUNDEF;
F->i_2122 = ((rt_int)0LL);
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_677)).name))->all), rt_str("TAG", 3))) {
F->code_679v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_675)), rt_str(").tag)", 6)); b_; }));
F->t_680v = (*(P923)rt_nil_check(F->bt_676)).elem;
(*F->ro_678) = 1;
goto ret_;
}
while ((F->f_2121 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P925)rt_nil_check(F->f_2121)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_677)).name))->all))) {
F->fn_2123 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_675)), rt_str(").u.", 4)), f_field_c_17(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_677)).name))->all))));
F->c_681v = (*(P925)rt_nil_check(F->f_2121)).c;
F->code_679v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_675)), rt_str(").tag == ", 9)), f_itos_7(rt_r_ichk(F->i_2122))), rt_str(" \? &", 4)), F->fn_2123), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_2123), rt_str(")))", 3)); b_; }));
F->t_680v = (*(P925)rt_nil_check(F->f_2121)).t;
goto ret_;
}
F->i_2122 = rt_add(rt_r_ichk(F->i_2122), ((rt_int)1LL));
F->f_2121 = (*(P925)rt_nil_check(F->f_2121)).next;
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_677)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_677)).name))->all)); b_; }));
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->bt_676)).kind) == (((rt_int)7LL)))) {
F->f_2124 = NULL;
F->f_2124 = (*(P923)rt_nil_check(F->bt_676)).fields;
while ((F->f_2124 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P925)rt_nil_check(F->f_2124)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_677)).name))->all))) {
F->c_681v = (*(P925)rt_nil_check(F->f_2124)).c;
F->code_679v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_675), rt_str(".", 1)), f_field_c_17(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_677)).name))->all))); b_; }));
F->t_680v = (*(P925)rt_nil_check(F->f_2124)).t;
goto ret_;
}
F->f_2124 = (*(P925)rt_nil_check(F->f_2124)).next;
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_677)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_677)).name))->all)); b_; }));
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_677)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_677)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_679) = F->code_679v;  (*F->t_680) = F->t_680v;  (*F->c_681) = F->c_681v;
  RT_FPOP();
  return;
}

static int f_has_call_684(rstr *s_683) {
  struct f_has_call_684fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_683 = s_683;
{ rt_int lo2126 = ((rt_int)1LL), hi2127 = ((rt_int)(((*F->s_683)).len));
for (rt_int it2128 = lo2126; it2128 <= hi2127; it2128++) {
F->i_2125 = it2128;
if ((rt_r_echk(rt_str_get((*F->s_683), F->i_2125)) == 40)) {
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

static void f_need_slice_686(P923 t_685) {
  struct f_need_slice_686fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_685 = t_685;
F->c_2129 = rt_str_copy(f_ctype_226(F->t_685));
F->n_2130 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_2129));
F->l_2131 = NULL;
if (f_seen_name_393(g_mcopies_996, &F->n_2130)) {
goto ret_;
}
{ R922 *cell2132 = rt_alloc(sizeof(R922));
(*cell2132).s = NULL;
(*cell2132).next = NULL;
F->l_2131 = cell2132;
}
(*(P921)rt_nil_check(F->l_2131)).s = f_mk_3(&F->n_2130);
(*(P921)rt_nil_check(F->l_2131)).next = g_mcopies_996;
g_mcopies_996 = F->l_2131;
f_put_27(g_out_protos_962, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2129), rt_str(" ", 1)), F->n_2130), rt_str("(", 1)), F->c_2129), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2129), rt_str(" ", 1)), F->n_2130), rt_str("(", 1)), F->c_2129), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_962, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2129), rt_str(" rt_r_acat_", 11)), F->c_2129), rt_str("(", 1)), F->c_2129), rt_str(" a, ", 4)), F->c_2129), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2129), rt_str(" rt_r_acat_", 11)), F->c_2129), rt_str("(", 1)), F->c_2129), rt_str(" a, ", 4)), F->c_2129), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_2129), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_382((*(P923)rt_nil_check(F->t_685)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_382((*(P923)rt_nil_check(F->t_685)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rstr f_ix_690(rstr *i_687, rstr *lo_688, rstr *hi_689) {
  struct f_ix_690fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_687 = i_687;
F->lo_688 = lo_688;
F->hi_689 = hi_689;
if (f_suppressed_466(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_687)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_687)), rt_str(", ", 2)), (*F->lo_688)), rt_str(", ", 2)), (*F->hi_689)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_699(rstr *base_691, P923 bt_692, P917 e_693, int *ro_694, int lv_695, P910 *code_696, P923 *t_697, P919 *c_698) {
  struct f_index_on_699fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_691 = base_691;
F->bt_692 = bt_692;
F->e_693 = e_693;
F->ro_694 = ro_694;
F->lv_695 = lv_695;
F->code_696 = code_696;
F->code_696v = *F->code_696;
F->t_697 = t_697;
F->t_697v = *F->t_697;
F->c_698 = c_698;
F->c_698v = *F->c_698;
F->a_2133 = NULL;
F->a_2133 = (*(P917)rt_nil_check(F->e_693)).b;
F->it_2134 = NULL;
F->c_698v = g_no_cons_1015;
if ((rt_r_ichk((*(P923)rt_nil_check(F->bt_692)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_432(F->bt_692);
(*F->ro_694) = 0;
f_index_on_699(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_666(&(*F->base_691), F->bt_692); b_; }), (*(P923)rt_nil_check(F->bt_692)).target, F->e_693, &(*F->ro_694), F->lv_695, &F->code_696v, &F->t_697v, &F->c_698v);
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->bt_692)).kind) == (((rt_int)15LL)))) {
if ((!f_opened_300(F->bt_692))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_693)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P910)rt_nil_check((*(P923)rt_nil_check(F->bt_692)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P923)rt_nil_check(F->bt_692)).tparams == NULL)) {
f_index_on_699(&(*F->base_691), (*(P923)rt_nil_check(F->bt_692)).under, F->e_693, &(*F->ro_694), F->lv_695, &F->code_696v, &F->t_697v, &F->c_698v);
} else {
f_index_on_699(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_691), rt_str(".all", 4)); b_; }), (*(P923)rt_nil_check(F->bt_692)).under, F->e_693, &(*F->ro_694), F->lv_695, &F->code_696v, &F->t_697v, &F->c_698v);
}
goto ret_;
}
if ((((rt_r_ichk((*(P923)rt_nil_check(F->bt_692)).kind) == (((rt_int)6LL))) && (F->a_2133 != NULL)) && (rt_r_ichk((*(P917)rt_nil_check(F->a_2133)).kind) == (((rt_int)16LL))))) {
if (((rt_r_ichk((*(P923)rt_nil_check(F->bt_692)).ndim) != ((rt_int)1LL)) || ((*(P917)rt_nil_check(F->a_2133)).next != NULL))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_693)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_2135 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->a_2133)).a, (*(P923)rt_nil_check(F->bt_692)).idx, &F->it_2134));
F->hi_2136 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->a_2133)).b, (*(P923)rt_nil_check(F->bt_692)).idx, &F->it_2134));
F->code_696v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_226(F->bt_692)), rt_str("(", 1)), (*F->base_691)), rt_str(", ", 2)), F->lo_2135), rt_str(", ", 2)), F->hi_2136), rt_str(")", 1)); b_; }));
f_need_slice_686(F->bt_692);
F->t_697v = F->bt_692;
(*F->ro_694) = 1;
}
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->bt_692)).kind) == (((rt_int)6LL)))) {
F->off_2137 = NULL;
F->k_2138 = RT_R_IUNDEF;
F->k_2138 = ((rt_int)0LL);
F->b_2139 = NULL;
F->b_2139 = f_mk_3(&(*F->base_691));
F->pre_2140 = NULL;
F->pre_2140 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_67(F->a_2133) != rt_r_ichk((*(P923)rt_nil_check(F->bt_692)).ndim))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_693)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7(rt_r_ichk((*(P923)rt_nil_check(F->bt_692)).ndim)), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_695) && f_has_call_684(&(*F->base_691)))) {
F->pre_2140 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->bt_692)), rt_str(" b_ = ", 6)), (*F->base_691)), rt_str("; ", 2)); b_; }));
F->b_2139 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_2133 != NULL)) {
F->k_2138 = rt_add(rt_r_ichk(F->k_2138), ((rt_int)1LL));
{
F->i_2141 = rt_str_copy(f_gexpr_705(F->a_2133, f_idx_type_250(F->bt_692, rt_r_ichk(F->k_2138)), &F->it_2134));
F->l_2142 = rt_str_copy(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->b_2139))->all), rt_str(".", 1)), f_dim_lo_234(rt_r_ichk(F->k_2138))));
F->h_2143 = rt_str_copy(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->b_2139))->all), rt_str(".", 1)), f_dim_hi_236(rt_r_ichk(F->k_2138))));
f_check_type_224(F->it_2134, f_idx_type_250(F->bt_692, rt_r_ichk(F->k_2138)), rt_r_ichk((*(P917)rt_nil_check(F->e_693)).line));
if ((F->off_2137 == NULL)) {
F->off_2137 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_690(&F->i_2141, &F->l_2142, &F->h_2143)), rt_str(" - ", 3)), F->l_2142), rt_str(")", 1)); b_; }));
} else {
F->off_2137 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P910)rt_nil_check(F->off_2137))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2142), rt_str(", ", 2)), F->h_2143), rt_str(") + ", 4)), f_ix_690(&F->i_2141, &F->l_2142, &F->h_2143)), rt_str(" - ", 3)), F->l_2142), rt_str(")", 1)); b_; }));
}
}
F->a_2133 = (*(P917)rt_nil_check(F->a_2133)).next;
}
if ((((rt_int)(((((P910)rt_nil_check(F->pre_2140))->all)).len)) > ((rt_int)0LL))) {
F->code_696v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->pre_2140))->all), (((P910)rt_nil_check(F->b_2139))->all)), rt_str(".p[", 3)), (((P910)rt_nil_check(F->off_2137))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_696v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->b_2139))->all), rt_str(".p[", 3)), (((P910)rt_nil_check(F->off_2137))->all)), rt_str("]", 1)); b_; }));
}
F->t_697v = (*(P923)rt_nil_check(F->bt_692)).elem;
F->c_698v = (*(P923)rt_nil_check(F->bt_692)).elemcons;
goto ret_;
}
if ((f_list_len_67(F->a_2133) != ((rt_int)1LL))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_693)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->bt_692)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P917)rt_nil_check(F->a_2133)).kind) == (((rt_int)16LL)))) {
F->lo_2144 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->a_2133)).a, g_ty_int_997, &F->it_2134));
F->hi_2145 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->a_2133)).b, g_ty_int_997, &F->it_2134));
F->code_696v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_691)), rt_str(", ", 2)), F->lo_2144), rt_str(", ", 2)), F->hi_2145), rt_str(")", 1)); b_; }));
F->t_697v = F->bt_692;
(*F->ro_694) = 1;
goto ret_;
}
{
F->i_2146 = rt_str_copy(f_gexpr_705(F->a_2133, g_ty_int_997, &F->it_2134));
F->t_697v = f_str_elem_210(F->bt_692);
F->c_698v = (*(P923)rt_nil_check(F->bt_692)).elemcons;
if (F->lv_695) {
F->code_696v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_691)), rt_str(", ", 2)), F->i_2146), rt_str("))", 2)); b_; }));
} else {
F->code_696v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_691)), rt_str(", ", 2)), F->i_2146), rt_str(")", 1)); b_; }));
(*F->ro_694) = 1;
}
}
goto ret_;
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_693)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_696) = F->code_696v;  (*F->t_697) = F->t_697v;  (*F->c_698) = F->c_698v;
  RT_FPOP();
  return;
}

static int f_own_attribute_701(P917 e_700) {
  struct f_own_attribute_701fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_700 = e_700;
F->saved_2147 = NULL;
F->saved_2147 = g_code_967;
F->bt_2148 = NULL;
F->ok_2149 = RT_R_EUNDEF;
F->ok_2149 = 0;
g_trial_995 = rt_add(rt_r_ichk(g_trial_995), ((rt_int)1LL));
g_code_967 = f_new_buffer_24();
{ rt_frame xf2150;
if (RT_TRY(xf2150)) {
F->base_2152 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_700)).a, NULL, &F->bt_2148));
while (((F->bt_2148 != NULL) && (rt_r_ichk((*(P923)rt_nil_check(F->bt_2148)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_432(F->bt_2148);
F->bt_2148 = (*(P923)rt_nil_check(F->bt_2148)).target;
}
while ((((F->bt_2148 != NULL) && (rt_r_ichk((*(P923)rt_nil_check(F->bt_2148)).kind) == (((rt_int)15LL)))) && ((*(P923)rt_nil_check(F->bt_2148)).tparams == NULL))) {
F->bt_2148 = (*(P923)rt_nil_check(F->bt_2148)).under;
}
if (((F->bt_2148 != NULL) && (rt_r_ichk((*(P923)rt_nil_check(F->bt_2148)).kind) == (((rt_int)15LL))))) {
F->p_2153 = NULL;
F->p_2153 = (*(P923)rt_nil_check(F->bt_2148)).tparams;
while ((F->p_2153 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2153)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_700)).name))->all))) {
F->ok_2149 = 1;
}
F->p_2153 = (*(P917)rt_nil_check(F->p_2153)).next;
}
F->bt_2148 = (*(P923)rt_nil_check(F->bt_2148)).under;
}
if (((F->bt_2148 != NULL) && ((rt_r_ichk((*(P923)rt_nil_check(F->bt_2148)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->bt_2148)).kind) == (((rt_int)17LL)))))) {
F->f_2154 = NULL;
F->f_2154 = (*(P923)rt_nil_check(F->bt_2148)).fields;
while ((F->f_2154 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P925)rt_nil_check(F->f_2154)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_700)).name))->all))) {
F->ok_2149 = 1;
}
F->f_2154 = (*(P925)rt_nil_check(F->f_2154)).next;
}
}
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
g_trial_995 = rt_sub(rt_r_ichk(g_trial_995), ((rt_int)1LL));
g_code_967 = F->saved_2147;
F->result_ = rt_r_echk(F->ok_2149);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_705(P917 e_702, P923 want_703, P923 *t_704) {
  struct f_gexpr_705fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_702 = e_702;
F->want_703 = want_703;
F->t_704 = t_704;
F->t_704v = *F->t_704;
F->k_2155 = RT_R_IUNDEF;
F->k_2155 = rt_r_ichk((*(P917)rt_nil_check(F->e_702)).kind);
F->code_2156 = NULL;
F->c_2157 = NULL;
F->ro_2158 = RT_R_EUNDEF;
F->bt_2159 = NULL;
F->ctx_2160 = NULL;
F->ctx_2160 = g_cons_ctx_988;
g_cons_ctx_988 = NULL;
F->t_704v = g_ty_int_997;
if ((rt_r_ichk(F->k_2155) == (((rt_int)1LL)))) {
if (((F->want_703 != NULL) && (rt_r_ichk((*(P923)rt_nil_check(F->want_703)).kind) == (((rt_int)3LL))))) {
F->t_704v = g_ty_float_999;
F->result_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((rt_r_ichk(F->k_2155) == (((rt_int)2LL)))) {
F->t_704v = g_ty_float_999;
F->result_ = (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all);
goto ret_;
} else if ((rt_r_ichk(F->k_2155) == (((rt_int)5LL)))) {
F->t_704v = g_ty_bool_998;
F->result_ = f_itos_7(rt_r_ichk((*(P917)rt_nil_check(F->e_702)).ival));
goto ret_;
} else if (((((rt_r_ichk(F->k_2155) == (((rt_int)3LL))) && (F->want_703 != NULL)) && (rt_r_ichk((*(P923)rt_nil_check(F->want_703)).kind) == (((rt_int)5LL)))) && (!f_same_213(f_str_elem_210(F->want_703), g_ty_ascii_1000)))) {
F->r_2161 = NULL;
F->r_2161 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_q_18(); b_; }));
F->t_704v = F->want_703;
{ rt_int lo2163 = ((rt_int)1LL), hi2164 = ((rt_int)(((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all)).len));
for (rt_int it2165 = lo2163; it2165 <= hi2164; it2165++) {
F->i_2162 = it2165;
F->pos_2166 = RT_R_IUNDEF;
F->pos_2166 = f_lit_index_257((*(P923)rt_nil_check(f_base_of_215(f_str_elem_210(F->want_703)))).lits, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ascii_lit_715(rt_r_echk(rt_str_get((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), F->i_2162))); b_; }));
if ((rt_r_ichk(F->pos_2166) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_702)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), f_ascii_lit_715(rt_r_echk(rt_str_get((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), F->i_2162)))), rt_str(" is not a value of the component type", 37)); b_; }));
}
F->r_2161 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_2161))->all), rt_str("\\", 1)), f_octal_717(rt_r_ichk(F->pos_2166))); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), (((P910)rt_nil_check(F->r_2161))->all)), f_q_18()), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2155) == (((rt_int)3LL)))) {
F->t_704v = g_ty_string_1001;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_748(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2155) == (((rt_int)6LL)))) {
F->t_704v = g_ty_nil_1004;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((rt_r_ichk(F->k_2155) == (((rt_int)4LL)))) {
if (((F->want_703 != NULL) && ((*(P923)rt_nil_check(f_base_of_215(F->want_703))).kind == (((rt_int)4LL))))) {
F->t_704v = F->want_703;
} else {
F->t_704v = f_enum_type_of_751(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_r_ichk((*(P917)rt_nil_check(F->e_702)).line));
}
{
F->i_2167 = RT_R_IUNDEF;
F->i_2167 = f_lit_index_257((*(P923)rt_nil_check(f_base_of_215(F->t_704v))).lits, &(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all));
if ((rt_r_ichk(F->i_2167) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_702)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(rt_r_ichk(F->i_2167));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2155) == (((rt_int)17LL)))) {
g_cons_ctx_988 = F->ctx_2160;
F->result_ = f_gexpr_705((*(P917)rt_nil_check(F->e_702)).a, F->want_703, &F->t_704v);
goto ret_;
} else if ((rt_r_ichk(F->k_2155) == (((rt_int)7LL)))) {
F->y_2168 = NULL;
F->y_2168 = f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all));
if ((F->y_2168 == NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("ME", 2))) {
F->t_704v = g_ty_act_1007;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_704v = g_ty_act_1007;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_853(f_wrap_apply_746(F->e_702), 0, &F->t_704v);
goto ret_;
}
if (((((((((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_853(f_wrap_apply_746(F->e_702), 0, &F->t_704v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_702)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P927)rt_nil_check(F->y_2168)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P927)rt_nil_check(F->y_2168)).kind) == (((rt_int)2LL))))) {
F->ro_2169 = RT_R_EUNDEF;
F->t_704v = (*(P927)rt_nil_check(F->y_2168)).t;
if ((rt_r_ichk((*(P927)rt_nil_check(F->y_2168)).kind) == (((rt_int)1LL)))) {
F->ro_2169 = f_check_import_658(F->y_2168, rt_r_ichk((*(P917)rt_nil_check(F->e_702)).line));
F->result_ = f_init_chk_336((*(P927)rt_nil_check(F->y_2168)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_652(F->y_2168); b_; }));
goto ret_;
}
F->result_ = f_access_of_652(F->y_2168);
goto ret_;
}
if ((rt_r_ichk((*(P927)rt_nil_check(F->y_2168)).kind) == (((rt_int)3LL)))) {
F->result_ = f_gcall_853(f_wrap_apply_746(F->e_702), 0, &F->t_704v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_702)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((rt_r_ichk(F->k_2155) == (((rt_int)8LL))) && (f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all)) != NULL)) && (f_user_op_849(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), f_copy_node_744((*(P917)rt_nil_check(F->e_702)).a)) != NULL))) {
F->call_2170 = NULL;
F->call_2170 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P917)rt_nil_check(F->e_702)).line));
F->fname_2171 = NULL;
F->fname_2171 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P917)rt_nil_check(F->e_702)).line));
(*(P917)rt_nil_check(F->fname_2171)).name = (*(P917)rt_nil_check(F->e_702)).name;
(*(P917)rt_nil_check(F->call_2170)).a = F->fname_2171;
(*(P917)rt_nil_check(F->call_2170)).b = f_copy_node_744((*(P917)rt_nil_check(F->e_702)).a);
F->result_ = f_gcall_853(F->call_2170, 0, &F->t_704v);
goto ret_;
} else if (((((rt_r_ichk(F->k_2155) == (((rt_int)8LL))) && rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("NOT", 3))) && (F->want_703 != NULL)) && (rt_r_ichk((*(P923)rt_nil_check(F->want_703)).kind) == (((rt_int)16LL))))) {
F->a_2172 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_702)).a, F->want_703, &F->t_704v));
F->result_ = rt_str_cat(rt_str_cat(rt_str("y_set_compl(", 12), F->a_2172), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2155) == (((rt_int)8LL)))) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("NOT", 3))) {
F->a_2173 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_702)).a, g_ty_bool_998, &F->t_704v));
f_check_type_224(F->t_704v, g_ty_bool_998, rt_r_ichk((*(P917)rt_nil_check(F->e_702)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_2173), rt_str(")", 1));
goto ret_;
}
{
F->a_2174 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_702)).a, F->want_703, &F->t_704v));
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_2174;
goto ret_;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->t_704v)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_2174), rt_str(")", 1));
goto ret_;
}
f_check_type_224(F->t_704v, g_ty_int_997, rt_r_ichk((*(P917)rt_nil_check(F->e_702)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_2174), rt_str(")", 1));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2155) == (((rt_int)9LL)))) {
F->result_ = f_gbinop_773(F->e_702, F->want_703, &F->t_704v);
goto ret_;
} else if ((rt_r_ichk(F->k_2155) == (((rt_int)10LL)))) {
if (((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_702)).a)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_702)).a)).kind) == (((rt_int)12LL))))) {
F->nm_2175 = NULL;
F->nm_2175 = (*(P917)rt_nil_check(F->e_702)).a;
F->y_2176 = NULL;
if ((rt_r_ichk((*(P917)rt_nil_check(F->nm_2175)).kind) == (((rt_int)12LL)))) {
F->nm_2175 = (*(P917)rt_nil_check(F->nm_2175)).a;
}
F->y_2176 = f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->nm_2175)).name))->all));
if (((((F->y_2176 == NULL) || (rt_r_ichk((*(P927)rt_nil_check(F->y_2176)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P927)rt_nil_check(F->y_2176)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P927)rt_nil_check(F->y_2176)).kind) == (((rt_int)10LL))))) {
F->result_ = f_gcall_853(F->e_702, 0, &F->t_704v);
goto ret_;
}
}
if ((f_user_subscript_728(F->e_702) != NULL)) {
F->result_ = f_gcall_853(f_user_subscript_728(F->e_702), 0, &F->t_704v);
goto ret_;
}
{
F->base_2177 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_702)).a, NULL, &F->bt_2159));
F->ro_2158 = 1;
f_index_on_699(&F->base_2177, F->bt_2159, F->e_702, &F->ro_2158, 0, &F->code_2156, &F->t_704v, &F->c_2157);
if ((((!f_is_lvalue_668(F->e_702)) || (rt_r_ichk((*(P923)rt_nil_check(F->t_704v)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P923)rt_nil_check(F->t_704v)).kind) == (((rt_int)5LL))))) {
F->result_ = (((P910)rt_nil_check(F->code_2156))->all);
goto ret_;
}
F->result_ = f_init_chk_336(F->t_704v, &(((P910)rt_nil_check(F->code_2156))->all));
goto ret_;
}
} else if (((rt_r_ichk(F->k_2155) == (((rt_int)11LL))) && (f_user_dot_726(F->e_702) != NULL))) {
F->result_ = f_gcall_853(f_user_dot_726(F->e_702), 0, &F->t_704v);
goto ret_;
} else if ((rt_r_ichk(F->k_2155) == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_701(F->e_702)))) {
F->result_ = f_attribute_756(F->e_702, &F->t_704v);
goto ret_;
} else if (((f_as_subtype_289((*(P917)rt_nil_check(F->e_702)).a) != NULL) || f_ptr_attribute_753(F->e_702))) {
F->result_ = f_attribute_756(F->e_702, &F->t_704v);
goto ret_;
}
{
F->base_2178 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_702)).a, NULL, &F->bt_2159));
F->ro_2158 = 1;
f_select_on_682(&F->base_2178, F->bt_2159, F->e_702, &F->ro_2158, &F->code_2156, &F->t_704v, &F->c_2157);
if ((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_702)).name))->all), rt_str("TAG", 3)) || (!f_is_lvalue_668(F->e_702)))) {
F->result_ = (((P910)rt_nil_check(F->code_2156))->all);
goto ret_;
}
F->result_ = f_init_chk_336(F->t_704v, &(((P910)rt_nil_check(F->code_2156))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2155) == (((rt_int)12LL)))) {
F->result_ = f_gcall_853(f_wrap_apply_746(F->e_702), 0, &F->t_704v);
goto ret_;
} else if ((rt_r_ichk(F->k_2155) == (((rt_int)14LL)))) {
F->result_ = f_constructor_778(F->e_702, F->want_703, F->ctx_2160, &F->t_704v);
goto ret_;
} else if ((rt_r_ichk(F->k_2155) == (((rt_int)13LL)))) {
F->result_ = f_resolved_708(F->e_702, &F->t_704v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_702)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_704) = F->t_704v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_708(P917 e_706, P923 *t_707) {
  struct f_resolved_708fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_706 = e_706;
F->t_707 = t_707;
F->t_707v = *F->t_707;
F->c_2179 = NULL;
F->vt_2180 = NULL;
F->y_2181 = NULL;
F->y_2181 = f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_2182 = NULL;
F->tt_2182 = f_copy_node_744((*(P917)rt_nil_check(F->e_706)).b);
(*(P917)rt_nil_check(F->tt_2182)).next = NULL;
if (((F->y_2181 != NULL) && ((rt_r_ichk((*(P927)rt_nil_check(F->y_2181)).kind) == (((rt_int)10LL))) || (f_resolve_overload_827(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_2182, f_copy_node_744((*(P917)rt_nil_check(F->e_706)).a), 0, rt_r_ichk((*(P917)rt_nil_check(F->e_706)).line)) != NULL)))) {
F->call_2183 = NULL;
F->call_2183 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P917)rt_nil_check(F->e_706)).line));
F->f_2184 = NULL;
F->f_2184 = f_nn_61((((rt_int)12LL)), rt_r_ichk((*(P917)rt_nil_check(F->e_706)).line));
F->fname_2185 = NULL;
F->fname_2185 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P917)rt_nil_check(F->e_706)).line));
(*(P917)rt_nil_check(F->fname_2185)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P917)rt_nil_check(F->f_2184)).a = F->fname_2185;
(*(P917)rt_nil_check(F->f_2184)).b = F->tt_2182;
(*(P917)rt_nil_check(F->call_2183)).a = F->f_2184;
(*(P917)rt_nil_check(F->call_2183)).b = f_copy_node_744((*(P917)rt_nil_check(F->e_706)).a);
(*(P917)rt_nil_check((*(P917)rt_nil_check(F->call_2183)).b)).next = NULL;
F->result_ = f_gcall_853(F->call_2183, 0, &F->t_707v);
goto ret_;
}
F->t_707v = f_resolve_subtype_260((*(P917)rt_nil_check(F->e_706)).b, &F->c_2179);
{
F->v_2186 = rt_str_copy(f_gexpr_in_713((*(P917)rt_nil_check(F->e_706)).a, F->t_707v, F->c_2179, &F->vt_2180));
f_check_type_224(F->vt_2180, F->t_707v, rt_r_ichk((*(P917)rt_nil_check(F->e_706)).line));
F->result_ = f_checked_205(F->t_707v, F->c_2179, &F->v_2186);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_707) = F->t_707v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_713(P917 e_709, P923 want_710, P919 c_711, P923 *t_712) {
  struct f_gexpr_in_713fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_709 = e_709;
F->want_710 = want_710;
F->c_711 = c_711;
F->t_712 = t_712;
F->t_712v = *F->t_712;
g_cons_ctx_988 = F->c_711;
F->result_ = f_gexpr_705(F->e_709, F->want_710, &F->t_712v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_712) = F->t_712v;
  RT_FPOP();
  return F->result_;
}

static rstr f_ascii_lit_715(int ch_714) {
  struct f_ascii_lit_715fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ch_714 = ch_714;
F->l_2187 = NULL;
F->l_2187 = (*(P923)rt_nil_check(g_ty_ascii_1000)).lits;
{ rt_int lo2189 = ((rt_int)1LL), hi2190 = rt_sub(((rt_int)(F->ch_714) + 1), ((rt_int)1LL));
for (rt_int it2191 = lo2189; it2191 <= hi2190; it2191++) {
F->i_2188 = it2191;
F->l_2187 = (*(P917)rt_nil_check(F->l_2187)).next;
}
}
F->result_ = (((P910)rt_nil_check((*(P917)rt_nil_check(F->l_2187)).name))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_octal_717(rt_int n_716) {
  struct f_octal_717fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_716 = n_716;
F->r_2192 = rt_str_new(((rt_int)3LL));
rt_str_assign(&F->r_2192, rt_str("000", 3));
(*rt_str_at(&F->r_2192, ((rt_int)1LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_716, ((rt_int)64LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2192, ((rt_int)2LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_716, ((rt_int)8LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2192, ((rt_int)3LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(F->n_716, ((rt_int)8LL)), ((rt_int)1LL)));
F->result_ = F->r_2192;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P923 f_str_cat_part_719(P923 t_718) {
  struct f_str_cat_part_719fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_718 = t_718;
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_718)).kind) == (((rt_int)5LL)))) {
F->result_ = f_str_elem_210(F->t_718);
goto ret_;
}
F->result_ = F->t_718;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P923 f_peek_type_721(P917 e_720) {
  struct f_peek_type_721fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_720 = e_720;
F->saved_2193 = NULL;
F->saved_2193 = g_code_967;
F->t_2194 = NULL;
g_trial_995 = rt_add(rt_r_ichk(g_trial_995), ((rt_int)1LL));
g_code_967 = f_new_buffer_24();
{ rt_frame xf2195;
if (RT_TRY(xf2195)) {
F->v_2197 = rt_str_copy(f_gexpr_705(F->e_720, NULL, &F->t_2194));
RT_POP(xf2195);
} else {
RT_POP(xf2195);
int x2196 = rt_xcur;
if (0 || x2196 == ex_compile_error_1) {
F->t_2194 = NULL;
} else {
rt_raise(x2196);
}
}
}
g_trial_995 = rt_sub(rt_r_ichk(g_trial_995), ((rt_int)1LL));
g_code_967 = F->saved_2193;
F->result_ = F->t_2194;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P923 f_set_operands_724(P917 e_722, P923 want_723) {
  struct f_set_operands_724fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_722 = e_722;
F->want_723 = want_723;
F->t_2198 = NULL;
if (((F->want_723 != NULL) && (rt_r_ichk((*(P923)rt_nil_check(F->want_723)).kind) == (((rt_int)16LL))))) {
F->result_ = F->want_723;
goto ret_;
} else if ((F->want_723 != NULL)) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_722)).a)).kind) != (((rt_int)14LL)))) {
F->t_2198 = f_peek_type_721((*(P917)rt_nil_check(F->e_722)).a);
} else if ((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_722)).b)).kind) != (((rt_int)14LL)))) {
F->t_2198 = f_peek_type_721((*(P917)rt_nil_check(F->e_722)).b);
}
if (((F->t_2198 != NULL) && (rt_r_ichk((*(P923)rt_nil_check(F->t_2198)).kind) == (((rt_int)16LL))))) {
F->result_ = F->t_2198;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_user_dot_726(P917 e_725) {
  struct f_user_dot_726fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_725 = e_725;
F->arg_2199 = NULL;
if ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_725)).name))->all)); b_; })) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->arg_2199 = f_copy_node_744((*(P917)rt_nil_check(F->e_725)).a);
if ((f_user_op_849(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_725)).name))->all)); b_; }), F->arg_2199) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_732(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_725)).name))->all)); b_; }), F->arg_2199, rt_r_ichk((*(P917)rt_nil_check(F->e_725)).line));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_user_subscript_728(P917 e_727) {
  struct f_user_subscript_728fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_727 = e_727;
F->name_2200 = NULL;
F->name_2200 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
F->args_2201 = NULL;
F->tail_2202 = NULL;
F->a_2203 = NULL;
F->a_2203 = (*(P917)rt_nil_check(F->e_727)).b;
if (((((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_727)).a)).kind) == (((rt_int)7LL))) && (f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_727)).a)).name))->all)) != NULL)) && ((*(P927)rt_nil_check(f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_727)).a)).name))->all)))).kind != (((rt_int)1LL)))) && ((*(P927)rt_nil_check(f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_727)).a)).name))->all)))).kind != (((rt_int)2LL))))) {
F->result_ = NULL;
goto ret_;
}
f_append_65(&F->args_2201, &F->tail_2202, f_copy_node_744((*(P917)rt_nil_check(F->e_727)).a));
while ((F->a_2203 != NULL)) {
if ((((rt_int)(((((P910)rt_nil_check(F->name_2200))->all)).len)) > ((rt_int)1LL))) {
F->name_2200 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->name_2200))->all), rt_str(",", 1)); b_; }));
}
if ((rt_r_ichk((*(P917)rt_nil_check(F->a_2203)).kind) == (((rt_int)16LL)))) {
F->name_2200 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->name_2200))->all), rt_str("*..*", 4)); b_; }));
f_append_65(&F->args_2201, &F->tail_2202, f_copy_node_744((*(P917)rt_nil_check(F->a_2203)).a));
f_append_65(&F->args_2201, &F->tail_2202, f_copy_node_744((*(P917)rt_nil_check(F->a_2203)).b));
} else {
F->name_2200 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->name_2200))->all), rt_str("*", 1)); b_; }));
f_append_65(&F->args_2201, &F->tail_2202, f_copy_node_744(F->a_2203));
}
F->a_2203 = (*(P917)rt_nil_check(F->a_2203)).next;
}
F->name_2200 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->name_2200))->all), rt_str(")", 1)); b_; }));
if (((f_lookup_155(&(((P910)rt_nil_check(F->name_2200))->all)) == NULL) || (f_user_op_849(&(((P910)rt_nil_check(F->name_2200))->all), F->args_2201) == NULL))) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_732(&(((P910)rt_nil_check(F->name_2200))->all), F->args_2201, rt_r_ichk((*(P917)rt_nil_check(F->e_727)).line));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_op_call_732(rstr *name_729, P917 args_730, rt_int line_731) {
  struct f_op_call_732fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_729 = name_729;
F->args_730 = args_730;
F->line_731 = line_731;
F->call_2204 = NULL;
F->call_2204 = f_nn_61((((rt_int)10LL)), F->line_731);
F->f_2205 = NULL;
F->f_2205 = f_nn_61((((rt_int)7LL)), F->line_731);
(*(P917)rt_nil_check(F->f_2205)).name = f_mk_3(&(*F->name_729));
(*(P917)rt_nil_check(F->call_2204)).a = F->f_2205;
(*(P917)rt_nil_check(F->call_2204)).b = F->args_730;
F->result_ = F->call_2204;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_derived_relation_734(P917 e_733) {
  struct f_derived_relation_734fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_733 = e_733;
F->l_2206 = NULL;
F->r_2207 = NULL;
F->has_eq_2208 = RT_R_EUNDEF;
F->has_eq_2208 = 0;
F->has_lt_2209 = RT_R_EUNDEF;
F->has_lt_2209 = 0;
F->l_2206 = f_copy_node_744((*(P917)rt_nil_check(F->e_733)).a);
F->r_2207 = f_copy_node_744((*(P917)rt_nil_check(F->e_733)).b);
(*(P917)rt_nil_check(F->l_2206)).next = F->r_2207;
if ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; })) != NULL)) {
F->has_eq_2208 = (f_user_op_849(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), F->l_2206) != NULL);
}
if ((f_lookup_155(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; })) != NULL)) {
F->l_2206 = f_copy_node_744((*(P917)rt_nil_check(F->e_733)).a);
F->r_2207 = f_copy_node_744((*(P917)rt_nil_check(F->e_733)).b);
(*(P917)rt_nil_check(F->l_2206)).next = F->r_2207;
F->has_lt_2209 = (f_user_op_849(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), F->l_2206) != NULL);
}
if ((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_733)).name))->all), rt_str("/=", 2)) && rt_r_echk(F->has_eq_2208))) {
F->result_ = f_rel_not_742(f_rel_node_739(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P917)rt_nil_check(F->e_733)).a, (*(P917)rt_nil_check(F->e_733)).b, rt_r_ichk((*(P917)rt_nil_check(F->e_733)).line)), rt_r_ichk((*(P917)rt_nil_check(F->e_733)).line));
goto ret_;
} else if ((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_733)).name))->all), rt_str(">", 1)) && rt_r_echk(F->has_lt_2209))) {
F->result_ = f_rel_node_739(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P917)rt_nil_check(F->e_733)).b, (*(P917)rt_nil_check(F->e_733)).a, rt_r_ichk((*(P917)rt_nil_check(F->e_733)).line));
goto ret_;
} else if (((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_733)).name))->all), rt_str("<=", 2)) && rt_r_echk(F->has_lt_2209)) && rt_r_echk(F->has_eq_2208))) {
F->result_ = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_739(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P917)rt_nil_check(F->e_733)).a, (*(P917)rt_nil_check(F->e_733)).b, rt_r_ichk((*(P917)rt_nil_check(F->e_733)).line)), f_rel_node_739(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P917)rt_nil_check(F->e_733)).a, (*(P917)rt_nil_check(F->e_733)).b, rt_r_ichk((*(P917)rt_nil_check(F->e_733)).line)), rt_r_ichk((*(P917)rt_nil_check(F->e_733)).line));
goto ret_;
} else if (((rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_733)).name))->all), rt_str(">=", 2)) && rt_r_echk(F->has_lt_2209)) && rt_r_echk(F->has_eq_2208))) {
F->result_ = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_739(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P917)rt_nil_check(F->e_733)).b, (*(P917)rt_nil_check(F->e_733)).a, rt_r_ichk((*(P917)rt_nil_check(F->e_733)).line)), f_rel_node_739(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P917)rt_nil_check(F->e_733)).a, (*(P917)rt_nil_check(F->e_733)).b, rt_r_ichk((*(P917)rt_nil_check(F->e_733)).line)), rt_r_ichk((*(P917)rt_nil_check(F->e_733)).line));
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_rel_node_739(rstr *op_735, P917 a_736, P917 b_737, rt_int line_738) {
  struct f_rel_node_739fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_735 = op_735;
F->a_736 = a_736;
F->b_737 = b_737;
F->line_738 = line_738;
F->result_ = f_binop_102(f_mk_3(&(*F->op_735)), f_copy_node_744(F->a_736), f_copy_node_744(F->b_737), F->line_738);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_rel_not_742(P917 x_740, rt_int line_741) {
  struct f_rel_not_742fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_740 = x_740;
F->line_741 = line_741;
F->n_2210 = NULL;
F->n_2210 = f_nn_61((((rt_int)8LL)), F->line_741);
(*(P917)rt_nil_check(F->n_2210)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P917)rt_nil_check(F->n_2210)).a = F->x_740;
F->result_ = F->n_2210;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_copy_node_744(P917 e_743) {
  struct f_copy_node_744fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_743 = e_743;
F->x_2211 = NULL;
{ R918 *cell2212 = rt_alloc(sizeof(R918));
(*cell2212).name = NULL;
(*cell2212).tag = NULL;
(*cell2212).prags = NULL;
(*cell2212).labels = NULL;
(*cell2212).a = NULL;
(*cell2212).b = NULL;
(*cell2212).c = NULL;
(*cell2212).d = NULL;
(*cell2212).e = NULL;
(*cell2212).next = NULL;
F->x_2211 = cell2212;
}
(*(P917)rt_nil_check(F->x_2211)).kind = rt_r_ichk((*(P917)rt_nil_check(F->e_743)).kind);
(*(P917)rt_nil_check(F->x_2211)).line = rt_r_ichk((*(P917)rt_nil_check(F->e_743)).line);
(*(P917)rt_nil_check(F->x_2211)).ival = rt_r_ichk((*(P917)rt_nil_check(F->e_743)).ival);
(*(P917)rt_nil_check(F->x_2211)).flag = rt_r_ichk((*(P917)rt_nil_check(F->e_743)).flag);
(*(P917)rt_nil_check(F->x_2211)).name = (*(P917)rt_nil_check(F->e_743)).name;
(*(P917)rt_nil_check(F->x_2211)).tag = (*(P917)rt_nil_check(F->e_743)).tag;
(*(P917)rt_nil_check(F->x_2211)).a = (*(P917)rt_nil_check(F->e_743)).a;
(*(P917)rt_nil_check(F->x_2211)).b = (*(P917)rt_nil_check(F->e_743)).b;
(*(P917)rt_nil_check(F->x_2211)).c = (*(P917)rt_nil_check(F->e_743)).c;
(*(P917)rt_nil_check(F->x_2211)).d = (*(P917)rt_nil_check(F->e_743)).d;
F->result_ = F->x_2211;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P917 f_wrap_apply_746(P917 e_745) {
  struct f_wrap_apply_746fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_745 = e_745;
F->x_2213 = NULL;
F->x_2213 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P917)rt_nil_check(F->e_745)).line));
(*(P917)rt_nil_check(F->x_2213)).a = F->e_745;
F->result_ = F->x_2213;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_748(rstr *s_747) {
  struct f_c_string_748fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_747 = s_747;
F->n_2214 = RT_R_IUNDEF;
F->n_2214 = ((rt_int)0LL);
{ rt_int lo2216 = ((rt_int)1LL), hi2217 = ((rt_int)(((*F->s_747)).len));
for (rt_int it2218 = lo2216; it2218 <= hi2217; it2218++) {
F->i_2215 = it2218;
if (((rt_r_echk(rt_str_get((*F->s_747), F->i_2215)) == 92) || (rt_r_echk(rt_str_get((*F->s_747), F->i_2215)) == 63))) {
F->n_2214 = rt_add(rt_r_ichk(F->n_2214), ((rt_int)1LL));
}
}
}
{
F->r_2219 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_747)).len)), rt_r_ichk(F->n_2214)), ((rt_int)2LL)));
F->j_2220 = RT_R_IUNDEF;
F->j_2220 = ((rt_int)1LL);
(*rt_str_at(&F->r_2219, ((rt_int)1LL))) = 34;
{ rt_int lo2222 = ((rt_int)1LL), hi2223 = ((rt_int)(((*F->s_747)).len));
for (rt_int it2224 = lo2222; it2224 <= hi2223; it2224++) {
F->i_2221 = it2224;
F->j_2220 = rt_add(rt_r_ichk(F->j_2220), ((rt_int)1LL));
if (((rt_r_echk(rt_str_get((*F->s_747), F->i_2221)) == 92) || (rt_r_echk(rt_str_get((*F->s_747), F->i_2221)) == 63))) {
(*rt_str_at(&F->r_2219, rt_r_ichk(F->j_2220))) = 92;
F->j_2220 = rt_add(rt_r_ichk(F->j_2220), ((rt_int)1LL));
}
(*rt_str_at(&F->r_2219, rt_r_ichk(F->j_2220))) = rt_r_echk(rt_str_get((*F->s_747), F->i_2221));
}
}
(*rt_str_at(&F->r_2219, rt_add(rt_r_ichk(F->j_2220), ((rt_int)1LL)))) = 34;
F->result_ = F->r_2219;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P923 f_enum_type_of_751(rstr *lit_749, rt_int line_750) {
  struct f_enum_type_of_751fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_749 = lit_749;
F->line_750 = line_750;
F->y_2225 = NULL;
F->y_2225 = g_scope_stack_957;
F->c_2226 = NULL;
if ((f_lit_index_257((*(P923)rt_nil_check(g_ty_ascii_1000)).lits, &(*F->lit_749)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_1000;
goto ret_;
}
while ((F->y_2225 != NULL)) {
if (((((rt_r_ichk((*(P927)rt_nil_check(F->y_2225)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P927)rt_nil_check(F->y_2225)).kind) == (((rt_int)5LL)))) && ((*(P927)rt_nil_check(F->y_2225)).st != NULL)) && (rt_r_ichk((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_2225)).st)).kind) == (((rt_int)72LL))))) {
if ((f_lit_index_257((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_2225)).st)).a, &(*F->lit_749)) >= ((rt_int)0LL))) {
if ((rt_r_ichk((*(P927)rt_nil_check(F->y_2225)).kind) == (((rt_int)5LL)))) {
F->st_2227 = NULL;
F->st_2227 = f_nn_61((((rt_int)80LL)), F->line_750);
(*(P917)rt_nil_check(F->st_2227)).name = (*(P927)rt_nil_check(F->y_2225)).name;
F->result_ = f_resolve_subtype_260(F->st_2227, &F->c_2226);
goto ret_;
}
F->result_ = f_resolve_subtype_260((*(P927)rt_nil_check(F->y_2225)).st, &F->c_2226);
goto ret_;
}
}
F->y_2225 = (*(P927)rt_nil_check(F->y_2225)).stack;
}
f_fail_23(F->line_750, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_749)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_753(P917 e_752) {
  struct f_ptr_attribute_753fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_752 = e_752;
F->lv_2228 = NULL;
F->t_2229 = NULL;
F->c_2230 = NULL;
F->ro_2231 = RT_R_EUNDEF;
F->p_2232 = NULL;
F->saved_2233 = NULL;
F->saved_2233 = g_code_967;
if ((!f_is_lvalue_668((*(P917)rt_nil_check(F->e_752)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_967 = f_new_buffer_24();
f_lvalue_674((*(P917)rt_nil_check(F->e_752)).a, &F->lv_2228, &F->t_2229, &F->c_2230, &F->ro_2231);
g_code_967 = F->saved_2233;
if (((rt_r_ichk((*(P923)rt_nil_check(F->t_2229)).kind) != (((rt_int)8LL))) || ((*(P923)rt_nil_check(F->t_2229)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_2232 = (*(P917)rt_nil_check((*(P923)rt_nil_check(F->t_2229)).decl)).d;
while ((F->p_2232 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2232)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_752)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_2232 = (*(P917)rt_nil_check(F->p_2232)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_756(P917 e_754, P923 *t_755) {
  struct f_attribute_756fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_754 = e_754;
F->t_755 = t_755;
F->t_755v = *F->t_755;
F->bt_2234 = NULL;
F->c_2235 = NULL;
F->base_2236 = NULL;
F->sub_2237 = NULL;
F->sub_2237 = f_as_subtype_289((*(P917)rt_nil_check(F->e_754)).a);
F->name_2238 = rt_str_copy((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_754)).name))->all));
if ((F->sub_2237 != NULL)) {
F->bt_2234 = f_resolve_subtype_260(F->sub_2237, &F->c_2235);
} else {
F->bt_2234 = f_value_subtype_282((*(P917)rt_nil_check(F->e_754)).a, &F->c_2235, &F->base_2236);
}
if (((((rt_r_ichk((*(P923)rt_nil_check(F->bt_2234)).kind) == (((rt_int)8LL))) && (F->c_2235 != NULL)) && ((*(P919)rt_nil_check(F->c_2235)).args != NULL)) && ((*(P923)rt_nil_check(F->bt_2234)).decl != NULL))) {
F->p_2239 = NULL;
F->p_2239 = (*(P917)rt_nil_check((*(P923)rt_nil_check(F->bt_2234)).decl)).d;
F->a_2240 = NULL;
F->a_2240 = (*(P919)rt_nil_check(F->c_2235)).args;
while (((F->p_2239 != NULL) && (F->a_2240 != NULL))) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2239)).name))->all), F->name_2238)) {
F->pc_2241 = NULL;
F->v_2242 = rt_str_copy(f_gexpr_705(F->a_2240, f_resolve_subtype_260((*(P917)rt_nil_check(F->p_2239)).a, &F->pc_2241), &F->t_755v));
F->result_ = F->v_2242;
goto ret_;
}
F->p_2239 = (*(P917)rt_nil_check(F->p_2239)).next;
F->a_2240 = (*(P917)rt_nil_check(F->a_2240)).next;
}
}
while (((rt_r_ichk((*(P923)rt_nil_check(F->bt_2234)).kind) == (((rt_int)8LL))) && (F->base_2236 != NULL))) {
f_finish_ptr_432(F->bt_2234);
F->base_2236 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_666(&(((P910)rt_nil_check(F->base_2236))->all), F->bt_2234); b_; }));
F->bt_2234 = (*(P923)rt_nil_check(F->bt_2234)).target;
F->c_2235 = NULL;
if ((rt_r_ichk((*(P923)rt_nil_check(F->bt_2234)).kind) == (((rt_int)5LL)))) {
F->c_2235 = f_new_cons_176();
(*(P919)rt_nil_check(F->c_2235)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P910)rt_nil_check(F->base_2236))->all)), rt_str(").len", 5)); b_; }));
}
}
if (((((rt_r_ichk((*(P923)rt_nil_check(F->bt_2234)).kind) == (((rt_int)15LL))) && ((*(P923)rt_nil_check(F->bt_2234)).tparams != NULL)) && (F->c_2235 != NULL)) && ((*(P919)rt_nil_check(F->c_2235)).args != NULL))) {
F->p_2243 = NULL;
F->p_2243 = (*(P923)rt_nil_check(F->bt_2234)).tparams;
F->a_2244 = NULL;
F->a_2244 = (*(P919)rt_nil_check(F->c_2235)).args;
while (((F->p_2243 != NULL) && (F->a_2244 != NULL))) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2243)).name))->all), F->name_2238)) {
F->pt_2245 = f_tparam_type_325(F->bt_2234, &F->name_2238);
F->v_2246 = rt_str_copy(f_gexpr_705(F->a_2244, F->pt_2245, &F->t_755v));
F->result_ = F->v_2246;
goto ret_;
}
F->p_2243 = (*(P917)rt_nil_check(F->p_2243)).next;
F->a_2244 = (*(P917)rt_nil_check(F->a_2244)).next;
}
}
if (((rt_r_ichk((*(P923)rt_nil_check(F->bt_2234)).kind) == (((rt_int)15LL))) && ((*(P923)rt_nil_check(F->bt_2234)).tparams == NULL))) {
F->c_2235 = f_base_cons_218(F->bt_2234, F->c_2235);
F->bt_2234 = f_base_of_215(F->bt_2234);
}
F->t_755v = g_ty_int_997;
if ((rt_str_eq(F->name_2238, rt_str("LEN", 3)) && (rt_r_ichk((*(P923)rt_nil_check(F->bt_2234)).kind) == (((rt_int)5LL))))) {
if (((F->c_2235 != NULL) && ((*(P919)rt_nil_check(F->c_2235)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P910)rt_nil_check((*(P919)rt_nil_check(F->c_2235)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_754)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_2238, rt_str("LEN", 3)) && (rt_r_ichk((*(P923)rt_nil_check(F->bt_2234)).kind) == (((rt_int)12LL))))) {
if (((F->c_2235 != NULL) && ((*(P919)rt_nil_check(F->c_2235)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P910)rt_nil_check((*(P919)rt_nil_check(F->c_2235)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_754)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_2238, rt_str("MIN", 3)) || rt_str_eq(F->name_2238, rt_str("MAX", 3))) && f_scalar_kind_178(F->bt_2234))) {
F->t_755v = F->bt_2234;
if (rt_str_eq(F->name_2238, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_190(F->bt_2234, F->c_2235);
goto ret_;
}
F->result_ = f_sub_hi_193(F->bt_2234, F->c_2235);
goto ret_;
} else if ((rt_str_eq(F->name_2238, rt_str("PREC", 4)) && (rt_r_ichk((*(P923)rt_nil_check(F->bt_2234)).kind) == (((rt_int)3LL))))) {
if (((F->c_2235 != NULL) && ((*(P919)rt_nil_check(F->c_2235)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P910)rt_nil_check((*(P919)rt_nil_check(F->c_2235)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_2238, rt_str("ACCESS", 6)) || rt_str_eq(F->name_2238, rt_str("USE", 3))) && (rt_r_ichk((*(P923)rt_nil_check(F->bt_2234)).kind) == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_769(F->e_754, F->bt_2234, F->c_2235, F->base_2236, &F->t_755v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_754)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_2238, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_755) = F->t_755v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_761(P917 sa_757, P917 sb_758, rstr *op_759, rt_int line_760) {
  struct f_subtype_compare_761fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_757 = sa_757;
F->sb_758 = sb_758;
F->op_759 = op_759;
F->line_760 = line_760;
F->ca_2247 = NULL;
F->cb_2248 = NULL;
F->ta_2249 = NULL;
F->ta_2249 = f_resolve_subtype_260(F->sa_757, &F->ca_2247);
F->tb_2250 = NULL;
F->tb_2250 = f_resolve_subtype_260(F->sb_758, &F->cb_2248);
F->r_2251 = NULL;
F->r_2251 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_2252 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_2252, rt_str("1", 1));
F->no_2253 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_2253, rt_str("0", 1));
if (rt_str_eq((*F->op_759), rt_str("/=", 2))) {
rt_str_assign(&F->yes_2252, rt_str("0", 1));
rt_str_assign(&F->no_2253, rt_str("1", 1));
}
if ((!f_same_213(F->ta_2249, F->tb_2250))) {
F->result_ = F->no_2253;
goto ret_;
} else if ((((rt_r_ichk((*(P917)rt_nil_check(F->sa_757)).kind) == (((rt_int)80LL))) && rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->sa_757)).name))->all), rt_str("TYPEOF", 6))) || ((rt_r_ichk((*(P917)rt_nil_check(F->sb_758)).kind) == (((rt_int)80LL))) && rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->sb_758)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_2252;
goto ret_;
}
if (f_scalar_kind_178(F->ta_2249)) {
F->r_2251 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_190(F->ta_2249, F->ca_2247)), rt_str(") == (", 6)), f_sub_lo_190(F->tb_2250, F->cb_2248)), rt_str(") && (", 6)), f_sub_hi_193(F->ta_2249, F->ca_2247)), rt_str(") == (", 6)), f_sub_hi_193(F->tb_2250, F->cb_2248)), rt_str(")", 1)); b_; }));
if ((rt_r_ichk((*(P923)rt_nil_check(F->ta_2249)).kind) == (((rt_int)3LL)))) {
F->r_2251 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_2251))->all), rt_str(" && ", 4)), f_float_prec_763(F->ca_2247)), rt_str(" == ", 4)), f_float_prec_763(F->cb_2248)); b_; }));
}
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->ta_2249)).kind) == (((rt_int)5LL)))) {
if (((((F->ca_2247 != NULL) && (F->cb_2248 != NULL)) && ((*(P919)rt_nil_check(F->ca_2247)).slen != NULL)) && ((*(P919)rt_nil_check(F->cb_2248)).slen != NULL))) {
F->r_2251 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P910)rt_nil_check((*(P919)rt_nil_check(F->ca_2247)).slen))->all)), rt_str(") == (", 6)), (((P910)rt_nil_check((*(P919)rt_nil_check(F->cb_2248)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_2247 == NULL) || ((*(P919)rt_nil_check(F->ca_2247)).slen == NULL)) && ((F->cb_2248 == NULL) || ((*(P919)rt_nil_check(F->cb_2248)).slen == NULL))))) {
F->r_2251 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->ta_2249)).kind) == (((rt_int)6LL)))) {
{ rt_int lo2255 = ((rt_int)1LL), hi2256 = rt_r_ichk((*(P923)rt_nil_check(F->ta_2249)).ndim);
for (rt_int it2257 = lo2255; it2257 <= hi2256; it2257++) {
F->k_2254 = it2257;
if (((((F->ca_2247 != NULL) && (F->cb_2248 != NULL)) && (f_cons_lo_244(F->ca_2247, F->k_2254) != NULL)) && (f_cons_lo_244(F->cb_2248, F->k_2254) != NULL))) {
F->r_2251 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_2251))->all), rt_str(" && (", 5)), (((P910)rt_nil_check(f_cons_lo_244(F->ca_2247, F->k_2254)))->all)), rt_str(") == (", 6)), (((P910)rt_nil_check(f_cons_lo_244(F->cb_2248, F->k_2254)))->all)), rt_str(") && (", 6)), (((P910)rt_nil_check(f_cons_hi_247(F->ca_2247, F->k_2254)))->all)), rt_str(") == (", 6)), (((P910)rt_nil_check(f_cons_hi_247(F->cb_2248, F->k_2254)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if (((((rt_r_ichk((*(P923)rt_nil_check(F->ta_2249)).kind) == (((rt_int)15LL))) && ((*(P923)rt_nil_check(F->ta_2249)).tparams != NULL)) && (F->ca_2247 != NULL)) && (F->cb_2248 != NULL))) {
F->a_2258 = NULL;
F->a_2258 = (*(P919)rt_nil_check(F->ca_2247)).args;
F->b_2259 = NULL;
F->b_2259 = (*(P919)rt_nil_check(F->cb_2248)).args;
F->at_2260 = NULL;
F->bt2_2261 = NULL;
while (((F->a_2258 != NULL) && (F->b_2259 != NULL))) {
F->x_2262 = rt_str_copy(f_gexpr_705(F->a_2258, NULL, &F->at_2260));
F->y_2263 = rt_str_copy(f_gexpr_705(F->b_2259, F->at_2260, &F->bt2_2261));
F->r_2251 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_2251))->all), rt_str(" && ", 4)), f_eq_code_386(F->at_2260, &F->x_2262, &F->y_2263)); b_; }));
F->a_2258 = (*(P917)rt_nil_check(F->a_2258)).next;
F->b_2259 = (*(P917)rt_nil_check(F->b_2259)).next;
}
} else if ((((rt_r_ichk((*(P923)rt_nil_check(F->ta_2249)).kind) == (((rt_int)17LL))) && (F->ca_2247 != NULL)) && (F->cb_2248 != NULL))) {
if ((((*(P919)rt_nil_check(F->ca_2247)).lo != NULL) && ((*(P919)rt_nil_check(F->cb_2248)).lo != NULL))) {
F->r_2251 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P910)rt_nil_check((*(P919)rt_nil_check(F->ca_2247)).lo))->all)), rt_str(") == (", 6)), (((P910)rt_nil_check((*(P919)rt_nil_check(F->cb_2248)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P919)rt_nil_check(F->ca_2247)).lo != NULL) || ((*(P919)rt_nil_check(F->cb_2248)).lo != NULL))) {
F->r_2251 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_759), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P910)rt_nil_check(F->r_2251))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P910)rt_nil_check(F->r_2251))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_763(P919 c_762) {
  struct f_float_prec_763fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_762 = c_762;
if (((F->c_762 != NULL) && ((*(P919)rt_nil_check(F->c_762)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P910)rt_nil_check((*(P919)rt_nil_check(F->c_762)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_769(P917 e_764, P923 bt_765, P919 c_766, P910 base_767, P923 *t_768) {
  struct f_file_attribute_769fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_764 = e_764;
F->bt_765 = bt_765;
F->c_766 = c_766;
F->base_767 = base_767;
F->t_768 = t_768;
F->t_768v = *F->t_768;
F->t_768v = g_file_mode_type_1008;
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_764)).name))->all), rt_str("ACCESS", 6))) {
F->t_768v = g_file_access_type_1014;
}
if ((F->base_767 != NULL)) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_764)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P910)rt_nil_check(F->base_767))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P910)rt_nil_check(F->base_767))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_766 != NULL) && ((*(P919)rt_nil_check(F->c_766)).args != NULL))) {
if (rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_764)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_705((*(P919)rt_nil_check(F->c_766)).args, F->t_768v, &F->t_768v);
goto ret_;
} else if (((*(P917)rt_nil_check((*(P919)rt_nil_check(F->c_766)).args)).next != NULL)) {
F->result_ = f_gexpr_705((*(P917)rt_nil_check((*(P919)rt_nil_check(F->c_766)).args)).next, F->t_768v, &F->t_768v);
goto ret_;
}
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_764)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P910)rt_nil_check((*(P917)rt_nil_check(F->e_764)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_768) = F->t_768v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_773(P917 e_770, P923 want_771, P923 *t_772) {
  struct f_gbinop_773fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_770 = e_770;
F->want_771 = want_771;
F->t_772 = t_772;
F->t_772v = *F->t_772;
F->op_2264 = NULL;
F->op_2264 = (*(P917)rt_nil_check(F->e_770)).name;
F->ta_2265 = NULL;
F->tb_2266 = NULL;
F->hint_2267 = NULL;
F->uy_2268 = NULL;
F->t_772v = g_ty_bool_998;
if (((((rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("/=", 2)) || rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str(">", 1))) || rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("<=", 2))) || rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str(">=", 2))) && (f_derived_relation_734(F->e_770) != NULL))) {
F->result_ = f_gexpr_705(f_derived_relation_734(F->e_770), g_ty_bool_998, &F->t_772v);
goto ret_;
}
if ((f_lookup_155(&(((P910)rt_nil_check(F->op_2264))->all)) != NULL)) {
F->l_2269 = NULL;
F->r_2270 = NULL;
F->l_2269 = f_copy_node_744((*(P917)rt_nil_check(F->e_770)).a);
F->r_2270 = f_copy_node_744((*(P917)rt_nil_check(F->e_770)).b);
(*(P917)rt_nil_check(F->l_2269)).next = F->r_2270;
F->uy_2268 = f_user_op_849(&(((P910)rt_nil_check(F->op_2264))->all), F->l_2269);
if ((F->uy_2268 != NULL)) {
F->call_2271 = NULL;
F->call_2271 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
F->fname_2272 = NULL;
F->fname_2272 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
(*(P917)rt_nil_check(F->fname_2272)).name = F->op_2264;
(*(P917)rt_nil_check(F->call_2271)).a = F->fname_2272;
(*(P917)rt_nil_check(F->call_2271)).b = F->l_2269;
F->result_ = f_gcall_853(F->call_2271, 0, &F->t_772v);
goto ret_;
}
}
if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("IN", 2))) {
F->s_2273 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_770)).b, NULL, &F->tb_2266));
if ((rt_r_ichk((*(P923)rt_nil_check(F->tb_2266)).kind) != (((rt_int)16LL)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2274 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_770)).a, (*(P923)rt_nil_check(F->tb_2266)).elem, &F->ta_2265));
f_check_type_224(F->ta_2265, (*(P923)rt_nil_check(F->tb_2266)).elem, rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
F->t_772v = g_ty_bool_998;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_in(", 9), F->a_2274), rt_str(", ", 2)), F->s_2273), rt_str(")", 1));
goto ret_;
}
}
if ((((rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("AND", 3)) || rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("OR", 2))) || rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("XOR", 3))) && (f_set_operands_724(F->e_770, F->want_771) != NULL))) {
F->a_2275 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_770)).a, f_set_operands_724(F->e_770, F->want_771), &F->ta_2265));
F->b_2276 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_770)).b, F->ta_2265, &F->tb_2266));
f_check_type_224(F->tb_2266, F->ta_2265, rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
F->t_772v = F->ta_2265;
if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_inter(", 12), F->a_2275), rt_str(", ", 2)), F->b_2276), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_union(", 12), F->a_2275), rt_str(", ", 2)), F->b_2276), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_xor(", 10), F->a_2275), rt_str(", ", 2)), F->b_2276), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("AND", 3)) || rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("OR", 2))) || rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("XOR", 3)))) {
F->a_2277 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_770)).a, g_ty_bool_998, &F->ta_2265));
F->b_2278 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_770)).b, g_ty_bool_998, &F->tb_2266));
f_check_type_224(F->ta_2265, g_ty_bool_998, rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
f_check_type_224(F->tb_2266, g_ty_bool_998, rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2277), rt_str(" && ", 4)), F->b_2278), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2277), rt_str(" || ", 4)), F->b_2278), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2277), rt_str(" != ", 4)), F->b_2278), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("&", 1)) && (F->want_771 != NULL)) && ((*(P923)rt_nil_check(f_base_of_215(F->want_771))).kind == (((rt_int)6LL))))) {
F->at_2279 = NULL;
F->at_2279 = f_base_of_215(F->want_771);
F->a_2280 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_770)).a, F->at_2279, &F->ta_2265));
F->b_2281 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_770)).b, F->at_2279, &F->tb_2266));
f_check_type_224(F->ta_2265, F->at_2279, rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
f_check_type_224(F->tb_2266, F->at_2279, rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
if (((rt_r_ichk((*(P923)rt_nil_check(F->at_2279)).ndim) != ((rt_int)1LL)) || ((*(P923)rt_nil_check(f_base_of_215((*(P923)rt_nil_check(F->at_2279)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_686(F->at_2279);
F->t_772v = F->at_2279;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_226(F->at_2279)), rt_str("(", 1)), F->a_2280), rt_str(", ", 2)), F->b_2281), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("&", 1))) {
F->wa_2282 = NULL;
F->wb_2283 = NULL;
F->ws_2284 = NULL;
F->ce_2285 = NULL;
F->ce_2285 = g_ty_ascii_1000;
if (((F->want_771 != NULL) && (rt_r_ichk((*(P923)rt_nil_check(F->want_771)).kind) == (((rt_int)5LL))))) {
F->ws_2284 = F->want_771;
F->ce_2285 = f_str_elem_210(F->want_771);
}
if ((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_770)).a)).kind) == (((rt_int)4LL)))) {
F->wa_2282 = F->ce_2285;
} else {
F->wa_2282 = F->ws_2284;
}
if ((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_770)).b)).kind) == (((rt_int)4LL)))) {
F->wb_2283 = F->ce_2285;
} else {
F->wb_2283 = F->ws_2284;
}
{
F->a_2286 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_770)).a, F->wa_2282, &F->ta_2265));
F->b_2287 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_770)).b, F->wb_2283, &F->tb_2266));
F->t_772v = g_ty_string_1001;
if ((rt_r_ichk((*(P923)rt_nil_check(F->ta_2265)).kind) == (((rt_int)5LL)))) {
F->t_772v = F->ta_2265;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->tb_2266)).kind) == (((rt_int)5LL)))) {
F->t_772v = F->tb_2266;
} else if ((!f_same_213(F->ta_2265, g_ty_ascii_1000))) {
F->t_772v = f_new_typ_175((((rt_int)5LL)));
(*(P923)rt_nil_check(F->t_772v)).elem = F->ta_2265;
}
if (((rt_r_ichk((*(P923)rt_nil_check(F->ta_2265)).kind) == (((rt_int)6LL))) && (rt_r_ichk((*(P923)rt_nil_check(F->tb_2266)).kind) == (((rt_int)6LL))))) {
f_need_slice_686(F->ta_2265);
f_check_type_224(F->tb_2266, F->ta_2265, rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
F->t_772v = F->ta_2265;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_226(F->ta_2265)), rt_str("(", 1)), F->a_2286), rt_str(", ", 2)), F->b_2287), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->ta_2265)).kind) == (((rt_int)5LL)))) {
f_check_type_224(f_str_cat_part_719(F->tb_2266), f_str_elem_210(F->ta_2265), rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->tb_2266)).kind) == (((rt_int)5LL)))) {
f_check_type_224(F->ta_2265, f_str_elem_210(F->tb_2266), rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
} else {
f_check_type_224(F->tb_2266, F->ta_2265, rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
}
if (((rt_r_ichk((*(P923)rt_nil_check(F->ta_2265)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P923)rt_nil_check(F->tb_2266)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2286), rt_str(", ", 2)), F->b_2287), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->ta_2265)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P923)rt_nil_check(F->tb_2266)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2286), rt_str(", ", 2)), F->b_2287), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->ta_2265)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P923)rt_nil_check(F->tb_2266)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2286), rt_str(", ", 2)), F->b_2287), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->ta_2265)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P923)rt_nil_check(F->tb_2266)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2286), rt_str(", ", 2)), F->b_2287), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("=", 1)) || rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("/=", 2))) && (f_as_subtype_289((*(P917)rt_nil_check(F->e_770)).a) != NULL)) && (f_as_subtype_289((*(P917)rt_nil_check(F->e_770)).b) != NULL))) {
F->t_772v = g_ty_bool_998;
F->result_ = f_subtype_compare_761(f_as_subtype_289((*(P917)rt_nil_check(F->e_770)).a), f_as_subtype_289((*(P917)rt_nil_check(F->e_770)).b), &(((P910)rt_nil_check(F->op_2264))->all), rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
goto ret_;
}
if ((f_is_rel_107(&(((P910)rt_nil_check(F->op_2264))->all)) && (!rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("IN", 2))))) {
if ((((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_770)).a)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_770)).a)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_770)).a)).kind) == (((rt_int)1LL))))) {
F->dummy_2288 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_770)).b, NULL, &F->hint_2267));
} else if ((rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->e_770)).a)).kind) == (((rt_int)14LL)))) {
F->hint_2267 = f_peek_type_721((*(P917)rt_nil_check(F->e_770)).b);
}
{
F->a_2289 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_770)).a, F->hint_2267, &F->ta_2265));
F->b_2290 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_770)).b, F->ta_2265, &F->tb_2266));
F->ct_2291 = NULL;
F->ct_2291 = f_base_of_215(F->ta_2265);
F->t_772v = g_ty_bool_998;
if (((rt_r_ichk((*(P923)rt_nil_check(F->ta_2265)).kind) != (((rt_int)11LL))) && (rt_r_ichk((*(P923)rt_nil_check(F->tb_2266)).kind) != (((rt_int)11LL))))) {
f_check_type_224(F->tb_2266, F->ta_2265, rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->ta_2265)).kind) == (((rt_int)11LL)))) {
F->ct_2291 = f_base_of_215(F->tb_2266);
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->ct_2291)).kind) == (((rt_int)5LL)))) {
if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2289), rt_str(", ", 2)), F->b_2290), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2289), rt_str(", ", 2)), F->b_2290), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2289), rt_str(", ", 2)), F->b_2290), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2289), rt_str(", ", 2)), F->b_2290), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2290), rt_str(", ", 2)), F->a_2289), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2290), rt_str(", ", 2)), F->a_2289), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->ct_2291)).kind) == (((rt_int)16LL)))) {
if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), F->a_2289), rt_str(", ", 2)), F->b_2290), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!y_set_eq(", 11), F->a_2289), rt_str(", ", 2)), F->b_2290), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->a_2289), rt_str(", ", 2)), F->b_2290), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->b_2290), rt_str(", ", 2)), F->a_2289), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->a_2289), rt_str(", ", 2)), F->b_2290), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->b_2290), rt_str(", ", 2)), F->a_2289), rt_str(")", 1));
goto ret_;
}
if ((((((((rt_r_ichk((*(P923)rt_nil_check(F->ct_2291)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->ct_2291)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P923)rt_nil_check(F->ct_2291)).kind) == (((rt_int)11LL)))) || (rt_r_ichk((*(P923)rt_nil_check(F->ct_2291)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P923)rt_nil_check(F->ct_2291)).kind) == (((rt_int)12LL)))) && (!rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("=", 1)))) && (!rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("/=", 2))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only = and /= compare values of this type", 41); b_; }));
}
if (f_composite_362(F->ct_2291)) {
if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_386(F->ct_2291, &F->a_2289, &F->b_2290);
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_386(F->ct_2291, &F->a_2289, &F->b_2290)), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2289), rt_str(" == ", 4)), F->b_2290), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2289), rt_str(" != ", 4)), F->b_2290), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2289), rt_str(" ", 1)), (((P910)rt_nil_check(F->op_2264))->all)), rt_str(" ", 1)), F->b_2290), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2292 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_770)).a, F->want_771, &F->ta_2265));
F->b_2293 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->e_770)).b, f_exponent_want_880(&(((P910)rt_nil_check(F->op_2264))->all), F->ta_2265), &F->tb_2266));
if (((rt_r_ichk((*(P923)rt_nil_check(F->ta_2265)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P923)rt_nil_check(F->tb_2266)).kind) == (((rt_int)3LL))))) {
F->t_772v = g_ty_float_999;
if (((rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("+", 1)) || rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("-", 1))) || rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(", 10), F->a_2292), rt_str(" ", 1)), (((P910)rt_nil_check(F->op_2264))->all)), rt_str(" ", 1)), F->b_2293), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(rt_fdiv(", 18), F->a_2292), rt_str(", ", 2)), F->b_2293), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("**", 2))) {
f_check_type_224(F->tb_2266, g_ty_int_997, rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fpow(", 10), F->a_2292), rt_str(", ", 2)), F->b_2293), rt_str(")", 1));
goto ret_;
}
}
f_check_type_224(F->ta_2265, g_ty_int_997, rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
f_check_type_224(F->tb_2266, g_ty_int_997, rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line));
F->t_772v = g_ty_int_997;
if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2292), rt_str(", ", 2)), F->b_2293), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2292), rt_str(", ", 2)), F->b_2293), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2292), rt_str(", ", 2)), F->b_2293), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2292), rt_str(", ", 2)), F->b_2293), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2292), rt_str(", ", 2)), F->b_2293), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P910)rt_nil_check(F->op_2264))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2292), rt_str(", ", 2)), F->b_2293), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_770)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P910)rt_nil_check(F->op_2264))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_772) = F->t_772v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_778(P917 e_774, P923 want_775, P919 ctx_776, P923 *t_777) {
  struct f_constructor_778fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_774 = e_774;
F->want_775 = want_775;
F->ctx_776 = ctx_776;
F->t_777 = t_777;
F->t_777v = *F->t_777;
F->it_2294 = NULL;
F->it_2294 = (*(P917)rt_nil_check(F->e_774)).a;
F->f_2295 = NULL;
F->vt_2296 = NULL;
if (((F->want_775 != NULL) && (rt_r_ichk((*(P923)rt_nil_check(F->want_775)).kind) == (((rt_int)16LL))))) {
F->s_2297 = NULL;
F->s_2297 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_empty_set_298(F->want_775); b_; }));
F->t_777v = F->want_775;
while ((F->it_2294 != NULL)) {
F->v_2298 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->it_2294)).b, (*(P923)rt_nil_check(F->want_775)).elem, &F->vt_2296));
f_check_type_224(F->vt_2296, (*(P923)rt_nil_check(F->want_775)).elem, rt_r_ichk((*(P917)rt_nil_check(F->e_774)).line));
F->s_2297 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_add(", 10), (((P910)rt_nil_check(F->s_2297))->all)), rt_str(", ", 2)), F->v_2298), rt_str(")", 1)); b_; }));
F->it_2294 = (*(P917)rt_nil_check(F->it_2294)).next;
}
F->result_ = (((P910)rt_nil_check(F->s_2297))->all);
goto ret_;
}
if (((F->want_775 != NULL) && (rt_r_ichk((*(P923)rt_nil_check(F->want_775)).kind) == (((rt_int)15LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_774)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P910)rt_nil_check((*(P923)rt_nil_check(F->want_775)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_775 != NULL) && (rt_r_ichk((*(P923)rt_nil_check(F->want_775)).kind) == (((rt_int)6LL))))) {
F->result_ = f_array_cons_792(F->e_774, F->want_775, F->ctx_776, &F->t_777v);
goto ret_;
}
if (((F->want_775 != NULL) && (rt_r_ichk((*(P923)rt_nil_check(F->want_775)).kind) == (((rt_int)17LL))))) {
if ((((((F->it_2294 == NULL) || ((*(P917)rt_nil_check(F->it_2294)).next != NULL)) || ((*(P917)rt_nil_check(F->it_2294)).a == NULL)) || ((*(P917)rt_nil_check((*(P917)rt_nil_check(F->it_2294)).a)).next != NULL)) || (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->it_2294)).a)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_774)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2295 = (*(P923)rt_nil_check(F->want_775)).fields;
{
F->i_2299 = RT_R_IUNDEF;
F->i_2299 = ((rt_int)0LL);
F->tmp_2300 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2295 != NULL) && (!rt_str_eq((((P910)rt_nil_check((*(P925)rt_nil_check(F->f_2295)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->it_2294)).a)).a)).name))->all))))) {
F->i_2299 = rt_add(rt_r_ichk(F->i_2299), ((rt_int)1LL));
F->f_2295 = (*(P925)rt_nil_check(F->f_2295)).next;
}
if ((F->f_2295 == NULL)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_774)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->it_2294)).a)).a)).name))->all)); b_; }));
}
F->t_777v = F->want_775;
g_cons_ctx_988 = (*(P925)rt_nil_check(F->f_2295)).c;
{
F->v_2301 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->it_2294)).b, (*(P925)rt_nil_check(F->f_2295)).t, &F->vt_2296));
f_check_type_224(F->vt_2296, (*(P925)rt_nil_check(F->f_2295)).t, rt_r_ichk((*(P917)rt_nil_check(F->e_774)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->want_775)), rt_str(" ", 1)), F->tmp_2300), rt_str("; ", 2)), F->tmp_2300), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk(F->i_2299))), rt_str("; ", 2)), F->tmp_2300), rt_str(".u.", 3)), f_field_c_17(&(((P910)rt_nil_check((*(P925)rt_nil_check(F->f_2295)).name))->all))), rt_str(" = ", 3)), f_comp_value_782((*(P925)rt_nil_check(F->f_2295)).t, (*(P925)rt_nil_check(F->f_2295)).c, &F->v_2301)), rt_str("; ", 2)), F->tmp_2300), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_775 == NULL) || (rt_r_ichk((*(P923)rt_nil_check(F->want_775)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_774)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_777v = F->want_775;
F->f_2295 = (*(P923)rt_nil_check(F->want_775)).fields;
{
F->tmp_2302 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2303 = NULL;
F->parts_2303 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->want_775)), rt_str(" ", 1)), F->tmp_2302), rt_str(";", 1)); b_; }));
while ((F->it_2294 != NULL)) {
F->k_2304 = NULL;
F->k_2304 = (*(P917)rt_nil_check(F->it_2294)).a;
F->shared_2305 = NULL;
if ((F->k_2304 == NULL)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_774)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2304 != NULL)) {
if (((((F->f_2295 == NULL) || (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->k_2304)).a)).kind) != (((rt_int)7LL)))) || ((*(P917)rt_nil_check(F->k_2304)).b != NULL)) || (!rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->k_2304)).a)).name))->all), (((P910)rt_nil_check((*(P925)rt_nil_check(F->f_2295)).name))->all))))) {
if ((F->f_2295 == NULL)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_774)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_774)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P910)rt_nil_check((*(P925)rt_nil_check(F->f_2295)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P917)rt_nil_check((*(P917)rt_nil_check(F->it_2294)).a)).next == NULL)) {
g_cons_ctx_988 = (*(P925)rt_nil_check(F->f_2295)).c;
{
F->v_2306 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->it_2294)).b, (*(P925)rt_nil_check(F->f_2295)).t, &F->vt_2296));
f_check_type_224(F->vt_2296, (*(P925)rt_nil_check(F->f_2295)).t, rt_r_ichk((*(P917)rt_nil_check(F->e_774)).line));
F->parts_2303 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->parts_2303))->all), rt_str(" ", 1)), F->tmp_2302), rt_str(".", 1)), f_field_c_17(&(((P910)rt_nil_check((*(P925)rt_nil_check(F->f_2295)).name))->all))), rt_str(" = ", 3)), f_comp_value_782((*(P925)rt_nil_check(F->f_2295)).t, (*(P925)rt_nil_check(F->f_2295)).c, &F->v_2306)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2305 == NULL)) {
F->v_2307 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->it_2294)).b, (*(P925)rt_nil_check(F->f_2295)).t, &F->vt_2296));
F->shared_2305 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_224(F->vt_2296, (*(P925)rt_nil_check(F->f_2295)).t, rt_r_ichk((*(P917)rt_nil_check(F->e_774)).line));
F->parts_2303 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->parts_2303))->all), rt_str(" ", 1)), f_ctype_226((*(P925)rt_nil_check(F->f_2295)).t)), rt_str(" ", 1)), (((P910)rt_nil_check(F->shared_2305))->all)), rt_str(" = ", 3)), F->v_2307), rt_str(";", 1)); b_; }));
}
f_check_type_224(F->vt_2296, (*(P925)rt_nil_check(F->f_2295)).t, rt_r_ichk((*(P917)rt_nil_check(F->e_774)).line));
F->parts_2303 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->parts_2303))->all), rt_str(" ", 1)), F->tmp_2302), rt_str(".", 1)), f_field_c_17(&(((P910)rt_nil_check((*(P925)rt_nil_check(F->f_2295)).name))->all))), rt_str(" = ", 3)), f_comp_value_782((*(P925)rt_nil_check(F->f_2295)).t, (*(P925)rt_nil_check(F->f_2295)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_382((*(P925)rt_nil_check(F->f_2295)).t, &(((P910)rt_nil_check(F->shared_2305))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2295 = (*(P925)rt_nil_check(F->f_2295)).next;
F->k_2304 = (*(P917)rt_nil_check(F->k_2304)).next;
}
F->it_2294 = (*(P917)rt_nil_check(F->it_2294)).next;
}
if ((F->f_2295 != NULL)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_774)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->parts_2303))->all), rt_str(" ", 1)), F->tmp_2302), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_777) = F->t_777v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_782(P923 t_779, P919 c_780, rstr *v_781) {
  struct f_comp_value_782fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_779 = t_779;
F->c_780 = c_780;
F->v_781 = v_781;
if (((F->c_780 == NULL) || (((*(P919)rt_nil_check(F->c_780)).lo != NULL) && f_has_at_784(&(((P910)rt_nil_check((*(P919)rt_nil_check(F->c_780)).lo))->all))))) {
F->result_ = f_copy_code_382(F->t_779, &(*F->v_781));
goto ret_;
} else if ((((rt_r_ichk((*(P923)rt_nil_check(F->t_779)).kind) == (((rt_int)5LL))) && ((*(P919)rt_nil_check(F->c_780)).slen != NULL)) && (!f_has_at_784(&(((P910)rt_nil_check((*(P919)rt_nil_check(F->c_780)).slen))->all))))) {
F->result_ = f_copy_code_382(F->t_779, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_781)), rt_str(", ", 2)), (((P910)rt_nil_check((*(P919)rt_nil_check(F->c_780)).slen))->all)), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_205(F->t_779, F->c_780, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_382(F->t_779, &(*F->v_781)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_784(rstr *s_783) {
  struct f_has_at_784fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_783 = s_783;
{ rt_int lo2309 = ((rt_int)1LL), hi2310 = ((rt_int)(((*F->s_783)).len));
for (rt_int it2311 = lo2309; it2311 <= hi2310; it2311++) {
F->i_2308 = it2311;
if ((rt_r_echk(rt_str_get((*F->s_783), F->i_2308)) == 64)) {
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

static rstr f_set_elem_787(P923 st_785, rstr *v_786) {
  struct f_set_elem_787fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_785 = st_785;
F->v_786 = v_786;
F->result_ = (*F->v_786);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_792(P917 e_788, P923 at_789, P919 ctx_790, P923 *t_791) {
  struct f_array_cons_792fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_788 = e_788;
F->at_789 = at_789;
F->ctx_790 = ctx_790;
F->t_791 = t_791;
F->t_791v = *F->t_791;
F->tmp_2312 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2313 = NULL;
F->parts_2313 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->at_789)), rt_str(" ", 1)), F->tmp_2312), rt_str(";", 1)); b_; }));
F->it_2314 = NULL;
F->it_2314 = (*(P917)rt_nil_check(F->e_788)).a;
F->positional_2315 = RT_R_EUNDEF;
F->positional_2315 = 1;
F->t_791v = F->at_789;
while ((F->it_2314 != NULL)) {
if (((*(P917)rt_nil_check(F->it_2314)).a != NULL)) {
F->positional_2315 = 0;
}
F->it_2314 = (*(P917)rt_nil_check(F->it_2314)).next;
}
{ rt_int lo2317 = ((rt_int)1LL), hi2318 = rt_r_ichk((*(P923)rt_nil_check(F->at_789)).ndim);
for (rt_int it2319 = lo2317; it2319 <= hi2318; it2319++) {
F->k_2316 = it2319;
F->lo_2320 = NULL;
F->hi_2321 = NULL;
if ((((F->ctx_790 != NULL) && (f_cons_lo_244(F->ctx_790, F->k_2316) != NULL)) && (!f_has_at_784(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P910)rt_nil_check(f_cons_lo_244(F->ctx_790, F->k_2316)))->all); b_; }))))) {
F->lo_2320 = f_cons_lo_244(F->ctx_790, F->k_2316);
F->hi_2321 = f_cons_hi_247(F->ctx_790, F->k_2316);
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->at_789)).ndim) == ((rt_int)1LL)) && rt_r_echk(F->positional_2315))) {
if (((*(P923)rt_nil_check(f_base_of_215((*(P923)rt_nil_check(F->at_789)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2320 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2320 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2321 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P910)rt_nil_check(F->lo_2320))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_67((*(P917)rt_nil_check(F->e_788)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_788)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2313 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->parts_2313))->all), rt_str(" ", 1)), F->tmp_2312), rt_str(".", 1)), f_dim_lo_234(F->k_2316)), rt_str(" = ", 3)), (((P910)rt_nil_check(F->lo_2320))->all)), rt_str("; ", 2)), F->tmp_2312), rt_str(".", 1)), f_dim_hi_236(F->k_2316)), rt_str(" = ", 3)), (((P910)rt_nil_check(F->hi_2321))->all)), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P923)rt_nil_check(F->at_789)).ndim) == ((rt_int)1LL))) {
F->parts_2313 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->parts_2313))->all), rt_str(" ", 1)), F->tmp_2312), rt_str(".lo2 = ", 7)), F->tmp_2312), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2313 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->parts_2313))->all), rt_str(" rt_int n_", 10)), F->tmp_2312), rt_str(" = ", 3)), f_acnt_241(F->at_789, &F->tmp_2312)), rt_str("; ", 2)), F->tmp_2312), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_226((*(P923)rt_nil_check(F->at_789)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2312), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2312), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2312), rt_str(" + 1);", 6)); b_; }));
F->parts_2313 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->parts_2313))->all), f_fill_items_798((*(P917)rt_nil_check(F->e_788)).a, F->at_789, &F->tmp_2312, NULL, ((rt_int)1LL))); b_; }));
F->parts_2313 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->parts_2313))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2312), rt_str("; i_++) if (seen_", 17)), F->tmp_2312), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2312), rt_str("; })", 4)); b_; }));
F->result_ = (((P910)rt_nil_check(F->parts_2313))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_791) = F->t_791v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_798(P917 items_793, P923 at_794, rstr *tmp_795, P921 prefix_796, rt_int dim_797) {
  struct f_fill_items_798fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_793 = items_793;
F->at_794 = at_794;
F->tmp_795 = tmp_795;
F->prefix_796 = prefix_796;
F->dim_797 = dim_797;
F->it_2322 = NULL;
F->it_2322 = F->items_793;
F->pos_2323 = RT_R_IUNDEF;
F->pos_2323 = ((rt_int)0LL);
F->r_2324 = NULL;
F->r_2324 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2325 = NULL;
while ((F->it_2322 != NULL)) {
if (((*(P917)rt_nil_check(F->it_2322)).a == NULL)) {
if (((F->dim_797 < rt_r_ichk((*(P923)rt_nil_check(F->at_794)).ndim)) && (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->it_2322)).b)).kind) == (((rt_int)14LL))))) {
F->r_2324 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_2324))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_797)), rt_str(" = ", 3)), (*F->tmp_795)), rt_str(".", 1)), f_dim_lo_234(F->dim_797)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2323))), rt_str("; ", 2)), f_fill_items_798((*(P917)rt_nil_check((*(P917)rt_nil_check(F->it_2322)).b)).a, F->at_794, &(*F->tmp_795), f_add_line_803(F->prefix_796, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_797)); b_; })), rt_add(F->dim_797, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2326 = rt_str_copy(f_item_value_808((*(P917)rt_nil_check(F->it_2322)).b, F->at_794, f_e_line_800(F->it_2322), &F->vt_2325));
if (((F->dim_797 == ((rt_int)1LL)) && (rt_r_ichk((*(P923)rt_nil_check(F->at_794)).ndim) > ((rt_int)1LL)))) {
F->r_2324 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_2324))->all), rt_str(" { ", 3)), F->v_2326), rt_str(" if (", 5)), f_itos_7(rt_r_ichk(F->pos_2323))), rt_str(" >= n_", 6)), (*F->tmp_795)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_795)), rt_str(".p[", 3)), f_itos_7(rt_r_ichk(F->pos_2323))), rt_str("] = ", 4)), f_copy_code_382((*(P923)rt_nil_check(F->at_794)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_795)), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->pos_2323))), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2324 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_2324))->all), rt_str(" { ", 3)), F->v_2326), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_797)), rt_str(" = ", 3)), (*F->tmp_795)), rt_str(".", 1)), f_dim_lo_234(F->dim_797)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2323))), rt_str("; ", 2)), f_store_at_818(F->at_794, &(*F->tmp_795), f_add_line_803(F->prefix_796, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_797)); b_; })), F->dim_797)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2323 = rt_add(rt_r_ichk(F->pos_2323), ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_797, f_list_len_67((*(P917)rt_nil_check(F->it_2322)).a)), ((rt_int)1LL)) == rt_r_ichk((*(P923)rt_nil_check(F->at_794)).ndim))) {
F->k_2327 = NULL;
F->k_2327 = (*(P917)rt_nil_check(F->it_2322)).a;
F->d_2328 = RT_R_IUNDEF;
F->d_2328 = F->dim_797;
F->pre_2329 = NULL;
F->pre_2329 = F->prefix_796;
F->loops_2330 = NULL;
F->loops_2330 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2331 = NULL;
F->ends_2331 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2332 = rt_str_copy(f_item_value_808((*(P917)rt_nil_check(F->it_2322)).b, F->at_794, rt_r_ichk((*(P917)rt_nil_check(F->it_2322)).line), &F->vt_2325));
while ((F->k_2327 != NULL)) {
F->xv_2333 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(rt_r_ichk(F->d_2328))));
F->loops_2330 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->loops_2330))->all), f_key_loop_813(F->k_2327, F->at_794, rt_r_ichk(F->d_2328), &F->xv_2333)); b_; }));
F->ends_2331 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->ends_2331))->all), rt_str(" }", 2)); b_; }));
F->pre_2329 = f_add_line_803(F->pre_2329, &F->xv_2333);
F->d_2328 = rt_add(rt_r_ichk(F->d_2328), ((rt_int)1LL));
F->k_2327 = (*(P917)rt_nil_check(F->k_2327)).next;
}
F->r_2324 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_2324))->all), rt_str(" { ", 3)), F->v_2332), (((P910)rt_nil_check(F->loops_2330))->all)), rt_str(" ", 1)), f_store_at_818(F->at_794, &(*F->tmp_795), F->pre_2329, rt_r_ichk((*(P923)rt_nil_check(F->at_794)).ndim))), (((P910)rt_nil_check(F->ends_2331))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_797 == rt_r_ichk((*(P923)rt_nil_check(F->at_794)).ndim)) || (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->it_2322)).b)).kind) == (((rt_int)14LL))))) {
F->k_2334 = NULL;
F->k_2334 = (*(P917)rt_nil_check(F->it_2322)).a;
while ((F->k_2334 != NULL)) {
F->xv_2335 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_797)));
if ((F->dim_797 < rt_r_ichk((*(P923)rt_nil_check(F->at_794)).ndim))) {
F->r_2324 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_2324))->all), rt_str(" {", 2)), f_key_loop_813(F->k_2334, F->at_794, F->dim_797, &F->xv_2335)), rt_str(" ", 1)), f_fill_items_798((*(P917)rt_nil_check((*(P917)rt_nil_check(F->it_2322)).b)).a, F->at_794, &(*F->tmp_795), f_add_line_803(F->prefix_796, &F->xv_2335), rt_add(F->dim_797, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2336 = rt_str_copy(f_item_value_808((*(P917)rt_nil_check(F->it_2322)).b, F->at_794, rt_r_ichk((*(P917)rt_nil_check(F->it_2322)).line), &F->vt_2325));
F->r_2324 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_2324))->all), rt_str(" { ", 3)), F->v_2336), f_key_loop_813(F->k_2334, F->at_794, F->dim_797, &F->xv_2335)), rt_str(" ", 1)), f_store_at_818(F->at_794, &(*F->tmp_795), f_add_line_803(F->prefix_796, &F->xv_2335), F->dim_797)), rt_str(" } }", 4)); b_; }));
}
F->k_2334 = (*(P917)rt_nil_check(F->k_2334)).next;
}
} else {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->it_2322)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub(rt_r_ichk((*(P923)rt_nil_check(F->at_794)).ndim), F->dim_797), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2322 = (*(P917)rt_nil_check(F->it_2322)).next;
}
F->result_ = (((P910)rt_nil_check(F->r_2324))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_800(P917 e_799) {
  struct f_e_line_800fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_799 = e_799;
F->result_ = rt_r_ichk((*(P917)rt_nil_check(F->e_799)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P921 f_add_line_803(P921 l_801, rstr *s_802) {
  struct f_add_line_803fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_801 = l_801;
F->s_802 = s_802;
F->r_2337 = NULL;
F->tail_2338 = NULL;
F->x_2339 = NULL;
F->p_2340 = NULL;
F->p_2340 = F->l_801;
while ((F->p_2340 != NULL)) {
{ R922 *cell2341 = rt_alloc(sizeof(R922));
(*cell2341).s = NULL;
(*cell2341).next = NULL;
F->x_2339 = cell2341;
}
(*(P921)rt_nil_check(F->x_2339)).s = (*(P921)rt_nil_check(F->p_2340)).s;
if ((F->tail_2338 == NULL)) {
F->r_2337 = F->x_2339;
} else {
(*(P921)rt_nil_check(F->tail_2338)).next = F->x_2339;
}
F->tail_2338 = F->x_2339;
F->p_2340 = (*(P921)rt_nil_check(F->p_2340)).next;
}
{ R922 *cell2342 = rt_alloc(sizeof(R922));
(*cell2342).s = NULL;
(*cell2342).next = NULL;
F->x_2339 = cell2342;
}
(*(P921)rt_nil_check(F->x_2339)).s = f_mk_3(&(*F->s_802));
if ((F->tail_2338 == NULL)) {
F->r_2337 = F->x_2339;
} else {
(*(P921)rt_nil_check(F->tail_2338)).next = F->x_2339;
}
F->result_ = F->r_2337;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_808(P917 e_804, P923 at_805, rt_int line_806, P923 *vt_807) {
  struct f_item_value_808fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_804 = e_804;
F->at_805 = at_805;
F->line_806 = line_806;
F->vt_807 = vt_807;
F->vt_807v = *F->vt_807;
g_cons_ctx_988 = (*(P923)rt_nil_check(F->at_805)).elemcons;
{
F->v_2343 = rt_str_copy(f_gexpr_705(F->e_804, (*(P923)rt_nil_check(F->at_805)).elem, &F->vt_807v));
f_check_type_224(F->vt_807v, (*(P923)rt_nil_check(F->at_805)).elem, F->line_806);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_226((*(P923)rt_nil_check(F->at_805)).elem), rt_str(" v_ = ", 6)), f_comp_value_782((*(P923)rt_nil_check(F->at_805)).elem, (*(P923)rt_nil_check(F->at_805)).elemcons, &F->v_2343)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_807) = F->vt_807v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_813(P917 k_809, P923 at_810, rt_int d_811, rstr *xv_812) {
  struct f_key_loop_813fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_809 = k_809;
F->at_810 = at_810;
F->d_811 = d_811;
F->xv_812 = xv_812;
F->it_2344 = NULL;
F->lo_2345 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->k_809)).a, f_idx_type_250(F->at_810, F->d_811), &F->it_2344));
f_check_type_224(F->it_2344, f_idx_type_250(F->at_810, F->d_811), rt_r_ichk((*(P917)rt_nil_check(F->k_809)).line));
if (((*(P917)rt_nil_check(F->k_809)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_812)), rt_str(" = ", 3)), F->lo_2345), rt_str(";", 1));
goto ret_;
}
{
F->hi_2346 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->k_809)).b, f_idx_type_250(F->at_810, F->d_811), &F->it_2344));
f_check_type_224(F->it_2344, f_idx_type_250(F->at_810, F->d_811), rt_r_ichk((*(P917)rt_nil_check(F->k_809)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_812)), rt_str(" = ", 3)), F->lo_2345), rt_str(", h", 3)), (*F->xv_812)), rt_str(" = ", 3)), F->hi_2346), rt_str("; ", 2)), (*F->xv_812)), rt_str(" <= h", 5)), (*F->xv_812)), rt_str("; ", 2)), (*F->xv_812)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_818(P923 at_814, rstr *tmp_815, P921 xs_816, rt_int n_817) {
  struct f_store_at_818fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_814 = at_814;
F->tmp_815 = tmp_815;
F->xs_816 = xs_816;
F->n_817 = n_817;
F->off_2347 = NULL;
F->x_2348 = NULL;
F->x_2348 = F->xs_816;
F->k_2349 = RT_R_IUNDEF;
F->k_2349 = ((rt_int)0LL);
while ((F->x_2348 != NULL)) {
F->k_2349 = rt_add(rt_r_ichk(F->k_2349), ((rt_int)1LL));
{
F->l_2350 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_815), rt_str(".", 1)), f_dim_lo_234(rt_r_ichk(F->k_2349))));
F->h_2351 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_815), rt_str(".", 1)), f_dim_hi_236(rt_r_ichk(F->k_2349))));
if ((F->off_2347 == NULL)) {
F->off_2347 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P910)rt_nil_check((*(P921)rt_nil_check(F->x_2348)).s))->all)), rt_str(", ", 2)), F->l_2350), rt_str(", ", 2)), F->h_2351), rt_str(") - ", 4)), F->l_2350), rt_str(")", 1)); b_; }));
} else {
F->off_2347 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P910)rt_nil_check(F->off_2347))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2350), rt_str(", ", 2)), F->h_2351), rt_str(") + rt_index(", 13)), (((P910)rt_nil_check((*(P921)rt_nil_check(F->x_2348)).s))->all)), rt_str(", ", 2)), F->l_2350), rt_str(", ", 2)), F->h_2351), rt_str(") - ", 4)), F->l_2350), rt_str(")", 1)); b_; }));
}
}
F->x_2348 = (*(P921)rt_nil_check(F->x_2348)).next;
}
if ((rt_r_ichk(F->k_2349) != rt_r_ichk((*(P923)rt_nil_check(F->at_814)).ndim))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7(rt_r_ichk((*(P923)rt_nil_check(F->at_814)).ndim))), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P910)rt_nil_check(F->off_2347))->all)), rt_str("; ", 2)), (*F->tmp_815)), rt_str(".p[o_] = ", 9)), f_copy_code_382((*(P923)rt_nil_check(F->at_814)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_815)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_821(P927 y_819, P917 args_820) {
  struct f_fits_821fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_819 = y_819;
F->args_820 = args_820;
F->a_2352 = NULL;
F->a_2352 = F->args_820;
F->pm_2353 = NULL;
F->pm_2353 = (*(P927)rt_nil_check(F->y_819)).params;
F->t_2354 = NULL;
F->saved_2355 = NULL;
F->saved_2355 = g_code_967;
F->ok_2356 = RT_R_EUNDEF;
F->ok_2356 = 1;
F->lv_2357 = NULL;
F->lc_2358 = NULL;
F->ro_2359 = RT_R_EUNDEF;
g_trial_995 = rt_add(rt_r_ichk(g_trial_995), ((rt_int)1LL));
g_code_967 = f_new_buffer_24();
{ rt_frame xf2360;
if (RT_TRY(xf2360)) {
while (((rt_r_echk(F->ok_2356) && (F->a_2352 != NULL)) && (F->pm_2353 != NULL))) {
if (((rt_r_ichk((*(P929)rt_nil_check(F->pm_2353)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P929)rt_nil_check(F->pm_2353)).mode) == (((rt_int)3LL))))) {
f_lvalue_674(F->a_2352, &F->lv_2357, &F->t_2354, &F->lc_2358, &F->ro_2359);
} else {
F->v_2362 = rt_str_copy(f_gexpr_705(F->a_2352, (*(P929)rt_nil_check(F->pm_2353)).t, &F->t_2354));
}
if ((!(f_same_213(F->t_2354, (*(P929)rt_nil_check(F->pm_2353)).t) || ((rt_r_ichk((*(P923)rt_nil_check(F->t_2354)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P923)rt_nil_check((*(P929)rt_nil_check(F->pm_2353)).t)).kind) == (((rt_int)8LL))))))) {
F->ok_2356 = 0;
}
F->a_2352 = (*(P917)rt_nil_check(F->a_2352)).next;
F->pm_2353 = (*(P929)rt_nil_check(F->pm_2353)).next;
}
if (((F->a_2352 != NULL) || (F->pm_2353 != NULL))) {
F->ok_2356 = 0;
}
RT_POP(xf2360);
} else {
RT_POP(xf2360);
int x2361 = rt_xcur;
if (0 || x2361 == ex_compile_error_1) {
F->ok_2356 = 0;
} else {
rt_raise(x2361);
}
}
}
g_trial_995 = rt_sub(rt_r_ichk(g_trial_995), ((rt_int)1LL));
g_code_967 = F->saved_2355;
F->result_ = rt_r_echk(F->ok_2356);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P927 f_resolve_overload_827(rstr *name_822, P917 tt_823, P917 args_824, int is_stmt_825, rt_int line_826) {
  struct f_resolve_overload_827fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_822 = name_822;
F->tt_823 = tt_823;
F->args_824 = args_824;
F->is_stmt_825 = is_stmt_825;
F->line_826 = line_826;
F->y_2363 = NULL;
F->first_2364 = NULL;
F->n_2365 = RT_R_IUNDEF;
F->n_2365 = ((rt_int)0LL);
{ rt_int lo2367 = ((rt_int)1LL), hi2368 = ((rt_int)3LL);
for (rt_int it2369 = lo2367; it2369 <= hi2368; it2369++) {
F->pass_2366 = it2369;
F->y_2363 = f_overload_chain_833(&(*F->name_822), F->pass_2366);
while ((F->y_2363 != NULL)) {
if (((rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_2363)).name))->all), (*F->name_822)) && ((rt_r_ichk((*(P927)rt_nil_check(F->y_2363)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P927)rt_nil_check(F->y_2363)).kind) == (((rt_int)4LL))))) && ((F->pass_2366 != ((rt_int)1LL)) || (rt_r_ichk((*(P927)rt_nil_check(F->y_2363)).depth) >= rt_r_ichk(g_gdepth_986))))) {
F->n_2365 = rt_add(rt_r_ichk(F->n_2365), ((rt_int)1LL));
if ((F->first_2364 == NULL)) {
F->first_2364 = F->y_2363;
}
if (((((rt_r_ichk((*(P927)rt_nil_check(F->y_2363)).kind) == (((rt_int)4LL))) == F->is_stmt_825) && f_tt_fits_830(F->y_2363, F->tt_823)) && f_fits_821(F->y_2363, F->args_824))) {
F->result_ = F->y_2363;
goto ret_;
}
}
F->y_2363 = (*(P927)rt_nil_check(F->y_2363)).chain;
}
}
}
if (f_is_builtin_835(&(*F->name_822))) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk(F->n_2365) > ((rt_int)1LL))) {
f_fail_23(F->line_826, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_822)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2364;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_830(P927 y_828, P917 tt_829) {
  struct f_tt_fits_830fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_828 = y_828;
F->tt_829 = tt_829;
F->f_2370 = NULL;
F->a_2371 = NULL;
F->saved_2372 = NULL;
F->saved_2372 = g_code_967;
F->ok_2373 = RT_R_EUNDEF;
F->ok_2373 = 1;
if ((((*(P927)rt_nil_check(F->y_828)).decl == NULL) || ((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_828)).decl)).e == NULL))) {
F->result_ = (F->tt_829 == NULL);
goto ret_;
} else if ((F->tt_829 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2370 = (*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_828)).decl)).e;
F->a_2371 = F->tt_829;
g_trial_995 = rt_add(rt_r_ichk(g_trial_995), ((rt_int)1LL));
g_code_967 = f_new_buffer_24();
{ rt_frame xf2374;
if (RT_TRY(xf2374)) {
while (((rt_r_echk(F->ok_2373) && (F->f_2370 != NULL)) && (F->a_2371 != NULL))) {
F->fc_2376 = NULL;
F->ac_2377 = NULL;
F->fst_2378 = NULL;
F->fst_2378 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P917)rt_nil_check(F->f_2370)).line));
F->ft_2379 = NULL;
F->at_2380 = NULL;
(*(P917)rt_nil_check(F->fst_2378)).name = (*(P917)rt_nil_check(F->f_2370)).name;
F->ft_2379 = f_resolve_subtype_260(F->fst_2378, &F->fc_2376);
if ((rt_r_ichk((*(P917)rt_nil_check(F->a_2371)).kind) >= (((rt_int)70LL)))) {
F->at_2380 = f_resolve_subtype_260(F->a_2371, &F->ac_2377);
} else {
F->ast_2381 = NULL;
F->ast_2381 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P917)rt_nil_check(F->a_2371)).line));
(*(P917)rt_nil_check(F->ast_2381)).name = (*(P917)rt_nil_check(F->a_2371)).name;
F->at_2380 = f_resolve_subtype_260(F->ast_2381, &F->ac_2377);
}
F->ok_2373 = f_same_213(F->ft_2379, F->at_2380);
F->f_2370 = (*(P917)rt_nil_check(F->f_2370)).next;
F->a_2371 = (*(P917)rt_nil_check(F->a_2371)).next;
}
F->ok_2373 = ((rt_r_echk(F->ok_2373) && (F->f_2370 == NULL)) && (F->a_2371 == NULL));
RT_POP(xf2374);
} else {
RT_POP(xf2374);
int x2375 = rt_xcur;
if (0 || x2375 == ex_compile_error_1) {
F->ok_2373 = 0;
} else {
rt_raise(x2375);
}
}
}
g_trial_995 = rt_sub(rt_r_ichk(g_trial_995), ((rt_int)1LL));
g_code_967 = F->saved_2372;
F->result_ = rt_r_echk(F->ok_2373);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P927 f_overload_chain_833(rstr *name_831, rt_int pass_832) {
  struct f_overload_chain_833fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_831 = name_831;
F->pass_832 = pass_832;
if (((g_genv_954 == NULL) && (F->pass_832 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_832 == ((rt_int)2LL))) {
F->result_ = ({ A933 b_ = (((P931)rt_nil_check(g_genv_954))->all); b_.p[(rt_index(f_hash_153(&(*F->name_831)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A933 b_ = (((P931)rt_nil_check(g_table_953))->all); b_.p[(rt_index(f_hash_153(&(*F->name_831)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_835(rstr *n_834) {
  struct f_is_builtin_835fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_834 = n_834;
F->result_ = (((((((((((((((rt_str_eq((*F->n_834), rt_str("ABS", 3)) || rt_str_eq((*F->n_834), rt_str("POS", 3))) || rt_str_eq((*F->n_834), rt_str("SUCC", 4))) || rt_str_eq((*F->n_834), rt_str("PRED", 4))) || rt_str_eq((*F->n_834), rt_str("SQRT", 4))) || rt_str_eq((*F->n_834), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_834), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_834), rt_str("WRITE", 5))) || rt_str_eq((*F->n_834), rt_str("READLN", 6))) || rt_str_eq((*F->n_834), rt_str("SEND", 4))) || rt_str_eq((*F->n_834), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_834), rt_str("DELAY", 5))) || rt_str_eq((*F->n_834), rt_str("TIME", 4))) || rt_str_eq((*F->n_834), rt_str("CNVT", 4))) || rt_str_eq((*F->n_834), rt_str("FORMAT", 6))) || f_is_low_level_837(&(*F->n_834)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_837(rstr *n_836) {
  struct f_is_low_level_837fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_836 = n_836;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_836), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_836), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_836), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_836), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_836), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_836), rt_str("LOCK", 4))) || rt_str_eq((*F->n_836), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_836), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_836), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_836), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_836), rt_str("WAITING", 7))) || rt_str_eq((*F->n_836), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_836), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_836), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_836), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_836), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_836), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_836), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_836), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_841(P917 tt_838, rt_int line_839, P923 *t_840) {
  struct f_me_high_841fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_838 = tt_838;
F->line_839 = line_839;
F->t_840 = t_840;
F->t_840v = *F->t_840;
F->c_2382 = NULL;
if ((F->tt_838 == NULL)) {
f_fail_23(F->line_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_840v = f_resolve_subtype_260(F->tt_838, &F->c_2382);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_226(F->t_840v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_843(F->t_840v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_840) = F->t_840v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_843(P923 t_842) {
  struct f_type_tag_843fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_842 = t_842;
if (((*(P923)rt_nil_check(F->t_842)).name != NULL)) {
F->result_ = (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_842)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_846(P917 e_844, rstr *name_845) {
  struct f_lock_ref_846fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_844 = e_844;
F->name_845 = name_845;
F->lv_2383 = NULL;
F->t_2384 = NULL;
F->c_2385 = NULL;
F->ro_2386 = RT_R_EUNDEF;
f_lvalue_674(F->e_844, &F->lv_2383, &F->t_2384, &F->c_2385, &F->ro_2386);
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_2384)).kind) != (((rt_int)13LL)))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_844)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_845), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P910)rt_nil_check(F->lv_2383))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P927 f_user_op_849(rstr *op_847, P917 args_848) {
  struct f_user_op_849fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_847 = op_847;
F->args_848 = args_848;
F->y_2387 = NULL;
{ rt_int lo2389 = ((rt_int)1LL), hi2390 = ((rt_int)3LL);
for (rt_int it2391 = lo2389; it2391 <= hi2390; it2391++) {
F->pass_2388 = it2391;
F->y_2387 = f_overload_chain_833(&(*F->op_847), F->pass_2388);
while ((F->y_2387 != NULL)) {
if ((((rt_str_eq((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_2387)).name))->all), (*F->op_847)) && (rt_r_ichk((*(P927)rt_nil_check(F->y_2387)).kind) == (((rt_int)3LL)))) && ((F->pass_2388 != ((rt_int)1LL)) || (rt_r_ichk((*(P927)rt_nil_check(F->y_2387)).depth) >= rt_r_ichk(g_gdepth_986)))) && f_fits_821(F->y_2387, F->args_848))) {
F->result_ = F->y_2387;
goto ret_;
}
F->y_2387 = (*(P927)rt_nil_check(F->y_2387)).chain;
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

static rstr f_gcall_853(P917 e_850, int is_stmt_851, P923 *t_852) {
  struct f_gcall_853fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_850 = e_850;
F->is_stmt_851 = is_stmt_851;
F->t_852 = t_852;
F->t_852v = *F->t_852;
F->gd_2392 = NULL;
F->fn_2393 = NULL;
F->fn_2393 = (*(P917)rt_nil_check(F->e_850)).a;
F->tt_2394 = NULL;
F->y_2395 = NULL;
F->args_2396 = NULL;
F->args_2396 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2397 = NULL;
F->a_2397 = (*(P917)rt_nil_check(F->e_850)).b;
F->pm_2398 = NULL;
F->lt_2399 = NULL;
F->vt_2400 = NULL;
F->lv_2401 = NULL;
F->lc_2402 = NULL;
F->ro_2403 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P917)rt_nil_check(F->fn_2393)).kind) == (((rt_int)12LL)))) {
F->tt_2394 = (*(P917)rt_nil_check(F->fn_2393)).b;
F->fn_2393 = (*(P917)rt_nil_check(F->fn_2393)).a;
}
F->y_2395 = f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_2393)).name))->all));
if ((F->y_2395 == NULL)) {
F->result_ = f_builtin_906(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_2393)).name))->all), F->tt_2394, (*(P917)rt_nil_check(F->e_850)).b, rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line), F->is_stmt_851, &F->t_852v);
goto ret_;
}
if ((((rt_r_ichk((*(P927)rt_nil_check(F->y_2395)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P927)rt_nil_check(F->y_2395)).kind) != (((rt_int)4LL)))) && (rt_r_ichk((*(P927)rt_nil_check(F->y_2395)).kind) != (((rt_int)10LL))))) {
F->alt_2404 = NULL;
F->alt_2404 = f_resolve_overload_827(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_2393)).name))->all), F->tt_2394, (*(P917)rt_nil_check(F->e_850)).b, F->is_stmt_851, rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line));
if ((F->alt_2404 != NULL)) {
F->y_2395 = F->alt_2404;
} else if (f_is_builtin_835(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_2393)).name))->all))) {
F->result_ = f_builtin_906(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_2393)).name))->all), F->tt_2394, (*(P917)rt_nil_check(F->e_850)).b, rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line), F->is_stmt_851, &F->t_852v);
goto ret_;
}
}
if ((rt_r_ichk((*(P927)rt_nil_check(F->y_2395)).kind) == (((rt_int)10LL)))) {
F->gd_2392 = (*(P927)rt_nil_check(F->y_2395)).decl;
F->y_2395 = f_instantiate_650(F->y_2395, F->tt_2394, (*(P917)rt_nil_check(F->e_850)).b, rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line));
} else if (((rt_r_ichk((*(P927)rt_nil_check(F->y_2395)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P927)rt_nil_check(F->y_2395)).kind) == (((rt_int)4LL))))) {
F->y_2395 = f_resolve_overload_827(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_2393)).name))->all), F->tt_2394, (*(P917)rt_nil_check(F->e_850)).b, F->is_stmt_851, rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line));
if ((F->y_2395 == NULL)) {
F->result_ = f_builtin_906(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_2393)).name))->all), F->tt_2394, (*(P917)rt_nil_check(F->e_850)).b, rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line), F->is_stmt_851, &F->t_852v);
goto ret_;
}
}
if (((rt_r_ichk((*(P927)rt_nil_check(F->y_2395)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P927)rt_nil_check(F->y_2395)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_2393)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_867(F->y_2395, rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line));
if (((*(P927)rt_nil_check(F->y_2395)).capn != NULL)) {
F->cr_2405 = NULL;
F->cr_2405 = g_caps_972;
while ((F->cr_2405 != NULL)) {
if (((*(P944)rt_nil_check(F->cr_2405)).d == (*(P927)rt_nil_check(F->y_2395)).capn)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_2395)).name))->all), rt_str(" is a normal function with an imports list: it may not be invoked inside its capsule", 84)); b_; }));
}
F->cr_2405 = (*(P944)rt_nil_check(F->cr_2405)).next;
}
}
if ((F->is_stmt_851 && (rt_r_ichk((*(P927)rt_nil_check(F->y_2395)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_2393)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_851) && (rt_r_ichk((*(P927)rt_nil_check(F->y_2395)).kind) != (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_2393)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2398 = (*(P927)rt_nil_check(F->y_2395)).params;
if ((rt_r_ichk((*(P927)rt_nil_check(F->y_2395)).level) > ((rt_int)0LL))) {
F->args_2396 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2407 = ((rt_int)1LL), hi2408 = rt_sub(rt_r_ichk(g_cur_level_970), rt_r_ichk((*(P927)rt_nil_check(F->y_2395)).level));
for (rt_int it2409 = lo2407; it2409 <= hi2408; it2409++) {
F->i_2406 = it2409;
F->args_2396 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->args_2396))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2397 != NULL) && (F->pm_2398 != NULL))) {
if ((((rt_int)(((((P910)rt_nil_check(F->args_2396))->all)).len)) > ((rt_int)0LL))) {
F->args_2396 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->args_2396))->all), rt_str(", ", 2)); b_; }));
}
if (((rt_r_ichk((*(P929)rt_nil_check(F->pm_2398)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P929)rt_nil_check(F->pm_2398)).mode) == (((rt_int)3LL))))) {
f_lvalue_674(F->a_2397, &F->lv_2401, &F->lt_2399, &F->lc_2402, &F->ro_2403);
if (rt_r_echk(F->ro_2403)) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check((*(P929)rt_nil_check(F->pm_2398)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_224(F->lt_2399, (*(P929)rt_nil_check(F->pm_2398)).t, rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line));
F->args_2396 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->args_2396))->all), rt_str("&", 1)), (((P910)rt_nil_check(F->lv_2401))->all)), f_actual_bounds_899((*(P929)rt_nil_check(F->pm_2398)).t, F->lt_2399, F->lc_2402)); b_; }));
} else if (((rt_r_ichk((*(P929)rt_nil_check(F->pm_2398)).mode) == (((rt_int)4LL))) && f_is_lvalue_668(F->a_2397))) {
f_lvalue_674(F->a_2397, &F->lv_2401, &F->lt_2399, &F->lc_2402, &F->ro_2403);
f_check_type_224(F->lt_2399, (*(P929)rt_nil_check(F->pm_2398)).t, rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line));
F->args_2396 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->args_2396))->all), rt_str("&", 1)), (((P910)rt_nil_check(F->lv_2401))->all)), f_actual_bounds_899((*(P929)rt_nil_check(F->pm_2398)).t, F->lt_2399, F->lc_2402)); b_; }));
} else if ((rt_r_ichk((*(P929)rt_nil_check(F->pm_2398)).mode) == (((rt_int)4LL)))) {
F->v_2410 = rt_str_copy(f_gexpr_in_713(F->a_2397, (*(P929)rt_nil_check(F->pm_2398)).t, (*(P929)rt_nil_check(F->pm_2398)).c, &F->vt_2400));
F->ct_2411 = rt_str_copy(f_ctype_226((*(P929)rt_nil_check(F->pm_2398)).t));
f_check_type_224(F->vt_2400, (*(P929)rt_nil_check(F->pm_2398)).t, rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line));
F->args_2396 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->args_2396))->all), rt_str("({ ", 3)), F->ct_2411), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2411), rt_str(")); *b_ = ", 10)), F->v_2410), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_178((*(P929)rt_nil_check(F->pm_2398)).t)) {
F->args_2396 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->args_2396))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2412 = rt_str_copy(f_gexpr_in_713(F->a_2397, (*(P929)rt_nil_check(F->pm_2398)).t, (*(P929)rt_nil_check(F->pm_2398)).c, &F->vt_2400));
f_check_type_224(F->vt_2400, (*(P929)rt_nil_check(F->pm_2398)).t, rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line));
F->args_2396 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->args_2396))->all), F->v_2412); b_; }));
}
F->a_2397 = (*(P917)rt_nil_check(F->a_2397)).next;
F->pm_2398 = (*(P929)rt_nil_check(F->pm_2398)).next;
}
if (((F->a_2397 != NULL) || (F->pm_2398 != NULL))) {
f_fail_23(rt_r_ichk((*(P917)rt_nil_check(F->e_850)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check((*(P917)rt_nil_check(F->fn_2393)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_67((*(P917)rt_nil_check(F->e_850)).b), f_list_len_67(F->a_2397)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_852v = (*(P927)rt_nil_check(F->y_2395)).result;
if ((F->gd_2392 != NULL)) {
F->chk_2413 = rt_str_copy(f_same_subtypes_872(F->gd_2392, (*(P917)rt_nil_check(F->e_850)).b));
if ((!rt_str_eq(F->chk_2413, rt_str("", 0)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), F->chk_2413), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("generic subtype", 15)), f_q_18()), rt_str("); ", 3)), (((P910)rt_nil_check((*(P927)rt_nil_check(F->y_2395)).cname))->all)), rt_str("(", 1)), (((P910)rt_nil_check(F->args_2396))->all)), rt_str("); })", 5));
goto ret_;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_2395)).cname))->all), rt_str("(", 1)), (((P910)rt_nil_check(F->args_2396))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_852) = F->t_852v;
  RT_FPOP();
  return F->result_;
}

static P921 f_requires_855(P927 y_854) {
  struct f_requires_855fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_854 = y_854;
if (rt_r_echk((*(P927)rt_nil_check(F->y_854)).reqdone)) {
F->result_ = (*(P927)rt_nil_check(F->y_854)).reqs;
goto ret_;
}
(*(P927)rt_nil_check(F->y_854)).reqdone = 1;
if ((((*(P927)rt_nil_check(F->y_854)).decl != NULL) && (((rt_r_ichk((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_854)).decl)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_854)).decl)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_854)).decl)).kind) == (((rt_int)50LL)))))) {
F->imp_2414 = NULL;
F->imp_2414 = (*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_854)).decl)).d;
while ((F->imp_2414 != NULL)) {
f_add_req_858(F->y_854, &(((P910)rt_nil_check((*(P917)rt_nil_check(F->imp_2414)).name))->all));
F->imp_2414 = (*(P917)rt_nil_check(F->imp_2414)).next;
}
f_require_calls_861(F->y_854, (*(P917)rt_nil_check((*(P927)rt_nil_check(F->y_854)).decl)).c);
}
F->result_ = (*(P927)rt_nil_check(F->y_854)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_858(P927 y_856, rstr *name_857) {
  struct f_add_req_858fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_856 = y_856;
F->name_857 = name_857;
F->l_2415 = NULL;
if ((!f_seen_name_393((*(P927)rt_nil_check(F->y_856)).reqs, &(*F->name_857)))) {
{ R922 *cell2416 = rt_alloc(sizeof(R922));
(*cell2416).s = NULL;
(*cell2416).next = NULL;
F->l_2415 = cell2416;
}
(*(P921)rt_nil_check(F->l_2415)).s = f_mk_3(&(*F->name_857));
(*(P921)rt_nil_check(F->l_2415)).next = (*(P927)rt_nil_check(F->y_856)).reqs;
(*(P927)rt_nil_check(F->y_856)).reqs = F->l_2415;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_861(P927 y_859, P917 e_860) {
  struct f_require_calls_861fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_859 = y_859;
F->e_860 = e_860;
F->x_2417 = NULL;
F->x_2417 = F->e_860;
while ((F->x_2417 != NULL)) {
if ((((((rt_r_ichk((*(P917)rt_nil_check(F->x_2417)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P917)rt_nil_check(F->x_2417)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P917)rt_nil_check(F->x_2417)).kind) == (((rt_int)50LL)))) || (rt_r_ichk((*(P917)rt_nil_check(F->x_2417)).kind) == (((rt_int)47LL)))) || (rt_r_ichk((*(P917)rt_nil_check(F->x_2417)).kind) == (((rt_int)51LL))))) {
F->x_2417 = (*(P917)rt_nil_check(F->x_2417)).next;
} else {
F->callee_2418 = NULL;
if (((((rt_r_ichk((*(P917)rt_nil_check(F->x_2417)).kind) == (((rt_int)10LL))) || (rt_r_ichk((*(P917)rt_nil_check(F->x_2417)).kind) == (((rt_int)21LL)))) && ((*(P917)rt_nil_check(F->x_2417)).a != NULL)) && (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->x_2417)).a)).kind) == (((rt_int)7LL))))) {
F->callee_2418 = (*(P917)rt_nil_check(F->x_2417)).a;
}
if ((F->callee_2418 != NULL)) {
F->z_2419 = NULL;
F->z_2419 = f_lookup_155(&(((P910)rt_nil_check((*(P917)rt_nil_check(F->callee_2418)).name))->all));
if ((((F->z_2419 != NULL) && (F->z_2419 != F->y_859)) && ((rt_r_ichk((*(P927)rt_nil_check(F->z_2419)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P927)rt_nil_check(F->z_2419)).kind) == (((rt_int)3LL)))))) {
F->l_2420 = NULL;
F->l_2420 = f_requires_855(F->z_2419);
while ((F->l_2420 != NULL)) {
f_add_req_858(F->y_859, &(((P910)rt_nil_check((*(P921)rt_nil_check(F->l_2420)).s))->all));
F->l_2420 = (*(P921)rt_nil_check(F->l_2420)).next;
}
}
}
if (((*(P917)rt_nil_check(F->x_2417)).a != NULL)) {
f_require_calls_861(F->y_859, (*(P917)rt_nil_check(F->x_2417)).a);
}
if (((*(P917)rt_nil_check(F->x_2417)).b != NULL)) {
f_require_calls_861(F->y_859, (*(P917)rt_nil_check(F->x_2417)).b);
}
if (((*(P917)rt_nil_check(F->x_2417)).c != NULL)) {
f_require_calls_861(F->y_859, (*(P917)rt_nil_check(F->x_2417)).c);
}
F->x_2417 = (*(P917)rt_nil_check(F->x_2417)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_864(P917 elems_862, rstr *name_863) {
  struct f_declared_in_864fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_862 = elems_862;
F->name_863 = name_863;
F->e_2421 = NULL;
F->e_2421 = F->elems_862;
while ((F->e_2421 != NULL)) {
if ((((rt_r_ichk((*(P917)rt_nil_check(F->e_2421)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P917)rt_nil_check(F->e_2421)).kind) == (((rt_int)41LL)))) && rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_2421)).name))->all), (*F->name_863)))) {
F->result_ = 1;
goto ret_;
}
F->e_2421 = (*(P917)rt_nil_check(F->e_2421)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_867(P927 y_865, rt_int line_866) {
  struct f_check_requires_867fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_865 = y_865;
F->line_866 = line_866;
F->l_2422 = NULL;
F->l_2422 = f_requires_855(F->y_865);
if ((((*(P927)rt_nil_check(F->y_865)).home == NULL) || (rt_r_ichk((*(P927)rt_nil_check(F->y_865)).level) != rt_r_ichk(g_cur_level_970)))) {
goto ret_;
}
while ((F->l_2422 != NULL)) {
F->z_2423 = NULL;
F->z_2423 = f_lookup_155(&(((P910)rt_nil_check((*(P921)rt_nil_check(F->l_2422)).s))->all));
if ((f_declared_in_864((*(P927)rt_nil_check(F->y_865)).home, &(((P910)rt_nil_check((*(P921)rt_nil_check(F->l_2422)).s))->all)) && ((F->z_2423 == NULL) || (rt_r_ichk((*(P927)rt_nil_check(F->z_2423)).depth) < rt_r_ichk((*(P927)rt_nil_check(F->y_865)).depth))))) {
f_fail_23(F->line_866, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check((*(P927)rt_nil_check(F->y_865)).name))->all), rt_str(" requires ", 10)), (((P910)rt_nil_check((*(P921)rt_nil_check(F->l_2422)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2422 = (*(P921)rt_nil_check(F->l_2422)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_delay_args_869(P917 args_868) {
  struct f_act_delay_args_869fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->args_868 = args_868;
F->at_2424 = NULL;
F->t1_2425 = NULL;
F->t1_2425 = f_peek_type_721(F->args_868);
if (((F->t1_2425 != NULL) && (rt_r_ichk((*(P923)rt_nil_check(F->t1_2425)).kind) == (((rt_int)14LL))))) {
F->a_2426 = rt_str_copy(f_act_ref_556(F->args_868));
F->v_2427 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->args_868)).next, g_ty_int_997, &F->at_2424));
f_check_type_224(F->at_2424, g_ty_int_997, rt_r_ichk((*(P917)rt_nil_check(F->args_868)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2427, rt_str(", ", 2)), F->a_2426);
goto ret_;
}
{
F->v_2428 = rt_str_copy(f_gexpr_705(F->args_868, g_ty_int_997, &F->at_2424));
f_check_type_224(F->at_2424, g_ty_int_997, rt_r_ichk((*(P917)rt_nil_check(F->args_868)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2428, rt_str(", ", 2)), f_act_ref_556((*(P917)rt_nil_check(F->args_868)).next));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_same_subtypes_872(P917 gd_870, P917 args_871) {
  struct f_same_subtypes_872fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_870 = gd_870;
F->args_871 = args_871;
F->p_2429 = NULL;
F->p_2429 = (*(P917)rt_nil_check(F->gd_870)).a;
F->r_2430 = NULL;
F->r_2430 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->p_2429 != NULL)) {
if ((rt_r_ichk((*(P917)rt_nil_check(F->p_2429)).ival) == ((rt_int)2LL))) {
F->fp_2431 = NULL;
F->fp_2431 = (*(P917)rt_nil_check((*(P917)rt_nil_check(F->gd_870)).b)).a;
F->a_2432 = NULL;
F->a_2432 = F->args_871;
F->flo_2433 = NULL;
F->fhi_2434 = NULL;
while (((F->fp_2431 != NULL) && (F->a_2432 != NULL))) {
if ((((((*(P917)rt_nil_check(F->fp_2431)).a != NULL) && (rt_r_ichk((*(P917)rt_nil_check((*(P917)rt_nil_check(F->fp_2431)).a)).kind) == (((rt_int)80LL)))) && rt_str_eq((((P910)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->fp_2431)).a)).name))->all), (((P910)rt_nil_check((*(P917)rt_nil_check(F->p_2429)).name))->all))) && ((*(P917)rt_nil_check((*(P917)rt_nil_check(F->fp_2431)).a)).b == NULL))) {
F->st_2435 = NULL;
F->c_2436 = NULL;
F->base_2437 = NULL;
F->lo_2438 = NULL;
F->hi_2439 = NULL;
F->st_2435 = f_value_subtype_282(F->a_2432, &F->c_2436, &F->base_2437);
if (f_scalar_kind_178(F->st_2435)) {
F->lo_2438 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_lo_190(F->st_2435, F->c_2436); b_; }));
F->hi_2439 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_hi_193(F->st_2435, F->c_2436); b_; }));
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->st_2435)).kind) == (((rt_int)5LL))) && ((*(P919)rt_nil_check(F->c_2436)).slen != NULL))) {
F->lo_2438 = (*(P919)rt_nil_check(F->c_2436)).slen;
F->hi_2439 = (*(P919)rt_nil_check(F->c_2436)).slen;
}
if (((F->lo_2438 != NULL) && (F->flo_2433 != NULL))) {
if ((((rt_int)(((((P910)rt_nil_check(F->r_2430))->all)).len)) > ((rt_int)0LL))) {
F->r_2430 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_2430))->all), rt_str(" || ", 4)); b_; }));
}
F->r_2430 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_2430))->all), rt_str("(", 1)), (((P910)rt_nil_check(F->flo_2433))->all)), rt_str(") != (", 6)), (((P910)rt_nil_check(F->lo_2438))->all)), rt_str(") || (", 6)), (((P910)rt_nil_check(F->fhi_2434))->all)), rt_str(") != (", 6)), (((P910)rt_nil_check(F->hi_2439))->all)), rt_str(")", 1)); b_; }));
} else if ((F->lo_2438 != NULL)) {
F->flo_2433 = F->lo_2438;
F->fhi_2434 = F->hi_2439;
}
}
F->fp_2431 = (*(P917)rt_nil_check(F->fp_2431)).next;
F->a_2432 = (*(P917)rt_nil_check(F->a_2432)).next;
}
}
F->p_2429 = (*(P917)rt_nil_check(F->p_2429)).next;
}
F->result_ = (((P910)rt_nil_check(F->r_2430))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mailbox_low_877(rstr *name_873, P917 args_874, rt_int line_875, P923 *t_876) {
  struct f_mailbox_low_877fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_873 = name_873;
F->args_874 = args_874;
F->line_875 = line_875;
F->t_876 = t_876;
F->t_876v = *F->t_876;
F->qv_2440 = NULL;
F->mv_2441 = NULL;
F->dv_2442 = NULL;
F->qt_2443 = NULL;
F->mt_2444 = NULL;
F->dt_2445 = NULL;
F->at_2446 = NULL;
F->c_2447 = NULL;
F->ro_2448 = RT_R_EUNDEF;
F->send_2449 = RT_R_EUNDEF;
F->send_2449 = rt_str_eq(rt_str_slice((*F->name_873), ((rt_int)1LL), ((rt_int)4LL)), rt_str("SEND", 4));
f_lvalue_674(F->args_874, &F->qv_2440, &F->qt_2443, &F->c_2447, &F->ro_2448);
f_lvalue_674((*(P917)rt_nil_check(F->args_874)).next, &F->mv_2441, &F->mt_2444, &F->c_2447, &F->ro_2448);
if ((rt_r_ichk((*(P923)rt_nil_check(F->mt_2444)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_873), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_876v = g_ty_void_1002;
if (((rt_r_echk(F->send_2449) && (F->qt_2443 != g_ty_send_st_1009)) || ((!rt_r_echk(F->send_2449)) && (F->qt_2443 != g_ty_receive_st_1010)))) {
f_fail_23(F->line_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->name_873), rt_str(" needs a variable of subtype ", 29)), rt_str_slice((*F->name_873), ((rt_int)1LL), ((rt_int)4LL))), rt_str("_ST", 3)); b_; }));
}
if ((rt_str_eq((*F->name_873), rt_str("SEND_TEST", 9)) || rt_str_eq((*F->name_873), rt_str("RECEIVE_TEST", 12)))) {
F->t_876v = g_ty_bool_998;
if (rt_r_echk(F->send_2449)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_send(", 14), (((P910)rt_nil_check(F->mv_2441))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_receive(", 17), (((P910)rt_nil_check(F->mv_2441))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_873), rt_str("SEND_COMPLETE", 13))) {
F->v_2450 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check((*(P917)rt_nil_check(F->args_874)).next)).next, (*(P923)rt_nil_check(F->mt_2444)).elem, &F->at_2446));
f_check_type_224(F->at_2446, (*(P923)rt_nil_check(F->mt_2444)).elem, F->line_875);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226((*(P923)rt_nil_check(F->mt_2444)).elem)), rt_str(" m_ = ", 6)), F->v_2450), rt_str("; if (!rt_cond_send(", 20)), (((P910)rt_nil_check(F->mv_2441))->all)), rt_str(", &m_)) rt_raise(RT_X_EMPTY_MAILBOX); })", 40));
goto ret_;
} else if (rt_str_eq((*F->name_873), rt_str("RECEIVE_COMPLETE", 16))) {
f_lvalue_674((*(P917)rt_nil_check((*(P917)rt_nil_check(F->args_874)).next)).next, &F->dv_2442, &F->dt_2445, &F->c_2447, &F->ro_2448);
f_check_type_224(F->dt_2445, (*(P923)rt_nil_check(F->mt_2444)).elem, F->line_875);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (!rt_cond_receive(", 24), (((P910)rt_nil_check(F->mv_2441))->all)), rt_str(", &", 3)), (((P910)rt_nil_check(F->dv_2442))->all)), rt_str(")) rt_raise(RT_X_EMPTY_MAILBOX); })", 35));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P910)rt_nil_check(F->qv_2440))->all)), rt_str(" = 1)", 5));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_876) = F->t_876v;
  RT_FPOP();
  return F->result_;
}

static P923 f_exponent_want_880(rstr *op_878, P923 ta_879) {
  struct f_exponent_want_880fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_878 = op_878;
F->ta_879 = ta_879;
if (rt_str_eq((*F->op_878), rt_str("**", 2))) {
F->result_ = g_ty_int_997;
goto ret_;
}
F->result_ = F->ta_879;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_ref_884(P917 e_881, int text_882, rt_int line_883) {
  struct f_file_ref_884fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_881 = e_881;
F->text_882 = text_882;
F->line_883 = line_883;
F->t_2451 = NULL;
F->f_2452 = rt_str_copy(f_gexpr_705(F->e_881, NULL, &F->t_2451));
if ((rt_r_ichk((*(P923)rt_nil_check(F->t_2451)).kind) != (((rt_int)10LL)))) {
f_fail_23(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a file is required", 18); b_; }));
} else if ((F->text_882 && (!f_text_file_886(F->t_2451)))) {
f_fail_23(F->line_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a text file, whose components are characters, is required", 57); b_; }));
}
F->result_ = F->f_2452;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_text_file_886(P923 t_885) {
  struct f_text_file_886fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_885 = t_885;
F->result_ = (((F->t_885 != NULL) && (rt_r_ichk((*(P923)rt_nil_check(F->t_885)).kind) == (((rt_int)10LL)))) && ((*(P923)rt_nil_check(f_base_of_215(f_str_elem_210(F->t_885)))).kind == (((rt_int)4LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_conversion_891(P917 tt_887, P917 args_888, rt_int line_889, P923 *t_890) {
  struct f_conversion_891fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_887 = tt_887;
F->args_888 = args_888;
F->line_889 = line_889;
F->t_890 = t_890;
F->t_890v = *F->t_890;
F->c_2453 = NULL;
F->at_2454 = NULL;
F->target_2455 = NULL;
F->target_2455 = f_resolve_subtype_260(F->tt_887, &F->c_2453);
F->a_2456 = rt_str_copy(f_gexpr_705(F->args_888, NULL, &F->at_2454));
F->t_890v = F->target_2455;
if (((rt_r_ichk((*(P923)rt_nil_check(F->target_2455)).kind) == (((rt_int)5LL))) && f_same_213(f_str_elem_210(F->target_2455), g_ty_ascii_1000))) {
F->r_2457 = NULL;
if ((rt_r_ichk((*(P923)rt_nil_check(F->at_2454)).kind) == (((rt_int)1LL)))) {
F->r_2457 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2456), rt_str(")", 1)); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->at_2454)).kind) == (((rt_int)3LL)))) {
F->r_2457 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_str_of_float(", 18), F->a_2456), rt_str(", ", 2)), f_float_digits_893(F->args_888)), rt_str(")", 1)); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->at_2454)).kind) == (((rt_int)2LL)))) {
F->r_2457 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2456), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5)); b_; }));
} else if (((*(P923)rt_nil_check(f_base_of_215(F->at_2454))).kind == (((rt_int)4LL)))) {
F->r_2457 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_enum_image(", 16), f_enum_names_895(f_base_of_215(F->at_2454))), rt_str(", ", 2)), F->a_2456), rt_str(")", 1)); b_; }));
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->at_2454)).kind) == (((rt_int)5LL)))) {
F->r_2457 = f_mk_3(&F->a_2456);
} else {
f_fail_23(F->line_889, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT converts BOOL, INT, FLOAT and ENUM values to strings", 57); b_; }));
}
if (((F->c_2453 != NULL) && ((*(P919)rt_nil_check(F->c_2453)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_str_pad(", 13), (((P910)rt_nil_check(F->r_2457))->all)), rt_str(", ", 2)), (((P910)rt_nil_check((*(P919)rt_nil_check(F->c_2453)).slen))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = (((P910)rt_nil_check(F->r_2457))->all);
goto ret_;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->at_2454)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P923)rt_nil_check(F->target_2455)).kind) == (((rt_int)1LL)))) {
F->result_ = f_checked_205(F->target_2455, F->c_2453, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2456), rt_str(")", 1)); b_; }));
goto ret_;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->target_2455)).kind) == (((rt_int)3LL)))) {
F->result_ = f_checked_205(F->target_2455, F->c_2453, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_float_of_str(", 18), F->a_2456), rt_str(")", 1)); b_; }));
goto ret_;
} else if ((rt_r_ichk((*(P923)rt_nil_check(F->target_2455)).kind) == (((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_bool_of_str(", 17), F->a_2456), rt_str(")", 1));
goto ret_;
} else if (((*(P923)rt_nil_check(f_base_of_215(F->target_2455))).kind == (((rt_int)4LL)))) {
F->result_ = f_checked_205(F->target_2455, F->c_2453, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_enum_of_str(", 17), f_enum_names_895(f_base_of_215(F->target_2455))), rt_str(", ", 2)), f_itos_7(f_list_len_67((*(P923)rt_nil_check(f_base_of_215(F->target_2455))).lits))), rt_str(", ", 2)), F->a_2456), rt_str(")", 1)); b_; }));
goto ret_;
}
} else if (((rt_r_ichk((*(P923)rt_nil_check(F->target_2455)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P923)rt_nil_check(F->at_2454)).kind) == (((rt_int)1LL))))) {
F->result_ = f_checked_205(F->target_2455, F->c_2453, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2456), rt_str("))", 2)); b_; }));
goto ret_;
} else if (f_same_213(F->target_2455, F->at_2454)) {
F->result_ = f_checked_205(F->target_2455, F->c_2453, &F->a_2456);
goto ret_;
}
f_fail_23(F->line_889, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT does not convert between these types", 41); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_890) = F->t_890v;
  RT_FPOP();
  return F->result_;
}

static rstr f_float_digits_893(P917 e_892) {
  struct f_float_digits_893fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_892 = e_892;
F->lv_2458 = NULL;
F->t_2459 = NULL;
F->c_2460 = NULL;
F->ro_2461 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P917)rt_nil_check(F->e_892)).kind) == (((rt_int)8LL))) || (rt_r_ichk((*(P917)rt_nil_check(F->e_892)).kind) == (((rt_int)17LL))))) {
F->result_ = f_float_digits_893((*(P917)rt_nil_check(F->e_892)).a);
goto ret_;
} else if ((rt_r_ichk((*(P917)rt_nil_check(F->e_892)).kind) == (((rt_int)2LL)))) {
F->n_2462 = RT_R_IUNDEF;
F->n_2462 = ((rt_int)0LL);
F->lead_2463 = RT_R_EUNDEF;
F->lead_2463 = 1;
{ rt_int lo2465 = ((rt_int)1LL), hi2466 = ((rt_int)(((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_892)).name))->all)).len));
for (rt_int it2467 = lo2465; it2467 <= hi2466; it2467++) {
F->i_2464 = it2467;
if (((rt_r_echk(rt_str_get((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_892)).name))->all), F->i_2464)) == 69) || (rt_r_echk(rt_str_get((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_892)).name))->all), F->i_2464)) == 101))) {
F->result_ = f_itos_7(rt_r_ichk(F->n_2462));
goto ret_;
} else if ((f_is_digit_11(rt_r_echk(rt_str_get((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_892)).name))->all), F->i_2464))) && (!(rt_r_echk(F->lead_2463) && (rt_r_echk(rt_str_get((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_892)).name))->all), F->i_2464)) == 48))))) {
F->n_2462 = rt_add(rt_r_ichk(F->n_2462), ((rt_int)1LL));
F->lead_2463 = 0;
} else if ((f_is_digit_11(rt_r_echk(rt_str_get((((P910)rt_nil_check((*(P917)rt_nil_check(F->e_892)).name))->all), F->i_2464))) && (!rt_r_echk(F->lead_2463)))) {
F->n_2462 = rt_add(rt_r_ichk(F->n_2462), ((rt_int)1LL));
}
}
}
F->result_ = f_itos_7(rt_r_ichk(F->n_2462));
goto ret_;
} else if (f_is_lvalue_668(F->e_892)) {
F->saved_2468 = NULL;
F->saved_2468 = g_code_967;
g_code_967 = f_new_buffer_24();
f_lvalue_674(F->e_892, &F->lv_2458, &F->t_2459, &F->c_2460, &F->ro_2461);
g_code_967 = F->saved_2468;
if (((F->c_2460 != NULL) && ((*(P919)rt_nil_check(F->c_2460)).prec != NULL))) {
F->result_ = (((P910)rt_nil_check((*(P919)rt_nil_check(F->c_2460)).prec))->all);
goto ret_;
}
}
F->result_ = rt_str("6", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_enum_names_895(P923 t_894) {
  struct f_enum_names_895fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_894 = t_894;
F->l_2469 = NULL;
F->l_2469 = (*(P923)rt_nil_check(F->t_894)).lits;
F->r_2470 = NULL;
F->r_2470 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P923)rt_nil_check(F->t_894)).cname != NULL)) {
F->result_ = (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_894)).cname))->all);
goto ret_;
}
while ((F->l_2469 != NULL)) {
if ((((rt_int)(((((P910)rt_nil_check(F->r_2470))->all)).len)) > ((rt_int)0LL))) {
F->r_2470 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P910)rt_nil_check(F->r_2470))->all), rt_str(", ", 2)); b_; }));
}
F->r_2470 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->r_2470))->all), f_q_18()), (((P910)rt_nil_check((*(P917)rt_nil_check(F->l_2469)).name))->all)), f_q_18()); b_; }));
F->l_2469 = (*(P917)rt_nil_check(F->l_2469)).next;
}
(*(P923)rt_nil_check(F->t_894)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("en_", 3); b_; })); b_; }));
f_put_27(g_out_globals_963, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static const char *const ", 25), (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_894)).cname))->all)), rt_str("[] = {", 6)), (((P910)rt_nil_check(F->r_2470))->all)), rt_str("};", 2)); b_; }));
F->result_ = (((P910)rt_nil_check((*(P923)rt_nil_check(F->t_894)).cname))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_actual_bounds_899(P923 ft_896, P923 t_897, P919 c_898) {
  struct f_actual_bounds_899fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_896 = ft_896;
F->t_897 = t_897;
F->c_898 = c_898;
if ((!f_scalar_kind_178(F->ft_896))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_190(F->t_897, F->c_898)), rt_str(", ", 2)), f_sub_hi_193(F->t_897, F->c_898));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_906(rstr *name_900, P917 tt_901, P917 args_902, rt_int line_903, int is_stmt_904, P923 *t_905) {
  struct f_builtin_906fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_900 = name_900;
F->tt_901 = tt_901;
F->args_902 = args_902;
F->line_903 = line_903;
F->is_stmt_904 = is_stmt_904;
F->t_905 = t_905;
F->t_905v = *F->t_905;
F->at_2471 = NULL;
F->n_2472 = RT_R_IUNDEF;
F->n_2472 = f_list_len_67(F->args_902);
F->t_905v = g_ty_void_1002;
if (((rt_str_eq((*F->name_900), rt_str("POS", 3)) || rt_str_eq((*F->name_900), rt_str("SUCC", 4))) || rt_str_eq((*F->name_900), rt_str("PRED", 4)))) {
F->a_2473 = rt_str_copy(f_gexpr_705(F->args_902, NULL, &F->at_2471));
if (rt_str_eq((*F->name_900), rt_str("POS", 3))) {
if (((*(P923)rt_nil_check(f_base_of_215(F->at_2471))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_903, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_905v = g_ty_int_997;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2473), rt_str(") + 1)", 6));
goto ret_;
}
F->t_905v = F->at_2471;
if ((rt_r_ichk((*(P923)rt_nil_check(F->at_2471)).kind) == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_900), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2473), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2473), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_900), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2473), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P923)rt_nil_check(f_base_of_215(F->at_2471))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2473), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P923)rt_nil_check(f_base_of_215(F->at_2471))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("FLOOR", 5))) {
F->a_2474 = rt_str_copy(f_gexpr_705(F->args_902, g_ty_float_999, &F->at_2471));
f_check_type_224(F->at_2471, g_ty_float_999, F->line_903);
F->t_905v = g_ty_int_997;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_floor(", 11), F->a_2474), rt_str(")", 1));
goto ret_;
} else if ((((rt_str_eq((*F->name_900), rt_str("ACTP", 4)) || rt_str_eq((*F->name_900), rt_str("RADIX", 5))) || rt_str_eq((*F->name_900), rt_str("EMIN", 4))) || rt_str_eq((*F->name_900), rt_str("EMAX", 4)))) {
F->a_2475 = rt_str_copy(f_gexpr_705(F->args_902, g_ty_float_999, &F->at_2471));
f_check_type_224(F->at_2471, g_ty_float_999, F->line_903);
F->t_905v = g_ty_int_997;
if (rt_str_eq((*F->name_900), rt_str("ACTP", 4))) {
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("RADIX", 5))) {
F->result_ = rt_str("((rt_int)2)", 11);
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("EMIN", 4))) {
F->result_ = rt_str("((rt_int)-1021)", 15);
goto ret_;
}
F->result_ = rt_str("((rt_int)1024)", 14);
goto ret_;
} else if (((((rt_str_eq((*F->name_900), rt_str("SQRT", 4)) || rt_str_eq((*F->name_900), rt_str("SIN", 3))) || rt_str_eq((*F->name_900), rt_str("COS", 3))) || rt_str_eq((*F->name_900), rt_str("EXP", 3))) || rt_str_eq((*F->name_900), rt_str("LN", 2)))) {
F->a_2476 = rt_str_copy(f_gexpr_705(F->args_902, g_ty_float_999, &F->at_2471));
F->t_905v = g_ty_float_999;
if (rt_str_eq((*F->name_900), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2476), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_900)), rt_str("(", 1)), F->a_2476), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("IFLOAT", 6))) {
F->a_2477 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->args_902)).next, g_ty_int_997, &F->at_2471));
F->t_905v = g_ty_float_999;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2477), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("IFIX", 4))) {
F->a_2478 = rt_str_copy(f_gexpr_705(F->args_902, g_ty_float_999, &F->at_2471));
F->t_905v = g_ty_int_997;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2478), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("FORMAT", 6))) {
F->a_2479 = rt_str_copy(f_gexpr_705(F->args_902, g_ty_float_999, &F->at_2471));
F->n1_2480 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->args_902)).next, g_ty_int_997, &F->at_2471));
F->m1_2481 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check((*(P917)rt_nil_check(F->args_902)).next)).next, g_ty_int_997, &F->at_2471));
F->t_905v = g_ty_string_1001;
if ((rt_r_ichk(F->n_2472) == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_format_e(", 14), F->a_2479), rt_str(", ", 2)), F->n1_2480), rt_str(", ", 2)), F->m1_2481), rt_str(", ", 2)), f_gexpr_705((*(P917)rt_nil_check((*(P917)rt_nil_check((*(P917)rt_nil_check(F->args_902)).next)).next)).next, g_ty_int_997, &F->at_2471)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_format(", 12), F->a_2479), rt_str(", ", 2)), F->n1_2480), rt_str(", ", 2)), F->m1_2481), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("ABS", 3))) {
F->a_2482 = rt_str_copy(f_gexpr_705(F->args_902, NULL, &F->at_2471));
F->t_905v = F->at_2471;
if ((rt_r_ichk((*(P923)rt_nil_check(F->at_2471)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2482), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2482), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("CNVT", 4))) {
if ((F->tt_901 == NULL)) {
f_fail_23(F->line_903, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
F->result_ = f_conversion_891(F->tt_901, F->args_902, F->line_903, &F->t_905v);
goto ret_;
} else if ((rt_str_eq((*F->name_900), rt_str("WRITELN", 7)) && (rt_r_ichk(F->n_2472) == ((rt_int)2LL)))) {
F->f_2483 = rt_str_copy(f_file_ref_884(F->args_902, 1, F->line_903));
F->a_2484 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->args_902)).next, g_ty_string_1001, &F->at_2471));
f_check_type_224(F->at_2471, g_ty_string_1001, F->line_903);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fwriteln(", 14), F->f_2483), rt_str(", ", 2)), F->a_2484), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("WRITELN", 7))) {
if ((rt_r_ichk(F->n_2472) == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->a_2485 = rt_str_copy(f_gexpr_705(F->args_902, g_ty_string_1001, &F->at_2471));
f_check_type_224(F->at_2471, g_ty_string_1001, F->line_903);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2485), rt_str(")", 1));
goto ret_;
}
} else if ((rt_str_eq((*F->name_900), rt_str("WRITE", 5)) || rt_str_eq((*F->name_900), rt_str("READ", 4)))) {
F->ft_2486 = NULL;
F->f_2487 = rt_str_copy(f_file_ref_884(F->args_902, 0, F->line_903));
F->ft_2486 = f_peek_type_721(F->args_902);
if (rt_str_eq((*F->name_900), rt_str("READ", 4))) {
F->lv_2488 = NULL;
F->lc_2489 = NULL;
F->ro_2490 = RT_R_EUNDEF;
f_lvalue_674((*(P917)rt_nil_check(F->args_902)).next, &F->lv_2488, &F->at_2471, &F->lc_2489, &F->ro_2490);
if (rt_r_echk(F->ro_2490)) {
f_fail_23(F->line_903, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READ needs a variable", 21); b_; }));
}
f_check_type_224(F->at_2471, f_str_elem_210(F->ft_2486), F->line_903);
if (f_text_file_886(F->ft_2486)) {
F->result_ = f_assign_code_379(&(((P910)rt_nil_check(F->lv_2488))->all), F->at_2471, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fgetc(", 11), F->f_2487), rt_str(")", 1)); b_; }), F->lc_2489);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fread(", 11), F->f_2487), rt_str(", &", 3)), (((P910)rt_nil_check(F->lv_2488))->all)), rt_str(")", 1));
goto ret_;
}
{
F->a_2491 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->args_902)).next, f_str_elem_210(F->ft_2486), &F->at_2471));
if ((f_text_file_886(F->ft_2486) && (rt_r_ichk((*(P923)rt_nil_check(F->at_2471)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fputs(", 11), F->f_2487), rt_str(", ", 2)), F->a_2491), rt_str(")", 1));
goto ret_;
}
f_check_type_224(F->at_2471, f_str_elem_210(F->ft_2486), F->line_903);
if (f_text_file_886(F->ft_2486)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fputc(", 11), F->f_2487), rt_str(", ", 2)), F->a_2491), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226(F->at_2471)), rt_str(" w_ = ", 6)), F->a_2491), rt_str("; rt_r_fwrite(", 14)), F->f_2487), rt_str(", &w_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_900), rt_str("READLN", 6)) && (rt_r_ichk(F->n_2472) == ((rt_int)2LL)))) {
F->lv_2492 = NULL;
F->lc_2493 = NULL;
F->ro_2494 = RT_R_EUNDEF;
F->f_2495 = rt_str_copy(f_file_ref_884(F->args_902, 1, F->line_903));
f_lvalue_674((*(P917)rt_nil_check(F->args_902)).next, &F->lv_2492, &F->at_2471, &F->lc_2493, &F->ro_2494);
f_check_type_224(F->at_2471, g_ty_string_1001, F->line_903);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_freadln(", 13), F->f_2495), rt_str(", &", 3)), (((P910)rt_nil_check(F->lv_2492))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("READLN", 6))) {
F->lv_2496 = NULL;
F->lc_2497 = NULL;
F->ro_2498 = RT_R_EUNDEF;
f_lvalue_674(F->args_902, &F->lv_2496, &F->at_2471, &F->lc_2497, &F->ro_2498);
f_check_type_224(F->at_2471, g_ty_string_1001, F->line_903);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_readln(&", 13), (((P910)rt_nil_check(F->lv_2496))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_900), rt_str("SIZELN", 6)) && (rt_r_ichk(F->n_2472) == ((rt_int)1LL)))) {
F->t_905v = g_ty_int_997;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fsizeln(", 13), f_file_ref_884(F->args_902, 1, F->line_903)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("SIZELN", 6))) {
F->t_905v = g_ty_int_997;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if ((rt_str_eq((*F->name_900), rt_str("EOF", 3)) && (rt_r_ichk(F->n_2472) == ((rt_int)1LL)))) {
F->t_905v = g_ty_bool_998;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_feof(", 10), f_file_ref_884(F->args_902, 0, F->line_903)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("EOF", 3))) {
F->t_905v = g_ty_bool_998;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("SYS_IN", 6))) {
F->t_905v = g_ty_text_file_1011;
F->result_ = rt_str("rt_r_sys_in()", 13);
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("SYS_OUT", 7))) {
F->t_905v = g_ty_text_file_1011;
F->result_ = rt_str("rt_r_sys_out()", 14);
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("OPEN", 4))) {
F->f_2499 = rt_str_copy(f_file_ref_884(F->args_902, 0, F->line_903));
F->nm_2500 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->args_902)).next, g_ty_string_1001, &F->at_2471));
F->st_2501 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check((*(P917)rt_nil_check(F->args_902)).next)).next, g_file_state_type_1012, &F->at_2471));
f_check_type_224(F->at_2471, g_file_state_type_1012, F->line_903);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_open(", 10), F->f_2499), rt_str(", ", 2)), F->nm_2500), rt_str(", ", 2)), F->st_2501), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("CLOSE", 5))) {
F->f_2502 = rt_str_copy(f_file_ref_884(F->args_902, 0, F->line_903));
F->d_2503 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->args_902)).next, g_file_disp_type_1013, &F->at_2471));
f_check_type_224(F->at_2471, g_file_disp_type_1013, F->line_903);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_close(", 11), F->f_2502), rt_str(", ", 2)), F->d_2503), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_900), rt_str("SIZE", 4)) || rt_str_eq((*F->name_900), rt_str("POSITION", 8)))) {
F->t_905v = g_ty_int_997;
if (rt_str_eq((*F->name_900), rt_str("SIZE", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fsize(", 11), f_file_ref_884(F->args_902, 0, F->line_903)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fpos(", 10), f_file_ref_884(F->args_902, 0, F->line_903)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("SET_POSITION", 12))) {
F->f_2504 = rt_str_copy(f_file_ref_884(F->args_902, 0, F->line_903));
F->v_2505 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->args_902)).next, g_ty_int_997, &F->at_2471));
f_check_type_224(F->at_2471, g_ty_int_997, F->line_903);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fsetpos(", 13), F->f_2504), rt_str(", ", 2)), F->v_2505), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("FILE_RENAME", 11))) {
F->a_2506 = rt_str_copy(f_gexpr_705(F->args_902, g_ty_string_1001, &F->at_2471));
F->b_2507 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->args_902)).next, g_ty_string_1001, &F->at_2471));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_rename(", 12), F->a_2506), rt_str(", ", 2)), F->b_2507), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_900), rt_str("SEND", 4)) || rt_str_eq((*F->name_900), rt_str("RECEIVE", 7)))) {
F->lv_2508 = NULL;
F->dv_2509 = NULL;
F->lc_2510 = NULL;
F->ro_2511 = RT_R_EUNDEF;
F->mt_2512 = NULL;
F->dt_2513 = NULL;
f_lvalue_674(F->args_902, &F->lv_2508, &F->mt_2512, &F->lc_2510, &F->ro_2511);
if ((rt_r_ichk((*(P923)rt_nil_check(F->mt_2512)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_903, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_900), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_900), rt_str("RECEIVE", 7))) {
f_lvalue_674((*(P917)rt_nil_check(F->args_902)).next, &F->dv_2509, &F->dt_2513, &F->lc_2510, &F->ro_2511);
f_check_type_224(F->dt_2513, (*(P923)rt_nil_check(F->mt_2512)).elem, F->line_903);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P910)rt_nil_check(F->lv_2508))->all)), rt_str(", &", 3)), (((P910)rt_nil_check(F->dv_2509))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2514 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->args_902)).next, (*(P923)rt_nil_check(F->mt_2512)).elem, &F->at_2471));
f_check_type_224(F->at_2471, (*(P923)rt_nil_check(F->mt_2512)).elem, F->line_903);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226((*(P923)rt_nil_check(F->mt_2512)).elem)), rt_str(" m_ = ", 6)), F->v_2514), rt_str("; rt_send(", 10)), (((P910)rt_nil_check(F->lv_2508))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_900), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_900), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2515 = NULL;
F->lc_2516 = NULL;
F->ro_2517 = RT_R_EUNDEF;
F->mt_2518 = NULL;
f_lvalue_674(F->args_902, &F->lv_2515, &F->mt_2518, &F->lc_2516, &F->ro_2517);
if ((rt_r_ichk((*(P923)rt_nil_check(F->mt_2518)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_903, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_900), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_905v = g_ty_int_997;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_900))), rt_str("(", 1)), (((P910)rt_nil_check(F->lv_2515))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_900), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_900), rt_str("COND_RECEIVE", 12)))) {
F->lv_2519 = NULL;
F->dv_2520 = NULL;
F->bv_2521 = NULL;
F->lc_2522 = NULL;
F->ro_2523 = RT_R_EUNDEF;
F->mt_2524 = NULL;
F->dt_2525 = NULL;
F->bt_2526 = NULL;
f_lvalue_674(F->args_902, &F->lv_2519, &F->mt_2524, &F->lc_2522, &F->ro_2523);
if ((rt_r_ichk((*(P923)rt_nil_check(F->mt_2524)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_903, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_900), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_674((*(P917)rt_nil_check((*(P917)rt_nil_check(F->args_902)).next)).next, &F->bv_2521, &F->bt_2526, &F->lc_2522, &F->ro_2523);
f_check_type_224(F->bt_2526, g_ty_bool_998, F->line_903);
if (rt_str_eq((*F->name_900), rt_str("COND_RECEIVE", 12))) {
f_lvalue_674((*(P917)rt_nil_check(F->args_902)).next, &F->dv_2520, &F->dt_2525, &F->lc_2522, &F->ro_2523);
f_check_type_224(F->dt_2525, (*(P923)rt_nil_check(F->mt_2524)).elem, F->line_903);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->bv_2521))->all), rt_str(" = rt_cond_receive(", 19)), (((P910)rt_nil_check(F->lv_2519))->all)), rt_str(", &", 3)), (((P910)rt_nil_check(F->dv_2520))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2527 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->args_902)).next, (*(P923)rt_nil_check(F->mt_2524)).elem, &F->at_2471));
f_check_type_224(F->at_2471, (*(P923)rt_nil_check(F->mt_2524)).elem, F->line_903);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_226((*(P923)rt_nil_check(F->mt_2524)).elem)), rt_str(" m_ = ", 6)), F->v_2527), rt_str("; ", 2)), (((P910)rt_nil_check(F->bv_2521))->all)), rt_str(" = rt_cond_send(", 16)), (((P910)rt_nil_check(F->lv_2519))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_900), rt_str("PRIORITY", 8))) {
F->t_905v = g_ty_int_997;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_556(F->args_902)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("SET_PRIORITY", 12))) {
F->v_2528 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->args_902)).next, g_ty_int_997, &F->at_2471));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_556(F->args_902)), rt_str(", ", 2)), F->v_2528), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_556(F->args_902)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("ACTIVE", 6))) {
F->t_905v = g_ty_bool_998;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_556(F->args_902)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("DELAY", 5))) {
F->v_2529 = rt_str_copy(f_gexpr_705(F->args_902, g_ty_int_997, &F->at_2471));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2529), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_900), rt_str("DELAY_UNTIL", 11)) && (rt_r_ichk(F->n_2472) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_delay_act(", 15), f_act_delay_args_869(F->args_902)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("DELAY_UNTIL", 11))) {
F->v_2530 = rt_str_copy(f_gexpr_705(F->args_902, g_ty_int_997, &F->at_2471));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2530), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_556(F->args_902)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_900), rt_str("TIME", 4)) && (rt_r_ichk(F->n_2472) == ((rt_int)1LL)))) {
F->t_905v = g_ty_int_997;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_act_time(", 14), f_act_ref_556(F->args_902)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("TIME", 4))) {
F->t_905v = g_ty_int_997;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_900), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_900), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_900), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_900), rt_str("HOURS", 5)))) {
F->t_905v = g_ty_int_997;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_900));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("HALT", 4))) {
F->a_2531 = rt_str_copy(f_gexpr_705(F->args_902, g_ty_int_997, &F->at_2471));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2531), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_900), rt_str("ME", 2)) && (F->tt_901 != NULL))) {
F->result_ = f_me_high_841(F->tt_901, F->line_903, &F->t_905v);
goto ret_;
} else if ((rt_str_eq((*F->name_900), rt_str("WAITING", 7)) || rt_str_eq((*F->name_900), rt_str("SUSPENDED", 9)))) {
F->t_905v = g_ty_bool_998;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_900))), rt_str("(", 1)), f_act_ref_556(F->args_902)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_900), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_900), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_900), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_900), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_900), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_900), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_900))), rt_str("(", 1)), f_act_ref_556(F->args_902)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("TASK_START", 10))) {
if ((rt_r_ichk(F->n_2472) != ((rt_int)2LL))) {
f_fail_23(F->line_903, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_556(F->args_902)), rt_str(", ", 2)), f_act_ref_556((*(P917)rt_nil_check(F->args_902)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_900), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_900), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_900), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_900), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_900), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_900), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((rt_r_ichk(F->n_2472) != ((rt_int)0LL))) {
f_fail_23(F->line_903, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_900), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_900))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_846(F->args_902, &(*F->name_900))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_900), rt_str("UNLOCK", 6)) && (f_peek_type_721(F->args_902) != g_ty_latch_1006))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_unlock(", 12), f_lock_ref_846(F->args_902, &(*F->name_900))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_846(F->args_902, &(*F->name_900))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("COND_LOCK", 9))) {
F->bv_2532 = NULL;
F->bc_2533 = NULL;
F->ro_2534 = RT_R_EUNDEF;
F->bt_2535 = NULL;
F->l_2536 = rt_str_copy(f_lock_ref_846(F->args_902, &(*F->name_900)));
f_lvalue_674((*(P917)rt_nil_check(F->args_902)).next, &F->bv_2532, &F->bt_2535, &F->bc_2533, &F->ro_2534);
f_check_type_224(F->bt_2535, g_ty_bool_998, F->line_903);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P910)rt_nil_check(F->bv_2532))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2536), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("EXCESS_LOCKS", 12))) {
F->t_905v = g_ty_int_997;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_846(F->args_902, &(*F->name_900))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("OWNER", 5))) {
F->t_905v = g_ty_act_1007;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_owner(", 11), f_lock_ref_846(F->args_902, &(*F->name_900))), rt_str(")", 1));
goto ret_;
} else if (((((((((rt_str_eq((*F->name_900), rt_str("SEND_REQUEST", 12)) || rt_str_eq((*F->name_900), rt_str("SEND_TEST", 9))) || rt_str_eq((*F->name_900), rt_str("SEND_COMPLETE", 13))) || rt_str_eq((*F->name_900), rt_str("SEND_REVOKE", 11))) || rt_str_eq((*F->name_900), rt_str("RECEIVE_REQUEST", 15))) || rt_str_eq((*F->name_900), rt_str("RECEIVE_TEST", 12))) || rt_str_eq((*F->name_900), rt_str("RECEIVE_COMPLETE", 16))) || rt_str_eq((*F->name_900), rt_str("RECEIVE_REVOKE", 14))) && (rt_r_ichk(F->n_2472) == ((rt_int)3LL)))) {
F->result_ = f_mailbox_low_877(&(*F->name_900), F->args_902, F->line_903, &F->t_905v);
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("FREE", 4))) {
F->pv_2537 = NULL;
F->pc_2538 = NULL;
F->ro_2539 = RT_R_EUNDEF;
F->pt_2540 = NULL;
f_lvalue_674(F->args_902, &F->pv_2537, &F->pt_2540, &F->pc_2538, &F->ro_2539);
if (((rt_r_ichk((*(P923)rt_nil_check(F->pt_2540)).kind) != (((rt_int)8LL))) || rt_r_echk(F->ro_2539))) {
f_fail_23(F->line_903, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_978 = 1;
f_finish_ptr_432(F->pt_2540);
if (f_suppressed_466(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; }))) {
if (f_needs_fin_319((*(P923)rt_nil_check(F->pt_2540)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P910)rt_nil_check(F->pv_2537))->all)), rt_str(") { ", 4)), f_fin_code_322(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_663(F->pt_2540, &(((P910)rt_nil_check(F->pv_2537))->all)); b_; }), (*(P923)rt_nil_check(F->pt_2540)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P910)rt_nil_check(F->pv_2537))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P910)rt_nil_check(F->pv_2537))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_319((*(P923)rt_nil_check(F->pt_2540)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P910)rt_nil_check(F->pv_2537))->all)), rt_str("); if (", 7)), (((P910)rt_nil_check(F->pv_2537))->all)), rt_str(") { ", 4)), f_fin_code_322(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_663(F->pt_2540, &(((P910)rt_nil_check(F->pv_2537))->all)); b_; }), (*(P923)rt_nil_check(F->pt_2540)).target)), rt_str(" } rt_free((void **)&", 21)), (((P910)rt_nil_check(F->pv_2537))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P910)rt_nil_check(F->pv_2537))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_900), rt_str("LOW_IO", 6))) {
F->dev_2541 = rt_str_copy(f_gexpr_705(F->args_902, g_ty_int_997, &F->at_2471));
F->cmd_2542 = rt_str_copy(f_gexpr_705((*(P917)rt_nil_check(F->args_902)).next, g_ty_int_997, &F->at_2471));
if ((rt_r_ichk(F->n_2472) == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_low_io(", 28), F->dev_2541), rt_str(", ", 2)), F->cmd_2542), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2543 = NULL;
F->dc_2544 = NULL;
F->ro_2545 = RT_R_EUNDEF;
F->dt_2546 = NULL;
f_lvalue_674((*(P917)rt_nil_check((*(P917)rt_nil_check(F->args_902)).next)).next, &F->dv_2543, &F->dt_2546, &F->dc_2544, &F->ro_2545);
f_check_type_224(F->dt_2546, g_ty_int_997, F->line_903);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_low_io(", 10), F->dev_2541), rt_str(", ", 2)), F->cmd_2542), rt_str(", &", 3)), (((P910)rt_nil_check(F->dv_2543))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_903, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_900), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_905) = F->t_905v;
  RT_FPOP();
  return F->result_;
}

static void f_translate_908(P917 units_907) {
  struct f_translate_908fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_907 = units_907;
F->u_2547 = NULL;
F->u_2547 = F->units_907;
while ((F->u_2547 != NULL)) {
if (((*(P917)rt_nil_check(F->u_2547)).next == NULL)) {
{ R945 *cell2548 = rt_alloc(sizeof(R945));
(*cell2548).d = NULL;
(*cell2548).next = NULL;
g_caps_972 = cell2548;
}
(*(P944)rt_nil_check(g_caps_972)).d = F->u_2547;
(*(P944)rt_nil_check(g_caps_972)).depth = rt_r_ichk(g_depth_956);
f_declare_labels_499((*(P917)rt_nil_check(F->u_2547)).c);
f_declare_body_398((*(P917)rt_nil_check(F->u_2547)).c);
f_capsule_body_506((*(P917)rt_nil_check(F->u_2547)).c);
f_await_tasks_495((*(P917)rt_nil_check(F->u_2547)).c);
{
F->l_2549 = NULL;
F->l_2549 = F->units_907;
while ((F->l_2549 != F->u_2547)) {
{
F->w_2550 = rt_str_copy(f_waits_of_491(F->l_2549));
if ((((rt_int)((F->w_2550).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2550);
}
}
F->l_2549 = (*(P917)rt_nil_check(F->l_2549)).next;
}
}
f_close_fins_482(NULL);
if (rt_r_echk(g_uses_findyn_980)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_408(F->u_2547);
}
F->u_2547 = (*(P917)rt_nil_check(F->u_2547)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_909(void) {
  struct f_print_program_909fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_394();
if (rt_r_echk(g_uses_free_978)) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_960);
f_print_buffer_31(g_out_frames_976);
f_print_buffer_31(g_out_helpers_961);
f_print_buffer_31(g_out_protos_962);
f_print_buffer_31(g_out_globals_963);
f_print_buffer_31(g_out_funcs_964);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_977);
f_print_buffer_31(g_out_excs_966);
f_print_buffer_31(g_out_init_965);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R947(R947 *d, R947 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R947 cp_R947(R947 s) {
  R947 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R947(R947 a, R947 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R945(R945 *d, R945 s) {
  d->d = s.d;
  d->next = s.next;
  d->depth = s.depth;
}
static R945 cp_R945(R945 s) {
  R945 d = s;
  d.d = s.d;
  d.next = s.next;
  d.depth = s.depth;
  return d;
}
static int eq_R945(R945 a, R945 b) {
  return 1 && (a.d == b.d) && (a.next == b.next) && (a.depth == b.depth);
}
static void as_R943(R943 *d, R943 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R943 cp_R943(R943 s) {
  R943 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R943(R943 a, R943 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R941(R941 *d, R941 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R941 cp_R941(R941 s) {
  R941 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R941(R941 a, R941 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R939(R939 *d, R939 s) {
  d->t = s.t;
  d->next = s.next;
}
static R939 cp_R939(R939 s) {
  R939 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R939(R939 a, R939 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R937(R937 *d, R937 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
}
static R937 cp_R937(R937 s) {
  R937 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  return d;
}
static int eq_R937(R937 a, R937 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t);
}
static void as_R935(R935 *d, R935 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R935 cp_R935(R935 s) {
  R935 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R935(R935 a, R935 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A933(A933 *d, A933 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A933 cp_A933(A933 s) {
  A933 d = s; d.p = rt_alloc(sizeof(P927) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A933(A933 a, A933 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R930(R930 *d, R930 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R930 cp_R930(R930 s) {
  R930 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R930(R930 a, R930 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R928(R928 *d, R928 s) {
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
static R928 cp_R928(R928 s) {
  R928 d = s;
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
static int eq_R928(R928 a, R928 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home) && (a.capn == b.capn) && (a.tbinds == b.tbinds);
}
static void as_R926(R926 *d, R926 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R926 cp_R926(R926 s) {
  R926 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R926(R926 a, R926 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R924(R924 *d, R924 s) {
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
static R924 cp_R924(R924 s) {
  R924 d = s;
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
static int eq_R924(R924 a, R924 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs) && (a.assignp == b.assignp) && (a.eqp == b.eqp) && (a.ltp == b.ltp);
}
static void as_R922(R922 *d, R922 s) {
  d->s = s.s;
  d->next = s.next;
}
static R922 cp_R922(R922 s) {
  R922 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R922(R922 a, R922 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R920(R920 *d, R920 s) {
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
static R920 cp_R920(R920 s) {
  R920 d = s;
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
static int eq_R920(R920 a, R920 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R918(R918 *d, R918 s) {
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
static R918 cp_R918(R918 s) {
  R918 d = s;
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
static int eq_R918(R918 a, R918 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A916(A916 *d, A916 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A916 cp_A916(A916 s) {
  A916 d = s; d.p = rt_alloc(sizeof(P912) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A916(A916 a, A916 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R913(R913 *d, R913 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R913 cp_R913(R913 s) {
  R913 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R913(R913 a, R913 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_948);
  RT_ROOT(g_ntoks_949);
  RT_ROOT(g_tpos_950);
  RT_ROOT(g_src_line_951);
  RT_ROOT(g_pending_prag_952);
  RT_ROOT(g_table_953);
  RT_ROOT(g_genv_954);
  RT_ROOT(g_all_insts_955);
  RT_ROOT(g_depth_956);
  RT_ROOT(g_scope_stack_957);
  RT_ROOT(g_all_types_958);
  RT_ROOT(g_serial_959);
  RT_ROOT(g_out_types_960);
  RT_ROOT(g_out_helpers_961);
  RT_ROOT(g_out_protos_962);
  RT_ROOT(g_out_globals_963);
  RT_ROOT(g_out_funcs_964);
  RT_ROOT(g_out_init_965);
  RT_ROOT(g_out_excs_966);
  RT_ROOT(g_code_967);
  RT_ROOT(g_fields_buf_968);
  RT_ROOT(g_in_func_969);
  RT_ROOT(g_cur_level_970);
  RT_ROOT(g_fctx_971);
  RT_ROOT(g_caps_972);
  RT_ROOT(g_cap_waits_973);
  RT_ROOT(g_psub_974);
  RT_ROOT(g_st_field_975);
  RT_ROOT(g_out_frames_976);
  RT_ROOT(g_out_roots_977);
  RT_ROOT(g_uses_free_978);
  RT_ROOT(g_fins_979);
  RT_ROOT(g_uses_findyn_980);
  RT_ROOT(g_func_sym_981);
  RT_ROOT(g_func_rc_982);
  RT_ROOT(g_cap_ret_983);
  RT_ROOT(g_cap_rflag_984);
  RT_ROOT(g_ret_frames_985);
  RT_ROOT(g_gdepth_986);
  RT_ROOT(g_suppress_987);
  RT_ROOT(g_cons_ctx_988);
  RT_ROOT(g_mark_uninit_989);
  RT_ROOT(g_exits_990);
  RT_ROOT(g_gotos_991);
  RT_ROOT(g_frames_992);
  RT_ROOT(g_handlers_993);
  RT_ROOT(g_cleanups_994);
  RT_ROOT(g_trial_995);
  RT_ROOT(g_mcopies_996);
  RT_ROOT(g_ty_int_997);
  RT_ROOT(g_ty_bool_998);
  RT_ROOT(g_ty_float_999);
  RT_ROOT(g_ty_ascii_1000);
  RT_ROOT(g_ty_string_1001);
  RT_ROOT(g_ty_void_1002);
  RT_ROOT(g_ty_file_1003);
  RT_ROOT(g_ty_nil_1004);
  RT_ROOT(g_ty_lock_1005);
  RT_ROOT(g_ty_latch_1006);
  RT_ROOT(g_ty_act_1007);
  RT_ROOT(g_file_mode_type_1008);
  RT_ROOT(g_ty_send_st_1009);
  RT_ROOT(g_ty_receive_st_1010);
  RT_ROOT(g_ty_text_file_1011);
  RT_ROOT(g_file_state_type_1012);
  RT_ROOT(g_file_disp_type_1013);
  RT_ROOT(g_file_access_type_1014);
  RT_ROOT(g_no_cons_1015);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_948 = NULL;
g_ntoks_949 = RT_R_IUNDEF;
g_ntoks_949 = ((rt_int)0LL);
g_tpos_950 = RT_R_IUNDEF;
g_tpos_950 = ((rt_int)1LL);
g_src_line_951 = RT_R_IUNDEF;
g_src_line_951 = ((rt_int)0LL);
g_pending_prag_952 = NULL;
g_table_953 = NULL;
g_genv_954 = NULL;
g_all_insts_955 = NULL;
g_depth_956 = RT_R_IUNDEF;
g_depth_956 = ((rt_int)0LL);
g_scope_stack_957 = NULL;
g_all_types_958 = NULL;
g_serial_959 = RT_R_IUNDEF;
g_serial_959 = ((rt_int)0LL);
g_out_types_960 = NULL;
g_out_helpers_961 = NULL;
g_out_protos_962 = NULL;
g_out_globals_963 = NULL;
g_out_funcs_964 = NULL;
g_out_init_965 = NULL;
g_out_excs_966 = NULL;
g_code_967 = NULL;
g_fields_buf_968 = NULL;
g_in_func_969 = RT_R_EUNDEF;
g_in_func_969 = 0;
g_cur_level_970 = RT_R_IUNDEF;
g_cur_level_970 = ((rt_int)0LL);
g_fctx_971 = NULL;
g_caps_972 = NULL;
g_cap_waits_973 = NULL;
g_psub_974 = NULL;
g_st_field_975 = NULL;
g_out_frames_976 = NULL;
g_out_roots_977 = NULL;
g_uses_free_978 = RT_R_EUNDEF;
g_uses_free_978 = 0;
g_fins_979 = NULL;
g_uses_findyn_980 = RT_R_EUNDEF;
g_uses_findyn_980 = 0;
g_func_sym_981 = NULL;
g_func_rc_982 = NULL;
g_cap_ret_983 = NULL;
g_cap_rflag_984 = NULL;
g_ret_frames_985 = RT_R_IUNDEF;
g_ret_frames_985 = ((rt_int)0LL);
g_gdepth_986 = RT_R_IUNDEF;
g_gdepth_986 = ((rt_int)0LL);
g_suppress_987 = NULL;
g_cons_ctx_988 = NULL;
g_mark_uninit_989 = RT_R_EUNDEF;
g_mark_uninit_989 = 0;
g_exits_990 = NULL;
g_gotos_991 = NULL;
g_frames_992 = RT_R_IUNDEF;
g_frames_992 = ((rt_int)0LL);
g_handlers_993 = NULL;
g_cleanups_994 = NULL;
g_trial_995 = RT_R_IUNDEF;
g_trial_995 = ((rt_int)0LL);
g_mcopies_996 = NULL;
g_ty_int_997 = NULL;
g_ty_bool_998 = NULL;
g_ty_float_999 = NULL;
g_ty_ascii_1000 = NULL;
g_ty_string_1001 = NULL;
g_ty_void_1002 = NULL;
g_ty_file_1003 = NULL;
g_ty_nil_1004 = NULL;
g_ty_lock_1005 = NULL;
g_ty_latch_1006 = NULL;
g_ty_act_1007 = NULL;
g_file_mode_type_1008 = NULL;
g_ty_send_st_1009 = NULL;
g_ty_receive_st_1010 = NULL;
g_ty_text_file_1011 = NULL;
g_file_state_type_1012 = NULL;
g_file_disp_type_1013 = NULL;
g_file_access_type_1014 = NULL;
g_no_cons_1015 = NULL;
{ P914 cell2551 = rt_alloc(sizeof *cell2551);
rt_int pv2552 = ((rt_int)1000000LL);
cell2551->p_n = pv2552;
cell2551->all.lo = ((rt_int)1LL); cell2551->all.hi = pv2552;
cell2551->all.lo2 = cell2551->all.hi2 = 1;
cell2551->all.p = rt_alloc(sizeof(P912) * (size_t)(RT_CNT(cell2551->all)) + 1);
for (rt_int i2553 = 0; i2553 < (RT_CNT(cell2551->all)); i2553++) {
cell2551->all.p[i2553] = NULL;
}
g_toks_948 = cell2551;
}
{ P931 cell2554 = rt_alloc(sizeof *cell2554);
rt_int pv2555 = (((rt_int)4093LL));
cell2554->p_n = pv2555;
cell2554->all.lo = ((rt_int)0LL); cell2554->all.hi = pv2555;
cell2554->all.lo2 = cell2554->all.hi2 = 1;
cell2554->all.p = rt_alloc(sizeof(P927) * (size_t)(RT_CNT(cell2554->all)) + 1);
for (rt_int i2556 = 0; i2556 < (RT_CNT(cell2554->all)); i2556++) {
cell2554->all.p[i2556] = NULL;
}
g_table_953 = cell2554;
}
g_out_types_960 = f_new_buffer_24();
g_out_helpers_961 = f_new_buffer_24();
g_out_protos_962 = f_new_buffer_24();
g_out_globals_963 = f_new_buffer_24();
g_out_funcs_964 = f_new_buffer_24();
g_out_init_965 = f_new_buffer_24();
g_out_excs_966 = f_new_buffer_24();
g_out_frames_976 = f_new_buffer_24();
g_out_roots_977 = f_new_buffer_24();
g_code_967 = g_out_init_965;
g_no_cons_1015 = f_new_cons_176();
g_ty_int_997 = f_new_typ_175((((rt_int)1LL)));
g_ty_bool_998 = f_new_typ_175((((rt_int)2LL)));
g_ty_float_999 = f_new_typ_175((((rt_int)3LL)));
g_ty_string_1001 = f_new_typ_175((((rt_int)5LL)));
g_ty_void_1002 = f_new_typ_175((((rt_int)9LL)));
g_ty_file_1003 = f_new_typ_175((((rt_int)10LL)));
g_ty_nil_1004 = f_new_typ_175((((rt_int)11LL)));
g_ty_lock_1005 = f_new_typ_175((((rt_int)13LL)));
g_ty_latch_1006 = f_new_typ_175((((rt_int)13LL)));
g_ty_act_1007 = f_new_typ_175((((rt_int)14LL)));
{ rt_frame xf2557;
if (RT_TRY(xf2557)) {
f_init_ascii_251();
f_read_source_58();
f_translate_908(f_program_151());
f_print_program_909();
RT_POP(xf2557);
} else {
RT_POP(xf2557);
int x2558 = rt_xcur;
if (0 || x2558 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2558);
}
}
}
  rt_main_done();
  return 0;
}
