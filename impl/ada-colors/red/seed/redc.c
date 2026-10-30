#include "paleo.h"
#include <math.h>
typedef struct Pc990 *P989;
typedef struct R992 R992;
typedef struct R992 *P991;
struct R992 {  rt_int kind; rt_int line; rt_int ival; P989 s; P989 prags;  };
typedef struct Pc994 *P993;
typedef struct A995 A995;
struct A995 { rt_int lo, hi, lo2, hi2; P991 *p; };
typedef struct R997 R997;
typedef struct R997 *P996;
struct R997 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P989 name; P989 tag; P989 prags; P996 labels; P996 a; P996 b; P996 c; P996 d; P996 e; P996 next;  };
typedef struct R999 R999;
typedef struct R999 *P998;
typedef struct R1001 R1001;
typedef struct R1001 *P1000;
struct R1001 {  P989 s; P1000 next;  };
struct R999 {  P989 lo; P989 hi; P989 lo2; P989 hi2; P989 slen; rt_int mlo; rt_int mhi; int hasm; P996 args; int dyn; rt_int lvl; P989 prec; P1000 bnds;  };
typedef struct R1003 R1003;
typedef struct R1003 *P1002;
typedef struct R1005 R1005;
typedef struct R1005 *P1004;
struct R1005 {  P989 name; P1002 t; P998 c; P996 st; P1004 next;  };
typedef struct R1007 R1007;
typedef struct R1007 *P1006;
typedef struct R1009 R1009;
typedef struct R1009 *P1008;
struct R1009 {  P989 name; rt_int mode; P1002 t; P998 c; P989 cfield; P1008 next;  };
typedef struct Pc1011 *P1010;
typedef struct A1012 A1012;
struct A1012 { rt_int lo, hi, lo2, hi2; P1006 *p; };
typedef struct R1014 R1014;
typedef struct R1014 *P1013;
struct R1014 {  rt_int depth; P996 imps; int all_imp; P1013 next;  };
typedef struct R1016 R1016;
typedef struct R1016 *P1015;
struct R1016 {  rt_int kind; rt_int i; P989 s; P1002 t;  };
struct R1007 {  rt_int kind; P989 name; P1002 t; P998 c; P989 access; P989 cname; int ro_flag; rt_int mvalue; int hasmv; P996 st; P996 decl; P1008 params; P1002 result; rt_int depth; rt_int level; int byref; P1006 members; P1006 mnext; P996 binds; P1006 insts; P1010 env; P1006 chain; P1006 stack; P1006 owner; P1013 gctx; P1015 mv; P1000 reqs; int reqdone; P996 home; P996 capn; P1006 tbinds; P989 loc; P1006 reqs_sym; rt_int decl_line;  };
typedef struct R1018 R1018;
typedef struct R1018 *P1017;
struct R1018 {  P1002 t; P1017 next;  };
struct R1003 {  rt_int kind; P989 name; P996 lits; P1002 elem; P1002 idx; P1002 idx2; P998 elemcons; P996 elemst; P1002 under; P996 tparams; P996 ocap; P1004 fields; P1002 target; P996 decl; P989 cname; int forward; int defined; int helpers; P1006 initp; P1006 finalp; P1006 tpsyms; P1006 gen; P1006 gbinds; P1002 next; rt_int ndim; P1017 idxs; P1006 assignp; P1006 eqp; P1006 ltp; P996 repn;  };
typedef struct R1020 R1020;
typedef struct R1020 *P1019;
struct R1020 {  P1000 head; P1000 tail;  };
typedef struct R1022 R1022;
typedef struct R1022 *P1021;
struct R1022 {  P989 match; P989 label; rt_int depth; P1021 next;  };
typedef struct R1024 R1024;
typedef struct R1024 *P1023;
struct R1024 {  P996 d; P1023 next; rt_int depth;  };
typedef struct R1026 R1026;
typedef struct R1026 *P1025;
struct R1026 {  P996 d; P989 w; P1025 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P989 result_;
 P989 t_1095;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_1098;
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
 rstr r_1099;
 rt_int i_1100;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_1104;
 rstr w_1105;
 rt_int i_1106;
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
 P1019 result_;
 P1019 b_1110;
};
struct f_put_27fr { int dummy;
 P1019 b_25;
 rstr *s_26;
 P1000 l_1112;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P1019 b_30;
 P1000 l_1114;
};
struct f_splice_34fr { int dummy;
 P1019 a_32;
 P1019 b_33;
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
 P991 t_1116;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_1118;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_1119;
 rt_int k_1120;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_1124;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_1125;
 P989 r_1126;
 int more_1127;
 rt_int k_1128;
 int go_1129;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_1130;
 rt_int k_1131;
 rstr p_1132;
 int ok_1133;
 int known_1134;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_1135;
 rt_int j_1136;
 rt_int n_1137;
 int c_1138;
 rstr w_1139;
 rt_int k_1140;
 rstr w_1144;
 rt_int k_1145;
 rstr two_1149;
};
struct f_read_source_58fr { int dummy;
 rstr line_1150;
};
struct f_nn_61fr { int dummy;
 rt_int kind_59;
 rt_int line_60;
 P996 result_;
 P996 x_1151;
};
struct f_append_65fr { int dummy;
 P996 *head_62;
 P996 *tail_63;
 P996 x_64;
};
struct f_list_len_67fr { int dummy;
 P996 l_66;
 rt_int result_;
 rt_int n_1153;
 P996 p_1154;
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
 P989 result_;
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
 P989 result_;
};
struct f_name_node_90fr { int dummy;
 P996 result_;
 P996 x_1155;
};
struct f_id_list_91fr { int dummy;
 P996 result_;
 P996 head_1156;
 P996 tail_1157;
};
struct f_p_subtype_92fr { int dummy;
 P996 result_;
 rt_int line_1158;
 P996 x_1159;
 rstr w_1160;
 P996 head_1161;
 P996 tail_1162;
 P996 head_1163;
 P996 tail_1164;
 int more_1165;
 P996 names_1166;
 P996 st_1167;
 P996 cmp_1168;
 P996 head_1169;
 P996 tail_1170;
 int more_1171;
 P996 lit_1172;
};
struct f_constraint_list_93fr { int dummy;
 P996 result_;
 P996 head_1173;
 P996 tail_1174;
 int more_1175;
 rt_int line_1176;
 P996 lo_1177;
 P996 r_1178;
};
struct f_actual_params_94fr { int dummy;
 P996 result_;
 P996 head_1179;
 P996 tail_1180;
};
struct f_is_type_word_96fr { int dummy;
 rstr *w_95;
 int result_;
};
struct f_actual_tt_97fr { int dummy;
 P996 result_;
 P996 head_1181;
 P996 tail_1182;
 int more_1183;
};
struct f_binop_102fr { int dummy;
 P989 op_98;
 P996 l_99;
 P996 r_100;
 rt_int line_101;
 P996 result_;
 P996 x_1184;
};
struct f_expr_103fr { int dummy;
 P996 result_;
 P996 l_1185;
 P989 op_1186;
 rt_int line_1187;
};
struct f_expr_and_104fr { int dummy;
 P996 result_;
 P996 l_1188;
 rt_int line_1189;
};
struct f_expr_not_105fr { int dummy;
 P996 result_;
 P996 x_1190;
};
struct f_is_rel_107fr { int dummy;
 rstr *s_106;
 int result_;
};
struct f_expr_rel_108fr { int dummy;
 P996 result_;
 P996 l_1191;
 P989 op_1192;
 rt_int line_1193;
};
struct f_expr_add_109fr { int dummy;
 P996 result_;
 P996 l_1194;
 P989 op_1195;
 rt_int line_1196;
};
struct f_expr_mul_110fr { int dummy;
 P996 result_;
 P996 l_1197;
 P989 op_1198;
 rt_int line_1199;
};
struct f_expr_pow_111fr { int dummy;
 P996 result_;
 P996 l_1200;
 rt_int line_1201;
};
struct f_expr_prefix_112fr { int dummy;
 P996 result_;
 P996 x_1202;
};
struct f_postfix_113fr { int dummy;
 P996 result_;
 P996 p_1203;
 rt_int line_1204;
 P996 x_1205;
 P996 head_1206;
 P996 tail_1207;
 int more_1208;
 P996 lo_1209;
 P996 r_1210;
 P996 x_1211;
 P996 x_1212;
 P996 x_1213;
};
struct f_primary_114fr { int dummy;
 P996 result_;
 rt_int line_1214;
 P996 x_1215;
 rt_int k_1216;
 rstr w_1217;
 P996 head_1218;
 P996 tail_1219;
 int more_1220;
};
struct f_constructor_item_115fr { int dummy;
 P996 result_;
 rt_int line_1221;
 P996 it_1222;
 P996 first_1223;
 P996 keys_1224;
 P996 ktail_1225;
 P996 lab_1226;
 rt_int save_1227;
 P996 more_1228;
 P996 tail2_1229;
 int ok_1230;
 int go_1231;
 P996 l2_1232;
};
struct f_at_body_end_116fr { int dummy;
 int result_;
};
struct f_body_117fr { int dummy;
 P996 result_;
 P996 head_1233;
 P996 tail_1234;
 int stmts_1235;
 P996 after_1236;
 P996 x_1237;
};
struct f_body_element_118fr { int dummy;
 P996 result_;
 P996 x_1238;
 P989 pr_1239;
 P996 p_1240;
};
struct f_declaration_119fr { int dummy;
 P996 result_;
 rt_int line_1241;
 P996 head_1242;
 P996 tail_1243;
 P996 names_1244;
 P996 x_1245;
};
struct f_object_decl_120fr { int dummy;
 P996 result_;
 rt_int line_1246;
 int is_var_1247;
 P996 names_1248;
 P996 st_1249;
 P996 init_1250;
 P996 loc_1251;
 rt_int loc_kind_1252;
 P996 head_1253;
 P996 tail_1254;
 P996 x_1255;
};
struct f_abbrev_decl_121fr { int dummy;
 P996 result_;
 P996 x_1256;
};
struct f_rep_spec_122fr { int dummy;
 P996 result_;
};
struct f_rep_items_123fr { int dummy;
 P996 result_;
 P996 head_1257;
 P996 tail_1258;
 int more_1259;
};
struct f_rep_word_125fr { int dummy;
 rt_int k_124;
 int result_;
 rstr w_1260;
};
struct f_rep_item_126fr { int dummy;
 P996 result_;
 P996 x_1261;
 P996 head_1262;
 P996 tail_1263;
 int more_1264;
 P996 names_1265;
 P996 items_1266;
 P996 cmp_1267;
 P996 head_1268;
 P996 tail_1269;
 P996 head_1270;
 P996 tail_1271;
 int dummy_1272;
};
struct f_type_decl_127fr { int dummy;
 P996 result_;
 rt_int line_1273;
 P989 name_1274;
 P996 params_1275;
 P996 x_1276;
 P996 tts_1277;
};
struct f_mode_of_129fr { int dummy;
 rstr *w_128;
 rt_int result_;
};
struct f_formal_params_130fr { int dummy;
 P996 result_;
 P996 head_1278;
 P996 tail_1279;
 int more_1280;
 rt_int mode_1281;
 P996 names_1282;
 P996 ntail_1283;
 P996 st_1284;
 P996 p_1285;
};
struct f_imports_list_132fr { int dummy;
 P996 owner_131;
 int result_;
 P996 head_1286;
 P996 tail_1287;
 int more_1288;
 int ro_1289;
 P996 x_1290;
};
struct f_is_definable_134fr { int dummy;
 rstr *w_133;
 int result_;
};
struct f_definable_name_135fr { int dummy;
 P989 result_;
 P989 r_1291;
};
struct f_subprogram_decl_136fr { int dummy;
 P996 result_;
 rt_int line_1292;
 P996 x_1293;
 int is_abn_1294;
 int is_func_1295;
 int dummy_1296;
};
struct f_capsule_decl_137fr { int dummy;
 P996 result_;
 P996 x_1297;
 int dummy_1298;
 P996 head_1299;
 P996 tail_1300;
 int more_1301;
 P996 n_1302;
};
struct f_formal_tt_138fr { int dummy;
 P996 result_;
 P996 head_1303;
 P996 tail_1304;
 int more_1305;
};
struct f_generic_decl_139fr { int dummy;
 P996 result_;
 P996 x_1306;
 P996 head_1307;
 P996 tail_1308;
 int more_1309;
 P996 names_1310;
 rt_int kind_1311;
 P996 st_1312;
 P996 items_1313;
 P996 p_1314;
 P996 nhead_1315;
 P996 ntail_1316;
 P996 it_1317;
};
struct f_type_list_140fr { int dummy;
 P996 result_;
 P996 head_1318;
 P996 tail_1319;
 int more_1320;
 P996 n_1321;
};
struct f_task_decl_141fr { int dummy;
 P996 result_;
 P996 x_1322;
 int dummy_1323;
};
struct f_expose_decl_142fr { int dummy;
 P996 result_;
 P996 x_1324;
 P996 head_1325;
 P996 tail_1326;
 int more_1327;
 P996 n_1328;
 P996 head_1329;
 P996 tail_1330;
 int more_1331;
 P996 n_1332;
 P996 tgt_1333;
};
struct f_is_compound_kw_144fr { int dummy;
 rstr *w_143;
 int result_;
};
struct f_statement_145fr { int dummy;
 P996 result_;
 P996 labels_1334;
 P996 ltail_1335;
 P989 match_1336;
 P996 s_1337;
};
struct f_unlabeled_statement_146fr { int dummy;
 P996 result_;
 rt_int line_1338;
 P996 x_1339;
 P996 head_1340;
 P996 tail_1341;
 P996 invs_1342;
 P996 itail_1343;
 int more_1344;
 P996 target_1345;
};
struct f_arm_150fr { int dummy;
 P996 cond_147;
 P996 b_148;
 rt_int line_149;
 P996 result_;
 P996 x_1346;
};
struct f_if_stmt_151fr { int dummy;
 P996 result_;
 P996 x_1347;
 P996 head_1348;
 P996 tail_1349;
 P996 cond_1350;
 int go_1351;
};
struct f_case_stmt_152fr { int dummy;
 P996 result_;
 P996 x_1352;
 P996 head_1353;
 P996 tail_1354;
 P996 labs_1355;
 P996 ltail_1356;
 int more_1357;
 P996 l_1358;
};
struct f_repeat_stmt_153fr { int dummy;
 P996 result_;
 P996 x_1359;
};
struct f_guard_stmt_154fr { int dummy;
 P996 result_;
 P996 x_1360;
 P996 head_1361;
 P996 tail_1362;
 P996 h_1363;
};
struct f_program_155fr { int dummy;
 P996 result_;
 P996 head_1364;
 P996 tail_1365;
 P989 pr_1366;
 P996 u_1367;
};
struct f_hash_157fr { int dummy;
 rstr *s_156;
 rt_int result_;
 rt_int h_1368;
 rt_int i_1369;
};
struct f_lookup_159fr { int dummy;
 rstr *name_158;
 P1006 result_;
 P1006 y_1373;
};
struct f_lookup_decl_161fr { int dummy;
 P996 d_160;
 P1006 result_;
 P1006 y_1374;
};
struct f_define_164fr { int dummy;
 P1006 y_162;
 rt_int line_163;
 rt_int h_1375;
 P1006 z_1376;
};
struct f_overloadable_166fr { int dummy;
 P1006 y_165;
 int result_;
};
struct f_same_tt_169fr { int dummy;
 P996 a_167;
 P996 b_168;
 int result_;
 P996 x_1377;
 P996 y_1378;
};
struct f_same_signature_172fr { int dummy;
 P1008 a_170;
 P1008 b_171;
 int result_;
 P1008 x_1379;
 P1008 y_1380;
};
struct f_open_scope_173fr { int dummy;
};
struct f_close_scope_174fr { int dummy;
};
struct f_new_sym_177fr { int dummy;
 rt_int kind_175;
 P989 name_176;
 P1006 result_;
 P1006 y_1381;
};
struct f_new_typ_179fr { int dummy;
 rt_int kind_178;
 P1002 result_;
 P1002 t_1383;
};
struct f_new_cons_180fr { int dummy;
 P998 result_;
 P998 c_1385;
};
struct f_scalar_kind_182fr { int dummy;
 P1002 t_181;
 int result_;
};
struct f_bound_ctype_184fr { int dummy;
 P1002 t_183;
 rstr result_;
};
struct f_cbound_187fr { int dummy;
 P998 c_185;
 rstr *b_186;
 rstr result_;
 P989 p_1387;
 rt_int i_1388;
};
struct f_clo_189fr { int dummy;
 P998 c_188;
 rstr result_;
};
struct f_chi_191fr { int dummy;
 P998 c_190;
 rstr result_;
};
struct f_sub_lo_194fr { int dummy;
 P1002 t_192;
 P998 c_193;
 rstr result_;
};
struct f_sub_hi_197fr { int dummy;
 P1002 t_195;
 P998 c_196;
 rstr result_;
};
struct f_raw_storage_200fr { int dummy;
 rstr *name_198;
 rstr *ct_199;
 rstr result_;
 rstr g_1392;
 rstr f_1393;
};
struct f_copy_cons_202fr { int dummy;
 P998 c_201;
 P998 result_;
 P998 r_1394;
};
struct f_freeze_205fr { int dummy;
 P998 c_203;
 P1002 t_204;
 P998 result_;
 P998 r_1396;
 P989 saved_field_1397;
 rstr ct_1398;
 rstr la_1399;
 rstr lf_1400;
 rstr ha_1401;
 rstr hf_1402;
};
struct f_checked_209fr { int dummy;
 P1002 t_206;
 P998 c_207;
 rstr *v_208;
 rstr result_;
};
struct f_same_lits_212fr { int dummy;
 P996 a_210;
 P996 b_211;
 int result_;
 P996 x_1403;
 P996 y_1404;
};
struct f_str_elem_214fr { int dummy;
 P1002 t_213;
 P1002 result_;
};
struct f_same_217fr { int dummy;
 P1002 a_215;
 P1002 b_216;
 int result_;
 P1017 x_1405;
 P1017 y_1406;
 P1004 f_1407;
 P1004 g_1408;
};
struct f_base_of_219fr { int dummy;
 P1002 t_218;
 P1002 result_;
};
struct f_base_cons_222fr { int dummy;
 P1002 t_220;
 P998 c_221;
 P998 result_;
};
struct f_kind_name_224fr { int dummy;
 P1002 t_223;
 rstr result_;
};
struct f_check_type_228fr { int dummy;
 P1002 got_225;
 P1002 want_226;
 rt_int line_227;
};
struct f_ctype_230fr { int dummy;
 P1002 t_229;
 rstr result_;
};
struct f_struct_body_232fr { int dummy;
 P1002 t_231;
 rstr result_;
};
struct f_field_decls_234fr { int dummy;
 P1002 t_233;
 rstr result_;
 P1004 f_1411;
 P989 s_1412;
};
struct f_declare_ctype_236fr { int dummy;
 P1002 t_235;
 P1002 u_1413;
 P996 p_1414;
 P989 fs_1415;
 rstr sn_1416;
 P998 pc_1417;
 P1002 target_1418;
 P996 p_1419;
 P989 fs_1420;
};
struct f_dim_lo_238fr { int dummy;
 rt_int k_237;
 rstr result_;
};
struct f_dim_hi_240fr { int dummy;
 rt_int k_239;
 rstr result_;
};
struct f_more_dims_242fr { int dummy;
 P1002 t_241;
 rstr result_;
 P989 r_1421;
 rt_int k_1422;
};
struct f_acnt_245fr { int dummy;
 P1002 t_243;
 rstr *base_244;
 rstr result_;
 P989 r_1426;
 rt_int k_1427;
};
struct f_cons_lo_248fr { int dummy;
 P998 c_246;
 rt_int k_247;
 P989 result_;
 P1000 l_1431;
 rt_int i_1432;
};
struct f_cons_hi_251fr { int dummy;
 P998 c_249;
 rt_int k_250;
 P989 result_;
 P1000 l_1436;
 rt_int i_1437;
};
struct f_idx_type_254fr { int dummy;
 P1002 t_252;
 rt_int k_253;
 P1002 result_;
 P1017 l_1441;
 rt_int i_1442;
};
struct f_init_ascii_255fr { int dummy;
 P996 head_1446;
 P996 tail_1447;
 rt_int start_1448;
 rt_int i_1449;
 P996 lit_1453;
 P996 h2_1454;
 P996 t2_1455;
 P996 l1_1456;
 P996 l2_1457;
 P996 l3_1458;
};
struct f_enum2_258fr { int dummy;
 rstr *a_256;
 rstr *b_257;
 P1002 result_;
 P1002 t_1459;
 P996 l1_1460;
 P996 l2_1461;
};
struct f_lit_index_261fr { int dummy;
 P996 lits_259;
 rstr *name_260;
 rt_int result_;
 rt_int i_1462;
 P996 l_1463;
};
struct f_resolve_subtype_264fr { int dummy;
 P996 st_262;
 P998 *c_263;
 P998 c_263v;
 P1002 result_;
 P1002 t_1464;
 int ok_1465;
 P1002 dummy_1466;
 P1002 et_1468;
 P998 ec_1469;
 P1002 et_1470;
 P996 ix_1471;
 rt_int k_1472;
 P1017 tail_1473;
 P1000 btail_1474;
 P998 ic_1475;
 P1002 it_1476;
 P989 lo_1477;
 P989 hi_1478;
 P1017 tl_1479;
 P1000 l1_1481;
 P1000 l2_1482;
 P998 ec_1485;
 P996 comp_1486;
 P1004 tail_1487;
 P998 cc_1488;
 P1004 f_1489;
 P996 lits_1491;
 P996 ltail_1492;
 P1004 f_1493;
 P996 l_1494;
 P998 ec_1495;
 P996 gt_1496;
 P998 ec_1497;
 P989 base_1498;
};
struct f_float_lit_266fr { int dummy;
 P996 e_265;
 int result_;
};
struct f_tag_constraint_270fr { int dummy;
 P1002 t_267;
 P996 e_268;
 P998 c_269;
 P1002 dummy_1499;
};
struct f_named_subtype_273fr { int dummy;
 P996 st_271;
 P998 *c_272;
 P998 c_272v;
 P1002 result_;
 P1002 t_1500;
 P1006 y_1501;
 rstr name_1502;
 P1006 binds_1503;
 P1010 saved_env_1504;
 rt_int saved_gdepth_1505;
 P1006 nb_1506;
};
struct f_invoke_abbrev_277fr { int dummy;
 P1006 y_274;
 P996 st_275;
 P998 *c_276;
 P998 c_276v;
 P1002 result_;
 P996 p_1507;
 P996 a_1508;
 P1002 t_1509;
 P1006 z_1510;
 P998 pc_1511;
 P1002 at_1512;
 int ok_1513;
};
struct f_apply_constraint_282fr { int dummy;
 P1002 t_278;
 P996 args_279;
 P998 c_280;
 rt_int line_281;
 P1002 dummy_1514;
 int ok_1515;
};
struct f_value_subtype_286fr { int dummy;
 P996 e_283;
 P998 *c_284;
 P998 c_284v;
 P989 *base_285;
 P989 base_285v;
 P1002 result_;
 P1002 t_1516;
 P998 c0_1517;
 int ro_1518;
 rt_int k_1519;
 rstr lo_1523;
 rstr hi_1524;
 P1000 l1_1525;
 P1000 l2_1526;
 P996 p_1529;
 P996 head_1530;
 P996 tail_1531;
 P996 sel_1532;
};
struct f_reverse_pairs_288fr { int dummy;
 P1000 l_287;
 P1000 result_;
 P1000 r_1533;
 P1000 p_1534;
 P1000 a_1535;
 P1000 b_1536;
};
struct f_inquiry_291fr { int dummy;
 P996 st_289;
 P998 *c_290;
 P998 c_290v;
 P1002 result_;
 P989 base_1537;
 P1002 t_1538;
 rstr name_1539;
 P996 sub_1540;
 P998 c2_1541;
 rt_int k_1542;
 int ok_1543;
 P998 ac_1544;
};
struct f_as_subtype_293fr { int dummy;
 P996 e_292;
 P996 result_;
 P996 st_1545;
 rstr name_1546;
 P1006 y_1547;
};
struct f_tt_subtype_298fr { int dummy;
 P989 name_294;
 P996 tt_295;
 P996 args_296;
 rt_int line_297;
 P996 result_;
 P996 st_1548;
};
struct f_type_name_300fr { int dummy;
 rstr *name_299;
 int result_;
 P1006 y_1549;
};
struct f_empty_set_302fr { int dummy;
 P1002 t_301;
 rstr result_;
};
struct f_opened_304fr { int dummy;
 P1002 t_303;
 int result_;
 P1023 c_1550;
};
struct f_replace_all_308fr { int dummy;
 rstr *s_305;
 rstr *pat_306;
 rstr *r_307;
 rstr result_;
 rt_int i_1551;
};
struct f_subst_310fr { int dummy;
 rstr *s_309;
 rstr result_;
 P1000 l_1552;
 P989 r_1553;
};
struct f_new_type_314fr { int dummy;
 P1006 y_311;
 P996 st_312;
 P998 *c_313;
 P998 c_313v;
 P1002 result_;
 P996 d_1554;
 P996 p_1555;
 P998 uc_1556;
 P1006 z_1557;
 P998 zc_1558;
};
struct f_needed_bits_317fr { int dummy;
 P1002 t_315;
 P998 c_316;
 rt_int result_;
 rt_int n_1559;
 rt_int v_1560;
};
struct f_has_digits_only_319fr { int dummy;
 rstr *s_318;
 int result_;
 rt_int i_1561;
};
struct f_built_in_only_321fr { int dummy;
 P1002 t_320;
 int result_;
 P1004 f_1565;
};
struct f_check_rep_328fr { int dummy;
 P996 items_322;
 P1002 t_323;
 P998 c_324;
 int top_325;
 int indirect_326;
 P996 d_327;
 P996 it_1566;
 int ok_1567;
 P1002 at_1568;
 rstr w_1569;
 rt_int v_1570;
 rstr dummy_1571;
 rt_int m_1572;
 int ok2_1573;
 rt_int r_1574;
 rt_int o_1575;
 P996 comp_1576;
 P1004 f_1577;
 P996 k_1578;
 P996 a_1579;
};
struct f_formal_named_331fr { int dummy;
 P996 d_329;
 rstr *name_330;
 int result_;
 P996 p_1580;
};
struct f_unchecked_free_333fr { int dummy;
 P1002 t_332;
 int result_;
 P996 it_1581;
};
struct f_init_storage_337fr { int dummy;
 rstr *lval_334;
 P1002 t_335;
 P998 c_336;
};
struct f_init_call_340fr { int dummy;
 P1006 y_338;
 rstr *lval_339;
 rstr result_;
 P989 link_1582;
 rt_int i_1583;
};
struct f_needs_fin_342fr { int dummy;
 P1002 t_341;
 int result_;
 P1004 f_1587;
};
struct f_fin_code_345fr { int dummy;
 rstr *lval_343;
 P1002 t_344;
 rstr result_;
 P989 r_1588;
 rstr i_1589;
 P1004 f_1590;
 P1004 f_1591;
 rt_int i_1592;
};
struct f_tparam_type_348fr { int dummy;
 P1002 t_346;
 rstr *name_347;
 P1002 result_;
 P1006 z_1593;
};
struct f_make_storage_352fr { int dummy;
 rstr *lval_349;
 P1002 t_350;
 P998 c_351;
 P996 p_1594;
 P996 a_1595;
 P998 uc_1596;
 P1002 ut_1597;
 P1002 at_1598;
 P1002 pt_1599;
 rstr v_1600;
 P1000 saved_1601;
 P1000 l1_1602;
 P1000 l2_1603;
 P1002 at_1606;
 rstr acc_1607;
 rstr use_1608;
 rt_int k_1609;
 rstr i_1613;
 P1004 f_1614;
 P1004 f_1615;
 rt_int i_1616;
};
struct f_flat_354fr { int dummy;
 P1002 t_353;
 int result_;
 P1004 f_1620;
};
struct f_uninit_value_356fr { int dummy;
 P1002 t_355;
 rstr result_;
};
struct f_init_chk_359fr { int dummy;
 P1002 t_357;
 rstr *v_358;
 rstr result_;
 P1002 b_1621;
};
struct f_manifest_362fr { int dummy;
 P996 e_360;
 int *ok_361;
 int ok_361v;
 rt_int result_;
 P1015 v_1622;
};
struct f_mk_mval_365fr { int dummy;
 rt_int kind_363;
 rt_int i_364;
 P1015 result_;
 P1015 v_1623;
};
struct f_ipow_368fr { int dummy;
 rt_int a_366;
 rt_int b_367;
 rt_int result_;
 rt_int r_1625;
 rt_int i_1626;
};
struct f_meval_371fr { int dummy;
 P996 e_369;
 int *ok_370;
 int ok_370v;
 P1015 result_;
 P1015 a_1630;
 P1015 b_1631;
 int ok2_1632;
 P989 op_1633;
 P1006 y_1634;
 P1015 r_1635;
};
struct f_bool_text_373fr { int dummy;
 int b_372;
 rstr result_;
};
struct f_bool_i_375fr { int dummy;
 int b_374;
 rt_int result_;
};
struct f_mstr_377fr { int dummy;
 P1015 v_376;
 rstr result_;
};
struct f_ascii_char_379fr { int dummy;
 rt_int i_378;
 int result_;
 rstr printable_1636;
};
struct f_user_defined_381fr { int dummy;
 rstr *op_380;
 int result_;
 P1006 y_1637;
};
struct f_mcopy_383fr { int dummy;
 P1002 t_382;
 rstr result_;
 rstr ct_1638;
 rstr name_1639;
 P1000 l_1640;
};
struct f_composite_385fr { int dummy;
 P1002 t_384;
 int result_;
};
struct f_user_call2_391fr { int dummy;
 P1006 y_386;
 rstr *a_387;
 int lv_a_388;
 rstr *b_389;
 int lv_b_390;
 rstr result_;
 P989 args_1642;
 rt_int i_1643;
};
struct f_user_arg_395fr { int dummy;
 P1008 pm_392;
 rstr *v_393;
 int lv_394;
 rstr result_;
 rstr ct_1647;
};
struct f_top_level_397fr { int dummy;
 P1006 y_396;
 int result_;
};
struct f_assign_code_402fr { int dummy;
 rstr *lval_398;
 P1002 t_399;
 rstr *v_400;
 P998 c_401;
 rstr result_;
};
struct f_copy_code_405fr { int dummy;
 P1002 t_403;
 rstr *v_404;
 rstr result_;
};
struct f_eq_code_409fr { int dummy;
 P1002 t_406;
 rstr *a_407;
 rstr *b_408;
 rstr result_;
};
struct f_elem_assign_413fr { int dummy;
 rstr *lval_410;
 P1002 t_411;
 rstr *v_412;
 rstr result_;
};
struct f_seen_name_416fr { int dummy;
 P1000 l_414;
 rstr *s_415;
 int result_;
 P1000 p_1648;
};
struct f_emit_helpers_417fr { int dummy;
 P1002 order_1649;
 P1002 t_1650;
 P1000 done_1651;
 P1000 l_1652;
 rstr c_1653;
};
struct f_helper_bodies_419fr { int dummy;
 P1002 t_418;
 rstr c_1655;
 P1019 b_1656;
 P1002 e_1657;
 P989 sizes_1658;
 P989 bounds_1659;
 rt_int k_1660;
 rstr l_1664;
 rstr h_1665;
 P1000 saved_1666;
 P996 p_1667;
 P1000 l1_1668;
 P1000 l2_1669;
 P1004 f_1672;
 rt_int i_1673;
 P989 cases_as_1674;
 P989 cases_cp_1675;
 P989 cases_eq_1676;
 rstr fn_1677;
 P1004 f_1678;
 P989 conds_1679;
 rstr fn_1680;
 rstr fn_1681;
};
struct f_declare_body_421fr { int dummy;
 P996 elems_420;
 P996 e_1682;
 P1006 g_1683;
 P1006 y_1684;
 P1006 y_1685;
 P1006 y_1686;
 P1002 t_1687;
 P1006 y_1688;
 P1006 y_1689;
 P1010 snap_1690;
 rt_int i_1694;
 P1006 g_1698;
 P1006 y_1699;
 P1006 y_1700;
};
struct f_manifest_const_423fr { int dummy;
 P996 d_422;
 int ok_1701;
 P1015 v_1702;
 P1006 y_1703;
 P1002 t_1704;
 P989 ctext_1705;
 P1019 saved_1706;
};
struct f_exported_427fr { int dummy;
 P996 d_424;
 rstr *name_425;
 int *ro_426;
 int ro_426v;
 int result_;
 P996 p_1709;
};
struct f_copy_sym_429fr { int dummy;
 P1006 y_428;
 P1006 result_;
 P1006 z_1710;
};
struct f_gen_capsule_431fr { int dummy;
 P996 d_430;
 P1006 y_1712;
 P989 saved_1713;
 P996 p_1714;
 P1008 tail_1715;
 P1008 pm_1716;
};
struct f_capsule_params_435fr { int dummy;
 P996 d_432;
 P996 args_433;
 rt_int line_434;
 P996 p_1718;
 P996 a_1719;
 P1002 t_1720;
 P1002 vt_1721;
 P998 c_1722;
 P989 lv_1723;
 P998 lc_1724;
 int ro_1725;
 P1006 y_1726;
 rstr f_1727;
 rstr g_1728;
 P1006 y_1729;
 rstr v_1730;
 rstr access_1731;
};
struct f_elaborate_capsule_440fr { int dummy;
 P996 d_436;
 P1006 y_437;
 P996 args_438;
 P996 owner_439;
 P1023 cr_1732;
 P1013 ctx_1733;
 P1021 saved_gotos_1734;
 P1006 m_1735;
 P996 p_1736;
 int ro_1737;
 P1025 w_1740;
 P1006 z_1742;
};
struct f_exports_op_443fr { int dummy;
 P996 d_441;
 rstr *op_442;
 int result_;
 P996 p_1743;
};
struct f_renamed_446fr { int dummy;
 P996 d_444;
 P1006 z_445;
 P989 result_;
 P996 r_1744;
};
struct f_cap_tt_match_449fr { int dummy;
 P996 f_447;
 P996 a_448;
 int result_;
 P996 x_1745;
 P996 y_1746;
 int ok1_1747;
 int ok2_1748;
 P1015 v1_1749;
 P1015 v2_1750;
};
struct f_pick_capsule_451fr { int dummy;
 P996 d_450;
 P1006 result_;
 P1006 y_1751;
 P1006 first_1752;
 P1006 fit_1753;
 rt_int n_1754;
};
struct f_capsule_instance_454fr { int dummy;
 P1006 g_452;
 P996 d_453;
 P1006 result_;
 P996 gd_1755;
 P996 pat_1756;
 P1006 binds_1757;
 P1006 inst_1758;
 P1010 saved_env_1759;
 rt_int saved_gdepth_1760;
 P1006 b_1761;
};
struct f_configure_456fr { int dummy;
 P1006 y_455;
 P1006 m_1762;
 rstr n_1763;
};
struct f_gen_expose_458fr { int dummy;
 P996 d_457;
 P1006 y_1764;
 P1006 m_1765;
 P996 p_1766;
 P996 r_1767;
 P1006 inst_1768;
 int found_1769;
 P1006 z_1770;
 int found_1771;
 P1006 z_1772;
};
struct f_finish_ptr_460fr { int dummy;
 P1002 t_459;
 P996 d_1773;
 P996 p_1774;
 P998 c_1775;
 rstr dummy_1776;
 rt_int pass_1777;
 P1006 y_1781;
 P998 pc_1782;
};
struct f_ptr_args_462fr { int dummy;
 P998 c_461;
 P996 result_;
};
struct f_bind_ptr_params_467fr { int dummy;
 P996 formals_463;
 P996 actuals_464;
 rstr *cell_465;
 rt_int line_466;
 P996 p_1783;
 P996 a_1784;
 P1002 vt_1785;
 P998 pc_1786;
 P1006 y_1787;
 rstr v_1788;
 rstr pv_1789;
};
struct f_alloc_cell_472fr { int dummy;
 P996 s_468;
 rstr *lv_469;
 P1002 t_470;
 P998 c_471;
 P996 d_1790;
 P998 tc_1791;
 P1002 vt_1792;
 rstr pt_1793;
 rstr cell_1794;
 rstr fn_1795;
 rstr v_1796;
};
struct f_freeze_args_476fr { int dummy;
 P998 c_473;
 P1002 t_474;
 rt_int line_475;
 P998 result_;
 P998 r_1797;
 P996 p_1798;
 P996 a_1799;
 P996 head_1800;
 P996 tail_1801;
 P989 saved_1802;
 P998 pc_1803;
 P1002 vt_1804;
 P1002 pt_1805;
 rstr nm_1806;
 P1006 y_1807;
 P996 n_1808;
 rstr v_1809;
 rstr access_1810;
};
struct f_ptr_subtype_check_480fr { int dummy;
 P1002 t_477;
 P998 c_478;
 P996 src_479;
 P989 lv_1811;
 P1002 st_1812;
 P998 sc_1813;
 int ro_1814;
 P989 cond_1815;
 P996 a_1816;
 P996 b_1817;
 P1002 at_1818;
 P1002 bt_1819;
 rstr x_1820;
 rstr y_1821;
};
struct f_normal_function_483fr { int dummy;
 P996 d_481;
 P1006 y_482;
 P1008 p_1822;
 P996 imp_1823;
 int ro_1824;
 P1006 z_1825;
};
struct f_declare_subprogram_485fr { int dummy;
 P996 d_484;
};
struct f_build_subprogram_487fr { int dummy;
 P996 d_486;
 P1006 result_;
 P1006 y_1826;
 P996 p_1827;
 P1008 tail_1828;
 P1008 pm_1829;
 P998 rc_1831;
 P1008 pm_1832;
 P1019 saved_1833;
 P1006 z_1834;
};
struct f_has_pragmat_490fr { int dummy;
 P989 pr_488;
 rstr *p_489;
 int result_;
 rt_int i_1835;
};
struct f_suppressing_492fr { int dummy;
 P989 pr_491;
 P989 result_;
 P989 r_1839;
 rt_int i_1840;
 rt_int j_1841;
 rt_int k_1842;
};
struct f_suppressed_494fr { int dummy;
 rstr *x_493;
 int result_;
 rstr w_1843;
 rt_int i_1844;
};
struct f_element_496fr { int dummy;
 P996 e_495;
 P989 saved_1848;
};
struct f_element1_498fr { int dummy;
 P996 e_497;
 rt_int k_1849;
 P1006 g_1850;
 rt_int i_1854;
 P998 c_1858;
 P996 st_1859;
 P1002 t_1860;
 P1002 t_1861;
 rstr c_1862;
};
struct f_storage_501fr { int dummy;
 rstr *name_499;
 P1002 t_500;
 rstr result_;
 rstr g_1863;
 rstr f_1864;
};
struct f_bind_504fr { int dummy;
 P1006 y_502;
 rstr *access_503;
};
struct f_var_decl_506fr { int dummy;
 P996 d_505;
};
struct f_located_var_508fr { int dummy;
 P996 d_507;
 P998 c_1865;
 P1002 at_1866;
 P1002 t_1867;
 P1006 y_1868;
 rstr addr_1869;
 rstr av_1870;
 rstr af_1871;
 rstr access_1872;
 P1002 vt_1873;
 rstr v_1874;
 rstr pv_1875;
 rstr pf_1876;
 P1002 vt_1877;
 rstr v_1878;
};
struct f_rep_sync_511fr { int dummy;
 P1006 y_509;
 int pack_510;
 rstr result_;
 rstr lv_1879;
 rstr base_1880;
 P1000 saved_1881;
 P996 p_1882;
 P989 r_1883;
 P989 inner_1884;
 P1006 z_1885;
};
struct f_cbound_access_513fr { int dummy;
 P1006 y_512;
 rstr result_;
 P998 c_1886;
};
struct f_rep_size_517fr { int dummy;
 P996 items_514;
 P1002 t_515;
 P998 c_516;
 rstr result_;
 P996 it_1887;
 P1002 at_1888;
};
struct f_rep_find_520fr { int dummy;
 P996 items_518;
 rstr *w_519;
 P996 result_;
 P996 it_1889;
};
struct f_rep_comp_523fr { int dummy;
 P996 items_521;
 rstr *name_522;
 P996 result_;
 P996 r_1890;
 P996 comp_1891;
};
struct f_default_bits_526fr { int dummy;
 P1002 t_524;
 P998 c_525;
 rt_int result_;
 P1004 f_1892;
 rt_int n_1893;
};
struct f_rep_code_533fr { int dummy;
 P1002 t_527;
 P998 c_528;
 P996 items_529;
 rstr *lval_530;
 rstr *addr_531;
 int pack_532;
 rstr result_;
 rstr size_1894;
 P1004 f_1895;
 P989 r_1896;
 P989 off_1897;
 rt_int i_1898;
 P996 ti_1899;
 P989 tsize_1900;
 P989 toff_1901;
 P1002 at_1902;
 P996 ci_1903;
 P989 fo_1904;
 rstr fl_1905;
 P1002 at_1906;
 rstr part_1907;
 P996 ai_1908;
 P996 ei_1909;
 rstr es_1910;
 rstr iv_1911;
 rstr iv_1912;
};
struct f_union_part_535fr { int dummy;
 P1002 t_534;
 rstr result_;
};
struct f_rep_scalar_542fr { int dummy;
 P1002 t_536;
 P998 c_537;
 rstr *lval_538;
 rstr *addr_539;
 rstr *size_540;
 int pack_541;
 rstr result_;
 rstr signed_1913;
};
struct f_max_range_545fr { int dummy;
 P1002 t_543;
 P998 c_544;
};
struct f_var_decl2_547fr { int dummy;
 P996 d_546;
 P998 c_1914;
 P1002 t_1915;
 P1006 y_1916;
 rstr access_1917;
 P1002 it_1918;
 rstr n_1919;
 P1002 vt_1920;
 rstr v_1921;
};
struct f_open_fin_549fr { int dummy;
 rstr *fc_548;
 rstr f_1922;
 P1000 l_1923;
};
struct f_close_fins_551fr { int dummy;
 P1000 saved_550;
};
struct f_const_decl_553fr { int dummy;
 P996 d_552;
 P998 c_1925;
 P1002 t_1926;
 P1002 vt_1927;
 P1006 y_1928;
 int ok_1929;
 rstr v_1930;
 rstr access_1931;
};
struct f_subprogram_555fr { int dummy;
 P996 d_554;
};
struct f_gen_subprogram_558fr { int dummy;
 P996 d_556;
 P1006 y_557;
 P1019 saved_code_1932;
 P1019 saved_fields_1933;
 int saved_in_1934;
 P1006 saved_sym_1935;
 P1021 saved_exits_1936;
 P1021 saved_gotos_1937;
 rt_int saved_frames_1938;
 P989 args_1939;
 P1008 pm_1940;
 P1000 saved_handlers_1941;
 P1000 saved_cleanups_1942;
 P1013 ctx_1943;
 P989 head_1944;
 P989 frame_1945;
 P989 parent_1946;
 P989 copy_back_1947;
 P989 pfin_1948;
 P1000 saved_fins_1949;
 P998 saved_rc_1950;
 P989 saved_ret_1951;
 P989 saved_rflag_1952;
 P996 pn_1953;
 P989 nonrec_end_1954;
 int has_pfin_1955;
 rstr ct_1957;
 rstr f_1958;
 P1006 p_1959;
 P998 pc_1960;
 P998 ac_1961;
 P998 fc_1962;
 P1002 ft_1963;
 rstr bt_1964;
 P998 rc_1965;
 P1002 rt_1966;
 rstr g_1967;
 P989 leave_1968;
 rstr xu_1969;
};
struct f_waits_of_560fr { int dummy;
 P996 d_559;
 rstr result_;
 P1025 w_1970;
};
struct f_task_waits_562fr { int dummy;
 P996 elems_561;
 rstr result_;
 P996 e_1971;
 P989 r_1972;
};
struct f_await_tasks_564fr { int dummy;
 P996 elems_563;
 rstr w_1973;
};
struct f_capsule_elements_566fr { int dummy;
 P996 elems_565;
 P996 e_1974;
};
struct f_declare_labels_568fr { int dummy;
 P996 elems_567;
 P996 e_1975;
 P996 l_1976;
 P1021 x_1977;
};
struct f_start_labels_569fr { int dummy;
 P1021 x_1979;
};
struct f_goto_label_571fr { int dummy;
 rstr *name_570;
 P1021 result_;
 P1021 x_1980;
};
struct f_has_return_573fr { int dummy;
 P996 e_572;
 int result_;
 P996 x_1981;
};
struct f_capsule_body_575fr { int dummy;
 P996 elems_574;
 P989 saved_ret_1982;
 P989 saved_flag_1983;
 rt_int saved_frames_1984;
 P996 e_1985;
 int stmt_1986;
};
struct f_body_elements_577fr { int dummy;
 P996 elems_576;
};
struct f_gen_body_579fr { int dummy;
 P996 elems_578;
 P1000 saved_1987;
 P1021 saved_gotos_1988;
 rstr xu_1989;
};
struct f_open_unhandled_581fr { int dummy;
 P996 elems_580;
 rstr result_;
 P996 e_1990;
 P989 conds_1991;
 rstr f_1992;
};
struct f_close_unhandled_583fr { int dummy;
 rstr *xu_582;
 rt_int i_1993;
 rstr f_1994;
};
struct f_pop_frames_585fr { int dummy;
 rt_int upto_584;
 rt_int i_1995;
 P1000 c_1996;
};
struct f_push_cleanup_587fr { int dummy;
 rstr *s_586;
 P1000 c_1997;
};
struct f_pop_cleanup_588fr { int dummy;
};
struct f_gen_statement_590fr { int dummy;
 P996 s_589;
 P1006 located_1999;
 P1006 l_2000;
};
struct f_located_in_593fr { int dummy;
 P996 e_591;
 P1006 found_592;
 P1006 result_;
 P996 x_2001;
 P1006 r_2002;
 P1006 y_2003;
};
struct f_sym_in_596fr { int dummy;
 P1006 l_594;
 P1006 y_595;
 int result_;
 P1006 p_2004;
};
struct f_gen_statement2_598fr { int dummy;
 P996 s_597;
 P989 label_2005;
 P996 gl_2006;
 P1021 x_2007;
 P1021 x_2010;
};
struct f_st_assign_600fr { int dummy;
 P996 s_599;
 P989 lv_2011;
 P1002 t_2012;
 P1002 vt_2013;
 P998 c_2014;
 int ro_2015;
 rstr lo_2016;
 rstr hi_2017;
 rstr v_2018;
 rstr lo_2019;
 rstr hi_2020;
 rstr v_2021;
 rstr v_2022;
};
struct f_st_call_602fr { int dummy;
 P996 s_601;
 P996 c_2023;
 P1002 t_2024;
 P996 x_2025;
};
struct f_st_if_604fr { int dummy;
 P996 s_603;
 P996 a_2026;
 int first_2027;
 P1002 t_2028;
 int taken_2029;
 int ok_2030;
 P1015 mv_2031;
 rstr c_2032;
};
struct f_manifest_case_606fr { int dummy;
 P996 s_605;
 int result_;
 int ok_2033;
 P1015 sv_2034;
 P996 a_2035;
 P996 lab_2036;
 P1015 lo_2037;
 P1015 hi_2038;
};
struct f_st_case_608fr { int dummy;
 P996 s_607;
 P1002 st_2039;
 P1002 vt_2040;
 int first_2041;
 P996 a_2042;
};
struct f_st_case2_610fr { int dummy;
 P996 s_609;
 P1002 st_2043;
 P1002 vt_2044;
 int first_2045;
 P996 a_2046;
 rstr sel_2047;
 rstr tmp_2048;
 P996 lab_2049;
 P989 conds_2050;
 rstr v_2051;
 rstr lo_2052;
 rstr hi_2053;
 rstr lo_2054;
 rstr hi_2055;
};
struct f_user_for_614fr { int dummy;
 P996 s_611;
 P1002 t_612;
 P998 c_613;
 P1006 y_2056;
 P1000 saved_2057;
 P996 p_2058;
 P996 iv_2059;
 P1002 st_2060;
 rstr access_2061;
 P989 uv_2062;
 P1000 l1_2063;
 P1000 l2_2064;
 rstr lo_2067;
 rstr hi_2068;
};
struct f_st_repeat_616fr { int dummy;
 P996 s_615;
 P1002 t_2069;
 P998 c_2070;
 rstr cond_2071;
 rstr access_2072;
 rstr lov_2073;
 rstr hiv_2074;
 rstr it_2075;
 P1006 y_2076;
};
struct f_st_exit_618fr { int dummy;
 P996 s_617;
 P1021 x_2077;
};
struct f_st_return_620fr { int dummy;
 P996 s_619;
 P1002 vt_2078;
 rstr v_2079;
};
struct f_result_checked_624fr { int dummy;
 P1002 t_621;
 P998 c_622;
 rstr *v_623;
 rstr result_;
};
struct f_exc_id_627fr { int dummy;
 rstr *name_625;
 rt_int line_626;
 rstr result_;
 P1006 y_2080;
};
struct f_st_guard_629fr { int dummy;
 P996 s_628;
 P996 h_2081;
 int first_2082;
 P1000 hv_2083;
 rstr f_2084;
 rstr x_2085;
 P996 h1_2087;
 P1000 seen_2088;
 P996 n1_2089;
 P996 n_2090;
 P989 conds_2091;
};
struct f_st_alloc_631fr { int dummy;
 P996 s_630;
 P989 lv_2092;
 P1002 t_2093;
 P1002 target_2094;
 P1002 vt_2095;
 P998 c_2096;
 P998 tc_2097;
 int ro_2098;
 P996 d_2099;
 P996 p_2100;
 P996 a_2101;
 rstr tcn_2102;
 rstr cell_2103;
 rstr fn_2104;
 rstr v_2105;
};
struct f_act_ref_633fr { int dummy;
 P996 e_632;
 rstr result_;
 P989 lv_2106;
 P1002 t_2107;
 P998 c_2108;
 int ro_2109;
 rstr v_2110;
};
struct f_st_create_635fr { int dummy;
 P996 s_634;
 P1006 y_2111;
 P1008 pm_2112;
 P996 a_2113;
 P989 lv_2114;
 P1002 lt_2115;
 P1002 vt_2116;
 P998 lc_2117;
 int ro_2118;
 P1002 at_2119;
 P998 ac_2120;
 int aro_2121;
 P989 act_2122;
 rstr nf_2123;
 P989 link_2124;
 rt_int i_2125;
 rstr v_2129;
};
struct f_hidden_var_639fr { int dummy;
 rstr *name_636;
 P1002 t_637;
 rstr *place_638;
 P1006 y_2130;
};
struct f_user_create_645fr { int dummy;
 P996 s_640;
 P1006 y_641;
 rstr *uv_642;
 P1002 ut_643;
 rstr *nf_644;
 P1002 t_2131;
 P1019 saved_2132;
 P1019 hook_2133;
 P996 un_2134;
 rstr hn_2135;
 rstr aa_2136;
 rstr uname_2137;
 rstr aname_2138;
 P996 start_2139;
 P996 an_2140;
};
struct f_wait_alt_650fr { int dummy;
 P996 inv_646;
 rstr *arr_647;
 rt_int i_648;
 int mixed_649;
 rstr result_;
 P989 lv_2141;
 P1002 t_2142;
 P1002 vt_2143;
 P998 c_2144;
 int ro_2145;
 P996 fn_2146;
 P996 args_2147;
 rstr slot_2148;
 P989 dv_2149;
 P1002 dt_2150;
 rstr tmp_2151;
 rstr v_2152;
 rstr v_2153;
};
struct f_builtin_wait_652fr { int dummy;
 P996 inv_651;
 int result_;
 P989 lv_2154;
 P1002 t_2155;
 P998 c_2156;
 int ro_2157;
 P1019 saved_2158;
 int ok_2159;
};
struct f_wait_op_657fr { int dummy;
 P996 inv_653;
 rstr *op_654;
 rstr *q_655;
 int is_stmt_656;
 rstr result_;
 P996 x_2162;
 P996 f_2163;
 P996 qn_2164;
 P1002 t_2165;
 rstr r_2166;
};
struct f_user_wait_662fr { int dummy;
 P996 s_658;
 rstr *arr_659;
 rstr *w_660;
 rt_int n_661;
 P996 a_2167;
 rt_int i_2168;
 P989 tests_2169;
 P989 revokes_2170;
 P996 inv_2171;
 P996 st_2172;
 P998 c_2173;
 P1002 qt_2174;
 rstr qname_2175;
 P1006 y_2176;
 rstr access_2177;
};
struct f_st_wait_664fr { int dummy;
 P996 s_663;
 P996 a_2178;
 rt_int n_2179;
 int first_2180;
 P1019 inits_2181;
 int user_2182;
 rstr arr_2183;
 rstr w_2184;
 P996 inv_2185;
 P996 inv_2186;
 P989 conds_2187;
 rt_int i_2188;
};
struct f_call_node_668fr { int dummy;
 rstr *name_665;
 P996 arg_666;
 rt_int line_667;
 P996 result_;
 P996 x_2192;
 P996 f_2193;
};
struct f_user_region_670fr { int dummy;
 P996 s_669;
 P1002 t_2194;
 rstr f_2195;
 rstr lock_2196;
 rstr unlock_2197;
};
struct f_st_region_672fr { int dummy;
 P996 s_671;
 P989 lv_2198;
 P1002 t_2199;
 P998 c_2200;
 int ro_2201;
 rstr lk_2202;
 rstr f_2203;
};
struct f_gparam_675fr { int dummy;
 P996 g_673;
 rstr *name_674;
 P996 result_;
 P996 p_2204;
};
struct f_bind_sym_677fr { int dummy;
 P996 p_676;
 P1006 result_;
 P1006 y_2205;
};
struct f_same_binds_680fr { int dummy;
 P1006 a_678;
 P1006 b_679;
 int result_;
 P1006 x_2206;
 P1006 y_2207;
};
struct f_same_binding_683fr { int dummy;
 P1006 a_681;
 P1006 b_682;
 int result_;
};
struct f_tt_binds_688fr { int dummy;
 P996 gd_684;
 P996 formals_685;
 P996 actuals_686;
 rt_int line_687;
 P1006 result_;
 P996 f_2208;
 P996 a_2209;
 P1006 binds_2210;
 P998 c_2211;
 P1002 at_2212;
 P996 p_2213;
 P1006 b_2214;
 P996 st_2215;
 int ok_2216;
 int ok_2217;
};
struct f_type_allowed_692fr { int dummy;
 P1002 t_689;
 P996 items_690;
 P1006 binds_691;
 int result_;
 P996 it_2218;
 P1002 b_2219;
 rstr w_2220;
 P998 c_2221;
};
struct f_resolve_in_binds_696fr { int dummy;
 P996 st_693;
 P1006 binds_694;
 P998 *c_695;
 P998 c_695v;
 P1002 result_;
 P1006 b_2222;
 P1002 t_2223;
 P1006 z_2224;
};
struct f_pick_operation_703fr { int dummy;
 rt_int kind_697;
 rstr *name_698;
 P996 sig_699;
 P996 res_700;
 P1006 binds_701;
 rt_int line_702;
 P1006 result_;
 P1006 y_2225;
 P998 c_2226;
 rt_int want_2227;
 rt_int pass_2228;
 int ok_2232;
 P996 s_2233;
 P1008 pm_2234;
};
struct f_kind_word_705fr { int dummy;
 rt_int kind_704;
 rstr result_;
};
struct f_need_binds_709fr { int dummy;
 P996 gd_706;
 P1006 binds_707;
 rt_int line_708;
 P1006 result_;
 P996 it_2235;
 P1006 r_2236;
 int found_2237;
 P1006 y_2238;
 P1006 z_2239;
};
struct f_generic_use_711fr { int dummy;
 P996 st_710;
 int result_;
};
struct f_infer_from_716fr { int dummy;
 P996 gd_712;
 P996 pat_713;
 P1002 t_714;
 P1006 known_715;
 P1006 result_;
 P1006 binds_2240;
 P996 e_2241;
 P996 tp_2242;
 P989 nm_2243;
 P1006 q_2244;
 int have_2245;
 P1006 g_2246;
 P1006 b_2247;
};
struct f_instantiate_type_722fr { int dummy;
 P1006 g_717;
 P996 tt_718;
 P996 args_719;
 P998 *c_720;
 P998 c_720v;
 rt_int line_721;
 P1002 result_;
 P996 gd_2248;
 P996 pat_2249;
 P1006 binds_2250;
 P1006 inst_2251;
 P1002 t_2252;
 P1023 saved_caps_2253;
 P1010 saved_env_2254;
 rt_int saved_gdepth_2255;
 P1006 b_2256;
 P1006 y_2257;
 P998 yc_2258;
};
struct f_instantiate_727fr { int dummy;
 P1006 g_723;
 P996 tt_724;
 P996 args_725;
 rt_int line_726;
 P1006 result_;
 P996 gd_2260;
 P996 pat_2261;
 P1006 binds_2262;
 P996 f_2263;
 P996 a_2264;
 P996 fp_2265;
 P1006 inst_2266;
 P1002 at_2267;
 P998 c_2268;
 P1013 saved_fctx_2269;
 int saved_in_2270;
 rt_int saved_level_2271;
 P1006 saved_sym_2272;
 P1019 saved_code_2273;
 P1010 saved_env_2274;
 rt_int saved_gdepth_2275;
 rstr v_2276;
 int known_2277;
 P1006 q_2278;
 P1006 b_2279;
 rstr v_2280;
 P1006 b_2281;
};
struct f_access_of_729fr { int dummy;
 P1006 y_728;
 rstr result_;
 P989 p_2282;
 rt_int i_2283;
};
struct f_import_of_732fr { int dummy;
 P996 l_730;
 rstr *name_731;
 P996 result_;
 P996 p_2287;
};
struct f_check_import_735fr { int dummy;
 P1006 y_733;
 rt_int line_734;
 int result_;
 P1013 c_2288;
 int ro_2289;
 P996 imp_2290;
};
struct f_c_ident_737fr { int dummy;
 rstr *s_736;
 rstr result_;
 P989 r_2291;
 rt_int i_2292;
};
struct f_cell_deref_740fr { int dummy;
 P1002 t_738;
 rstr *p_739;
 rstr result_;
};
struct f_deref_743fr { int dummy;
 rstr *base_741;
 P1002 t_742;
 rstr result_;
};
struct f_is_lvalue_745fr { int dummy;
 P996 e_744;
 int result_;
 P1006 y_2296;
};
struct f_lvalue_751fr { int dummy;
 P996 e_746;
 P989 *code_747;
 P989 code_747v;
 P1002 *t_748;
 P1002 t_748v;
 P998 *c_749;
 P998 c_749v;
 int *ro_750;
 int ro_750v;
 P989 base_2297;
 P1002 bt_2298;
 P998 bc_2299;
 P1006 y_2300;
};
struct f_select_on_759fr { int dummy;
 rstr *base_752;
 P1002 bt_753;
 P996 e_754;
 int *ro_755;
 P989 *code_756;
 P989 code_756v;
 P1002 *t_757;
 P1002 t_757v;
 P998 *c_758;
 P998 c_758v;
 P996 p_2301;
 P998 pc_2302;
 P996 p_2303;
 P1004 f_2304;
 rt_int i_2305;
 rstr fn_2306;
 P1004 f_2307;
};
struct f_has_call_761fr { int dummy;
 rstr *s_760;
 int result_;
 rt_int i_2308;
};
struct f_need_slice_763fr { int dummy;
 P1002 t_762;
 rstr c_2312;
 rstr n_2313;
 P1000 l_2314;
};
struct f_ix_767fr { int dummy;
 rstr *i_764;
 rstr *lo_765;
 rstr *hi_766;
 rstr result_;
};
struct f_index_on_776fr { int dummy;
 rstr *base_768;
 P1002 bt_769;
 P996 e_770;
 int *ro_771;
 int lv_772;
 P989 *code_773;
 P989 code_773v;
 P1002 *t_774;
 P1002 t_774v;
 P998 *c_775;
 P998 c_775v;
 P996 a_2316;
 P1002 it_2317;
 rstr lo_2318;
 rstr hi_2319;
 P989 off_2320;
 rt_int k_2321;
 P989 b_2322;
 P989 pre_2323;
 rstr i_2324;
 rstr l_2325;
 rstr h_2326;
 rstr lo_2327;
 rstr hi_2328;
 rstr i_2329;
};
struct f_own_attribute_778fr { int dummy;
 P996 e_777;
 int result_;
 P1019 saved_2330;
 P1002 bt_2331;
 int ok_2332;
 rstr base_2335;
 P996 p_2336;
 P1004 f_2337;
};
struct f_gexpr_782fr { int dummy;
 P996 e_779;
 P1002 want_780;
 P1002 *t_781;
 P1002 t_781v;
 rstr result_;
 rt_int k_2338;
 P989 code_2339;
 P998 c_2340;
 int ro_2341;
 P1002 bt_2342;
 P998 ctx_2343;
 P989 r_2344;
 rt_int i_2345;
 rt_int pos_2349;
 rt_int i_2350;
 P1006 y_2351;
 int ro_2352;
 P996 call_2353;
 P996 fname_2354;
 rstr a_2355;
 rstr a_2356;
 rstr a_2357;
 P996 nm_2358;
 P1006 y_2359;
 rstr base_2360;
 rstr base_2361;
};
struct f_resolved_785fr { int dummy;
 P996 e_783;
 P1002 *t_784;
 P1002 t_784v;
 rstr result_;
 P998 c_2362;
 P1002 vt_2363;
 P1006 y_2364;
 P996 tt_2365;
 P996 call_2366;
 P996 f_2367;
 P996 fname_2368;
 rstr v_2369;
};
struct f_gexpr_in_790fr { int dummy;
 P996 e_786;
 P1002 want_787;
 P998 c_788;
 P1002 *t_789;
 P1002 t_789v;
 rstr result_;
};
struct f_ascii_lit_792fr { int dummy;
 int ch_791;
 rstr result_;
 P996 l_2370;
 rt_int i_2371;
};
struct f_octal_794fr { int dummy;
 rt_int n_793;
 rstr result_;
 rstr r_2375;
};
struct f_str_cat_part_796fr { int dummy;
 P1002 t_795;
 P1002 result_;
};
struct f_peek_type_798fr { int dummy;
 P996 e_797;
 P1002 result_;
 P1019 saved_2376;
 P1002 t_2377;
 rstr v_2380;
};
struct f_set_operands_801fr { int dummy;
 P996 e_799;
 P1002 want_800;
 P1002 result_;
 P1002 t_2381;
};
struct f_user_dot_803fr { int dummy;
 P996 e_802;
 P996 result_;
 P996 arg_2382;
};
struct f_user_subscript_805fr { int dummy;
 P996 e_804;
 P996 result_;
 P989 name_2383;
 P996 args_2384;
 P996 tail_2385;
 P996 a_2386;
};
struct f_op_call_809fr { int dummy;
 rstr *name_806;
 P996 args_807;
 rt_int line_808;
 P996 result_;
 P996 call_2387;
 P996 f_2388;
};
struct f_derived_relation_811fr { int dummy;
 P996 e_810;
 P996 result_;
 P996 l_2389;
 P996 r_2390;
 int has_eq_2391;
 int has_lt_2392;
};
struct f_rel_node_816fr { int dummy;
 rstr *op_812;
 P996 a_813;
 P996 b_814;
 rt_int line_815;
 P996 result_;
};
struct f_rel_not_819fr { int dummy;
 P996 x_817;
 rt_int line_818;
 P996 result_;
 P996 n_2393;
};
struct f_copy_node_821fr { int dummy;
 P996 e_820;
 P996 result_;
 P996 x_2394;
};
struct f_wrap_apply_823fr { int dummy;
 P996 e_822;
 P996 result_;
 P996 x_2396;
};
struct f_c_string_825fr { int dummy;
 rstr *s_824;
 rstr result_;
 rt_int n_2397;
 rt_int i_2398;
 rstr r_2402;
 rt_int j_2403;
 rt_int i_2404;
};
struct f_enum_type_of_828fr { int dummy;
 rstr *lit_826;
 rt_int line_827;
 P1002 result_;
 P1006 y_2408;
 P998 c_2409;
 P996 st_2410;
};
struct f_ptr_attribute_830fr { int dummy;
 P996 e_829;
 int result_;
 P989 lv_2411;
 P1002 t_2412;
 P998 c_2413;
 int ro_2414;
 P996 p_2415;
 P1019 saved_2416;
};
struct f_attribute_833fr { int dummy;
 P996 e_831;
 P1002 *t_832;
 P1002 t_832v;
 rstr result_;
 P1002 bt_2417;
 P998 c_2418;
 P989 base_2419;
 P996 sub_2420;
 rstr name_2421;
 P996 p_2422;
 P996 a_2423;
 P998 pc_2424;
 rstr v_2425;
 P996 p_2426;
 P996 a_2427;
 P1002 pt_2428;
 rstr v_2429;
};
struct f_subtype_compare_838fr { int dummy;
 P996 sa_834;
 P996 sb_835;
 rstr *op_836;
 rt_int line_837;
 rstr result_;
 P998 ca_2430;
 P998 cb_2431;
 P1002 ta_2432;
 P1002 tb_2433;
 P989 r_2434;
 rstr yes_2435;
 rstr no_2436;
 rt_int k_2437;
 P996 a_2441;
 P996 b_2442;
 P1002 at_2443;
 P1002 bt2_2444;
 rstr x_2445;
 rstr y_2446;
};
struct f_float_prec_840fr { int dummy;
 P998 c_839;
 rstr result_;
};
struct f_file_attribute_846fr { int dummy;
 P996 e_841;
 P1002 bt_842;
 P998 c_843;
 P989 base_844;
 P1002 *t_845;
 P1002 t_845v;
 rstr result_;
};
struct f_gbinop_850fr { int dummy;
 P996 e_847;
 P1002 want_848;
 P1002 *t_849;
 P1002 t_849v;
 rstr result_;
 P989 op_2447;
 P1002 ta_2448;
 P1002 tb_2449;
 P1002 hint_2450;
 P1006 uy_2451;
 P996 l_2452;
 P996 r_2453;
 P996 call_2454;
 P996 fname_2455;
 rstr s_2456;
 rstr a_2457;
 rstr a_2458;
 rstr b_2459;
 rstr a_2460;
 rstr b_2461;
 P1002 at_2462;
 rstr a_2463;
 rstr b_2464;
 P1002 wa_2465;
 P1002 wb_2466;
 P1002 ws_2467;
 P1002 ce_2468;
 rstr a_2469;
 rstr b_2470;
 rstr dummy_2471;
 rstr a_2472;
 rstr b_2473;
 P1002 ct_2474;
 rstr a_2475;
 rstr b_2476;
};
struct f_constructor_855fr { int dummy;
 P996 e_851;
 P1002 want_852;
 P998 ctx_853;
 P1002 *t_854;
 P1002 t_854v;
 rstr result_;
 P996 it_2477;
 P1004 f_2478;
 P1002 vt_2479;
 P989 s_2480;
 rstr v_2481;
 rt_int i_2482;
 rstr tmp_2483;
 rstr v_2484;
 rstr tmp_2485;
 P989 parts_2486;
 P996 k_2487;
 P989 shared_2488;
 rstr v_2489;
 rstr v_2490;
};
struct f_comp_value_859fr { int dummy;
 P1002 t_856;
 P998 c_857;
 rstr *v_858;
 rstr result_;
};
struct f_has_at_861fr { int dummy;
 rstr *s_860;
 int result_;
 rt_int i_2491;
};
struct f_set_elem_864fr { int dummy;
 P1002 st_862;
 rstr *v_863;
 rstr result_;
};
struct f_array_cons_869fr { int dummy;
 P996 e_865;
 P1002 at_866;
 P998 ctx_867;
 P1002 *t_868;
 P1002 t_868v;
 rstr result_;
 rstr tmp_2495;
 P989 parts_2496;
 P996 it_2497;
 int positional_2498;
 rt_int k_2499;
 P989 lo_2503;
 P989 hi_2504;
};
struct f_fill_items_875fr { int dummy;
 P996 items_870;
 P1002 at_871;
 rstr *tmp_872;
 P1000 prefix_873;
 rt_int dim_874;
 rstr result_;
 P996 it_2505;
 rt_int pos_2506;
 P989 r_2507;
 P1002 vt_2508;
 rstr v_2509;
 P996 k_2510;
 rt_int d_2511;
 P1000 pre_2512;
 P989 loops_2513;
 P989 ends_2514;
 rstr v_2515;
 rstr xv_2516;
 P996 k_2517;
 rstr xv_2518;
 rstr v_2519;
};
struct f_e_line_877fr { int dummy;
 P996 e_876;
 rt_int result_;
};
struct f_add_line_880fr { int dummy;
 P1000 l_878;
 rstr *s_879;
 P1000 result_;
 P1000 r_2520;
 P1000 tail_2521;
 P1000 x_2522;
 P1000 p_2523;
};
struct f_item_value_885fr { int dummy;
 P996 e_881;
 P1002 at_882;
 rt_int line_883;
 P1002 *vt_884;
 P1002 vt_884v;
 rstr result_;
 rstr v_2526;
};
struct f_key_loop_890fr { int dummy;
 P996 k_886;
 P1002 at_887;
 rt_int d_888;
 rstr *xv_889;
 rstr result_;
 P1002 it_2527;
 rstr lo_2528;
 rstr hi_2529;
};
struct f_store_at_895fr { int dummy;
 P1002 at_891;
 rstr *tmp_892;
 P1000 xs_893;
 rt_int n_894;
 rstr result_;
 P989 off_2530;
 P1000 x_2531;
 rt_int k_2532;
 rstr l_2533;
 rstr h_2534;
};
struct f_fits_898fr { int dummy;
 P1006 y_896;
 P996 args_897;
 int result_;
 P996 a_2535;
 P1008 pm_2536;
 P1002 t_2537;
 P1019 saved_2538;
 int ok_2539;
 P989 lv_2540;
 P998 lc_2541;
 int ro_2542;
 rstr v_2545;
};
struct f_resolve_overload_904fr { int dummy;
 rstr *name_899;
 P996 tt_900;
 P996 args_901;
 int is_stmt_902;
 rt_int line_903;
 P1006 result_;
 P1006 y_2546;
 P1006 first_2547;
 rt_int n_2548;
 rt_int pass_2549;
};
struct f_tt_fits_907fr { int dummy;
 P1006 y_905;
 P996 tt_906;
 int result_;
 P996 f_2553;
 P996 a_2554;
 P1019 saved_2555;
 int ok_2556;
 P998 fc_2559;
 P998 ac_2560;
 P996 fst_2561;
 P1002 ft_2562;
 P1002 at_2563;
 P996 ast_2564;
};
struct f_overload_chain_910fr { int dummy;
 rstr *name_908;
 rt_int pass_909;
 P1006 result_;
};
struct f_is_builtin_912fr { int dummy;
 rstr *n_911;
 int result_;
};
struct f_is_low_level_914fr { int dummy;
 rstr *n_913;
 int result_;
};
struct f_me_high_918fr { int dummy;
 P996 tt_915;
 rt_int line_916;
 P1002 *t_917;
 P1002 t_917v;
 rstr result_;
 P998 c_2565;
};
struct f_type_tag_920fr { int dummy;
 P1002 t_919;
 rstr result_;
};
struct f_lock_ref_923fr { int dummy;
 P996 e_921;
 rstr *name_922;
 rstr result_;
 P989 lv_2566;
 P1002 t_2567;
 P998 c_2568;
 int ro_2569;
};
struct f_user_op_926fr { int dummy;
 rstr *op_924;
 P996 args_925;
 P1006 result_;
 P1006 y_2570;
 rt_int pass_2571;
};
struct f_gcall_930fr { int dummy;
 P996 e_927;
 int is_stmt_928;
 P1002 *t_929;
 P1002 t_929v;
 rstr result_;
 P996 gd_2575;
 P996 fn_2576;
 P996 tt_2577;
 P1006 y_2578;
 P989 args_2579;
 P996 a_2580;
 P1008 pm_2581;
 P1002 lt_2582;
 P1002 vt_2583;
 P989 lv_2584;
 P998 lc_2585;
 int ro_2586;
 P1006 alt_2587;
 P1023 cr_2588;
 rt_int i_2589;
 rstr v_2593;
 rstr ct_2594;
 rstr v_2595;
 rstr chk_2596;
};
struct f_requires_932fr { int dummy;
 P1006 y_931;
 P1000 result_;
 P996 imp_2597;
};
struct f_add_req_935fr { int dummy;
 P1006 y_933;
 rstr *name_934;
 P1000 l_2598;
};
struct f_require_calls_938fr { int dummy;
 P1006 y_936;
 P996 e_937;
 P996 x_2600;
 P996 callee_2601;
 P1006 z_2602;
 P1000 l_2603;
};
struct f_declared_in_941fr { int dummy;
 P996 elems_939;
 rstr *name_940;
 int result_;
 P996 e_2604;
};
struct f_check_requires_944fr { int dummy;
 P1006 y_942;
 rt_int line_943;
 P1000 l_2605;
 P1006 z_2606;
};
struct f_act_delay_args_946fr { int dummy;
 P996 args_945;
 rstr result_;
 P1002 at_2607;
 P1002 t1_2608;
 rstr a_2609;
 rstr v_2610;
 rstr v_2611;
};
struct f_same_subtypes_949fr { int dummy;
 P996 gd_947;
 P996 args_948;
 rstr result_;
 P996 p_2612;
 P989 r_2613;
 P996 fp_2614;
 P996 a_2615;
 P989 flo_2616;
 P989 fhi_2617;
 P1002 st_2618;
 P998 c_2619;
 P989 base_2620;
 P989 lo_2621;
 P989 hi_2622;
};
struct f_mailbox_low_954fr { int dummy;
 rstr *name_950;
 P996 args_951;
 rt_int line_952;
 P1002 *t_953;
 P1002 t_953v;
 rstr result_;
 P989 qv_2623;
 P989 mv_2624;
 P989 dv_2625;
 P1002 qt_2626;
 P1002 mt_2627;
 P1002 dt_2628;
 P1002 at_2629;
 P998 c_2630;
 int ro_2631;
 int send_2632;
 rstr v_2633;
};
struct f_exponent_want_957fr { int dummy;
 rstr *op_955;
 P1002 ta_956;
 P1002 result_;
};
struct f_file_ref_961fr { int dummy;
 P996 e_958;
 int text_959;
 rt_int line_960;
 rstr result_;
 P1002 t_2634;
 rstr f_2635;
};
struct f_text_file_963fr { int dummy;
 P1002 t_962;
 int result_;
};
struct f_conversion_968fr { int dummy;
 P996 tt_964;
 P996 args_965;
 rt_int line_966;
 P1002 *t_967;
 P1002 t_967v;
 rstr result_;
 P998 c_2636;
 P1002 at_2637;
 P1002 target_2638;
 rstr a_2639;
 P989 r_2640;
};
struct f_float_digits_970fr { int dummy;
 P996 e_969;
 rstr result_;
 P989 lv_2641;
 P1002 t_2642;
 P998 c_2643;
 int ro_2644;
 rt_int n_2645;
 int lead_2646;
 rt_int i_2647;
 P1019 saved_2651;
};
struct f_enum_names_972fr { int dummy;
 P1002 t_971;
 rstr result_;
 P996 l_2652;
 P989 r_2653;
};
struct f_explicit_rep_974fr { int dummy;
 P996 e_973;
 int result_;
 P1002 bt_2654;
};
struct f_actual_bounds_978fr { int dummy;
 P1002 ft_975;
 P1002 t_976;
 P998 c_977;
 rstr result_;
};
struct f_builtin_985fr { int dummy;
 rstr *name_979;
 P996 tt_980;
 P996 args_981;
 rt_int line_982;
 int is_stmt_983;
 P1002 *t_984;
 P1002 t_984v;
 rstr result_;
 P1002 at_2655;
 rt_int n_2656;
 rstr a_2657;
 rstr a_2658;
 rstr a_2659;
 rstr a_2660;
 rstr a_2661;
 rstr a_2662;
 rstr a_2663;
 rstr n1_2664;
 rstr m1_2665;
 rstr a_2666;
 rstr f_2667;
 rstr a_2668;
 rstr a_2669;
 P1002 ft_2670;
 rstr f_2671;
 P989 lv_2672;
 P998 lc_2673;
 int ro_2674;
 rstr a_2675;
 P989 lv_2676;
 P998 lc_2677;
 int ro_2678;
 rstr f_2679;
 P989 lv_2680;
 P998 lc_2681;
 int ro_2682;
 rstr f_2683;
 rstr nm_2684;
 rstr st_2685;
 rstr f_2686;
 rstr d_2687;
 rstr f_2688;
 rstr v_2689;
 rstr a_2690;
 rstr b_2691;
 P989 lv_2692;
 P989 dv_2693;
 P998 lc_2694;
 int ro_2695;
 P1002 mt_2696;
 P1002 dt_2697;
 rstr v_2698;
 P989 lv_2699;
 P998 lc_2700;
 int ro_2701;
 P1002 mt_2702;
 P989 lv_2703;
 P989 dv_2704;
 P989 bv_2705;
 P998 lc_2706;
 int ro_2707;
 P1002 mt_2708;
 P1002 dt_2709;
 P1002 bt_2710;
 rstr v_2711;
 rstr v_2712;
 rstr v_2713;
 rstr v_2714;
 rstr a_2715;
 P989 bv_2716;
 P998 bc_2717;
 int ro_2718;
 P1002 bt_2719;
 rstr l_2720;
 P989 pv_2721;
 P998 pc_2722;
 int ro_2723;
 P1002 pt_2724;
 rstr dev_2725;
 rstr cmd_2726;
 rstr v_2727;
 P989 dv_2728;
 P998 dc_2729;
 int ro_2730;
 P1002 dt_2731;
};
struct f_translate_987fr { int dummy;
 P996 units_986;
 P996 u_2732;
 P996 l_2734;
 rstr w_2735;
};
struct f_print_program_988fr { int dummy;
};
struct Pc990 { rt_int p_n; rstr all; };
struct Pc994 { rt_int p_n; A995 all; };
struct Pc1011 { rt_int p_n; A1012 all; };
static void as_R1026(R1026 *d, R1026 s);
static R1026 cp_R1026(R1026 s);
static int eq_R1026(R1026 a, R1026 b);
static void as_R1024(R1024 *d, R1024 s);
static R1024 cp_R1024(R1024 s);
static int eq_R1024(R1024 a, R1024 b);
static void as_R1022(R1022 *d, R1022 s);
static R1022 cp_R1022(R1022 s);
static int eq_R1022(R1022 a, R1022 b);
static void as_R1020(R1020 *d, R1020 s);
static R1020 cp_R1020(R1020 s);
static int eq_R1020(R1020 a, R1020 b);
static void as_R1018(R1018 *d, R1018 s);
static R1018 cp_R1018(R1018 s);
static int eq_R1018(R1018 a, R1018 b);
static void as_R1016(R1016 *d, R1016 s);
static R1016 cp_R1016(R1016 s);
static int eq_R1016(R1016 a, R1016 b);
static void as_R1014(R1014 *d, R1014 s);
static R1014 cp_R1014(R1014 s);
static int eq_R1014(R1014 a, R1014 b);
static void as_A1012(A1012 *d, A1012 s);
static A1012 cp_A1012(A1012 s);
static int eq_A1012(A1012 a, A1012 b);
static void as_R1009(R1009 *d, R1009 s);
static R1009 cp_R1009(R1009 s);
static int eq_R1009(R1009 a, R1009 b);
static void as_R1007(R1007 *d, R1007 s);
static R1007 cp_R1007(R1007 s);
static int eq_R1007(R1007 a, R1007 b);
static void as_R1005(R1005 *d, R1005 s);
static R1005 cp_R1005(R1005 s);
static int eq_R1005(R1005 a, R1005 b);
static void as_R1003(R1003 *d, R1003 s);
static R1003 cp_R1003(R1003 s);
static int eq_R1003(R1003 a, R1003 b);
static void as_R1001(R1001 *d, R1001 s);
static R1001 cp_R1001(R1001 s);
static int eq_R1001(R1001 a, R1001 b);
static void as_R999(R999 *d, R999 s);
static R999 cp_R999(R999 s);
static int eq_R999(R999 a, R999 b);
static void as_R997(R997 *d, R997 s);
static R997 cp_R997(R997 s);
static int eq_R997(R997 a, R997 b);
static void as_A995(A995 *d, A995 s);
static A995 cp_A995(A995 s);
static int eq_A995(A995 a, A995 b);
static void as_R992(R992 *d, R992 s);
static R992 cp_R992(R992 s);
static int eq_R992(R992 a, R992 b);
static P989 f_mk_3(rstr *s_2);
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
static P1019 f_new_buffer_24(void);
static void f_put_27(P1019 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P1019 b_30);
static void f_splice_34(P1019 a_32, P1019 b_33);
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
static P996 f_nn_61(rt_int kind_59, rt_int line_60);
static void f_append_65(P996 *head_62, P996 *tail_63, P996 x_64);
static rt_int f_list_len_67(P996 l_66);
static rt_int f_cur_line_68(void);
static int f_at_kw_70(rstr *w_69);
static int f_at_op_72(rstr *w_71);
static int f_at_kind_74(rt_int k_73);
static rt_int f_kind_at_76(rt_int k_75);
static P989 f_text_at_78(rt_int k_77);
static void f_perror_80(rstr *msg_79);
static int f_accept_kw_82(rstr *w_81);
static int f_accept_op_84(rstr *w_83);
static void f_expect_kw_86(rstr *w_85);
static void f_expect_op_88(rstr *w_87);
static P989 f_expect_id_89(void);
static P996 f_name_node_90(void);
static P996 f_id_list_91(void);
static P996 f_p_subtype_92(void);
static P996 f_constraint_list_93(void);
static P996 f_actual_params_94(void);
static int f_is_type_word_96(rstr *w_95);
static P996 f_actual_tt_97(void);
static P996 f_binop_102(P989 op_98, P996 l_99, P996 r_100, rt_int line_101);
static P996 f_expr_103(void);
static P996 f_expr_and_104(void);
static P996 f_expr_not_105(void);
static int f_is_rel_107(rstr *s_106);
static P996 f_expr_rel_108(void);
static P996 f_expr_add_109(void);
static P996 f_expr_mul_110(void);
static P996 f_expr_pow_111(void);
static P996 f_expr_prefix_112(void);
static P996 f_postfix_113(void);
static P996 f_primary_114(void);
static P996 f_constructor_item_115(void);
static int f_at_body_end_116(void);
static P996 f_body_117(void);
static P996 f_body_element_118(void);
static P996 f_declaration_119(void);
static P996 f_object_decl_120(void);
static P996 f_abbrev_decl_121(void);
static P996 f_rep_spec_122(void);
static P996 f_rep_items_123(void);
static int f_rep_word_125(rt_int k_124);
static P996 f_rep_item_126(void);
static P996 f_type_decl_127(void);
static rt_int f_mode_of_129(rstr *w_128);
static P996 f_formal_params_130(void);
static int f_imports_list_132(P996 owner_131);
static int f_is_definable_134(rstr *w_133);
static P989 f_definable_name_135(void);
static P996 f_subprogram_decl_136(void);
static P996 f_capsule_decl_137(void);
static P996 f_formal_tt_138(void);
static P996 f_generic_decl_139(void);
static P996 f_type_list_140(void);
static P996 f_task_decl_141(void);
static P996 f_expose_decl_142(void);
static int f_is_compound_kw_144(rstr *w_143);
static P996 f_statement_145(void);
static P996 f_unlabeled_statement_146(void);
static P996 f_arm_150(P996 cond_147, P996 b_148, rt_int line_149);
static P996 f_if_stmt_151(void);
static P996 f_case_stmt_152(void);
static P996 f_repeat_stmt_153(void);
static P996 f_guard_stmt_154(void);
static P996 f_program_155(void);
static rt_int f_hash_157(rstr *s_156);
static P1006 f_lookup_159(rstr *name_158);
static P1006 f_lookup_decl_161(P996 d_160);
static void f_define_164(P1006 y_162, rt_int line_163);
static int f_overloadable_166(P1006 y_165);
static int f_same_tt_169(P996 a_167, P996 b_168);
static int f_same_signature_172(P1008 a_170, P1008 b_171);
static void f_open_scope_173(void);
static void f_close_scope_174(void);
static P1006 f_new_sym_177(rt_int kind_175, P989 name_176);
static P1002 f_new_typ_179(rt_int kind_178);
static P998 f_new_cons_180(void);
static int f_scalar_kind_182(P1002 t_181);
static rstr f_bound_ctype_184(P1002 t_183);
static rstr f_cbound_187(P998 c_185, rstr *b_186);
static rstr f_clo_189(P998 c_188);
static rstr f_chi_191(P998 c_190);
static rstr f_sub_lo_194(P1002 t_192, P998 c_193);
static rstr f_sub_hi_197(P1002 t_195, P998 c_196);
static rstr f_raw_storage_200(rstr *name_198, rstr *ct_199);
static P998 f_copy_cons_202(P998 c_201);
static P998 f_freeze_205(P998 c_203, P1002 t_204);
static rstr f_checked_209(P1002 t_206, P998 c_207, rstr *v_208);
static int f_same_lits_212(P996 a_210, P996 b_211);
static P1002 f_str_elem_214(P1002 t_213);
static int f_same_217(P1002 a_215, P1002 b_216);
static P1002 f_base_of_219(P1002 t_218);
static P998 f_base_cons_222(P1002 t_220, P998 c_221);
static rstr f_kind_name_224(P1002 t_223);
static void f_check_type_228(P1002 got_225, P1002 want_226, rt_int line_227);
static rstr f_ctype_230(P1002 t_229);
static rstr f_struct_body_232(P1002 t_231);
static rstr f_field_decls_234(P1002 t_233);
static void f_declare_ctype_236(P1002 t_235);
static rstr f_dim_lo_238(rt_int k_237);
static rstr f_dim_hi_240(rt_int k_239);
static rstr f_more_dims_242(P1002 t_241);
static rstr f_acnt_245(P1002 t_243, rstr *base_244);
static P989 f_cons_lo_248(P998 c_246, rt_int k_247);
static P989 f_cons_hi_251(P998 c_249, rt_int k_250);
static P1002 f_idx_type_254(P1002 t_252, rt_int k_253);
static void f_init_ascii_255(void);
static P1002 f_enum2_258(rstr *a_256, rstr *b_257);
static rt_int f_lit_index_261(P996 lits_259, rstr *name_260);
static P1002 f_resolve_subtype_264(P996 st_262, P998 *c_263);
static int f_float_lit_266(P996 e_265);
static void f_tag_constraint_270(P1002 t_267, P996 e_268, P998 c_269);
static P1002 f_named_subtype_273(P996 st_271, P998 *c_272);
static P1002 f_invoke_abbrev_277(P1006 y_274, P996 st_275, P998 *c_276);
static void f_apply_constraint_282(P1002 t_278, P996 args_279, P998 c_280, rt_int line_281);
static P1002 f_value_subtype_286(P996 e_283, P998 *c_284, P989 *base_285);
static P1000 f_reverse_pairs_288(P1000 l_287);
static P1002 f_inquiry_291(P996 st_289, P998 *c_290);
static P996 f_as_subtype_293(P996 e_292);
static P996 f_tt_subtype_298(P989 name_294, P996 tt_295, P996 args_296, rt_int line_297);
static int f_type_name_300(rstr *name_299);
static rstr f_empty_set_302(P1002 t_301);
static int f_opened_304(P1002 t_303);
static rstr f_replace_all_308(rstr *s_305, rstr *pat_306, rstr *r_307);
static rstr f_subst_310(rstr *s_309);
static P1002 f_new_type_314(P1006 y_311, P996 st_312, P998 *c_313);
static rt_int f_needed_bits_317(P1002 t_315, P998 c_316);
static int f_has_digits_only_319(rstr *s_318);
static int f_built_in_only_321(P1002 t_320);
static void f_check_rep_328(P996 items_322, P1002 t_323, P998 c_324, int top_325, int indirect_326, P996 d_327);
static int f_formal_named_331(P996 d_329, rstr *name_330);
static int f_unchecked_free_333(P1002 t_332);
static void f_init_storage_337(rstr *lval_334, P1002 t_335, P998 c_336);
static rstr f_init_call_340(P1006 y_338, rstr *lval_339);
static int f_needs_fin_342(P1002 t_341);
static rstr f_fin_code_345(rstr *lval_343, P1002 t_344);
static P1002 f_tparam_type_348(P1002 t_346, rstr *name_347);
static void f_make_storage_352(rstr *lval_349, P1002 t_350, P998 c_351);
static int f_flat_354(P1002 t_353);
static rstr f_uninit_value_356(P1002 t_355);
static rstr f_init_chk_359(P1002 t_357, rstr *v_358);
static rt_int f_manifest_362(P996 e_360, int *ok_361);
static P1015 f_mk_mval_365(rt_int kind_363, rt_int i_364);
static rt_int f_ipow_368(rt_int a_366, rt_int b_367);
static P1015 f_meval_371(P996 e_369, int *ok_370);
static rstr f_bool_text_373(int b_372);
static rt_int f_bool_i_375(int b_374);
static rstr f_mstr_377(P1015 v_376);
static int f_ascii_char_379(rt_int i_378);
static int f_user_defined_381(rstr *op_380);
static rstr f_mcopy_383(P1002 t_382);
static int f_composite_385(P1002 t_384);
static rstr f_user_call2_391(P1006 y_386, rstr *a_387, int lv_a_388, rstr *b_389, int lv_b_390);
static rstr f_user_arg_395(P1008 pm_392, rstr *v_393, int lv_394);
static int f_top_level_397(P1006 y_396);
static rstr f_assign_code_402(rstr *lval_398, P1002 t_399, rstr *v_400, P998 c_401);
static rstr f_copy_code_405(P1002 t_403, rstr *v_404);
static rstr f_eq_code_409(P1002 t_406, rstr *a_407, rstr *b_408);
static rstr f_elem_assign_413(rstr *lval_410, P1002 t_411, rstr *v_412);
static int f_seen_name_416(P1000 l_414, rstr *s_415);
static void f_emit_helpers_417(void);
static void f_helper_bodies_419(P1002 t_418);
static void f_declare_body_421(P996 elems_420);
static void f_manifest_const_423(P996 d_422);
static int f_exported_427(P996 d_424, rstr *name_425, int *ro_426);
static P1006 f_copy_sym_429(P1006 y_428);
static void f_gen_capsule_431(P996 d_430);
static void f_capsule_params_435(P996 d_432, P996 args_433, rt_int line_434);
static void f_elaborate_capsule_440(P996 d_436, P1006 y_437, P996 args_438, P996 owner_439);
static int f_exports_op_443(P996 d_441, rstr *op_442);
static P989 f_renamed_446(P996 d_444, P1006 z_445);
static int f_cap_tt_match_449(P996 f_447, P996 a_448);
static P1006 f_pick_capsule_451(P996 d_450);
static P1006 f_capsule_instance_454(P1006 g_452, P996 d_453);
static void f_configure_456(P1006 y_455);
static void f_gen_expose_458(P996 d_457);
static void f_finish_ptr_460(P1002 t_459);
static P996 f_ptr_args_462(P998 c_461);
static void f_bind_ptr_params_467(P996 formals_463, P996 actuals_464, rstr *cell_465, rt_int line_466);
static void f_alloc_cell_472(P996 s_468, rstr *lv_469, P1002 t_470, P998 c_471);
static P998 f_freeze_args_476(P998 c_473, P1002 t_474, rt_int line_475);
static void f_ptr_subtype_check_480(P1002 t_477, P998 c_478, P996 src_479);
static void f_normal_function_483(P996 d_481, P1006 y_482);
static void f_declare_subprogram_485(P996 d_484);
static P1006 f_build_subprogram_487(P996 d_486);
static int f_has_pragmat_490(P989 pr_488, rstr *p_489);
static P989 f_suppressing_492(P989 pr_491);
static int f_suppressed_494(rstr *x_493);
static void f_element_496(P996 e_495);
static void f_element1_498(P996 e_497);
static rstr f_storage_501(rstr *name_499, P1002 t_500);
static void f_bind_504(P1006 y_502, rstr *access_503);
static void f_var_decl_506(P996 d_505);
static void f_located_var_508(P996 d_507);
static rstr f_rep_sync_511(P1006 y_509, int pack_510);
static rstr f_cbound_access_513(P1006 y_512);
static rstr f_rep_size_517(P996 items_514, P1002 t_515, P998 c_516);
static P996 f_rep_find_520(P996 items_518, rstr *w_519);
static P996 f_rep_comp_523(P996 items_521, rstr *name_522);
static rt_int f_default_bits_526(P1002 t_524, P998 c_525);
static rstr f_rep_code_533(P1002 t_527, P998 c_528, P996 items_529, rstr *lval_530, rstr *addr_531, int pack_532);
static rstr f_union_part_535(P1002 t_534);
static rstr f_rep_scalar_542(P1002 t_536, P998 c_537, rstr *lval_538, rstr *addr_539, rstr *size_540, int pack_541);
static void f_max_range_545(P1002 t_543, P998 c_544);
static void f_var_decl2_547(P996 d_546);
static void f_open_fin_549(rstr *fc_548);
static void f_close_fins_551(P1000 saved_550);
static void f_const_decl_553(P996 d_552);
static void f_subprogram_555(P996 d_554);
static void f_gen_subprogram_558(P996 d_556, P1006 y_557);
static rstr f_waits_of_560(P996 d_559);
static rstr f_task_waits_562(P996 elems_561);
static void f_await_tasks_564(P996 elems_563);
static void f_capsule_elements_566(P996 elems_565);
static void f_declare_labels_568(P996 elems_567);
static void f_start_labels_569(void);
static P1021 f_goto_label_571(rstr *name_570);
static int f_has_return_573(P996 e_572);
static void f_capsule_body_575(P996 elems_574);
static void f_body_elements_577(P996 elems_576);
static void f_gen_body_579(P996 elems_578);
static rstr f_open_unhandled_581(P996 elems_580);
static void f_close_unhandled_583(rstr *xu_582);
static void f_pop_frames_585(rt_int upto_584);
static void f_push_cleanup_587(rstr *s_586);
static void f_pop_cleanup_588(void);
static void f_gen_statement_590(P996 s_589);
static P1006 f_located_in_593(P996 e_591, P1006 found_592);
static int f_sym_in_596(P1006 l_594, P1006 y_595);
static void f_gen_statement2_598(P996 s_597);
static void f_st_assign_600(P996 s_599);
static void f_st_call_602(P996 s_601);
static void f_st_if_604(P996 s_603);
static int f_manifest_case_606(P996 s_605);
static void f_st_case_608(P996 s_607);
static void f_st_case2_610(P996 s_609);
static void f_user_for_614(P996 s_611, P1002 t_612, P998 c_613);
static void f_st_repeat_616(P996 s_615);
static void f_st_exit_618(P996 s_617);
static void f_st_return_620(P996 s_619);
static rstr f_result_checked_624(P1002 t_621, P998 c_622, rstr *v_623);
static rstr f_exc_id_627(rstr *name_625, rt_int line_626);
static void f_st_guard_629(P996 s_628);
static void f_st_alloc_631(P996 s_630);
static rstr f_act_ref_633(P996 e_632);
static void f_st_create_635(P996 s_634);
static void f_hidden_var_639(rstr *name_636, P1002 t_637, rstr *place_638);
static void f_user_create_645(P996 s_640, P1006 y_641, rstr *uv_642, P1002 ut_643, rstr *nf_644);
static rstr f_wait_alt_650(P996 inv_646, rstr *arr_647, rt_int i_648, int mixed_649);
static int f_builtin_wait_652(P996 inv_651);
static rstr f_wait_op_657(P996 inv_653, rstr *op_654, rstr *q_655, int is_stmt_656);
static void f_user_wait_662(P996 s_658, rstr *arr_659, rstr *w_660, rt_int n_661);
static void f_st_wait_664(P996 s_663);
static P996 f_call_node_668(rstr *name_665, P996 arg_666, rt_int line_667);
static void f_user_region_670(P996 s_669);
static void f_st_region_672(P996 s_671);
static P996 f_gparam_675(P996 g_673, rstr *name_674);
static P1006 f_bind_sym_677(P996 p_676);
static int f_same_binds_680(P1006 a_678, P1006 b_679);
static int f_same_binding_683(P1006 a_681, P1006 b_682);
static P1006 f_tt_binds_688(P996 gd_684, P996 formals_685, P996 actuals_686, rt_int line_687);
static int f_type_allowed_692(P1002 t_689, P996 items_690, P1006 binds_691);
static P1002 f_resolve_in_binds_696(P996 st_693, P1006 binds_694, P998 *c_695);
static P1006 f_pick_operation_703(rt_int kind_697, rstr *name_698, P996 sig_699, P996 res_700, P1006 binds_701, rt_int line_702);
static rstr f_kind_word_705(rt_int kind_704);
static P1006 f_need_binds_709(P996 gd_706, P1006 binds_707, rt_int line_708);
static int f_generic_use_711(P996 st_710);
static P1006 f_infer_from_716(P996 gd_712, P996 pat_713, P1002 t_714, P1006 known_715);
static P1002 f_instantiate_type_722(P1006 g_717, P996 tt_718, P996 args_719, P998 *c_720, rt_int line_721);
static P1006 f_instantiate_727(P1006 g_723, P996 tt_724, P996 args_725, rt_int line_726);
static rstr f_access_of_729(P1006 y_728);
static P996 f_import_of_732(P996 l_730, rstr *name_731);
static int f_check_import_735(P1006 y_733, rt_int line_734);
static rstr f_c_ident_737(rstr *s_736);
static rstr f_cell_deref_740(P1002 t_738, rstr *p_739);
static rstr f_deref_743(rstr *base_741, P1002 t_742);
static int f_is_lvalue_745(P996 e_744);
static void f_lvalue_751(P996 e_746, P989 *code_747, P1002 *t_748, P998 *c_749, int *ro_750);
static void f_select_on_759(rstr *base_752, P1002 bt_753, P996 e_754, int *ro_755, P989 *code_756, P1002 *t_757, P998 *c_758);
static int f_has_call_761(rstr *s_760);
static void f_need_slice_763(P1002 t_762);
static rstr f_ix_767(rstr *i_764, rstr *lo_765, rstr *hi_766);
static void f_index_on_776(rstr *base_768, P1002 bt_769, P996 e_770, int *ro_771, int lv_772, P989 *code_773, P1002 *t_774, P998 *c_775);
static int f_own_attribute_778(P996 e_777);
static rstr f_gexpr_782(P996 e_779, P1002 want_780, P1002 *t_781);
static rstr f_resolved_785(P996 e_783, P1002 *t_784);
static rstr f_gexpr_in_790(P996 e_786, P1002 want_787, P998 c_788, P1002 *t_789);
static rstr f_ascii_lit_792(int ch_791);
static rstr f_octal_794(rt_int n_793);
static P1002 f_str_cat_part_796(P1002 t_795);
static P1002 f_peek_type_798(P996 e_797);
static P1002 f_set_operands_801(P996 e_799, P1002 want_800);
static P996 f_user_dot_803(P996 e_802);
static P996 f_user_subscript_805(P996 e_804);
static P996 f_op_call_809(rstr *name_806, P996 args_807, rt_int line_808);
static P996 f_derived_relation_811(P996 e_810);
static P996 f_rel_node_816(rstr *op_812, P996 a_813, P996 b_814, rt_int line_815);
static P996 f_rel_not_819(P996 x_817, rt_int line_818);
static P996 f_copy_node_821(P996 e_820);
static P996 f_wrap_apply_823(P996 e_822);
static rstr f_c_string_825(rstr *s_824);
static P1002 f_enum_type_of_828(rstr *lit_826, rt_int line_827);
static int f_ptr_attribute_830(P996 e_829);
static rstr f_attribute_833(P996 e_831, P1002 *t_832);
static rstr f_subtype_compare_838(P996 sa_834, P996 sb_835, rstr *op_836, rt_int line_837);
static rstr f_float_prec_840(P998 c_839);
static rstr f_file_attribute_846(P996 e_841, P1002 bt_842, P998 c_843, P989 base_844, P1002 *t_845);
static rstr f_gbinop_850(P996 e_847, P1002 want_848, P1002 *t_849);
static rstr f_constructor_855(P996 e_851, P1002 want_852, P998 ctx_853, P1002 *t_854);
static rstr f_comp_value_859(P1002 t_856, P998 c_857, rstr *v_858);
static int f_has_at_861(rstr *s_860);
static rstr f_set_elem_864(P1002 st_862, rstr *v_863);
static rstr f_array_cons_869(P996 e_865, P1002 at_866, P998 ctx_867, P1002 *t_868);
static rstr f_fill_items_875(P996 items_870, P1002 at_871, rstr *tmp_872, P1000 prefix_873, rt_int dim_874);
static rt_int f_e_line_877(P996 e_876);
static P1000 f_add_line_880(P1000 l_878, rstr *s_879);
static rstr f_item_value_885(P996 e_881, P1002 at_882, rt_int line_883, P1002 *vt_884);
static rstr f_key_loop_890(P996 k_886, P1002 at_887, rt_int d_888, rstr *xv_889);
static rstr f_store_at_895(P1002 at_891, rstr *tmp_892, P1000 xs_893, rt_int n_894);
static int f_fits_898(P1006 y_896, P996 args_897);
static P1006 f_resolve_overload_904(rstr *name_899, P996 tt_900, P996 args_901, int is_stmt_902, rt_int line_903);
static int f_tt_fits_907(P1006 y_905, P996 tt_906);
static P1006 f_overload_chain_910(rstr *name_908, rt_int pass_909);
static int f_is_builtin_912(rstr *n_911);
static int f_is_low_level_914(rstr *n_913);
static rstr f_me_high_918(P996 tt_915, rt_int line_916, P1002 *t_917);
static rstr f_type_tag_920(P1002 t_919);
static rstr f_lock_ref_923(P996 e_921, rstr *name_922);
static P1006 f_user_op_926(rstr *op_924, P996 args_925);
static rstr f_gcall_930(P996 e_927, int is_stmt_928, P1002 *t_929);
static P1000 f_requires_932(P1006 y_931);
static void f_add_req_935(P1006 y_933, rstr *name_934);
static void f_require_calls_938(P1006 y_936, P996 e_937);
static int f_declared_in_941(P996 elems_939, rstr *name_940);
static void f_check_requires_944(P1006 y_942, rt_int line_943);
static rstr f_act_delay_args_946(P996 args_945);
static rstr f_same_subtypes_949(P996 gd_947, P996 args_948);
static rstr f_mailbox_low_954(rstr *name_950, P996 args_951, rt_int line_952, P1002 *t_953);
static P1002 f_exponent_want_957(rstr *op_955, P1002 ta_956);
static rstr f_file_ref_961(P996 e_958, int text_959, rt_int line_960);
static int f_text_file_963(P1002 t_962);
static rstr f_conversion_968(P996 tt_964, P996 args_965, rt_int line_966, P1002 *t_967);
static rstr f_float_digits_970(P996 e_969);
static rstr f_enum_names_972(P1002 t_971);
static int f_explicit_rep_974(P996 e_973);
static rstr f_actual_bounds_978(P1002 ft_975, P1002 t_976, P998 c_977);
static rstr f_builtin_985(rstr *name_979, P996 tt_980, P996 args_981, rt_int line_982, int is_stmt_983, P1002 *t_984);
static void f_translate_987(P996 units_986);
static void f_print_program_988(void);
static int ex_compile_error_1;
static P993 g_toks_1027;
static rt_int g_ntoks_1028;
static rt_int g_tpos_1029;
static rt_int g_src_line_1030;
static P989 g_pending_prag_1031;
static P1010 g_table_1032;
static P1010 g_genv_1033;
static P1006 g_all_insts_1034;
static rt_int g_depth_1035;
static P1006 g_scope_stack_1036;
static P1002 g_all_types_1037;
static rt_int g_serial_1038;
static P1019 g_out_types_1039;
static P1019 g_out_helpers_1040;
static P1019 g_out_protos_1041;
static P1019 g_out_globals_1042;
static P1019 g_out_funcs_1043;
static P1019 g_out_init_1044;
static P1019 g_out_excs_1045;
static P1019 g_code_1046;
static P1019 g_fields_buf_1047;
static int g_in_func_1048;
static rt_int g_cur_level_1049;
static P1013 g_fctx_1050;
static P1023 g_caps_1051;
static P1025 g_cap_waits_1052;
static P1000 g_psub_1053;
static P989 g_st_field_1054;
static P1019 g_out_frames_1055;
static P1019 g_out_roots_1056;
static int g_uses_free_1057;
static P1000 g_fins_1058;
static int g_uses_findyn_1059;
static P1006 g_func_sym_1060;
static P998 g_func_rc_1061;
static P989 g_cap_ret_1062;
static P989 g_cap_rflag_1063;
static rt_int g_ret_frames_1064;
static rt_int g_gdepth_1065;
static P989 g_suppress_1066;
static P998 g_cons_ctx_1067;
static int g_mark_uninit_1068;
static P1021 g_exits_1069;
static P1021 g_gotos_1070;
static rt_int g_frames_1071;
static P1000 g_handlers_1072;
static P1000 g_cleanups_1073;
static rt_int g_trial_1074;
static P1000 g_mcopies_1075;
static P1002 g_ty_int_1076;
static P1002 g_ty_bool_1077;
static P1002 g_ty_float_1078;
static P1002 g_ty_ascii_1079;
static P1002 g_ty_string_1080;
static P1002 g_ty_void_1081;
static P1002 g_ty_file_1082;
static P1002 g_ty_nil_1083;
static P1002 g_ty_lock_1084;
static P1002 g_ty_latch_1085;
static P1002 g_ty_act_1086;
static P1002 g_file_mode_type_1087;
static P1002 g_ty_send_st_1088;
static P1002 g_ty_receive_st_1089;
static P1002 g_ty_text_file_1090;
static P1002 g_file_state_type_1091;
static P1002 g_file_disp_type_1092;
static P1002 g_file_access_type_1093;
static P998 g_no_cons_1094;
static P989 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_1095 = NULL;
{ P989 cell1096 = rt_alloc(sizeof *cell1096);
rt_int pv1097 = ((rt_int)(((*F->s_2)).len));
cell1096->p_n = pv1097;
cell1096->all = rt_str_new(pv1097);
rt_str_assign(&cell1096->all, (*F->s_2));
F->t_1095 = cell1096;
}
F->result_ = F->t_1095;
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
F->r_1098 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_1098, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_1098;
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
F->r_1099 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_1099, (*F->s_14));
{ rt_int lo1101 = ((rt_int)1LL), hi1102 = ((rt_int)(((*F->s_14)).len));
for (rt_int it1103 = lo1101; it1103 <= hi1102; it1103++) {
F->i_1100 = it1103;
if (((65 <= rt_r_echk(rt_str_get(F->r_1099, F->i_1100))) && (rt_r_echk(rt_str_get(F->r_1099, F->i_1100)) <= 90))) {
(*rt_str_at(&F->r_1099, F->i_1100)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_r_echk(rt_str_get(F->r_1099, F->i_1100))) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_1099;
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
F->l_1104 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_1105 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_1104), rt_str(" ", 1)));
{ rt_int lo1107 = ((rt_int)1LL), hi1108 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_1105).len))), ((rt_int)1LL));
for (rt_int it1109 = lo1107; it1109 <= hi1108; it1109++) {
F->i_1106 = it1109;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_1106, rt_sub(rt_add(F->i_1106, ((rt_int)((F->w_1105).len))), ((rt_int)1LL))), F->w_1105)) {
F->result_ = rt_str_cat(F->l_1104, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_1104;
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
g_serial_1038 = rt_add(rt_r_ichk(g_serial_1038), ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(rt_r_ichk(g_serial_1038)));
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
if ((rt_r_ichk(g_trial_1074) == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P1019 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_1110 = NULL;
{ R1020 *cell1111 = rt_alloc(sizeof(R1020));
(*cell1111).head = NULL;
(*cell1111).tail = NULL;
F->b_1110 = cell1111;
}
F->result_ = F->b_1110;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P1019 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_1112 = NULL;
{ R1001 *cell1113 = rt_alloc(sizeof(R1001));
(*cell1113).s = NULL;
(*cell1113).next = NULL;
F->l_1112 = cell1113;
}
(*(P1000)rt_nil_check(F->l_1112)).s = f_mk_3(&(*F->s_26));
if (((*(P1019)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P1019)rt_nil_check(F->b_25)).head = F->l_1112;
} else {
(*(P1000)rt_nil_check((*(P1019)rt_nil_check(F->b_25)).tail)).next = F->l_1112;
}
(*(P1019)rt_nil_check(F->b_25)).tail = F->l_1112;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_1046, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P1019 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_1114 = NULL;
F->l_1114 = (*(P1019)rt_nil_check(F->b_30)).head;
while ((F->l_1114 != NULL)) {
rt_putln((((P989)rt_nil_check((*(P1000)rt_nil_check(F->l_1114)).s))->all));
F->l_1114 = (*(P1000)rt_nil_check(F->l_1114)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P1019 a_32, P1019 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P1019)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P1019)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P1019)rt_nil_check(F->a_32)).head = (*(P1019)rt_nil_check(F->b_33)).head;
} else {
(*(P1000)rt_nil_check((*(P1019)rt_nil_check(F->a_32)).tail)).next = (*(P1019)rt_nil_check(F->b_33)).head;
}
(*(P1019)rt_nil_check(F->a_32)).tail = (*(P1019)rt_nil_check(F->b_33)).tail;
(*(P1019)rt_nil_check(F->b_33)).head = NULL;
(*(P1019)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel1115 = (*F->w_35);
if (0 || rt_str_eq(sel1115, rt_str("ABBREV", 6)) || rt_str_eq(sel1115, rt_str("ABNORMAL", 8)) || rt_str_eq(sel1115, rt_str("ALL", 3)) || rt_str_eq(sel1115, rt_str("ALLOC", 5)) || rt_str_eq(sel1115, rt_str("ASSERT", 6)) || rt_str_eq(sel1115, rt_str("BEGIN", 5)) || rt_str_eq(sel1115, rt_str("BY", 2)) || rt_str_eq(sel1115, rt_str("CAPSULE", 7)) || rt_str_eq(sel1115, rt_str("CASE", 4)) || rt_str_eq(sel1115, rt_str("CONST", 5)) || rt_str_eq(sel1115, rt_str("CREATE", 6)) || rt_str_eq(sel1115, rt_str("DO", 2)) || rt_str_eq(sel1115, rt_str("ELSE", 4)) || rt_str_eq(sel1115, rt_str("ELSEIF", 6)) || rt_str_eq(sel1115, rt_str("END", 3)) || rt_str_eq(sel1115, rt_str("EXCEPTION", 9)) || rt_str_eq(sel1115, rt_str("EXIT", 4)) || rt_str_eq(sel1115, rt_str("EXPORTS", 7)) || rt_str_eq(sel1115, rt_str("EXPOSE", 6)) || rt_str_eq(sel1115, rt_str("EXTERNAL", 8)) || rt_str_eq(sel1115, rt_str("FOR", 3)) || rt_str_eq(sel1115, rt_str("FROM", 4)) || rt_str_eq(sel1115, rt_str("FUNC", 4)) || rt_str_eq(sel1115, rt_str("GENERIC", 7)) || rt_str_eq(sel1115, rt_str("GOTO", 4)) || rt_str_eq(sel1115, rt_str("GUARD", 5)) || rt_str_eq(sel1115, rt_str("IF", 2)) || rt_str_eq(sel1115, rt_str("IMPORTS", 7)) || rt_str_eq(sel1115, rt_str("LOCATION", 8)) || rt_str_eq(sel1115, rt_str("NAMED", 5)) || rt_str_eq(sel1115, rt_str("NEEDS", 5)) || rt_str_eq(sel1115, rt_str("NEW", 3)) || rt_str_eq(sel1115, rt_str("NONE", 4)) || rt_str_eq(sel1115, rt_str("OUT", 3)) || rt_str_eq(sel1115, rt_str("OF", 2)) || rt_str_eq(sel1115, rt_str("PRAG", 4)) || rt_str_eq(sel1115, rt_str("PROC", 4)) || rt_str_eq(sel1115, rt_str("RAISE", 5)) || rt_str_eq(sel1115, rt_str("READONLY", 8)) || rt_str_eq(sel1115, rt_str("REVERSE", 7)) || rt_str_eq(sel1115, rt_str("REGION", 6)) || rt_str_eq(sel1115, rt_str("RENAMING", 8)) || rt_str_eq(sel1115, rt_str("REP", 3)) || rt_str_eq(sel1115, rt_str("REPEAT", 6)) || rt_str_eq(sel1115, rt_str("RERAISE", 7)) || rt_str_eq(sel1115, rt_str("RETURN", 6)) || rt_str_eq(sel1115, rt_str("SUBTYPE", 7)) || rt_str_eq(sel1115, rt_str("TASK", 4)) || rt_str_eq(sel1115, rt_str("THEN", 4)) || rt_str_eq(sel1115, rt_str("TO", 2)) || rt_str_eq(sel1115, rt_str("TYPE", 4)) || rt_str_eq(sel1115, rt_str("VAR", 3)) || rt_str_eq(sel1115, rt_str("WAIT", 4)) || rt_str_eq(sel1115, rt_str("WHEN", 4)) || rt_str_eq(sel1115, rt_str("WHILE", 5))) {
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
F->t_1116 = NULL;
{ R992 *cell1117 = rt_alloc(sizeof(R992));
(*cell1117).s = NULL;
(*cell1117).prags = NULL;
F->t_1116 = cell1117;
}
(*(P991)rt_nil_check(F->t_1116)).kind = F->kind_39;
(*(P991)rt_nil_check(F->t_1116)).line = rt_r_ichk(g_src_line_1030);
(*(P991)rt_nil_check(F->t_1116)).ival = F->ival_41;
(*(P991)rt_nil_check(F->t_1116)).s = f_mk_3(&(*F->s_40));
(*(P991)rt_nil_check(F->t_1116)).prags = g_pending_prag_1031;
g_pending_prag_1031 = NULL;
g_ntoks_1028 = rt_add(rt_r_ichk(g_ntoks_1028), ((rt_int)1LL));
(((P993)rt_nil_check(g_toks_1027))->all).p[(rt_index(rt_r_ichk(g_ntoks_1028), (((P993)rt_nil_check(g_toks_1027))->all).lo, (((P993)rt_nil_check(g_toks_1027))->all).hi) - (((P993)rt_nil_check(g_toks_1027))->all).lo)] = F->t_1116;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_1118 = RT_R_IUNDEF;
F->j_1118 = rt_add(F->i_44, ((rt_int)1LL));
while (((rt_r_ichk(F->j_1118) <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1118)))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1118))))) || (rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1118))) == 95)))) {
if (((rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1118))) == 95) && ((rt_r_ichk(F->j_1118) == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_1118), ((rt_int)1LL))))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_1118), ((rt_int)1LL)))))))))) {
f_fail_23(rt_r_ichk(g_src_line_1030), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_1118 = rt_add(rt_r_ichk(F->j_1118), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_1118);
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
F->w_1119 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_1119, (*F->s_46));
{ rt_int lo1121 = ((rt_int)1LL), hi1122 = ((rt_int)((F->w_1119).len));
for (rt_int it1123 = lo1121; it1123 <= hi1122; it1123++) {
F->k_1120 = it1123;
(*rt_str_at(&F->w_1119, F->k_1120)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1119, F->k_1120)));
}
}
F->result_ = F->w_1119;
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
F->j_1124 = RT_R_IUNDEF;
F->j_1124 = F->i_49;
while (((rt_r_ichk(F->j_1124) <= ((rt_int)(((*F->line_48)).len))) && ((rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_1124))) == 32) || (rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_1124))) == 9)))) {
F->j_1124 = rt_add(rt_r_ichk(F->j_1124), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_1124);
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
F->j_1125 = RT_R_IUNDEF;
F->j_1125 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_1126 = NULL;
F->r_1126 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_1127 = RT_R_EUNDEF;
F->more_1127 = 1;
if (((rt_r_ichk(F->j_1125) > ((rt_int)(((*F->line_51)).len))) || (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1125))) != 40))) {
f_fail_23(rt_r_ichk(g_src_line_1030), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_1125 = rt_add(rt_r_ichk(F->j_1125), ((rt_int)1LL));
while (rt_r_echk(F->more_1127)) {
F->k_1128 = RT_R_IUNDEF;
F->j_1125 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1125));
if (((rt_r_ichk(F->j_1125) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1125))))))) {
f_fail_23(rt_r_ichk(g_src_line_1030), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_1128 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_1125));
F->r_1126 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_1126))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_1125), rt_sub(rt_r_ichk(F->k_1128), ((rt_int)1LL))); b_; }))); b_; }));
F->j_1125 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_1128));
if (((rt_r_ichk(F->j_1125) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1125))) == 40))) {
F->go_1129 = RT_R_EUNDEF;
F->go_1129 = 1;
F->r_1126 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_1126))->all), rt_str("(", 1)); b_; }));
F->j_1125 = rt_add(rt_r_ichk(F->j_1125), ((rt_int)1LL));
while (rt_r_echk(F->go_1129)) {
F->j_1125 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1125));
if (((rt_r_ichk(F->j_1125) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1125))))))) {
f_fail_23(rt_r_ichk(g_src_line_1030), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_1128 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_1125));
F->r_1126 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_1126))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_1125), rt_sub(rt_r_ichk(F->k_1128), ((rt_int)1LL))); b_; }))); b_; }));
F->j_1125 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_1128));
if (((rt_r_ichk(F->j_1125) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1125))) == 44))) {
F->r_1126 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_1126))->all), rt_str(",", 1)); b_; }));
F->j_1125 = rt_add(rt_r_ichk(F->j_1125), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_1125) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1125))) == 41))) {
F->j_1125 = rt_add(rt_r_ichk(F->j_1125), ((rt_int)1LL));
F->go_1129 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_1030), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_1126 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_1126))->all), rt_str(")", 1)); b_; }));
}
F->r_1126 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_1126))->all), rt_str(";", 1)); b_; }));
F->j_1125 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1125));
if (((rt_r_ichk(F->j_1125) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1125))) == 44))) {
F->j_1125 = rt_add(rt_r_ichk(F->j_1125), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_1125) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1125))) == 41))) {
F->j_1125 = rt_add(rt_r_ichk(F->j_1125), ((rt_int)1LL));
F->more_1127 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_1030), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P989)rt_nil_check(F->r_1126))->all));
if ((g_pending_prag_1031 == NULL)) {
g_pending_prag_1031 = F->r_1126;
} else {
g_pending_prag_1031 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(g_pending_prag_1031))->all), (((P989)rt_nil_check(F->r_1126))->all)); b_; }));
}
F->result_ = rt_r_ichk(F->j_1125);
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
F->i_1130 = RT_R_IUNDEF;
F->i_1130 = ((rt_int)1LL);
F->k_1131 = RT_R_IUNDEF;
while ((rt_r_ichk(F->i_1130) <= ((rt_int)(((*F->r_54)).len)))) {
F->k_1131 = rt_r_ichk(F->i_1130);
while ((rt_r_echk(rt_str_get((*F->r_54), rt_r_ichk(F->k_1131))) != 59)) {
F->k_1131 = rt_add(rt_r_ichk(F->k_1131), ((rt_int)1LL));
}
{
F->p_1132 = rt_str_copy(rt_str_slice((*F->r_54), rt_r_ichk(F->i_1130), rt_sub(rt_r_ichk(F->k_1131), ((rt_int)1LL))));
F->ok_1133 = ((((((((((rt_str_eq(F->p_1132, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_1132, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_1132, rt_str("OPEN", 4))) || rt_str_eq(F->p_1132, rt_str("CLOSED", 6))) || rt_str_eq(F->p_1132, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_1132, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_1132, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1132, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_1132, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_1132, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_1132).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_1132, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_1134 = ((((((((((rt_int)((F->p_1132).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_1132, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_1132, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_1132, rt_str("OPEN", 4))) || rt_str_eq(F->p_1132, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_1132).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_1132, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_1132, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1132, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_1132).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_1132, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_1134 && (!F->ok_1133))) {
f_fail_23(rt_r_ichk(g_src_line_1030), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_1132); b_; }));
}
}
F->i_1130 = rt_add(rt_r_ichk(F->k_1131), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_1135 = RT_R_IUNDEF;
F->i_1135 = ((rt_int)1LL);
F->j_1136 = RT_R_IUNDEF;
F->j_1136 = ((rt_int)0LL);
F->n_1137 = RT_R_IUNDEF;
F->n_1137 = ((rt_int)(((*F->line_56)).len));
F->c_1138 = RT_R_EUNDEF;
while ((rt_r_ichk(F->i_1135) <= rt_r_ichk(F->n_1137))) {
F->c_1138 = rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->i_1135)));
if (((((rt_r_echk(F->c_1138) == 32) || (rt_r_echk(F->c_1138) == 9)) || (rt_r_echk(F->c_1138) == 13)) || (rt_r_echk(F->c_1138) == 12))) {
F->i_1135 = rt_add(rt_r_ichk(F->i_1135), ((rt_int)1LL));
} else if ((rt_r_echk(F->c_1138) == 37)) {
F->i_1135 = rt_add(rt_r_ichk(F->n_1137), ((rt_int)1LL));
} else if (f_is_letter_9(rt_r_echk(F->c_1138))) {
F->j_1136 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->i_1135));
{
F->w_1139 = rt_str_new(rt_sub(rt_r_ichk(F->j_1136), rt_r_ichk(F->i_1135)));
rt_str_assign(&F->w_1139, rt_str_slice((*F->line_56), rt_r_ichk(F->i_1135), rt_sub(rt_r_ichk(F->j_1136), ((rt_int)1LL))));
{ rt_int lo1141 = ((rt_int)1LL), hi1142 = ((rt_int)((F->w_1139).len));
for (rt_int it1143 = lo1141; it1143 <= hi1142; it1143++) {
F->k_1140 = it1143;
(*rt_str_at(&F->w_1139, F->k_1140)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1139, F->k_1140)));
}
}
if (rt_str_eq(F->w_1139, rt_str("PRAGMAT", 7))) {
while (((rt_r_ichk(F->j_1136) <= rt_r_ichk(F->n_1137)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1136))) != 59))) {
F->j_1136 = rt_add(rt_r_ichk(F->j_1136), ((rt_int)1LL));
}
F->j_1136 = rt_add(rt_r_ichk(F->j_1136), ((rt_int)1LL));
} else if (rt_str_eq(F->w_1139, rt_str("PRAG", 4))) {
F->j_1136 = f_lex_prag_53(&(*F->line_56), rt_r_ichk(F->j_1136));
} else if (f_is_reserved_36(&F->w_1139)) {
f_add_token_42((((rt_int)2LL)), &F->w_1139, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_1139)) {
f_add_token_42((((rt_int)3LL)), &F->w_1139, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_1139, ((rt_int)0LL));
}
}
F->i_1135 = rt_r_ichk(F->j_1136);
} else if (f_is_digit_11(rt_r_echk(F->c_1138))) {
F->j_1136 = rt_r_ichk(F->i_1135);
while (((rt_r_ichk(F->j_1136) <= rt_r_ichk(F->n_1137)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1136)))))) {
F->j_1136 = rt_add(rt_r_ichk(F->j_1136), ((rt_int)1LL));
}
if ((((rt_r_ichk(F->j_1136) < rt_r_ichk(F->n_1137)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1136))) == 46)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_1136), ((rt_int)1LL))))))) {
F->j_1136 = rt_add(rt_r_ichk(F->j_1136), ((rt_int)1LL));
while (((rt_r_ichk(F->j_1136) <= rt_r_ichk(F->n_1137)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1136)))))) {
F->j_1136 = rt_add(rt_r_ichk(F->j_1136), ((rt_int)1LL));
}
if (((rt_r_ichk(F->j_1136) <= rt_r_ichk(F->n_1137)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1136))) == 69) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1136))) == 101)))) {
F->j_1136 = rt_add(rt_r_ichk(F->j_1136), ((rt_int)1LL));
if (((rt_r_ichk(F->j_1136) <= rt_r_ichk(F->n_1137)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1136))) == 43) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1136))) == 45)))) {
F->j_1136 = rt_add(rt_r_ichk(F->j_1136), ((rt_int)1LL));
}
while (((rt_r_ichk(F->j_1136) <= rt_r_ichk(F->n_1137)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1136)))))) {
F->j_1136 = rt_add(rt_r_ichk(F->j_1136), ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_1135), rt_sub(rt_r_ichk(F->j_1136), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_1135), rt_sub(rt_r_ichk(F->j_1136), ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), rt_r_ichk(F->i_1135), rt_sub(rt_r_ichk(F->j_1136), ((rt_int)1LL)))));
}
F->i_1135 = rt_r_ichk(F->j_1136);
} else if ((((rt_r_echk(F->c_1138) == 39) && (rt_r_ichk(F->i_1135) < rt_r_ichk(F->n_1137))) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_1135), ((rt_int)1LL)))) == 39))) {
F->j_1136 = rt_add(rt_r_ichk(F->i_1135), ((rt_int)2LL));
while (((rt_r_ichk(F->j_1136) < rt_r_ichk(F->n_1137)) && (!((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1136))) == 39) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_1136), ((rt_int)1LL)))) == 39))))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1136))) == 34)) {
f_fail_23(rt_r_ichk(g_src_line_1030), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_1136 = rt_add(rt_r_ichk(F->j_1136), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_1136) >= rt_r_ichk(F->n_1137))) {
f_fail_23(rt_r_ichk(g_src_line_1030), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1135), ((rt_int)2LL)), rt_sub(rt_r_ichk(F->j_1136), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1135 = rt_add(rt_r_ichk(F->j_1136), ((rt_int)2LL));
} else if ((rt_r_echk(F->c_1138) == 39)) {
F->j_1136 = rt_add(rt_r_ichk(F->i_1135), ((rt_int)1LL));
if (((rt_r_ichk(F->j_1136) > rt_r_ichk(F->n_1137)) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1136))))))) {
f_fail_23(rt_r_ichk(g_src_line_1030), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_1136 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->j_1136));
{
F->w_1144 = rt_str_new(rt_sub(rt_sub(rt_r_ichk(F->j_1136), rt_r_ichk(F->i_1135)), ((rt_int)1LL)));
rt_str_assign(&F->w_1144, rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1135), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_1136), ((rt_int)1LL))));
{ rt_int lo1146 = ((rt_int)1LL), hi1147 = ((rt_int)((F->w_1144).len));
for (rt_int it1148 = lo1146; it1148 <= hi1147; it1148++) {
F->k_1145 = it1148;
(*rt_str_at(&F->w_1144, F->k_1145)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1144, F->k_1145)));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_1144, ((rt_int)0LL));
}
F->i_1135 = rt_r_ichk(F->j_1136);
} else if ((rt_r_echk(F->c_1138) == 34)) {
F->j_1136 = rt_add(rt_r_ichk(F->i_1135), ((rt_int)1LL));
while (((rt_r_ichk(F->j_1136) <= rt_r_ichk(F->n_1137)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1136))) != 34))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1136))) == 39)) {
f_fail_23(rt_r_ichk(g_src_line_1030), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_1136 = rt_add(rt_r_ichk(F->j_1136), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_1136) > rt_r_ichk(F->n_1137))) {
f_fail_23(rt_r_ichk(g_src_line_1030), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1135), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_1136), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1135 = rt_add(rt_r_ichk(F->j_1136), ((rt_int)1LL));
} else {
{
F->two_1149 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_1149, rt_str("  ", 2));
(*rt_str_at(&F->two_1149, ((rt_int)1LL))) = rt_r_echk(F->c_1138);
if ((rt_r_ichk(F->i_1135) < rt_r_ichk(F->n_1137))) {
(*rt_str_at(&F->two_1149, ((rt_int)2LL))) = rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_1135), ((rt_int)1LL))));
}
if (((((((rt_str_eq(F->two_1149, rt_str(":=", 2)) || rt_str_eq(F->two_1149, rt_str("=>", 2))) || rt_str_eq(F->two_1149, rt_str("..", 2))) || rt_str_eq(F->two_1149, rt_str("**", 2))) || rt_str_eq(F->two_1149, rt_str("/=", 2))) || rt_str_eq(F->two_1149, rt_str("<=", 2))) || rt_str_eq(F->two_1149, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_1149, ((rt_int)0LL));
F->i_1135 = rt_add(rt_r_ichk(F->i_1135), ((rt_int)2LL));
} else if (((rt_str_eq(F->two_1149, rt_str("<<", 2)) || rt_str_eq(F->two_1149, rt_str(">>", 2))) || rt_str_eq(F->two_1149, rt_str("::", 2)))) {
if (rt_str_eq(F->two_1149, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_1149, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_1135 = rt_add(rt_r_ichk(F->i_1135), ((rt_int)2LL));
} else if ((((((((((((((((((rt_r_echk(F->c_1138) == 40) || (rt_r_echk(F->c_1138) == 41)) || (rt_r_echk(F->c_1138) == 91)) || (rt_r_echk(F->c_1138) == 93)) || (rt_r_echk(F->c_1138) == 44)) || (rt_r_echk(F->c_1138) == 58)) || (rt_r_echk(F->c_1138) == 59)) || (rt_r_echk(F->c_1138) == 46)) || (rt_r_echk(F->c_1138) == 35)) || (rt_r_echk(F->c_1138) == 43)) || (rt_r_echk(F->c_1138) == 45)) || (rt_r_echk(F->c_1138) == 42)) || (rt_r_echk(F->c_1138) == 47)) || (rt_r_echk(F->c_1138) == 38)) || (rt_r_echk(F->c_1138) == 61)) || (rt_r_echk(F->c_1138) == 60)) || (rt_r_echk(F->c_1138) == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(rt_r_echk(F->c_1138)); b_; }), ((rt_int)0LL));
F->i_1135 = rt_add(rt_r_ichk(F->i_1135), ((rt_int)1LL));
} else {
f_fail_23(rt_r_ichk(g_src_line_1030), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_1150 = rt_str_new(rt_sizeln());
rt_r_readln(&F->line_1150);
g_src_line_1030 = rt_add(rt_r_ichk(g_src_line_1030), ((rt_int)1LL));
f_lex_line_57(&F->line_1150);
}
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static P996 f_nn_61(rt_int kind_59, rt_int line_60) {
  struct f_nn_61fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_59 = kind_59;
F->line_60 = line_60;
F->x_1151 = NULL;
{ R997 *cell1152 = rt_alloc(sizeof(R997));
(*cell1152).name = NULL;
(*cell1152).tag = NULL;
(*cell1152).prags = NULL;
(*cell1152).labels = NULL;
(*cell1152).a = NULL;
(*cell1152).b = NULL;
(*cell1152).c = NULL;
(*cell1152).d = NULL;
(*cell1152).e = NULL;
(*cell1152).next = NULL;
F->x_1151 = cell1152;
}
(*(P996)rt_nil_check(F->x_1151)).kind = F->kind_59;
(*(P996)rt_nil_check(F->x_1151)).line = F->line_60;
F->result_ = F->x_1151;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_65(P996 *head_62, P996 *tail_63, P996 x_64) {
  struct f_append_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_62 = head_62;
F->tail_63 = tail_63;
F->x_64 = x_64;
if (((*F->head_62) == NULL)) {
(*F->head_62) = F->x_64;
} else {
(*(P996)rt_nil_check((*F->tail_63))).next = F->x_64;
}
(*F->tail_63) = F->x_64;
while (((*(P996)rt_nil_check((*F->tail_63))).next != NULL)) {
(*F->tail_63) = (*(P996)rt_nil_check((*F->tail_63))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_67(P996 l_66) {
  struct f_list_len_67fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_66 = l_66;
F->n_1153 = RT_R_IUNDEF;
F->n_1153 = ((rt_int)0LL);
F->p_1154 = NULL;
F->p_1154 = F->l_66;
while ((F->p_1154 != NULL)) {
F->n_1153 = rt_add(rt_r_ichk(F->n_1153), ((rt_int)1LL));
F->p_1154 = (*(P996)rt_nil_check(F->p_1154)).next;
}
F->result_ = rt_r_ichk(F->n_1153);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_68(void) {
  struct f_cur_line_68fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = rt_r_ichk((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).line);
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
F->result_ = ((rt_r_ichk((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)2LL))) && rt_str_eq((((P989)rt_nil_check((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_69)));
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
F->result_ = ((rt_r_ichk((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)3LL))) && rt_str_eq((((P989)rt_nil_check((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_71)));
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
F->result_ = (rt_r_ichk((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).kind) == F->k_73);
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
if ((rt_add(rt_r_ichk(g_tpos_1029), F->k_75) > rt_r_ichk(g_ntoks_1028))) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = rt_r_ichk((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_1029), F->k_75), b_.lo, b_.hi) - b_.lo)]; }))).kind);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P989 f_text_at_78(rt_int k_77) {
  struct f_text_at_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_77 = k_77;
if ((rt_add(rt_r_ichk(g_tpos_1029), F->k_77) > rt_r_ichk(g_ntoks_1028))) {
F->result_ = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_ntoks_1028), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_1029), F->k_77), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23(rt_r_ichk((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_79), rt_str(" (at ", 5)), (((P989)rt_nil_check((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_82(rstr *w_81) {
  struct f_accept_kw_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_81 = w_81;
if (f_at_kw_70(&(*F->w_81))) {
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
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
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
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
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
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
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P989 f_expect_id_89(void) {
  struct f_expect_id_89fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->result_ = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_1029), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_name_node_90(void) {
  struct f_name_node_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1155 = NULL;
F->x_1155 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P996)rt_nil_check(F->x_1155)).name = f_expect_id_89();
F->result_ = F->x_1155;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_id_list_91(void) {
  struct f_id_list_91fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1156 = NULL;
F->tail_1157 = NULL;
f_append_65(&F->head_1156, &F->tail_1157, f_name_node_90());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_1156, &F->tail_1157, f_name_node_90());
}
F->result_ = F->head_1156;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_p_subtype_92(void) {
  struct f_p_subtype_92fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1158 = RT_R_IUNDEF;
F->line_1158 = f_cur_line_68();
F->x_1159 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->x_1159 = f_nn_61((((rt_int)81LL)), rt_r_ichk(F->line_1158));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P996)rt_nil_check(F->x_1159)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1159;
goto ret_;
}
if ((!f_at_kind_74((((rt_int)1LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_1160 = rt_str_copy((((P989)rt_nil_check((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
if (rt_str_eq(F->w_1160, rt_str("ARRAY", 5))) {
F->x_1159 = f_nn_61((((rt_int)74LL)), rt_r_ichk(F->line_1158));
{
F->head_1161 = NULL;
F->tail_1162 = NULL;
f_append_65(&F->head_1161, &F->tail_1162, f_p_subtype_92());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_1161, &F->tail_1162, f_p_subtype_92());
}
(*(P996)rt_nil_check(F->x_1159)).a = F->head_1161;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P996)rt_nil_check(F->x_1159)).b = f_p_subtype_92();
} else if ((rt_str_eq(F->w_1160, rt_str("RECORD", 6)) || rt_str_eq(F->w_1160, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_1160, rt_str("RECORD", 6))) {
F->x_1159 = f_nn_61((((rt_int)75LL)), rt_r_ichk(F->line_1158));
} else {
F->x_1159 = f_nn_61((((rt_int)76LL)), rt_r_ichk(F->line_1158));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1163 = NULL;
F->tail_1164 = NULL;
F->more_1165 = RT_R_EUNDEF;
F->more_1165 = 1;
while (rt_r_echk(F->more_1165)) {
F->names_1166 = NULL;
F->names_1166 = f_id_list_91();
F->st_1167 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1167 = f_p_subtype_92();
while ((F->names_1166 != NULL)) {
F->cmp_1168 = NULL;
F->cmp_1168 = f_nn_61((((rt_int)63LL)), rt_r_ichk((*(P996)rt_nil_check(F->names_1166)).line));
(*(P996)rt_nil_check(F->cmp_1168)).name = (*(P996)rt_nil_check(F->names_1166)).name;
(*(P996)rt_nil_check(F->cmp_1168)).a = F->st_1167;
f_append_65(&F->head_1163, &F->tail_1164, F->cmp_1168);
F->names_1166 = (*(P996)rt_nil_check(F->names_1166)).next;
}
F->more_1165 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P996)rt_nil_check(F->x_1159)).a = F->head_1163;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_1160, rt_str("UNION", 5)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1159)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1160, rt_str("ENUM", 4))) {
F->x_1159 = f_nn_61((((rt_int)72LL)), rt_r_ichk(F->line_1158));
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1169 = NULL;
F->tail_1170 = NULL;
F->more_1171 = RT_R_EUNDEF;
F->more_1171 = 1;
while (rt_r_echk(F->more_1171)) {
F->lit_1172 = NULL;
F->lit_1172 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_1158));
if ((!f_at_kind_74((((rt_int)6LL))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P996)rt_nil_check(F->lit_1172)).name = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
f_append_65(&F->head_1169, &F->tail_1170, F->lit_1172);
F->more_1171 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P996)rt_nil_check(F->x_1159)).a = F->head_1169;
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1159)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P996)rt_nil_check(F->x_1159)).c = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_1160, rt_str("STRING", 6)) || rt_str_eq(F->w_1160, rt_str("SET", 3))) || rt_str_eq(F->w_1160, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_1160, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_1160, rt_str("STRING", 6))) {
F->x_1159 = f_nn_61((((rt_int)73LL)), rt_r_ichk(F->line_1158));
} else if (rt_str_eq(F->w_1160, rt_str("SET", 3))) {
F->x_1159 = f_nn_61((((rt_int)77LL)), rt_r_ichk(F->line_1158));
} else if (rt_str_eq(F->w_1160, rt_str("MAILBOX", 7))) {
F->x_1159 = f_nn_61((((rt_int)78LL)), rt_r_ichk(F->line_1158));
} else {
F->x_1159 = f_nn_61((((rt_int)79LL)), rt_r_ichk(F->line_1158));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P996)rt_nil_check(F->x_1159)).a = f_p_subtype_92();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1159)).b = f_actual_params_94();
}
} else if (rt_str_eq(F->w_1160, rt_str("INT", 3))) {
F->x_1159 = f_nn_61((((rt_int)70LL)), rt_r_ichk(F->line_1158));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1159)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P996)rt_nil_check(F->x_1159)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1160, rt_str("FLOAT", 5))) {
F->x_1159 = f_nn_61((((rt_int)71LL)), rt_r_ichk(F->line_1158));
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1159)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1159)).b = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P996)rt_nil_check(F->x_1159)).c = f_expr_103();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_1159 = f_nn_61((((rt_int)80LL)), rt_r_ichk(F->line_1158));
(*(P996)rt_nil_check(F->x_1159)).name = f_mk_3(&F->w_1160);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1159)).a = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1159)).b = f_constraint_list_93();
(*(P996)rt_nil_check(F->x_1159)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_1159;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_constraint_list_93(void) {
  struct f_constraint_list_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1173 = NULL;
F->tail_1174 = NULL;
F->more_1175 = RT_R_EUNDEF;
F->more_1175 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1175)) {
F->line_1176 = RT_R_IUNDEF;
F->line_1176 = f_cur_line_68();
F->lo_1177 = NULL;
F->lo_1177 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1178 = NULL;
F->r_1178 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_1176));
(*(P996)rt_nil_check(F->r_1178)).a = F->lo_1177;
(*(P996)rt_nil_check(F->r_1178)).b = f_expr_103();
f_append_65(&F->head_1173, &F->tail_1174, F->r_1178);
} else {
f_append_65(&F->head_1173, &F->tail_1174, F->lo_1177);
}
F->more_1175 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1173;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_actual_params_94(void) {
  struct f_actual_params_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1179 = NULL;
F->tail_1180 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_65(&F->head_1179, &F->tail_1180, f_expr_103());
while (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_65(&F->head_1179, &F->tail_1180, f_expr_103());
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1179;
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

static P996 f_actual_tt_97(void) {
  struct f_actual_tt_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1181 = NULL;
F->tail_1182 = NULL;
F->more_1183 = RT_R_EUNDEF;
F->more_1183 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1183)) {
if ((f_at_kind_74((((rt_int)1LL))) && f_is_type_word_96(&(((P989)rt_nil_check((*(P991)rt_nil_check((((P993)rt_nil_check(g_toks_1027))->all).p[(rt_index(rt_r_ichk(g_tpos_1029), (((P993)rt_nil_check(g_toks_1027))->all).lo, (((P993)rt_nil_check(g_toks_1027))->all).hi) - (((P993)rt_nil_check(g_toks_1027))->all).lo)])).s))->all)))) {
f_append_65(&F->head_1181, &F->tail_1182, f_p_subtype_92());
} else {
f_append_65(&F->head_1181, &F->tail_1182, f_expr_103());
}
F->more_1183 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1181;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_binop_102(P989 op_98, P996 l_99, P996 r_100, rt_int line_101) {
  struct f_binop_102fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_98 = op_98;
F->l_99 = l_99;
F->r_100 = r_100;
F->line_101 = line_101;
F->x_1184 = NULL;
F->x_1184 = f_nn_61((((rt_int)9LL)), F->line_101);
(*(P996)rt_nil_check(F->x_1184)).name = F->op_98;
(*(P996)rt_nil_check(F->x_1184)).a = F->l_99;
(*(P996)rt_nil_check(F->x_1184)).b = F->r_100;
F->result_ = F->x_1184;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_expr_103(void) {
  struct f_expr_103fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1185 = NULL;
F->l_1185 = f_expr_and_104();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_1186 = NULL;
F->op_1186 = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1187 = RT_R_IUNDEF;
F->line_1187 = f_cur_line_68();
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->l_1185 = f_binop_102(F->op_1186, F->l_1185, f_expr_and_104(), rt_r_ichk(F->line_1187));
}
F->result_ = F->l_1185;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_expr_and_104(void) {
  struct f_expr_and_104fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1188 = NULL;
F->l_1188 = f_expr_not_105();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_1189 = RT_R_IUNDEF;
F->line_1189 = f_cur_line_68();
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->l_1188 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_1188, f_expr_not_105(), rt_r_ichk(F->line_1189));
}
F->result_ = F->l_1188;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_expr_not_105(void) {
  struct f_expr_not_105fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_1190 = NULL;
F->x_1190 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1190)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P996)rt_nil_check(F->x_1190)).a = f_expr_not_105();
F->result_ = F->x_1190;
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

static P996 f_expr_rel_108(void) {
  struct f_expr_rel_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1191 = NULL;
F->l_1191 = f_expr_add_109();
while ((f_at_kind_74((((rt_int)3LL))) && f_is_rel_107(&(((P989)rt_nil_check((*(P991)rt_nil_check((((P993)rt_nil_check(g_toks_1027))->all).p[(rt_index(rt_r_ichk(g_tpos_1029), (((P993)rt_nil_check(g_toks_1027))->all).lo, (((P993)rt_nil_check(g_toks_1027))->all).hi) - (((P993)rt_nil_check(g_toks_1027))->all).lo)])).s))->all)))) {
F->op_1192 = NULL;
F->op_1192 = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1193 = RT_R_IUNDEF;
F->line_1193 = f_cur_line_68();
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->l_1191 = f_binop_102(F->op_1192, F->l_1191, f_expr_add_109(), rt_r_ichk(F->line_1193));
}
F->result_ = F->l_1191;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_expr_add_109(void) {
  struct f_expr_add_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1194 = NULL;
F->l_1194 = f_expr_mul_110();
while ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_1195 = NULL;
F->op_1195 = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1196 = RT_R_IUNDEF;
F->line_1196 = f_cur_line_68();
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->l_1194 = f_binop_102(F->op_1195, F->l_1194, f_expr_mul_110(), rt_r_ichk(F->line_1196));
}
F->result_ = F->l_1194;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_expr_mul_110(void) {
  struct f_expr_mul_110fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1197 = NULL;
F->l_1197 = f_expr_pow_111();
while (((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_1198 = NULL;
F->op_1198 = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1199 = RT_R_IUNDEF;
F->line_1199 = f_cur_line_68();
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->l_1197 = f_binop_102(F->op_1198, F->l_1197, f_expr_pow_111(), rt_r_ichk(F->line_1199));
}
F->result_ = F->l_1197;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_expr_pow_111(void) {
  struct f_expr_pow_111fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1200 = NULL;
F->l_1200 = f_expr_prefix_112();
while (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_1201 = RT_R_IUNDEF;
F->line_1201 = f_cur_line_68();
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->l_1200 = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_1200, f_expr_prefix_112(), rt_r_ichk(F->line_1201));
}
F->result_ = F->l_1200;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_expr_prefix_112(void) {
  struct f_expr_prefix_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_1202 = NULL;
F->x_1202 = f_nn_61((((rt_int)8LL)), f_cur_line_68());
(*(P996)rt_nil_check(F->x_1202)).name = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1202)).a = f_expr_prefix_112();
F->result_ = F->x_1202;
goto ret_;
}
F->result_ = f_postfix_113();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_postfix_113(void) {
  struct f_postfix_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_1203 = NULL;
F->p_1203 = f_primary_114();
while (1) {
F->line_1204 = RT_R_IUNDEF;
F->line_1204 = f_cur_line_68();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1205 = NULL;
F->x_1205 = f_nn_61((((rt_int)10LL)), rt_r_ichk(F->line_1204));
F->head_1206 = NULL;
F->tail_1207 = NULL;
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1208 = RT_R_EUNDEF;
F->more_1208 = 1;
while (rt_r_echk(F->more_1208)) {
F->lo_1209 = NULL;
F->lo_1209 = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1210 = NULL;
F->r_1210 = f_nn_61((((rt_int)16LL)), rt_r_ichk(F->line_1204));
(*(P996)rt_nil_check(F->r_1210)).a = F->lo_1209;
(*(P996)rt_nil_check(F->r_1210)).b = f_expr_103();
f_append_65(&F->head_1206, &F->tail_1207, F->r_1210);
} else {
f_append_65(&F->head_1206, &F->tail_1207, F->lo_1209);
}
F->more_1208 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P996)rt_nil_check(F->x_1205)).a = F->p_1203;
(*(P996)rt_nil_check(F->x_1205)).b = F->head_1206;
F->p_1203 = F->x_1205;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1211 = NULL;
F->x_1211 = f_nn_61((((rt_int)11LL)), rt_r_ichk(F->line_1204));
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1211)).a = F->p_1203;
(*(P996)rt_nil_check(F->x_1211)).name = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->p_1203 = F->x_1211;
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && (rt_r_ichk((*(P996)rt_nil_check(F->p_1203)).kind) == (((rt_int)7LL))))) {
F->x_1212 = NULL;
F->x_1212 = f_nn_61((((rt_int)12LL)), rt_r_ichk(F->line_1204));
(*(P996)rt_nil_check(F->x_1212)).a = F->p_1203;
(*(P996)rt_nil_check(F->x_1212)).b = f_actual_tt_97();
F->p_1203 = F->x_1212;
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1213 = NULL;
F->x_1213 = f_nn_61((((rt_int)13LL)), rt_r_ichk(F->line_1204));
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1213)).a = F->p_1203;
(*(P996)rt_nil_check(F->x_1213)).b = f_p_subtype_92();
F->p_1203 = F->x_1213;
} else {
F->result_ = F->p_1203;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_primary_114(void) {
  struct f_primary_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1214 = RT_R_IUNDEF;
F->line_1214 = f_cur_line_68();
F->x_1215 = NULL;
F->k_1216 = RT_R_IUNDEF;
F->k_1216 = rt_r_ichk((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).kind);
if ((rt_r_ichk(F->k_1216) == (((rt_int)4LL)))) {
F->x_1215 = f_nn_61((((rt_int)1LL)), rt_r_ichk(F->line_1214));
(*(P996)rt_nil_check(F->x_1215)).ival = rt_r_ichk((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).ival);
(*(P996)rt_nil_check(F->x_1215)).name = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->result_ = F->x_1215;
goto ret_;
}
if ((((rt_r_ichk(F->k_1216) == (((rt_int)5LL))) || (rt_r_ichk(F->k_1216) == (((rt_int)7LL)))) || (rt_r_ichk(F->k_1216) == (((rt_int)6LL))))) {
if ((rt_r_ichk(F->k_1216) == (((rt_int)5LL)))) {
F->x_1215 = f_nn_61((((rt_int)2LL)), rt_r_ichk(F->line_1214));
} else if ((rt_r_ichk(F->k_1216) == (((rt_int)7LL)))) {
F->x_1215 = f_nn_61((((rt_int)3LL)), rt_r_ichk(F->line_1214));
} else {
F->x_1215 = f_nn_61((((rt_int)4LL)), rt_r_ichk(F->line_1214));
}
(*(P996)rt_nil_check(F->x_1215)).name = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->result_ = F->x_1215;
goto ret_;
}
if ((rt_r_ichk(F->k_1216) == (((rt_int)1LL)))) {
F->w_1217 = rt_str_copy((((P989)rt_nil_check((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1217, rt_str("TRUE", 4)) || rt_str_eq(F->w_1217, rt_str("FALSE", 5)))) {
F->x_1215 = f_nn_61((((rt_int)5LL)), rt_r_ichk(F->line_1214));
if (rt_str_eq(F->w_1217, rt_str("TRUE", 4))) {
(*(P996)rt_nil_check(F->x_1215)).ival = ((rt_int)1LL);
}
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->result_ = F->x_1215;
goto ret_;
}
if (rt_str_eq(F->w_1217, rt_str("NIL", 3))) {
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)6LL)), rt_r_ichk(F->line_1214));
goto ret_;
}
F->result_ = f_name_node_90();
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1215 = f_nn_61((((rt_int)17LL)), rt_r_ichk(F->line_1214));
(*(P996)rt_nil_check(F->x_1215)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1215;
goto ret_;
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1218 = NULL;
F->tail_1219 = NULL;
F->x_1215 = f_nn_61((((rt_int)14LL)), rt_r_ichk(F->line_1214));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1220 = RT_R_EUNDEF;
F->more_1220 = 1;
while (rt_r_echk(F->more_1220)) {
f_append_65(&F->head_1218, &F->tail_1219, f_constructor_item_115());
F->more_1220 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P996)rt_nil_check(F->x_1215)).a = F->head_1218;
F->result_ = F->x_1215;
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

static P996 f_constructor_item_115(void) {
  struct f_constructor_item_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1221 = RT_R_IUNDEF;
F->line_1221 = f_cur_line_68();
F->it_1222 = NULL;
F->it_1222 = f_nn_61((((rt_int)15LL)), rt_r_ichk(F->line_1221));
F->first_1223 = NULL;
F->first_1223 = f_expr_103();
F->keys_1224 = NULL;
F->ktail_1225 = NULL;
F->lab_1226 = NULL;
F->lab_1226 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1221));
(*(P996)rt_nil_check(F->lab_1226)).a = F->first_1223;
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P996)rt_nil_check(F->lab_1226)).b = f_expr_103();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_65(&F->keys_1224, &F->ktail_1225, F->lab_1226);
} else if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1227 = RT_R_IUNDEF;
F->save_1227 = rt_r_ichk(g_tpos_1029);
F->more_1228 = NULL;
F->tail2_1229 = NULL;
F->ok_1230 = RT_R_EUNDEF;
F->ok_1230 = 0;
F->go_1231 = RT_R_EUNDEF;
F->go_1231 = 1;
while ((rt_r_echk(F->go_1231) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1232 = NULL;
F->l2_1232 = f_nn_61((((rt_int)61LL)), rt_r_ichk(F->line_1221));
(*(P996)rt_nil_check(F->l2_1232)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P996)rt_nil_check(F->l2_1232)).b = f_expr_103();
}
f_append_65(&F->more_1228, &F->tail2_1229, F->l2_1232);
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1230 = 1;
F->go_1231 = 0;
} else if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1231 = 0;
}
}
if (rt_r_echk(F->ok_1230)) {
f_append_65(&F->keys_1224, &F->ktail_1225, F->lab_1226);
f_append_65(&F->keys_1224, &F->ktail_1225, F->more_1228);
} else {
g_tpos_1029 = rt_r_ichk(F->save_1227);
}
}
if (((F->keys_1224 == NULL) && ((*(P996)rt_nil_check(F->lab_1226)).b != NULL))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1224 != NULL)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P996)rt_nil_check(F->it_1222)).a = F->keys_1224;
(*(P996)rt_nil_check(F->it_1222)).b = f_expr_103();
} else {
(*(P996)rt_nil_check(F->it_1222)).b = F->first_1223;
}
F->result_ = F->it_1222;
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

static P996 f_body_117(void) {
  struct f_body_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1233 = NULL;
F->tail_1234 = NULL;
F->stmts_1235 = RT_R_EUNDEF;
F->stmts_1235 = 0;
F->after_1236 = NULL;
while ((!f_at_body_end_116())) {
F->x_1237 = NULL;
F->x_1237 = f_body_element_118();
if (((F->x_1237 != NULL) && ((((rt_r_ichk((*(P996)rt_nil_check(F->x_1237)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P996)rt_nil_check(F->x_1237)).kind) == (((rt_int)41LL)))) || (rt_r_ichk((*(P996)rt_nil_check(F->x_1237)).kind) == (((rt_int)49LL)))) || (rt_r_ichk((*(P996)rt_nil_check(F->x_1237)).kind) == (((rt_int)48LL)))))) {
if (rt_r_echk(F->stmts_1235)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->x_1237)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1237 != NULL) && (rt_r_ichk((*(P996)rt_nil_check(F->x_1237)).kind) >= (((rt_int)42LL)))) && (rt_r_ichk((*(P996)rt_nil_check(F->x_1237)).kind) <= (((rt_int)51LL))))) {
if ((rt_r_echk(F->stmts_1235) && (F->after_1236 == NULL))) {
F->after_1236 = F->x_1237;
}
} else if (((F->x_1237 != NULL) && (rt_r_ichk((*(P996)rt_nil_check(F->x_1237)).kind) != (((rt_int)33LL))))) {
if ((F->after_1236 != NULL)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->after_1236)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1235 = 1;
}
f_append_65(&F->head_1233, &F->tail_1234, F->x_1237);
}
F->result_ = F->head_1233;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_body_element_118(void) {
  struct f_body_element_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1238 = NULL;
F->pr_1239 = NULL;
F->pr_1239 = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1238 = f_declaration_119();
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1238 = f_nn_61((((rt_int)33LL)), f_cur_line_68());
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1238)).a = f_expr_103();
} else {
F->x_1238 = f_statement_145();
}
if ((F->pr_1239 != NULL)) {
F->p_1240 = NULL;
F->p_1240 = F->x_1238;
while ((F->p_1240 != NULL)) {
if (((*(P996)rt_nil_check(F->p_1240)).prags == NULL)) {
(*(P996)rt_nil_check(F->p_1240)).prags = F->pr_1239;
} else {
(*(P996)rt_nil_check(F->p_1240)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->pr_1239))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1240)).prags))->all)); b_; }));
}
F->p_1240 = (*(P996)rt_nil_check(F->p_1240)).next;
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1238;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_declaration_119(void) {
  struct f_declaration_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1241 = RT_R_IUNDEF;
F->line_1241 = f_cur_line_68();
if ((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })))) {
F->result_ = f_object_decl_120();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) {
F->result_ = f_abbrev_decl_121();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->result_ = f_type_decl_127();
goto ret_;
} else if (((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; })))) {
F->result_ = f_subprogram_decl_136();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) {
F->result_ = f_capsule_decl_137();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) {
F->result_ = f_expose_decl_142();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->result_ = f_task_decl_141();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; }))) {
F->result_ = f_generic_decl_139();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) {
F->head_1242 = NULL;
F->tail_1243 = NULL;
F->names_1244 = NULL;
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->names_1244 = f_id_list_91();
while ((F->names_1244 != NULL)) {
F->x_1245 = NULL;
F->x_1245 = f_nn_61((((rt_int)49LL)), rt_r_ichk(F->line_1241));
(*(P996)rt_nil_check(F->x_1245)).name = (*(P996)rt_nil_check(F->names_1244)).name;
f_append_65(&F->head_1242, &F->tail_1243, F->x_1245);
F->names_1244 = (*(P996)rt_nil_check(F->names_1244)).next;
}
F->result_ = F->head_1242;
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

static P996 f_object_decl_120(void) {
  struct f_object_decl_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1246 = RT_R_IUNDEF;
F->line_1246 = f_cur_line_68();
F->is_var_1247 = RT_R_EUNDEF;
F->is_var_1247 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1248 = NULL;
F->st_1249 = NULL;
F->init_1250 = NULL;
F->loc_1251 = NULL;
F->loc_kind_1252 = RT_R_IUNDEF;
F->loc_kind_1252 = ((rt_int)0LL);
F->head_1253 = NULL;
F->tail_1254 = NULL;
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->names_1248 = f_id_list_91();
if (rt_r_echk(F->is_var_1247)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1249 = f_p_subtype_92();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1250 = f_expr_103();
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P989)rt_nil_check((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->loc_kind_1252 = ((rt_int)1LL);
} else {
F->loc_kind_1252 = ((rt_int)2LL);
}
F->loc_1251 = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (((F->init_1250 == NULL) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; })))) {
F->init_1250 = f_expr_103();
}
} else {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1249 = f_p_subtype_92();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1250 = f_expr_103();
}
while ((F->names_1248 != NULL)) {
F->x_1255 = NULL;
if (rt_r_echk(F->is_var_1247)) {
F->x_1255 = f_nn_61((((rt_int)40LL)), rt_r_ichk(F->line_1246));
} else {
F->x_1255 = f_nn_61((((rt_int)41LL)), rt_r_ichk(F->line_1246));
}
(*(P996)rt_nil_check(F->x_1255)).name = (*(P996)rt_nil_check(F->names_1248)).name;
(*(P996)rt_nil_check(F->x_1255)).a = F->st_1249;
(*(P996)rt_nil_check(F->x_1255)).b = F->init_1250;
(*(P996)rt_nil_check(F->x_1255)).c = F->loc_1251;
(*(P996)rt_nil_check(F->x_1255)).ival = rt_r_ichk(F->loc_kind_1252);
f_append_65(&F->head_1253, &F->tail_1254, F->x_1255);
F->names_1248 = (*(P996)rt_nil_check(F->names_1248)).next;
}
F->result_ = F->head_1253;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_abbrev_decl_121(void) {
  struct f_abbrev_decl_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1256 = NULL;
F->x_1256 = f_nn_61((((rt_int)42LL)), f_cur_line_68());
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1256)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1256)).e = f_formal_tt_138();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1256)).b = f_formal_params_130();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P996)rt_nil_check(F->x_1256)).a = f_p_subtype_92();
F->result_ = F->x_1256;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_rep_spec_122(void) {
  struct f_rep_spec_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; })))) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_rep_items_123();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_rep_items_123(void) {
  struct f_rep_items_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1257 = NULL;
F->tail_1258 = NULL;
F->more_1259 = RT_R_EUNDEF;
F->more_1259 = 1;
while (rt_r_echk(F->more_1259)) {
f_append_65(&F->head_1257, &F->tail_1258, f_rep_item_126());
F->more_1259 = (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && f_rep_word_125(((rt_int)1LL)));
if (rt_r_echk(F->more_1259)) {
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
}
}
F->result_ = F->head_1257;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_rep_word_125(rt_int k_124) {
  struct f_rep_word_125fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_124 = k_124;
F->w_1260 = rt_str_copy((((P989)rt_nil_check(f_text_at_78(F->k_124)))->all));
F->result_ = (((f_kind_at_76(F->k_124) == (((rt_int)1LL))) || (f_kind_at_76(F->k_124) == (((rt_int)2LL)))) && ((((((((rt_str_eq(F->w_1260, rt_str("SIZE", 4)) || rt_str_eq(F->w_1260, rt_str("ALIGN", 5))) || rt_str_eq(F->w_1260, rt_str("OFFSET", 6))) || rt_str_eq(F->w_1260, rt_str("RECORD", 6))) || rt_str_eq(F->w_1260, rt_str("UNION", 5))) || rt_str_eq(F->w_1260, rt_str("ARRAY", 5))) || rt_str_eq(F->w_1260, rt_str("ABSENT", 6))) || rt_str_eq(F->w_1260, rt_str("PTR", 3))) || rt_str_eq(F->w_1260, rt_str("ENUM", 4))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_rep_item_126(void) {
  struct f_rep_item_126fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1261 = NULL;
F->x_1261 = f_nn_61((((rt_int)64LL)), f_cur_line_68());
if ((!f_rep_word_125(((rt_int)0LL)))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a representational item", 32); b_; }));
}
(*(P996)rt_nil_check(F->x_1261)).name = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
if ((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1261)).name))->all), rt_str("SIZE", 4)) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1261)).name))->all), rt_str("OFFSET", 6)))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P996)rt_nil_check(F->x_1261)).a = f_expr_103();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
} else if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1261)).name))->all), rt_str("ALIGN", 5))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P996)rt_nil_check(F->x_1261)).a = f_expr_103();
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }))) {
(*(P996)rt_nil_check(F->x_1261)).b = (*(P996)rt_nil_check(F->x_1261)).a;
(*(P996)rt_nil_check(F->x_1261)).a = f_expr_103();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
} else if ((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1261)).name))->all), rt_str("RECORD", 6)) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1261)).name))->all), rt_str("UNION", 5)))) {
F->head_1262 = NULL;
F->tail_1263 = NULL;
F->more_1264 = RT_R_EUNDEF;
F->more_1264 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1264)) {
F->names_1265 = NULL;
F->names_1265 = f_id_list_91();
F->items_1266 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_rep_word_125(((rt_int)0LL))) {
F->items_1266 = f_rep_items_123();
}
while ((F->names_1265 != NULL)) {
F->cmp_1267 = NULL;
F->cmp_1267 = f_nn_61((((rt_int)63LL)), rt_r_ichk((*(P996)rt_nil_check(F->names_1265)).line));
(*(P996)rt_nil_check(F->cmp_1267)).name = (*(P996)rt_nil_check(F->names_1265)).name;
(*(P996)rt_nil_check(F->cmp_1267)).a = F->items_1266;
f_append_65(&F->head_1262, &F->tail_1263, F->cmp_1267);
F->names_1265 = (*(P996)rt_nil_check(F->names_1265)).next;
}
F->more_1264 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P996)rt_nil_check(F->x_1261)).c = F->head_1262;
} else if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1261)).name))->all), rt_str("ARRAY", 5))) {
F->head_1268 = NULL;
F->tail_1269 = NULL;
while ((!f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; })))) {
f_append_65(&F->head_1268, &F->tail_1269, f_name_node_90());
if ((!f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; })))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P996)rt_nil_check(F->x_1261)).d = F->head_1268;
if (f_rep_word_125(((rt_int)0LL))) {
(*(P996)rt_nil_check(F->x_1261)).c = f_rep_items_123();
} else if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && f_rep_word_125(((rt_int)1LL)))) {
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1261)).c = f_rep_items_123();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->head_1270 = NULL;
F->tail_1271 = NULL;
F->dummy_1272 = RT_R_EUNDEF;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_65(&F->head_1270, &F->tail_1271, f_name_node_90());
F->dummy_1272 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P996)rt_nil_check(F->x_1261)).d = F->head_1270;
}
F->result_ = F->x_1261;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_type_decl_127(void) {
  struct f_type_decl_127fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1273 = RT_R_IUNDEF;
F->line_1273 = f_cur_line_68();
F->name_1274 = NULL;
F->params_1275 = NULL;
F->x_1276 = NULL;
F->tts_1277 = NULL;
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->name_1274 = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1277 = f_formal_tt_138();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1275 = f_formal_params_130();
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P989)rt_nil_check((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->x_1276 = f_nn_61((((rt_int)44LL)), rt_r_ichk(F->line_1273));
(*(P996)rt_nil_check(F->x_1276)).d = F->params_1275;
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1276)).b = f_formal_params_130();
}
} else {
F->x_1276 = f_nn_61((((rt_int)43LL)), rt_r_ichk(F->line_1273));
(*(P996)rt_nil_check(F->x_1276)).b = F->params_1275;
}
(*(P996)rt_nil_check(F->x_1276)).name = F->name_1274;
(*(P996)rt_nil_check(F->x_1276)).e = F->tts_1277;
(*(P996)rt_nil_check(F->x_1276)).a = f_p_subtype_92();
(*(P996)rt_nil_check(F->x_1276)).c = f_rep_spec_122();
F->result_ = F->x_1276;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_mode_of_129(rstr *w_128) {
  struct f_mode_of_129fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_128 = w_128;
if (rt_str_eq((*F->w_128), rt_str("VAR", 3))) {
F->result_ = (((rt_int)2LL));
goto ret_;
} else if (rt_str_eq((*F->w_128), rt_str("OUT", 3))) {
F->result_ = (((rt_int)3LL));
goto ret_;
} else if (rt_str_eq((*F->w_128), rt_str("READONLY", 8))) {
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

static P996 f_formal_params_130(void) {
  struct f_formal_params_130fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1278 = NULL;
F->tail_1279 = NULL;
F->more_1280 = RT_R_EUNDEF;
F->more_1280 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1280)) {
F->mode_1281 = RT_R_IUNDEF;
F->mode_1281 = (((rt_int)1LL));
F->names_1282 = NULL;
F->ntail_1283 = NULL;
F->st_1284 = NULL;
if ((((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1281 = f_mode_of_129(&(((P989)rt_nil_check((*(P991)rt_nil_check((((P993)rt_nil_check(g_toks_1027))->all).p[(rt_index(rt_r_ichk(g_tpos_1029), (((P993)rt_nil_check(g_toks_1027))->all).lo, (((P993)rt_nil_check(g_toks_1027))->all).hi) - (((P993)rt_nil_check(g_toks_1027))->all).lo)])).s))->all));
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
}
f_append_65(&F->names_1282, &F->ntail_1283, f_name_node_90());
while ((((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_76(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P989)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P989)rt_nil_check(f_text_at_78(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
f_append_65(&F->names_1282, &F->ntail_1283, f_name_node_90());
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1284 = f_p_subtype_92();
while ((F->names_1282 != NULL)) {
F->p_1285 = NULL;
F->p_1285 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P996)rt_nil_check(F->names_1282)).line));
(*(P996)rt_nil_check(F->p_1285)).name = (*(P996)rt_nil_check(F->names_1282)).name;
(*(P996)rt_nil_check(F->p_1285)).ival = rt_r_ichk(F->mode_1281);
(*(P996)rt_nil_check(F->p_1285)).a = F->st_1284;
f_append_65(&F->head_1278, &F->tail_1279, F->p_1285);
F->names_1282 = (*(P996)rt_nil_check(F->names_1282)).next;
}
F->more_1280 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1278;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_132(P996 owner_131) {
  struct f_imports_list_132fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_131 = owner_131;
F->head_1286 = NULL;
F->tail_1287 = NULL;
F->more_1288 = RT_R_EUNDEF;
F->more_1288 = 1;
if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P996)rt_nil_check(F->owner_131)).flag = rt_add(rt_r_ichk((*(P996)rt_nil_check(F->owner_131)).flag), ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (rt_r_echk(F->more_1288)) {
F->ro_1289 = RT_R_EUNDEF;
F->ro_1289 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1290 = NULL;
F->x_1290 = f_name_node_90();
if (rt_r_echk(F->ro_1289)) {
(*(P996)rt_nil_check(F->x_1290)).ival = ((rt_int)1LL);
}
f_append_65(&F->head_1286, &F->tail_1287, F->x_1290);
F->more_1288 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P996)rt_nil_check(F->owner_131)).d = F->head_1286;
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_definable_134(rstr *w_133) {
  struct f_is_definable_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_133 = w_133;
F->result_ = ((((((((((((((((((((rt_str_eq((*F->w_133), rt_str("+", 1)) || rt_str_eq((*F->w_133), rt_str("-", 1))) || rt_str_eq((*F->w_133), rt_str("*", 1))) || rt_str_eq((*F->w_133), rt_str("/", 1))) || rt_str_eq((*F->w_133), rt_str("**", 2))) || rt_str_eq((*F->w_133), rt_str("&", 1))) || rt_str_eq((*F->w_133), rt_str("=", 1))) || rt_str_eq((*F->w_133), rt_str("<", 1))) || rt_str_eq((*F->w_133), rt_str("<=", 2))) || rt_str_eq((*F->w_133), rt_str(">", 1))) || rt_str_eq((*F->w_133), rt_str(">=", 2))) || rt_str_eq((*F->w_133), rt_str("/=", 2))) || rt_str_eq((*F->w_133), rt_str("DIV", 3))) || rt_str_eq((*F->w_133), rt_str("MOD", 3))) || rt_str_eq((*F->w_133), rt_str("AND", 3))) || rt_str_eq((*F->w_133), rt_str("OR", 2))) || rt_str_eq((*F->w_133), rt_str("XOR", 3))) || rt_str_eq((*F->w_133), rt_str("NOT", 3))) || rt_str_eq((*F->w_133), rt_str("IN", 2))) || rt_str_eq((*F->w_133), rt_str(":=", 2))) || rt_str_eq((*F->w_133), rt_str("#", 1)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P989 f_definable_name_135(void) {
  struct f_definable_name_135fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)1LL))))) {
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)2LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P989)rt_nil_check((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_1029), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)); b_; }));
goto ret_;
} else if (((f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P989)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str("*", 1)))) {
F->r_1291 = NULL;
F->r_1291 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
while ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; }))) {
F->r_1291 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_1291))->all), rt_str("*", 1)); b_; }));
} else if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1291 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_1291))->all), rt_str("..", 2)); b_; }));
} else if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->r_1291 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_1291))->all), rt_str(",", 1)); b_; }));
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a subscripting selector is made of *, .. and ,", 46); b_; }));
}
}
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_1291))->all), rt_str(")", 1)); b_; }));
goto ret_;
}
if ((f_at_kind_74((((rt_int)1LL))) || (f_at_kind_74((((rt_int)3LL))) && f_is_definable_134(&(((P989)rt_nil_check((*(P991)rt_nil_check((((P993)rt_nil_check(g_toks_1027))->all).p[(rt_index(rt_r_ichk(g_tpos_1029), (((P993)rt_nil_check(g_toks_1027))->all).lo, (((P993)rt_nil_check(g_toks_1027))->all).hi) - (((P993)rt_nil_check(g_toks_1027))->all).lo)])).s))->all))))) {
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->result_ = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_1029), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P996 f_subprogram_decl_136(void) {
  struct f_subprogram_decl_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1292 = RT_R_IUNDEF;
F->line_1292 = f_cur_line_68();
F->x_1293 = NULL;
F->is_abn_1294 = RT_R_EUNDEF;
F->is_abn_1294 = f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1295 = RT_R_EUNDEF;
F->is_func_1295 = f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
F->dummy_1296 = RT_R_EUNDEF;
if (rt_r_echk(F->is_func_1295)) {
F->x_1293 = f_nn_61((((rt_int)46LL)), rt_r_ichk(F->line_1292));
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1293 = f_nn_61((((rt_int)45LL)), rt_r_ichk(F->line_1292));
} else {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
if (rt_r_echk(F->is_abn_1294)) {
(*(P996)rt_nil_check(F->x_1293)).flag = ((rt_int)1LL);
}
(*(P996)rt_nil_check(F->x_1293)).name = f_definable_name_135();
if ((((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1293)).name))->all), rt_str(">", 1)) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1293)).name))->all), rt_str("<=", 2))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1293)).name))->all), rt_str(">=", 2))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1293)).name))->all), rt_str("/=", 2)))) {
f_fail_23(rt_r_ichk(F->line_1292), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1293)).name))->all), rt_str(" is not a definable symbol", 26)); b_; }));
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1293)).e = f_formal_tt_138();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1293)).a = f_formal_params_130();
}
if (rt_r_echk(F->is_func_1295)) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P996)rt_nil_check(F->x_1293)).b = f_p_subtype_92();
}
F->dummy_1296 = f_imports_list_132(F->x_1293);
if (((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P996)rt_nil_check(F->x_1293)).prags == NULL)) {
(*(P996)rt_nil_check(F->x_1293)).prags = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P996)rt_nil_check(F->x_1293)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1293)).prags))->all), (((P989)rt_nil_check((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P996)rt_nil_check(F->x_1293)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (rt_r_echk(F->is_func_1295)) {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P989)rt_nil_check(f_definable_name_135()))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1293)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1293)).name))->all)); b_; }));
}
F->result_ = F->x_1293;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_capsule_decl_137(void) {
  struct f_capsule_decl_137fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1297 = NULL;
F->x_1297 = f_nn_61((((rt_int)47LL)), f_cur_line_68());
F->dummy_1298 = RT_R_EUNDEF;
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1297)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1297)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1297)).b = f_formal_params_130();
}
F->dummy_1298 = f_imports_list_132(F->x_1297);
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P996)rt_nil_check(F->x_1297)).ival = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P996)rt_nil_check(F->x_1297)).ival = ((rt_int)0LL);
} else {
F->head_1299 = NULL;
F->tail_1300 = NULL;
F->more_1301 = RT_R_EUNDEF;
F->more_1301 = 1;
while (rt_r_echk(F->more_1301)) {
F->n_1302 = NULL;
F->n_1302 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P996)rt_nil_check(F->n_1302)).ival = ((rt_int)1LL);
}
(*(P996)rt_nil_check(F->n_1302)).name = f_definable_name_135();
f_append_65(&F->head_1299, &F->tail_1300, F->n_1302);
F->more_1301 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P996)rt_nil_check(F->x_1297)).a = F->head_1299;
(*(P996)rt_nil_check(F->x_1297)).ival = ((rt_int)2LL);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P996)rt_nil_check(F->x_1297)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
if ((!rt_str_eq((((P989)rt_nil_check(f_expect_id_89()))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1297)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1297;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_formal_tt_138(void) {
  struct f_formal_tt_138fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1303 = NULL;
F->tail_1304 = NULL;
F->more_1305 = RT_R_EUNDEF;
F->more_1305 = 1;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1305)) {
f_append_65(&F->head_1303, &F->tail_1304, f_name_node_90());
F->more_1305 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1303;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_generic_decl_139(void) {
  struct f_generic_decl_139fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1306 = NULL;
F->x_1306 = f_nn_61((((rt_int)51LL)), f_cur_line_68());
F->head_1307 = NULL;
F->tail_1308 = NULL;
F->more_1309 = RT_R_EUNDEF;
F->more_1309 = 1;
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
while (rt_r_echk(F->more_1309)) {
F->names_1310 = NULL;
F->names_1310 = f_id_list_91();
F->kind_1311 = RT_R_IUNDEF;
F->kind_1311 = ((rt_int)6LL);
F->st_1312 = NULL;
F->items_1313 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1311 = ((rt_int)1LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1311 = ((rt_int)2LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1311 = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1311 = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1311 = ((rt_int)5LL);
} else if (((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P989)rt_nil_check((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("STRING", 6))) && (!((f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P989)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->kind_1311 = ((rt_int)7LL);
} else if (((f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P989)rt_nil_check((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("ENUM", 4))) && (!((f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P989)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->kind_1311 = ((rt_int)8LL);
} else {
F->st_1312 = f_p_subtype_92();
}
if (((rt_r_ichk(F->kind_1311) <= ((rt_int)5LL)) && f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
F->items_1313 = f_type_list_140();
}
if (((rt_r_ichk(F->kind_1311) == ((rt_int)4LL)) && f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1312 = f_p_subtype_92();
}
while ((F->names_1310 != NULL)) {
F->p_1314 = NULL;
F->p_1314 = f_nn_61((((rt_int)52LL)), rt_r_ichk((*(P996)rt_nil_check(F->names_1310)).line));
(*(P996)rt_nil_check(F->p_1314)).name = (*(P996)rt_nil_check(F->names_1310)).name;
(*(P996)rt_nil_check(F->p_1314)).ival = rt_r_ichk(F->kind_1311);
(*(P996)rt_nil_check(F->p_1314)).a = F->st_1312;
(*(P996)rt_nil_check(F->p_1314)).b = F->items_1313;
f_append_65(&F->head_1307, &F->tail_1308, F->p_1314);
F->names_1310 = (*(P996)rt_nil_check(F->names_1310)).next;
}
F->more_1309 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->nhead_1315 = NULL;
F->ntail_1316 = NULL;
F->more_1309 = 1;
while (rt_r_echk(F->more_1309)) {
F->it_1317 = NULL;
F->it_1317 = f_nn_61((((rt_int)52LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
(*(P996)rt_nil_check(F->it_1317)).ival = ((rt_int)3LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
(*(P996)rt_nil_check(F->it_1317)).ival = ((rt_int)4LL);
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
(*(P996)rt_nil_check(F->it_1317)).ival = ((rt_int)5LL);
}
(*(P996)rt_nil_check(F->it_1317)).name = f_definable_name_135();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P996)rt_nil_check(F->it_1317)).e = f_formal_tt_138();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P996)rt_nil_check(F->it_1317)).b = f_type_list_140();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
(*(P996)rt_nil_check(F->it_1317)).a = f_p_subtype_92();
}
f_append_65(&F->nhead_1315, &F->ntail_1316, F->it_1317);
F->more_1309 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P996)rt_nil_check(F->x_1306)).d = F->nhead_1315;
}
(*(P996)rt_nil_check(F->x_1306)).a = F->head_1307;
(*(P996)rt_nil_check(F->x_1306)).b = f_declaration_119();
(*(P996)rt_nil_check(F->x_1306)).name = (*(P996)rt_nil_check((*(P996)rt_nil_check(F->x_1306)).b)).name;
F->result_ = F->x_1306;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_type_list_140(void) {
  struct f_type_list_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1318 = NULL;
F->tail_1319 = NULL;
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1320 = RT_R_EUNDEF;
F->more_1320 = 1;
while (rt_r_echk(F->more_1320)) {
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P989)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(",", 1)) || rt_str_eq((((P989)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(")", 1))))) {
F->n_1321 = NULL;
F->n_1321 = f_nn_61((((rt_int)80LL)), f_cur_line_68());
(*(P996)rt_nil_check(F->n_1321)).name = f_expect_id_89();
f_append_65(&F->head_1318, &F->tail_1319, F->n_1321);
} else {
f_append_65(&F->head_1318, &F->tail_1319, f_p_subtype_92());
}
F->more_1320 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1318;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_task_decl_141(void) {
  struct f_task_decl_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1322 = NULL;
F->x_1322 = f_nn_61((((rt_int)50LL)), f_cur_line_68());
F->dummy_1323 = RT_R_EUNDEF;
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1322)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1322)).e = f_formal_tt_138();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1322)).a = f_formal_params_130();
}
F->dummy_1323 = f_imports_list_132(F->x_1322);
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P996)rt_nil_check(F->x_1322)).c = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P989)rt_nil_check(f_expect_id_89()))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1322)).name))->all)))) {
f_fail_23(f_cur_line_68(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1322)).name))->all)); b_; }));
}
F->result_ = F->x_1322;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_expose_decl_142(void) {
  struct f_expose_decl_142fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1324 = NULL;
F->x_1324 = f_nn_61((((rt_int)48LL)), f_cur_line_68());
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P996)rt_nil_check(F->x_1324)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1325 = NULL;
F->tail_1326 = NULL;
F->more_1327 = RT_R_EUNDEF;
F->more_1327 = 1;
while (rt_r_echk(F->more_1327)) {
F->n_1328 = NULL;
F->n_1328 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P996)rt_nil_check(F->n_1328)).ival = ((rt_int)1LL);
}
(*(P996)rt_nil_check(F->n_1328)).name = f_definable_name_135();
f_append_65(&F->head_1325, &F->tail_1326, F->n_1328);
F->more_1327 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P996)rt_nil_check(F->x_1324)).a = F->head_1325;
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P996)rt_nil_check(F->x_1324)).flag = ((rt_int)1LL);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P996)rt_nil_check(F->x_1324)).flag = rt_add(rt_r_ichk((*(P996)rt_nil_check(F->x_1324)).flag), ((rt_int)2LL));
}
(*(P996)rt_nil_check(F->x_1324)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1324)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1324)).b = f_actual_params_94();
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1329 = NULL;
F->tail_1330 = NULL;
F->more_1331 = RT_R_EUNDEF;
F->more_1331 = 1;
while (rt_r_echk(F->more_1331)) {
F->n_1332 = NULL;
F->n_1332 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
F->tgt_1333 = NULL;
F->tgt_1333 = f_nn_61((((rt_int)7LL)), f_cur_line_68());
(*(P996)rt_nil_check(F->n_1332)).name = f_definable_name_135();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P996)rt_nil_check(F->tgt_1333)).name = f_definable_name_135();
(*(P996)rt_nil_check(F->n_1332)).a = F->tgt_1333;
f_append_65(&F->head_1329, &F->tail_1330, F->n_1332);
F->more_1331 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P996)rt_nil_check(F->x_1324)).c = F->head_1329;
}
F->result_ = F->x_1324;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_compound_kw_144(rstr *w_143) {
  struct f_is_compound_kw_144fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_143 = w_143;
F->result_ = (((((((rt_str_eq((*F->w_143), rt_str("IF", 2)) || rt_str_eq((*F->w_143), rt_str("CASE", 4))) || rt_str_eq((*F->w_143), rt_str("FOR", 3))) || rt_str_eq((*F->w_143), rt_str("WHILE", 5))) || rt_str_eq((*F->w_143), rt_str("BEGIN", 5))) || rt_str_eq((*F->w_143), rt_str("GUARD", 5))) || rt_str_eq((*F->w_143), rt_str("WAIT", 4))) || rt_str_eq((*F->w_143), rt_str("REGION", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_statement_145(void) {
  struct f_statement_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1334 = NULL;
F->ltail_1335 = NULL;
F->match_1336 = NULL;
F->s_1337 = NULL;
while (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P989)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_65(&F->labels_1334, &F->ltail_1335, f_name_node_90());
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
}
if (((f_at_kind_74((((rt_int)1LL))) && (f_kind_at_76(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_144(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P989)rt_nil_check(f_text_at_78(((rt_int)1LL))))->all); b_; })))) {
F->match_1336 = f_expect_id_89();
}
F->s_1337 = f_unlabeled_statement_146();
if ((F->match_1336 != NULL)) {
if ((((((((rt_r_ichk((*(P996)rt_nil_check(F->s_1337)).kind) != (((rt_int)22LL))) && (rt_r_ichk((*(P996)rt_nil_check(F->s_1337)).kind) != (((rt_int)23LL)))) && (rt_r_ichk((*(P996)rt_nil_check(F->s_1337)).kind) != (((rt_int)24LL)))) && (rt_r_ichk((*(P996)rt_nil_check(F->s_1337)).kind) != (((rt_int)25LL)))) && (rt_r_ichk((*(P996)rt_nil_check(F->s_1337)).kind) != (((rt_int)26LL)))) && (rt_r_ichk((*(P996)rt_nil_check(F->s_1337)).kind) != (((rt_int)35LL)))) && (rt_r_ichk((*(P996)rt_nil_check(F->s_1337)).kind) != (((rt_int)36LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_1337)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P989)rt_nil_check(f_expect_id_89()))->all), (((P989)rt_nil_check(F->match_1336))->all)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_1337)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P989)rt_nil_check(F->match_1336))->all)); b_; }));
}
(*(P996)rt_nil_check(F->s_1337)).tag = F->match_1336;
}
(*(P996)rt_nil_check(F->s_1337)).labels = F->labels_1334;
F->result_ = F->s_1337;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_unlabeled_statement_146(void) {
  struct f_unlabeled_statement_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1338 = RT_R_IUNDEF;
F->line_1338 = f_cur_line_68();
F->x_1339 = NULL;
if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }))) {
F->result_ = f_if_stmt_151();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }))) {
F->result_ = f_case_stmt_152();
goto ret_;
} else if ((f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; })) || f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; })))) {
F->result_ = f_repeat_stmt_153();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BEGIN", 5); b_; }))) {
F->x_1339 = f_nn_61((((rt_int)25LL)), rt_r_ichk(F->line_1338));
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1339)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1339;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_154();
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1339 = f_nn_61((((rt_int)27LL)), rt_r_ichk(F->line_1338));
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1339)).name = f_expect_id_89();
F->result_ = F->x_1339;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1339 = f_nn_61((((rt_int)28LL)), rt_r_ichk(F->line_1338));
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
if ((!f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P996)rt_nil_check(F->x_1339)).a = f_expr_103();
}
F->result_ = F->x_1339;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1339 = f_nn_61((((rt_int)29LL)), rt_r_ichk(F->line_1338));
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1339)).name = f_expect_id_89();
F->result_ = F->x_1339;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1339 = f_nn_61((((rt_int)30LL)), rt_r_ichk(F->line_1338));
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1339)).name = f_expect_id_89();
F->result_ = F->x_1339;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->result_ = f_nn_61((((rt_int)31LL)), rt_r_ichk(F->line_1338));
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1339 = f_nn_61((((rt_int)34LL)), rt_r_ichk(F->line_1338));
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1339)).name = f_expect_id_89();
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1339)).e = f_actual_tt_97();
}
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1339)).b = f_actual_params_94();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P996)rt_nil_check(F->x_1339)).a = f_postfix_113();
F->result_ = F->x_1339;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1340 = NULL;
F->tail_1341 = NULL;
F->x_1339 = f_nn_61((((rt_int)35LL)), rt_r_ichk(F->line_1338));
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1342 = NULL;
F->itail_1343 = NULL;
F->more_1344 = RT_R_EUNDEF;
F->more_1344 = 1;
while (rt_r_echk(F->more_1344)) {
f_append_65(&F->invs_1342, &F->itail_1343, f_postfix_113());
F->more_1344 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1340, &F->tail_1341, f_arm_150(F->invs_1342, f_body_117(), rt_r_ichk(F->line_1338)));
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P996)rt_nil_check(F->x_1339)).a = F->head_1340;
F->result_ = F->x_1339;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1339 = f_nn_61((((rt_int)36LL)), rt_r_ichk(F->line_1338));
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1339)).a = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P996)rt_nil_check(F->x_1339)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1339;
goto ret_;
} else if (f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1339 = f_nn_61((((rt_int)32LL)), rt_r_ichk(F->line_1338));
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1339)).a = f_postfix_113();
if ((!(f_at_kind_74((((rt_int)1LL))) && rt_str_eq((((P989)rt_nil_check((*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
if (f_at_op_72(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P996)rt_nil_check(F->x_1339)).b = f_actual_params_94();
}
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P996)rt_nil_check(F->x_1339)).c = f_expr_103();
}
F->result_ = F->x_1339;
goto ret_;
}
{
F->target_1345 = NULL;
F->target_1345 = f_postfix_113();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1339 = f_nn_61((((rt_int)20LL)), rt_r_ichk(F->line_1338));
(*(P996)rt_nil_check(F->x_1339)).a = F->target_1345;
(*(P996)rt_nil_check(F->x_1339)).b = f_expr_103();
} else {
F->x_1339 = f_nn_61((((rt_int)21LL)), rt_r_ichk(F->line_1338));
(*(P996)rt_nil_check(F->x_1339)).a = F->target_1345;
}
}
F->result_ = F->x_1339;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_arm_150(P996 cond_147, P996 b_148, rt_int line_149) {
  struct f_arm_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_147 = cond_147;
F->b_148 = b_148;
F->line_149 = line_149;
F->x_1346 = NULL;
F->x_1346 = f_nn_61((((rt_int)60LL)), F->line_149);
(*(P996)rt_nil_check(F->x_1346)).a = F->cond_147;
(*(P996)rt_nil_check(F->x_1346)).b = F->b_148;
F->result_ = F->x_1346;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_if_stmt_151(void) {
  struct f_if_stmt_151fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1347 = NULL;
F->x_1347 = f_nn_61((((rt_int)22LL)), f_cur_line_68());
F->head_1348 = NULL;
F->tail_1349 = NULL;
F->cond_1350 = NULL;
F->go_1351 = RT_R_EUNDEF;
F->go_1351 = 1;
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
F->cond_1350 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1348, &F->tail_1349, f_arm_150(F->cond_1350, f_body_117(), rt_r_ichk((*(P996)rt_nil_check(F->x_1347)).line)));
while (rt_r_echk(F->go_1351)) {
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1350 = f_expr_103();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_65(&F->head_1348, &F->tail_1349, f_arm_150(F->cond_1350, f_body_117(), rt_r_ichk((*(P996)rt_nil_check(F->x_1347)).line)));
} else if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P996)rt_nil_check(F->x_1347)).flag = ((rt_int)1LL);
(*(P996)rt_nil_check(F->x_1347)).b = f_body_117();
} else {
F->go_1351 = 0;
}
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P996)rt_nil_check(F->x_1347)).a = F->head_1348;
F->result_ = F->x_1347;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_case_stmt_152(void) {
  struct f_case_stmt_152fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1352 = NULL;
F->x_1352 = f_nn_61((((rt_int)23LL)), f_cur_line_68());
F->head_1353 = NULL;
F->tail_1354 = NULL;
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1352)).a = f_expr_103();
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1355 = NULL;
F->ltail_1356 = NULL;
F->more_1357 = RT_R_EUNDEF;
F->more_1357 = 1;
while (rt_r_echk(F->more_1357)) {
F->l_1358 = NULL;
F->l_1358 = f_nn_61((((rt_int)61LL)), f_cur_line_68());
(*(P996)rt_nil_check(F->l_1358)).a = f_expr_103();
if (f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P996)rt_nil_check(F->l_1358)).b = f_expr_103();
}
f_append_65(&F->labs_1355, &F->ltail_1356, F->l_1358);
F->more_1357 = f_accept_op_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_65(&F->head_1353, &F->tail_1354, f_arm_150(F->labs_1355, f_body_117(), rt_r_ichk((*(P996)rt_nil_check(F->x_1352)).line)));
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P996)rt_nil_check(F->x_1352)).flag = ((rt_int)1LL);
(*(P996)rt_nil_check(F->x_1352)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P996)rt_nil_check(F->x_1352)).b = F->head_1353;
F->result_ = F->x_1352;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_repeat_stmt_153(void) {
  struct f_repeat_stmt_153fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1359 = NULL;
F->x_1359 = f_nn_61((((rt_int)24LL)), f_cur_line_68());
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P996)rt_nil_check(F->x_1359)).flag = ((rt_int)1LL);
(*(P996)rt_nil_check(F->x_1359)).name = f_expect_id_89();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P996)rt_nil_check(F->x_1359)).ival = ((rt_int)1LL);
}
(*(P996)rt_nil_check(F->x_1359)).a = f_p_subtype_92();
} else {
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P996)rt_nil_check(F->x_1359)).a = f_expr_103();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P996)rt_nil_check(F->x_1359)).b = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1359;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_guard_stmt_154(void) {
  struct f_guard_stmt_154fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1360 = NULL;
F->x_1360 = f_nn_61((((rt_int)26LL)), f_cur_line_68());
F->head_1361 = NULL;
F->tail_1362 = NULL;
g_tpos_1029 = rt_add(rt_r_ichk(g_tpos_1029), ((rt_int)1LL));
(*(P996)rt_nil_check(F->x_1360)).a = f_body_117();
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1363 = NULL;
F->h_1363 = f_nn_61((((rt_int)62LL)), f_cur_line_68());
(*(P996)rt_nil_check(F->h_1363)).a = f_id_list_91();
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P996)rt_nil_check(F->h_1363)).b = f_body_117();
f_append_65(&F->head_1361, &F->tail_1362, F->h_1363);
}
if (f_accept_kw_82(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P996)rt_nil_check(F->x_1360)).flag = ((rt_int)1LL);
(*(P996)rt_nil_check(F->x_1360)).c = f_body_117();
}
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P996)rt_nil_check(F->x_1360)).b = F->head_1361;
F->result_ = F->x_1360;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_program_155(void) {
  struct f_program_155fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1364 = NULL;
F->tail_1365 = NULL;
while ((!f_at_kind_74((((rt_int)0LL))))) {
if ((!f_at_kw_70(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_80(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1366 = NULL;
F->pr_1366 = (*(P991)rt_nil_check(({ A995 b_ = (((P993)rt_nil_check(g_toks_1027))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1029), b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1367 = NULL;
F->u_1367 = f_capsule_decl_137();
(*(P996)rt_nil_check(F->u_1367)).prags = F->pr_1366;
f_append_65(&F->head_1364, &F->tail_1365, F->u_1367);
}
f_expect_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1364;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_hash_157(rstr *s_156) {
  struct f_hash_157fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_156 = s_156;
F->h_1368 = RT_R_IUNDEF;
F->h_1368 = ((rt_int)0LL);
{ rt_int lo1370 = ((rt_int)1LL), hi1371 = ((rt_int)(((*F->s_156)).len));
for (rt_int it1372 = lo1370; it1372 <= hi1371; it1372++) {
F->i_1369 = it1372;
F->h_1368 = rt_mod(rt_add(rt_mul(rt_r_ichk(F->h_1368), ((rt_int)31LL)), ((rt_int)(rt_r_echk(rt_str_get((*F->s_156), F->i_1369))) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = rt_r_ichk(F->h_1368);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1006 f_lookup_159(rstr *name_158) {
  struct f_lookup_159fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_158 = name_158;
F->y_1373 = NULL;
F->y_1373 = ({ A1012 b_ = (((P1010)rt_nil_check(g_table_1032))->all); b_.p[(rt_index(f_hash_157(&(*F->name_158)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_1033 != NULL)) {
while ((F->y_1373 != NULL)) {
if (((rt_r_ichk((*(P1006)rt_nil_check(F->y_1373)).depth) >= rt_r_ichk(g_gdepth_1065)) && rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_1373)).name))->all), (*F->name_158)))) {
F->result_ = F->y_1373;
goto ret_;
}
F->y_1373 = (*(P1006)rt_nil_check(F->y_1373)).chain;
}
F->y_1373 = ({ A1012 b_ = (((P1010)rt_nil_check(g_genv_1033))->all); b_.p[(rt_index(f_hash_157(&(*F->name_158)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1373 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_1373)).name))->all), (*F->name_158))) {
F->result_ = F->y_1373;
goto ret_;
}
F->y_1373 = (*(P1006)rt_nil_check(F->y_1373)).chain;
}
F->y_1373 = ({ A1012 b_ = (((P1010)rt_nil_check(g_table_1032))->all); b_.p[(rt_index(f_hash_157(&(*F->name_158)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1373 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_1373)).name))->all), (*F->name_158))) {
F->result_ = F->y_1373;
goto ret_;
}
F->y_1373 = (*(P1006)rt_nil_check(F->y_1373)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1006 f_lookup_decl_161(P996 d_160) {
  struct f_lookup_decl_161fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_160 = d_160;
F->y_1374 = NULL;
F->y_1374 = ({ A1012 b_ = (((P1010)rt_nil_check(g_table_1032))->all); b_.p[(rt_index(f_hash_157(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->d_160)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1374 != NULL)) {
if (((*(P1006)rt_nil_check(F->y_1374)).decl == F->d_160)) {
F->result_ = F->y_1374;
goto ret_;
}
F->y_1374 = (*(P1006)rt_nil_check(F->y_1374)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_164(P1006 y_162, rt_int line_163) {
  struct f_define_164fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_162 = y_162;
F->line_163 = line_163;
F->h_1375 = RT_R_IUNDEF;
F->h_1375 = f_hash_157(&(((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_162)).name))->all));
F->z_1376 = NULL;
F->z_1376 = ({ A1012 b_ = (((P1010)rt_nil_check(g_table_1032))->all); b_.p[(rt_index(rt_r_ichk(F->h_1375), b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1376 != NULL)) {
if ((((rt_r_ichk((*(P1006)rt_nil_check(F->z_1376)).depth) == rt_r_ichk(g_depth_1035)) && rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->z_1376)).name))->all), (((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_162)).name))->all))) && (!(((f_overloadable_166(F->y_162) && f_overloadable_166(F->z_1376)) && (rt_r_ichk((*(P1006)rt_nil_check(F->z_1376)).kind) == rt_r_ichk((*(P1006)rt_nil_check(F->y_162)).kind))) && (!(f_same_signature_172((*(P1006)rt_nil_check(F->y_162)).params, (*(P1006)rt_nil_check(F->z_1376)).params) && f_same_tt_169((*(P1006)rt_nil_check(F->y_162)).decl, (*(P1006)rt_nil_check(F->z_1376)).decl))))))) {
f_fail_23(F->line_163, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_162)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1376 = (*(P1006)rt_nil_check(F->z_1376)).chain;
}
(*(P1006)rt_nil_check(F->y_162)).depth = rt_r_ichk(g_depth_1035);
(*(P1006)rt_nil_check(F->y_162)).chain = ({ A1012 b_ = (((P1010)rt_nil_check(g_table_1032))->all); b_.p[(rt_index(rt_r_ichk(F->h_1375), b_.lo, b_.hi) - b_.lo)]; });
(((P1010)rt_nil_check(g_table_1032))->all).p[(rt_index(rt_r_ichk(F->h_1375), (((P1010)rt_nil_check(g_table_1032))->all).lo, (((P1010)rt_nil_check(g_table_1032))->all).hi) - (((P1010)rt_nil_check(g_table_1032))->all).lo)] = F->y_162;
(*(P1006)rt_nil_check(F->y_162)).stack = g_scope_stack_1036;
g_scope_stack_1036 = F->y_162;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_166(P1006 y_165) {
  struct f_overloadable_166fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_165 = y_165;
F->result_ = ((((rt_r_ichk((*(P1006)rt_nil_check(F->y_165)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_165)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_165)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_165)).kind) == (((rt_int)8LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_169(P996 a_167, P996 b_168) {
  struct f_same_tt_169fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_167 = a_167;
F->b_168 = b_168;
F->x_1377 = NULL;
F->y_1378 = NULL;
if (((F->a_167 == NULL) || (F->b_168 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1377 = (*(P996)rt_nil_check(F->a_167)).e;
F->y_1378 = (*(P996)rt_nil_check(F->b_168)).e;
while (((F->x_1377 != NULL) && (F->y_1378 != NULL))) {
if ((!rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1377)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->y_1378)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1377 = (*(P996)rt_nil_check(F->x_1377)).next;
F->y_1378 = (*(P996)rt_nil_check(F->y_1378)).next;
}
F->result_ = ((F->x_1377 == NULL) && (F->y_1378 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_172(P1008 a_170, P1008 b_171) {
  struct f_same_signature_172fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_170 = a_170;
F->b_171 = b_171;
F->x_1379 = NULL;
F->x_1379 = F->a_170;
F->y_1380 = NULL;
F->y_1380 = F->b_171;
while (((F->x_1379 != NULL) && (F->y_1380 != NULL))) {
if ((!f_same_217((*(P1008)rt_nil_check(F->x_1379)).t, (*(P1008)rt_nil_check(F->y_1380)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1379 = (*(P1008)rt_nil_check(F->x_1379)).next;
F->y_1380 = (*(P1008)rt_nil_check(F->y_1380)).next;
}
F->result_ = ((F->x_1379 == NULL) && (F->y_1380 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_173(void) {
  struct f_open_scope_173fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_1035 = rt_add(rt_r_ichk(g_depth_1035), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_174(void) {
  struct f_close_scope_174fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_1036 != NULL) && (rt_r_ichk((*(P1006)rt_nil_check(g_scope_stack_1036)).depth) == rt_r_ichk(g_depth_1035)))) {
(((P1010)rt_nil_check(g_table_1032))->all).p[(rt_index(f_hash_157(&(((P989)rt_nil_check((*(P1006)rt_nil_check(g_scope_stack_1036)).name))->all)), (((P1010)rt_nil_check(g_table_1032))->all).lo, (((P1010)rt_nil_check(g_table_1032))->all).hi) - (((P1010)rt_nil_check(g_table_1032))->all).lo)] = (*(P1006)rt_nil_check(g_scope_stack_1036)).chain;
g_scope_stack_1036 = (*(P1006)rt_nil_check(g_scope_stack_1036)).stack;
}
g_depth_1035 = rt_sub(rt_r_ichk(g_depth_1035), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1006 f_new_sym_177(rt_int kind_175, P989 name_176) {
  struct f_new_sym_177fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_175 = kind_175;
F->name_176 = name_176;
F->y_1381 = NULL;
{ R1007 *cell1382 = rt_alloc(sizeof(R1007));
(*cell1382).name = NULL;
(*cell1382).t = NULL;
(*cell1382).c = NULL;
(*cell1382).access = NULL;
(*cell1382).cname = NULL;
(*cell1382).st = NULL;
(*cell1382).decl = NULL;
(*cell1382).params = NULL;
(*cell1382).result = NULL;
(*cell1382).members = NULL;
(*cell1382).mnext = NULL;
(*cell1382).binds = NULL;
(*cell1382).insts = NULL;
(*cell1382).env = NULL;
(*cell1382).chain = NULL;
(*cell1382).stack = NULL;
(*cell1382).owner = NULL;
(*cell1382).gctx = NULL;
(*cell1382).mv = NULL;
(*cell1382).reqs = NULL;
(*cell1382).home = NULL;
(*cell1382).capn = NULL;
(*cell1382).tbinds = NULL;
(*cell1382).loc = NULL;
(*cell1382).reqs_sym = NULL;
F->y_1381 = cell1382;
}
(*(P1006)rt_nil_check(F->y_1381)).kind = F->kind_175;
(*(P1006)rt_nil_check(F->y_1381)).name = F->name_176;
F->result_ = F->y_1381;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1002 f_new_typ_179(rt_int kind_178) {
  struct f_new_typ_179fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_178 = kind_178;
F->t_1383 = NULL;
{ R1003 *cell1384 = rt_alloc(sizeof(R1003));
(*cell1384).name = NULL;
(*cell1384).lits = NULL;
(*cell1384).elem = NULL;
(*cell1384).idx = NULL;
(*cell1384).idx2 = NULL;
(*cell1384).elemcons = NULL;
(*cell1384).elemst = NULL;
(*cell1384).under = NULL;
(*cell1384).tparams = NULL;
(*cell1384).ocap = NULL;
(*cell1384).fields = NULL;
(*cell1384).target = NULL;
(*cell1384).decl = NULL;
(*cell1384).cname = NULL;
(*cell1384).initp = NULL;
(*cell1384).finalp = NULL;
(*cell1384).tpsyms = NULL;
(*cell1384).gen = NULL;
(*cell1384).gbinds = NULL;
(*cell1384).next = NULL;
(*cell1384).idxs = NULL;
(*cell1384).assignp = NULL;
(*cell1384).eqp = NULL;
(*cell1384).ltp = NULL;
(*cell1384).repn = NULL;
F->t_1383 = cell1384;
}
(*(P1002)rt_nil_check(F->t_1383)).kind = F->kind_178;
F->result_ = F->t_1383;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P998 f_new_cons_180(void) {
  struct f_new_cons_180fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1385 = NULL;
{ R999 *cell1386 = rt_alloc(sizeof(R999));
(*cell1386).lo = NULL;
(*cell1386).hi = NULL;
(*cell1386).lo2 = NULL;
(*cell1386).hi2 = NULL;
(*cell1386).slen = NULL;
(*cell1386).args = NULL;
(*cell1386).prec = NULL;
(*cell1386).bnds = NULL;
F->c_1385 = cell1386;
}
F->result_ = F->c_1385;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_182(P1002 t_181) {
  struct f_scalar_kind_182fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_181 = t_181;
F->result_ = ((F->t_181 != NULL) && (((rt_r_ichk((*(P1002)rt_nil_check(F->t_181)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_181)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_181)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_184(P1002 t_183) {
  struct f_bound_ctype_184fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_183 = t_183;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_183)).kind) == (((rt_int)3LL)))) {
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

static rstr f_cbound_187(P998 c_185, rstr *b_186) {
  struct f_cbound_187fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_185 = c_185;
F->b_186 = b_186;
F->p_1387 = NULL;
F->p_1387 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!rt_r_echk((*(P998)rt_nil_check(F->c_185)).dyn)) || (rt_r_ichk((*(P998)rt_nil_check(F->c_185)).lvl) <= ((rt_int)0LL)))) {
F->result_ = (*F->b_186);
goto ret_;
}
{ rt_int lo1389 = ((rt_int)1LL), hi1390 = rt_sub(rt_r_ichk(g_cur_level_1049), rt_r_ichk((*(P998)rt_nil_check(F->c_185)).lvl));
for (rt_int it1391 = lo1389; it1391 <= hi1390; it1391++) {
F->i_1388 = it1391;
F->p_1387 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->p_1387))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->p_1387))->all), rt_str("->", 2)), (*F->b_186));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_189(P998 c_188) {
  struct f_clo_189fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_188 = c_188;
F->result_ = f_cbound_187(F->c_188, &(((P989)rt_nil_check((*(P998)rt_nil_check(F->c_188)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_191(P998 c_190) {
  struct f_chi_191fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_190 = c_190;
F->result_ = f_cbound_187(F->c_190, &(((P989)rt_nil_check((*(P998)rt_nil_check(F->c_190)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_194(P1002 t_192, P998 c_193) {
  struct f_sub_lo_194fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_192 = t_192;
F->c_193 = c_193;
if (((F->c_193 != NULL) && ((*(P998)rt_nil_check(F->c_193)).lo != NULL))) {
F->result_ = f_clo_189(F->c_193);
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_192)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_192)).kind) == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_197(P1002 t_195, P998 c_196) {
  struct f_sub_hi_197fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_195 = t_195;
F->c_196 = c_196;
if (((F->c_196 != NULL) && ((*(P998)rt_nil_check(F->c_196)).lo != NULL))) {
F->result_ = f_chi_191(F->c_196);
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_195)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_195)).kind) == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_67((*(P1002)rt_nil_check(F->t_195)).lits), ((rt_int)1LL)));
goto ret_;
}
F->result_ = rt_str("RT_IMAX", 7);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_raw_storage_200(rstr *name_198, rstr *ct_199) {
  struct f_raw_storage_200fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_198 = name_198;
F->ct_199 = ct_199;
if ((!rt_r_echk(g_in_func_1048))) {
F->g_1392 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_198)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1042, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_199)), rt_str(" ", 1)), F->g_1392), rt_str(";", 1)); b_; }));
g_st_field_1054 = f_mk_3(&F->g_1392);
F->result_ = F->g_1392;
goto ret_;
}
{
F->f_1393 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_198), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1047, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_199)), rt_str(" ", 1)), F->f_1393), rt_str(";", 1)); b_; }));
g_st_field_1054 = f_mk_3(&F->f_1393);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1393);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P998 f_copy_cons_202(P998 c_201) {
  struct f_copy_cons_202fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_201 = c_201;
F->r_1394 = NULL;
{ R999 *cell1395 = rt_alloc(sizeof(R999));
(*cell1395).lo = NULL;
(*cell1395).hi = NULL;
(*cell1395).lo2 = NULL;
(*cell1395).hi2 = NULL;
(*cell1395).slen = NULL;
(*cell1395).args = NULL;
(*cell1395).prec = NULL;
(*cell1395).bnds = NULL;
F->r_1394 = cell1395;
}
(*(P998)rt_nil_check(F->r_1394)).lo = (*(P998)rt_nil_check(F->c_201)).lo;
(*(P998)rt_nil_check(F->r_1394)).hi = (*(P998)rt_nil_check(F->c_201)).hi;
(*(P998)rt_nil_check(F->r_1394)).lo2 = (*(P998)rt_nil_check(F->c_201)).lo2;
(*(P998)rt_nil_check(F->r_1394)).hi2 = (*(P998)rt_nil_check(F->c_201)).hi2;
(*(P998)rt_nil_check(F->r_1394)).slen = (*(P998)rt_nil_check(F->c_201)).slen;
(*(P998)rt_nil_check(F->r_1394)).mlo = rt_r_ichk((*(P998)rt_nil_check(F->c_201)).mlo);
(*(P998)rt_nil_check(F->r_1394)).mhi = rt_r_ichk((*(P998)rt_nil_check(F->c_201)).mhi);
(*(P998)rt_nil_check(F->r_1394)).hasm = rt_r_echk((*(P998)rt_nil_check(F->c_201)).hasm);
(*(P998)rt_nil_check(F->r_1394)).args = (*(P998)rt_nil_check(F->c_201)).args;
(*(P998)rt_nil_check(F->r_1394)).dyn = rt_r_echk((*(P998)rt_nil_check(F->c_201)).dyn);
(*(P998)rt_nil_check(F->r_1394)).lvl = rt_r_ichk((*(P998)rt_nil_check(F->c_201)).lvl);
(*(P998)rt_nil_check(F->r_1394)).prec = (*(P998)rt_nil_check(F->c_201)).prec;
F->result_ = F->r_1394;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P998 f_freeze_205(P998 c_203, P1002 t_204) {
  struct f_freeze_205fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_203 = c_203;
F->t_204 = t_204;
F->r_1396 = NULL;
F->saved_field_1397 = NULL;
F->saved_field_1397 = g_st_field_1054;
if ((((((F->c_203 == NULL) || ((*(P998)rt_nil_check(F->c_203)).lo == NULL)) || rt_r_echk((*(P998)rt_nil_check(F->c_203)).hasm)) || rt_r_echk((*(P998)rt_nil_check(F->c_203)).dyn)) || (!f_scalar_kind_182(F->t_204)))) {
F->result_ = F->c_203;
goto ret_;
}
F->r_1396 = f_copy_cons_202(F->c_203);
{
F->ct_1398 = rt_str_copy(f_bound_ctype_184(F->t_204));
F->la_1399 = rt_str_copy(f_raw_storage_200(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1398));
F->lf_1400 = rt_str_copy((((P989)rt_nil_check(g_st_field_1054))->all));
F->ha_1401 = rt_str_copy(f_raw_storage_200(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1398));
F->hf_1402 = rt_str_copy((((P989)rt_nil_check(g_st_field_1054))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1399, rt_str(" = ", 3)), f_clo_189(F->c_203)), rt_str("; ", 2)), F->ha_1401), rt_str(" = ", 3)), f_chi_191(F->c_203)), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_1048)) {
(*(P998)rt_nil_check(F->r_1396)).lo = f_mk_3(&F->lf_1400);
(*(P998)rt_nil_check(F->r_1396)).hi = f_mk_3(&F->hf_1402);
(*(P998)rt_nil_check(F->r_1396)).dyn = 1;
(*(P998)rt_nil_check(F->r_1396)).lvl = rt_r_ichk(g_cur_level_1049);
} else {
(*(P998)rt_nil_check(F->r_1396)).lo = f_mk_3(&F->la_1399);
(*(P998)rt_nil_check(F->r_1396)).hi = f_mk_3(&F->ha_1401);
(*(P998)rt_nil_check(F->r_1396)).dyn = 0;
}
}
g_st_field_1054 = F->saved_field_1397;
F->result_ = F->r_1396;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_209(P1002 t_206, P998 c_207, rstr *v_208) {
  struct f_checked_209fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_206 = t_206;
F->c_207 = c_207;
F->v_208 = v_208;
if ((((F->c_207 == NULL) || (!f_scalar_kind_182(F->t_206))) || f_suppressed_494(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_208);
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_206)).kind) != (((rt_int)3LL))) && rt_r_echk((*(P998)rt_nil_check(F->c_207)).hasm))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_208)), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P998)rt_nil_check(F->c_207)).mlo))), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P998)rt_nil_check(F->c_207)).mhi))), rt_str(")", 1));
goto ret_;
} else if (((*(P998)rt_nil_check(F->c_207)).lo == NULL)) {
F->result_ = (*F->v_208);
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_206)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frange(", 10), (*F->v_208)), rt_str(", ", 2)), f_clo_189(F->c_207)), rt_str(", ", 2)), f_chi_191(F->c_207)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_208)), rt_str(", ", 2)), f_clo_189(F->c_207)), rt_str(", ", 2)), f_chi_191(F->c_207)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_lits_212(P996 a_210, P996 b_211) {
  struct f_same_lits_212fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_210 = a_210;
F->b_211 = b_211;
F->x_1403 = NULL;
F->x_1403 = F->a_210;
F->y_1404 = NULL;
F->y_1404 = F->b_211;
while (((F->x_1403 != NULL) && (F->y_1404 != NULL))) {
if ((!rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->x_1403)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->y_1404)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1403 = (*(P996)rt_nil_check(F->x_1403)).next;
F->y_1404 = (*(P996)rt_nil_check(F->y_1404)).next;
}
F->result_ = ((F->x_1403 == NULL) && (F->y_1404 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1002 f_str_elem_214(P1002 t_213) {
  struct f_str_elem_214fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_213 = t_213;
if (((*(P1002)rt_nil_check(F->t_213)).elem == NULL)) {
F->result_ = g_ty_ascii_1079;
goto ret_;
}
F->result_ = (*(P1002)rt_nil_check(F->t_213)).elem;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_217(P1002 a_215, P1002 b_216) {
  struct f_same_217fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_215 = a_215;
F->b_216 = b_216;
if ((F->a_215 == F->b_216)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_215 == NULL) || (F->b_216 == NULL)) || (rt_r_ichk((*(P1002)rt_nil_check(F->a_215)).kind) != rt_r_ichk((*(P1002)rt_nil_check(F->b_216)).kind)))) {
F->result_ = 0;
goto ret_;
}
if (((rt_r_ichk((*(P1002)rt_nil_check(F->a_215)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->a_215)).kind) == (((rt_int)10LL))))) {
F->result_ = f_same_217(f_str_elem_214(F->a_215), f_str_elem_214(F->b_216));
goto ret_;
}
if (((((rt_r_ichk((*(P1002)rt_nil_check(F->a_215)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->a_215)).kind) == (((rt_int)2LL)))) || (rt_r_ichk((*(P1002)rt_nil_check(F->a_215)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1002)rt_nil_check(F->a_215)).kind) == (((rt_int)9LL))))) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->a_215)).kind) == (((rt_int)4LL)))) {
F->result_ = f_same_lits_212((*(P1002)rt_nil_check(F->a_215)).lits, (*(P1002)rt_nil_check(F->b_216)).lits);
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->a_215)).kind) == (((rt_int)6LL)))) {
F->x_1405 = NULL;
F->x_1405 = (*(P1002)rt_nil_check(F->a_215)).idxs;
F->y_1406 = NULL;
F->y_1406 = (*(P1002)rt_nil_check(F->b_216)).idxs;
while (((F->x_1405 != NULL) && (F->y_1406 != NULL))) {
if ((!f_same_217((*(P1017)rt_nil_check(F->x_1405)).t, (*(P1017)rt_nil_check(F->y_1406)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1405 = (*(P1017)rt_nil_check(F->x_1405)).next;
F->y_1406 = (*(P1017)rt_nil_check(F->y_1406)).next;
}
F->result_ = (((F->x_1405 == NULL) && (F->y_1406 == NULL)) && f_same_217((*(P1002)rt_nil_check(F->a_215)).elem, (*(P1002)rt_nil_check(F->b_216)).elem));
goto ret_;
}
if (((rt_r_ichk((*(P1002)rt_nil_check(F->a_215)).kind) == (((rt_int)16LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->a_215)).kind) == (((rt_int)12LL))))) {
F->result_ = f_same_217((*(P1002)rt_nil_check(F->a_215)).elem, (*(P1002)rt_nil_check(F->b_216)).elem);
goto ret_;
}
if (((rt_r_ichk((*(P1002)rt_nil_check(F->a_215)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->a_215)).kind) == (((rt_int)17LL))))) {
F->f_1407 = NULL;
F->f_1407 = (*(P1002)rt_nil_check(F->a_215)).fields;
F->g_1408 = NULL;
F->g_1408 = (*(P1002)rt_nil_check(F->b_216)).fields;
while (((F->f_1407 != NULL) && (F->g_1408 != NULL))) {
if (((!rt_str_eq((((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_1407)).name))->all), (((P989)rt_nil_check((*(P1004)rt_nil_check(F->g_1408)).name))->all))) || (!f_same_217((*(P1004)rt_nil_check(F->f_1407)).t, (*(P1004)rt_nil_check(F->g_1408)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1407 = (*(P1004)rt_nil_check(F->f_1407)).next;
F->g_1408 = (*(P1004)rt_nil_check(F->g_1408)).next;
}
F->result_ = ((F->f_1407 == NULL) && (F->g_1408 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1002 f_base_of_219(P1002 t_218) {
  struct f_base_of_219fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_218 = t_218;
if ((((F->t_218 != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->t_218)).kind) == (((rt_int)15LL)))) && ((*(P1002)rt_nil_check(F->t_218)).tparams == NULL))) {
F->result_ = f_base_of_219((*(P1002)rt_nil_check(F->t_218)).under);
goto ret_;
}
F->result_ = F->t_218;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P998 f_base_cons_222(P1002 t_220, P998 c_221) {
  struct f_base_cons_222fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_220 = t_220;
F->c_221 = c_221;
if (((((F->t_220 != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->t_220)).kind) == (((rt_int)15LL)))) && ((*(P1002)rt_nil_check(F->t_220)).tparams == NULL)) && ((*(P1002)rt_nil_check(F->t_220)).elemcons != NULL))) {
F->result_ = f_base_cons_222((*(P1002)rt_nil_check(F->t_220)).under, (*(P1002)rt_nil_check(F->t_220)).elemcons);
goto ret_;
}
F->result_ = F->c_221;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_224(P1002 t_223) {
  struct f_kind_name_224fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_223 = t_223;
{ rt_int sel1409 = rt_r_ichk((*(P1002)rt_nil_check(F->t_223)).kind);
if (0 || (sel1409 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1409 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1409 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1409 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1409 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1409 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1409 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1409 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1409 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_223)).name))->all));
goto ret_;
} else if (0 || (sel1409 == (((rt_int)11LL)))) {
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

static void f_check_type_228(P1002 got_225, P1002 want_226, rt_int line_227) {
  struct f_check_type_228fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_225 = got_225;
F->want_226 = want_226;
F->line_227 = line_227;
if ((F->want_226 == NULL)) {
goto ret_;
}
if (((rt_r_ichk((*(P1002)rt_nil_check(F->got_225)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P1002)rt_nil_check(F->want_226)).kind) == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_217(F->got_225, F->want_226))) {
f_fail_23(F->line_227, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_224(F->got_225)), rt_str(" where ", 7)), f_kind_name_224(F->want_226)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_230(P1002 t_229) {
  struct f_ctype_230fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_229 = t_229;
{ rt_int sel1410 = rt_r_ichk((*(P1002)rt_nil_check(F->t_229)).kind);
if (0 || (sel1410 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1410 == (((rt_int)2LL))) || (sel1410 == (((rt_int)4LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1410 == (((rt_int)10LL)))) {
F->result_ = rt_str("rt_r_file *", 11);
goto ret_;
} else if (0 || (sel1410 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1410 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1410 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1410 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1410 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1410 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1410 == (((rt_int)16LL)))) {
F->result_ = rt_str("yset", 4);
goto ret_;
} else {
if (((*(P1002)rt_nil_check(F->t_229)).cname == NULL)) {
f_declare_ctype_236(F->t_229);
} else if (((((rt_r_ichk((*(P1002)rt_nil_check(F->t_229)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_229)).kind) == (((rt_int)17LL)))) && rt_r_echk((*(P1002)rt_nil_check(F->t_229)).forward)) && (!rt_r_echk((*(P1002)rt_nil_check(F->t_229)).defined)))) {
(*(P1002)rt_nil_check(F->t_229)).defined = 1;
f_put_27(g_out_types_1039, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_229)).cname))->all)), rt_str(" ", 1)), f_struct_body_232(F->t_229)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_229)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_232(P1002 t_231) {
  struct f_struct_body_232fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_231 = t_231;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_231)).kind) == (((rt_int)17LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ int tag; union { ", 19), f_field_decls_234(F->t_231)), rt_str(" } u; }", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_field_decls_234(F->t_231)), rt_str(" }", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_field_decls_234(P1002 t_233) {
  struct f_field_decls_234fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_233 = t_233;
F->f_1411 = NULL;
F->f_1411 = (*(P1002)rt_nil_check(F->t_233)).fields;
F->s_1412 = NULL;
F->s_1412 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1411 != NULL)) {
F->s_1412 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->s_1412))->all), f_ctype_230((*(P1004)rt_nil_check(F->f_1411)).t)), rt_str(" ", 1)), f_field_c_17(&(((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_1411)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1411 = (*(P1004)rt_nil_check(F->f_1411)).next;
}
F->result_ = (((P989)rt_nil_check(F->s_1412))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_236(P1002 t_235) {
  struct f_declare_ctype_236fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_235 = t_235;
F->u_1413 = NULL;
F->u_1413 = g_all_types_1037;
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_235)).kind) == (((rt_int)8LL))) && ((*(P1002)rt_nil_check(F->t_235)).target == NULL))) {
f_finish_ptr_460(F->t_235);
if (((*(P1002)rt_nil_check(F->t_235)).cname != NULL)) {
goto ret_;
}
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_235)).kind) != (((rt_int)8LL)))) {
while ((F->u_1413 != NULL)) {
if (((rt_r_ichk((*(P1002)rt_nil_check(F->u_1413)).kind) == rt_r_ichk((*(P1002)rt_nil_check(F->t_235)).kind)) && f_same_217(F->u_1413, F->t_235))) {
(*(P1002)rt_nil_check(F->t_235)).cname = (*(P1002)rt_nil_check(F->u_1413)).cname;
goto ret_;
}
F->u_1413 = (*(P1002)rt_nil_check(F->u_1413)).next;
}
}
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_235)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->t_235)).tparams == NULL))) {
(*(P1002)rt_nil_check(F->t_235)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_230((*(P1002)rt_nil_check(F->t_235)).under); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_235)).kind) == (((rt_int)6LL)))) {
(*(P1002)rt_nil_check(F->t_235)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_235)).kind) == (((rt_int)15LL)))) {
(*(P1002)rt_nil_check(F->t_235)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_235)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_235)).kind) == (((rt_int)17LL))))) {
(*(P1002)rt_nil_check(F->t_235)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P1002)rt_nil_check(F->t_235)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P1002)rt_nil_check(F->t_235)).next = g_all_types_1037;
g_all_types_1037 = F->t_235;
if ((((rt_r_ichk((*(P1002)rt_nil_check(F->t_235)).kind) == (((rt_int)8LL))) && ((*(P1002)rt_nil_check(F->t_235)).decl != NULL)) && ((*(P996)rt_nil_check((*(P1002)rt_nil_check(F->t_235)).decl)).b != NULL))) {
F->p_1414 = NULL;
F->p_1414 = (*(P996)rt_nil_check((*(P1002)rt_nil_check(F->t_235)).decl)).b;
F->fs_1415 = NULL;
F->fs_1415 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1416 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1414 != NULL)) {
F->pc_1417 = NULL;
F->fs_1415 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->fs_1415))->all), rt_str(" ", 1)), f_ctype_230(f_resolve_subtype_264((*(P996)rt_nil_check(F->p_1414)).a, &F->pc_1417))), rt_str(" p_", 3)), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1414)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1414 = (*(P996)rt_nil_check(F->p_1414)).next;
}
f_put_27(g_out_types_1039, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1416), rt_str(" *", 2)), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_235)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_1040, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1416), rt_str(" {", 2)), (((P989)rt_nil_check(F->fs_1415))->all)), rt_str(" ", 1)), f_ctype_230((*(P1002)rt_nil_check(F->t_235)).target)), rt_str(" all; };", 8)); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_235)).kind) == (((rt_int)8LL)))) {
F->target_1418 = NULL;
F->target_1418 = (*(P1002)rt_nil_check(F->t_235)).target;
if (((rt_r_ichk((*(P1002)rt_nil_check(F->target_1418)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->target_1418)).kind) == (((rt_int)17LL))))) {
if (((*(P1002)rt_nil_check(F->target_1418)).cname == NULL)) {
(*(P1002)rt_nil_check(F->target_1418)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P1002)rt_nil_check(F->target_1418)).next = g_all_types_1037;
g_all_types_1037 = F->target_1418;
f_put_27(g_out_types_1039, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->target_1418)).cname))->all)), rt_str(" ", 1)), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->target_1418)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P1002)rt_nil_check(F->target_1418)).forward = 1;
}
f_put_27(g_out_types_1039, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->target_1418)).cname))->all)), rt_str(" *", 2)), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_235)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_1039, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_230(F->target_1418)), rt_str(" *", 2)), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_235)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_235)).kind) == (((rt_int)6LL)))) {
f_put_27(g_out_types_1039, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_235)).cname))->all)), rt_str(" ", 1)), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_235)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_1039, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_235)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_230((*(P1002)rt_nil_check(F->t_235)).elem)), rt_str(" *p;", 4)), f_more_dims_242(F->t_235)), rt_str(" };", 3)); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_235)).kind) == (((rt_int)15LL)))) {
F->p_1419 = NULL;
F->p_1419 = (*(P1002)rt_nil_check(F->t_235)).tparams;
F->fs_1420 = NULL;
F->fs_1420 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1419 != NULL)) {
F->fs_1420 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->fs_1420))->all), f_ctype_230(f_tparam_type_348(F->t_235, &(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1419)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1419)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1419 = (*(P996)rt_nil_check(F->p_1419)).next;
}
f_put_27(g_out_types_1039, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_235)).cname))->all)), rt_str(" ", 1)), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_235)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_1039, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_235)).cname))->all)), rt_str(" {", 2)), (((P989)rt_nil_check(F->fs_1420))->all)), f_ctype_230((*(P1002)rt_nil_check(F->t_235)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_1039, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_235)).cname))->all)), rt_str(" ", 1)), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_235)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P1002)rt_nil_check(F->t_235)).defined = 1;
f_put_27(g_out_types_1039, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_235)).cname))->all)), rt_str(" ", 1)), f_struct_body_232(F->t_235)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_dim_lo_238(rt_int k_237) {
  struct f_dim_lo_238fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_237 = k_237;
if ((F->k_237 == ((rt_int)1LL))) {
F->result_ = rt_str("lo", 2);
goto ret_;
}
F->result_ = rt_str_cat(rt_str("lo", 2), f_itos_7(F->k_237));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_dim_hi_240(rt_int k_239) {
  struct f_dim_hi_240fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_239 = k_239;
if ((F->k_239 == ((rt_int)1LL))) {
F->result_ = rt_str("hi", 2);
goto ret_;
}
F->result_ = rt_str_cat(rt_str("hi", 2), f_itos_7(F->k_239));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_more_dims_242(P1002 t_241) {
  struct f_more_dims_242fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_241 = t_241;
F->r_1421 = NULL;
F->r_1421 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1423 = ((rt_int)3LL), hi1424 = rt_r_ichk((*(P1002)rt_nil_check(F->t_241)).ndim);
for (rt_int it1425 = lo1423; it1425 <= hi1424; it1425++) {
F->k_1422 = it1425;
F->r_1421 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_1421))->all), rt_str(" rt_int ", 8)), f_dim_lo_238(F->k_1422)), rt_str(", ", 2)), f_dim_hi_240(F->k_1422)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P989)rt_nil_check(F->r_1421))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_245(P1002 t_243, rstr *base_244) {
  struct f_acnt_245fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_243 = t_243;
F->base_244 = base_244;
F->r_1426 = NULL;
F->r_1426 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_244)), rt_str(")", 1)); b_; }));
{ rt_int lo1428 = ((rt_int)3LL), hi1429 = rt_r_ichk((*(P1002)rt_nil_check(F->t_243)).ndim);
for (rt_int it1430 = lo1428; it1430 <= hi1429; it1430++) {
F->k_1427 = it1430;
F->r_1426 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_1426))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_244)), rt_str(".", 1)), f_dim_lo_238(F->k_1427)), rt_str(", ", 2)), (*F->base_244)), rt_str(".", 1)), f_dim_hi_240(F->k_1427)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P989)rt_nil_check(F->r_1426))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P989 f_cons_lo_248(P998 c_246, rt_int k_247) {
  struct f_cons_lo_248fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_246 = c_246;
F->k_247 = k_247;
F->l_1431 = NULL;
if ((F->k_247 == ((rt_int)1LL))) {
F->result_ = (*(P998)rt_nil_check(F->c_246)).lo;
goto ret_;
} else if ((F->k_247 == ((rt_int)2LL))) {
F->result_ = (*(P998)rt_nil_check(F->c_246)).lo2;
goto ret_;
}
F->l_1431 = (*(P998)rt_nil_check(F->c_246)).bnds;
{ rt_int lo1433 = ((rt_int)1LL), hi1434 = rt_sub(rt_add(F->k_247, F->k_247), ((rt_int)6LL));
for (rt_int it1435 = lo1433; it1435 <= hi1434; it1435++) {
F->i_1432 = it1435;
if ((F->l_1431 != NULL)) {
F->l_1431 = (*(P1000)rt_nil_check(F->l_1431)).next;
}
}
}
if ((F->l_1431 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1000)rt_nil_check(F->l_1431)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P989 f_cons_hi_251(P998 c_249, rt_int k_250) {
  struct f_cons_hi_251fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_249 = c_249;
F->k_250 = k_250;
F->l_1436 = NULL;
if ((F->k_250 == ((rt_int)1LL))) {
F->result_ = (*(P998)rt_nil_check(F->c_249)).hi;
goto ret_;
} else if ((F->k_250 == ((rt_int)2LL))) {
F->result_ = (*(P998)rt_nil_check(F->c_249)).hi2;
goto ret_;
}
F->l_1436 = (*(P998)rt_nil_check(F->c_249)).bnds;
{ rt_int lo1438 = ((rt_int)1LL), hi1439 = rt_sub(rt_add(F->k_250, F->k_250), ((rt_int)5LL));
for (rt_int it1440 = lo1438; it1440 <= hi1439; it1440++) {
F->i_1437 = it1440;
if ((F->l_1436 != NULL)) {
F->l_1436 = (*(P1000)rt_nil_check(F->l_1436)).next;
}
}
}
if ((F->l_1436 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1000)rt_nil_check(F->l_1436)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1002 f_idx_type_254(P1002 t_252, rt_int k_253) {
  struct f_idx_type_254fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_252 = t_252;
F->k_253 = k_253;
F->l_1441 = NULL;
F->l_1441 = (*(P1002)rt_nil_check(F->t_252)).idxs;
{ rt_int lo1443 = ((rt_int)2LL), hi1444 = F->k_253;
for (rt_int it1445 = lo1443; it1445 <= hi1444; it1445++) {
F->i_1442 = it1445;
F->l_1441 = (*(P1017)rt_nil_check(F->l_1441)).next;
}
}
F->result_ = (*(P1017)rt_nil_check(F->l_1441)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_255(void) {
  struct f_init_ascii_255fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1446 = NULL;
F->tail_1447 = NULL;
F->start_1448 = RT_R_IUNDEF;
F->start_1448 = ((rt_int)1LL);
{ rt_int lo1450 = ((rt_int)1LL), hi1451 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1452 = lo1450; it1452 <= hi1451; it1452++) {
F->i_1449 = it1452;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1449) == 32)) {
F->lit_1453 = NULL;
F->lit_1453 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P996)rt_nil_check(F->lit_1453)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), rt_r_ichk(F->start_1448), rt_sub(F->i_1449, ((rt_int)1LL))); b_; }));
f_append_65(&F->head_1446, &F->tail_1447, F->lit_1453);
F->start_1448 = rt_add(F->i_1449, ((rt_int)1LL));
}
}
}
g_ty_ascii_1079 = f_new_typ_179((((rt_int)4LL)));
(*(P1002)rt_nil_check(g_ty_ascii_1079)).lits = F->head_1446;
(*(P1002)rt_nil_check(g_ty_ascii_1079)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1454 = NULL;
F->t2_1455 = NULL;
F->l1_1456 = NULL;
F->l1_1456 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1457 = NULL;
F->l2_1457 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1458 = NULL;
F->l3_1458 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P996)rt_nil_check(F->l1_1456)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P996)rt_nil_check(F->l2_1457)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P996)rt_nil_check(F->l3_1458)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_65(&F->h2_1454, &F->t2_1455, F->l1_1456);
f_append_65(&F->h2_1454, &F->t2_1455, F->l2_1457);
f_append_65(&F->h2_1454, &F->t2_1455, F->l3_1458);
g_file_mode_type_1087 = f_new_typ_179((((rt_int)4LL)));
(*(P1002)rt_nil_check(g_file_mode_type_1087)).lits = F->h2_1454;
}
g_file_state_type_1091 = f_enum2_258(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OLD", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }));
g_file_disp_type_1092 = f_enum2_258(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SAVE", 4); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DELETE", 6); b_; }));
g_file_access_type_1093 = f_enum2_258(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEQ", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RANDOM", 6); b_; }));
g_ty_text_file_1090 = f_new_typ_179((((rt_int)10LL)));
(*(P1002)rt_nil_check(g_ty_text_file_1090)).elem = g_ty_ascii_1079;
g_ty_send_st_1088 = f_new_typ_179((((rt_int)1LL)));
(*(P1002)rt_nil_check(g_ty_send_st_1088)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEND_ST", 7); b_; }));
g_ty_receive_st_1089 = f_new_typ_179((((rt_int)1LL)));
(*(P1002)rt_nil_check(g_ty_receive_st_1089)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RECEIVE_ST", 10); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1002 f_enum2_258(rstr *a_256, rstr *b_257) {
  struct f_enum2_258fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_256 = a_256;
F->b_257 = b_257;
F->t_1459 = NULL;
F->t_1459 = f_new_typ_179((((rt_int)4LL)));
F->l1_1460 = NULL;
F->l1_1460 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1461 = NULL;
F->l2_1461 = f_nn_61((((rt_int)4LL)), ((rt_int)0LL));
(*(P996)rt_nil_check(F->l1_1460)).name = f_mk_3(&(*F->a_256));
(*(P996)rt_nil_check(F->l2_1461)).name = f_mk_3(&(*F->b_257));
(*(P996)rt_nil_check(F->l1_1460)).next = F->l2_1461;
(*(P1002)rt_nil_check(F->t_1459)).lits = F->l1_1460;
F->result_ = F->t_1459;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_lit_index_261(P996 lits_259, rstr *name_260) {
  struct f_lit_index_261fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_259 = lits_259;
F->name_260 = name_260;
F->i_1462 = RT_R_IUNDEF;
F->i_1462 = ((rt_int)0LL);
F->l_1463 = NULL;
F->l_1463 = F->lits_259;
while ((F->l_1463 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->l_1463)).name))->all), (*F->name_260))) {
F->result_ = rt_r_ichk(F->i_1462);
goto ret_;
}
F->i_1462 = rt_add(rt_r_ichk(F->i_1462), ((rt_int)1LL));
F->l_1463 = (*(P996)rt_nil_check(F->l_1463)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1002 f_resolve_subtype_264(P996 st_262, P998 *c_263) {
  struct f_resolve_subtype_264fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_262 = st_262;
F->c_263 = c_263;
F->c_263v = *F->c_263;
F->t_1464 = NULL;
F->ok_1465 = RT_R_EUNDEF;
F->dummy_1466 = NULL;
F->c_263v = f_new_cons_180();
{ rt_int sel1467 = rt_r_ichk((*(P996)rt_nil_check(F->st_262)).kind);
if (0 || (sel1467 == (((rt_int)70LL)))) {
if (((*(P996)rt_nil_check(F->st_262)).a != NULL)) {
(*(P998)rt_nil_check(F->c_263v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782((*(P996)rt_nil_check(F->st_262)).a, g_ty_int_1076, &F->dummy_1466); b_; }));
(*(P998)rt_nil_check(F->c_263v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782((*(P996)rt_nil_check(F->st_262)).b, g_ty_int_1076, &F->dummy_1466); b_; }));
(*(P998)rt_nil_check(F->c_263v)).mlo = f_manifest_362((*(P996)rt_nil_check(F->st_262)).a, &F->ok_1465);
(*(P998)rt_nil_check(F->c_263v)).hasm = rt_r_echk(F->ok_1465);
(*(P998)rt_nil_check(F->c_263v)).mhi = f_manifest_362((*(P996)rt_nil_check(F->st_262)).b, &F->ok_1465);
(*(P998)rt_nil_check(F->c_263v)).hasm = (rt_r_echk((*(P998)rt_nil_check(F->c_263v)).hasm) && rt_r_echk(F->ok_1465));
}
F->result_ = g_ty_int_1076;
goto ret_;
} else if (0 || (sel1467 == (((rt_int)71LL)))) {
if (((*(P996)rt_nil_check(F->st_262)).a != NULL)) {
(*(P998)rt_nil_check(F->c_263v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782((*(P996)rt_nil_check(F->st_262)).a, g_ty_int_1076, &F->dummy_1466); b_; }));
}
if (((*(P996)rt_nil_check(F->st_262)).b != NULL)) {
(*(P998)rt_nil_check(F->c_263v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782((*(P996)rt_nil_check(F->st_262)).b, g_ty_float_1078, &F->dummy_1466); b_; }));
(*(P998)rt_nil_check(F->c_263v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782((*(P996)rt_nil_check(F->st_262)).c, g_ty_float_1078, &F->dummy_1466); b_; }));
(*(P998)rt_nil_check(F->c_263v)).hasm = (f_float_lit_266((*(P996)rt_nil_check(F->st_262)).b) && f_float_lit_266((*(P996)rt_nil_check(F->st_262)).c));
}
F->result_ = g_ty_float_1078;
goto ret_;
} else if (0 || (sel1467 == (((rt_int)72LL)))) {
F->t_1464 = f_new_typ_179((((rt_int)4LL)));
(*(P1002)rt_nil_check(F->t_1464)).lits = (*(P996)rt_nil_check(F->st_262)).a;
if (((*(P996)rt_nil_check(F->st_262)).b != NULL)) {
(*(P998)rt_nil_check(F->c_263v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782((*(P996)rt_nil_check(F->st_262)).b, F->t_1464, &F->dummy_1466); b_; }));
(*(P998)rt_nil_check(F->c_263v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782((*(P996)rt_nil_check(F->st_262)).c, F->t_1464, &F->dummy_1466); b_; }));
if (((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->st_262)).b)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->st_262)).c)).kind) == (((rt_int)4LL))))) {
(*(P998)rt_nil_check(F->c_263v)).mlo = f_lit_index_261((*(P1002)rt_nil_check(F->t_1464)).lits, &(((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->st_262)).b)).name))->all));
(*(P998)rt_nil_check(F->c_263v)).mhi = f_lit_index_261((*(P1002)rt_nil_check(F->t_1464)).lits, &(((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->st_262)).c)).name))->all));
(*(P998)rt_nil_check(F->c_263v)).hasm = 1;
}
}
F->result_ = F->t_1464;
goto ret_;
} else if (0 || (sel1467 == (((rt_int)73LL)))) {
F->t_1464 = f_resolve_subtype_264((*(P996)rt_nil_check(F->st_262)).a, &F->c_263v);
if (((*(P1002)rt_nil_check(f_base_of_219(F->t_1464))).kind != (((rt_int)4LL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->st_262)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component type of a string is an enumeration type", 53); b_; }));
}
if ((f_same_217(F->t_1464, g_ty_ascii_1079) && ((F->c_263v == NULL) || ((*(P998)rt_nil_check(F->c_263v)).lo == NULL)))) {
F->t_1464 = g_ty_string_1080;
} else {
F->et_1468 = NULL;
F->et_1468 = F->t_1464;
F->t_1464 = f_new_typ_179((((rt_int)5LL)));
(*(P1002)rt_nil_check(F->t_1464)).elem = F->et_1468;
(*(P1002)rt_nil_check(F->t_1464)).elemcons = F->c_263v;
}
F->c_263v = f_new_cons_180();
if (((*(P996)rt_nil_check(F->st_262)).b != NULL)) {
(*(P998)rt_nil_check(F->c_263v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782((*(P996)rt_nil_check(F->st_262)).b, g_ty_int_1076, &F->dummy_1466); b_; }));
}
F->result_ = F->t_1464;
goto ret_;
} else if (0 || (sel1467 == (((rt_int)74LL)))) {
{
F->ec_1469 = NULL;
F->et_1470 = NULL;
F->et_1470 = f_resolve_subtype_264((*(P996)rt_nil_check(F->st_262)).b, &F->ec_1469);
F->ix_1471 = NULL;
F->ix_1471 = (*(P996)rt_nil_check(F->st_262)).a;
F->k_1472 = RT_R_IUNDEF;
F->k_1472 = ((rt_int)0LL);
F->tail_1473 = NULL;
F->btail_1474 = NULL;
F->t_1464 = f_new_typ_179((((rt_int)6LL)));
(*(P1002)rt_nil_check(F->t_1464)).elem = F->et_1470;
(*(P1002)rt_nil_check(F->t_1464)).elemcons = F->ec_1469;
(*(P1002)rt_nil_check(F->t_1464)).elemst = (*(P996)rt_nil_check(F->st_262)).b;
(*(P998)rt_nil_check(F->c_263v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P998)rt_nil_check(F->c_263v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1471 != NULL)) {
F->ic_1475 = NULL;
F->it_1476 = NULL;
F->it_1476 = f_resolve_subtype_264(F->ix_1471, &F->ic_1475);
F->lo_1477 = NULL;
F->hi_1478 = NULL;
F->tl_1479 = NULL;
if ((((*(P1002)rt_nil_check(f_base_of_219(F->it_1476))).kind != (((rt_int)1LL))) && ((*(P1002)rt_nil_check(f_base_of_219(F->it_1476))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->st_262)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1475 = f_base_cons_222(F->it_1476, F->ic_1475);
F->k_1472 = rt_add(rt_r_ichk(F->k_1472), ((rt_int)1LL));
{ R1018 *cell1480 = rt_alloc(sizeof(R1018));
(*cell1480).t = NULL;
(*cell1480).next = NULL;
F->tl_1479 = cell1480;
}
(*(P1017)rt_nil_check(F->tl_1479)).t = F->it_1476;
if ((F->tail_1473 == NULL)) {
(*(P1002)rt_nil_check(F->t_1464)).idxs = F->tl_1479;
} else {
(*(P1017)rt_nil_check(F->tail_1473)).next = F->tl_1479;
}
F->tail_1473 = F->tl_1479;
if (((F->ic_1475 != NULL) && ((*(P998)rt_nil_check(F->ic_1475)).lo != NULL))) {
F->lo_1477 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_189(F->ic_1475); b_; }));
F->hi_1478 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_191(F->ic_1475); b_; }));
} else if (((*(P1002)rt_nil_check(f_base_of_219(F->it_1476))).kind == (((rt_int)4LL)))) {
F->lo_1477 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1478 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P1002)rt_nil_check(f_base_of_219(F->it_1476))).lits), ((rt_int)1LL))); b_; }));
}
if ((rt_r_ichk(F->k_1472) == ((rt_int)1LL))) {
(*(P1002)rt_nil_check(F->t_1464)).idx = F->it_1476;
(*(P998)rt_nil_check(F->c_263v)).lo = F->lo_1477;
(*(P998)rt_nil_check(F->c_263v)).hi = F->hi_1478;
} else if ((rt_r_ichk(F->k_1472) == ((rt_int)2LL))) {
(*(P1002)rt_nil_check(F->t_1464)).idx2 = F->it_1476;
(*(P998)rt_nil_check(F->c_263v)).lo2 = F->lo_1477;
(*(P998)rt_nil_check(F->c_263v)).hi2 = F->hi_1478;
} else if ((F->lo_1477 != NULL)) {
F->l1_1481 = NULL;
F->l2_1482 = NULL;
{ R1001 *cell1483 = rt_alloc(sizeof(R1001));
(*cell1483).s = NULL;
(*cell1483).next = NULL;
F->l1_1481 = cell1483;
}
{ R1001 *cell1484 = rt_alloc(sizeof(R1001));
(*cell1484).s = NULL;
(*cell1484).next = NULL;
F->l2_1482 = cell1484;
}
(*(P1000)rt_nil_check(F->l1_1481)).s = F->lo_1477;
(*(P1000)rt_nil_check(F->l2_1482)).s = F->hi_1478;
(*(P1000)rt_nil_check(F->l1_1481)).next = F->l2_1482;
if ((F->btail_1474 == NULL)) {
(*(P998)rt_nil_check(F->c_263v)).bnds = F->l1_1481;
} else {
(*(P1000)rt_nil_check(F->btail_1474)).next = F->l1_1481;
}
F->btail_1474 = F->l2_1482;
}
F->ix_1471 = (*(P996)rt_nil_check(F->ix_1471)).next;
}
(*(P1002)rt_nil_check(F->t_1464)).ndim = rt_r_ichk(F->k_1472);
}
F->result_ = F->t_1464;
goto ret_;
} else if (0 || (sel1467 == (((rt_int)77LL)))) {
F->t_1464 = f_new_typ_179((((rt_int)16LL)));
{
F->ec_1485 = NULL;
(*(P1002)rt_nil_check(F->t_1464)).elem = f_resolve_subtype_264((*(P996)rt_nil_check(F->st_262)).a, &F->ec_1485);
(*(P1002)rt_nil_check(F->t_1464)).elemcons = F->ec_1485;
if ((((*(P1002)rt_nil_check(f_base_of_219((*(P1002)rt_nil_check(F->t_1464)).elem))).kind != (((rt_int)1LL))) && ((*(P1002)rt_nil_check(f_base_of_219((*(P1002)rt_nil_check(F->t_1464)).elem))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->st_262)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component subtype of a set is an INT or ENUM subtype", 56); b_; }));
}
if ((((*(P1002)rt_nil_check(f_base_of_219((*(P1002)rt_nil_check(F->t_1464)).elem))).kind == (((rt_int)1LL))) && ((F->ec_1485 == NULL) || ((*(P998)rt_nil_check(F->ec_1485)).lo == NULL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->st_262)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SET[INT] needs a range here: a set of every INT cannot be represented", 69); b_; }));
}
}
F->result_ = F->t_1464;
goto ret_;
} else if (0 || (sel1467 == (((rt_int)75LL))) || (sel1467 == (((rt_int)76LL)))) {
if ((rt_r_ichk((*(P996)rt_nil_check(F->st_262)).kind) == (((rt_int)76LL)))) {
F->t_1464 = f_new_typ_179((((rt_int)17LL)));
} else {
F->t_1464 = f_new_typ_179((((rt_int)7LL)));
}
{
F->comp_1486 = NULL;
F->comp_1486 = (*(P996)rt_nil_check(F->st_262)).a;
F->tail_1487 = NULL;
while ((F->comp_1486 != NULL)) {
F->cc_1488 = NULL;
F->f_1489 = NULL;
{ R1005 *cell1490 = rt_alloc(sizeof(R1005));
(*cell1490).name = NULL;
(*cell1490).t = NULL;
(*cell1490).c = NULL;
(*cell1490).st = NULL;
(*cell1490).next = NULL;
F->f_1489 = cell1490;
}
(*(P1004)rt_nil_check(F->f_1489)).name = (*(P996)rt_nil_check(F->comp_1486)).name;
(*(P1004)rt_nil_check(F->f_1489)).t = f_resolve_subtype_264((*(P996)rt_nil_check(F->comp_1486)).a, &F->cc_1488);
(*(P1004)rt_nil_check(F->f_1489)).c = F->cc_1488;
(*(P1004)rt_nil_check(F->f_1489)).st = (*(P996)rt_nil_check(F->comp_1486)).a;
if ((F->tail_1487 == NULL)) {
(*(P1002)rt_nil_check(F->t_1464)).fields = F->f_1489;
} else {
(*(P1004)rt_nil_check(F->tail_1487)).next = F->f_1489;
}
F->tail_1487 = F->f_1489;
F->comp_1486 = (*(P996)rt_nil_check(F->comp_1486)).next;
}
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_1464)).kind) == (((rt_int)17LL)))) {
F->lits_1491 = NULL;
F->ltail_1492 = NULL;
F->f_1493 = NULL;
F->f_1493 = (*(P1002)rt_nil_check(F->t_1464)).fields;
while ((F->f_1493 != NULL)) {
F->l_1494 = NULL;
F->l_1494 = f_nn_61((((rt_int)4LL)), rt_r_ichk((*(P996)rt_nil_check(F->st_262)).line));
if (rt_str_eq((((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_1493)).name))->all), rt_str("TAG", 3))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->st_262)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P996)rt_nil_check(F->l_1494)).name = (*(P1004)rt_nil_check(F->f_1493)).name;
f_append_65(&F->lits_1491, &F->ltail_1492, F->l_1494);
F->f_1493 = (*(P1004)rt_nil_check(F->f_1493)).next;
}
(*(P1002)rt_nil_check(F->t_1464)).elem = f_new_typ_179((((rt_int)4LL)));
(*(P1002)rt_nil_check((*(P1002)rt_nil_check(F->t_1464)).elem)).lits = F->lits_1491;
if (((*(P996)rt_nil_check(F->st_262)).b != NULL)) {
f_tag_constraint_270(F->t_1464, (*(P996)rt_nil_check(F->st_262)).b, F->c_263v);
}
}
F->result_ = F->t_1464;
goto ret_;
} else if (0 || (sel1467 == (((rt_int)79LL)))) {
F->t_1464 = f_new_typ_179((((rt_int)10LL)));
{
F->ec_1495 = NULL;
(*(P1002)rt_nil_check(F->t_1464)).elem = f_resolve_subtype_264((*(P996)rt_nil_check(F->st_262)).a, &F->ec_1495);
(*(P1002)rt_nil_check(F->t_1464)).elemcons = F->ec_1495;
}
(*(P998)rt_nil_check(F->c_263v)).args = (*(P996)rt_nil_check(F->st_262)).b;
F->result_ = F->t_1464;
goto ret_;
} else if (0 || (sel1467 == (((rt_int)78LL)))) {
if (((f_lookup_159(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P1006)rt_nil_check(f_lookup_159(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1496 = NULL;
F->gt_1496 = f_copy_node_821((*(P996)rt_nil_check(F->st_262)).a);
(*(P996)rt_nil_check(F->gt_1496)).next = NULL;
F->result_ = f_instantiate_type_722(f_lookup_159(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1496, (*(P996)rt_nil_check(F->st_262)).b, &F->c_263v, rt_r_ichk((*(P996)rt_nil_check(F->st_262)).line));
goto ret_;
}
{
F->ec_1497 = NULL;
F->t_1464 = f_new_typ_179((((rt_int)12LL)));
(*(P1002)rt_nil_check(F->t_1464)).elem = f_resolve_subtype_264((*(P996)rt_nil_check(F->st_262)).a, &F->ec_1497);
(*(P1002)rt_nil_check(F->t_1464)).elemcons = F->ec_1497;
if (((*(P996)rt_nil_check(F->st_262)).b != NULL)) {
(*(P998)rt_nil_check(F->c_263v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782((*(P996)rt_nil_check(F->st_262)).b, g_ty_int_1076, &F->dummy_1466); b_; }));
}
}
F->result_ = F->t_1464;
goto ret_;
} else if (0 || (sel1467 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_273(F->st_262, &F->c_263v);
goto ret_;
} else if (0 || (sel1467 == (((rt_int)81LL)))) {
{
F->base_1498 = NULL;
F->result_ = f_value_subtype_286((*(P996)rt_nil_check(F->st_262)).a, &F->c_263v, &F->base_1498);
goto ret_;
}
} else {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->st_262)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_263) = F->c_263v;
  RT_FPOP();
  return F->result_;
}

static int f_float_lit_266(P996 e_265) {
  struct f_float_lit_266fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_265 = e_265;
if (((rt_r_ichk((*(P996)rt_nil_check(F->e_265)).kind) == (((rt_int)8LL))) && (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_265)).name))->all), rt_str("-", 1)) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_265)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_266((*(P996)rt_nil_check(F->e_265)).a);
goto ret_;
}
F->result_ = ((rt_r_ichk((*(P996)rt_nil_check(F->e_265)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P996)rt_nil_check(F->e_265)).kind) == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_270(P1002 t_267, P996 e_268, P998 c_269) {
  struct f_tag_constraint_270fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_267 = t_267;
F->e_268 = e_268;
F->c_269 = c_269;
F->dummy_1499 = NULL;
(*(P998)rt_nil_check(F->c_269)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782(F->e_268, (*(P1002)rt_nil_check(F->t_267)).elem, &F->dummy_1499); b_; }));
f_check_type_228(F->dummy_1499, (*(P1002)rt_nil_check(F->t_267)).elem, rt_r_ichk((*(P996)rt_nil_check(F->e_268)).line));
(*(P998)rt_nil_check(F->c_269)).hi = (*(P998)rt_nil_check(F->c_269)).lo;
if ((rt_r_ichk((*(P996)rt_nil_check(F->e_268)).kind) == (((rt_int)4LL)))) {
(*(P998)rt_nil_check(F->c_269)).mlo = f_lit_index_261((*(P1002)rt_nil_check((*(P1002)rt_nil_check(F->t_267)).elem)).lits, &(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_268)).name))->all));
(*(P998)rt_nil_check(F->c_269)).mhi = rt_r_ichk((*(P998)rt_nil_check(F->c_269)).mlo);
(*(P998)rt_nil_check(F->c_269)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P1002 f_named_subtype_273(P996 st_271, P998 *c_272) {
  struct f_named_subtype_273fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_271 = st_271;
F->c_272 = c_272;
F->c_272v = *F->c_272;
F->t_1500 = NULL;
F->y_1501 = NULL;
F->y_1501 = f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->st_271)).name))->all));
F->name_1502 = rt_str_copy((((P989)rt_nil_check((*(P996)rt_nil_check(F->st_271)).name))->all));
F->c_272v = f_new_cons_180();
if (((F->y_1501 == NULL) && ((rt_str_eq(F->name_1502, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1502, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1502, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_291(F->st_271, &F->c_272v);
goto ret_;
}
if ((F->y_1501 == NULL)) {
if (rt_str_eq(F->name_1502, rt_str("BOOL", 4))) {
F->t_1500 = g_ty_bool_1077;
} else if (rt_str_eq(F->name_1502, rt_str("ASCII", 5))) {
F->t_1500 = g_ty_ascii_1079;
} else if (rt_str_eq(F->name_1502, rt_str("DATA_LOCK", 9))) {
F->t_1500 = g_ty_lock_1084;
} else if (rt_str_eq(F->name_1502, rt_str("LATCH", 5))) {
F->t_1500 = g_ty_latch_1085;
} else if (rt_str_eq(F->name_1502, rt_str("ACT", 3))) {
F->t_1500 = g_ty_act_1086;
} else if (rt_str_eq(F->name_1502, rt_str("INT", 3))) {
F->t_1500 = g_ty_int_1076;
} else if (rt_str_eq(F->name_1502, rt_str("SEND_ST", 7))) {
F->t_1500 = g_ty_send_st_1088;
} else if (rt_str_eq(F->name_1502, rt_str("RECEIVE_ST", 10))) {
F->t_1500 = g_ty_receive_st_1089;
} else if (rt_str_eq(F->name_1502, rt_str("FLOAT", 5))) {
F->t_1500 = g_ty_float_1078;
} else {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->st_271)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1502); b_; }));
}
if (((*(P996)rt_nil_check(F->st_271)).b != NULL)) {
f_apply_constraint_282(F->t_1500, (*(P996)rt_nil_check(F->st_271)).b, F->c_272v, rt_r_ichk((*(P996)rt_nil_check(F->st_271)).line));
}
F->result_ = F->t_1500;
goto ret_;
}
if (((rt_r_ichk((*(P1006)rt_nil_check(F->y_1501)).kind) == (((rt_int)10LL))) && ((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_1501)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_1501)).decl)).b)).kind) == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_722(F->y_1501, (*(P996)rt_nil_check(F->st_271)).a, (*(P996)rt_nil_check(F->st_271)).b, &F->c_272v, rt_r_ichk((*(P996)rt_nil_check(F->st_271)).line));
goto ret_;
}
if (((rt_r_ichk((*(P1006)rt_nil_check(F->y_1501)).kind) == (((rt_int)10LL))) && (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_1501)).decl)).b)).kind) == (((rt_int)42LL))))) {
F->binds_1503 = NULL;
F->binds_1503 = f_tt_binds_688((*(P1006)rt_nil_check(F->y_1501)).decl, (*(P996)rt_nil_check((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_1501)).decl)).b)).e, (*(P996)rt_nil_check(F->st_271)).a, rt_r_ichk((*(P996)rt_nil_check(F->st_271)).line));
F->saved_env_1504 = NULL;
F->saved_env_1504 = g_genv_1033;
F->saved_gdepth_1505 = RT_R_IUNDEF;
F->saved_gdepth_1505 = rt_r_ichk(g_gdepth_1065);
f_open_scope_173();
while ((F->binds_1503 != NULL)) {
F->nb_1506 = NULL;
F->nb_1506 = (*(P1006)rt_nil_check(F->binds_1503)).mnext;
f_define_164(F->binds_1503, rt_r_ichk((*(P996)rt_nil_check(F->st_271)).line));
F->binds_1503 = F->nb_1506;
}
g_genv_1033 = (*(P1006)rt_nil_check(F->y_1501)).env;
g_gdepth_1065 = rt_r_ichk(g_depth_1035);
F->t_1500 = f_resolve_subtype_264((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_1501)).decl)).b)).a, &F->c_272v);
g_genv_1033 = F->saved_env_1504;
g_gdepth_1065 = rt_r_ichk(F->saved_gdepth_1505);
f_close_scope_174();
if (((*(P996)rt_nil_check(F->st_271)).b != NULL)) {
F->c_272v = f_copy_cons_202(F->c_272v);
f_apply_constraint_282(F->t_1500, (*(P996)rt_nil_check(F->st_271)).b, F->c_272v, rt_r_ichk((*(P996)rt_nil_check(F->st_271)).line));
}
F->result_ = F->t_1500;
goto ret_;
}
if ((((rt_r_ichk((*(P1006)rt_nil_check(F->y_1501)).kind) == (((rt_int)5LL))) && ((*(P1006)rt_nil_check(F->y_1501)).t != NULL)) && (rt_r_ichk((*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_1501)).t)).kind) == (((rt_int)15LL))))) {
F->result_ = f_new_type_314(F->y_1501, F->st_271, &F->c_272v);
goto ret_;
}
if ((((rt_r_ichk((*(P1006)rt_nil_check(F->y_1501)).kind) == (((rt_int)5LL))) && ((*(P1006)rt_nil_check(F->y_1501)).t != NULL)) && (rt_r_ichk((*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_1501)).t)).kind) == (((rt_int)8LL))))) {
(*(P998)rt_nil_check(F->c_272v)).args = (*(P996)rt_nil_check(F->st_271)).b;
F->result_ = (*(P1006)rt_nil_check(F->y_1501)).t;
goto ret_;
}
if ((((rt_r_ichk((*(P1006)rt_nil_check(F->y_1501)).kind) == (((rt_int)6LL))) && ((*(P1006)rt_nil_check(F->y_1501)).decl != NULL)) && ((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_1501)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_277(F->y_1501, F->st_271, &F->c_272v);
goto ret_;
}
if ((((rt_r_ichk((*(P1006)rt_nil_check(F->y_1501)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_1501)).kind) == (((rt_int)5LL)))) && ((*(P1006)rt_nil_check(F->y_1501)).t != NULL))) {
if (((*(P1006)rt_nil_check(F->y_1501)).c != NULL)) {
F->c_272v = (*(P1006)rt_nil_check(F->y_1501)).c;
}
F->t_1500 = (*(P1006)rt_nil_check(F->y_1501)).t;
} else if ((((rt_r_ichk((*(P1006)rt_nil_check(F->y_1501)).kind) == (((rt_int)5LL))) && ((*(P1006)rt_nil_check(F->y_1501)).decl != NULL)) && (rt_r_ichk((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_1501)).decl)).kind) == (((rt_int)43LL))))) {
F->result_ = f_new_type_314(F->y_1501, F->st_271, &F->c_272v);
goto ret_;
} else if (((rt_r_ichk((*(P1006)rt_nil_check(F->y_1501)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_1501)).kind) == (((rt_int)5LL))))) {
F->t_1500 = f_resolve_subtype_264((*(P1006)rt_nil_check(F->y_1501)).st, &F->c_272v);
} else {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->st_271)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1502, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P996)rt_nil_check(F->st_271)).b != NULL)) {
F->c_272v = f_copy_cons_202(F->c_272v);
f_apply_constraint_282(F->t_1500, (*(P996)rt_nil_check(F->st_271)).b, F->c_272v, rt_r_ichk((*(P996)rt_nil_check(F->st_271)).line));
}
F->result_ = F->t_1500;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_272) = F->c_272v;
  RT_FPOP();
  return F->result_;
}

static P1002 f_invoke_abbrev_277(P1006 y_274, P996 st_275, P998 *c_276) {
  struct f_invoke_abbrev_277fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_274 = y_274;
F->st_275 = st_275;
F->c_276 = c_276;
F->c_276v = *F->c_276;
F->p_1507 = NULL;
F->p_1507 = (*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_274)).decl)).b;
F->a_1508 = NULL;
F->a_1508 = (*(P996)rt_nil_check(F->st_275)).b;
F->t_1509 = NULL;
if ((f_list_len_67(F->p_1507) != f_list_len_67(F->a_1508))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->st_275)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_274)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1507))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_173();
while ((F->p_1507 != NULL)) {
F->z_1510 = NULL;
F->z_1510 = f_new_sym_177((((rt_int)2LL)), (*(P996)rt_nil_check(F->p_1507)).name);
F->pc_1511 = NULL;
F->at_1512 = NULL;
F->ok_1513 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P996)rt_nil_check(F->p_1507)).ival) != (((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->st_275)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P1006)rt_nil_check(F->z_1510)).t = f_resolve_subtype_264((*(P996)rt_nil_check(F->p_1507)).a, &F->pc_1511);
(*(P1006)rt_nil_check(F->z_1510)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_782(F->a_1508, (*(P1006)rt_nil_check(F->z_1510)).t, &F->at_1512)), rt_str(")", 1)); b_; }));
f_check_type_228(F->at_1512, (*(P1006)rt_nil_check(F->z_1510)).t, rt_r_ichk((*(P996)rt_nil_check(F->st_275)).line));
(*(P1006)rt_nil_check(F->z_1510)).mvalue = f_manifest_362(F->a_1508, &F->ok_1513);
(*(P1006)rt_nil_check(F->z_1510)).hasmv = rt_r_echk(F->ok_1513);
(*(P1006)rt_nil_check(F->z_1510)).mv = f_meval_371(F->a_1508, &F->ok_1513);
if ((!rt_r_echk(F->ok_1513))) {
(*(P1006)rt_nil_check(F->z_1510)).mv = NULL;
}
(*(P1006)rt_nil_check(F->z_1510)).ro_flag = 1;
f_define_164(F->z_1510, rt_r_ichk((*(P996)rt_nil_check(F->st_275)).line));
F->p_1507 = (*(P996)rt_nil_check(F->p_1507)).next;
F->a_1508 = (*(P996)rt_nil_check(F->a_1508)).next;
}
F->t_1509 = f_resolve_subtype_264((*(P1006)rt_nil_check(F->y_274)).st, &F->c_276v);
f_close_scope_174();
F->result_ = F->t_1509;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_276) = F->c_276v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_282(P1002 t_278, P996 args_279, P998 c_280, rt_int line_281) {
  struct f_apply_constraint_282fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_278 = t_278;
F->args_279 = args_279;
F->c_280 = c_280;
F->line_281 = line_281;
F->dummy_1514 = NULL;
F->ok_1515 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_278)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_278)).kind) == (((rt_int)4LL))))) {
if (((rt_r_ichk((*(P996)rt_nil_check(F->args_279)).kind) != (((rt_int)16LL))) || ((*(P996)rt_nil_check(F->args_279)).next != NULL))) {
f_fail_23(F->line_281, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P998)rt_nil_check(F->c_280)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782((*(P996)rt_nil_check(F->args_279)).a, F->t_278, &F->dummy_1514); b_; }));
f_check_type_228(F->dummy_1514, F->t_278, F->line_281);
(*(P998)rt_nil_check(F->c_280)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782((*(P996)rt_nil_check(F->args_279)).b, F->t_278, &F->dummy_1514); b_; }));
f_check_type_228(F->dummy_1514, F->t_278, F->line_281);
(*(P998)rt_nil_check(F->c_280)).hasm = 0;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_278)).kind) == (((rt_int)1LL)))) {
(*(P998)rt_nil_check(F->c_280)).mlo = f_manifest_362((*(P996)rt_nil_check(F->args_279)).a, &F->ok_1515);
(*(P998)rt_nil_check(F->c_280)).hasm = rt_r_echk(F->ok_1515);
(*(P998)rt_nil_check(F->c_280)).mhi = f_manifest_362((*(P996)rt_nil_check(F->args_279)).b, &F->ok_1515);
(*(P998)rt_nil_check(F->c_280)).hasm = (rt_r_echk((*(P998)rt_nil_check(F->c_280)).hasm) && rt_r_echk(F->ok_1515));
} else if (((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_279)).a)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_279)).b)).kind) == (((rt_int)4LL))))) {
(*(P998)rt_nil_check(F->c_280)).mlo = f_lit_index_261((*(P1002)rt_nil_check(f_base_of_219(F->t_278))).lits, &(((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_279)).a)).name))->all));
(*(P998)rt_nil_check(F->c_280)).mhi = f_lit_index_261((*(P1002)rt_nil_check(f_base_of_219(F->t_278))).lits, &(((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_279)).b)).name))->all));
(*(P998)rt_nil_check(F->c_280)).hasm = 1;
}
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_278)).kind) == (((rt_int)3LL)))) {
(*(P998)rt_nil_check(F->c_280)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782(F->args_279, g_ty_int_1076, &F->dummy_1514); b_; }));
if (((*(P996)rt_nil_check(F->args_279)).next != NULL)) {
if ((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_279)).next)).kind) != (((rt_int)16LL)))) {
f_fail_23(F->line_281, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P998)rt_nil_check(F->c_280)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_279)).next)).a, g_ty_float_1078, &F->dummy_1514); b_; }));
(*(P998)rt_nil_check(F->c_280)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_279)).next)).b, g_ty_float_1078, &F->dummy_1514); b_; }));
(*(P998)rt_nil_check(F->c_280)).hasm = (f_float_lit_266((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_279)).next)).a) && f_float_lit_266((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_279)).next)).b));
}
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_278)).kind) == (((rt_int)5LL)))) {
(*(P998)rt_nil_check(F->c_280)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782(F->args_279, g_ty_int_1076, &F->dummy_1514); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_278)).kind) == (((rt_int)12LL)))) {
(*(P998)rt_nil_check(F->c_280)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782(F->args_279, g_ty_int_1076, &F->dummy_1514); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_278)).kind) == (((rt_int)17LL)))) {
f_tag_constraint_270(F->t_278, F->args_279, F->c_280);
} else {
f_fail_23(F->line_281, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P1002 f_value_subtype_286(P996 e_283, P998 *c_284, P989 *base_285) {
  struct f_value_subtype_286fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_283 = e_283;
F->c_284 = c_284;
F->c_284v = *F->c_284;
F->base_285 = base_285;
F->base_285v = *F->base_285;
F->t_1516 = NULL;
F->c0_1517 = NULL;
F->ro_1518 = RT_R_EUNDEF;
if (f_is_lvalue_745(F->e_283)) {
f_lvalue_751(F->e_283, &F->base_285v, &F->t_1516, &F->c0_1517, &F->ro_1518);
} else {
F->base_285v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782(F->e_283, NULL, &F->t_1516); b_; }));
}
if ((F->c0_1517 == NULL)) {
F->c_284v = f_new_cons_180();
} else {
F->c_284v = f_copy_cons_202(F->c0_1517);
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_1516)).kind) == (((rt_int)5LL)))) {
(*(P998)rt_nil_check(F->c_284v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P989)rt_nil_check(F->base_285v))->all)), rt_str(").len", 5)); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_1516)).kind) == (((rt_int)6LL)))) {
(*(P998)rt_nil_check(F->c_284v)).bnds = NULL;
{ rt_int lo1520 = ((rt_int)1LL), hi1521 = rt_r_ichk((*(P1002)rt_nil_check(F->t_1516)).ndim);
for (rt_int it1522 = lo1520; it1522 <= hi1521; it1522++) {
F->k_1519 = it1522;
F->lo_1523 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P989)rt_nil_check(F->base_285v))->all)), rt_str(").", 2)), f_dim_lo_238(F->k_1519)));
F->hi_1524 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P989)rt_nil_check(F->base_285v))->all)), rt_str(").", 2)), f_dim_hi_240(F->k_1519)));
if ((F->k_1519 == ((rt_int)1LL))) {
(*(P998)rt_nil_check(F->c_284v)).lo = f_mk_3(&F->lo_1523);
(*(P998)rt_nil_check(F->c_284v)).hi = f_mk_3(&F->hi_1524);
} else if ((F->k_1519 == ((rt_int)2LL))) {
(*(P998)rt_nil_check(F->c_284v)).lo2 = f_mk_3(&F->lo_1523);
(*(P998)rt_nil_check(F->c_284v)).hi2 = f_mk_3(&F->hi_1524);
} else {
F->l1_1525 = NULL;
F->l2_1526 = NULL;
{ R1001 *cell1527 = rt_alloc(sizeof(R1001));
(*cell1527).s = NULL;
(*cell1527).next = NULL;
F->l1_1525 = cell1527;
}
{ R1001 *cell1528 = rt_alloc(sizeof(R1001));
(*cell1528).s = NULL;
(*cell1528).next = NULL;
F->l2_1526 = cell1528;
}
(*(P1000)rt_nil_check(F->l1_1525)).s = f_mk_3(&F->lo_1523);
(*(P1000)rt_nil_check(F->l2_1526)).s = f_mk_3(&F->hi_1524);
(*(P1000)rt_nil_check(F->l1_1525)).next = F->l2_1526;
(*(P1000)rt_nil_check(F->l2_1526)).next = (*(P998)rt_nil_check(F->c_284v)).bnds;
(*(P998)rt_nil_check(F->c_284v)).bnds = F->l1_1525;
}
}
}
(*(P998)rt_nil_check(F->c_284v)).bnds = f_reverse_pairs_288((*(P998)rt_nil_check(F->c_284v)).bnds);
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_1516)).kind) == (((rt_int)12LL)))) {
(*(P998)rt_nil_check(F->c_284v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P989)rt_nil_check(F->base_285v))->all)), rt_str(")->cap", 6)); b_; }));
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_1516)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->t_1516)).tparams != NULL))) {
F->p_1529 = NULL;
F->p_1529 = (*(P1002)rt_nil_check(F->t_1516)).tparams;
F->head_1530 = NULL;
F->tail_1531 = NULL;
while ((F->p_1529 != NULL)) {
F->sel_1532 = NULL;
F->sel_1532 = f_nn_61((((rt_int)11LL)), rt_r_ichk((*(P996)rt_nil_check(F->e_283)).line));
(*(P996)rt_nil_check(F->sel_1532)).a = F->e_283;
(*(P996)rt_nil_check(F->sel_1532)).name = (*(P996)rt_nil_check(F->p_1529)).name;
f_append_65(&F->head_1530, &F->tail_1531, F->sel_1532);
F->p_1529 = (*(P996)rt_nil_check(F->p_1529)).next;
}
(*(P998)rt_nil_check(F->c_284v)).args = F->head_1530;
}
F->result_ = F->t_1516;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_284) = F->c_284v;  (*F->base_285) = F->base_285v;
  RT_FPOP();
  return F->result_;
}

static P1000 f_reverse_pairs_288(P1000 l_287) {
  struct f_reverse_pairs_288fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_287 = l_287;
F->r_1533 = NULL;
F->p_1534 = NULL;
F->p_1534 = F->l_287;
while ((F->p_1534 != NULL)) {
F->a_1535 = NULL;
F->a_1535 = F->p_1534;
F->b_1536 = NULL;
F->b_1536 = (*(P1000)rt_nil_check(F->p_1534)).next;
F->p_1534 = (*(P1000)rt_nil_check(F->b_1536)).next;
(*(P1000)rt_nil_check(F->b_1536)).next = F->r_1533;
F->r_1533 = F->a_1535;
}
F->result_ = F->r_1533;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1002 f_inquiry_291(P996 st_289, P998 *c_290) {
  struct f_inquiry_291fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_289 = st_289;
F->c_290 = c_290;
F->c_290v = *F->c_290;
F->base_1537 = NULL;
F->t_1538 = NULL;
F->name_1539 = rt_str_copy((((P989)rt_nil_check((*(P996)rt_nil_check(F->st_289)).name))->all));
if (((*(P996)rt_nil_check(F->st_289)).b == NULL)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->st_289)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1539, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1539, rt_str("TYPEOF", 6))) {
F->sub_1540 = NULL;
F->sub_1540 = f_as_subtype_293((*(P996)rt_nil_check(F->st_289)).b);
F->c2_1541 = NULL;
if ((F->sub_1540 != NULL)) {
F->t_1538 = f_resolve_subtype_264(F->sub_1540, &F->c2_1541);
} else {
F->t_1538 = f_value_subtype_286((*(P996)rt_nil_check(F->st_289)).b, &F->c2_1541, &F->base_1537);
}
F->c_290v = f_new_cons_180();
F->result_ = F->t_1538;
goto ret_;
}
F->t_1538 = f_value_subtype_286((*(P996)rt_nil_check(F->st_289)).b, &F->c_290v, &F->base_1537);
if (rt_str_eq(F->name_1539, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1538;
goto ret_;
}
{
F->k_1542 = RT_R_IUNDEF;
F->k_1542 = ((rt_int)1LL);
F->ok_1543 = RT_R_EUNDEF;
F->ok_1543 = 1;
F->ac_1544 = NULL;
F->ac_1544 = F->c_290v;
if (((*(P996)rt_nil_check((*(P996)rt_nil_check(F->st_289)).b)).next != NULL)) {
F->k_1542 = f_manifest_362((*(P996)rt_nil_check((*(P996)rt_nil_check(F->st_289)).b)).next, &F->ok_1543);
}
while (((rt_r_ichk((*(P1002)rt_nil_check(F->t_1538)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->t_1538)).tparams == NULL))) {
F->t_1538 = (*(P1002)rt_nil_check(F->t_1538)).under;
}
if (((((rt_r_ichk((*(P1002)rt_nil_check(F->t_1538)).kind) != (((rt_int)6LL))) || (!rt_r_echk(F->ok_1543))) || (rt_r_ichk(F->k_1542) < ((rt_int)1LL))) || (rt_r_ichk(F->k_1542) > rt_r_ichk((*(P1002)rt_nil_check(F->t_1538)).ndim)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->st_289)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_290v = f_new_cons_180();
(*(P998)rt_nil_check(F->c_290v)).lo = f_cons_lo_248(F->ac_1544, rt_r_ichk(F->k_1542));
(*(P998)rt_nil_check(F->c_290v)).hi = f_cons_hi_251(F->ac_1544, rt_r_ichk(F->k_1542));
F->result_ = f_idx_type_254(F->t_1538, rt_r_ichk(F->k_1542));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_290) = F->c_290v;
  RT_FPOP();
  return F->result_;
}

static P996 f_as_subtype_293(P996 e_292) {
  struct f_as_subtype_293fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_292 = e_292;
F->st_1545 = NULL;
if ((F->e_292 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_292)).kind) == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_293((*(P996)rt_nil_check(F->e_292)).a);
goto ret_;
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_292)).kind) == (((rt_int)7LL)))) {
if ((!f_type_name_300(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_292)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1545 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P996)rt_nil_check(F->e_292)).line));
(*(P996)rt_nil_check(F->st_1545)).name = (*(P996)rt_nil_check(F->e_292)).name;
F->result_ = F->st_1545;
goto ret_;
} else if (((rt_r_ichk((*(P996)rt_nil_check(F->e_292)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_298((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).a)).name, (*(P996)rt_nil_check(F->e_292)).b, NULL, rt_r_ichk((*(P996)rt_nil_check(F->e_292)).line));
goto ret_;
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_292)).kind) != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).a)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).a)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_298((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).a)).a)).name, (*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).a)).b, (*(P996)rt_nil_check(F->e_292)).b, rt_r_ichk((*(P996)rt_nil_check(F->e_292)).line));
goto ret_;
} else if ((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).a)).kind) != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1546 = rt_str_copy((((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).a)).name))->all));
F->y_1547 = NULL;
F->y_1547 = f_lookup_159(&F->name_1546);
if ((rt_str_eq(F->name_1546, rt_str("INT", 3)) && (F->y_1547 == NULL))) {
if (((((*(P996)rt_nil_check(F->e_292)).b == NULL) || (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).b)).kind) != (((rt_int)16LL)))) || ((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1545 = f_nn_61((((rt_int)70LL)), rt_r_ichk((*(P996)rt_nil_check(F->e_292)).line));
(*(P996)rt_nil_check(F->st_1545)).a = (*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).b)).a;
(*(P996)rt_nil_check(F->st_1545)).b = (*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).b)).b;
F->result_ = F->st_1545;
goto ret_;
} else if ((rt_str_eq(F->name_1546, rt_str("FLOAT", 5)) && (F->y_1547 == NULL))) {
F->st_1545 = f_nn_61((((rt_int)71LL)), rt_r_ichk((*(P996)rt_nil_check(F->e_292)).line));
(*(P996)rt_nil_check(F->st_1545)).a = (*(P996)rt_nil_check(F->e_292)).b;
if ((((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).b)).next != NULL) && (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).b)).next)).kind) == (((rt_int)16LL))))) {
(*(P996)rt_nil_check(F->st_1545)).b = (*(P996)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).b)).next)).a;
(*(P996)rt_nil_check(F->st_1545)).c = (*(P996)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).b)).next)).b;
}
F->result_ = F->st_1545;
goto ret_;
} else if (((!f_type_name_300(&F->name_1546)) && (!((F->y_1547 == NULL) && ((rt_str_eq(F->name_1546, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1546, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1546, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1545 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P996)rt_nil_check(F->e_292)).line));
(*(P996)rt_nil_check(F->st_1545)).name = (*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_292)).a)).name;
(*(P996)rt_nil_check(F->st_1545)).b = (*(P996)rt_nil_check(F->e_292)).b;
(*(P996)rt_nil_check(F->st_1545)).flag = ((rt_int)1LL);
F->result_ = F->st_1545;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_tt_subtype_298(P989 name_294, P996 tt_295, P996 args_296, rt_int line_297) {
  struct f_tt_subtype_298fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_294 = name_294;
F->tt_295 = tt_295;
F->args_296 = args_296;
F->line_297 = line_297;
F->st_1548 = NULL;
if (rt_str_eq((((P989)rt_nil_check(F->name_294))->all), rt_str("STRING", 6))) {
F->st_1548 = f_nn_61((((rt_int)73LL)), F->line_297);
} else if (rt_str_eq((((P989)rt_nil_check(F->name_294))->all), rt_str("SET", 3))) {
F->st_1548 = f_nn_61((((rt_int)77LL)), F->line_297);
} else if ((rt_str_eq((((P989)rt_nil_check(F->name_294))->all), rt_str("MAILBOX", 7)) && ((f_lookup_159(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P1006)rt_nil_check(f_lookup_159(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1548 = f_nn_61((((rt_int)78LL)), F->line_297);
} else if (rt_str_eq((((P989)rt_nil_check(F->name_294))->all), rt_str("FILE", 4))) {
F->st_1548 = f_nn_61((((rt_int)79LL)), F->line_297);
} else if (f_type_name_300(&(((P989)rt_nil_check(F->name_294))->all))) {
F->st_1548 = f_nn_61((((rt_int)80LL)), F->line_297);
(*(P996)rt_nil_check(F->st_1548)).name = F->name_294;
(*(P996)rt_nil_check(F->st_1548)).a = F->tt_295;
(*(P996)rt_nil_check(F->st_1548)).b = F->args_296;
F->result_ = F->st_1548;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P996)rt_nil_check(F->st_1548)).a = F->tt_295;
(*(P996)rt_nil_check(F->st_1548)).b = F->args_296;
F->result_ = F->st_1548;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_name_300(rstr *name_299) {
  struct f_type_name_300fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_299 = name_299;
F->y_1549 = NULL;
F->y_1549 = f_lookup_159(&(*F->name_299));
if ((F->y_1549 == NULL)) {
F->result_ = ((((((((rt_str_eq((*F->name_299), rt_str("INT", 3)) || rt_str_eq((*F->name_299), rt_str("BOOL", 4))) || rt_str_eq((*F->name_299), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_299), rt_str("ASCII", 5))) || rt_str_eq((*F->name_299), rt_str("ACT", 3))) || rt_str_eq((*F->name_299), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_299), rt_str("LATCH", 5))) || rt_str_eq((*F->name_299), rt_str("SEND_ST", 7))) || rt_str_eq((*F->name_299), rt_str("RECEIVE_ST", 10)));
goto ret_;
}
F->result_ = (((rt_r_ichk((*(P1006)rt_nil_check(F->y_1549)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_1549)).kind) == (((rt_int)6LL)))) || ((rt_r_ichk((*(P1006)rt_nil_check(F->y_1549)).kind) == (((rt_int)10LL))) && (((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_1549)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_1549)).decl)).b)).kind) == (((rt_int)44LL)))) || (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_1549)).decl)).b)).kind) == (((rt_int)42LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_empty_set_302(P1002 t_301) {
  struct f_empty_set_302fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_301 = t_301;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_new(", 10), f_sub_lo_194(f_base_of_219((*(P1002)rt_nil_check(F->t_301)).elem), f_base_cons_222((*(P1002)rt_nil_check(F->t_301)).elem, (*(P1002)rt_nil_check(F->t_301)).elemcons))), rt_str(", ", 2)), f_sub_hi_197(f_base_of_219((*(P1002)rt_nil_check(F->t_301)).elem), f_base_cons_222((*(P1002)rt_nil_check(F->t_301)).elem, (*(P1002)rt_nil_check(F->t_301)).elemcons))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_304(P1002 t_303) {
  struct f_opened_304fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_303 = t_303;
F->c_1550 = NULL;
F->c_1550 = g_caps_1051;
if ((((rt_r_ichk((*(P1002)rt_nil_check(F->t_303)).kind) != (((rt_int)15LL))) || ((*(P1002)rt_nil_check(F->t_303)).ocap == NULL)) || (rt_r_ichk((*(P996)rt_nil_check((*(P1002)rt_nil_check(F->t_303)).ocap)).ival) == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1550 != NULL)) {
if (((*(P1023)rt_nil_check(F->c_1550)).d == (*(P1002)rt_nil_check(F->t_303)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1550 = (*(P1023)rt_nil_check(F->c_1550)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_replace_all_308(rstr *s_305, rstr *pat_306, rstr *r_307) {
  struct f_replace_all_308fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_305 = s_305;
F->pat_306 = pat_306;
F->r_307 = r_307;
F->i_1551 = RT_R_IUNDEF;
F->i_1551 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_306)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_305)).len)) < ((rt_int)(((*F->pat_306)).len))))) {
F->result_ = (*F->s_305);
goto ret_;
}
while ((rt_sub(rt_add(rt_r_ichk(F->i_1551), ((rt_int)(((*F->pat_306)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_305)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_305), rt_r_ichk(F->i_1551), rt_sub(rt_add(rt_r_ichk(F->i_1551), ((rt_int)(((*F->pat_306)).len))), ((rt_int)1LL))), (*F->pat_306))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_305), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1551), ((rt_int)1LL))), (*F->r_307)), f_replace_all_308(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_305), rt_add(rt_r_ichk(F->i_1551), ((rt_int)(((*F->pat_306)).len))), ((rt_int)(((*F->s_305)).len))); b_; }), &(*F->pat_306), &(*F->r_307)));
goto ret_;
}
F->i_1551 = rt_add(rt_r_ichk(F->i_1551), ((rt_int)1LL));
}
F->result_ = (*F->s_305);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_subst_310(rstr *s_309) {
  struct f_subst_310fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_309 = s_309;
F->l_1552 = NULL;
F->l_1552 = g_psub_1053;
F->r_1553 = NULL;
F->r_1553 = f_mk_3(&(*F->s_309));
while ((F->l_1552 != NULL)) {
F->r_1553 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_308(&(((P989)rt_nil_check(F->r_1553))->all), &(((P989)rt_nil_check((*(P1000)rt_nil_check(F->l_1552)).s))->all), &(((P989)rt_nil_check((*(P1000)rt_nil_check((*(P1000)rt_nil_check(F->l_1552)).next)).s))->all)); b_; }));
F->l_1552 = (*(P1000)rt_nil_check((*(P1000)rt_nil_check(F->l_1552)).next)).next;
}
F->result_ = (((P989)rt_nil_check(F->r_1553))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1002 f_new_type_314(P1006 y_311, P996 st_312, P998 *c_313) {
  struct f_new_type_314fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_311 = y_311;
F->st_312 = st_312;
F->c_313 = c_313;
F->c_313v = *F->c_313;
F->d_1554 = NULL;
F->d_1554 = (*(P1006)rt_nil_check(F->y_311)).decl;
F->p_1555 = NULL;
F->uc_1556 = NULL;
F->c_313v = f_new_cons_180();
if (((*(P1006)rt_nil_check(F->y_311)).t == NULL)) {
(*(P1006)rt_nil_check(F->y_311)).t = f_new_typ_179((((rt_int)15LL)));
(*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_311)).t)).name = (*(P1006)rt_nil_check(F->y_311)).name;
(*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_311)).t)).decl = F->d_1554;
(*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_311)).t)).tparams = (*(P996)rt_nil_check(F->d_1554)).b;
if ((g_caps_1051 != NULL)) {
(*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_311)).t)).ocap = (*(P1023)rt_nil_check(g_caps_1051)).d;
}
f_open_scope_173();
F->p_1555 = (*(P996)rt_nil_check(F->d_1554)).b;
while ((F->p_1555 != NULL)) {
F->z_1557 = NULL;
F->z_1557 = f_new_sym_177((((rt_int)2LL)), (*(P996)rt_nil_check(F->p_1555)).name);
F->zc_1558 = NULL;
(*(P1006)rt_nil_check(F->z_1557)).t = f_resolve_subtype_264((*(P996)rt_nil_check(F->p_1555)).a, &F->zc_1558);
(*(P1006)rt_nil_check(F->z_1557)).mnext = (*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_311)).t)).tpsyms;
(*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_311)).t)).tpsyms = F->z_1557;
(*(P1006)rt_nil_check(F->z_1557)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1555)).name))->all))), rt_str("@", 1)); b_; }));
f_define_164(F->z_1557, rt_r_ichk((*(P996)rt_nil_check(F->d_1554)).line));
F->p_1555 = (*(P996)rt_nil_check(F->p_1555)).next;
}
(*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_311)).t)).under = f_resolve_subtype_264((*(P996)rt_nil_check(F->d_1554)).a, &F->uc_1556);
(*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_311)).t)).elemcons = F->uc_1556;
if (((*(P996)rt_nil_check(F->d_1554)).c != NULL)) {
f_check_rep_328((*(P996)rt_nil_check(F->d_1554)).c, (*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_311)).t)).under, F->uc_1556, 1, 0, F->d_1554);
(*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_311)).t)).repn = (*(P996)rt_nil_check(F->d_1554)).c;
}
f_close_scope_174();
}
(*(P998)rt_nil_check(F->c_313v)).args = (*(P996)rt_nil_check(F->st_312)).b;
F->result_ = (*(P1006)rt_nil_check(F->y_311)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_313) = F->c_313v;
  RT_FPOP();
  return F->result_;
}

static rt_int f_needed_bits_317(P1002 t_315, P998 c_316) {
  struct f_needed_bits_317fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_315 = t_315;
F->c_316 = c_316;
F->n_1559 = RT_R_IUNDEF;
F->n_1559 = ((rt_int)0LL);
F->v_1560 = RT_R_IUNDEF;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_315)).kind) == (((rt_int)2LL)))) {
F->result_ = ((rt_int)1LL);
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_315)).kind) == (((rt_int)4LL)))) {
F->v_1560 = rt_sub(f_list_len_67((*(P1002)rt_nil_check(F->t_315)).lits), ((rt_int)1LL));
if (((F->c_316 != NULL) && rt_r_echk((*(P998)rt_nil_check(F->c_316)).hasm))) {
F->v_1560 = rt_r_ichk((*(P998)rt_nil_check(F->c_316)).mhi);
}
} else if ((((rt_r_ichk((*(P1002)rt_nil_check(F->t_315)).kind) == (((rt_int)1LL))) && (F->c_316 != NULL)) && rt_r_echk((*(P998)rt_nil_check(F->c_316)).hasm))) {
if ((rt_r_ichk((*(P998)rt_nil_check(F->c_316)).mlo) < ((rt_int)0LL))) {
F->v_1560 = rt_r_ichk((*(P998)rt_nil_check(F->c_316)).mhi);
if ((rt_sub(rt_neg(rt_r_ichk((*(P998)rt_nil_check(F->c_316)).mlo)), ((rt_int)1LL)) > rt_r_ichk(F->v_1560))) {
F->v_1560 = rt_sub(rt_neg(rt_r_ichk((*(P998)rt_nil_check(F->c_316)).mlo)), ((rt_int)1LL));
}
F->n_1559 = ((rt_int)1LL);
} else {
F->v_1560 = rt_r_ichk((*(P998)rt_nil_check(F->c_316)).mhi);
}
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_315)).kind) == (((rt_int)1LL)))) {
F->result_ = ((rt_int)64LL);
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_315)).kind) == (((rt_int)3LL)))) {
if (((((F->c_316 != NULL) && ((*(P998)rt_nil_check(F->c_316)).prec != NULL)) && f_has_digits_only_319(&(((P989)rt_nil_check((*(P998)rt_nil_check(F->c_316)).prec))->all))) && (rt_int_of_str((((P989)rt_nil_check((*(P998)rt_nil_check(F->c_316)).prec))->all)) <= ((rt_int)6LL)))) {
F->result_ = ((rt_int)32LL);
goto ret_;
}
F->result_ = ((rt_int)64LL);
goto ret_;
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
while ((rt_r_ichk(F->v_1560) > ((rt_int)0LL))) {
F->n_1559 = rt_add(rt_r_ichk(F->n_1559), ((rt_int)1LL));
F->v_1560 = rt_div(rt_r_ichk(F->v_1560), ((rt_int)2LL));
}
if ((rt_r_ichk(F->n_1559) == ((rt_int)0LL))) {
F->n_1559 = ((rt_int)1LL);
}
F->result_ = rt_r_ichk(F->n_1559);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_digits_only_319(rstr *s_318) {
  struct f_has_digits_only_319fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_318 = s_318;
if ((((rt_int)(((*F->s_318)).len)) == ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1562 = ((rt_int)1LL), hi1563 = ((rt_int)(((*F->s_318)).len));
for (rt_int it1564 = lo1562; it1564 <= hi1563; it1564++) {
F->i_1561 = it1564;
if ((!f_is_digit_11(rt_r_echk(rt_str_get((*F->s_318), F->i_1561))))) {
F->result_ = 0;
goto ret_;
}
}
}
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_built_in_only_321(P1002 t_320) {
  struct f_built_in_only_321fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_320 = t_320;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_320)).kind) == (((rt_int)15LL)))) {
F->result_ = ((*(P1002)rt_nil_check(F->t_320)).repn != NULL);
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_320)).kind) == (((rt_int)8LL)))) {
F->result_ = 0;
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_320)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_320)).kind) == (((rt_int)17LL))))) {
F->f_1565 = NULL;
F->f_1565 = (*(P1002)rt_nil_check(F->t_320)).fields;
while ((F->f_1565 != NULL)) {
if ((!f_built_in_only_321((*(P1004)rt_nil_check(F->f_1565)).t))) {
F->result_ = 0;
goto ret_;
}
F->f_1565 = (*(P1004)rt_nil_check(F->f_1565)).next;
}
} else if ((((rt_r_ichk((*(P1002)rt_nil_check(F->t_320)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_320)).kind) == (((rt_int)16LL)))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_320)).kind) == (((rt_int)5LL))))) {
F->result_ = (((*(P1002)rt_nil_check(F->t_320)).elem == NULL) || f_built_in_only_321((*(P1002)rt_nil_check(F->t_320)).elem));
goto ret_;
}
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_rep_328(P996 items_322, P1002 t_323, P998 c_324, int top_325, int indirect_326, P996 d_327) {
  struct f_check_rep_328fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_322 = items_322;
F->t_323 = t_323;
F->c_324 = c_324;
F->top_325 = top_325;
F->indirect_326 = indirect_326;
F->d_327 = d_327;
F->it_1566 = NULL;
F->it_1566 = F->items_322;
F->ok_1567 = RT_R_EUNDEF;
F->at_1568 = NULL;
if (((F->top_325 && (!F->indirect_326)) && (!f_built_in_only_321(F->t_323)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->d_327)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only built-in types may underlie a representation", 49); b_; }));
}
while ((F->it_1566 != NULL)) {
F->w_1569 = rt_str_copy((((P989)rt_nil_check((*(P996)rt_nil_check(F->it_1566)).name))->all));
if (rt_str_eq(F->w_1569, rt_str("SIZE", 4))) {
F->v_1570 = RT_R_IUNDEF;
F->v_1570 = f_manifest_362((*(P996)rt_nil_check(F->it_1566)).a, &F->ok_1567);
F->dummy_1571 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->it_1566)).a, g_ty_int_1076, &F->at_1568));
f_check_type_228(F->at_1568, g_ty_int_1076, rt_r_ichk((*(P996)rt_nil_check(F->it_1566)).line));
if ((rt_r_echk(F->ok_1567) && (rt_r_ichk(F->v_1570) < ((rt_int)0LL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->it_1566)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a SIZE is not negative", 22); b_; }));
} else if (((rt_r_echk(F->ok_1567) && (f_needed_bits_317(F->t_323, F->c_324) > rt_r_ichk(F->v_1570))) && (!F->indirect_326))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->it_1566)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("SIZE(", 5), f_itos_7(rt_r_ichk(F->v_1570))), rt_str(") is too small for this subtype, which needs ", 45)), f_itos_7(f_needed_bits_317(F->t_323, F->c_324))), rt_str(" bits", 5)); b_; }));
}
} else if (rt_str_eq(F->w_1569, rt_str("ALIGN", 5))) {
F->m_1572 = RT_R_IUNDEF;
F->m_1572 = f_manifest_362((*(P996)rt_nil_check(F->it_1566)).a, &F->ok_1567);
if ((!F->top_325)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->it_1566)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALIGN is for the whole underlying subtype only", 46); b_; }));
}
if ((rt_r_echk(F->ok_1567) && (rt_r_ichk(F->m_1572) <= ((rt_int)0LL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->it_1566)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the modulus of ALIGN is greater than zero", 41); b_; }));
}
if ((rt_r_echk(F->ok_1567) && ((*(P996)rt_nil_check(F->it_1566)).b != NULL))) {
F->ok2_1573 = RT_R_EUNDEF;
F->r_1574 = RT_R_IUNDEF;
F->r_1574 = f_manifest_362((*(P996)rt_nil_check(F->it_1566)).b, &F->ok2_1573);
if ((rt_r_echk(F->ok2_1573) && ((rt_r_ichk(F->r_1574) < ((rt_int)0LL)) || (rt_r_ichk(F->r_1574) >= rt_r_ichk(F->m_1572))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->it_1566)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALIGN(e1 OF e2) needs e1 in 0 .. e2 - 1", 39); b_; }));
}
}
} else if (rt_str_eq(F->w_1569, rt_str("OFFSET", 6))) {
F->o_1575 = RT_R_IUNDEF;
F->o_1575 = f_manifest_362((*(P996)rt_nil_check(F->it_1566)).a, &F->ok_1567);
if (F->top_325) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->it_1566)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET is for components of records and unions only", 51); b_; }));
} else if ((rt_r_echk(F->ok_1567) && (rt_r_ichk(F->o_1575) < ((rt_int)0LL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->it_1566)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an OFFSET is not negative", 25); b_; }));
}
} else if ((rt_str_eq(F->w_1569, rt_str("RECORD", 6)) || rt_str_eq(F->w_1569, rt_str("UNION", 5)))) {
F->comp_1576 = NULL;
F->comp_1576 = (*(P996)rt_nil_check(F->it_1566)).c;
if (((rt_str_eq(F->w_1569, rt_str("RECORD", 6)) && (rt_r_ichk((*(P1002)rt_nil_check(F->t_323)).kind) != (((rt_int)7LL)))) || (rt_str_eq(F->w_1569, rt_str("UNION", 5)) && (rt_r_ichk((*(P1002)rt_nil_check(F->t_323)).kind) != (((rt_int)17LL)))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->it_1566)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->w_1569, rt_str(" is a representation for ", 25)), F->w_1569), rt_str(" types only", 11)); b_; }));
}
while ((F->comp_1576 != NULL)) {
F->f_1577 = NULL;
F->f_1577 = (*(P1002)rt_nil_check(F->t_323)).fields;
while (((F->f_1577 != NULL) && (!rt_str_eq((((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_1577)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->comp_1576)).name))->all))))) {
F->f_1577 = (*(P1004)rt_nil_check(F->f_1577)).next;
}
if ((F->f_1577 != NULL)) {
f_check_rep_328((*(P996)rt_nil_check(F->comp_1576)).a, (*(P1004)rt_nil_check(F->f_1577)).t, (*(P1004)rt_nil_check(F->f_1577)).c, 0, 0, F->d_327);
} else if (((!(rt_str_eq(F->w_1569, rt_str("UNION", 5)) && rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->comp_1576)).name))->all), rt_str("TAG", 3)))) && (!(F->top_325 && f_formal_named_331(F->d_327, &(((P989)rt_nil_check((*(P996)rt_nil_check(F->comp_1576)).name))->all)))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->comp_1576)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->comp_1576)).name))->all), rt_str(" is not a component", 19)); b_; }));
}
F->comp_1576 = (*(P996)rt_nil_check(F->comp_1576)).next;
}
} else if (rt_str_eq(F->w_1569, rt_str("ARRAY", 5))) {
F->k_1578 = NULL;
F->k_1578 = (*(P996)rt_nil_check(F->it_1566)).d;
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_323)).kind) != (((rt_int)6LL))) || (f_list_len_67((*(P996)rt_nil_check(F->it_1566)).d) != rt_r_ichk((*(P1002)rt_nil_check(F->t_323)).ndim)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->it_1566)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ARRAY names NORMAL or NOBOUNDS for each index of an array", 57); b_; }));
}
while ((F->k_1578 != NULL)) {
if (((!rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->k_1578)).name))->all), rt_str("NORMAL", 6))) && (!rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->k_1578)).name))->all), rt_str("NOBOUNDS", 8))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->k_1578)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NORMAL or NOBOUNDS expected", 27); b_; }));
}
F->k_1578 = (*(P996)rt_nil_check(F->k_1578)).next;
}
f_check_rep_328((*(P996)rt_nil_check(F->it_1566)).c, (*(P1002)rt_nil_check(F->t_323)).elem, (*(P1002)rt_nil_check(F->t_323)).elemcons, 0, 0, F->d_327);
} else if (rt_str_eq(F->w_1569, rt_str("ENUM", 4))) {
if ((((rt_r_ichk((*(P1002)rt_nil_check(F->t_323)).kind) != (((rt_int)4LL))) || ((*(P996)rt_nil_check(F->it_1566)).d == NULL)) || (!rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->it_1566)).d)).name))->all), rt_str("STANDARD", 8))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->it_1566)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ENUM(STANDARD) is for enumeration subtypes", 42); b_; }));
}
} else if (rt_str_eq(F->w_1569, rt_str("PTR", 3))) {
if ((((((!F->indirect_326) || (!F->top_325)) || ((*(P996)rt_nil_check(F->it_1566)).d == NULL)) || (!rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->it_1566)).d)).name))->all), rt_str("FREE", 4)))) || (((*(P996)rt_nil_check((*(P996)rt_nil_check(F->it_1566)).d)).next != NULL) && (!rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->it_1566)).d)).next)).name))->all), rt_str("UNCHECKED", 9)))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->it_1566)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR(FREE) or PTR(FREE UNCHECKED) is for indirect types", 54); b_; }));
}
} else if (rt_str_eq(F->w_1569, rt_str("ABSENT", 6))) {
F->a_1579 = NULL;
F->a_1579 = (*(P996)rt_nil_check(F->it_1566)).d;
if ((!F->top_325)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->it_1566)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABSENT is for the whole type", 28); b_; }));
}
while ((F->a_1579 != NULL)) {
if ((!f_formal_named_331(F->d_327, &(((P989)rt_nil_check((*(P996)rt_nil_check(F->a_1579)).name))->all)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->a_1579)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->a_1579)).name))->all), rt_str(" is not a formal parameter of the type", 38)); b_; }));
}
F->a_1579 = (*(P996)rt_nil_check(F->a_1579)).next;
}
}
F->it_1566 = (*(P996)rt_nil_check(F->it_1566)).next;
}
ret_:
  RT_FPOP();
  return;
}

static int f_formal_named_331(P996 d_329, rstr *name_330) {
  struct f_formal_named_331fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_329 = d_329;
F->name_330 = name_330;
F->p_1580 = NULL;
F->p_1580 = (*(P996)rt_nil_check(F->d_329)).b;
while ((F->p_1580 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1580)).name))->all), (*F->name_330))) {
F->result_ = 1;
goto ret_;
}
F->p_1580 = (*(P996)rt_nil_check(F->p_1580)).next;
}
F->p_1580 = (*(P996)rt_nil_check(F->d_329)).d;
if ((rt_r_ichk((*(P996)rt_nil_check(F->d_329)).kind) == (((rt_int)44LL)))) {
while ((F->p_1580 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1580)).name))->all), (*F->name_330))) {
F->result_ = 1;
goto ret_;
}
F->p_1580 = (*(P996)rt_nil_check(F->p_1580)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_unchecked_free_333(P1002 t_332) {
  struct f_unchecked_free_333fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_332 = t_332;
F->it_1581 = NULL;
if ((((*(P1002)rt_nil_check(F->t_332)).decl == NULL) || (rt_r_ichk((*(P996)rt_nil_check((*(P1002)rt_nil_check(F->t_332)).decl)).kind) != (((rt_int)44LL))))) {
F->result_ = 0;
goto ret_;
}
F->it_1581 = (*(P996)rt_nil_check((*(P1002)rt_nil_check(F->t_332)).decl)).c;
while ((F->it_1581 != NULL)) {
if (((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->it_1581)).name))->all), rt_str("PTR", 3)) && ((*(P996)rt_nil_check(F->it_1581)).d != NULL)) && ((*(P996)rt_nil_check((*(P996)rt_nil_check(F->it_1581)).d)).next != NULL))) {
F->result_ = 1;
goto ret_;
}
F->it_1581 = (*(P996)rt_nil_check(F->it_1581)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_337(rstr *lval_334, P1002 t_335, P998 c_336) {
  struct f_init_storage_337fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_334 = lval_334;
F->t_335 = t_335;
F->c_336 = c_336;
f_make_storage_352(&(*F->lval_334), F->t_335, F->c_336);
if (((*(P1002)rt_nil_check(F->t_335)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_340((*(P1002)rt_nil_check(F->t_335)).initp, &(*F->lval_334)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_340(P1006 y_338, rstr *lval_339) {
  struct f_init_call_340fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_338 = y_338;
F->lval_339 = lval_339;
F->link_1582 = NULL;
F->link_1582 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P1006)rt_nil_check(F->y_338)).level) > ((rt_int)0LL))) {
F->link_1582 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1584 = ((rt_int)1LL), hi1585 = rt_sub(rt_r_ichk(g_cur_level_1049), rt_r_ichk((*(P1006)rt_nil_check(F->y_338)).level));
for (rt_int it1586 = lo1584; it1586 <= hi1585; it1586++) {
F->i_1583 = it1586;
F->link_1582 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->link_1582))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1582 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->link_1582))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_338)).cname))->all), rt_str("(", 1)), (((P989)rt_nil_check(F->link_1582))->all)), rt_str("&", 1)), (*F->lval_339)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_342(P1002 t_341) {
  struct f_needs_fin_342fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_341 = t_341;
if ((F->t_341 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P1002)rt_nil_check(F->t_341)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_341)).kind) == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_342((*(P1002)rt_nil_check(F->t_341)).under);
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_341)).kind) == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_342((*(P1002)rt_nil_check(F->t_341)).elem);
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_341)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_341)).kind) == (((rt_int)17LL))))) {
F->f_1587 = NULL;
F->f_1587 = (*(P1002)rt_nil_check(F->t_341)).fields;
while ((F->f_1587 != NULL)) {
if (f_needs_fin_342((*(P1004)rt_nil_check(F->f_1587)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1587 = (*(P1004)rt_nil_check(F->f_1587)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_345(rstr *lval_343, P1002 t_344) {
  struct f_fin_code_345fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_343 = lval_343;
F->t_344 = t_344;
F->r_1588 = NULL;
F->r_1588 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1002)rt_nil_check(F->t_344)).finalp != NULL)) {
F->r_1588 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_340((*(P1002)rt_nil_check(F->t_344)).finalp, &(*F->lval_343)), rt_str(" ", 1)); b_; }));
}
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_344)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->t_344)).tparams == NULL))) {
F->result_ = rt_str_cat((((P989)rt_nil_check(F->r_1588))->all), f_fin_code_345(&(*F->lval_343), (*(P1002)rt_nil_check(F->t_344)).under));
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_344)).kind) == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P989)rt_nil_check(F->r_1588))->all), f_fin_code_345(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_343), rt_str(".all", 4)); b_; }), (*(P1002)rt_nil_check(F->t_344)).under));
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_344)).kind) == (((rt_int)6LL))) && f_needs_fin_342((*(P1002)rt_nil_check(F->t_344)).elem))) {
F->i_1589 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_1588))->all), rt_str("for (rt_int ", 12)), F->i_1589), rt_str(" = 0; ", 6)), F->i_1589), rt_str(" < ", 3)), f_acnt_245(F->t_344, &(*F->lval_343))), rt_str("; ", 2)), F->i_1589), rt_str("++) { ", 6)), f_fin_code_345(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_343), rt_str(".p[", 3)), F->i_1589), rt_str("]", 1)); b_; }), (*(P1002)rt_nil_check(F->t_344)).elem)), rt_str(" }", 2));
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_344)).kind) == (((rt_int)7LL)))) {
F->f_1590 = NULL;
F->f_1590 = (*(P1002)rt_nil_check(F->t_344)).fields;
while ((F->f_1590 != NULL)) {
if (f_needs_fin_342((*(P1004)rt_nil_check(F->f_1590)).t)) {
F->r_1588 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_1588))->all), f_fin_code_345(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_343), rt_str(".", 1)), f_field_c_17(&(((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_1590)).name))->all))); b_; }), (*(P1004)rt_nil_check(F->f_1590)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1590 = (*(P1004)rt_nil_check(F->f_1590)).next;
}
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_344)).kind) == (((rt_int)17LL)))) {
F->f_1591 = NULL;
F->f_1591 = (*(P1002)rt_nil_check(F->t_344)).fields;
F->i_1592 = RT_R_IUNDEF;
F->i_1592 = ((rt_int)0LL);
F->r_1588 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_1588))->all), rt_str("switch (", 8)), (*F->lval_343)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1591 != NULL)) {
if (f_needs_fin_342((*(P1004)rt_nil_check(F->f_1591)).t)) {
F->r_1588 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_1588))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1592))), rt_str(": ", 2)), f_fin_code_345(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_343), rt_str(".u.", 3)), f_field_c_17(&(((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_1591)).name))->all))); b_; }), (*(P1004)rt_nil_check(F->f_1591)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1592 = rt_add(rt_r_ichk(F->i_1592), ((rt_int)1LL));
F->f_1591 = (*(P1004)rt_nil_check(F->f_1591)).next;
}
F->r_1588 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_1588))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P989)rt_nil_check(F->r_1588))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1002 f_tparam_type_348(P1002 t_346, rstr *name_347) {
  struct f_tparam_type_348fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_346 = t_346;
F->name_347 = name_347;
F->z_1593 = NULL;
F->z_1593 = (*(P1002)rt_nil_check(F->t_346)).tpsyms;
while ((F->z_1593 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->z_1593)).name))->all), (*F->name_347))) {
F->result_ = (*(P1006)rt_nil_check(F->z_1593)).t;
goto ret_;
}
F->z_1593 = (*(P1006)rt_nil_check(F->z_1593)).mnext;
}
F->result_ = g_ty_int_1076;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_352(rstr *lval_349, P1002 t_350, P998 c_351) {
  struct f_make_storage_352fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_349 = lval_349;
F->t_350 = t_350;
F->c_351 = c_351;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_350)).kind) == (((rt_int)15LL)))) {
F->p_1594 = NULL;
F->p_1594 = (*(P1002)rt_nil_check(F->t_350)).tparams;
F->a_1595 = NULL;
F->a_1595 = (*(P998)rt_nil_check(F->c_351)).args;
F->uc_1596 = NULL;
F->ut_1597 = NULL;
F->at_1598 = NULL;
if ((f_list_len_67(F->a_1595) != f_list_len_67(F->p_1594))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_350)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1594))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1594 != NULL)) {
F->pt_1599 = f_tparam_type_348(F->t_350, &(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1594)).name))->all));
F->v_1600 = rt_str_copy(f_gexpr_782(F->a_1595, F->pt_1599, &F->at_1598));
f_check_type_228(F->at_1598, F->pt_1599, rt_r_ichk((*(P996)rt_nil_check(F->a_1595)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_349), rt_str(".p_", 3)), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1594)).name))->all))), rt_str(" = ", 3)), F->v_1600), rt_str(";", 1)); b_; }));
F->p_1594 = (*(P996)rt_nil_check(F->p_1594)).next;
F->a_1595 = (*(P996)rt_nil_check(F->a_1595)).next;
}
{
F->saved_1601 = NULL;
F->saved_1601 = g_psub_1053;
F->p_1594 = (*(P1002)rt_nil_check(F->t_350)).tparams;
while ((F->p_1594 != NULL)) {
F->l1_1602 = NULL;
F->l2_1603 = NULL;
{ R1001 *cell1604 = rt_alloc(sizeof(R1001));
(*cell1604).s = NULL;
(*cell1604).next = NULL;
F->l1_1602 = cell1604;
}
{ R1001 *cell1605 = rt_alloc(sizeof(R1001));
(*cell1605).s = NULL;
(*cell1605).next = NULL;
F->l2_1603 = cell1605;
}
(*(P1000)rt_nil_check(F->l1_1602)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1594)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1000)rt_nil_check(F->l2_1603)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_349), rt_str(".p_", 3)), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1594)).name))->all))); b_; }));
(*(P1000)rt_nil_check(F->l1_1602)).next = F->l2_1603;
(*(P1000)rt_nil_check(F->l2_1603)).next = g_psub_1053;
g_psub_1053 = F->l1_1602;
F->p_1594 = (*(P996)rt_nil_check(F->p_1594)).next;
}
if (((*(P1002)rt_nil_check(F->t_350)).tparams == NULL)) {
f_init_storage_337(&(*F->lval_349), (*(P1002)rt_nil_check(F->t_350)).under, (*(P1002)rt_nil_check(F->t_350)).elemcons);
} else {
f_init_storage_337(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_349), rt_str(".all", 4)); b_; }), (*(P1002)rt_nil_check(F->t_350)).under, (*(P1002)rt_nil_check(F->t_350)).elemcons);
}
g_psub_1053 = F->saved_1601;
}
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_350)).kind) == (((rt_int)12LL)))) {
if (((*(P998)rt_nil_check(F->c_351)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_349), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_349)), rt_str(", ", 2)), f_subst_310(&(((P989)rt_nil_check((*(P998)rt_nil_check(F->c_351)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_230((*(P1002)rt_nil_check(F->t_350)).elem)), rt_str("), ", 3)), f_mcopy_383((*(P1002)rt_nil_check(F->t_350)).elem)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_350)).kind) == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_349)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_350)).kind) == (((rt_int)16LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_349), rt_str(" = ", 3)), f_empty_set_302(F->t_350)), rt_str(";", 1)); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_350)).kind) == (((rt_int)10LL)))) {
F->at_1606 = NULL;
if ((((F->c_351 == NULL) || ((*(P998)rt_nil_check(F->c_351)).args == NULL)) || ((*(P996)rt_nil_check((*(P998)rt_nil_check(F->c_351)).args)).next == NULL))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a file variable needs its access and use: FILE[S](access, use)", 62); b_; }));
}
if (((!f_text_file_963(F->t_350)) && (!f_flat_354((*(P1002)rt_nil_check(F->t_350)).elem)))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the components of a file on the simulated machine hold no strings, arrays, sets or pointers", 91); b_; }));
}
{
F->acc_1607 = rt_str_copy(f_gexpr_782((*(P998)rt_nil_check(F->c_351)).args, g_file_access_type_1093, &F->at_1606));
F->use_1608 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check((*(P998)rt_nil_check(F->c_351)).args)).next, g_file_mode_type_1087, &F->at_1606));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_349), rt_str(" = rt_r_file_new(", 17)), F->acc_1607), rt_str(", ", 2)), F->use_1608), rt_str(", sizeof(", 9)), f_ctype_230((*(P1002)rt_nil_check(F->t_350)).elem)), rt_str("), ", 3)), f_bool_text_373(f_text_file_963(F->t_350))), rt_str(");", 2)); b_; }));
}
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_350)).kind) == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_349), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_350)).kind) == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_349), rt_str(" = NULL;", 8)); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_350)).kind) == (((rt_int)5LL)))) {
if (((*(P998)rt_nil_check(F->c_351)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_349), rt_str(" = rt_str_new(", 14)), f_subst_310(&(((P989)rt_nil_check((*(P998)rt_nil_check(F->c_351)).slen))->all))), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_350)).kind) == (((rt_int)6LL)))) {
if (((*(P998)rt_nil_check(F->c_351)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1610 = ((rt_int)1LL), hi1611 = rt_r_ichk((*(P1002)rt_nil_check(F->t_350)).ndim);
for (rt_int it1612 = lo1610; it1612 <= hi1611; it1612++) {
F->k_1609 = it1612;
if ((f_cons_lo_248(F->c_351, F->k_1609) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_349), rt_str(".", 1)), f_dim_lo_238(F->k_1609)), rt_str(" = ", 3)), f_subst_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P989)rt_nil_check(f_cons_lo_248(F->c_351, F->k_1609)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_349)), rt_str(".", 1)), f_dim_hi_240(F->k_1609)), rt_str(" = ", 3)), f_subst_310(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P989)rt_nil_check(f_cons_hi_251(F->c_351, F->k_1609)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_350)).ndim) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_349), rt_str(".lo2 = ", 7)), (*F->lval_349)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_349), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_230((*(P1002)rt_nil_check(F->t_350)).elem)), rt_str(") * (size_t)", 12)), f_acnt_245(F->t_350, &(*F->lval_349))), rt_str(" + 1);", 6)); b_; }));
if (((((((((((rt_r_ichk((*(P1002)rt_nil_check((*(P1002)rt_nil_check(F->t_350)).elem)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1002)rt_nil_check((*(P1002)rt_nil_check(F->t_350)).elem)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P1002)rt_nil_check((*(P1002)rt_nil_check(F->t_350)).elem)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P1002)rt_nil_check((*(P1002)rt_nil_check(F->t_350)).elem)).kind) == (((rt_int)15LL)))) || (rt_r_ichk((*(P1002)rt_nil_check((*(P1002)rt_nil_check(F->t_350)).elem)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P1002)rt_nil_check((*(P1002)rt_nil_check(F->t_350)).elem)).kind) == (((rt_int)12LL)))) || (rt_r_ichk((*(P1002)rt_nil_check((*(P1002)rt_nil_check(F->t_350)).elem)).kind) == (((rt_int)13LL)))) || (rt_r_ichk((*(P1002)rt_nil_check((*(P1002)rt_nil_check(F->t_350)).elem)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P1002)rt_nil_check((*(P1002)rt_nil_check(F->t_350)).elem)).kind) == (((rt_int)17LL)))) || (rt_r_echk(g_mark_uninit_1068) && (!rt_str_eq(f_uninit_value_356((*(P1002)rt_nil_check(F->t_350)).elem), rt_str("", 0)))))) {
F->i_1613 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1613), rt_str(" = 0; ", 6)), F->i_1613), rt_str(" < ", 3)), f_acnt_245(F->t_350, &(*F->lval_349))), rt_str("; ", 2)), F->i_1613), rt_str("++) {", 5)); b_; }));
f_init_storage_337(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_349), rt_str(".p[", 3)), F->i_1613), rt_str("]", 1)); b_; }), (*(P1002)rt_nil_check(F->t_350)).elem, (*(P1002)rt_nil_check(F->t_350)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_350)).kind) == (((rt_int)7LL)))) {
F->f_1614 = NULL;
F->f_1614 = (*(P1002)rt_nil_check(F->t_350)).fields;
while ((F->f_1614 != NULL)) {
f_init_storage_337(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_349), rt_str(".", 1)), f_field_c_17(&(((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_1614)).name))->all))); b_; }), (*(P1004)rt_nil_check(F->f_1614)).t, (*(P1004)rt_nil_check(F->f_1614)).c);
F->f_1614 = (*(P1004)rt_nil_check(F->f_1614)).next;
}
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_350)).kind) == (((rt_int)17LL)))) {
if (((F->c_351 != NULL) && rt_r_echk((*(P998)rt_nil_check(F->c_351)).hasm))) {
F->f_1615 = NULL;
F->f_1615 = (*(P1002)rt_nil_check(F->t_350)).fields;
{ rt_int lo1617 = ((rt_int)1LL), hi1618 = rt_r_ichk((*(P998)rt_nil_check(F->c_351)).mlo);
for (rt_int it1619 = lo1617; it1619 <= hi1618; it1619++) {
F->i_1616 = it1619;
F->f_1615 = (*(P1004)rt_nil_check(F->f_1615)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_349), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk((*(P998)rt_nil_check(F->c_351)).mlo))), rt_str(";", 1)); b_; }));
f_init_storage_337(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_349), rt_str(".u.", 3)), f_field_c_17(&(((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_1615)).name))->all))); b_; }), (*(P1004)rt_nil_check(F->f_1615)).t, (*(P1004)rt_nil_check(F->f_1615)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_349), rt_str(".tag = -1;", 10)); b_; }));
}
} else if ((rt_r_echk(g_mark_uninit_1068) && (!rt_str_eq(f_uninit_value_356(F->t_350), rt_str("", 0))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_349), rt_str(" = ", 3)), f_uninit_value_356(F->t_350)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_flat_354(P1002 t_353) {
  struct f_flat_354fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_353 = t_353;
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_353)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->t_353)).tparams == NULL))) {
F->result_ = f_flat_354((*(P1002)rt_nil_check(F->t_353)).under);
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_353)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_353)).kind) == (((rt_int)17LL))))) {
F->f_1620 = NULL;
F->f_1620 = (*(P1002)rt_nil_check(F->t_353)).fields;
while ((F->f_1620 != NULL)) {
if ((!f_flat_354((*(P1004)rt_nil_check(F->f_1620)).t))) {
F->result_ = 0;
goto ret_;
}
F->f_1620 = (*(P1004)rt_nil_check(F->f_1620)).next;
}
F->result_ = 1;
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P1002)rt_nil_check(F->t_353)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_353)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_353)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_353)).kind) == (((rt_int)2LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_uninit_value_356(P1002 t_355) {
  struct f_uninit_value_356fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_355 = t_355;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_355)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str("RT_R_IUNDEF", 11);
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_355)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_355)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str("RT_R_EUNDEF", 11);
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_355)).kind) == (((rt_int)3LL)))) {
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

static rstr f_init_chk_359(P1002 t_357, rstr *v_358) {
  struct f_init_chk_359fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_357 = t_357;
F->v_358 = v_358;
F->b_1621 = NULL;
F->b_1621 = f_base_of_219(F->t_357);
if (f_suppressed_494(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))) {
F->result_ = (*F->v_358);
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->b_1621)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_ichk(", 10), (*F->v_358)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->b_1621)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->b_1621)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_echk(", 10), (*F->v_358)), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->b_1621)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fchk(", 10), (*F->v_358)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_358);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_manifest_362(P996 e_360, int *ok_361) {
  struct f_manifest_362fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_360 = e_360;
F->ok_361 = ok_361;
F->ok_361v = *F->ok_361;
F->v_1622 = NULL;
F->v_1622 = f_meval_371(F->e_360, &F->ok_361v);
if ((rt_r_echk(F->ok_361v) && (rt_r_ichk((*(P1015)rt_nil_check(F->v_1622)).kind) == (((rt_int)1LL))))) {
F->result_ = rt_r_ichk((*(P1015)rt_nil_check(F->v_1622)).i);
goto ret_;
}
F->ok_361v = 0;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_361v)) (*F->ok_361) = F->ok_361v;
  RT_FPOP();
  return F->result_;
}

static P1015 f_mk_mval_365(rt_int kind_363, rt_int i_364) {
  struct f_mk_mval_365fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_363 = kind_363;
F->i_364 = i_364;
F->v_1623 = NULL;
{ R1016 *cell1624 = rt_alloc(sizeof(R1016));
(*cell1624).s = NULL;
(*cell1624).t = NULL;
F->v_1623 = cell1624;
}
(*(P1015)rt_nil_check(F->v_1623)).kind = F->kind_363;
(*(P1015)rt_nil_check(F->v_1623)).i = F->i_364;
F->result_ = F->v_1623;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_ipow_368(rt_int a_366, rt_int b_367) {
  struct f_ipow_368fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_366 = a_366;
F->b_367 = b_367;
F->r_1625 = RT_R_IUNDEF;
F->r_1625 = ((rt_int)1LL);
{ rt_int lo1627 = ((rt_int)1LL), hi1628 = F->b_367;
for (rt_int it1629 = lo1627; it1629 <= hi1628; it1629++) {
F->i_1626 = it1629;
F->r_1625 = rt_mul(rt_r_ichk(F->r_1625), F->a_366);
}
}
F->result_ = rt_r_ichk(F->r_1625);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1015 f_meval_371(P996 e_369, int *ok_370) {
  struct f_meval_371fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_369 = e_369;
F->ok_370 = ok_370;
F->ok_370v = *F->ok_370;
F->a_1630 = NULL;
F->b_1631 = NULL;
F->ok2_1632 = RT_R_EUNDEF;
F->op_1633 = NULL;
F->ok_370v = 0;
if ((F->e_369 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_369)).kind) == (((rt_int)1LL)))) {
F->ok_370v = 1;
F->result_ = f_mk_mval_365((((rt_int)1LL)), rt_r_ichk((*(P996)rt_nil_check(F->e_369)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_369)).kind) == (((rt_int)5LL)))) {
F->ok_370v = 1;
F->result_ = f_mk_mval_365((((rt_int)2LL)), rt_r_ichk((*(P996)rt_nil_check(F->e_369)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_369)).kind) == (((rt_int)2LL)))) {
F->ok_370v = 1;
F->result_ = f_mk_mval_365((((rt_int)3LL)), ((rt_int)0LL));
goto ret_;
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_369)).kind) == (((rt_int)3LL)))) {
F->ok_370v = 1;
F->a_1630 = f_mk_mval_365((((rt_int)5LL)), ((rt_int)0LL));
(*(P1015)rt_nil_check(F->a_1630)).s = (*(P996)rt_nil_check(F->e_369)).name;
F->result_ = F->a_1630;
goto ret_;
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_369)).kind) == (((rt_int)4LL)))) {
if ((f_lit_index_261((*(P1002)rt_nil_check(g_ty_ascii_1079)).lits, &(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_369)).name))->all)) >= ((rt_int)0LL))) {
F->ok_370v = 1;
F->a_1630 = f_mk_mval_365((((rt_int)4LL)), f_lit_index_261((*(P1002)rt_nil_check(g_ty_ascii_1079)).lits, &(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_369)).name))->all)));
(*(P1015)rt_nil_check(F->a_1630)).t = g_ty_ascii_1079;
(*(P1015)rt_nil_check(F->a_1630)).s = (*(P996)rt_nil_check(F->e_369)).name;
F->result_ = F->a_1630;
goto ret_;
}
F->a_1630 = f_mk_mval_365((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P1015)rt_nil_check(F->a_1630)).s = (*(P996)rt_nil_check(F->e_369)).name;
F->ok_370v = 1;
F->result_ = F->a_1630;
goto ret_;
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_369)).kind) == (((rt_int)17LL)))) {
F->result_ = f_meval_371((*(P996)rt_nil_check(F->e_369)).a, &F->ok_370v);
goto ret_;
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_369)).kind) == (((rt_int)7LL)))) {
F->y_1634 = NULL;
F->y_1634 = f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_369)).name))->all));
if ((((F->y_1634 != NULL) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_1634)).kind) == (((rt_int)2LL)))) && ((*(P1006)rt_nil_check(F->y_1634)).mv != NULL))) {
F->ok_370v = 1;
F->result_ = (*(P1006)rt_nil_check(F->y_1634)).mv;
goto ret_;
} else if ((((F->y_1634 != NULL) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_1634)).kind) == (((rt_int)2LL)))) && rt_r_echk((*(P1006)rt_nil_check(F->y_1634)).hasmv))) {
F->ok_370v = 1;
F->result_ = f_mk_mval_365((((rt_int)1LL)), rt_r_ichk((*(P1006)rt_nil_check(F->y_1634)).mvalue));
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_369)).kind) == (((rt_int)8LL)))) {
F->a_1630 = f_meval_371((*(P996)rt_nil_check(F->e_369)).a, &F->ok_370v);
if ((!rt_r_echk(F->ok_370v))) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_369)).name))->all), rt_str("NOT", 3)) && (rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).kind) == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_365((((rt_int)2LL)), rt_sub(((rt_int)1LL), rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i)));
goto ret_;
} else if ((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_369)).name))->all), rt_str("-", 1)) && (rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).kind) == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_365((((rt_int)1LL)), rt_neg(rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i)));
goto ret_;
} else if (((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_369)).name))->all), rt_str("+", 1)) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_369)).name))->all), rt_str("-", 1))) && ((rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).kind) == (((rt_int)3LL)))))) {
F->result_ = F->a_1630;
goto ret_;
}
F->ok_370v = 0;
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P996)rt_nil_check(F->e_369)).kind) != (((rt_int)9LL))) || f_user_defined_381(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_369)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1633 = (*(P996)rt_nil_check(F->e_369)).name;
F->a_1630 = f_meval_371((*(P996)rt_nil_check(F->e_369)).a, &F->ok_370v);
F->b_1631 = f_meval_371((*(P996)rt_nil_check(F->e_369)).b, &F->ok2_1632);
F->ok_370v = (rt_r_echk(F->ok_370v) && rt_r_echk(F->ok2_1632));
if ((!rt_r_echk(F->ok_370v))) {
F->result_ = NULL;
goto ret_;
}
F->ok_370v = 0;
if (((rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).kind) == (((rt_int)1LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).kind) == (((rt_int)1LL))))) {
F->ok_370v = 1;
if (rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_365((((rt_int)1LL)), rt_add(rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i), rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i)));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_365((((rt_int)1LL)), rt_sub(rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i), rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i)));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_365((((rt_int)1LL)), rt_mul(rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i), rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i)));
goto ret_;
} else if ((rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("DIV", 3)) && (rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_365((((rt_int)1LL)), rt_div(rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i), rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i)));
goto ret_;
} else if ((rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("MOD", 3)) && (rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_365((((rt_int)1LL)), rt_mod(rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i), rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i)));
goto ret_;
} else if ((rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("**", 2)) && (rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i) >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_365((((rt_int)1LL)), f_ipow_368(rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i), rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i)));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_365((((rt_int)2LL)), f_bool_i_375((rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i) == rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i))));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_365((((rt_int)2LL)), f_bool_i_375((rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i) != rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i))));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_365((((rt_int)2LL)), f_bool_i_375((rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i) < rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i))));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_365((((rt_int)2LL)), f_bool_i_375((rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i) <= rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i))));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_365((((rt_int)2LL)), f_bool_i_375((rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i) > rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i))));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_365((((rt_int)2LL)), f_bool_i_375((rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i) >= rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).kind) == (((rt_int)3LL)))) && (((rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("+", 1)) || rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("-", 1))) || rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("*", 1))) || rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("/", 1))))) {
F->ok_370v = 1;
F->result_ = F->a_1630;
goto ret_;
} else if ((((rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).kind) == (((rt_int)1LL)))) && rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("**", 2)))) {
F->ok_370v = 1;
F->result_ = F->a_1630;
goto ret_;
} else if (((rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).kind) == (((rt_int)2LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).kind) == (((rt_int)2LL))))) {
F->ok_370v = 1;
if (rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_365((((rt_int)2LL)), rt_mul(rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i), rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i)));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_365((((rt_int)2LL)), f_bool_i_375((rt_add(rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i), rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i)) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("XOR", 3)) || rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_365((((rt_int)2LL)), f_bool_i_375((rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i) != rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i))));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_365((((rt_int)2LL)), f_bool_i_375((rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).i) == rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).kind) == (((rt_int)4LL)))) && (rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("=", 1)) || rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("/=", 2))))) {
F->ok_370v = 1;
if (rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_365((((rt_int)2LL)), f_bool_i_375(rt_str_eq((((P989)rt_nil_check((*(P1015)rt_nil_check(F->a_1630)).s))->all), (((P989)rt_nil_check((*(P1015)rt_nil_check(F->b_1631)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_365((((rt_int)2LL)), f_bool_i_375((!rt_str_eq((((P989)rt_nil_check((*(P1015)rt_nil_check(F->a_1630)).s))->all), (((P989)rt_nil_check((*(P1015)rt_nil_check(F->b_1631)).s))->all)))));
goto ret_;
} else if ((((rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).kind) == (((rt_int)5LL)))) && (rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("=", 1)) || rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("/=", 2))))) {
F->ok_370v = 1;
if (rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_365((((rt_int)2LL)), f_bool_i_375(rt_str_eq((((P989)rt_nil_check((*(P1015)rt_nil_check(F->a_1630)).s))->all), (((P989)rt_nil_check((*(P1015)rt_nil_check(F->b_1631)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_365((((rt_int)2LL)), f_bool_i_375((!rt_str_eq((((P989)rt_nil_check((*(P1015)rt_nil_check(F->a_1630)).s))->all), (((P989)rt_nil_check((*(P1015)rt_nil_check(F->b_1631)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P989)rt_nil_check(F->op_1633))->all), rt_str("&", 1)) && ((rt_r_ichk((*(P1015)rt_nil_check(F->a_1630)).kind) == (((rt_int)5LL))) || ((*(P1015)rt_nil_check(F->a_1630)).t == g_ty_ascii_1079))) && ((rt_r_ichk((*(P1015)rt_nil_check(F->b_1631)).kind) == (((rt_int)5LL))) || ((*(P1015)rt_nil_check(F->b_1631)).t == g_ty_ascii_1079)))) {
F->r_1635 = NULL;
F->r_1635 = f_mk_mval_365((((rt_int)5LL)), ((rt_int)0LL));
F->ok_370v = 1;
(*(P1015)rt_nil_check(F->r_1635)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_377(F->a_1630), f_mstr_377(F->b_1631)); b_; }));
F->result_ = F->r_1635;
goto ret_;
}
F->ok_370v = 0;
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_370v)) (*F->ok_370) = F->ok_370v;
  RT_FPOP();
  return F->result_;
}

static rstr f_bool_text_373(int b_372) {
  struct f_bool_text_373fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_372 = b_372;
if (F->b_372) {
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

static rt_int f_bool_i_375(int b_374) {
  struct f_bool_i_375fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_374 = b_374;
if (F->b_374) {
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

static rstr f_mstr_377(P1015 v_376) {
  struct f_mstr_377fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_376 = v_376;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->v_376)).kind) == (((rt_int)5LL)))) {
F->result_ = (((P989)rt_nil_check((*(P1015)rt_nil_check(F->v_376)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_379(rt_r_ichk((*(P1015)rt_nil_check(F->v_376)).i)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ascii_char_379(rt_int i_378) {
  struct f_ascii_char_379fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_378 = i_378;
F->printable_1636 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_378 >= ((rt_int)32LL)) && (F->i_378 <= ((rt_int)126LL)))) {
F->result_ = rt_r_echk(rt_str_get(F->printable_1636, rt_sub(F->i_378, ((rt_int)31LL))));
goto ret_;
}
F->result_ = 32;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_user_defined_381(rstr *op_380) {
  struct f_user_defined_381fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_380 = op_380;
F->y_1637 = NULL;
F->y_1637 = f_lookup_159(&(*F->op_380));
F->result_ = ((F->y_1637 != NULL) && ((rt_r_ichk((*(P1006)rt_nil_check(F->y_1637)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_1637)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_383(P1002 t_382) {
  struct f_mcopy_383fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_382 = t_382;
F->ct_1638 = rt_str_copy(f_ctype_230(F->t_382));
F->name_1639 = rt_str_new(rt_add(((rt_int)((F->ct_1638).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1639, rt_str_cat(rt_str("mc_", 3), F->ct_1638));
F->l_1640 = NULL;
if ((!f_seen_name_416(g_mcopies_1075, &F->name_1639))) {
{ R1001 *cell1641 = rt_alloc(sizeof(R1001));
(*cell1641).s = NULL;
(*cell1641).next = NULL;
F->l_1640 = cell1641;
}
(*(P1000)rt_nil_check(F->l_1640)).s = f_mk_3(&F->name_1639);
(*(P1000)rt_nil_check(F->l_1640)).next = g_mcopies_1075;
g_mcopies_1075 = F->l_1640;
f_put_27(g_out_protos_1041, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1639), rt_str("(void *d, const void *s);", 25)); b_; }));
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_382)).kind) == (((rt_int)15LL))) && f_top_level_397((*(P1002)rt_nil_check(F->t_382)).assignp))) {
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1639), rt_str("(void *d, const void *s) { ", 27)), f_user_call2_391((*(P1002)rt_nil_check(F->t_382)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(", 2), F->ct_1638), rt_str(" *)d", 4)); b_; }), 1, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1638), rt_str(" *)s", 4)); b_; }), 0)), rt_str("; }", 3)); b_; }));
} else {
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1639), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1638), rt_str(" *)d = ", 7)), f_copy_code_405(F->t_382, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1638), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
}
F->result_ = F->name_1639;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_385(P1002 t_384) {
  struct f_composite_385fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_384 = t_384;
F->result_ = ((((rt_r_ichk((*(P1002)rt_nil_check(F->t_384)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_384)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_384)).kind) == (((rt_int)17LL)))) || ((rt_r_ichk((*(P1002)rt_nil_check(F->t_384)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->t_384)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_call2_391(P1006 y_386, rstr *a_387, int lv_a_388, rstr *b_389, int lv_b_390) {
  struct f_user_call2_391fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_386 = y_386;
F->a_387 = a_387;
F->lv_a_388 = lv_a_388;
F->b_389 = b_389;
F->lv_b_390 = lv_b_390;
F->args_1642 = NULL;
F->args_1642 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P1006)rt_nil_check(F->y_386)).level) > ((rt_int)0LL))) {
F->args_1642 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1644 = ((rt_int)1LL), hi1645 = rt_sub(rt_r_ichk(g_cur_level_1049), rt_r_ichk((*(P1006)rt_nil_check(F->y_386)).level));
for (rt_int it1646 = lo1644; it1646 <= hi1645; it1646++) {
F->i_1643 = it1646;
F->args_1642 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->args_1642))->all), rt_str("->up", 4)); b_; }));
}
}
F->args_1642 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->args_1642))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_386)).cname))->all), rt_str("(", 1)), (((P989)rt_nil_check(F->args_1642))->all)), f_user_arg_395((*(P1006)rt_nil_check(F->y_386)).params, &(*F->a_387), F->lv_a_388)), rt_str(", ", 2)), f_user_arg_395((*(P1008)rt_nil_check((*(P1006)rt_nil_check(F->y_386)).params)).next, &(*F->b_389), F->lv_b_390)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_arg_395(P1008 pm_392, rstr *v_393, int lv_394) {
  struct f_user_arg_395fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pm_392 = pm_392;
F->v_393 = v_393;
F->lv_394 = lv_394;
if ((rt_r_ichk((*(P1008)rt_nil_check(F->pm_392)).mode) == (((rt_int)1LL)))) {
F->result_ = f_copy_code_405((*(P1008)rt_nil_check(F->pm_392)).t, &(*F->v_393));
goto ret_;
} else if (F->lv_394) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("&(", 2), (*F->v_393)), rt_str(")", 1));
goto ret_;
}
{
F->ct_1647 = rt_str_copy(f_ctype_230((*(P1008)rt_nil_check(F->pm_392)).t));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1647), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1647), rt_str(")); *b_ = ", 10)), (*F->v_393)), rt_str("; b_; })", 8));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_top_level_397(P1006 y_396) {
  struct f_top_level_397fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_396 = y_396;
F->result_ = ((F->y_396 != NULL) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_396)).level) == ((rt_int)0LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_402(rstr *lval_398, P1002 t_399, rstr *v_400, P998 c_401) {
  struct f_assign_code_402fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_398 = lval_398;
F->t_399 = t_399;
F->v_400 = v_400;
F->c_401 = c_401;
if ((((rt_r_ichk((*(P1002)rt_nil_check(F->t_399)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->t_399)).assignp != NULL)) && (rt_r_echk(g_in_func_1048) || f_top_level_397((*(P1002)rt_nil_check(F->t_399)).assignp)))) {
F->result_ = rt_str_cat(f_user_call2_391((*(P1002)rt_nil_check(F->t_399)).assignp, &(*F->lval_398), 1, &(*F->v_400), 0), rt_str(";", 1));
goto ret_;
}
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_399)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->t_399)).tparams == NULL))) {
F->result_ = f_assign_code_402(&(*F->lval_398), (*(P1002)rt_nil_check(F->t_399)).under, &(*F->v_400), F->c_401);
goto ret_;
}
if ((((rt_r_ichk((*(P1002)rt_nil_check(F->t_399)).kind) == (((rt_int)17LL))) && (F->c_401 != NULL)) && ((*(P998)rt_nil_check(F->c_401)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_230(F->t_399)), rt_str(" u_ = ", 6)), (*F->v_400)), rt_str("; if (u_.tag != (", 17)), (((P989)rt_nil_check((*(P998)rt_nil_check(F->c_401)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_230(F->t_399)), rt_str("(&", 2)), (*F->lval_398)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_385(F->t_399)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_230(F->t_399)), rt_str("(&", 2)), (*F->lval_398)), rt_str(", ", 2)), (*F->v_400)), rt_str(");", 2));
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_399)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_398)), rt_str(", ", 2)), (*F->v_400)), rt_str(");", 2));
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_399)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_399)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_230(F->t_399)), rt_str("(&", 2)), (*F->lval_398)), rt_str(", ", 2)), (*F->v_400)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_398), rt_str(" = ", 3)), f_checked_209(F->t_399, F->c_401, &(*F->v_400))), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_405(P1002 t_403, rstr *v_404) {
  struct f_copy_code_405fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_403 = t_403;
F->v_404 = v_404;
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_403)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->t_403)).tparams == NULL))) {
F->result_ = f_copy_code_405((*(P1002)rt_nil_check(F->t_403)).under, &(*F->v_404));
goto ret_;
}
if (f_composite_385(F->t_403)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_230(F->t_403)), rt_str("(", 1)), (*F->v_404)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_403)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_404)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_403)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_403)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_230(F->t_403)), rt_str("(", 1)), (*F->v_404)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_404);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_409(P1002 t_406, rstr *a_407, rstr *b_408) {
  struct f_eq_code_409fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_406 = t_406;
F->a_407 = a_407;
F->b_408 = b_408;
if ((((rt_r_ichk((*(P1002)rt_nil_check(F->t_406)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->t_406)).eqp != NULL)) && (rt_r_echk(g_in_func_1048) || f_top_level_397((*(P1002)rt_nil_check(F->t_406)).eqp)))) {
F->result_ = f_user_call2_391((*(P1002)rt_nil_check(F->t_406)).eqp, &(*F->a_407), 0, &(*F->b_408), 0);
goto ret_;
}
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_406)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->t_406)).tparams == NULL))) {
F->result_ = f_eq_code_409((*(P1002)rt_nil_check(F->t_406)).under, &(*F->a_407), &(*F->b_408));
goto ret_;
}
if (f_composite_385(F->t_406)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_230(F->t_406)), rt_str("(", 1)), (*F->a_407)), rt_str(", ", 2)), (*F->b_408)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_406)).kind) == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), (*F->a_407)), rt_str(", ", 2)), (*F->b_408)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_406)).kind) == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_407)), rt_str(" == ", 4)), (*F->b_408)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_406)).kind) == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_407)), rt_str(" == ", 4)), (*F->b_408)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_406)).kind) == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_406)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_407)), rt_str(", ", 2)), (*F->b_408)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_406)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_406)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_230(F->t_406)), rt_str("(", 1)), (*F->a_407)), rt_str(", ", 2)), (*F->b_408)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_407)), rt_str(" == ", 4)), (*F->b_408)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_413(rstr *lval_410, P1002 t_411, rstr *v_412) {
  struct f_elem_assign_413fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_410 = lval_410;
F->t_411 = t_411;
F->v_412 = v_412;
F->result_ = f_assign_code_402(&(*F->lval_410), F->t_411, &(*F->v_412), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_416(P1000 l_414, rstr *s_415) {
  struct f_seen_name_416fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_414 = l_414;
F->s_415 = s_415;
F->p_1648 = NULL;
F->p_1648 = F->l_414;
while ((F->p_1648 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P1000)rt_nil_check(F->p_1648)).s))->all), (*F->s_415))) {
F->result_ = 1;
goto ret_;
}
F->p_1648 = (*(P1000)rt_nil_check(F->p_1648)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_417(void) {
  struct f_emit_helpers_417fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_1649 = NULL;
F->t_1650 = NULL;
F->t_1650 = g_all_types_1037;
F->done_1651 = NULL;
while ((F->t_1650 != NULL)) {
if ((f_composite_385(F->t_1650) && (!f_seen_name_416(F->done_1651, &(((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_1650)).cname))->all))))) {
F->l_1652 = NULL;
F->c_1653 = rt_str_new(((rt_int)(((((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_1650)).cname))->all)).len)));
rt_str_assign(&F->c_1653, (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_1650)).cname))->all));
{ R1001 *cell1654 = rt_alloc(sizeof(R1001));
(*cell1654).s = NULL;
(*cell1654).next = NULL;
F->l_1652 = cell1654;
}
(*(P1000)rt_nil_check(F->l_1652)).s = (*(P1002)rt_nil_check(F->t_1650)).cname;
(*(P1000)rt_nil_check(F->l_1652)).next = F->done_1651;
F->done_1651 = F->l_1652;
f_put_27(g_out_helpers_1040, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1653), rt_str("(", 1)), F->c_1653), rt_str(" *d, ", 5)), F->c_1653), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_1040, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1653), rt_str(" cp_", 4)), F->c_1653), rt_str("(", 1)), F->c_1653), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_1040, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1653), rt_str("(", 1)), F->c_1653), rt_str(" a, ", 4)), F->c_1653), rt_str(" b);", 4)); b_; }));
f_helper_bodies_419(F->t_1650);
}
F->t_1650 = (*(P1002)rt_nil_check(F->t_1650)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_419(P1002 t_418) {
  struct f_helper_bodies_419fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_418 = t_418;
F->c_1655 = rt_str_new(((rt_int)(((((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_418)).cname))->all)).len)));
rt_str_assign(&F->c_1655, (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_418)).cname))->all));
F->b_1656 = NULL;
F->b_1656 = g_out_funcs_1043;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_418)).kind) == (((rt_int)6LL)))) {
F->e_1657 = NULL;
F->e_1657 = (*(P1002)rt_nil_check(F->t_418)).elem;
F->sizes_1658 = NULL;
F->sizes_1658 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1659 = NULL;
F->bounds_1659 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1661 = ((rt_int)1LL), hi1662 = rt_r_ichk((*(P1002)rt_nil_check(F->t_418)).ndim);
for (rt_int it1663 = lo1661; it1663 <= hi1662; it1663++) {
F->k_1660 = it1663;
F->l_1664 = rt_str_copy(f_dim_lo_238(F->k_1660));
F->h_1665 = rt_str_copy(f_dim_hi_240(F->k_1660));
F->sizes_1658 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->sizes_1658))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1664), rt_str(", d->", 5)), F->h_1665), rt_str(") != RT_R_EXT(s.", 16)), F->l_1664), rt_str(", s.", 4)), F->h_1665), rt_str(")", 1)); b_; }));
F->bounds_1659 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->bounds_1659))->all), rt_str(" || a.", 6)), F->l_1664), rt_str(" != b.", 6)), F->l_1664), rt_str(" || a.", 6)), F->h_1665), rt_str(" != b.", 6)), F->h_1665); b_; }));
}
}
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1655), rt_str("(", 1)), F->c_1655), rt_str(" *d, ", 5)), F->c_1655), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P989)rt_nil_check(F->sizes_1658))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_245(F->t_418, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_413(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1657, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_413(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1657, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1655), rt_str(" cp_", 4)), F->c_1655), rt_str("(", 1)), F->c_1655), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1655), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_230(F->e_1657)), rt_str(") * (size_t)", 12)), f_acnt_245(F->t_418, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_245(F->t_418, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_405(F->e_1657, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1655), rt_str("(", 1)), F->c_1655), rt_str(" a, ", 4)), F->c_1655), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P989)rt_nil_check(F->bounds_1659))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_245(F->t_418, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_409(F->e_1657, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_418)).kind) == (((rt_int)15LL)))) {
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1655), rt_str("(", 1)), F->c_1655), rt_str(" *d, ", 5)), F->c_1655), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_182((*(P1002)rt_nil_check(F->t_418)).under) && ((*(P1002)rt_nil_check(F->t_418)).elemcons != NULL)) && ((*(P998)rt_nil_check((*(P1002)rt_nil_check(F->t_418)).elemcons)).lo != NULL))) {
F->saved_1666 = NULL;
F->saved_1666 = g_psub_1053;
F->p_1667 = NULL;
F->p_1667 = (*(P1002)rt_nil_check(F->t_418)).tparams;
while ((F->p_1667 != NULL)) {
F->l1_1668 = NULL;
F->l2_1669 = NULL;
{ R1001 *cell1670 = rt_alloc(sizeof(R1001));
(*cell1670).s = NULL;
(*cell1670).next = NULL;
F->l1_1668 = cell1670;
}
{ R1001 *cell1671 = rt_alloc(sizeof(R1001));
(*cell1671).s = NULL;
(*cell1671).next = NULL;
F->l2_1669 = cell1671;
}
(*(P1000)rt_nil_check(F->l1_1668)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1667)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1000)rt_nil_check(F->l2_1669)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1667)).name))->all))); b_; }));
(*(P1000)rt_nil_check(F->l1_1668)).next = F->l2_1669;
(*(P1000)rt_nil_check(F->l2_1669)).next = g_psub_1053;
g_psub_1053 = F->l1_1668;
F->p_1667 = (*(P996)rt_nil_check(F->p_1667)).next;
}
if ((rt_r_ichk((*(P1002)rt_nil_check((*(P1002)rt_nil_check(F->t_418)).under)).kind) == (((rt_int)3LL)))) {
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_310(&(((P989)rt_nil_check((*(P998)rt_nil_check((*(P1002)rt_nil_check(F->t_418)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_310(&(((P989)rt_nil_check((*(P998)rt_nil_check((*(P1002)rt_nil_check(F->t_418)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_310(&(((P989)rt_nil_check((*(P998)rt_nil_check((*(P1002)rt_nil_check(F->t_418)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_310(&(((P989)rt_nil_check((*(P998)rt_nil_check((*(P1002)rt_nil_check(F->t_418)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_1053 = F->saved_1666;
} else {
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_413(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P1002)rt_nil_check(F->t_418)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1655), rt_str(" cp_", 4)), F->c_1655), rt_str("(", 1)), F->c_1655), rt_str(" s) { s.all = ", 14)), f_copy_code_405((*(P1002)rt_nil_check(F->t_418)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1655), rt_str("(", 1)), F->c_1655), rt_str(" a, ", 4)), F->c_1655), rt_str(" b) { return ", 13)), f_eq_code_409((*(P1002)rt_nil_check(F->t_418)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_418)).kind) == (((rt_int)17LL)))) {
F->f_1672 = NULL;
F->f_1672 = (*(P1002)rt_nil_check(F->t_418)).fields;
F->i_1673 = RT_R_IUNDEF;
F->i_1673 = ((rt_int)0LL);
F->cases_as_1674 = NULL;
F->cases_as_1674 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1675 = NULL;
F->cases_cp_1675 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1676 = NULL;
F->cases_eq_1676 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1672 != NULL)) {
F->fn_1677 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_1672)).name))->all))));
F->cases_as_1674 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->cases_as_1674))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1673))), rt_str(": d->", 5)), F->fn_1677), rt_str(" = ", 3)), f_copy_code_405((*(P1004)rt_nil_check(F->f_1672)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1677); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1675 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->cases_cp_1675))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1673))), rt_str(": d.", 4)), F->fn_1677), rt_str(" = ", 3)), f_copy_code_405((*(P1004)rt_nil_check(F->f_1672)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1677); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1676 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->cases_eq_1676))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1673))), rt_str(": return ", 9)), f_eq_code_409((*(P1004)rt_nil_check(F->f_1672)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1677); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1677); b_; }))), rt_str(";", 1)); b_; }));
F->i_1673 = rt_add(rt_r_ichk(F->i_1673), ((rt_int)1LL));
F->f_1672 = (*(P1004)rt_nil_check(F->f_1672)).next;
}
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1655), rt_str("(", 1)), F->c_1655), rt_str(" *d, ", 5)), F->c_1655), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P989)rt_nil_check(F->cases_as_1674))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1655), rt_str(" cp_", 4)), F->c_1655), rt_str("(", 1)), F->c_1655), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1655), rt_str(" d = s; switch (s.tag) {", 24)), (((P989)rt_nil_check(F->cases_cp_1675))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1655), rt_str("(", 1)), F->c_1655), rt_str(" a, ", 4)), F->c_1655), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P989)rt_nil_check(F->cases_eq_1676))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1678 = NULL;
F->f_1678 = (*(P1002)rt_nil_check(F->t_418)).fields;
F->conds_1679 = NULL;
F->conds_1679 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1655), rt_str("(", 1)), F->c_1655), rt_str(" *d, ", 5)), F->c_1655), rt_str(" s) {", 5)); b_; }));
while ((F->f_1678 != NULL)) {
F->fn_1680 = rt_str_copy(f_field_c_17(&(((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_1678)).name))->all)));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_413(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1680); b_; }), (*(P1004)rt_nil_check(F->f_1678)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1680); b_; }))); b_; }));
F->f_1678 = (*(P1004)rt_nil_check(F->f_1678)).next;
}
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1655), rt_str(" cp_", 4)), F->c_1655), rt_str("(", 1)), F->c_1655), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1655), rt_str(" d = s;", 7)); b_; }));
F->f_1678 = (*(P1002)rt_nil_check(F->t_418)).fields;
while ((F->f_1678 != NULL)) {
F->fn_1681 = rt_str_copy(f_field_c_17(&(((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_1678)).name))->all)));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1681), rt_str(" = ", 3)), f_copy_code_405((*(P1004)rt_nil_check(F->f_1678)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1681); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1679 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->conds_1679))->all), rt_str(" && ", 4)), f_eq_code_409((*(P1004)rt_nil_check(F->f_1678)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1681); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1681); b_; }))); b_; }));
F->f_1678 = (*(P1004)rt_nil_check(F->f_1678)).next;
}
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1655), rt_str("(", 1)), F->c_1655), rt_str(" a, ", 4)), F->c_1655), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P989)rt_nil_check(F->conds_1679))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1656, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_421(P996 elems_420) {
  struct f_declare_body_421fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_420 = elems_420;
F->e_1682 = NULL;
F->e_1682 = F->elems_420;
while ((F->e_1682 != NULL)) {
if ((rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).kind) == (((rt_int)51LL)))) {
F->g_1683 = NULL;
F->g_1683 = f_new_sym_177((((rt_int)10LL)), (*(P996)rt_nil_check(F->e_1682)).name);
(*(P1006)rt_nil_check(F->g_1683)).decl = F->e_1682;
(*(P1006)rt_nil_check(F->g_1683)).level = rt_r_ichk(g_cur_level_1049);
(*(P1006)rt_nil_check(F->g_1683)).owner = g_func_sym_1060;
(*(P1006)rt_nil_check(F->g_1683)).gctx = g_fctx_1050;
f_define_164(F->g_1683, rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).line));
}
F->e_1682 = (*(P996)rt_nil_check(F->e_1682)).next;
}
F->e_1682 = F->elems_420;
while ((F->e_1682 != NULL)) {
if (((rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).kind) == (((rt_int)41LL))) && (rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).flag) == ((rt_int)0LL)))) {
f_manifest_const_423(F->e_1682);
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).kind) == (((rt_int)47LL)))) {
f_gen_capsule_431(F->e_1682);
} else if ((((rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).kind) == (((rt_int)48LL))) && (rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).flag) != ((rt_int)1LL))) && (rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).flag) != ((rt_int)3LL)))) {
f_gen_expose_458(F->e_1682);
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).kind) == (((rt_int)49LL)))) {
F->y_1684 = NULL;
F->y_1684 = f_new_sym_177((((rt_int)7LL)), (*(P996)rt_nil_check(F->e_1682)).name);
(*(P1006)rt_nil_check(F->y_1684)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_1682)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_164(F->y_1684, rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).line));
f_put_27(g_out_globals_1042, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_1684)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_1045, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_1684)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_1682)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).kind) == (((rt_int)42LL)))) {
F->y_1685 = NULL;
F->y_1685 = f_new_sym_177((((rt_int)6LL)), (*(P996)rt_nil_check(F->e_1682)).name);
(*(P1006)rt_nil_check(F->y_1685)).st = (*(P996)rt_nil_check(F->e_1682)).a;
(*(P1006)rt_nil_check(F->y_1685)).decl = F->e_1682;
f_define_164(F->y_1685, rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).line));
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).kind) == (((rt_int)44LL)))) {
F->y_1686 = NULL;
F->y_1686 = f_new_sym_177((((rt_int)5LL)), (*(P996)rt_nil_check(F->e_1682)).name);
F->t_1687 = NULL;
F->t_1687 = f_new_typ_179((((rt_int)8LL)));
(*(P1002)rt_nil_check(F->t_1687)).name = (*(P996)rt_nil_check(F->e_1682)).name;
(*(P1002)rt_nil_check(F->t_1687)).decl = F->e_1682;
(*(P1006)rt_nil_check(F->y_1686)).t = F->t_1687;
f_define_164(F->y_1686, rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).line));
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).kind) == (((rt_int)43LL)))) {
F->y_1688 = NULL;
F->y_1688 = f_new_sym_177((((rt_int)5LL)), (*(P996)rt_nil_check(F->e_1682)).name);
(*(P1006)rt_nil_check(F->y_1688)).st = (*(P996)rt_nil_check(F->e_1682)).a;
(*(P1006)rt_nil_check(F->y_1688)).decl = F->e_1682;
f_define_164(F->y_1688, rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).line));
}
F->e_1682 = (*(P996)rt_nil_check(F->e_1682)).next;
}
F->e_1682 = F->elems_420;
while ((F->e_1682 != NULL)) {
if ((((rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).kind) == (((rt_int)50LL))))) {
F->y_1689 = NULL;
f_declare_subprogram_485(F->e_1682);
F->y_1689 = f_lookup_decl_161(F->e_1682);
(*(P1006)rt_nil_check(F->y_1689)).home = F->elems_420;
f_normal_function_483(F->e_1682, F->y_1689);
}
F->e_1682 = (*(P996)rt_nil_check(F->e_1682)).next;
}
F->e_1682 = F->elems_420;
{
F->snap_1690 = NULL;
while ((F->e_1682 != NULL)) {
if ((rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).kind) == (((rt_int)51LL)))) {
if ((F->snap_1690 == NULL)) {
{ P1010 cell1691 = rt_alloc(sizeof *cell1691);
rt_int pv1692 = (((rt_int)4093LL));
cell1691->p_n = pv1692;
cell1691->all.lo = ((rt_int)0LL); cell1691->all.hi = pv1692;
cell1691->all.lo2 = cell1691->all.hi2 = 1;
cell1691->all.p = rt_alloc(sizeof(P1006) * (size_t)(RT_CNT(cell1691->all)) + 1);
for (rt_int i1693 = 0; i1693 < (RT_CNT(cell1691->all)); i1693++) {
cell1691->all.p[i1693] = NULL;
}
F->snap_1690 = cell1691;
}
{ rt_int lo1695 = ((rt_int)0LL), hi1696 = (((rt_int)4093LL));
for (rt_int it1697 = lo1695; it1697 <= hi1696; it1697++) {
F->i_1694 = it1697;
(((P1010)rt_nil_check(F->snap_1690))->all).p[(rt_index(F->i_1694, (((P1010)rt_nil_check(F->snap_1690))->all).lo, (((P1010)rt_nil_check(F->snap_1690))->all).hi) - (((P1010)rt_nil_check(F->snap_1690))->all).lo)] = ({ A1012 b_ = (((P1010)rt_nil_check(g_table_1032))->all); b_.p[(rt_index(F->i_1694, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1698 = NULL;
F->g_1698 = f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_1682)).name))->all));
(*(P1006)rt_nil_check(F->g_1698)).env = F->snap_1690;
}
}
F->e_1682 = (*(P996)rt_nil_check(F->e_1682)).next;
}
}
F->e_1682 = F->elems_420;
while ((F->e_1682 != NULL)) {
if (((rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).kind) == (((rt_int)45LL))) && (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_1682)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_1682)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1699 = NULL;
F->y_1699 = f_lookup_decl_161(F->e_1682);
if (((((F->y_1699 != NULL) && ((*(P1006)rt_nil_check(F->y_1699)).params != NULL)) && ((*(P1008)rt_nil_check((*(P1006)rt_nil_check(F->y_1699)).params)).next == NULL)) && ((rt_r_ichk((*(P1002)rt_nil_check((*(P1008)rt_nil_check((*(P1006)rt_nil_check(F->y_1699)).params)).t)).kind) == (((rt_int)15LL))) || (rt_r_ichk((*(P1002)rt_nil_check((*(P1008)rt_nil_check((*(P1006)rt_nil_check(F->y_1699)).params)).t)).kind) == (((rt_int)8LL)))))) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_1682)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P1002)rt_nil_check((*(P1008)rt_nil_check((*(P1006)rt_nil_check(F->y_1699)).params)).t)).initp = F->y_1699;
} else {
(*(P1002)rt_nil_check((*(P1008)rt_nil_check((*(P1006)rt_nil_check(F->y_1699)).params)).t)).finalp = F->y_1699;
}
}
}
if ((((rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).kind) == (((rt_int)45LL))) && rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_1682)).name))->all), rt_str(":=", 2))) || ((rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).kind) == (((rt_int)46LL))) && (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_1682)).name))->all), rt_str("=", 1)) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_1682)).name))->all), rt_str("<", 1)))))) {
F->y_1700 = NULL;
F->y_1700 = f_lookup_decl_161(F->e_1682);
if (((((((F->y_1700 != NULL) && ((*(P1006)rt_nil_check(F->y_1700)).params != NULL)) && ((*(P1008)rt_nil_check((*(P1006)rt_nil_check(F->y_1700)).params)).next != NULL)) && ((*(P1008)rt_nil_check((*(P1008)rt_nil_check((*(P1006)rt_nil_check(F->y_1700)).params)).next)).next == NULL)) && (rt_r_ichk((*(P1002)rt_nil_check((*(P1008)rt_nil_check((*(P1006)rt_nil_check(F->y_1700)).params)).t)).kind) == (((rt_int)15LL)))) && f_same_217((*(P1008)rt_nil_check((*(P1006)rt_nil_check(F->y_1700)).params)).t, (*(P1008)rt_nil_check((*(P1008)rt_nil_check((*(P1006)rt_nil_check(F->y_1700)).params)).next)).t))) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_1682)).name))->all), rt_str(":=", 2))) {
if ((rt_r_ichk((*(P1008)rt_nil_check((*(P1006)rt_nil_check(F->y_1700)).params)).mode) != (((rt_int)2LL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_1682)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the first formal of := is a VAR formal (13.2)", 45); b_; }));
}
(*(P1002)rt_nil_check((*(P1008)rt_nil_check((*(P1006)rt_nil_check(F->y_1700)).params)).t)).assignp = F->y_1700;
} else if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_1682)).name))->all), rt_str("=", 1))) {
(*(P1002)rt_nil_check((*(P1008)rt_nil_check((*(P1006)rt_nil_check(F->y_1700)).params)).t)).eqp = F->y_1700;
} else {
(*(P1002)rt_nil_check((*(P1008)rt_nil_check((*(P1006)rt_nil_check(F->y_1700)).params)).t)).ltp = F->y_1700;
}
}
}
F->e_1682 = (*(P996)rt_nil_check(F->e_1682)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_423(P996 d_422) {
  struct f_manifest_const_423fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_422 = d_422;
F->ok_1701 = RT_R_EUNDEF;
F->v_1702 = NULL;
F->y_1703 = NULL;
F->t_1704 = NULL;
F->ctext_1705 = NULL;
if (((*(P996)rt_nil_check(F->d_422)).a != NULL)) {
if (((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->d_422)).a)).kind) != (((rt_int)70LL))) || ((*(P996)rt_nil_check((*(P996)rt_nil_check(F->d_422)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1702 = f_meval_371((*(P996)rt_nil_check(F->d_422)).b, &F->ok_1701);
if ((!rt_r_echk(F->ok_1701))) {
goto ret_;
}
{
F->saved_1706 = NULL;
F->saved_1706 = g_code_1046;
g_code_1046 = f_new_buffer_24();
g_trial_1074 = rt_add(rt_r_ichk(g_trial_1074), ((rt_int)1LL));
{ rt_frame xf1707;
if (RT_TRY(xf1707)) {
F->ctext_1705 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_782((*(P996)rt_nil_check(F->d_422)).b, NULL, &F->t_1704)), rt_str(")", 1)); b_; }));
RT_POP(xf1707);
} else {
RT_POP(xf1707);
int x1708 = rt_xcur;
if (0 || x1708 == ex_compile_error_1) {
F->ok_1701 = 0;
} else {
rt_raise(x1708);
}
}
}
g_trial_1074 = rt_sub(rt_r_ichk(g_trial_1074), ((rt_int)1LL));
F->ok_1701 = (rt_r_echk(F->ok_1701) && ((*(P1019)rt_nil_check(g_code_1046)).head == NULL));
g_code_1046 = F->saved_1706;
}
if (((!rt_r_echk(F->ok_1701)) || (((*(P996)rt_nil_check(F->d_422)).a != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->t_1704)).kind) != (((rt_int)1LL)))))) {
goto ret_;
}
if ((rt_r_ichk((*(P1015)rt_nil_check(F->v_1702)).kind) == (((rt_int)4LL)))) {
(*(P1015)rt_nil_check(F->v_1702)).t = F->t_1704;
(*(P1015)rt_nil_check(F->v_1702)).i = f_lit_index_261((*(P1002)rt_nil_check(f_base_of_219(F->t_1704))).lits, &(((P989)rt_nil_check((*(P1015)rt_nil_check(F->v_1702)).s))->all));
}
(*(P996)rt_nil_check(F->d_422)).flag = ((rt_int)1LL);
F->y_1703 = f_new_sym_177((((rt_int)2LL)), (*(P996)rt_nil_check(F->d_422)).name);
(*(P1006)rt_nil_check(F->y_1703)).t = F->t_1704;
(*(P1006)rt_nil_check(F->y_1703)).c = f_new_cons_180();
(*(P1006)rt_nil_check(F->y_1703)).mv = F->v_1702;
if ((rt_r_ichk((*(P1015)rt_nil_check(F->v_1702)).kind) == (((rt_int)1LL)))) {
(*(P1006)rt_nil_check(F->y_1703)).mvalue = rt_r_ichk((*(P1015)rt_nil_check(F->v_1702)).i);
(*(P1006)rt_nil_check(F->y_1703)).hasmv = 1;
}
(*(P1006)rt_nil_check(F->y_1703)).ro_flag = 1;
(*(P1006)rt_nil_check(F->y_1703)).access = F->ctext_1705;
f_define_164(F->y_1703, rt_r_ichk((*(P996)rt_nil_check(F->d_422)).line));
ret_:
  RT_FPOP();
  return;
}

static int f_exported_427(P996 d_424, rstr *name_425, int *ro_426) {
  struct f_exported_427fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_424 = d_424;
F->name_425 = name_425;
F->ro_426 = ro_426;
F->ro_426v = *F->ro_426;
F->p_1709 = NULL;
F->p_1709 = (*(P996)rt_nil_check(F->d_424)).a;
F->ro_426v = 0;
if ((rt_r_ichk((*(P996)rt_nil_check(F->d_424)).ival) == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1709 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1709)).name))->all), (*F->name_425))) {
F->ro_426v = (rt_r_ichk((*(P996)rt_nil_check(F->p_1709)).ival) == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1709 = (*(P996)rt_nil_check(F->p_1709)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ro_426v)) (*F->ro_426) = F->ro_426v;
  RT_FPOP();
  return F->result_;
}

static P1006 f_copy_sym_429(P1006 y_428) {
  struct f_copy_sym_429fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_428 = y_428;
F->z_1710 = NULL;
{ R1007 *cell1711 = rt_alloc(sizeof(R1007));
(*cell1711).name = NULL;
(*cell1711).t = NULL;
(*cell1711).c = NULL;
(*cell1711).access = NULL;
(*cell1711).cname = NULL;
(*cell1711).st = NULL;
(*cell1711).decl = NULL;
(*cell1711).params = NULL;
(*cell1711).result = NULL;
(*cell1711).members = NULL;
(*cell1711).mnext = NULL;
(*cell1711).binds = NULL;
(*cell1711).insts = NULL;
(*cell1711).env = NULL;
(*cell1711).chain = NULL;
(*cell1711).stack = NULL;
(*cell1711).owner = NULL;
(*cell1711).gctx = NULL;
(*cell1711).mv = NULL;
(*cell1711).reqs = NULL;
(*cell1711).home = NULL;
(*cell1711).capn = NULL;
(*cell1711).tbinds = NULL;
(*cell1711).loc = NULL;
(*cell1711).reqs_sym = NULL;
F->z_1710 = cell1711;
}
(*(P1006)rt_nil_check(F->z_1710)).kind = rt_r_ichk((*(P1006)rt_nil_check(F->y_428)).kind);
(*(P1006)rt_nil_check(F->z_1710)).name = (*(P1006)rt_nil_check(F->y_428)).name;
(*(P1006)rt_nil_check(F->z_1710)).t = (*(P1006)rt_nil_check(F->y_428)).t;
(*(P1006)rt_nil_check(F->z_1710)).c = (*(P1006)rt_nil_check(F->y_428)).c;
(*(P1006)rt_nil_check(F->z_1710)).access = (*(P1006)rt_nil_check(F->y_428)).access;
(*(P1006)rt_nil_check(F->z_1710)).cname = (*(P1006)rt_nil_check(F->y_428)).cname;
(*(P1006)rt_nil_check(F->z_1710)).ro_flag = rt_r_echk((*(P1006)rt_nil_check(F->y_428)).ro_flag);
(*(P1006)rt_nil_check(F->z_1710)).mvalue = rt_r_ichk((*(P1006)rt_nil_check(F->y_428)).mvalue);
(*(P1006)rt_nil_check(F->z_1710)).hasmv = rt_r_echk((*(P1006)rt_nil_check(F->y_428)).hasmv);
(*(P1006)rt_nil_check(F->z_1710)).st = (*(P1006)rt_nil_check(F->y_428)).st;
(*(P1006)rt_nil_check(F->z_1710)).decl = (*(P1006)rt_nil_check(F->y_428)).decl;
(*(P1006)rt_nil_check(F->z_1710)).params = (*(P1006)rt_nil_check(F->y_428)).params;
(*(P1006)rt_nil_check(F->z_1710)).result = (*(P1006)rt_nil_check(F->y_428)).result;
(*(P1006)rt_nil_check(F->z_1710)).level = rt_r_ichk((*(P1006)rt_nil_check(F->y_428)).level);
(*(P1006)rt_nil_check(F->z_1710)).byref = rt_r_echk((*(P1006)rt_nil_check(F->y_428)).byref);
(*(P1006)rt_nil_check(F->z_1710)).members = (*(P1006)rt_nil_check(F->y_428)).members;
(*(P1006)rt_nil_check(F->z_1710)).env = (*(P1006)rt_nil_check(F->y_428)).env;
F->result_ = F->z_1710;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_431(P996 d_430) {
  struct f_gen_capsule_431fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_430 = d_430;
F->y_1712 = NULL;
F->y_1712 = f_new_sym_177((((rt_int)8LL)), (*(P996)rt_nil_check(F->d_430)).name);
F->saved_1713 = NULL;
F->saved_1713 = g_suppress_1066;
F->p_1714 = NULL;
F->p_1714 = (*(P996)rt_nil_check(F->d_430)).b;
F->tail_1715 = NULL;
(*(P1006)rt_nil_check(F->y_1712)).decl = F->d_430;
while ((F->p_1714 != NULL)) {
F->pm_1716 = NULL;
{ R1009 *cell1717 = rt_alloc(sizeof(R1009));
(*cell1717).name = NULL;
(*cell1717).t = NULL;
(*cell1717).c = NULL;
(*cell1717).cfield = NULL;
(*cell1717).next = NULL;
F->pm_1716 = cell1717;
}
(*(P1008)rt_nil_check(F->pm_1716)).name = (*(P996)rt_nil_check(F->p_1714)).name;
(*(P1008)rt_nil_check(F->pm_1716)).mode = rt_r_ichk((*(P996)rt_nil_check(F->p_1714)).ival);
(*(P1008)rt_nil_check(F->pm_1716)).t = f_resolve_subtype_264((*(P996)rt_nil_check(F->p_1714)).a, &(*(P1008)rt_nil_check(F->pm_1716)).c);
if ((F->tail_1715 == NULL)) {
(*(P1006)rt_nil_check(F->y_1712)).params = F->pm_1716;
} else {
(*(P1008)rt_nil_check(F->tail_1715)).next = F->pm_1716;
}
F->tail_1715 = F->pm_1716;
F->p_1714 = (*(P996)rt_nil_check(F->p_1714)).next;
}
if (((*(P996)rt_nil_check(F->d_430)).b == NULL)) {
g_suppress_1066 = f_suppressing_492((*(P996)rt_nil_check(F->d_430)).prags);
f_elaborate_capsule_440(F->d_430, F->y_1712, NULL, F->d_430);
g_suppress_1066 = F->saved_1713;
}
f_define_164(F->y_1712, rt_r_ichk((*(P996)rt_nil_check(F->d_430)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_435(P996 d_432, P996 args_433, rt_int line_434) {
  struct f_capsule_params_435fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_432 = d_432;
F->args_433 = args_433;
F->line_434 = line_434;
F->p_1718 = NULL;
F->p_1718 = (*(P996)rt_nil_check(F->d_432)).b;
F->a_1719 = NULL;
F->a_1719 = F->args_433;
F->t_1720 = NULL;
F->vt_1721 = NULL;
F->c_1722 = NULL;
while (((F->p_1718 != NULL) && (F->a_1719 != NULL))) {
F->t_1720 = f_resolve_subtype_264((*(P996)rt_nil_check(F->p_1718)).a, &F->c_1722);
if ((rt_r_ichk((*(P996)rt_nil_check(F->p_1718)).ival) == (((rt_int)3LL)))) {
f_fail_23(F->line_434, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if (((rt_r_ichk((*(P996)rt_nil_check(F->p_1718)).ival) == (((rt_int)2LL))) || (rt_r_ichk((*(P996)rt_nil_check(F->p_1718)).ival) == (((rt_int)4LL))))) {
F->lv_1723 = NULL;
F->lc_1724 = NULL;
F->ro_1725 = RT_R_EUNDEF;
F->y_1726 = NULL;
F->y_1726 = f_new_sym_177((((rt_int)1LL)), (*(P996)rt_nil_check(F->p_1718)).name);
f_lvalue_751(F->a_1719, &F->lv_1723, &F->vt_1721, &F->lc_1724, &F->ro_1725);
f_check_type_228(F->vt_1721, F->t_1720, F->line_434);
if ((rt_r_echk(F->ro_1725) && (rt_r_ichk((*(P996)rt_nil_check(F->p_1718)).ival) == (((rt_int)2LL))))) {
f_fail_23(F->line_434, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1718)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (rt_r_echk(g_in_func_1048)) {
F->f_1727 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1718)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1047, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_230(F->t_1720)), rt_str(" *", 2)), F->f_1727), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1727), rt_str(" = &", 4)), (((P989)rt_nil_check(F->lv_1723))->all)), rt_str(";", 1)); b_; }));
(*(P1006)rt_nil_check(F->y_1726)).level = rt_r_ichk(g_cur_level_1049);
(*(P1006)rt_nil_check(F->y_1726)).access = f_mk_3(&F->f_1727);
(*(P1006)rt_nil_check(F->y_1726)).byref = 1;
} else {
F->g_1728 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1718)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1042, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_230(F->t_1720)), rt_str(" *", 2)), F->g_1728), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_1056, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1728), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1728, rt_str(" = &", 4)), (((P989)rt_nil_check(F->lv_1723))->all)), rt_str(";", 1)); b_; }));
(*(P1006)rt_nil_check(F->y_1726)).level = ((rt_int)0LL);
(*(P1006)rt_nil_check(F->y_1726)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1728), rt_str(")", 1)); b_; }));
}
(*(P1006)rt_nil_check(F->y_1726)).t = F->t_1720;
(*(P1006)rt_nil_check(F->y_1726)).c = F->lc_1724;
(*(P1006)rt_nil_check(F->y_1726)).ro_flag = (rt_r_ichk((*(P996)rt_nil_check(F->p_1718)).ival) == (((rt_int)4LL)));
f_define_164(F->y_1726, F->line_434);
} else {
F->y_1729 = NULL;
F->y_1729 = f_new_sym_177((((rt_int)2LL)), (*(P996)rt_nil_check(F->p_1718)).name);
F->v_1730 = rt_str_copy(f_gexpr_782(F->a_1719, F->t_1720, &F->vt_1721));
f_check_type_228(F->vt_1721, F->t_1720, F->line_434);
{
F->access_1731 = rt_str_copy(f_storage_501(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1718)).name))->all), F->t_1720));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1731, rt_str(" = ", 3)), f_copy_code_405(F->t_1720, &F->v_1730)), rt_str(";", 1)); b_; }));
f_bind_504(F->y_1729, &F->access_1731);
}
(*(P1006)rt_nil_check(F->y_1729)).t = F->t_1720;
(*(P1006)rt_nil_check(F->y_1729)).c = F->c_1722;
(*(P1006)rt_nil_check(F->y_1729)).ro_flag = 1;
f_define_164(F->y_1729, F->line_434);
}
F->p_1718 = (*(P996)rt_nil_check(F->p_1718)).next;
F->a_1719 = (*(P996)rt_nil_check(F->a_1719)).next;
}
if (((F->p_1718 != NULL) || (F->a_1719 != NULL))) {
f_fail_23(F->line_434, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P989)rt_nil_check((*(P996)rt_nil_check(F->d_432)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_440(P996 d_436, P1006 y_437, P996 args_438, P996 owner_439) {
  struct f_elaborate_capsule_440fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_436 = d_436;
F->y_437 = y_437;
F->args_438 = args_438;
F->owner_439 = owner_439;
F->cr_1732 = NULL;
F->ctx_1733 = NULL;
F->saved_gotos_1734 = NULL;
F->m_1735 = NULL;
F->p_1736 = NULL;
F->p_1736 = (*(P996)rt_nil_check(F->d_436)).a;
F->ro_1737 = RT_R_EUNDEF;
{ R1024 *cell1738 = rt_alloc(sizeof(R1024));
(*cell1738).d = NULL;
(*cell1738).next = NULL;
F->cr_1732 = cell1738;
}
(*(P1023)rt_nil_check(F->cr_1732)).d = F->d_436;
(*(P1023)rt_nil_check(F->cr_1732)).next = g_caps_1051;
g_caps_1051 = F->cr_1732;
f_open_scope_173();
(*(P1023)rt_nil_check(F->cr_1732)).depth = rt_r_ichk(g_depth_1035);
if (((*(P996)rt_nil_check(F->d_436)).b != NULL)) {
f_capsule_params_435(F->d_436, F->args_438, rt_r_ichk((*(P996)rt_nil_check(F->owner_439)).line));
}
{ R1014 *cell1739 = rt_alloc(sizeof(R1014));
(*cell1739).imps = NULL;
(*cell1739).next = NULL;
F->ctx_1733 = cell1739;
}
(*(P1013)rt_nil_check(F->ctx_1733)).depth = rt_r_ichk(g_depth_1035);
(*(P1013)rt_nil_check(F->ctx_1733)).imps = (*(P996)rt_nil_check(F->d_436)).d;
(*(P1013)rt_nil_check(F->ctx_1733)).all_imp = (rt_r_ichk((*(P996)rt_nil_check(F->d_436)).flag) >= ((rt_int)2LL));
(*(P1013)rt_nil_check(F->ctx_1733)).next = g_fctx_1050;
g_fctx_1050 = F->ctx_1733;
F->saved_gotos_1734 = g_gotos_1070;
g_gotos_1070 = NULL;
f_declare_labels_568((*(P996)rt_nil_check(F->d_436)).c);
f_declare_body_421((*(P996)rt_nil_check(F->d_436)).c);
f_capsule_body_575((*(P996)rt_nil_check(F->d_436)).c);
{
F->w_1740 = NULL;
{ R1026 *cell1741 = rt_alloc(sizeof(R1026));
(*cell1741).d = NULL;
(*cell1741).w = NULL;
(*cell1741).next = NULL;
F->w_1740 = cell1741;
}
(*(P1025)rt_nil_check(F->w_1740)).d = F->owner_439;
(*(P1025)rt_nil_check(F->w_1740)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_562((*(P996)rt_nil_check(F->d_436)).c); b_; }));
(*(P1025)rt_nil_check(F->w_1740)).next = g_cap_waits_1052;
g_cap_waits_1052 = F->w_1740;
}
g_fctx_1050 = (*(P1013)rt_nil_check(g_fctx_1050)).next;
F->m_1735 = g_scope_stack_1036;
while (((F->m_1735 != NULL) && (rt_r_ichk((*(P1006)rt_nil_check(F->m_1735)).depth) == rt_r_ichk(g_depth_1035)))) {
if (((((rt_r_ichk((*(P1006)rt_nil_check(F->m_1735)).kind) == (((rt_int)5LL))) && ((*(P1006)rt_nil_check(F->m_1735)).t == NULL)) && ((*(P1006)rt_nil_check(F->m_1735)).decl != NULL)) && (rt_r_ichk((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->m_1735)).decl)).kind) == (((rt_int)43LL))))) {
(*(P1006)rt_nil_check(F->m_1735)).t = f_new_type_314(F->m_1735, f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P996)rt_nil_check(F->d_436)).line)), &(*(P1006)rt_nil_check(F->m_1735)).c);
} else if ((((rt_r_ichk((*(P1006)rt_nil_check(F->m_1735)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1006)rt_nil_check(F->m_1735)).kind) == (((rt_int)6LL)))) && ((*(P1006)rt_nil_check(F->m_1735)).t == NULL))) {
(*(P1006)rt_nil_check(F->m_1735)).t = f_resolve_subtype_264((*(P1006)rt_nil_check(F->m_1735)).st, &(*(P1006)rt_nil_check(F->m_1735)).c);
} else if (((rt_r_ichk((*(P1006)rt_nil_check(F->m_1735)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->m_1735)).t)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_460((*(P1006)rt_nil_check(F->m_1735)).t);
}
F->m_1735 = (*(P1006)rt_nil_check(F->m_1735)).stack;
}
F->m_1735 = g_scope_stack_1036;
while (((F->m_1735 != NULL) && (rt_r_ichk((*(P1006)rt_nil_check(F->m_1735)).depth) == rt_r_ichk(g_depth_1035)))) {
if (f_exported_427(F->d_436, &(((P989)rt_nil_check((*(P1006)rt_nil_check(F->m_1735)).name))->all), &F->ro_1737)) {
F->z_1742 = NULL;
F->z_1742 = f_copy_sym_429(F->m_1735);
if (rt_r_echk(F->ro_1737)) {
(*(P1006)rt_nil_check(F->z_1742)).ro_flag = 1;
}
(*(P1006)rt_nil_check(F->z_1742)).mnext = (*(P1006)rt_nil_check(F->y_437)).members;
(*(P1006)rt_nil_check(F->y_437)).members = F->z_1742;
}
F->m_1735 = (*(P1006)rt_nil_check(F->m_1735)).stack;
}
while ((F->p_1736 != NULL)) {
if ((((!rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1736)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1736)).name))->all), rt_str("=", 1)))) && ((f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1736)).name))->all)) == NULL) || ((*(P1006)rt_nil_check(f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1736)).name))->all)))).depth != rt_r_ichk(g_depth_1035))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->d_436)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1736)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P989)rt_nil_check((*(P996)rt_nil_check(F->d_436)).name))->all)); b_; }));
}
F->p_1736 = (*(P996)rt_nil_check(F->p_1736)).next;
}
f_close_scope_174();
g_caps_1051 = (*(P1023)rt_nil_check(g_caps_1051)).next;
g_gotos_1070 = F->saved_gotos_1734;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_443(P996 d_441, rstr *op_442) {
  struct f_exports_op_443fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_441 = d_441;
F->op_442 = op_442;
F->p_1743 = NULL;
if ((F->d_441 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1743 = (*(P996)rt_nil_check(F->d_441)).a;
while ((F->p_1743 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1743)).name))->all), (*F->op_442))) {
F->result_ = 1;
goto ret_;
}
F->p_1743 = (*(P996)rt_nil_check(F->p_1743)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P989 f_renamed_446(P996 d_444, P1006 z_445) {
  struct f_renamed_446fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_444 = d_444;
F->z_445 = z_445;
F->r_1744 = NULL;
F->r_1744 = (*(P996)rt_nil_check(F->d_444)).c;
while ((F->r_1744 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->r_1744)).name))->all), (((P989)rt_nil_check((*(P1006)rt_nil_check(F->z_445)).name))->all))) {
F->result_ = (*(P996)rt_nil_check((*(P996)rt_nil_check(F->r_1744)).a)).name;
goto ret_;
}
F->r_1744 = (*(P996)rt_nil_check(F->r_1744)).next;
}
F->result_ = (*(P1006)rt_nil_check(F->z_445)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_cap_tt_match_449(P996 f_447, P996 a_448) {
  struct f_cap_tt_match_449fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->f_447 = f_447;
F->a_448 = a_448;
F->x_1745 = NULL;
F->x_1745 = F->f_447;
F->y_1746 = NULL;
F->y_1746 = F->a_448;
while (((F->x_1745 != NULL) && (F->y_1746 != NULL))) {
F->ok1_1747 = RT_R_EUNDEF;
F->ok2_1748 = RT_R_EUNDEF;
F->v1_1749 = NULL;
F->v1_1749 = f_meval_371(F->x_1745, &F->ok1_1747);
F->v2_1750 = NULL;
F->v2_1750 = f_meval_371(F->y_1746, &F->ok2_1748);
if ((((!rt_r_echk(F->ok1_1747)) || (!rt_r_echk(F->ok2_1748))) || (rt_r_ichk((*(P1015)rt_nil_check(F->v1_1749)).kind) != rt_r_ichk((*(P1015)rt_nil_check(F->v2_1750)).kind)))) {
F->result_ = 0;
goto ret_;
} else if (((rt_r_ichk((*(P1015)rt_nil_check(F->v1_1749)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1015)rt_nil_check(F->v1_1749)).kind) == (((rt_int)4LL))))) {
if ((!rt_str_eq((((P989)rt_nil_check((*(P1015)rt_nil_check(F->v1_1749)).s))->all), (((P989)rt_nil_check((*(P1015)rt_nil_check(F->v2_1750)).s))->all)))) {
F->result_ = 0;
goto ret_;
}
} else if ((rt_r_ichk((*(P1015)rt_nil_check(F->v1_1749)).i) != rt_r_ichk((*(P1015)rt_nil_check(F->v2_1750)).i))) {
F->result_ = 0;
goto ret_;
}
F->x_1745 = (*(P996)rt_nil_check(F->x_1745)).next;
F->y_1746 = (*(P996)rt_nil_check(F->y_1746)).next;
}
F->result_ = ((F->x_1745 == NULL) && (F->y_1746 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1006 f_pick_capsule_451(P996 d_450) {
  struct f_pick_capsule_451fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_450 = d_450;
F->y_1751 = NULL;
F->y_1751 = ({ A1012 b_ = (((P1010)rt_nil_check(g_table_1032))->all); b_.p[(rt_index(f_hash_157(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->d_450)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
F->first_1752 = NULL;
F->fit_1753 = NULL;
F->n_1754 = RT_R_IUNDEF;
F->n_1754 = ((rt_int)0LL);
while ((F->y_1751 != NULL)) {
if ((rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_1751)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->d_450)).name))->all)) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_1751)).kind) == (((rt_int)8LL))))) {
F->n_1754 = rt_add(rt_r_ichk(F->n_1754), ((rt_int)1LL));
if ((F->first_1752 == NULL)) {
F->first_1752 = F->y_1751;
}
if ((((F->fit_1753 == NULL) && f_fits_898(F->y_1751, (*(P996)rt_nil_check(F->d_450)).b)) && f_cap_tt_match_449((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_1751)).decl)).e, (*(P996)rt_nil_check(F->d_450)).e))) {
F->fit_1753 = F->y_1751;
}
}
F->y_1751 = (*(P1006)rt_nil_check(F->y_1751)).chain;
}
if ((rt_r_ichk(F->n_1754) > ((rt_int)1LL))) {
if ((F->fit_1753 == NULL)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->d_450)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no capsule ", 11), (((P989)rt_nil_check((*(P996)rt_nil_check(F->d_450)).name))->all)), rt_str(" has formals that fit these actual parameters", 45)); b_; }));
}
F->result_ = F->fit_1753;
goto ret_;
}
if ((F->first_1752 == NULL)) {
F->result_ = f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->d_450)).name))->all));
goto ret_;
}
F->result_ = F->first_1752;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1006 f_capsule_instance_454(P1006 g_452, P996 d_453) {
  struct f_capsule_instance_454fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_452 = g_452;
F->d_453 = d_453;
F->gd_1755 = NULL;
F->gd_1755 = (*(P1006)rt_nil_check(F->g_452)).decl;
F->pat_1756 = NULL;
F->pat_1756 = (*(P996)rt_nil_check(F->gd_1755)).b;
F->binds_1757 = NULL;
F->binds_1757 = f_need_binds_709(F->gd_1755, f_tt_binds_688(F->gd_1755, (*(P996)rt_nil_check(F->pat_1756)).e, (*(P996)rt_nil_check(F->d_453)).e, rt_r_ichk((*(P996)rt_nil_check(F->d_453)).line)), rt_r_ichk((*(P996)rt_nil_check(F->d_453)).line));
F->inst_1758 = NULL;
F->inst_1758 = (*(P1006)rt_nil_check(F->g_452)).insts;
F->saved_env_1759 = NULL;
F->saved_env_1759 = g_genv_1033;
F->saved_gdepth_1760 = RT_R_IUNDEF;
F->saved_gdepth_1760 = rt_r_ichk(g_gdepth_1065);
if (((rt_r_ichk((*(P996)rt_nil_check(F->d_453)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P996)rt_nil_check(F->d_453)).flag) != ((rt_int)3LL)))) {
while ((F->inst_1758 != NULL)) {
if (f_same_binds_680((*(P1006)rt_nil_check(F->inst_1758)).tbinds, F->binds_1757)) {
F->result_ = F->inst_1758;
goto ret_;
}
F->inst_1758 = (*(P1006)rt_nil_check(F->inst_1758)).insts;
}
}
F->inst_1758 = f_new_sym_177((((rt_int)8LL)), (*(P996)rt_nil_check(F->pat_1756)).name);
(*(P1006)rt_nil_check(F->inst_1758)).decl = F->pat_1756;
(*(P1006)rt_nil_check(F->inst_1758)).tbinds = F->binds_1757;
f_open_scope_173();
{
F->b_1761 = NULL;
F->b_1761 = F->binds_1757;
while ((F->b_1761 != NULL)) {
f_define_164(F->b_1761, rt_r_ichk((*(P996)rt_nil_check(F->d_453)).line));
F->b_1761 = (*(P1006)rt_nil_check(F->b_1761)).mnext;
}
}
g_genv_1033 = (*(P1006)rt_nil_check(F->g_452)).env;
g_gdepth_1065 = rt_r_ichk(g_depth_1035);
f_elaborate_capsule_440(F->pat_1756, F->inst_1758, (*(P996)rt_nil_check(F->d_453)).b, F->d_453);
g_genv_1033 = F->saved_env_1759;
g_gdepth_1065 = rt_r_ichk(F->saved_gdepth_1760);
f_close_scope_174();
if (((rt_r_ichk((*(P996)rt_nil_check(F->d_453)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P996)rt_nil_check(F->d_453)).flag) != ((rt_int)3LL)))) {
(*(P1006)rt_nil_check(F->inst_1758)).insts = (*(P1006)rt_nil_check(F->g_452)).insts;
(*(P1006)rt_nil_check(F->g_452)).insts = F->inst_1758;
}
F->result_ = F->inst_1758;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_configure_456(P1006 y_455) {
  struct f_configure_456fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_455 = y_455;
F->m_1762 = NULL;
F->m_1762 = (*(P1006)rt_nil_check(F->y_455)).members;
while ((F->m_1762 != NULL)) {
F->n_1763 = rt_str_copy((((P989)rt_nil_check((*(P1006)rt_nil_check(F->m_1762)).name))->all));
if ((((rt_r_ichk((*(P1006)rt_nil_check(F->m_1762)).kind) == (((rt_int)2LL))) && rt_r_echk((*(P1006)rt_nil_check(F->m_1762)).hasmv)) && (((rt_str_eq(F->n_1763, rt_str("MILLISECONDS", 12)) || rt_str_eq(F->n_1763, rt_str("SECONDS", 7))) || rt_str_eq(F->n_1763, rt_str("MINUTES", 7))) || rt_str_eq(F->n_1763, rt_str("HOURS", 5))))) {
f_put_27(g_out_excs_1045, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  RT_", 5), F->n_1763), rt_str(" = ", 3)), f_itos_7(rt_r_ichk((*(P1006)rt_nil_check(F->m_1762)).mvalue))), rt_str(";", 1)); b_; }));
}
F->m_1762 = (*(P1006)rt_nil_check(F->m_1762)).mnext;
}
ret_:
  RT_FPOP();
  return;
}

static void f_gen_expose_458(P996 d_457) {
  struct f_gen_expose_458fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_457 = d_457;
F->y_1764 = NULL;
F->y_1764 = f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->d_457)).name))->all));
F->m_1765 = NULL;
F->p_1766 = NULL;
F->p_1766 = (*(P996)rt_nil_check(F->d_457)).a;
F->r_1767 = NULL;
F->r_1767 = (*(P996)rt_nil_check(F->d_457)).c;
if ((((F->y_1764 != NULL) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_1764)).kind) == (((rt_int)10LL)))) && (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_1764)).decl)).b)).kind) == (((rt_int)47LL))))) {
F->y_1764 = f_capsule_instance_454(F->y_1764, F->d_457);
} else {
F->y_1764 = f_pick_capsule_451(F->d_457);
if (((F->y_1764 == NULL) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_1764)).kind) != (((rt_int)8LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->d_457)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->d_457)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
if ((((*(P996)rt_nil_check(F->d_457)).e != NULL) && (((*(P1006)rt_nil_check(F->y_1764)).decl == NULL) || ((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_1764)).decl)).e == NULL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->d_457)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->d_457)).name))->all), rt_str(" has no translation time property list", 38)); b_; }));
}
}
if (rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_1764)).name))->all), rt_str("CONFIGURATION", 13))) {
f_configure_456(F->y_1764);
}
if ((((*(P1006)rt_nil_check(F->y_1764)).tbinds != NULL) || ((((*(P1006)rt_nil_check(F->y_1764)).decl != NULL) && ((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_1764)).decl)).e != NULL)) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_1764)).kind) == (((rt_int)10LL)))))) {
} else if (((rt_r_ichk((*(P996)rt_nil_check(F->d_457)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P996)rt_nil_check(F->d_457)).flag) == ((rt_int)3LL)))) {
F->inst_1768 = NULL;
F->inst_1768 = f_new_sym_177((((rt_int)8LL)), (*(P1006)rt_nil_check(F->y_1764)).name);
(*(P1006)rt_nil_check(F->inst_1768)).decl = (*(P1006)rt_nil_check(F->y_1764)).decl;
f_elaborate_capsule_440((*(P1006)rt_nil_check(F->y_1764)).decl, F->inst_1768, (*(P996)rt_nil_check(F->d_457)).b, F->d_457);
F->y_1764 = F->inst_1768;
} else if ((((*(P1006)rt_nil_check(F->y_1764)).decl != NULL) && ((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_1764)).decl)).b != NULL))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->d_457)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P989)rt_nil_check((*(P996)rt_nil_check(F->d_457)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P996)rt_nil_check(F->d_457)).b != NULL)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->d_457)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1767 != NULL)) {
F->found_1769 = RT_R_EUNDEF;
F->found_1769 = 0;
F->m_1765 = (*(P1006)rt_nil_check(F->y_1764)).members;
while ((F->m_1765 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->m_1765)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->r_1767)).name))->all))) {
F->found_1769 = 1;
}
F->m_1765 = (*(P1006)rt_nil_check(F->m_1765)).mnext;
}
if ((!rt_r_echk(F->found_1769))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->d_457)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->r_1767)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P989)rt_nil_check((*(P996)rt_nil_check(F->d_457)).name))->all)); b_; }));
}
F->r_1767 = (*(P996)rt_nil_check(F->r_1767)).next;
}
if ((rt_r_ichk((*(P996)rt_nil_check(F->d_457)).ival) == ((rt_int)1LL))) {
F->m_1765 = (*(P1006)rt_nil_check(F->y_1764)).members;
while ((F->m_1765 != NULL)) {
F->z_1770 = NULL;
F->z_1770 = f_copy_sym_429(F->m_1765);
(*(P1006)rt_nil_check(F->z_1770)).name = f_renamed_446(F->d_457, F->m_1765);
f_define_164(F->z_1770, rt_r_ichk((*(P996)rt_nil_check(F->d_457)).line));
F->m_1765 = (*(P1006)rt_nil_check(F->m_1765)).mnext;
}
goto ret_;
}
while ((F->p_1766 != NULL)) {
F->found_1771 = RT_R_EUNDEF;
F->found_1771 = 0;
F->m_1765 = (*(P1006)rt_nil_check(F->y_1764)).members;
while ((F->m_1765 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->m_1765)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1766)).name))->all))) {
F->z_1772 = NULL;
F->z_1772 = f_copy_sym_429(F->m_1765);
if ((rt_r_ichk((*(P996)rt_nil_check(F->p_1766)).ival) == ((rt_int)1LL))) {
(*(P1006)rt_nil_check(F->z_1772)).ro_flag = 1;
}
(*(P1006)rt_nil_check(F->z_1772)).name = f_renamed_446(F->d_457, F->m_1765);
f_define_164(F->z_1772, rt_r_ichk((*(P996)rt_nil_check(F->d_457)).line));
F->found_1771 = 1;
}
F->m_1765 = (*(P1006)rt_nil_check(F->m_1765)).mnext;
}
if ((!rt_r_echk(F->found_1771))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->d_457)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1766)).name))->all), rt_str(" is not exported by ", 20)), (((P989)rt_nil_check((*(P996)rt_nil_check(F->d_457)).name))->all)); b_; }));
}
F->p_1766 = (*(P996)rt_nil_check(F->p_1766)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_460(P1002 t_459) {
  struct f_finish_ptr_460fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_459 = t_459;
F->d_1773 = NULL;
F->d_1773 = (*(P1002)rt_nil_check(F->t_459)).decl;
F->p_1774 = NULL;
F->c_1775 = NULL;
F->dummy_1776 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1776, rt_str(" ", 1));
if (((*(P1002)rt_nil_check(F->t_459)).target != NULL)) {
goto ret_;
}
f_open_scope_173();
{ rt_int lo1778 = ((rt_int)1LL), hi1779 = ((rt_int)2LL);
for (rt_int it1780 = lo1778; it1780 <= hi1779; it1780++) {
F->pass_1777 = it1780;
if ((F->pass_1777 == ((rt_int)1LL))) {
F->p_1774 = (*(P996)rt_nil_check(F->d_1773)).d;
} else {
F->p_1774 = (*(P996)rt_nil_check(F->d_1773)).b;
}
while ((F->p_1774 != NULL)) {
F->y_1781 = NULL;
F->y_1781 = f_new_sym_177((((rt_int)2LL)), (*(P996)rt_nil_check(F->p_1774)).name);
F->pc_1782 = NULL;
(*(P1006)rt_nil_check(F->y_1781)).t = f_resolve_subtype_264((*(P996)rt_nil_check(F->p_1774)).a, &F->pc_1782);
(*(P1006)rt_nil_check(F->y_1781)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_164(F->y_1781, rt_r_ichk((*(P996)rt_nil_check(F->d_1773)).line));
F->p_1774 = (*(P996)rt_nil_check(F->p_1774)).next;
}
}
}
(*(P1002)rt_nil_check(F->t_459)).target = f_resolve_subtype_264((*(P996)rt_nil_check(F->d_1773)).a, &F->c_1775);
if (((*(P996)rt_nil_check(F->d_1773)).c != NULL)) {
f_check_rep_328((*(P996)rt_nil_check(F->d_1773)).c, (*(P1002)rt_nil_check(F->t_459)).target, F->c_1775, 1, 1, F->d_1773);
(*(P1002)rt_nil_check(F->t_459)).repn = (*(P996)rt_nil_check(F->d_1773)).c;
}
f_close_scope_174();
(*rt_str_at(&F->dummy_1776, ((rt_int)1LL))) = rt_str_get(f_ctype_230(F->t_459), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1776, ((rt_int)1LL))) = rt_str_get(f_ctype_230((*(P1002)rt_nil_check(F->t_459)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P996 f_ptr_args_462(P998 c_461) {
  struct f_ptr_args_462fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_461 = c_461;
if ((F->c_461 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P998)rt_nil_check(F->c_461)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_467(P996 formals_463, P996 actuals_464, rstr *cell_465, rt_int line_466) {
  struct f_bind_ptr_params_467fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_463 = formals_463;
F->actuals_464 = actuals_464;
F->cell_465 = cell_465;
F->line_466 = line_466;
F->p_1783 = NULL;
F->p_1783 = F->formals_463;
F->a_1784 = NULL;
F->a_1784 = F->actuals_464;
F->vt_1785 = NULL;
if ((f_list_len_67(F->formals_463) != f_list_len_67(F->actuals_464))) {
f_fail_23(F->line_466, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_67(F->formals_463))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1783 != NULL)) {
F->pc_1786 = NULL;
F->y_1787 = NULL;
F->y_1787 = f_new_sym_177((((rt_int)2LL)), (*(P996)rt_nil_check(F->p_1783)).name);
(*(P1006)rt_nil_check(F->y_1787)).t = f_resolve_subtype_264((*(P996)rt_nil_check(F->p_1783)).a, &F->pc_1786);
{
F->v_1788 = rt_str_copy(f_gexpr_782(F->a_1784, (*(P1006)rt_nil_check(F->y_1787)).t, &F->vt_1785));
F->pv_1789 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_228(F->vt_1785, (*(P1006)rt_nil_check(F->y_1787)).t, F->line_466);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_230((*(P1006)rt_nil_check(F->y_1787)).t), rt_str(" ", 1)), F->pv_1789), rt_str(" = ", 3)), f_checked_209((*(P1006)rt_nil_check(F->y_1787)).t, F->pc_1786, &F->v_1788)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_465), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_465), rt_str("->p_", 4)), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1783)).name))->all))), rt_str(" = ", 3)), F->pv_1789), rt_str(";", 1)); b_; }));
}
(*(P1006)rt_nil_check(F->y_1787)).access = f_mk_3(&F->pv_1789);
}
f_define_164(F->y_1787, F->line_466);
F->p_1783 = (*(P996)rt_nil_check(F->p_1783)).next;
F->a_1784 = (*(P996)rt_nil_check(F->a_1784)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_472(P996 s_468, rstr *lv_469, P1002 t_470, P998 c_471) {
  struct f_alloc_cell_472fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_468 = s_468;
F->lv_469 = lv_469;
F->t_470 = t_470;
F->c_471 = c_471;
F->d_1790 = NULL;
F->d_1790 = (*(P1002)rt_nil_check(F->t_470)).decl;
F->tc_1791 = NULL;
F->vt_1792 = NULL;
F->pt_1793 = rt_str_copy(f_ctype_230(F->t_470));
F->cell_1794 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_342((*(P1002)rt_nil_check(F->t_470)).target)) {
F->fn_1795 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_1057 = 1;
g_uses_findyn_1059 = 1;
f_put_27(g_out_protos_1041, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1795), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1795), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_1048)) {
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P989)rt_nil_check((*(P1006)rt_nil_check(g_func_sym_1060)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_345(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1793), rt_str(")cell_)->all)", 13)); b_; }), (*(P1002)rt_nil_check(F->t_470)).target)); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_1048)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1793), rt_str(" ", 1)), F->cell_1794), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1794), rt_str(", ", 2)), F->fn_1795), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1793), rt_str(" ", 1)), F->cell_1794), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1794), rt_str(", ", 2)), F->fn_1795), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1793), rt_str(" ", 1)), F->cell_1794), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1794), rt_str(");", 2)); b_; }));
}
f_open_scope_173();
f_bind_ptr_params_467((*(P996)rt_nil_check(F->d_1790)).d, f_ptr_args_462(F->c_471), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P996)rt_nil_check(F->s_468)).line));
f_bind_ptr_params_467((*(P996)rt_nil_check(F->d_1790)).b, (*(P996)rt_nil_check(F->s_468)).b, &F->cell_1794, rt_r_ichk((*(P996)rt_nil_check(F->s_468)).line));
F->vt_1792 = f_resolve_subtype_264((*(P996)rt_nil_check(F->d_1790)).a, &F->tc_1791);
f_init_storage_337(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1794, rt_str("->all", 5)); b_; }), (*(P1002)rt_nil_check(F->t_470)).target, F->tc_1791);
f_close_scope_174();
if (((*(P996)rt_nil_check(F->s_468)).c != NULL)) {
F->v_1796 = rt_str_copy(f_gexpr_in_790((*(P996)rt_nil_check(F->s_468)).c, (*(P1002)rt_nil_check(F->t_470)).target, F->tc_1791, &F->vt_1792));
f_check_type_228(F->vt_1792, (*(P1002)rt_nil_check(F->t_470)).target, rt_r_ichk((*(P996)rt_nil_check(F->s_468)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_402(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1794, rt_str("->all", 5)); b_; }), (*(P1002)rt_nil_check(F->t_470)).target, &F->v_1796, F->tc_1791); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_469), rt_str(" = ", 3)), F->cell_1794), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P998 f_freeze_args_476(P998 c_473, P1002 t_474, rt_int line_475) {
  struct f_freeze_args_476fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_473 = c_473;
F->t_474 = t_474;
F->line_475 = line_475;
F->r_1797 = NULL;
F->r_1797 = f_copy_cons_202(F->c_473);
F->p_1798 = NULL;
F->p_1798 = (*(P996)rt_nil_check((*(P1002)rt_nil_check(F->t_474)).decl)).d;
F->a_1799 = NULL;
F->a_1799 = (*(P998)rt_nil_check(F->c_473)).args;
F->head_1800 = NULL;
F->tail_1801 = NULL;
F->saved_1802 = NULL;
F->saved_1802 = g_st_field_1054;
if ((f_list_len_67(F->p_1798) != f_list_len_67(F->a_1799))) {
f_fail_23(F->line_475, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_474)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_67(F->p_1798))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1799 != NULL)) {
F->pc_1803 = NULL;
F->vt_1804 = NULL;
F->pt_1805 = NULL;
F->pt_1805 = f_resolve_subtype_264((*(P996)rt_nil_check(F->p_1798)).a, &F->pc_1803);
F->nm_1806 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1807 = NULL;
F->y_1807 = f_new_sym_177((((rt_int)2LL)), f_mk_3(&F->nm_1806));
F->n_1808 = NULL;
F->n_1808 = f_nn_61((((rt_int)7LL)), F->line_475);
F->v_1809 = rt_str_copy(f_gexpr_782(F->a_1799, F->pt_1805, &F->vt_1804));
F->access_1810 = rt_str_copy(f_raw_storage_200(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_230(F->pt_1805); b_; })));
f_check_type_228(F->vt_1804, F->pt_1805, F->line_475);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1810, rt_str(" = ", 3)), f_checked_209(F->pt_1805, F->pc_1803, &F->v_1809)), rt_str(";", 1)); b_; }));
(*(P1006)rt_nil_check(F->y_1807)).t = F->pt_1805;
(*(P1006)rt_nil_check(F->y_1807)).ro_flag = 1;
f_bind_504(F->y_1807, &F->access_1810);
f_define_164(F->y_1807, F->line_475);
(*(P996)rt_nil_check(F->n_1808)).name = f_mk_3(&F->nm_1806);
f_append_65(&F->head_1800, &F->tail_1801, F->n_1808);
F->a_1799 = (*(P996)rt_nil_check(F->a_1799)).next;
F->p_1798 = (*(P996)rt_nil_check(F->p_1798)).next;
}
(*(P998)rt_nil_check(F->r_1797)).args = F->head_1800;
g_st_field_1054 = F->saved_1802;
F->result_ = F->r_1797;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_480(P1002 t_477, P998 c_478, P996 src_479) {
  struct f_ptr_subtype_check_480fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_477 = t_477;
F->c_478 = c_478;
F->src_479 = src_479;
F->lv_1811 = NULL;
F->st_1812 = NULL;
F->sc_1813 = NULL;
F->ro_1814 = RT_R_EUNDEF;
F->cond_1815 = NULL;
F->cond_1815 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1816 = NULL;
F->b_1817 = NULL;
F->at_1818 = NULL;
F->bt_1819 = NULL;
if ((((((rt_r_ichk((*(P1002)rt_nil_check(F->t_477)).kind) != (((rt_int)8LL))) || (F->c_478 == NULL)) || ((*(P998)rt_nil_check(F->c_478)).args == NULL)) || (F->src_479 == NULL)) || (!f_is_lvalue_745(F->src_479)))) {
goto ret_;
}
f_lvalue_751(F->src_479, &F->lv_1811, &F->st_1812, &F->sc_1813, &F->ro_1814);
if (((F->sc_1813 == NULL) || ((*(P998)rt_nil_check(F->sc_1813)).args == NULL))) {
goto ret_;
}
F->a_1816 = (*(P998)rt_nil_check(F->c_478)).args;
F->b_1817 = (*(P998)rt_nil_check(F->sc_1813)).args;
while (((F->a_1816 != NULL) && (F->b_1817 != NULL))) {
F->x_1820 = rt_str_copy(f_gexpr_782(F->a_1816, NULL, &F->at_1818));
F->y_1821 = rt_str_copy(f_gexpr_782(F->b_1817, F->at_1818, &F->bt_1819));
F->cond_1815 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->cond_1815))->all), rt_str(" || !", 5)), f_eq_code_409(F->at_1818, &F->x_1820, &F->y_1821)); b_; }));
F->a_1816 = (*(P996)rt_nil_check(F->a_1816)).next;
F->b_1817 = (*(P996)rt_nil_check(F->b_1817)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P989)rt_nil_check(F->cond_1815))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_normal_function_483(P996 d_481, P1006 y_482) {
  struct f_normal_function_483fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_481 = d_481;
F->y_482 = y_482;
F->p_1822 = NULL;
F->p_1822 = (*(P1006)rt_nil_check(F->y_482)).params;
F->imp_1823 = NULL;
F->imp_1823 = (*(P996)rt_nil_check(F->d_481)).d;
if (((rt_r_ichk((*(P996)rt_nil_check(F->d_481)).kind) != (((rt_int)46LL))) || (rt_mod(rt_r_ichk((*(P996)rt_nil_check(F->d_481)).flag), ((rt_int)2LL)) == ((rt_int)1LL)))) {
goto ret_;
}
while ((F->p_1822 != NULL)) {
if (((rt_r_ichk((*(P1008)rt_nil_check(F->p_1822)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P1008)rt_nil_check(F->p_1822)).mode) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->d_481)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may have only CONST and READONLY formal parameters: ", 70), (((P989)rt_nil_check((*(P996)rt_nil_check(F->d_481)).name))->all)); b_; }));
}
F->p_1822 = (*(P1008)rt_nil_check(F->p_1822)).next;
}
if ((((*(P996)rt_nil_check(F->d_481)).d == NULL) && (rt_r_ichk((*(P996)rt_nil_check(F->d_481)).flag) < ((rt_int)2LL)))) {
goto ret_;
}
if (((g_caps_1051 == NULL) || (rt_r_ichk(g_depth_1035) != rt_r_ichk((*(P1023)rt_nil_check(g_caps_1051)).depth)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->d_481)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function with an imports list must be local to a capsule body: ", 72), (((P989)rt_nil_check((*(P996)rt_nil_check(F->d_481)).name))->all)); b_; }));
}
while ((F->imp_1823 != NULL)) {
F->ro_1824 = RT_R_EUNDEF;
F->z_1825 = NULL;
F->z_1825 = f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->imp_1823)).name))->all));
if ((((F->z_1825 != NULL) && (rt_r_ichk((*(P1006)rt_nil_check(F->z_1825)).kind) == (((rt_int)1LL)))) && (rt_r_ichk((*(P1006)rt_nil_check(F->z_1825)).depth) != rt_r_ichk((*(P1023)rt_nil_check(g_caps_1051)).depth)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->d_481)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function imports only variables of its capsule body: ", 62), (((P989)rt_nil_check((*(P996)rt_nil_check(F->imp_1823)).name))->all)); b_; }));
}
if ((f_exported_427((*(P1023)rt_nil_check(g_caps_1051)).d, &(((P989)rt_nil_check((*(P996)rt_nil_check(F->imp_1823)).name))->all), &F->ro_1824) && (rt_r_ichk((*(P996)rt_nil_check((*(P1023)rt_nil_check(g_caps_1051)).d)).ival) != ((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->d_481)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may not import an exported variable: ", 55), (((P989)rt_nil_check((*(P996)rt_nil_check(F->imp_1823)).name))->all)); b_; }));
}
F->imp_1823 = (*(P996)rt_nil_check(F->imp_1823)).next;
}
(*(P1006)rt_nil_check(F->y_482)).capn = (*(P1023)rt_nil_check(g_caps_1051)).d;
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_485(P996 d_484) {
  struct f_declare_subprogram_485fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_484 = d_484;
f_define_164(f_build_subprogram_487(F->d_484), rt_r_ichk((*(P996)rt_nil_check(F->d_484)).line));
ret_:
  RT_FPOP();
  return;
}

static P1006 f_build_subprogram_487(P996 d_486) {
  struct f_build_subprogram_487fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_486 = d_486;
F->y_1826 = NULL;
F->p_1827 = NULL;
F->p_1827 = (*(P996)rt_nil_check(F->d_486)).a;
F->tail_1828 = NULL;
if ((rt_r_ichk((*(P996)rt_nil_check(F->d_486)).kind) == (((rt_int)46LL)))) {
F->y_1826 = f_new_sym_177((((rt_int)3LL)), (*(P996)rt_nil_check(F->d_486)).name);
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->d_486)).kind) == (((rt_int)50LL)))) {
F->y_1826 = f_new_sym_177((((rt_int)9LL)), (*(P996)rt_nil_check(F->d_486)).name);
} else {
F->y_1826 = f_new_sym_177((((rt_int)4LL)), (*(P996)rt_nil_check(F->d_486)).name);
}
while ((F->p_1827 != NULL)) {
F->pm_1829 = NULL;
if (((rt_r_ichk((*(P996)rt_nil_check(F->d_486)).kind) == (((rt_int)50LL))) && (rt_r_ichk((*(P996)rt_nil_check(F->p_1827)).ival) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->d_486)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a task may not have OUT formal parameters", 41); b_; }));
}
{ R1009 *cell1830 = rt_alloc(sizeof(R1009));
(*cell1830).name = NULL;
(*cell1830).t = NULL;
(*cell1830).c = NULL;
(*cell1830).cfield = NULL;
(*cell1830).next = NULL;
F->pm_1829 = cell1830;
}
(*(P1008)rt_nil_check(F->pm_1829)).name = (*(P996)rt_nil_check(F->p_1827)).name;
(*(P1008)rt_nil_check(F->pm_1829)).mode = rt_r_ichk((*(P996)rt_nil_check(F->p_1827)).ival);
(*(P1008)rt_nil_check(F->pm_1829)).t = f_resolve_subtype_264((*(P996)rt_nil_check(F->p_1827)).a, &(*(P1008)rt_nil_check(F->pm_1829)).c);
(*(P1008)rt_nil_check(F->pm_1829)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1827)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1828 == NULL)) {
(*(P1006)rt_nil_check(F->y_1826)).params = F->pm_1829;
} else {
(*(P1008)rt_nil_check(F->tail_1828)).next = F->pm_1829;
}
F->tail_1828 = F->pm_1829;
F->p_1827 = (*(P996)rt_nil_check(F->p_1827)).next;
}
(*(P1006)rt_nil_check(F->y_1826)).result = g_ty_void_1081;
if (((*(P996)rt_nil_check(F->d_486)).b != NULL)) {
F->rc_1831 = NULL;
F->pm_1832 = NULL;
F->pm_1832 = (*(P1006)rt_nil_check(F->y_1826)).params;
F->saved_1833 = NULL;
F->saved_1833 = g_code_1046;
g_code_1046 = f_new_buffer_24();
f_open_scope_173();
while ((F->pm_1832 != NULL)) {
F->z_1834 = NULL;
F->z_1834 = f_new_sym_177((((rt_int)2LL)), (*(P1008)rt_nil_check(F->pm_1832)).name);
(*(P1006)rt_nil_check(F->z_1834)).t = (*(P1008)rt_nil_check(F->pm_1832)).t;
(*(P1006)rt_nil_check(F->z_1834)).c = (*(P1008)rt_nil_check(F->pm_1832)).c;
(*(P1006)rt_nil_check(F->z_1834)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_164(F->z_1834, rt_r_ichk((*(P996)rt_nil_check(F->d_486)).line));
F->pm_1832 = (*(P1008)rt_nil_check(F->pm_1832)).next;
}
(*(P1006)rt_nil_check(F->y_1826)).result = f_resolve_subtype_264((*(P996)rt_nil_check(F->d_486)).b, &F->rc_1831);
f_close_scope_174();
g_code_1046 = F->saved_1833;
}
(*(P1006)rt_nil_check(F->y_1826)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_737(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->d_486)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P1006)rt_nil_check(F->y_1826)).decl = F->d_486;
(*(P1006)rt_nil_check(F->y_1826)).level = rt_r_ichk(g_cur_level_1049);
if ((rt_r_ichk((*(P996)rt_nil_check(F->d_486)).kind) == (((rt_int)50LL)))) {
f_put_27(g_out_globals_1042, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_1826)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1826;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_490(P989 pr_488, rstr *p_489) {
  struct f_has_pragmat_490fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_488 = pr_488;
F->p_489 = p_489;
if ((F->pr_488 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1836 = ((rt_int)1LL), hi1837 = rt_sub(((rt_int)(((((P989)rt_nil_check(F->pr_488))->all)).len)), ((rt_int)(((*F->p_489)).len)));
for (rt_int it1838 = lo1836; it1838 <= hi1837; it1838++) {
F->i_1835 = it1838;
if (((rt_str_eq(rt_str_slice((((P989)rt_nil_check(F->pr_488))->all), F->i_1835, rt_sub(rt_add(F->i_1835, ((rt_int)(((*F->p_489)).len))), ((rt_int)1LL))), (*F->p_489)) && (rt_r_echk(rt_str_get((((P989)rt_nil_check(F->pr_488))->all), rt_add(F->i_1835, ((rt_int)(((*F->p_489)).len))))) == 59)) && ((F->i_1835 == ((rt_int)1LL)) || (rt_r_echk(rt_str_get((((P989)rt_nil_check(F->pr_488))->all), rt_sub(F->i_1835, ((rt_int)1LL)))) == 59)))) {
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

static P989 f_suppressing_492(P989 pr_491) {
  struct f_suppressing_492fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_491 = pr_491;
F->r_1839 = NULL;
F->r_1839 = g_suppress_1066;
F->i_1840 = RT_R_IUNDEF;
F->i_1840 = ((rt_int)1LL);
if ((F->pr_491 == NULL)) {
F->result_ = F->r_1839;
goto ret_;
}
if ((F->r_1839 == NULL)) {
F->r_1839 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(rt_r_ichk(F->i_1840), ((rt_int)9LL)) <= ((rt_int)(((((P989)rt_nil_check(F->pr_491))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P989)rt_nil_check(F->pr_491))->all), rt_r_ichk(F->i_1840), rt_add(rt_r_ichk(F->i_1840), ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1841 = RT_R_IUNDEF;
F->j_1841 = rt_add(rt_r_ichk(F->i_1840), ((rt_int)9LL));
F->k_1842 = RT_R_IUNDEF;
F->k_1842 = rt_r_ichk(F->j_1841);
while ((rt_r_echk(rt_str_get((((P989)rt_nil_check(F->pr_491))->all), rt_r_ichk(F->k_1842))) != 41)) {
if ((rt_r_echk(rt_str_get((((P989)rt_nil_check(F->pr_491))->all), rt_r_ichk(F->k_1842))) == 44)) {
F->r_1839 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_1839))->all), rt_str_slice((((P989)rt_nil_check(F->pr_491))->all), rt_r_ichk(F->j_1841), rt_sub(rt_r_ichk(F->k_1842), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1841 = rt_add(rt_r_ichk(F->k_1842), ((rt_int)1LL));
}
F->k_1842 = rt_add(rt_r_ichk(F->k_1842), ((rt_int)1LL));
}
F->r_1839 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_1839))->all), rt_str_slice((((P989)rt_nil_check(F->pr_491))->all), rt_r_ichk(F->j_1841), rt_sub(rt_r_ichk(F->k_1842), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1840 = rt_r_ichk(F->k_1842);
}
F->i_1840 = rt_add(rt_r_ichk(F->i_1840), ((rt_int)1LL));
}
F->result_ = F->r_1839;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_suppressed_494(rstr *x_493) {
  struct f_suppressed_494fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_493 = x_493;
F->w_1843 = rt_str_new(rt_add(((rt_int)(((*F->x_493)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1843, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_493)), rt_str(" ", 1)));
if ((g_suppress_1066 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1845 = ((rt_int)1LL), hi1846 = rt_add(rt_sub(((rt_int)(((((P989)rt_nil_check(g_suppress_1066))->all)).len)), ((rt_int)((F->w_1843).len))), ((rt_int)1LL));
for (rt_int it1847 = lo1845; it1847 <= hi1846; it1847++) {
F->i_1844 = it1847;
if (rt_str_eq(rt_str_slice((((P989)rt_nil_check(g_suppress_1066))->all), F->i_1844, rt_sub(rt_add(F->i_1844, ((rt_int)((F->w_1843).len))), ((rt_int)1LL))), F->w_1843)) {
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

static void f_element_496(P996 e_495) {
  struct f_element_496fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_495 = e_495;
F->saved_1848 = NULL;
F->saved_1848 = g_suppress_1066;
g_suppress_1066 = f_suppressing_492((*(P996)rt_nil_check(F->e_495)).prags);
f_element1_498(F->e_495);
g_suppress_1066 = F->saved_1848;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_498(P996 e_497) {
  struct f_element1_498fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_497 = e_497;
F->k_1849 = RT_R_IUNDEF;
F->k_1849 = rt_r_ichk((*(P996)rt_nil_check(F->e_497)).kind);
if (((rt_r_ichk(F->k_1849) == (((rt_int)48LL))) && ((rt_r_ichk((*(P996)rt_nil_check(F->e_497)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P996)rt_nil_check(F->e_497)).flag) == ((rt_int)3LL))))) {
f_gen_expose_458(F->e_497);
} else if ((((rt_r_ichk(F->k_1849) == (((rt_int)45LL))) || (rt_r_ichk(F->k_1849) == (((rt_int)46LL)))) || (rt_r_ichk(F->k_1849) == (((rt_int)50LL))))) {
f_subprogram_555(F->e_497);
} else if ((rt_r_ichk(F->k_1849) == (((rt_int)51LL)))) {
F->g_1850 = NULL;
F->g_1850 = f_lookup_decl_161(F->e_497);
if ((F->g_1850 != NULL)) {
{ P1010 cell1851 = rt_alloc(sizeof *cell1851);
rt_int pv1852 = (((rt_int)4093LL));
cell1851->p_n = pv1852;
cell1851->all.lo = ((rt_int)0LL); cell1851->all.hi = pv1852;
cell1851->all.lo2 = cell1851->all.hi2 = 1;
cell1851->all.p = rt_alloc(sizeof(P1006) * (size_t)(RT_CNT(cell1851->all)) + 1);
for (rt_int i1853 = 0; i1853 < (RT_CNT(cell1851->all)); i1853++) {
cell1851->all.p[i1853] = NULL;
}
(*(P1006)rt_nil_check(F->g_1850)).env = cell1851;
}
{ rt_int lo1855 = ((rt_int)0LL), hi1856 = (((rt_int)4093LL));
for (rt_int it1857 = lo1855; it1857 <= hi1856; it1857++) {
F->i_1854 = it1857;
(((P1010)rt_nil_check((*(P1006)rt_nil_check(F->g_1850)).env))->all).p[(rt_index(F->i_1854, (((P1010)rt_nil_check((*(P1006)rt_nil_check(F->g_1850)).env))->all).lo, (((P1010)rt_nil_check((*(P1006)rt_nil_check(F->g_1850)).env))->all).hi) - (((P1010)rt_nil_check((*(P1006)rt_nil_check(F->g_1850)).env))->all).lo)] = ({ A1012 b_ = (((P1010)rt_nil_check(g_table_1032))->all); b_.p[(rt_index(F->i_1854, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((rt_r_ichk(F->k_1849) == (((rt_int)43LL))) && ((*(P996)rt_nil_check(F->e_497)).c != NULL)) && ((*(P996)rt_nil_check(F->e_497)).b == NULL))) {
F->c_1858 = NULL;
F->st_1859 = NULL;
F->st_1859 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P996)rt_nil_check(F->e_497)).line));
F->t_1860 = NULL;
(*(P996)rt_nil_check(F->st_1859)).name = (*(P996)rt_nil_check(F->e_497)).name;
F->t_1860 = f_resolve_subtype_264(F->st_1859, &F->c_1858);
} else if ((((((rt_r_ichk(F->k_1849) == (((rt_int)49LL))) || (rt_r_ichk(F->k_1849) == (((rt_int)42LL)))) || (rt_r_ichk(F->k_1849) == (((rt_int)43LL)))) || (rt_r_ichk(F->k_1849) == (((rt_int)47LL)))) || (rt_r_ichk(F->k_1849) == (((rt_int)48LL))))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1849) == (((rt_int)44LL)))) {
f_finish_ptr_460((*(P1006)rt_nil_check(f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_497)).name))->all)))).t);
} else if ((rt_r_ichk(F->k_1849) == (((rt_int)40LL)))) {
f_var_decl_506(F->e_497);
} else if (((rt_r_ichk(F->k_1849) == (((rt_int)41LL))) && (rt_r_ichk((*(P996)rt_nil_check(F->e_497)).flag) == ((rt_int)0LL)))) {
f_const_decl_553(F->e_497);
} else if ((rt_r_ichk(F->k_1849) == (((rt_int)41LL)))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1849) == (((rt_int)33LL)))) {
F->t_1861 = NULL;
F->c_1862 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_497)).a, g_ty_bool_1077, &F->t_1861));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1862), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_590(F->e_497);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_501(rstr *name_499, P1002 t_500) {
  struct f_storage_501fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_499 = name_499;
F->t_500 = t_500;
if ((!rt_r_echk(g_in_func_1048))) {
F->g_1863 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_499))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1042, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_230(F->t_500)), rt_str(" ", 1)), F->g_1863), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_1056, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1863), rt_str(");", 2)); b_; }));
g_st_field_1054 = f_mk_3(&F->g_1863);
F->result_ = F->g_1863;
goto ret_;
}
{
F->f_1864 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_499)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1047, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_230(F->t_500)), rt_str(" ", 1)), F->f_1864), rt_str(";", 1)); b_; }));
g_st_field_1054 = f_mk_3(&F->f_1864);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1864);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_504(P1006 y_502, rstr *access_503) {
  struct f_bind_504fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_502 = y_502;
F->access_503 = access_503;
if (rt_r_echk(g_in_func_1048)) {
(*(P1006)rt_nil_check(F->y_502)).level = rt_r_ichk(g_cur_level_1049);
(*(P1006)rt_nil_check(F->y_502)).access = g_st_field_1054;
} else {
(*(P1006)rt_nil_check(F->y_502)).level = ((rt_int)0LL);
(*(P1006)rt_nil_check(F->y_502)).access = f_mk_3(&(*F->access_503));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_506(P996 d_505) {
  struct f_var_decl_506fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_505 = d_505;
if ((rt_r_ichk((*(P996)rt_nil_check(F->d_505)).ival) == ((rt_int)2LL))) {
f_located_var_508(F->d_505);
} else {
f_var_decl2_547(F->d_505);
}
ret_:
  RT_FPOP();
  return;
}

static void f_located_var_508(P996 d_507) {
  struct f_located_var_508fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_507 = d_507;
F->c_1865 = NULL;
F->at_1866 = NULL;
F->t_1867 = NULL;
F->t_1867 = f_resolve_subtype_264((*(P996)rt_nil_check(F->d_507)).a, &F->c_1865);
F->y_1868 = NULL;
F->y_1868 = f_new_sym_177((((rt_int)1LL)), (*(P996)rt_nil_check(F->d_507)).name);
F->addr_1869 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->d_507)).c, g_ty_int_1076, &F->at_1866));
F->av_1870 = rt_str_copy(f_raw_storage_200(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("loc", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_int", 6); b_; })));
F->af_1871 = rt_str_copy((((P989)rt_nil_check(g_st_field_1054))->all));
f_check_type_228(F->at_1866, g_ty_int_1076, rt_r_ichk((*(P996)rt_nil_check(F->d_507)).line));
F->c_1865 = f_freeze_205(F->c_1865, F->t_1867);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->av_1870, rt_str(" = ", 3)), F->addr_1869), rt_str(";", 1)); b_; }));
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_1867)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->t_1867)).repn != NULL))) {
F->access_1872 = rt_str_copy(f_storage_501(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->d_507)).name))->all), F->t_1867));
g_mark_uninit_1068 = 1;
f_init_storage_337(&F->access_1872, F->t_1867, F->c_1865);
g_mark_uninit_1068 = 0;
(*(P1006)rt_nil_check(F->y_1868)).t = F->t_1867;
(*(P1006)rt_nil_check(F->y_1868)).c = F->c_1865;
f_bind_504(F->y_1868, &F->access_1872);
if (rt_r_echk(g_in_func_1048)) {
(*(P1006)rt_nil_check(F->y_1868)).loc = f_mk_3(&F->af_1871);
} else {
(*(P1006)rt_nil_check(F->y_1868)).loc = f_mk_3(&F->av_1870);
}
f_define_164(F->y_1868, rt_r_ichk((*(P996)rt_nil_check(F->d_507)).line));
if (((*(P996)rt_nil_check(F->d_507)).b != NULL)) {
F->vt_1873 = NULL;
F->v_1874 = rt_str_copy(f_gexpr_in_790((*(P996)rt_nil_check(F->d_507)).b, F->t_1867, F->c_1865, &F->vt_1873));
f_check_type_228(F->vt_1873, F->t_1867, rt_r_ichk((*(P996)rt_nil_check(F->d_507)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_402(&F->access_1872, F->t_1867, &F->v_1874, F->c_1865); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_511(F->y_1868, 1); b_; }));
}
goto ret_;
}
{
F->pv_1875 = rt_str_copy(f_raw_storage_200(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->d_507)).name))->all)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_ctype_230(F->t_1867), rt_str(" *", 2)); b_; })));
F->pf_1876 = rt_str_copy((((P989)rt_nil_check(g_st_field_1054))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->pv_1875, rt_str(" = (", 4)), f_ctype_230(F->t_1867)), rt_str(" *)rt_r_mem_at(", 15)), F->av_1870), rt_str(", sizeof(", 9)), f_ctype_230(F->t_1867)), rt_str("));", 3)); b_; }));
(*(P1006)rt_nil_check(F->y_1868)).t = F->t_1867;
(*(P1006)rt_nil_check(F->y_1868)).c = F->c_1865;
if (rt_r_echk(g_in_func_1048)) {
(*(P1006)rt_nil_check(F->y_1868)).level = rt_r_ichk(g_cur_level_1049);
(*(P1006)rt_nil_check(F->y_1868)).access = f_mk_3(&F->pf_1876);
(*(P1006)rt_nil_check(F->y_1868)).byref = 1;
} else {
(*(P1006)rt_nil_check(F->y_1868)).level = ((rt_int)0LL);
(*(P1006)rt_nil_check(F->y_1868)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1875), rt_str(")", 1)); b_; }));
}
g_mark_uninit_1068 = 1;
f_init_storage_337(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1875), rt_str(")", 1)); b_; }), F->t_1867, F->c_1865);
g_mark_uninit_1068 = 0;
f_define_164(F->y_1868, rt_r_ichk((*(P996)rt_nil_check(F->d_507)).line));
if (((*(P996)rt_nil_check(F->d_507)).b != NULL)) {
F->vt_1877 = NULL;
F->v_1878 = rt_str_copy(f_gexpr_in_790((*(P996)rt_nil_check(F->d_507)).b, F->t_1867, F->c_1865, &F->vt_1877));
f_check_type_228(F->vt_1877, F->t_1867, rt_r_ichk((*(P996)rt_nil_check(F->d_507)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_402(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1875), rt_str(")", 1)); b_; }), F->t_1867, &F->v_1878, F->c_1865); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_rep_sync_511(P1006 y_509, int pack_510) {
  struct f_rep_sync_511fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_509 = y_509;
F->pack_510 = pack_510;
F->lv_1879 = rt_str_copy(f_access_of_729(F->y_509));
F->base_1880 = rt_str_copy(f_cbound_access_513(F->y_509));
F->saved_1881 = NULL;
F->saved_1881 = g_psub_1053;
F->p_1882 = NULL;
F->p_1882 = (*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_509)).t)).tparams;
F->r_1883 = NULL;
F->inner_1884 = NULL;
F->inner_1884 = f_mk_3(&F->lv_1879);
if (((*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_509)).t)).tparams != NULL)) {
F->inner_1884 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->lv_1879, rt_str(".all", 4)); b_; }));
}
f_open_scope_173();
while ((F->p_1882 != NULL)) {
F->z_1885 = NULL;
F->z_1885 = f_new_sym_177((((rt_int)2LL)), (*(P996)rt_nil_check(F->p_1882)).name);
(*(P1006)rt_nil_check(F->z_1885)).t = f_tparam_type_348((*(P1006)rt_nil_check(F->y_509)).t, &(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1882)).name))->all));
(*(P1006)rt_nil_check(F->z_1885)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->lv_1879), rt_str(".p_", 3)), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_1882)).name))->all))), rt_str(")", 1)); b_; }));
f_define_164(F->z_1885, rt_r_ichk((*(P1006)rt_nil_check(F->y_509)).decl_line));
F->p_1882 = (*(P996)rt_nil_check(F->p_1882)).next;
}
F->r_1883 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_code_533((*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_509)).t)).under, (*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_509)).t)).elemcons, (*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_509)).t)).repn, &(((P989)rt_nil_check(F->inner_1884))->all), &F->base_1880, F->pack_510); b_; }));
f_close_scope_174();
g_psub_1053 = F->saved_1881;
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ ", 2), (((P989)rt_nil_check(F->r_1883))->all)), rt_str(" }", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cbound_access_513(P1006 y_512) {
  struct f_cbound_access_513fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_512 = y_512;
F->c_1886 = NULL;
F->c_1886 = f_new_cons_180();
(*(P998)rt_nil_check(F->c_1886)).dyn = (rt_r_ichk((*(P1006)rt_nil_check(F->y_512)).level) > ((rt_int)0LL));
(*(P998)rt_nil_check(F->c_1886)).lvl = rt_r_ichk((*(P1006)rt_nil_check(F->y_512)).level);
F->result_ = f_cbound_187(F->c_1886, &(((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_512)).loc))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_rep_size_517(P996 items_514, P1002 t_515, P998 c_516) {
  struct f_rep_size_517fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_514 = items_514;
F->t_515 = t_515;
F->c_516 = c_516;
F->it_1887 = NULL;
F->it_1887 = f_rep_find_520(F->items_514, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SIZE", 4); b_; }));
F->at_1888 = NULL;
if ((F->it_1887 != NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_782((*(P996)rt_nil_check(F->it_1887)).a, g_ty_int_1076, &F->at_1888)), rt_str(")", 1));
goto ret_;
}
F->result_ = f_itos_7(f_default_bits_526(F->t_515, F->c_516));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_rep_find_520(P996 items_518, rstr *w_519) {
  struct f_rep_find_520fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_518 = items_518;
F->w_519 = w_519;
F->it_1889 = NULL;
F->it_1889 = F->items_518;
while ((F->it_1889 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->it_1889)).name))->all), (*F->w_519))) {
F->result_ = F->it_1889;
goto ret_;
}
F->it_1889 = (*(P996)rt_nil_check(F->it_1889)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_rep_comp_523(P996 items_521, rstr *name_522) {
  struct f_rep_comp_523fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_521 = items_521;
F->name_522 = name_522;
F->r_1890 = NULL;
F->r_1890 = f_rep_find_520(F->items_521, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RECORD", 6); b_; }));
F->comp_1891 = NULL;
if ((F->r_1890 == NULL)) {
F->r_1890 = f_rep_find_520(F->items_521, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNION", 5); b_; }));
}
if ((F->r_1890 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->comp_1891 = (*(P996)rt_nil_check(F->r_1890)).c;
while ((F->comp_1891 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->comp_1891)).name))->all), (*F->name_522))) {
F->result_ = (*(P996)rt_nil_check(F->comp_1891)).a;
goto ret_;
}
F->comp_1891 = (*(P996)rt_nil_check(F->comp_1891)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_default_bits_526(P1002 t_524, P998 c_525) {
  struct f_default_bits_526fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_524 = t_524;
F->c_525 = c_525;
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_524)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_524)).kind) == (((rt_int)17LL))))) {
F->f_1892 = NULL;
F->f_1892 = (*(P1002)rt_nil_check(F->t_524)).fields;
F->n_1893 = RT_R_IUNDEF;
F->n_1893 = ((rt_int)0LL);
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_524)).kind) == (((rt_int)17LL)))) {
F->n_1893 = f_needed_bits_317((*(P1002)rt_nil_check(F->t_524)).elem, NULL);
}
while ((F->f_1892 != NULL)) {
F->n_1893 = rt_add(rt_r_ichk(F->n_1893), f_default_bits_526((*(P1004)rt_nil_check(F->f_1892)).t, (*(P1004)rt_nil_check(F->f_1892)).c));
F->f_1892 = (*(P1004)rt_nil_check(F->f_1892)).next;
}
F->result_ = rt_r_ichk(F->n_1893);
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_524)).kind) == (((rt_int)4LL))) && f_same_217(F->t_524, g_ty_ascii_1079))) {
F->result_ = ((rt_int)8LL);
goto ret_;
} else if ((f_needed_bits_317(F->t_524, F->c_525) > ((rt_int)0LL))) {
F->result_ = f_needed_bits_317(F->t_524, F->c_525);
goto ret_;
}
F->result_ = ((rt_int)64LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_rep_code_533(P1002 t_527, P998 c_528, P996 items_529, rstr *lval_530, rstr *addr_531, int pack_532) {
  struct f_rep_code_533fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_527 = t_527;
F->c_528 = c_528;
F->items_529 = items_529;
F->lval_530 = lval_530;
F->addr_531 = addr_531;
F->pack_532 = pack_532;
F->size_1894 = rt_str_copy(f_rep_size_517(F->items_529, F->t_527, F->c_528));
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_527)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_527)).kind) == (((rt_int)17LL))))) {
F->f_1895 = NULL;
F->f_1895 = (*(P1002)rt_nil_check(F->t_527)).fields;
F->r_1896 = NULL;
F->r_1896 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->off_1897 = NULL;
F->off_1897 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->i_1898 = RT_R_IUNDEF;
F->i_1898 = ((rt_int)0LL);
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_527)).kind) == (((rt_int)17LL)))) {
F->ti_1899 = NULL;
F->ti_1899 = f_rep_comp_523(F->items_529, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TAG", 3); b_; }));
F->tsize_1900 = NULL;
F->tsize_1900 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(f_needed_bits_317((*(P1002)rt_nil_check(F->t_527)).elem, NULL)); b_; }));
F->toff_1901 = NULL;
F->toff_1901 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
if (((F->ti_1899 != NULL) && (f_rep_find_520(F->ti_1899, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SIZE", 4); b_; })) != NULL))) {
F->tsize_1900 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_size_517(F->ti_1899, (*(P1002)rt_nil_check(F->t_527)).elem, NULL); b_; }));
}
if (((F->ti_1899 != NULL) && (f_rep_find_520(F->ti_1899, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })) != NULL))) {
F->at_1902 = NULL;
F->toff_1901 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_782((*(P996)rt_nil_check(f_rep_find_520(F->ti_1899, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })))).a, g_ty_int_1076, &F->at_1902)), rt_str(")", 1)); b_; }));
}
if (F->pack_532) {
F->r_1896 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_mem_put(", 13), (*F->addr_531)), rt_str(" + ", 3)), (((P989)rt_nil_check(F->toff_1901))->all)), rt_str(", ", 2)), (((P989)rt_nil_check(F->tsize_1900))->all)), rt_str(", (uint64_t)", 12)), (*F->lval_530)), rt_str(".tag);", 6)); b_; }));
} else {
F->r_1896 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_530), rt_str(".tag = (int)rt_r_mem_get(", 25)), (*F->addr_531)), rt_str(" + ", 3)), (((P989)rt_nil_check(F->toff_1901))->all)), rt_str(", ", 2)), (((P989)rt_nil_check(F->tsize_1900))->all)), rt_str(", 0);", 5)); b_; }));
}
F->off_1897 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P989)rt_nil_check(F->toff_1901))->all)), rt_str(" + ", 3)), (((P989)rt_nil_check(F->tsize_1900))->all)), rt_str(")", 1)); b_; }));
}
while ((F->f_1895 != NULL)) {
F->ci_1903 = NULL;
F->ci_1903 = f_rep_comp_523(F->items_529, &(((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_1895)).name))->all));
F->fo_1904 = NULL;
F->fo_1904 = F->off_1897;
F->fl_1905 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_530), rt_str(".", 1)), f_union_part_535(F->t_527)), f_field_c_17(&(((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_1895)).name))->all))));
if (((F->ci_1903 != NULL) && (f_rep_find_520(F->ci_1903, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })) != NULL))) {
F->at_1906 = NULL;
F->fo_1904 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_782((*(P996)rt_nil_check(f_rep_find_520(F->ci_1903, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })))).a, g_ty_int_1076, &F->at_1906)), rt_str(")", 1)); b_; }));
}
{
F->part_1907 = rt_str_copy(f_rep_code_533((*(P1004)rt_nil_check(F->f_1895)).t, (*(P1004)rt_nil_check(F->f_1895)).c, F->ci_1903, &F->fl_1905, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->addr_531), rt_str(" + ", 3)), (((P989)rt_nil_check(F->fo_1904))->all)); b_; }), F->pack_532));
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_527)).kind) == (((rt_int)17LL)))) {
F->r_1896 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_1896))->all), rt_str(" if (", 5)), (*F->lval_530)), rt_str(".tag == ", 8)), f_itos_7(rt_r_ichk(F->i_1898))), rt_str(") { ", 4)), F->part_1907), rt_str(" }", 2)); b_; }));
} else {
F->r_1896 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_1896))->all), rt_str(" ", 1)), F->part_1907); b_; }));
}
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_527)).kind) == (((rt_int)7LL)))) {
F->off_1897 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P989)rt_nil_check(F->fo_1904))->all)), rt_str(" + ", 3)), f_rep_size_517(F->ci_1903, (*(P1004)rt_nil_check(F->f_1895)).t, (*(P1004)rt_nil_check(F->f_1895)).c)), rt_str(")", 1)); b_; }));
}
F->i_1898 = rt_add(rt_r_ichk(F->i_1898), ((rt_int)1LL));
F->f_1895 = (*(P1004)rt_nil_check(F->f_1895)).next;
}
F->result_ = (((P989)rt_nil_check(F->r_1896))->all);
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_527)).kind) == (((rt_int)6LL)))) {
F->ai_1908 = NULL;
F->ai_1908 = f_rep_find_520(F->items_529, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ARRAY", 5); b_; }));
F->ei_1909 = NULL;
if ((F->ai_1908 != NULL)) {
F->ei_1909 = (*(P996)rt_nil_check(F->ai_1908)).c;
}
{
F->es_1910 = rt_str_copy(f_rep_size_517(F->ei_1909, (*(P1002)rt_nil_check(F->t_527)).elem, (*(P1002)rt_nil_check(F->t_527)).elemcons));
F->iv_1911 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ri", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->iv_1911), rt_str(" = 0; ", 6)), F->iv_1911), rt_str(" < ", 3)), f_acnt_245(F->t_527, &(*F->lval_530))), rt_str("; ", 2)), F->iv_1911), rt_str("++) { ", 6)), f_rep_code_533((*(P1002)rt_nil_check(F->t_527)).elem, (*(P1002)rt_nil_check(F->t_527)).elemcons, F->ei_1909, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_530), rt_str(".p[", 3)), F->iv_1911), rt_str("]", 1)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->addr_531), rt_str(" + ", 3)), F->iv_1911), rt_str(" * ", 3)), F->es_1910); b_; }), F->pack_532)), rt_str(" }", 2));
goto ret_;
}
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_527)).kind) == (((rt_int)5LL)))) {
F->iv_1912 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ri", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->iv_1912), rt_str(" = 0; ", 6)), F->iv_1912), rt_str(" < ", 3)), (*F->lval_530)), rt_str(".len; ", 6)), F->iv_1912), rt_str("++) { ", 6)), f_rep_scalar_542(f_str_elem_214(F->t_527), NULL, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_530), rt_str(".p[", 3)), F->iv_1912), rt_str("]", 1)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->addr_531), rt_str(" + ", 3)), F->iv_1912), rt_str(" * 8", 4)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("8", 1); b_; }), F->pack_532)), rt_str(" }", 2));
goto ret_;
}
F->result_ = f_rep_scalar_542(F->t_527, F->c_528, &(*F->lval_530), &(*F->addr_531), &F->size_1894, F->pack_532);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_union_part_535(P1002 t_534) {
  struct f_union_part_535fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_534 = t_534;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_534)).kind) == (((rt_int)17LL)))) {
F->result_ = rt_str("u.", 2);
goto ret_;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_rep_scalar_542(P1002 t_536, P998 c_537, rstr *lval_538, rstr *addr_539, rstr *size_540, int pack_541) {
  struct f_rep_scalar_542fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_536 = t_536;
F->c_537 = c_537;
F->lval_538 = lval_538;
F->addr_539 = addr_539;
F->size_540 = size_540;
F->pack_541 = pack_541;
F->signed_1913 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->signed_1913, rt_str("0", 1));
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_536)).kind) == (((rt_int)1LL))) && (!(((F->c_537 != NULL) && rt_r_echk((*(P998)rt_nil_check(F->c_537)).hasm)) && (rt_r_ichk((*(P998)rt_nil_check(F->c_537)).mlo) >= ((rt_int)0LL)))))) {
rt_str_assign(&F->signed_1913, rt_str("1", 1));
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_536)).kind) == (((rt_int)3LL)))) {
if (F->pack_541) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_mem_putf(", 14), (*F->addr_539)), rt_str(", ", 2)), (*F->size_540)), rt_str(", ", 2)), (*F->lval_538)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_538), rt_str(" = rt_r_mem_getf(", 17)), (*F->addr_539)), rt_str(", ", 2)), (*F->size_540)), rt_str(");", 2));
goto ret_;
} else if (F->pack_541) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (!rt_r_undef_", 16), f_kind_name_224(f_base_of_219(F->t_536))), rt_str("(", 1)), (*F->lval_538)), rt_str(")) rt_r_mem_put(", 16)), (*F->addr_539)), rt_str(", ", 2)), (*F->size_540)), rt_str(", rt_r_fits((rt_int)(", 21)), (*F->lval_538)), rt_str("), ", 3)), (*F->size_540)), rt_str(", ", 2)), F->signed_1913), rt_str("));", 3));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_538), rt_str(" = rt_r_mem_get(", 16)), (*F->addr_539)), rt_str(", ", 2)), (*F->size_540)), rt_str(", ", 2)), F->signed_1913), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_max_range_545(P1002 t_543, P998 c_544) {
  struct f_max_range_545fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_543 = t_543;
F->c_544 = c_544;
if ((F->c_544 == NULL)) {
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_543)).kind) == (((rt_int)3LL))) && ((*(P998)rt_nil_check(F->c_544)).prec != NULL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_maxprec(", 13), (((P989)rt_nil_check((*(P998)rt_nil_check(F->c_544)).prec))->all)), rt_str(");", 2)); b_; }));
}
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_543)).kind) == (((rt_int)3LL))) && ((*(P998)rt_nil_check(F->c_544)).lo != NULL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_maxrange_f(", 16), f_clo_189(F->c_544)), rt_str(", ", 2)), f_chi_191(F->c_544)), rt_str(");", 2)); b_; }));
} else if ((((rt_r_ichk((*(P1002)rt_nil_check(F->t_543)).kind) == (((rt_int)1LL))) && ((*(P998)rt_nil_check(F->c_544)).lo != NULL)) && (!rt_r_echk((*(P998)rt_nil_check(F->c_544)).hasm)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_maxrange_i(", 16), f_clo_189(F->c_544)), rt_str(", ", 2)), f_chi_191(F->c_544)), rt_str(");", 2)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl2_547(P996 d_546) {
  struct f_var_decl2_547fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_546 = d_546;
F->c_1914 = NULL;
F->t_1915 = NULL;
F->t_1915 = f_resolve_subtype_264((*(P996)rt_nil_check(F->d_546)).a, &F->c_1914);
F->y_1916 = NULL;
F->y_1916 = f_new_sym_177((((rt_int)1LL)), (*(P996)rt_nil_check(F->d_546)).name);
F->access_1917 = rt_str_copy(f_storage_501(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->d_546)).name))->all), F->t_1915));
F->c_1914 = f_freeze_205(F->c_1914, F->t_1915);
f_max_range_545(F->t_1915, F->c_1914);
if ((((rt_r_ichk((*(P1002)rt_nil_check(F->t_1915)).kind) == (((rt_int)8LL))) && (F->c_1914 != NULL)) && ((*(P998)rt_nil_check(F->c_1914)).args != NULL))) {
F->c_1914 = f_freeze_args_476(F->c_1914, F->t_1915, rt_r_ichk((*(P996)rt_nil_check(F->d_546)).line));
}
g_mark_uninit_1068 = 1;
f_init_storage_337(&F->access_1917, F->t_1915, F->c_1914);
g_mark_uninit_1068 = 0;
if ((rt_r_ichk((*(P996)rt_nil_check(F->d_546)).ival) == ((rt_int)1LL))) {
F->it_1918 = NULL;
F->n_1919 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->d_546)).c, g_ty_int_1076, &F->it_1918));
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_1915)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->d_546)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_217((*(P1002)rt_nil_check(F->t_1915)).elem, g_ty_ascii_1079)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1917), rt_str(", ", 2)), F->n_1919), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1917), rt_str(", ", 2)), F->n_1919), rt_str(", 0);", 5)); b_; }));
}
}
if (((*(P996)rt_nil_check(F->d_546)).b != NULL)) {
F->vt_1920 = NULL;
F->v_1921 = rt_str_copy(f_gexpr_in_790((*(P996)rt_nil_check(F->d_546)).b, F->t_1915, F->c_1914, &F->vt_1920));
f_check_type_228(F->vt_1920, F->t_1915, rt_r_ichk((*(P996)rt_nil_check(F->d_546)).line));
f_ptr_subtype_check_480(F->t_1915, F->c_1914, (*(P996)rt_nil_check(F->d_546)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_402(&F->access_1917, F->t_1915, &F->v_1921, F->c_1914); b_; }));
}
(*(P1006)rt_nil_check(F->y_1916)).t = F->t_1915;
(*(P1006)rt_nil_check(F->y_1916)).c = F->c_1914;
f_bind_504(F->y_1916, &F->access_1917);
f_define_164(F->y_1916, rt_r_ichk((*(P996)rt_nil_check(F->d_546)).line));
if (f_needs_fin_342(F->t_1915)) {
f_open_fin_549(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_345(&F->access_1917, F->t_1915); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_549(rstr *fc_548) {
  struct f_open_fin_549fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_548 = fc_548;
F->f_1922 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1923 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1922), rt_str("; if (RT_TRY(", 13)), F->f_1922), rt_str(")) {", 4)); b_; }));
f_push_cleanup_587(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1922), rt_str("); ", 3)), (*F->fc_548)); b_; }));
{ R1001 *cell1924 = rt_alloc(sizeof(R1001));
(*cell1924).s = NULL;
(*cell1924).next = NULL;
F->l_1923 = cell1924;
}
(*(P1000)rt_nil_check(F->l_1923)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1922), rt_str("); ", 3)), (*F->fc_548)), rt_str(" } else { RT_POP(", 17)), F->f_1922), rt_str("); ", 3)), (*F->fc_548)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P1000)rt_nil_check(F->l_1923)).next = g_fins_1058;
g_fins_1058 = F->l_1923;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_551(P1000 saved_550) {
  struct f_close_fins_551fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_550 = saved_550;
while (((g_fins_1058 != F->saved_550) && (g_fins_1058 != NULL))) {
f_emit_29(&(((P989)rt_nil_check((*(P1000)rt_nil_check(g_fins_1058)).s))->all));
f_pop_cleanup_588();
g_fins_1058 = (*(P1000)rt_nil_check(g_fins_1058)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_553(P996 d_552) {
  struct f_const_decl_553fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_552 = d_552;
F->c_1925 = NULL;
F->c_1925 = f_new_cons_180();
F->t_1926 = NULL;
F->vt_1927 = NULL;
F->y_1928 = NULL;
F->y_1928 = f_new_sym_177((((rt_int)2LL)), (*(P996)rt_nil_check(F->d_552)).name);
F->ok_1929 = RT_R_EUNDEF;
if (((*(P996)rt_nil_check(F->d_552)).a != NULL)) {
F->t_1926 = f_resolve_subtype_264((*(P996)rt_nil_check(F->d_552)).a, &F->c_1925);
}
{
F->v_1930 = rt_str_copy(f_gexpr_in_790((*(P996)rt_nil_check(F->d_552)).b, F->t_1926, F->c_1925, &F->vt_1927));
if ((F->t_1926 != NULL)) {
f_check_type_228(F->vt_1927, F->t_1926, rt_r_ichk((*(P996)rt_nil_check(F->d_552)).line));
} else {
F->t_1926 = F->vt_1927;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_1926)).kind) == (((rt_int)1LL)))) {
(*(P1006)rt_nil_check(F->y_1928)).mvalue = f_manifest_362((*(P996)rt_nil_check(F->d_552)).b, &F->ok_1929);
(*(P1006)rt_nil_check(F->y_1928)).hasmv = rt_r_echk(F->ok_1929);
}
{
F->access_1931 = rt_str_copy(f_storage_501(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->d_552)).name))->all), F->t_1926));
if (((*(P1002)rt_nil_check(F->t_1926)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_340((*(P1002)rt_nil_check(F->t_1926)).initp, &F->access_1931); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1931, rt_str(" = ", 3)), f_checked_209(F->t_1926, F->c_1925, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_405(F->t_1926, &F->v_1930); b_; }))), rt_str(";", 1)); b_; }));
f_bind_504(F->y_1928, &F->access_1931);
if (f_needs_fin_342(F->t_1926)) {
f_open_fin_549(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_345(&F->access_1931, F->t_1926); b_; }));
}
}
}
(*(P1006)rt_nil_check(F->y_1928)).t = F->t_1926;
(*(P1006)rt_nil_check(F->y_1928)).c = F->c_1925;
(*(P1006)rt_nil_check(F->y_1928)).ro_flag = 1;
f_define_164(F->y_1928, rt_r_ichk((*(P996)rt_nil_check(F->d_552)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_555(P996 d_554) {
  struct f_subprogram_555fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_554 = d_554;
f_gen_subprogram_558(F->d_554, f_lookup_decl_161(F->d_554));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_558(P996 d_556, P1006 y_557) {
  struct f_gen_subprogram_558fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_556 = d_556;
F->y_557 = y_557;
F->saved_code_1932 = NULL;
F->saved_code_1932 = g_code_1046;
F->saved_fields_1933 = NULL;
F->saved_fields_1933 = g_fields_buf_1047;
F->saved_in_1934 = RT_R_EUNDEF;
F->saved_in_1934 = rt_r_echk(g_in_func_1048);
F->saved_sym_1935 = NULL;
F->saved_sym_1935 = g_func_sym_1060;
F->saved_exits_1936 = NULL;
F->saved_exits_1936 = g_exits_1069;
F->saved_gotos_1937 = NULL;
F->saved_gotos_1937 = g_gotos_1070;
F->saved_frames_1938 = RT_R_IUNDEF;
F->saved_frames_1938 = rt_r_ichk(g_frames_1071);
F->args_1939 = NULL;
F->args_1939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1940 = NULL;
F->pm_1940 = (*(P1006)rt_nil_check(F->y_557)).params;
F->saved_handlers_1941 = NULL;
F->saved_handlers_1941 = g_handlers_1072;
F->saved_cleanups_1942 = NULL;
F->saved_cleanups_1942 = g_cleanups_1073;
F->ctx_1943 = NULL;
F->head_1944 = NULL;
F->frame_1945 = NULL;
F->frame_1945 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_557)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_1946 = NULL;
F->copy_back_1947 = NULL;
F->copy_back_1947 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1948 = NULL;
F->pfin_1948 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1949 = NULL;
F->saved_fins_1949 = g_fins_1058;
F->saved_rc_1950 = NULL;
F->saved_rc_1950 = g_func_rc_1061;
F->saved_ret_1951 = NULL;
F->saved_ret_1951 = g_cap_ret_1062;
F->saved_rflag_1952 = NULL;
F->saved_rflag_1952 = g_cap_rflag_1063;
F->pn_1953 = NULL;
F->pn_1953 = (*(P996)rt_nil_check(F->d_556)).a;
F->nonrec_end_1954 = NULL;
F->has_pfin_1955 = RT_R_EUNDEF;
if (rt_r_echk(g_in_func_1048)) {
F->parent_1946 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P1006)rt_nil_check(g_func_sym_1060)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_1058 = NULL;
g_func_rc_1061 = NULL;
g_cap_ret_1062 = NULL;
g_cap_rflag_1063 = NULL;
g_code_1046 = f_new_buffer_24();
g_fields_buf_1047 = f_new_buffer_24();
g_in_func_1048 = 1;
g_func_sym_1060 = F->y_557;
g_exits_1069 = NULL;
g_gotos_1070 = NULL;
g_frames_1071 = ((rt_int)0LL);
g_handlers_1072 = NULL;
g_cleanups_1073 = NULL;
g_cur_level_1049 = rt_add(rt_r_ichk(g_cur_level_1049), ((rt_int)1LL));
f_open_scope_173();
{ R1014 *cell1956 = rt_alloc(sizeof(R1014));
(*cell1956).imps = NULL;
(*cell1956).next = NULL;
F->ctx_1943 = cell1956;
}
(*(P1013)rt_nil_check(F->ctx_1943)).depth = rt_r_ichk(g_depth_1035);
(*(P1013)rt_nil_check(F->ctx_1943)).imps = (*(P996)rt_nil_check(F->d_556)).d;
(*(P1013)rt_nil_check(F->ctx_1943)).all_imp = (rt_r_ichk((*(P996)rt_nil_check(F->d_556)).flag) >= ((rt_int)2LL));
(*(P1013)rt_nil_check(F->ctx_1943)).next = g_fctx_1050;
g_fctx_1050 = F->ctx_1943;
if ((F->parent_1946 != NULL)) {
f_put_27(g_fields_buf_1047, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P989)rt_nil_check(F->parent_1946))->all)), rt_str(" *up;", 5)); b_; }));
if ((rt_r_ichk((*(P1006)rt_nil_check(F->y_557)).kind) != (((rt_int)9LL)))) {
F->args_1939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P989)rt_nil_check(F->parent_1946))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1940 != NULL)) {
F->ct_1957 = rt_str_copy(f_ctype_230((*(P1008)rt_nil_check(F->pm_1940)).t));
F->f_1958 = rt_str_copy((((P989)rt_nil_check((*(P1008)rt_nil_check(F->pm_1940)).cfield))->all));
F->p_1959 = NULL;
F->pc_1960 = NULL;
F->pc_1960 = (*(P1008)rt_nil_check(F->pm_1940)).c;
F->ac_1961 = NULL;
if ((((rt_int)(((((P989)rt_nil_check(F->args_1939))->all)).len)) > ((rt_int)0LL))) {
F->args_1939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->args_1939))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_182((*(P1008)rt_nil_check(F->pm_1940)).t)) {
F->fc_1962 = NULL;
F->ft_1963 = NULL;
F->ft_1963 = f_resolve_subtype_264((*(P996)rt_nil_check(F->pn_1953)).a, &F->fc_1962);
F->pc_1960 = f_freeze_205(F->fc_1962, (*(P1008)rt_nil_check(F->pm_1940)).t);
}
if ((rt_r_ichk((*(P1008)rt_nil_check(F->pm_1940)).mode) == (((rt_int)1LL)))) {
F->p_1959 = f_new_sym_177((((rt_int)2LL)), (*(P1008)rt_nil_check(F->pm_1940)).name);
f_put_27(g_fields_buf_1047, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1957), rt_str(" ", 1)), F->f_1958), rt_str(";", 1)); b_; }));
F->args_1939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->args_1939))->all), F->ct_1957), rt_str(" ", 1)), F->f_1958); b_; }));
(*(P1006)rt_nil_check(F->p_1959)).access = f_mk_3(&F->f_1958);
if ((rt_r_ichk((*(P1006)rt_nil_check(F->y_557)).kind) != (((rt_int)9LL)))) {
if (((*(P1002)rt_nil_check((*(P1008)rt_nil_check(F->pm_1940)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_340((*(P1002)rt_nil_check((*(P1008)rt_nil_check(F->pm_1940)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1958); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1958), rt_str(" = ", 3)), f_checked_209((*(P1008)rt_nil_check(F->pm_1940)).t, F->pc_1960, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_405((*(P1008)rt_nil_check(F->pm_1940)).t, &F->f_1958); b_; }))), rt_str(";", 1)); b_; }));
if (f_needs_fin_342((*(P1008)rt_nil_check(F->pm_1940)).t)) {
F->pfin_1948 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->pfin_1948))->all), f_fin_code_345(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_1958); b_; }), (*(P1008)rt_nil_check(F->pm_1940)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_1959 = f_new_sym_177((((rt_int)1LL)), (*(P1008)rt_nil_check(F->pm_1940)).name);
f_put_27(g_fields_buf_1047, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1957), rt_str(" *", 2)), F->f_1958), rt_str(";", 1)); b_; }));
F->args_1939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->args_1939))->all), F->ct_1957), rt_str(" *", 2)), F->f_1958); b_; }));
(*(P1006)rt_nil_check(F->p_1959)).access = f_mk_3(&F->f_1958);
(*(P1006)rt_nil_check(F->p_1959)).byref = 1;
if ((rt_r_ichk((*(P1006)rt_nil_check(F->y_557)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1958), rt_str(" = ", 3)), F->f_1958), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_182((*(P1008)rt_nil_check(F->pm_1940)).t)) {
F->bt_1964 = rt_str_copy(f_bound_ctype_184((*(P1008)rt_nil_check(F->pm_1940)).t));
f_put_27(g_fields_buf_1047, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_1964), rt_str(" ", 1)), F->f_1958), rt_str("lo, ", 4)), F->f_1958), rt_str("hi;", 3)); b_; }));
F->args_1939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->args_1939))->all), rt_str(", ", 2)), F->bt_1964), rt_str(" ", 1)), F->f_1958), rt_str("lo, ", 4)), F->bt_1964), rt_str(" ", 1)), F->f_1958), rt_str("hi", 2)); b_; }));
if ((rt_r_ichk((*(P1006)rt_nil_check(F->y_557)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1958), rt_str("lo = ", 5)), F->f_1958), rt_str("lo; F->", 7)), F->f_1958), rt_str("hi = ", 5)), F->f_1958), rt_str("hi;", 3)); b_; }));
}
F->ac_1961 = f_new_cons_180();
(*(P998)rt_nil_check(F->ac_1961)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1958, rt_str("lo", 2)); b_; }));
(*(P998)rt_nil_check(F->ac_1961)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1958, rt_str("hi", 2)); b_; }));
(*(P998)rt_nil_check(F->ac_1961)).dyn = 1;
(*(P998)rt_nil_check(F->ac_1961)).lvl = rt_r_ichk(g_cur_level_1049);
if (((F->pc_1960 == NULL) || ((*(P998)rt_nil_check(F->pc_1960)).lo == NULL))) {
F->pc_1960 = F->ac_1961;
} else if ((rt_r_ichk((*(P1008)rt_nil_check(F->pm_1940)).mode) != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_1958), rt_str("lo <= F->", 9)), F->f_1958), rt_str("hi && (F->", 10)), F->f_1958), rt_str("lo != ", 6)), f_sub_lo_194((*(P1008)rt_nil_check(F->pm_1940)).t, F->pc_1960)), rt_str(" || F->", 7)), F->f_1958), rt_str("hi != ", 6)), f_sub_hi_197((*(P1008)rt_nil_check(F->pm_1940)).t, F->pc_1960)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if (((rt_r_ichk((*(P1008)rt_nil_check(F->pm_1940)).mode) == (((rt_int)3LL))) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_557)).kind) != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_1047, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_1957), rt_str(" ", 1)), F->f_1958), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1958), rt_str("v = ", 4)), f_copy_code_405((*(P1008)rt_nil_check(F->pm_1940)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_1958); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P1002)rt_nil_check((*(P1008)rt_nil_check(F->pm_1940)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_340((*(P1002)rt_nil_check((*(P1008)rt_nil_check(F->pm_1940)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1958), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_1961 == NULL)) {
F->ac_1961 = (*(P1008)rt_nil_check(F->pm_1940)).c;
}
if ((!rt_str_eq(f_uninit_value_356(f_base_of_219((*(P1008)rt_nil_check(F->pm_1940)).t)), rt_str("", 0)))) {
F->copy_back_1947 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->copy_back_1947))->all), rt_str("  if (!rt_r_undef_", 18)), f_kind_name_224(f_base_of_219((*(P1008)rt_nil_check(F->pm_1940)).t))), rt_str("(F->", 4)), F->f_1958), rt_str("v)) ", 4)), f_assign_code_402(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1958), rt_str(")", 1)); b_; }), (*(P1008)rt_nil_check(F->pm_1940)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1958), rt_str("v", 1)); b_; }), F->ac_1961)); b_; }));
} else {
F->copy_back_1947 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->copy_back_1947))->all), rt_str("  ", 2)), f_assign_code_402(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_1958), rt_str(")", 1)); b_; }), (*(P1008)rt_nil_check(F->pm_1940)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1958), rt_str("v", 1)); b_; }), F->ac_1961)); b_; }));
}
if (f_needs_fin_342((*(P1008)rt_nil_check(F->pm_1940)).t)) {
F->pfin_1948 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->pfin_1948))->all), f_fin_code_345(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1958), rt_str("v", 1)); b_; }), (*(P1008)rt_nil_check(F->pm_1940)).t)), rt_str(" ", 1)); b_; }));
}
(*(P1006)rt_nil_check(F->p_1959)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_1958, rt_str("v", 1)); b_; }));
(*(P1006)rt_nil_check(F->p_1959)).byref = 0;
}
}
(*(P1006)rt_nil_check(F->p_1959)).t = (*(P1008)rt_nil_check(F->pm_1940)).t;
(*(P1006)rt_nil_check(F->p_1959)).c = F->pc_1960;
(*(P1006)rt_nil_check(F->p_1959)).level = rt_r_ichk(g_cur_level_1049);
(*(P1006)rt_nil_check(F->p_1959)).ro_flag = ((rt_r_ichk((*(P1008)rt_nil_check(F->pm_1940)).mode) == (((rt_int)1LL))) || (rt_r_ichk((*(P1008)rt_nil_check(F->pm_1940)).mode) == (((rt_int)4LL))));
f_define_164(F->p_1959, rt_r_ichk((*(P996)rt_nil_check(F->d_556)).line));
F->pm_1940 = (*(P1008)rt_nil_check(F->pm_1940)).next;
F->pn_1953 = (*(P996)rt_nil_check(F->pn_1953)).next;
}
if ((rt_r_ichk((*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_557)).result)).kind) != (((rt_int)9LL)))) {
if (((*(P996)rt_nil_check(F->d_556)).b != NULL)) {
F->rc_1965 = NULL;
F->rt_1966 = NULL;
F->rt_1966 = f_resolve_subtype_264((*(P996)rt_nil_check(F->d_556)).b, &F->rc_1965);
g_func_rc_1061 = f_freeze_205(F->rc_1965, (*(P1006)rt_nil_check(F->y_557)).result);
}
f_put_27(g_fields_buf_1047, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_230((*(P1006)rt_nil_check(F->y_557)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_557)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_340((*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_557)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_1955 = (((rt_int)(((((P989)rt_nil_check(F->pfin_1948))->all)).len)) > ((rt_int)0LL));
if (rt_r_echk(F->has_pfin_1955)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_587(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_490((*(P996)rt_nil_check(F->d_556)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_490((*(P996)rt_nil_check(F->d_556)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_1967 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_1968 = NULL;
F->leave_1968 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_1967), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_1042, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_1967), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_1967), rt_str(", ", 2)), f_bool_text_373(f_has_pragmat_490((*(P996)rt_nil_check(F->d_556)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_373(f_has_pragmat_490((*(P996)rt_nil_check(F->d_556)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P989)rt_nil_check((*(P996)rt_nil_check(F->d_556)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_587(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_1947 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->copy_back_1947))->all), rt_str("  ", 2)), (((P989)rt_nil_check(F->leave_1968))->all)); b_; }));
F->nonrec_end_1954 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P989)rt_nil_check(F->leave_1968))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
f_declare_labels_568((*(P996)rt_nil_check(F->d_556)).c);
f_declare_body_421((*(P996)rt_nil_check(F->d_556)).c);
{
F->xu_1969 = rt_str_copy(f_open_unhandled_581((*(P996)rt_nil_check(F->d_556)).c));
f_body_elements_577((*(P996)rt_nil_check(F->d_556)).c);
f_close_fins_551(NULL);
f_close_unhandled_583(&F->xu_1969);
}
if ((F->nonrec_end_1954 != NULL)) {
f_emit_29(&(((P989)rt_nil_check(F->nonrec_end_1954))->all));
f_pop_cleanup_588();
}
if (rt_r_echk(F->has_pfin_1955)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P989)rt_nil_check(F->pfin_1948))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_588();
F->copy_back_1947 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->copy_back_1947))->all), rt_str("  ", 2)), (((P989)rt_nil_check(F->pfin_1948))->all)); b_; }));
}
f_close_scope_174();
g_fctx_1050 = (*(P1013)rt_nil_check(g_fctx_1050)).next;
g_cur_level_1049 = rt_sub(rt_r_ichk(g_cur_level_1049), ((rt_int)1LL));
if (((((rt_int)(((((P989)rt_nil_check(F->args_1939))->all)).len)) == ((rt_int)0LL)) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_557)).kind) == (((rt_int)9LL))))) {
F->args_1939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if ((rt_r_ichk((*(P1006)rt_nil_check(F->y_557)).kind) == (((rt_int)9LL)))) {
F->args_1939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1944 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_230((*(P1006)rt_nil_check(F->y_557)).result)), rt_str(" ", 1)), (((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_557)).cname))->all)), rt_str("(", 1)), (((P989)rt_nil_check(F->args_1939))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_1041, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->head_1944))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->head_1944))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_1055, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P989)rt_nil_check(F->frame_1945))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_1055, g_fields_buf_1047);
f_put_27(g_out_frames_1055, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if ((rt_r_ichk((*(P1006)rt_nil_check(F->y_557)).kind) == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P989)rt_nil_check(F->frame_1945))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P989)rt_nil_check(F->frame_1945))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_1043, g_code_1046);
if ((rt_r_ichk((*(P1002)rt_nil_check((*(P1006)rt_nil_check(F->y_557)).result)).kind) != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P989)rt_nil_check(F->copy_back_1947))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_1043, &(((P989)rt_nil_check(F->copy_back_1947))->all));
}
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P989)rt_nil_check(F->copy_back_1947))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_1043, &(((P989)rt_nil_check(F->copy_back_1947))->all));
}
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_1046 = F->saved_code_1932;
g_fields_buf_1047 = F->saved_fields_1933;
g_in_func_1048 = rt_r_echk(F->saved_in_1934);
g_func_sym_1060 = F->saved_sym_1935;
g_exits_1069 = F->saved_exits_1936;
g_gotos_1070 = F->saved_gotos_1937;
g_frames_1071 = rt_r_ichk(F->saved_frames_1938);
g_handlers_1072 = F->saved_handlers_1941;
g_cleanups_1073 = F->saved_cleanups_1942;
g_fins_1058 = F->saved_fins_1949;
g_func_rc_1061 = F->saved_rc_1950;
g_cap_ret_1062 = F->saved_ret_1951;
g_cap_rflag_1063 = F->saved_rflag_1952;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_560(P996 d_559) {
  struct f_waits_of_560fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_559 = d_559;
F->w_1970 = NULL;
F->w_1970 = g_cap_waits_1052;
while ((F->w_1970 != NULL)) {
if (((*(P1025)rt_nil_check(F->w_1970)).d == F->d_559)) {
F->result_ = (((P989)rt_nil_check((*(P1025)rt_nil_check(F->w_1970)).w))->all);
goto ret_;
}
F->w_1970 = (*(P1025)rt_nil_check(F->w_1970)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_562(P996 elems_561) {
  struct f_task_waits_562fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_561 = elems_561;
F->e_1971 = NULL;
F->e_1971 = F->elems_561;
F->r_1972 = NULL;
F->r_1972 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_1971 != NULL)) {
if ((rt_r_ichk((*(P996)rt_nil_check(F->e_1971)).kind) == (((rt_int)50LL)))) {
F->r_1972 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_1972))->all), rt_str(" rt_await_decl(&", 16)), (((P989)rt_nil_check((*(P1006)rt_nil_check(f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_1971)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if (((rt_r_ichk((*(P996)rt_nil_check(F->e_1971)).kind) == (((rt_int)47LL))) || ((rt_r_ichk((*(P996)rt_nil_check(F->e_1971)).kind) == (((rt_int)48LL))) && ((rt_r_ichk((*(P996)rt_nil_check(F->e_1971)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P996)rt_nil_check(F->e_1971)).flag) == ((rt_int)3LL)))))) {
F->r_1972 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_1972))->all), f_waits_of_560(F->e_1971)); b_; }));
}
F->e_1971 = (*(P996)rt_nil_check(F->e_1971)).next;
}
F->result_ = (((P989)rt_nil_check(F->r_1972))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_564(P996 elems_563) {
  struct f_await_tasks_564fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_563 = elems_563;
F->w_1973 = rt_str_copy(f_task_waits_562(F->elems_563));
if ((((rt_int)((F->w_1973).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_1973);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_566(P996 elems_565) {
  struct f_capsule_elements_566fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_565 = elems_565;
F->e_1974 = NULL;
F->e_1974 = F->elems_565;
while ((F->e_1974 != NULL)) {
if (((rt_r_ichk((*(P996)rt_nil_check(F->e_1974)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P996)rt_nil_check(F->e_1974)).kind) <= (((rt_int)36LL))))) {
f_start_labels_569();
}
f_element_496(F->e_1974);
F->e_1974 = (*(P996)rt_nil_check(F->e_1974)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_568(P996 elems_567) {
  struct f_declare_labels_568fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_567 = elems_567;
F->e_1975 = NULL;
F->e_1975 = F->elems_567;
while ((F->e_1975 != NULL)) {
F->l_1976 = NULL;
F->l_1976 = (*(P996)rt_nil_check(F->e_1975)).labels;
while ((F->l_1976 != NULL)) {
F->x_1977 = NULL;
F->x_1977 = g_gotos_1070;
while (((F->x_1977 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->x_1977)).depth) == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P989)rt_nil_check((*(P1021)rt_nil_check(F->x_1977)).match))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->l_1976)).name))->all))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->l_1976)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P989)rt_nil_check((*(P996)rt_nil_check(F->l_1976)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_1977 = (*(P1021)rt_nil_check(F->x_1977)).next;
}
{ R1022 *cell1978 = rt_alloc(sizeof(R1022));
(*cell1978).match = NULL;
(*cell1978).label = NULL;
(*cell1978).next = NULL;
F->x_1977 = cell1978;
}
(*(P1021)rt_nil_check(F->x_1977)).match = (*(P996)rt_nil_check(F->l_1976)).name;
(*(P1021)rt_nil_check(F->x_1977)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P1021)rt_nil_check(F->x_1977)).depth = rt_neg(((rt_int)1LL));
(*(P1021)rt_nil_check(F->x_1977)).next = g_gotos_1070;
g_gotos_1070 = F->x_1977;
F->l_1976 = (*(P996)rt_nil_check(F->l_1976)).next;
}
F->e_1975 = (*(P996)rt_nil_check(F->e_1975)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_569(void) {
  struct f_start_labels_569fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1979 = NULL;
F->x_1979 = g_gotos_1070;
while (((F->x_1979 != NULL) && (rt_r_ichk((*(P1021)rt_nil_check(F->x_1979)).depth) == rt_neg(((rt_int)1LL))))) {
(*(P1021)rt_nil_check(F->x_1979)).depth = rt_r_ichk(g_frames_1071);
F->x_1979 = (*(P1021)rt_nil_check(F->x_1979)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P1021 f_goto_label_571(rstr *name_570) {
  struct f_goto_label_571fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_570 = name_570;
F->x_1980 = NULL;
F->x_1980 = g_gotos_1070;
while ((F->x_1980 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P1021)rt_nil_check(F->x_1980)).match))->all), (*F->name_570))) {
F->result_ = F->x_1980;
goto ret_;
}
F->x_1980 = (*(P1021)rt_nil_check(F->x_1980)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_573(P996 e_572) {
  struct f_has_return_573fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_572 = e_572;
F->x_1981 = NULL;
F->x_1981 = F->e_572;
while ((F->x_1981 != NULL)) {
if ((rt_r_ichk((*(P996)rt_nil_check(F->x_1981)).kind) == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if ((((((rt_r_ichk((*(P996)rt_nil_check(F->x_1981)).kind) != (((rt_int)45LL))) && (rt_r_ichk((*(P996)rt_nil_check(F->x_1981)).kind) != (((rt_int)46LL)))) && (rt_r_ichk((*(P996)rt_nil_check(F->x_1981)).kind) != (((rt_int)50LL)))) && (rt_r_ichk((*(P996)rt_nil_check(F->x_1981)).kind) != (((rt_int)47LL)))) && (rt_r_ichk((*(P996)rt_nil_check(F->x_1981)).kind) != (((rt_int)51LL))))) {
if ((((((*(P996)rt_nil_check(F->x_1981)).a != NULL) && f_has_return_573((*(P996)rt_nil_check(F->x_1981)).a)) || (((*(P996)rt_nil_check(F->x_1981)).b != NULL) && f_has_return_573((*(P996)rt_nil_check(F->x_1981)).b))) || (((*(P996)rt_nil_check(F->x_1981)).c != NULL) && f_has_return_573((*(P996)rt_nil_check(F->x_1981)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_1981 = (*(P996)rt_nil_check(F->x_1981)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_575(P996 elems_574) {
  struct f_capsule_body_575fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_574 = elems_574;
F->saved_ret_1982 = NULL;
F->saved_ret_1982 = g_cap_ret_1062;
F->saved_flag_1983 = NULL;
F->saved_flag_1983 = g_cap_rflag_1063;
F->saved_frames_1984 = RT_R_IUNDEF;
F->saved_frames_1984 = rt_r_ichk(g_ret_frames_1064);
F->e_1985 = NULL;
F->e_1985 = F->elems_574;
if ((!f_has_return_573(F->elems_574))) {
g_cap_ret_1062 = NULL;
g_cap_rflag_1063 = NULL;
f_capsule_elements_566(F->elems_574);
} else {
g_cap_rflag_1063 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_200(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(g_cap_rflag_1063))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_1985 != NULL)) {
F->stmt_1986 = RT_R_EUNDEF;
F->stmt_1986 = ((rt_r_ichk((*(P996)rt_nil_check(F->e_1985)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P996)rt_nil_check(F->e_1985)).kind) <= (((rt_int)36LL))));
g_cap_ret_1062 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_1064 = rt_r_ichk(g_frames_1071);
if (rt_r_echk(F->stmt_1986)) {
f_start_labels_569();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P989)rt_nil_check(g_cap_rflag_1063))->all)), rt_str(") {", 3)); b_; }));
}
f_element_496(F->e_1985);
if (rt_r_echk(F->stmt_1986)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(g_cap_ret_1062))->all), rt_str(": ;", 3)); b_; }));
F->e_1985 = (*(P996)rt_nil_check(F->e_1985)).next;
}
}
g_cap_ret_1062 = F->saved_ret_1982;
g_cap_rflag_1063 = F->saved_flag_1983;
g_ret_frames_1064 = rt_r_ichk(F->saved_frames_1984);
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_577(P996 elems_576) {
  struct f_body_elements_577fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_576 = elems_576;
f_capsule_elements_566(F->elems_576);
f_await_tasks_564(F->elems_576);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_579(P996 elems_578) {
  struct f_gen_body_579fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_578 = elems_578;
F->saved_1987 = NULL;
F->saved_1987 = g_fins_1058;
F->saved_gotos_1988 = NULL;
F->saved_gotos_1988 = g_gotos_1070;
f_open_scope_173();
f_declare_labels_568(F->elems_578);
f_declare_body_421(F->elems_578);
{
F->xu_1989 = rt_str_copy(f_open_unhandled_581(F->elems_578));
f_body_elements_577(F->elems_578);
f_close_fins_551(F->saved_1987);
f_close_unhandled_583(&F->xu_1989);
}
f_close_scope_174();
g_gotos_1070 = F->saved_gotos_1988;
ret_:
  RT_FPOP();
  return;
}

static rstr f_open_unhandled_581(P996 elems_580) {
  struct f_open_unhandled_581fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_580 = elems_580;
F->e_1990 = NULL;
F->e_1990 = F->elems_580;
F->conds_1991 = NULL;
F->conds_1991 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->e_1990 != NULL)) {
if ((rt_r_ichk((*(P996)rt_nil_check(F->e_1990)).kind) == (((rt_int)49LL)))) {
F->conds_1991 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->conds_1991))->all), rt_str(" || rt_xcur == ", 15)), (((P989)rt_nil_check((*(P1006)rt_nil_check(f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_1990)).name))->all)))).cname))->all)); b_; }));
}
F->e_1990 = (*(P996)rt_nil_check(F->e_1990)).next;
}
if ((((rt_int)(((((P989)rt_nil_check(F->conds_1991))->all)).len)) == ((rt_int)1LL))) {
F->result_ = rt_str("", 0);
goto ret_;
}
{
F->f_1992 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xu", 2); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1992), rt_str("; if (RT_TRY(", 13)), F->f_1992), rt_str(")) {", 4)); b_; }));
f_push_cleanup_587(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1992), rt_str(");", 2)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(F->f_1992, rt_str(":", 1)), (((P989)rt_nil_check(F->conds_1991))->all));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_close_unhandled_583(rstr *xu_582) {
  struct f_close_unhandled_583fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->xu_582 = xu_582;
F->i_1993 = RT_R_IUNDEF;
F->i_1993 = ((rt_int)1LL);
if (rt_str_eq((*F->xu_582), rt_str("", 0))) {
goto ret_;
}
while ((rt_r_echk(rt_str_get((*F->xu_582), rt_r_ichk(F->i_1993))) != 58)) {
F->i_1993 = rt_add(rt_r_ichk(F->i_1993), ((rt_int)1LL));
}
{
F->f_1994 = rt_str_copy(rt_str_slice((*F->xu_582), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1993), ((rt_int)1LL))));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1994), rt_str("); } else { RT_POP(", 19)), F->f_1994), rt_str("); if (", 7)), rt_str_slice((*F->xu_582), rt_add(rt_r_ichk(F->i_1993), ((rt_int)1LL)), ((rt_int)(((*F->xu_582)).len)))), rt_str(") rt_raise(rt_exc(", 18)), f_q_18()), rt_str("X_UNHANDLED", 11)), f_q_18()), rt_str(")); rt_raise(rt_xcur); }", 24)); b_; }));
f_pop_cleanup_588();
}
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_585(rt_int upto_584) {
  struct f_pop_frames_585fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_584 = upto_584;
F->i_1995 = RT_R_IUNDEF;
F->i_1995 = rt_r_ichk(g_frames_1071);
F->c_1996 = NULL;
F->c_1996 = g_cleanups_1073;
while ((rt_r_ichk(F->i_1995) > F->upto_584)) {
f_emit_29(&(((P989)rt_nil_check((*(P1000)rt_nil_check(F->c_1996)).s))->all));
F->c_1996 = (*(P1000)rt_nil_check(F->c_1996)).next;
F->i_1995 = rt_sub(rt_r_ichk(F->i_1995), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_587(rstr *s_586) {
  struct f_push_cleanup_587fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_586 = s_586;
F->c_1997 = NULL;
{ R1001 *cell1998 = rt_alloc(sizeof(R1001));
(*cell1998).s = NULL;
(*cell1998).next = NULL;
F->c_1997 = cell1998;
}
(*(P1000)rt_nil_check(F->c_1997)).s = f_mk_3(&(*F->s_586));
(*(P1000)rt_nil_check(F->c_1997)).next = g_cleanups_1073;
g_cleanups_1073 = F->c_1997;
g_frames_1071 = rt_add(rt_r_ichk(g_frames_1071), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_588(void) {
  struct f_pop_cleanup_588fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_1073 = (*(P1000)rt_nil_check(g_cleanups_1073)).next;
g_frames_1071 = rt_sub(rt_r_ichk(g_frames_1071), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_590(P996 s_589) {
  struct f_gen_statement_590fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_589 = s_589;
F->located_1999 = NULL;
F->located_1999 = f_located_in_593(f_copy_node_821(F->s_589), NULL);
F->l_2000 = NULL;
F->l_2000 = F->located_1999;
while ((F->l_2000 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_511(F->l_2000, 0); b_; }));
F->l_2000 = (*(P1006)rt_nil_check(F->l_2000)).reqs_sym;
}
f_gen_statement2_598(F->s_589);
F->l_2000 = F->located_1999;
while ((F->l_2000 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_511(F->l_2000, 1); b_; }));
F->l_2000 = (*(P1006)rt_nil_check(F->l_2000)).reqs_sym;
}
ret_:
  RT_FPOP();
  return;
}

static P1006 f_located_in_593(P996 e_591, P1006 found_592) {
  struct f_located_in_593fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_591 = e_591;
F->found_592 = found_592;
F->x_2001 = NULL;
F->x_2001 = F->e_591;
F->r_2002 = NULL;
F->r_2002 = F->found_592;
while ((F->x_2001 != NULL)) {
if ((rt_r_ichk((*(P996)rt_nil_check(F->x_2001)).kind) == (((rt_int)7LL)))) {
F->y_2003 = NULL;
F->y_2003 = f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->x_2001)).name))->all));
if (((((F->y_2003 != NULL) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_2003)).kind) == (((rt_int)1LL)))) && ((*(P1006)rt_nil_check(F->y_2003)).loc != NULL)) && (!f_sym_in_596(F->r_2002, F->y_2003)))) {
(*(P1006)rt_nil_check(F->y_2003)).reqs_sym = F->r_2002;
F->r_2002 = F->y_2003;
}
} else if ((((((rt_r_ichk((*(P996)rt_nil_check(F->x_2001)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P996)rt_nil_check(F->x_2001)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P996)rt_nil_check(F->x_2001)).kind) == (((rt_int)50LL)))) || (rt_r_ichk((*(P996)rt_nil_check(F->x_2001)).kind) == (((rt_int)47LL)))) || (rt_r_ichk((*(P996)rt_nil_check(F->x_2001)).kind) == (((rt_int)51LL))))) {
F->result_ = F->r_2002;
goto ret_;
}
if (((*(P996)rt_nil_check(F->x_2001)).a != NULL)) {
F->r_2002 = f_located_in_593((*(P996)rt_nil_check(F->x_2001)).a, F->r_2002);
}
if (((*(P996)rt_nil_check(F->x_2001)).b != NULL)) {
F->r_2002 = f_located_in_593((*(P996)rt_nil_check(F->x_2001)).b, F->r_2002);
}
if (((*(P996)rt_nil_check(F->x_2001)).c != NULL)) {
F->r_2002 = f_located_in_593((*(P996)rt_nil_check(F->x_2001)).c, F->r_2002);
}
F->x_2001 = (*(P996)rt_nil_check(F->x_2001)).next;
}
F->result_ = F->r_2002;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_sym_in_596(P1006 l_594, P1006 y_595) {
  struct f_sym_in_596fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_594 = l_594;
F->y_595 = y_595;
F->p_2004 = NULL;
F->p_2004 = F->l_594;
while ((F->p_2004 != NULL)) {
if ((F->p_2004 == F->y_595)) {
F->result_ = 1;
goto ret_;
}
F->p_2004 = (*(P1006)rt_nil_check(F->p_2004)).reqs_sym;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_statement2_598(P996 s_597) {
  struct f_gen_statement2_598fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_597 = s_597;
F->label_2005 = NULL;
F->gl_2006 = NULL;
F->gl_2006 = (*(P996)rt_nil_check(F->s_597)).labels;
while ((F->gl_2006 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P1021)rt_nil_check(f_goto_label_571(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->gl_2006)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_2006 = (*(P996)rt_nil_check(F->gl_2006)).next;
}
if (((*(P996)rt_nil_check(F->s_597)).tag != NULL)) {
F->x_2007 = NULL;
{ R1022 *cell2008 = rt_alloc(sizeof(R1022));
(*cell2008).match = NULL;
(*cell2008).label = NULL;
(*cell2008).next = NULL;
F->x_2007 = cell2008;
}
F->label_2005 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P1021)rt_nil_check(F->x_2007)).match = (*(P996)rt_nil_check(F->s_597)).tag;
(*(P1021)rt_nil_check(F->x_2007)).label = F->label_2005;
(*(P1021)rt_nil_check(F->x_2007)).depth = rt_r_ichk(g_frames_1071);
(*(P1021)rt_nil_check(F->x_2007)).next = g_exits_1069;
g_exits_1069 = F->x_2007;
}
{ rt_int sel2009 = rt_r_ichk((*(P996)rt_nil_check(F->s_597)).kind);
if (0 || (sel2009 == (((rt_int)20LL)))) {
f_st_assign_600(F->s_597);
} else if (0 || (sel2009 == (((rt_int)21LL)))) {
f_st_call_602(F->s_597);
} else if (0 || (sel2009 == (((rt_int)22LL)))) {
f_st_if_604(F->s_597);
} else if (0 || (sel2009 == (((rt_int)23LL)))) {
f_st_case_608(F->s_597);
} else if (0 || (sel2009 == (((rt_int)24LL)))) {
f_st_repeat_616(F->s_597);
} else if (0 || (sel2009 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_579((*(P996)rt_nil_check(F->s_597)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel2009 == (((rt_int)27LL)))) {
f_st_exit_618(F->s_597);
} else if (0 || (sel2009 == (((rt_int)29LL)))) {
{
F->x_2010 = NULL;
F->x_2010 = f_goto_label_571(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->s_597)).name))->all));
if ((F->x_2010 == NULL)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_597)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->s_597)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_585(rt_r_ichk((*(P1021)rt_nil_check(F->x_2010)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P989)rt_nil_check((*(P1021)rt_nil_check(F->x_2010)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel2009 == (((rt_int)28LL)))) {
f_st_return_620(F->s_597);
} else if (0 || (sel2009 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_627(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->s_597)).name))->all), rt_r_ichk((*(P996)rt_nil_check(F->s_597)).line))), rt_str(");", 2)); b_; }));
} else if (0 || (sel2009 == (((rt_int)31LL)))) {
if ((g_handlers_1072 == NULL)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_597)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P989)rt_nil_check((*(P1000)rt_nil_check(g_handlers_1072)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel2009 == (((rt_int)26LL)))) {
f_st_guard_629(F->s_597);
} else if (0 || (sel2009 == (((rt_int)32LL)))) {
f_st_alloc_631(F->s_597);
} else if (0 || (sel2009 == (((rt_int)34LL)))) {
f_st_create_635(F->s_597);
} else if (0 || (sel2009 == (((rt_int)35LL)))) {
f_st_wait_664(F->s_597);
} else if (0 || (sel2009 == (((rt_int)36LL)))) {
f_st_region_672(F->s_597);
} else {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_597)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P996)rt_nil_check(F->s_597)).tag != NULL)) {
g_exits_1069 = (*(P1021)rt_nil_check(g_exits_1069)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->label_2005))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_600(P996 s_599) {
  struct f_st_assign_600fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_599 = s_599;
F->lv_2011 = NULL;
F->t_2012 = NULL;
F->vt_2013 = NULL;
F->c_2014 = NULL;
F->ro_2015 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->s_599)).a)).kind) == (((rt_int)10LL))) && ((*(P996)rt_nil_check((*(P996)rt_nil_check(F->s_599)).a)).b != NULL)) && (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->s_599)).a)).b)).kind) == (((rt_int)16LL))))) {
f_lvalue_751((*(P996)rt_nil_check((*(P996)rt_nil_check(F->s_599)).a)).a, &F->lv_2011, &F->t_2012, &F->c_2014, &F->ro_2015);
while ((rt_r_ichk((*(P1002)rt_nil_check(F->t_2012)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_460(F->t_2012);
F->lv_2011 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_743(&(((P989)rt_nil_check(F->lv_2011))->all), F->t_2012); b_; }));
F->t_2012 = (*(P1002)rt_nil_check(F->t_2012)).target;
}
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_2012)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->t_2012)).tparams == NULL))) {
F->t_2012 = (*(P1002)rt_nil_check(F->t_2012)).under;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_2012)).kind) == (((rt_int)15LL)))) {
F->lv_2011 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->lv_2011))->all), rt_str(".all", 4)); b_; }));
F->t_2012 = (*(P1002)rt_nil_check(F->t_2012)).under;
}
if ((((!rt_r_echk(F->ro_2015)) && (rt_r_ichk((*(P1002)rt_nil_check(F->t_2012)).kind) == (((rt_int)6LL)))) && (rt_r_ichk((*(P1002)rt_nil_check(F->t_2012)).ndim) == ((rt_int)1LL)))) {
F->lo_2016 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->s_599)).a)).b)).a, (*(P1002)rt_nil_check(F->t_2012)).idx, &F->vt_2013));
F->hi_2017 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->s_599)).a)).b)).b, (*(P1002)rt_nil_check(F->t_2012)).idx, &F->vt_2013));
F->v_2018 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->s_599)).b, F->t_2012, &F->vt_2013));
f_need_slice_763(F->t_2012);
f_check_type_228(F->vt_2013, F->t_2012, rt_r_ichk((*(P996)rt_nil_check(F->s_599)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_230(F->t_2012)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_230(F->t_2012)), rt_str("(", 1)), (((P989)rt_nil_check(F->lv_2011))->all)), rt_str(", ", 2)), F->lo_2016), rt_str(", ", 2)), F->hi_2017), rt_str("); as_", 6)), f_ctype_230(F->t_2012)), rt_str("(&sl_, ", 7)), F->v_2018), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((rt_r_echk(F->ro_2015) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_2012)).kind) != (((rt_int)5LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_599)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_2019 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->s_599)).a)).b)).a, g_ty_int_1076, &F->vt_2013));
F->hi_2020 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->s_599)).a)).b)).b, g_ty_int_1076, &F->vt_2013));
F->v_2021 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->s_599)).b, g_ty_string_1080, &F->vt_2013));
f_check_type_228(F->vt_2013, g_ty_string_1080, rt_r_ichk((*(P996)rt_nil_check(F->s_599)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P989)rt_nil_check(F->lv_2011))->all)), rt_str(", ", 2)), F->lo_2019), rt_str(", ", 2)), F->hi_2020), rt_str(", ", 2)), F->v_2021), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_751((*(P996)rt_nil_check(F->s_599)).a, &F->lv_2011, &F->t_2012, &F->c_2014, &F->ro_2015);
if (rt_r_echk(F->ro_2015)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_599)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_304(F->t_2012)) && (!f_exports_op_443((*(P1002)rt_nil_check(F->t_2012)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_599)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_2012)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_2022 = rt_str_copy(f_gexpr_in_790((*(P996)rt_nil_check(F->s_599)).b, F->t_2012, F->c_2014, &F->vt_2013));
f_check_type_228(F->vt_2013, F->t_2012, rt_r_ichk((*(P996)rt_nil_check(F->s_599)).line));
f_ptr_subtype_check_480(F->t_2012, F->c_2014, (*(P996)rt_nil_check(F->s_599)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_402(&(((P989)rt_nil_check(F->lv_2011))->all), F->t_2012, &F->v_2022, F->c_2014); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_602(P996 s_601) {
  struct f_st_call_602fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_601 = s_601;
F->c_2023 = NULL;
F->c_2023 = (*(P996)rt_nil_check(F->s_601)).a;
F->t_2024 = NULL;
if (((rt_r_ichk((*(P996)rt_nil_check(F->c_2023)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P996)rt_nil_check(F->c_2023)).kind) == (((rt_int)12LL))))) {
F->x_2025 = NULL;
F->x_2025 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P996)rt_nil_check(F->c_2023)).line));
(*(P996)rt_nil_check(F->x_2025)).a = F->c_2023;
F->c_2023 = F->x_2025;
}
if ((rt_r_ichk((*(P996)rt_nil_check(F->c_2023)).kind) != (((rt_int)10LL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_601)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_930(F->c_2023, 1, &F->t_2024), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_604(P996 s_603) {
  struct f_st_if_604fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_603 = s_603;
F->a_2026 = NULL;
F->a_2026 = (*(P996)rt_nil_check(F->s_603)).a;
F->first_2027 = RT_R_EUNDEF;
F->first_2027 = 1;
F->t_2028 = NULL;
F->taken_2029 = RT_R_EUNDEF;
F->taken_2029 = 0;
F->ok_2030 = RT_R_EUNDEF;
F->mv_2031 = NULL;
while (((F->a_2026 != NULL) && (!rt_r_echk(F->taken_2029)))) {
F->mv_2031 = f_meval_371((*(P996)rt_nil_check(F->a_2026)).a, &F->ok_2030);
if (((rt_r_echk(F->ok_2030) && (rt_r_ichk((*(P1015)rt_nil_check(F->mv_2031)).kind) == (((rt_int)2LL)))) && (rt_r_ichk((*(P1015)rt_nil_check(F->mv_2031)).i) == ((rt_int)0LL)))) {
F->a_2026 = (*(P996)rt_nil_check(F->a_2026)).next;
} else {
if ((rt_r_echk(F->ok_2030) && (rt_r_ichk((*(P1015)rt_nil_check(F->mv_2031)).kind) == (((rt_int)2LL))))) {
F->taken_2029 = 1;
if (rt_r_echk(F->first_2027)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_2032 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->a_2026)).a, g_ty_bool_1077, &F->t_2028));
f_check_type_228(F->t_2028, g_ty_bool_1077, rt_r_ichk((*(P996)rt_nil_check(F->s_603)).line));
if (rt_r_echk(F->first_2027)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_2032), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_2032), rt_str(") {", 3)); b_; }));
}
}
F->first_2027 = 0;
f_gen_body_579((*(P996)rt_nil_check(F->a_2026)).b);
F->a_2026 = (*(P996)rt_nil_check(F->a_2026)).next;
}
}
if (((rt_r_ichk((*(P996)rt_nil_check(F->s_603)).flag) == ((rt_int)1LL)) && (!rt_r_echk(F->taken_2029)))) {
if (rt_r_echk(F->first_2027)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_2027 = 0;
f_gen_body_579((*(P996)rt_nil_check(F->s_603)).b);
}
if ((!rt_r_echk(F->first_2027))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_manifest_case_606(P996 s_605) {
  struct f_manifest_case_606fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_605 = s_605;
F->ok_2033 = RT_R_EUNDEF;
F->sv_2034 = NULL;
F->sv_2034 = f_meval_371((*(P996)rt_nil_check(F->s_605)).a, &F->ok_2033);
F->a_2035 = NULL;
F->a_2035 = (*(P996)rt_nil_check(F->s_605)).b;
if (((!rt_r_echk(F->ok_2033)) || (((rt_r_ichk((*(P1015)rt_nil_check(F->sv_2034)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->sv_2034)).kind) != (((rt_int)2LL)))) && (rt_r_ichk((*(P1015)rt_nil_check(F->sv_2034)).kind) != (((rt_int)4LL)))))) {
F->result_ = 0;
goto ret_;
}
while ((F->a_2035 != NULL)) {
F->lab_2036 = NULL;
F->lab_2036 = (*(P996)rt_nil_check(F->a_2035)).a;
while ((F->lab_2036 != NULL)) {
F->lo_2037 = NULL;
F->lo_2037 = f_meval_371((*(P996)rt_nil_check(F->lab_2036)).a, &F->ok_2033);
F->hi_2038 = NULL;
F->hi_2038 = F->lo_2037;
if (((!rt_r_echk(F->ok_2033)) || (rt_r_ichk((*(P1015)rt_nil_check(F->lo_2037)).kind) != rt_r_ichk((*(P1015)rt_nil_check(F->sv_2034)).kind)))) {
F->result_ = 0;
goto ret_;
}
if (((*(P996)rt_nil_check(F->lab_2036)).b != NULL)) {
F->hi_2038 = f_meval_371((*(P996)rt_nil_check(F->lab_2036)).b, &F->ok_2033);
if ((((!rt_r_echk(F->ok_2033)) || (rt_r_ichk((*(P1015)rt_nil_check(F->hi_2038)).kind) != rt_r_ichk((*(P1015)rt_nil_check(F->sv_2034)).kind))) || (rt_r_ichk((*(P1015)rt_nil_check(F->sv_2034)).kind) == (((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
}
if ((((rt_r_ichk((*(P1015)rt_nil_check(F->sv_2034)).kind) == (((rt_int)4LL))) && rt_str_eq((((P989)rt_nil_check((*(P1015)rt_nil_check(F->sv_2034)).s))->all), (((P989)rt_nil_check((*(P1015)rt_nil_check(F->lo_2037)).s))->all))) || (((rt_r_ichk((*(P1015)rt_nil_check(F->sv_2034)).kind) != (((rt_int)4LL))) && (rt_r_ichk((*(P1015)rt_nil_check(F->lo_2037)).i) <= rt_r_ichk((*(P1015)rt_nil_check(F->sv_2034)).i))) && (rt_r_ichk((*(P1015)rt_nil_check(F->sv_2034)).i) <= rt_r_ichk((*(P1015)rt_nil_check(F->hi_2038)).i))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_579((*(P996)rt_nil_check(F->a_2035)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
F->result_ = 1;
goto ret_;
}
F->lab_2036 = (*(P996)rt_nil_check(F->lab_2036)).next;
}
F->a_2035 = (*(P996)rt_nil_check(F->a_2035)).next;
}
if ((rt_r_ichk((*(P996)rt_nil_check(F->s_605)).flag) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_579((*(P996)rt_nil_check(F->s_605)).c);
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

static void f_st_case_608(P996 s_607) {
  struct f_st_case_608fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_607 = s_607;
F->st_2039 = NULL;
F->vt_2040 = NULL;
F->first_2041 = RT_R_EUNDEF;
F->first_2041 = 1;
F->a_2042 = NULL;
F->a_2042 = (*(P996)rt_nil_check(F->s_607)).b;
if (f_manifest_case_606(F->s_607)) {
goto ret_;
}
f_st_case2_610(F->s_607);
ret_:
  RT_FPOP();
  return;
}

static void f_st_case2_610(P996 s_609) {
  struct f_st_case2_610fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_609 = s_609;
F->st_2043 = NULL;
F->vt_2044 = NULL;
F->first_2045 = RT_R_EUNDEF;
F->first_2045 = 1;
F->a_2046 = NULL;
F->a_2046 = (*(P996)rt_nil_check(F->s_609)).b;
F->sel_2047 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->s_609)).a, NULL, &F->st_2043));
F->tmp_2048 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_230(F->st_2043)), rt_str(" ", 1)), F->tmp_2048), rt_str(" = ", 3)), F->sel_2047), rt_str(";", 1)); b_; }));
while ((F->a_2046 != NULL)) {
F->lab_2049 = NULL;
F->lab_2049 = (*(P996)rt_nil_check(F->a_2046)).a;
F->conds_2050 = NULL;
F->conds_2050 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_2049 != NULL)) {
if (((*(P996)rt_nil_check(F->lab_2049)).b == NULL)) {
F->v_2051 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->lab_2049)).a, F->st_2043, &F->vt_2044));
f_check_type_228(F->vt_2044, F->st_2043, rt_r_ichk((*(P996)rt_nil_check(F->s_609)).line));
F->conds_2050 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->conds_2050))->all), rt_str(" || ", 4)), f_eq_code_409(F->st_2043, &F->tmp_2048, &F->v_2051)); b_; }));
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->st_2043)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->st_2043)).ltp != NULL))) {
F->lo_2052 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->lab_2049)).a, F->st_2043, &F->vt_2044));
F->hi_2053 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->lab_2049)).b, F->st_2043, &F->vt_2044));
F->conds_2050 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->conds_2050))->all), rt_str(" || (!", 6)), f_user_call2_391((*(P1002)rt_nil_check(F->st_2043)).ltp, &F->tmp_2048, 1, &F->lo_2052, 0)), rt_str(" && !", 5)), f_user_call2_391((*(P1002)rt_nil_check(F->st_2043)).ltp, &F->hi_2053, 0, &F->tmp_2048, 1)), rt_str(")", 1)); b_; }));
} else {
F->lo_2054 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->lab_2049)).a, F->st_2043, &F->vt_2044));
F->hi_2055 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->lab_2049)).b, F->st_2043, &F->vt_2044));
F->conds_2050 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->conds_2050))->all), rt_str(" || (", 5)), F->tmp_2048), rt_str(" >= ", 4)), F->lo_2054), rt_str(" && ", 4)), F->tmp_2048), rt_str(" <= ", 4)), F->hi_2055), rt_str(")", 1)); b_; }));
}
F->lab_2049 = (*(P996)rt_nil_check(F->lab_2049)).next;
}
if (rt_r_echk(F->first_2045)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P989)rt_nil_check(F->conds_2050))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P989)rt_nil_check(F->conds_2050))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2045 = 0;
f_gen_body_579((*(P996)rt_nil_check(F->a_2046)).b);
F->a_2046 = (*(P996)rt_nil_check(F->a_2046)).next;
}
if (rt_r_echk(F->first_2045)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P996)rt_nil_check(F->s_609)).flag) == ((rt_int)1LL))) {
f_gen_body_579((*(P996)rt_nil_check(F->s_609)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_user_for_614(P996 s_611, P1002 t_612, P998 c_613) {
  struct f_user_for_614fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_611 = s_611;
F->t_612 = t_612;
F->c_613 = c_613;
F->y_2056 = NULL;
F->y_2056 = f_new_sym_177((((rt_int)2LL)), (*(P996)rt_nil_check(F->s_611)).name);
F->saved_2057 = NULL;
F->saved_2057 = g_psub_1053;
F->p_2058 = NULL;
F->p_2058 = (*(P1002)rt_nil_check(F->t_612)).tparams;
F->iv_2059 = NULL;
F->iv_2059 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P996)rt_nil_check(F->s_611)).line));
F->st_2060 = NULL;
F->access_2061 = rt_str_copy(f_storage_501(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->s_611)).name))->all), F->t_612));
F->uv_2062 = NULL;
F->uv_2062 = f_mk_3(&F->access_2061);
if (((*(P1002)rt_nil_check(F->t_612)).tparams != NULL)) {
F->uv_2062 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->access_2061, rt_str(".all", 4)); b_; }));
}
if ((((!f_scalar_kind_182(f_base_of_219((*(P1002)rt_nil_check(F->t_612)).under))) || ((*(P1002)rt_nil_check(F->t_612)).elemcons == NULL)) || ((*(P998)rt_nil_check((*(P1002)rt_nil_check(F->t_612)).elemcons)).lo == NULL))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_611)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a FOR over ", 11), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_612)).name))->all)), rt_str(" needs an underlying subtype with a range", 41)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_init_storage_337(&F->access_2061, F->t_612, F->c_613);
while ((F->p_2058 != NULL)) {
F->l1_2063 = NULL;
F->l2_2064 = NULL;
{ R1001 *cell2065 = rt_alloc(sizeof(R1001));
(*cell2065).s = NULL;
(*cell2065).next = NULL;
F->l1_2063 = cell2065;
}
{ R1001 *cell2066 = rt_alloc(sizeof(R1001));
(*cell2066).s = NULL;
(*cell2066).next = NULL;
F->l2_2064 = cell2066;
}
(*(P1000)rt_nil_check(F->l1_2063)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2058)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1000)rt_nil_check(F->l2_2064)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(F->access_2061, rt_str(".p_", 3)), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2058)).name))->all))); b_; }));
(*(P1000)rt_nil_check(F->l1_2063)).next = F->l2_2064;
(*(P1000)rt_nil_check(F->l2_2064)).next = g_psub_1053;
g_psub_1053 = F->l1_2063;
F->p_2058 = (*(P996)rt_nil_check(F->p_2058)).next;
}
{
F->lo_2067 = rt_str_copy(f_subst_310(&(((P989)rt_nil_check((*(P998)rt_nil_check((*(P1002)rt_nil_check(F->t_612)).elemcons)).lo))->all)));
F->hi_2068 = rt_str_copy(f_subst_310(&(((P989)rt_nil_check((*(P998)rt_nil_check((*(P1002)rt_nil_check(F->t_612)).elemcons)).hi))->all)));
g_psub_1053 = F->saved_2057;
if ((rt_r_ichk((*(P996)rt_nil_check(F->s_611)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->uv_2062))->all), rt_str(" = ", 3)), F->hi_2068), rt_str("; if (", 6)), F->lo_2067), rt_str(" <= ", 4)), (((P989)rt_nil_check(F->uv_2062))->all)), rt_str(") for (;;) {", 12)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->uv_2062))->all), rt_str(" = ", 3)), F->lo_2067), rt_str("; if (", 6)), (((P989)rt_nil_check(F->uv_2062))->all)), rt_str(" <= ", 4)), F->hi_2068), rt_str(") for (;;) {", 12)); b_; }));
}
f_open_scope_173();
(*(P1006)rt_nil_check(F->y_2056)).t = F->t_612;
(*(P1006)rt_nil_check(F->y_2056)).c = F->c_613;
f_bind_504(F->y_2056, &F->access_2061);
(*(P1006)rt_nil_check(F->y_2056)).ro_flag = 1;
f_define_164(F->y_2056, rt_r_ichk((*(P996)rt_nil_check(F->s_611)).line));
f_gen_body_579((*(P996)rt_nil_check(F->s_611)).b);
(*(P996)rt_nil_check(F->iv_2059)).name = (*(P996)rt_nil_check(F->s_611)).name;
if ((rt_r_ichk((*(P996)rt_nil_check(F->s_611)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P989)rt_nil_check(F->uv_2062))->all)), rt_str(" == ", 4)), F->lo_2067), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_402(&F->access_2061, F->t_612, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_930(f_call_node_668(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRED", 4); b_; }), F->iv_2059, rt_r_ichk((*(P996)rt_nil_check(F->s_611)).line)), 0, &F->st_2060); b_; }), F->c_613); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P989)rt_nil_check(F->uv_2062))->all)), rt_str(" == ", 4)), F->hi_2068), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_402(&F->access_2061, F->t_612, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_930(f_call_node_668(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUCC", 4); b_; }), F->iv_2059, rt_r_ichk((*(P996)rt_nil_check(F->s_611)).line)), 0, &F->st_2060); b_; }), F->c_613); b_; }));
}
f_close_scope_174();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} }", 3); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_616(P996 s_615) {
  struct f_st_repeat_616fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_615 = s_615;
F->t_2069 = NULL;
F->c_2070 = NULL;
if ((rt_r_ichk((*(P996)rt_nil_check(F->s_615)).flag) == ((rt_int)0LL))) {
F->cond_2071 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->s_615)).a, g_ty_bool_1077, &F->t_2069));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_2071), rt_str(") {", 3)); b_; }));
f_gen_body_579((*(P996)rt_nil_check(F->s_615)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_2069 = f_resolve_subtype_264((*(P996)rt_nil_check(F->s_615)).a, &F->c_2070);
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_2069)).kind) == (((rt_int)15LL))) && (((*(P1002)rt_nil_check(F->t_2069)).tparams != NULL) || (!f_scalar_kind_182(f_base_of_219(F->t_2069)))))) {
f_user_for_614(F->s_615, F->t_2069, F->c_2070);
goto ret_;
}
F->c_2070 = f_base_cons_222(F->t_2069, F->c_2070);
if ((((*(P1002)rt_nil_check(f_base_of_219(F->t_2069))).kind == (((rt_int)4LL))) && ((*(P998)rt_nil_check(F->c_2070)).lo == NULL))) {
F->c_2070 = f_new_cons_180();
(*(P998)rt_nil_check(F->c_2070)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P998)rt_nil_check(F->c_2070)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_67((*(P1002)rt_nil_check(f_base_of_219(F->t_2069))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P998)rt_nil_check(F->c_2070)).lo == NULL)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_615)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_2072 = rt_str_copy(f_storage_501(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->s_615)).name))->all), F->t_2069));
F->lov_2073 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_2074 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_2075 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_2076 = NULL;
F->y_2076 = f_new_sym_177((((rt_int)2LL)), (*(P996)rt_nil_check(F->s_615)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_2073), rt_str(" = ", 3)), f_clo_189(F->c_2070)), rt_str(", ", 2)), F->hiv_2074), rt_str(" = ", 3)), f_chi_191(F->c_2070)), rt_str(";", 1)); b_; }));
if ((rt_r_ichk((*(P996)rt_nil_check(F->s_615)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_2075), rt_str(" = ", 3)), F->hiv_2074), rt_str("; ", 2)), F->it_2075), rt_str(" >= ", 4)), F->lov_2073), rt_str("; ", 2)), F->it_2075), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_2075), rt_str(" = ", 3)), F->lov_2073), rt_str("; ", 2)), F->it_2075), rt_str(" <= ", 4)), F->hiv_2074), rt_str("; ", 2)), F->it_2075), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_2072, rt_str(" = ", 3)), F->it_2075), rt_str(";", 1)); b_; }));
f_open_scope_173();
(*(P1006)rt_nil_check(F->y_2076)).t = F->t_2069;
(*(P1006)rt_nil_check(F->y_2076)).c = F->c_2070;
f_bind_504(F->y_2076, &F->access_2072);
(*(P1006)rt_nil_check(F->y_2076)).ro_flag = 1;
f_define_164(F->y_2076, rt_r_ichk((*(P996)rt_nil_check(F->s_615)).line));
f_gen_body_579((*(P996)rt_nil_check(F->s_615)).b);
f_close_scope_174();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_618(P996 s_617) {
  struct f_st_exit_618fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_617 = s_617;
F->x_2077 = NULL;
F->x_2077 = g_exits_1069;
while ((F->x_2077 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P1021)rt_nil_check(F->x_2077)).match))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->s_617)).name))->all))) {
f_pop_frames_585(rt_r_ichk((*(P1021)rt_nil_check(F->x_2077)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P989)rt_nil_check((*(P1021)rt_nil_check(F->x_2077)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_2077 = (*(P1021)rt_nil_check(F->x_2077)).next;
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_617)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P989)rt_nil_check((*(P996)rt_nil_check(F->s_617)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_620(P996 s_619) {
  struct f_st_return_620fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_619 = s_619;
F->vt_2078 = NULL;
if ((g_cap_ret_1062 != NULL)) {
if (((*(P996)rt_nil_check(F->s_619)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_619)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_585(rt_r_ichk(g_ret_frames_1064));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(g_cap_rflag_1063))->all), rt_str(" = 1; goto ", 11)), (((P989)rt_nil_check(g_cap_ret_1062))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!rt_r_echk(g_in_func_1048))) {
f_pop_frames_585(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check((*(P1006)rt_nil_check(g_func_sym_1060)).result)).kind) == (((rt_int)9LL)))) {
if (((*(P996)rt_nil_check(F->s_619)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_619)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_585(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P996)rt_nil_check(F->s_619)).a == NULL)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_619)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_2079 = rt_str_copy(f_gexpr_in_790((*(P996)rt_nil_check(F->s_619)).a, (*(P1006)rt_nil_check(g_func_sym_1060)).result, g_func_rc_1061, &F->vt_2078));
f_check_type_228(F->vt_2078, (*(P1006)rt_nil_check(g_func_sym_1060)).result, rt_r_ichk((*(P996)rt_nil_check(F->s_619)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_624((*(P1006)rt_nil_check(g_func_sym_1060)).result, g_func_rc_1061, &F->v_2079)), rt_str(";", 1)); b_; }));
f_pop_frames_585(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_624(P1002 t_621, P998 c_622, rstr *v_623) {
  struct f_result_checked_624fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_621 = t_621;
F->c_622 = c_622;
F->v_623 = v_623;
if ((F->c_622 == NULL)) {
F->result_ = (*F->v_623);
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_621)).kind) == (((rt_int)5LL))) && ((*(P998)rt_nil_check(F->c_622)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_623)), rt_str(", ", 2)), (((P989)rt_nil_check((*(P998)rt_nil_check(F->c_622)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_621)).kind) == (((rt_int)6LL))) && ((*(P998)rt_nil_check(F->c_622)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_230(F->t_621)), rt_str(" r_ = ", 6)), (*F->v_623)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P989)rt_nil_check((*(P998)rt_nil_check(F->c_622)).lo))->all)), rt_str(", ", 2)), (((P989)rt_nil_check((*(P998)rt_nil_check(F->c_622)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_209(F->t_621, F->c_622, &(*F->v_623));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_627(rstr *name_625, rt_int line_626) {
  struct f_exc_id_627fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_625 = name_625;
F->line_626 = line_626;
F->y_2080 = NULL;
F->y_2080 = f_lookup_159(&(*F->name_625));
if (((F->y_2080 != NULL) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_2080)).kind) == (((rt_int)7LL))))) {
F->result_ = (((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_2080)).cname))->all);
goto ret_;
}
if (((((rt_int)(((*F->name_625)).len)) > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_625), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_625)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_626, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_625), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_629(P996 s_628) {
  struct f_st_guard_629fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_628 = s_628;
F->h_2081 = NULL;
F->h_2081 = (*(P996)rt_nil_check(F->s_628)).b;
F->first_2082 = RT_R_EUNDEF;
F->first_2082 = 1;
F->hv_2083 = NULL;
{
F->f_2084 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_2085 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_587(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2084), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_2084), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2084), rt_str(")) {", 4)); b_; }));
f_gen_body_579((*(P996)rt_nil_check(F->s_628)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2084), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_588();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2084), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_2085), rt_str(" = rt_xcur;", 11)); b_; }));
{ R1001 *cell2086 = rt_alloc(sizeof(R1001));
(*cell2086).s = NULL;
(*cell2086).next = NULL;
F->hv_2083 = cell2086;
}
(*(P1000)rt_nil_check(F->hv_2083)).s = f_mk_3(&F->x_2085);
(*(P1000)rt_nil_check(F->hv_2083)).next = g_handlers_1072;
g_handlers_1072 = F->hv_2083;
{
F->h1_2087 = NULL;
F->h1_2087 = (*(P996)rt_nil_check(F->s_628)).b;
F->seen_2088 = NULL;
while ((F->h1_2087 != NULL)) {
F->n1_2089 = NULL;
F->n1_2089 = (*(P996)rt_nil_check(F->h1_2087)).a;
while ((F->n1_2089 != NULL)) {
if (f_seen_name_416(F->seen_2088, &(((P989)rt_nil_check((*(P996)rt_nil_check(F->n1_2089)).name))->all))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->n1_2089)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->n1_2089)).name))->all), rt_str(" has two handlers in one guard statement", 40)); b_; }));
}
F->seen_2088 = f_add_line_880(F->seen_2088, &(((P989)rt_nil_check((*(P996)rt_nil_check(F->n1_2089)).name))->all));
F->n1_2089 = (*(P996)rt_nil_check(F->n1_2089)).next;
}
F->h1_2087 = (*(P996)rt_nil_check(F->h1_2087)).next;
}
}
while ((F->h_2081 != NULL)) {
F->n_2090 = NULL;
F->n_2090 = (*(P996)rt_nil_check(F->h_2081)).a;
F->conds_2091 = NULL;
F->conds_2091 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_2090 != NULL)) {
F->conds_2091 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->conds_2091))->all), rt_str(" || ", 4)), F->x_2085), rt_str(" == ", 4)), f_exc_id_627(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->n_2090)).name))->all), rt_r_ichk((*(P996)rt_nil_check(F->s_628)).line))); b_; }));
F->n_2090 = (*(P996)rt_nil_check(F->n_2090)).next;
}
if (rt_r_echk(F->first_2082)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P989)rt_nil_check(F->conds_2091))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P989)rt_nil_check(F->conds_2091))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2082 = 0;
f_gen_body_579((*(P996)rt_nil_check(F->h_2081)).b);
F->h_2081 = (*(P996)rt_nil_check(F->h_2081)).next;
}
if (rt_r_echk(F->first_2082)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P996)rt_nil_check(F->s_628)).flag) == ((rt_int)1LL))) {
f_gen_body_579((*(P996)rt_nil_check(F->s_628)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_2085), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_1072 = (*(P1000)rt_nil_check(g_handlers_1072)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_631(P996 s_630) {
  struct f_st_alloc_631fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_630 = s_630;
F->lv_2092 = NULL;
F->t_2093 = NULL;
F->target_2094 = NULL;
F->vt_2095 = NULL;
F->c_2096 = NULL;
F->tc_2097 = NULL;
F->ro_2098 = RT_R_EUNDEF;
F->d_2099 = NULL;
F->p_2100 = NULL;
F->a_2101 = NULL;
f_lvalue_751((*(P996)rt_nil_check(F->s_630)).a, &F->lv_2092, &F->t_2093, &F->c_2096, &F->ro_2098);
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_2093)).kind) != (((rt_int)8LL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_630)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_460(F->t_2093);
F->d_2099 = (*(P1002)rt_nil_check(F->t_2093)).decl;
F->target_2094 = (*(P1002)rt_nil_check(F->t_2093)).target;
if ((f_list_len_67((*(P996)rt_nil_check(F->s_630)).b) != f_list_len_67((*(P996)rt_nil_check(F->d_2099)).b))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_630)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_67((*(P996)rt_nil_check(F->d_2099)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P996)rt_nil_check(F->d_2099)).b != NULL)) {
f_alloc_cell_472(F->s_630, &(((P989)rt_nil_check(F->lv_2092))->all), F->t_2093, F->c_2096);
goto ret_;
}
{
F->tcn_2102 = rt_str_copy(f_ctype_230(F->target_2094));
F->cell_2103 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_342(F->target_2094)) {
F->fn_2104 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_1057 = 1;
g_uses_findyn_1059 = 1;
f_put_27(g_out_protos_1041, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_2104), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_2104), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_1048)) {
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P989)rt_nil_check((*(P1006)rt_nil_check(g_func_sym_1060)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_345(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_2102), rt_str(" *)cell_)", 9)); b_; }), F->target_2094)); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_1048)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_2102), rt_str(" *", 2)), F->cell_2103), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_2102), rt_str("), ", 3)), F->fn_2104), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_2102), rt_str(" *", 2)), F->cell_2103), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_2102), rt_str("), ", 3)), F->fn_2104), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_2102), rt_str(" *", 2)), F->cell_2103), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_2102), rt_str("));", 3)); b_; }));
}
f_open_scope_173();
f_bind_ptr_params_467((*(P996)rt_nil_check(F->d_2099)).d, f_ptr_args_462(F->c_2096), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P996)rt_nil_check(F->s_630)).line));
F->vt_2095 = f_resolve_subtype_264((*(P996)rt_nil_check(F->d_2099)).a, &F->tc_2097);
f_init_storage_337(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_2103), rt_str(")", 1)); b_; }), F->target_2094, F->tc_2097);
f_close_scope_174();
if (((*(P996)rt_nil_check(F->s_630)).c != NULL)) {
F->v_2105 = rt_str_copy(f_gexpr_in_790((*(P996)rt_nil_check(F->s_630)).c, F->target_2094, F->tc_2097, &F->vt_2095));
f_check_type_228(F->vt_2095, F->target_2094, rt_r_ichk((*(P996)rt_nil_check(F->s_630)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_402(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_2103), rt_str(")", 1)); b_; }), F->target_2094, &F->v_2105, F->tc_2097); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->lv_2092))->all), rt_str(" = ", 3)), F->cell_2103), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_633(P996 e_632) {
  struct f_act_ref_633fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_632 = e_632;
F->lv_2106 = NULL;
F->t_2107 = NULL;
F->c_2108 = NULL;
F->ro_2109 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P996)rt_nil_check(F->e_632)).kind) == (((rt_int)7LL))) && rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_632)).name))->all), rt_str("ME", 2))) && (f_lookup_159(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_745(F->e_632))) {
F->v_2110 = rt_str_copy(f_gexpr_782(F->e_632, g_ty_act_1086, &F->t_2107));
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_2107)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_632)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_2110;
goto ret_;
}
f_lvalue_751(F->e_632, &F->lv_2106, &F->t_2107, &F->c_2108, &F->ro_2109);
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_2107)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_632)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P989)rt_nil_check(F->lv_2106))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_635(P996 s_634) {
  struct f_st_create_635fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_634 = s_634;
F->y_2111 = NULL;
F->y_2111 = f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->s_634)).name))->all));
F->pm_2112 = NULL;
F->a_2113 = NULL;
F->a_2113 = (*(P996)rt_nil_check(F->s_634)).b;
F->lv_2114 = NULL;
F->lt_2115 = NULL;
F->vt_2116 = NULL;
F->lc_2117 = NULL;
F->ro_2118 = RT_R_EUNDEF;
if (((F->y_2111 != NULL) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_2111)).kind) == (((rt_int)10LL))))) {
F->y_2111 = f_instantiate_727(F->y_2111, (*(P996)rt_nil_check(F->s_634)).e, (*(P996)rt_nil_check(F->s_634)).b, rt_r_ichk((*(P996)rt_nil_check(F->s_634)).line));
}
if (((F->y_2111 == NULL) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_2111)).kind) != (((rt_int)9LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_634)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->s_634)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_2112 = (*(P1006)rt_nil_check(F->y_2111)).params;
{
F->at_2119 = NULL;
F->ac_2120 = NULL;
F->aro_2121 = RT_R_EUNDEF;
F->act_2122 = NULL;
F->nf_2123 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_751((*(P996)rt_nil_check(F->s_634)).a, &F->lv_2114, &F->at_2119, &F->ac_2120, &F->aro_2121);
if ((rt_r_ichk((*(P1002)rt_nil_check(F->at_2119)).kind) == (((rt_int)14LL)))) {
F->act_2122 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_633((*(P996)rt_nil_check(F->s_634)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_2111)).cname))->all)), rt_str("fr *", 4)), F->nf_2123), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_2123), rt_str(");", 2)); b_; }));
if ((rt_r_ichk((*(P1006)rt_nil_check(F->y_2111)).level) > ((rt_int)0LL))) {
F->link_2124 = NULL;
F->link_2124 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2126 = ((rt_int)1LL), hi2127 = rt_sub(rt_r_ichk(g_cur_level_1049), rt_r_ichk((*(P1006)rt_nil_check(F->y_2111)).level));
for (rt_int it2128 = lo2126; it2128 <= hi2127; it2128++) {
F->i_2125 = it2128;
F->link_2124 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->link_2124))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2123, rt_str("->up = ", 7)), (((P989)rt_nil_check(F->link_2124))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_2113 != NULL) && (F->pm_2112 != NULL))) {
if ((rt_r_ichk((*(P1008)rt_nil_check(F->pm_2112)).mode) == (((rt_int)1LL)))) {
F->v_2129 = rt_str_copy(f_gexpr_in_790(F->a_2113, (*(P1008)rt_nil_check(F->pm_2112)).t, (*(P1008)rt_nil_check(F->pm_2112)).c, &F->vt_2116));
f_check_type_228(F->vt_2116, (*(P1008)rt_nil_check(F->pm_2112)).t, rt_r_ichk((*(P996)rt_nil_check(F->s_634)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2123, rt_str("->", 2)), (((P989)rt_nil_check((*(P1008)rt_nil_check(F->pm_2112)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_405((*(P1008)rt_nil_check(F->pm_2112)).t, &F->v_2129)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_751(F->a_2113, &F->lv_2114, &F->lt_2115, &F->lc_2117, &F->ro_2118);
f_check_type_228(F->lt_2115, (*(P1008)rt_nil_check(F->pm_2112)).t, rt_r_ichk((*(P996)rt_nil_check(F->s_634)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2123, rt_str("->", 2)), (((P989)rt_nil_check((*(P1008)rt_nil_check(F->pm_2112)).cfield))->all)), rt_str(" = &", 4)), (((P989)rt_nil_check(F->lv_2114))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_182((*(P1008)rt_nil_check(F->pm_2112)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2123, rt_str("->", 2)), (((P989)rt_nil_check((*(P1008)rt_nil_check(F->pm_2112)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_194(F->lt_2115, F->lc_2117)), rt_str("; ", 2)), F->nf_2123), rt_str("->", 2)), (((P989)rt_nil_check((*(P1008)rt_nil_check(F->pm_2112)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_197(F->lt_2115, F->lc_2117)), rt_str(";", 1)); b_; }));
}
}
F->a_2113 = (*(P996)rt_nil_check(F->a_2113)).next;
F->pm_2112 = (*(P1008)rt_nil_check(F->pm_2112)).next;
}
if (((F->a_2113 != NULL) || (F->pm_2112 != NULL))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->s_634)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P989)rt_nil_check((*(P996)rt_nil_check(F->s_634)).name))->all)); b_; }));
}
if ((F->act_2122 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P989)rt_nil_check(F->act_2122))->all)), rt_str(", &", 3)), (((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_2111)).cname))->all)), rt_str("decl, ", 6)), (((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_2111)).cname))->all)), rt_str(", ", 2)), F->nf_2123), rt_str("); }", 4)); b_; }));
} else {
f_user_create_645(F->s_634, F->y_2111, &(((P989)rt_nil_check(F->lv_2114))->all), F->at_2119, &F->nf_2123);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_639(rstr *name_636, P1002 t_637, rstr *place_638) {
  struct f_hidden_var_639fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_636 = name_636;
F->t_637 = t_637;
F->place_638 = place_638;
F->y_2130 = NULL;
F->y_2130 = f_new_sym_177((((rt_int)1LL)), f_mk_3(&(*F->name_636)));
(*(P1006)rt_nil_check(F->y_2130)).t = F->t_637;
(*(P1006)rt_nil_check(F->y_2130)).level = ((rt_int)0LL);
(*(P1006)rt_nil_check(F->y_2130)).access = f_mk_3(&(*F->place_638));
f_define_164(F->y_2130, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_645(P996 s_640, P1006 y_641, rstr *uv_642, P1002 ut_643, rstr *nf_644) {
  struct f_user_create_645fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_640 = s_640;
F->y_641 = y_641;
F->uv_642 = uv_642;
F->ut_643 = ut_643;
F->nf_644 = nf_644;
F->t_2131 = NULL;
F->saved_2132 = NULL;
F->saved_2132 = g_code_1046;
F->hook_2133 = NULL;
F->hook_2133 = f_new_buffer_24();
F->un_2134 = NULL;
F->un_2134 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P996)rt_nil_check(F->s_640)).line));
F->hn_2135 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_2136 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_2137 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_2138 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_173();
f_hidden_var_639(&F->uname_2137, F->ut_643, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_230(F->ut_643)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P996)rt_nil_check(F->un_2134)).name = f_mk_3(&F->uname_2137);
g_code_1046 = F->hook_2133;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_930(f_call_node_668(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_2134, rt_r_ichk((*(P996)rt_nil_check(F->s_640)).line)), 1, &F->t_2131)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_930(f_call_node_668(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_2134, rt_r_ichk((*(P996)rt_nil_check(F->s_640)).line)), 1, &F->t_2131)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_930(f_call_node_668(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_2134, rt_r_ichk((*(P996)rt_nil_check(F->s_640)).line)), 1, &F->t_2131)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_930(f_call_node_668(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_2134, rt_r_ichk((*(P996)rt_nil_check(F->s_640)).line)), 1, &F->t_2131)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_1046 = F->saved_2132;
f_put_27(g_out_protos_1041, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_2135), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_2135), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (rt_r_echk(g_in_func_1048)) {
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P989)rt_nil_check((*(P1006)rt_nil_check(g_func_sym_1060)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_1043, F->hook_2133);
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_2136), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_2136, rt_str("->hook = ", 9)), F->hn_2135), rt_str("; ", 2)), F->aa_2136), rt_str("->ua = &", 8)), (*F->uv_642)), rt_str("; ", 2)), F->aa_2136), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_920(F->ut_643)), f_q_18()), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_1048)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_2136, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_2136), rt_str(", &", 3)), (((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_641)).cname))->all)), rt_str("decl, ", 6)), (((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_641)).cname))->all)), rt_str(", ", 2)), (*F->nf_644)), rt_str(");", 2)); b_; }));
f_hidden_var_639(&F->aname_2138, g_ty_act_1086, &F->aa_2136);
{
F->start_2139 = NULL;
F->start_2139 = f_call_node_668(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P996)rt_nil_check(F->s_640)).a, rt_r_ichk((*(P996)rt_nil_check(F->s_640)).line));
F->an_2140 = NULL;
F->an_2140 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P996)rt_nil_check(F->s_640)).line));
(*(P996)rt_nil_check(F->an_2140)).name = f_mk_3(&F->aname_2138);
(*(P996)rt_nil_check((*(P996)rt_nil_check(F->start_2139)).b)).next = F->an_2140;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_930(F->start_2139, 1, &F->t_2131), rt_str(";", 1)); b_; }));
}
f_close_scope_174();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_650(P996 inv_646, rstr *arr_647, rt_int i_648, int mixed_649) {
  struct f_wait_alt_650fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_646 = inv_646;
F->arr_647 = arr_647;
F->i_648 = i_648;
F->mixed_649 = mixed_649;
F->lv_2141 = NULL;
F->t_2142 = NULL;
F->vt_2143 = NULL;
F->c_2144 = NULL;
F->ro_2145 = RT_R_EUNDEF;
F->fn_2146 = NULL;
F->args_2147 = NULL;
F->slot_2148 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_647), rt_str("[", 1)), f_itos_7(F->i_648)), rt_str("]", 1)));
if (((rt_r_ichk((*(P996)rt_nil_check(F->inv_646)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->inv_646)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->inv_646)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_2146 = (*(P996)rt_nil_check(F->inv_646)).a;
F->args_2147 = (*(P996)rt_nil_check(F->inv_646)).b;
if ((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2146)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2146)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_751(F->args_2147, &F->lv_2141, &F->t_2142, &F->c_2144, &F->ro_2145);
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_2142)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->inv_646)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2146)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_2149 = NULL;
F->dt_2150 = NULL;
f_lvalue_751((*(P996)rt_nil_check(F->args_2147)).next, &F->dv_2149, &F->dt_2150, &F->c_2144, &F->ro_2145);
f_check_type_228(F->dt_2150, (*(P1002)rt_nil_check(F->t_2142)).elem, rt_r_ichk((*(P996)rt_nil_check(F->inv_646)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2148, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P989)rt_nil_check(F->lv_2141))->all)), rt_str(", &", 3)), (((P989)rt_nil_check(F->dv_2149))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_2151 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_2152 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->args_2147)).next, (*(P1002)rt_nil_check(F->t_2142)).elem, &F->vt_2143));
f_check_type_228(F->vt_2143, (*(P1002)rt_nil_check(F->t_2142)).elem, rt_r_ichk((*(P996)rt_nil_check(F->inv_646)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_230((*(P1002)rt_nil_check(F->t_2142)).elem), rt_str(" ", 1)), F->tmp_2151), rt_str(" = ", 3)), F->v_2152), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2148, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P989)rt_nil_check(F->lv_2141))->all)), rt_str(", &", 3)), F->tmp_2151), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2146)).name))->all), rt_str("DELAY_UNTIL", 11)) && (f_list_len_67(F->args_2147) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2148, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_r_act_deadline(", 65)), f_act_delay_args_946(F->args_2147)), rt_str(")};", 3));
goto ret_;
} else if ((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2146)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2146)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_2153 = rt_str_copy(f_gexpr_782(F->args_2147, g_ty_int_1076, &F->vt_2143));
if ((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2146)).name))->all), rt_str("DELAY", 5)) && F->mixed_649)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2148, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_2153), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2146)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2148, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_2153), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2148, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_2153), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2146)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2148, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_633(F->args_2147)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->inv_646)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2146)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_652(P996 inv_651) {
  struct f_builtin_wait_652fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_651 = inv_651;
F->lv_2154 = NULL;
F->t_2155 = NULL;
F->c_2156 = NULL;
F->ro_2157 = RT_R_EUNDEF;
F->saved_2158 = NULL;
F->saved_2158 = g_code_1046;
F->ok_2159 = RT_R_EUNDEF;
F->ok_2159 = 0;
if (((rt_r_ichk((*(P996)rt_nil_check(F->inv_651)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->inv_651)).a)).kind) != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->inv_651)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->inv_651)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->inv_651)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->inv_651)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->inv_651)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_1074 = rt_add(rt_r_ichk(g_trial_1074), ((rt_int)1LL));
g_code_1046 = f_new_buffer_24();
{ rt_frame xf2160;
if (RT_TRY(xf2160)) {
f_lvalue_751((*(P996)rt_nil_check(F->inv_651)).b, &F->lv_2154, &F->t_2155, &F->c_2156, &F->ro_2157);
F->ok_2159 = (rt_r_ichk((*(P1002)rt_nil_check(F->t_2155)).kind) == (((rt_int)12LL)));
RT_POP(xf2160);
} else {
RT_POP(xf2160);
int x2161 = rt_xcur;
if (0 || x2161 == ex_compile_error_1) {
F->ok_2159 = 0;
} else {
rt_raise(x2161);
}
}
}
g_trial_1074 = rt_sub(rt_r_ichk(g_trial_1074), ((rt_int)1LL));
g_code_1046 = F->saved_2158;
F->result_ = rt_r_echk(F->ok_2159);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_657(P996 inv_653, rstr *op_654, rstr *q_655, int is_stmt_656) {
  struct f_wait_op_657fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_653 = inv_653;
F->op_654 = op_654;
F->q_655 = q_655;
F->is_stmt_656 = is_stmt_656;
F->x_2162 = NULL;
F->x_2162 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P996)rt_nil_check(F->inv_653)).line));
F->f_2163 = NULL;
F->f_2163 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P996)rt_nil_check(F->inv_653)).line));
F->qn_2164 = NULL;
F->qn_2164 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P996)rt_nil_check(F->inv_653)).line));
F->t_2165 = NULL;
(*(P996)rt_nil_check(F->f_2163)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->inv_653)).a)).name))->all), rt_str("_", 1)), (*F->op_654)); b_; }));
(*(P996)rt_nil_check(F->qn_2164)).name = f_mk_3(&(*F->q_655));
(*(P996)rt_nil_check(F->qn_2164)).next = (*(P996)rt_nil_check(F->inv_653)).b;
(*(P996)rt_nil_check(F->x_2162)).a = F->f_2163;
(*(P996)rt_nil_check(F->x_2162)).b = F->qn_2164;
{
F->r_2166 = rt_str_copy(f_gcall_930(F->x_2162, F->is_stmt_656, &F->t_2165));
if ((!F->is_stmt_656)) {
f_check_type_228(F->t_2165, g_ty_bool_1077, rt_r_ichk((*(P996)rt_nil_check(F->inv_653)).line));
}
F->result_ = F->r_2166;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_662(P996 s_658, rstr *arr_659, rstr *w_660, rt_int n_661) {
  struct f_user_wait_662fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_658 = s_658;
F->arr_659 = arr_659;
F->w_660 = w_660;
F->n_661 = n_661;
F->a_2167 = NULL;
F->a_2167 = (*(P996)rt_nil_check(F->s_658)).a;
F->i_2168 = RT_R_IUNDEF;
F->i_2168 = ((rt_int)0LL);
F->tests_2169 = NULL;
F->tests_2169 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_2170 = NULL;
F->revokes_2170 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_173();
while ((F->a_2167 != NULL)) {
F->inv_2171 = NULL;
F->inv_2171 = (*(P996)rt_nil_check(F->a_2167)).a;
while ((F->inv_2171 != NULL)) {
if (f_builtin_wait_652(F->inv_2171)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_650(F->inv_2171, &(*F->arr_659), rt_r_ichk(F->i_2168), 1); b_; }));
} else {
F->st_2172 = NULL;
F->st_2172 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P996)rt_nil_check(F->inv_2171)).line));
F->c_2173 = NULL;
F->qt_2174 = NULL;
F->qname_2175 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_2176 = NULL;
F->y_2176 = f_new_sym_177((((rt_int)1LL)), f_mk_3(&F->qname_2175));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_659), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->i_2168))), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P996)rt_nil_check(F->st_2172)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->inv_2171)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_2174 = f_resolve_subtype_264(F->st_2172, &F->c_2173);
{
F->access_2177 = rt_str_copy(f_storage_501(&F->qname_2175, F->qt_2174));
f_init_storage_337(&F->access_2177, F->qt_2174, F->c_2173);
(*(P1006)rt_nil_check(F->y_2176)).t = F->qt_2174;
(*(P1006)rt_nil_check(F->y_2176)).c = F->c_2173;
f_bind_504(F->y_2176, &F->access_2177);
f_define_164(F->y_2176, rt_r_ichk((*(P996)rt_nil_check(F->inv_2171)).line));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_657(F->inv_2171, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_2175, 1), rt_str(";", 1)); b_; }));
F->tests_2169 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->tests_2169))->all), rt_str("if (", 4)), f_wait_op_657(F->inv_2171, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_2175, 0)), rt_str(") { ", 4)), f_wait_op_657(F->inv_2171, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_2175, 1)), rt_str("; ", 2)), (*F->w_660)), rt_str(" = ", 3)), f_itos_7(rt_r_ichk(F->i_2168))), rt_str("; break; } ", 11)); b_; }));
F->revokes_2170 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->revokes_2170))->all), f_wait_op_657(F->inv_2171, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_2175, 1)), rt_str("; ", 2)); b_; }));
}
F->i_2168 = rt_add(rt_r_ichk(F->i_2168), ((rt_int)1LL));
F->inv_2171 = (*(P996)rt_nil_check(F->inv_2171)).next;
}
F->a_2167 = (*(P996)rt_nil_check(F->a_2167)).next;
}
f_close_scope_174();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_660)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P989)rt_nil_check(F->tests_2169))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_660), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_661)), rt_str(", ", 2)), (*F->arr_659)), rt_str("); if (", 7)), (*F->w_660)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_661)), rt_str(", ", 2)), (*F->arr_659)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_660)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_660)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P989)rt_nil_check(F->revokes_2170))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_664(P996 s_663) {
  struct f_st_wait_664fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_663 = s_663;
F->a_2178 = NULL;
F->a_2178 = (*(P996)rt_nil_check(F->s_663)).a;
F->n_2179 = RT_R_IUNDEF;
F->n_2179 = ((rt_int)0LL);
F->first_2180 = RT_R_EUNDEF;
F->first_2180 = 1;
F->inits_2181 = NULL;
F->inits_2181 = f_new_buffer_24();
F->user_2182 = RT_R_EUNDEF;
F->user_2182 = 0;
F->arr_2183 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_2184 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_2178 != NULL)) {
F->inv_2185 = NULL;
F->inv_2185 = (*(P996)rt_nil_check(F->a_2178)).a;
F->n_2179 = rt_add(rt_r_ichk(F->n_2179), f_list_len_67((*(P996)rt_nil_check(F->a_2178)).a));
while ((F->inv_2185 != NULL)) {
if ((!f_builtin_wait_652(F->inv_2185))) {
F->user_2182 = 1;
}
F->inv_2185 = (*(P996)rt_nil_check(F->inv_2185)).next;
}
F->a_2178 = (*(P996)rt_nil_check(F->a_2178)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_2183), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->n_2179))), rt_str("];", 2)); b_; }));
if (rt_r_echk(F->user_2182)) {
f_user_wait_662(F->s_663, &F->arr_2183, &F->w_2184, rt_r_ichk(F->n_2179));
} else {
F->a_2178 = (*(P996)rt_nil_check(F->s_663)).a;
F->n_2179 = ((rt_int)0LL);
while ((F->a_2178 != NULL)) {
F->inv_2186 = NULL;
F->inv_2186 = (*(P996)rt_nil_check(F->a_2178)).a;
while ((F->inv_2186 != NULL)) {
f_put_27(F->inits_2181, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_650(F->inv_2186, &F->arr_2183, rt_r_ichk(F->n_2179), 0); b_; }));
F->n_2179 = rt_add(rt_r_ichk(F->n_2179), ((rt_int)1LL));
F->inv_2186 = (*(P996)rt_nil_check(F->inv_2186)).next;
}
F->a_2178 = (*(P996)rt_nil_check(F->a_2178)).next;
}
f_splice_34(g_code_1046, F->inits_2181);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_2184), rt_str(" = rt_wait(", 11)), f_itos_7(rt_r_ichk(F->n_2179))), rt_str(", ", 2)), F->arr_2183), rt_str(");", 2)); b_; }));
}
F->a_2178 = (*(P996)rt_nil_check(F->s_663)).a;
F->n_2179 = ((rt_int)0LL);
while ((F->a_2178 != NULL)) {
F->conds_2187 = NULL;
F->conds_2187 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo2189 = ((rt_int)1LL), hi2190 = f_list_len_67((*(P996)rt_nil_check(F->a_2178)).a);
for (rt_int it2191 = lo2189; it2191 <= hi2190; it2191++) {
F->i_2188 = it2191;
F->conds_2187 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->conds_2187))->all), rt_str(" || ", 4)), F->w_2184), rt_str(" == ", 4)), f_itos_7(rt_r_ichk(F->n_2179))); b_; }));
F->n_2179 = rt_add(rt_r_ichk(F->n_2179), ((rt_int)1LL));
}
}
if (rt_r_echk(F->first_2180)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P989)rt_nil_check(F->conds_2187))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P989)rt_nil_check(F->conds_2187))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2180 = 0;
f_gen_body_579((*(P996)rt_nil_check(F->a_2178)).b);
F->a_2178 = (*(P996)rt_nil_check(F->a_2178)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P996 f_call_node_668(rstr *name_665, P996 arg_666, rt_int line_667) {
  struct f_call_node_668fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_665 = name_665;
F->arg_666 = arg_666;
F->line_667 = line_667;
F->x_2192 = NULL;
F->x_2192 = f_nn_61((((rt_int)10LL)), F->line_667);
F->f_2193 = NULL;
F->f_2193 = f_nn_61((((rt_int)7LL)), F->line_667);
(*(P996)rt_nil_check(F->f_2193)).name = f_mk_3(&(*F->name_665));
(*(P996)rt_nil_check(F->x_2192)).a = F->f_2193;
(*(P996)rt_nil_check(F->x_2192)).b = f_copy_node_821(F->arg_666);
(*(P996)rt_nil_check((*(P996)rt_nil_check(F->x_2192)).b)).next = NULL;
F->result_ = F->x_2192;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_670(P996 s_669) {
  struct f_user_region_670fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_669 = s_669;
F->t_2194 = NULL;
F->f_2195 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_2196 = rt_str_copy(f_gcall_930(f_call_node_668(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P996)rt_nil_check(F->s_669)).a, rt_r_ichk((*(P996)rt_nil_check(F->s_669)).line)), 1, &F->t_2194));
F->unlock_2197 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_930(f_call_node_668(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P996)rt_nil_check(F->s_669)).a, rt_r_ichk((*(P996)rt_nil_check(F->s_669)).line)), 1, &F->t_2194)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_2196), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2195), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2195), rt_str(")) {", 4)); b_; }));
f_push_cleanup_587(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2195), rt_str("); ", 3)), F->unlock_2197); b_; }));
f_gen_body_579((*(P996)rt_nil_check(F->s_669)).b);
f_pop_cleanup_588();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2195), rt_str("); ", 3)), F->unlock_2197); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2195), rt_str("); ", 3)), F->unlock_2197), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_672(P996 s_671) {
  struct f_st_region_672fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_671 = s_671;
F->lv_2198 = NULL;
F->t_2199 = NULL;
F->c_2200 = NULL;
F->ro_2201 = RT_R_EUNDEF;
F->lk_2202 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_2203 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_751((*(P996)rt_nil_check(F->s_671)).a, &F->lv_2198, &F->t_2199, &F->c_2200, &F->ro_2201);
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_2199)).kind) != (((rt_int)13LL)))) {
f_user_region_670(F->s_671);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_2202), rt_str(" = &", 4)), (((P989)rt_nil_check(F->lv_2198))->all)), rt_str("; rt_region_enter(", 18)), F->lk_2202), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2203), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2203), rt_str(")) {", 4)); b_; }));
f_push_cleanup_587(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2203), rt_str("); rt_region_leave(", 19)), F->lk_2202), rt_str(");", 2)); b_; }));
f_gen_body_579((*(P996)rt_nil_check(F->s_671)).b);
f_pop_cleanup_588();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2203), rt_str("); rt_region_leave(", 19)), F->lk_2202), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2203), rt_str("); rt_region_leave(", 19)), F->lk_2202), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P996 f_gparam_675(P996 g_673, rstr *name_674) {
  struct f_gparam_675fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_673 = g_673;
F->name_674 = name_674;
F->p_2204 = NULL;
F->p_2204 = (*(P996)rt_nil_check(F->g_673)).a;
while ((F->p_2204 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2204)).name))->all), (*F->name_674))) {
F->result_ = F->p_2204;
goto ret_;
}
F->p_2204 = (*(P996)rt_nil_check(F->p_2204)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1006 f_bind_sym_677(P996 p_676) {
  struct f_bind_sym_677fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_676 = p_676;
F->y_2205 = NULL;
if ((rt_r_ichk((*(P996)rt_nil_check(F->p_676)).ival) <= ((rt_int)2LL))) {
F->y_2205 = f_new_sym_177((((rt_int)5LL)), (*(P996)rt_nil_check(F->p_676)).name);
} else {
F->y_2205 = f_new_sym_177((((rt_int)2LL)), (*(P996)rt_nil_check(F->p_676)).name);
}
F->result_ = F->y_2205;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_680(P1006 a_678, P1006 b_679) {
  struct f_same_binds_680fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_678 = a_678;
F->b_679 = b_679;
F->x_2206 = NULL;
F->x_2206 = F->a_678;
F->y_2207 = NULL;
F->y_2207 = F->b_679;
while (((F->x_2206 != NULL) && (F->y_2207 != NULL))) {
if (((!rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->x_2206)).name))->all), (((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_2207)).name))->all))) || (!f_same_binding_683(F->x_2206, F->y_2207)))) {
F->result_ = 0;
goto ret_;
}
F->x_2206 = (*(P1006)rt_nil_check(F->x_2206)).mnext;
F->y_2207 = (*(P1006)rt_nil_check(F->y_2207)).mnext;
}
F->result_ = ((F->x_2206 == NULL) && (F->y_2207 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_683(P1006 a_681, P1006 b_682) {
  struct f_same_binding_683fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_681 = a_681;
F->b_682 = b_682;
if ((rt_r_ichk((*(P1006)rt_nil_check(F->a_681)).kind) == (((rt_int)5LL)))) {
F->result_ = ((rt_r_ichk((*(P1006)rt_nil_check(F->b_682)).kind) == (((rt_int)5LL))) && f_same_217((*(P1006)rt_nil_check(F->a_681)).t, (*(P1006)rt_nil_check(F->b_682)).t));
goto ret_;
}
if (((rt_r_ichk((*(P1006)rt_nil_check(F->a_681)).kind) == (((rt_int)2LL))) && rt_r_echk((*(P1006)rt_nil_check(F->a_681)).hasmv))) {
F->result_ = (rt_r_echk((*(P1006)rt_nil_check(F->b_682)).hasmv) && (rt_r_ichk((*(P1006)rt_nil_check(F->a_681)).mvalue) == rt_r_ichk((*(P1006)rt_nil_check(F->b_682)).mvalue)));
goto ret_;
}
if (((rt_r_ichk((*(P1006)rt_nil_check(F->a_681)).kind) == (((rt_int)2LL))) && ((*(P1006)rt_nil_check(F->a_681)).mv != NULL))) {
if (((((*(P1006)rt_nil_check(F->b_682)).mv == NULL) || (rt_r_ichk((*(P1015)rt_nil_check((*(P1006)rt_nil_check(F->a_681)).mv)).kind) != rt_r_ichk((*(P1015)rt_nil_check((*(P1006)rt_nil_check(F->b_682)).mv)).kind))) || (!f_same_217((*(P1006)rt_nil_check(F->a_681)).t, (*(P1006)rt_nil_check(F->b_682)).t)))) {
F->result_ = 0;
goto ret_;
} else if ((rt_r_ichk((*(P1015)rt_nil_check((*(P1006)rt_nil_check(F->a_681)).mv)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_eq((((P989)rt_nil_check((*(P1015)rt_nil_check((*(P1006)rt_nil_check(F->a_681)).mv)).s))->all), (((P989)rt_nil_check((*(P1015)rt_nil_check((*(P1006)rt_nil_check(F->b_682)).mv)).s))->all));
goto ret_;
}
F->result_ = (rt_r_ichk((*(P1015)rt_nil_check((*(P1006)rt_nil_check(F->a_681)).mv)).i) == rt_r_ichk((*(P1015)rt_nil_check((*(P1006)rt_nil_check(F->b_682)).mv)).i));
goto ret_;
}
F->result_ = ((((*(P1006)rt_nil_check(F->a_681)).cname != NULL) && ((*(P1006)rt_nil_check(F->b_682)).cname != NULL)) && rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->a_681)).cname))->all), (((P989)rt_nil_check((*(P1006)rt_nil_check(F->b_682)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1006 f_tt_binds_688(P996 gd_684, P996 formals_685, P996 actuals_686, rt_int line_687) {
  struct f_tt_binds_688fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_684 = gd_684;
F->formals_685 = formals_685;
F->actuals_686 = actuals_686;
F->line_687 = line_687;
F->f_2208 = NULL;
F->f_2208 = F->formals_685;
F->a_2209 = NULL;
F->a_2209 = F->actuals_686;
F->binds_2210 = NULL;
F->c_2211 = NULL;
F->at_2212 = NULL;
while (((F->f_2208 != NULL) && (F->a_2209 != NULL))) {
F->p_2213 = NULL;
F->p_2213 = f_gparam_675(F->gd_684, &(((P989)rt_nil_check((*(P996)rt_nil_check(F->f_2208)).name))->all));
F->b_2214 = NULL;
if ((F->p_2213 == NULL)) {
f_fail_23(F->line_687, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->f_2208)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_2214 = f_bind_sym_677(F->p_2213);
if ((rt_r_ichk((*(P996)rt_nil_check(F->p_2213)).ival) <= ((rt_int)2LL))) {
if ((rt_r_ichk((*(P996)rt_nil_check(F->a_2209)).kind) >= (((rt_int)70LL)))) {
(*(P1006)rt_nil_check(F->b_2214)).t = f_resolve_subtype_264(F->a_2209, &F->c_2211);
} else {
F->st_2215 = NULL;
F->st_2215 = f_nn_61((((rt_int)80LL)), F->line_687);
(*(P996)rt_nil_check(F->st_2215)).name = (*(P996)rt_nil_check(F->a_2209)).name;
(*(P1006)rt_nil_check(F->b_2214)).t = f_resolve_subtype_264(F->st_2215, &F->c_2211);
}
(*(P1006)rt_nil_check(F->b_2214)).c = F->c_2211;
if ((((*(P996)rt_nil_check(F->p_2213)).b != NULL) && (!f_type_allowed_692((*(P1006)rt_nil_check(F->b_2214)).t, (*(P996)rt_nil_check(F->p_2213)).b, F->binds_2210)))) {
f_fail_23(F->line_687, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2213)).name))->all)); b_; }));
}
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->p_2213)).ival) <= ((rt_int)5LL))) {
if ((rt_r_ichk((*(P996)rt_nil_check(F->a_2209)).kind) != (((rt_int)7LL)))) {
f_fail_23(F->line_687, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2213)).name))->all)); b_; }));
}
F->b_2214 = f_copy_sym_429(f_pick_operation_703(rt_r_ichk((*(P996)rt_nil_check(F->p_2213)).ival), &(((P989)rt_nil_check((*(P996)rt_nil_check(F->a_2209)).name))->all), (*(P996)rt_nil_check(F->p_2213)).b, (*(P996)rt_nil_check(F->p_2213)).a, F->binds_2210, F->line_687));
(*(P1006)rt_nil_check(F->b_2214)).name = (*(P996)rt_nil_check(F->p_2213)).name;
} else if (((rt_r_ichk((*(P996)rt_nil_check(F->p_2213)).ival) == ((rt_int)7LL)) || (rt_r_ichk((*(P996)rt_nil_check(F->p_2213)).ival) == ((rt_int)8LL)))) {
F->ok_2216 = RT_R_EUNDEF;
(*(P1006)rt_nil_check(F->b_2214)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_782(F->a_2209, NULL, &F->at_2212)), rt_str(")", 1)); b_; }));
(*(P1006)rt_nil_check(F->b_2214)).t = F->at_2212;
if ((((rt_r_ichk((*(P996)rt_nil_check(F->p_2213)).ival) == ((rt_int)7LL)) && (rt_r_ichk((*(P1002)rt_nil_check(F->at_2212)).kind) != (((rt_int)5LL)))) || ((rt_r_ichk((*(P996)rt_nil_check(F->p_2213)).ival) == ((rt_int)8LL)) && ((*(P1002)rt_nil_check(f_base_of_219(F->at_2212))).kind != (((rt_int)4LL)))))) {
f_fail_23(F->line_687, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2213)).name))->all)), rt_str(" is not of the kind its constraint requires", 43)); b_; }));
}
(*(P1006)rt_nil_check(F->b_2214)).mv = f_meval_371(F->a_2209, &F->ok_2216);
if ((!rt_r_echk(F->ok_2216))) {
f_fail_23(F->line_687, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2213)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
if ((rt_r_ichk((*(P1015)rt_nil_check((*(P1006)rt_nil_check(F->b_2214)).mv)).kind) == (((rt_int)4LL)))) {
(*(P1015)rt_nil_check((*(P1006)rt_nil_check(F->b_2214)).mv)).i = f_lit_index_261((*(P1002)rt_nil_check(f_base_of_219(F->at_2212))).lits, &(((P989)rt_nil_check((*(P1015)rt_nil_check((*(P1006)rt_nil_check(F->b_2214)).mv)).s))->all));
}
} else {
F->ok_2217 = RT_R_EUNDEF;
(*(P1006)rt_nil_check(F->b_2214)).t = f_resolve_subtype_264((*(P996)rt_nil_check(F->p_2213)).a, &F->c_2211);
(*(P1006)rt_nil_check(F->b_2214)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_checked_209((*(P1006)rt_nil_check(F->b_2214)).t, F->c_2211, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_782(F->a_2209, (*(P1006)rt_nil_check(F->b_2214)).t, &F->at_2212); b_; }))), rt_str(")", 1)); b_; }));
f_check_type_228(F->at_2212, (*(P1006)rt_nil_check(F->b_2214)).t, F->line_687);
(*(P1006)rt_nil_check(F->b_2214)).mvalue = f_manifest_362(F->a_2209, &F->ok_2217);
(*(P1006)rt_nil_check(F->b_2214)).hasmv = rt_r_echk(F->ok_2217);
(*(P1006)rt_nil_check(F->b_2214)).mv = f_meval_371(F->a_2209, &F->ok_2217);
if ((!rt_r_echk(F->ok_2217))) {
f_fail_23(F->line_687, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2213)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
}
(*(P1006)rt_nil_check(F->b_2214)).mnext = F->binds_2210;
F->binds_2210 = F->b_2214;
F->f_2208 = (*(P996)rt_nil_check(F->f_2208)).next;
F->a_2209 = (*(P996)rt_nil_check(F->a_2209)).next;
}
F->result_ = F->binds_2210;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_allowed_692(P1002 t_689, P996 items_690, P1006 binds_691) {
  struct f_type_allowed_692fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_689 = t_689;
F->items_690 = items_690;
F->binds_691 = binds_691;
F->it_2218 = NULL;
F->it_2218 = F->items_690;
F->b_2219 = NULL;
F->b_2219 = f_base_of_219(F->t_689);
while ((F->it_2218 != NULL)) {
if ((((rt_r_ichk((*(P996)rt_nil_check(F->it_2218)).kind) == (((rt_int)80LL))) && ((*(P996)rt_nil_check(F->it_2218)).b == NULL)) && (f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->it_2218)).name))->all)) == NULL))) {
F->w_2220 = rt_str_copy((((P989)rt_nil_check((*(P996)rt_nil_check(F->it_2218)).name))->all));
if (((((((((((rt_str_eq(F->w_2220, rt_str("INT", 3)) && (rt_r_ichk((*(P1002)rt_nil_check(F->b_2219)).kind) == (((rt_int)1LL)))) || (rt_str_eq(F->w_2220, rt_str("FLOAT", 5)) && (rt_r_ichk((*(P1002)rt_nil_check(F->b_2219)).kind) == (((rt_int)3LL))))) || (rt_str_eq(F->w_2220, rt_str("BOOL", 4)) && (rt_r_ichk((*(P1002)rt_nil_check(F->b_2219)).kind) == (((rt_int)2LL))))) || (rt_str_eq(F->w_2220, rt_str("ENUM", 4)) && (rt_r_ichk((*(P1002)rt_nil_check(F->b_2219)).kind) == (((rt_int)4LL))))) || (rt_str_eq(F->w_2220, rt_str("STRING", 6)) && (rt_r_ichk((*(P1002)rt_nil_check(F->b_2219)).kind) == (((rt_int)5LL))))) || (rt_str_eq(F->w_2220, rt_str("ARRAY", 5)) && (rt_r_ichk((*(P1002)rt_nil_check(F->b_2219)).kind) == (((rt_int)6LL))))) || (rt_str_eq(F->w_2220, rt_str("RECORD", 6)) && (rt_r_ichk((*(P1002)rt_nil_check(F->b_2219)).kind) == (((rt_int)7LL))))) || (rt_str_eq(F->w_2220, rt_str("UNION", 5)) && (rt_r_ichk((*(P1002)rt_nil_check(F->b_2219)).kind) == (((rt_int)17LL))))) || (rt_str_eq(F->w_2220, rt_str("SET", 3)) && (rt_r_ichk((*(P1002)rt_nil_check(F->b_2219)).kind) == (((rt_int)16LL))))) || (rt_str_eq(F->w_2220, rt_str("ASCII", 5)) && f_same_217(F->t_689, g_ty_ascii_1079)))) {
F->result_ = 1;
goto ret_;
}
} else {
F->c_2221 = NULL;
if (f_same_217(f_resolve_in_binds_696(F->it_2218, F->binds_691, &F->c_2221), F->t_689)) {
F->result_ = 1;
goto ret_;
}
}
F->it_2218 = (*(P996)rt_nil_check(F->it_2218)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1002 f_resolve_in_binds_696(P996 st_693, P1006 binds_694, P998 *c_695) {
  struct f_resolve_in_binds_696fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_693 = st_693;
F->binds_694 = binds_694;
F->c_695 = c_695;
F->c_695v = *F->c_695;
F->b_2222 = NULL;
F->b_2222 = F->binds_694;
F->t_2223 = NULL;
f_open_scope_173();
while ((F->b_2222 != NULL)) {
F->z_2224 = NULL;
F->z_2224 = f_copy_sym_429(F->b_2222);
f_define_164(F->z_2224, rt_r_ichk((*(P996)rt_nil_check(F->st_693)).line));
F->b_2222 = (*(P1006)rt_nil_check(F->b_2222)).mnext;
}
F->t_2223 = f_resolve_subtype_264(F->st_693, &F->c_695v);
f_close_scope_174();
F->result_ = F->t_2223;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_695) = F->c_695v;
  RT_FPOP();
  return F->result_;
}

static P1006 f_pick_operation_703(rt_int kind_697, rstr *name_698, P996 sig_699, P996 res_700, P1006 binds_701, rt_int line_702) {
  struct f_pick_operation_703fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_697 = kind_697;
F->name_698 = name_698;
F->sig_699 = sig_699;
F->res_700 = res_700;
F->binds_701 = binds_701;
F->line_702 = line_702;
F->y_2225 = NULL;
F->c_2226 = NULL;
F->want_2227 = RT_R_IUNDEF;
F->want_2227 = (((rt_int)4LL));
if ((F->kind_697 == ((rt_int)4LL))) {
F->want_2227 = (((rt_int)3LL));
} else if ((F->kind_697 == ((rt_int)5LL))) {
F->want_2227 = (((rt_int)9LL));
}
{ rt_int lo2229 = ((rt_int)1LL), hi2230 = ((rt_int)3LL);
for (rt_int it2231 = lo2229; it2231 <= hi2230; it2231++) {
F->pass_2228 = it2231;
F->y_2225 = f_overload_chain_910(&(*F->name_698), F->pass_2228);
while ((F->y_2225 != NULL)) {
if (((rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_2225)).name))->all), (*F->name_698)) && ((rt_r_ichk((*(P1006)rt_nil_check(F->y_2225)).kind) == rt_r_ichk(F->want_2227)) || ((F->kind_697 == ((rt_int)0LL)) && ((rt_r_ichk((*(P1006)rt_nil_check(F->y_2225)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_2225)).kind) == (((rt_int)3LL))))))) && ((F->pass_2228 != ((rt_int)1LL)) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_2225)).depth) >= rt_r_ichk(g_gdepth_1065))))) {
F->ok_2232 = RT_R_EUNDEF;
F->ok_2232 = 1;
if (((F->sig_699 != NULL) || (F->kind_697 == ((rt_int)0LL)))) {
F->s_2233 = NULL;
F->s_2233 = F->sig_699;
F->pm_2234 = NULL;
F->pm_2234 = (*(P1006)rt_nil_check(F->y_2225)).params;
while (((rt_r_echk(F->ok_2232) && (F->s_2233 != NULL)) && (F->pm_2234 != NULL))) {
F->ok_2232 = f_same_217(f_resolve_in_binds_696(F->s_2233, F->binds_701, &F->c_2226), (*(P1008)rt_nil_check(F->pm_2234)).t);
F->s_2233 = (*(P996)rt_nil_check(F->s_2233)).next;
F->pm_2234 = (*(P1008)rt_nil_check(F->pm_2234)).next;
}
F->ok_2232 = ((rt_r_echk(F->ok_2232) && (F->s_2233 == NULL)) && (F->pm_2234 == NULL));
}
if ((rt_r_echk(F->ok_2232) && (F->res_700 != NULL))) {
F->ok_2232 = ((rt_r_ichk((*(P1006)rt_nil_check(F->y_2225)).kind) == (((rt_int)3LL))) && f_same_217(f_resolve_in_binds_696(F->res_700, F->binds_701, &F->c_2226), (*(P1006)rt_nil_check(F->y_2225)).result));
}
if (rt_r_echk(F->ok_2232)) {
F->result_ = F->y_2225;
goto ret_;
}
}
F->y_2225 = (*(P1006)rt_nil_check(F->y_2225)).chain;
}
}
}
f_fail_23(F->line_702, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no ", 3), f_kind_word_705(F->kind_697)), (*F->name_698)), rt_str(" has the interface the generic requires", 39)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_word_705(rt_int kind_704) {
  struct f_kind_word_705fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_704 = kind_704;
if ((F->kind_704 == ((rt_int)3LL))) {
F->result_ = rt_str("procedure ", 10);
goto ret_;
} else if ((F->kind_704 == ((rt_int)4LL))) {
F->result_ = rt_str("function ", 9);
goto ret_;
} else if ((F->kind_704 == ((rt_int)5LL))) {
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

static P1006 f_need_binds_709(P996 gd_706, P1006 binds_707, rt_int line_708) {
  struct f_need_binds_709fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_706 = gd_706;
F->binds_707 = binds_707;
F->line_708 = line_708;
F->it_2235 = NULL;
F->it_2235 = (*(P996)rt_nil_check(F->gd_706)).d;
F->r_2236 = NULL;
F->r_2236 = F->binds_707;
while ((F->it_2235 != NULL)) {
F->found_2237 = RT_R_EUNDEF;
F->found_2237 = 0;
F->y_2238 = NULL;
F->y_2238 = ({ A1012 b_ = (((P1010)rt_nil_check(g_table_1032))->all); b_.p[(rt_index(f_hash_157(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->it_2235)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while (((F->y_2238 != NULL) && (!rt_r_echk(F->found_2237)))) {
if ((rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_2238)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->it_2235)).name))->all)) && (((rt_r_ichk((*(P1006)rt_nil_check(F->y_2238)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_2238)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_2238)).kind) == (((rt_int)9LL)))))) {
F->found_2237 = 1;
}
F->y_2238 = (*(P1006)rt_nil_check(F->y_2238)).chain;
}
if (rt_r_echk(F->found_2237)) {
F->z_2239 = NULL;
F->z_2239 = f_copy_sym_429(f_pick_operation_703(rt_r_ichk((*(P996)rt_nil_check(F->it_2235)).ival), &(((P989)rt_nil_check((*(P996)rt_nil_check(F->it_2235)).name))->all), (*(P996)rt_nil_check(F->it_2235)).b, (*(P996)rt_nil_check(F->it_2235)).a, F->r_2236, F->line_708));
(*(P1006)rt_nil_check(F->z_2239)).mnext = F->r_2236;
F->r_2236 = F->z_2239;
} else if ((!f_is_definable_134(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->it_2235)).name))->all)))) {
f_fail_23(F->line_708, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the generic needs ", 18), (((P989)rt_nil_check((*(P996)rt_nil_check(F->it_2235)).name))->all)), rt_str(", which is not known where it is invoked", 40)); b_; }));
}
F->it_2235 = (*(P996)rt_nil_check(F->it_2235)).next;
}
F->result_ = F->r_2236;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_711(P996 st_710) {
  struct f_generic_use_711fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_710 = st_710;
if ((rt_r_ichk((*(P996)rt_nil_check(F->st_710)).kind) == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_159(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P1006)rt_nil_check(f_lookup_159(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P996)rt_nil_check(F->st_710)).kind) == (((rt_int)80LL))) && ((*(P996)rt_nil_check(F->st_710)).a != NULL)) && (f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->st_710)).name))->all)) != NULL)) && ((*(P1006)rt_nil_check(f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->st_710)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1006 f_infer_from_716(P996 gd_712, P996 pat_713, P1002 t_714, P1006 known_715) {
  struct f_infer_from_716fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_712 = gd_712;
F->pat_713 = pat_713;
F->t_714 = t_714;
F->known_715 = known_715;
F->binds_2240 = NULL;
F->binds_2240 = F->known_715;
F->e_2241 = NULL;
F->e_2241 = (*(P996)rt_nil_check(F->pat_713)).a;
F->tp_2242 = NULL;
if (((F->t_714 == NULL) || ((*(P1002)rt_nil_check(F->t_714)).gen == NULL))) {
F->result_ = F->binds_2240;
goto ret_;
}
F->tp_2242 = (*(P996)rt_nil_check((*(P1006)rt_nil_check((*(P1002)rt_nil_check(F->t_714)).gen)).decl)).a;
if ((rt_r_ichk((*(P996)rt_nil_check(F->pat_713)).kind) == (((rt_int)78LL)))) {
F->e_2241 = f_copy_node_821((*(P996)rt_nil_check(F->pat_713)).a);
(*(P996)rt_nil_check(F->e_2241)).next = NULL;
}
while (((F->e_2241 != NULL) && (F->tp_2242 != NULL))) {
F->nm_2243 = NULL;
if (((rt_r_ichk((*(P996)rt_nil_check(F->e_2241)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P996)rt_nil_check(F->e_2241)).kind) == (((rt_int)80LL))))) {
F->nm_2243 = (*(P996)rt_nil_check(F->e_2241)).name;
}
if ((((F->nm_2243 != NULL) && (f_gparam_675(F->gd_712, &(((P989)rt_nil_check(F->nm_2243))->all)) != NULL)) && ((*(P996)rt_nil_check(f_gparam_675(F->gd_712, &(((P989)rt_nil_check(F->nm_2243))->all)))).ival <= ((rt_int)2LL)))) {
F->q_2244 = NULL;
F->q_2244 = F->binds_2240;
F->have_2245 = RT_R_EUNDEF;
F->have_2245 = 0;
while ((F->q_2244 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->q_2244)).name))->all), (((P989)rt_nil_check(F->nm_2243))->all))) {
F->have_2245 = 1;
}
F->q_2244 = (*(P1006)rt_nil_check(F->q_2244)).mnext;
}
if ((!rt_r_echk(F->have_2245))) {
F->g_2246 = NULL;
F->g_2246 = (*(P1002)rt_nil_check(F->t_714)).gbinds;
while ((F->g_2246 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->g_2246)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->tp_2242)).name))->all))) {
F->b_2247 = NULL;
F->b_2247 = f_bind_sym_677(f_gparam_675(F->gd_712, &(((P989)rt_nil_check(F->nm_2243))->all)));
(*(P1006)rt_nil_check(F->b_2247)).t = (*(P1006)rt_nil_check(F->g_2246)).t;
(*(P1006)rt_nil_check(F->b_2247)).c = (*(P1006)rt_nil_check(F->g_2246)).c;
(*(P1006)rt_nil_check(F->b_2247)).mnext = F->binds_2240;
F->binds_2240 = F->b_2247;
}
F->g_2246 = (*(P1006)rt_nil_check(F->g_2246)).mnext;
}
}
}
F->e_2241 = (*(P996)rt_nil_check(F->e_2241)).next;
F->tp_2242 = (*(P996)rt_nil_check(F->tp_2242)).next;
}
F->result_ = F->binds_2240;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1002 f_instantiate_type_722(P1006 g_717, P996 tt_718, P996 args_719, P998 *c_720, rt_int line_721) {
  struct f_instantiate_type_722fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_717 = g_717;
F->tt_718 = tt_718;
F->args_719 = args_719;
F->c_720 = c_720;
F->c_720v = *F->c_720;
F->line_721 = line_721;
F->gd_2248 = NULL;
F->gd_2248 = (*(P1006)rt_nil_check(F->g_717)).decl;
F->pat_2249 = NULL;
F->pat_2249 = (*(P996)rt_nil_check(F->gd_2248)).b;
F->binds_2250 = NULL;
F->binds_2250 = f_tt_binds_688(F->gd_2248, (*(P996)rt_nil_check(F->pat_2249)).e, F->tt_718, F->line_721);
F->inst_2251 = NULL;
F->inst_2251 = g_all_insts_1034;
F->t_2252 = NULL;
F->saved_caps_2253 = NULL;
F->saved_caps_2253 = g_caps_1051;
F->saved_env_2254 = NULL;
F->saved_env_2254 = g_genv_1033;
F->saved_gdepth_2255 = RT_R_IUNDEF;
F->saved_gdepth_2255 = rt_r_ichk(g_gdepth_1065);
F->c_720v = f_new_cons_180();
(*(P998)rt_nil_check(F->c_720v)).args = F->args_719;
while ((F->inst_2251 != NULL)) {
if ((((*(P1006)rt_nil_check(F->inst_2251)).decl == F->pat_2249) && f_same_binds_680((*(P1006)rt_nil_check(F->inst_2251)).members, F->binds_2250))) {
F->result_ = (*(P1006)rt_nil_check(F->inst_2251)).t;
goto ret_;
}
F->inst_2251 = (*(P1006)rt_nil_check(F->inst_2251)).insts;
}
f_open_scope_173();
{
F->b_2256 = NULL;
F->b_2256 = F->binds_2250;
while ((F->b_2256 != NULL)) {
f_define_164(F->b_2256, F->line_721);
F->b_2256 = (*(P1006)rt_nil_check(F->b_2256)).mnext;
}
}
g_caps_1051 = NULL;
g_genv_1033 = (*(P1006)rt_nil_check(F->g_717)).env;
g_gdepth_1065 = rt_r_ichk(g_depth_1035);
{
F->y_2257 = NULL;
F->y_2257 = f_new_sym_177((((rt_int)5LL)), (*(P996)rt_nil_check(F->pat_2249)).name);
F->yc_2258 = NULL;
(*(P1006)rt_nil_check(F->y_2257)).decl = F->pat_2249;
if ((rt_r_ichk((*(P996)rt_nil_check(F->pat_2249)).kind) == (((rt_int)44LL)))) {
F->t_2252 = f_new_typ_179((((rt_int)8LL)));
(*(P1002)rt_nil_check(F->t_2252)).name = (*(P996)rt_nil_check(F->pat_2249)).name;
(*(P1002)rt_nil_check(F->t_2252)).decl = F->pat_2249;
(*(P1006)rt_nil_check(F->y_2257)).t = F->t_2252;
f_define_164(F->y_2257, F->line_721);
f_finish_ptr_460(F->t_2252);
} else {
f_define_164(F->y_2257, F->line_721);
F->t_2252 = f_new_type_314(F->y_2257, f_nn_61((((rt_int)80LL)), F->line_721), &F->yc_2258);
}
}
g_caps_1051 = F->saved_caps_2253;
g_genv_1033 = F->saved_env_2254;
g_gdepth_1065 = rt_r_ichk(F->saved_gdepth_2255);
(*(P1002)rt_nil_check(F->t_2252)).gen = F->g_717;
(*(P1002)rt_nil_check(F->t_2252)).gbinds = F->binds_2250;
f_close_scope_174();
{ R1007 *cell2259 = rt_alloc(sizeof(R1007));
(*cell2259).name = NULL;
(*cell2259).t = NULL;
(*cell2259).c = NULL;
(*cell2259).access = NULL;
(*cell2259).cname = NULL;
(*cell2259).st = NULL;
(*cell2259).decl = NULL;
(*cell2259).params = NULL;
(*cell2259).result = NULL;
(*cell2259).members = NULL;
(*cell2259).mnext = NULL;
(*cell2259).binds = NULL;
(*cell2259).insts = NULL;
(*cell2259).env = NULL;
(*cell2259).chain = NULL;
(*cell2259).stack = NULL;
(*cell2259).owner = NULL;
(*cell2259).gctx = NULL;
(*cell2259).mv = NULL;
(*cell2259).reqs = NULL;
(*cell2259).home = NULL;
(*cell2259).capn = NULL;
(*cell2259).tbinds = NULL;
(*cell2259).loc = NULL;
(*cell2259).reqs_sym = NULL;
F->inst_2251 = cell2259;
}
(*(P1006)rt_nil_check(F->inst_2251)).kind = (((rt_int)5LL));
(*(P1006)rt_nil_check(F->inst_2251)).name = (*(P1006)rt_nil_check(F->g_717)).name;
(*(P1006)rt_nil_check(F->inst_2251)).decl = F->pat_2249;
(*(P1006)rt_nil_check(F->inst_2251)).t = F->t_2252;
(*(P1006)rt_nil_check(F->inst_2251)).members = F->binds_2250;
(*(P1006)rt_nil_check(F->inst_2251)).insts = g_all_insts_1034;
g_all_insts_1034 = F->inst_2251;
F->result_ = F->t_2252;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_720) = F->c_720v;
  RT_FPOP();
  return F->result_;
}

static P1006 f_instantiate_727(P1006 g_723, P996 tt_724, P996 args_725, rt_int line_726) {
  struct f_instantiate_727fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_723 = g_723;
F->tt_724 = tt_724;
F->args_725 = args_725;
F->line_726 = line_726;
F->gd_2260 = NULL;
F->gd_2260 = (*(P1006)rt_nil_check(F->g_723)).decl;
F->pat_2261 = NULL;
F->pat_2261 = (*(P996)rt_nil_check(F->gd_2260)).b;
F->binds_2262 = NULL;
F->f_2263 = NULL;
F->f_2263 = (*(P996)rt_nil_check(F->pat_2261)).e;
F->a_2264 = NULL;
F->a_2264 = F->tt_724;
F->fp_2265 = NULL;
F->fp_2265 = (*(P996)rt_nil_check(F->pat_2261)).a;
F->inst_2266 = NULL;
F->at_2267 = NULL;
F->c_2268 = NULL;
F->saved_fctx_2269 = NULL;
F->saved_fctx_2269 = g_fctx_1050;
F->saved_in_2270 = RT_R_EUNDEF;
F->saved_in_2270 = rt_r_echk(g_in_func_1048);
F->saved_level_2271 = RT_R_IUNDEF;
F->saved_level_2271 = rt_r_ichk(g_cur_level_1049);
F->saved_sym_2272 = NULL;
F->saved_sym_2272 = g_func_sym_1060;
F->saved_code_2273 = NULL;
F->saved_code_2273 = g_code_1046;
F->saved_env_2274 = NULL;
F->saved_env_2274 = g_genv_1033;
F->saved_gdepth_2275 = RT_R_IUNDEF;
F->saved_gdepth_2275 = rt_r_ichk(g_gdepth_1065);
F->binds_2262 = f_tt_binds_688(F->gd_2260, F->f_2263, F->a_2264, F->line_726);
F->a_2264 = F->args_725;
while (((F->fp_2265 != NULL) && (F->a_2264 != NULL))) {
if (f_generic_use_711((*(P996)rt_nil_check(F->fp_2265)).a)) {
F->v_2276 = rt_str_copy(f_gexpr_782(F->a_2264, NULL, &F->at_2267));
F->binds_2262 = f_infer_from_716(F->gd_2260, (*(P996)rt_nil_check(F->fp_2265)).a, F->at_2267, F->binds_2262);
} else if ((((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->fp_2265)).a)).kind) == (((rt_int)80LL))) && (f_gparam_675(F->gd_2260, &(((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->fp_2265)).a)).name))->all)) != NULL)) && ((*(P996)rt_nil_check(f_gparam_675(F->gd_2260, &(((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->fp_2265)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_2277 = RT_R_EUNDEF;
F->known_2277 = 0;
F->q_2278 = NULL;
F->q_2278 = F->binds_2262;
while ((F->q_2278 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->q_2278)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->fp_2265)).a)).name))->all))) {
F->known_2277 = 1;
}
F->q_2278 = (*(P1006)rt_nil_check(F->q_2278)).mnext;
}
if ((!rt_r_echk(F->known_2277))) {
F->b_2279 = NULL;
F->b_2279 = f_bind_sym_677(f_gparam_675(F->gd_2260, &(((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->fp_2265)).a)).name))->all)));
F->v_2280 = rt_str_copy(f_gexpr_782(F->a_2264, NULL, &F->at_2267));
(*(P1006)rt_nil_check(F->b_2279)).t = F->at_2267;
(*(P1006)rt_nil_check(F->b_2279)).c = g_no_cons_1094;
if ((((*(P996)rt_nil_check(f_gparam_675(F->gd_2260, &(((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->fp_2265)).a)).name))->all)))).b != NULL) && (!f_type_allowed_692(F->at_2267, (*(P996)rt_nil_check(f_gparam_675(F->gd_2260, &(((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->fp_2265)).a)).name))->all)))).b, F->binds_2262)))) {
f_fail_23(F->line_726, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->fp_2265)).a)).name))->all)); b_; }));
}
(*(P1006)rt_nil_check(F->b_2279)).mnext = F->binds_2262;
F->binds_2262 = F->b_2279;
}
}
F->fp_2265 = (*(P996)rt_nil_check(F->fp_2265)).next;
F->a_2264 = (*(P996)rt_nil_check(F->a_2264)).next;
}
F->binds_2262 = f_need_binds_709(F->gd_2260, F->binds_2262, F->line_726);
F->inst_2266 = g_all_insts_1034;
while ((F->inst_2266 != NULL)) {
if ((((*(P1006)rt_nil_check(F->inst_2266)).decl == F->pat_2261) && f_same_binds_680((*(P1006)rt_nil_check(F->inst_2266)).members, F->binds_2262))) {
F->result_ = F->inst_2266;
goto ret_;
}
F->inst_2266 = (*(P1006)rt_nil_check(F->inst_2266)).insts;
}
g_fctx_1050 = (*(P1006)rt_nil_check(F->g_723)).gctx;
g_in_func_1048 = (rt_r_ichk((*(P1006)rt_nil_check(F->g_723)).level) > ((rt_int)0LL));
g_cur_level_1049 = rt_r_ichk((*(P1006)rt_nil_check(F->g_723)).level);
g_func_sym_1060 = (*(P1006)rt_nil_check(F->g_723)).owner;
g_code_1046 = f_new_buffer_24();
f_open_scope_173();
g_gdepth_1065 = rt_r_ichk(g_depth_1035);
{
F->b_2281 = NULL;
F->b_2281 = F->binds_2262;
while ((F->b_2281 != NULL)) {
f_define_164(F->b_2281, F->line_726);
F->b_2281 = (*(P1006)rt_nil_check(F->b_2281)).mnext;
}
}
g_genv_1033 = (*(P1006)rt_nil_check(F->g_723)).env;
F->inst_2266 = f_build_subprogram_487(F->pat_2261);
(*(P1006)rt_nil_check(F->inst_2266)).members = F->binds_2262;
(*(P1006)rt_nil_check(F->inst_2266)).insts = g_all_insts_1034;
g_all_insts_1034 = F->inst_2266;
f_define_164(F->inst_2266, F->line_726);
f_gen_subprogram_558(F->pat_2261, F->inst_2266);
f_close_scope_174();
g_fctx_1050 = F->saved_fctx_2269;
g_in_func_1048 = rt_r_echk(F->saved_in_2270);
g_cur_level_1049 = rt_r_ichk(F->saved_level_2271);
g_func_sym_1060 = F->saved_sym_2272;
g_code_1046 = F->saved_code_2273;
g_genv_1033 = F->saved_env_2274;
g_gdepth_1065 = rt_r_ichk(F->saved_gdepth_2275);
F->result_ = F->inst_2266;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_729(P1006 y_728) {
  struct f_access_of_729fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_728 = y_728;
F->p_2282 = NULL;
F->p_2282 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if ((rt_r_ichk((*(P1006)rt_nil_check(F->y_728)).level) <= ((rt_int)0LL))) {
F->result_ = (((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_728)).access))->all);
goto ret_;
}
{ rt_int lo2284 = ((rt_int)1LL), hi2285 = rt_sub(rt_r_ichk(g_cur_level_1049), rt_r_ichk((*(P1006)rt_nil_check(F->y_728)).level));
for (rt_int it2286 = lo2284; it2286 <= hi2285; it2286++) {
F->i_2283 = it2286;
F->p_2282 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->p_2282))->all), rt_str("->up", 4)); b_; }));
}
}
if (rt_r_echk((*(P1006)rt_nil_check(F->y_728)).byref)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P989)rt_nil_check(F->p_2282))->all)), rt_str("->", 2)), (((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_728)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->p_2282))->all), rt_str("->", 2)), (((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_728)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_import_of_732(P996 l_730, rstr *name_731) {
  struct f_import_of_732fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_730 = l_730;
F->name_731 = name_731;
F->p_2287 = NULL;
F->p_2287 = F->l_730;
while ((F->p_2287 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2287)).name))->all), (*F->name_731))) {
F->result_ = F->p_2287;
goto ret_;
}
F->p_2287 = (*(P996)rt_nil_check(F->p_2287)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_735(P1006 y_733, rt_int line_734) {
  struct f_check_import_735fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_733 = y_733;
F->line_734 = line_734;
F->c_2288 = NULL;
F->c_2288 = g_fctx_1050;
F->ro_2289 = RT_R_EUNDEF;
F->ro_2289 = 0;
while (((F->c_2288 != NULL) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_733)).depth) < rt_r_ichk((*(P1013)rt_nil_check(F->c_2288)).depth)))) {
if ((!rt_r_echk((*(P1013)rt_nil_check(F->c_2288)).all_imp))) {
F->imp_2290 = NULL;
F->imp_2290 = f_import_of_732((*(P1013)rt_nil_check(F->c_2288)).imps, &(((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_733)).name))->all));
if ((F->imp_2290 == NULL)) {
f_fail_23(F->line_734, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_733)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if ((rt_r_ichk((*(P996)rt_nil_check(F->imp_2290)).ival) == ((rt_int)1LL))) {
F->ro_2289 = 1;
}
}
F->c_2288 = (*(P1013)rt_nil_check(F->c_2288)).next;
}
F->result_ = rt_r_echk(F->ro_2289);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_737(rstr *s_736) {
  struct f_c_ident_737fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_736 = s_736;
if (((((rt_int)(((*F->s_736)).len)) > ((rt_int)1LL)) && (rt_r_echk(rt_str_get((*F->s_736), ((rt_int)1LL))) == 46))) {
F->result_ = rt_str_cat(rt_str("dot_", 4), f_lower_s_15(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_736), ((rt_int)2LL), ((rt_int)(((*F->s_736)).len))); b_; })));
goto ret_;
} else if (((((rt_int)(((*F->s_736)).len)) > ((rt_int)1LL)) && (rt_r_echk(rt_str_get((*F->s_736), ((rt_int)1LL))) == 40))) {
F->r_2291 = NULL;
F->r_2291 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel_", 4); b_; }));
{ rt_int lo2293 = ((rt_int)2LL), hi2294 = rt_sub(((rt_int)(((*F->s_736)).len)), ((rt_int)1LL));
for (rt_int it2295 = lo2293; it2295 <= hi2294; it2295++) {
F->i_2292 = it2295;
if ((rt_r_echk(rt_str_get((*F->s_736), F->i_2292)) == 42)) {
F->r_2291 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_2291))->all), rt_str("s", 1)); b_; }));
} else if ((rt_r_echk(rt_str_get((*F->s_736), F->i_2292)) == 44)) {
F->r_2291 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_2291))->all), rt_str("_", 1)); b_; }));
} else if ((rt_r_echk(rt_str_get((*F->s_736), F->i_2292)) == 46)) {
F->r_2291 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_2291))->all), rt_str("r", 1)); b_; }));
}
}
}
F->result_ = (((P989)rt_nil_check(F->r_2291))->all);
goto ret_;
} else if (rt_str_eq((*F->s_736), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_736), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_736), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_736), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_736), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_736), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_736), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_736), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_736), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_736), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_736), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_736), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_736), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_736), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_736));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cell_deref_740(P1002 t_738, rstr *p_739) {
  struct f_cell_deref_740fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_738 = t_738;
F->p_739 = p_739;
if ((((*(P1002)rt_nil_check(F->t_738)).decl != NULL) && ((*(P996)rt_nil_check((*(P1002)rt_nil_check(F->t_738)).decl)).b != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->p_739)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*F->p_739)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_743(rstr *base_741, P1002 t_742) {
  struct f_deref_743fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_741 = base_741;
F->t_742 = t_742;
if ((((*(P1002)rt_nil_check(F->t_742)).decl != NULL) && ((*(P996)rt_nil_check((*(P1002)rt_nil_check(F->t_742)).decl)).b != NULL))) {
if (f_suppressed_494(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->base_741)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_230(F->t_742)), rt_str(")rt_nil_check(", 14)), (*F->base_741)), rt_str("))->all)", 8));
goto ret_;
}
if (f_suppressed_494(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_230(F->t_742)), rt_str(")(", 2)), (*F->base_741)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_230(F->t_742)), rt_str(")rt_nil_check(", 14)), (*F->base_741)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_745(P996 e_744) {
  struct f_is_lvalue_745fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_744 = e_744;
if ((rt_r_ichk((*(P996)rt_nil_check(F->e_744)).kind) == (((rt_int)7LL)))) {
F->y_2296 = NULL;
F->y_2296 = f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_744)).name))->all));
F->result_ = ((F->y_2296 != NULL) && ((rt_r_ichk((*(P1006)rt_nil_check(F->y_2296)).kind) == (((rt_int)1LL))) || (((rt_r_ichk((*(P1006)rt_nil_check(F->y_2296)).kind) == (((rt_int)2LL))) && ((*(P1006)rt_nil_check(F->y_2296)).mv == NULL)) && (!rt_r_echk((*(P1006)rt_nil_check(F->y_2296)).hasmv)))));
goto ret_;
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_744)).kind) == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_745((*(P996)rt_nil_check(F->e_744)).a);
goto ret_;
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_744)).kind) == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_744)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_745((*(P996)rt_nil_check(F->e_744)).a));
goto ret_;
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_744)).kind) == (((rt_int)10LL)))) {
if ((((*(P996)rt_nil_check(F->e_744)).b != NULL) && (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_744)).b)).kind) == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_745((*(P996)rt_nil_check(F->e_744)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_751(P996 e_746, P989 *code_747, P1002 *t_748, P998 *c_749, int *ro_750) {
  struct f_lvalue_751fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_746 = e_746;
F->code_747 = code_747;
F->code_747v = *F->code_747;
F->t_748 = t_748;
F->t_748v = *F->t_748;
F->c_749 = c_749;
F->c_749v = *F->c_749;
F->ro_750 = ro_750;
F->ro_750v = *F->ro_750;
F->base_2297 = NULL;
F->bt_2298 = NULL;
F->bc_2299 = NULL;
if ((rt_r_ichk((*(P996)rt_nil_check(F->e_746)).kind) == (((rt_int)7LL)))) {
F->y_2300 = NULL;
F->y_2300 = f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_746)).name))->all));
if ((F->y_2300 == NULL)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_746)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_746)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P1006)rt_nil_check(F->y_2300)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_2300)).kind) != (((rt_int)2LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_746)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_746)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_747v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_729(F->y_2300); b_; }));
F->t_748v = (*(P1006)rt_nil_check(F->y_2300)).t;
F->c_749v = (*(P1006)rt_nil_check(F->y_2300)).c;
F->ro_750v = rt_r_echk((*(P1006)rt_nil_check(F->y_2300)).ro_flag);
if (((rt_r_ichk((*(P1006)rt_nil_check(F->y_2300)).kind) == (((rt_int)1LL))) && f_check_import_735(F->y_2300, rt_r_ichk((*(P996)rt_nil_check(F->e_746)).line)))) {
F->ro_750v = 1;
}
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_746)).kind) == (((rt_int)17LL)))) {
f_lvalue_751((*(P996)rt_nil_check(F->e_746)).a, &F->code_747v, &F->t_748v, &F->c_749v, &F->ro_750v);
} else if (((((rt_r_ichk((*(P996)rt_nil_check(F->e_746)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_746)).a)).kind) == (((rt_int)7LL)))) && rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_746)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_159(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_747v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_918((*(P996)rt_nil_check(F->e_746)).b, rt_r_ichk((*(P996)rt_nil_check(F->e_746)).line), &F->t_748v); b_; }));
F->c_749v = g_no_cons_1094;
F->ro_750v = 0;
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_746)).kind) == (((rt_int)11LL)))) {
f_lvalue_751((*(P996)rt_nil_check(F->e_746)).a, &F->base_2297, &F->bt_2298, &F->bc_2299, &F->ro_750v);
f_select_on_759(&(((P989)rt_nil_check(F->base_2297))->all), F->bt_2298, F->e_746, &F->ro_750v, &F->code_747v, &F->t_748v, &F->c_749v);
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_746)).kind) == (((rt_int)10LL)))) {
f_lvalue_751((*(P996)rt_nil_check(F->e_746)).a, &F->base_2297, &F->bt_2298, &F->bc_2299, &F->ro_750v);
f_index_on_776(&(((P989)rt_nil_check(F->base_2297))->all), F->bt_2298, F->e_746, &F->ro_750v, 1, &F->code_747v, &F->t_748v, &F->c_749v);
} else {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_746)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_747) = F->code_747v;  (*F->t_748) = F->t_748v;  (*F->c_749) = F->c_749v;  if (!rt_r_undef_BOOL(F->ro_750v)) (*F->ro_750) = F->ro_750v;
  RT_FPOP();
  return;
}

static void f_select_on_759(rstr *base_752, P1002 bt_753, P996 e_754, int *ro_755, P989 *code_756, P1002 *t_757, P998 *c_758) {
  struct f_select_on_759fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_752 = base_752;
F->bt_753 = bt_753;
F->e_754 = e_754;
F->ro_755 = ro_755;
F->code_756 = code_756;
F->code_756v = *F->code_756;
F->t_757 = t_757;
F->t_757v = *F->t_757;
F->c_758 = c_758;
F->c_758v = *F->c_758;
F->c_758v = g_no_cons_1094;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->bt_753)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_460(F->bt_753);
(*F->ro_755) = 0;
if (((*(P1002)rt_nil_check(F->bt_753)).decl != NULL)) {
F->p_2301 = NULL;
F->p_2301 = (*(P996)rt_nil_check((*(P1002)rt_nil_check(F->bt_753)).decl)).b;
while ((F->p_2301 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2301)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_754)).name))->all))) {
F->pc_2302 = NULL;
F->code_756v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_230(F->bt_753)), rt_str(")rt_nil_check(", 14)), (*F->base_752)), rt_str("))->p_", 6)), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2301)).name))->all))), rt_str(")", 1)); b_; }));
F->t_757v = f_resolve_subtype_264((*(P996)rt_nil_check(F->p_2301)).a, &F->pc_2302);
(*F->ro_755) = 1;
goto ret_;
}
F->p_2301 = (*(P996)rt_nil_check(F->p_2301)).next;
}
}
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_754)).name))->all), rt_str("ALL", 3))) {
F->code_756v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_743(&(*F->base_752), F->bt_753); b_; }));
F->t_757v = (*(P1002)rt_nil_check(F->bt_753)).target;
goto ret_;
}
f_select_on_759(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_743(&(*F->base_752), F->bt_753); b_; }), (*(P1002)rt_nil_check(F->bt_753)).target, F->e_754, &(*F->ro_755), &F->code_756v, &F->t_757v, &F->c_758v);
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->bt_753)).kind) == (((rt_int)15LL)))) {
F->p_2303 = NULL;
F->p_2303 = (*(P1002)rt_nil_check(F->bt_753)).tparams;
while ((F->p_2303 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2303)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_754)).name))->all))) {
F->code_756v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_752), rt_str(".p_", 3)), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2303)).name))->all))); b_; }));
F->t_757v = f_tparam_type_348(F->bt_753, &(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2303)).name))->all));
(*F->ro_755) = 1;
goto ret_;
}
F->p_2303 = (*(P996)rt_nil_check(F->p_2303)).next;
}
F->p_2303 = (*(P1002)rt_nil_check(F->bt_753)).tparams;
if ((!f_opened_304(F->bt_753))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_754)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->bt_753)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P1002)rt_nil_check(F->bt_753)).tparams == NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_754)).name))->all), rt_str("ALL", 3))) {
F->code_756v = f_mk_3(&(*F->base_752));
F->t_757v = (*(P1002)rt_nil_check(F->bt_753)).under;
goto ret_;
}
f_select_on_759(&(*F->base_752), (*(P1002)rt_nil_check(F->bt_753)).under, F->e_754, &(*F->ro_755), &F->code_756v, &F->t_757v, &F->c_758v);
goto ret_;
}
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_754)).name))->all), rt_str("ALL", 3))) {
F->code_756v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_752), rt_str(".all", 4)); b_; }));
F->t_757v = (*(P1002)rt_nil_check(F->bt_753)).under;
goto ret_;
}
while ((F->p_2303 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2303)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_754)).name))->all))) {
F->code_756v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_752), rt_str(".p_", 3)), f_lower_s_15(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2303)).name))->all))); b_; }));
F->t_757v = f_tparam_type_348(F->bt_753, &(((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2303)).name))->all));
(*F->ro_755) = 1;
goto ret_;
}
F->p_2303 = (*(P996)rt_nil_check(F->p_2303)).next;
}
f_select_on_759(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_752), rt_str(".all", 4)); b_; }), (*(P1002)rt_nil_check(F->bt_753)).under, F->e_754, &(*F->ro_755), &F->code_756v, &F->t_757v, &F->c_758v);
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->bt_753)).kind) == (((rt_int)17LL)))) {
F->f_2304 = NULL;
F->f_2304 = (*(P1002)rt_nil_check(F->bt_753)).fields;
F->i_2305 = RT_R_IUNDEF;
F->i_2305 = ((rt_int)0LL);
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_754)).name))->all), rt_str("TAG", 3))) {
F->code_756v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_752)), rt_str(").tag)", 6)); b_; }));
F->t_757v = (*(P1002)rt_nil_check(F->bt_753)).elem;
(*F->ro_755) = 1;
goto ret_;
}
while ((F->f_2304 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_2304)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_754)).name))->all))) {
F->fn_2306 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_752)), rt_str(").u.", 4)), f_field_c_17(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_754)).name))->all))));
F->c_758v = (*(P1004)rt_nil_check(F->f_2304)).c;
F->code_756v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_752)), rt_str(").tag == ", 9)), f_itos_7(rt_r_ichk(F->i_2305))), rt_str(" \? &", 4)), F->fn_2306), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_2306), rt_str(")))", 3)); b_; }));
F->t_757v = (*(P1004)rt_nil_check(F->f_2304)).t;
goto ret_;
}
F->i_2305 = rt_add(rt_r_ichk(F->i_2305), ((rt_int)1LL));
F->f_2304 = (*(P1004)rt_nil_check(F->f_2304)).next;
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_754)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_754)).name))->all)); b_; }));
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->bt_753)).kind) == (((rt_int)7LL)))) {
F->f_2307 = NULL;
F->f_2307 = (*(P1002)rt_nil_check(F->bt_753)).fields;
while ((F->f_2307 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_2307)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_754)).name))->all))) {
F->c_758v = (*(P1004)rt_nil_check(F->f_2307)).c;
F->code_756v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_752), rt_str(".", 1)), f_field_c_17(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_754)).name))->all))); b_; }));
F->t_757v = (*(P1004)rt_nil_check(F->f_2307)).t;
goto ret_;
}
F->f_2307 = (*(P1004)rt_nil_check(F->f_2307)).next;
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_754)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_754)).name))->all)); b_; }));
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_754)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_754)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_756) = F->code_756v;  (*F->t_757) = F->t_757v;  (*F->c_758) = F->c_758v;
  RT_FPOP();
  return;
}

static int f_has_call_761(rstr *s_760) {
  struct f_has_call_761fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_760 = s_760;
{ rt_int lo2309 = ((rt_int)1LL), hi2310 = ((rt_int)(((*F->s_760)).len));
for (rt_int it2311 = lo2309; it2311 <= hi2310; it2311++) {
F->i_2308 = it2311;
if ((rt_r_echk(rt_str_get((*F->s_760), F->i_2308)) == 40)) {
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

static void f_need_slice_763(P1002 t_762) {
  struct f_need_slice_763fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_762 = t_762;
F->c_2312 = rt_str_copy(f_ctype_230(F->t_762));
F->n_2313 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_2312));
F->l_2314 = NULL;
if (f_seen_name_416(g_mcopies_1075, &F->n_2313)) {
goto ret_;
}
{ R1001 *cell2315 = rt_alloc(sizeof(R1001));
(*cell2315).s = NULL;
(*cell2315).next = NULL;
F->l_2314 = cell2315;
}
(*(P1000)rt_nil_check(F->l_2314)).s = f_mk_3(&F->n_2313);
(*(P1000)rt_nil_check(F->l_2314)).next = g_mcopies_1075;
g_mcopies_1075 = F->l_2314;
f_put_27(g_out_protos_1041, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2312), rt_str(" ", 1)), F->n_2313), rt_str("(", 1)), F->c_2312), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2312), rt_str(" ", 1)), F->n_2313), rt_str("(", 1)), F->c_2312), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_1041, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2312), rt_str(" rt_r_acat_", 11)), F->c_2312), rt_str("(", 1)), F->c_2312), rt_str(" a, ", 4)), F->c_2312), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2312), rt_str(" rt_r_acat_", 11)), F->c_2312), rt_str("(", 1)), F->c_2312), rt_str(" a, ", 4)), F->c_2312), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_2312), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_405((*(P1002)rt_nil_check(F->t_762)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_405((*(P1002)rt_nil_check(F->t_762)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_1043, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rstr f_ix_767(rstr *i_764, rstr *lo_765, rstr *hi_766) {
  struct f_ix_767fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_764 = i_764;
F->lo_765 = lo_765;
F->hi_766 = hi_766;
if (f_suppressed_494(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_764)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_764)), rt_str(", ", 2)), (*F->lo_765)), rt_str(", ", 2)), (*F->hi_766)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_776(rstr *base_768, P1002 bt_769, P996 e_770, int *ro_771, int lv_772, P989 *code_773, P1002 *t_774, P998 *c_775) {
  struct f_index_on_776fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_768 = base_768;
F->bt_769 = bt_769;
F->e_770 = e_770;
F->ro_771 = ro_771;
F->lv_772 = lv_772;
F->code_773 = code_773;
F->code_773v = *F->code_773;
F->t_774 = t_774;
F->t_774v = *F->t_774;
F->c_775 = c_775;
F->c_775v = *F->c_775;
F->a_2316 = NULL;
F->a_2316 = (*(P996)rt_nil_check(F->e_770)).b;
F->it_2317 = NULL;
F->c_775v = g_no_cons_1094;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->bt_769)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_460(F->bt_769);
(*F->ro_771) = 0;
f_index_on_776(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_743(&(*F->base_768), F->bt_769); b_; }), (*(P1002)rt_nil_check(F->bt_769)).target, F->e_770, &(*F->ro_771), F->lv_772, &F->code_773v, &F->t_774v, &F->c_775v);
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->bt_769)).kind) == (((rt_int)15LL)))) {
if ((!f_opened_304(F->bt_769))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_770)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->bt_769)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P1002)rt_nil_check(F->bt_769)).tparams == NULL)) {
f_index_on_776(&(*F->base_768), (*(P1002)rt_nil_check(F->bt_769)).under, F->e_770, &(*F->ro_771), F->lv_772, &F->code_773v, &F->t_774v, &F->c_775v);
} else {
f_index_on_776(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_768), rt_str(".all", 4)); b_; }), (*(P1002)rt_nil_check(F->bt_769)).under, F->e_770, &(*F->ro_771), F->lv_772, &F->code_773v, &F->t_774v, &F->c_775v);
}
goto ret_;
}
if ((((rt_r_ichk((*(P1002)rt_nil_check(F->bt_769)).kind) == (((rt_int)6LL))) && (F->a_2316 != NULL)) && (rt_r_ichk((*(P996)rt_nil_check(F->a_2316)).kind) == (((rt_int)16LL))))) {
if (((rt_r_ichk((*(P1002)rt_nil_check(F->bt_769)).ndim) != ((rt_int)1LL)) || ((*(P996)rt_nil_check(F->a_2316)).next != NULL))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_770)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_2318 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->a_2316)).a, (*(P1002)rt_nil_check(F->bt_769)).idx, &F->it_2317));
F->hi_2319 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->a_2316)).b, (*(P1002)rt_nil_check(F->bt_769)).idx, &F->it_2317));
F->code_773v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_230(F->bt_769)), rt_str("(", 1)), (*F->base_768)), rt_str(", ", 2)), F->lo_2318), rt_str(", ", 2)), F->hi_2319), rt_str(")", 1)); b_; }));
f_need_slice_763(F->bt_769);
F->t_774v = F->bt_769;
(*F->ro_771) = 1;
}
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->bt_769)).kind) == (((rt_int)6LL)))) {
F->off_2320 = NULL;
F->k_2321 = RT_R_IUNDEF;
F->k_2321 = ((rt_int)0LL);
F->b_2322 = NULL;
F->b_2322 = f_mk_3(&(*F->base_768));
F->pre_2323 = NULL;
F->pre_2323 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_67(F->a_2316) != rt_r_ichk((*(P1002)rt_nil_check(F->bt_769)).ndim))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_770)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7(rt_r_ichk((*(P1002)rt_nil_check(F->bt_769)).ndim)), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_772) && f_has_call_761(&(*F->base_768)))) {
F->pre_2323 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_230(F->bt_769)), rt_str(" b_ = ", 6)), (*F->base_768)), rt_str("; ", 2)); b_; }));
F->b_2322 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_2316 != NULL)) {
F->k_2321 = rt_add(rt_r_ichk(F->k_2321), ((rt_int)1LL));
{
F->i_2324 = rt_str_copy(f_gexpr_782(F->a_2316, f_idx_type_254(F->bt_769, rt_r_ichk(F->k_2321)), &F->it_2317));
F->l_2325 = rt_str_copy(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->b_2322))->all), rt_str(".", 1)), f_dim_lo_238(rt_r_ichk(F->k_2321))));
F->h_2326 = rt_str_copy(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->b_2322))->all), rt_str(".", 1)), f_dim_hi_240(rt_r_ichk(F->k_2321))));
f_check_type_228(F->it_2317, f_idx_type_254(F->bt_769, rt_r_ichk(F->k_2321)), rt_r_ichk((*(P996)rt_nil_check(F->e_770)).line));
if ((F->off_2320 == NULL)) {
F->off_2320 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_767(&F->i_2324, &F->l_2325, &F->h_2326)), rt_str(" - ", 3)), F->l_2325), rt_str(")", 1)); b_; }));
} else {
F->off_2320 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P989)rt_nil_check(F->off_2320))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2325), rt_str(", ", 2)), F->h_2326), rt_str(") + ", 4)), f_ix_767(&F->i_2324, &F->l_2325, &F->h_2326)), rt_str(" - ", 3)), F->l_2325), rt_str(")", 1)); b_; }));
}
}
F->a_2316 = (*(P996)rt_nil_check(F->a_2316)).next;
}
if ((((rt_int)(((((P989)rt_nil_check(F->pre_2323))->all)).len)) > ((rt_int)0LL))) {
F->code_773v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->pre_2323))->all), (((P989)rt_nil_check(F->b_2322))->all)), rt_str(".p[", 3)), (((P989)rt_nil_check(F->off_2320))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_773v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->b_2322))->all), rt_str(".p[", 3)), (((P989)rt_nil_check(F->off_2320))->all)), rt_str("]", 1)); b_; }));
}
F->t_774v = (*(P1002)rt_nil_check(F->bt_769)).elem;
F->c_775v = (*(P1002)rt_nil_check(F->bt_769)).elemcons;
goto ret_;
}
if ((f_list_len_67(F->a_2316) != ((rt_int)1LL))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_770)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->bt_769)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P996)rt_nil_check(F->a_2316)).kind) == (((rt_int)16LL)))) {
F->lo_2327 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->a_2316)).a, g_ty_int_1076, &F->it_2317));
F->hi_2328 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->a_2316)).b, g_ty_int_1076, &F->it_2317));
F->code_773v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_768)), rt_str(", ", 2)), F->lo_2327), rt_str(", ", 2)), F->hi_2328), rt_str(")", 1)); b_; }));
F->t_774v = F->bt_769;
(*F->ro_771) = 1;
goto ret_;
}
{
F->i_2329 = rt_str_copy(f_gexpr_782(F->a_2316, g_ty_int_1076, &F->it_2317));
F->t_774v = f_str_elem_214(F->bt_769);
F->c_775v = (*(P1002)rt_nil_check(F->bt_769)).elemcons;
if (F->lv_772) {
F->code_773v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_768)), rt_str(", ", 2)), F->i_2329), rt_str("))", 2)); b_; }));
} else {
F->code_773v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_768)), rt_str(", ", 2)), F->i_2329), rt_str(")", 1)); b_; }));
(*F->ro_771) = 1;
}
}
goto ret_;
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_770)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_773) = F->code_773v;  (*F->t_774) = F->t_774v;  (*F->c_775) = F->c_775v;
  RT_FPOP();
  return;
}

static int f_own_attribute_778(P996 e_777) {
  struct f_own_attribute_778fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_777 = e_777;
F->saved_2330 = NULL;
F->saved_2330 = g_code_1046;
F->bt_2331 = NULL;
F->ok_2332 = RT_R_EUNDEF;
F->ok_2332 = 0;
g_trial_1074 = rt_add(rt_r_ichk(g_trial_1074), ((rt_int)1LL));
g_code_1046 = f_new_buffer_24();
{ rt_frame xf2333;
if (RT_TRY(xf2333)) {
F->base_2335 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_777)).a, NULL, &F->bt_2331));
while (((F->bt_2331 != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->bt_2331)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_460(F->bt_2331);
F->bt_2331 = (*(P1002)rt_nil_check(F->bt_2331)).target;
}
while ((((F->bt_2331 != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->bt_2331)).kind) == (((rt_int)15LL)))) && ((*(P1002)rt_nil_check(F->bt_2331)).tparams == NULL))) {
F->bt_2331 = (*(P1002)rt_nil_check(F->bt_2331)).under;
}
if (((F->bt_2331 != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->bt_2331)).kind) == (((rt_int)15LL))))) {
F->p_2336 = NULL;
F->p_2336 = (*(P1002)rt_nil_check(F->bt_2331)).tparams;
while ((F->p_2336 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2336)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_777)).name))->all))) {
F->ok_2332 = 1;
}
F->p_2336 = (*(P996)rt_nil_check(F->p_2336)).next;
}
F->bt_2331 = (*(P1002)rt_nil_check(F->bt_2331)).under;
}
if (((F->bt_2331 != NULL) && ((rt_r_ichk((*(P1002)rt_nil_check(F->bt_2331)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->bt_2331)).kind) == (((rt_int)17LL)))))) {
F->f_2337 = NULL;
F->f_2337 = (*(P1002)rt_nil_check(F->bt_2331)).fields;
while ((F->f_2337 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_2337)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_777)).name))->all))) {
F->ok_2332 = 1;
}
F->f_2337 = (*(P1004)rt_nil_check(F->f_2337)).next;
}
}
RT_POP(xf2333);
} else {
RT_POP(xf2333);
int x2334 = rt_xcur;
if (0 || x2334 == ex_compile_error_1) {
F->ok_2332 = 0;
} else {
rt_raise(x2334);
}
}
}
g_trial_1074 = rt_sub(rt_r_ichk(g_trial_1074), ((rt_int)1LL));
g_code_1046 = F->saved_2330;
F->result_ = rt_r_echk(F->ok_2332);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_782(P996 e_779, P1002 want_780, P1002 *t_781) {
  struct f_gexpr_782fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_779 = e_779;
F->want_780 = want_780;
F->t_781 = t_781;
F->t_781v = *F->t_781;
F->k_2338 = RT_R_IUNDEF;
F->k_2338 = rt_r_ichk((*(P996)rt_nil_check(F->e_779)).kind);
F->code_2339 = NULL;
F->c_2340 = NULL;
F->ro_2341 = RT_R_EUNDEF;
F->bt_2342 = NULL;
F->ctx_2343 = NULL;
F->ctx_2343 = g_cons_ctx_1067;
g_cons_ctx_1067 = NULL;
F->t_781v = g_ty_int_1076;
if ((rt_r_ichk(F->k_2338) == (((rt_int)1LL)))) {
if (((F->want_780 != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->want_780)).kind) == (((rt_int)3LL))))) {
F->t_781v = g_ty_float_1078;
F->result_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((rt_r_ichk(F->k_2338) == (((rt_int)2LL)))) {
F->t_781v = g_ty_float_1078;
F->result_ = (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all);
goto ret_;
} else if ((rt_r_ichk(F->k_2338) == (((rt_int)5LL)))) {
F->t_781v = g_ty_bool_1077;
F->result_ = f_itos_7(rt_r_ichk((*(P996)rt_nil_check(F->e_779)).ival));
goto ret_;
} else if (((((rt_r_ichk(F->k_2338) == (((rt_int)3LL))) && (F->want_780 != NULL)) && (rt_r_ichk((*(P1002)rt_nil_check(F->want_780)).kind) == (((rt_int)5LL)))) && (!f_same_217(f_str_elem_214(F->want_780), g_ty_ascii_1079)))) {
F->r_2344 = NULL;
F->r_2344 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_q_18(); b_; }));
F->t_781v = F->want_780;
{ rt_int lo2346 = ((rt_int)1LL), hi2347 = ((rt_int)(((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all)).len));
for (rt_int it2348 = lo2346; it2348 <= hi2347; it2348++) {
F->i_2345 = it2348;
F->pos_2349 = RT_R_IUNDEF;
F->pos_2349 = f_lit_index_261((*(P1002)rt_nil_check(f_base_of_219(f_str_elem_214(F->want_780)))).lits, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ascii_lit_792(rt_r_echk(rt_str_get((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), F->i_2345))); b_; }));
if ((rt_r_ichk(F->pos_2349) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_779)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), f_ascii_lit_792(rt_r_echk(rt_str_get((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), F->i_2345)))), rt_str(" is not a value of the component type", 37)); b_; }));
}
F->r_2344 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_2344))->all), rt_str("\\", 1)), f_octal_794(rt_r_ichk(F->pos_2349))); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), (((P989)rt_nil_check(F->r_2344))->all)), f_q_18()), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2338) == (((rt_int)3LL)))) {
F->t_781v = g_ty_string_1080;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_825(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2338) == (((rt_int)6LL)))) {
F->t_781v = g_ty_nil_1083;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((rt_r_ichk(F->k_2338) == (((rt_int)4LL)))) {
if (((F->want_780 != NULL) && ((*(P1002)rt_nil_check(f_base_of_219(F->want_780))).kind == (((rt_int)4LL))))) {
F->t_781v = F->want_780;
} else {
F->t_781v = f_enum_type_of_828(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_r_ichk((*(P996)rt_nil_check(F->e_779)).line));
}
{
F->i_2350 = RT_R_IUNDEF;
F->i_2350 = f_lit_index_261((*(P1002)rt_nil_check(f_base_of_219(F->t_781v))).lits, &(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all));
if ((rt_r_ichk(F->i_2350) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_779)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(rt_r_ichk(F->i_2350));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2338) == (((rt_int)17LL)))) {
g_cons_ctx_1067 = F->ctx_2343;
F->result_ = f_gexpr_782((*(P996)rt_nil_check(F->e_779)).a, F->want_780, &F->t_781v);
goto ret_;
} else if ((rt_r_ichk(F->k_2338) == (((rt_int)7LL)))) {
F->y_2351 = NULL;
F->y_2351 = f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all));
if ((F->y_2351 == NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("ME", 2))) {
F->t_781v = g_ty_act_1086;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_781v = g_ty_act_1086;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_930(f_wrap_apply_823(F->e_779), 0, &F->t_781v);
goto ret_;
}
if (((((((((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_930(f_wrap_apply_823(F->e_779), 0, &F->t_781v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_779)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P1006)rt_nil_check(F->y_2351)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_2351)).kind) == (((rt_int)2LL))))) {
F->ro_2352 = RT_R_EUNDEF;
F->t_781v = (*(P1006)rt_nil_check(F->y_2351)).t;
if ((rt_r_ichk((*(P1006)rt_nil_check(F->y_2351)).kind) == (((rt_int)1LL)))) {
F->ro_2352 = f_check_import_735(F->y_2351, rt_r_ichk((*(P996)rt_nil_check(F->e_779)).line));
F->result_ = f_init_chk_359((*(P1006)rt_nil_check(F->y_2351)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_729(F->y_2351); b_; }));
goto ret_;
}
F->result_ = f_access_of_729(F->y_2351);
goto ret_;
}
if ((rt_r_ichk((*(P1006)rt_nil_check(F->y_2351)).kind) == (((rt_int)3LL)))) {
F->result_ = f_gcall_930(f_wrap_apply_823(F->e_779), 0, &F->t_781v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_779)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((rt_r_ichk(F->k_2338) == (((rt_int)8LL))) && (f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all)) != NULL)) && (f_user_op_926(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), f_copy_node_821((*(P996)rt_nil_check(F->e_779)).a)) != NULL))) {
F->call_2353 = NULL;
F->call_2353 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P996)rt_nil_check(F->e_779)).line));
F->fname_2354 = NULL;
F->fname_2354 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P996)rt_nil_check(F->e_779)).line));
(*(P996)rt_nil_check(F->fname_2354)).name = (*(P996)rt_nil_check(F->e_779)).name;
(*(P996)rt_nil_check(F->call_2353)).a = F->fname_2354;
(*(P996)rt_nil_check(F->call_2353)).b = f_copy_node_821((*(P996)rt_nil_check(F->e_779)).a);
F->result_ = f_gcall_930(F->call_2353, 0, &F->t_781v);
goto ret_;
} else if (((((rt_r_ichk(F->k_2338) == (((rt_int)8LL))) && rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("NOT", 3))) && (F->want_780 != NULL)) && (rt_r_ichk((*(P1002)rt_nil_check(F->want_780)).kind) == (((rt_int)16LL))))) {
F->a_2355 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_779)).a, F->want_780, &F->t_781v));
F->result_ = rt_str_cat(rt_str_cat(rt_str("y_set_compl(", 12), F->a_2355), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2338) == (((rt_int)8LL)))) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("NOT", 3))) {
F->a_2356 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_779)).a, g_ty_bool_1077, &F->t_781v));
f_check_type_228(F->t_781v, g_ty_bool_1077, rt_r_ichk((*(P996)rt_nil_check(F->e_779)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_2356), rt_str(")", 1));
goto ret_;
}
{
F->a_2357 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_779)).a, F->want_780, &F->t_781v));
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_2357;
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_781v)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_2357), rt_str(")", 1));
goto ret_;
}
f_check_type_228(F->t_781v, g_ty_int_1076, rt_r_ichk((*(P996)rt_nil_check(F->e_779)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_2357), rt_str(")", 1));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2338) == (((rt_int)9LL)))) {
F->result_ = f_gbinop_850(F->e_779, F->want_780, &F->t_781v);
goto ret_;
} else if ((rt_r_ichk(F->k_2338) == (((rt_int)10LL)))) {
if (((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_779)).a)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_779)).a)).kind) == (((rt_int)12LL))))) {
F->nm_2358 = NULL;
F->nm_2358 = (*(P996)rt_nil_check(F->e_779)).a;
F->y_2359 = NULL;
if ((rt_r_ichk((*(P996)rt_nil_check(F->nm_2358)).kind) == (((rt_int)12LL)))) {
F->nm_2358 = (*(P996)rt_nil_check(F->nm_2358)).a;
}
F->y_2359 = f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->nm_2358)).name))->all));
if (((((F->y_2359 == NULL) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_2359)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_2359)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_2359)).kind) == (((rt_int)10LL))))) {
F->result_ = f_gcall_930(F->e_779, 0, &F->t_781v);
goto ret_;
}
}
if ((f_user_subscript_805(F->e_779) != NULL)) {
F->result_ = f_gcall_930(f_user_subscript_805(F->e_779), 0, &F->t_781v);
goto ret_;
}
{
F->base_2360 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_779)).a, NULL, &F->bt_2342));
F->ro_2341 = 1;
f_index_on_776(&F->base_2360, F->bt_2342, F->e_779, &F->ro_2341, 0, &F->code_2339, &F->t_781v, &F->c_2340);
if ((((!f_is_lvalue_745(F->e_779)) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_781v)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P1002)rt_nil_check(F->t_781v)).kind) == (((rt_int)5LL))))) {
F->result_ = (((P989)rt_nil_check(F->code_2339))->all);
goto ret_;
}
F->result_ = f_init_chk_359(F->t_781v, &(((P989)rt_nil_check(F->code_2339))->all));
goto ret_;
}
} else if (((rt_r_ichk(F->k_2338) == (((rt_int)11LL))) && (f_user_dot_803(F->e_779) != NULL))) {
F->result_ = f_gcall_930(f_user_dot_803(F->e_779), 0, &F->t_781v);
goto ret_;
} else if ((rt_r_ichk(F->k_2338) == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_778(F->e_779)))) {
F->result_ = f_attribute_833(F->e_779, &F->t_781v);
goto ret_;
} else if (((f_as_subtype_293((*(P996)rt_nil_check(F->e_779)).a) != NULL) || f_ptr_attribute_830(F->e_779))) {
F->result_ = f_attribute_833(F->e_779, &F->t_781v);
goto ret_;
}
{
F->base_2361 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_779)).a, NULL, &F->bt_2342));
F->ro_2341 = 1;
f_select_on_759(&F->base_2361, F->bt_2342, F->e_779, &F->ro_2341, &F->code_2339, &F->t_781v, &F->c_2340);
if ((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_779)).name))->all), rt_str("TAG", 3)) || (!f_is_lvalue_745(F->e_779)))) {
F->result_ = (((P989)rt_nil_check(F->code_2339))->all);
goto ret_;
}
F->result_ = f_init_chk_359(F->t_781v, &(((P989)rt_nil_check(F->code_2339))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2338) == (((rt_int)12LL)))) {
F->result_ = f_gcall_930(f_wrap_apply_823(F->e_779), 0, &F->t_781v);
goto ret_;
} else if ((rt_r_ichk(F->k_2338) == (((rt_int)14LL)))) {
F->result_ = f_constructor_855(F->e_779, F->want_780, F->ctx_2343, &F->t_781v);
goto ret_;
} else if ((rt_r_ichk(F->k_2338) == (((rt_int)13LL)))) {
F->result_ = f_resolved_785(F->e_779, &F->t_781v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_779)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_781) = F->t_781v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_785(P996 e_783, P1002 *t_784) {
  struct f_resolved_785fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_783 = e_783;
F->t_784 = t_784;
F->t_784v = *F->t_784;
F->c_2362 = NULL;
F->vt_2363 = NULL;
F->y_2364 = NULL;
F->y_2364 = f_lookup_159(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_2365 = NULL;
F->tt_2365 = f_copy_node_821((*(P996)rt_nil_check(F->e_783)).b);
(*(P996)rt_nil_check(F->tt_2365)).next = NULL;
if (((F->y_2364 != NULL) && ((rt_r_ichk((*(P1006)rt_nil_check(F->y_2364)).kind) == (((rt_int)10LL))) || (f_resolve_overload_904(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_2365, f_copy_node_821((*(P996)rt_nil_check(F->e_783)).a), 0, rt_r_ichk((*(P996)rt_nil_check(F->e_783)).line)) != NULL)))) {
F->call_2366 = NULL;
F->call_2366 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P996)rt_nil_check(F->e_783)).line));
F->f_2367 = NULL;
F->f_2367 = f_nn_61((((rt_int)12LL)), rt_r_ichk((*(P996)rt_nil_check(F->e_783)).line));
F->fname_2368 = NULL;
F->fname_2368 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P996)rt_nil_check(F->e_783)).line));
(*(P996)rt_nil_check(F->fname_2368)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P996)rt_nil_check(F->f_2367)).a = F->fname_2368;
(*(P996)rt_nil_check(F->f_2367)).b = F->tt_2365;
(*(P996)rt_nil_check(F->call_2366)).a = F->f_2367;
(*(P996)rt_nil_check(F->call_2366)).b = f_copy_node_821((*(P996)rt_nil_check(F->e_783)).a);
(*(P996)rt_nil_check((*(P996)rt_nil_check(F->call_2366)).b)).next = NULL;
F->result_ = f_gcall_930(F->call_2366, 0, &F->t_784v);
goto ret_;
}
F->t_784v = f_resolve_subtype_264((*(P996)rt_nil_check(F->e_783)).b, &F->c_2362);
{
F->v_2369 = rt_str_copy(f_gexpr_in_790((*(P996)rt_nil_check(F->e_783)).a, F->t_784v, F->c_2362, &F->vt_2363));
f_check_type_228(F->vt_2363, F->t_784v, rt_r_ichk((*(P996)rt_nil_check(F->e_783)).line));
F->result_ = f_checked_209(F->t_784v, F->c_2362, &F->v_2369);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_784) = F->t_784v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_790(P996 e_786, P1002 want_787, P998 c_788, P1002 *t_789) {
  struct f_gexpr_in_790fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_786 = e_786;
F->want_787 = want_787;
F->c_788 = c_788;
F->t_789 = t_789;
F->t_789v = *F->t_789;
g_cons_ctx_1067 = F->c_788;
F->result_ = f_gexpr_782(F->e_786, F->want_787, &F->t_789v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_789) = F->t_789v;
  RT_FPOP();
  return F->result_;
}

static rstr f_ascii_lit_792(int ch_791) {
  struct f_ascii_lit_792fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ch_791 = ch_791;
F->l_2370 = NULL;
F->l_2370 = (*(P1002)rt_nil_check(g_ty_ascii_1079)).lits;
{ rt_int lo2372 = ((rt_int)1LL), hi2373 = rt_sub(((rt_int)(F->ch_791) + 1), ((rt_int)1LL));
for (rt_int it2374 = lo2372; it2374 <= hi2373; it2374++) {
F->i_2371 = it2374;
F->l_2370 = (*(P996)rt_nil_check(F->l_2370)).next;
}
}
F->result_ = (((P989)rt_nil_check((*(P996)rt_nil_check(F->l_2370)).name))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_octal_794(rt_int n_793) {
  struct f_octal_794fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_793 = n_793;
F->r_2375 = rt_str_new(((rt_int)3LL));
rt_str_assign(&F->r_2375, rt_str("000", 3));
(*rt_str_at(&F->r_2375, ((rt_int)1LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_793, ((rt_int)64LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2375, ((rt_int)2LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_793, ((rt_int)8LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2375, ((rt_int)3LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(F->n_793, ((rt_int)8LL)), ((rt_int)1LL)));
F->result_ = F->r_2375;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1002 f_str_cat_part_796(P1002 t_795) {
  struct f_str_cat_part_796fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_795 = t_795;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_795)).kind) == (((rt_int)5LL)))) {
F->result_ = f_str_elem_214(F->t_795);
goto ret_;
}
F->result_ = F->t_795;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1002 f_peek_type_798(P996 e_797) {
  struct f_peek_type_798fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_797 = e_797;
F->saved_2376 = NULL;
F->saved_2376 = g_code_1046;
F->t_2377 = NULL;
g_trial_1074 = rt_add(rt_r_ichk(g_trial_1074), ((rt_int)1LL));
g_code_1046 = f_new_buffer_24();
{ rt_frame xf2378;
if (RT_TRY(xf2378)) {
F->v_2380 = rt_str_copy(f_gexpr_782(F->e_797, NULL, &F->t_2377));
RT_POP(xf2378);
} else {
RT_POP(xf2378);
int x2379 = rt_xcur;
if (0 || x2379 == ex_compile_error_1) {
F->t_2377 = NULL;
} else {
rt_raise(x2379);
}
}
}
g_trial_1074 = rt_sub(rt_r_ichk(g_trial_1074), ((rt_int)1LL));
g_code_1046 = F->saved_2376;
F->result_ = F->t_2377;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1002 f_set_operands_801(P996 e_799, P1002 want_800) {
  struct f_set_operands_801fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_799 = e_799;
F->want_800 = want_800;
F->t_2381 = NULL;
if (((F->want_800 != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->want_800)).kind) == (((rt_int)16LL))))) {
F->result_ = F->want_800;
goto ret_;
} else if ((F->want_800 != NULL)) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_799)).a)).kind) != (((rt_int)14LL)))) {
F->t_2381 = f_peek_type_798((*(P996)rt_nil_check(F->e_799)).a);
} else if ((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_799)).b)).kind) != (((rt_int)14LL)))) {
F->t_2381 = f_peek_type_798((*(P996)rt_nil_check(F->e_799)).b);
}
if (((F->t_2381 != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->t_2381)).kind) == (((rt_int)16LL))))) {
F->result_ = F->t_2381;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_user_dot_803(P996 e_802) {
  struct f_user_dot_803fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_802 = e_802;
F->arg_2382 = NULL;
if ((f_lookup_159(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_802)).name))->all)); b_; })) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->arg_2382 = f_copy_node_821((*(P996)rt_nil_check(F->e_802)).a);
if ((f_user_op_926(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_802)).name))->all)); b_; }), F->arg_2382) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_809(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_802)).name))->all)); b_; }), F->arg_2382, rt_r_ichk((*(P996)rt_nil_check(F->e_802)).line));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_user_subscript_805(P996 e_804) {
  struct f_user_subscript_805fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_804 = e_804;
F->name_2383 = NULL;
F->name_2383 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
F->args_2384 = NULL;
F->tail_2385 = NULL;
F->a_2386 = NULL;
F->a_2386 = (*(P996)rt_nil_check(F->e_804)).b;
if (((((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_804)).a)).kind) == (((rt_int)7LL))) && (f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_804)).a)).name))->all)) != NULL)) && ((*(P1006)rt_nil_check(f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_804)).a)).name))->all)))).kind != (((rt_int)1LL)))) && ((*(P1006)rt_nil_check(f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_804)).a)).name))->all)))).kind != (((rt_int)2LL))))) {
F->result_ = NULL;
goto ret_;
}
f_append_65(&F->args_2384, &F->tail_2385, f_copy_node_821((*(P996)rt_nil_check(F->e_804)).a));
while ((F->a_2386 != NULL)) {
if ((((rt_int)(((((P989)rt_nil_check(F->name_2383))->all)).len)) > ((rt_int)1LL))) {
F->name_2383 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->name_2383))->all), rt_str(",", 1)); b_; }));
}
if ((rt_r_ichk((*(P996)rt_nil_check(F->a_2386)).kind) == (((rt_int)16LL)))) {
F->name_2383 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->name_2383))->all), rt_str("*..*", 4)); b_; }));
f_append_65(&F->args_2384, &F->tail_2385, f_copy_node_821((*(P996)rt_nil_check(F->a_2386)).a));
f_append_65(&F->args_2384, &F->tail_2385, f_copy_node_821((*(P996)rt_nil_check(F->a_2386)).b));
} else {
F->name_2383 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->name_2383))->all), rt_str("*", 1)); b_; }));
f_append_65(&F->args_2384, &F->tail_2385, f_copy_node_821(F->a_2386));
}
F->a_2386 = (*(P996)rt_nil_check(F->a_2386)).next;
}
F->name_2383 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->name_2383))->all), rt_str(")", 1)); b_; }));
if (((f_lookup_159(&(((P989)rt_nil_check(F->name_2383))->all)) == NULL) || (f_user_op_926(&(((P989)rt_nil_check(F->name_2383))->all), F->args_2384) == NULL))) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_809(&(((P989)rt_nil_check(F->name_2383))->all), F->args_2384, rt_r_ichk((*(P996)rt_nil_check(F->e_804)).line));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_op_call_809(rstr *name_806, P996 args_807, rt_int line_808) {
  struct f_op_call_809fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_806 = name_806;
F->args_807 = args_807;
F->line_808 = line_808;
F->call_2387 = NULL;
F->call_2387 = f_nn_61((((rt_int)10LL)), F->line_808);
F->f_2388 = NULL;
F->f_2388 = f_nn_61((((rt_int)7LL)), F->line_808);
(*(P996)rt_nil_check(F->f_2388)).name = f_mk_3(&(*F->name_806));
(*(P996)rt_nil_check(F->call_2387)).a = F->f_2388;
(*(P996)rt_nil_check(F->call_2387)).b = F->args_807;
F->result_ = F->call_2387;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_derived_relation_811(P996 e_810) {
  struct f_derived_relation_811fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_810 = e_810;
F->l_2389 = NULL;
F->r_2390 = NULL;
F->has_eq_2391 = RT_R_EUNDEF;
F->has_eq_2391 = 0;
F->has_lt_2392 = RT_R_EUNDEF;
F->has_lt_2392 = 0;
F->l_2389 = f_copy_node_821((*(P996)rt_nil_check(F->e_810)).a);
F->r_2390 = f_copy_node_821((*(P996)rt_nil_check(F->e_810)).b);
(*(P996)rt_nil_check(F->l_2389)).next = F->r_2390;
if ((f_lookup_159(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; })) != NULL)) {
F->has_eq_2391 = (f_user_op_926(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), F->l_2389) != NULL);
}
if ((f_lookup_159(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; })) != NULL)) {
F->l_2389 = f_copy_node_821((*(P996)rt_nil_check(F->e_810)).a);
F->r_2390 = f_copy_node_821((*(P996)rt_nil_check(F->e_810)).b);
(*(P996)rt_nil_check(F->l_2389)).next = F->r_2390;
F->has_lt_2392 = (f_user_op_926(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), F->l_2389) != NULL);
}
if ((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_810)).name))->all), rt_str("/=", 2)) && rt_r_echk(F->has_eq_2391))) {
F->result_ = f_rel_not_819(f_rel_node_816(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P996)rt_nil_check(F->e_810)).a, (*(P996)rt_nil_check(F->e_810)).b, rt_r_ichk((*(P996)rt_nil_check(F->e_810)).line)), rt_r_ichk((*(P996)rt_nil_check(F->e_810)).line));
goto ret_;
} else if ((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_810)).name))->all), rt_str(">", 1)) && rt_r_echk(F->has_lt_2392))) {
F->result_ = f_rel_node_816(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P996)rt_nil_check(F->e_810)).b, (*(P996)rt_nil_check(F->e_810)).a, rt_r_ichk((*(P996)rt_nil_check(F->e_810)).line));
goto ret_;
} else if (((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_810)).name))->all), rt_str("<=", 2)) && rt_r_echk(F->has_lt_2392)) && rt_r_echk(F->has_eq_2391))) {
F->result_ = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_816(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P996)rt_nil_check(F->e_810)).a, (*(P996)rt_nil_check(F->e_810)).b, rt_r_ichk((*(P996)rt_nil_check(F->e_810)).line)), f_rel_node_816(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P996)rt_nil_check(F->e_810)).a, (*(P996)rt_nil_check(F->e_810)).b, rt_r_ichk((*(P996)rt_nil_check(F->e_810)).line)), rt_r_ichk((*(P996)rt_nil_check(F->e_810)).line));
goto ret_;
} else if (((rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_810)).name))->all), rt_str(">=", 2)) && rt_r_echk(F->has_lt_2392)) && rt_r_echk(F->has_eq_2391))) {
F->result_ = f_binop_102(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_816(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P996)rt_nil_check(F->e_810)).b, (*(P996)rt_nil_check(F->e_810)).a, rt_r_ichk((*(P996)rt_nil_check(F->e_810)).line)), f_rel_node_816(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P996)rt_nil_check(F->e_810)).a, (*(P996)rt_nil_check(F->e_810)).b, rt_r_ichk((*(P996)rt_nil_check(F->e_810)).line)), rt_r_ichk((*(P996)rt_nil_check(F->e_810)).line));
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_rel_node_816(rstr *op_812, P996 a_813, P996 b_814, rt_int line_815) {
  struct f_rel_node_816fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_812 = op_812;
F->a_813 = a_813;
F->b_814 = b_814;
F->line_815 = line_815;
F->result_ = f_binop_102(f_mk_3(&(*F->op_812)), f_copy_node_821(F->a_813), f_copy_node_821(F->b_814), F->line_815);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_rel_not_819(P996 x_817, rt_int line_818) {
  struct f_rel_not_819fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_817 = x_817;
F->line_818 = line_818;
F->n_2393 = NULL;
F->n_2393 = f_nn_61((((rt_int)8LL)), F->line_818);
(*(P996)rt_nil_check(F->n_2393)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P996)rt_nil_check(F->n_2393)).a = F->x_817;
F->result_ = F->n_2393;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_copy_node_821(P996 e_820) {
  struct f_copy_node_821fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_820 = e_820;
F->x_2394 = NULL;
{ R997 *cell2395 = rt_alloc(sizeof(R997));
(*cell2395).name = NULL;
(*cell2395).tag = NULL;
(*cell2395).prags = NULL;
(*cell2395).labels = NULL;
(*cell2395).a = NULL;
(*cell2395).b = NULL;
(*cell2395).c = NULL;
(*cell2395).d = NULL;
(*cell2395).e = NULL;
(*cell2395).next = NULL;
F->x_2394 = cell2395;
}
(*(P996)rt_nil_check(F->x_2394)).kind = rt_r_ichk((*(P996)rt_nil_check(F->e_820)).kind);
(*(P996)rt_nil_check(F->x_2394)).line = rt_r_ichk((*(P996)rt_nil_check(F->e_820)).line);
(*(P996)rt_nil_check(F->x_2394)).ival = rt_r_ichk((*(P996)rt_nil_check(F->e_820)).ival);
(*(P996)rt_nil_check(F->x_2394)).flag = rt_r_ichk((*(P996)rt_nil_check(F->e_820)).flag);
(*(P996)rt_nil_check(F->x_2394)).name = (*(P996)rt_nil_check(F->e_820)).name;
(*(P996)rt_nil_check(F->x_2394)).tag = (*(P996)rt_nil_check(F->e_820)).tag;
(*(P996)rt_nil_check(F->x_2394)).a = (*(P996)rt_nil_check(F->e_820)).a;
(*(P996)rt_nil_check(F->x_2394)).b = (*(P996)rt_nil_check(F->e_820)).b;
(*(P996)rt_nil_check(F->x_2394)).c = (*(P996)rt_nil_check(F->e_820)).c;
(*(P996)rt_nil_check(F->x_2394)).d = (*(P996)rt_nil_check(F->e_820)).d;
F->result_ = F->x_2394;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P996 f_wrap_apply_823(P996 e_822) {
  struct f_wrap_apply_823fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_822 = e_822;
F->x_2396 = NULL;
F->x_2396 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P996)rt_nil_check(F->e_822)).line));
(*(P996)rt_nil_check(F->x_2396)).a = F->e_822;
F->result_ = F->x_2396;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_825(rstr *s_824) {
  struct f_c_string_825fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_824 = s_824;
F->n_2397 = RT_R_IUNDEF;
F->n_2397 = ((rt_int)0LL);
{ rt_int lo2399 = ((rt_int)1LL), hi2400 = ((rt_int)(((*F->s_824)).len));
for (rt_int it2401 = lo2399; it2401 <= hi2400; it2401++) {
F->i_2398 = it2401;
if (((rt_r_echk(rt_str_get((*F->s_824), F->i_2398)) == 92) || (rt_r_echk(rt_str_get((*F->s_824), F->i_2398)) == 63))) {
F->n_2397 = rt_add(rt_r_ichk(F->n_2397), ((rt_int)1LL));
}
}
}
{
F->r_2402 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_824)).len)), rt_r_ichk(F->n_2397)), ((rt_int)2LL)));
F->j_2403 = RT_R_IUNDEF;
F->j_2403 = ((rt_int)1LL);
(*rt_str_at(&F->r_2402, ((rt_int)1LL))) = 34;
{ rt_int lo2405 = ((rt_int)1LL), hi2406 = ((rt_int)(((*F->s_824)).len));
for (rt_int it2407 = lo2405; it2407 <= hi2406; it2407++) {
F->i_2404 = it2407;
F->j_2403 = rt_add(rt_r_ichk(F->j_2403), ((rt_int)1LL));
if (((rt_r_echk(rt_str_get((*F->s_824), F->i_2404)) == 92) || (rt_r_echk(rt_str_get((*F->s_824), F->i_2404)) == 63))) {
(*rt_str_at(&F->r_2402, rt_r_ichk(F->j_2403))) = 92;
F->j_2403 = rt_add(rt_r_ichk(F->j_2403), ((rt_int)1LL));
}
(*rt_str_at(&F->r_2402, rt_r_ichk(F->j_2403))) = rt_r_echk(rt_str_get((*F->s_824), F->i_2404));
}
}
(*rt_str_at(&F->r_2402, rt_add(rt_r_ichk(F->j_2403), ((rt_int)1LL)))) = 34;
F->result_ = F->r_2402;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1002 f_enum_type_of_828(rstr *lit_826, rt_int line_827) {
  struct f_enum_type_of_828fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_826 = lit_826;
F->line_827 = line_827;
F->y_2408 = NULL;
F->y_2408 = g_scope_stack_1036;
F->c_2409 = NULL;
if ((f_lit_index_261((*(P1002)rt_nil_check(g_ty_ascii_1079)).lits, &(*F->lit_826)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_1079;
goto ret_;
}
while ((F->y_2408 != NULL)) {
if (((((rt_r_ichk((*(P1006)rt_nil_check(F->y_2408)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_2408)).kind) == (((rt_int)5LL)))) && ((*(P1006)rt_nil_check(F->y_2408)).st != NULL)) && (rt_r_ichk((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_2408)).st)).kind) == (((rt_int)72LL))))) {
if ((f_lit_index_261((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_2408)).st)).a, &(*F->lit_826)) >= ((rt_int)0LL))) {
if ((rt_r_ichk((*(P1006)rt_nil_check(F->y_2408)).kind) == (((rt_int)5LL)))) {
F->st_2410 = NULL;
F->st_2410 = f_nn_61((((rt_int)80LL)), F->line_827);
(*(P996)rt_nil_check(F->st_2410)).name = (*(P1006)rt_nil_check(F->y_2408)).name;
F->result_ = f_resolve_subtype_264(F->st_2410, &F->c_2409);
goto ret_;
}
F->result_ = f_resolve_subtype_264((*(P1006)rt_nil_check(F->y_2408)).st, &F->c_2409);
goto ret_;
}
}
F->y_2408 = (*(P1006)rt_nil_check(F->y_2408)).stack;
}
f_fail_23(F->line_827, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_826)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_830(P996 e_829) {
  struct f_ptr_attribute_830fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_829 = e_829;
F->lv_2411 = NULL;
F->t_2412 = NULL;
F->c_2413 = NULL;
F->ro_2414 = RT_R_EUNDEF;
F->p_2415 = NULL;
F->saved_2416 = NULL;
F->saved_2416 = g_code_1046;
if ((!f_is_lvalue_745((*(P996)rt_nil_check(F->e_829)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_1046 = f_new_buffer_24();
f_lvalue_751((*(P996)rt_nil_check(F->e_829)).a, &F->lv_2411, &F->t_2412, &F->c_2413, &F->ro_2414);
g_code_1046 = F->saved_2416;
if (((rt_r_ichk((*(P1002)rt_nil_check(F->t_2412)).kind) != (((rt_int)8LL))) || ((*(P1002)rt_nil_check(F->t_2412)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_2415 = (*(P996)rt_nil_check((*(P1002)rt_nil_check(F->t_2412)).decl)).d;
while ((F->p_2415 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2415)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_829)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_2415 = (*(P996)rt_nil_check(F->p_2415)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_833(P996 e_831, P1002 *t_832) {
  struct f_attribute_833fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_831 = e_831;
F->t_832 = t_832;
F->t_832v = *F->t_832;
F->bt_2417 = NULL;
F->c_2418 = NULL;
F->base_2419 = NULL;
F->sub_2420 = NULL;
F->sub_2420 = f_as_subtype_293((*(P996)rt_nil_check(F->e_831)).a);
F->name_2421 = rt_str_copy((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_831)).name))->all));
if ((F->sub_2420 != NULL)) {
F->bt_2417 = f_resolve_subtype_264(F->sub_2420, &F->c_2418);
} else {
F->bt_2417 = f_value_subtype_286((*(P996)rt_nil_check(F->e_831)).a, &F->c_2418, &F->base_2419);
}
if (((((rt_r_ichk((*(P1002)rt_nil_check(F->bt_2417)).kind) == (((rt_int)8LL))) && (F->c_2418 != NULL)) && ((*(P998)rt_nil_check(F->c_2418)).args != NULL)) && ((*(P1002)rt_nil_check(F->bt_2417)).decl != NULL))) {
F->p_2422 = NULL;
F->p_2422 = (*(P996)rt_nil_check((*(P1002)rt_nil_check(F->bt_2417)).decl)).d;
F->a_2423 = NULL;
F->a_2423 = (*(P998)rt_nil_check(F->c_2418)).args;
while (((F->p_2422 != NULL) && (F->a_2423 != NULL))) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2422)).name))->all), F->name_2421)) {
F->pc_2424 = NULL;
F->v_2425 = rt_str_copy(f_gexpr_782(F->a_2423, f_resolve_subtype_264((*(P996)rt_nil_check(F->p_2422)).a, &F->pc_2424), &F->t_832v));
F->result_ = F->v_2425;
goto ret_;
}
F->p_2422 = (*(P996)rt_nil_check(F->p_2422)).next;
F->a_2423 = (*(P996)rt_nil_check(F->a_2423)).next;
}
}
while (((rt_r_ichk((*(P1002)rt_nil_check(F->bt_2417)).kind) == (((rt_int)8LL))) && (F->base_2419 != NULL))) {
f_finish_ptr_460(F->bt_2417);
F->base_2419 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_743(&(((P989)rt_nil_check(F->base_2419))->all), F->bt_2417); b_; }));
F->bt_2417 = (*(P1002)rt_nil_check(F->bt_2417)).target;
F->c_2418 = NULL;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->bt_2417)).kind) == (((rt_int)5LL)))) {
F->c_2418 = f_new_cons_180();
(*(P998)rt_nil_check(F->c_2418)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P989)rt_nil_check(F->base_2419))->all)), rt_str(").len", 5)); b_; }));
}
}
if (((((rt_r_ichk((*(P1002)rt_nil_check(F->bt_2417)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->bt_2417)).tparams != NULL)) && (F->c_2418 != NULL)) && ((*(P998)rt_nil_check(F->c_2418)).args != NULL))) {
F->p_2426 = NULL;
F->p_2426 = (*(P1002)rt_nil_check(F->bt_2417)).tparams;
F->a_2427 = NULL;
F->a_2427 = (*(P998)rt_nil_check(F->c_2418)).args;
while (((F->p_2426 != NULL) && (F->a_2427 != NULL))) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2426)).name))->all), F->name_2421)) {
F->pt_2428 = f_tparam_type_348(F->bt_2417, &F->name_2421);
F->v_2429 = rt_str_copy(f_gexpr_782(F->a_2427, F->pt_2428, &F->t_832v));
F->result_ = F->v_2429;
goto ret_;
}
F->p_2426 = (*(P996)rt_nil_check(F->p_2426)).next;
F->a_2427 = (*(P996)rt_nil_check(F->a_2427)).next;
}
}
if (((rt_r_ichk((*(P1002)rt_nil_check(F->bt_2417)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->bt_2417)).tparams == NULL))) {
F->c_2418 = f_base_cons_222(F->bt_2417, F->c_2418);
F->bt_2417 = f_base_of_219(F->bt_2417);
}
F->t_832v = g_ty_int_1076;
if ((rt_str_eq(F->name_2421, rt_str("LEN", 3)) && (rt_r_ichk((*(P1002)rt_nil_check(F->bt_2417)).kind) == (((rt_int)5LL))))) {
if (((F->c_2418 != NULL) && ((*(P998)rt_nil_check(F->c_2418)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P989)rt_nil_check((*(P998)rt_nil_check(F->c_2418)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_831)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_2421, rt_str("LEN", 3)) && (rt_r_ichk((*(P1002)rt_nil_check(F->bt_2417)).kind) == (((rt_int)12LL))))) {
if (((F->c_2418 != NULL) && ((*(P998)rt_nil_check(F->c_2418)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P989)rt_nil_check((*(P998)rt_nil_check(F->c_2418)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_831)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_2421, rt_str("MIN", 3)) || rt_str_eq(F->name_2421, rt_str("MAX", 3))) && f_scalar_kind_182(F->bt_2417))) {
F->t_832v = F->bt_2417;
if (rt_str_eq(F->name_2421, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_194(F->bt_2417, F->c_2418);
goto ret_;
}
F->result_ = f_sub_hi_197(F->bt_2417, F->c_2418);
goto ret_;
} else if ((rt_str_eq(F->name_2421, rt_str("PREC", 4)) && (rt_r_ichk((*(P1002)rt_nil_check(F->bt_2417)).kind) == (((rt_int)3LL))))) {
if (((F->c_2418 != NULL) && ((*(P998)rt_nil_check(F->c_2418)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P989)rt_nil_check((*(P998)rt_nil_check(F->c_2418)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_2421, rt_str("ACCESS", 6)) || rt_str_eq(F->name_2421, rt_str("USE", 3))) && (rt_r_ichk((*(P1002)rt_nil_check(F->bt_2417)).kind) == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_846(F->e_831, F->bt_2417, F->c_2418, F->base_2419, &F->t_832v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_831)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_2421, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_832) = F->t_832v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_838(P996 sa_834, P996 sb_835, rstr *op_836, rt_int line_837) {
  struct f_subtype_compare_838fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_834 = sa_834;
F->sb_835 = sb_835;
F->op_836 = op_836;
F->line_837 = line_837;
F->ca_2430 = NULL;
F->cb_2431 = NULL;
F->ta_2432 = NULL;
F->ta_2432 = f_resolve_subtype_264(F->sa_834, &F->ca_2430);
F->tb_2433 = NULL;
F->tb_2433 = f_resolve_subtype_264(F->sb_835, &F->cb_2431);
F->r_2434 = NULL;
F->r_2434 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_2435 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_2435, rt_str("1", 1));
F->no_2436 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_2436, rt_str("0", 1));
if (rt_str_eq((*F->op_836), rt_str("/=", 2))) {
rt_str_assign(&F->yes_2435, rt_str("0", 1));
rt_str_assign(&F->no_2436, rt_str("1", 1));
}
if ((!f_same_217(F->ta_2432, F->tb_2433))) {
F->result_ = F->no_2436;
goto ret_;
} else if ((((rt_r_ichk((*(P996)rt_nil_check(F->sa_834)).kind) == (((rt_int)80LL))) && rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->sa_834)).name))->all), rt_str("TYPEOF", 6))) || ((rt_r_ichk((*(P996)rt_nil_check(F->sb_835)).kind) == (((rt_int)80LL))) && rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->sb_835)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_2435;
goto ret_;
}
if (f_scalar_kind_182(F->ta_2432)) {
F->r_2434 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_194(F->ta_2432, F->ca_2430)), rt_str(") == (", 6)), f_sub_lo_194(F->tb_2433, F->cb_2431)), rt_str(") && (", 6)), f_sub_hi_197(F->ta_2432, F->ca_2430)), rt_str(") == (", 6)), f_sub_hi_197(F->tb_2433, F->cb_2431)), rt_str(")", 1)); b_; }));
if ((rt_r_ichk((*(P1002)rt_nil_check(F->ta_2432)).kind) == (((rt_int)3LL)))) {
F->r_2434 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_2434))->all), rt_str(" && ", 4)), f_float_prec_840(F->ca_2430)), rt_str(" == ", 4)), f_float_prec_840(F->cb_2431)); b_; }));
}
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->ta_2432)).kind) == (((rt_int)5LL)))) {
if (((((F->ca_2430 != NULL) && (F->cb_2431 != NULL)) && ((*(P998)rt_nil_check(F->ca_2430)).slen != NULL)) && ((*(P998)rt_nil_check(F->cb_2431)).slen != NULL))) {
F->r_2434 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P989)rt_nil_check((*(P998)rt_nil_check(F->ca_2430)).slen))->all)), rt_str(") == (", 6)), (((P989)rt_nil_check((*(P998)rt_nil_check(F->cb_2431)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_2430 == NULL) || ((*(P998)rt_nil_check(F->ca_2430)).slen == NULL)) && ((F->cb_2431 == NULL) || ((*(P998)rt_nil_check(F->cb_2431)).slen == NULL))))) {
F->r_2434 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->ta_2432)).kind) == (((rt_int)6LL)))) {
{ rt_int lo2438 = ((rt_int)1LL), hi2439 = rt_r_ichk((*(P1002)rt_nil_check(F->ta_2432)).ndim);
for (rt_int it2440 = lo2438; it2440 <= hi2439; it2440++) {
F->k_2437 = it2440;
if (((((F->ca_2430 != NULL) && (F->cb_2431 != NULL)) && (f_cons_lo_248(F->ca_2430, F->k_2437) != NULL)) && (f_cons_lo_248(F->cb_2431, F->k_2437) != NULL))) {
F->r_2434 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_2434))->all), rt_str(" && (", 5)), (((P989)rt_nil_check(f_cons_lo_248(F->ca_2430, F->k_2437)))->all)), rt_str(") == (", 6)), (((P989)rt_nil_check(f_cons_lo_248(F->cb_2431, F->k_2437)))->all)), rt_str(") && (", 6)), (((P989)rt_nil_check(f_cons_hi_251(F->ca_2430, F->k_2437)))->all)), rt_str(") == (", 6)), (((P989)rt_nil_check(f_cons_hi_251(F->cb_2431, F->k_2437)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if (((((rt_r_ichk((*(P1002)rt_nil_check(F->ta_2432)).kind) == (((rt_int)15LL))) && ((*(P1002)rt_nil_check(F->ta_2432)).tparams != NULL)) && (F->ca_2430 != NULL)) && (F->cb_2431 != NULL))) {
F->a_2441 = NULL;
F->a_2441 = (*(P998)rt_nil_check(F->ca_2430)).args;
F->b_2442 = NULL;
F->b_2442 = (*(P998)rt_nil_check(F->cb_2431)).args;
F->at_2443 = NULL;
F->bt2_2444 = NULL;
while (((F->a_2441 != NULL) && (F->b_2442 != NULL))) {
F->x_2445 = rt_str_copy(f_gexpr_782(F->a_2441, NULL, &F->at_2443));
F->y_2446 = rt_str_copy(f_gexpr_782(F->b_2442, F->at_2443, &F->bt2_2444));
F->r_2434 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_2434))->all), rt_str(" && ", 4)), f_eq_code_409(F->at_2443, &F->x_2445, &F->y_2446)); b_; }));
F->a_2441 = (*(P996)rt_nil_check(F->a_2441)).next;
F->b_2442 = (*(P996)rt_nil_check(F->b_2442)).next;
}
} else if ((((rt_r_ichk((*(P1002)rt_nil_check(F->ta_2432)).kind) == (((rt_int)17LL))) && (F->ca_2430 != NULL)) && (F->cb_2431 != NULL))) {
if ((((*(P998)rt_nil_check(F->ca_2430)).lo != NULL) && ((*(P998)rt_nil_check(F->cb_2431)).lo != NULL))) {
F->r_2434 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P989)rt_nil_check((*(P998)rt_nil_check(F->ca_2430)).lo))->all)), rt_str(") == (", 6)), (((P989)rt_nil_check((*(P998)rt_nil_check(F->cb_2431)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P998)rt_nil_check(F->ca_2430)).lo != NULL) || ((*(P998)rt_nil_check(F->cb_2431)).lo != NULL))) {
F->r_2434 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_836), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P989)rt_nil_check(F->r_2434))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P989)rt_nil_check(F->r_2434))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_840(P998 c_839) {
  struct f_float_prec_840fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_839 = c_839;
if (((F->c_839 != NULL) && ((*(P998)rt_nil_check(F->c_839)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P989)rt_nil_check((*(P998)rt_nil_check(F->c_839)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_846(P996 e_841, P1002 bt_842, P998 c_843, P989 base_844, P1002 *t_845) {
  struct f_file_attribute_846fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_841 = e_841;
F->bt_842 = bt_842;
F->c_843 = c_843;
F->base_844 = base_844;
F->t_845 = t_845;
F->t_845v = *F->t_845;
F->t_845v = g_file_mode_type_1087;
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_841)).name))->all), rt_str("ACCESS", 6))) {
F->t_845v = g_file_access_type_1093;
}
if ((F->base_844 != NULL)) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_841)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P989)rt_nil_check(F->base_844))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P989)rt_nil_check(F->base_844))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_843 != NULL) && ((*(P998)rt_nil_check(F->c_843)).args != NULL))) {
if (rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_841)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_782((*(P998)rt_nil_check(F->c_843)).args, F->t_845v, &F->t_845v);
goto ret_;
} else if (((*(P996)rt_nil_check((*(P998)rt_nil_check(F->c_843)).args)).next != NULL)) {
F->result_ = f_gexpr_782((*(P996)rt_nil_check((*(P998)rt_nil_check(F->c_843)).args)).next, F->t_845v, &F->t_845v);
goto ret_;
}
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_841)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P989)rt_nil_check((*(P996)rt_nil_check(F->e_841)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_845) = F->t_845v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_850(P996 e_847, P1002 want_848, P1002 *t_849) {
  struct f_gbinop_850fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_847 = e_847;
F->want_848 = want_848;
F->t_849 = t_849;
F->t_849v = *F->t_849;
F->op_2447 = NULL;
F->op_2447 = (*(P996)rt_nil_check(F->e_847)).name;
F->ta_2448 = NULL;
F->tb_2449 = NULL;
F->hint_2450 = NULL;
F->uy_2451 = NULL;
F->t_849v = g_ty_bool_1077;
if (((((rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("/=", 2)) || rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str(">", 1))) || rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("<=", 2))) || rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str(">=", 2))) && (f_derived_relation_811(F->e_847) != NULL))) {
F->result_ = f_gexpr_782(f_derived_relation_811(F->e_847), g_ty_bool_1077, &F->t_849v);
goto ret_;
}
if ((f_lookup_159(&(((P989)rt_nil_check(F->op_2447))->all)) != NULL)) {
F->l_2452 = NULL;
F->r_2453 = NULL;
F->l_2452 = f_copy_node_821((*(P996)rt_nil_check(F->e_847)).a);
F->r_2453 = f_copy_node_821((*(P996)rt_nil_check(F->e_847)).b);
(*(P996)rt_nil_check(F->l_2452)).next = F->r_2453;
F->uy_2451 = f_user_op_926(&(((P989)rt_nil_check(F->op_2447))->all), F->l_2452);
if ((F->uy_2451 != NULL)) {
F->call_2454 = NULL;
F->call_2454 = f_nn_61((((rt_int)10LL)), rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
F->fname_2455 = NULL;
F->fname_2455 = f_nn_61((((rt_int)7LL)), rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
(*(P996)rt_nil_check(F->fname_2455)).name = F->op_2447;
(*(P996)rt_nil_check(F->call_2454)).a = F->fname_2455;
(*(P996)rt_nil_check(F->call_2454)).b = F->l_2452;
F->result_ = f_gcall_930(F->call_2454, 0, &F->t_849v);
goto ret_;
}
}
if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("IN", 2))) {
F->s_2456 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_847)).b, NULL, &F->tb_2449));
if ((rt_r_ichk((*(P1002)rt_nil_check(F->tb_2449)).kind) != (((rt_int)16LL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2457 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_847)).a, (*(P1002)rt_nil_check(F->tb_2449)).elem, &F->ta_2448));
f_check_type_228(F->ta_2448, (*(P1002)rt_nil_check(F->tb_2449)).elem, rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
F->t_849v = g_ty_bool_1077;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_in(", 9), F->a_2457), rt_str(", ", 2)), F->s_2456), rt_str(")", 1));
goto ret_;
}
}
if ((((rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("AND", 3)) || rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("OR", 2))) || rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("XOR", 3))) && (f_set_operands_801(F->e_847, F->want_848) != NULL))) {
F->a_2458 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_847)).a, f_set_operands_801(F->e_847, F->want_848), &F->ta_2448));
F->b_2459 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_847)).b, F->ta_2448, &F->tb_2449));
f_check_type_228(F->tb_2449, F->ta_2448, rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
F->t_849v = F->ta_2448;
if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_inter(", 12), F->a_2458), rt_str(", ", 2)), F->b_2459), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_union(", 12), F->a_2458), rt_str(", ", 2)), F->b_2459), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_xor(", 10), F->a_2458), rt_str(", ", 2)), F->b_2459), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("AND", 3)) || rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("OR", 2))) || rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("XOR", 3)))) {
F->a_2460 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_847)).a, g_ty_bool_1077, &F->ta_2448));
F->b_2461 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_847)).b, g_ty_bool_1077, &F->tb_2449));
f_check_type_228(F->ta_2448, g_ty_bool_1077, rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
f_check_type_228(F->tb_2449, g_ty_bool_1077, rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2460), rt_str(" && ", 4)), F->b_2461), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2460), rt_str(" || ", 4)), F->b_2461), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2460), rt_str(" != ", 4)), F->b_2461), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("&", 1)) && (F->want_848 != NULL)) && ((*(P1002)rt_nil_check(f_base_of_219(F->want_848))).kind == (((rt_int)6LL))))) {
F->at_2462 = NULL;
F->at_2462 = f_base_of_219(F->want_848);
F->a_2463 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_847)).a, F->at_2462, &F->ta_2448));
F->b_2464 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_847)).b, F->at_2462, &F->tb_2449));
f_check_type_228(F->ta_2448, F->at_2462, rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
f_check_type_228(F->tb_2449, F->at_2462, rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
if (((rt_r_ichk((*(P1002)rt_nil_check(F->at_2462)).ndim) != ((rt_int)1LL)) || ((*(P1002)rt_nil_check(f_base_of_219((*(P1002)rt_nil_check(F->at_2462)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_763(F->at_2462);
F->t_849v = F->at_2462;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_230(F->at_2462)), rt_str("(", 1)), F->a_2463), rt_str(", ", 2)), F->b_2464), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("&", 1))) {
F->wa_2465 = NULL;
F->wb_2466 = NULL;
F->ws_2467 = NULL;
F->ce_2468 = NULL;
F->ce_2468 = g_ty_ascii_1079;
if (((F->want_848 != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->want_848)).kind) == (((rt_int)5LL))))) {
F->ws_2467 = F->want_848;
F->ce_2468 = f_str_elem_214(F->want_848);
}
if ((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_847)).a)).kind) == (((rt_int)4LL)))) {
F->wa_2465 = F->ce_2468;
} else {
F->wa_2465 = F->ws_2467;
}
if ((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_847)).b)).kind) == (((rt_int)4LL)))) {
F->wb_2466 = F->ce_2468;
} else {
F->wb_2466 = F->ws_2467;
}
{
F->a_2469 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_847)).a, F->wa_2465, &F->ta_2448));
F->b_2470 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_847)).b, F->wb_2466, &F->tb_2449));
F->t_849v = g_ty_string_1080;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->ta_2448)).kind) == (((rt_int)5LL)))) {
F->t_849v = F->ta_2448;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->tb_2449)).kind) == (((rt_int)5LL)))) {
F->t_849v = F->tb_2449;
} else if ((!f_same_217(F->ta_2448, g_ty_ascii_1079))) {
F->t_849v = f_new_typ_179((((rt_int)5LL)));
(*(P1002)rt_nil_check(F->t_849v)).elem = F->ta_2448;
}
if (((rt_r_ichk((*(P1002)rt_nil_check(F->ta_2448)).kind) == (((rt_int)6LL))) && (rt_r_ichk((*(P1002)rt_nil_check(F->tb_2449)).kind) == (((rt_int)6LL))))) {
f_need_slice_763(F->ta_2448);
f_check_type_228(F->tb_2449, F->ta_2448, rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
F->t_849v = F->ta_2448;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_230(F->ta_2448)), rt_str("(", 1)), F->a_2469), rt_str(", ", 2)), F->b_2470), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->ta_2448)).kind) == (((rt_int)5LL)))) {
f_check_type_228(f_str_cat_part_796(F->tb_2449), f_str_elem_214(F->ta_2448), rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->tb_2449)).kind) == (((rt_int)5LL)))) {
f_check_type_228(F->ta_2448, f_str_elem_214(F->tb_2449), rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
} else {
f_check_type_228(F->tb_2449, F->ta_2448, rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
}
if (((rt_r_ichk((*(P1002)rt_nil_check(F->ta_2448)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P1002)rt_nil_check(F->tb_2449)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2469), rt_str(", ", 2)), F->b_2470), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->ta_2448)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P1002)rt_nil_check(F->tb_2449)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2469), rt_str(", ", 2)), F->b_2470), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->ta_2448)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1002)rt_nil_check(F->tb_2449)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2469), rt_str(", ", 2)), F->b_2470), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->ta_2448)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1002)rt_nil_check(F->tb_2449)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2469), rt_str(", ", 2)), F->b_2470), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("=", 1)) || rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("/=", 2))) && (f_as_subtype_293((*(P996)rt_nil_check(F->e_847)).a) != NULL)) && (f_as_subtype_293((*(P996)rt_nil_check(F->e_847)).b) != NULL))) {
F->t_849v = g_ty_bool_1077;
F->result_ = f_subtype_compare_838(f_as_subtype_293((*(P996)rt_nil_check(F->e_847)).a), f_as_subtype_293((*(P996)rt_nil_check(F->e_847)).b), &(((P989)rt_nil_check(F->op_2447))->all), rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
goto ret_;
}
if ((f_is_rel_107(&(((P989)rt_nil_check(F->op_2447))->all)) && (!rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("IN", 2))))) {
if ((((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_847)).a)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_847)).a)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_847)).a)).kind) == (((rt_int)1LL))))) {
F->dummy_2471 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_847)).b, NULL, &F->hint_2450));
} else if ((rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->e_847)).a)).kind) == (((rt_int)14LL)))) {
F->hint_2450 = f_peek_type_798((*(P996)rt_nil_check(F->e_847)).b);
}
{
F->a_2472 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_847)).a, F->hint_2450, &F->ta_2448));
F->b_2473 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_847)).b, F->ta_2448, &F->tb_2449));
F->ct_2474 = NULL;
F->ct_2474 = f_base_of_219(F->ta_2448);
F->t_849v = g_ty_bool_1077;
if (((rt_r_ichk((*(P1002)rt_nil_check(F->ta_2448)).kind) != (((rt_int)11LL))) && (rt_r_ichk((*(P1002)rt_nil_check(F->tb_2449)).kind) != (((rt_int)11LL))))) {
f_check_type_228(F->tb_2449, F->ta_2448, rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->ta_2448)).kind) == (((rt_int)11LL)))) {
F->ct_2474 = f_base_of_219(F->tb_2449);
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->ct_2474)).kind) == (((rt_int)5LL)))) {
if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2472), rt_str(", ", 2)), F->b_2473), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2472), rt_str(", ", 2)), F->b_2473), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2472), rt_str(", ", 2)), F->b_2473), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2472), rt_str(", ", 2)), F->b_2473), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2473), rt_str(", ", 2)), F->a_2472), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2473), rt_str(", ", 2)), F->a_2472), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->ct_2474)).kind) == (((rt_int)16LL)))) {
if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), F->a_2472), rt_str(", ", 2)), F->b_2473), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!y_set_eq(", 11), F->a_2472), rt_str(", ", 2)), F->b_2473), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->a_2472), rt_str(", ", 2)), F->b_2473), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->b_2473), rt_str(", ", 2)), F->a_2472), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->a_2472), rt_str(", ", 2)), F->b_2473), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->b_2473), rt_str(", ", 2)), F->a_2472), rt_str(")", 1));
goto ret_;
}
if ((((((((rt_r_ichk((*(P1002)rt_nil_check(F->ct_2474)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->ct_2474)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P1002)rt_nil_check(F->ct_2474)).kind) == (((rt_int)11LL)))) || (rt_r_ichk((*(P1002)rt_nil_check(F->ct_2474)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P1002)rt_nil_check(F->ct_2474)).kind) == (((rt_int)12LL)))) && (!rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("=", 1)))) && (!rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("/=", 2))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only = and /= compare values of this type", 41); b_; }));
}
if (f_composite_385(F->ct_2474)) {
if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_409(F->ct_2474, &F->a_2472, &F->b_2473);
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_409(F->ct_2474, &F->a_2472, &F->b_2473)), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2472), rt_str(" == ", 4)), F->b_2473), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2472), rt_str(" != ", 4)), F->b_2473), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2472), rt_str(" ", 1)), (((P989)rt_nil_check(F->op_2447))->all)), rt_str(" ", 1)), F->b_2473), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2475 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_847)).a, F->want_848, &F->ta_2448));
F->b_2476 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->e_847)).b, f_exponent_want_957(&(((P989)rt_nil_check(F->op_2447))->all), F->ta_2448), &F->tb_2449));
if (((rt_r_ichk((*(P1002)rt_nil_check(F->ta_2448)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1002)rt_nil_check(F->tb_2449)).kind) == (((rt_int)3LL))))) {
F->t_849v = g_ty_float_1078;
if (((rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("+", 1)) || rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("-", 1))) || rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(", 10), F->a_2475), rt_str(" ", 1)), (((P989)rt_nil_check(F->op_2447))->all)), rt_str(" ", 1)), F->b_2476), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(rt_fdiv(", 18), F->a_2475), rt_str(", ", 2)), F->b_2476), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("**", 2))) {
f_check_type_228(F->tb_2449, g_ty_int_1076, rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fpow(", 10), F->a_2475), rt_str(", ", 2)), F->b_2476), rt_str(")", 1));
goto ret_;
}
}
f_check_type_228(F->ta_2448, g_ty_int_1076, rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
f_check_type_228(F->tb_2449, g_ty_int_1076, rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line));
F->t_849v = g_ty_int_1076;
if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2475), rt_str(", ", 2)), F->b_2476), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2475), rt_str(", ", 2)), F->b_2476), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2475), rt_str(", ", 2)), F->b_2476), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2475), rt_str(", ", 2)), F->b_2476), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2475), rt_str(", ", 2)), F->b_2476), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P989)rt_nil_check(F->op_2447))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2475), rt_str(", ", 2)), F->b_2476), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_847)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P989)rt_nil_check(F->op_2447))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_849) = F->t_849v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_855(P996 e_851, P1002 want_852, P998 ctx_853, P1002 *t_854) {
  struct f_constructor_855fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_851 = e_851;
F->want_852 = want_852;
F->ctx_853 = ctx_853;
F->t_854 = t_854;
F->t_854v = *F->t_854;
F->it_2477 = NULL;
F->it_2477 = (*(P996)rt_nil_check(F->e_851)).a;
F->f_2478 = NULL;
F->vt_2479 = NULL;
if (((F->want_852 != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->want_852)).kind) == (((rt_int)16LL))))) {
F->s_2480 = NULL;
F->s_2480 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_empty_set_302(F->want_852); b_; }));
F->t_854v = F->want_852;
while ((F->it_2477 != NULL)) {
F->v_2481 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->it_2477)).b, (*(P1002)rt_nil_check(F->want_852)).elem, &F->vt_2479));
f_check_type_228(F->vt_2479, (*(P1002)rt_nil_check(F->want_852)).elem, rt_r_ichk((*(P996)rt_nil_check(F->e_851)).line));
F->s_2480 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_add(", 10), (((P989)rt_nil_check(F->s_2480))->all)), rt_str(", ", 2)), F->v_2481), rt_str(")", 1)); b_; }));
F->it_2477 = (*(P996)rt_nil_check(F->it_2477)).next;
}
F->result_ = (((P989)rt_nil_check(F->s_2480))->all);
goto ret_;
}
if (((F->want_852 != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->want_852)).kind) == (((rt_int)15LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_851)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->want_852)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_852 != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->want_852)).kind) == (((rt_int)6LL))))) {
F->result_ = f_array_cons_869(F->e_851, F->want_852, F->ctx_853, &F->t_854v);
goto ret_;
}
if (((F->want_852 != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->want_852)).kind) == (((rt_int)17LL))))) {
if ((((((F->it_2477 == NULL) || ((*(P996)rt_nil_check(F->it_2477)).next != NULL)) || ((*(P996)rt_nil_check(F->it_2477)).a == NULL)) || ((*(P996)rt_nil_check((*(P996)rt_nil_check(F->it_2477)).a)).next != NULL)) || (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->it_2477)).a)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_851)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2478 = (*(P1002)rt_nil_check(F->want_852)).fields;
{
F->i_2482 = RT_R_IUNDEF;
F->i_2482 = ((rt_int)0LL);
F->tmp_2483 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2478 != NULL) && (!rt_str_eq((((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_2478)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->it_2477)).a)).a)).name))->all))))) {
F->i_2482 = rt_add(rt_r_ichk(F->i_2482), ((rt_int)1LL));
F->f_2478 = (*(P1004)rt_nil_check(F->f_2478)).next;
}
if ((F->f_2478 == NULL)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_851)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->it_2477)).a)).a)).name))->all)); b_; }));
}
F->t_854v = F->want_852;
g_cons_ctx_1067 = (*(P1004)rt_nil_check(F->f_2478)).c;
{
F->v_2484 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->it_2477)).b, (*(P1004)rt_nil_check(F->f_2478)).t, &F->vt_2479));
f_check_type_228(F->vt_2479, (*(P1004)rt_nil_check(F->f_2478)).t, rt_r_ichk((*(P996)rt_nil_check(F->e_851)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_230(F->want_852)), rt_str(" ", 1)), F->tmp_2483), rt_str("; ", 2)), F->tmp_2483), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk(F->i_2482))), rt_str("; ", 2)), F->tmp_2483), rt_str(".u.", 3)), f_field_c_17(&(((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_2478)).name))->all))), rt_str(" = ", 3)), f_comp_value_859((*(P1004)rt_nil_check(F->f_2478)).t, (*(P1004)rt_nil_check(F->f_2478)).c, &F->v_2484)), rt_str("; ", 2)), F->tmp_2483), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_852 == NULL) || (rt_r_ichk((*(P1002)rt_nil_check(F->want_852)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_851)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_854v = F->want_852;
F->f_2478 = (*(P1002)rt_nil_check(F->want_852)).fields;
{
F->tmp_2485 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2486 = NULL;
F->parts_2486 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_230(F->want_852)), rt_str(" ", 1)), F->tmp_2485), rt_str(";", 1)); b_; }));
while ((F->it_2477 != NULL)) {
F->k_2487 = NULL;
F->k_2487 = (*(P996)rt_nil_check(F->it_2477)).a;
F->shared_2488 = NULL;
if ((F->k_2487 == NULL)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_851)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2487 != NULL)) {
if (((((F->f_2478 == NULL) || (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->k_2487)).a)).kind) != (((rt_int)7LL)))) || ((*(P996)rt_nil_check(F->k_2487)).b != NULL)) || (!rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->k_2487)).a)).name))->all), (((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_2478)).name))->all))))) {
if ((F->f_2478 == NULL)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_851)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_851)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_2478)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P996)rt_nil_check((*(P996)rt_nil_check(F->it_2477)).a)).next == NULL)) {
g_cons_ctx_1067 = (*(P1004)rt_nil_check(F->f_2478)).c;
{
F->v_2489 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->it_2477)).b, (*(P1004)rt_nil_check(F->f_2478)).t, &F->vt_2479));
f_check_type_228(F->vt_2479, (*(P1004)rt_nil_check(F->f_2478)).t, rt_r_ichk((*(P996)rt_nil_check(F->e_851)).line));
F->parts_2486 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->parts_2486))->all), rt_str(" ", 1)), F->tmp_2485), rt_str(".", 1)), f_field_c_17(&(((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_2478)).name))->all))), rt_str(" = ", 3)), f_comp_value_859((*(P1004)rt_nil_check(F->f_2478)).t, (*(P1004)rt_nil_check(F->f_2478)).c, &F->v_2489)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2488 == NULL)) {
F->v_2490 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->it_2477)).b, (*(P1004)rt_nil_check(F->f_2478)).t, &F->vt_2479));
F->shared_2488 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_228(F->vt_2479, (*(P1004)rt_nil_check(F->f_2478)).t, rt_r_ichk((*(P996)rt_nil_check(F->e_851)).line));
F->parts_2486 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->parts_2486))->all), rt_str(" ", 1)), f_ctype_230((*(P1004)rt_nil_check(F->f_2478)).t)), rt_str(" ", 1)), (((P989)rt_nil_check(F->shared_2488))->all)), rt_str(" = ", 3)), F->v_2490), rt_str(";", 1)); b_; }));
}
f_check_type_228(F->vt_2479, (*(P1004)rt_nil_check(F->f_2478)).t, rt_r_ichk((*(P996)rt_nil_check(F->e_851)).line));
F->parts_2486 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->parts_2486))->all), rt_str(" ", 1)), F->tmp_2485), rt_str(".", 1)), f_field_c_17(&(((P989)rt_nil_check((*(P1004)rt_nil_check(F->f_2478)).name))->all))), rt_str(" = ", 3)), f_comp_value_859((*(P1004)rt_nil_check(F->f_2478)).t, (*(P1004)rt_nil_check(F->f_2478)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_405((*(P1004)rt_nil_check(F->f_2478)).t, &(((P989)rt_nil_check(F->shared_2488))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2478 = (*(P1004)rt_nil_check(F->f_2478)).next;
F->k_2487 = (*(P996)rt_nil_check(F->k_2487)).next;
}
F->it_2477 = (*(P996)rt_nil_check(F->it_2477)).next;
}
if ((F->f_2478 != NULL)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_851)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->parts_2486))->all), rt_str(" ", 1)), F->tmp_2485), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_854) = F->t_854v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_859(P1002 t_856, P998 c_857, rstr *v_858) {
  struct f_comp_value_859fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_856 = t_856;
F->c_857 = c_857;
F->v_858 = v_858;
if (((F->c_857 == NULL) || (((*(P998)rt_nil_check(F->c_857)).lo != NULL) && f_has_at_861(&(((P989)rt_nil_check((*(P998)rt_nil_check(F->c_857)).lo))->all))))) {
F->result_ = f_copy_code_405(F->t_856, &(*F->v_858));
goto ret_;
} else if ((((rt_r_ichk((*(P1002)rt_nil_check(F->t_856)).kind) == (((rt_int)5LL))) && ((*(P998)rt_nil_check(F->c_857)).slen != NULL)) && (!f_has_at_861(&(((P989)rt_nil_check((*(P998)rt_nil_check(F->c_857)).slen))->all))))) {
F->result_ = f_copy_code_405(F->t_856, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_858)), rt_str(", ", 2)), (((P989)rt_nil_check((*(P998)rt_nil_check(F->c_857)).slen))->all)), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_209(F->t_856, F->c_857, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_405(F->t_856, &(*F->v_858)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_861(rstr *s_860) {
  struct f_has_at_861fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_860 = s_860;
{ rt_int lo2492 = ((rt_int)1LL), hi2493 = ((rt_int)(((*F->s_860)).len));
for (rt_int it2494 = lo2492; it2494 <= hi2493; it2494++) {
F->i_2491 = it2494;
if ((rt_r_echk(rt_str_get((*F->s_860), F->i_2491)) == 64)) {
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

static rstr f_set_elem_864(P1002 st_862, rstr *v_863) {
  struct f_set_elem_864fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_862 = st_862;
F->v_863 = v_863;
F->result_ = (*F->v_863);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_869(P996 e_865, P1002 at_866, P998 ctx_867, P1002 *t_868) {
  struct f_array_cons_869fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_865 = e_865;
F->at_866 = at_866;
F->ctx_867 = ctx_867;
F->t_868 = t_868;
F->t_868v = *F->t_868;
F->tmp_2495 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2496 = NULL;
F->parts_2496 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_230(F->at_866)), rt_str(" ", 1)), F->tmp_2495), rt_str(";", 1)); b_; }));
F->it_2497 = NULL;
F->it_2497 = (*(P996)rt_nil_check(F->e_865)).a;
F->positional_2498 = RT_R_EUNDEF;
F->positional_2498 = 1;
F->t_868v = F->at_866;
while ((F->it_2497 != NULL)) {
if (((*(P996)rt_nil_check(F->it_2497)).a != NULL)) {
F->positional_2498 = 0;
}
F->it_2497 = (*(P996)rt_nil_check(F->it_2497)).next;
}
{ rt_int lo2500 = ((rt_int)1LL), hi2501 = rt_r_ichk((*(P1002)rt_nil_check(F->at_866)).ndim);
for (rt_int it2502 = lo2500; it2502 <= hi2501; it2502++) {
F->k_2499 = it2502;
F->lo_2503 = NULL;
F->hi_2504 = NULL;
if ((((F->ctx_867 != NULL) && (f_cons_lo_248(F->ctx_867, F->k_2499) != NULL)) && (!f_has_at_861(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P989)rt_nil_check(f_cons_lo_248(F->ctx_867, F->k_2499)))->all); b_; }))))) {
F->lo_2503 = f_cons_lo_248(F->ctx_867, F->k_2499);
F->hi_2504 = f_cons_hi_251(F->ctx_867, F->k_2499);
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->at_866)).ndim) == ((rt_int)1LL)) && rt_r_echk(F->positional_2498))) {
if (((*(P1002)rt_nil_check(f_base_of_219((*(P1002)rt_nil_check(F->at_866)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2503 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2503 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2504 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P989)rt_nil_check(F->lo_2503))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_67((*(P996)rt_nil_check(F->e_865)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_865)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2496 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->parts_2496))->all), rt_str(" ", 1)), F->tmp_2495), rt_str(".", 1)), f_dim_lo_238(F->k_2499)), rt_str(" = ", 3)), (((P989)rt_nil_check(F->lo_2503))->all)), rt_str("; ", 2)), F->tmp_2495), rt_str(".", 1)), f_dim_hi_240(F->k_2499)), rt_str(" = ", 3)), (((P989)rt_nil_check(F->hi_2504))->all)), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P1002)rt_nil_check(F->at_866)).ndim) == ((rt_int)1LL))) {
F->parts_2496 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->parts_2496))->all), rt_str(" ", 1)), F->tmp_2495), rt_str(".lo2 = ", 7)), F->tmp_2495), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2496 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->parts_2496))->all), rt_str(" rt_int n_", 10)), F->tmp_2495), rt_str(" = ", 3)), f_acnt_245(F->at_866, &F->tmp_2495)), rt_str("; ", 2)), F->tmp_2495), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_230((*(P1002)rt_nil_check(F->at_866)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2495), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2495), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2495), rt_str(" + 1);", 6)); b_; }));
F->parts_2496 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->parts_2496))->all), f_fill_items_875((*(P996)rt_nil_check(F->e_865)).a, F->at_866, &F->tmp_2495, NULL, ((rt_int)1LL))); b_; }));
F->parts_2496 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->parts_2496))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2495), rt_str("; i_++) if (seen_", 17)), F->tmp_2495), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2495), rt_str("; })", 4)); b_; }));
F->result_ = (((P989)rt_nil_check(F->parts_2496))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_868) = F->t_868v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_875(P996 items_870, P1002 at_871, rstr *tmp_872, P1000 prefix_873, rt_int dim_874) {
  struct f_fill_items_875fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_870 = items_870;
F->at_871 = at_871;
F->tmp_872 = tmp_872;
F->prefix_873 = prefix_873;
F->dim_874 = dim_874;
F->it_2505 = NULL;
F->it_2505 = F->items_870;
F->pos_2506 = RT_R_IUNDEF;
F->pos_2506 = ((rt_int)0LL);
F->r_2507 = NULL;
F->r_2507 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2508 = NULL;
while ((F->it_2505 != NULL)) {
if (((*(P996)rt_nil_check(F->it_2505)).a == NULL)) {
if (((F->dim_874 < rt_r_ichk((*(P1002)rt_nil_check(F->at_871)).ndim)) && (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->it_2505)).b)).kind) == (((rt_int)14LL))))) {
F->r_2507 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_2507))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_874)), rt_str(" = ", 3)), (*F->tmp_872)), rt_str(".", 1)), f_dim_lo_238(F->dim_874)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2506))), rt_str("; ", 2)), f_fill_items_875((*(P996)rt_nil_check((*(P996)rt_nil_check(F->it_2505)).b)).a, F->at_871, &(*F->tmp_872), f_add_line_880(F->prefix_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_874)); b_; })), rt_add(F->dim_874, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2509 = rt_str_copy(f_item_value_885((*(P996)rt_nil_check(F->it_2505)).b, F->at_871, f_e_line_877(F->it_2505), &F->vt_2508));
if (((F->dim_874 == ((rt_int)1LL)) && (rt_r_ichk((*(P1002)rt_nil_check(F->at_871)).ndim) > ((rt_int)1LL)))) {
F->r_2507 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_2507))->all), rt_str(" { ", 3)), F->v_2509), rt_str(" if (", 5)), f_itos_7(rt_r_ichk(F->pos_2506))), rt_str(" >= n_", 6)), (*F->tmp_872)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_872)), rt_str(".p[", 3)), f_itos_7(rt_r_ichk(F->pos_2506))), rt_str("] = ", 4)), f_copy_code_405((*(P1002)rt_nil_check(F->at_871)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_872)), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->pos_2506))), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2507 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_2507))->all), rt_str(" { ", 3)), F->v_2509), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_874)), rt_str(" = ", 3)), (*F->tmp_872)), rt_str(".", 1)), f_dim_lo_238(F->dim_874)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2506))), rt_str("; ", 2)), f_store_at_895(F->at_871, &(*F->tmp_872), f_add_line_880(F->prefix_873, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_874)); b_; })), F->dim_874)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2506 = rt_add(rt_r_ichk(F->pos_2506), ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_874, f_list_len_67((*(P996)rt_nil_check(F->it_2505)).a)), ((rt_int)1LL)) == rt_r_ichk((*(P1002)rt_nil_check(F->at_871)).ndim))) {
F->k_2510 = NULL;
F->k_2510 = (*(P996)rt_nil_check(F->it_2505)).a;
F->d_2511 = RT_R_IUNDEF;
F->d_2511 = F->dim_874;
F->pre_2512 = NULL;
F->pre_2512 = F->prefix_873;
F->loops_2513 = NULL;
F->loops_2513 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2514 = NULL;
F->ends_2514 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2515 = rt_str_copy(f_item_value_885((*(P996)rt_nil_check(F->it_2505)).b, F->at_871, rt_r_ichk((*(P996)rt_nil_check(F->it_2505)).line), &F->vt_2508));
while ((F->k_2510 != NULL)) {
F->xv_2516 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(rt_r_ichk(F->d_2511))));
F->loops_2513 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->loops_2513))->all), f_key_loop_890(F->k_2510, F->at_871, rt_r_ichk(F->d_2511), &F->xv_2516)); b_; }));
F->ends_2514 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->ends_2514))->all), rt_str(" }", 2)); b_; }));
F->pre_2512 = f_add_line_880(F->pre_2512, &F->xv_2516);
F->d_2511 = rt_add(rt_r_ichk(F->d_2511), ((rt_int)1LL));
F->k_2510 = (*(P996)rt_nil_check(F->k_2510)).next;
}
F->r_2507 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_2507))->all), rt_str(" { ", 3)), F->v_2515), (((P989)rt_nil_check(F->loops_2513))->all)), rt_str(" ", 1)), f_store_at_895(F->at_871, &(*F->tmp_872), F->pre_2512, rt_r_ichk((*(P1002)rt_nil_check(F->at_871)).ndim))), (((P989)rt_nil_check(F->ends_2514))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_874 == rt_r_ichk((*(P1002)rt_nil_check(F->at_871)).ndim)) || (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->it_2505)).b)).kind) == (((rt_int)14LL))))) {
F->k_2517 = NULL;
F->k_2517 = (*(P996)rt_nil_check(F->it_2505)).a;
while ((F->k_2517 != NULL)) {
F->xv_2518 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_874)));
if ((F->dim_874 < rt_r_ichk((*(P1002)rt_nil_check(F->at_871)).ndim))) {
F->r_2507 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_2507))->all), rt_str(" {", 2)), f_key_loop_890(F->k_2517, F->at_871, F->dim_874, &F->xv_2518)), rt_str(" ", 1)), f_fill_items_875((*(P996)rt_nil_check((*(P996)rt_nil_check(F->it_2505)).b)).a, F->at_871, &(*F->tmp_872), f_add_line_880(F->prefix_873, &F->xv_2518), rt_add(F->dim_874, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2519 = rt_str_copy(f_item_value_885((*(P996)rt_nil_check(F->it_2505)).b, F->at_871, rt_r_ichk((*(P996)rt_nil_check(F->it_2505)).line), &F->vt_2508));
F->r_2507 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_2507))->all), rt_str(" { ", 3)), F->v_2519), f_key_loop_890(F->k_2517, F->at_871, F->dim_874, &F->xv_2518)), rt_str(" ", 1)), f_store_at_895(F->at_871, &(*F->tmp_872), f_add_line_880(F->prefix_873, &F->xv_2518), F->dim_874)), rt_str(" } }", 4)); b_; }));
}
F->k_2517 = (*(P996)rt_nil_check(F->k_2517)).next;
}
} else {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->it_2505)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub(rt_r_ichk((*(P1002)rt_nil_check(F->at_871)).ndim), F->dim_874), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2505 = (*(P996)rt_nil_check(F->it_2505)).next;
}
F->result_ = (((P989)rt_nil_check(F->r_2507))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_877(P996 e_876) {
  struct f_e_line_877fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_876 = e_876;
F->result_ = rt_r_ichk((*(P996)rt_nil_check(F->e_876)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1000 f_add_line_880(P1000 l_878, rstr *s_879) {
  struct f_add_line_880fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_878 = l_878;
F->s_879 = s_879;
F->r_2520 = NULL;
F->tail_2521 = NULL;
F->x_2522 = NULL;
F->p_2523 = NULL;
F->p_2523 = F->l_878;
while ((F->p_2523 != NULL)) {
{ R1001 *cell2524 = rt_alloc(sizeof(R1001));
(*cell2524).s = NULL;
(*cell2524).next = NULL;
F->x_2522 = cell2524;
}
(*(P1000)rt_nil_check(F->x_2522)).s = (*(P1000)rt_nil_check(F->p_2523)).s;
if ((F->tail_2521 == NULL)) {
F->r_2520 = F->x_2522;
} else {
(*(P1000)rt_nil_check(F->tail_2521)).next = F->x_2522;
}
F->tail_2521 = F->x_2522;
F->p_2523 = (*(P1000)rt_nil_check(F->p_2523)).next;
}
{ R1001 *cell2525 = rt_alloc(sizeof(R1001));
(*cell2525).s = NULL;
(*cell2525).next = NULL;
F->x_2522 = cell2525;
}
(*(P1000)rt_nil_check(F->x_2522)).s = f_mk_3(&(*F->s_879));
if ((F->tail_2521 == NULL)) {
F->r_2520 = F->x_2522;
} else {
(*(P1000)rt_nil_check(F->tail_2521)).next = F->x_2522;
}
F->result_ = F->r_2520;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_885(P996 e_881, P1002 at_882, rt_int line_883, P1002 *vt_884) {
  struct f_item_value_885fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_881 = e_881;
F->at_882 = at_882;
F->line_883 = line_883;
F->vt_884 = vt_884;
F->vt_884v = *F->vt_884;
g_cons_ctx_1067 = (*(P1002)rt_nil_check(F->at_882)).elemcons;
{
F->v_2526 = rt_str_copy(f_gexpr_782(F->e_881, (*(P1002)rt_nil_check(F->at_882)).elem, &F->vt_884v));
f_check_type_228(F->vt_884v, (*(P1002)rt_nil_check(F->at_882)).elem, F->line_883);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_230((*(P1002)rt_nil_check(F->at_882)).elem), rt_str(" v_ = ", 6)), f_comp_value_859((*(P1002)rt_nil_check(F->at_882)).elem, (*(P1002)rt_nil_check(F->at_882)).elemcons, &F->v_2526)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_884) = F->vt_884v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_890(P996 k_886, P1002 at_887, rt_int d_888, rstr *xv_889) {
  struct f_key_loop_890fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_886 = k_886;
F->at_887 = at_887;
F->d_888 = d_888;
F->xv_889 = xv_889;
F->it_2527 = NULL;
F->lo_2528 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->k_886)).a, f_idx_type_254(F->at_887, F->d_888), &F->it_2527));
f_check_type_228(F->it_2527, f_idx_type_254(F->at_887, F->d_888), rt_r_ichk((*(P996)rt_nil_check(F->k_886)).line));
if (((*(P996)rt_nil_check(F->k_886)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_889)), rt_str(" = ", 3)), F->lo_2528), rt_str(";", 1));
goto ret_;
}
{
F->hi_2529 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->k_886)).b, f_idx_type_254(F->at_887, F->d_888), &F->it_2527));
f_check_type_228(F->it_2527, f_idx_type_254(F->at_887, F->d_888), rt_r_ichk((*(P996)rt_nil_check(F->k_886)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_889)), rt_str(" = ", 3)), F->lo_2528), rt_str(", h", 3)), (*F->xv_889)), rt_str(" = ", 3)), F->hi_2529), rt_str("; ", 2)), (*F->xv_889)), rt_str(" <= h", 5)), (*F->xv_889)), rt_str("; ", 2)), (*F->xv_889)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_895(P1002 at_891, rstr *tmp_892, P1000 xs_893, rt_int n_894) {
  struct f_store_at_895fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_891 = at_891;
F->tmp_892 = tmp_892;
F->xs_893 = xs_893;
F->n_894 = n_894;
F->off_2530 = NULL;
F->x_2531 = NULL;
F->x_2531 = F->xs_893;
F->k_2532 = RT_R_IUNDEF;
F->k_2532 = ((rt_int)0LL);
while ((F->x_2531 != NULL)) {
F->k_2532 = rt_add(rt_r_ichk(F->k_2532), ((rt_int)1LL));
{
F->l_2533 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_892), rt_str(".", 1)), f_dim_lo_238(rt_r_ichk(F->k_2532))));
F->h_2534 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_892), rt_str(".", 1)), f_dim_hi_240(rt_r_ichk(F->k_2532))));
if ((F->off_2530 == NULL)) {
F->off_2530 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P989)rt_nil_check((*(P1000)rt_nil_check(F->x_2531)).s))->all)), rt_str(", ", 2)), F->l_2533), rt_str(", ", 2)), F->h_2534), rt_str(") - ", 4)), F->l_2533), rt_str(")", 1)); b_; }));
} else {
F->off_2530 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P989)rt_nil_check(F->off_2530))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2533), rt_str(", ", 2)), F->h_2534), rt_str(") + rt_index(", 13)), (((P989)rt_nil_check((*(P1000)rt_nil_check(F->x_2531)).s))->all)), rt_str(", ", 2)), F->l_2533), rt_str(", ", 2)), F->h_2534), rt_str(") - ", 4)), F->l_2533), rt_str(")", 1)); b_; }));
}
}
F->x_2531 = (*(P1000)rt_nil_check(F->x_2531)).next;
}
if ((rt_r_ichk(F->k_2532) != rt_r_ichk((*(P1002)rt_nil_check(F->at_891)).ndim))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7(rt_r_ichk((*(P1002)rt_nil_check(F->at_891)).ndim))), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P989)rt_nil_check(F->off_2530))->all)), rt_str("; ", 2)), (*F->tmp_892)), rt_str(".p[o_] = ", 9)), f_copy_code_405((*(P1002)rt_nil_check(F->at_891)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_892)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_898(P1006 y_896, P996 args_897) {
  struct f_fits_898fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_896 = y_896;
F->args_897 = args_897;
F->a_2535 = NULL;
F->a_2535 = F->args_897;
F->pm_2536 = NULL;
F->pm_2536 = (*(P1006)rt_nil_check(F->y_896)).params;
F->t_2537 = NULL;
F->saved_2538 = NULL;
F->saved_2538 = g_code_1046;
F->ok_2539 = RT_R_EUNDEF;
F->ok_2539 = 1;
F->lv_2540 = NULL;
F->lc_2541 = NULL;
F->ro_2542 = RT_R_EUNDEF;
g_trial_1074 = rt_add(rt_r_ichk(g_trial_1074), ((rt_int)1LL));
g_code_1046 = f_new_buffer_24();
{ rt_frame xf2543;
if (RT_TRY(xf2543)) {
while (((rt_r_echk(F->ok_2539) && (F->a_2535 != NULL)) && (F->pm_2536 != NULL))) {
if (((rt_r_ichk((*(P1008)rt_nil_check(F->pm_2536)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P1008)rt_nil_check(F->pm_2536)).mode) == (((rt_int)3LL))))) {
f_lvalue_751(F->a_2535, &F->lv_2540, &F->t_2537, &F->lc_2541, &F->ro_2542);
} else {
F->v_2545 = rt_str_copy(f_gexpr_782(F->a_2535, (*(P1008)rt_nil_check(F->pm_2536)).t, &F->t_2537));
}
if ((!(f_same_217(F->t_2537, (*(P1008)rt_nil_check(F->pm_2536)).t) || ((rt_r_ichk((*(P1002)rt_nil_check(F->t_2537)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P1002)rt_nil_check((*(P1008)rt_nil_check(F->pm_2536)).t)).kind) == (((rt_int)8LL))))))) {
F->ok_2539 = 0;
}
F->a_2535 = (*(P996)rt_nil_check(F->a_2535)).next;
F->pm_2536 = (*(P1008)rt_nil_check(F->pm_2536)).next;
}
if (((F->a_2535 != NULL) || (F->pm_2536 != NULL))) {
F->ok_2539 = 0;
}
RT_POP(xf2543);
} else {
RT_POP(xf2543);
int x2544 = rt_xcur;
if (0 || x2544 == ex_compile_error_1) {
F->ok_2539 = 0;
} else {
rt_raise(x2544);
}
}
}
g_trial_1074 = rt_sub(rt_r_ichk(g_trial_1074), ((rt_int)1LL));
g_code_1046 = F->saved_2538;
F->result_ = rt_r_echk(F->ok_2539);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1006 f_resolve_overload_904(rstr *name_899, P996 tt_900, P996 args_901, int is_stmt_902, rt_int line_903) {
  struct f_resolve_overload_904fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_899 = name_899;
F->tt_900 = tt_900;
F->args_901 = args_901;
F->is_stmt_902 = is_stmt_902;
F->line_903 = line_903;
F->y_2546 = NULL;
F->first_2547 = NULL;
F->n_2548 = RT_R_IUNDEF;
F->n_2548 = ((rt_int)0LL);
{ rt_int lo2550 = ((rt_int)1LL), hi2551 = ((rt_int)3LL);
for (rt_int it2552 = lo2550; it2552 <= hi2551; it2552++) {
F->pass_2549 = it2552;
F->y_2546 = f_overload_chain_910(&(*F->name_899), F->pass_2549);
while ((F->y_2546 != NULL)) {
if (((rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_2546)).name))->all), (*F->name_899)) && ((rt_r_ichk((*(P1006)rt_nil_check(F->y_2546)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_2546)).kind) == (((rt_int)4LL))))) && ((F->pass_2549 != ((rt_int)1LL)) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_2546)).depth) >= rt_r_ichk(g_gdepth_1065))))) {
F->n_2548 = rt_add(rt_r_ichk(F->n_2548), ((rt_int)1LL));
if ((F->first_2547 == NULL)) {
F->first_2547 = F->y_2546;
}
if (((((rt_r_ichk((*(P1006)rt_nil_check(F->y_2546)).kind) == (((rt_int)4LL))) == F->is_stmt_902) && f_tt_fits_907(F->y_2546, F->tt_900)) && f_fits_898(F->y_2546, F->args_901))) {
F->result_ = F->y_2546;
goto ret_;
}
}
F->y_2546 = (*(P1006)rt_nil_check(F->y_2546)).chain;
}
}
}
if (f_is_builtin_912(&(*F->name_899))) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk(F->n_2548) > ((rt_int)1LL))) {
f_fail_23(F->line_903, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_899)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2547;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_907(P1006 y_905, P996 tt_906) {
  struct f_tt_fits_907fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_905 = y_905;
F->tt_906 = tt_906;
F->f_2553 = NULL;
F->a_2554 = NULL;
F->saved_2555 = NULL;
F->saved_2555 = g_code_1046;
F->ok_2556 = RT_R_EUNDEF;
F->ok_2556 = 1;
if ((((*(P1006)rt_nil_check(F->y_905)).decl == NULL) || ((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_905)).decl)).e == NULL))) {
F->result_ = (F->tt_906 == NULL);
goto ret_;
} else if ((F->tt_906 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2553 = (*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_905)).decl)).e;
F->a_2554 = F->tt_906;
g_trial_1074 = rt_add(rt_r_ichk(g_trial_1074), ((rt_int)1LL));
g_code_1046 = f_new_buffer_24();
{ rt_frame xf2557;
if (RT_TRY(xf2557)) {
while (((rt_r_echk(F->ok_2556) && (F->f_2553 != NULL)) && (F->a_2554 != NULL))) {
F->fc_2559 = NULL;
F->ac_2560 = NULL;
F->fst_2561 = NULL;
F->fst_2561 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P996)rt_nil_check(F->f_2553)).line));
F->ft_2562 = NULL;
F->at_2563 = NULL;
(*(P996)rt_nil_check(F->fst_2561)).name = (*(P996)rt_nil_check(F->f_2553)).name;
F->ft_2562 = f_resolve_subtype_264(F->fst_2561, &F->fc_2559);
if ((rt_r_ichk((*(P996)rt_nil_check(F->a_2554)).kind) >= (((rt_int)70LL)))) {
F->at_2563 = f_resolve_subtype_264(F->a_2554, &F->ac_2560);
} else {
F->ast_2564 = NULL;
F->ast_2564 = f_nn_61((((rt_int)80LL)), rt_r_ichk((*(P996)rt_nil_check(F->a_2554)).line));
(*(P996)rt_nil_check(F->ast_2564)).name = (*(P996)rt_nil_check(F->a_2554)).name;
F->at_2563 = f_resolve_subtype_264(F->ast_2564, &F->ac_2560);
}
F->ok_2556 = f_same_217(F->ft_2562, F->at_2563);
F->f_2553 = (*(P996)rt_nil_check(F->f_2553)).next;
F->a_2554 = (*(P996)rt_nil_check(F->a_2554)).next;
}
F->ok_2556 = ((rt_r_echk(F->ok_2556) && (F->f_2553 == NULL)) && (F->a_2554 == NULL));
RT_POP(xf2557);
} else {
RT_POP(xf2557);
int x2558 = rt_xcur;
if (0 || x2558 == ex_compile_error_1) {
F->ok_2556 = 0;
} else {
rt_raise(x2558);
}
}
}
g_trial_1074 = rt_sub(rt_r_ichk(g_trial_1074), ((rt_int)1LL));
g_code_1046 = F->saved_2555;
F->result_ = rt_r_echk(F->ok_2556);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1006 f_overload_chain_910(rstr *name_908, rt_int pass_909) {
  struct f_overload_chain_910fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_908 = name_908;
F->pass_909 = pass_909;
if (((g_genv_1033 == NULL) && (F->pass_909 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_909 == ((rt_int)2LL))) {
F->result_ = ({ A1012 b_ = (((P1010)rt_nil_check(g_genv_1033))->all); b_.p[(rt_index(f_hash_157(&(*F->name_908)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A1012 b_ = (((P1010)rt_nil_check(g_table_1032))->all); b_.p[(rt_index(f_hash_157(&(*F->name_908)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_912(rstr *n_911) {
  struct f_is_builtin_912fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_911 = n_911;
F->result_ = (((((((((((((((rt_str_eq((*F->n_911), rt_str("ABS", 3)) || rt_str_eq((*F->n_911), rt_str("POS", 3))) || rt_str_eq((*F->n_911), rt_str("SUCC", 4))) || rt_str_eq((*F->n_911), rt_str("PRED", 4))) || rt_str_eq((*F->n_911), rt_str("SQRT", 4))) || rt_str_eq((*F->n_911), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_911), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_911), rt_str("WRITE", 5))) || rt_str_eq((*F->n_911), rt_str("READLN", 6))) || rt_str_eq((*F->n_911), rt_str("SEND", 4))) || rt_str_eq((*F->n_911), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_911), rt_str("DELAY", 5))) || rt_str_eq((*F->n_911), rt_str("TIME", 4))) || rt_str_eq((*F->n_911), rt_str("CNVT", 4))) || rt_str_eq((*F->n_911), rt_str("FORMAT", 6))) || f_is_low_level_914(&(*F->n_911)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_914(rstr *n_913) {
  struct f_is_low_level_914fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_913 = n_913;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_913), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_913), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_913), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_913), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_913), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_913), rt_str("LOCK", 4))) || rt_str_eq((*F->n_913), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_913), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_913), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_913), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_913), rt_str("WAITING", 7))) || rt_str_eq((*F->n_913), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_913), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_913), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_913), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_913), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_913), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_913), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_913), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_918(P996 tt_915, rt_int line_916, P1002 *t_917) {
  struct f_me_high_918fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_915 = tt_915;
F->line_916 = line_916;
F->t_917 = t_917;
F->t_917v = *F->t_917;
F->c_2565 = NULL;
if ((F->tt_915 == NULL)) {
f_fail_23(F->line_916, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_917v = f_resolve_subtype_264(F->tt_915, &F->c_2565);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_230(F->t_917v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_920(F->t_917v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_917) = F->t_917v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_920(P1002 t_919) {
  struct f_type_tag_920fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_919 = t_919;
if (((*(P1002)rt_nil_check(F->t_919)).name != NULL)) {
F->result_ = (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_919)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_923(P996 e_921, rstr *name_922) {
  struct f_lock_ref_923fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_921 = e_921;
F->name_922 = name_922;
F->lv_2566 = NULL;
F->t_2567 = NULL;
F->c_2568 = NULL;
F->ro_2569 = RT_R_EUNDEF;
f_lvalue_751(F->e_921, &F->lv_2566, &F->t_2567, &F->c_2568, &F->ro_2569);
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_2567)).kind) != (((rt_int)13LL)))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_921)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_922), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P989)rt_nil_check(F->lv_2566))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1006 f_user_op_926(rstr *op_924, P996 args_925) {
  struct f_user_op_926fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_924 = op_924;
F->args_925 = args_925;
F->y_2570 = NULL;
{ rt_int lo2572 = ((rt_int)1LL), hi2573 = ((rt_int)3LL);
for (rt_int it2574 = lo2572; it2574 <= hi2573; it2574++) {
F->pass_2571 = it2574;
F->y_2570 = f_overload_chain_910(&(*F->op_924), F->pass_2571);
while ((F->y_2570 != NULL)) {
if ((((rt_str_eq((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_2570)).name))->all), (*F->op_924)) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_2570)).kind) == (((rt_int)3LL)))) && ((F->pass_2571 != ((rt_int)1LL)) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_2570)).depth) >= rt_r_ichk(g_gdepth_1065)))) && f_fits_898(F->y_2570, F->args_925))) {
F->result_ = F->y_2570;
goto ret_;
}
F->y_2570 = (*(P1006)rt_nil_check(F->y_2570)).chain;
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

static rstr f_gcall_930(P996 e_927, int is_stmt_928, P1002 *t_929) {
  struct f_gcall_930fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_927 = e_927;
F->is_stmt_928 = is_stmt_928;
F->t_929 = t_929;
F->t_929v = *F->t_929;
F->gd_2575 = NULL;
F->fn_2576 = NULL;
F->fn_2576 = (*(P996)rt_nil_check(F->e_927)).a;
F->tt_2577 = NULL;
F->y_2578 = NULL;
F->args_2579 = NULL;
F->args_2579 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2580 = NULL;
F->a_2580 = (*(P996)rt_nil_check(F->e_927)).b;
F->pm_2581 = NULL;
F->lt_2582 = NULL;
F->vt_2583 = NULL;
F->lv_2584 = NULL;
F->lc_2585 = NULL;
F->ro_2586 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P996)rt_nil_check(F->fn_2576)).kind) == (((rt_int)12LL)))) {
F->tt_2577 = (*(P996)rt_nil_check(F->fn_2576)).b;
F->fn_2576 = (*(P996)rt_nil_check(F->fn_2576)).a;
}
F->y_2578 = f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2576)).name))->all));
if ((F->y_2578 == NULL)) {
F->result_ = f_builtin_985(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2576)).name))->all), F->tt_2577, (*(P996)rt_nil_check(F->e_927)).b, rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line), F->is_stmt_928, &F->t_929v);
goto ret_;
}
if ((((rt_r_ichk((*(P1006)rt_nil_check(F->y_2578)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_2578)).kind) != (((rt_int)4LL)))) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_2578)).kind) != (((rt_int)10LL))))) {
F->alt_2587 = NULL;
F->alt_2587 = f_resolve_overload_904(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2576)).name))->all), F->tt_2577, (*(P996)rt_nil_check(F->e_927)).b, F->is_stmt_928, rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line));
if ((F->alt_2587 != NULL)) {
F->y_2578 = F->alt_2587;
} else if (f_is_builtin_912(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2576)).name))->all))) {
F->result_ = f_builtin_985(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2576)).name))->all), F->tt_2577, (*(P996)rt_nil_check(F->e_927)).b, rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line), F->is_stmt_928, &F->t_929v);
goto ret_;
}
}
if ((rt_r_ichk((*(P1006)rt_nil_check(F->y_2578)).kind) == (((rt_int)10LL)))) {
F->gd_2575 = (*(P1006)rt_nil_check(F->y_2578)).decl;
F->y_2578 = f_instantiate_727(F->y_2578, F->tt_2577, (*(P996)rt_nil_check(F->e_927)).b, rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line));
} else if (((rt_r_ichk((*(P1006)rt_nil_check(F->y_2578)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_2578)).kind) == (((rt_int)4LL))))) {
F->y_2578 = f_resolve_overload_904(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2576)).name))->all), F->tt_2577, (*(P996)rt_nil_check(F->e_927)).b, F->is_stmt_928, rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line));
if ((F->y_2578 == NULL)) {
F->result_ = f_builtin_985(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2576)).name))->all), F->tt_2577, (*(P996)rt_nil_check(F->e_927)).b, rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line), F->is_stmt_928, &F->t_929v);
goto ret_;
}
}
if (((rt_r_ichk((*(P1006)rt_nil_check(F->y_2578)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_2578)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2576)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_944(F->y_2578, rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line));
if (((*(P1006)rt_nil_check(F->y_2578)).capn != NULL)) {
F->cr_2588 = NULL;
F->cr_2588 = g_caps_1051;
while ((F->cr_2588 != NULL)) {
if (((*(P1023)rt_nil_check(F->cr_2588)).d == (*(P1006)rt_nil_check(F->y_2578)).capn)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_2578)).name))->all), rt_str(" is a normal function with an imports list: it may not be invoked inside its capsule", 84)); b_; }));
}
F->cr_2588 = (*(P1023)rt_nil_check(F->cr_2588)).next;
}
}
if ((F->is_stmt_928 && (rt_r_ichk((*(P1006)rt_nil_check(F->y_2578)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2576)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_928) && (rt_r_ichk((*(P1006)rt_nil_check(F->y_2578)).kind) != (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2576)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2581 = (*(P1006)rt_nil_check(F->y_2578)).params;
if ((rt_r_ichk((*(P1006)rt_nil_check(F->y_2578)).level) > ((rt_int)0LL))) {
F->args_2579 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2590 = ((rt_int)1LL), hi2591 = rt_sub(rt_r_ichk(g_cur_level_1049), rt_r_ichk((*(P1006)rt_nil_check(F->y_2578)).level));
for (rt_int it2592 = lo2590; it2592 <= hi2591; it2592++) {
F->i_2589 = it2592;
F->args_2579 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->args_2579))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2580 != NULL) && (F->pm_2581 != NULL))) {
if ((((rt_int)(((((P989)rt_nil_check(F->args_2579))->all)).len)) > ((rt_int)0LL))) {
F->args_2579 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->args_2579))->all), rt_str(", ", 2)); b_; }));
}
if ((((rt_r_ichk((*(P1008)rt_nil_check(F->pm_2581)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P1008)rt_nil_check(F->pm_2581)).mode) == (((rt_int)4LL)))) && f_explicit_rep_974(F->a_2580))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("data with an explicit representation may not be bound to a VAR or READONLY formal", 81); b_; }));
}
if (((rt_r_ichk((*(P1008)rt_nil_check(F->pm_2581)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P1008)rt_nil_check(F->pm_2581)).mode) == (((rt_int)3LL))))) {
f_lvalue_751(F->a_2580, &F->lv_2584, &F->lt_2582, &F->lc_2585, &F->ro_2586);
if (rt_r_echk(F->ro_2586)) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check((*(P1008)rt_nil_check(F->pm_2581)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_228(F->lt_2582, (*(P1008)rt_nil_check(F->pm_2581)).t, rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line));
F->args_2579 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->args_2579))->all), rt_str("&", 1)), (((P989)rt_nil_check(F->lv_2584))->all)), f_actual_bounds_978((*(P1008)rt_nil_check(F->pm_2581)).t, F->lt_2582, F->lc_2585)); b_; }));
} else if (((rt_r_ichk((*(P1008)rt_nil_check(F->pm_2581)).mode) == (((rt_int)4LL))) && f_is_lvalue_745(F->a_2580))) {
f_lvalue_751(F->a_2580, &F->lv_2584, &F->lt_2582, &F->lc_2585, &F->ro_2586);
f_check_type_228(F->lt_2582, (*(P1008)rt_nil_check(F->pm_2581)).t, rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line));
F->args_2579 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->args_2579))->all), rt_str("&", 1)), (((P989)rt_nil_check(F->lv_2584))->all)), f_actual_bounds_978((*(P1008)rt_nil_check(F->pm_2581)).t, F->lt_2582, F->lc_2585)); b_; }));
} else if ((rt_r_ichk((*(P1008)rt_nil_check(F->pm_2581)).mode) == (((rt_int)4LL)))) {
F->v_2593 = rt_str_copy(f_gexpr_in_790(F->a_2580, (*(P1008)rt_nil_check(F->pm_2581)).t, (*(P1008)rt_nil_check(F->pm_2581)).c, &F->vt_2583));
F->ct_2594 = rt_str_copy(f_ctype_230((*(P1008)rt_nil_check(F->pm_2581)).t));
f_check_type_228(F->vt_2583, (*(P1008)rt_nil_check(F->pm_2581)).t, rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line));
F->args_2579 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->args_2579))->all), rt_str("({ ", 3)), F->ct_2594), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2594), rt_str(")); *b_ = ", 10)), F->v_2593), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_182((*(P1008)rt_nil_check(F->pm_2581)).t)) {
F->args_2579 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->args_2579))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2595 = rt_str_copy(f_gexpr_in_790(F->a_2580, (*(P1008)rt_nil_check(F->pm_2581)).t, (*(P1008)rt_nil_check(F->pm_2581)).c, &F->vt_2583));
f_check_type_228(F->vt_2583, (*(P1008)rt_nil_check(F->pm_2581)).t, rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line));
F->args_2579 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->args_2579))->all), F->v_2595); b_; }));
}
F->a_2580 = (*(P996)rt_nil_check(F->a_2580)).next;
F->pm_2581 = (*(P1008)rt_nil_check(F->pm_2581)).next;
}
if (((F->a_2580 != NULL) || (F->pm_2581 != NULL))) {
f_fail_23(rt_r_ichk((*(P996)rt_nil_check(F->e_927)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check((*(P996)rt_nil_check(F->fn_2576)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_67((*(P996)rt_nil_check(F->e_927)).b), f_list_len_67(F->a_2580)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_929v = (*(P1006)rt_nil_check(F->y_2578)).result;
if ((F->gd_2575 != NULL)) {
F->chk_2596 = rt_str_copy(f_same_subtypes_949(F->gd_2575, (*(P996)rt_nil_check(F->e_927)).b));
if ((!rt_str_eq(F->chk_2596, rt_str("", 0)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), F->chk_2596), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("generic subtype", 15)), f_q_18()), rt_str("); ", 3)), (((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_2578)).cname))->all)), rt_str("(", 1)), (((P989)rt_nil_check(F->args_2579))->all)), rt_str("); })", 5));
goto ret_;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_2578)).cname))->all), rt_str("(", 1)), (((P989)rt_nil_check(F->args_2579))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_929) = F->t_929v;
  RT_FPOP();
  return F->result_;
}

static P1000 f_requires_932(P1006 y_931) {
  struct f_requires_932fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_931 = y_931;
if (rt_r_echk((*(P1006)rt_nil_check(F->y_931)).reqdone)) {
F->result_ = (*(P1006)rt_nil_check(F->y_931)).reqs;
goto ret_;
}
(*(P1006)rt_nil_check(F->y_931)).reqdone = 1;
if ((((*(P1006)rt_nil_check(F->y_931)).decl != NULL) && (((rt_r_ichk((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_931)).decl)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_931)).decl)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_931)).decl)).kind) == (((rt_int)50LL)))))) {
F->imp_2597 = NULL;
F->imp_2597 = (*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_931)).decl)).d;
while ((F->imp_2597 != NULL)) {
f_add_req_935(F->y_931, &(((P989)rt_nil_check((*(P996)rt_nil_check(F->imp_2597)).name))->all));
F->imp_2597 = (*(P996)rt_nil_check(F->imp_2597)).next;
}
f_require_calls_938(F->y_931, (*(P996)rt_nil_check((*(P1006)rt_nil_check(F->y_931)).decl)).c);
}
F->result_ = (*(P1006)rt_nil_check(F->y_931)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_935(P1006 y_933, rstr *name_934) {
  struct f_add_req_935fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_933 = y_933;
F->name_934 = name_934;
F->l_2598 = NULL;
if ((!f_seen_name_416((*(P1006)rt_nil_check(F->y_933)).reqs, &(*F->name_934)))) {
{ R1001 *cell2599 = rt_alloc(sizeof(R1001));
(*cell2599).s = NULL;
(*cell2599).next = NULL;
F->l_2598 = cell2599;
}
(*(P1000)rt_nil_check(F->l_2598)).s = f_mk_3(&(*F->name_934));
(*(P1000)rt_nil_check(F->l_2598)).next = (*(P1006)rt_nil_check(F->y_933)).reqs;
(*(P1006)rt_nil_check(F->y_933)).reqs = F->l_2598;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_938(P1006 y_936, P996 e_937) {
  struct f_require_calls_938fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_936 = y_936;
F->e_937 = e_937;
F->x_2600 = NULL;
F->x_2600 = F->e_937;
while ((F->x_2600 != NULL)) {
if ((((((rt_r_ichk((*(P996)rt_nil_check(F->x_2600)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P996)rt_nil_check(F->x_2600)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P996)rt_nil_check(F->x_2600)).kind) == (((rt_int)50LL)))) || (rt_r_ichk((*(P996)rt_nil_check(F->x_2600)).kind) == (((rt_int)47LL)))) || (rt_r_ichk((*(P996)rt_nil_check(F->x_2600)).kind) == (((rt_int)51LL))))) {
F->x_2600 = (*(P996)rt_nil_check(F->x_2600)).next;
} else {
F->callee_2601 = NULL;
if (((((rt_r_ichk((*(P996)rt_nil_check(F->x_2600)).kind) == (((rt_int)10LL))) || (rt_r_ichk((*(P996)rt_nil_check(F->x_2600)).kind) == (((rt_int)21LL)))) && ((*(P996)rt_nil_check(F->x_2600)).a != NULL)) && (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->x_2600)).a)).kind) == (((rt_int)7LL))))) {
F->callee_2601 = (*(P996)rt_nil_check(F->x_2600)).a;
}
if ((F->callee_2601 != NULL)) {
F->z_2602 = NULL;
F->z_2602 = f_lookup_159(&(((P989)rt_nil_check((*(P996)rt_nil_check(F->callee_2601)).name))->all));
if ((((F->z_2602 != NULL) && (F->z_2602 != F->y_936)) && ((rt_r_ichk((*(P1006)rt_nil_check(F->z_2602)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1006)rt_nil_check(F->z_2602)).kind) == (((rt_int)3LL)))))) {
F->l_2603 = NULL;
F->l_2603 = f_requires_932(F->z_2602);
while ((F->l_2603 != NULL)) {
f_add_req_935(F->y_936, &(((P989)rt_nil_check((*(P1000)rt_nil_check(F->l_2603)).s))->all));
F->l_2603 = (*(P1000)rt_nil_check(F->l_2603)).next;
}
}
}
if (((*(P996)rt_nil_check(F->x_2600)).a != NULL)) {
f_require_calls_938(F->y_936, (*(P996)rt_nil_check(F->x_2600)).a);
}
if (((*(P996)rt_nil_check(F->x_2600)).b != NULL)) {
f_require_calls_938(F->y_936, (*(P996)rt_nil_check(F->x_2600)).b);
}
if (((*(P996)rt_nil_check(F->x_2600)).c != NULL)) {
f_require_calls_938(F->y_936, (*(P996)rt_nil_check(F->x_2600)).c);
}
F->x_2600 = (*(P996)rt_nil_check(F->x_2600)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_941(P996 elems_939, rstr *name_940) {
  struct f_declared_in_941fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_939 = elems_939;
F->name_940 = name_940;
F->e_2604 = NULL;
F->e_2604 = F->elems_939;
while ((F->e_2604 != NULL)) {
if ((((rt_r_ichk((*(P996)rt_nil_check(F->e_2604)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P996)rt_nil_check(F->e_2604)).kind) == (((rt_int)41LL)))) && rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_2604)).name))->all), (*F->name_940)))) {
F->result_ = 1;
goto ret_;
}
F->e_2604 = (*(P996)rt_nil_check(F->e_2604)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_944(P1006 y_942, rt_int line_943) {
  struct f_check_requires_944fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_942 = y_942;
F->line_943 = line_943;
F->l_2605 = NULL;
F->l_2605 = f_requires_932(F->y_942);
if ((((*(P1006)rt_nil_check(F->y_942)).home == NULL) || (rt_r_ichk((*(P1006)rt_nil_check(F->y_942)).level) != rt_r_ichk(g_cur_level_1049)))) {
goto ret_;
}
while ((F->l_2605 != NULL)) {
F->z_2606 = NULL;
F->z_2606 = f_lookup_159(&(((P989)rt_nil_check((*(P1000)rt_nil_check(F->l_2605)).s))->all));
if ((f_declared_in_941((*(P1006)rt_nil_check(F->y_942)).home, &(((P989)rt_nil_check((*(P1000)rt_nil_check(F->l_2605)).s))->all)) && ((F->z_2606 == NULL) || (rt_r_ichk((*(P1006)rt_nil_check(F->z_2606)).depth) < rt_r_ichk((*(P1006)rt_nil_check(F->y_942)).depth))))) {
f_fail_23(F->line_943, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check((*(P1006)rt_nil_check(F->y_942)).name))->all), rt_str(" requires ", 10)), (((P989)rt_nil_check((*(P1000)rt_nil_check(F->l_2605)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2605 = (*(P1000)rt_nil_check(F->l_2605)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_delay_args_946(P996 args_945) {
  struct f_act_delay_args_946fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->args_945 = args_945;
F->at_2607 = NULL;
F->t1_2608 = NULL;
F->t1_2608 = f_peek_type_798(F->args_945);
if (((F->t1_2608 != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->t1_2608)).kind) == (((rt_int)14LL))))) {
F->a_2609 = rt_str_copy(f_act_ref_633(F->args_945));
F->v_2610 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->args_945)).next, g_ty_int_1076, &F->at_2607));
f_check_type_228(F->at_2607, g_ty_int_1076, rt_r_ichk((*(P996)rt_nil_check(F->args_945)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2610, rt_str(", ", 2)), F->a_2609);
goto ret_;
}
{
F->v_2611 = rt_str_copy(f_gexpr_782(F->args_945, g_ty_int_1076, &F->at_2607));
f_check_type_228(F->at_2607, g_ty_int_1076, rt_r_ichk((*(P996)rt_nil_check(F->args_945)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2611, rt_str(", ", 2)), f_act_ref_633((*(P996)rt_nil_check(F->args_945)).next));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_same_subtypes_949(P996 gd_947, P996 args_948) {
  struct f_same_subtypes_949fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_947 = gd_947;
F->args_948 = args_948;
F->p_2612 = NULL;
F->p_2612 = (*(P996)rt_nil_check(F->gd_947)).a;
F->r_2613 = NULL;
F->r_2613 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->p_2612 != NULL)) {
if ((rt_r_ichk((*(P996)rt_nil_check(F->p_2612)).ival) == ((rt_int)2LL))) {
F->fp_2614 = NULL;
F->fp_2614 = (*(P996)rt_nil_check((*(P996)rt_nil_check(F->gd_947)).b)).a;
F->a_2615 = NULL;
F->a_2615 = F->args_948;
F->flo_2616 = NULL;
F->fhi_2617 = NULL;
while (((F->fp_2614 != NULL) && (F->a_2615 != NULL))) {
if ((((((*(P996)rt_nil_check(F->fp_2614)).a != NULL) && (rt_r_ichk((*(P996)rt_nil_check((*(P996)rt_nil_check(F->fp_2614)).a)).kind) == (((rt_int)80LL)))) && rt_str_eq((((P989)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->fp_2614)).a)).name))->all), (((P989)rt_nil_check((*(P996)rt_nil_check(F->p_2612)).name))->all))) && ((*(P996)rt_nil_check((*(P996)rt_nil_check(F->fp_2614)).a)).b == NULL))) {
F->st_2618 = NULL;
F->c_2619 = NULL;
F->base_2620 = NULL;
F->lo_2621 = NULL;
F->hi_2622 = NULL;
F->st_2618 = f_value_subtype_286(F->a_2615, &F->c_2619, &F->base_2620);
if (f_scalar_kind_182(F->st_2618)) {
F->lo_2621 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_lo_194(F->st_2618, F->c_2619); b_; }));
F->hi_2622 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_hi_197(F->st_2618, F->c_2619); b_; }));
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->st_2618)).kind) == (((rt_int)5LL))) && ((*(P998)rt_nil_check(F->c_2619)).slen != NULL))) {
F->lo_2621 = (*(P998)rt_nil_check(F->c_2619)).slen;
F->hi_2622 = (*(P998)rt_nil_check(F->c_2619)).slen;
}
if (((F->lo_2621 != NULL) && (F->flo_2616 != NULL))) {
if ((((rt_int)(((((P989)rt_nil_check(F->r_2613))->all)).len)) > ((rt_int)0LL))) {
F->r_2613 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_2613))->all), rt_str(" || ", 4)); b_; }));
}
F->r_2613 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_2613))->all), rt_str("(", 1)), (((P989)rt_nil_check(F->flo_2616))->all)), rt_str(") != (", 6)), (((P989)rt_nil_check(F->lo_2621))->all)), rt_str(") || (", 6)), (((P989)rt_nil_check(F->fhi_2617))->all)), rt_str(") != (", 6)), (((P989)rt_nil_check(F->hi_2622))->all)), rt_str(")", 1)); b_; }));
} else if ((F->lo_2621 != NULL)) {
F->flo_2616 = F->lo_2621;
F->fhi_2617 = F->hi_2622;
}
}
F->fp_2614 = (*(P996)rt_nil_check(F->fp_2614)).next;
F->a_2615 = (*(P996)rt_nil_check(F->a_2615)).next;
}
}
F->p_2612 = (*(P996)rt_nil_check(F->p_2612)).next;
}
F->result_ = (((P989)rt_nil_check(F->r_2613))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mailbox_low_954(rstr *name_950, P996 args_951, rt_int line_952, P1002 *t_953) {
  struct f_mailbox_low_954fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_950 = name_950;
F->args_951 = args_951;
F->line_952 = line_952;
F->t_953 = t_953;
F->t_953v = *F->t_953;
F->qv_2623 = NULL;
F->mv_2624 = NULL;
F->dv_2625 = NULL;
F->qt_2626 = NULL;
F->mt_2627 = NULL;
F->dt_2628 = NULL;
F->at_2629 = NULL;
F->c_2630 = NULL;
F->ro_2631 = RT_R_EUNDEF;
F->send_2632 = RT_R_EUNDEF;
F->send_2632 = rt_str_eq(rt_str_slice((*F->name_950), ((rt_int)1LL), ((rt_int)4LL)), rt_str("SEND", 4));
f_lvalue_751(F->args_951, &F->qv_2623, &F->qt_2626, &F->c_2630, &F->ro_2631);
f_lvalue_751((*(P996)rt_nil_check(F->args_951)).next, &F->mv_2624, &F->mt_2627, &F->c_2630, &F->ro_2631);
if ((rt_r_ichk((*(P1002)rt_nil_check(F->mt_2627)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_952, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_950), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_953v = g_ty_void_1081;
if (((rt_r_echk(F->send_2632) && (F->qt_2626 != g_ty_send_st_1088)) || ((!rt_r_echk(F->send_2632)) && (F->qt_2626 != g_ty_receive_st_1089)))) {
f_fail_23(F->line_952, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->name_950), rt_str(" needs a variable of subtype ", 29)), rt_str_slice((*F->name_950), ((rt_int)1LL), ((rt_int)4LL))), rt_str("_ST", 3)); b_; }));
}
if ((rt_str_eq((*F->name_950), rt_str("SEND_TEST", 9)) || rt_str_eq((*F->name_950), rt_str("RECEIVE_TEST", 12)))) {
F->t_953v = g_ty_bool_1077;
if (rt_r_echk(F->send_2632)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_send(", 14), (((P989)rt_nil_check(F->mv_2624))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_receive(", 17), (((P989)rt_nil_check(F->mv_2624))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_950), rt_str("SEND_COMPLETE", 13))) {
F->v_2633 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_951)).next)).next, (*(P1002)rt_nil_check(F->mt_2627)).elem, &F->at_2629));
f_check_type_228(F->at_2629, (*(P1002)rt_nil_check(F->mt_2627)).elem, F->line_952);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_230((*(P1002)rt_nil_check(F->mt_2627)).elem)), rt_str(" m_ = ", 6)), F->v_2633), rt_str("; if (!rt_cond_send(", 20)), (((P989)rt_nil_check(F->mv_2624))->all)), rt_str(", &m_)) rt_raise(RT_X_EMPTY_MAILBOX); })", 40));
goto ret_;
} else if (rt_str_eq((*F->name_950), rt_str("RECEIVE_COMPLETE", 16))) {
f_lvalue_751((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_951)).next)).next, &F->dv_2625, &F->dt_2628, &F->c_2630, &F->ro_2631);
f_check_type_228(F->dt_2628, (*(P1002)rt_nil_check(F->mt_2627)).elem, F->line_952);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (!rt_cond_receive(", 24), (((P989)rt_nil_check(F->mv_2624))->all)), rt_str(", &", 3)), (((P989)rt_nil_check(F->dv_2625))->all)), rt_str(")) rt_raise(RT_X_EMPTY_MAILBOX); })", 35));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P989)rt_nil_check(F->qv_2623))->all)), rt_str(" = 1)", 5));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_953) = F->t_953v;
  RT_FPOP();
  return F->result_;
}

static P1002 f_exponent_want_957(rstr *op_955, P1002 ta_956) {
  struct f_exponent_want_957fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_955 = op_955;
F->ta_956 = ta_956;
if (rt_str_eq((*F->op_955), rt_str("**", 2))) {
F->result_ = g_ty_int_1076;
goto ret_;
}
F->result_ = F->ta_956;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_ref_961(P996 e_958, int text_959, rt_int line_960) {
  struct f_file_ref_961fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_958 = e_958;
F->text_959 = text_959;
F->line_960 = line_960;
F->t_2634 = NULL;
F->f_2635 = rt_str_copy(f_gexpr_782(F->e_958, NULL, &F->t_2634));
if ((rt_r_ichk((*(P1002)rt_nil_check(F->t_2634)).kind) != (((rt_int)10LL)))) {
f_fail_23(F->line_960, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a file is required", 18); b_; }));
} else if ((F->text_959 && (!f_text_file_963(F->t_2634)))) {
f_fail_23(F->line_960, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a text file, whose components are characters, is required", 57); b_; }));
}
F->result_ = F->f_2635;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_text_file_963(P1002 t_962) {
  struct f_text_file_963fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_962 = t_962;
F->result_ = (((F->t_962 != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->t_962)).kind) == (((rt_int)10LL)))) && ((*(P1002)rt_nil_check(f_base_of_219(f_str_elem_214(F->t_962)))).kind == (((rt_int)4LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_conversion_968(P996 tt_964, P996 args_965, rt_int line_966, P1002 *t_967) {
  struct f_conversion_968fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_964 = tt_964;
F->args_965 = args_965;
F->line_966 = line_966;
F->t_967 = t_967;
F->t_967v = *F->t_967;
F->c_2636 = NULL;
F->at_2637 = NULL;
F->target_2638 = NULL;
F->target_2638 = f_resolve_subtype_264(F->tt_964, &F->c_2636);
F->a_2639 = rt_str_copy(f_gexpr_782(F->args_965, NULL, &F->at_2637));
F->t_967v = F->target_2638;
if (((rt_r_ichk((*(P1002)rt_nil_check(F->target_2638)).kind) == (((rt_int)5LL))) && f_same_217(f_str_elem_214(F->target_2638), g_ty_ascii_1079))) {
F->r_2640 = NULL;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->at_2637)).kind) == (((rt_int)1LL)))) {
F->r_2640 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2639), rt_str(")", 1)); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->at_2637)).kind) == (((rt_int)3LL)))) {
F->r_2640 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_str_of_float(", 18), F->a_2639), rt_str(", ", 2)), f_float_digits_970(F->args_965)), rt_str(")", 1)); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->at_2637)).kind) == (((rt_int)2LL)))) {
F->r_2640 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2639), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5)); b_; }));
} else if (((*(P1002)rt_nil_check(f_base_of_219(F->at_2637))).kind == (((rt_int)4LL)))) {
F->r_2640 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_enum_image(", 16), f_enum_names_972(f_base_of_219(F->at_2637))), rt_str(", ", 2)), F->a_2639), rt_str(")", 1)); b_; }));
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->at_2637)).kind) == (((rt_int)5LL)))) {
F->r_2640 = f_mk_3(&F->a_2639);
} else {
f_fail_23(F->line_966, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT converts BOOL, INT, FLOAT and ENUM values to strings", 57); b_; }));
}
if (((F->c_2636 != NULL) && ((*(P998)rt_nil_check(F->c_2636)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_str_pad(", 13), (((P989)rt_nil_check(F->r_2640))->all)), rt_str(", ", 2)), (((P989)rt_nil_check((*(P998)rt_nil_check(F->c_2636)).slen))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = (((P989)rt_nil_check(F->r_2640))->all);
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->at_2637)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P1002)rt_nil_check(F->target_2638)).kind) == (((rt_int)1LL)))) {
F->result_ = f_checked_209(F->target_2638, F->c_2636, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2639), rt_str(")", 1)); b_; }));
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->target_2638)).kind) == (((rt_int)3LL)))) {
F->result_ = f_checked_209(F->target_2638, F->c_2636, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_float_of_str(", 18), F->a_2639), rt_str(")", 1)); b_; }));
goto ret_;
} else if ((rt_r_ichk((*(P1002)rt_nil_check(F->target_2638)).kind) == (((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_bool_of_str(", 17), F->a_2639), rt_str(")", 1));
goto ret_;
} else if (((*(P1002)rt_nil_check(f_base_of_219(F->target_2638))).kind == (((rt_int)4LL)))) {
F->result_ = f_checked_209(F->target_2638, F->c_2636, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_enum_of_str(", 17), f_enum_names_972(f_base_of_219(F->target_2638))), rt_str(", ", 2)), f_itos_7(f_list_len_67((*(P1002)rt_nil_check(f_base_of_219(F->target_2638))).lits))), rt_str(", ", 2)), F->a_2639), rt_str(")", 1)); b_; }));
goto ret_;
}
} else if (((rt_r_ichk((*(P1002)rt_nil_check(F->target_2638)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P1002)rt_nil_check(F->at_2637)).kind) == (((rt_int)1LL))))) {
F->result_ = f_checked_209(F->target_2638, F->c_2636, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2639), rt_str("))", 2)); b_; }));
goto ret_;
} else if (f_same_217(F->target_2638, F->at_2637)) {
F->result_ = f_checked_209(F->target_2638, F->c_2636, &F->a_2639);
goto ret_;
}
f_fail_23(F->line_966, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT does not convert between these types", 41); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_967) = F->t_967v;
  RT_FPOP();
  return F->result_;
}

static rstr f_float_digits_970(P996 e_969) {
  struct f_float_digits_970fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_969 = e_969;
F->lv_2641 = NULL;
F->t_2642 = NULL;
F->c_2643 = NULL;
F->ro_2644 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P996)rt_nil_check(F->e_969)).kind) == (((rt_int)8LL))) || (rt_r_ichk((*(P996)rt_nil_check(F->e_969)).kind) == (((rt_int)17LL))))) {
F->result_ = f_float_digits_970((*(P996)rt_nil_check(F->e_969)).a);
goto ret_;
} else if ((rt_r_ichk((*(P996)rt_nil_check(F->e_969)).kind) == (((rt_int)2LL)))) {
F->n_2645 = RT_R_IUNDEF;
F->n_2645 = ((rt_int)0LL);
F->lead_2646 = RT_R_EUNDEF;
F->lead_2646 = 1;
{ rt_int lo2648 = ((rt_int)1LL), hi2649 = ((rt_int)(((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_969)).name))->all)).len));
for (rt_int it2650 = lo2648; it2650 <= hi2649; it2650++) {
F->i_2647 = it2650;
if (((rt_r_echk(rt_str_get((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_969)).name))->all), F->i_2647)) == 69) || (rt_r_echk(rt_str_get((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_969)).name))->all), F->i_2647)) == 101))) {
F->result_ = f_itos_7(rt_r_ichk(F->n_2645));
goto ret_;
} else if ((f_is_digit_11(rt_r_echk(rt_str_get((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_969)).name))->all), F->i_2647))) && (!(rt_r_echk(F->lead_2646) && (rt_r_echk(rt_str_get((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_969)).name))->all), F->i_2647)) == 48))))) {
F->n_2645 = rt_add(rt_r_ichk(F->n_2645), ((rt_int)1LL));
F->lead_2646 = 0;
} else if ((f_is_digit_11(rt_r_echk(rt_str_get((((P989)rt_nil_check((*(P996)rt_nil_check(F->e_969)).name))->all), F->i_2647))) && (!rt_r_echk(F->lead_2646)))) {
F->n_2645 = rt_add(rt_r_ichk(F->n_2645), ((rt_int)1LL));
}
}
}
F->result_ = f_itos_7(rt_r_ichk(F->n_2645));
goto ret_;
} else if (f_is_lvalue_745(F->e_969)) {
F->saved_2651 = NULL;
F->saved_2651 = g_code_1046;
g_code_1046 = f_new_buffer_24();
f_lvalue_751(F->e_969, &F->lv_2641, &F->t_2642, &F->c_2643, &F->ro_2644);
g_code_1046 = F->saved_2651;
if (((F->c_2643 != NULL) && ((*(P998)rt_nil_check(F->c_2643)).prec != NULL))) {
F->result_ = (((P989)rt_nil_check((*(P998)rt_nil_check(F->c_2643)).prec))->all);
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

static rstr f_enum_names_972(P1002 t_971) {
  struct f_enum_names_972fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_971 = t_971;
F->l_2652 = NULL;
F->l_2652 = (*(P1002)rt_nil_check(F->t_971)).lits;
F->r_2653 = NULL;
F->r_2653 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1002)rt_nil_check(F->t_971)).cname != NULL)) {
F->result_ = (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_971)).cname))->all);
goto ret_;
}
while ((F->l_2652 != NULL)) {
if ((((rt_int)(((((P989)rt_nil_check(F->r_2653))->all)).len)) > ((rt_int)0LL))) {
F->r_2653 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P989)rt_nil_check(F->r_2653))->all), rt_str(", ", 2)); b_; }));
}
F->r_2653 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->r_2653))->all), f_q_18()), (((P989)rt_nil_check((*(P996)rt_nil_check(F->l_2652)).name))->all)), f_q_18()); b_; }));
F->l_2652 = (*(P996)rt_nil_check(F->l_2652)).next;
}
(*(P1002)rt_nil_check(F->t_971)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("en_", 3); b_; })); b_; }));
f_put_27(g_out_globals_1042, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static const char *const ", 25), (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_971)).cname))->all)), rt_str("[] = {", 6)), (((P989)rt_nil_check(F->r_2653))->all)), rt_str("};", 2)); b_; }));
F->result_ = (((P989)rt_nil_check((*(P1002)rt_nil_check(F->t_971)).cname))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_explicit_rep_974(P996 e_973) {
  struct f_explicit_rep_974fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_973 = e_973;
F->bt_2654 = NULL;
if (((rt_r_ichk((*(P996)rt_nil_check(F->e_973)).kind) != (((rt_int)11LL))) && (!((rt_r_ichk((*(P996)rt_nil_check(F->e_973)).kind) == (((rt_int)10LL))) && f_is_lvalue_745(F->e_973))))) {
F->result_ = 0;
goto ret_;
}
F->bt_2654 = f_peek_type_798((*(P996)rt_nil_check(F->e_973)).a);
while ((((F->bt_2654 != NULL) && (rt_r_ichk((*(P1002)rt_nil_check(F->bt_2654)).kind) == (((rt_int)8LL)))) && ((*(P1002)rt_nil_check(F->bt_2654)).repn == NULL))) {
f_finish_ptr_460(F->bt_2654);
F->bt_2654 = (*(P1002)rt_nil_check(F->bt_2654)).target;
}
if (((F->bt_2654 != NULL) && ((*(P1002)rt_nil_check(F->bt_2654)).repn != NULL))) {
F->result_ = 1;
goto ret_;
}
F->result_ = f_explicit_rep_974((*(P996)rt_nil_check(F->e_973)).a);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_actual_bounds_978(P1002 ft_975, P1002 t_976, P998 c_977) {
  struct f_actual_bounds_978fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_975 = ft_975;
F->t_976 = t_976;
F->c_977 = c_977;
if ((!f_scalar_kind_182(F->ft_975))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_194(F->t_976, F->c_977)), rt_str(", ", 2)), f_sub_hi_197(F->t_976, F->c_977));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_985(rstr *name_979, P996 tt_980, P996 args_981, rt_int line_982, int is_stmt_983, P1002 *t_984) {
  struct f_builtin_985fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_979 = name_979;
F->tt_980 = tt_980;
F->args_981 = args_981;
F->line_982 = line_982;
F->is_stmt_983 = is_stmt_983;
F->t_984 = t_984;
F->t_984v = *F->t_984;
F->at_2655 = NULL;
F->n_2656 = RT_R_IUNDEF;
F->n_2656 = f_list_len_67(F->args_981);
F->t_984v = g_ty_void_1081;
if (((rt_str_eq((*F->name_979), rt_str("POS", 3)) || rt_str_eq((*F->name_979), rt_str("SUCC", 4))) || rt_str_eq((*F->name_979), rt_str("PRED", 4)))) {
F->a_2657 = rt_str_copy(f_gexpr_782(F->args_981, NULL, &F->at_2655));
if (rt_str_eq((*F->name_979), rt_str("POS", 3))) {
if (((*(P1002)rt_nil_check(f_base_of_219(F->at_2655))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_982, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_984v = g_ty_int_1076;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2657), rt_str(") + 1)", 6));
goto ret_;
}
F->t_984v = F->at_2655;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->at_2655)).kind) == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_979), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2657), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2657), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_979), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2657), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P1002)rt_nil_check(f_base_of_219(F->at_2655))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2657), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_67((*(P1002)rt_nil_check(f_base_of_219(F->at_2655))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("FLOOR", 5))) {
F->a_2658 = rt_str_copy(f_gexpr_782(F->args_981, g_ty_float_1078, &F->at_2655));
f_check_type_228(F->at_2655, g_ty_float_1078, F->line_982);
F->t_984v = g_ty_int_1076;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_floor(", 11), F->a_2658), rt_str(")", 1));
goto ret_;
} else if ((((rt_str_eq((*F->name_979), rt_str("ACTP", 4)) || rt_str_eq((*F->name_979), rt_str("RADIX", 5))) || rt_str_eq((*F->name_979), rt_str("EMIN", 4))) || rt_str_eq((*F->name_979), rt_str("EMAX", 4)))) {
F->a_2659 = rt_str_copy(f_gexpr_782(F->args_981, g_ty_float_1078, &F->at_2655));
f_check_type_228(F->at_2655, g_ty_float_1078, F->line_982);
F->t_984v = g_ty_int_1076;
if (rt_str_eq((*F->name_979), rt_str("ACTP", 4))) {
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("RADIX", 5))) {
F->result_ = rt_str("((rt_int)2)", 11);
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("EMIN", 4))) {
F->result_ = rt_str("((rt_int)-1021)", 15);
goto ret_;
}
F->result_ = rt_str("((rt_int)1024)", 14);
goto ret_;
} else if (((((rt_str_eq((*F->name_979), rt_str("SQRT", 4)) || rt_str_eq((*F->name_979), rt_str("SIN", 3))) || rt_str_eq((*F->name_979), rt_str("COS", 3))) || rt_str_eq((*F->name_979), rt_str("EXP", 3))) || rt_str_eq((*F->name_979), rt_str("LN", 2)))) {
F->a_2660 = rt_str_copy(f_gexpr_782(F->args_981, g_ty_float_1078, &F->at_2655));
F->t_984v = g_ty_float_1078;
if (rt_str_eq((*F->name_979), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2660), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_979)), rt_str("(", 1)), F->a_2660), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("IFLOAT", 6))) {
F->a_2661 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->args_981)).next, g_ty_int_1076, &F->at_2655));
F->t_984v = g_ty_float_1078;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2661), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("IFIX", 4))) {
F->a_2662 = rt_str_copy(f_gexpr_782(F->args_981, g_ty_float_1078, &F->at_2655));
F->t_984v = g_ty_int_1076;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2662), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("FORMAT", 6))) {
F->a_2663 = rt_str_copy(f_gexpr_782(F->args_981, g_ty_float_1078, &F->at_2655));
F->n1_2664 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->args_981)).next, g_ty_int_1076, &F->at_2655));
F->m1_2665 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_981)).next)).next, g_ty_int_1076, &F->at_2655));
F->t_984v = g_ty_string_1080;
if ((rt_r_ichk(F->n_2656) == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_format_e(", 14), F->a_2663), rt_str(", ", 2)), F->n1_2664), rt_str(", ", 2)), F->m1_2665), rt_str(", ", 2)), f_gexpr_782((*(P996)rt_nil_check((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_981)).next)).next)).next, g_ty_int_1076, &F->at_2655)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_format(", 12), F->a_2663), rt_str(", ", 2)), F->n1_2664), rt_str(", ", 2)), F->m1_2665), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("ABS", 3))) {
F->a_2666 = rt_str_copy(f_gexpr_782(F->args_981, NULL, &F->at_2655));
F->t_984v = F->at_2655;
if ((rt_r_ichk((*(P1002)rt_nil_check(F->at_2655)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2666), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2666), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("CNVT", 4))) {
if ((F->tt_980 == NULL)) {
f_fail_23(F->line_982, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
F->result_ = f_conversion_968(F->tt_980, F->args_981, F->line_982, &F->t_984v);
goto ret_;
} else if ((rt_str_eq((*F->name_979), rt_str("WRITELN", 7)) && (rt_r_ichk(F->n_2656) == ((rt_int)2LL)))) {
F->f_2667 = rt_str_copy(f_file_ref_961(F->args_981, 1, F->line_982));
F->a_2668 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->args_981)).next, g_ty_string_1080, &F->at_2655));
f_check_type_228(F->at_2655, g_ty_string_1080, F->line_982);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fwriteln(", 14), F->f_2667), rt_str(", ", 2)), F->a_2668), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("WRITELN", 7))) {
if ((rt_r_ichk(F->n_2656) == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->a_2669 = rt_str_copy(f_gexpr_782(F->args_981, g_ty_string_1080, &F->at_2655));
f_check_type_228(F->at_2655, g_ty_string_1080, F->line_982);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2669), rt_str(")", 1));
goto ret_;
}
} else if ((rt_str_eq((*F->name_979), rt_str("WRITE", 5)) || rt_str_eq((*F->name_979), rt_str("READ", 4)))) {
F->ft_2670 = NULL;
F->f_2671 = rt_str_copy(f_file_ref_961(F->args_981, 0, F->line_982));
F->ft_2670 = f_peek_type_798(F->args_981);
if (rt_str_eq((*F->name_979), rt_str("READ", 4))) {
F->lv_2672 = NULL;
F->lc_2673 = NULL;
F->ro_2674 = RT_R_EUNDEF;
f_lvalue_751((*(P996)rt_nil_check(F->args_981)).next, &F->lv_2672, &F->at_2655, &F->lc_2673, &F->ro_2674);
if (rt_r_echk(F->ro_2674)) {
f_fail_23(F->line_982, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READ needs a variable", 21); b_; }));
}
f_check_type_228(F->at_2655, f_str_elem_214(F->ft_2670), F->line_982);
if (f_text_file_963(F->ft_2670)) {
F->result_ = f_assign_code_402(&(((P989)rt_nil_check(F->lv_2672))->all), F->at_2655, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fgetc(", 11), F->f_2671), rt_str(")", 1)); b_; }), F->lc_2673);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fread(", 11), F->f_2671), rt_str(", &", 3)), (((P989)rt_nil_check(F->lv_2672))->all)), rt_str(")", 1));
goto ret_;
}
{
F->a_2675 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->args_981)).next, f_str_elem_214(F->ft_2670), &F->at_2655));
if ((f_text_file_963(F->ft_2670) && (rt_r_ichk((*(P1002)rt_nil_check(F->at_2655)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fputs(", 11), F->f_2671), rt_str(", ", 2)), F->a_2675), rt_str(")", 1));
goto ret_;
}
f_check_type_228(F->at_2655, f_str_elem_214(F->ft_2670), F->line_982);
if (f_text_file_963(F->ft_2670)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fputc(", 11), F->f_2671), rt_str(", ", 2)), F->a_2675), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_230(F->at_2655)), rt_str(" w_ = ", 6)), F->a_2675), rt_str("; rt_r_fwrite(", 14)), F->f_2671), rt_str(", &w_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_979), rt_str("READLN", 6)) && (rt_r_ichk(F->n_2656) == ((rt_int)2LL)))) {
F->lv_2676 = NULL;
F->lc_2677 = NULL;
F->ro_2678 = RT_R_EUNDEF;
F->f_2679 = rt_str_copy(f_file_ref_961(F->args_981, 1, F->line_982));
f_lvalue_751((*(P996)rt_nil_check(F->args_981)).next, &F->lv_2676, &F->at_2655, &F->lc_2677, &F->ro_2678);
f_check_type_228(F->at_2655, g_ty_string_1080, F->line_982);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_freadln(", 13), F->f_2679), rt_str(", &", 3)), (((P989)rt_nil_check(F->lv_2676))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("READLN", 6))) {
F->lv_2680 = NULL;
F->lc_2681 = NULL;
F->ro_2682 = RT_R_EUNDEF;
f_lvalue_751(F->args_981, &F->lv_2680, &F->at_2655, &F->lc_2681, &F->ro_2682);
f_check_type_228(F->at_2655, g_ty_string_1080, F->line_982);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_readln(&", 13), (((P989)rt_nil_check(F->lv_2680))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_979), rt_str("SIZELN", 6)) && (rt_r_ichk(F->n_2656) == ((rt_int)1LL)))) {
F->t_984v = g_ty_int_1076;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fsizeln(", 13), f_file_ref_961(F->args_981, 1, F->line_982)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("SIZELN", 6))) {
F->t_984v = g_ty_int_1076;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if ((rt_str_eq((*F->name_979), rt_str("EOF", 3)) && (rt_r_ichk(F->n_2656) == ((rt_int)1LL)))) {
F->t_984v = g_ty_bool_1077;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_feof(", 10), f_file_ref_961(F->args_981, 0, F->line_982)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("EOF", 3))) {
F->t_984v = g_ty_bool_1077;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("SYS_IN", 6))) {
F->t_984v = g_ty_text_file_1090;
F->result_ = rt_str("rt_r_sys_in()", 13);
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("SYS_OUT", 7))) {
F->t_984v = g_ty_text_file_1090;
F->result_ = rt_str("rt_r_sys_out()", 14);
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("OPEN", 4))) {
F->f_2683 = rt_str_copy(f_file_ref_961(F->args_981, 0, F->line_982));
F->nm_2684 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->args_981)).next, g_ty_string_1080, &F->at_2655));
F->st_2685 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_981)).next)).next, g_file_state_type_1091, &F->at_2655));
f_check_type_228(F->at_2655, g_file_state_type_1091, F->line_982);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_open(", 10), F->f_2683), rt_str(", ", 2)), F->nm_2684), rt_str(", ", 2)), F->st_2685), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("CLOSE", 5))) {
F->f_2686 = rt_str_copy(f_file_ref_961(F->args_981, 0, F->line_982));
F->d_2687 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->args_981)).next, g_file_disp_type_1092, &F->at_2655));
f_check_type_228(F->at_2655, g_file_disp_type_1092, F->line_982);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_close(", 11), F->f_2686), rt_str(", ", 2)), F->d_2687), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_979), rt_str("SIZE", 4)) || rt_str_eq((*F->name_979), rt_str("POSITION", 8)))) {
F->t_984v = g_ty_int_1076;
if (rt_str_eq((*F->name_979), rt_str("SIZE", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fsize(", 11), f_file_ref_961(F->args_981, 0, F->line_982)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fpos(", 10), f_file_ref_961(F->args_981, 0, F->line_982)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("SET_POSITION", 12))) {
F->f_2688 = rt_str_copy(f_file_ref_961(F->args_981, 0, F->line_982));
F->v_2689 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->args_981)).next, g_ty_int_1076, &F->at_2655));
f_check_type_228(F->at_2655, g_ty_int_1076, F->line_982);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fsetpos(", 13), F->f_2688), rt_str(", ", 2)), F->v_2689), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("FILE_RENAME", 11))) {
F->a_2690 = rt_str_copy(f_gexpr_782(F->args_981, g_ty_string_1080, &F->at_2655));
F->b_2691 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->args_981)).next, g_ty_string_1080, &F->at_2655));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_rename(", 12), F->a_2690), rt_str(", ", 2)), F->b_2691), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_979), rt_str("SEND", 4)) || rt_str_eq((*F->name_979), rt_str("RECEIVE", 7)))) {
F->lv_2692 = NULL;
F->dv_2693 = NULL;
F->lc_2694 = NULL;
F->ro_2695 = RT_R_EUNDEF;
F->mt_2696 = NULL;
F->dt_2697 = NULL;
f_lvalue_751(F->args_981, &F->lv_2692, &F->mt_2696, &F->lc_2694, &F->ro_2695);
if ((rt_r_ichk((*(P1002)rt_nil_check(F->mt_2696)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_982, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_979), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_979), rt_str("RECEIVE", 7))) {
f_lvalue_751((*(P996)rt_nil_check(F->args_981)).next, &F->dv_2693, &F->dt_2697, &F->lc_2694, &F->ro_2695);
f_check_type_228(F->dt_2697, (*(P1002)rt_nil_check(F->mt_2696)).elem, F->line_982);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P989)rt_nil_check(F->lv_2692))->all)), rt_str(", &", 3)), (((P989)rt_nil_check(F->dv_2693))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2698 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->args_981)).next, (*(P1002)rt_nil_check(F->mt_2696)).elem, &F->at_2655));
f_check_type_228(F->at_2655, (*(P1002)rt_nil_check(F->mt_2696)).elem, F->line_982);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_230((*(P1002)rt_nil_check(F->mt_2696)).elem)), rt_str(" m_ = ", 6)), F->v_2698), rt_str("; rt_send(", 10)), (((P989)rt_nil_check(F->lv_2692))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_979), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_979), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2699 = NULL;
F->lc_2700 = NULL;
F->ro_2701 = RT_R_EUNDEF;
F->mt_2702 = NULL;
f_lvalue_751(F->args_981, &F->lv_2699, &F->mt_2702, &F->lc_2700, &F->ro_2701);
if ((rt_r_ichk((*(P1002)rt_nil_check(F->mt_2702)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_982, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_979), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_984v = g_ty_int_1076;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_979))), rt_str("(", 1)), (((P989)rt_nil_check(F->lv_2699))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_979), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_979), rt_str("COND_RECEIVE", 12)))) {
F->lv_2703 = NULL;
F->dv_2704 = NULL;
F->bv_2705 = NULL;
F->lc_2706 = NULL;
F->ro_2707 = RT_R_EUNDEF;
F->mt_2708 = NULL;
F->dt_2709 = NULL;
F->bt_2710 = NULL;
f_lvalue_751(F->args_981, &F->lv_2703, &F->mt_2708, &F->lc_2706, &F->ro_2707);
if ((rt_r_ichk((*(P1002)rt_nil_check(F->mt_2708)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_982, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_979), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_751((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_981)).next)).next, &F->bv_2705, &F->bt_2710, &F->lc_2706, &F->ro_2707);
f_check_type_228(F->bt_2710, g_ty_bool_1077, F->line_982);
if (rt_str_eq((*F->name_979), rt_str("COND_RECEIVE", 12))) {
f_lvalue_751((*(P996)rt_nil_check(F->args_981)).next, &F->dv_2704, &F->dt_2709, &F->lc_2706, &F->ro_2707);
f_check_type_228(F->dt_2709, (*(P1002)rt_nil_check(F->mt_2708)).elem, F->line_982);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->bv_2705))->all), rt_str(" = rt_cond_receive(", 19)), (((P989)rt_nil_check(F->lv_2703))->all)), rt_str(", &", 3)), (((P989)rt_nil_check(F->dv_2704))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2711 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->args_981)).next, (*(P1002)rt_nil_check(F->mt_2708)).elem, &F->at_2655));
f_check_type_228(F->at_2655, (*(P1002)rt_nil_check(F->mt_2708)).elem, F->line_982);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_230((*(P1002)rt_nil_check(F->mt_2708)).elem)), rt_str(" m_ = ", 6)), F->v_2711), rt_str("; ", 2)), (((P989)rt_nil_check(F->bv_2705))->all)), rt_str(" = rt_cond_send(", 16)), (((P989)rt_nil_check(F->lv_2703))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_979), rt_str("PRIORITY", 8))) {
F->t_984v = g_ty_int_1076;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_633(F->args_981)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("SET_PRIORITY", 12))) {
F->v_2712 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->args_981)).next, g_ty_int_1076, &F->at_2655));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_633(F->args_981)), rt_str(", ", 2)), F->v_2712), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_633(F->args_981)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("ACTIVE", 6))) {
F->t_984v = g_ty_bool_1077;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_633(F->args_981)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("DELAY", 5))) {
F->v_2713 = rt_str_copy(f_gexpr_782(F->args_981, g_ty_int_1076, &F->at_2655));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2713), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_979), rt_str("DELAY_UNTIL", 11)) && (rt_r_ichk(F->n_2656) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_delay_act(", 15), f_act_delay_args_946(F->args_981)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("DELAY_UNTIL", 11))) {
F->v_2714 = rt_str_copy(f_gexpr_782(F->args_981, g_ty_int_1076, &F->at_2655));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2714), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_633(F->args_981)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_979), rt_str("TIME", 4)) && (rt_r_ichk(F->n_2656) == ((rt_int)1LL)))) {
F->t_984v = g_ty_int_1076;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_act_time(", 14), f_act_ref_633(F->args_981)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("TIME", 4))) {
F->t_984v = g_ty_int_1076;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_979), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_979), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_979), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_979), rt_str("HOURS", 5)))) {
F->t_984v = g_ty_int_1076;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_979));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("HALT", 4))) {
F->a_2715 = rt_str_copy(f_gexpr_782(F->args_981, g_ty_int_1076, &F->at_2655));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2715), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_979), rt_str("ME", 2)) && (F->tt_980 != NULL))) {
F->result_ = f_me_high_918(F->tt_980, F->line_982, &F->t_984v);
goto ret_;
} else if ((rt_str_eq((*F->name_979), rt_str("WAITING", 7)) || rt_str_eq((*F->name_979), rt_str("SUSPENDED", 9)))) {
F->t_984v = g_ty_bool_1077;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_979))), rt_str("(", 1)), f_act_ref_633(F->args_981)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_979), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_979), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_979), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_979), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_979), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_979), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_979))), rt_str("(", 1)), f_act_ref_633(F->args_981)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("TASK_START", 10))) {
if ((rt_r_ichk(F->n_2656) != ((rt_int)2LL))) {
f_fail_23(F->line_982, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_633(F->args_981)), rt_str(", ", 2)), f_act_ref_633((*(P996)rt_nil_check(F->args_981)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_979), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_979), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_979), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_979), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_979), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_979), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((rt_r_ichk(F->n_2656) != ((rt_int)0LL))) {
f_fail_23(F->line_982, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_979), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_979))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_923(F->args_981, &(*F->name_979))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_979), rt_str("UNLOCK", 6)) && (f_peek_type_798(F->args_981) != g_ty_latch_1085))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_unlock(", 12), f_lock_ref_923(F->args_981, &(*F->name_979))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_923(F->args_981, &(*F->name_979))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("COND_LOCK", 9))) {
F->bv_2716 = NULL;
F->bc_2717 = NULL;
F->ro_2718 = RT_R_EUNDEF;
F->bt_2719 = NULL;
F->l_2720 = rt_str_copy(f_lock_ref_923(F->args_981, &(*F->name_979)));
f_lvalue_751((*(P996)rt_nil_check(F->args_981)).next, &F->bv_2716, &F->bt_2719, &F->bc_2717, &F->ro_2718);
f_check_type_228(F->bt_2719, g_ty_bool_1077, F->line_982);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P989)rt_nil_check(F->bv_2716))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2720), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("EXCESS_LOCKS", 12))) {
F->t_984v = g_ty_int_1076;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_923(F->args_981, &(*F->name_979))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("OWNER", 5))) {
F->t_984v = g_ty_act_1086;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_owner(", 11), f_lock_ref_923(F->args_981, &(*F->name_979))), rt_str(")", 1));
goto ret_;
} else if (((((((((rt_str_eq((*F->name_979), rt_str("SEND_REQUEST", 12)) || rt_str_eq((*F->name_979), rt_str("SEND_TEST", 9))) || rt_str_eq((*F->name_979), rt_str("SEND_COMPLETE", 13))) || rt_str_eq((*F->name_979), rt_str("SEND_REVOKE", 11))) || rt_str_eq((*F->name_979), rt_str("RECEIVE_REQUEST", 15))) || rt_str_eq((*F->name_979), rt_str("RECEIVE_TEST", 12))) || rt_str_eq((*F->name_979), rt_str("RECEIVE_COMPLETE", 16))) || rt_str_eq((*F->name_979), rt_str("RECEIVE_REVOKE", 14))) && (rt_r_ichk(F->n_2656) == ((rt_int)3LL)))) {
F->result_ = f_mailbox_low_954(&(*F->name_979), F->args_981, F->line_982, &F->t_984v);
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("FREE", 4))) {
F->pv_2721 = NULL;
F->pc_2722 = NULL;
F->ro_2723 = RT_R_EUNDEF;
F->pt_2724 = NULL;
f_lvalue_751(F->args_981, &F->pv_2721, &F->pt_2724, &F->pc_2722, &F->ro_2723);
if (((rt_r_ichk((*(P1002)rt_nil_check(F->pt_2724)).kind) != (((rt_int)8LL))) || rt_r_echk(F->ro_2723))) {
f_fail_23(F->line_982, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_1057 = 1;
f_finish_ptr_460(F->pt_2724);
if ((f_suppressed_494(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; })) || f_unchecked_free_333(F->pt_2724))) {
if (f_needs_fin_342((*(P1002)rt_nil_check(F->pt_2724)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P989)rt_nil_check(F->pv_2721))->all)), rt_str(") { ", 4)), f_fin_code_345(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_740(F->pt_2724, &(((P989)rt_nil_check(F->pv_2721))->all)); b_; }), (*(P1002)rt_nil_check(F->pt_2724)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P989)rt_nil_check(F->pv_2721))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P989)rt_nil_check(F->pv_2721))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_342((*(P1002)rt_nil_check(F->pt_2724)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P989)rt_nil_check(F->pv_2721))->all)), rt_str("); if (", 7)), (((P989)rt_nil_check(F->pv_2721))->all)), rt_str(") { ", 4)), f_fin_code_345(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_740(F->pt_2724, &(((P989)rt_nil_check(F->pv_2721))->all)); b_; }), (*(P1002)rt_nil_check(F->pt_2724)).target)), rt_str(" } rt_free((void **)&", 21)), (((P989)rt_nil_check(F->pv_2721))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P989)rt_nil_check(F->pv_2721))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_979), rt_str("LOW_IO", 6))) {
F->dev_2725 = rt_str_copy(f_gexpr_782(F->args_981, g_ty_int_1076, &F->at_2655));
F->cmd_2726 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check(F->args_981)).next, g_ty_int_1076, &F->at_2655));
if ((rt_r_ichk(F->n_2656) == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_r_low_io(", 30), F->dev_2725), rt_str(", ", 2)), F->cmd_2726), rt_str(", &d_); })", 10));
goto ret_;
} else if ((!f_is_lvalue_745((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_981)).next)).next))) {
F->v_2727 = rt_str_copy(f_gexpr_782((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_981)).next)).next, g_ty_int_1076, &F->at_2655));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = ", 15), F->v_2727), rt_str("; rt_r_low_io(", 14)), F->dev_2725), rt_str(", ", 2)), F->cmd_2726), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2728 = NULL;
F->dc_2729 = NULL;
F->ro_2730 = RT_R_EUNDEF;
F->dt_2731 = NULL;
f_lvalue_751((*(P996)rt_nil_check((*(P996)rt_nil_check(F->args_981)).next)).next, &F->dv_2728, &F->dt_2731, &F->dc_2729, &F->ro_2730);
f_check_type_228(F->dt_2731, g_ty_int_1076, F->line_982);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_low_io(", 12), F->dev_2725), rt_str(", ", 2)), F->cmd_2726), rt_str(", &", 3)), (((P989)rt_nil_check(F->dv_2728))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_982, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_979), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_984) = F->t_984v;
  RT_FPOP();
  return F->result_;
}

static void f_translate_987(P996 units_986) {
  struct f_translate_987fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_986 = units_986;
F->u_2732 = NULL;
F->u_2732 = F->units_986;
while ((F->u_2732 != NULL)) {
if (((*(P996)rt_nil_check(F->u_2732)).next == NULL)) {
{ R1024 *cell2733 = rt_alloc(sizeof(R1024));
(*cell2733).d = NULL;
(*cell2733).next = NULL;
g_caps_1051 = cell2733;
}
(*(P1023)rt_nil_check(g_caps_1051)).d = F->u_2732;
(*(P1023)rt_nil_check(g_caps_1051)).depth = rt_r_ichk(g_depth_1035);
f_declare_labels_568((*(P996)rt_nil_check(F->u_2732)).c);
f_declare_body_421((*(P996)rt_nil_check(F->u_2732)).c);
f_capsule_body_575((*(P996)rt_nil_check(F->u_2732)).c);
f_await_tasks_564((*(P996)rt_nil_check(F->u_2732)).c);
{
F->l_2734 = NULL;
F->l_2734 = F->units_986;
while ((F->l_2734 != F->u_2732)) {
{
F->w_2735 = rt_str_copy(f_waits_of_560(F->l_2734));
if ((((rt_int)((F->w_2735).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2735);
}
}
F->l_2734 = (*(P996)rt_nil_check(F->l_2734)).next;
}
}
f_close_fins_551(NULL);
if (rt_r_echk(g_uses_findyn_1059)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_431(F->u_2732);
}
F->u_2732 = (*(P996)rt_nil_check(F->u_2732)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_988(void) {
  struct f_print_program_988fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_417();
if (rt_r_echk(g_uses_free_1057)) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_1039);
f_print_buffer_31(g_out_frames_1055);
f_print_buffer_31(g_out_helpers_1040);
f_print_buffer_31(g_out_protos_1041);
f_print_buffer_31(g_out_globals_1042);
f_print_buffer_31(g_out_funcs_1043);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_1056);
f_print_buffer_31(g_out_excs_1045);
f_print_buffer_31(g_out_init_1044);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R1026(R1026 *d, R1026 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R1026 cp_R1026(R1026 s) {
  R1026 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R1026(R1026 a, R1026 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R1024(R1024 *d, R1024 s) {
  d->d = s.d;
  d->next = s.next;
  d->depth = s.depth;
}
static R1024 cp_R1024(R1024 s) {
  R1024 d = s;
  d.d = s.d;
  d.next = s.next;
  d.depth = s.depth;
  return d;
}
static int eq_R1024(R1024 a, R1024 b) {
  return 1 && (a.d == b.d) && (a.next == b.next) && (a.depth == b.depth);
}
static void as_R1022(R1022 *d, R1022 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R1022 cp_R1022(R1022 s) {
  R1022 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R1022(R1022 a, R1022 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R1020(R1020 *d, R1020 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R1020 cp_R1020(R1020 s) {
  R1020 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R1020(R1020 a, R1020 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R1018(R1018 *d, R1018 s) {
  d->t = s.t;
  d->next = s.next;
}
static R1018 cp_R1018(R1018 s) {
  R1018 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R1018(R1018 a, R1018 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R1016(R1016 *d, R1016 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
}
static R1016 cp_R1016(R1016 s) {
  R1016 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  return d;
}
static int eq_R1016(R1016 a, R1016 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t);
}
static void as_R1014(R1014 *d, R1014 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R1014 cp_R1014(R1014 s) {
  R1014 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R1014(R1014 a, R1014 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A1012(A1012 *d, A1012 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A1012 cp_A1012(A1012 s) {
  A1012 d = s; d.p = rt_alloc(sizeof(P1006) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A1012(A1012 a, A1012 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R1009(R1009 *d, R1009 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R1009 cp_R1009(R1009 s) {
  R1009 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R1009(R1009 a, R1009 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R1007(R1007 *d, R1007 s) {
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
  d->loc = s.loc;
  d->reqs_sym = s.reqs_sym;
  d->decl_line = s.decl_line;
}
static R1007 cp_R1007(R1007 s) {
  R1007 d = s;
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
  d.loc = s.loc;
  d.reqs_sym = s.reqs_sym;
  d.decl_line = s.decl_line;
  return d;
}
static int eq_R1007(R1007 a, R1007 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home) && (a.capn == b.capn) && (a.tbinds == b.tbinds) && (a.loc == b.loc) && (a.reqs_sym == b.reqs_sym) && (a.decl_line == b.decl_line);
}
static void as_R1005(R1005 *d, R1005 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R1005 cp_R1005(R1005 s) {
  R1005 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R1005(R1005 a, R1005 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R1003(R1003 *d, R1003 s) {
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
  d->repn = s.repn;
}
static R1003 cp_R1003(R1003 s) {
  R1003 d = s;
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
  d.repn = s.repn;
  return d;
}
static int eq_R1003(R1003 a, R1003 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs) && (a.assignp == b.assignp) && (a.eqp == b.eqp) && (a.ltp == b.ltp) && (a.repn == b.repn);
}
static void as_R1001(R1001 *d, R1001 s) {
  d->s = s.s;
  d->next = s.next;
}
static R1001 cp_R1001(R1001 s) {
  R1001 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R1001(R1001 a, R1001 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R999(R999 *d, R999 s) {
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
static R999 cp_R999(R999 s) {
  R999 d = s;
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
static int eq_R999(R999 a, R999 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R997(R997 *d, R997 s) {
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
static R997 cp_R997(R997 s) {
  R997 d = s;
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
static int eq_R997(R997 a, R997 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A995(A995 *d, A995 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A995 cp_A995(A995 s) {
  A995 d = s; d.p = rt_alloc(sizeof(P991) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A995(A995 a, A995 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R992(R992 *d, R992 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R992 cp_R992(R992 s) {
  R992 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R992(R992 a, R992 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_1027);
  RT_ROOT(g_ntoks_1028);
  RT_ROOT(g_tpos_1029);
  RT_ROOT(g_src_line_1030);
  RT_ROOT(g_pending_prag_1031);
  RT_ROOT(g_table_1032);
  RT_ROOT(g_genv_1033);
  RT_ROOT(g_all_insts_1034);
  RT_ROOT(g_depth_1035);
  RT_ROOT(g_scope_stack_1036);
  RT_ROOT(g_all_types_1037);
  RT_ROOT(g_serial_1038);
  RT_ROOT(g_out_types_1039);
  RT_ROOT(g_out_helpers_1040);
  RT_ROOT(g_out_protos_1041);
  RT_ROOT(g_out_globals_1042);
  RT_ROOT(g_out_funcs_1043);
  RT_ROOT(g_out_init_1044);
  RT_ROOT(g_out_excs_1045);
  RT_ROOT(g_code_1046);
  RT_ROOT(g_fields_buf_1047);
  RT_ROOT(g_in_func_1048);
  RT_ROOT(g_cur_level_1049);
  RT_ROOT(g_fctx_1050);
  RT_ROOT(g_caps_1051);
  RT_ROOT(g_cap_waits_1052);
  RT_ROOT(g_psub_1053);
  RT_ROOT(g_st_field_1054);
  RT_ROOT(g_out_frames_1055);
  RT_ROOT(g_out_roots_1056);
  RT_ROOT(g_uses_free_1057);
  RT_ROOT(g_fins_1058);
  RT_ROOT(g_uses_findyn_1059);
  RT_ROOT(g_func_sym_1060);
  RT_ROOT(g_func_rc_1061);
  RT_ROOT(g_cap_ret_1062);
  RT_ROOT(g_cap_rflag_1063);
  RT_ROOT(g_ret_frames_1064);
  RT_ROOT(g_gdepth_1065);
  RT_ROOT(g_suppress_1066);
  RT_ROOT(g_cons_ctx_1067);
  RT_ROOT(g_mark_uninit_1068);
  RT_ROOT(g_exits_1069);
  RT_ROOT(g_gotos_1070);
  RT_ROOT(g_frames_1071);
  RT_ROOT(g_handlers_1072);
  RT_ROOT(g_cleanups_1073);
  RT_ROOT(g_trial_1074);
  RT_ROOT(g_mcopies_1075);
  RT_ROOT(g_ty_int_1076);
  RT_ROOT(g_ty_bool_1077);
  RT_ROOT(g_ty_float_1078);
  RT_ROOT(g_ty_ascii_1079);
  RT_ROOT(g_ty_string_1080);
  RT_ROOT(g_ty_void_1081);
  RT_ROOT(g_ty_file_1082);
  RT_ROOT(g_ty_nil_1083);
  RT_ROOT(g_ty_lock_1084);
  RT_ROOT(g_ty_latch_1085);
  RT_ROOT(g_ty_act_1086);
  RT_ROOT(g_file_mode_type_1087);
  RT_ROOT(g_ty_send_st_1088);
  RT_ROOT(g_ty_receive_st_1089);
  RT_ROOT(g_ty_text_file_1090);
  RT_ROOT(g_file_state_type_1091);
  RT_ROOT(g_file_disp_type_1092);
  RT_ROOT(g_file_access_type_1093);
  RT_ROOT(g_no_cons_1094);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_1027 = NULL;
g_ntoks_1028 = RT_R_IUNDEF;
g_ntoks_1028 = ((rt_int)0LL);
g_tpos_1029 = RT_R_IUNDEF;
g_tpos_1029 = ((rt_int)1LL);
g_src_line_1030 = RT_R_IUNDEF;
g_src_line_1030 = ((rt_int)0LL);
g_pending_prag_1031 = NULL;
g_table_1032 = NULL;
g_genv_1033 = NULL;
g_all_insts_1034 = NULL;
g_depth_1035 = RT_R_IUNDEF;
g_depth_1035 = ((rt_int)0LL);
g_scope_stack_1036 = NULL;
g_all_types_1037 = NULL;
g_serial_1038 = RT_R_IUNDEF;
g_serial_1038 = ((rt_int)0LL);
g_out_types_1039 = NULL;
g_out_helpers_1040 = NULL;
g_out_protos_1041 = NULL;
g_out_globals_1042 = NULL;
g_out_funcs_1043 = NULL;
g_out_init_1044 = NULL;
g_out_excs_1045 = NULL;
g_code_1046 = NULL;
g_fields_buf_1047 = NULL;
g_in_func_1048 = RT_R_EUNDEF;
g_in_func_1048 = 0;
g_cur_level_1049 = RT_R_IUNDEF;
g_cur_level_1049 = ((rt_int)0LL);
g_fctx_1050 = NULL;
g_caps_1051 = NULL;
g_cap_waits_1052 = NULL;
g_psub_1053 = NULL;
g_st_field_1054 = NULL;
g_out_frames_1055 = NULL;
g_out_roots_1056 = NULL;
g_uses_free_1057 = RT_R_EUNDEF;
g_uses_free_1057 = 0;
g_fins_1058 = NULL;
g_uses_findyn_1059 = RT_R_EUNDEF;
g_uses_findyn_1059 = 0;
g_func_sym_1060 = NULL;
g_func_rc_1061 = NULL;
g_cap_ret_1062 = NULL;
g_cap_rflag_1063 = NULL;
g_ret_frames_1064 = RT_R_IUNDEF;
g_ret_frames_1064 = ((rt_int)0LL);
g_gdepth_1065 = RT_R_IUNDEF;
g_gdepth_1065 = ((rt_int)0LL);
g_suppress_1066 = NULL;
g_cons_ctx_1067 = NULL;
g_mark_uninit_1068 = RT_R_EUNDEF;
g_mark_uninit_1068 = 0;
g_exits_1069 = NULL;
g_gotos_1070 = NULL;
g_frames_1071 = RT_R_IUNDEF;
g_frames_1071 = ((rt_int)0LL);
g_handlers_1072 = NULL;
g_cleanups_1073 = NULL;
g_trial_1074 = RT_R_IUNDEF;
g_trial_1074 = ((rt_int)0LL);
g_mcopies_1075 = NULL;
g_ty_int_1076 = NULL;
g_ty_bool_1077 = NULL;
g_ty_float_1078 = NULL;
g_ty_ascii_1079 = NULL;
g_ty_string_1080 = NULL;
g_ty_void_1081 = NULL;
g_ty_file_1082 = NULL;
g_ty_nil_1083 = NULL;
g_ty_lock_1084 = NULL;
g_ty_latch_1085 = NULL;
g_ty_act_1086 = NULL;
g_file_mode_type_1087 = NULL;
g_ty_send_st_1088 = NULL;
g_ty_receive_st_1089 = NULL;
g_ty_text_file_1090 = NULL;
g_file_state_type_1091 = NULL;
g_file_disp_type_1092 = NULL;
g_file_access_type_1093 = NULL;
g_no_cons_1094 = NULL;
{ P993 cell2736 = rt_alloc(sizeof *cell2736);
rt_int pv2737 = ((rt_int)1000000LL);
cell2736->p_n = pv2737;
cell2736->all.lo = ((rt_int)1LL); cell2736->all.hi = pv2737;
cell2736->all.lo2 = cell2736->all.hi2 = 1;
cell2736->all.p = rt_alloc(sizeof(P991) * (size_t)(RT_CNT(cell2736->all)) + 1);
for (rt_int i2738 = 0; i2738 < (RT_CNT(cell2736->all)); i2738++) {
cell2736->all.p[i2738] = NULL;
}
g_toks_1027 = cell2736;
}
{ P1010 cell2739 = rt_alloc(sizeof *cell2739);
rt_int pv2740 = (((rt_int)4093LL));
cell2739->p_n = pv2740;
cell2739->all.lo = ((rt_int)0LL); cell2739->all.hi = pv2740;
cell2739->all.lo2 = cell2739->all.hi2 = 1;
cell2739->all.p = rt_alloc(sizeof(P1006) * (size_t)(RT_CNT(cell2739->all)) + 1);
for (rt_int i2741 = 0; i2741 < (RT_CNT(cell2739->all)); i2741++) {
cell2739->all.p[i2741] = NULL;
}
g_table_1032 = cell2739;
}
g_out_types_1039 = f_new_buffer_24();
g_out_helpers_1040 = f_new_buffer_24();
g_out_protos_1041 = f_new_buffer_24();
g_out_globals_1042 = f_new_buffer_24();
g_out_funcs_1043 = f_new_buffer_24();
g_out_init_1044 = f_new_buffer_24();
g_out_excs_1045 = f_new_buffer_24();
g_out_frames_1055 = f_new_buffer_24();
g_out_roots_1056 = f_new_buffer_24();
g_code_1046 = g_out_init_1044;
g_no_cons_1094 = f_new_cons_180();
g_ty_int_1076 = f_new_typ_179((((rt_int)1LL)));
g_ty_bool_1077 = f_new_typ_179((((rt_int)2LL)));
g_ty_float_1078 = f_new_typ_179((((rt_int)3LL)));
g_ty_string_1080 = f_new_typ_179((((rt_int)5LL)));
g_ty_void_1081 = f_new_typ_179((((rt_int)9LL)));
g_ty_file_1082 = f_new_typ_179((((rt_int)10LL)));
g_ty_nil_1083 = f_new_typ_179((((rt_int)11LL)));
g_ty_lock_1084 = f_new_typ_179((((rt_int)13LL)));
g_ty_latch_1085 = f_new_typ_179((((rt_int)13LL)));
g_ty_act_1086 = f_new_typ_179((((rt_int)14LL)));
{ rt_frame xf2742;
if (RT_TRY(xf2742)) {
f_init_ascii_255();
f_read_source_58();
f_translate_987(f_program_155());
f_print_program_988();
RT_POP(xf2742);
} else {
RT_POP(xf2742);
int x2743 = rt_xcur;
if (0 || x2743 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2743);
}
}
}
  rt_main_done();
  return 0;
}
