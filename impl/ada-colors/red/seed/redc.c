#include "paleo.h"
#include <math.h>
typedef struct Pc1038 *P1037;
typedef struct R1040 R1040;
typedef struct R1040 *P1039;
struct R1040 {  rt_int kind; rt_int line; rt_int ival; P1037 s; P1037 prags;  };
typedef struct Pc1042 *P1041;
typedef struct A1043 A1043;
struct A1043 { rt_int lo, hi, lo2, hi2; P1039 *p; };
typedef struct R1045 R1045;
typedef struct R1045 *P1044;
struct R1045 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P1037 name; P1037 tag; P1037 prags; P1044 labels; rt_int eline; P1044 a; P1044 b; P1044 c; P1044 d; P1044 e; P1044 next;  };
typedef struct R1047 R1047;
typedef struct R1047 *P1046;
typedef struct R1049 R1049;
typedef struct R1049 *P1048;
struct R1049 {  P1037 s; P1048 next;  };
struct R1047 {  P1037 lo; P1037 hi; P1037 lo2; P1037 hi2; P1037 slen; rt_int mlo; rt_int mhi; int hasm; P1044 args; int dyn; rt_int lvl; P1037 prec; P1048 bnds;  };
typedef struct R1051 R1051;
typedef struct R1051 *P1050;
typedef struct R1053 R1053;
typedef struct R1053 *P1052;
struct R1053 {  P1037 name; P1050 t; P1046 c; P1044 st; P1052 next;  };
typedef struct R1055 R1055;
typedef struct R1055 *P1054;
typedef struct R1057 R1057;
typedef struct R1057 *P1056;
struct R1057 {  P1037 name; rt_int mode; P1050 t; P1046 c; P1037 cfield; P1056 next;  };
typedef struct Pc1059 *P1058;
typedef struct A1060 A1060;
struct A1060 { rt_int lo, hi, lo2, hi2; P1054 *p; };
typedef struct R1062 R1062;
typedef struct R1062 *P1061;
struct R1062 {  rt_int depth; P1044 imps; int all_imp; P1061 next;  };
typedef struct R1064 R1064;
typedef struct R1064 *P1063;
struct R1064 {  rt_int kind; rt_int i; P1037 s; P1050 t; double f;  };
struct R1055 {  rt_int kind; P1037 name; P1050 t; P1046 c; P1037 access; P1037 cname; int ro_flag; rt_int mvalue; int hasmv; P1044 st; P1044 decl; P1056 params; P1050 result; rt_int depth; rt_int level; int byref; P1054 members; P1054 mnext; P1044 binds; P1054 insts; P1058 env; P1054 chain; P1054 stack; P1054 owner; P1061 gctx; P1063 mv; P1048 reqs; int reqdone; P1044 home; P1044 capn; P1054 tbinds; P1037 loc; P1054 reqs_sym; rt_int decl_line; int pending;  };
typedef struct R1066 R1066;
typedef struct R1066 *P1065;
struct R1066 {  P1050 t; P1065 next;  };
struct R1051 {  rt_int kind; P1037 name; P1044 lits; P1050 elem; P1050 idx; P1050 idx2; P1046 elemcons; P1044 elemst; P1050 under; P1044 tparams; P1044 ocap; P1052 fields; P1050 target; P1044 decl; P1037 cname; int forward; int defined; int helpers; P1054 initp; P1054 finalp; P1054 tpsyms; P1054 gen; P1054 gbinds; P1050 next; rt_int ndim; P1065 idxs; P1054 assignp; P1054 eqp; P1054 ltp; P1044 repn;  };
typedef struct R1068 R1068;
typedef struct R1068 *P1067;
struct R1068 {  P1048 head; P1048 tail;  };
typedef struct R1070 R1070;
typedef struct R1070 *P1069;
struct R1070 {  P1037 match; P1037 label; rt_int depth; P1069 next;  };
typedef struct R1072 R1072;
typedef struct R1072 *P1071;
struct R1072 {  P1044 d; P1071 next; rt_int depth;  };
typedef struct R1074 R1074;
typedef struct R1074 *P1073;
struct R1074 {  P1044 d; P1037 w; P1073 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P1037 result_;
 P1037 t_1148;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_1151;
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
 rstr r_1152;
 rt_int i_1153;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_1157;
 rstr w_1158;
 rt_int i_1159;
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
 P1067 result_;
 P1067 b_1163;
};
struct f_put_27fr { int dummy;
 P1067 b_25;
 rstr *s_26;
 P1048 l_1165;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P1067 b_30;
 P1048 l_1167;
};
struct f_splice_34fr { int dummy;
 P1067 a_32;
 P1067 b_33;
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
 P1039 t_1169;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_1171;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_1172;
 rt_int k_1173;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_1177;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_1178;
 P1037 r_1179;
 int more_1180;
 rt_int k_1181;
 int go_1182;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_1183;
 rt_int k_1184;
 rstr p_1185;
 int ok_1186;
 int known_1187;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_1188;
 rt_int j_1189;
 rt_int n_1190;
 int c_1191;
 rstr w_1192;
 rt_int k_1193;
 rstr w_1197;
 rt_int k_1198;
 rstr two_1202;
};
struct f_read_source_58fr { int dummy;
 rstr line_1203;
 P1048 l_1204;
};
struct f_read_library_60fr { int dummy;
 rstr *name_59;
 int result_;
 rt_r_file * f_1206;
 int found_1207;
 rstr line_1210;
};
struct f_write_library_62fr { int dummy;
 P1044 u_61;
 rt_r_file * f_1211;
 P1048 l_1212;
 rt_int n_1213;
};
struct f_nn_65fr { int dummy;
 rt_int kind_63;
 rt_int line_64;
 P1044 result_;
 P1044 x_1214;
};
struct f_append_69fr { int dummy;
 P1044 *head_66;
 P1044 *tail_67;
 P1044 x_68;
};
struct f_list_len_71fr { int dummy;
 P1044 l_70;
 rt_int result_;
 rt_int n_1216;
 P1044 p_1217;
};
struct f_cur_line_72fr { int dummy;
 rt_int result_;
};
struct f_at_kw_74fr { int dummy;
 rstr *w_73;
 int result_;
};
struct f_at_op_76fr { int dummy;
 rstr *w_75;
 int result_;
};
struct f_at_kind_78fr { int dummy;
 rt_int k_77;
 int result_;
};
struct f_kind_at_80fr { int dummy;
 rt_int k_79;
 rt_int result_;
};
struct f_text_at_82fr { int dummy;
 rt_int k_81;
 P1037 result_;
};
struct f_perror_84fr { int dummy;
 rstr *msg_83;
};
struct f_accept_kw_86fr { int dummy;
 rstr *w_85;
 int result_;
};
struct f_accept_op_88fr { int dummy;
 rstr *w_87;
 int result_;
};
struct f_expect_kw_90fr { int dummy;
 rstr *w_89;
};
struct f_expect_op_92fr { int dummy;
 rstr *w_91;
};
struct f_expect_id_93fr { int dummy;
 P1037 result_;
};
struct f_name_node_94fr { int dummy;
 P1044 result_;
 P1044 x_1218;
};
struct f_id_list_95fr { int dummy;
 P1044 result_;
 P1044 head_1219;
 P1044 tail_1220;
};
struct f_p_subtype_96fr { int dummy;
 P1044 result_;
 rt_int line_1221;
 P1044 x_1222;
 rstr w_1223;
 P1044 head_1224;
 P1044 tail_1225;
 P1044 head_1226;
 P1044 tail_1227;
 int more_1228;
 P1044 names_1229;
 P1044 st_1230;
 P1044 cmp_1231;
 P1044 head_1232;
 P1044 tail_1233;
 int more_1234;
 P1044 lit_1235;
};
struct f_constraint_list_97fr { int dummy;
 P1044 result_;
 P1044 head_1236;
 P1044 tail_1237;
 int more_1238;
 rt_int line_1239;
 P1044 lo_1240;
 P1044 r_1241;
};
struct f_actual_params_98fr { int dummy;
 P1044 result_;
 P1044 head_1242;
 P1044 tail_1243;
};
struct f_is_type_word_100fr { int dummy;
 rstr *w_99;
 int result_;
};
struct f_actual_tt_101fr { int dummy;
 P1044 result_;
 P1044 head_1244;
 P1044 tail_1245;
 int more_1246;
};
struct f_binop_106fr { int dummy;
 P1037 op_102;
 P1044 l_103;
 P1044 r_104;
 rt_int line_105;
 P1044 result_;
 P1044 x_1247;
};
struct f_expr_107fr { int dummy;
 P1044 result_;
 P1044 l_1248;
 P1037 op_1249;
 rt_int line_1250;
};
struct f_expr_and_108fr { int dummy;
 P1044 result_;
 P1044 l_1251;
 rt_int line_1252;
};
struct f_expr_not_109fr { int dummy;
 P1044 result_;
 P1044 x_1253;
};
struct f_is_rel_111fr { int dummy;
 rstr *s_110;
 int result_;
};
struct f_expr_rel_112fr { int dummy;
 P1044 result_;
 P1044 l_1254;
 P1037 op_1255;
 rt_int line_1256;
};
struct f_expr_add_113fr { int dummy;
 P1044 result_;
 P1044 l_1257;
 P1037 op_1258;
 rt_int line_1259;
};
struct f_expr_mul_114fr { int dummy;
 P1044 result_;
 P1044 l_1260;
 P1037 op_1261;
 rt_int line_1262;
};
struct f_expr_pow_115fr { int dummy;
 P1044 result_;
 P1044 l_1263;
 rt_int line_1264;
};
struct f_expr_prefix_116fr { int dummy;
 P1044 result_;
 P1044 x_1265;
};
struct f_postfix_117fr { int dummy;
 P1044 result_;
 P1044 p_1266;
 rt_int line_1267;
 P1044 x_1268;
 P1044 head_1269;
 P1044 tail_1270;
 int more_1271;
 P1044 lo_1272;
 P1044 r_1273;
 P1044 x_1274;
 P1044 x_1275;
 P1044 x_1276;
};
struct f_primary_118fr { int dummy;
 P1044 result_;
 rt_int line_1277;
 P1044 x_1278;
 rt_int k_1279;
 rstr w_1280;
 P1044 head_1281;
 P1044 tail_1282;
 int more_1283;
};
struct f_constructor_item_119fr { int dummy;
 P1044 result_;
 rt_int line_1284;
 P1044 it_1285;
 P1044 first_1286;
 P1044 keys_1287;
 P1044 ktail_1288;
 P1044 lab_1289;
 rt_int save_1290;
 P1044 more_1291;
 P1044 tail2_1292;
 int ok_1293;
 int go_1294;
 P1044 l2_1295;
};
struct f_at_body_end_120fr { int dummy;
 int result_;
};
struct f_body_121fr { int dummy;
 P1044 result_;
 P1044 head_1296;
 P1044 tail_1297;
 int stmts_1298;
 P1044 after_1299;
 P1044 x_1300;
};
struct f_body_element_122fr { int dummy;
 P1044 result_;
 P1044 x_1301;
 P1037 pr_1302;
 P1044 p_1303;
};
struct f_declaration_123fr { int dummy;
 P1044 result_;
 rt_int line_1304;
 P1044 head_1305;
 P1044 tail_1306;
 P1044 names_1307;
 P1044 x_1308;
};
struct f_object_decl_124fr { int dummy;
 P1044 result_;
 rt_int line_1309;
 int is_var_1310;
 P1044 names_1311;
 P1044 st_1312;
 P1044 init_1313;
 P1044 loc_1314;
 rt_int loc_kind_1315;
 P1044 head_1316;
 P1044 tail_1317;
 P1044 x_1318;
};
struct f_abbrev_decl_125fr { int dummy;
 P1044 result_;
 P1044 x_1319;
};
struct f_rep_spec_126fr { int dummy;
 P1044 result_;
};
struct f_rep_items_127fr { int dummy;
 P1044 result_;
 P1044 head_1320;
 P1044 tail_1321;
 int more_1322;
};
struct f_rep_word_129fr { int dummy;
 rt_int k_128;
 int result_;
 rstr w_1323;
};
struct f_rep_item_130fr { int dummy;
 P1044 result_;
 P1044 x_1324;
 P1044 head_1325;
 P1044 tail_1326;
 int more_1327;
 P1044 names_1328;
 P1044 items_1329;
 P1044 cmp_1330;
 P1044 head_1331;
 P1044 tail_1332;
 P1044 head_1333;
 P1044 tail_1334;
 int dummy_1335;
};
struct f_type_decl_131fr { int dummy;
 P1044 result_;
 rt_int line_1336;
 P1037 name_1337;
 P1044 params_1338;
 P1044 x_1339;
 P1044 tts_1340;
};
struct f_mode_of_133fr { int dummy;
 rstr *w_132;
 rt_int result_;
};
struct f_formal_params_134fr { int dummy;
 P1044 result_;
 P1044 head_1341;
 P1044 tail_1342;
 int more_1343;
 rt_int mode_1344;
 P1044 names_1345;
 P1044 ntail_1346;
 P1044 st_1347;
 P1044 p_1348;
};
struct f_imports_list_136fr { int dummy;
 P1044 owner_135;
 int result_;
 P1044 head_1349;
 P1044 tail_1350;
 int more_1351;
 int ro_1352;
 P1044 x_1353;
};
struct f_is_definable_138fr { int dummy;
 rstr *w_137;
 int result_;
};
struct f_definable_name_139fr { int dummy;
 P1037 result_;
 P1037 r_1354;
};
struct f_subprogram_decl_140fr { int dummy;
 P1044 result_;
 rt_int line_1355;
 P1044 x_1356;
 int is_abn_1357;
 int is_func_1358;
 int dummy_1359;
};
struct f_capsule_decl_141fr { int dummy;
 P1044 result_;
 P1044 x_1360;
 int dummy_1361;
 P1044 head_1362;
 P1044 tail_1363;
 int more_1364;
 P1044 n_1365;
};
struct f_formal_tt_142fr { int dummy;
 P1044 result_;
 P1044 head_1366;
 P1044 tail_1367;
 int more_1368;
};
struct f_generic_decl_143fr { int dummy;
 P1044 result_;
 P1044 x_1369;
 P1044 head_1370;
 P1044 tail_1371;
 int more_1372;
 P1044 names_1373;
 rt_int kind_1374;
 P1044 st_1375;
 P1044 items_1376;
 P1044 p_1377;
 P1044 nhead_1378;
 P1044 ntail_1379;
 P1044 it_1380;
};
struct f_type_list_144fr { int dummy;
 P1044 result_;
 P1044 head_1381;
 P1044 tail_1382;
 int more_1383;
 P1044 n_1384;
};
struct f_task_decl_145fr { int dummy;
 P1044 result_;
 P1044 x_1385;
 int dummy_1386;
};
struct f_expose_decl_146fr { int dummy;
 P1044 result_;
 P1044 x_1387;
 P1044 head_1388;
 P1044 tail_1389;
 int more_1390;
 P1044 n_1391;
 P1044 head_1392;
 P1044 tail_1393;
 int more_1394;
 P1044 n_1395;
 P1044 tgt_1396;
};
struct f_is_compound_kw_148fr { int dummy;
 rstr *w_147;
 int result_;
};
struct f_statement_149fr { int dummy;
 P1044 result_;
 P1044 labels_1397;
 P1044 ltail_1398;
 P1037 match_1399;
 P1044 s_1400;
};
struct f_unlabeled_statement_150fr { int dummy;
 P1044 result_;
 rt_int line_1401;
 P1044 x_1402;
 P1044 head_1403;
 P1044 tail_1404;
 P1044 invs_1405;
 P1044 itail_1406;
 int more_1407;
 P1044 target_1408;
};
struct f_arm_154fr { int dummy;
 P1044 cond_151;
 P1044 b_152;
 rt_int line_153;
 P1044 result_;
 P1044 x_1409;
};
struct f_if_stmt_155fr { int dummy;
 P1044 result_;
 P1044 x_1410;
 P1044 head_1411;
 P1044 tail_1412;
 P1044 cond_1413;
 int go_1414;
};
struct f_case_stmt_156fr { int dummy;
 P1044 result_;
 P1044 x_1415;
 P1044 head_1416;
 P1044 tail_1417;
 P1044 labs_1418;
 P1044 ltail_1419;
 int more_1420;
 P1044 l_1421;
};
struct f_repeat_stmt_157fr { int dummy;
 P1044 result_;
 P1044 x_1422;
};
struct f_guard_stmt_158fr { int dummy;
 P1044 result_;
 P1044 x_1423;
 P1044 head_1424;
 P1044 tail_1425;
 P1044 h_1426;
};
struct f_program_159fr { int dummy;
 P1044 result_;
 P1044 head_1427;
 P1044 tail_1428;
 P1037 pr_1429;
 P1044 u_1430;
};
struct f_hash_161fr { int dummy;
 rstr *s_160;
 rt_int result_;
 rt_int h_1431;
 rt_int i_1432;
};
struct f_lookup_163fr { int dummy;
 rstr *name_162;
 P1054 result_;
 P1054 y_1436;
};
struct f_lookup_decl_165fr { int dummy;
 P1044 d_164;
 P1054 result_;
 P1054 y_1437;
};
struct f_define_168fr { int dummy;
 P1054 y_166;
 rt_int line_167;
 rt_int h_1438;
 P1054 z_1439;
};
struct f_overloadable_170fr { int dummy;
 P1054 y_169;
 int result_;
};
struct f_same_tt_173fr { int dummy;
 P1044 a_171;
 P1044 b_172;
 int result_;
 P1044 x_1440;
 P1044 y_1441;
};
struct f_same_signature_176fr { int dummy;
 P1056 a_174;
 P1056 b_175;
 int result_;
 P1056 x_1442;
 P1056 y_1443;
};
struct f_open_scope_177fr { int dummy;
};
struct f_close_scope_178fr { int dummy;
};
struct f_new_sym_181fr { int dummy;
 rt_int kind_179;
 P1037 name_180;
 P1054 result_;
 P1054 y_1444;
};
struct f_new_typ_183fr { int dummy;
 rt_int kind_182;
 P1050 result_;
 P1050 t_1446;
};
struct f_new_cons_184fr { int dummy;
 P1046 result_;
 P1046 c_1448;
};
struct f_scalar_kind_186fr { int dummy;
 P1050 t_185;
 int result_;
};
struct f_bound_ctype_188fr { int dummy;
 P1050 t_187;
 rstr result_;
};
struct f_cbound_191fr { int dummy;
 P1046 c_189;
 rstr *b_190;
 rstr result_;
 P1037 p_1450;
 rt_int i_1451;
};
struct f_clo_193fr { int dummy;
 P1046 c_192;
 rstr result_;
};
struct f_chi_195fr { int dummy;
 P1046 c_194;
 rstr result_;
};
struct f_sub_lo_198fr { int dummy;
 P1050 t_196;
 P1046 c_197;
 rstr result_;
};
struct f_sub_hi_201fr { int dummy;
 P1050 t_199;
 P1046 c_200;
 rstr result_;
};
struct f_raw_storage_204fr { int dummy;
 rstr *name_202;
 rstr *ct_203;
 rstr result_;
 rstr g_1455;
 rstr f_1456;
};
struct f_copy_cons_206fr { int dummy;
 P1046 c_205;
 P1046 result_;
 P1046 r_1457;
};
struct f_freeze_209fr { int dummy;
 P1046 c_207;
 P1050 t_208;
 P1046 result_;
 P1046 r_1459;
 P1037 saved_field_1460;
 rstr ct_1461;
 rstr la_1462;
 rstr lf_1463;
 rstr ha_1464;
 rstr hf_1465;
};
struct f_checked_213fr { int dummy;
 P1050 t_210;
 P1046 c_211;
 rstr *v_212;
 rstr result_;
};
struct f_same_lits_216fr { int dummy;
 P1044 a_214;
 P1044 b_215;
 int result_;
 P1044 x_1466;
 P1044 y_1467;
};
struct f_str_elem_218fr { int dummy;
 P1050 t_217;
 P1050 result_;
};
struct f_same_221fr { int dummy;
 P1050 a_219;
 P1050 b_220;
 int result_;
 P1065 x_1468;
 P1065 y_1469;
 P1052 f_1470;
 P1052 g_1471;
};
struct f_base_of_223fr { int dummy;
 P1050 t_222;
 P1050 result_;
};
struct f_base_cons_226fr { int dummy;
 P1050 t_224;
 P1046 c_225;
 P1046 result_;
};
struct f_kind_name_228fr { int dummy;
 P1050 t_227;
 rstr result_;
};
struct f_check_type_232fr { int dummy;
 P1050 got_229;
 P1050 want_230;
 rt_int line_231;
};
struct f_ctype_234fr { int dummy;
 P1050 t_233;
 rstr result_;
};
struct f_struct_body_236fr { int dummy;
 P1050 t_235;
 rstr result_;
};
struct f_field_decls_238fr { int dummy;
 P1050 t_237;
 rstr result_;
 P1052 f_1474;
 P1037 s_1475;
};
struct f_declare_ctype_240fr { int dummy;
 P1050 t_239;
 P1050 u_1476;
 P1044 p_1477;
 P1037 fs_1478;
 rstr sn_1479;
 P1046 pc_1480;
 P1050 target_1481;
 P1044 p_1482;
 P1037 fs_1483;
};
struct f_dim_lo_242fr { int dummy;
 rt_int k_241;
 rstr result_;
};
struct f_dim_hi_244fr { int dummy;
 rt_int k_243;
 rstr result_;
};
struct f_more_dims_246fr { int dummy;
 P1050 t_245;
 rstr result_;
 P1037 r_1484;
 rt_int k_1485;
};
struct f_acnt_249fr { int dummy;
 P1050 t_247;
 rstr *base_248;
 rstr result_;
 P1037 r_1489;
 rt_int k_1490;
};
struct f_cons_lo_252fr { int dummy;
 P1046 c_250;
 rt_int k_251;
 P1037 result_;
 P1048 l_1494;
 rt_int i_1495;
};
struct f_cons_hi_255fr { int dummy;
 P1046 c_253;
 rt_int k_254;
 P1037 result_;
 P1048 l_1499;
 rt_int i_1500;
};
struct f_idx_type_258fr { int dummy;
 P1050 t_256;
 rt_int k_257;
 P1050 result_;
 P1065 l_1504;
 rt_int i_1505;
};
struct f_init_ascii_259fr { int dummy;
 P1044 head_1509;
 P1044 tail_1510;
 rt_int start_1511;
 rt_int i_1512;
 P1044 lit_1516;
 P1044 h2_1517;
 P1044 t2_1518;
 P1044 l1_1519;
 P1044 l2_1520;
 P1044 l3_1521;
};
struct f_enum2_262fr { int dummy;
 rstr *a_260;
 rstr *b_261;
 P1050 result_;
 P1050 t_1522;
 P1044 l1_1523;
 P1044 l2_1524;
};
struct f_lit_index_265fr { int dummy;
 P1044 lits_263;
 rstr *name_264;
 rt_int result_;
 rt_int i_1525;
 P1044 l_1526;
};
struct f_resolve_subtype_268fr { int dummy;
 P1044 st_266;
 P1046 *c_267;
 P1046 c_267v;
 P1050 result_;
 P1050 t_1527;
 int ok_1528;
 P1050 dummy_1529;
 P1050 et_1531;
 P1046 ec_1532;
 P1050 et_1533;
 P1044 ix_1534;
 rt_int k_1535;
 P1065 tail_1536;
 P1048 btail_1537;
 P1046 ic_1538;
 P1050 it_1539;
 P1037 lo_1540;
 P1037 hi_1541;
 P1065 tl_1542;
 P1048 l1_1544;
 P1048 l2_1545;
 P1046 ec_1548;
 P1044 comp_1549;
 P1052 tail_1550;
 P1046 cc_1551;
 P1052 f_1552;
 P1044 lits_1554;
 P1044 ltail_1555;
 P1052 f_1556;
 P1044 l_1557;
 P1046 ec_1558;
 P1044 gt_1559;
 P1046 ec_1560;
 P1037 base_1561;
};
struct f_float_lit_270fr { int dummy;
 P1044 e_269;
 int result_;
};
struct f_tag_constraint_274fr { int dummy;
 P1050 t_271;
 P1044 e_272;
 P1046 c_273;
 P1050 dummy_1562;
};
struct f_named_subtype_277fr { int dummy;
 P1044 st_275;
 P1046 *c_276;
 P1046 c_276v;
 P1050 result_;
 P1050 t_1563;
 P1054 y_1564;
 rstr name_1565;
 P1054 binds_1566;
 P1058 saved_env_1567;
 rt_int saved_gdepth_1568;
 P1054 nb_1569;
};
struct f_invoke_abbrev_281fr { int dummy;
 P1054 y_278;
 P1044 st_279;
 P1046 *c_280;
 P1046 c_280v;
 P1050 result_;
 P1044 p_1570;
 P1044 a_1571;
 P1050 t_1572;
 P1054 z_1573;
 P1046 pc_1574;
 P1050 at_1575;
 int ok_1576;
};
struct f_apply_constraint_286fr { int dummy;
 P1050 t_282;
 P1044 args_283;
 P1046 c_284;
 rt_int line_285;
 P1050 dummy_1577;
 int ok_1578;
};
struct f_value_subtype_290fr { int dummy;
 P1044 e_287;
 P1046 *c_288;
 P1046 c_288v;
 P1037 *base_289;
 P1037 base_289v;
 P1050 result_;
 P1050 t_1579;
 P1046 c0_1580;
 int ro_1581;
 rt_int k_1582;
 rstr lo_1586;
 rstr hi_1587;
 P1048 l1_1588;
 P1048 l2_1589;
 P1044 p_1592;
 P1044 head_1593;
 P1044 tail_1594;
 P1044 sel_1595;
};
struct f_reverse_pairs_292fr { int dummy;
 P1048 l_291;
 P1048 result_;
 P1048 r_1596;
 P1048 p_1597;
 P1048 a_1598;
 P1048 b_1599;
};
struct f_inquiry_295fr { int dummy;
 P1044 st_293;
 P1046 *c_294;
 P1046 c_294v;
 P1050 result_;
 P1037 base_1600;
 P1050 t_1601;
 rstr name_1602;
 P1044 sub_1603;
 P1046 c2_1604;
 rt_int k_1605;
 int ok_1606;
 P1046 ac_1607;
};
struct f_as_subtype_297fr { int dummy;
 P1044 e_296;
 P1044 result_;
 P1044 st_1608;
 rstr name_1609;
 P1054 y_1610;
};
struct f_tt_subtype_302fr { int dummy;
 P1037 name_298;
 P1044 tt_299;
 P1044 args_300;
 rt_int line_301;
 P1044 result_;
 P1044 st_1611;
};
struct f_type_name_304fr { int dummy;
 rstr *name_303;
 int result_;
 P1054 y_1612;
};
struct f_empty_set_306fr { int dummy;
 P1050 t_305;
 rstr result_;
};
struct f_sparse_set_308fr { int dummy;
 P1050 t_307;
 int result_;
};
struct f_set_fn_311fr { int dummy;
 P1050 t_309;
 rstr *op_310;
 rstr result_;
};
struct f_opened_313fr { int dummy;
 P1050 t_312;
 int result_;
 P1071 c_1613;
};
struct f_replace_all_317fr { int dummy;
 rstr *s_314;
 rstr *pat_315;
 rstr *r_316;
 rstr result_;
 rt_int i_1614;
};
struct f_subst_319fr { int dummy;
 rstr *s_318;
 rstr result_;
 P1048 l_1615;
 P1037 r_1616;
};
struct f_new_type_323fr { int dummy;
 P1054 y_320;
 P1044 st_321;
 P1046 *c_322;
 P1046 c_322v;
 P1050 result_;
 P1044 d_1617;
 P1044 p_1618;
 P1046 uc_1619;
 P1054 z_1620;
 P1046 zc_1621;
};
struct f_needed_bits_326fr { int dummy;
 P1050 t_324;
 P1046 c_325;
 rt_int result_;
 rt_int n_1622;
 rt_int v_1623;
};
struct f_has_digits_only_328fr { int dummy;
 rstr *s_327;
 int result_;
 rt_int i_1624;
};
struct f_built_in_only_330fr { int dummy;
 P1050 t_329;
 int result_;
 P1052 f_1628;
};
struct f_check_rep_337fr { int dummy;
 P1044 items_331;
 P1050 t_332;
 P1046 c_333;
 int top_334;
 int indirect_335;
 P1044 d_336;
 P1044 it_1629;
 int ok_1630;
 P1050 at_1631;
 rstr w_1632;
 rt_int v_1633;
 rstr dummy_1634;
 rt_int m_1635;
 int ok2_1636;
 rt_int r_1637;
 rt_int o_1638;
 P1044 comp_1639;
 P1052 f_1640;
 P1044 k_1641;
 P1044 a_1642;
};
struct f_formal_named_340fr { int dummy;
 P1044 d_338;
 rstr *name_339;
 int result_;
 P1044 p_1643;
};
struct f_unchecked_free_342fr { int dummy;
 P1050 t_341;
 int result_;
 P1044 it_1644;
};
struct f_init_storage_346fr { int dummy;
 rstr *lval_343;
 P1050 t_344;
 P1046 c_345;
};
struct f_init_call_349fr { int dummy;
 P1054 y_347;
 rstr *lval_348;
 rstr result_;
 P1037 link_1645;
 rt_int i_1646;
};
struct f_needs_fin_351fr { int dummy;
 P1050 t_350;
 int result_;
 P1052 f_1650;
};
struct f_fin_code_354fr { int dummy;
 rstr *lval_352;
 P1050 t_353;
 rstr result_;
 P1037 r_1651;
 rstr i_1652;
 P1052 f_1653;
 P1052 f_1654;
 rt_int i_1655;
};
struct f_tparam_type_357fr { int dummy;
 P1050 t_355;
 rstr *name_356;
 P1050 result_;
 P1054 z_1656;
};
struct f_make_storage_361fr { int dummy;
 rstr *lval_358;
 P1050 t_359;
 P1046 c_360;
 P1044 p_1657;
 P1044 a_1658;
 P1046 uc_1659;
 P1050 ut_1660;
 P1050 at_1661;
 P1050 pt_1662;
 rstr v_1663;
 P1048 saved_1664;
 P1048 l1_1665;
 P1048 l2_1666;
 P1050 at_1669;
 rstr acc_1670;
 rstr use_1671;
 rt_int k_1672;
 rstr i_1676;
 P1052 f_1677;
 P1052 f_1678;
 rt_int i_1679;
};
struct f_flat_363fr { int dummy;
 P1050 t_362;
 int result_;
 P1052 f_1683;
};
struct f_storable_365fr { int dummy;
 P1050 t_364;
 int result_;
 P1052 f_1684;
};
struct f_ser_name_367fr { int dummy;
 P1050 t_366;
 rstr result_;
 rstr ct_1685;
 P1037 key_1686;
 P1048 l_1687;
 rt_int i_1688;
};
struct f_ser_write_370fr { int dummy;
 P1050 t_368;
 rstr *v_369;
 rstr result_;
 P1044 p_1693;
 P1037 r_1694;
 P1037 r_1695;
 rstr i_1696;
 rt_int k_1697;
 P1052 f_1701;
 P1037 r_1702;
 P1052 f_1703;
 rt_int i_1704;
 P1037 r_1705;
};
struct f_ser_read_373fr { int dummy;
 P1050 t_371;
 rstr *v_372;
 rstr result_;
 P1044 p_1706;
 P1037 r_1707;
 P1037 r_1708;
 rstr i_1709;
 rt_int k_1710;
 P1052 f_1714;
 P1037 r_1715;
 P1052 f_1716;
 rt_int i_1717;
 P1037 r_1718;
};
struct f_uninit_value_375fr { int dummy;
 P1050 t_374;
 rstr result_;
};
struct f_init_chk_378fr { int dummy;
 P1050 t_376;
 rstr *v_377;
 rstr result_;
 P1050 b_1719;
};
struct f_manifest_381fr { int dummy;
 P1044 e_379;
 int *ok_380;
 int ok_380v;
 rt_int result_;
 P1063 v_1720;
};
struct f_mk_mval_384fr { int dummy;
 rt_int kind_382;
 rt_int i_383;
 P1063 result_;
 P1063 v_1721;
};
struct f_ipow_387fr { int dummy;
 rt_int a_385;
 rt_int b_386;
 rt_int result_;
 rt_int r_1723;
 rt_int i_1724;
};
struct f_meval_390fr { int dummy;
 P1044 e_388;
 int *ok_389;
 int ok_389v;
 P1063 result_;
 P1063 a_1728;
 P1063 b_1729;
 int ok2_1730;
 P1037 op_1731;
 P1054 y_1734;
 P1063 r_1735;
};
struct f_float_op_395fr { int dummy;
 rstr *op_391;
 P1063 a_392;
 P1063 b_393;
 int *ok_394;
 int ok_394v;
 P1063 result_;
 P1063 r_1736;
};
struct f_bool_text_397fr { int dummy;
 int b_396;
 rstr result_;
};
struct f_bool_i_399fr { int dummy;
 int b_398;
 rt_int result_;
};
struct f_mstr_401fr { int dummy;
 P1063 v_400;
 rstr result_;
};
struct f_ascii_char_403fr { int dummy;
 rt_int i_402;
 int result_;
 rstr printable_1739;
};
struct f_user_defined_405fr { int dummy;
 rstr *op_404;
 int result_;
 P1054 y_1740;
};
struct f_mcopy_407fr { int dummy;
 P1050 t_406;
 rstr result_;
 rstr ct_1741;
 rstr name_1742;
 P1048 l_1743;
};
struct f_composite_409fr { int dummy;
 P1050 t_408;
 int result_;
};
struct f_user_call2_415fr { int dummy;
 P1054 y_410;
 rstr *a_411;
 int lv_a_412;
 rstr *b_413;
 int lv_b_414;
 rstr result_;
 P1037 args_1745;
 rt_int i_1746;
};
struct f_user_arg_419fr { int dummy;
 P1056 pm_416;
 rstr *v_417;
 int lv_418;
 rstr result_;
 rstr ct_1750;
};
struct f_top_level_421fr { int dummy;
 P1054 y_420;
 int result_;
};
struct f_assign_code_426fr { int dummy;
 rstr *lval_422;
 P1050 t_423;
 rstr *v_424;
 P1046 c_425;
 rstr result_;
};
struct f_copy_code_429fr { int dummy;
 P1050 t_427;
 rstr *v_428;
 rstr result_;
};
struct f_eq_code_433fr { int dummy;
 P1050 t_430;
 rstr *a_431;
 rstr *b_432;
 rstr result_;
};
struct f_elem_assign_437fr { int dummy;
 rstr *lval_434;
 P1050 t_435;
 rstr *v_436;
 rstr result_;
};
struct f_seen_name_440fr { int dummy;
 P1048 l_438;
 rstr *s_439;
 int result_;
 P1048 p_1751;
};
struct f_emit_helpers_441fr { int dummy;
 P1050 order_1752;
 P1050 t_1753;
 P1048 done_1754;
 P1048 l_1755;
 rstr c_1756;
};
struct f_helper_bodies_443fr { int dummy;
 P1050 t_442;
 rstr c_1758;
 P1067 b_1759;
 P1050 e_1760;
 P1037 sizes_1761;
 P1037 bounds_1762;
 rt_int k_1763;
 rstr l_1767;
 rstr h_1768;
 P1048 saved_1769;
 P1044 p_1770;
 P1048 l1_1771;
 P1048 l2_1772;
 P1052 f_1775;
 rt_int i_1776;
 P1037 cases_as_1777;
 P1037 cases_cp_1778;
 P1037 cases_eq_1779;
 rstr fn_1780;
 P1052 f_1781;
 P1037 conds_1782;
 rstr fn_1783;
 rstr fn_1784;
};
struct f_declare_body_445fr { int dummy;
 P1044 elems_444;
 P1044 e_1785;
 P1054 g_1786;
 P1054 y_1787;
 P1054 y_1788;
 P1054 y_1789;
 P1050 t_1790;
 P1054 y_1791;
 P1054 y_1792;
 P1058 snap_1793;
 rt_int i_1797;
 P1054 g_1801;
 P1054 y_1802;
 P1054 y_1803;
};
struct f_manifest_const_447fr { int dummy;
 P1044 d_446;
 int ok_1804;
 P1063 v_1805;
 P1054 y_1806;
 P1050 t_1807;
 P1037 ctext_1808;
 P1067 saved_1809;
};
struct f_exported_451fr { int dummy;
 P1044 d_448;
 rstr *name_449;
 int *ro_450;
 int ro_450v;
 int result_;
 P1044 p_1812;
};
struct f_copy_sym_453fr { int dummy;
 P1054 y_452;
 P1054 result_;
 P1054 z_1813;
};
struct f_gen_capsule_455fr { int dummy;
 P1044 d_454;
 P1054 y_1815;
 P1037 saved_1816;
 P1044 p_1817;
 P1056 tail_1818;
 P1056 pm_1819;
};
struct f_imports_variables_457fr { int dummy;
 P1044 d_456;
 int result_;
};
struct f_elaborate_pending_459fr { int dummy;
 P1054 y_458;
 P1037 saved_1821;
};
struct f_pending_capsule_461fr { int dummy;
 rstr *name_460;
 int result_;
 P1054 y_1822;
};
struct f_capsule_params_465fr { int dummy;
 P1044 d_462;
 P1044 args_463;
 rt_int line_464;
 P1044 p_1823;
 P1044 a_1824;
 P1050 t_1825;
 P1050 vt_1826;
 P1046 c_1827;
 P1037 lv_1828;
 P1046 lc_1829;
 int ro_1830;
 P1054 y_1831;
 rstr f_1832;
 rstr g_1833;
 P1054 y_1834;
 rstr v_1835;
 rstr access_1836;
};
struct f_elaborate_capsule_470fr { int dummy;
 P1044 d_466;
 P1054 y_467;
 P1044 args_468;
 P1044 owner_469;
 P1071 cr_1837;
 P1061 ctx_1838;
 P1069 saved_gotos_1839;
 P1054 m_1840;
 P1044 p_1841;
 int ro_1842;
 P1073 w_1845;
 P1054 z_1847;
};
struct f_exports_op_473fr { int dummy;
 P1044 d_471;
 rstr *op_472;
 int result_;
 P1044 p_1848;
};
struct f_renamed_476fr { int dummy;
 P1044 d_474;
 P1054 z_475;
 P1037 result_;
 P1044 r_1849;
};
struct f_cap_tt_match_479fr { int dummy;
 P1044 f_477;
 P1044 a_478;
 int result_;
 P1044 x_1850;
 P1044 y_1851;
 int ok1_1852;
 int ok2_1853;
 P1063 v1_1854;
 P1063 v2_1855;
};
struct f_pick_capsule_481fr { int dummy;
 P1044 d_480;
 P1054 result_;
 P1054 y_1856;
 P1054 first_1857;
 P1054 fit_1858;
 rt_int n_1859;
};
struct f_capsule_instance_484fr { int dummy;
 P1054 g_482;
 P1044 d_483;
 P1054 result_;
 P1044 gd_1860;
 P1044 pat_1861;
 P1054 binds_1862;
 P1054 inst_1863;
 P1058 saved_env_1864;
 rt_int saved_gdepth_1865;
 P1054 b_1866;
};
struct f_configure_486fr { int dummy;
 P1054 y_485;
 P1054 m_1867;
 rstr n_1868;
};
struct f_gen_expose_488fr { int dummy;
 P1044 d_487;
 P1054 y_1869;
 P1054 m_1870;
 P1044 p_1871;
 P1044 r_1872;
 P1054 inst_1873;
 int found_1874;
 P1054 z_1875;
 int found_1876;
 P1054 z_1877;
};
struct f_finish_ptr_490fr { int dummy;
 P1050 t_489;
 P1044 d_1878;
 P1044 p_1879;
 P1046 c_1880;
 rstr dummy_1881;
 rt_int pass_1882;
 P1054 y_1886;
 P1046 pc_1887;
};
struct f_ptr_args_492fr { int dummy;
 P1046 c_491;
 P1044 result_;
};
struct f_bind_ptr_params_497fr { int dummy;
 P1044 formals_493;
 P1044 actuals_494;
 rstr *cell_495;
 rt_int line_496;
 P1044 p_1888;
 P1044 a_1889;
 P1050 vt_1890;
 P1046 pc_1891;
 P1054 y_1892;
 rstr v_1893;
 rstr pv_1894;
};
struct f_alloc_cell_502fr { int dummy;
 P1044 s_498;
 rstr *lv_499;
 P1050 t_500;
 P1046 c_501;
 P1044 d_1895;
 P1046 tc_1896;
 P1050 vt_1897;
 rstr pt_1898;
 rstr cell_1899;
 rstr fn_1900;
 rstr v_1901;
};
struct f_freeze_args_506fr { int dummy;
 P1046 c_503;
 P1050 t_504;
 rt_int line_505;
 P1046 result_;
 P1046 r_1902;
 P1044 p_1903;
 P1044 a_1904;
 P1044 head_1905;
 P1044 tail_1906;
 P1037 saved_1907;
 P1046 pc_1908;
 P1050 vt_1909;
 P1050 pt_1910;
 rstr nm_1911;
 P1054 y_1912;
 P1044 n_1913;
 rstr v_1914;
 rstr access_1915;
};
struct f_ptr_subtype_check_510fr { int dummy;
 P1050 t_507;
 P1046 c_508;
 P1044 src_509;
 P1037 lv_1916;
 P1050 st_1917;
 P1046 sc_1918;
 int ro_1919;
 P1037 cond_1920;
 P1044 a_1921;
 P1044 b_1922;
 P1050 at_1923;
 P1050 bt_1924;
 rstr x_1925;
 rstr y_1926;
};
struct f_normal_function_513fr { int dummy;
 P1044 d_511;
 P1054 y_512;
 P1056 p_1927;
 P1044 imp_1928;
 int ro_1929;
 P1054 z_1930;
};
struct f_foreign_body_516fr { int dummy;
 P1044 d_514;
 P1054 y_515;
 P1056 pm_1931;
 P1037 proto_1932;
 P1037 args_1933;
 rstr cn_1934;
};
struct f_declare_subprogram_518fr { int dummy;
 P1044 d_517;
};
struct f_build_subprogram_520fr { int dummy;
 P1044 d_519;
 P1054 result_;
 P1054 y_1935;
 P1044 p_1936;
 P1056 tail_1937;
 P1056 pm_1938;
 P1046 rc_1940;
 P1056 pm_1941;
 P1067 saved_1942;
 P1054 z_1943;
};
struct f_has_pragmat_523fr { int dummy;
 P1037 pr_521;
 rstr *p_522;
 int result_;
 rt_int i_1944;
};
struct f_suppressing_525fr { int dummy;
 P1037 pr_524;
 P1037 result_;
 P1037 r_1948;
 rt_int i_1949;
 rt_int j_1950;
 rt_int k_1951;
};
struct f_suppressed_527fr { int dummy;
 rstr *x_526;
 int result_;
 rstr w_1952;
 rt_int i_1953;
};
struct f_element_529fr { int dummy;
 P1044 e_528;
 P1037 saved_1957;
};
struct f_element1_531fr { int dummy;
 P1044 e_530;
 rt_int k_1958;
 P1054 g_1959;
 rt_int i_1963;
 P1046 c_1967;
 P1044 st_1968;
 P1050 t_1969;
 P1050 t_1970;
 rstr c_1971;
};
struct f_storage_534fr { int dummy;
 rstr *name_532;
 P1050 t_533;
 rstr result_;
 rstr g_1972;
 rstr f_1973;
};
struct f_bind_537fr { int dummy;
 P1054 y_535;
 rstr *access_536;
};
struct f_var_decl_539fr { int dummy;
 P1044 d_538;
};
struct f_located_var_541fr { int dummy;
 P1044 d_540;
 P1046 c_1974;
 P1050 at_1975;
 P1050 t_1976;
 P1054 y_1977;
 rstr addr_1978;
 rstr av_1979;
 rstr af_1980;
 rstr access_1981;
 P1050 vt_1982;
 rstr v_1983;
 rstr pv_1984;
 rstr pf_1985;
 P1050 vt_1986;
 rstr v_1987;
};
struct f_rep_sync_544fr { int dummy;
 P1054 y_542;
 int pack_543;
 rstr result_;
 rstr lv_1988;
 rstr base_1989;
 P1048 saved_1990;
 P1044 p_1991;
 P1037 r_1992;
 P1037 inner_1993;
 P1054 z_1994;
};
struct f_cbound_access_546fr { int dummy;
 P1054 y_545;
 rstr result_;
 P1046 c_1995;
};
struct f_rep_size_550fr { int dummy;
 P1044 items_547;
 P1050 t_548;
 P1046 c_549;
 rstr result_;
 P1044 it_1996;
 P1050 at_1997;
};
struct f_rep_find_553fr { int dummy;
 P1044 items_551;
 rstr *w_552;
 P1044 result_;
 P1044 it_1998;
};
struct f_rep_comp_556fr { int dummy;
 P1044 items_554;
 rstr *name_555;
 P1044 result_;
 P1044 r_1999;
 P1044 comp_2000;
};
struct f_default_bits_559fr { int dummy;
 P1050 t_557;
 P1046 c_558;
 rt_int result_;
 P1052 f_2001;
 rt_int n_2002;
};
struct f_rep_code_566fr { int dummy;
 P1050 t_560;
 P1046 c_561;
 P1044 items_562;
 rstr *lval_563;
 rstr *addr_564;
 int pack_565;
 rstr result_;
 rstr size_2003;
 P1052 f_2004;
 P1037 r_2005;
 P1037 off_2006;
 rt_int i_2007;
 P1044 ti_2008;
 P1037 tsize_2009;
 P1037 toff_2010;
 P1050 at_2011;
 P1044 ci_2012;
 P1037 fo_2013;
 rstr fl_2014;
 P1050 at_2015;
 rstr part_2016;
 P1044 ai_2017;
 P1044 ei_2018;
 rstr es_2019;
 rstr iv_2020;
 rstr iv_2021;
};
struct f_union_part_568fr { int dummy;
 P1050 t_567;
 rstr result_;
};
struct f_rep_scalar_575fr { int dummy;
 P1050 t_569;
 P1046 c_570;
 rstr *lval_571;
 rstr *addr_572;
 rstr *size_573;
 int pack_574;
 rstr result_;
 rstr signed_2022;
};
struct f_max_range_578fr { int dummy;
 P1050 t_576;
 P1046 c_577;
};
struct f_var_decl2_580fr { int dummy;
 P1044 d_579;
 P1046 c_2023;
 P1050 t_2024;
 P1054 y_2025;
 rstr access_2026;
 P1050 it_2027;
 rstr n_2028;
 P1050 vt_2029;
 rstr v_2030;
};
struct f_open_fin_582fr { int dummy;
 rstr *fc_581;
 rstr f_2031;
 P1048 l_2032;
};
struct f_close_fins_584fr { int dummy;
 P1048 saved_583;
};
struct f_const_decl_586fr { int dummy;
 P1044 d_585;
 P1046 c_2034;
 P1050 t_2035;
 P1050 vt_2036;
 P1054 y_2037;
 int ok_2038;
 rstr v_2039;
 rstr access_2040;
};
struct f_subprogram_588fr { int dummy;
 P1044 d_587;
};
struct f_gen_subprogram_591fr { int dummy;
 P1044 d_589;
 P1054 y_590;
 P1067 saved_code_2041;
 P1067 saved_fields_2042;
 int saved_in_2043;
 P1054 saved_sym_2044;
 P1069 saved_exits_2045;
 P1069 saved_gotos_2046;
 rt_int saved_frames_2047;
 P1037 args_2048;
 P1056 pm_2049;
 P1048 saved_handlers_2050;
 P1048 saved_cleanups_2051;
 P1061 ctx_2052;
 P1037 head_2053;
 P1037 frame_2054;
 P1037 parent_2055;
 P1037 copy_back_2056;
 P1037 pfin_2057;
 P1048 saved_fins_2058;
 P1046 saved_rc_2059;
 P1037 saved_ret_2060;
 P1037 saved_rflag_2061;
 P1044 pn_2062;
 P1037 nonrec_end_2063;
 int has_pfin_2064;
 rstr ct_2066;
 rstr f_2067;
 P1054 p_2068;
 P1046 pc_2069;
 P1046 ac_2070;
 P1046 fc_2071;
 P1050 ft_2072;
 rstr bt_2073;
 P1046 rc_2074;
 P1050 rt_2075;
 rstr g_2076;
 P1037 leave_2077;
 rstr xu_2078;
};
struct f_waits_of_593fr { int dummy;
 P1044 d_592;
 rstr result_;
 P1073 w_2079;
};
struct f_task_waits_595fr { int dummy;
 P1044 elems_594;
 rstr result_;
 P1044 e_2080;
 P1037 r_2081;
};
struct f_await_tasks_597fr { int dummy;
 P1044 elems_596;
 rstr w_2082;
};
struct f_capsule_elements_599fr { int dummy;
 P1044 elems_598;
 P1044 e_2083;
};
struct f_declare_labels_601fr { int dummy;
 P1044 elems_600;
 P1044 e_2084;
 P1044 l_2085;
 P1069 x_2086;
};
struct f_start_labels_602fr { int dummy;
 P1069 x_2088;
};
struct f_goto_label_604fr { int dummy;
 rstr *name_603;
 P1069 result_;
 P1069 x_2089;
};
struct f_has_return_606fr { int dummy;
 P1044 e_605;
 int result_;
 P1044 x_2090;
};
struct f_capsule_body_608fr { int dummy;
 P1044 elems_607;
 P1037 saved_ret_2091;
 P1037 saved_flag_2092;
 rt_int saved_frames_2093;
 P1044 e_2094;
 int stmt_2095;
};
struct f_body_elements_610fr { int dummy;
 P1044 elems_609;
};
struct f_gen_body_612fr { int dummy;
 P1044 elems_611;
 P1048 saved_2096;
 P1069 saved_gotos_2097;
 rstr xu_2098;
};
struct f_open_unhandled_614fr { int dummy;
 P1044 elems_613;
 rstr result_;
 P1044 e_2099;
 P1037 conds_2100;
 rstr f_2101;
};
struct f_close_unhandled_616fr { int dummy;
 rstr *xu_615;
 rt_int i_2102;
 rstr f_2103;
};
struct f_pop_frames_618fr { int dummy;
 rt_int upto_617;
 rt_int i_2104;
 P1048 c_2105;
};
struct f_push_cleanup_620fr { int dummy;
 rstr *s_619;
 P1048 c_2106;
};
struct f_pop_cleanup_621fr { int dummy;
};
struct f_gen_statement_623fr { int dummy;
 P1044 s_622;
 P1054 located_2108;
 P1054 l_2109;
};
struct f_located_in_626fr { int dummy;
 P1044 e_624;
 P1054 found_625;
 P1054 result_;
 P1044 x_2110;
 P1054 r_2111;
 P1054 y_2112;
};
struct f_sym_in_629fr { int dummy;
 P1054 l_627;
 P1054 y_628;
 int result_;
 P1054 p_2113;
};
struct f_gen_statement2_631fr { int dummy;
 P1044 s_630;
 P1037 label_2114;
 P1044 gl_2115;
 P1069 x_2116;
 P1069 x_2119;
};
struct f_st_assign_633fr { int dummy;
 P1044 s_632;
 P1037 lv_2120;
 P1050 t_2121;
 P1050 vt_2122;
 P1046 c_2123;
 int ro_2124;
 rstr lo_2125;
 rstr hi_2126;
 rstr v_2127;
 rstr lo_2128;
 rstr hi_2129;
 rstr v_2130;
 rstr v_2131;
};
struct f_st_call_635fr { int dummy;
 P1044 s_634;
 P1044 c_2132;
 P1050 t_2133;
 P1044 x_2134;
};
struct f_st_if_637fr { int dummy;
 P1044 s_636;
 P1044 a_2135;
 int first_2136;
 P1050 t_2137;
 int taken_2138;
 int ok_2139;
 P1063 mv_2140;
 rstr c_2141;
};
struct f_manifest_case_639fr { int dummy;
 P1044 s_638;
 int result_;
 int ok_2142;
 P1063 sv_2143;
 P1044 a_2144;
 P1044 lab_2145;
 P1063 lo_2146;
 P1063 hi_2147;
};
struct f_st_case_641fr { int dummy;
 P1044 s_640;
 P1050 st_2148;
 P1050 vt_2149;
 int first_2150;
 P1044 a_2151;
};
struct f_st_case2_643fr { int dummy;
 P1044 s_642;
 P1050 st_2152;
 P1050 vt_2153;
 int first_2154;
 P1044 a_2155;
 rstr sel_2156;
 rstr tmp_2157;
 P1044 lab_2158;
 P1037 conds_2159;
 rstr v_2160;
 rstr lo_2161;
 rstr hi_2162;
 rstr lo_2163;
 rstr hi_2164;
};
struct f_user_for_647fr { int dummy;
 P1044 s_644;
 P1050 t_645;
 P1046 c_646;
 P1054 y_2165;
 P1048 saved_2166;
 P1044 p_2167;
 P1044 iv_2168;
 P1050 st_2169;
 rstr access_2170;
 P1037 uv_2171;
 P1048 l1_2172;
 P1048 l2_2173;
 rstr lo_2176;
 rstr hi_2177;
};
struct f_st_repeat_649fr { int dummy;
 P1044 s_648;
 P1050 t_2178;
 P1046 c_2179;
 rstr cond_2180;
 rstr access_2181;
 rstr lov_2182;
 rstr hiv_2183;
 rstr it_2184;
 P1054 y_2185;
};
struct f_st_exit_651fr { int dummy;
 P1044 s_650;
 P1069 x_2186;
};
struct f_st_return_653fr { int dummy;
 P1044 s_652;
 P1050 vt_2187;
 rstr v_2188;
};
struct f_result_checked_657fr { int dummy;
 P1050 t_654;
 P1046 c_655;
 rstr *v_656;
 rstr result_;
};
struct f_exc_id_660fr { int dummy;
 rstr *name_658;
 rt_int line_659;
 rstr result_;
 P1054 y_2189;
};
struct f_st_guard_662fr { int dummy;
 P1044 s_661;
 P1044 h_2190;
 int first_2191;
 P1048 hv_2192;
 rstr f_2193;
 rstr x_2194;
 P1044 h1_2196;
 P1048 seen_2197;
 P1044 n1_2198;
 P1044 n_2199;
 P1037 conds_2200;
};
struct f_st_alloc_664fr { int dummy;
 P1044 s_663;
 P1037 lv_2201;
 P1050 t_2202;
 P1050 target_2203;
 P1050 vt_2204;
 P1046 c_2205;
 P1046 tc_2206;
 int ro_2207;
 P1044 d_2208;
 P1044 p_2209;
 P1044 a_2210;
 rstr tcn_2211;
 rstr cell_2212;
 rstr fn_2213;
 rstr v_2214;
};
struct f_act_ref_666fr { int dummy;
 P1044 e_665;
 rstr result_;
 P1037 lv_2215;
 P1050 t_2216;
 P1046 c_2217;
 int ro_2218;
 rstr v_2219;
};
struct f_st_create_668fr { int dummy;
 P1044 s_667;
 P1054 y_2220;
 P1056 pm_2221;
 P1044 a_2222;
 P1037 lv_2223;
 P1050 lt_2224;
 P1050 vt_2225;
 P1046 lc_2226;
 int ro_2227;
 P1050 at_2228;
 P1046 ac_2229;
 int aro_2230;
 P1037 act_2231;
 rstr nf_2232;
 P1037 link_2233;
 rt_int i_2234;
 rstr v_2238;
};
struct f_hidden_var_672fr { int dummy;
 rstr *name_669;
 P1050 t_670;
 rstr *place_671;
 P1054 y_2239;
};
struct f_user_create_678fr { int dummy;
 P1044 s_673;
 P1054 y_674;
 rstr *uv_675;
 P1050 ut_676;
 rstr *nf_677;
 P1050 t_2240;
 P1067 saved_2241;
 P1067 hook_2242;
 P1044 un_2243;
 rstr hn_2244;
 rstr aa_2245;
 rstr uname_2246;
 rstr aname_2247;
 P1044 start_2248;
 P1044 an_2249;
};
struct f_wait_alt_683fr { int dummy;
 P1044 inv_679;
 rstr *arr_680;
 rt_int i_681;
 int mixed_682;
 rstr result_;
 P1037 lv_2250;
 P1050 t_2251;
 P1050 vt_2252;
 P1046 c_2253;
 int ro_2254;
 P1044 fn_2255;
 P1044 args_2256;
 rstr slot_2257;
 P1037 dv_2258;
 P1050 dt_2259;
 rstr tmp_2260;
 rstr v_2261;
 rstr v_2262;
};
struct f_builtin_wait_685fr { int dummy;
 P1044 inv_684;
 int result_;
 P1037 lv_2263;
 P1050 t_2264;
 P1046 c_2265;
 int ro_2266;
 P1067 saved_2267;
 int ok_2268;
};
struct f_wait_op_690fr { int dummy;
 P1044 inv_686;
 rstr *op_687;
 rstr *q_688;
 int is_stmt_689;
 rstr result_;
 P1044 x_2271;
 P1044 f_2272;
 P1044 qn_2273;
 P1050 t_2274;
 rstr r_2275;
};
struct f_user_wait_695fr { int dummy;
 P1044 s_691;
 rstr *arr_692;
 rstr *w_693;
 rt_int n_694;
 P1044 a_2276;
 rt_int i_2277;
 P1037 tests_2278;
 P1037 revokes_2279;
 P1044 inv_2280;
 P1044 st_2281;
 P1046 c_2282;
 P1050 qt_2283;
 rstr qname_2284;
 P1054 y_2285;
 rstr access_2286;
};
struct f_st_wait_697fr { int dummy;
 P1044 s_696;
 P1044 a_2287;
 rt_int n_2288;
 int first_2289;
 P1067 inits_2290;
 int user_2291;
 rstr arr_2292;
 rstr w_2293;
 P1044 inv_2294;
 P1044 inv_2295;
 P1037 conds_2296;
 rt_int i_2297;
};
struct f_call_node_701fr { int dummy;
 rstr *name_698;
 P1044 arg_699;
 rt_int line_700;
 P1044 result_;
 P1044 x_2301;
 P1044 f_2302;
};
struct f_user_region_703fr { int dummy;
 P1044 s_702;
 P1050 t_2303;
 rstr f_2304;
 rstr lock_2305;
 rstr unlock_2306;
};
struct f_st_region_705fr { int dummy;
 P1044 s_704;
 P1037 lv_2307;
 P1050 t_2308;
 P1046 c_2309;
 int ro_2310;
 rstr lk_2311;
 rstr f_2312;
};
struct f_gparam_708fr { int dummy;
 P1044 g_706;
 rstr *name_707;
 P1044 result_;
 P1044 p_2313;
};
struct f_bind_sym_710fr { int dummy;
 P1044 p_709;
 P1054 result_;
 P1054 y_2314;
};
struct f_same_binds_713fr { int dummy;
 P1054 a_711;
 P1054 b_712;
 int result_;
 P1054 x_2315;
 P1054 y_2316;
};
struct f_same_binding_716fr { int dummy;
 P1054 a_714;
 P1054 b_715;
 int result_;
};
struct f_tt_binds_721fr { int dummy;
 P1044 gd_717;
 P1044 formals_718;
 P1044 actuals_719;
 rt_int line_720;
 P1054 result_;
 P1044 f_2317;
 P1044 a_2318;
 P1054 binds_2319;
 P1046 c_2320;
 P1050 at_2321;
 P1044 p_2322;
 P1054 b_2323;
 P1044 st_2324;
 int ok_2325;
 int ok_2326;
};
struct f_type_allowed_725fr { int dummy;
 P1050 t_722;
 P1044 items_723;
 P1054 binds_724;
 int result_;
 P1044 it_2327;
 P1050 b_2328;
 rstr w_2329;
 P1046 c_2330;
};
struct f_resolve_in_binds_729fr { int dummy;
 P1044 st_726;
 P1054 binds_727;
 P1046 *c_728;
 P1046 c_728v;
 P1050 result_;
 P1054 b_2331;
 P1050 t_2332;
 P1054 z_2333;
};
struct f_pick_operation_736fr { int dummy;
 rt_int kind_730;
 rstr *name_731;
 P1044 sig_732;
 P1044 res_733;
 P1054 binds_734;
 rt_int line_735;
 P1054 result_;
 P1054 y_2334;
 P1046 c_2335;
 rt_int want_2336;
 rt_int pass_2337;
 int ok_2341;
 P1044 s_2342;
 P1056 pm_2343;
};
struct f_kind_word_738fr { int dummy;
 rt_int kind_737;
 rstr result_;
};
struct f_need_binds_742fr { int dummy;
 P1044 gd_739;
 P1054 binds_740;
 rt_int line_741;
 P1054 result_;
 P1044 it_2344;
 P1054 r_2345;
 int found_2346;
 P1054 y_2347;
 P1054 z_2348;
};
struct f_generic_use_744fr { int dummy;
 P1044 st_743;
 int result_;
};
struct f_infer_from_749fr { int dummy;
 P1044 gd_745;
 P1044 pat_746;
 P1050 t_747;
 P1054 known_748;
 P1054 result_;
 P1054 binds_2349;
 P1044 e_2350;
 P1044 tp_2351;
 P1037 nm_2352;
 P1054 q_2353;
 int have_2354;
 P1054 g_2355;
 P1054 b_2356;
};
struct f_instantiate_type_755fr { int dummy;
 P1054 g_750;
 P1044 tt_751;
 P1044 args_752;
 P1046 *c_753;
 P1046 c_753v;
 rt_int line_754;
 P1050 result_;
 P1044 gd_2357;
 P1044 pat_2358;
 P1054 binds_2359;
 P1054 inst_2360;
 P1050 t_2361;
 P1071 saved_caps_2362;
 P1058 saved_env_2363;
 rt_int saved_gdepth_2364;
 P1054 b_2365;
 P1054 y_2366;
 P1046 yc_2367;
};
struct f_instantiate_760fr { int dummy;
 P1054 g_756;
 P1044 tt_757;
 P1044 args_758;
 rt_int line_759;
 P1054 result_;
 P1044 gd_2369;
 P1044 pat_2370;
 P1054 binds_2371;
 P1044 f_2372;
 P1044 a_2373;
 P1044 fp_2374;
 P1054 inst_2375;
 P1050 at_2376;
 P1046 c_2377;
 P1061 saved_fctx_2378;
 int saved_in_2379;
 rt_int saved_level_2380;
 P1054 saved_sym_2381;
 P1067 saved_code_2382;
 P1058 saved_env_2383;
 rt_int saved_gdepth_2384;
 rstr v_2385;
 int known_2386;
 P1054 q_2387;
 P1054 b_2388;
 rstr v_2389;
 P1054 b_2390;
};
struct f_access_of_762fr { int dummy;
 P1054 y_761;
 rstr result_;
 P1037 p_2391;
 rt_int i_2392;
};
struct f_import_of_765fr { int dummy;
 P1044 l_763;
 rstr *name_764;
 P1044 result_;
 P1044 p_2396;
};
struct f_check_import_768fr { int dummy;
 P1054 y_766;
 rt_int line_767;
 int result_;
 P1061 c_2397;
 int ro_2398;
 P1044 imp_2399;
};
struct f_c_ident_770fr { int dummy;
 rstr *s_769;
 rstr result_;
 P1037 r_2400;
 rt_int i_2401;
};
struct f_cell_deref_773fr { int dummy;
 P1050 t_771;
 rstr *p_772;
 rstr result_;
};
struct f_deref_776fr { int dummy;
 rstr *base_774;
 P1050 t_775;
 rstr result_;
};
struct f_is_lvalue_778fr { int dummy;
 P1044 e_777;
 int result_;
 P1054 y_2405;
};
struct f_lvalue_784fr { int dummy;
 P1044 e_779;
 P1037 *code_780;
 P1037 code_780v;
 P1050 *t_781;
 P1050 t_781v;
 P1046 *c_782;
 P1046 c_782v;
 int *ro_783;
 int ro_783v;
 P1037 base_2406;
 P1050 bt_2407;
 P1046 bc_2408;
 P1054 y_2409;
};
struct f_select_on_792fr { int dummy;
 rstr *base_785;
 P1050 bt_786;
 P1044 e_787;
 int *ro_788;
 P1037 *code_789;
 P1037 code_789v;
 P1050 *t_790;
 P1050 t_790v;
 P1046 *c_791;
 P1046 c_791v;
 P1044 p_2410;
 P1046 pc_2411;
 P1044 p_2412;
 P1052 f_2413;
 rt_int i_2414;
 rstr fn_2415;
 P1052 f_2416;
};
struct f_has_call_794fr { int dummy;
 rstr *s_793;
 int result_;
 rt_int i_2417;
};
struct f_need_slice_796fr { int dummy;
 P1050 t_795;
 rstr c_2421;
 rstr n_2422;
 P1048 l_2423;
};
struct f_ix_800fr { int dummy;
 rstr *i_797;
 rstr *lo_798;
 rstr *hi_799;
 rstr result_;
};
struct f_index_on_809fr { int dummy;
 rstr *base_801;
 P1050 bt_802;
 P1044 e_803;
 int *ro_804;
 int lv_805;
 P1037 *code_806;
 P1037 code_806v;
 P1050 *t_807;
 P1050 t_807v;
 P1046 *c_808;
 P1046 c_808v;
 P1044 a_2425;
 P1050 it_2426;
 rstr lo_2427;
 rstr hi_2428;
 P1037 off_2429;
 rt_int k_2430;
 P1037 b_2431;
 P1037 pre_2432;
 rstr i_2433;
 rstr l_2434;
 rstr h_2435;
 rstr lo_2436;
 rstr hi_2437;
 rstr i_2438;
};
struct f_own_attribute_811fr { int dummy;
 P1044 e_810;
 int result_;
 P1067 saved_2439;
 P1050 bt_2440;
 int ok_2441;
 rstr base_2444;
 P1044 p_2445;
 P1052 f_2446;
};
struct f_gexpr_815fr { int dummy;
 P1044 e_812;
 P1050 want_813;
 P1050 *t_814;
 P1050 t_814v;
 rstr result_;
 rt_int k_2447;
 P1037 code_2448;
 P1046 c_2449;
 int ro_2450;
 P1050 bt_2451;
 P1046 ctx_2452;
 int whole_2453;
 P1037 r_2454;
 rt_int i_2455;
 rt_int pos_2459;
 rt_int i_2460;
 P1054 y_2461;
 int ro_2462;
 P1044 call_2463;
 P1044 fname_2464;
 rstr a_2465;
 rstr a_2466;
 rstr a_2467;
 P1044 nm_2468;
 P1054 y_2469;
 rstr base_2470;
 rstr base_2471;
};
struct f_resolved_818fr { int dummy;
 P1044 e_816;
 P1050 *t_817;
 P1050 t_817v;
 rstr result_;
 P1046 c_2472;
 P1050 vt_2473;
 P1054 y_2474;
 P1044 tt_2475;
 P1044 call_2476;
 P1044 f_2477;
 P1044 fname_2478;
 rstr v_2479;
};
struct f_gexpr_base_821fr { int dummy;
 P1044 e_819;
 P1050 *t_820;
 P1050 t_820v;
 rstr result_;
};
struct f_gexpr_in_826fr { int dummy;
 P1044 e_822;
 P1050 want_823;
 P1046 c_824;
 P1050 *t_825;
 P1050 t_825v;
 rstr result_;
};
struct f_ascii_lit_828fr { int dummy;
 int ch_827;
 rstr result_;
 P1044 l_2480;
 rt_int i_2481;
};
struct f_octal_830fr { int dummy;
 rt_int n_829;
 rstr result_;
 rstr r_2485;
};
struct f_str_cat_part_832fr { int dummy;
 P1050 t_831;
 P1050 result_;
};
struct f_peek_type_834fr { int dummy;
 P1044 e_833;
 P1050 result_;
 P1067 saved_2486;
 P1050 t_2487;
 rstr v_2490;
};
struct f_set_operands_837fr { int dummy;
 P1044 e_835;
 P1050 want_836;
 P1050 result_;
 P1050 t_2491;
};
struct f_user_dot_839fr { int dummy;
 P1044 e_838;
 P1044 result_;
 P1044 arg_2492;
};
struct f_user_subscript_841fr { int dummy;
 P1044 e_840;
 P1044 result_;
 P1037 name_2493;
 P1044 args_2494;
 P1044 tail_2495;
 P1044 a_2496;
};
struct f_op_call_845fr { int dummy;
 rstr *name_842;
 P1044 args_843;
 rt_int line_844;
 P1044 result_;
 P1044 call_2497;
 P1044 f_2498;
};
struct f_derived_relation_847fr { int dummy;
 P1044 e_846;
 P1044 result_;
 P1044 l_2499;
 P1044 r_2500;
 int has_eq_2501;
 int has_lt_2502;
};
struct f_rel_node_852fr { int dummy;
 rstr *op_848;
 P1044 a_849;
 P1044 b_850;
 rt_int line_851;
 P1044 result_;
};
struct f_rel_not_855fr { int dummy;
 P1044 x_853;
 rt_int line_854;
 P1044 result_;
 P1044 n_2503;
};
struct f_copy_node_857fr { int dummy;
 P1044 e_856;
 P1044 result_;
 P1044 x_2504;
};
struct f_wrap_apply_859fr { int dummy;
 P1044 e_858;
 P1044 result_;
 P1044 x_2506;
};
struct f_c_string_861fr { int dummy;
 rstr *s_860;
 rstr result_;
 rt_int n_2507;
 rt_int i_2508;
 rstr r_2512;
 rt_int j_2513;
 rt_int i_2514;
};
struct f_enum_type_of_864fr { int dummy;
 rstr *lit_862;
 rt_int line_863;
 P1050 result_;
 P1054 y_2518;
 P1046 c_2519;
 P1044 st_2520;
};
struct f_ptr_attribute_866fr { int dummy;
 P1044 e_865;
 int result_;
 P1037 lv_2521;
 P1050 t_2522;
 P1046 c_2523;
 int ro_2524;
 P1044 p_2525;
 P1067 saved_2526;
};
struct f_attribute_869fr { int dummy;
 P1044 e_867;
 P1050 *t_868;
 P1050 t_868v;
 rstr result_;
 P1050 bt_2527;
 P1046 c_2528;
 P1037 base_2529;
 P1044 sub_2530;
 rstr name_2531;
 P1044 p_2532;
 P1044 a_2533;
 P1046 pc_2534;
 rstr v_2535;
 P1044 p_2536;
 P1044 a_2537;
 P1050 pt_2538;
 rstr v_2539;
};
struct f_subtype_compare_874fr { int dummy;
 P1044 sa_870;
 P1044 sb_871;
 rstr *op_872;
 rt_int line_873;
 rstr result_;
 P1046 ca_2540;
 P1046 cb_2541;
 P1050 ta_2542;
 P1050 tb_2543;
 P1037 r_2544;
 rstr yes_2545;
 rstr no_2546;
 rt_int k_2547;
 P1044 a_2551;
 P1044 b_2552;
 P1050 at_2553;
 P1050 bt2_2554;
 rstr x_2555;
 rstr y_2556;
};
struct f_float_prec_876fr { int dummy;
 P1046 c_875;
 rstr result_;
};
struct f_file_attribute_882fr { int dummy;
 P1044 e_877;
 P1050 bt_878;
 P1046 c_879;
 P1037 base_880;
 P1050 *t_881;
 P1050 t_881v;
 rstr result_;
};
struct f_gbinop_886fr { int dummy;
 P1044 e_883;
 P1050 want_884;
 P1050 *t_885;
 P1050 t_885v;
 rstr result_;
 P1037 op_2557;
 P1050 ta_2558;
 P1050 tb_2559;
 P1050 hint_2560;
 P1054 uy_2561;
 P1044 l_2562;
 P1044 r_2563;
 P1044 call_2564;
 P1044 fname_2565;
 rstr s_2566;
 rstr a_2567;
 rstr a_2568;
 rstr b_2569;
 rstr a_2570;
 rstr b_2571;
 P1050 at_2572;
 rstr a_2573;
 rstr b_2574;
 P1050 wa_2575;
 P1050 wb_2576;
 P1050 ws_2577;
 P1050 ce_2578;
 rstr a_2579;
 rstr b_2580;
 rstr dummy_2581;
 rstr a_2582;
 rstr b_2583;
 P1050 ct_2584;
 rstr a_2585;
 rstr b_2586;
};
struct f_constructor_891fr { int dummy;
 P1044 e_887;
 P1050 want_888;
 P1046 ctx_889;
 P1050 *t_890;
 P1050 t_890v;
 rstr result_;
 P1044 it_2587;
 P1052 f_2588;
 P1050 vt_2589;
 P1037 s_2590;
 rstr v_2591;
 rt_int i_2592;
 rstr tmp_2593;
 rstr v_2594;
 rstr tmp_2595;
 P1037 parts_2596;
 P1044 k_2597;
 P1037 shared_2598;
 rstr v_2599;
 rstr v_2600;
};
struct f_comp_value_895fr { int dummy;
 P1050 t_892;
 P1046 c_893;
 rstr *v_894;
 rstr result_;
 rstr ct_2601;
};
struct f_has_at_897fr { int dummy;
 rstr *s_896;
 int result_;
 rt_int i_2602;
};
struct f_set_elem_900fr { int dummy;
 P1050 st_898;
 rstr *v_899;
 rstr result_;
};
struct f_array_cons_905fr { int dummy;
 P1044 e_901;
 P1050 at_902;
 P1046 ctx_903;
 P1050 *t_904;
 P1050 t_904v;
 rstr result_;
 rstr tmp_2606;
 P1037 parts_2607;
 P1044 it_2608;
 int positional_2609;
 rt_int k_2610;
 P1037 lo_2614;
 P1037 hi_2615;
};
struct f_fill_items_911fr { int dummy;
 P1044 items_906;
 P1050 at_907;
 rstr *tmp_908;
 P1048 prefix_909;
 rt_int dim_910;
 rstr result_;
 P1044 it_2616;
 rt_int pos_2617;
 P1037 r_2618;
 P1050 vt_2619;
 rstr v_2620;
 P1044 k_2621;
 rt_int d_2622;
 P1048 pre_2623;
 P1037 loops_2624;
 P1037 ends_2625;
 rstr v_2626;
 rstr xv_2627;
 P1044 k_2628;
 rstr xv_2629;
 rstr v_2630;
};
struct f_e_line_913fr { int dummy;
 P1044 e_912;
 rt_int result_;
};
struct f_add_line_916fr { int dummy;
 P1048 l_914;
 rstr *s_915;
 P1048 result_;
 P1048 r_2631;
 P1048 tail_2632;
 P1048 x_2633;
 P1048 p_2634;
};
struct f_item_value_921fr { int dummy;
 P1044 e_917;
 P1050 at_918;
 rt_int line_919;
 P1050 *vt_920;
 P1050 vt_920v;
 rstr result_;
 rstr v_2637;
};
struct f_key_loop_926fr { int dummy;
 P1044 k_922;
 P1050 at_923;
 rt_int d_924;
 rstr *xv_925;
 rstr result_;
 P1050 it_2638;
 rstr lo_2639;
 rstr hi_2640;
};
struct f_store_at_931fr { int dummy;
 P1050 at_927;
 rstr *tmp_928;
 P1048 xs_929;
 rt_int n_930;
 rstr result_;
 P1037 off_2641;
 P1048 x_2642;
 rt_int k_2643;
 rstr l_2644;
 rstr h_2645;
};
struct f_fits_934fr { int dummy;
 P1054 y_932;
 P1044 args_933;
 int result_;
 P1044 a_2646;
 P1056 pm_2647;
 P1050 t_2648;
 P1067 saved_2649;
 int ok_2650;
 P1037 lv_2651;
 P1046 lc_2652;
 int ro_2653;
 rstr v_2656;
};
struct f_resolve_overload_940fr { int dummy;
 rstr *name_935;
 P1044 tt_936;
 P1044 args_937;
 int is_stmt_938;
 rt_int line_939;
 P1054 result_;
 P1054 y_2657;
 P1054 first_2658;
 rt_int n_2659;
 rt_int pass_2660;
};
struct f_tt_fits_943fr { int dummy;
 P1054 y_941;
 P1044 tt_942;
 int result_;
 P1044 f_2664;
 P1044 a_2665;
 P1067 saved_2666;
 int ok_2667;
 P1046 fc_2670;
 P1046 ac_2671;
 P1044 fst_2672;
 P1050 ft_2673;
 P1050 at_2674;
 P1044 ast_2675;
};
struct f_overload_chain_946fr { int dummy;
 rstr *name_944;
 rt_int pass_945;
 P1054 result_;
};
struct f_is_builtin_948fr { int dummy;
 rstr *n_947;
 int result_;
};
struct f_is_low_level_950fr { int dummy;
 rstr *n_949;
 int result_;
};
struct f_me_high_954fr { int dummy;
 P1044 tt_951;
 rt_int line_952;
 P1050 *t_953;
 P1050 t_953v;
 rstr result_;
 P1046 c_2676;
};
struct f_type_tag_956fr { int dummy;
 P1050 t_955;
 rstr result_;
};
struct f_lock_ref_959fr { int dummy;
 P1044 e_957;
 rstr *name_958;
 rstr result_;
 P1037 lv_2677;
 P1050 t_2678;
 P1046 c_2679;
 int ro_2680;
};
struct f_user_op_962fr { int dummy;
 rstr *op_960;
 P1044 args_961;
 P1054 result_;
 P1054 y_2681;
 rt_int pass_2682;
};
struct f_gcall_966fr { int dummy;
 P1044 e_963;
 int is_stmt_964;
 P1050 *t_965;
 P1050 t_965v;
 rstr result_;
 P1044 gd_2686;
 P1044 fn_2687;
 P1044 tt_2688;
 P1054 y_2689;
 P1037 args_2690;
 P1044 a_2691;
 P1056 pm_2692;
 P1050 lt_2693;
 P1050 vt_2694;
 P1037 lv_2695;
 P1046 lc_2696;
 int ro_2697;
 P1054 alt_2698;
 P1071 cr_2699;
 rt_int i_2700;
 rstr v_2704;
 rstr ct_2705;
 rstr v_2706;
 rstr chk_2707;
};
struct f_requires_968fr { int dummy;
 P1054 y_967;
 P1048 result_;
 P1044 imp_2708;
};
struct f_add_req_971fr { int dummy;
 P1054 y_969;
 rstr *name_970;
 P1048 l_2709;
};
struct f_require_calls_974fr { int dummy;
 P1054 y_972;
 P1044 e_973;
 P1044 x_2711;
 P1044 callee_2712;
 P1054 z_2713;
 P1048 l_2714;
};
struct f_declared_in_977fr { int dummy;
 P1044 elems_975;
 rstr *name_976;
 int result_;
 P1044 e_2715;
};
struct f_check_requires_980fr { int dummy;
 P1054 y_978;
 rt_int line_979;
 P1048 l_2716;
 P1054 z_2717;
};
struct f_act_delay_args_982fr { int dummy;
 P1044 args_981;
 rstr result_;
 P1050 at_2718;
 P1050 t1_2719;
 rstr a_2720;
 rstr v_2721;
 rstr v_2722;
};
struct f_same_subtypes_985fr { int dummy;
 P1044 gd_983;
 P1044 args_984;
 rstr result_;
 P1044 p_2723;
 P1037 r_2724;
 P1044 fp_2725;
 P1044 a_2726;
 P1037 flo_2727;
 P1037 fhi_2728;
 P1050 st_2729;
 P1046 c_2730;
 P1037 base_2731;
 P1037 lo_2732;
 P1037 hi_2733;
};
struct f_mailbox_low_990fr { int dummy;
 rstr *name_986;
 P1044 args_987;
 rt_int line_988;
 P1050 *t_989;
 P1050 t_989v;
 rstr result_;
 P1037 qv_2734;
 P1037 mv_2735;
 P1037 dv_2736;
 P1050 qt_2737;
 P1050 mt_2738;
 P1050 dt_2739;
 P1050 at_2740;
 P1046 c_2741;
 int ro_2742;
 int send_2743;
 rstr v_2744;
};
struct f_exponent_want_993fr { int dummy;
 rstr *op_991;
 P1050 ta_992;
 P1050 result_;
};
struct f_file_ref_997fr { int dummy;
 P1044 e_994;
 int text_995;
 rt_int line_996;
 rstr result_;
 P1050 t_2745;
 rstr f_2746;
};
struct f_text_file_999fr { int dummy;
 P1050 t_998;
 int result_;
};
struct f_conversion_1004fr { int dummy;
 P1044 tt_1000;
 P1044 args_1001;
 rt_int line_1002;
 P1050 *t_1003;
 P1050 t_1003v;
 rstr result_;
 P1046 c_2747;
 P1050 at_2748;
 P1050 target_2749;
 rstr a_2750;
 P1037 r_2751;
};
struct f_float_digits_1006fr { int dummy;
 P1044 e_1005;
 rstr result_;
 P1037 lv_2752;
 P1050 t_2753;
 P1046 c_2754;
 int ro_2755;
 rt_int n_2756;
 int lead_2757;
 rt_int i_2758;
 P1067 saved_2762;
};
struct f_enum_names_1008fr { int dummy;
 P1050 t_1007;
 rstr result_;
 P1044 l_2763;
 P1037 r_2764;
};
struct f_explicit_rep_1010fr { int dummy;
 P1044 e_1009;
 int result_;
 P1050 bt_2765;
};
struct f_actual_bounds_1014fr { int dummy;
 P1050 ft_1011;
 P1050 t_1012;
 P1046 c_1013;
 rstr result_;
};
struct f_builtin_1021fr { int dummy;
 rstr *name_1015;
 P1044 tt_1016;
 P1044 args_1017;
 rt_int line_1018;
 int is_stmt_1019;
 P1050 *t_1020;
 P1050 t_1020v;
 rstr result_;
 P1050 at_2766;
 rt_int n_2767;
 rstr a_2768;
 rstr a_2769;
 rstr a_2770;
 rstr a_2771;
 rstr a_2772;
 rstr a_2773;
 rstr a_2774;
 rstr n1_2775;
 rstr m1_2776;
 rstr a_2777;
 rstr f_2778;
 rstr a_2779;
 rstr a_2780;
 P1050 ft_2781;
 rstr f_2782;
 P1037 lv_2783;
 P1046 lc_2784;
 int ro_2785;
 rstr a_2786;
 P1037 lv_2787;
 P1046 lc_2788;
 int ro_2789;
 rstr f_2790;
 P1037 lv_2791;
 P1046 lc_2792;
 int ro_2793;
 rstr f_2794;
 rstr nm_2795;
 rstr st_2796;
 rstr f_2797;
 rstr d_2798;
 rstr f_2799;
 rstr v_2800;
 rstr a_2801;
 rstr b_2802;
 P1037 lv_2803;
 P1037 dv_2804;
 P1046 lc_2805;
 int ro_2806;
 P1050 mt_2807;
 P1050 dt_2808;
 rstr v_2809;
 P1037 lv_2810;
 P1046 lc_2811;
 int ro_2812;
 P1050 mt_2813;
 P1037 lv_2814;
 P1037 dv_2815;
 P1037 bv_2816;
 P1046 lc_2817;
 int ro_2818;
 P1050 mt_2819;
 P1050 dt_2820;
 P1050 bt_2821;
 rstr v_2822;
 rstr v_2823;
 rstr v_2824;
 rstr v_2825;
 rstr a_2826;
 P1037 bv_2827;
 P1046 bc_2828;
 int ro_2829;
 P1050 bt_2830;
 rstr l_2831;
 P1037 pv_2832;
 P1046 pc_2833;
 int ro_2834;
 P1050 pt_2835;
 rstr dev_2836;
 rstr cmd_2837;
 rstr v_2838;
 P1037 dv_2839;
 P1046 dc_2840;
 int ro_2841;
 P1050 dt_2842;
};
struct f_with_library_1023fr { int dummy;
 P1044 units_1022;
 P1044 result_;
 P1044 r_2843;
 int more_2844;
 P1037 missing_2845;
 rt_int saved_2846;
 P1044 lib_2847;
 P1044 t_2848;
};
struct f_external_missing_1026fr { int dummy;
 P1044 e_1024;
 P1044 units_1025;
 P1037 result_;
 P1044 x_2849;
 P1037 r_2850;
 P1037 r_2851;
};
struct f_unit_named_1029fr { int dummy;
 P1044 units_1027;
 rstr *name_1028;
 int result_;
 P1044 u_2852;
};
struct f_tried_1031fr { int dummy;
 rstr *name_1030;
 int result_;
};
struct f_mark_tried_1033fr { int dummy;
 rstr *name_1032;
 P1048 l_2853;
};
struct f_translate_1035fr { int dummy;
 P1044 units_1034;
 P1044 u_2855;
 P1044 l_2857;
 rstr w_2858;
};
struct f_print_program_1036fr { int dummy;
};
struct Pc1038 { rt_int p_n; rstr all; };
struct Pc1042 { rt_int p_n; A1043 all; };
struct Pc1059 { rt_int p_n; A1060 all; };
static void as_R1074(R1074 *d, R1074 s);
static R1074 cp_R1074(R1074 s);
static int eq_R1074(R1074 a, R1074 b);
static void as_R1072(R1072 *d, R1072 s);
static R1072 cp_R1072(R1072 s);
static int eq_R1072(R1072 a, R1072 b);
static void as_R1070(R1070 *d, R1070 s);
static R1070 cp_R1070(R1070 s);
static int eq_R1070(R1070 a, R1070 b);
static void as_R1068(R1068 *d, R1068 s);
static R1068 cp_R1068(R1068 s);
static int eq_R1068(R1068 a, R1068 b);
static void as_R1066(R1066 *d, R1066 s);
static R1066 cp_R1066(R1066 s);
static int eq_R1066(R1066 a, R1066 b);
static void as_R1064(R1064 *d, R1064 s);
static R1064 cp_R1064(R1064 s);
static int eq_R1064(R1064 a, R1064 b);
static void as_R1062(R1062 *d, R1062 s);
static R1062 cp_R1062(R1062 s);
static int eq_R1062(R1062 a, R1062 b);
static void as_A1060(A1060 *d, A1060 s);
static A1060 cp_A1060(A1060 s);
static int eq_A1060(A1060 a, A1060 b);
static void as_R1057(R1057 *d, R1057 s);
static R1057 cp_R1057(R1057 s);
static int eq_R1057(R1057 a, R1057 b);
static void as_R1055(R1055 *d, R1055 s);
static R1055 cp_R1055(R1055 s);
static int eq_R1055(R1055 a, R1055 b);
static void as_R1053(R1053 *d, R1053 s);
static R1053 cp_R1053(R1053 s);
static int eq_R1053(R1053 a, R1053 b);
static void as_R1051(R1051 *d, R1051 s);
static R1051 cp_R1051(R1051 s);
static int eq_R1051(R1051 a, R1051 b);
static void as_R1049(R1049 *d, R1049 s);
static R1049 cp_R1049(R1049 s);
static int eq_R1049(R1049 a, R1049 b);
static void as_R1047(R1047 *d, R1047 s);
static R1047 cp_R1047(R1047 s);
static int eq_R1047(R1047 a, R1047 b);
static void as_R1045(R1045 *d, R1045 s);
static R1045 cp_R1045(R1045 s);
static int eq_R1045(R1045 a, R1045 b);
static void as_A1043(A1043 *d, A1043 s);
static A1043 cp_A1043(A1043 s);
static int eq_A1043(A1043 a, A1043 b);
static void as_R1040(R1040 *d, R1040 s);
static R1040 cp_R1040(R1040 s);
static int eq_R1040(R1040 a, R1040 b);
static P1037 f_mk_3(rstr *s_2);
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
static P1067 f_new_buffer_24(void);
static void f_put_27(P1067 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P1067 b_30);
static void f_splice_34(P1067 a_32, P1067 b_33);
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
static int f_read_library_60(rstr *name_59);
static void f_write_library_62(P1044 u_61);
static P1044 f_nn_65(rt_int kind_63, rt_int line_64);
static void f_append_69(P1044 *head_66, P1044 *tail_67, P1044 x_68);
static rt_int f_list_len_71(P1044 l_70);
static rt_int f_cur_line_72(void);
static int f_at_kw_74(rstr *w_73);
static int f_at_op_76(rstr *w_75);
static int f_at_kind_78(rt_int k_77);
static rt_int f_kind_at_80(rt_int k_79);
static P1037 f_text_at_82(rt_int k_81);
static void f_perror_84(rstr *msg_83);
static int f_accept_kw_86(rstr *w_85);
static int f_accept_op_88(rstr *w_87);
static void f_expect_kw_90(rstr *w_89);
static void f_expect_op_92(rstr *w_91);
static P1037 f_expect_id_93(void);
static P1044 f_name_node_94(void);
static P1044 f_id_list_95(void);
static P1044 f_p_subtype_96(void);
static P1044 f_constraint_list_97(void);
static P1044 f_actual_params_98(void);
static int f_is_type_word_100(rstr *w_99);
static P1044 f_actual_tt_101(void);
static P1044 f_binop_106(P1037 op_102, P1044 l_103, P1044 r_104, rt_int line_105);
static P1044 f_expr_107(void);
static P1044 f_expr_and_108(void);
static P1044 f_expr_not_109(void);
static int f_is_rel_111(rstr *s_110);
static P1044 f_expr_rel_112(void);
static P1044 f_expr_add_113(void);
static P1044 f_expr_mul_114(void);
static P1044 f_expr_pow_115(void);
static P1044 f_expr_prefix_116(void);
static P1044 f_postfix_117(void);
static P1044 f_primary_118(void);
static P1044 f_constructor_item_119(void);
static int f_at_body_end_120(void);
static P1044 f_body_121(void);
static P1044 f_body_element_122(void);
static P1044 f_declaration_123(void);
static P1044 f_object_decl_124(void);
static P1044 f_abbrev_decl_125(void);
static P1044 f_rep_spec_126(void);
static P1044 f_rep_items_127(void);
static int f_rep_word_129(rt_int k_128);
static P1044 f_rep_item_130(void);
static P1044 f_type_decl_131(void);
static rt_int f_mode_of_133(rstr *w_132);
static P1044 f_formal_params_134(void);
static int f_imports_list_136(P1044 owner_135);
static int f_is_definable_138(rstr *w_137);
static P1037 f_definable_name_139(void);
static P1044 f_subprogram_decl_140(void);
static P1044 f_capsule_decl_141(void);
static P1044 f_formal_tt_142(void);
static P1044 f_generic_decl_143(void);
static P1044 f_type_list_144(void);
static P1044 f_task_decl_145(void);
static P1044 f_expose_decl_146(void);
static int f_is_compound_kw_148(rstr *w_147);
static P1044 f_statement_149(void);
static P1044 f_unlabeled_statement_150(void);
static P1044 f_arm_154(P1044 cond_151, P1044 b_152, rt_int line_153);
static P1044 f_if_stmt_155(void);
static P1044 f_case_stmt_156(void);
static P1044 f_repeat_stmt_157(void);
static P1044 f_guard_stmt_158(void);
static P1044 f_program_159(void);
static rt_int f_hash_161(rstr *s_160);
static P1054 f_lookup_163(rstr *name_162);
static P1054 f_lookup_decl_165(P1044 d_164);
static void f_define_168(P1054 y_166, rt_int line_167);
static int f_overloadable_170(P1054 y_169);
static int f_same_tt_173(P1044 a_171, P1044 b_172);
static int f_same_signature_176(P1056 a_174, P1056 b_175);
static void f_open_scope_177(void);
static void f_close_scope_178(void);
static P1054 f_new_sym_181(rt_int kind_179, P1037 name_180);
static P1050 f_new_typ_183(rt_int kind_182);
static P1046 f_new_cons_184(void);
static int f_scalar_kind_186(P1050 t_185);
static rstr f_bound_ctype_188(P1050 t_187);
static rstr f_cbound_191(P1046 c_189, rstr *b_190);
static rstr f_clo_193(P1046 c_192);
static rstr f_chi_195(P1046 c_194);
static rstr f_sub_lo_198(P1050 t_196, P1046 c_197);
static rstr f_sub_hi_201(P1050 t_199, P1046 c_200);
static rstr f_raw_storage_204(rstr *name_202, rstr *ct_203);
static P1046 f_copy_cons_206(P1046 c_205);
static P1046 f_freeze_209(P1046 c_207, P1050 t_208);
static rstr f_checked_213(P1050 t_210, P1046 c_211, rstr *v_212);
static int f_same_lits_216(P1044 a_214, P1044 b_215);
static P1050 f_str_elem_218(P1050 t_217);
static int f_same_221(P1050 a_219, P1050 b_220);
static P1050 f_base_of_223(P1050 t_222);
static P1046 f_base_cons_226(P1050 t_224, P1046 c_225);
static rstr f_kind_name_228(P1050 t_227);
static void f_check_type_232(P1050 got_229, P1050 want_230, rt_int line_231);
static rstr f_ctype_234(P1050 t_233);
static rstr f_struct_body_236(P1050 t_235);
static rstr f_field_decls_238(P1050 t_237);
static void f_declare_ctype_240(P1050 t_239);
static rstr f_dim_lo_242(rt_int k_241);
static rstr f_dim_hi_244(rt_int k_243);
static rstr f_more_dims_246(P1050 t_245);
static rstr f_acnt_249(P1050 t_247, rstr *base_248);
static P1037 f_cons_lo_252(P1046 c_250, rt_int k_251);
static P1037 f_cons_hi_255(P1046 c_253, rt_int k_254);
static P1050 f_idx_type_258(P1050 t_256, rt_int k_257);
static void f_init_ascii_259(void);
static P1050 f_enum2_262(rstr *a_260, rstr *b_261);
static rt_int f_lit_index_265(P1044 lits_263, rstr *name_264);
static P1050 f_resolve_subtype_268(P1044 st_266, P1046 *c_267);
static int f_float_lit_270(P1044 e_269);
static void f_tag_constraint_274(P1050 t_271, P1044 e_272, P1046 c_273);
static P1050 f_named_subtype_277(P1044 st_275, P1046 *c_276);
static P1050 f_invoke_abbrev_281(P1054 y_278, P1044 st_279, P1046 *c_280);
static void f_apply_constraint_286(P1050 t_282, P1044 args_283, P1046 c_284, rt_int line_285);
static P1050 f_value_subtype_290(P1044 e_287, P1046 *c_288, P1037 *base_289);
static P1048 f_reverse_pairs_292(P1048 l_291);
static P1050 f_inquiry_295(P1044 st_293, P1046 *c_294);
static P1044 f_as_subtype_297(P1044 e_296);
static P1044 f_tt_subtype_302(P1037 name_298, P1044 tt_299, P1044 args_300, rt_int line_301);
static int f_type_name_304(rstr *name_303);
static rstr f_empty_set_306(P1050 t_305);
static int f_sparse_set_308(P1050 t_307);
static rstr f_set_fn_311(P1050 t_309, rstr *op_310);
static int f_opened_313(P1050 t_312);
static rstr f_replace_all_317(rstr *s_314, rstr *pat_315, rstr *r_316);
static rstr f_subst_319(rstr *s_318);
static P1050 f_new_type_323(P1054 y_320, P1044 st_321, P1046 *c_322);
static rt_int f_needed_bits_326(P1050 t_324, P1046 c_325);
static int f_has_digits_only_328(rstr *s_327);
static int f_built_in_only_330(P1050 t_329);
static void f_check_rep_337(P1044 items_331, P1050 t_332, P1046 c_333, int top_334, int indirect_335, P1044 d_336);
static int f_formal_named_340(P1044 d_338, rstr *name_339);
static int f_unchecked_free_342(P1050 t_341);
static void f_init_storage_346(rstr *lval_343, P1050 t_344, P1046 c_345);
static rstr f_init_call_349(P1054 y_347, rstr *lval_348);
static int f_needs_fin_351(P1050 t_350);
static rstr f_fin_code_354(rstr *lval_352, P1050 t_353);
static P1050 f_tparam_type_357(P1050 t_355, rstr *name_356);
static void f_make_storage_361(rstr *lval_358, P1050 t_359, P1046 c_360);
static int f_flat_363(P1050 t_362);
static int f_storable_365(P1050 t_364);
static rstr f_ser_name_367(P1050 t_366);
static rstr f_ser_write_370(P1050 t_368, rstr *v_369);
static rstr f_ser_read_373(P1050 t_371, rstr *v_372);
static rstr f_uninit_value_375(P1050 t_374);
static rstr f_init_chk_378(P1050 t_376, rstr *v_377);
static rt_int f_manifest_381(P1044 e_379, int *ok_380);
static P1063 f_mk_mval_384(rt_int kind_382, rt_int i_383);
static rt_int f_ipow_387(rt_int a_385, rt_int b_386);
static P1063 f_meval_390(P1044 e_388, int *ok_389);
static P1063 f_float_op_395(rstr *op_391, P1063 a_392, P1063 b_393, int *ok_394);
static rstr f_bool_text_397(int b_396);
static rt_int f_bool_i_399(int b_398);
static rstr f_mstr_401(P1063 v_400);
static int f_ascii_char_403(rt_int i_402);
static int f_user_defined_405(rstr *op_404);
static rstr f_mcopy_407(P1050 t_406);
static int f_composite_409(P1050 t_408);
static rstr f_user_call2_415(P1054 y_410, rstr *a_411, int lv_a_412, rstr *b_413, int lv_b_414);
static rstr f_user_arg_419(P1056 pm_416, rstr *v_417, int lv_418);
static int f_top_level_421(P1054 y_420);
static rstr f_assign_code_426(rstr *lval_422, P1050 t_423, rstr *v_424, P1046 c_425);
static rstr f_copy_code_429(P1050 t_427, rstr *v_428);
static rstr f_eq_code_433(P1050 t_430, rstr *a_431, rstr *b_432);
static rstr f_elem_assign_437(rstr *lval_434, P1050 t_435, rstr *v_436);
static int f_seen_name_440(P1048 l_438, rstr *s_439);
static void f_emit_helpers_441(void);
static void f_helper_bodies_443(P1050 t_442);
static void f_declare_body_445(P1044 elems_444);
static void f_manifest_const_447(P1044 d_446);
static int f_exported_451(P1044 d_448, rstr *name_449, int *ro_450);
static P1054 f_copy_sym_453(P1054 y_452);
static void f_gen_capsule_455(P1044 d_454);
static int f_imports_variables_457(P1044 d_456);
static void f_elaborate_pending_459(P1054 y_458);
static int f_pending_capsule_461(rstr *name_460);
static void f_capsule_params_465(P1044 d_462, P1044 args_463, rt_int line_464);
static void f_elaborate_capsule_470(P1044 d_466, P1054 y_467, P1044 args_468, P1044 owner_469);
static int f_exports_op_473(P1044 d_471, rstr *op_472);
static P1037 f_renamed_476(P1044 d_474, P1054 z_475);
static int f_cap_tt_match_479(P1044 f_477, P1044 a_478);
static P1054 f_pick_capsule_481(P1044 d_480);
static P1054 f_capsule_instance_484(P1054 g_482, P1044 d_483);
static void f_configure_486(P1054 y_485);
static void f_gen_expose_488(P1044 d_487);
static void f_finish_ptr_490(P1050 t_489);
static P1044 f_ptr_args_492(P1046 c_491);
static void f_bind_ptr_params_497(P1044 formals_493, P1044 actuals_494, rstr *cell_495, rt_int line_496);
static void f_alloc_cell_502(P1044 s_498, rstr *lv_499, P1050 t_500, P1046 c_501);
static P1046 f_freeze_args_506(P1046 c_503, P1050 t_504, rt_int line_505);
static void f_ptr_subtype_check_510(P1050 t_507, P1046 c_508, P1044 src_509);
static void f_normal_function_513(P1044 d_511, P1054 y_512);
static void f_foreign_body_516(P1044 d_514, P1054 y_515);
static void f_declare_subprogram_518(P1044 d_517);
static P1054 f_build_subprogram_520(P1044 d_519);
static int f_has_pragmat_523(P1037 pr_521, rstr *p_522);
static P1037 f_suppressing_525(P1037 pr_524);
static int f_suppressed_527(rstr *x_526);
static void f_element_529(P1044 e_528);
static void f_element1_531(P1044 e_530);
static rstr f_storage_534(rstr *name_532, P1050 t_533);
static void f_bind_537(P1054 y_535, rstr *access_536);
static void f_var_decl_539(P1044 d_538);
static void f_located_var_541(P1044 d_540);
static rstr f_rep_sync_544(P1054 y_542, int pack_543);
static rstr f_cbound_access_546(P1054 y_545);
static rstr f_rep_size_550(P1044 items_547, P1050 t_548, P1046 c_549);
static P1044 f_rep_find_553(P1044 items_551, rstr *w_552);
static P1044 f_rep_comp_556(P1044 items_554, rstr *name_555);
static rt_int f_default_bits_559(P1050 t_557, P1046 c_558);
static rstr f_rep_code_566(P1050 t_560, P1046 c_561, P1044 items_562, rstr *lval_563, rstr *addr_564, int pack_565);
static rstr f_union_part_568(P1050 t_567);
static rstr f_rep_scalar_575(P1050 t_569, P1046 c_570, rstr *lval_571, rstr *addr_572, rstr *size_573, int pack_574);
static void f_max_range_578(P1050 t_576, P1046 c_577);
static void f_var_decl2_580(P1044 d_579);
static void f_open_fin_582(rstr *fc_581);
static void f_close_fins_584(P1048 saved_583);
static void f_const_decl_586(P1044 d_585);
static void f_subprogram_588(P1044 d_587);
static void f_gen_subprogram_591(P1044 d_589, P1054 y_590);
static rstr f_waits_of_593(P1044 d_592);
static rstr f_task_waits_595(P1044 elems_594);
static void f_await_tasks_597(P1044 elems_596);
static void f_capsule_elements_599(P1044 elems_598);
static void f_declare_labels_601(P1044 elems_600);
static void f_start_labels_602(void);
static P1069 f_goto_label_604(rstr *name_603);
static int f_has_return_606(P1044 e_605);
static void f_capsule_body_608(P1044 elems_607);
static void f_body_elements_610(P1044 elems_609);
static void f_gen_body_612(P1044 elems_611);
static rstr f_open_unhandled_614(P1044 elems_613);
static void f_close_unhandled_616(rstr *xu_615);
static void f_pop_frames_618(rt_int upto_617);
static void f_push_cleanup_620(rstr *s_619);
static void f_pop_cleanup_621(void);
static void f_gen_statement_623(P1044 s_622);
static P1054 f_located_in_626(P1044 e_624, P1054 found_625);
static int f_sym_in_629(P1054 l_627, P1054 y_628);
static void f_gen_statement2_631(P1044 s_630);
static void f_st_assign_633(P1044 s_632);
static void f_st_call_635(P1044 s_634);
static void f_st_if_637(P1044 s_636);
static int f_manifest_case_639(P1044 s_638);
static void f_st_case_641(P1044 s_640);
static void f_st_case2_643(P1044 s_642);
static void f_user_for_647(P1044 s_644, P1050 t_645, P1046 c_646);
static void f_st_repeat_649(P1044 s_648);
static void f_st_exit_651(P1044 s_650);
static void f_st_return_653(P1044 s_652);
static rstr f_result_checked_657(P1050 t_654, P1046 c_655, rstr *v_656);
static rstr f_exc_id_660(rstr *name_658, rt_int line_659);
static void f_st_guard_662(P1044 s_661);
static void f_st_alloc_664(P1044 s_663);
static rstr f_act_ref_666(P1044 e_665);
static void f_st_create_668(P1044 s_667);
static void f_hidden_var_672(rstr *name_669, P1050 t_670, rstr *place_671);
static void f_user_create_678(P1044 s_673, P1054 y_674, rstr *uv_675, P1050 ut_676, rstr *nf_677);
static rstr f_wait_alt_683(P1044 inv_679, rstr *arr_680, rt_int i_681, int mixed_682);
static int f_builtin_wait_685(P1044 inv_684);
static rstr f_wait_op_690(P1044 inv_686, rstr *op_687, rstr *q_688, int is_stmt_689);
static void f_user_wait_695(P1044 s_691, rstr *arr_692, rstr *w_693, rt_int n_694);
static void f_st_wait_697(P1044 s_696);
static P1044 f_call_node_701(rstr *name_698, P1044 arg_699, rt_int line_700);
static void f_user_region_703(P1044 s_702);
static void f_st_region_705(P1044 s_704);
static P1044 f_gparam_708(P1044 g_706, rstr *name_707);
static P1054 f_bind_sym_710(P1044 p_709);
static int f_same_binds_713(P1054 a_711, P1054 b_712);
static int f_same_binding_716(P1054 a_714, P1054 b_715);
static P1054 f_tt_binds_721(P1044 gd_717, P1044 formals_718, P1044 actuals_719, rt_int line_720);
static int f_type_allowed_725(P1050 t_722, P1044 items_723, P1054 binds_724);
static P1050 f_resolve_in_binds_729(P1044 st_726, P1054 binds_727, P1046 *c_728);
static P1054 f_pick_operation_736(rt_int kind_730, rstr *name_731, P1044 sig_732, P1044 res_733, P1054 binds_734, rt_int line_735);
static rstr f_kind_word_738(rt_int kind_737);
static P1054 f_need_binds_742(P1044 gd_739, P1054 binds_740, rt_int line_741);
static int f_generic_use_744(P1044 st_743);
static P1054 f_infer_from_749(P1044 gd_745, P1044 pat_746, P1050 t_747, P1054 known_748);
static P1050 f_instantiate_type_755(P1054 g_750, P1044 tt_751, P1044 args_752, P1046 *c_753, rt_int line_754);
static P1054 f_instantiate_760(P1054 g_756, P1044 tt_757, P1044 args_758, rt_int line_759);
static rstr f_access_of_762(P1054 y_761);
static P1044 f_import_of_765(P1044 l_763, rstr *name_764);
static int f_check_import_768(P1054 y_766, rt_int line_767);
static rstr f_c_ident_770(rstr *s_769);
static rstr f_cell_deref_773(P1050 t_771, rstr *p_772);
static rstr f_deref_776(rstr *base_774, P1050 t_775);
static int f_is_lvalue_778(P1044 e_777);
static void f_lvalue_784(P1044 e_779, P1037 *code_780, P1050 *t_781, P1046 *c_782, int *ro_783);
static void f_select_on_792(rstr *base_785, P1050 bt_786, P1044 e_787, int *ro_788, P1037 *code_789, P1050 *t_790, P1046 *c_791);
static int f_has_call_794(rstr *s_793);
static void f_need_slice_796(P1050 t_795);
static rstr f_ix_800(rstr *i_797, rstr *lo_798, rstr *hi_799);
static void f_index_on_809(rstr *base_801, P1050 bt_802, P1044 e_803, int *ro_804, int lv_805, P1037 *code_806, P1050 *t_807, P1046 *c_808);
static int f_own_attribute_811(P1044 e_810);
static rstr f_gexpr_815(P1044 e_812, P1050 want_813, P1050 *t_814);
static rstr f_resolved_818(P1044 e_816, P1050 *t_817);
static rstr f_gexpr_base_821(P1044 e_819, P1050 *t_820);
static rstr f_gexpr_in_826(P1044 e_822, P1050 want_823, P1046 c_824, P1050 *t_825);
static rstr f_ascii_lit_828(int ch_827);
static rstr f_octal_830(rt_int n_829);
static P1050 f_str_cat_part_832(P1050 t_831);
static P1050 f_peek_type_834(P1044 e_833);
static P1050 f_set_operands_837(P1044 e_835, P1050 want_836);
static P1044 f_user_dot_839(P1044 e_838);
static P1044 f_user_subscript_841(P1044 e_840);
static P1044 f_op_call_845(rstr *name_842, P1044 args_843, rt_int line_844);
static P1044 f_derived_relation_847(P1044 e_846);
static P1044 f_rel_node_852(rstr *op_848, P1044 a_849, P1044 b_850, rt_int line_851);
static P1044 f_rel_not_855(P1044 x_853, rt_int line_854);
static P1044 f_copy_node_857(P1044 e_856);
static P1044 f_wrap_apply_859(P1044 e_858);
static rstr f_c_string_861(rstr *s_860);
static P1050 f_enum_type_of_864(rstr *lit_862, rt_int line_863);
static int f_ptr_attribute_866(P1044 e_865);
static rstr f_attribute_869(P1044 e_867, P1050 *t_868);
static rstr f_subtype_compare_874(P1044 sa_870, P1044 sb_871, rstr *op_872, rt_int line_873);
static rstr f_float_prec_876(P1046 c_875);
static rstr f_file_attribute_882(P1044 e_877, P1050 bt_878, P1046 c_879, P1037 base_880, P1050 *t_881);
static rstr f_gbinop_886(P1044 e_883, P1050 want_884, P1050 *t_885);
static rstr f_constructor_891(P1044 e_887, P1050 want_888, P1046 ctx_889, P1050 *t_890);
static rstr f_comp_value_895(P1050 t_892, P1046 c_893, rstr *v_894);
static int f_has_at_897(rstr *s_896);
static rstr f_set_elem_900(P1050 st_898, rstr *v_899);
static rstr f_array_cons_905(P1044 e_901, P1050 at_902, P1046 ctx_903, P1050 *t_904);
static rstr f_fill_items_911(P1044 items_906, P1050 at_907, rstr *tmp_908, P1048 prefix_909, rt_int dim_910);
static rt_int f_e_line_913(P1044 e_912);
static P1048 f_add_line_916(P1048 l_914, rstr *s_915);
static rstr f_item_value_921(P1044 e_917, P1050 at_918, rt_int line_919, P1050 *vt_920);
static rstr f_key_loop_926(P1044 k_922, P1050 at_923, rt_int d_924, rstr *xv_925);
static rstr f_store_at_931(P1050 at_927, rstr *tmp_928, P1048 xs_929, rt_int n_930);
static int f_fits_934(P1054 y_932, P1044 args_933);
static P1054 f_resolve_overload_940(rstr *name_935, P1044 tt_936, P1044 args_937, int is_stmt_938, rt_int line_939);
static int f_tt_fits_943(P1054 y_941, P1044 tt_942);
static P1054 f_overload_chain_946(rstr *name_944, rt_int pass_945);
static int f_is_builtin_948(rstr *n_947);
static int f_is_low_level_950(rstr *n_949);
static rstr f_me_high_954(P1044 tt_951, rt_int line_952, P1050 *t_953);
static rstr f_type_tag_956(P1050 t_955);
static rstr f_lock_ref_959(P1044 e_957, rstr *name_958);
static P1054 f_user_op_962(rstr *op_960, P1044 args_961);
static rstr f_gcall_966(P1044 e_963, int is_stmt_964, P1050 *t_965);
static P1048 f_requires_968(P1054 y_967);
static void f_add_req_971(P1054 y_969, rstr *name_970);
static void f_require_calls_974(P1054 y_972, P1044 e_973);
static int f_declared_in_977(P1044 elems_975, rstr *name_976);
static void f_check_requires_980(P1054 y_978, rt_int line_979);
static rstr f_act_delay_args_982(P1044 args_981);
static rstr f_same_subtypes_985(P1044 gd_983, P1044 args_984);
static rstr f_mailbox_low_990(rstr *name_986, P1044 args_987, rt_int line_988, P1050 *t_989);
static P1050 f_exponent_want_993(rstr *op_991, P1050 ta_992);
static rstr f_file_ref_997(P1044 e_994, int text_995, rt_int line_996);
static int f_text_file_999(P1050 t_998);
static rstr f_conversion_1004(P1044 tt_1000, P1044 args_1001, rt_int line_1002, P1050 *t_1003);
static rstr f_float_digits_1006(P1044 e_1005);
static rstr f_enum_names_1008(P1050 t_1007);
static int f_explicit_rep_1010(P1044 e_1009);
static rstr f_actual_bounds_1014(P1050 ft_1011, P1050 t_1012, P1046 c_1013);
static rstr f_builtin_1021(rstr *name_1015, P1044 tt_1016, P1044 args_1017, rt_int line_1018, int is_stmt_1019, P1050 *t_1020);
static P1044 f_with_library_1023(P1044 units_1022);
static P1037 f_external_missing_1026(P1044 e_1024, P1044 units_1025);
static int f_unit_named_1029(P1044 units_1027, rstr *name_1028);
static int f_tried_1031(rstr *name_1030);
static void f_mark_tried_1033(rstr *name_1032);
static void f_translate_1035(P1044 units_1034);
static void f_print_program_1036(void);
static int ex_compile_error_1;
static P1041 g_toks_1075;
static rt_int g_ntoks_1076;
static rt_int g_tpos_1077;
static rt_int g_src_line_1078;
static P1037 g_pending_prag_1079;
static P1048 g_src_head_1080;
static P1048 g_src_tail_1081;
static rt_int g_ntoks_before_library_1082;
static P1048 g_library_tried_1083;
static P1058 g_table_1084;
static P1058 g_genv_1085;
static P1054 g_all_insts_1086;
static rt_int g_depth_1087;
static P1054 g_scope_stack_1088;
static P1050 g_all_types_1089;
static rt_int g_serial_1090;
static P1067 g_out_types_1091;
static P1067 g_out_helpers_1092;
static P1067 g_out_protos_1093;
static P1067 g_out_globals_1094;
static P1067 g_out_funcs_1095;
static P1067 g_out_init_1096;
static P1067 g_out_excs_1097;
static P1067 g_code_1098;
static P1067 g_fields_buf_1099;
static int g_in_func_1100;
static rt_int g_cur_level_1101;
static P1061 g_fctx_1102;
static P1071 g_caps_1103;
static P1073 g_cap_waits_1104;
static P1048 g_psub_1105;
static P1037 g_st_field_1106;
static P1067 g_out_frames_1107;
static P1067 g_out_roots_1108;
static int g_uses_free_1109;
static P1048 g_fins_1110;
static int g_uses_findyn_1111;
static P1054 g_func_sym_1112;
static P1046 g_func_rc_1113;
static P1037 g_cap_ret_1114;
static P1037 g_cap_rflag_1115;
static rt_int g_ret_frames_1116;
static rt_int g_gdepth_1117;
static P1037 g_suppress_1118;
static P1046 g_cons_ctx_1119;
static int g_mark_uninit_1120;
static int g_skip_chk_1121;
static P1069 g_exits_1122;
static P1069 g_gotos_1123;
static rt_int g_frames_1124;
static P1048 g_handlers_1125;
static P1048 g_cleanups_1126;
static rt_int g_trial_1127;
static P1048 g_mcopies_1128;
static P1050 g_ty_int_1129;
static P1050 g_ty_bool_1130;
static P1050 g_ty_float_1131;
static P1050 g_ty_ascii_1132;
static P1050 g_ty_string_1133;
static P1050 g_ty_void_1134;
static P1050 g_ty_file_1135;
static P1050 g_ty_nil_1136;
static P1050 g_ty_lock_1137;
static P1050 g_ty_latch_1138;
static P1050 g_ty_act_1139;
static P1050 g_file_mode_type_1140;
static P1050 g_ty_send_st_1141;
static P1050 g_ty_receive_st_1142;
static P1050 g_ty_text_file_1143;
static P1050 g_file_state_type_1144;
static P1050 g_file_disp_type_1145;
static P1050 g_file_access_type_1146;
static P1046 g_no_cons_1147;
static P1037 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_1148 = NULL;
{ P1037 cell1149 = rt_alloc(sizeof *cell1149);
rt_int pv1150 = ((rt_int)(((*F->s_2)).len));
cell1149->p_n = pv1150;
cell1149->all = rt_str_new(pv1150);
rt_str_assign(&cell1149->all, (*F->s_2));
F->t_1148 = cell1149;
}
F->result_ = F->t_1148;
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
F->r_1151 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_1151, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_1151;
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
F->r_1152 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_1152, (*F->s_14));
{ rt_int lo1154 = ((rt_int)1LL), hi1155 = ((rt_int)(((*F->s_14)).len));
for (rt_int it1156 = lo1154; it1156 <= hi1155; it1156++) {
F->i_1153 = it1156;
if (((65 <= rt_str_get(F->r_1152, F->i_1153)) && (rt_str_get(F->r_1152, F->i_1153) <= 90))) {
(*rt_str_at(&F->r_1152, F->i_1153)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_str_get(F->r_1152, F->i_1153)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_1152;
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
F->l_1157 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_1158 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_1157), rt_str(" ", 1)));
{ rt_int lo1160 = ((rt_int)1LL), hi1161 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_1158).len))), ((rt_int)1LL));
for (rt_int it1162 = lo1160; it1162 <= hi1161; it1162++) {
F->i_1159 = it1162;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_1159, rt_sub(rt_add(F->i_1159, ((rt_int)((F->w_1158).len))), ((rt_int)1LL))), F->w_1158)) {
F->result_ = rt_str_cat(F->l_1157, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_1157;
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
g_serial_1090 = rt_add(g_serial_1090, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(g_serial_1090));
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
if ((g_trial_1127 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P1067 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_1163 = NULL;
{ R1068 *cell1164 = rt_alloc(sizeof(R1068));
(*cell1164).head = NULL;
(*cell1164).tail = NULL;
F->b_1163 = cell1164;
}
F->result_ = F->b_1163;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P1067 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_1165 = NULL;
{ R1049 *cell1166 = rt_alloc(sizeof(R1049));
(*cell1166).s = NULL;
(*cell1166).next = NULL;
F->l_1165 = cell1166;
}
(*(P1048)rt_nil_check(F->l_1165)).s = f_mk_3(&(*F->s_26));
if (((*(P1067)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P1067)rt_nil_check(F->b_25)).head = F->l_1165;
} else {
(*(P1048)rt_nil_check((*(P1067)rt_nil_check(F->b_25)).tail)).next = F->l_1165;
}
(*(P1067)rt_nil_check(F->b_25)).tail = F->l_1165;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_1098, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P1067 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_1167 = NULL;
F->l_1167 = (*(P1067)rt_nil_check(F->b_30)).head;
while ((F->l_1167 != NULL)) {
rt_putln((((P1037)rt_nil_check((*(P1048)rt_nil_check(F->l_1167)).s))->all));
F->l_1167 = (*(P1048)rt_nil_check(F->l_1167)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P1067 a_32, P1067 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P1067)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P1067)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P1067)rt_nil_check(F->a_32)).head = (*(P1067)rt_nil_check(F->b_33)).head;
} else {
(*(P1048)rt_nil_check((*(P1067)rt_nil_check(F->a_32)).tail)).next = (*(P1067)rt_nil_check(F->b_33)).head;
}
(*(P1067)rt_nil_check(F->a_32)).tail = (*(P1067)rt_nil_check(F->b_33)).tail;
(*(P1067)rt_nil_check(F->b_33)).head = NULL;
(*(P1067)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel1168 = (*F->w_35);
if (0 || rt_str_eq(sel1168, rt_str("ABBREV", 6)) || rt_str_eq(sel1168, rt_str("ABNORMAL", 8)) || rt_str_eq(sel1168, rt_str("ALL", 3)) || rt_str_eq(sel1168, rt_str("ALLOC", 5)) || rt_str_eq(sel1168, rt_str("ASSERT", 6)) || rt_str_eq(sel1168, rt_str("BEGIN", 5)) || rt_str_eq(sel1168, rt_str("BY", 2)) || rt_str_eq(sel1168, rt_str("CAPSULE", 7)) || rt_str_eq(sel1168, rt_str("CASE", 4)) || rt_str_eq(sel1168, rt_str("CONST", 5)) || rt_str_eq(sel1168, rt_str("CREATE", 6)) || rt_str_eq(sel1168, rt_str("DO", 2)) || rt_str_eq(sel1168, rt_str("ELSE", 4)) || rt_str_eq(sel1168, rt_str("ELSEIF", 6)) || rt_str_eq(sel1168, rt_str("END", 3)) || rt_str_eq(sel1168, rt_str("EXCEPTION", 9)) || rt_str_eq(sel1168, rt_str("EXIT", 4)) || rt_str_eq(sel1168, rt_str("EXPORTS", 7)) || rt_str_eq(sel1168, rt_str("EXPOSE", 6)) || rt_str_eq(sel1168, rt_str("EXTERNAL", 8)) || rt_str_eq(sel1168, rt_str("FOR", 3)) || rt_str_eq(sel1168, rt_str("FROM", 4)) || rt_str_eq(sel1168, rt_str("FUNC", 4)) || rt_str_eq(sel1168, rt_str("GENERIC", 7)) || rt_str_eq(sel1168, rt_str("GOTO", 4)) || rt_str_eq(sel1168, rt_str("GUARD", 5)) || rt_str_eq(sel1168, rt_str("IF", 2)) || rt_str_eq(sel1168, rt_str("IMPORTS", 7)) || rt_str_eq(sel1168, rt_str("LOCATION", 8)) || rt_str_eq(sel1168, rt_str("NAMED", 5)) || rt_str_eq(sel1168, rt_str("NEEDS", 5)) || rt_str_eq(sel1168, rt_str("NEW", 3)) || rt_str_eq(sel1168, rt_str("NONE", 4)) || rt_str_eq(sel1168, rt_str("OUT", 3)) || rt_str_eq(sel1168, rt_str("OF", 2)) || rt_str_eq(sel1168, rt_str("PRAG", 4)) || rt_str_eq(sel1168, rt_str("PROC", 4)) || rt_str_eq(sel1168, rt_str("RAISE", 5)) || rt_str_eq(sel1168, rt_str("READONLY", 8)) || rt_str_eq(sel1168, rt_str("REVERSE", 7)) || rt_str_eq(sel1168, rt_str("REGION", 6)) || rt_str_eq(sel1168, rt_str("RENAMING", 8)) || rt_str_eq(sel1168, rt_str("REP", 3)) || rt_str_eq(sel1168, rt_str("REPEAT", 6)) || rt_str_eq(sel1168, rt_str("RERAISE", 7)) || rt_str_eq(sel1168, rt_str("RETURN", 6)) || rt_str_eq(sel1168, rt_str("SUBTYPE", 7)) || rt_str_eq(sel1168, rt_str("TASK", 4)) || rt_str_eq(sel1168, rt_str("THEN", 4)) || rt_str_eq(sel1168, rt_str("TO", 2)) || rt_str_eq(sel1168, rt_str("TYPE", 4)) || rt_str_eq(sel1168, rt_str("VAR", 3)) || rt_str_eq(sel1168, rt_str("WAIT", 4)) || rt_str_eq(sel1168, rt_str("WHEN", 4)) || rt_str_eq(sel1168, rt_str("WHILE", 5))) {
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
F->t_1169 = NULL;
{ R1040 *cell1170 = rt_alloc(sizeof(R1040));
(*cell1170).s = NULL;
(*cell1170).prags = NULL;
F->t_1169 = cell1170;
}
(*(P1039)rt_nil_check(F->t_1169)).kind = F->kind_39;
(*(P1039)rt_nil_check(F->t_1169)).line = g_src_line_1078;
(*(P1039)rt_nil_check(F->t_1169)).ival = F->ival_41;
(*(P1039)rt_nil_check(F->t_1169)).s = f_mk_3(&(*F->s_40));
(*(P1039)rt_nil_check(F->t_1169)).prags = g_pending_prag_1079;
g_pending_prag_1079 = NULL;
g_ntoks_1076 = rt_add(g_ntoks_1076, ((rt_int)1LL));
(((P1041)rt_nil_check(g_toks_1075))->all).p[(rt_index(g_ntoks_1076, (((P1041)rt_nil_check(g_toks_1075))->all).lo, (((P1041)rt_nil_check(g_toks_1075))->all).hi) - (((P1041)rt_nil_check(g_toks_1075))->all).lo)] = F->t_1169;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_1171 = rt_add(F->i_44, ((rt_int)1LL));
while (((F->j_1171 <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_1171)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_1171))) || (rt_str_get((*F->line_43), F->j_1171) == 95)))) {
if (((rt_str_get((*F->line_43), F->j_1171) == 95) && ((F->j_1171 == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_str_get((*F->line_43), rt_add(F->j_1171, ((rt_int)1LL)))) || f_is_digit_11(rt_str_get((*F->line_43), rt_add(F->j_1171, ((rt_int)1LL))))))))) {
f_fail_23(g_src_line_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_1171 = rt_add(F->j_1171, ((rt_int)1LL));
}
F->result_ = F->j_1171;
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
F->w_1172 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_1172, (*F->s_46));
{ rt_int lo1174 = ((rt_int)1LL), hi1175 = ((rt_int)((F->w_1172).len));
for (rt_int it1176 = lo1174; it1176 <= hi1175; it1176++) {
F->k_1173 = it1176;
(*rt_str_at(&F->w_1172, F->k_1173)) = f_upper_13(rt_str_get(F->w_1172, F->k_1173));
}
}
F->result_ = F->w_1172;
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
F->j_1177 = F->i_49;
while (((F->j_1177 <= ((rt_int)(((*F->line_48)).len))) && ((rt_str_get((*F->line_48), F->j_1177) == 32) || (rt_str_get((*F->line_48), F->j_1177) == 9)))) {
F->j_1177 = rt_add(F->j_1177, ((rt_int)1LL));
}
F->result_ = F->j_1177;
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
F->j_1178 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_1179 = NULL;
F->r_1179 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_1180 = 1;
if (((F->j_1178 > ((rt_int)(((*F->line_51)).len))) || (rt_str_get((*F->line_51), F->j_1178) != 40))) {
f_fail_23(g_src_line_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_1178 = rt_add(F->j_1178, ((rt_int)1LL));
while (F->more_1180) {
F->j_1178 = f_skip_blanks_50(&(*F->line_51), F->j_1178);
if (((F->j_1178 > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_str_get((*F->line_51), F->j_1178))))) {
f_fail_23(g_src_line_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_1181 = f_ident_end_45(&(*F->line_51), F->j_1178);
F->r_1179 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_1179))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), F->j_1178, rt_sub(F->k_1181, ((rt_int)1LL))); b_; }))); b_; }));
F->j_1178 = f_skip_blanks_50(&(*F->line_51), F->k_1181);
if (((F->j_1178 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_1178) == 40))) {
F->go_1182 = 1;
F->r_1179 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_1179))->all), rt_str("(", 1)); b_; }));
F->j_1178 = rt_add(F->j_1178, ((rt_int)1LL));
while (F->go_1182) {
F->j_1178 = f_skip_blanks_50(&(*F->line_51), F->j_1178);
if (((F->j_1178 > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_str_get((*F->line_51), F->j_1178))))) {
f_fail_23(g_src_line_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_1181 = f_ident_end_45(&(*F->line_51), F->j_1178);
F->r_1179 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_1179))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), F->j_1178, rt_sub(F->k_1181, ((rt_int)1LL))); b_; }))); b_; }));
F->j_1178 = f_skip_blanks_50(&(*F->line_51), F->k_1181);
if (((F->j_1178 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_1178) == 44))) {
F->r_1179 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_1179))->all), rt_str(",", 1)); b_; }));
F->j_1178 = rt_add(F->j_1178, ((rt_int)1LL));
} else if (((F->j_1178 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_1178) == 41))) {
F->j_1178 = rt_add(F->j_1178, ((rt_int)1LL));
F->go_1182 = 0;
} else {
f_fail_23(g_src_line_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_1179 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_1179))->all), rt_str(")", 1)); b_; }));
}
F->r_1179 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_1179))->all), rt_str(";", 1)); b_; }));
F->j_1178 = f_skip_blanks_50(&(*F->line_51), F->j_1178);
if (((F->j_1178 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_1178) == 44))) {
F->j_1178 = rt_add(F->j_1178, ((rt_int)1LL));
} else if (((F->j_1178 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_1178) == 41))) {
F->j_1178 = rt_add(F->j_1178, ((rt_int)1LL));
F->more_1180 = 0;
} else {
f_fail_23(g_src_line_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P1037)rt_nil_check(F->r_1179))->all));
if ((g_pending_prag_1079 == NULL)) {
g_pending_prag_1079 = F->r_1179;
} else {
g_pending_prag_1079 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(g_pending_prag_1079))->all), (((P1037)rt_nil_check(F->r_1179))->all)); b_; }));
}
F->result_ = F->j_1178;
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
F->i_1183 = ((rt_int)1LL);
while ((F->i_1183 <= ((rt_int)(((*F->r_54)).len)))) {
F->k_1184 = F->i_1183;
while ((rt_str_get((*F->r_54), F->k_1184) != 59)) {
F->k_1184 = rt_add(F->k_1184, ((rt_int)1LL));
}
{
F->p_1185 = rt_str_copy(rt_str_slice((*F->r_54), F->i_1183, rt_sub(F->k_1184, ((rt_int)1LL))));
F->ok_1186 = ((((((((((rt_str_eq(F->p_1185, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_1185, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_1185, rt_str("OPEN", 4))) || rt_str_eq(F->p_1185, rt_str("CLOSED", 6))) || rt_str_eq(F->p_1185, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_1185, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_1185, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1185, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_1185, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_1185, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_1185).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_1185, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_1187 = ((((((((((rt_int)((F->p_1185).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_1185, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_1185, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_1185, rt_str("OPEN", 4))) || rt_str_eq(F->p_1185, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_1185).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_1185, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_1185, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1185, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_1185).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_1185, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_1187 && (!F->ok_1186))) {
f_fail_23(g_src_line_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_1185); b_; }));
}
}
F->i_1183 = rt_add(F->k_1184, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_1188 = ((rt_int)1LL);
F->j_1189 = ((rt_int)0LL);
F->n_1190 = ((rt_int)(((*F->line_56)).len));
while ((F->i_1188 <= F->n_1190)) {
F->c_1191 = rt_str_get((*F->line_56), F->i_1188);
if (((((F->c_1191 == 32) || (F->c_1191 == 9)) || (F->c_1191 == 13)) || (F->c_1191 == 12))) {
F->i_1188 = rt_add(F->i_1188, ((rt_int)1LL));
} else if ((F->c_1191 == 37)) {
F->i_1188 = rt_add(F->n_1190, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_1191)) {
F->j_1189 = f_ident_end_45(&(*F->line_56), F->i_1188);
{
F->w_1192 = rt_str_new(rt_sub(F->j_1189, F->i_1188));
rt_str_assign(&F->w_1192, rt_str_slice((*F->line_56), F->i_1188, rt_sub(F->j_1189, ((rt_int)1LL))));
{ rt_int lo1194 = ((rt_int)1LL), hi1195 = ((rt_int)((F->w_1192).len));
for (rt_int it1196 = lo1194; it1196 <= hi1195; it1196++) {
F->k_1193 = it1196;
(*rt_str_at(&F->w_1192, F->k_1193)) = f_upper_13(rt_str_get(F->w_1192, F->k_1193));
}
}
if (rt_str_eq(F->w_1192, rt_str("PRAGMAT", 7))) {
while (((F->j_1189 <= F->n_1190) && (rt_str_get((*F->line_56), F->j_1189) != 59))) {
F->j_1189 = rt_add(F->j_1189, ((rt_int)1LL));
}
F->j_1189 = rt_add(F->j_1189, ((rt_int)1LL));
} else if (rt_str_eq(F->w_1192, rt_str("PRAG", 4))) {
F->j_1189 = f_lex_prag_53(&(*F->line_56), F->j_1189);
} else if (f_is_reserved_36(&F->w_1192)) {
f_add_token_42((((rt_int)2LL)), &F->w_1192, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_1192)) {
f_add_token_42((((rt_int)3LL)), &F->w_1192, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_1192, ((rt_int)0LL));
}
}
F->i_1188 = F->j_1189;
} else if (f_is_digit_11(F->c_1191)) {
F->j_1189 = F->i_1188;
while (((F->j_1189 <= F->n_1190) && f_is_digit_11(rt_str_get((*F->line_56), F->j_1189)))) {
F->j_1189 = rt_add(F->j_1189, ((rt_int)1LL));
}
if ((((F->j_1189 < F->n_1190) && (rt_str_get((*F->line_56), F->j_1189) == 46)) && f_is_digit_11(rt_str_get((*F->line_56), rt_add(F->j_1189, ((rt_int)1LL)))))) {
F->j_1189 = rt_add(F->j_1189, ((rt_int)1LL));
while (((F->j_1189 <= F->n_1190) && f_is_digit_11(rt_str_get((*F->line_56), F->j_1189)))) {
F->j_1189 = rt_add(F->j_1189, ((rt_int)1LL));
}
if (((F->j_1189 <= F->n_1190) && ((rt_str_get((*F->line_56), F->j_1189) == 69) || (rt_str_get((*F->line_56), F->j_1189) == 101)))) {
F->j_1189 = rt_add(F->j_1189, ((rt_int)1LL));
if (((F->j_1189 <= F->n_1190) && ((rt_str_get((*F->line_56), F->j_1189) == 43) || (rt_str_get((*F->line_56), F->j_1189) == 45)))) {
F->j_1189 = rt_add(F->j_1189, ((rt_int)1LL));
}
while (((F->j_1189 <= F->n_1190) && f_is_digit_11(rt_str_get((*F->line_56), F->j_1189)))) {
F->j_1189 = rt_add(F->j_1189, ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), F->i_1188, rt_sub(F->j_1189, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), F->i_1188, rt_sub(F->j_1189, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), F->i_1188, rt_sub(F->j_1189, ((rt_int)1LL)))));
}
F->i_1188 = F->j_1189;
} else if ((((F->c_1191 == 39) && (F->i_1188 < F->n_1190)) && (rt_str_get((*F->line_56), rt_add(F->i_1188, ((rt_int)1LL))) == 39))) {
F->j_1189 = rt_add(F->i_1188, ((rt_int)2LL));
while (((F->j_1189 < F->n_1190) && (!((rt_str_get((*F->line_56), F->j_1189) == 39) && (rt_str_get((*F->line_56), rt_add(F->j_1189, ((rt_int)1LL))) == 39))))) {
if ((rt_str_get((*F->line_56), F->j_1189) == 34)) {
f_fail_23(g_src_line_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_1189 = rt_add(F->j_1189, ((rt_int)1LL));
}
if ((F->j_1189 >= F->n_1190)) {
f_fail_23(g_src_line_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(F->i_1188, ((rt_int)2LL)), rt_sub(F->j_1189, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1188 = rt_add(F->j_1189, ((rt_int)2LL));
} else if ((F->c_1191 == 39)) {
F->j_1189 = rt_add(F->i_1188, ((rt_int)1LL));
if (((F->j_1189 > F->n_1190) || (!f_is_letter_9(rt_str_get((*F->line_56), F->j_1189))))) {
f_fail_23(g_src_line_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_1189 = f_ident_end_45(&(*F->line_56), F->j_1189);
{
F->w_1197 = rt_str_new(rt_sub(rt_sub(F->j_1189, F->i_1188), ((rt_int)1LL)));
rt_str_assign(&F->w_1197, rt_str_slice((*F->line_56), rt_add(F->i_1188, ((rt_int)1LL)), rt_sub(F->j_1189, ((rt_int)1LL))));
{ rt_int lo1199 = ((rt_int)1LL), hi1200 = ((rt_int)((F->w_1197).len));
for (rt_int it1201 = lo1199; it1201 <= hi1200; it1201++) {
F->k_1198 = it1201;
(*rt_str_at(&F->w_1197, F->k_1198)) = f_upper_13(rt_str_get(F->w_1197, F->k_1198));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_1197, ((rt_int)0LL));
}
F->i_1188 = F->j_1189;
} else if ((F->c_1191 == 34)) {
F->j_1189 = rt_add(F->i_1188, ((rt_int)1LL));
while (((F->j_1189 <= F->n_1190) && (rt_str_get((*F->line_56), F->j_1189) != 34))) {
if ((rt_str_get((*F->line_56), F->j_1189) == 39)) {
f_fail_23(g_src_line_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_1189 = rt_add(F->j_1189, ((rt_int)1LL));
}
if ((F->j_1189 > F->n_1190)) {
f_fail_23(g_src_line_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(F->i_1188, ((rt_int)1LL)), rt_sub(F->j_1189, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1188 = rt_add(F->j_1189, ((rt_int)1LL));
} else {
{
F->two_1202 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_1202, rt_str("  ", 2));
(*rt_str_at(&F->two_1202, ((rt_int)1LL))) = F->c_1191;
if ((F->i_1188 < F->n_1190)) {
(*rt_str_at(&F->two_1202, ((rt_int)2LL))) = rt_str_get((*F->line_56), rt_add(F->i_1188, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_1202, rt_str(":=", 2)) || rt_str_eq(F->two_1202, rt_str("=>", 2))) || rt_str_eq(F->two_1202, rt_str("..", 2))) || rt_str_eq(F->two_1202, rt_str("**", 2))) || rt_str_eq(F->two_1202, rt_str("/=", 2))) || rt_str_eq(F->two_1202, rt_str("<=", 2))) || rt_str_eq(F->two_1202, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_1202, ((rt_int)0LL));
F->i_1188 = rt_add(F->i_1188, ((rt_int)2LL));
} else if (((rt_str_eq(F->two_1202, rt_str("<<", 2)) || rt_str_eq(F->two_1202, rt_str(">>", 2))) || rt_str_eq(F->two_1202, rt_str("::", 2)))) {
if (rt_str_eq(F->two_1202, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_1202, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_1188 = rt_add(F->i_1188, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_1191 == 40) || (F->c_1191 == 41)) || (F->c_1191 == 91)) || (F->c_1191 == 93)) || (F->c_1191 == 44)) || (F->c_1191 == 58)) || (F->c_1191 == 59)) || (F->c_1191 == 46)) || (F->c_1191 == 35)) || (F->c_1191 == 43)) || (F->c_1191 == 45)) || (F->c_1191 == 42)) || (F->c_1191 == 47)) || (F->c_1191 == 38)) || (F->c_1191 == 61)) || (F->c_1191 == 60)) || (F->c_1191 == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_1191); b_; }), ((rt_int)0LL));
F->i_1188 = rt_add(F->i_1188, ((rt_int)1LL));
} else {
f_fail_23(g_src_line_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_1203 = rt_str_new(rt_sizeln());
F->l_1204 = NULL;
rt_r_readln(&F->line_1203);
g_src_line_1078 = rt_add(g_src_line_1078, ((rt_int)1LL));
{ R1049 *cell1205 = rt_alloc(sizeof(R1049));
(*cell1205).s = NULL;
(*cell1205).next = NULL;
F->l_1204 = cell1205;
}
(*(P1048)rt_nil_check(F->l_1204)).s = f_mk_3(&F->line_1203);
if ((g_src_tail_1081 == NULL)) {
g_src_head_1080 = F->l_1204;
} else {
(*(P1048)rt_nil_check(g_src_tail_1081)).next = F->l_1204;
}
g_src_tail_1081 = F->l_1204;
f_lex_line_57(&F->line_1203);
}
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static int f_read_library_60(rstr *name_59) {
  struct f_read_library_60fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_59 = name_59;
F->f_1206 = rt_r_file_new(0, 0, sizeof(int), 1);
F->found_1207 = 1;
{ rt_frame xf1208;
if (RT_TRY(xf1208)) {
rt_r_open(F->f_1206, rt_str_cat(f_lower_s_15(&(*F->name_59)), rt_str(".red", 4)), 0);
RT_POP(xf1208);
} else {
RT_POP(xf1208);
int x1209 = rt_xcur;
if (0 || x1209 == rt_exc("X_NOFILE") || x1209 == rt_exc("X_FILENAME")) {
F->found_1207 = 0;
} else {
rt_raise(x1209);
}
}
}
if ((!F->found_1207)) {
F->result_ = 0;
goto ret_;
}
while ((!rt_r_feof(F->f_1206))) {
F->line_1210 = rt_str_new(rt_r_fsizeln(F->f_1206));
rt_r_freadln(F->f_1206, &F->line_1210);
g_src_line_1078 = rt_add(g_src_line_1078, ((rt_int)1LL));
f_lex_line_57(&F->line_1210);
}
rt_r_close(F->f_1206, 0);
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_write_library_62(P1044 u_61) {
  struct f_write_library_62fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->u_61 = u_61;
F->f_1211 = rt_r_file_new(0, 1, sizeof(int), 1);
F->l_1212 = NULL;
F->l_1212 = g_src_head_1080;
F->n_1213 = ((rt_int)1LL);
rt_r_open(F->f_1211, rt_str_cat(f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->u_61)).name))->all)), rt_str(".red", 4)), 1);
while (((F->l_1212 != NULL) && (F->n_1213 <= (*(P1044)rt_nil_check(F->u_61)).eline))) {
if ((F->n_1213 >= (*(P1044)rt_nil_check(F->u_61)).line)) {
rt_r_fwriteln(F->f_1211, (((P1037)rt_nil_check((*(P1048)rt_nil_check(F->l_1212)).s))->all));
}
F->n_1213 = rt_add(F->n_1213, ((rt_int)1LL));
F->l_1212 = (*(P1048)rt_nil_check(F->l_1212)).next;
}
rt_r_close(F->f_1211, 0);
ret_:
  RT_FPOP();
  return;
}

static P1044 f_nn_65(rt_int kind_63, rt_int line_64) {
  struct f_nn_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_63 = kind_63;
F->line_64 = line_64;
F->x_1214 = NULL;
{ R1045 *cell1215 = rt_alloc(sizeof(R1045));
(*cell1215).name = NULL;
(*cell1215).tag = NULL;
(*cell1215).prags = NULL;
(*cell1215).labels = NULL;
(*cell1215).a = NULL;
(*cell1215).b = NULL;
(*cell1215).c = NULL;
(*cell1215).d = NULL;
(*cell1215).e = NULL;
(*cell1215).next = NULL;
F->x_1214 = cell1215;
}
(*(P1044)rt_nil_check(F->x_1214)).kind = F->kind_63;
(*(P1044)rt_nil_check(F->x_1214)).line = F->line_64;
F->result_ = F->x_1214;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_69(P1044 *head_66, P1044 *tail_67, P1044 x_68) {
  struct f_append_69fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_66 = head_66;
F->tail_67 = tail_67;
F->x_68 = x_68;
if (((*F->head_66) == NULL)) {
(*F->head_66) = F->x_68;
} else {
(*(P1044)rt_nil_check((*F->tail_67))).next = F->x_68;
}
(*F->tail_67) = F->x_68;
while (((*(P1044)rt_nil_check((*F->tail_67))).next != NULL)) {
(*F->tail_67) = (*(P1044)rt_nil_check((*F->tail_67))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_71(P1044 l_70) {
  struct f_list_len_71fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_70 = l_70;
F->n_1216 = ((rt_int)0LL);
F->p_1217 = NULL;
F->p_1217 = F->l_70;
while ((F->p_1217 != NULL)) {
F->n_1216 = rt_add(F->n_1216, ((rt_int)1LL));
F->p_1217 = (*(P1044)rt_nil_check(F->p_1217)).next;
}
F->result_ = F->n_1216;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_72(void) {
  struct f_cur_line_72fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_at_kw_74(rstr *w_73) {
  struct f_at_kw_74fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_73 = w_73;
F->result_ = (((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).kind == (((rt_int)2LL))) && rt_str_eq((((P1037)rt_nil_check((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_73)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_at_op_76(rstr *w_75) {
  struct f_at_op_76fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_75 = w_75;
F->result_ = (((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).kind == (((rt_int)3LL))) && rt_str_eq((((P1037)rt_nil_check((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_75)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_at_kind_78(rt_int k_77) {
  struct f_at_kind_78fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_77 = k_77;
F->result_ = ((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).kind == F->k_77);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_kind_at_80(rt_int k_79) {
  struct f_kind_at_80fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_79 = k_79;
if ((rt_add(g_tpos_1077, F->k_79) > g_ntoks_1076)) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(rt_add(g_tpos_1077, F->k_79), b_.lo, b_.hi) - b_.lo)]; }))).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1037 f_text_at_82(rt_int k_81) {
  struct f_text_at_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_81 = k_81;
if ((rt_add(g_tpos_1077, F->k_81) > g_ntoks_1076)) {
F->result_ = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_ntoks_1076, b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(rt_add(g_tpos_1077, F->k_81), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_perror_84(rstr *msg_83) {
  struct f_perror_84fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->msg_83 = msg_83;
f_fail_23((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_83), rt_str(" (at ", 5)), (((P1037)rt_nil_check((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_86(rstr *w_85) {
  struct f_accept_kw_86fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_85 = w_85;
if (f_at_kw_74(&(*F->w_85))) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
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

static int f_accept_op_88(rstr *w_87) {
  struct f_accept_op_88fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_87 = w_87;
if (f_at_op_76(&(*F->w_87))) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
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

static void f_expect_kw_90(rstr *w_89) {
  struct f_expect_kw_90fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_89 = w_89;
if ((!f_at_kw_74(&(*F->w_89)))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_89)); b_; }));
}
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_expect_op_92(rstr *w_91) {
  struct f_expect_op_92fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_91 = w_91;
if ((!f_at_op_76(&(*F->w_91)))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("expected ", 9), (*F->w_91)); b_; }));
}
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1037 f_expect_id_93(void) {
  struct f_expect_id_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_78((((rt_int)1LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->result_ = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(rt_sub(g_tpos_1077, ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_name_node_94(void) {
  struct f_name_node_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1218 = NULL;
F->x_1218 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
(*(P1044)rt_nil_check(F->x_1218)).name = f_expect_id_93();
F->result_ = F->x_1218;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_id_list_95(void) {
  struct f_id_list_95fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1219 = NULL;
F->tail_1220 = NULL;
f_append_69(&F->head_1219, &F->tail_1220, f_name_node_94());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1219, &F->tail_1220, f_name_node_94());
}
F->result_ = F->head_1219;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_p_subtype_96(void) {
  struct f_p_subtype_96fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1221 = f_cur_line_72();
F->x_1222 = NULL;
if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->x_1222 = f_nn_65((((rt_int)81LL)), F->line_1221);
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1044)rt_nil_check(F->x_1222)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1222;
goto ret_;
}
if ((!f_at_kind_78((((rt_int)1LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_1223 = rt_str_copy((((P1037)rt_nil_check((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
if (rt_str_eq(F->w_1223, rt_str("ARRAY", 5))) {
F->x_1222 = f_nn_65((((rt_int)74LL)), F->line_1221);
{
F->head_1224 = NULL;
F->tail_1225 = NULL;
f_append_69(&F->head_1224, &F->tail_1225, f_p_subtype_96());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1224, &F->tail_1225, f_p_subtype_96());
}
(*(P1044)rt_nil_check(F->x_1222)).a = F->head_1224;
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P1044)rt_nil_check(F->x_1222)).b = f_p_subtype_96();
} else if ((rt_str_eq(F->w_1223, rt_str("RECORD", 6)) || rt_str_eq(F->w_1223, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_1223, rt_str("RECORD", 6))) {
F->x_1222 = f_nn_65((((rt_int)75LL)), F->line_1221);
} else {
F->x_1222 = f_nn_65((((rt_int)76LL)), F->line_1221);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1226 = NULL;
F->tail_1227 = NULL;
F->more_1228 = 1;
while (F->more_1228) {
F->names_1229 = NULL;
F->names_1229 = f_id_list_95();
F->st_1230 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1230 = f_p_subtype_96();
while ((F->names_1229 != NULL)) {
F->cmp_1231 = NULL;
F->cmp_1231 = f_nn_65((((rt_int)63LL)), (*(P1044)rt_nil_check(F->names_1229)).line);
(*(P1044)rt_nil_check(F->cmp_1231)).name = (*(P1044)rt_nil_check(F->names_1229)).name;
(*(P1044)rt_nil_check(F->cmp_1231)).a = F->st_1230;
f_append_69(&F->head_1226, &F->tail_1227, F->cmp_1231);
F->names_1229 = (*(P1044)rt_nil_check(F->names_1229)).next;
}
F->more_1228 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1044)rt_nil_check(F->x_1222)).a = F->head_1226;
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_1223, rt_str("UNION", 5)) && f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1222)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1223, rt_str("ENUM", 4))) {
F->x_1222 = f_nn_65((((rt_int)72LL)), F->line_1221);
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1232 = NULL;
F->tail_1233 = NULL;
F->more_1234 = 1;
while (F->more_1234) {
F->lit_1235 = NULL;
F->lit_1235 = f_nn_65((((rt_int)4LL)), F->line_1221);
if ((!f_at_kind_78((((rt_int)6LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P1044)rt_nil_check(F->lit_1235)).name = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
f_append_69(&F->head_1232, &F->tail_1233, F->lit_1235);
F->more_1234 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1044)rt_nil_check(F->x_1222)).a = F->head_1232;
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1222)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1044)rt_nil_check(F->x_1222)).c = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_1223, rt_str("STRING", 6)) || rt_str_eq(F->w_1223, rt_str("SET", 3))) || rt_str_eq(F->w_1223, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_1223, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_1223, rt_str("STRING", 6))) {
F->x_1222 = f_nn_65((((rt_int)73LL)), F->line_1221);
} else if (rt_str_eq(F->w_1223, rt_str("SET", 3))) {
F->x_1222 = f_nn_65((((rt_int)77LL)), F->line_1221);
} else if (rt_str_eq(F->w_1223, rt_str("MAILBOX", 7))) {
F->x_1222 = f_nn_65((((rt_int)78LL)), F->line_1221);
} else {
F->x_1222 = f_nn_65((((rt_int)79LL)), F->line_1221);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P1044)rt_nil_check(F->x_1222)).a = f_p_subtype_96();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1222)).b = f_actual_params_98();
}
} else if (rt_str_eq(F->w_1223, rt_str("INT", 3))) {
F->x_1222 = f_nn_65((((rt_int)70LL)), F->line_1221);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1222)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1044)rt_nil_check(F->x_1222)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1223, rt_str("FLOAT", 5))) {
F->x_1222 = f_nn_65((((rt_int)71LL)), F->line_1221);
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1222)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1222)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1044)rt_nil_check(F->x_1222)).c = f_expr_107();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_1222 = f_nn_65((((rt_int)80LL)), F->line_1221);
(*(P1044)rt_nil_check(F->x_1222)).name = f_mk_3(&F->w_1223);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1222)).a = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1222)).b = f_constraint_list_97();
(*(P1044)rt_nil_check(F->x_1222)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_1222;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_constraint_list_97(void) {
  struct f_constraint_list_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1236 = NULL;
F->tail_1237 = NULL;
F->more_1238 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_1238) {
F->line_1239 = f_cur_line_72();
F->lo_1240 = NULL;
F->lo_1240 = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1241 = NULL;
F->r_1241 = f_nn_65((((rt_int)16LL)), F->line_1239);
(*(P1044)rt_nil_check(F->r_1241)).a = F->lo_1240;
(*(P1044)rt_nil_check(F->r_1241)).b = f_expr_107();
f_append_69(&F->head_1236, &F->tail_1237, F->r_1241);
} else {
f_append_69(&F->head_1236, &F->tail_1237, F->lo_1240);
}
F->more_1238 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1236;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_actual_params_98(void) {
  struct f_actual_params_98fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1242 = NULL;
F->tail_1243 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_69(&F->head_1242, &F->tail_1243, f_expr_107());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1242, &F->tail_1243, f_expr_107());
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1242;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_type_word_100(rstr *w_99) {
  struct f_is_type_word_100fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_99 = w_99;
F->result_ = ((((((((((((((rt_str_eq((*F->w_99), rt_str("INT", 3)) || rt_str_eq((*F->w_99), rt_str("BOOL", 4))) || rt_str_eq((*F->w_99), rt_str("FLOAT", 5))) || rt_str_eq((*F->w_99), rt_str("ENUM", 4))) || rt_str_eq((*F->w_99), rt_str("RECORD", 6))) || rt_str_eq((*F->w_99), rt_str("UNION", 5))) || rt_str_eq((*F->w_99), rt_str("ARRAY", 5))) || rt_str_eq((*F->w_99), rt_str("STRING", 6))) || rt_str_eq((*F->w_99), rt_str("SET", 3))) || rt_str_eq((*F->w_99), rt_str("MAILBOX", 7))) || rt_str_eq((*F->w_99), rt_str("FILE", 4))) || rt_str_eq((*F->w_99), rt_str("ASCII", 5))) || rt_str_eq((*F->w_99), rt_str("ACT", 3))) || rt_str_eq((*F->w_99), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->w_99), rt_str("LATCH", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_actual_tt_101(void) {
  struct f_actual_tt_101fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1244 = NULL;
F->tail_1245 = NULL;
F->more_1246 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_1246) {
if ((f_at_kind_78((((rt_int)1LL))) && f_is_type_word_100(&(((P1037)rt_nil_check((*(P1039)rt_nil_check((((P1041)rt_nil_check(g_toks_1075))->all).p[(rt_index(g_tpos_1077, (((P1041)rt_nil_check(g_toks_1075))->all).lo, (((P1041)rt_nil_check(g_toks_1075))->all).hi) - (((P1041)rt_nil_check(g_toks_1075))->all).lo)])).s))->all)))) {
f_append_69(&F->head_1244, &F->tail_1245, f_p_subtype_96());
} else {
f_append_69(&F->head_1244, &F->tail_1245, f_expr_107());
}
F->more_1246 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1244;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_binop_106(P1037 op_102, P1044 l_103, P1044 r_104, rt_int line_105) {
  struct f_binop_106fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_102 = op_102;
F->l_103 = l_103;
F->r_104 = r_104;
F->line_105 = line_105;
F->x_1247 = NULL;
F->x_1247 = f_nn_65((((rt_int)9LL)), F->line_105);
(*(P1044)rt_nil_check(F->x_1247)).name = F->op_102;
(*(P1044)rt_nil_check(F->x_1247)).a = F->l_103;
(*(P1044)rt_nil_check(F->x_1247)).b = F->r_104;
F->result_ = F->x_1247;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_expr_107(void) {
  struct f_expr_107fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1248 = NULL;
F->l_1248 = f_expr_and_108();
while ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_1249 = NULL;
F->op_1249 = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1250 = f_cur_line_72();
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->l_1248 = f_binop_106(F->op_1249, F->l_1248, f_expr_and_108(), F->line_1250);
}
F->result_ = F->l_1248;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_expr_and_108(void) {
  struct f_expr_and_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1251 = NULL;
F->l_1251 = f_expr_not_109();
while (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_1252 = f_cur_line_72();
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->l_1251 = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_1251, f_expr_not_109(), F->line_1252);
}
F->result_ = F->l_1251;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_expr_not_109(void) {
  struct f_expr_not_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_1253 = NULL;
F->x_1253 = f_nn_65((((rt_int)8LL)), f_cur_line_72());
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1253)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P1044)rt_nil_check(F->x_1253)).a = f_expr_not_109();
F->result_ = F->x_1253;
goto ret_;
}
F->result_ = f_expr_rel_112();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_rel_111(rstr *s_110) {
  struct f_is_rel_111fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_110 = s_110;
F->result_ = ((((((rt_str_eq((*F->s_110), rt_str("=", 1)) || rt_str_eq((*F->s_110), rt_str("/=", 2))) || rt_str_eq((*F->s_110), rt_str("<", 1))) || rt_str_eq((*F->s_110), rt_str("<=", 2))) || rt_str_eq((*F->s_110), rt_str(">", 1))) || rt_str_eq((*F->s_110), rt_str(">=", 2))) || rt_str_eq((*F->s_110), rt_str("IN", 2)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_expr_rel_112(void) {
  struct f_expr_rel_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1254 = NULL;
F->l_1254 = f_expr_add_113();
while ((f_at_kind_78((((rt_int)3LL))) && f_is_rel_111(&(((P1037)rt_nil_check((*(P1039)rt_nil_check((((P1041)rt_nil_check(g_toks_1075))->all).p[(rt_index(g_tpos_1077, (((P1041)rt_nil_check(g_toks_1075))->all).lo, (((P1041)rt_nil_check(g_toks_1075))->all).hi) - (((P1041)rt_nil_check(g_toks_1075))->all).lo)])).s))->all)))) {
F->op_1255 = NULL;
F->op_1255 = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1256 = f_cur_line_72();
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->l_1254 = f_binop_106(F->op_1255, F->l_1254, f_expr_add_113(), F->line_1256);
}
F->result_ = F->l_1254;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_expr_add_113(void) {
  struct f_expr_add_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1257 = NULL;
F->l_1257 = f_expr_mul_114();
while ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_1258 = NULL;
F->op_1258 = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1259 = f_cur_line_72();
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->l_1257 = f_binop_106(F->op_1258, F->l_1257, f_expr_mul_114(), F->line_1259);
}
F->result_ = F->l_1257;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_expr_mul_114(void) {
  struct f_expr_mul_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1260 = NULL;
F->l_1260 = f_expr_pow_115();
while (((((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_1261 = NULL;
F->op_1261 = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1262 = f_cur_line_72();
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->l_1260 = f_binop_106(F->op_1261, F->l_1260, f_expr_pow_115(), F->line_1262);
}
F->result_ = F->l_1260;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_expr_pow_115(void) {
  struct f_expr_pow_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1263 = NULL;
F->l_1263 = f_expr_prefix_116();
while (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_1264 = f_cur_line_72();
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->l_1263 = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_1263, f_expr_prefix_116(), F->line_1264);
}
F->result_ = F->l_1263;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_expr_prefix_116(void) {
  struct f_expr_prefix_116fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_1265 = NULL;
F->x_1265 = f_nn_65((((rt_int)8LL)), f_cur_line_72());
(*(P1044)rt_nil_check(F->x_1265)).name = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1265)).a = f_expr_prefix_116();
F->result_ = F->x_1265;
goto ret_;
}
F->result_ = f_postfix_117();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_postfix_117(void) {
  struct f_postfix_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_1266 = NULL;
F->p_1266 = f_primary_118();
while (1) {
F->line_1267 = f_cur_line_72();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1268 = NULL;
F->x_1268 = f_nn_65((((rt_int)10LL)), F->line_1267);
F->head_1269 = NULL;
F->tail_1270 = NULL;
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1271 = 1;
while (F->more_1271) {
F->lo_1272 = NULL;
F->lo_1272 = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1273 = NULL;
F->r_1273 = f_nn_65((((rt_int)16LL)), F->line_1267);
(*(P1044)rt_nil_check(F->r_1273)).a = F->lo_1272;
(*(P1044)rt_nil_check(F->r_1273)).b = f_expr_107();
f_append_69(&F->head_1269, &F->tail_1270, F->r_1273);
} else {
f_append_69(&F->head_1269, &F->tail_1270, F->lo_1272);
}
F->more_1271 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P1044)rt_nil_check(F->x_1268)).a = F->p_1266;
(*(P1044)rt_nil_check(F->x_1268)).b = F->head_1269;
F->p_1266 = F->x_1268;
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_80(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1274 = NULL;
F->x_1274 = f_nn_65((((rt_int)11LL)), F->line_1267);
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1274)).a = F->p_1266;
(*(P1044)rt_nil_check(F->x_1274)).name = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->p_1266 = F->x_1274;
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P1044)rt_nil_check(F->p_1266)).kind == (((rt_int)7LL))))) {
F->x_1275 = NULL;
F->x_1275 = f_nn_65((((rt_int)12LL)), F->line_1267);
(*(P1044)rt_nil_check(F->x_1275)).a = F->p_1266;
(*(P1044)rt_nil_check(F->x_1275)).b = f_actual_tt_101();
F->p_1266 = F->x_1275;
} else if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1276 = NULL;
F->x_1276 = f_nn_65((((rt_int)13LL)), F->line_1267);
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1276)).a = F->p_1266;
(*(P1044)rt_nil_check(F->x_1276)).b = f_p_subtype_96();
F->p_1266 = F->x_1276;
} else {
F->result_ = F->p_1266;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_primary_118(void) {
  struct f_primary_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1277 = f_cur_line_72();
F->x_1278 = NULL;
F->k_1279 = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).kind;
if ((F->k_1279 == (((rt_int)4LL)))) {
F->x_1278 = f_nn_65((((rt_int)1LL)), F->line_1277);
(*(P1044)rt_nil_check(F->x_1278)).ival = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).ival;
(*(P1044)rt_nil_check(F->x_1278)).name = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->result_ = F->x_1278;
goto ret_;
}
if ((((F->k_1279 == (((rt_int)5LL))) || (F->k_1279 == (((rt_int)7LL)))) || (F->k_1279 == (((rt_int)6LL))))) {
if ((F->k_1279 == (((rt_int)5LL)))) {
F->x_1278 = f_nn_65((((rt_int)2LL)), F->line_1277);
} else if ((F->k_1279 == (((rt_int)7LL)))) {
F->x_1278 = f_nn_65((((rt_int)3LL)), F->line_1277);
} else {
F->x_1278 = f_nn_65((((rt_int)4LL)), F->line_1277);
}
(*(P1044)rt_nil_check(F->x_1278)).name = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->result_ = F->x_1278;
goto ret_;
}
if ((F->k_1279 == (((rt_int)1LL)))) {
F->w_1280 = rt_str_copy((((P1037)rt_nil_check((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1280, rt_str("TRUE", 4)) || rt_str_eq(F->w_1280, rt_str("FALSE", 5)))) {
F->x_1278 = f_nn_65((((rt_int)5LL)), F->line_1277);
if (rt_str_eq(F->w_1280, rt_str("TRUE", 4))) {
(*(P1044)rt_nil_check(F->x_1278)).ival = ((rt_int)1LL);
}
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->result_ = F->x_1278;
goto ret_;
}
if (rt_str_eq(F->w_1280, rt_str("NIL", 3))) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->result_ = f_nn_65((((rt_int)6LL)), F->line_1277);
goto ret_;
}
F->result_ = f_name_node_94();
goto ret_;
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1278 = f_nn_65((((rt_int)17LL)), F->line_1277);
(*(P1044)rt_nil_check(F->x_1278)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1278;
goto ret_;
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1281 = NULL;
F->tail_1282 = NULL;
F->x_1278 = f_nn_65((((rt_int)14LL)), F->line_1277);
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1283 = 1;
while (F->more_1283) {
f_append_69(&F->head_1281, &F->tail_1282, f_constructor_item_119());
F->more_1283 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P1044)rt_nil_check(F->x_1278)).a = F->head_1281;
F->result_ = F->x_1278;
goto ret_;
}
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an expression", 22); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_constructor_item_119(void) {
  struct f_constructor_item_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1284 = f_cur_line_72();
F->it_1285 = NULL;
F->it_1285 = f_nn_65((((rt_int)15LL)), F->line_1284);
F->first_1286 = NULL;
F->first_1286 = f_expr_107();
F->keys_1287 = NULL;
F->ktail_1288 = NULL;
F->lab_1289 = NULL;
F->lab_1289 = f_nn_65((((rt_int)61LL)), F->line_1284);
(*(P1044)rt_nil_check(F->lab_1289)).a = F->first_1286;
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1044)rt_nil_check(F->lab_1289)).b = f_expr_107();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_69(&F->keys_1287, &F->ktail_1288, F->lab_1289);
} else if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1290 = g_tpos_1077;
F->more_1291 = NULL;
F->tail2_1292 = NULL;
F->ok_1293 = 0;
F->go_1294 = 1;
while ((F->go_1294 && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1295 = NULL;
F->l2_1295 = f_nn_65((((rt_int)61LL)), F->line_1284);
(*(P1044)rt_nil_check(F->l2_1295)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1044)rt_nil_check(F->l2_1295)).b = f_expr_107();
}
f_append_69(&F->more_1291, &F->tail2_1292, F->l2_1295);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1293 = 1;
F->go_1294 = 0;
} else if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1294 = 0;
}
}
if (F->ok_1293) {
f_append_69(&F->keys_1287, &F->ktail_1288, F->lab_1289);
f_append_69(&F->keys_1287, &F->ktail_1288, F->more_1291);
} else {
g_tpos_1077 = F->save_1290;
}
}
if (((F->keys_1287 == NULL) && ((*(P1044)rt_nil_check(F->lab_1289)).b != NULL))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1287 != NULL)) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P1044)rt_nil_check(F->it_1285)).a = F->keys_1287;
(*(P1044)rt_nil_check(F->it_1285)).b = f_expr_107();
} else {
(*(P1044)rt_nil_check(F->it_1285)).b = F->first_1286;
}
F->result_ = F->it_1285;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_at_body_end_120(void) {
  struct f_at_body_end_120fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = (((((f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; })) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }))) || f_at_kind_78((((rt_int)0LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_body_121(void) {
  struct f_body_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1296 = NULL;
F->tail_1297 = NULL;
F->stmts_1298 = 0;
F->after_1299 = NULL;
while ((!f_at_body_end_120())) {
F->x_1300 = NULL;
F->x_1300 = f_body_element_122();
if (((F->x_1300 != NULL) && (((((*(P1044)rt_nil_check(F->x_1300)).kind == (((rt_int)40LL))) || ((*(P1044)rt_nil_check(F->x_1300)).kind == (((rt_int)41LL)))) || ((*(P1044)rt_nil_check(F->x_1300)).kind == (((rt_int)49LL)))) || ((*(P1044)rt_nil_check(F->x_1300)).kind == (((rt_int)48LL)))))) {
if (F->stmts_1298) {
f_fail_23((*(P1044)rt_nil_check(F->x_1300)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1300 != NULL) && ((*(P1044)rt_nil_check(F->x_1300)).kind >= (((rt_int)42LL)))) && ((*(P1044)rt_nil_check(F->x_1300)).kind <= (((rt_int)51LL))))) {
if ((F->stmts_1298 && (F->after_1299 == NULL))) {
F->after_1299 = F->x_1300;
}
} else if (((F->x_1300 != NULL) && ((*(P1044)rt_nil_check(F->x_1300)).kind != (((rt_int)33LL))))) {
if ((F->after_1299 != NULL)) {
f_fail_23((*(P1044)rt_nil_check(F->after_1299)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1298 = 1;
}
f_append_69(&F->head_1296, &F->tail_1297, F->x_1300);
}
F->result_ = F->head_1296;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_body_element_122(void) {
  struct f_body_element_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1301 = NULL;
F->pr_1302 = NULL;
F->pr_1302 = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1301 = f_declaration_123();
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1301 = f_nn_65((((rt_int)33LL)), f_cur_line_72());
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1301)).a = f_expr_107();
} else {
F->x_1301 = f_statement_149();
}
if ((F->pr_1302 != NULL)) {
F->p_1303 = NULL;
F->p_1303 = F->x_1301;
while ((F->p_1303 != NULL)) {
if (((*(P1044)rt_nil_check(F->p_1303)).prags == NULL)) {
(*(P1044)rt_nil_check(F->p_1303)).prags = F->pr_1302;
} else {
(*(P1044)rt_nil_check(F->p_1303)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->pr_1302))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1303)).prags))->all)); b_; }));
}
F->p_1303 = (*(P1044)rt_nil_check(F->p_1303)).next;
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1301;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_declaration_123(void) {
  struct f_declaration_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1304 = f_cur_line_72();
if ((f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })))) {
F->result_ = f_object_decl_124();
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) {
F->result_ = f_abbrev_decl_125();
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->result_ = f_type_decl_131();
goto ret_;
} else if (((f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; })) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; })))) {
F->result_ = f_subprogram_decl_140();
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) {
F->result_ = f_capsule_decl_141();
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) {
F->result_ = f_expose_decl_146();
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->result_ = f_task_decl_145();
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; }))) {
F->result_ = f_generic_decl_143();
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) {
F->head_1305 = NULL;
F->tail_1306 = NULL;
F->names_1307 = NULL;
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->names_1307 = f_id_list_95();
while ((F->names_1307 != NULL)) {
F->x_1308 = NULL;
F->x_1308 = f_nn_65((((rt_int)49LL)), F->line_1304);
(*(P1044)rt_nil_check(F->x_1308)).name = (*(P1044)rt_nil_check(F->names_1307)).name;
f_append_69(&F->head_1305, &F->tail_1306, F->x_1308);
F->names_1307 = (*(P1044)rt_nil_check(F->names_1307)).next;
}
F->result_ = F->head_1305;
goto ret_;
}
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this declaration is not handled yet", 35); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_object_decl_124(void) {
  struct f_object_decl_124fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1309 = f_cur_line_72();
F->is_var_1310 = f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1311 = NULL;
F->st_1312 = NULL;
F->init_1313 = NULL;
F->loc_1314 = NULL;
F->loc_kind_1315 = ((rt_int)0LL);
F->head_1316 = NULL;
F->tail_1317 = NULL;
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->names_1311 = f_id_list_95();
if (F->is_var_1310) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1312 = f_p_subtype_96();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1313 = f_expr_107();
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1037)rt_nil_check((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->loc_kind_1315 = ((rt_int)1LL);
} else {
F->loc_kind_1315 = ((rt_int)2LL);
}
F->loc_1314 = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (((F->init_1313 == NULL) && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; })))) {
F->init_1313 = f_expr_107();
}
} else {
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1312 = f_p_subtype_96();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1313 = f_expr_107();
}
while ((F->names_1311 != NULL)) {
F->x_1318 = NULL;
if (F->is_var_1310) {
F->x_1318 = f_nn_65((((rt_int)40LL)), F->line_1309);
} else {
F->x_1318 = f_nn_65((((rt_int)41LL)), F->line_1309);
}
(*(P1044)rt_nil_check(F->x_1318)).name = (*(P1044)rt_nil_check(F->names_1311)).name;
(*(P1044)rt_nil_check(F->x_1318)).a = F->st_1312;
(*(P1044)rt_nil_check(F->x_1318)).b = F->init_1313;
(*(P1044)rt_nil_check(F->x_1318)).c = F->loc_1314;
(*(P1044)rt_nil_check(F->x_1318)).ival = F->loc_kind_1315;
f_append_69(&F->head_1316, &F->tail_1317, F->x_1318);
F->names_1311 = (*(P1044)rt_nil_check(F->names_1311)).next;
}
F->result_ = F->head_1316;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_abbrev_decl_125(void) {
  struct f_abbrev_decl_125fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1319 = NULL;
F->x_1319 = f_nn_65((((rt_int)42LL)), f_cur_line_72());
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1319)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1319)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1319)).b = f_formal_params_134();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P1044)rt_nil_check(F->x_1319)).a = f_p_subtype_96();
F->result_ = F->x_1319;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_rep_spec_126(void) {
  struct f_rep_spec_126fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REP", 3); b_; })))) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_rep_items_127();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_rep_items_127(void) {
  struct f_rep_items_127fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1320 = NULL;
F->tail_1321 = NULL;
F->more_1322 = 1;
while (F->more_1322) {
f_append_69(&F->head_1320, &F->tail_1321, f_rep_item_130());
F->more_1322 = (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && f_rep_word_129(((rt_int)1LL)));
if (F->more_1322) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
}
}
F->result_ = F->head_1320;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_rep_word_129(rt_int k_128) {
  struct f_rep_word_129fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_128 = k_128;
F->w_1323 = rt_str_copy((((P1037)rt_nil_check(f_text_at_82(F->k_128)))->all));
F->result_ = (((f_kind_at_80(F->k_128) == (((rt_int)1LL))) || (f_kind_at_80(F->k_128) == (((rt_int)2LL)))) && ((((((((rt_str_eq(F->w_1323, rt_str("SIZE", 4)) || rt_str_eq(F->w_1323, rt_str("ALIGN", 5))) || rt_str_eq(F->w_1323, rt_str("OFFSET", 6))) || rt_str_eq(F->w_1323, rt_str("RECORD", 6))) || rt_str_eq(F->w_1323, rt_str("UNION", 5))) || rt_str_eq(F->w_1323, rt_str("ARRAY", 5))) || rt_str_eq(F->w_1323, rt_str("ABSENT", 6))) || rt_str_eq(F->w_1323, rt_str("PTR", 3))) || rt_str_eq(F->w_1323, rt_str("ENUM", 4))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_rep_item_130(void) {
  struct f_rep_item_130fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1324 = NULL;
F->x_1324 = f_nn_65((((rt_int)64LL)), f_cur_line_72());
if ((!f_rep_word_129(((rt_int)0LL)))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a representational item", 32); b_; }));
}
(*(P1044)rt_nil_check(F->x_1324)).name = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
if ((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1324)).name))->all), rt_str("SIZE", 4)) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1324)).name))->all), rt_str("OFFSET", 6)))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1044)rt_nil_check(F->x_1324)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
} else if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1324)).name))->all), rt_str("ALIGN", 5))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1044)rt_nil_check(F->x_1324)).a = f_expr_107();
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }))) {
(*(P1044)rt_nil_check(F->x_1324)).b = (*(P1044)rt_nil_check(F->x_1324)).a;
(*(P1044)rt_nil_check(F->x_1324)).a = f_expr_107();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
} else if ((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1324)).name))->all), rt_str("RECORD", 6)) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1324)).name))->all), rt_str("UNION", 5)))) {
F->head_1325 = NULL;
F->tail_1326 = NULL;
F->more_1327 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_1327) {
F->names_1328 = NULL;
F->names_1328 = f_id_list_95();
F->items_1329 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_rep_word_129(((rt_int)0LL))) {
F->items_1329 = f_rep_items_127();
}
while ((F->names_1328 != NULL)) {
F->cmp_1330 = NULL;
F->cmp_1330 = f_nn_65((((rt_int)63LL)), (*(P1044)rt_nil_check(F->names_1328)).line);
(*(P1044)rt_nil_check(F->cmp_1330)).name = (*(P1044)rt_nil_check(F->names_1328)).name;
(*(P1044)rt_nil_check(F->cmp_1330)).a = F->items_1329;
f_append_69(&F->head_1325, &F->tail_1326, F->cmp_1330);
F->names_1328 = (*(P1044)rt_nil_check(F->names_1328)).next;
}
F->more_1327 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P1044)rt_nil_check(F->x_1324)).c = F->head_1325;
} else if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1324)).name))->all), rt_str("ARRAY", 5))) {
F->head_1331 = NULL;
F->tail_1332 = NULL;
while ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; })))) {
f_append_69(&F->head_1331, &F->tail_1332, f_name_node_94());
if ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; })))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P1044)rt_nil_check(F->x_1324)).d = F->head_1331;
if (f_rep_word_129(((rt_int)0LL))) {
(*(P1044)rt_nil_check(F->x_1324)).c = f_rep_items_127();
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && f_rep_word_129(((rt_int)1LL)))) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1324)).c = f_rep_items_127();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->head_1333 = NULL;
F->tail_1334 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_69(&F->head_1333, &F->tail_1334, f_name_node_94());
F->dummy_1335 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P1044)rt_nil_check(F->x_1324)).d = F->head_1333;
}
F->result_ = F->x_1324;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_type_decl_131(void) {
  struct f_type_decl_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1336 = f_cur_line_72();
F->name_1337 = NULL;
F->params_1338 = NULL;
F->x_1339 = NULL;
F->tts_1340 = NULL;
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->name_1337 = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1340 = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1338 = f_formal_params_134();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1037)rt_nil_check((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->x_1339 = f_nn_65((((rt_int)44LL)), F->line_1336);
(*(P1044)rt_nil_check(F->x_1339)).d = F->params_1338;
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1339)).b = f_formal_params_134();
}
} else {
F->x_1339 = f_nn_65((((rt_int)43LL)), F->line_1336);
(*(P1044)rt_nil_check(F->x_1339)).b = F->params_1338;
}
(*(P1044)rt_nil_check(F->x_1339)).name = F->name_1337;
(*(P1044)rt_nil_check(F->x_1339)).e = F->tts_1340;
(*(P1044)rt_nil_check(F->x_1339)).a = f_p_subtype_96();
(*(P1044)rt_nil_check(F->x_1339)).c = f_rep_spec_126();
F->result_ = F->x_1339;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_mode_of_133(rstr *w_132) {
  struct f_mode_of_133fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_132 = w_132;
if (rt_str_eq((*F->w_132), rt_str("VAR", 3))) {
F->result_ = (((rt_int)2LL));
goto ret_;
} else if (rt_str_eq((*F->w_132), rt_str("OUT", 3))) {
F->result_ = (((rt_int)3LL));
goto ret_;
} else if (rt_str_eq((*F->w_132), rt_str("READONLY", 8))) {
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

static P1044 f_formal_params_134(void) {
  struct f_formal_params_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1341 = NULL;
F->tail_1342 = NULL;
F->more_1343 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_1343) {
F->mode_1344 = (((rt_int)1LL));
F->names_1345 = NULL;
F->ntail_1346 = NULL;
F->st_1347 = NULL;
if ((((f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1344 = f_mode_of_133(&(((P1037)rt_nil_check((*(P1039)rt_nil_check((((P1041)rt_nil_check(g_toks_1075))->all).p[(rt_index(g_tpos_1077, (((P1041)rt_nil_check(g_toks_1075))->all).lo, (((P1041)rt_nil_check(g_toks_1075))->all).hi) - (((P1041)rt_nil_check(g_toks_1075))->all).lo)])).s))->all));
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
}
f_append_69(&F->names_1345, &F->ntail_1346, f_name_node_94());
while ((((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_80(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P1037)rt_nil_check(f_text_at_82(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P1037)rt_nil_check(f_text_at_82(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
f_append_69(&F->names_1345, &F->ntail_1346, f_name_node_94());
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1347 = f_p_subtype_96();
while ((F->names_1345 != NULL)) {
F->p_1348 = NULL;
F->p_1348 = f_nn_65((((rt_int)52LL)), (*(P1044)rt_nil_check(F->names_1345)).line);
(*(P1044)rt_nil_check(F->p_1348)).name = (*(P1044)rt_nil_check(F->names_1345)).name;
(*(P1044)rt_nil_check(F->p_1348)).ival = F->mode_1344;
(*(P1044)rt_nil_check(F->p_1348)).a = F->st_1347;
f_append_69(&F->head_1341, &F->tail_1342, F->p_1348);
F->names_1345 = (*(P1044)rt_nil_check(F->names_1345)).next;
}
F->more_1343 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1341;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_136(P1044 owner_135) {
  struct f_imports_list_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_135 = owner_135;
F->head_1349 = NULL;
F->tail_1350 = NULL;
F->more_1351 = 1;
if ((!f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1044)rt_nil_check(F->owner_135)).flag = rt_add((*(P1044)rt_nil_check(F->owner_135)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_1351) {
F->ro_1352 = f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1353 = NULL;
F->x_1353 = f_name_node_94();
if (F->ro_1352) {
(*(P1044)rt_nil_check(F->x_1353)).ival = ((rt_int)1LL);
}
f_append_69(&F->head_1349, &F->tail_1350, F->x_1353);
F->more_1351 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1044)rt_nil_check(F->owner_135)).d = F->head_1349;
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_definable_138(rstr *w_137) {
  struct f_is_definable_138fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_137 = w_137;
F->result_ = ((((((((((((((((((((rt_str_eq((*F->w_137), rt_str("+", 1)) || rt_str_eq((*F->w_137), rt_str("-", 1))) || rt_str_eq((*F->w_137), rt_str("*", 1))) || rt_str_eq((*F->w_137), rt_str("/", 1))) || rt_str_eq((*F->w_137), rt_str("**", 2))) || rt_str_eq((*F->w_137), rt_str("&", 1))) || rt_str_eq((*F->w_137), rt_str("=", 1))) || rt_str_eq((*F->w_137), rt_str("<", 1))) || rt_str_eq((*F->w_137), rt_str("<=", 2))) || rt_str_eq((*F->w_137), rt_str(">", 1))) || rt_str_eq((*F->w_137), rt_str(">=", 2))) || rt_str_eq((*F->w_137), rt_str("/=", 2))) || rt_str_eq((*F->w_137), rt_str("DIV", 3))) || rt_str_eq((*F->w_137), rt_str("MOD", 3))) || rt_str_eq((*F->w_137), rt_str("AND", 3))) || rt_str_eq((*F->w_137), rt_str("OR", 2))) || rt_str_eq((*F->w_137), rt_str("XOR", 3))) || rt_str_eq((*F->w_137), rt_str("NOT", 3))) || rt_str_eq((*F->w_137), rt_str("IN", 2))) || rt_str_eq((*F->w_137), rt_str(":=", 2))) || rt_str_eq((*F->w_137), rt_str("#", 1)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1037 f_definable_name_139(void) {
  struct f_definable_name_139fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL))))) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)2LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1037)rt_nil_check((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(rt_sub(g_tpos_1077, ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)); b_; }));
goto ret_;
} else if (((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P1037)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("*", 1)))) {
F->r_1354 = NULL;
F->r_1354 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
while ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; }))) {
F->r_1354 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_1354))->all), rt_str("*", 1)); b_; }));
} else if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1354 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_1354))->all), rt_str("..", 2)); b_; }));
} else if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->r_1354 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_1354))->all), rt_str(",", 1)); b_; }));
} else {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a subscripting selector is made of *, .. and ,", 46); b_; }));
}
}
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_1354))->all), rt_str(")", 1)); b_; }));
goto ret_;
}
if ((f_at_kind_78((((rt_int)1LL))) || (f_at_kind_78((((rt_int)3LL))) && f_is_definable_138(&(((P1037)rt_nil_check((*(P1039)rt_nil_check((((P1041)rt_nil_check(g_toks_1075))->all).p[(rt_index(g_tpos_1077, (((P1041)rt_nil_check(g_toks_1075))->all).lo, (((P1041)rt_nil_check(g_toks_1075))->all).hi) - (((P1041)rt_nil_check(g_toks_1075))->all).lo)])).s))->all))))) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->result_ = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(rt_sub(g_tpos_1077, ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a name", 15); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_subprogram_decl_140(void) {
  struct f_subprogram_decl_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1355 = f_cur_line_72();
F->x_1356 = NULL;
F->is_abn_1357 = f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1358 = f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_1358) {
F->x_1356 = f_nn_65((((rt_int)46LL)), F->line_1355);
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1356 = f_nn_65((((rt_int)45LL)), F->line_1355);
} else {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
if (F->is_abn_1357) {
(*(P1044)rt_nil_check(F->x_1356)).flag = ((rt_int)1LL);
}
(*(P1044)rt_nil_check(F->x_1356)).name = f_definable_name_139();
if ((((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1356)).name))->all), rt_str(">", 1)) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1356)).name))->all), rt_str("<=", 2))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1356)).name))->all), rt_str(">=", 2))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1356)).name))->all), rt_str("/=", 2)))) {
f_fail_23(F->line_1355, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1356)).name))->all), rt_str(" is not a definable symbol", 26)); b_; }));
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1356)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1356)).a = f_formal_params_134();
}
if (F->is_func_1358) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1044)rt_nil_check(F->x_1356)).b = f_p_subtype_96();
}
F->dummy_1359 = f_imports_list_136(F->x_1356);
if (((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P1044)rt_nil_check(F->x_1356)).prags == NULL)) {
(*(P1044)rt_nil_check(F->x_1356)).prags = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P1044)rt_nil_check(F->x_1356)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1356)).prags))->all), (((P1037)rt_nil_check((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1044)rt_nil_check(F->x_1356)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_1358) {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P1037)rt_nil_check(f_definable_name_139()))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1356)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1356)).name))->all)); b_; }));
}
F->result_ = F->x_1356;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_capsule_decl_141(void) {
  struct f_capsule_decl_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1360 = NULL;
F->x_1360 = f_nn_65((((rt_int)47LL)), f_cur_line_72());
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1360)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1360)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1360)).b = f_formal_params_134();
}
F->dummy_1361 = f_imports_list_136(F->x_1360);
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1044)rt_nil_check(F->x_1360)).ival = ((rt_int)1LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P1044)rt_nil_check(F->x_1360)).ival = ((rt_int)0LL);
} else {
F->head_1362 = NULL;
F->tail_1363 = NULL;
F->more_1364 = 1;
while (F->more_1364) {
F->n_1365 = NULL;
F->n_1365 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P1044)rt_nil_check(F->n_1365)).ival = ((rt_int)1LL);
}
(*(P1044)rt_nil_check(F->n_1365)).name = f_definable_name_139();
f_append_69(&F->head_1362, &F->tail_1363, F->n_1365);
F->more_1364 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1044)rt_nil_check(F->x_1360)).a = F->head_1362;
(*(P1044)rt_nil_check(F->x_1360)).ival = ((rt_int)2LL);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1044)rt_nil_check(F->x_1360)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
(*(P1044)rt_nil_check(F->x_1360)).eline = f_cur_line_72();
if ((!rt_str_eq((((P1037)rt_nil_check(f_expect_id_93()))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1360)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1360;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_formal_tt_142(void) {
  struct f_formal_tt_142fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1366 = NULL;
F->tail_1367 = NULL;
F->more_1368 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_1368) {
f_append_69(&F->head_1366, &F->tail_1367, f_name_node_94());
F->more_1368 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1366;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_generic_decl_143(void) {
  struct f_generic_decl_143fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1369 = NULL;
F->x_1369 = f_nn_65((((rt_int)51LL)), f_cur_line_72());
F->head_1370 = NULL;
F->tail_1371 = NULL;
F->more_1372 = 1;
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
while (F->more_1372) {
F->names_1373 = NULL;
F->names_1373 = f_id_list_95();
F->kind_1374 = ((rt_int)6LL);
F->st_1375 = NULL;
F->items_1376 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1374 = ((rt_int)1LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1374 = ((rt_int)2LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1374 = ((rt_int)3LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1374 = ((rt_int)4LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1374 = ((rt_int)5LL);
} else if (((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1037)rt_nil_check((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("STRING", 6))) && (!((f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P1037)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->kind_1374 = ((rt_int)7LL);
} else if (((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1037)rt_nil_check((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("ENUM", 4))) && (!((f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P1037)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->kind_1374 = ((rt_int)8LL);
} else {
F->st_1375 = f_p_subtype_96();
}
if (((F->kind_1374 <= ((rt_int)5LL)) && f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
F->items_1376 = f_type_list_144();
}
if (((F->kind_1374 == ((rt_int)4LL)) && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1375 = f_p_subtype_96();
}
while ((F->names_1373 != NULL)) {
F->p_1377 = NULL;
F->p_1377 = f_nn_65((((rt_int)52LL)), (*(P1044)rt_nil_check(F->names_1373)).line);
(*(P1044)rt_nil_check(F->p_1377)).name = (*(P1044)rt_nil_check(F->names_1373)).name;
(*(P1044)rt_nil_check(F->p_1377)).ival = F->kind_1374;
(*(P1044)rt_nil_check(F->p_1377)).a = F->st_1375;
(*(P1044)rt_nil_check(F->p_1377)).b = F->items_1376;
f_append_69(&F->head_1370, &F->tail_1371, F->p_1377);
F->names_1373 = (*(P1044)rt_nil_check(F->names_1373)).next;
}
F->more_1372 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->nhead_1378 = NULL;
F->ntail_1379 = NULL;
F->more_1372 = 1;
while (F->more_1372) {
F->it_1380 = NULL;
F->it_1380 = f_nn_65((((rt_int)52LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
(*(P1044)rt_nil_check(F->it_1380)).ival = ((rt_int)3LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
(*(P1044)rt_nil_check(F->it_1380)).ival = ((rt_int)4LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
(*(P1044)rt_nil_check(F->it_1380)).ival = ((rt_int)5LL);
}
(*(P1044)rt_nil_check(F->it_1380)).name = f_definable_name_139();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1044)rt_nil_check(F->it_1380)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1044)rt_nil_check(F->it_1380)).b = f_type_list_144();
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
(*(P1044)rt_nil_check(F->it_1380)).a = f_p_subtype_96();
}
f_append_69(&F->nhead_1378, &F->ntail_1379, F->it_1380);
F->more_1372 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1044)rt_nil_check(F->x_1369)).d = F->nhead_1378;
}
(*(P1044)rt_nil_check(F->x_1369)).a = F->head_1370;
(*(P1044)rt_nil_check(F->x_1369)).b = f_declaration_123();
(*(P1044)rt_nil_check(F->x_1369)).name = (*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->x_1369)).b)).name;
F->result_ = F->x_1369;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_type_list_144(void) {
  struct f_type_list_144fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1381 = NULL;
F->tail_1382 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1383 = 1;
while (F->more_1383) {
if (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P1037)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(",", 1)) || rt_str_eq((((P1037)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(")", 1))))) {
F->n_1384 = NULL;
F->n_1384 = f_nn_65((((rt_int)80LL)), f_cur_line_72());
(*(P1044)rt_nil_check(F->n_1384)).name = f_expect_id_93();
f_append_69(&F->head_1381, &F->tail_1382, F->n_1384);
} else {
f_append_69(&F->head_1381, &F->tail_1382, f_p_subtype_96());
}
F->more_1383 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1381;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_task_decl_145(void) {
  struct f_task_decl_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1385 = NULL;
F->x_1385 = f_nn_65((((rt_int)50LL)), f_cur_line_72());
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1385)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1385)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1385)).a = f_formal_params_134();
}
F->dummy_1386 = f_imports_list_136(F->x_1385);
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1044)rt_nil_check(F->x_1385)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P1037)rt_nil_check(f_expect_id_93()))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1385)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1385)).name))->all)); b_; }));
}
F->result_ = F->x_1385;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_expose_decl_146(void) {
  struct f_expose_decl_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1387 = NULL;
F->x_1387 = f_nn_65((((rt_int)48LL)), f_cur_line_72());
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1044)rt_nil_check(F->x_1387)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1388 = NULL;
F->tail_1389 = NULL;
F->more_1390 = 1;
while (F->more_1390) {
F->n_1391 = NULL;
F->n_1391 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P1044)rt_nil_check(F->n_1391)).ival = ((rt_int)1LL);
}
(*(P1044)rt_nil_check(F->n_1391)).name = f_definable_name_139();
f_append_69(&F->head_1388, &F->tail_1389, F->n_1391);
F->more_1390 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1044)rt_nil_check(F->x_1387)).a = F->head_1388;
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P1044)rt_nil_check(F->x_1387)).flag = ((rt_int)1LL);
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P1044)rt_nil_check(F->x_1387)).flag = rt_add((*(P1044)rt_nil_check(F->x_1387)).flag, ((rt_int)2LL));
}
(*(P1044)rt_nil_check(F->x_1387)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1387)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1387)).b = f_actual_params_98();
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1392 = NULL;
F->tail_1393 = NULL;
F->more_1394 = 1;
while (F->more_1394) {
F->n_1395 = NULL;
F->n_1395 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
F->tgt_1396 = NULL;
F->tgt_1396 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
(*(P1044)rt_nil_check(F->n_1395)).name = f_definable_name_139();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P1044)rt_nil_check(F->tgt_1396)).name = f_definable_name_139();
(*(P1044)rt_nil_check(F->n_1395)).a = F->tgt_1396;
f_append_69(&F->head_1392, &F->tail_1393, F->n_1395);
F->more_1394 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1044)rt_nil_check(F->x_1387)).c = F->head_1392;
}
F->result_ = F->x_1387;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_compound_kw_148(rstr *w_147) {
  struct f_is_compound_kw_148fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_147 = w_147;
F->result_ = (((((((rt_str_eq((*F->w_147), rt_str("IF", 2)) || rt_str_eq((*F->w_147), rt_str("CASE", 4))) || rt_str_eq((*F->w_147), rt_str("FOR", 3))) || rt_str_eq((*F->w_147), rt_str("WHILE", 5))) || rt_str_eq((*F->w_147), rt_str("BEGIN", 5))) || rt_str_eq((*F->w_147), rt_str("GUARD", 5))) || rt_str_eq((*F->w_147), rt_str("WAIT", 4))) || rt_str_eq((*F->w_147), rt_str("REGION", 6)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_statement_149(void) {
  struct f_statement_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1397 = NULL;
F->ltail_1398 = NULL;
F->match_1399 = NULL;
F->s_1400 = NULL;
while (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P1037)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_69(&F->labels_1397, &F->ltail_1398, f_name_node_94());
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
}
if (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_148(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1037)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all); b_; })))) {
F->match_1399 = f_expect_id_93();
}
F->s_1400 = f_unlabeled_statement_150();
if ((F->match_1399 != NULL)) {
if (((((((((*(P1044)rt_nil_check(F->s_1400)).kind != (((rt_int)22LL))) && ((*(P1044)rt_nil_check(F->s_1400)).kind != (((rt_int)23LL)))) && ((*(P1044)rt_nil_check(F->s_1400)).kind != (((rt_int)24LL)))) && ((*(P1044)rt_nil_check(F->s_1400)).kind != (((rt_int)25LL)))) && ((*(P1044)rt_nil_check(F->s_1400)).kind != (((rt_int)26LL)))) && ((*(P1044)rt_nil_check(F->s_1400)).kind != (((rt_int)35LL)))) && ((*(P1044)rt_nil_check(F->s_1400)).kind != (((rt_int)36LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->s_1400)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P1037)rt_nil_check(f_expect_id_93()))->all), (((P1037)rt_nil_check(F->match_1399))->all)))) {
f_fail_23((*(P1044)rt_nil_check(F->s_1400)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P1037)rt_nil_check(F->match_1399))->all)); b_; }));
}
(*(P1044)rt_nil_check(F->s_1400)).tag = F->match_1399;
}
(*(P1044)rt_nil_check(F->s_1400)).labels = F->labels_1397;
F->result_ = F->s_1400;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_unlabeled_statement_150(void) {
  struct f_unlabeled_statement_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1401 = f_cur_line_72();
F->x_1402 = NULL;
if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }))) {
F->result_ = f_if_stmt_155();
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }))) {
F->result_ = f_case_stmt_156();
goto ret_;
} else if ((f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; })) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; })))) {
F->result_ = f_repeat_stmt_157();
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BEGIN", 5); b_; }))) {
F->x_1402 = f_nn_65((((rt_int)25LL)), F->line_1401);
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1402)).a = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1402;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_158();
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1402 = f_nn_65((((rt_int)27LL)), F->line_1401);
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1402)).name = f_expect_id_93();
F->result_ = F->x_1402;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1402 = f_nn_65((((rt_int)28LL)), F->line_1401);
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P1044)rt_nil_check(F->x_1402)).a = f_expr_107();
}
F->result_ = F->x_1402;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1402 = f_nn_65((((rt_int)29LL)), F->line_1401);
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1402)).name = f_expect_id_93();
F->result_ = F->x_1402;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1402 = f_nn_65((((rt_int)30LL)), F->line_1401);
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1402)).name = f_expect_id_93();
F->result_ = F->x_1402;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->result_ = f_nn_65((((rt_int)31LL)), F->line_1401);
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1402 = f_nn_65((((rt_int)34LL)), F->line_1401);
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1402)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1402)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1402)).b = f_actual_params_98();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P1044)rt_nil_check(F->x_1402)).a = f_postfix_117();
F->result_ = F->x_1402;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1403 = NULL;
F->tail_1404 = NULL;
F->x_1402 = f_nn_65((((rt_int)35LL)), F->line_1401);
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1405 = NULL;
F->itail_1406 = NULL;
F->more_1407 = 1;
while (F->more_1407) {
f_append_69(&F->invs_1405, &F->itail_1406, f_postfix_117());
F->more_1407 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_69(&F->head_1403, &F->tail_1404, f_arm_154(F->invs_1405, f_body_121(), F->line_1401));
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P1044)rt_nil_check(F->x_1402)).a = F->head_1403;
F->result_ = F->x_1402;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1402 = f_nn_65((((rt_int)36LL)), F->line_1401);
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1402)).a = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P1044)rt_nil_check(F->x_1402)).b = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1402;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1402 = f_nn_65((((rt_int)32LL)), F->line_1401);
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1402)).a = f_postfix_117();
if ((!(f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1037)rt_nil_check((*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1044)rt_nil_check(F->x_1402)).b = f_actual_params_98();
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P1044)rt_nil_check(F->x_1402)).c = f_expr_107();
}
F->result_ = F->x_1402;
goto ret_;
}
{
F->target_1408 = NULL;
F->target_1408 = f_postfix_117();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1402 = f_nn_65((((rt_int)20LL)), F->line_1401);
(*(P1044)rt_nil_check(F->x_1402)).a = F->target_1408;
(*(P1044)rt_nil_check(F->x_1402)).b = f_expr_107();
} else {
F->x_1402 = f_nn_65((((rt_int)21LL)), F->line_1401);
(*(P1044)rt_nil_check(F->x_1402)).a = F->target_1408;
}
}
F->result_ = F->x_1402;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_arm_154(P1044 cond_151, P1044 b_152, rt_int line_153) {
  struct f_arm_154fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_151 = cond_151;
F->b_152 = b_152;
F->line_153 = line_153;
F->x_1409 = NULL;
F->x_1409 = f_nn_65((((rt_int)60LL)), F->line_153);
(*(P1044)rt_nil_check(F->x_1409)).a = F->cond_151;
(*(P1044)rt_nil_check(F->x_1409)).b = F->b_152;
F->result_ = F->x_1409;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_if_stmt_155(void) {
  struct f_if_stmt_155fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1410 = NULL;
F->x_1410 = f_nn_65((((rt_int)22LL)), f_cur_line_72());
F->head_1411 = NULL;
F->tail_1412 = NULL;
F->cond_1413 = NULL;
F->go_1414 = 1;
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
F->cond_1413 = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_69(&F->head_1411, &F->tail_1412, f_arm_154(F->cond_1413, f_body_121(), (*(P1044)rt_nil_check(F->x_1410)).line));
while (F->go_1414) {
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1413 = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_69(&F->head_1411, &F->tail_1412, f_arm_154(F->cond_1413, f_body_121(), (*(P1044)rt_nil_check(F->x_1410)).line));
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P1044)rt_nil_check(F->x_1410)).flag = ((rt_int)1LL);
(*(P1044)rt_nil_check(F->x_1410)).b = f_body_121();
} else {
F->go_1414 = 0;
}
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P1044)rt_nil_check(F->x_1410)).a = F->head_1411;
F->result_ = F->x_1410;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_case_stmt_156(void) {
  struct f_case_stmt_156fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1415 = NULL;
F->x_1415 = f_nn_65((((rt_int)23LL)), f_cur_line_72());
F->head_1416 = NULL;
F->tail_1417 = NULL;
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1415)).a = f_expr_107();
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1418 = NULL;
F->ltail_1419 = NULL;
F->more_1420 = 1;
while (F->more_1420) {
F->l_1421 = NULL;
F->l_1421 = f_nn_65((((rt_int)61LL)), f_cur_line_72());
(*(P1044)rt_nil_check(F->l_1421)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1044)rt_nil_check(F->l_1421)).b = f_expr_107();
}
f_append_69(&F->labs_1418, &F->ltail_1419, F->l_1421);
F->more_1420 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_69(&F->head_1416, &F->tail_1417, f_arm_154(F->labs_1418, f_body_121(), (*(P1044)rt_nil_check(F->x_1415)).line));
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1044)rt_nil_check(F->x_1415)).flag = ((rt_int)1LL);
(*(P1044)rt_nil_check(F->x_1415)).c = f_body_121();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P1044)rt_nil_check(F->x_1415)).b = F->head_1416;
F->result_ = F->x_1415;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_repeat_stmt_157(void) {
  struct f_repeat_stmt_157fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1422 = NULL;
F->x_1422 = f_nn_65((((rt_int)24LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P1044)rt_nil_check(F->x_1422)).flag = ((rt_int)1LL);
(*(P1044)rt_nil_check(F->x_1422)).name = f_expect_id_93();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P1044)rt_nil_check(F->x_1422)).ival = ((rt_int)1LL);
}
(*(P1044)rt_nil_check(F->x_1422)).a = f_p_subtype_96();
} else {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P1044)rt_nil_check(F->x_1422)).a = f_expr_107();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P1044)rt_nil_check(F->x_1422)).b = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1422;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_guard_stmt_158(void) {
  struct f_guard_stmt_158fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1423 = NULL;
F->x_1423 = f_nn_65((((rt_int)26LL)), f_cur_line_72());
F->head_1424 = NULL;
F->tail_1425 = NULL;
g_tpos_1077 = rt_add(g_tpos_1077, ((rt_int)1LL));
(*(P1044)rt_nil_check(F->x_1423)).a = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1426 = NULL;
F->h_1426 = f_nn_65((((rt_int)62LL)), f_cur_line_72());
(*(P1044)rt_nil_check(F->h_1426)).a = f_id_list_95();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1044)rt_nil_check(F->h_1426)).b = f_body_121();
f_append_69(&F->head_1424, &F->tail_1425, F->h_1426);
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1044)rt_nil_check(F->x_1423)).flag = ((rt_int)1LL);
(*(P1044)rt_nil_check(F->x_1423)).c = f_body_121();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P1044)rt_nil_check(F->x_1423)).b = F->head_1424;
F->result_ = F->x_1423;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_program_159(void) {
  struct f_program_159fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1427 = NULL;
F->tail_1428 = NULL;
while ((!f_at_kind_78((((rt_int)0LL))))) {
if ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1429 = NULL;
F->pr_1429 = (*(P1039)rt_nil_check(({ A1043 b_ = (((P1041)rt_nil_check(g_toks_1075))->all); b_.p[(rt_index(g_tpos_1077, b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1430 = NULL;
F->u_1430 = f_capsule_decl_141();
(*(P1044)rt_nil_check(F->u_1430)).prags = F->pr_1429;
f_append_69(&F->head_1427, &F->tail_1428, F->u_1430);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1427;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_hash_161(rstr *s_160) {
  struct f_hash_161fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_160 = s_160;
F->h_1431 = ((rt_int)0LL);
{ rt_int lo1433 = ((rt_int)1LL), hi1434 = ((rt_int)(((*F->s_160)).len));
for (rt_int it1435 = lo1433; it1435 <= hi1434; it1435++) {
F->i_1432 = it1435;
F->h_1431 = rt_mod(rt_add(rt_mul(F->h_1431, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_160), F->i_1432)) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = F->h_1431;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1054 f_lookup_163(rstr *name_162) {
  struct f_lookup_163fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_162 = name_162;
F->y_1436 = NULL;
F->y_1436 = ({ A1060 b_ = (((P1058)rt_nil_check(g_table_1084))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_1085 != NULL)) {
while ((F->y_1436 != NULL)) {
if ((((*(P1054)rt_nil_check(F->y_1436)).depth >= g_gdepth_1117) && rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_1436)).name))->all), (*F->name_162)))) {
F->result_ = F->y_1436;
goto ret_;
}
F->y_1436 = (*(P1054)rt_nil_check(F->y_1436)).chain;
}
F->y_1436 = ({ A1060 b_ = (((P1058)rt_nil_check(g_genv_1085))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1436 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_1436)).name))->all), (*F->name_162))) {
F->result_ = F->y_1436;
goto ret_;
}
F->y_1436 = (*(P1054)rt_nil_check(F->y_1436)).chain;
}
F->y_1436 = ({ A1060 b_ = (((P1058)rt_nil_check(g_table_1084))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1436 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_1436)).name))->all), (*F->name_162))) {
F->result_ = F->y_1436;
goto ret_;
}
F->y_1436 = (*(P1054)rt_nil_check(F->y_1436)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1054 f_lookup_decl_165(P1044 d_164) {
  struct f_lookup_decl_165fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_164 = d_164;
F->y_1437 = NULL;
F->y_1437 = ({ A1060 b_ = (((P1058)rt_nil_check(g_table_1084))->all); b_.p[(rt_index(f_hash_161(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_164)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1437 != NULL)) {
if (((*(P1054)rt_nil_check(F->y_1437)).decl == F->d_164)) {
F->result_ = F->y_1437;
goto ret_;
}
F->y_1437 = (*(P1054)rt_nil_check(F->y_1437)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_168(P1054 y_166, rt_int line_167) {
  struct f_define_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_166 = y_166;
F->line_167 = line_167;
F->h_1438 = f_hash_161(&(((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_166)).name))->all));
F->z_1439 = NULL;
F->z_1439 = ({ A1060 b_ = (((P1058)rt_nil_check(g_table_1084))->all); b_.p[(rt_index(F->h_1438, b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1439 != NULL)) {
if (((((*(P1054)rt_nil_check(F->z_1439)).depth == g_depth_1087) && rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->z_1439)).name))->all), (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_166)).name))->all))) && (!(((f_overloadable_170(F->y_166) && f_overloadable_170(F->z_1439)) && ((*(P1054)rt_nil_check(F->z_1439)).kind == (*(P1054)rt_nil_check(F->y_166)).kind)) && (!(f_same_signature_176((*(P1054)rt_nil_check(F->y_166)).params, (*(P1054)rt_nil_check(F->z_1439)).params) && f_same_tt_173((*(P1054)rt_nil_check(F->y_166)).decl, (*(P1054)rt_nil_check(F->z_1439)).decl))))))) {
f_fail_23(F->line_167, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_166)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1439 = (*(P1054)rt_nil_check(F->z_1439)).chain;
}
(*(P1054)rt_nil_check(F->y_166)).depth = g_depth_1087;
(*(P1054)rt_nil_check(F->y_166)).chain = ({ A1060 b_ = (((P1058)rt_nil_check(g_table_1084))->all); b_.p[(rt_index(F->h_1438, b_.lo, b_.hi) - b_.lo)]; });
(((P1058)rt_nil_check(g_table_1084))->all).p[(rt_index(F->h_1438, (((P1058)rt_nil_check(g_table_1084))->all).lo, (((P1058)rt_nil_check(g_table_1084))->all).hi) - (((P1058)rt_nil_check(g_table_1084))->all).lo)] = F->y_166;
(*(P1054)rt_nil_check(F->y_166)).stack = g_scope_stack_1088;
g_scope_stack_1088 = F->y_166;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_170(P1054 y_169) {
  struct f_overloadable_170fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_169 = y_169;
F->result_ = (((((*(P1054)rt_nil_check(F->y_169)).kind == (((rt_int)3LL))) || ((*(P1054)rt_nil_check(F->y_169)).kind == (((rt_int)4LL)))) || ((*(P1054)rt_nil_check(F->y_169)).kind == (((rt_int)9LL)))) || ((*(P1054)rt_nil_check(F->y_169)).kind == (((rt_int)8LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_173(P1044 a_171, P1044 b_172) {
  struct f_same_tt_173fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_171 = a_171;
F->b_172 = b_172;
F->x_1440 = NULL;
F->y_1441 = NULL;
if (((F->a_171 == NULL) || (F->b_172 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1440 = (*(P1044)rt_nil_check(F->a_171)).e;
F->y_1441 = (*(P1044)rt_nil_check(F->b_172)).e;
while (((F->x_1440 != NULL) && (F->y_1441 != NULL))) {
if ((!rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1440)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->y_1441)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1440 = (*(P1044)rt_nil_check(F->x_1440)).next;
F->y_1441 = (*(P1044)rt_nil_check(F->y_1441)).next;
}
F->result_ = ((F->x_1440 == NULL) && (F->y_1441 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_176(P1056 a_174, P1056 b_175) {
  struct f_same_signature_176fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_174 = a_174;
F->b_175 = b_175;
F->x_1442 = NULL;
F->x_1442 = F->a_174;
F->y_1443 = NULL;
F->y_1443 = F->b_175;
while (((F->x_1442 != NULL) && (F->y_1443 != NULL))) {
if ((!f_same_221((*(P1056)rt_nil_check(F->x_1442)).t, (*(P1056)rt_nil_check(F->y_1443)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1442 = (*(P1056)rt_nil_check(F->x_1442)).next;
F->y_1443 = (*(P1056)rt_nil_check(F->y_1443)).next;
}
F->result_ = ((F->x_1442 == NULL) && (F->y_1443 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_177(void) {
  struct f_open_scope_177fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_1087 = rt_add(g_depth_1087, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_178(void) {
  struct f_close_scope_178fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_1088 != NULL) && ((*(P1054)rt_nil_check(g_scope_stack_1088)).depth == g_depth_1087))) {
(((P1058)rt_nil_check(g_table_1084))->all).p[(rt_index(f_hash_161(&(((P1037)rt_nil_check((*(P1054)rt_nil_check(g_scope_stack_1088)).name))->all)), (((P1058)rt_nil_check(g_table_1084))->all).lo, (((P1058)rt_nil_check(g_table_1084))->all).hi) - (((P1058)rt_nil_check(g_table_1084))->all).lo)] = (*(P1054)rt_nil_check(g_scope_stack_1088)).chain;
g_scope_stack_1088 = (*(P1054)rt_nil_check(g_scope_stack_1088)).stack;
}
g_depth_1087 = rt_sub(g_depth_1087, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1054 f_new_sym_181(rt_int kind_179, P1037 name_180) {
  struct f_new_sym_181fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_179 = kind_179;
F->name_180 = name_180;
F->y_1444 = NULL;
{ R1055 *cell1445 = rt_alloc(sizeof(R1055));
(*cell1445).name = NULL;
(*cell1445).t = NULL;
(*cell1445).c = NULL;
(*cell1445).access = NULL;
(*cell1445).cname = NULL;
(*cell1445).st = NULL;
(*cell1445).decl = NULL;
(*cell1445).params = NULL;
(*cell1445).result = NULL;
(*cell1445).members = NULL;
(*cell1445).mnext = NULL;
(*cell1445).binds = NULL;
(*cell1445).insts = NULL;
(*cell1445).env = NULL;
(*cell1445).chain = NULL;
(*cell1445).stack = NULL;
(*cell1445).owner = NULL;
(*cell1445).gctx = NULL;
(*cell1445).mv = NULL;
(*cell1445).reqs = NULL;
(*cell1445).home = NULL;
(*cell1445).capn = NULL;
(*cell1445).tbinds = NULL;
(*cell1445).loc = NULL;
(*cell1445).reqs_sym = NULL;
F->y_1444 = cell1445;
}
(*(P1054)rt_nil_check(F->y_1444)).kind = F->kind_179;
(*(P1054)rt_nil_check(F->y_1444)).name = F->name_180;
F->result_ = F->y_1444;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1050 f_new_typ_183(rt_int kind_182) {
  struct f_new_typ_183fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_182 = kind_182;
F->t_1446 = NULL;
{ R1051 *cell1447 = rt_alloc(sizeof(R1051));
(*cell1447).name = NULL;
(*cell1447).lits = NULL;
(*cell1447).elem = NULL;
(*cell1447).idx = NULL;
(*cell1447).idx2 = NULL;
(*cell1447).elemcons = NULL;
(*cell1447).elemst = NULL;
(*cell1447).under = NULL;
(*cell1447).tparams = NULL;
(*cell1447).ocap = NULL;
(*cell1447).fields = NULL;
(*cell1447).target = NULL;
(*cell1447).decl = NULL;
(*cell1447).cname = NULL;
(*cell1447).initp = NULL;
(*cell1447).finalp = NULL;
(*cell1447).tpsyms = NULL;
(*cell1447).gen = NULL;
(*cell1447).gbinds = NULL;
(*cell1447).next = NULL;
(*cell1447).idxs = NULL;
(*cell1447).assignp = NULL;
(*cell1447).eqp = NULL;
(*cell1447).ltp = NULL;
(*cell1447).repn = NULL;
F->t_1446 = cell1447;
}
(*(P1050)rt_nil_check(F->t_1446)).kind = F->kind_182;
F->result_ = F->t_1446;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1046 f_new_cons_184(void) {
  struct f_new_cons_184fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1448 = NULL;
{ R1047 *cell1449 = rt_alloc(sizeof(R1047));
(*cell1449).lo = NULL;
(*cell1449).hi = NULL;
(*cell1449).lo2 = NULL;
(*cell1449).hi2 = NULL;
(*cell1449).slen = NULL;
(*cell1449).args = NULL;
(*cell1449).prec = NULL;
(*cell1449).bnds = NULL;
F->c_1448 = cell1449;
}
F->result_ = F->c_1448;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_186(P1050 t_185) {
  struct f_scalar_kind_186fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_185 = t_185;
F->result_ = ((F->t_185 != NULL) && ((((*(P1050)rt_nil_check(F->t_185)).kind == (((rt_int)1LL))) || ((*(P1050)rt_nil_check(F->t_185)).kind == (((rt_int)3LL)))) || ((*(P1050)rt_nil_check(F->t_185)).kind == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_188(P1050 t_187) {
  struct f_bound_ctype_188fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_187 = t_187;
if (((*(P1050)rt_nil_check(F->t_187)).kind == (((rt_int)3LL)))) {
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

static rstr f_cbound_191(P1046 c_189, rstr *b_190) {
  struct f_cbound_191fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_189 = c_189;
F->b_190 = b_190;
F->p_1450 = NULL;
F->p_1450 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!(*(P1046)rt_nil_check(F->c_189)).dyn) || ((*(P1046)rt_nil_check(F->c_189)).lvl <= ((rt_int)0LL)))) {
F->result_ = (*F->b_190);
goto ret_;
}
{ rt_int lo1452 = ((rt_int)1LL), hi1453 = rt_sub(g_cur_level_1101, (*(P1046)rt_nil_check(F->c_189)).lvl);
for (rt_int it1454 = lo1452; it1454 <= hi1453; it1454++) {
F->i_1451 = it1454;
F->p_1450 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->p_1450))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->p_1450))->all), rt_str("->", 2)), (*F->b_190));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_193(P1046 c_192) {
  struct f_clo_193fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_192 = c_192;
F->result_ = f_cbound_191(F->c_192, &(((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_192)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_195(P1046 c_194) {
  struct f_chi_195fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_194 = c_194;
F->result_ = f_cbound_191(F->c_194, &(((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_194)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_198(P1050 t_196, P1046 c_197) {
  struct f_sub_lo_198fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_196 = t_196;
F->c_197 = c_197;
if (((F->c_197 != NULL) && ((*(P1046)rt_nil_check(F->c_197)).lo != NULL))) {
F->result_ = f_clo_193(F->c_197);
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_196)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_196)).kind == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_201(P1050 t_199, P1046 c_200) {
  struct f_sub_hi_201fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_199 = t_199;
F->c_200 = c_200;
if (((F->c_200 != NULL) && ((*(P1046)rt_nil_check(F->c_200)).lo != NULL))) {
F->result_ = f_chi_195(F->c_200);
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_199)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_199)).kind == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_71((*(P1050)rt_nil_check(F->t_199)).lits), ((rt_int)1LL)));
goto ret_;
}
F->result_ = rt_str("RT_IMAX", 7);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_raw_storage_204(rstr *name_202, rstr *ct_203) {
  struct f_raw_storage_204fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_202 = name_202;
F->ct_203 = ct_203;
if ((!g_in_func_1100)) {
F->g_1455 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_202)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1094, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_203)), rt_str(" ", 1)), F->g_1455), rt_str(";", 1)); b_; }));
g_st_field_1106 = f_mk_3(&F->g_1455);
F->result_ = F->g_1455;
goto ret_;
}
{
F->f_1456 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_202), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1099, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_203)), rt_str(" ", 1)), F->f_1456), rt_str(";", 1)); b_; }));
g_st_field_1106 = f_mk_3(&F->f_1456);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1456);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1046 f_copy_cons_206(P1046 c_205) {
  struct f_copy_cons_206fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_205 = c_205;
F->r_1457 = NULL;
{ R1047 *cell1458 = rt_alloc(sizeof(R1047));
(*cell1458).lo = NULL;
(*cell1458).hi = NULL;
(*cell1458).lo2 = NULL;
(*cell1458).hi2 = NULL;
(*cell1458).slen = NULL;
(*cell1458).args = NULL;
(*cell1458).prec = NULL;
(*cell1458).bnds = NULL;
F->r_1457 = cell1458;
}
(*(P1046)rt_nil_check(F->r_1457)).lo = (*(P1046)rt_nil_check(F->c_205)).lo;
(*(P1046)rt_nil_check(F->r_1457)).hi = (*(P1046)rt_nil_check(F->c_205)).hi;
(*(P1046)rt_nil_check(F->r_1457)).lo2 = (*(P1046)rt_nil_check(F->c_205)).lo2;
(*(P1046)rt_nil_check(F->r_1457)).hi2 = (*(P1046)rt_nil_check(F->c_205)).hi2;
(*(P1046)rt_nil_check(F->r_1457)).slen = (*(P1046)rt_nil_check(F->c_205)).slen;
(*(P1046)rt_nil_check(F->r_1457)).mlo = (*(P1046)rt_nil_check(F->c_205)).mlo;
(*(P1046)rt_nil_check(F->r_1457)).mhi = (*(P1046)rt_nil_check(F->c_205)).mhi;
(*(P1046)rt_nil_check(F->r_1457)).hasm = (*(P1046)rt_nil_check(F->c_205)).hasm;
(*(P1046)rt_nil_check(F->r_1457)).args = (*(P1046)rt_nil_check(F->c_205)).args;
(*(P1046)rt_nil_check(F->r_1457)).dyn = (*(P1046)rt_nil_check(F->c_205)).dyn;
(*(P1046)rt_nil_check(F->r_1457)).lvl = (*(P1046)rt_nil_check(F->c_205)).lvl;
(*(P1046)rt_nil_check(F->r_1457)).prec = (*(P1046)rt_nil_check(F->c_205)).prec;
F->result_ = F->r_1457;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1046 f_freeze_209(P1046 c_207, P1050 t_208) {
  struct f_freeze_209fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_207 = c_207;
F->t_208 = t_208;
F->r_1459 = NULL;
F->saved_field_1460 = NULL;
F->saved_field_1460 = g_st_field_1106;
if ((((((F->c_207 == NULL) || ((*(P1046)rt_nil_check(F->c_207)).lo == NULL)) || (*(P1046)rt_nil_check(F->c_207)).hasm) || (*(P1046)rt_nil_check(F->c_207)).dyn) || (!f_scalar_kind_186(F->t_208)))) {
F->result_ = F->c_207;
goto ret_;
}
F->r_1459 = f_copy_cons_206(F->c_207);
{
F->ct_1461 = rt_str_copy(f_bound_ctype_188(F->t_208));
F->la_1462 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1461));
F->lf_1463 = rt_str_copy((((P1037)rt_nil_check(g_st_field_1106))->all));
F->ha_1464 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1461));
F->hf_1465 = rt_str_copy((((P1037)rt_nil_check(g_st_field_1106))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1462, rt_str(" = ", 3)), f_clo_193(F->c_207)), rt_str("; ", 2)), F->ha_1464), rt_str(" = ", 3)), f_chi_195(F->c_207)), rt_str(";", 1)); b_; }));
if (g_in_func_1100) {
(*(P1046)rt_nil_check(F->r_1459)).lo = f_mk_3(&F->lf_1463);
(*(P1046)rt_nil_check(F->r_1459)).hi = f_mk_3(&F->hf_1465);
(*(P1046)rt_nil_check(F->r_1459)).dyn = 1;
(*(P1046)rt_nil_check(F->r_1459)).lvl = g_cur_level_1101;
} else {
(*(P1046)rt_nil_check(F->r_1459)).lo = f_mk_3(&F->la_1462);
(*(P1046)rt_nil_check(F->r_1459)).hi = f_mk_3(&F->ha_1464);
(*(P1046)rt_nil_check(F->r_1459)).dyn = 0;
}
}
g_st_field_1106 = F->saved_field_1460;
F->result_ = F->r_1459;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_213(P1050 t_210, P1046 c_211, rstr *v_212) {
  struct f_checked_213fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_210 = t_210;
F->c_211 = c_211;
F->v_212 = v_212;
if ((((F->c_211 == NULL) || (!f_scalar_kind_186(F->t_210))) || f_suppressed_527(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_212);
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->t_210)).kind != (((rt_int)3LL))) && (*(P1046)rt_nil_check(F->c_211)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_212)), rt_str(", ", 2)), f_itos_7((*(P1046)rt_nil_check(F->c_211)).mlo)), rt_str(", ", 2)), f_itos_7((*(P1046)rt_nil_check(F->c_211)).mhi)), rt_str(")", 1));
goto ret_;
} else if (((*(P1046)rt_nil_check(F->c_211)).lo == NULL)) {
F->result_ = (*F->v_212);
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_210)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frange(", 10), (*F->v_212)), rt_str(", ", 2)), f_clo_193(F->c_211)), rt_str(", ", 2)), f_chi_195(F->c_211)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_212)), rt_str(", ", 2)), f_clo_193(F->c_211)), rt_str(", ", 2)), f_chi_195(F->c_211)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_lits_216(P1044 a_214, P1044 b_215) {
  struct f_same_lits_216fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_214 = a_214;
F->b_215 = b_215;
F->x_1466 = NULL;
F->x_1466 = F->a_214;
F->y_1467 = NULL;
F->y_1467 = F->b_215;
while (((F->x_1466 != NULL) && (F->y_1467 != NULL))) {
if ((!rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_1466)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->y_1467)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1466 = (*(P1044)rt_nil_check(F->x_1466)).next;
F->y_1467 = (*(P1044)rt_nil_check(F->y_1467)).next;
}
F->result_ = ((F->x_1466 == NULL) && (F->y_1467 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1050 f_str_elem_218(P1050 t_217) {
  struct f_str_elem_218fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_217 = t_217;
if (((*(P1050)rt_nil_check(F->t_217)).elem == NULL)) {
F->result_ = g_ty_ascii_1132;
goto ret_;
}
F->result_ = (*(P1050)rt_nil_check(F->t_217)).elem;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_221(P1050 a_219, P1050 b_220) {
  struct f_same_221fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_219 = a_219;
F->b_220 = b_220;
if ((F->a_219 == F->b_220)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_219 == NULL) || (F->b_220 == NULL)) || ((*(P1050)rt_nil_check(F->a_219)).kind != (*(P1050)rt_nil_check(F->b_220)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((*(P1050)rt_nil_check(F->a_219)).kind == (((rt_int)5LL))) || ((*(P1050)rt_nil_check(F->a_219)).kind == (((rt_int)10LL))))) {
F->result_ = f_same_221(f_str_elem_218(F->a_219), f_str_elem_218(F->b_220));
goto ret_;
}
if ((((((*(P1050)rt_nil_check(F->a_219)).kind == (((rt_int)1LL))) || ((*(P1050)rt_nil_check(F->a_219)).kind == (((rt_int)2LL)))) || ((*(P1050)rt_nil_check(F->a_219)).kind == (((rt_int)3LL)))) || ((*(P1050)rt_nil_check(F->a_219)).kind == (((rt_int)9LL))))) {
F->result_ = 1;
goto ret_;
}
if (((*(P1050)rt_nil_check(F->a_219)).kind == (((rt_int)4LL)))) {
F->result_ = f_same_lits_216((*(P1050)rt_nil_check(F->a_219)).lits, (*(P1050)rt_nil_check(F->b_220)).lits);
goto ret_;
}
if (((*(P1050)rt_nil_check(F->a_219)).kind == (((rt_int)6LL)))) {
F->x_1468 = NULL;
F->x_1468 = (*(P1050)rt_nil_check(F->a_219)).idxs;
F->y_1469 = NULL;
F->y_1469 = (*(P1050)rt_nil_check(F->b_220)).idxs;
while (((F->x_1468 != NULL) && (F->y_1469 != NULL))) {
if ((!f_same_221((*(P1065)rt_nil_check(F->x_1468)).t, (*(P1065)rt_nil_check(F->y_1469)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1468 = (*(P1065)rt_nil_check(F->x_1468)).next;
F->y_1469 = (*(P1065)rt_nil_check(F->y_1469)).next;
}
F->result_ = (((F->x_1468 == NULL) && (F->y_1469 == NULL)) && f_same_221((*(P1050)rt_nil_check(F->a_219)).elem, (*(P1050)rt_nil_check(F->b_220)).elem));
goto ret_;
}
if ((((*(P1050)rt_nil_check(F->a_219)).kind == (((rt_int)16LL))) || ((*(P1050)rt_nil_check(F->a_219)).kind == (((rt_int)12LL))))) {
F->result_ = f_same_221((*(P1050)rt_nil_check(F->a_219)).elem, (*(P1050)rt_nil_check(F->b_220)).elem);
goto ret_;
}
if ((((*(P1050)rt_nil_check(F->a_219)).kind == (((rt_int)7LL))) || ((*(P1050)rt_nil_check(F->a_219)).kind == (((rt_int)17LL))))) {
F->f_1470 = NULL;
F->f_1470 = (*(P1050)rt_nil_check(F->a_219)).fields;
F->g_1471 = NULL;
F->g_1471 = (*(P1050)rt_nil_check(F->b_220)).fields;
while (((F->f_1470 != NULL) && (F->g_1471 != NULL))) {
if (((!rt_str_eq((((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_1470)).name))->all), (((P1037)rt_nil_check((*(P1052)rt_nil_check(F->g_1471)).name))->all))) || (!f_same_221((*(P1052)rt_nil_check(F->f_1470)).t, (*(P1052)rt_nil_check(F->g_1471)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1470 = (*(P1052)rt_nil_check(F->f_1470)).next;
F->g_1471 = (*(P1052)rt_nil_check(F->g_1471)).next;
}
F->result_ = ((F->f_1470 == NULL) && (F->g_1471 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1050 f_base_of_223(P1050 t_222) {
  struct f_base_of_223fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_222 = t_222;
if ((((F->t_222 != NULL) && ((*(P1050)rt_nil_check(F->t_222)).kind == (((rt_int)15LL)))) && ((*(P1050)rt_nil_check(F->t_222)).tparams == NULL))) {
F->result_ = f_base_of_223((*(P1050)rt_nil_check(F->t_222)).under);
goto ret_;
}
F->result_ = F->t_222;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1046 f_base_cons_226(P1050 t_224, P1046 c_225) {
  struct f_base_cons_226fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_224 = t_224;
F->c_225 = c_225;
if (((((F->t_224 != NULL) && ((*(P1050)rt_nil_check(F->t_224)).kind == (((rt_int)15LL)))) && ((*(P1050)rt_nil_check(F->t_224)).tparams == NULL)) && ((*(P1050)rt_nil_check(F->t_224)).elemcons != NULL))) {
F->result_ = f_base_cons_226((*(P1050)rt_nil_check(F->t_224)).under, (*(P1050)rt_nil_check(F->t_224)).elemcons);
goto ret_;
}
F->result_ = F->c_225;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_228(P1050 t_227) {
  struct f_kind_name_228fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_227 = t_227;
{ rt_int sel1472 = (*(P1050)rt_nil_check(F->t_227)).kind;
if (0 || (sel1472 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1472 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1472 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1472 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1472 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1472 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1472 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1472 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1472 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_227)).name))->all));
goto ret_;
} else if (0 || (sel1472 == (((rt_int)11LL)))) {
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

static void f_check_type_232(P1050 got_229, P1050 want_230, rt_int line_231) {
  struct f_check_type_232fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_229 = got_229;
F->want_230 = want_230;
F->line_231 = line_231;
if ((F->want_230 == NULL)) {
goto ret_;
}
if ((((*(P1050)rt_nil_check(F->got_229)).kind == (((rt_int)11LL))) && ((*(P1050)rt_nil_check(F->want_230)).kind == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_221(F->got_229, F->want_230))) {
f_fail_23(F->line_231, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_228(F->got_229)), rt_str(" where ", 7)), f_kind_name_228(F->want_230)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_234(P1050 t_233) {
  struct f_ctype_234fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_233 = t_233;
{ rt_int sel1473 = (*(P1050)rt_nil_check(F->t_233)).kind;
if (0 || (sel1473 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1473 == (((rt_int)2LL))) || (sel1473 == (((rt_int)4LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1473 == (((rt_int)10LL)))) {
F->result_ = rt_str("rt_r_file *", 11);
goto ret_;
} else if (0 || (sel1473 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1473 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1473 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1473 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1473 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1473 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1473 == (((rt_int)16LL)))) {
if (f_sparse_set_308(F->t_233)) {
F->result_ = rt_str("rt_r_iset", 9);
goto ret_;
}
F->result_ = rt_str("yset", 4);
goto ret_;
} else {
if (((*(P1050)rt_nil_check(F->t_233)).cname == NULL)) {
f_declare_ctype_240(F->t_233);
} else if ((((((*(P1050)rt_nil_check(F->t_233)).kind == (((rt_int)7LL))) || ((*(P1050)rt_nil_check(F->t_233)).kind == (((rt_int)17LL)))) && (*(P1050)rt_nil_check(F->t_233)).forward) && (!(*(P1050)rt_nil_check(F->t_233)).defined))) {
(*(P1050)rt_nil_check(F->t_233)).defined = 1;
f_put_27(g_out_types_1091, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_233)).cname))->all)), rt_str(" ", 1)), f_struct_body_236(F->t_233)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_233)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_236(P1050 t_235) {
  struct f_struct_body_236fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_235 = t_235;
if (((*(P1050)rt_nil_check(F->t_235)).kind == (((rt_int)17LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ int tag; union { ", 19), f_field_decls_238(F->t_235)), rt_str(" } u; }", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_field_decls_238(F->t_235)), rt_str(" }", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_field_decls_238(P1050 t_237) {
  struct f_field_decls_238fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_237 = t_237;
F->f_1474 = NULL;
F->f_1474 = (*(P1050)rt_nil_check(F->t_237)).fields;
F->s_1475 = NULL;
F->s_1475 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1474 != NULL)) {
F->s_1475 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->s_1475))->all), f_ctype_234((*(P1052)rt_nil_check(F->f_1474)).t)), rt_str(" ", 1)), f_field_c_17(&(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_1474)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1474 = (*(P1052)rt_nil_check(F->f_1474)).next;
}
F->result_ = (((P1037)rt_nil_check(F->s_1475))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_240(P1050 t_239) {
  struct f_declare_ctype_240fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_239 = t_239;
F->u_1476 = NULL;
F->u_1476 = g_all_types_1089;
if ((((*(P1050)rt_nil_check(F->t_239)).kind == (((rt_int)8LL))) && ((*(P1050)rt_nil_check(F->t_239)).target == NULL))) {
f_finish_ptr_490(F->t_239);
if (((*(P1050)rt_nil_check(F->t_239)).cname != NULL)) {
goto ret_;
}
}
if (((*(P1050)rt_nil_check(F->t_239)).kind != (((rt_int)8LL)))) {
while ((F->u_1476 != NULL)) {
if ((((*(P1050)rt_nil_check(F->u_1476)).kind == (*(P1050)rt_nil_check(F->t_239)).kind) && f_same_221(F->u_1476, F->t_239))) {
(*(P1050)rt_nil_check(F->t_239)).cname = (*(P1050)rt_nil_check(F->u_1476)).cname;
goto ret_;
}
F->u_1476 = (*(P1050)rt_nil_check(F->u_1476)).next;
}
}
if ((((*(P1050)rt_nil_check(F->t_239)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_239)).tparams == NULL))) {
(*(P1050)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_234((*(P1050)rt_nil_check(F->t_239)).under); b_; }));
goto ret_;
}
if (((*(P1050)rt_nil_check(F->t_239)).kind == (((rt_int)6LL)))) {
(*(P1050)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P1050)rt_nil_check(F->t_239)).kind == (((rt_int)15LL)))) {
(*(P1050)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if ((((*(P1050)rt_nil_check(F->t_239)).kind == (((rt_int)7LL))) || ((*(P1050)rt_nil_check(F->t_239)).kind == (((rt_int)17LL))))) {
(*(P1050)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P1050)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P1050)rt_nil_check(F->t_239)).next = g_all_types_1089;
g_all_types_1089 = F->t_239;
if (((((*(P1050)rt_nil_check(F->t_239)).kind == (((rt_int)8LL))) && ((*(P1050)rt_nil_check(F->t_239)).decl != NULL)) && ((*(P1044)rt_nil_check((*(P1050)rt_nil_check(F->t_239)).decl)).b != NULL))) {
F->p_1477 = NULL;
F->p_1477 = (*(P1044)rt_nil_check((*(P1050)rt_nil_check(F->t_239)).decl)).b;
F->fs_1478 = NULL;
F->fs_1478 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1479 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1477 != NULL)) {
F->pc_1480 = NULL;
F->fs_1478 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->fs_1478))->all), rt_str(" ", 1)), f_ctype_234(f_resolve_subtype_268((*(P1044)rt_nil_check(F->p_1477)).a, &F->pc_1480))), rt_str(" p_", 3)), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1477)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1477 = (*(P1044)rt_nil_check(F->p_1477)).next;
}
f_put_27(g_out_types_1091, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1479), rt_str(" *", 2)), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_1092, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1479), rt_str(" {", 2)), (((P1037)rt_nil_check(F->fs_1478))->all)), rt_str(" ", 1)), f_ctype_234((*(P1050)rt_nil_check(F->t_239)).target)), rt_str(" all; };", 8)); b_; }));
} else if (((*(P1050)rt_nil_check(F->t_239)).kind == (((rt_int)8LL)))) {
F->target_1481 = NULL;
F->target_1481 = (*(P1050)rt_nil_check(F->t_239)).target;
if ((((*(P1050)rt_nil_check(F->target_1481)).kind == (((rt_int)7LL))) || ((*(P1050)rt_nil_check(F->target_1481)).kind == (((rt_int)17LL))))) {
if (((*(P1050)rt_nil_check(F->target_1481)).cname == NULL)) {
(*(P1050)rt_nil_check(F->target_1481)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P1050)rt_nil_check(F->target_1481)).next = g_all_types_1089;
g_all_types_1089 = F->target_1481;
f_put_27(g_out_types_1091, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->target_1481)).cname))->all)), rt_str(" ", 1)), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->target_1481)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P1050)rt_nil_check(F->target_1481)).forward = 1;
}
f_put_27(g_out_types_1091, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->target_1481)).cname))->all)), rt_str(" *", 2)), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_1091, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_234(F->target_1481)), rt_str(" *", 2)), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if (((*(P1050)rt_nil_check(F->t_239)).kind == (((rt_int)6LL)))) {
f_put_27(g_out_types_1091, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_1091, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_239)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_234((*(P1050)rt_nil_check(F->t_239)).elem)), rt_str(" *p;", 4)), f_more_dims_246(F->t_239)), rt_str(" };", 3)); b_; }));
} else if (((*(P1050)rt_nil_check(F->t_239)).kind == (((rt_int)15LL)))) {
F->p_1482 = NULL;
F->p_1482 = (*(P1050)rt_nil_check(F->t_239)).tparams;
F->fs_1483 = NULL;
F->fs_1483 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1482 != NULL)) {
F->fs_1483 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->fs_1483))->all), f_ctype_234(f_tparam_type_357(F->t_239, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1482)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1482)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1482 = (*(P1044)rt_nil_check(F->p_1482)).next;
}
f_put_27(g_out_types_1091, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_1091, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_239)).cname))->all)), rt_str(" {", 2)), (((P1037)rt_nil_check(F->fs_1483))->all)), f_ctype_234((*(P1050)rt_nil_check(F->t_239)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_1091, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P1050)rt_nil_check(F->t_239)).defined = 1;
f_put_27(g_out_types_1091, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), f_struct_body_236(F->t_239)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_dim_lo_242(rt_int k_241) {
  struct f_dim_lo_242fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_241 = k_241;
if ((F->k_241 == ((rt_int)1LL))) {
F->result_ = rt_str("lo", 2);
goto ret_;
}
F->result_ = rt_str_cat(rt_str("lo", 2), f_itos_7(F->k_241));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_dim_hi_244(rt_int k_243) {
  struct f_dim_hi_244fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_243 = k_243;
if ((F->k_243 == ((rt_int)1LL))) {
F->result_ = rt_str("hi", 2);
goto ret_;
}
F->result_ = rt_str_cat(rt_str("hi", 2), f_itos_7(F->k_243));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_more_dims_246(P1050 t_245) {
  struct f_more_dims_246fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_245 = t_245;
F->r_1484 = NULL;
F->r_1484 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1486 = ((rt_int)3LL), hi1487 = (*(P1050)rt_nil_check(F->t_245)).ndim;
for (rt_int it1488 = lo1486; it1488 <= hi1487; it1488++) {
F->k_1485 = it1488;
F->r_1484 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1484))->all), rt_str(" rt_int ", 8)), f_dim_lo_242(F->k_1485)), rt_str(", ", 2)), f_dim_hi_244(F->k_1485)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P1037)rt_nil_check(F->r_1484))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_249(P1050 t_247, rstr *base_248) {
  struct f_acnt_249fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_247 = t_247;
F->base_248 = base_248;
F->r_1489 = NULL;
F->r_1489 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_248)), rt_str(")", 1)); b_; }));
{ rt_int lo1491 = ((rt_int)3LL), hi1492 = (*(P1050)rt_nil_check(F->t_247)).ndim;
for (rt_int it1493 = lo1491; it1493 <= hi1492; it1493++) {
F->k_1490 = it1493;
F->r_1489 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1489))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_248)), rt_str(".", 1)), f_dim_lo_242(F->k_1490)), rt_str(", ", 2)), (*F->base_248)), rt_str(".", 1)), f_dim_hi_244(F->k_1490)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1037)rt_nil_check(F->r_1489))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1037 f_cons_lo_252(P1046 c_250, rt_int k_251) {
  struct f_cons_lo_252fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_250 = c_250;
F->k_251 = k_251;
F->l_1494 = NULL;
if ((F->k_251 == ((rt_int)1LL))) {
F->result_ = (*(P1046)rt_nil_check(F->c_250)).lo;
goto ret_;
} else if ((F->k_251 == ((rt_int)2LL))) {
F->result_ = (*(P1046)rt_nil_check(F->c_250)).lo2;
goto ret_;
}
F->l_1494 = (*(P1046)rt_nil_check(F->c_250)).bnds;
{ rt_int lo1496 = ((rt_int)1LL), hi1497 = rt_sub(rt_add(F->k_251, F->k_251), ((rt_int)6LL));
for (rt_int it1498 = lo1496; it1498 <= hi1497; it1498++) {
F->i_1495 = it1498;
if ((F->l_1494 != NULL)) {
F->l_1494 = (*(P1048)rt_nil_check(F->l_1494)).next;
}
}
}
if ((F->l_1494 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1048)rt_nil_check(F->l_1494)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1037 f_cons_hi_255(P1046 c_253, rt_int k_254) {
  struct f_cons_hi_255fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_253 = c_253;
F->k_254 = k_254;
F->l_1499 = NULL;
if ((F->k_254 == ((rt_int)1LL))) {
F->result_ = (*(P1046)rt_nil_check(F->c_253)).hi;
goto ret_;
} else if ((F->k_254 == ((rt_int)2LL))) {
F->result_ = (*(P1046)rt_nil_check(F->c_253)).hi2;
goto ret_;
}
F->l_1499 = (*(P1046)rt_nil_check(F->c_253)).bnds;
{ rt_int lo1501 = ((rt_int)1LL), hi1502 = rt_sub(rt_add(F->k_254, F->k_254), ((rt_int)5LL));
for (rt_int it1503 = lo1501; it1503 <= hi1502; it1503++) {
F->i_1500 = it1503;
if ((F->l_1499 != NULL)) {
F->l_1499 = (*(P1048)rt_nil_check(F->l_1499)).next;
}
}
}
if ((F->l_1499 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1048)rt_nil_check(F->l_1499)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1050 f_idx_type_258(P1050 t_256, rt_int k_257) {
  struct f_idx_type_258fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_256 = t_256;
F->k_257 = k_257;
F->l_1504 = NULL;
F->l_1504 = (*(P1050)rt_nil_check(F->t_256)).idxs;
{ rt_int lo1506 = ((rt_int)2LL), hi1507 = F->k_257;
for (rt_int it1508 = lo1506; it1508 <= hi1507; it1508++) {
F->i_1505 = it1508;
F->l_1504 = (*(P1065)rt_nil_check(F->l_1504)).next;
}
}
F->result_ = (*(P1065)rt_nil_check(F->l_1504)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_259(void) {
  struct f_init_ascii_259fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1509 = NULL;
F->tail_1510 = NULL;
F->start_1511 = ((rt_int)1LL);
{ rt_int lo1513 = ((rt_int)1LL), hi1514 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1515 = lo1513; it1515 <= hi1514; it1515++) {
F->i_1512 = it1515;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1512) == 32)) {
F->lit_1516 = NULL;
F->lit_1516 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1044)rt_nil_check(F->lit_1516)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->start_1511, rt_sub(F->i_1512, ((rt_int)1LL))); b_; }));
f_append_69(&F->head_1509, &F->tail_1510, F->lit_1516);
F->start_1511 = rt_add(F->i_1512, ((rt_int)1LL));
}
}
}
g_ty_ascii_1132 = f_new_typ_183((((rt_int)4LL)));
(*(P1050)rt_nil_check(g_ty_ascii_1132)).lits = F->head_1509;
(*(P1050)rt_nil_check(g_ty_ascii_1132)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1517 = NULL;
F->t2_1518 = NULL;
F->l1_1519 = NULL;
F->l1_1519 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1520 = NULL;
F->l2_1520 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1521 = NULL;
F->l3_1521 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1044)rt_nil_check(F->l1_1519)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P1044)rt_nil_check(F->l2_1520)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P1044)rt_nil_check(F->l3_1521)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_69(&F->h2_1517, &F->t2_1518, F->l1_1519);
f_append_69(&F->h2_1517, &F->t2_1518, F->l2_1520);
f_append_69(&F->h2_1517, &F->t2_1518, F->l3_1521);
g_file_mode_type_1140 = f_new_typ_183((((rt_int)4LL)));
(*(P1050)rt_nil_check(g_file_mode_type_1140)).lits = F->h2_1517;
}
g_file_state_type_1144 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OLD", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }));
g_file_disp_type_1145 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SAVE", 4); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DELETE", 6); b_; }));
g_file_access_type_1146 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEQ", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RANDOM", 6); b_; }));
g_ty_text_file_1143 = f_new_typ_183((((rt_int)10LL)));
(*(P1050)rt_nil_check(g_ty_text_file_1143)).elem = g_ty_ascii_1132;
g_ty_send_st_1141 = f_new_typ_183((((rt_int)1LL)));
(*(P1050)rt_nil_check(g_ty_send_st_1141)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEND_ST", 7); b_; }));
g_ty_receive_st_1142 = f_new_typ_183((((rt_int)1LL)));
(*(P1050)rt_nil_check(g_ty_receive_st_1142)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RECEIVE_ST", 10); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1050 f_enum2_262(rstr *a_260, rstr *b_261) {
  struct f_enum2_262fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_260 = a_260;
F->b_261 = b_261;
F->t_1522 = NULL;
F->t_1522 = f_new_typ_183((((rt_int)4LL)));
F->l1_1523 = NULL;
F->l1_1523 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1524 = NULL;
F->l2_1524 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1044)rt_nil_check(F->l1_1523)).name = f_mk_3(&(*F->a_260));
(*(P1044)rt_nil_check(F->l2_1524)).name = f_mk_3(&(*F->b_261));
(*(P1044)rt_nil_check(F->l1_1523)).next = F->l2_1524;
(*(P1050)rt_nil_check(F->t_1522)).lits = F->l1_1523;
F->result_ = F->t_1522;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_lit_index_265(P1044 lits_263, rstr *name_264) {
  struct f_lit_index_265fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_263 = lits_263;
F->name_264 = name_264;
F->i_1525 = ((rt_int)0LL);
F->l_1526 = NULL;
F->l_1526 = F->lits_263;
while ((F->l_1526 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->l_1526)).name))->all), (*F->name_264))) {
F->result_ = F->i_1525;
goto ret_;
}
F->i_1525 = rt_add(F->i_1525, ((rt_int)1LL));
F->l_1526 = (*(P1044)rt_nil_check(F->l_1526)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1050 f_resolve_subtype_268(P1044 st_266, P1046 *c_267) {
  struct f_resolve_subtype_268fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_266 = st_266;
F->c_267 = c_267;
F->c_267v = *F->c_267;
F->t_1527 = NULL;
F->dummy_1529 = NULL;
F->c_267v = f_new_cons_184();
{ rt_int sel1530 = (*(P1044)rt_nil_check(F->st_266)).kind;
if (0 || (sel1530 == (((rt_int)70LL)))) {
if (((*(P1044)rt_nil_check(F->st_266)).a != NULL)) {
(*(P1046)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815((*(P1044)rt_nil_check(F->st_266)).a, g_ty_int_1129, &F->dummy_1529); b_; }));
(*(P1046)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815((*(P1044)rt_nil_check(F->st_266)).b, g_ty_int_1129, &F->dummy_1529); b_; }));
(*(P1046)rt_nil_check(F->c_267v)).mlo = f_manifest_381((*(P1044)rt_nil_check(F->st_266)).a, &F->ok_1528);
(*(P1046)rt_nil_check(F->c_267v)).hasm = F->ok_1528;
(*(P1046)rt_nil_check(F->c_267v)).mhi = f_manifest_381((*(P1044)rt_nil_check(F->st_266)).b, &F->ok_1528);
(*(P1046)rt_nil_check(F->c_267v)).hasm = ((*(P1046)rt_nil_check(F->c_267v)).hasm && F->ok_1528);
}
F->result_ = g_ty_int_1129;
goto ret_;
} else if (0 || (sel1530 == (((rt_int)71LL)))) {
if (((*(P1044)rt_nil_check(F->st_266)).a != NULL)) {
(*(P1046)rt_nil_check(F->c_267v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815((*(P1044)rt_nil_check(F->st_266)).a, g_ty_int_1129, &F->dummy_1529); b_; }));
}
if (((*(P1044)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1046)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815((*(P1044)rt_nil_check(F->st_266)).b, g_ty_float_1131, &F->dummy_1529); b_; }));
(*(P1046)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815((*(P1044)rt_nil_check(F->st_266)).c, g_ty_float_1131, &F->dummy_1529); b_; }));
(*(P1046)rt_nil_check(F->c_267v)).hasm = (f_float_lit_270((*(P1044)rt_nil_check(F->st_266)).b) && f_float_lit_270((*(P1044)rt_nil_check(F->st_266)).c));
}
F->result_ = g_ty_float_1131;
goto ret_;
} else if (0 || (sel1530 == (((rt_int)72LL)))) {
F->t_1527 = f_new_typ_183((((rt_int)4LL)));
(*(P1050)rt_nil_check(F->t_1527)).lits = (*(P1044)rt_nil_check(F->st_266)).a;
if (((*(P1044)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1046)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815((*(P1044)rt_nil_check(F->st_266)).b, F->t_1527, &F->dummy_1529); b_; }));
(*(P1046)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815((*(P1044)rt_nil_check(F->st_266)).c, F->t_1527, &F->dummy_1529); b_; }));
if ((((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->st_266)).b)).kind == (((rt_int)4LL))) && ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->st_266)).c)).kind == (((rt_int)4LL))))) {
(*(P1046)rt_nil_check(F->c_267v)).mlo = f_lit_index_265((*(P1050)rt_nil_check(F->t_1527)).lits, &(((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->st_266)).b)).name))->all));
(*(P1046)rt_nil_check(F->c_267v)).mhi = f_lit_index_265((*(P1050)rt_nil_check(F->t_1527)).lits, &(((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->st_266)).c)).name))->all));
(*(P1046)rt_nil_check(F->c_267v)).hasm = 1;
}
}
F->result_ = F->t_1527;
goto ret_;
} else if (0 || (sel1530 == (((rt_int)73LL)))) {
F->t_1527 = f_resolve_subtype_268((*(P1044)rt_nil_check(F->st_266)).a, &F->c_267v);
if (((*(P1050)rt_nil_check(f_base_of_223(F->t_1527))).kind != (((rt_int)4LL)))) {
f_fail_23((*(P1044)rt_nil_check(F->st_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component type of a string is an enumeration type", 53); b_; }));
}
if ((f_same_221(F->t_1527, g_ty_ascii_1132) && ((F->c_267v == NULL) || ((*(P1046)rt_nil_check(F->c_267v)).lo == NULL)))) {
F->t_1527 = g_ty_string_1133;
} else {
F->et_1531 = NULL;
F->et_1531 = F->t_1527;
F->t_1527 = f_new_typ_183((((rt_int)5LL)));
(*(P1050)rt_nil_check(F->t_1527)).elem = F->et_1531;
(*(P1050)rt_nil_check(F->t_1527)).elemcons = F->c_267v;
}
F->c_267v = f_new_cons_184();
if (((*(P1044)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1046)rt_nil_check(F->c_267v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815((*(P1044)rt_nil_check(F->st_266)).b, g_ty_int_1129, &F->dummy_1529); b_; }));
}
F->result_ = F->t_1527;
goto ret_;
} else if (0 || (sel1530 == (((rt_int)74LL)))) {
{
F->ec_1532 = NULL;
F->et_1533 = NULL;
F->et_1533 = f_resolve_subtype_268((*(P1044)rt_nil_check(F->st_266)).b, &F->ec_1532);
F->ix_1534 = NULL;
F->ix_1534 = (*(P1044)rt_nil_check(F->st_266)).a;
F->k_1535 = ((rt_int)0LL);
F->tail_1536 = NULL;
F->btail_1537 = NULL;
F->t_1527 = f_new_typ_183((((rt_int)6LL)));
(*(P1050)rt_nil_check(F->t_1527)).elem = F->et_1533;
(*(P1050)rt_nil_check(F->t_1527)).elemcons = F->ec_1532;
(*(P1050)rt_nil_check(F->t_1527)).elemst = (*(P1044)rt_nil_check(F->st_266)).b;
(*(P1046)rt_nil_check(F->c_267v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P1046)rt_nil_check(F->c_267v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1534 != NULL)) {
F->ic_1538 = NULL;
F->it_1539 = NULL;
F->it_1539 = f_resolve_subtype_268(F->ix_1534, &F->ic_1538);
F->lo_1540 = NULL;
F->hi_1541 = NULL;
F->tl_1542 = NULL;
if ((((*(P1050)rt_nil_check(f_base_of_223(F->it_1539))).kind != (((rt_int)1LL))) && ((*(P1050)rt_nil_check(f_base_of_223(F->it_1539))).kind != (((rt_int)4LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->st_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1538 = f_base_cons_226(F->it_1539, F->ic_1538);
F->k_1535 = rt_add(F->k_1535, ((rt_int)1LL));
{ R1066 *cell1543 = rt_alloc(sizeof(R1066));
(*cell1543).t = NULL;
(*cell1543).next = NULL;
F->tl_1542 = cell1543;
}
(*(P1065)rt_nil_check(F->tl_1542)).t = F->it_1539;
if ((F->tail_1536 == NULL)) {
(*(P1050)rt_nil_check(F->t_1527)).idxs = F->tl_1542;
} else {
(*(P1065)rt_nil_check(F->tail_1536)).next = F->tl_1542;
}
F->tail_1536 = F->tl_1542;
if (((F->ic_1538 != NULL) && ((*(P1046)rt_nil_check(F->ic_1538)).lo != NULL))) {
F->lo_1540 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_193(F->ic_1538); b_; }));
F->hi_1541 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_195(F->ic_1538); b_; }));
} else if (((*(P1050)rt_nil_check(f_base_of_223(F->it_1539))).kind == (((rt_int)4LL)))) {
F->lo_1540 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1541 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_71((*(P1050)rt_nil_check(f_base_of_223(F->it_1539))).lits), ((rt_int)1LL))); b_; }));
}
if ((F->k_1535 == ((rt_int)1LL))) {
(*(P1050)rt_nil_check(F->t_1527)).idx = F->it_1539;
(*(P1046)rt_nil_check(F->c_267v)).lo = F->lo_1540;
(*(P1046)rt_nil_check(F->c_267v)).hi = F->hi_1541;
} else if ((F->k_1535 == ((rt_int)2LL))) {
(*(P1050)rt_nil_check(F->t_1527)).idx2 = F->it_1539;
(*(P1046)rt_nil_check(F->c_267v)).lo2 = F->lo_1540;
(*(P1046)rt_nil_check(F->c_267v)).hi2 = F->hi_1541;
} else if ((F->lo_1540 != NULL)) {
F->l1_1544 = NULL;
F->l2_1545 = NULL;
{ R1049 *cell1546 = rt_alloc(sizeof(R1049));
(*cell1546).s = NULL;
(*cell1546).next = NULL;
F->l1_1544 = cell1546;
}
{ R1049 *cell1547 = rt_alloc(sizeof(R1049));
(*cell1547).s = NULL;
(*cell1547).next = NULL;
F->l2_1545 = cell1547;
}
(*(P1048)rt_nil_check(F->l1_1544)).s = F->lo_1540;
(*(P1048)rt_nil_check(F->l2_1545)).s = F->hi_1541;
(*(P1048)rt_nil_check(F->l1_1544)).next = F->l2_1545;
if ((F->btail_1537 == NULL)) {
(*(P1046)rt_nil_check(F->c_267v)).bnds = F->l1_1544;
} else {
(*(P1048)rt_nil_check(F->btail_1537)).next = F->l1_1544;
}
F->btail_1537 = F->l2_1545;
}
F->ix_1534 = (*(P1044)rt_nil_check(F->ix_1534)).next;
}
(*(P1050)rt_nil_check(F->t_1527)).ndim = F->k_1535;
}
F->result_ = F->t_1527;
goto ret_;
} else if (0 || (sel1530 == (((rt_int)77LL)))) {
F->t_1527 = f_new_typ_183((((rt_int)16LL)));
{
F->ec_1548 = NULL;
(*(P1050)rt_nil_check(F->t_1527)).elem = f_resolve_subtype_268((*(P1044)rt_nil_check(F->st_266)).a, &F->ec_1548);
(*(P1050)rt_nil_check(F->t_1527)).elemcons = F->ec_1548;
if ((((*(P1050)rt_nil_check(f_base_of_223((*(P1050)rt_nil_check(F->t_1527)).elem))).kind != (((rt_int)1LL))) && ((*(P1050)rt_nil_check(f_base_of_223((*(P1050)rt_nil_check(F->t_1527)).elem))).kind != (((rt_int)4LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->st_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component subtype of a set is an INT or ENUM subtype", 56); b_; }));
}
}
F->result_ = F->t_1527;
goto ret_;
} else if (0 || (sel1530 == (((rt_int)75LL))) || (sel1530 == (((rt_int)76LL)))) {
if (((*(P1044)rt_nil_check(F->st_266)).kind == (((rt_int)76LL)))) {
F->t_1527 = f_new_typ_183((((rt_int)17LL)));
} else {
F->t_1527 = f_new_typ_183((((rt_int)7LL)));
}
{
F->comp_1549 = NULL;
F->comp_1549 = (*(P1044)rt_nil_check(F->st_266)).a;
F->tail_1550 = NULL;
while ((F->comp_1549 != NULL)) {
F->cc_1551 = NULL;
F->f_1552 = NULL;
{ R1053 *cell1553 = rt_alloc(sizeof(R1053));
(*cell1553).name = NULL;
(*cell1553).t = NULL;
(*cell1553).c = NULL;
(*cell1553).st = NULL;
(*cell1553).next = NULL;
F->f_1552 = cell1553;
}
(*(P1052)rt_nil_check(F->f_1552)).name = (*(P1044)rt_nil_check(F->comp_1549)).name;
(*(P1052)rt_nil_check(F->f_1552)).t = f_resolve_subtype_268((*(P1044)rt_nil_check(F->comp_1549)).a, &F->cc_1551);
(*(P1052)rt_nil_check(F->f_1552)).c = F->cc_1551;
(*(P1052)rt_nil_check(F->f_1552)).st = (*(P1044)rt_nil_check(F->comp_1549)).a;
if ((F->tail_1550 == NULL)) {
(*(P1050)rt_nil_check(F->t_1527)).fields = F->f_1552;
} else {
(*(P1052)rt_nil_check(F->tail_1550)).next = F->f_1552;
}
F->tail_1550 = F->f_1552;
F->comp_1549 = (*(P1044)rt_nil_check(F->comp_1549)).next;
}
}
if (((*(P1050)rt_nil_check(F->t_1527)).kind == (((rt_int)17LL)))) {
F->lits_1554 = NULL;
F->ltail_1555 = NULL;
F->f_1556 = NULL;
F->f_1556 = (*(P1050)rt_nil_check(F->t_1527)).fields;
while ((F->f_1556 != NULL)) {
F->l_1557 = NULL;
F->l_1557 = f_nn_65((((rt_int)4LL)), (*(P1044)rt_nil_check(F->st_266)).line);
if (rt_str_eq((((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_1556)).name))->all), rt_str("TAG", 3))) {
f_fail_23((*(P1044)rt_nil_check(F->st_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P1044)rt_nil_check(F->l_1557)).name = (*(P1052)rt_nil_check(F->f_1556)).name;
f_append_69(&F->lits_1554, &F->ltail_1555, F->l_1557);
F->f_1556 = (*(P1052)rt_nil_check(F->f_1556)).next;
}
(*(P1050)rt_nil_check(F->t_1527)).elem = f_new_typ_183((((rt_int)4LL)));
(*(P1050)rt_nil_check((*(P1050)rt_nil_check(F->t_1527)).elem)).lits = F->lits_1554;
if (((*(P1044)rt_nil_check(F->st_266)).b != NULL)) {
f_tag_constraint_274(F->t_1527, (*(P1044)rt_nil_check(F->st_266)).b, F->c_267v);
}
}
F->result_ = F->t_1527;
goto ret_;
} else if (0 || (sel1530 == (((rt_int)79LL)))) {
F->t_1527 = f_new_typ_183((((rt_int)10LL)));
{
F->ec_1558 = NULL;
(*(P1050)rt_nil_check(F->t_1527)).elem = f_resolve_subtype_268((*(P1044)rt_nil_check(F->st_266)).a, &F->ec_1558);
(*(P1050)rt_nil_check(F->t_1527)).elemcons = F->ec_1558;
}
(*(P1046)rt_nil_check(F->c_267v)).args = (*(P1044)rt_nil_check(F->st_266)).b;
F->result_ = F->t_1527;
goto ret_;
} else if (0 || (sel1530 == (((rt_int)78LL)))) {
if (((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P1054)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1559 = NULL;
F->gt_1559 = f_copy_node_857((*(P1044)rt_nil_check(F->st_266)).a);
(*(P1044)rt_nil_check(F->gt_1559)).next = NULL;
F->result_ = f_instantiate_type_755(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1559, (*(P1044)rt_nil_check(F->st_266)).b, &F->c_267v, (*(P1044)rt_nil_check(F->st_266)).line);
goto ret_;
}
{
F->ec_1560 = NULL;
F->t_1527 = f_new_typ_183((((rt_int)12LL)));
(*(P1050)rt_nil_check(F->t_1527)).elem = f_resolve_subtype_268((*(P1044)rt_nil_check(F->st_266)).a, &F->ec_1560);
(*(P1050)rt_nil_check(F->t_1527)).elemcons = F->ec_1560;
if (((*(P1044)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1046)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815((*(P1044)rt_nil_check(F->st_266)).b, g_ty_int_1129, &F->dummy_1529); b_; }));
}
}
F->result_ = F->t_1527;
goto ret_;
} else if (0 || (sel1530 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_277(F->st_266, &F->c_267v);
goto ret_;
} else if (0 || (sel1530 == (((rt_int)81LL)))) {
{
F->base_1561 = NULL;
F->result_ = f_value_subtype_290((*(P1044)rt_nil_check(F->st_266)).a, &F->c_267v, &F->base_1561);
goto ret_;
}
} else {
f_fail_23((*(P1044)rt_nil_check(F->st_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
}
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_267) = F->c_267v;
  RT_FPOP();
  return F->result_;
}

static int f_float_lit_270(P1044 e_269) {
  struct f_float_lit_270fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_269 = e_269;
if ((((*(P1044)rt_nil_check(F->e_269)).kind == (((rt_int)8LL))) && (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_269)).name))->all), rt_str("-", 1)) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_269)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_270((*(P1044)rt_nil_check(F->e_269)).a);
goto ret_;
}
F->result_ = (((*(P1044)rt_nil_check(F->e_269)).kind == (((rt_int)2LL))) || ((*(P1044)rt_nil_check(F->e_269)).kind == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_274(P1050 t_271, P1044 e_272, P1046 c_273) {
  struct f_tag_constraint_274fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_271 = t_271;
F->e_272 = e_272;
F->c_273 = c_273;
F->dummy_1562 = NULL;
(*(P1046)rt_nil_check(F->c_273)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815(F->e_272, (*(P1050)rt_nil_check(F->t_271)).elem, &F->dummy_1562); b_; }));
f_check_type_232(F->dummy_1562, (*(P1050)rt_nil_check(F->t_271)).elem, (*(P1044)rt_nil_check(F->e_272)).line);
(*(P1046)rt_nil_check(F->c_273)).hi = (*(P1046)rt_nil_check(F->c_273)).lo;
if (((*(P1044)rt_nil_check(F->e_272)).kind == (((rt_int)4LL)))) {
(*(P1046)rt_nil_check(F->c_273)).mlo = f_lit_index_265((*(P1050)rt_nil_check((*(P1050)rt_nil_check(F->t_271)).elem)).lits, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_272)).name))->all));
(*(P1046)rt_nil_check(F->c_273)).mhi = (*(P1046)rt_nil_check(F->c_273)).mlo;
(*(P1046)rt_nil_check(F->c_273)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P1050 f_named_subtype_277(P1044 st_275, P1046 *c_276) {
  struct f_named_subtype_277fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_275 = st_275;
F->c_276 = c_276;
F->c_276v = *F->c_276;
F->t_1563 = NULL;
F->y_1564 = NULL;
F->y_1564 = f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->st_275)).name))->all));
F->name_1565 = rt_str_copy((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->st_275)).name))->all));
F->c_276v = f_new_cons_184();
if (((F->y_1564 == NULL) && ((rt_str_eq(F->name_1565, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1565, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1565, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_295(F->st_275, &F->c_276v);
goto ret_;
}
if ((F->y_1564 == NULL)) {
if (rt_str_eq(F->name_1565, rt_str("BOOL", 4))) {
F->t_1563 = g_ty_bool_1130;
} else if (rt_str_eq(F->name_1565, rt_str("ASCII", 5))) {
F->t_1563 = g_ty_ascii_1132;
} else if (rt_str_eq(F->name_1565, rt_str("DATA_LOCK", 9))) {
F->t_1563 = g_ty_lock_1137;
} else if (rt_str_eq(F->name_1565, rt_str("LATCH", 5))) {
F->t_1563 = g_ty_latch_1138;
} else if (rt_str_eq(F->name_1565, rt_str("ACT", 3))) {
F->t_1563 = g_ty_act_1139;
} else if (rt_str_eq(F->name_1565, rt_str("INT", 3))) {
F->t_1563 = g_ty_int_1129;
} else if (rt_str_eq(F->name_1565, rt_str("SEND_ST", 7))) {
F->t_1563 = g_ty_send_st_1141;
} else if (rt_str_eq(F->name_1565, rt_str("RECEIVE_ST", 10))) {
F->t_1563 = g_ty_receive_st_1142;
} else if (rt_str_eq(F->name_1565, rt_str("FLOAT", 5))) {
F->t_1563 = g_ty_float_1131;
} else {
f_fail_23((*(P1044)rt_nil_check(F->st_275)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1565); b_; }));
}
if (((*(P1044)rt_nil_check(F->st_275)).b != NULL)) {
f_apply_constraint_286(F->t_1563, (*(P1044)rt_nil_check(F->st_275)).b, F->c_276v, (*(P1044)rt_nil_check(F->st_275)).line);
}
F->result_ = F->t_1563;
goto ret_;
}
if ((((*(P1054)rt_nil_check(F->y_1564)).kind == (((rt_int)10LL))) && (((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_1564)).decl)).b)).kind == (((rt_int)43LL))) || ((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_1564)).decl)).b)).kind == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_755(F->y_1564, (*(P1044)rt_nil_check(F->st_275)).a, (*(P1044)rt_nil_check(F->st_275)).b, &F->c_276v, (*(P1044)rt_nil_check(F->st_275)).line);
goto ret_;
}
if ((((*(P1054)rt_nil_check(F->y_1564)).kind == (((rt_int)10LL))) && ((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_1564)).decl)).b)).kind == (((rt_int)42LL))))) {
F->binds_1566 = NULL;
F->binds_1566 = f_tt_binds_721((*(P1054)rt_nil_check(F->y_1564)).decl, (*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_1564)).decl)).b)).e, (*(P1044)rt_nil_check(F->st_275)).a, (*(P1044)rt_nil_check(F->st_275)).line);
F->saved_env_1567 = NULL;
F->saved_env_1567 = g_genv_1085;
F->saved_gdepth_1568 = g_gdepth_1117;
f_open_scope_177();
while ((F->binds_1566 != NULL)) {
F->nb_1569 = NULL;
F->nb_1569 = (*(P1054)rt_nil_check(F->binds_1566)).mnext;
f_define_168(F->binds_1566, (*(P1044)rt_nil_check(F->st_275)).line);
F->binds_1566 = F->nb_1569;
}
g_genv_1085 = (*(P1054)rt_nil_check(F->y_1564)).env;
g_gdepth_1117 = g_depth_1087;
F->t_1563 = f_resolve_subtype_268((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_1564)).decl)).b)).a, &F->c_276v);
g_genv_1085 = F->saved_env_1567;
g_gdepth_1117 = F->saved_gdepth_1568;
f_close_scope_178();
if (((*(P1044)rt_nil_check(F->st_275)).b != NULL)) {
F->c_276v = f_copy_cons_206(F->c_276v);
f_apply_constraint_286(F->t_1563, (*(P1044)rt_nil_check(F->st_275)).b, F->c_276v, (*(P1044)rt_nil_check(F->st_275)).line);
}
F->result_ = F->t_1563;
goto ret_;
}
if (((((*(P1054)rt_nil_check(F->y_1564)).kind == (((rt_int)5LL))) && ((*(P1054)rt_nil_check(F->y_1564)).t != NULL)) && ((*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_1564)).t)).kind == (((rt_int)15LL))))) {
F->result_ = f_new_type_323(F->y_1564, F->st_275, &F->c_276v);
goto ret_;
}
if (((((*(P1054)rt_nil_check(F->y_1564)).kind == (((rt_int)5LL))) && ((*(P1054)rt_nil_check(F->y_1564)).t != NULL)) && ((*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_1564)).t)).kind == (((rt_int)8LL))))) {
(*(P1046)rt_nil_check(F->c_276v)).args = (*(P1044)rt_nil_check(F->st_275)).b;
F->result_ = (*(P1054)rt_nil_check(F->y_1564)).t;
goto ret_;
}
if (((((*(P1054)rt_nil_check(F->y_1564)).kind == (((rt_int)6LL))) && ((*(P1054)rt_nil_check(F->y_1564)).decl != NULL)) && ((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_1564)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_281(F->y_1564, F->st_275, &F->c_276v);
goto ret_;
}
if (((((*(P1054)rt_nil_check(F->y_1564)).kind == (((rt_int)6LL))) || ((*(P1054)rt_nil_check(F->y_1564)).kind == (((rt_int)5LL)))) && ((*(P1054)rt_nil_check(F->y_1564)).t != NULL))) {
if (((*(P1054)rt_nil_check(F->y_1564)).c != NULL)) {
F->c_276v = (*(P1054)rt_nil_check(F->y_1564)).c;
}
F->t_1563 = (*(P1054)rt_nil_check(F->y_1564)).t;
} else if (((((*(P1054)rt_nil_check(F->y_1564)).kind == (((rt_int)5LL))) && ((*(P1054)rt_nil_check(F->y_1564)).decl != NULL)) && ((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_1564)).decl)).kind == (((rt_int)43LL))))) {
F->result_ = f_new_type_323(F->y_1564, F->st_275, &F->c_276v);
goto ret_;
} else if ((((*(P1054)rt_nil_check(F->y_1564)).kind == (((rt_int)6LL))) || ((*(P1054)rt_nil_check(F->y_1564)).kind == (((rt_int)5LL))))) {
F->t_1563 = f_resolve_subtype_268((*(P1054)rt_nil_check(F->y_1564)).st, &F->c_276v);
} else {
f_fail_23((*(P1044)rt_nil_check(F->st_275)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1565, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P1044)rt_nil_check(F->st_275)).b != NULL)) {
F->c_276v = f_copy_cons_206(F->c_276v);
f_apply_constraint_286(F->t_1563, (*(P1044)rt_nil_check(F->st_275)).b, F->c_276v, (*(P1044)rt_nil_check(F->st_275)).line);
}
F->result_ = F->t_1563;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_276) = F->c_276v;
  RT_FPOP();
  return F->result_;
}

static P1050 f_invoke_abbrev_281(P1054 y_278, P1044 st_279, P1046 *c_280) {
  struct f_invoke_abbrev_281fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_278 = y_278;
F->st_279 = st_279;
F->c_280 = c_280;
F->c_280v = *F->c_280;
F->p_1570 = NULL;
F->p_1570 = (*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_278)).decl)).b;
F->a_1571 = NULL;
F->a_1571 = (*(P1044)rt_nil_check(F->st_279)).b;
F->t_1572 = NULL;
if ((f_list_len_71(F->p_1570) != f_list_len_71(F->a_1571))) {
f_fail_23((*(P1044)rt_nil_check(F->st_279)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_278)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1570))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_177();
while ((F->p_1570 != NULL)) {
F->z_1573 = NULL;
F->z_1573 = f_new_sym_181((((rt_int)2LL)), (*(P1044)rt_nil_check(F->p_1570)).name);
F->pc_1574 = NULL;
F->at_1575 = NULL;
if (((*(P1044)rt_nil_check(F->p_1570)).ival != (((rt_int)1LL)))) {
f_fail_23((*(P1044)rt_nil_check(F->st_279)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P1054)rt_nil_check(F->z_1573)).t = f_resolve_subtype_268((*(P1044)rt_nil_check(F->p_1570)).a, &F->pc_1574);
(*(P1054)rt_nil_check(F->z_1573)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_815(F->a_1571, (*(P1054)rt_nil_check(F->z_1573)).t, &F->at_1575)), rt_str(")", 1)); b_; }));
f_check_type_232(F->at_1575, (*(P1054)rt_nil_check(F->z_1573)).t, (*(P1044)rt_nil_check(F->st_279)).line);
(*(P1054)rt_nil_check(F->z_1573)).mvalue = f_manifest_381(F->a_1571, &F->ok_1576);
(*(P1054)rt_nil_check(F->z_1573)).hasmv = F->ok_1576;
(*(P1054)rt_nil_check(F->z_1573)).mv = f_meval_390(F->a_1571, &F->ok_1576);
if ((!F->ok_1576)) {
(*(P1054)rt_nil_check(F->z_1573)).mv = NULL;
}
(*(P1054)rt_nil_check(F->z_1573)).ro_flag = 1;
f_define_168(F->z_1573, (*(P1044)rt_nil_check(F->st_279)).line);
F->p_1570 = (*(P1044)rt_nil_check(F->p_1570)).next;
F->a_1571 = (*(P1044)rt_nil_check(F->a_1571)).next;
}
F->t_1572 = f_resolve_subtype_268((*(P1054)rt_nil_check(F->y_278)).st, &F->c_280v);
f_close_scope_178();
F->result_ = F->t_1572;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_280) = F->c_280v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_286(P1050 t_282, P1044 args_283, P1046 c_284, rt_int line_285) {
  struct f_apply_constraint_286fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_282 = t_282;
F->args_283 = args_283;
F->c_284 = c_284;
F->line_285 = line_285;
F->dummy_1577 = NULL;
if ((((*(P1050)rt_nil_check(F->t_282)).kind == (((rt_int)1LL))) || ((*(P1050)rt_nil_check(F->t_282)).kind == (((rt_int)4LL))))) {
if ((((*(P1044)rt_nil_check(F->args_283)).kind != (((rt_int)16LL))) || ((*(P1044)rt_nil_check(F->args_283)).next != NULL))) {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P1046)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815((*(P1044)rt_nil_check(F->args_283)).a, F->t_282, &F->dummy_1577); b_; }));
f_check_type_232(F->dummy_1577, F->t_282, F->line_285);
(*(P1046)rt_nil_check(F->c_284)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815((*(P1044)rt_nil_check(F->args_283)).b, F->t_282, &F->dummy_1577); b_; }));
f_check_type_232(F->dummy_1577, F->t_282, F->line_285);
(*(P1046)rt_nil_check(F->c_284)).hasm = 0;
if (((*(P1050)rt_nil_check(F->t_282)).kind == (((rt_int)1LL)))) {
(*(P1046)rt_nil_check(F->c_284)).mlo = f_manifest_381((*(P1044)rt_nil_check(F->args_283)).a, &F->ok_1578);
(*(P1046)rt_nil_check(F->c_284)).hasm = F->ok_1578;
(*(P1046)rt_nil_check(F->c_284)).mhi = f_manifest_381((*(P1044)rt_nil_check(F->args_283)).b, &F->ok_1578);
(*(P1046)rt_nil_check(F->c_284)).hasm = ((*(P1046)rt_nil_check(F->c_284)).hasm && F->ok_1578);
} else if ((((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_283)).a)).kind == (((rt_int)4LL))) && ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_283)).b)).kind == (((rt_int)4LL))))) {
(*(P1046)rt_nil_check(F->c_284)).mlo = f_lit_index_265((*(P1050)rt_nil_check(f_base_of_223(F->t_282))).lits, &(((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_283)).a)).name))->all));
(*(P1046)rt_nil_check(F->c_284)).mhi = f_lit_index_265((*(P1050)rt_nil_check(f_base_of_223(F->t_282))).lits, &(((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_283)).b)).name))->all));
(*(P1046)rt_nil_check(F->c_284)).hasm = 1;
}
} else if (((*(P1050)rt_nil_check(F->t_282)).kind == (((rt_int)3LL)))) {
(*(P1046)rt_nil_check(F->c_284)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815(F->args_283, g_ty_int_1129, &F->dummy_1577); b_; }));
if (((*(P1044)rt_nil_check(F->args_283)).next != NULL)) {
if (((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_283)).next)).kind != (((rt_int)16LL)))) {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P1046)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_283)).next)).a, g_ty_float_1131, &F->dummy_1577); b_; }));
(*(P1046)rt_nil_check(F->c_284)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_283)).next)).b, g_ty_float_1131, &F->dummy_1577); b_; }));
(*(P1046)rt_nil_check(F->c_284)).hasm = (f_float_lit_270((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_283)).next)).a) && f_float_lit_270((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_283)).next)).b));
}
} else if (((*(P1050)rt_nil_check(F->t_282)).kind == (((rt_int)5LL)))) {
(*(P1046)rt_nil_check(F->c_284)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815(F->args_283, g_ty_int_1129, &F->dummy_1577); b_; }));
} else if (((*(P1050)rt_nil_check(F->t_282)).kind == (((rt_int)12LL)))) {
(*(P1046)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815(F->args_283, g_ty_int_1129, &F->dummy_1577); b_; }));
} else if (((*(P1050)rt_nil_check(F->t_282)).kind == (((rt_int)17LL)))) {
f_tag_constraint_274(F->t_282, F->args_283, F->c_284);
} else {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P1050 f_value_subtype_290(P1044 e_287, P1046 *c_288, P1037 *base_289) {
  struct f_value_subtype_290fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_287 = e_287;
F->c_288 = c_288;
F->c_288v = *F->c_288;
F->base_289 = base_289;
F->base_289v = *F->base_289;
F->t_1579 = NULL;
F->c0_1580 = NULL;
if (f_is_lvalue_778(F->e_287)) {
f_lvalue_784(F->e_287, &F->base_289v, &F->t_1579, &F->c0_1580, &F->ro_1581);
} else {
F->base_289v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815(F->e_287, NULL, &F->t_1579); b_; }));
}
if ((F->c0_1580 == NULL)) {
F->c_288v = f_new_cons_184();
} else {
F->c_288v = f_copy_cons_206(F->c0_1580);
}
if (((*(P1050)rt_nil_check(F->t_1579)).kind == (((rt_int)5LL)))) {
(*(P1046)rt_nil_check(F->c_288v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1037)rt_nil_check(F->base_289v))->all)), rt_str(").len", 5)); b_; }));
} else if (((*(P1050)rt_nil_check(F->t_1579)).kind == (((rt_int)6LL)))) {
(*(P1046)rt_nil_check(F->c_288v)).bnds = NULL;
{ rt_int lo1583 = ((rt_int)1LL), hi1584 = (*(P1050)rt_nil_check(F->t_1579)).ndim;
for (rt_int it1585 = lo1583; it1585 <= hi1584; it1585++) {
F->k_1582 = it1585;
F->lo_1586 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1037)rt_nil_check(F->base_289v))->all)), rt_str(").", 2)), f_dim_lo_242(F->k_1582)));
F->hi_1587 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1037)rt_nil_check(F->base_289v))->all)), rt_str(").", 2)), f_dim_hi_244(F->k_1582)));
if ((F->k_1582 == ((rt_int)1LL))) {
(*(P1046)rt_nil_check(F->c_288v)).lo = f_mk_3(&F->lo_1586);
(*(P1046)rt_nil_check(F->c_288v)).hi = f_mk_3(&F->hi_1587);
} else if ((F->k_1582 == ((rt_int)2LL))) {
(*(P1046)rt_nil_check(F->c_288v)).lo2 = f_mk_3(&F->lo_1586);
(*(P1046)rt_nil_check(F->c_288v)).hi2 = f_mk_3(&F->hi_1587);
} else {
F->l1_1588 = NULL;
F->l2_1589 = NULL;
{ R1049 *cell1590 = rt_alloc(sizeof(R1049));
(*cell1590).s = NULL;
(*cell1590).next = NULL;
F->l1_1588 = cell1590;
}
{ R1049 *cell1591 = rt_alloc(sizeof(R1049));
(*cell1591).s = NULL;
(*cell1591).next = NULL;
F->l2_1589 = cell1591;
}
(*(P1048)rt_nil_check(F->l1_1588)).s = f_mk_3(&F->lo_1586);
(*(P1048)rt_nil_check(F->l2_1589)).s = f_mk_3(&F->hi_1587);
(*(P1048)rt_nil_check(F->l1_1588)).next = F->l2_1589;
(*(P1048)rt_nil_check(F->l2_1589)).next = (*(P1046)rt_nil_check(F->c_288v)).bnds;
(*(P1046)rt_nil_check(F->c_288v)).bnds = F->l1_1588;
}
}
}
(*(P1046)rt_nil_check(F->c_288v)).bnds = f_reverse_pairs_292((*(P1046)rt_nil_check(F->c_288v)).bnds);
} else if (((*(P1050)rt_nil_check(F->t_1579)).kind == (((rt_int)12LL)))) {
(*(P1046)rt_nil_check(F->c_288v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1037)rt_nil_check(F->base_289v))->all)), rt_str(")->cap", 6)); b_; }));
} else if ((((*(P1050)rt_nil_check(F->t_1579)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_1579)).tparams != NULL))) {
F->p_1592 = NULL;
F->p_1592 = (*(P1050)rt_nil_check(F->t_1579)).tparams;
F->head_1593 = NULL;
F->tail_1594 = NULL;
while ((F->p_1592 != NULL)) {
F->sel_1595 = NULL;
F->sel_1595 = f_nn_65((((rt_int)11LL)), (*(P1044)rt_nil_check(F->e_287)).line);
(*(P1044)rt_nil_check(F->sel_1595)).a = F->e_287;
(*(P1044)rt_nil_check(F->sel_1595)).name = (*(P1044)rt_nil_check(F->p_1592)).name;
f_append_69(&F->head_1593, &F->tail_1594, F->sel_1595);
F->p_1592 = (*(P1044)rt_nil_check(F->p_1592)).next;
}
(*(P1046)rt_nil_check(F->c_288v)).args = F->head_1593;
}
F->result_ = F->t_1579;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_288) = F->c_288v;  (*F->base_289) = F->base_289v;
  RT_FPOP();
  return F->result_;
}

static P1048 f_reverse_pairs_292(P1048 l_291) {
  struct f_reverse_pairs_292fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_291 = l_291;
F->r_1596 = NULL;
F->p_1597 = NULL;
F->p_1597 = F->l_291;
while ((F->p_1597 != NULL)) {
F->a_1598 = NULL;
F->a_1598 = F->p_1597;
F->b_1599 = NULL;
F->b_1599 = (*(P1048)rt_nil_check(F->p_1597)).next;
F->p_1597 = (*(P1048)rt_nil_check(F->b_1599)).next;
(*(P1048)rt_nil_check(F->b_1599)).next = F->r_1596;
F->r_1596 = F->a_1598;
}
F->result_ = F->r_1596;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1050 f_inquiry_295(P1044 st_293, P1046 *c_294) {
  struct f_inquiry_295fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_293 = st_293;
F->c_294 = c_294;
F->c_294v = *F->c_294;
F->base_1600 = NULL;
F->t_1601 = NULL;
F->name_1602 = rt_str_copy((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->st_293)).name))->all));
if (((*(P1044)rt_nil_check(F->st_293)).b == NULL)) {
f_fail_23((*(P1044)rt_nil_check(F->st_293)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1602, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1602, rt_str("TYPEOF", 6))) {
F->sub_1603 = NULL;
F->sub_1603 = f_as_subtype_297((*(P1044)rt_nil_check(F->st_293)).b);
F->c2_1604 = NULL;
if ((F->sub_1603 != NULL)) {
F->t_1601 = f_resolve_subtype_268(F->sub_1603, &F->c2_1604);
} else {
F->t_1601 = f_value_subtype_290((*(P1044)rt_nil_check(F->st_293)).b, &F->c2_1604, &F->base_1600);
}
F->c_294v = f_new_cons_184();
F->result_ = F->t_1601;
goto ret_;
}
F->t_1601 = f_value_subtype_290((*(P1044)rt_nil_check(F->st_293)).b, &F->c_294v, &F->base_1600);
if (rt_str_eq(F->name_1602, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1601;
goto ret_;
}
{
F->k_1605 = ((rt_int)1LL);
F->ok_1606 = 1;
F->ac_1607 = NULL;
F->ac_1607 = F->c_294v;
if (((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->st_293)).b)).next != NULL)) {
F->k_1605 = f_manifest_381((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->st_293)).b)).next, &F->ok_1606);
}
while ((((*(P1050)rt_nil_check(F->t_1601)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_1601)).tparams == NULL))) {
F->t_1601 = (*(P1050)rt_nil_check(F->t_1601)).under;
}
if ((((((*(P1050)rt_nil_check(F->t_1601)).kind != (((rt_int)6LL))) || (!F->ok_1606)) || (F->k_1605 < ((rt_int)1LL))) || (F->k_1605 > (*(P1050)rt_nil_check(F->t_1601)).ndim))) {
f_fail_23((*(P1044)rt_nil_check(F->st_293)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_294v = f_new_cons_184();
(*(P1046)rt_nil_check(F->c_294v)).lo = f_cons_lo_252(F->ac_1607, F->k_1605);
(*(P1046)rt_nil_check(F->c_294v)).hi = f_cons_hi_255(F->ac_1607, F->k_1605);
F->result_ = f_idx_type_258(F->t_1601, F->k_1605);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_294) = F->c_294v;
  RT_FPOP();
  return F->result_;
}

static P1044 f_as_subtype_297(P1044 e_296) {
  struct f_as_subtype_297fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_296 = e_296;
F->st_1608 = NULL;
if ((F->e_296 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((*(P1044)rt_nil_check(F->e_296)).kind == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_297((*(P1044)rt_nil_check(F->e_296)).a);
goto ret_;
} else if (((*(P1044)rt_nil_check(F->e_296)).kind == (((rt_int)7LL)))) {
if ((!f_type_name_304(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1608 = f_nn_65((((rt_int)80LL)), (*(P1044)rt_nil_check(F->e_296)).line);
(*(P1044)rt_nil_check(F->st_1608)).name = (*(P1044)rt_nil_check(F->e_296)).name;
F->result_ = F->st_1608;
goto ret_;
} else if ((((*(P1044)rt_nil_check(F->e_296)).kind == (((rt_int)12LL))) && ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).a)).kind == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_302((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).a)).name, (*(P1044)rt_nil_check(F->e_296)).b, NULL, (*(P1044)rt_nil_check(F->e_296)).line);
goto ret_;
} else if (((*(P1044)rt_nil_check(F->e_296)).kind != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).a)).kind == (((rt_int)12LL))) && ((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).a)).a)).kind == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_302((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).a)).a)).name, (*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).a)).b, (*(P1044)rt_nil_check(F->e_296)).b, (*(P1044)rt_nil_check(F->e_296)).line);
goto ret_;
} else if (((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).a)).kind != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1609 = rt_str_copy((((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).a)).name))->all));
F->y_1610 = NULL;
F->y_1610 = f_lookup_163(&F->name_1609);
if ((rt_str_eq(F->name_1609, rt_str("INT", 3)) && (F->y_1610 == NULL))) {
if (((((*(P1044)rt_nil_check(F->e_296)).b == NULL) || ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).b)).kind != (((rt_int)16LL)))) || ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1608 = f_nn_65((((rt_int)70LL)), (*(P1044)rt_nil_check(F->e_296)).line);
(*(P1044)rt_nil_check(F->st_1608)).a = (*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).b)).a;
(*(P1044)rt_nil_check(F->st_1608)).b = (*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).b)).b;
F->result_ = F->st_1608;
goto ret_;
} else if ((rt_str_eq(F->name_1609, rt_str("FLOAT", 5)) && (F->y_1610 == NULL))) {
F->st_1608 = f_nn_65((((rt_int)71LL)), (*(P1044)rt_nil_check(F->e_296)).line);
(*(P1044)rt_nil_check(F->st_1608)).a = (*(P1044)rt_nil_check(F->e_296)).b;
if ((((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).b)).next != NULL) && ((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).b)).next)).kind == (((rt_int)16LL))))) {
(*(P1044)rt_nil_check(F->st_1608)).b = (*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).b)).next)).a;
(*(P1044)rt_nil_check(F->st_1608)).c = (*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).b)).next)).b;
}
F->result_ = F->st_1608;
goto ret_;
} else if (((!f_type_name_304(&F->name_1609)) && (!((F->y_1610 == NULL) && ((rt_str_eq(F->name_1609, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1609, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1609, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1608 = f_nn_65((((rt_int)80LL)), (*(P1044)rt_nil_check(F->e_296)).line);
(*(P1044)rt_nil_check(F->st_1608)).name = (*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_296)).a)).name;
(*(P1044)rt_nil_check(F->st_1608)).b = (*(P1044)rt_nil_check(F->e_296)).b;
(*(P1044)rt_nil_check(F->st_1608)).flag = ((rt_int)1LL);
F->result_ = F->st_1608;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_tt_subtype_302(P1037 name_298, P1044 tt_299, P1044 args_300, rt_int line_301) {
  struct f_tt_subtype_302fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_298 = name_298;
F->tt_299 = tt_299;
F->args_300 = args_300;
F->line_301 = line_301;
F->st_1611 = NULL;
if (rt_str_eq((((P1037)rt_nil_check(F->name_298))->all), rt_str("STRING", 6))) {
F->st_1611 = f_nn_65((((rt_int)73LL)), F->line_301);
} else if (rt_str_eq((((P1037)rt_nil_check(F->name_298))->all), rt_str("SET", 3))) {
F->st_1611 = f_nn_65((((rt_int)77LL)), F->line_301);
} else if ((rt_str_eq((((P1037)rt_nil_check(F->name_298))->all), rt_str("MAILBOX", 7)) && ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P1054)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1611 = f_nn_65((((rt_int)78LL)), F->line_301);
} else if (rt_str_eq((((P1037)rt_nil_check(F->name_298))->all), rt_str("FILE", 4))) {
F->st_1611 = f_nn_65((((rt_int)79LL)), F->line_301);
} else if (f_type_name_304(&(((P1037)rt_nil_check(F->name_298))->all))) {
F->st_1611 = f_nn_65((((rt_int)80LL)), F->line_301);
(*(P1044)rt_nil_check(F->st_1611)).name = F->name_298;
(*(P1044)rt_nil_check(F->st_1611)).a = F->tt_299;
(*(P1044)rt_nil_check(F->st_1611)).b = F->args_300;
F->result_ = F->st_1611;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P1044)rt_nil_check(F->st_1611)).a = F->tt_299;
(*(P1044)rt_nil_check(F->st_1611)).b = F->args_300;
F->result_ = F->st_1611;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_name_304(rstr *name_303) {
  struct f_type_name_304fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_303 = name_303;
F->y_1612 = NULL;
F->y_1612 = f_lookup_163(&(*F->name_303));
if ((F->y_1612 == NULL)) {
F->result_ = ((((((((rt_str_eq((*F->name_303), rt_str("INT", 3)) || rt_str_eq((*F->name_303), rt_str("BOOL", 4))) || rt_str_eq((*F->name_303), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_303), rt_str("ASCII", 5))) || rt_str_eq((*F->name_303), rt_str("ACT", 3))) || rt_str_eq((*F->name_303), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_303), rt_str("LATCH", 5))) || rt_str_eq((*F->name_303), rt_str("SEND_ST", 7))) || rt_str_eq((*F->name_303), rt_str("RECEIVE_ST", 10)));
goto ret_;
}
F->result_ = ((((*(P1054)rt_nil_check(F->y_1612)).kind == (((rt_int)5LL))) || ((*(P1054)rt_nil_check(F->y_1612)).kind == (((rt_int)6LL)))) || (((*(P1054)rt_nil_check(F->y_1612)).kind == (((rt_int)10LL))) && ((((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_1612)).decl)).b)).kind == (((rt_int)43LL))) || ((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_1612)).decl)).b)).kind == (((rt_int)44LL)))) || ((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_1612)).decl)).b)).kind == (((rt_int)42LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_empty_set_306(P1050 t_305) {
  struct f_empty_set_306fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_305 = t_305;
if (f_sparse_set_308(F->t_305)) {
F->result_ = rt_str("rt_r_iset_empty()", 17);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_new(", 10), f_sub_lo_198(f_base_of_223((*(P1050)rt_nil_check(F->t_305)).elem), f_base_cons_226((*(P1050)rt_nil_check(F->t_305)).elem, (*(P1050)rt_nil_check(F->t_305)).elemcons))), rt_str(", ", 2)), f_sub_hi_201(f_base_of_223((*(P1050)rt_nil_check(F->t_305)).elem), f_base_cons_226((*(P1050)rt_nil_check(F->t_305)).elem, (*(P1050)rt_nil_check(F->t_305)).elemcons))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_sparse_set_308(P1050 t_307) {
  struct f_sparse_set_308fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_307 = t_307;
F->result_ = ((((*(P1050)rt_nil_check(F->t_307)).kind == (((rt_int)16LL))) && ((*(P1050)rt_nil_check(f_base_of_223((*(P1050)rt_nil_check(F->t_307)).elem))).kind == (((rt_int)1LL)))) && (((*(P1050)rt_nil_check(F->t_307)).elemcons == NULL) || ((*(P1046)rt_nil_check((*(P1050)rt_nil_check(F->t_307)).elemcons)).lo == NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_set_fn_311(P1050 t_309, rstr *op_310) {
  struct f_set_fn_311fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_309 = t_309;
F->op_310 = op_310;
if (f_sparse_set_308(F->t_309)) {
F->result_ = rt_str_cat(rt_str("rt_r_iset_", 10), (*F->op_310));
goto ret_;
} else if ((rt_str_eq((*F->op_310), rt_str("le", 2)) || rt_str_eq((*F->op_310), rt_str("lt", 2)))) {
F->result_ = rt_str_cat(rt_str("rt_r_set_", 9), (*F->op_310));
goto ret_;
}
F->result_ = rt_str_cat(rt_str("y_set_", 6), (*F->op_310));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_313(P1050 t_312) {
  struct f_opened_313fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_312 = t_312;
F->c_1613 = NULL;
F->c_1613 = g_caps_1103;
if (((((*(P1050)rt_nil_check(F->t_312)).kind != (((rt_int)15LL))) || ((*(P1050)rt_nil_check(F->t_312)).ocap == NULL)) || ((*(P1044)rt_nil_check((*(P1050)rt_nil_check(F->t_312)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1613 != NULL)) {
if (((*(P1071)rt_nil_check(F->c_1613)).d == (*(P1050)rt_nil_check(F->t_312)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1613 = (*(P1071)rt_nil_check(F->c_1613)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_replace_all_317(rstr *s_314, rstr *pat_315, rstr *r_316) {
  struct f_replace_all_317fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_314 = s_314;
F->pat_315 = pat_315;
F->r_316 = r_316;
F->i_1614 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_315)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_314)).len)) < ((rt_int)(((*F->pat_315)).len))))) {
F->result_ = (*F->s_314);
goto ret_;
}
while ((rt_sub(rt_add(F->i_1614, ((rt_int)(((*F->pat_315)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_314)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_314), F->i_1614, rt_sub(rt_add(F->i_1614, ((rt_int)(((*F->pat_315)).len))), ((rt_int)1LL))), (*F->pat_315))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_314), ((rt_int)1LL), rt_sub(F->i_1614, ((rt_int)1LL))), (*F->r_316)), f_replace_all_317(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_314), rt_add(F->i_1614, ((rt_int)(((*F->pat_315)).len))), ((rt_int)(((*F->s_314)).len))); b_; }), &(*F->pat_315), &(*F->r_316)));
goto ret_;
}
F->i_1614 = rt_add(F->i_1614, ((rt_int)1LL));
}
F->result_ = (*F->s_314);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_subst_319(rstr *s_318) {
  struct f_subst_319fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_318 = s_318;
F->l_1615 = NULL;
F->l_1615 = g_psub_1105;
F->r_1616 = NULL;
F->r_1616 = f_mk_3(&(*F->s_318));
while ((F->l_1615 != NULL)) {
F->r_1616 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_317(&(((P1037)rt_nil_check(F->r_1616))->all), &(((P1037)rt_nil_check((*(P1048)rt_nil_check(F->l_1615)).s))->all), &(((P1037)rt_nil_check((*(P1048)rt_nil_check((*(P1048)rt_nil_check(F->l_1615)).next)).s))->all)); b_; }));
F->l_1615 = (*(P1048)rt_nil_check((*(P1048)rt_nil_check(F->l_1615)).next)).next;
}
F->result_ = (((P1037)rt_nil_check(F->r_1616))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1050 f_new_type_323(P1054 y_320, P1044 st_321, P1046 *c_322) {
  struct f_new_type_323fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_320 = y_320;
F->st_321 = st_321;
F->c_322 = c_322;
F->c_322v = *F->c_322;
F->d_1617 = NULL;
F->d_1617 = (*(P1054)rt_nil_check(F->y_320)).decl;
F->p_1618 = NULL;
F->uc_1619 = NULL;
F->c_322v = f_new_cons_184();
if (((*(P1054)rt_nil_check(F->y_320)).t == NULL)) {
(*(P1054)rt_nil_check(F->y_320)).t = f_new_typ_183((((rt_int)15LL)));
(*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_320)).t)).name = (*(P1054)rt_nil_check(F->y_320)).name;
(*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_320)).t)).decl = F->d_1617;
(*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_320)).t)).tparams = (*(P1044)rt_nil_check(F->d_1617)).b;
if ((g_caps_1103 != NULL)) {
(*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_320)).t)).ocap = (*(P1071)rt_nil_check(g_caps_1103)).d;
}
f_open_scope_177();
F->p_1618 = (*(P1044)rt_nil_check(F->d_1617)).b;
while ((F->p_1618 != NULL)) {
F->z_1620 = NULL;
F->z_1620 = f_new_sym_181((((rt_int)2LL)), (*(P1044)rt_nil_check(F->p_1618)).name);
F->zc_1621 = NULL;
(*(P1054)rt_nil_check(F->z_1620)).t = f_resolve_subtype_268((*(P1044)rt_nil_check(F->p_1618)).a, &F->zc_1621);
(*(P1054)rt_nil_check(F->z_1620)).mnext = (*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_320)).t)).tpsyms;
(*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_320)).t)).tpsyms = F->z_1620;
(*(P1054)rt_nil_check(F->z_1620)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1618)).name))->all))), rt_str("@", 1)); b_; }));
f_define_168(F->z_1620, (*(P1044)rt_nil_check(F->d_1617)).line);
F->p_1618 = (*(P1044)rt_nil_check(F->p_1618)).next;
}
(*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_320)).t)).under = f_resolve_subtype_268((*(P1044)rt_nil_check(F->d_1617)).a, &F->uc_1619);
(*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_320)).t)).elemcons = F->uc_1619;
if (((*(P1044)rt_nil_check(F->d_1617)).c != NULL)) {
f_check_rep_337((*(P1044)rt_nil_check(F->d_1617)).c, (*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_320)).t)).under, F->uc_1619, 1, 0, F->d_1617);
(*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_320)).t)).repn = (*(P1044)rt_nil_check(F->d_1617)).c;
}
f_close_scope_178();
}
(*(P1046)rt_nil_check(F->c_322v)).args = (*(P1044)rt_nil_check(F->st_321)).b;
F->result_ = (*(P1054)rt_nil_check(F->y_320)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_322) = F->c_322v;
  RT_FPOP();
  return F->result_;
}

static rt_int f_needed_bits_326(P1050 t_324, P1046 c_325) {
  struct f_needed_bits_326fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_324 = t_324;
F->c_325 = c_325;
F->n_1622 = ((rt_int)0LL);
if (((*(P1050)rt_nil_check(F->t_324)).kind == (((rt_int)2LL)))) {
F->result_ = ((rt_int)1LL);
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_324)).kind == (((rt_int)4LL)))) {
F->v_1623 = rt_sub(f_list_len_71((*(P1050)rt_nil_check(F->t_324)).lits), ((rt_int)1LL));
if (((F->c_325 != NULL) && (*(P1046)rt_nil_check(F->c_325)).hasm)) {
F->v_1623 = (*(P1046)rt_nil_check(F->c_325)).mhi;
}
} else if (((((*(P1050)rt_nil_check(F->t_324)).kind == (((rt_int)1LL))) && (F->c_325 != NULL)) && (*(P1046)rt_nil_check(F->c_325)).hasm)) {
if (((*(P1046)rt_nil_check(F->c_325)).mlo < ((rt_int)0LL))) {
F->v_1623 = (*(P1046)rt_nil_check(F->c_325)).mhi;
if ((rt_sub(rt_neg((*(P1046)rt_nil_check(F->c_325)).mlo), ((rt_int)1LL)) > F->v_1623)) {
F->v_1623 = rt_sub(rt_neg((*(P1046)rt_nil_check(F->c_325)).mlo), ((rt_int)1LL));
}
F->n_1622 = ((rt_int)1LL);
} else {
F->v_1623 = (*(P1046)rt_nil_check(F->c_325)).mhi;
}
} else if (((*(P1050)rt_nil_check(F->t_324)).kind == (((rt_int)1LL)))) {
F->result_ = ((rt_int)64LL);
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_324)).kind == (((rt_int)3LL)))) {
if (((((F->c_325 != NULL) && ((*(P1046)rt_nil_check(F->c_325)).prec != NULL)) && f_has_digits_only_328(&(((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_325)).prec))->all))) && (rt_int_of_str((((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_325)).prec))->all)) <= ((rt_int)6LL)))) {
F->result_ = ((rt_int)32LL);
goto ret_;
}
F->result_ = ((rt_int)64LL);
goto ret_;
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
while ((F->v_1623 > ((rt_int)0LL))) {
F->n_1622 = rt_add(F->n_1622, ((rt_int)1LL));
F->v_1623 = rt_div(F->v_1623, ((rt_int)2LL));
}
if ((F->n_1622 == ((rt_int)0LL))) {
F->n_1622 = ((rt_int)1LL);
}
F->result_ = F->n_1622;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_digits_only_328(rstr *s_327) {
  struct f_has_digits_only_328fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_327 = s_327;
if ((((rt_int)(((*F->s_327)).len)) == ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1625 = ((rt_int)1LL), hi1626 = ((rt_int)(((*F->s_327)).len));
for (rt_int it1627 = lo1625; it1627 <= hi1626; it1627++) {
F->i_1624 = it1627;
if ((!f_is_digit_11(rt_str_get((*F->s_327), F->i_1624)))) {
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

static int f_built_in_only_330(P1050 t_329) {
  struct f_built_in_only_330fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_329 = t_329;
if (((*(P1050)rt_nil_check(F->t_329)).kind == (((rt_int)15LL)))) {
F->result_ = ((*(P1050)rt_nil_check(F->t_329)).repn != NULL);
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_329)).kind == (((rt_int)8LL)))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->t_329)).kind == (((rt_int)7LL))) || ((*(P1050)rt_nil_check(F->t_329)).kind == (((rt_int)17LL))))) {
F->f_1628 = NULL;
F->f_1628 = (*(P1050)rt_nil_check(F->t_329)).fields;
while ((F->f_1628 != NULL)) {
if ((!f_built_in_only_330((*(P1052)rt_nil_check(F->f_1628)).t))) {
F->result_ = 0;
goto ret_;
}
F->f_1628 = (*(P1052)rt_nil_check(F->f_1628)).next;
}
} else if (((((*(P1050)rt_nil_check(F->t_329)).kind == (((rt_int)6LL))) || ((*(P1050)rt_nil_check(F->t_329)).kind == (((rt_int)16LL)))) || ((*(P1050)rt_nil_check(F->t_329)).kind == (((rt_int)5LL))))) {
F->result_ = (((*(P1050)rt_nil_check(F->t_329)).elem == NULL) || f_built_in_only_330((*(P1050)rt_nil_check(F->t_329)).elem));
goto ret_;
}
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_rep_337(P1044 items_331, P1050 t_332, P1046 c_333, int top_334, int indirect_335, P1044 d_336) {
  struct f_check_rep_337fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_331 = items_331;
F->t_332 = t_332;
F->c_333 = c_333;
F->top_334 = top_334;
F->indirect_335 = indirect_335;
F->d_336 = d_336;
F->it_1629 = NULL;
F->it_1629 = F->items_331;
F->at_1631 = NULL;
if (((F->top_334 && (!F->indirect_335)) && (!f_built_in_only_330(F->t_332)))) {
f_fail_23((*(P1044)rt_nil_check(F->d_336)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only built-in types may underlie a representation", 49); b_; }));
}
while ((F->it_1629 != NULL)) {
F->w_1632 = rt_str_copy((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->it_1629)).name))->all));
if (rt_str_eq(F->w_1632, rt_str("SIZE", 4))) {
F->v_1633 = f_manifest_381((*(P1044)rt_nil_check(F->it_1629)).a, &F->ok_1630);
F->dummy_1634 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->it_1629)).a, g_ty_int_1129, &F->at_1631));
f_check_type_232(F->at_1631, g_ty_int_1129, (*(P1044)rt_nil_check(F->it_1629)).line);
if ((F->ok_1630 && (F->v_1633 < ((rt_int)0LL)))) {
f_fail_23((*(P1044)rt_nil_check(F->it_1629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a SIZE is not negative", 22); b_; }));
} else if (((F->ok_1630 && (f_needed_bits_326(F->t_332, F->c_333) > F->v_1633)) && (!F->indirect_335))) {
f_fail_23((*(P1044)rt_nil_check(F->it_1629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("SIZE(", 5), f_itos_7(F->v_1633)), rt_str(") is too small for this subtype, which needs ", 45)), f_itos_7(f_needed_bits_326(F->t_332, F->c_333))), rt_str(" bits", 5)); b_; }));
}
} else if (rt_str_eq(F->w_1632, rt_str("ALIGN", 5))) {
F->m_1635 = f_manifest_381((*(P1044)rt_nil_check(F->it_1629)).a, &F->ok_1630);
if ((!F->top_334)) {
f_fail_23((*(P1044)rt_nil_check(F->it_1629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALIGN is for the whole underlying subtype only", 46); b_; }));
}
if ((F->ok_1630 && (F->m_1635 <= ((rt_int)0LL)))) {
f_fail_23((*(P1044)rt_nil_check(F->it_1629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the modulus of ALIGN is greater than zero", 41); b_; }));
}
if ((F->ok_1630 && ((*(P1044)rt_nil_check(F->it_1629)).b != NULL))) {
F->r_1637 = f_manifest_381((*(P1044)rt_nil_check(F->it_1629)).b, &F->ok2_1636);
if ((F->ok2_1636 && ((F->r_1637 < ((rt_int)0LL)) || (F->r_1637 >= F->m_1635)))) {
f_fail_23((*(P1044)rt_nil_check(F->it_1629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALIGN(e1 OF e2) needs e1 in 0 .. e2 - 1", 39); b_; }));
}
}
} else if (rt_str_eq(F->w_1632, rt_str("OFFSET", 6))) {
F->o_1638 = f_manifest_381((*(P1044)rt_nil_check(F->it_1629)).a, &F->ok_1630);
if (F->top_334) {
f_fail_23((*(P1044)rt_nil_check(F->it_1629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET is for components of records and unions only", 51); b_; }));
} else if ((F->ok_1630 && (F->o_1638 < ((rt_int)0LL)))) {
f_fail_23((*(P1044)rt_nil_check(F->it_1629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an OFFSET is not negative", 25); b_; }));
}
} else if ((rt_str_eq(F->w_1632, rt_str("RECORD", 6)) || rt_str_eq(F->w_1632, rt_str("UNION", 5)))) {
F->comp_1639 = NULL;
F->comp_1639 = (*(P1044)rt_nil_check(F->it_1629)).c;
if (((rt_str_eq(F->w_1632, rt_str("RECORD", 6)) && ((*(P1050)rt_nil_check(F->t_332)).kind != (((rt_int)7LL)))) || (rt_str_eq(F->w_1632, rt_str("UNION", 5)) && ((*(P1050)rt_nil_check(F->t_332)).kind != (((rt_int)17LL)))))) {
f_fail_23((*(P1044)rt_nil_check(F->it_1629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->w_1632, rt_str(" is a representation for ", 25)), F->w_1632), rt_str(" types only", 11)); b_; }));
}
while ((F->comp_1639 != NULL)) {
F->f_1640 = NULL;
F->f_1640 = (*(P1050)rt_nil_check(F->t_332)).fields;
while (((F->f_1640 != NULL) && (!rt_str_eq((((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_1640)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->comp_1639)).name))->all))))) {
F->f_1640 = (*(P1052)rt_nil_check(F->f_1640)).next;
}
if ((F->f_1640 != NULL)) {
f_check_rep_337((*(P1044)rt_nil_check(F->comp_1639)).a, (*(P1052)rt_nil_check(F->f_1640)).t, (*(P1052)rt_nil_check(F->f_1640)).c, 0, 0, F->d_336);
} else if (((!(rt_str_eq(F->w_1632, rt_str("UNION", 5)) && rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->comp_1639)).name))->all), rt_str("TAG", 3)))) && (!(F->top_334 && f_formal_named_340(F->d_336, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->comp_1639)).name))->all)))))) {
f_fail_23((*(P1044)rt_nil_check(F->comp_1639)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->comp_1639)).name))->all), rt_str(" is not a component", 19)); b_; }));
}
F->comp_1639 = (*(P1044)rt_nil_check(F->comp_1639)).next;
}
} else if (rt_str_eq(F->w_1632, rt_str("ARRAY", 5))) {
F->k_1641 = NULL;
F->k_1641 = (*(P1044)rt_nil_check(F->it_1629)).d;
if ((((*(P1050)rt_nil_check(F->t_332)).kind != (((rt_int)6LL))) || (f_list_len_71((*(P1044)rt_nil_check(F->it_1629)).d) != (*(P1050)rt_nil_check(F->t_332)).ndim))) {
f_fail_23((*(P1044)rt_nil_check(F->it_1629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ARRAY names NORMAL or NOBOUNDS for each index of an array", 57); b_; }));
}
while ((F->k_1641 != NULL)) {
if (((!rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->k_1641)).name))->all), rt_str("NORMAL", 6))) && (!rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->k_1641)).name))->all), rt_str("NOBOUNDS", 8))))) {
f_fail_23((*(P1044)rt_nil_check(F->k_1641)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NORMAL or NOBOUNDS expected", 27); b_; }));
}
F->k_1641 = (*(P1044)rt_nil_check(F->k_1641)).next;
}
f_check_rep_337((*(P1044)rt_nil_check(F->it_1629)).c, (*(P1050)rt_nil_check(F->t_332)).elem, (*(P1050)rt_nil_check(F->t_332)).elemcons, 0, 0, F->d_336);
} else if (rt_str_eq(F->w_1632, rt_str("ENUM", 4))) {
if (((((*(P1050)rt_nil_check(F->t_332)).kind != (((rt_int)4LL))) || ((*(P1044)rt_nil_check(F->it_1629)).d == NULL)) || (!rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->it_1629)).d)).name))->all), rt_str("STANDARD", 8))))) {
f_fail_23((*(P1044)rt_nil_check(F->it_1629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ENUM(STANDARD) is for enumeration subtypes", 42); b_; }));
}
} else if (rt_str_eq(F->w_1632, rt_str("PTR", 3))) {
if ((((((!F->indirect_335) || (!F->top_334)) || ((*(P1044)rt_nil_check(F->it_1629)).d == NULL)) || (!rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->it_1629)).d)).name))->all), rt_str("FREE", 4)))) || (((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->it_1629)).d)).next != NULL) && (!rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->it_1629)).d)).next)).name))->all), rt_str("UNCHECKED", 9)))))) {
f_fail_23((*(P1044)rt_nil_check(F->it_1629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR(FREE) or PTR(FREE UNCHECKED) is for indirect types", 54); b_; }));
}
} else if (rt_str_eq(F->w_1632, rt_str("ABSENT", 6))) {
F->a_1642 = NULL;
F->a_1642 = (*(P1044)rt_nil_check(F->it_1629)).d;
if ((!F->top_334)) {
f_fail_23((*(P1044)rt_nil_check(F->it_1629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABSENT is for the whole type", 28); b_; }));
}
while ((F->a_1642 != NULL)) {
if ((!f_formal_named_340(F->d_336, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->a_1642)).name))->all)))) {
f_fail_23((*(P1044)rt_nil_check(F->a_1642)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->a_1642)).name))->all), rt_str(" is not a formal parameter of the type", 38)); b_; }));
}
F->a_1642 = (*(P1044)rt_nil_check(F->a_1642)).next;
}
}
F->it_1629 = (*(P1044)rt_nil_check(F->it_1629)).next;
}
ret_:
  RT_FPOP();
  return;
}

static int f_formal_named_340(P1044 d_338, rstr *name_339) {
  struct f_formal_named_340fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_338 = d_338;
F->name_339 = name_339;
F->p_1643 = NULL;
F->p_1643 = (*(P1044)rt_nil_check(F->d_338)).b;
while ((F->p_1643 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1643)).name))->all), (*F->name_339))) {
F->result_ = 1;
goto ret_;
}
F->p_1643 = (*(P1044)rt_nil_check(F->p_1643)).next;
}
F->p_1643 = (*(P1044)rt_nil_check(F->d_338)).d;
if (((*(P1044)rt_nil_check(F->d_338)).kind == (((rt_int)44LL)))) {
while ((F->p_1643 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1643)).name))->all), (*F->name_339))) {
F->result_ = 1;
goto ret_;
}
F->p_1643 = (*(P1044)rt_nil_check(F->p_1643)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_unchecked_free_342(P1050 t_341) {
  struct f_unchecked_free_342fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_341 = t_341;
F->it_1644 = NULL;
if ((((*(P1050)rt_nil_check(F->t_341)).decl == NULL) || ((*(P1044)rt_nil_check((*(P1050)rt_nil_check(F->t_341)).decl)).kind != (((rt_int)44LL))))) {
F->result_ = 0;
goto ret_;
}
F->it_1644 = (*(P1044)rt_nil_check((*(P1050)rt_nil_check(F->t_341)).decl)).c;
while ((F->it_1644 != NULL)) {
if (((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->it_1644)).name))->all), rt_str("PTR", 3)) && ((*(P1044)rt_nil_check(F->it_1644)).d != NULL)) && ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->it_1644)).d)).next != NULL))) {
F->result_ = 1;
goto ret_;
}
F->it_1644 = (*(P1044)rt_nil_check(F->it_1644)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_346(rstr *lval_343, P1050 t_344, P1046 c_345) {
  struct f_init_storage_346fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_343 = lval_343;
F->t_344 = t_344;
F->c_345 = c_345;
f_make_storage_361(&(*F->lval_343), F->t_344, F->c_345);
if (((*(P1050)rt_nil_check(F->t_344)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_349((*(P1050)rt_nil_check(F->t_344)).initp, &(*F->lval_343)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_349(P1054 y_347, rstr *lval_348) {
  struct f_init_call_349fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_347 = y_347;
F->lval_348 = lval_348;
F->link_1645 = NULL;
F->link_1645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1054)rt_nil_check(F->y_347)).level > ((rt_int)0LL))) {
F->link_1645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1647 = ((rt_int)1LL), hi1648 = rt_sub(g_cur_level_1101, (*(P1054)rt_nil_check(F->y_347)).level);
for (rt_int it1649 = lo1647; it1649 <= hi1648; it1649++) {
F->i_1646 = it1649;
F->link_1645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->link_1645))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->link_1645))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_347)).cname))->all), rt_str("(", 1)), (((P1037)rt_nil_check(F->link_1645))->all)), rt_str("&", 1)), (*F->lval_348)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_351(P1050 t_350) {
  struct f_needs_fin_351fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_350 = t_350;
if ((F->t_350 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P1050)rt_nil_check(F->t_350)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if (((*(P1050)rt_nil_check(F->t_350)).kind == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_351((*(P1050)rt_nil_check(F->t_350)).under);
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_350)).kind == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_351((*(P1050)rt_nil_check(F->t_350)).elem);
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->t_350)).kind == (((rt_int)7LL))) || ((*(P1050)rt_nil_check(F->t_350)).kind == (((rt_int)17LL))))) {
F->f_1650 = NULL;
F->f_1650 = (*(P1050)rt_nil_check(F->t_350)).fields;
while ((F->f_1650 != NULL)) {
if (f_needs_fin_351((*(P1052)rt_nil_check(F->f_1650)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1650 = (*(P1052)rt_nil_check(F->f_1650)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_354(rstr *lval_352, P1050 t_353) {
  struct f_fin_code_354fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_352 = lval_352;
F->t_353 = t_353;
F->r_1651 = NULL;
F->r_1651 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1050)rt_nil_check(F->t_353)).finalp != NULL)) {
F->r_1651 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_349((*(P1050)rt_nil_check(F->t_353)).finalp, &(*F->lval_352)), rt_str(" ", 1)); b_; }));
}
if ((((*(P1050)rt_nil_check(F->t_353)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_353)).tparams == NULL))) {
F->result_ = rt_str_cat((((P1037)rt_nil_check(F->r_1651))->all), f_fin_code_354(&(*F->lval_352), (*(P1050)rt_nil_check(F->t_353)).under));
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_353)).kind == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P1037)rt_nil_check(F->r_1651))->all), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_352), rt_str(".all", 4)); b_; }), (*(P1050)rt_nil_check(F->t_353)).under));
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->t_353)).kind == (((rt_int)6LL))) && f_needs_fin_351((*(P1050)rt_nil_check(F->t_353)).elem))) {
F->i_1652 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1651))->all), rt_str("for (rt_int ", 12)), F->i_1652), rt_str(" = 0; ", 6)), F->i_1652), rt_str(" < ", 3)), f_acnt_249(F->t_353, &(*F->lval_352))), rt_str("; ", 2)), F->i_1652), rt_str("++) { ", 6)), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_352), rt_str(".p[", 3)), F->i_1652), rt_str("]", 1)); b_; }), (*(P1050)rt_nil_check(F->t_353)).elem)), rt_str(" }", 2));
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_353)).kind == (((rt_int)7LL)))) {
F->f_1653 = NULL;
F->f_1653 = (*(P1050)rt_nil_check(F->t_353)).fields;
while ((F->f_1653 != NULL)) {
if (f_needs_fin_351((*(P1052)rt_nil_check(F->f_1653)).t)) {
F->r_1651 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1651))->all), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_352), rt_str(".", 1)), f_field_c_17(&(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_1653)).name))->all))); b_; }), (*(P1052)rt_nil_check(F->f_1653)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1653 = (*(P1052)rt_nil_check(F->f_1653)).next;
}
} else if (((*(P1050)rt_nil_check(F->t_353)).kind == (((rt_int)17LL)))) {
F->f_1654 = NULL;
F->f_1654 = (*(P1050)rt_nil_check(F->t_353)).fields;
F->i_1655 = ((rt_int)0LL);
F->r_1651 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1651))->all), rt_str("switch (", 8)), (*F->lval_352)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1654 != NULL)) {
if (f_needs_fin_351((*(P1052)rt_nil_check(F->f_1654)).t)) {
F->r_1651 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1651))->all), rt_str(" case ", 6)), f_itos_7(F->i_1655)), rt_str(": ", 2)), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_352), rt_str(".u.", 3)), f_field_c_17(&(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_1654)).name))->all))); b_; }), (*(P1052)rt_nil_check(F->f_1654)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1655 = rt_add(F->i_1655, ((rt_int)1LL));
F->f_1654 = (*(P1052)rt_nil_check(F->f_1654)).next;
}
F->r_1651 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_1651))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P1037)rt_nil_check(F->r_1651))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1050 f_tparam_type_357(P1050 t_355, rstr *name_356) {
  struct f_tparam_type_357fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_355 = t_355;
F->name_356 = name_356;
F->z_1656 = NULL;
F->z_1656 = (*(P1050)rt_nil_check(F->t_355)).tpsyms;
while ((F->z_1656 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->z_1656)).name))->all), (*F->name_356))) {
F->result_ = (*(P1054)rt_nil_check(F->z_1656)).t;
goto ret_;
}
F->z_1656 = (*(P1054)rt_nil_check(F->z_1656)).mnext;
}
F->result_ = g_ty_int_1129;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_361(rstr *lval_358, P1050 t_359, P1046 c_360) {
  struct f_make_storage_361fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_358 = lval_358;
F->t_359 = t_359;
F->c_360 = c_360;
if (((*(P1050)rt_nil_check(F->t_359)).kind == (((rt_int)15LL)))) {
F->p_1657 = NULL;
F->p_1657 = (*(P1050)rt_nil_check(F->t_359)).tparams;
F->a_1658 = NULL;
F->a_1658 = (*(P1046)rt_nil_check(F->c_360)).args;
F->uc_1659 = NULL;
F->ut_1660 = NULL;
F->at_1661 = NULL;
if ((f_list_len_71(F->a_1658) != f_list_len_71(F->p_1657))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_359)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1657))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1657 != NULL)) {
F->pt_1662 = f_tparam_type_357(F->t_359, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1657)).name))->all));
F->v_1663 = rt_str_copy(f_gexpr_815(F->a_1658, F->pt_1662, &F->at_1661));
f_check_type_232(F->at_1661, F->pt_1662, (*(P1044)rt_nil_check(F->a_1658)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".p_", 3)), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1657)).name))->all))), rt_str(" = ", 3)), F->v_1663), rt_str(";", 1)); b_; }));
F->p_1657 = (*(P1044)rt_nil_check(F->p_1657)).next;
F->a_1658 = (*(P1044)rt_nil_check(F->a_1658)).next;
}
{
F->saved_1664 = NULL;
F->saved_1664 = g_psub_1105;
F->p_1657 = (*(P1050)rt_nil_check(F->t_359)).tparams;
while ((F->p_1657 != NULL)) {
F->l1_1665 = NULL;
F->l2_1666 = NULL;
{ R1049 *cell1667 = rt_alloc(sizeof(R1049));
(*cell1667).s = NULL;
(*cell1667).next = NULL;
F->l1_1665 = cell1667;
}
{ R1049 *cell1668 = rt_alloc(sizeof(R1049));
(*cell1668).s = NULL;
(*cell1668).next = NULL;
F->l2_1666 = cell1668;
}
(*(P1048)rt_nil_check(F->l1_1665)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1657)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1048)rt_nil_check(F->l2_1666)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".p_", 3)), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1657)).name))->all))); b_; }));
(*(P1048)rt_nil_check(F->l1_1665)).next = F->l2_1666;
(*(P1048)rt_nil_check(F->l2_1666)).next = g_psub_1105;
g_psub_1105 = F->l1_1665;
F->p_1657 = (*(P1044)rt_nil_check(F->p_1657)).next;
}
if (((*(P1050)rt_nil_check(F->t_359)).tparams == NULL)) {
f_init_storage_346(&(*F->lval_358), (*(P1050)rt_nil_check(F->t_359)).under, (*(P1050)rt_nil_check(F->t_359)).elemcons);
} else {
f_init_storage_346(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_358), rt_str(".all", 4)); b_; }), (*(P1050)rt_nil_check(F->t_359)).under, (*(P1050)rt_nil_check(F->t_359)).elemcons);
}
g_psub_1105 = F->saved_1664;
}
} else if (((*(P1050)rt_nil_check(F->t_359)).kind == (((rt_int)12LL)))) {
if (((*(P1046)rt_nil_check(F->c_360)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_358), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_358)), rt_str(", ", 2)), f_subst_319(&(((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_360)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_234((*(P1050)rt_nil_check(F->t_359)).elem)), rt_str("), ", 3)), f_mcopy_407((*(P1050)rt_nil_check(F->t_359)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P1050)rt_nil_check(F->t_359)).kind == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_358)), rt_str(");", 2)); b_; }));
} else if (((*(P1050)rt_nil_check(F->t_359)).kind == (((rt_int)16LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(" = ", 3)), f_empty_set_306(F->t_359)), rt_str(";", 1)); b_; }));
} else if (((*(P1050)rt_nil_check(F->t_359)).kind == (((rt_int)10LL)))) {
F->at_1669 = NULL;
if ((((F->c_360 == NULL) || ((*(P1046)rt_nil_check(F->c_360)).args == NULL)) || ((*(P1044)rt_nil_check((*(P1046)rt_nil_check(F->c_360)).args)).next == NULL))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a file variable needs its access and use: FILE[S](access, use)", 62); b_; }));
}
if (((!f_text_file_999(F->t_359)) && (!f_storable_365((*(P1050)rt_nil_check(F->t_359)).elem)))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the components of a file may not be or contain indirect, ACT, MAILBOX, DATA_LOCK, LATCH or FILE values", 102); b_; }));
}
{
F->acc_1670 = rt_str_copy(f_gexpr_815((*(P1046)rt_nil_check(F->c_360)).args, g_file_access_type_1146, &F->at_1669));
F->use_1671 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check((*(P1046)rt_nil_check(F->c_360)).args)).next, g_file_mode_type_1140, &F->at_1669));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(" = rt_r_file_new(", 17)), F->acc_1670), rt_str(", ", 2)), F->use_1671), rt_str(", sizeof(", 9)), f_ctype_234((*(P1050)rt_nil_check(F->t_359)).elem)), rt_str("), ", 3)), f_bool_text_397(f_text_file_999(F->t_359))), rt_str(");", 2)); b_; }));
}
} else if (((*(P1050)rt_nil_check(F->t_359)).kind == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_358), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if (((*(P1050)rt_nil_check(F->t_359)).kind == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_358), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P1050)rt_nil_check(F->t_359)).kind == (((rt_int)5LL)))) {
if (((*(P1046)rt_nil_check(F->c_360)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
if ((g_mark_uninit_1120 && (f_list_len_71((*(P1050)rt_nil_check(f_base_of_223(f_str_elem_218(F->t_359)))).lits) < ((rt_int)256LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(" = rt_r_str_undef(", 18)), f_subst_319(&(((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_360)).slen))->all))), rt_str(");", 2)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(" = rt_str_new(", 14)), f_subst_319(&(((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_360)).slen))->all))), rt_str(");", 2)); b_; }));
}
} else if (((*(P1050)rt_nil_check(F->t_359)).kind == (((rt_int)6LL)))) {
if (((*(P1046)rt_nil_check(F->c_360)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1673 = ((rt_int)1LL), hi1674 = (*(P1050)rt_nil_check(F->t_359)).ndim;
for (rt_int it1675 = lo1673; it1675 <= hi1674; it1675++) {
F->k_1672 = it1675;
if ((f_cons_lo_252(F->c_360, F->k_1672) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".", 1)), f_dim_lo_242(F->k_1672)), rt_str(" = ", 3)), f_subst_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1037)rt_nil_check(f_cons_lo_252(F->c_360, F->k_1672)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_358)), rt_str(".", 1)), f_dim_hi_244(F->k_1672)), rt_str(" = ", 3)), f_subst_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1037)rt_nil_check(f_cons_hi_255(F->c_360, F->k_1672)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if (((*(P1050)rt_nil_check(F->t_359)).ndim == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".lo2 = ", 7)), (*F->lval_358)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_234((*(P1050)rt_nil_check(F->t_359)).elem)), rt_str(") * (size_t)", 12)), f_acnt_249(F->t_359, &(*F->lval_358))), rt_str(" + 1);", 6)); b_; }));
if ((((((((((((*(P1050)rt_nil_check((*(P1050)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)5LL))) || ((*(P1050)rt_nil_check((*(P1050)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)6LL)))) || ((*(P1050)rt_nil_check((*(P1050)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)7LL)))) || ((*(P1050)rt_nil_check((*(P1050)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)15LL)))) || ((*(P1050)rt_nil_check((*(P1050)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)8LL)))) || ((*(P1050)rt_nil_check((*(P1050)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)12LL)))) || ((*(P1050)rt_nil_check((*(P1050)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)13LL)))) || ((*(P1050)rt_nil_check((*(P1050)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)14LL)))) || ((*(P1050)rt_nil_check((*(P1050)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)17LL)))) || (g_mark_uninit_1120 && (!rt_str_eq(f_uninit_value_375((*(P1050)rt_nil_check(F->t_359)).elem), rt_str("", 0)))))) {
F->i_1676 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1676), rt_str(" = 0; ", 6)), F->i_1676), rt_str(" < ", 3)), f_acnt_249(F->t_359, &(*F->lval_358))), rt_str("; ", 2)), F->i_1676), rt_str("++) {", 5)); b_; }));
f_init_storage_346(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".p[", 3)), F->i_1676), rt_str("]", 1)); b_; }), (*(P1050)rt_nil_check(F->t_359)).elem, (*(P1050)rt_nil_check(F->t_359)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P1050)rt_nil_check(F->t_359)).kind == (((rt_int)7LL)))) {
F->f_1677 = NULL;
F->f_1677 = (*(P1050)rt_nil_check(F->t_359)).fields;
while ((F->f_1677 != NULL)) {
f_init_storage_346(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".", 1)), f_field_c_17(&(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_1677)).name))->all))); b_; }), (*(P1052)rt_nil_check(F->f_1677)).t, (*(P1052)rt_nil_check(F->f_1677)).c);
F->f_1677 = (*(P1052)rt_nil_check(F->f_1677)).next;
}
} else if (((*(P1050)rt_nil_check(F->t_359)).kind == (((rt_int)17LL)))) {
if (((F->c_360 != NULL) && (*(P1046)rt_nil_check(F->c_360)).hasm)) {
F->f_1678 = NULL;
F->f_1678 = (*(P1050)rt_nil_check(F->t_359)).fields;
{ rt_int lo1680 = ((rt_int)1LL), hi1681 = (*(P1046)rt_nil_check(F->c_360)).mlo;
for (rt_int it1682 = lo1680; it1682 <= hi1681; it1682++) {
F->i_1679 = it1682;
F->f_1678 = (*(P1052)rt_nil_check(F->f_1678)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".tag = ", 7)), f_itos_7((*(P1046)rt_nil_check(F->c_360)).mlo)), rt_str(";", 1)); b_; }));
f_init_storage_346(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".u.", 3)), f_field_c_17(&(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_1678)).name))->all))); b_; }), (*(P1052)rt_nil_check(F->f_1678)).t, (*(P1052)rt_nil_check(F->f_1678)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_358), rt_str(".tag = -1;", 10)); b_; }));
}
} else if ((g_mark_uninit_1120 && (!rt_str_eq(f_uninit_value_375(F->t_359), rt_str("", 0))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(" = ", 3)), f_uninit_value_375(F->t_359)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_flat_363(P1050 t_362) {
  struct f_flat_363fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_362 = t_362;
if ((((*(P1050)rt_nil_check(F->t_362)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_362)).tparams == NULL))) {
F->result_ = f_flat_363((*(P1050)rt_nil_check(F->t_362)).under);
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->t_362)).kind == (((rt_int)7LL))) || ((*(P1050)rt_nil_check(F->t_362)).kind == (((rt_int)17LL))))) {
F->f_1683 = NULL;
F->f_1683 = (*(P1050)rt_nil_check(F->t_362)).fields;
while ((F->f_1683 != NULL)) {
if ((!f_flat_363((*(P1052)rt_nil_check(F->f_1683)).t))) {
F->result_ = 0;
goto ret_;
}
F->f_1683 = (*(P1052)rt_nil_check(F->f_1683)).next;
}
F->result_ = 1;
goto ret_;
}
F->result_ = (((((*(P1050)rt_nil_check(F->t_362)).kind == (((rt_int)1LL))) || ((*(P1050)rt_nil_check(F->t_362)).kind == (((rt_int)3LL)))) || ((*(P1050)rt_nil_check(F->t_362)).kind == (((rt_int)4LL)))) || ((*(P1050)rt_nil_check(F->t_362)).kind == (((rt_int)2LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_storable_365(P1050 t_364) {
  struct f_storable_365fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_364 = t_364;
if (((*(P1050)rt_nil_check(F->t_364)).kind == (((rt_int)15LL)))) {
F->result_ = f_storable_365((*(P1050)rt_nil_check(F->t_364)).under);
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->t_364)).kind == (((rt_int)7LL))) || ((*(P1050)rt_nil_check(F->t_364)).kind == (((rt_int)17LL))))) {
F->f_1684 = NULL;
F->f_1684 = (*(P1050)rt_nil_check(F->t_364)).fields;
while ((F->f_1684 != NULL)) {
if ((!f_storable_365((*(P1052)rt_nil_check(F->f_1684)).t))) {
F->result_ = 0;
goto ret_;
}
F->f_1684 = (*(P1052)rt_nil_check(F->f_1684)).next;
}
F->result_ = 1;
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_364)).kind == (((rt_int)6LL)))) {
F->result_ = f_storable_365((*(P1050)rt_nil_check(F->t_364)).elem);
goto ret_;
}
F->result_ = (((((((*(P1050)rt_nil_check(F->t_364)).kind == (((rt_int)1LL))) || ((*(P1050)rt_nil_check(F->t_364)).kind == (((rt_int)3LL)))) || ((*(P1050)rt_nil_check(F->t_364)).kind == (((rt_int)4LL)))) || ((*(P1050)rt_nil_check(F->t_364)).kind == (((rt_int)2LL)))) || ((*(P1050)rt_nil_check(F->t_364)).kind == (((rt_int)5LL)))) || ((*(P1050)rt_nil_check(F->t_364)).kind == (((rt_int)16LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_ser_name_367(P1050 t_366) {
  struct f_ser_name_367fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_366 = t_366;
F->ct_1685 = rt_str_copy(f_ctype_234(F->t_366));
F->key_1686 = NULL;
F->key_1686 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->l_1687 = NULL;
{ rt_int lo1689 = ((rt_int)1LL), hi1690 = ((rt_int)((F->ct_1685).len));
for (rt_int it1691 = lo1689; it1691 <= hi1690; it1691++) {
F->i_1688 = it1691;
if (((f_is_letter_9(rt_str_get(F->ct_1685, F->i_1688)) || f_is_digit_11(rt_str_get(F->ct_1685, F->i_1688))) || (rt_str_get(F->ct_1685, F->i_1688) == 95))) {
F->key_1686 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->key_1686))->all), f_chs_5(rt_str_get(F->ct_1685, F->i_1688))); b_; }));
}
}
}
if ((((*(P1050)rt_nil_check(F->t_366)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_366)).tparams == NULL))) {
F->result_ = f_ser_name_367((*(P1050)rt_nil_check(F->t_366)).under);
goto ret_;
}
if (f_seen_name_440(g_mcopies_1128, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("fw_", 3), (((P1037)rt_nil_check(F->key_1686))->all)); b_; }))) {
F->result_ = (((P1037)rt_nil_check(F->key_1686))->all);
goto ret_;
}
{ R1049 *cell1692 = rt_alloc(sizeof(R1049));
(*cell1692).s = NULL;
(*cell1692).next = NULL;
F->l_1687 = cell1692;
}
(*(P1048)rt_nil_check(F->l_1687)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("fw_", 3), (((P1037)rt_nil_check(F->key_1686))->all)); b_; }));
(*(P1048)rt_nil_check(F->l_1687)).next = g_mcopies_1128;
g_mcopies_1128 = F->l_1687;
f_put_27(g_out_protos_1093, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void fw_", 15), (((P1037)rt_nil_check(F->key_1686))->all)), rt_str("(rt_r_buf *b, ", 14)), F->ct_1685), rt_str(" v);", 4)); b_; }));
f_put_27(g_out_protos_1093, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->ct_1685), rt_str(" fr_", 4)), (((P1037)rt_nil_check(F->key_1686))->all)), rt_str("(const unsigned char **q);", 26)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void fw_", 15), (((P1037)rt_nil_check(F->key_1686))->all)), rt_str("(rt_r_buf *b, ", 14)), F->ct_1685), rt_str(" v) {", 5)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_ser_write_370(F->t_366, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v", 1); b_; }))); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->ct_1685), rt_str(" fr_", 4)), (((P1037)rt_nil_check(F->key_1686))->all)), rt_str("(const unsigned char **q) {", 27)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->ct_1685), rt_str(" v = {0};", 9)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_ser_read_373(F->t_366, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v", 1); b_; }))); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return v;", 11); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
F->result_ = (((P1037)rt_nil_check(F->key_1686))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_ser_write_370(P1050 t_368, rstr *v_369) {
  struct f_ser_write_370fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_368 = t_368;
F->v_369 = v_369;
if ((((*(P1050)rt_nil_check(F->t_368)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_368)).tparams == NULL))) {
F->result_ = f_ser_write_370((*(P1050)rt_nil_check(F->t_368)).under, &(*F->v_369));
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_368)).kind == (((rt_int)15LL)))) {
F->p_1693 = NULL;
F->p_1693 = (*(P1050)rt_nil_check(F->t_368)).tparams;
F->r_1694 = NULL;
F->r_1694 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->p_1693 != NULL)) {
F->r_1694 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1694))->all), rt_str("rt_r_buf_put(b, &", 17)), (*F->v_369)), rt_str(".p_", 3)), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1693)).name))->all))), rt_str(", sizeof ", 9)), (*F->v_369)), rt_str(".p_", 3)), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1693)).name))->all))), rt_str("); ", 3)); b_; }));
F->p_1693 = (*(P1044)rt_nil_check(F->p_1693)).next;
}
F->result_ = rt_str_cat((((P1037)rt_nil_check(F->r_1694))->all), f_ser_write_370((*(P1050)rt_nil_check(F->t_368)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->v_369), rt_str(".all", 4)); b_; })));
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_368)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_buf_put(b, &", 17), (*F->v_369)), rt_str(".len, sizeof(rt_int)); rt_r_buf_put(b, ", 39)), (*F->v_369)), rt_str(".p, (size_t)", 12)), (*F->v_369)), rt_str(".len);", 6));
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->t_368)).kind == (((rt_int)16LL))) && f_sparse_set_308(F->t_368))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_buf_put(b, &", 17), (*F->v_369)), rt_str(".neg, sizeof(int)); rt_r_buf_put(b, &", 37)), (*F->v_369)), rt_str(".n, sizeof(rt_int)); ", 21)), rt_str("rt_r_buf_put(b, ", 16)), (*F->v_369)), rt_str(".e, sizeof(rt_int) * (size_t)", 29)), (*F->v_369)), rt_str(".n);", 4));
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_368)).kind == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_buf_yset(b, ", 17), (*F->v_369)), rt_str(");", 2));
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_368)).kind == (((rt_int)6LL)))) {
F->r_1695 = NULL;
F->r_1695 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->i_1696 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("si", 2); b_; })));
{ rt_int lo1698 = ((rt_int)1LL), hi1699 = (*(P1050)rt_nil_check(F->t_368)).ndim;
for (rt_int it1700 = lo1698; it1700 <= hi1699; it1700++) {
F->k_1697 = it1700;
F->r_1695 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1695))->all), rt_str("rt_r_buf_put(b, &", 17)), (*F->v_369)), rt_str(".", 1)), f_dim_lo_242(F->k_1697)), rt_str(", sizeof(rt_int)); rt_r_buf_put(b, &", 36)), (*F->v_369)), rt_str(".", 1)), f_dim_hi_244(F->k_1697)), rt_str(", sizeof(rt_int)); ", 19)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1695))->all), rt_str("for (rt_int ", 12)), F->i_1696), rt_str(" = 0; ", 6)), F->i_1696), rt_str(" < ", 3)), f_acnt_249(F->t_368, &(*F->v_369))), rt_str("; ", 2)), F->i_1696), rt_str("++) { ", 6)), f_ser_write_370((*(P1050)rt_nil_check(F->t_368)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->v_369), rt_str(".p[", 3)), F->i_1696), rt_str("]", 1)); b_; }))), rt_str(" }", 2));
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_368)).kind == (((rt_int)7LL)))) {
F->f_1701 = NULL;
F->f_1701 = (*(P1050)rt_nil_check(F->t_368)).fields;
F->r_1702 = NULL;
F->r_1702 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1701 != NULL)) {
F->r_1702 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1702))->all), f_ser_write_370((*(P1052)rt_nil_check(F->f_1701)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->v_369), rt_str(".", 1)), f_field_c_17(&(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_1701)).name))->all))); b_; }))), rt_str(" ", 1)); b_; }));
F->f_1701 = (*(P1052)rt_nil_check(F->f_1701)).next;
}
F->result_ = (((P1037)rt_nil_check(F->r_1702))->all);
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_368)).kind == (((rt_int)17LL)))) {
F->f_1703 = NULL;
F->f_1703 = (*(P1050)rt_nil_check(F->t_368)).fields;
F->i_1704 = ((rt_int)0LL);
F->r_1705 = NULL;
F->r_1705 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_buf_put(b, &", 17), (*F->v_369)), rt_str(".tag, sizeof(int)); switch (", 28)), (*F->v_369)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1703 != NULL)) {
F->r_1705 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1705))->all), rt_str(" case ", 6)), f_itos_7(F->i_1704)), rt_str(": ", 2)), f_ser_write_370((*(P1052)rt_nil_check(F->f_1703)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->v_369), rt_str(".u.", 3)), f_field_c_17(&(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_1703)).name))->all))); b_; }))), rt_str(" break;", 7)); b_; }));
F->i_1704 = rt_add(F->i_1704, ((rt_int)1LL));
F->f_1703 = (*(P1052)rt_nil_check(F->f_1703)).next;
}
F->result_ = rt_str_cat((((P1037)rt_nil_check(F->r_1705))->all), rt_str(" }", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_buf_put(b, &", 17), (*F->v_369)), rt_str(", sizeof ", 9)), (*F->v_369)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_ser_read_373(P1050 t_371, rstr *v_372) {
  struct f_ser_read_373fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_371 = t_371;
F->v_372 = v_372;
if ((((*(P1050)rt_nil_check(F->t_371)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_371)).tparams == NULL))) {
F->result_ = f_ser_read_373((*(P1050)rt_nil_check(F->t_371)).under, &(*F->v_372));
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_371)).kind == (((rt_int)15LL)))) {
F->p_1706 = NULL;
F->p_1706 = (*(P1050)rt_nil_check(F->t_371)).tparams;
F->r_1707 = NULL;
F->r_1707 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->p_1706 != NULL)) {
F->r_1707 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1707))->all), rt_str("rt_r_buf_get(q, &", 17)), (*F->v_372)), rt_str(".p_", 3)), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1706)).name))->all))), rt_str(", sizeof ", 9)), (*F->v_372)), rt_str(".p_", 3)), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1706)).name))->all))), rt_str("); ", 3)); b_; }));
F->p_1706 = (*(P1044)rt_nil_check(F->p_1706)).next;
}
F->result_ = rt_str_cat((((P1037)rt_nil_check(F->r_1707))->all), f_ser_read_373((*(P1050)rt_nil_check(F->t_371)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->v_372), rt_str(".all", 4)); b_; })));
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_371)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int n_; rt_r_buf_get(q, &n_, sizeof n_); ", 46), (*F->v_372)), rt_str(" = rt_str_new(n_); rt_r_buf_get(q, ", 35)), (*F->v_372)), rt_str(".p, (size_t)n_); }", 18));
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->t_371)).kind == (((rt_int)16LL))) && f_sparse_set_308(F->t_371))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_buf_get(q, &", 17), (*F->v_372)), rt_str(".neg, sizeof(int)); rt_r_buf_get(q, &", 37)), (*F->v_372)), rt_str(".n, sizeof(rt_int)); ", 21)), (*F->v_372)), rt_str(".e = rt_alloc(sizeof(rt_int) * (size_t)", 39)), (*F->v_372)), rt_str(".n + 1); rt_r_buf_get(q, ", 25)), (*F->v_372)), rt_str(".e, sizeof(rt_int) * (size_t)", 29)), (*F->v_372)), rt_str(".n);", 4));
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_371)).kind == (((rt_int)16LL)))) {
F->result_ = rt_str_cat((*F->v_372), rt_str(" = rt_r_buf_get_yset(q);", 24));
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_371)).kind == (((rt_int)6LL)))) {
F->r_1708 = NULL;
F->r_1708 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->i_1709 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("si", 2); b_; })));
{ rt_int lo1711 = ((rt_int)1LL), hi1712 = (*(P1050)rt_nil_check(F->t_371)).ndim;
for (rt_int it1713 = lo1711; it1713 <= hi1712; it1713++) {
F->k_1710 = it1713;
F->r_1708 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1708))->all), rt_str("rt_r_buf_get(q, &", 17)), (*F->v_372)), rt_str(".", 1)), f_dim_lo_242(F->k_1710)), rt_str(", sizeof(rt_int)); rt_r_buf_get(q, &", 36)), (*F->v_372)), rt_str(".", 1)), f_dim_hi_244(F->k_1710)), rt_str(", sizeof(rt_int)); ", 19)); b_; }));
}
}
if (((*(P1050)rt_nil_check(F->t_371)).ndim == ((rt_int)1LL))) {
F->r_1708 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1708))->all), (*F->v_372)), rt_str(".lo2 = ", 7)), (*F->v_372)), rt_str(".hi2 = 1; ", 10)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1708))->all), (*F->v_372)), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_234((*(P1050)rt_nil_check(F->t_371)).elem)), rt_str(") * (size_t)", 12)), f_acnt_249(F->t_371, &(*F->v_372))), rt_str(" + 1); for (rt_int ", 19)), F->i_1709), rt_str(" = 0; ", 6)), F->i_1709), rt_str(" < ", 3)), f_acnt_249(F->t_371, &(*F->v_372))), rt_str("; ", 2)), F->i_1709), rt_str("++) { ", 6)), f_ser_read_373((*(P1050)rt_nil_check(F->t_371)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->v_372), rt_str(".p[", 3)), F->i_1709), rt_str("]", 1)); b_; }))), rt_str(" }", 2));
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_371)).kind == (((rt_int)7LL)))) {
F->f_1714 = NULL;
F->f_1714 = (*(P1050)rt_nil_check(F->t_371)).fields;
F->r_1715 = NULL;
F->r_1715 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1714 != NULL)) {
F->r_1715 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1715))->all), f_ser_read_373((*(P1052)rt_nil_check(F->f_1714)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->v_372), rt_str(".", 1)), f_field_c_17(&(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_1714)).name))->all))); b_; }))), rt_str(" ", 1)); b_; }));
F->f_1714 = (*(P1052)rt_nil_check(F->f_1714)).next;
}
F->result_ = (((P1037)rt_nil_check(F->r_1715))->all);
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_371)).kind == (((rt_int)17LL)))) {
F->f_1716 = NULL;
F->f_1716 = (*(P1050)rt_nil_check(F->t_371)).fields;
F->i_1717 = ((rt_int)0LL);
F->r_1718 = NULL;
F->r_1718 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_buf_get(q, &", 17), (*F->v_372)), rt_str(".tag, sizeof(int)); switch (", 28)), (*F->v_372)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1716 != NULL)) {
F->r_1718 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1718))->all), rt_str(" case ", 6)), f_itos_7(F->i_1717)), rt_str(": ", 2)), f_ser_read_373((*(P1052)rt_nil_check(F->f_1716)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->v_372), rt_str(".u.", 3)), f_field_c_17(&(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_1716)).name))->all))); b_; }))), rt_str(" break;", 7)); b_; }));
F->i_1717 = rt_add(F->i_1717, ((rt_int)1LL));
F->f_1716 = (*(P1052)rt_nil_check(F->f_1716)).next;
}
F->result_ = rt_str_cat((((P1037)rt_nil_check(F->r_1718))->all), rt_str(" }", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_buf_get(q, &", 17), (*F->v_372)), rt_str(", sizeof ", 9)), (*F->v_372)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_uninit_value_375(P1050 t_374) {
  struct f_uninit_value_375fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_374 = t_374;
if (((*(P1050)rt_nil_check(F->t_374)).kind == (((rt_int)1LL)))) {
F->result_ = rt_str("RT_R_IUNDEF", 11);
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->t_374)).kind == (((rt_int)4LL))) || ((*(P1050)rt_nil_check(F->t_374)).kind == (((rt_int)2LL))))) {
F->result_ = rt_str("RT_R_EUNDEF", 11);
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_374)).kind == (((rt_int)3LL)))) {
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

static rstr f_init_chk_378(P1050 t_376, rstr *v_377) {
  struct f_init_chk_378fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_376 = t_376;
F->v_377 = v_377;
F->b_1719 = NULL;
F->b_1719 = f_base_of_223(F->t_376);
if (f_suppressed_527(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))) {
F->result_ = (*F->v_377);
goto ret_;
} else if (((*(P1050)rt_nil_check(F->b_1719)).kind == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_ichk(", 10), (*F->v_377)), rt_str(")", 1));
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->b_1719)).kind == (((rt_int)4LL))) || ((*(P1050)rt_nil_check(F->b_1719)).kind == (((rt_int)2LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_echk(", 10), (*F->v_377)), rt_str(")", 1));
goto ret_;
} else if (((*(P1050)rt_nil_check(F->b_1719)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fchk(", 10), (*F->v_377)), rt_str(")", 1));
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->b_1719)).kind == (((rt_int)5LL))) && (f_list_len_71((*(P1050)rt_nil_check(f_base_of_223(f_str_elem_218(F->b_1719)))).lits) < ((rt_int)256LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_schk(", 10), (*F->v_377)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_377);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_manifest_381(P1044 e_379, int *ok_380) {
  struct f_manifest_381fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_379 = e_379;
F->ok_380 = ok_380;
F->ok_380v = *F->ok_380;
F->v_1720 = NULL;
F->v_1720 = f_meval_390(F->e_379, &F->ok_380v);
if ((F->ok_380v && ((*(P1063)rt_nil_check(F->v_1720)).kind == (((rt_int)1LL))))) {
F->result_ = (*(P1063)rt_nil_check(F->v_1720)).i;
goto ret_;
}
F->ok_380v = 0;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_380v)) (*F->ok_380) = F->ok_380v;
  RT_FPOP();
  return F->result_;
}

static P1063 f_mk_mval_384(rt_int kind_382, rt_int i_383) {
  struct f_mk_mval_384fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_382 = kind_382;
F->i_383 = i_383;
F->v_1721 = NULL;
{ R1064 *cell1722 = rt_alloc(sizeof(R1064));
(*cell1722).s = NULL;
(*cell1722).t = NULL;
F->v_1721 = cell1722;
}
(*(P1063)rt_nil_check(F->v_1721)).kind = F->kind_382;
(*(P1063)rt_nil_check(F->v_1721)).i = F->i_383;
F->result_ = F->v_1721;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_ipow_387(rt_int a_385, rt_int b_386) {
  struct f_ipow_387fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_385 = a_385;
F->b_386 = b_386;
F->r_1723 = ((rt_int)1LL);
{ rt_int lo1725 = ((rt_int)1LL), hi1726 = F->b_386;
for (rt_int it1727 = lo1725; it1727 <= hi1726; it1727++) {
F->i_1724 = it1727;
F->r_1723 = rt_mul(F->r_1723, F->a_385);
}
}
F->result_ = F->r_1723;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1063 f_meval_390(P1044 e_388, int *ok_389) {
  struct f_meval_390fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_388 = e_388;
F->ok_389 = ok_389;
F->ok_389v = *F->ok_389;
F->a_1728 = NULL;
F->b_1729 = NULL;
F->op_1731 = NULL;
F->ok_389v = 0;
if ((F->e_388 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((*(P1044)rt_nil_check(F->e_388)).kind == (((rt_int)1LL)))) {
F->ok_389v = 1;
F->result_ = f_mk_mval_384((((rt_int)1LL)), (*(P1044)rt_nil_check(F->e_388)).ival);
goto ret_;
} else if (((*(P1044)rt_nil_check(F->e_388)).kind == (((rt_int)5LL)))) {
F->ok_389v = 1;
F->result_ = f_mk_mval_384((((rt_int)2LL)), (*(P1044)rt_nil_check(F->e_388)).ival);
goto ret_;
} else if (((*(P1044)rt_nil_check(F->e_388)).kind == (((rt_int)2LL)))) {
F->a_1728 = f_mk_mval_384((((rt_int)3LL)), ((rt_int)0LL));
{ rt_frame xf1732;
if (RT_TRY(xf1732)) {
(*(P1063)rt_nil_check(F->a_1728)).f = rt_r_float_of_str((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_388)).name))->all));
F->ok_389v = 1;
RT_POP(xf1732);
} else {
RT_POP(xf1732);
int x1733 = rt_xcur;
{
F->ok_389v = 0;
}
}
}
F->result_ = F->a_1728;
goto ret_;
} else if (((*(P1044)rt_nil_check(F->e_388)).kind == (((rt_int)3LL)))) {
F->ok_389v = 1;
F->a_1728 = f_mk_mval_384((((rt_int)5LL)), ((rt_int)0LL));
(*(P1063)rt_nil_check(F->a_1728)).s = (*(P1044)rt_nil_check(F->e_388)).name;
F->result_ = F->a_1728;
goto ret_;
} else if (((*(P1044)rt_nil_check(F->e_388)).kind == (((rt_int)4LL)))) {
if ((f_lit_index_265((*(P1050)rt_nil_check(g_ty_ascii_1132)).lits, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_388)).name))->all)) >= ((rt_int)0LL))) {
F->ok_389v = 1;
F->a_1728 = f_mk_mval_384((((rt_int)4LL)), f_lit_index_265((*(P1050)rt_nil_check(g_ty_ascii_1132)).lits, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_388)).name))->all)));
(*(P1063)rt_nil_check(F->a_1728)).t = g_ty_ascii_1132;
(*(P1063)rt_nil_check(F->a_1728)).s = (*(P1044)rt_nil_check(F->e_388)).name;
F->result_ = F->a_1728;
goto ret_;
}
F->a_1728 = f_mk_mval_384((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P1063)rt_nil_check(F->a_1728)).s = (*(P1044)rt_nil_check(F->e_388)).name;
F->ok_389v = 1;
F->result_ = F->a_1728;
goto ret_;
} else if (((*(P1044)rt_nil_check(F->e_388)).kind == (((rt_int)17LL)))) {
F->result_ = f_meval_390((*(P1044)rt_nil_check(F->e_388)).a, &F->ok_389v);
goto ret_;
} else if (((*(P1044)rt_nil_check(F->e_388)).kind == (((rt_int)7LL)))) {
F->y_1734 = NULL;
F->y_1734 = f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_388)).name))->all));
if ((((F->y_1734 != NULL) && ((*(P1054)rt_nil_check(F->y_1734)).kind == (((rt_int)2LL)))) && ((*(P1054)rt_nil_check(F->y_1734)).mv != NULL))) {
F->ok_389v = 1;
F->result_ = (*(P1054)rt_nil_check(F->y_1734)).mv;
goto ret_;
} else if ((((F->y_1734 != NULL) && ((*(P1054)rt_nil_check(F->y_1734)).kind == (((rt_int)2LL)))) && (*(P1054)rt_nil_check(F->y_1734)).hasmv)) {
F->ok_389v = 1;
F->result_ = f_mk_mval_384((((rt_int)1LL)), (*(P1054)rt_nil_check(F->y_1734)).mvalue);
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if (((*(P1044)rt_nil_check(F->e_388)).kind == (((rt_int)8LL)))) {
F->a_1728 = f_meval_390((*(P1044)rt_nil_check(F->e_388)).a, &F->ok_389v);
if ((!F->ok_389v)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_388)).name))->all), rt_str("NOT", 3)) && ((*(P1063)rt_nil_check(F->a_1728)).kind == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_384((((rt_int)2LL)), rt_sub(((rt_int)1LL), (*(P1063)rt_nil_check(F->a_1728)).i));
goto ret_;
} else if ((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_388)).name))->all), rt_str("-", 1)) && ((*(P1063)rt_nil_check(F->a_1728)).kind == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_384((((rt_int)1LL)), rt_neg((*(P1063)rt_nil_check(F->a_1728)).i));
goto ret_;
} else if ((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_388)).name))->all), rt_str("-", 1)) && ((*(P1063)rt_nil_check(F->a_1728)).kind == (((rt_int)3LL))))) {
F->b_1729 = f_mk_mval_384((((rt_int)3LL)), ((rt_int)0LL));
(*(P1063)rt_nil_check(F->b_1729)).f = (-(*(P1063)rt_nil_check(F->a_1728)).f);
F->result_ = F->b_1729;
goto ret_;
} else if (((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_388)).name))->all), rt_str("+", 1)) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_388)).name))->all), rt_str("-", 1))) && (((*(P1063)rt_nil_check(F->a_1728)).kind == (((rt_int)1LL))) || ((*(P1063)rt_nil_check(F->a_1728)).kind == (((rt_int)3LL)))))) {
F->result_ = F->a_1728;
goto ret_;
}
F->ok_389v = 0;
F->result_ = NULL;
goto ret_;
} else if ((((*(P1044)rt_nil_check(F->e_388)).kind != (((rt_int)9LL))) || f_user_defined_405(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_388)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1731 = (*(P1044)rt_nil_check(F->e_388)).name;
F->a_1728 = f_meval_390((*(P1044)rt_nil_check(F->e_388)).a, &F->ok_389v);
F->b_1729 = f_meval_390((*(P1044)rt_nil_check(F->e_388)).b, &F->ok2_1730);
F->ok_389v = (F->ok_389v && F->ok2_1730);
if ((!F->ok_389v)) {
F->result_ = NULL;
goto ret_;
}
F->ok_389v = 0;
if ((((*(P1063)rt_nil_check(F->a_1728)).kind == (((rt_int)1LL))) && ((*(P1063)rt_nil_check(F->b_1729)).kind == (((rt_int)1LL))))) {
F->ok_389v = 1;
if (rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_384((((rt_int)1LL)), rt_add((*(P1063)rt_nil_check(F->a_1728)).i, (*(P1063)rt_nil_check(F->b_1729)).i));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_384((((rt_int)1LL)), rt_sub((*(P1063)rt_nil_check(F->a_1728)).i, (*(P1063)rt_nil_check(F->b_1729)).i));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_384((((rt_int)1LL)), rt_mul((*(P1063)rt_nil_check(F->a_1728)).i, (*(P1063)rt_nil_check(F->b_1729)).i));
goto ret_;
} else if ((rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("DIV", 3)) && ((*(P1063)rt_nil_check(F->b_1729)).i != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_384((((rt_int)1LL)), rt_div((*(P1063)rt_nil_check(F->a_1728)).i, (*(P1063)rt_nil_check(F->b_1729)).i));
goto ret_;
} else if ((rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("MOD", 3)) && ((*(P1063)rt_nil_check(F->b_1729)).i != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_384((((rt_int)1LL)), rt_mod((*(P1063)rt_nil_check(F->a_1728)).i, (*(P1063)rt_nil_check(F->b_1729)).i));
goto ret_;
} else if ((rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("**", 2)) && ((*(P1063)rt_nil_check(F->b_1729)).i >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_384((((rt_int)1LL)), f_ipow_387((*(P1063)rt_nil_check(F->a_1728)).i, (*(P1063)rt_nil_check(F->b_1729)).i));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_384((((rt_int)2LL)), f_bool_i_399(((*(P1063)rt_nil_check(F->a_1728)).i == (*(P1063)rt_nil_check(F->b_1729)).i)));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_384((((rt_int)2LL)), f_bool_i_399(((*(P1063)rt_nil_check(F->a_1728)).i != (*(P1063)rt_nil_check(F->b_1729)).i)));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_384((((rt_int)2LL)), f_bool_i_399(((*(P1063)rt_nil_check(F->a_1728)).i < (*(P1063)rt_nil_check(F->b_1729)).i)));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_384((((rt_int)2LL)), f_bool_i_399(((*(P1063)rt_nil_check(F->a_1728)).i <= (*(P1063)rt_nil_check(F->b_1729)).i)));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_384((((rt_int)2LL)), f_bool_i_399(((*(P1063)rt_nil_check(F->a_1728)).i > (*(P1063)rt_nil_check(F->b_1729)).i)));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_384((((rt_int)2LL)), f_bool_i_399(((*(P1063)rt_nil_check(F->a_1728)).i >= (*(P1063)rt_nil_check(F->b_1729)).i)));
goto ret_;
}
} else if ((((*(P1063)rt_nil_check(F->a_1728)).kind == (((rt_int)3LL))) && (((*(P1063)rt_nil_check(F->b_1729)).kind == (((rt_int)3LL))) || (((*(P1063)rt_nil_check(F->b_1729)).kind == (((rt_int)1LL))) && rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("**", 2)))))) {
F->result_ = f_float_op_395(&(((P1037)rt_nil_check(F->op_1731))->all), F->a_1728, F->b_1729, &F->ok_389v);
goto ret_;
} else if ((((*(P1063)rt_nil_check(F->a_1728)).kind == (((rt_int)2LL))) && ((*(P1063)rt_nil_check(F->b_1729)).kind == (((rt_int)2LL))))) {
F->ok_389v = 1;
if (rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_384((((rt_int)2LL)), rt_mul((*(P1063)rt_nil_check(F->a_1728)).i, (*(P1063)rt_nil_check(F->b_1729)).i));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_384((((rt_int)2LL)), f_bool_i_399((rt_add((*(P1063)rt_nil_check(F->a_1728)).i, (*(P1063)rt_nil_check(F->b_1729)).i) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("XOR", 3)) || rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_384((((rt_int)2LL)), f_bool_i_399(((*(P1063)rt_nil_check(F->a_1728)).i != (*(P1063)rt_nil_check(F->b_1729)).i)));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_384((((rt_int)2LL)), f_bool_i_399(((*(P1063)rt_nil_check(F->a_1728)).i == (*(P1063)rt_nil_check(F->b_1729)).i)));
goto ret_;
}
} else if (((((*(P1063)rt_nil_check(F->a_1728)).kind == (((rt_int)4LL))) && ((*(P1063)rt_nil_check(F->b_1729)).kind == (((rt_int)4LL)))) && (rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("=", 1)) || rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("/=", 2))))) {
F->ok_389v = 1;
if (rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_384((((rt_int)2LL)), f_bool_i_399(rt_str_eq((((P1037)rt_nil_check((*(P1063)rt_nil_check(F->a_1728)).s))->all), (((P1037)rt_nil_check((*(P1063)rt_nil_check(F->b_1729)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_384((((rt_int)2LL)), f_bool_i_399((!rt_str_eq((((P1037)rt_nil_check((*(P1063)rt_nil_check(F->a_1728)).s))->all), (((P1037)rt_nil_check((*(P1063)rt_nil_check(F->b_1729)).s))->all)))));
goto ret_;
} else if (((((*(P1063)rt_nil_check(F->a_1728)).kind == (((rt_int)5LL))) && ((*(P1063)rt_nil_check(F->b_1729)).kind == (((rt_int)5LL)))) && (rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("=", 1)) || rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("/=", 2))))) {
F->ok_389v = 1;
if (rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_384((((rt_int)2LL)), f_bool_i_399(rt_str_eq((((P1037)rt_nil_check((*(P1063)rt_nil_check(F->a_1728)).s))->all), (((P1037)rt_nil_check((*(P1063)rt_nil_check(F->b_1729)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_384((((rt_int)2LL)), f_bool_i_399((!rt_str_eq((((P1037)rt_nil_check((*(P1063)rt_nil_check(F->a_1728)).s))->all), (((P1037)rt_nil_check((*(P1063)rt_nil_check(F->b_1729)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P1037)rt_nil_check(F->op_1731))->all), rt_str("&", 1)) && (((*(P1063)rt_nil_check(F->a_1728)).kind == (((rt_int)5LL))) || ((*(P1063)rt_nil_check(F->a_1728)).t == g_ty_ascii_1132))) && (((*(P1063)rt_nil_check(F->b_1729)).kind == (((rt_int)5LL))) || ((*(P1063)rt_nil_check(F->b_1729)).t == g_ty_ascii_1132)))) {
F->r_1735 = NULL;
F->r_1735 = f_mk_mval_384((((rt_int)5LL)), ((rt_int)0LL));
F->ok_389v = 1;
(*(P1063)rt_nil_check(F->r_1735)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_401(F->a_1728), f_mstr_401(F->b_1729)); b_; }));
F->result_ = F->r_1735;
goto ret_;
}
F->ok_389v = 0;
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_389v)) (*F->ok_389) = F->ok_389v;
  RT_FPOP();
  return F->result_;
}

static P1063 f_float_op_395(rstr *op_391, P1063 a_392, P1063 b_393, int *ok_394) {
  struct f_float_op_395fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_391 = op_391;
F->a_392 = a_392;
F->b_393 = b_393;
F->ok_394 = ok_394;
F->ok_394v = *F->ok_394;
F->r_1736 = NULL;
F->r_1736 = f_mk_mval_384((((rt_int)3LL)), ((rt_int)0LL));
F->ok_394v = 1;
{ rt_frame xf1737;
if (RT_TRY(xf1737)) {
if (rt_str_eq((*F->op_391), rt_str("+", 1))) {
(*(P1063)rt_nil_check(F->r_1736)).f = rt_r_fovf((*(P1063)rt_nil_check(F->a_392)).f + (*(P1063)rt_nil_check(F->b_393)).f);
} else if (rt_str_eq((*F->op_391), rt_str("-", 1))) {
(*(P1063)rt_nil_check(F->r_1736)).f = rt_r_fovf((*(P1063)rt_nil_check(F->a_392)).f - (*(P1063)rt_nil_check(F->b_393)).f);
} else if (rt_str_eq((*F->op_391), rt_str("*", 1))) {
(*(P1063)rt_nil_check(F->r_1736)).f = rt_r_fovf((*(P1063)rt_nil_check(F->a_392)).f * (*(P1063)rt_nil_check(F->b_393)).f);
} else if (rt_str_eq((*F->op_391), rt_str("/", 1))) {
(*(P1063)rt_nil_check(F->r_1736)).f = rt_r_fovf(rt_fdiv((*(P1063)rt_nil_check(F->a_392)).f, (*(P1063)rt_nil_check(F->b_393)).f));
} else if (rt_str_eq((*F->op_391), rt_str("**", 2))) {
(*(P1063)rt_nil_check(F->r_1736)).f = rt_r_fpow((*(P1063)rt_nil_check(F->a_392)).f, (*(P1063)rt_nil_check(F->b_393)).i);
} else {
(*(P1063)rt_nil_check(F->r_1736)).kind = (((rt_int)2LL));
if (rt_str_eq((*F->op_391), rt_str("=", 1))) {
(*(P1063)rt_nil_check(F->r_1736)).i = f_bool_i_399(((*(P1063)rt_nil_check(F->a_392)).f == (*(P1063)rt_nil_check(F->b_393)).f));
} else if (rt_str_eq((*F->op_391), rt_str("/=", 2))) {
(*(P1063)rt_nil_check(F->r_1736)).i = f_bool_i_399(((*(P1063)rt_nil_check(F->a_392)).f != (*(P1063)rt_nil_check(F->b_393)).f));
} else if (rt_str_eq((*F->op_391), rt_str("<", 1))) {
(*(P1063)rt_nil_check(F->r_1736)).i = f_bool_i_399(((*(P1063)rt_nil_check(F->a_392)).f < (*(P1063)rt_nil_check(F->b_393)).f));
} else if (rt_str_eq((*F->op_391), rt_str("<=", 2))) {
(*(P1063)rt_nil_check(F->r_1736)).i = f_bool_i_399(((*(P1063)rt_nil_check(F->a_392)).f <= (*(P1063)rt_nil_check(F->b_393)).f));
} else if (rt_str_eq((*F->op_391), rt_str(">", 1))) {
(*(P1063)rt_nil_check(F->r_1736)).i = f_bool_i_399(((*(P1063)rt_nil_check(F->a_392)).f > (*(P1063)rt_nil_check(F->b_393)).f));
} else if (rt_str_eq((*F->op_391), rt_str(">=", 2))) {
(*(P1063)rt_nil_check(F->r_1736)).i = f_bool_i_399(((*(P1063)rt_nil_check(F->a_392)).f >= (*(P1063)rt_nil_check(F->b_393)).f));
} else {
F->ok_394v = 0;
}
}
RT_POP(xf1737);
} else {
RT_POP(xf1737);
int x1738 = rt_xcur;
{
F->ok_394v = 0;
}
}
}
F->result_ = F->r_1736;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_394v)) (*F->ok_394) = F->ok_394v;
  RT_FPOP();
  return F->result_;
}

static rstr f_bool_text_397(int b_396) {
  struct f_bool_text_397fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_396 = b_396;
if (F->b_396) {
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

static rt_int f_bool_i_399(int b_398) {
  struct f_bool_i_399fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_398 = b_398;
if (F->b_398) {
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

static rstr f_mstr_401(P1063 v_400) {
  struct f_mstr_401fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_400 = v_400;
if (((*(P1063)rt_nil_check(F->v_400)).kind == (((rt_int)5LL)))) {
F->result_ = (((P1037)rt_nil_check((*(P1063)rt_nil_check(F->v_400)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_403((*(P1063)rt_nil_check(F->v_400)).i));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ascii_char_403(rt_int i_402) {
  struct f_ascii_char_403fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_402 = i_402;
F->printable_1739 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_402 >= ((rt_int)32LL)) && (F->i_402 <= ((rt_int)126LL)))) {
F->result_ = rt_str_get(F->printable_1739, rt_sub(F->i_402, ((rt_int)31LL)));
goto ret_;
}
F->result_ = 32;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_user_defined_405(rstr *op_404) {
  struct f_user_defined_405fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_404 = op_404;
F->y_1740 = NULL;
F->y_1740 = f_lookup_163(&(*F->op_404));
F->result_ = ((F->y_1740 != NULL) && (((*(P1054)rt_nil_check(F->y_1740)).kind == (((rt_int)3LL))) || ((*(P1054)rt_nil_check(F->y_1740)).kind == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_407(P1050 t_406) {
  struct f_mcopy_407fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_406 = t_406;
F->ct_1741 = rt_str_copy(f_ctype_234(F->t_406));
F->name_1742 = rt_str_new(rt_add(((rt_int)((F->ct_1741).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1742, rt_str_cat(rt_str("mc_", 3), F->ct_1741));
F->l_1743 = NULL;
if ((!f_seen_name_440(g_mcopies_1128, &F->name_1742))) {
{ R1049 *cell1744 = rt_alloc(sizeof(R1049));
(*cell1744).s = NULL;
(*cell1744).next = NULL;
F->l_1743 = cell1744;
}
(*(P1048)rt_nil_check(F->l_1743)).s = f_mk_3(&F->name_1742);
(*(P1048)rt_nil_check(F->l_1743)).next = g_mcopies_1128;
g_mcopies_1128 = F->l_1743;
f_put_27(g_out_protos_1093, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1742), rt_str("(void *d, const void *s);", 25)); b_; }));
if ((((*(P1050)rt_nil_check(F->t_406)).kind == (((rt_int)15LL))) && f_top_level_421((*(P1050)rt_nil_check(F->t_406)).assignp))) {
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1742), rt_str("(void *d, const void *s) { ", 27)), f_user_call2_415((*(P1050)rt_nil_check(F->t_406)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(", 2), F->ct_1741), rt_str(" *)d", 4)); b_; }), 1, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1741), rt_str(" *)s", 4)); b_; }), 0)), rt_str("; }", 3)); b_; }));
} else {
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1742), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1741), rt_str(" *)d = ", 7)), f_copy_code_429(F->t_406, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1741), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
}
F->result_ = F->name_1742;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_409(P1050 t_408) {
  struct f_composite_409fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_408 = t_408;
F->result_ = (((((*(P1050)rt_nil_check(F->t_408)).kind == (((rt_int)6LL))) || ((*(P1050)rt_nil_check(F->t_408)).kind == (((rt_int)7LL)))) || ((*(P1050)rt_nil_check(F->t_408)).kind == (((rt_int)17LL)))) || (((*(P1050)rt_nil_check(F->t_408)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_408)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_call2_415(P1054 y_410, rstr *a_411, int lv_a_412, rstr *b_413, int lv_b_414) {
  struct f_user_call2_415fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_410 = y_410;
F->a_411 = a_411;
F->lv_a_412 = lv_a_412;
F->b_413 = b_413;
F->lv_b_414 = lv_b_414;
F->args_1745 = NULL;
F->args_1745 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1054)rt_nil_check(F->y_410)).level > ((rt_int)0LL))) {
F->args_1745 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1747 = ((rt_int)1LL), hi1748 = rt_sub(g_cur_level_1101, (*(P1054)rt_nil_check(F->y_410)).level);
for (rt_int it1749 = lo1747; it1749 <= hi1748; it1749++) {
F->i_1746 = it1749;
F->args_1745 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->args_1745))->all), rt_str("->up", 4)); b_; }));
}
}
F->args_1745 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->args_1745))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_410)).cname))->all), rt_str("(", 1)), (((P1037)rt_nil_check(F->args_1745))->all)), f_user_arg_419((*(P1054)rt_nil_check(F->y_410)).params, &(*F->a_411), F->lv_a_412)), rt_str(", ", 2)), f_user_arg_419((*(P1056)rt_nil_check((*(P1054)rt_nil_check(F->y_410)).params)).next, &(*F->b_413), F->lv_b_414)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_arg_419(P1056 pm_416, rstr *v_417, int lv_418) {
  struct f_user_arg_419fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pm_416 = pm_416;
F->v_417 = v_417;
F->lv_418 = lv_418;
if (((*(P1056)rt_nil_check(F->pm_416)).mode == (((rt_int)1LL)))) {
F->result_ = f_copy_code_429((*(P1056)rt_nil_check(F->pm_416)).t, &(*F->v_417));
goto ret_;
} else if (F->lv_418) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("&(", 2), (*F->v_417)), rt_str(")", 1));
goto ret_;
}
{
F->ct_1750 = rt_str_copy(f_ctype_234((*(P1056)rt_nil_check(F->pm_416)).t));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1750), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1750), rt_str(")); *b_ = ", 10)), (*F->v_417)), rt_str("; b_; })", 8));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_top_level_421(P1054 y_420) {
  struct f_top_level_421fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_420 = y_420;
F->result_ = ((F->y_420 != NULL) && ((*(P1054)rt_nil_check(F->y_420)).level == ((rt_int)0LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_426(rstr *lval_422, P1050 t_423, rstr *v_424, P1046 c_425) {
  struct f_assign_code_426fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_422 = lval_422;
F->t_423 = t_423;
F->v_424 = v_424;
F->c_425 = c_425;
if (((((*(P1050)rt_nil_check(F->t_423)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_423)).assignp != NULL)) && (g_in_func_1100 || f_top_level_421((*(P1050)rt_nil_check(F->t_423)).assignp)))) {
F->result_ = rt_str_cat(f_user_call2_415((*(P1050)rt_nil_check(F->t_423)).assignp, &(*F->lval_422), 1, &(*F->v_424), 0), rt_str(";", 1));
goto ret_;
}
if ((((*(P1050)rt_nil_check(F->t_423)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_423)).tparams == NULL))) {
F->result_ = f_assign_code_426(&(*F->lval_422), (*(P1050)rt_nil_check(F->t_423)).under, &(*F->v_424), F->c_425);
goto ret_;
}
if (((((*(P1050)rt_nil_check(F->t_423)).kind == (((rt_int)17LL))) && (F->c_425 != NULL)) && ((*(P1046)rt_nil_check(F->c_425)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->t_423)), rt_str(" u_ = ", 6)), (*F->v_424)), rt_str("; if (u_.tag != (", 17)), (((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_425)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_234(F->t_423)), rt_str("(&", 2)), (*F->lval_422)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_409(F->t_423)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_234(F->t_423)), rt_str("(&", 2)), (*F->lval_422)), rt_str(", ", 2)), (*F->v_424)), rt_str(");", 2));
goto ret_;
}
if (((*(P1050)rt_nil_check(F->t_423)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_422)), rt_str(", ", 2)), (*F->v_424)), rt_str(");", 2));
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->t_423)).kind == (((rt_int)6LL))) || ((*(P1050)rt_nil_check(F->t_423)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_234(F->t_423)), rt_str("(&", 2)), (*F->lval_422)), rt_str(", ", 2)), (*F->v_424)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_422), rt_str(" = ", 3)), f_checked_213(F->t_423, F->c_425, &(*F->v_424))), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_429(P1050 t_427, rstr *v_428) {
  struct f_copy_code_429fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_427 = t_427;
F->v_428 = v_428;
if ((((*(P1050)rt_nil_check(F->t_427)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_427)).tparams == NULL))) {
F->result_ = f_copy_code_429((*(P1050)rt_nil_check(F->t_427)).under, &(*F->v_428));
goto ret_;
}
if (f_composite_409(F->t_427)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_234(F->t_427)), rt_str("(", 1)), (*F->v_428)), rt_str(")", 1));
goto ret_;
}
if (((*(P1050)rt_nil_check(F->t_427)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_428)), rt_str(")", 1));
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->t_427)).kind == (((rt_int)6LL))) || ((*(P1050)rt_nil_check(F->t_427)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_234(F->t_427)), rt_str("(", 1)), (*F->v_428)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_428);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_433(P1050 t_430, rstr *a_431, rstr *b_432) {
  struct f_eq_code_433fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_430 = t_430;
F->a_431 = a_431;
F->b_432 = b_432;
if (((((*(P1050)rt_nil_check(F->t_430)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_430)).eqp != NULL)) && (g_in_func_1100 || f_top_level_421((*(P1050)rt_nil_check(F->t_430)).eqp)))) {
F->result_ = f_user_call2_415((*(P1050)rt_nil_check(F->t_430)).eqp, &(*F->a_431), 0, &(*F->b_432), 0);
goto ret_;
}
if ((((*(P1050)rt_nil_check(F->t_430)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_430)).tparams == NULL))) {
F->result_ = f_eq_code_433((*(P1050)rt_nil_check(F->t_430)).under, &(*F->a_431), &(*F->b_432));
goto ret_;
}
if (f_composite_409(F->t_430)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_234(F->t_430)), rt_str("(", 1)), (*F->a_431)), rt_str(", ", 2)), (*F->b_432)), rt_str(")", 1));
goto ret_;
}
if (((*(P1050)rt_nil_check(F->t_430)).kind == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->t_430, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("eq", 2); b_; })), rt_str("(", 1)), (*F->a_431)), rt_str(", ", 2)), (*F->b_432)), rt_str(")", 1));
goto ret_;
}
if (((*(P1050)rt_nil_check(F->t_430)).kind == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_431)), rt_str(" == ", 4)), (*F->b_432)), rt_str(")", 1));
goto ret_;
}
if (((*(P1050)rt_nil_check(F->t_430)).kind == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_431)), rt_str(" == ", 4)), (*F->b_432)), rt_str(")", 1));
goto ret_;
}
if (((*(P1050)rt_nil_check(F->t_430)).kind == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P1050)rt_nil_check(F->t_430)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_431)), rt_str(", ", 2)), (*F->b_432)), rt_str(")", 1));
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->t_430)).kind == (((rt_int)6LL))) || ((*(P1050)rt_nil_check(F->t_430)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_234(F->t_430)), rt_str("(", 1)), (*F->a_431)), rt_str(", ", 2)), (*F->b_432)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_431)), rt_str(" == ", 4)), (*F->b_432)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_437(rstr *lval_434, P1050 t_435, rstr *v_436) {
  struct f_elem_assign_437fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_434 = lval_434;
F->t_435 = t_435;
F->v_436 = v_436;
F->result_ = f_assign_code_426(&(*F->lval_434), F->t_435, &(*F->v_436), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_440(P1048 l_438, rstr *s_439) {
  struct f_seen_name_440fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_438 = l_438;
F->s_439 = s_439;
F->p_1751 = NULL;
F->p_1751 = F->l_438;
while ((F->p_1751 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1048)rt_nil_check(F->p_1751)).s))->all), (*F->s_439))) {
F->result_ = 1;
goto ret_;
}
F->p_1751 = (*(P1048)rt_nil_check(F->p_1751)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_441(void) {
  struct f_emit_helpers_441fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_1752 = NULL;
F->t_1753 = NULL;
F->t_1753 = g_all_types_1089;
F->done_1754 = NULL;
while ((F->t_1753 != NULL)) {
if ((f_composite_409(F->t_1753) && (!f_seen_name_440(F->done_1754, &(((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_1753)).cname))->all))))) {
F->l_1755 = NULL;
F->c_1756 = rt_str_new(((rt_int)(((((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_1753)).cname))->all)).len)));
rt_str_assign(&F->c_1756, (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_1753)).cname))->all));
{ R1049 *cell1757 = rt_alloc(sizeof(R1049));
(*cell1757).s = NULL;
(*cell1757).next = NULL;
F->l_1755 = cell1757;
}
(*(P1048)rt_nil_check(F->l_1755)).s = (*(P1050)rt_nil_check(F->t_1753)).cname;
(*(P1048)rt_nil_check(F->l_1755)).next = F->done_1754;
F->done_1754 = F->l_1755;
f_put_27(g_out_helpers_1092, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1756), rt_str("(", 1)), F->c_1756), rt_str(" *d, ", 5)), F->c_1756), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_1092, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1756), rt_str(" cp_", 4)), F->c_1756), rt_str("(", 1)), F->c_1756), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_1092, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1756), rt_str("(", 1)), F->c_1756), rt_str(" a, ", 4)), F->c_1756), rt_str(" b);", 4)); b_; }));
f_helper_bodies_443(F->t_1753);
}
F->t_1753 = (*(P1050)rt_nil_check(F->t_1753)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_443(P1050 t_442) {
  struct f_helper_bodies_443fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_442 = t_442;
F->c_1758 = rt_str_new(((rt_int)(((((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_442)).cname))->all)).len)));
rt_str_assign(&F->c_1758, (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_442)).cname))->all));
F->b_1759 = NULL;
F->b_1759 = g_out_funcs_1095;
if (((*(P1050)rt_nil_check(F->t_442)).kind == (((rt_int)6LL)))) {
F->e_1760 = NULL;
F->e_1760 = (*(P1050)rt_nil_check(F->t_442)).elem;
F->sizes_1761 = NULL;
F->sizes_1761 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1762 = NULL;
F->bounds_1762 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1764 = ((rt_int)1LL), hi1765 = (*(P1050)rt_nil_check(F->t_442)).ndim;
for (rt_int it1766 = lo1764; it1766 <= hi1765; it1766++) {
F->k_1763 = it1766;
F->l_1767 = rt_str_copy(f_dim_lo_242(F->k_1763));
F->h_1768 = rt_str_copy(f_dim_hi_244(F->k_1763));
F->sizes_1761 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->sizes_1761))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1767), rt_str(", d->", 5)), F->h_1768), rt_str(") != RT_R_EXT(s.", 16)), F->l_1767), rt_str(", s.", 4)), F->h_1768), rt_str(")", 1)); b_; }));
F->bounds_1762 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->bounds_1762))->all), rt_str(" || a.", 6)), F->l_1767), rt_str(" != b.", 6)), F->l_1767), rt_str(" || a.", 6)), F->h_1768), rt_str(" != b.", 6)), F->h_1768); b_; }));
}
}
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1758), rt_str("(", 1)), F->c_1758), rt_str(" *d, ", 5)), F->c_1758), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P1037)rt_nil_check(F->sizes_1761))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_249(F->t_442, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_437(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1760, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_437(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1760, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1758), rt_str(" cp_", 4)), F->c_1758), rt_str("(", 1)), F->c_1758), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1758), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_234(F->e_1760)), rt_str(") * (size_t)", 12)), f_acnt_249(F->t_442, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_249(F->t_442, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_429(F->e_1760, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1758), rt_str("(", 1)), F->c_1758), rt_str(" a, ", 4)), F->c_1758), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P1037)rt_nil_check(F->bounds_1762))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_249(F->t_442, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_433(F->e_1760, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P1050)rt_nil_check(F->t_442)).kind == (((rt_int)15LL)))) {
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1758), rt_str("(", 1)), F->c_1758), rt_str(" *d, ", 5)), F->c_1758), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_186((*(P1050)rt_nil_check(F->t_442)).under) && ((*(P1050)rt_nil_check(F->t_442)).elemcons != NULL)) && ((*(P1046)rt_nil_check((*(P1050)rt_nil_check(F->t_442)).elemcons)).lo != NULL))) {
F->saved_1769 = NULL;
F->saved_1769 = g_psub_1105;
F->p_1770 = NULL;
F->p_1770 = (*(P1050)rt_nil_check(F->t_442)).tparams;
while ((F->p_1770 != NULL)) {
F->l1_1771 = NULL;
F->l2_1772 = NULL;
{ R1049 *cell1773 = rt_alloc(sizeof(R1049));
(*cell1773).s = NULL;
(*cell1773).next = NULL;
F->l1_1771 = cell1773;
}
{ R1049 *cell1774 = rt_alloc(sizeof(R1049));
(*cell1774).s = NULL;
(*cell1774).next = NULL;
F->l2_1772 = cell1774;
}
(*(P1048)rt_nil_check(F->l1_1771)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1770)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1048)rt_nil_check(F->l2_1772)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1770)).name))->all))); b_; }));
(*(P1048)rt_nil_check(F->l1_1771)).next = F->l2_1772;
(*(P1048)rt_nil_check(F->l2_1772)).next = g_psub_1105;
g_psub_1105 = F->l1_1771;
F->p_1770 = (*(P1044)rt_nil_check(F->p_1770)).next;
}
if (((*(P1050)rt_nil_check((*(P1050)rt_nil_check(F->t_442)).under)).kind == (((rt_int)3LL)))) {
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_319(&(((P1037)rt_nil_check((*(P1046)rt_nil_check((*(P1050)rt_nil_check(F->t_442)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_319(&(((P1037)rt_nil_check((*(P1046)rt_nil_check((*(P1050)rt_nil_check(F->t_442)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_319(&(((P1037)rt_nil_check((*(P1046)rt_nil_check((*(P1050)rt_nil_check(F->t_442)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_319(&(((P1037)rt_nil_check((*(P1046)rt_nil_check((*(P1050)rt_nil_check(F->t_442)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_1105 = F->saved_1769;
} else {
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_437(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P1050)rt_nil_check(F->t_442)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1758), rt_str(" cp_", 4)), F->c_1758), rt_str("(", 1)), F->c_1758), rt_str(" s) { s.all = ", 14)), f_copy_code_429((*(P1050)rt_nil_check(F->t_442)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1758), rt_str("(", 1)), F->c_1758), rt_str(" a, ", 4)), F->c_1758), rt_str(" b) { return ", 13)), f_eq_code_433((*(P1050)rt_nil_check(F->t_442)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if (((*(P1050)rt_nil_check(F->t_442)).kind == (((rt_int)17LL)))) {
F->f_1775 = NULL;
F->f_1775 = (*(P1050)rt_nil_check(F->t_442)).fields;
F->i_1776 = ((rt_int)0LL);
F->cases_as_1777 = NULL;
F->cases_as_1777 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1778 = NULL;
F->cases_cp_1778 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1779 = NULL;
F->cases_eq_1779 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1775 != NULL)) {
F->fn_1780 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_1775)).name))->all))));
F->cases_as_1777 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->cases_as_1777))->all), rt_str(" case ", 6)), f_itos_7(F->i_1776)), rt_str(": d->", 5)), F->fn_1780), rt_str(" = ", 3)), f_copy_code_429((*(P1052)rt_nil_check(F->f_1775)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1780); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1778 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->cases_cp_1778))->all), rt_str(" case ", 6)), f_itos_7(F->i_1776)), rt_str(": d.", 4)), F->fn_1780), rt_str(" = ", 3)), f_copy_code_429((*(P1052)rt_nil_check(F->f_1775)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1780); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1779 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->cases_eq_1779))->all), rt_str(" case ", 6)), f_itos_7(F->i_1776)), rt_str(": return ", 9)), f_eq_code_433((*(P1052)rt_nil_check(F->f_1775)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1780); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1780); b_; }))), rt_str(";", 1)); b_; }));
F->i_1776 = rt_add(F->i_1776, ((rt_int)1LL));
F->f_1775 = (*(P1052)rt_nil_check(F->f_1775)).next;
}
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1758), rt_str("(", 1)), F->c_1758), rt_str(" *d, ", 5)), F->c_1758), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P1037)rt_nil_check(F->cases_as_1777))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1758), rt_str(" cp_", 4)), F->c_1758), rt_str("(", 1)), F->c_1758), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1758), rt_str(" d = s; switch (s.tag) {", 24)), (((P1037)rt_nil_check(F->cases_cp_1778))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1758), rt_str("(", 1)), F->c_1758), rt_str(" a, ", 4)), F->c_1758), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P1037)rt_nil_check(F->cases_eq_1779))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1781 = NULL;
F->f_1781 = (*(P1050)rt_nil_check(F->t_442)).fields;
F->conds_1782 = NULL;
F->conds_1782 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1758), rt_str("(", 1)), F->c_1758), rt_str(" *d, ", 5)), F->c_1758), rt_str(" s) {", 5)); b_; }));
while ((F->f_1781 != NULL)) {
F->fn_1783 = rt_str_copy(f_field_c_17(&(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_1781)).name))->all)));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_437(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1783); b_; }), (*(P1052)rt_nil_check(F->f_1781)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1783); b_; }))); b_; }));
F->f_1781 = (*(P1052)rt_nil_check(F->f_1781)).next;
}
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1758), rt_str(" cp_", 4)), F->c_1758), rt_str("(", 1)), F->c_1758), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1758), rt_str(" d = s;", 7)); b_; }));
F->f_1781 = (*(P1050)rt_nil_check(F->t_442)).fields;
while ((F->f_1781 != NULL)) {
F->fn_1784 = rt_str_copy(f_field_c_17(&(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_1781)).name))->all)));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1784), rt_str(" = ", 3)), f_copy_code_429((*(P1052)rt_nil_check(F->f_1781)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1784); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1782 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->conds_1782))->all), rt_str(" && ", 4)), f_eq_code_433((*(P1052)rt_nil_check(F->f_1781)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1784); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1784); b_; }))); b_; }));
F->f_1781 = (*(P1052)rt_nil_check(F->f_1781)).next;
}
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1758), rt_str("(", 1)), F->c_1758), rt_str(" a, ", 4)), F->c_1758), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P1037)rt_nil_check(F->conds_1782))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_445(P1044 elems_444) {
  struct f_declare_body_445fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_444 = elems_444;
F->e_1785 = NULL;
F->e_1785 = F->elems_444;
while ((F->e_1785 != NULL)) {
if (((*(P1044)rt_nil_check(F->e_1785)).kind == (((rt_int)51LL)))) {
F->g_1786 = NULL;
F->g_1786 = f_new_sym_181((((rt_int)10LL)), (*(P1044)rt_nil_check(F->e_1785)).name);
(*(P1054)rt_nil_check(F->g_1786)).decl = F->e_1785;
(*(P1054)rt_nil_check(F->g_1786)).level = g_cur_level_1101;
(*(P1054)rt_nil_check(F->g_1786)).owner = g_func_sym_1112;
(*(P1054)rt_nil_check(F->g_1786)).gctx = g_fctx_1102;
f_define_168(F->g_1786, (*(P1044)rt_nil_check(F->e_1785)).line);
}
F->e_1785 = (*(P1044)rt_nil_check(F->e_1785)).next;
}
F->e_1785 = F->elems_444;
while ((F->e_1785 != NULL)) {
if ((((*(P1044)rt_nil_check(F->e_1785)).kind == (((rt_int)41LL))) && ((*(P1044)rt_nil_check(F->e_1785)).flag == ((rt_int)0LL)))) {
f_manifest_const_447(F->e_1785);
} else if (((*(P1044)rt_nil_check(F->e_1785)).kind == (((rt_int)47LL)))) {
f_gen_capsule_455(F->e_1785);
} else if ((((((*(P1044)rt_nil_check(F->e_1785)).kind == (((rt_int)48LL))) && ((*(P1044)rt_nil_check(F->e_1785)).flag != ((rt_int)1LL))) && ((*(P1044)rt_nil_check(F->e_1785)).flag != ((rt_int)3LL))) && (!f_pending_capsule_461(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1785)).name))->all))))) {
f_gen_expose_488(F->e_1785);
(*(P1044)rt_nil_check(F->e_1785)).eline = ((rt_int)1LL);
} else if (((*(P1044)rt_nil_check(F->e_1785)).kind == (((rt_int)49LL)))) {
F->y_1787 = NULL;
F->y_1787 = f_new_sym_181((((rt_int)7LL)), (*(P1044)rt_nil_check(F->e_1785)).name);
(*(P1054)rt_nil_check(F->y_1787)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1785)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_168(F->y_1787, (*(P1044)rt_nil_check(F->e_1785)).line);
f_put_27(g_out_globals_1094, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_1787)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_1097, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_1787)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1785)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if (((*(P1044)rt_nil_check(F->e_1785)).kind == (((rt_int)42LL)))) {
F->y_1788 = NULL;
F->y_1788 = f_new_sym_181((((rt_int)6LL)), (*(P1044)rt_nil_check(F->e_1785)).name);
(*(P1054)rt_nil_check(F->y_1788)).st = (*(P1044)rt_nil_check(F->e_1785)).a;
(*(P1054)rt_nil_check(F->y_1788)).decl = F->e_1785;
f_define_168(F->y_1788, (*(P1044)rt_nil_check(F->e_1785)).line);
} else if (((*(P1044)rt_nil_check(F->e_1785)).kind == (((rt_int)44LL)))) {
F->y_1789 = NULL;
F->y_1789 = f_new_sym_181((((rt_int)5LL)), (*(P1044)rt_nil_check(F->e_1785)).name);
F->t_1790 = NULL;
F->t_1790 = f_new_typ_183((((rt_int)8LL)));
(*(P1050)rt_nil_check(F->t_1790)).name = (*(P1044)rt_nil_check(F->e_1785)).name;
(*(P1050)rt_nil_check(F->t_1790)).decl = F->e_1785;
(*(P1054)rt_nil_check(F->y_1789)).t = F->t_1790;
f_define_168(F->y_1789, (*(P1044)rt_nil_check(F->e_1785)).line);
} else if (((*(P1044)rt_nil_check(F->e_1785)).kind == (((rt_int)43LL)))) {
F->y_1791 = NULL;
F->y_1791 = f_new_sym_181((((rt_int)5LL)), (*(P1044)rt_nil_check(F->e_1785)).name);
(*(P1054)rt_nil_check(F->y_1791)).st = (*(P1044)rt_nil_check(F->e_1785)).a;
(*(P1054)rt_nil_check(F->y_1791)).decl = F->e_1785;
f_define_168(F->y_1791, (*(P1044)rt_nil_check(F->e_1785)).line);
}
F->e_1785 = (*(P1044)rt_nil_check(F->e_1785)).next;
}
F->e_1785 = F->elems_444;
while ((F->e_1785 != NULL)) {
if (((((*(P1044)rt_nil_check(F->e_1785)).kind == (((rt_int)45LL))) || ((*(P1044)rt_nil_check(F->e_1785)).kind == (((rt_int)46LL)))) || ((*(P1044)rt_nil_check(F->e_1785)).kind == (((rt_int)50LL))))) {
F->y_1792 = NULL;
f_declare_subprogram_518(F->e_1785);
F->y_1792 = f_lookup_decl_165(F->e_1785);
(*(P1054)rt_nil_check(F->y_1792)).home = F->elems_444;
f_normal_function_513(F->e_1785, F->y_1792);
}
F->e_1785 = (*(P1044)rt_nil_check(F->e_1785)).next;
}
F->e_1785 = F->elems_444;
{
F->snap_1793 = NULL;
while ((F->e_1785 != NULL)) {
if (((*(P1044)rt_nil_check(F->e_1785)).kind == (((rt_int)51LL)))) {
if ((F->snap_1793 == NULL)) {
{ P1058 cell1794 = rt_alloc(sizeof *cell1794);
rt_int pv1795 = (((rt_int)4093LL));
cell1794->p_n = pv1795;
cell1794->all.lo = ((rt_int)0LL); cell1794->all.hi = pv1795;
cell1794->all.lo2 = cell1794->all.hi2 = 1;
cell1794->all.p = rt_alloc(sizeof(P1054) * (size_t)(RT_CNT(cell1794->all)) + 1);
for (rt_int i1796 = 0; i1796 < (RT_CNT(cell1794->all)); i1796++) {
cell1794->all.p[i1796] = NULL;
}
F->snap_1793 = cell1794;
}
{ rt_int lo1798 = ((rt_int)0LL), hi1799 = (((rt_int)4093LL));
for (rt_int it1800 = lo1798; it1800 <= hi1799; it1800++) {
F->i_1797 = it1800;
(((P1058)rt_nil_check(F->snap_1793))->all).p[(rt_index(F->i_1797, (((P1058)rt_nil_check(F->snap_1793))->all).lo, (((P1058)rt_nil_check(F->snap_1793))->all).hi) - (((P1058)rt_nil_check(F->snap_1793))->all).lo)] = ({ A1060 b_ = (((P1058)rt_nil_check(g_table_1084))->all); b_.p[(rt_index(F->i_1797, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1801 = NULL;
F->g_1801 = f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1785)).name))->all));
(*(P1054)rt_nil_check(F->g_1801)).env = F->snap_1793;
}
}
F->e_1785 = (*(P1044)rt_nil_check(F->e_1785)).next;
}
}
F->e_1785 = F->elems_444;
while ((F->e_1785 != NULL)) {
if ((((*(P1044)rt_nil_check(F->e_1785)).kind == (((rt_int)45LL))) && (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1785)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1785)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1802 = NULL;
F->y_1802 = f_lookup_decl_165(F->e_1785);
if (((((F->y_1802 != NULL) && ((*(P1054)rt_nil_check(F->y_1802)).params != NULL)) && ((*(P1056)rt_nil_check((*(P1054)rt_nil_check(F->y_1802)).params)).next == NULL)) && (((*(P1050)rt_nil_check((*(P1056)rt_nil_check((*(P1054)rt_nil_check(F->y_1802)).params)).t)).kind == (((rt_int)15LL))) || ((*(P1050)rt_nil_check((*(P1056)rt_nil_check((*(P1054)rt_nil_check(F->y_1802)).params)).t)).kind == (((rt_int)8LL)))))) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1785)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P1050)rt_nil_check((*(P1056)rt_nil_check((*(P1054)rt_nil_check(F->y_1802)).params)).t)).initp = F->y_1802;
} else {
(*(P1050)rt_nil_check((*(P1056)rt_nil_check((*(P1054)rt_nil_check(F->y_1802)).params)).t)).finalp = F->y_1802;
}
}
}
if (((((*(P1044)rt_nil_check(F->e_1785)).kind == (((rt_int)45LL))) && rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1785)).name))->all), rt_str(":=", 2))) || (((*(P1044)rt_nil_check(F->e_1785)).kind == (((rt_int)46LL))) && (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1785)).name))->all), rt_str("=", 1)) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1785)).name))->all), rt_str("<", 1)))))) {
F->y_1803 = NULL;
F->y_1803 = f_lookup_decl_165(F->e_1785);
if (((((((F->y_1803 != NULL) && ((*(P1054)rt_nil_check(F->y_1803)).params != NULL)) && ((*(P1056)rt_nil_check((*(P1054)rt_nil_check(F->y_1803)).params)).next != NULL)) && ((*(P1056)rt_nil_check((*(P1056)rt_nil_check((*(P1054)rt_nil_check(F->y_1803)).params)).next)).next == NULL)) && ((*(P1050)rt_nil_check((*(P1056)rt_nil_check((*(P1054)rt_nil_check(F->y_1803)).params)).t)).kind == (((rt_int)15LL)))) && f_same_221((*(P1056)rt_nil_check((*(P1054)rt_nil_check(F->y_1803)).params)).t, (*(P1056)rt_nil_check((*(P1056)rt_nil_check((*(P1054)rt_nil_check(F->y_1803)).params)).next)).t))) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1785)).name))->all), rt_str(":=", 2))) {
if (((*(P1056)rt_nil_check((*(P1054)rt_nil_check(F->y_1803)).params)).mode != (((rt_int)2LL)))) {
f_fail_23((*(P1044)rt_nil_check(F->e_1785)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the first formal of := is a VAR formal (13.2)", 45); b_; }));
}
(*(P1050)rt_nil_check((*(P1056)rt_nil_check((*(P1054)rt_nil_check(F->y_1803)).params)).t)).assignp = F->y_1803;
} else if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1785)).name))->all), rt_str("=", 1))) {
(*(P1050)rt_nil_check((*(P1056)rt_nil_check((*(P1054)rt_nil_check(F->y_1803)).params)).t)).eqp = F->y_1803;
} else {
(*(P1050)rt_nil_check((*(P1056)rt_nil_check((*(P1054)rt_nil_check(F->y_1803)).params)).t)).ltp = F->y_1803;
}
}
}
F->e_1785 = (*(P1044)rt_nil_check(F->e_1785)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_447(P1044 d_446) {
  struct f_manifest_const_447fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_446 = d_446;
F->v_1805 = NULL;
F->y_1806 = NULL;
F->t_1807 = NULL;
F->ctext_1808 = NULL;
if (((*(P1044)rt_nil_check(F->d_446)).a != NULL)) {
if ((((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->d_446)).a)).kind != (((rt_int)70LL))) || ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->d_446)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1805 = f_meval_390((*(P1044)rt_nil_check(F->d_446)).b, &F->ok_1804);
if ((!F->ok_1804)) {
goto ret_;
}
{
F->saved_1809 = NULL;
F->saved_1809 = g_code_1098;
g_code_1098 = f_new_buffer_24();
g_trial_1127 = rt_add(g_trial_1127, ((rt_int)1LL));
{ rt_frame xf1810;
if (RT_TRY(xf1810)) {
F->ctext_1808 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_815((*(P1044)rt_nil_check(F->d_446)).b, NULL, &F->t_1807)), rt_str(")", 1)); b_; }));
RT_POP(xf1810);
} else {
RT_POP(xf1810);
int x1811 = rt_xcur;
if (0 || x1811 == ex_compile_error_1) {
F->ok_1804 = 0;
} else {
rt_raise(x1811);
}
}
}
g_trial_1127 = rt_sub(g_trial_1127, ((rt_int)1LL));
F->ok_1804 = (F->ok_1804 && ((*(P1067)rt_nil_check(g_code_1098)).head == NULL));
g_code_1098 = F->saved_1809;
}
if (((!F->ok_1804) || (((*(P1044)rt_nil_check(F->d_446)).a != NULL) && ((*(P1050)rt_nil_check(F->t_1807)).kind != (((rt_int)1LL)))))) {
goto ret_;
}
if (((*(P1063)rt_nil_check(F->v_1805)).kind == (((rt_int)4LL)))) {
(*(P1063)rt_nil_check(F->v_1805)).t = F->t_1807;
(*(P1063)rt_nil_check(F->v_1805)).i = f_lit_index_265((*(P1050)rt_nil_check(f_base_of_223(F->t_1807))).lits, &(((P1037)rt_nil_check((*(P1063)rt_nil_check(F->v_1805)).s))->all));
}
(*(P1044)rt_nil_check(F->d_446)).flag = ((rt_int)1LL);
F->y_1806 = f_new_sym_181((((rt_int)2LL)), (*(P1044)rt_nil_check(F->d_446)).name);
(*(P1054)rt_nil_check(F->y_1806)).t = F->t_1807;
(*(P1054)rt_nil_check(F->y_1806)).c = f_new_cons_184();
(*(P1054)rt_nil_check(F->y_1806)).mv = F->v_1805;
if (((*(P1063)rt_nil_check(F->v_1805)).kind == (((rt_int)1LL)))) {
(*(P1054)rt_nil_check(F->y_1806)).mvalue = (*(P1063)rt_nil_check(F->v_1805)).i;
(*(P1054)rt_nil_check(F->y_1806)).hasmv = 1;
}
(*(P1054)rt_nil_check(F->y_1806)).ro_flag = 1;
(*(P1054)rt_nil_check(F->y_1806)).access = F->ctext_1808;
f_define_168(F->y_1806, (*(P1044)rt_nil_check(F->d_446)).line);
ret_:
  RT_FPOP();
  return;
}

static int f_exported_451(P1044 d_448, rstr *name_449, int *ro_450) {
  struct f_exported_451fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_448 = d_448;
F->name_449 = name_449;
F->ro_450 = ro_450;
F->ro_450v = *F->ro_450;
F->p_1812 = NULL;
F->p_1812 = (*(P1044)rt_nil_check(F->d_448)).a;
F->ro_450v = 0;
if (((*(P1044)rt_nil_check(F->d_448)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1812 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1812)).name))->all), (*F->name_449))) {
F->ro_450v = ((*(P1044)rt_nil_check(F->p_1812)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1812 = (*(P1044)rt_nil_check(F->p_1812)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ro_450v)) (*F->ro_450) = F->ro_450v;
  RT_FPOP();
  return F->result_;
}

static P1054 f_copy_sym_453(P1054 y_452) {
  struct f_copy_sym_453fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_452 = y_452;
F->z_1813 = NULL;
{ R1055 *cell1814 = rt_alloc(sizeof(R1055));
(*cell1814).name = NULL;
(*cell1814).t = NULL;
(*cell1814).c = NULL;
(*cell1814).access = NULL;
(*cell1814).cname = NULL;
(*cell1814).st = NULL;
(*cell1814).decl = NULL;
(*cell1814).params = NULL;
(*cell1814).result = NULL;
(*cell1814).members = NULL;
(*cell1814).mnext = NULL;
(*cell1814).binds = NULL;
(*cell1814).insts = NULL;
(*cell1814).env = NULL;
(*cell1814).chain = NULL;
(*cell1814).stack = NULL;
(*cell1814).owner = NULL;
(*cell1814).gctx = NULL;
(*cell1814).mv = NULL;
(*cell1814).reqs = NULL;
(*cell1814).home = NULL;
(*cell1814).capn = NULL;
(*cell1814).tbinds = NULL;
(*cell1814).loc = NULL;
(*cell1814).reqs_sym = NULL;
F->z_1813 = cell1814;
}
(*(P1054)rt_nil_check(F->z_1813)).kind = (*(P1054)rt_nil_check(F->y_452)).kind;
(*(P1054)rt_nil_check(F->z_1813)).name = (*(P1054)rt_nil_check(F->y_452)).name;
(*(P1054)rt_nil_check(F->z_1813)).t = (*(P1054)rt_nil_check(F->y_452)).t;
(*(P1054)rt_nil_check(F->z_1813)).c = (*(P1054)rt_nil_check(F->y_452)).c;
(*(P1054)rt_nil_check(F->z_1813)).access = (*(P1054)rt_nil_check(F->y_452)).access;
(*(P1054)rt_nil_check(F->z_1813)).cname = (*(P1054)rt_nil_check(F->y_452)).cname;
(*(P1054)rt_nil_check(F->z_1813)).ro_flag = (*(P1054)rt_nil_check(F->y_452)).ro_flag;
(*(P1054)rt_nil_check(F->z_1813)).mvalue = (*(P1054)rt_nil_check(F->y_452)).mvalue;
(*(P1054)rt_nil_check(F->z_1813)).hasmv = (*(P1054)rt_nil_check(F->y_452)).hasmv;
(*(P1054)rt_nil_check(F->z_1813)).st = (*(P1054)rt_nil_check(F->y_452)).st;
(*(P1054)rt_nil_check(F->z_1813)).decl = (*(P1054)rt_nil_check(F->y_452)).decl;
(*(P1054)rt_nil_check(F->z_1813)).params = (*(P1054)rt_nil_check(F->y_452)).params;
(*(P1054)rt_nil_check(F->z_1813)).result = (*(P1054)rt_nil_check(F->y_452)).result;
(*(P1054)rt_nil_check(F->z_1813)).level = (*(P1054)rt_nil_check(F->y_452)).level;
(*(P1054)rt_nil_check(F->z_1813)).byref = (*(P1054)rt_nil_check(F->y_452)).byref;
(*(P1054)rt_nil_check(F->z_1813)).members = (*(P1054)rt_nil_check(F->y_452)).members;
(*(P1054)rt_nil_check(F->z_1813)).env = (*(P1054)rt_nil_check(F->y_452)).env;
F->result_ = F->z_1813;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_455(P1044 d_454) {
  struct f_gen_capsule_455fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_454 = d_454;
F->y_1815 = NULL;
F->y_1815 = f_new_sym_181((((rt_int)8LL)), (*(P1044)rt_nil_check(F->d_454)).name);
F->saved_1816 = NULL;
F->saved_1816 = g_suppress_1118;
F->p_1817 = NULL;
F->p_1817 = (*(P1044)rt_nil_check(F->d_454)).b;
F->tail_1818 = NULL;
(*(P1054)rt_nil_check(F->y_1815)).decl = F->d_454;
while ((F->p_1817 != NULL)) {
F->pm_1819 = NULL;
{ R1057 *cell1820 = rt_alloc(sizeof(R1057));
(*cell1820).name = NULL;
(*cell1820).t = NULL;
(*cell1820).c = NULL;
(*cell1820).cfield = NULL;
(*cell1820).next = NULL;
F->pm_1819 = cell1820;
}
(*(P1056)rt_nil_check(F->pm_1819)).name = (*(P1044)rt_nil_check(F->p_1817)).name;
(*(P1056)rt_nil_check(F->pm_1819)).mode = (*(P1044)rt_nil_check(F->p_1817)).ival;
(*(P1056)rt_nil_check(F->pm_1819)).t = f_resolve_subtype_268((*(P1044)rt_nil_check(F->p_1817)).a, &(*(P1056)rt_nil_check(F->pm_1819)).c);
if ((F->tail_1818 == NULL)) {
(*(P1054)rt_nil_check(F->y_1815)).params = F->pm_1819;
} else {
(*(P1056)rt_nil_check(F->tail_1818)).next = F->pm_1819;
}
F->tail_1818 = F->pm_1819;
F->p_1817 = (*(P1044)rt_nil_check(F->p_1817)).next;
}
if ((((*(P1044)rt_nil_check(F->d_454)).b == NULL) && f_imports_variables_457(F->d_454))) {
(*(P1054)rt_nil_check(F->y_1815)).pending = 1;
} else if (((*(P1044)rt_nil_check(F->d_454)).b == NULL)) {
g_suppress_1118 = f_suppressing_525((*(P1044)rt_nil_check(F->d_454)).prags);
f_elaborate_capsule_470(F->d_454, F->y_1815, NULL, F->d_454);
g_suppress_1118 = F->saved_1816;
}
f_define_168(F->y_1815, (*(P1044)rt_nil_check(F->d_454)).line);
ret_:
  RT_FPOP();
  return;
}

static int f_imports_variables_457(P1044 d_456) {
  struct f_imports_variables_457fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_456 = d_456;
F->result_ = (((*(P1044)rt_nil_check(F->d_456)).d != NULL) || ((*(P1044)rt_nil_check(F->d_456)).flag >= ((rt_int)2LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_elaborate_pending_459(P1054 y_458) {
  struct f_elaborate_pending_459fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_458 = y_458;
F->saved_1821 = NULL;
F->saved_1821 = g_suppress_1118;
if ((*(P1054)rt_nil_check(F->y_458)).pending) {
(*(P1054)rt_nil_check(F->y_458)).pending = 0;
g_suppress_1118 = f_suppressing_525((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_458)).decl)).prags);
f_elaborate_capsule_470((*(P1054)rt_nil_check(F->y_458)).decl, F->y_458, NULL, (*(P1054)rt_nil_check(F->y_458)).decl);
g_suppress_1118 = F->saved_1821;
}
ret_:
  RT_FPOP();
  return;
}

static int f_pending_capsule_461(rstr *name_460) {
  struct f_pending_capsule_461fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_460 = name_460;
F->y_1822 = NULL;
F->y_1822 = f_lookup_163(&(*F->name_460));
F->result_ = (((F->y_1822 != NULL) && ((*(P1054)rt_nil_check(F->y_1822)).kind == (((rt_int)8LL)))) && (*(P1054)rt_nil_check(F->y_1822)).pending);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_params_465(P1044 d_462, P1044 args_463, rt_int line_464) {
  struct f_capsule_params_465fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_462 = d_462;
F->args_463 = args_463;
F->line_464 = line_464;
F->p_1823 = NULL;
F->p_1823 = (*(P1044)rt_nil_check(F->d_462)).b;
F->a_1824 = NULL;
F->a_1824 = F->args_463;
F->t_1825 = NULL;
F->vt_1826 = NULL;
F->c_1827 = NULL;
while (((F->p_1823 != NULL) && (F->a_1824 != NULL))) {
F->t_1825 = f_resolve_subtype_268((*(P1044)rt_nil_check(F->p_1823)).a, &F->c_1827);
if (((*(P1044)rt_nil_check(F->p_1823)).ival == (((rt_int)3LL)))) {
f_fail_23(F->line_464, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if ((((*(P1044)rt_nil_check(F->p_1823)).ival == (((rt_int)2LL))) || ((*(P1044)rt_nil_check(F->p_1823)).ival == (((rt_int)4LL))))) {
F->lv_1828 = NULL;
F->lc_1829 = NULL;
F->y_1831 = NULL;
F->y_1831 = f_new_sym_181((((rt_int)1LL)), (*(P1044)rt_nil_check(F->p_1823)).name);
f_lvalue_784(F->a_1824, &F->lv_1828, &F->vt_1826, &F->lc_1829, &F->ro_1830);
f_check_type_232(F->vt_1826, F->t_1825, F->line_464);
if ((F->ro_1830 && ((*(P1044)rt_nil_check(F->p_1823)).ival == (((rt_int)2LL))))) {
f_fail_23(F->line_464, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1823)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (g_in_func_1100) {
F->f_1832 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1823)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1099, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234(F->t_1825)), rt_str(" *", 2)), F->f_1832), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1832), rt_str(" = &", 4)), (((P1037)rt_nil_check(F->lv_1828))->all)), rt_str(";", 1)); b_; }));
(*(P1054)rt_nil_check(F->y_1831)).level = g_cur_level_1101;
(*(P1054)rt_nil_check(F->y_1831)).access = f_mk_3(&F->f_1832);
(*(P1054)rt_nil_check(F->y_1831)).byref = 1;
} else {
F->g_1833 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1823)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1094, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234(F->t_1825)), rt_str(" *", 2)), F->g_1833), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_1108, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1833), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1833, rt_str(" = &", 4)), (((P1037)rt_nil_check(F->lv_1828))->all)), rt_str(";", 1)); b_; }));
(*(P1054)rt_nil_check(F->y_1831)).level = ((rt_int)0LL);
(*(P1054)rt_nil_check(F->y_1831)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1833), rt_str(")", 1)); b_; }));
}
(*(P1054)rt_nil_check(F->y_1831)).t = F->t_1825;
(*(P1054)rt_nil_check(F->y_1831)).c = F->lc_1829;
(*(P1054)rt_nil_check(F->y_1831)).ro_flag = ((*(P1044)rt_nil_check(F->p_1823)).ival == (((rt_int)4LL)));
f_define_168(F->y_1831, F->line_464);
} else {
F->y_1834 = NULL;
F->y_1834 = f_new_sym_181((((rt_int)2LL)), (*(P1044)rt_nil_check(F->p_1823)).name);
F->v_1835 = rt_str_copy(f_gexpr_815(F->a_1824, F->t_1825, &F->vt_1826));
f_check_type_232(F->vt_1826, F->t_1825, F->line_464);
{
F->access_1836 = rt_str_copy(f_storage_534(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1823)).name))->all), F->t_1825));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1836, rt_str(" = ", 3)), f_copy_code_429(F->t_1825, &F->v_1835)), rt_str(";", 1)); b_; }));
f_bind_537(F->y_1834, &F->access_1836);
}
(*(P1054)rt_nil_check(F->y_1834)).t = F->t_1825;
(*(P1054)rt_nil_check(F->y_1834)).c = F->c_1827;
(*(P1054)rt_nil_check(F->y_1834)).ro_flag = 1;
f_define_168(F->y_1834, F->line_464);
}
F->p_1823 = (*(P1044)rt_nil_check(F->p_1823)).next;
F->a_1824 = (*(P1044)rt_nil_check(F->a_1824)).next;
}
if (((F->p_1823 != NULL) || (F->a_1824 != NULL))) {
f_fail_23(F->line_464, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_462)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_470(P1044 d_466, P1054 y_467, P1044 args_468, P1044 owner_469) {
  struct f_elaborate_capsule_470fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_466 = d_466;
F->y_467 = y_467;
F->args_468 = args_468;
F->owner_469 = owner_469;
F->cr_1837 = NULL;
F->ctx_1838 = NULL;
F->saved_gotos_1839 = NULL;
F->m_1840 = NULL;
F->p_1841 = NULL;
F->p_1841 = (*(P1044)rt_nil_check(F->d_466)).a;
{ R1072 *cell1843 = rt_alloc(sizeof(R1072));
(*cell1843).d = NULL;
(*cell1843).next = NULL;
F->cr_1837 = cell1843;
}
(*(P1071)rt_nil_check(F->cr_1837)).d = F->d_466;
(*(P1071)rt_nil_check(F->cr_1837)).next = g_caps_1103;
g_caps_1103 = F->cr_1837;
f_open_scope_177();
(*(P1071)rt_nil_check(F->cr_1837)).depth = g_depth_1087;
if (((*(P1044)rt_nil_check(F->d_466)).b != NULL)) {
f_capsule_params_465(F->d_466, F->args_468, (*(P1044)rt_nil_check(F->owner_469)).line);
}
{ R1062 *cell1844 = rt_alloc(sizeof(R1062));
(*cell1844).imps = NULL;
(*cell1844).next = NULL;
F->ctx_1838 = cell1844;
}
(*(P1061)rt_nil_check(F->ctx_1838)).depth = g_depth_1087;
(*(P1061)rt_nil_check(F->ctx_1838)).imps = (*(P1044)rt_nil_check(F->d_466)).d;
(*(P1061)rt_nil_check(F->ctx_1838)).all_imp = ((*(P1044)rt_nil_check(F->d_466)).flag >= ((rt_int)2LL));
(*(P1061)rt_nil_check(F->ctx_1838)).next = g_fctx_1102;
g_fctx_1102 = F->ctx_1838;
F->saved_gotos_1839 = g_gotos_1123;
g_gotos_1123 = NULL;
f_declare_labels_601((*(P1044)rt_nil_check(F->d_466)).c);
f_declare_body_445((*(P1044)rt_nil_check(F->d_466)).c);
f_capsule_body_608((*(P1044)rt_nil_check(F->d_466)).c);
{
F->w_1845 = NULL;
{ R1074 *cell1846 = rt_alloc(sizeof(R1074));
(*cell1846).d = NULL;
(*cell1846).w = NULL;
(*cell1846).next = NULL;
F->w_1845 = cell1846;
}
(*(P1073)rt_nil_check(F->w_1845)).d = F->owner_469;
(*(P1073)rt_nil_check(F->w_1845)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_595((*(P1044)rt_nil_check(F->d_466)).c); b_; }));
(*(P1073)rt_nil_check(F->w_1845)).next = g_cap_waits_1104;
g_cap_waits_1104 = F->w_1845;
}
g_fctx_1102 = (*(P1061)rt_nil_check(g_fctx_1102)).next;
F->m_1840 = g_scope_stack_1088;
while (((F->m_1840 != NULL) && ((*(P1054)rt_nil_check(F->m_1840)).depth == g_depth_1087))) {
if ((((((*(P1054)rt_nil_check(F->m_1840)).kind == (((rt_int)5LL))) && ((*(P1054)rt_nil_check(F->m_1840)).t == NULL)) && ((*(P1054)rt_nil_check(F->m_1840)).decl != NULL)) && ((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->m_1840)).decl)).kind == (((rt_int)43LL))))) {
(*(P1054)rt_nil_check(F->m_1840)).t = f_new_type_323(F->m_1840, f_nn_65((((rt_int)80LL)), (*(P1044)rt_nil_check(F->d_466)).line), &(*(P1054)rt_nil_check(F->m_1840)).c);
} else if (((((*(P1054)rt_nil_check(F->m_1840)).kind == (((rt_int)5LL))) || ((*(P1054)rt_nil_check(F->m_1840)).kind == (((rt_int)6LL)))) && ((*(P1054)rt_nil_check(F->m_1840)).t == NULL))) {
(*(P1054)rt_nil_check(F->m_1840)).t = f_resolve_subtype_268((*(P1054)rt_nil_check(F->m_1840)).st, &(*(P1054)rt_nil_check(F->m_1840)).c);
} else if ((((*(P1054)rt_nil_check(F->m_1840)).kind == (((rt_int)5LL))) && ((*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->m_1840)).t)).kind == (((rt_int)8LL))))) {
f_finish_ptr_490((*(P1054)rt_nil_check(F->m_1840)).t);
}
F->m_1840 = (*(P1054)rt_nil_check(F->m_1840)).stack;
}
F->m_1840 = g_scope_stack_1088;
while (((F->m_1840 != NULL) && ((*(P1054)rt_nil_check(F->m_1840)).depth == g_depth_1087))) {
if (f_exported_451(F->d_466, &(((P1037)rt_nil_check((*(P1054)rt_nil_check(F->m_1840)).name))->all), &F->ro_1842)) {
F->z_1847 = NULL;
F->z_1847 = f_copy_sym_453(F->m_1840);
if (F->ro_1842) {
(*(P1054)rt_nil_check(F->z_1847)).ro_flag = 1;
}
(*(P1054)rt_nil_check(F->z_1847)).mnext = (*(P1054)rt_nil_check(F->y_467)).members;
(*(P1054)rt_nil_check(F->y_467)).members = F->z_1847;
}
F->m_1840 = (*(P1054)rt_nil_check(F->m_1840)).stack;
}
while ((F->p_1841 != NULL)) {
if ((((!rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1841)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1841)).name))->all), rt_str("=", 1)))) && ((f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1841)).name))->all)) == NULL) || ((*(P1054)rt_nil_check(f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1841)).name))->all)))).depth != g_depth_1087)))) {
f_fail_23((*(P1044)rt_nil_check(F->d_466)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1841)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_466)).name))->all)); b_; }));
}
F->p_1841 = (*(P1044)rt_nil_check(F->p_1841)).next;
}
f_close_scope_178();
g_caps_1103 = (*(P1071)rt_nil_check(g_caps_1103)).next;
g_gotos_1123 = F->saved_gotos_1839;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_473(P1044 d_471, rstr *op_472) {
  struct f_exports_op_473fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_471 = d_471;
F->op_472 = op_472;
F->p_1848 = NULL;
if ((F->d_471 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1848 = (*(P1044)rt_nil_check(F->d_471)).a;
while ((F->p_1848 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1848)).name))->all), (*F->op_472))) {
F->result_ = 1;
goto ret_;
}
F->p_1848 = (*(P1044)rt_nil_check(F->p_1848)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1037 f_renamed_476(P1044 d_474, P1054 z_475) {
  struct f_renamed_476fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_474 = d_474;
F->z_475 = z_475;
F->r_1849 = NULL;
F->r_1849 = (*(P1044)rt_nil_check(F->d_474)).c;
while ((F->r_1849 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->r_1849)).name))->all), (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->z_475)).name))->all))) {
F->result_ = (*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->r_1849)).a)).name;
goto ret_;
}
F->r_1849 = (*(P1044)rt_nil_check(F->r_1849)).next;
}
F->result_ = (*(P1054)rt_nil_check(F->z_475)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_cap_tt_match_479(P1044 f_477, P1044 a_478) {
  struct f_cap_tt_match_479fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->f_477 = f_477;
F->a_478 = a_478;
F->x_1850 = NULL;
F->x_1850 = F->f_477;
F->y_1851 = NULL;
F->y_1851 = F->a_478;
while (((F->x_1850 != NULL) && (F->y_1851 != NULL))) {
F->v1_1854 = NULL;
F->v1_1854 = f_meval_390(F->x_1850, &F->ok1_1852);
F->v2_1855 = NULL;
F->v2_1855 = f_meval_390(F->y_1851, &F->ok2_1853);
if ((((!F->ok1_1852) || (!F->ok2_1853)) || ((*(P1063)rt_nil_check(F->v1_1854)).kind != (*(P1063)rt_nil_check(F->v2_1855)).kind))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P1063)rt_nil_check(F->v1_1854)).kind == (((rt_int)5LL))) || ((*(P1063)rt_nil_check(F->v1_1854)).kind == (((rt_int)4LL))))) {
if ((!rt_str_eq((((P1037)rt_nil_check((*(P1063)rt_nil_check(F->v1_1854)).s))->all), (((P1037)rt_nil_check((*(P1063)rt_nil_check(F->v2_1855)).s))->all)))) {
F->result_ = 0;
goto ret_;
}
} else if (((*(P1063)rt_nil_check(F->v1_1854)).i != (*(P1063)rt_nil_check(F->v2_1855)).i)) {
F->result_ = 0;
goto ret_;
}
F->x_1850 = (*(P1044)rt_nil_check(F->x_1850)).next;
F->y_1851 = (*(P1044)rt_nil_check(F->y_1851)).next;
}
F->result_ = ((F->x_1850 == NULL) && (F->y_1851 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1054 f_pick_capsule_481(P1044 d_480) {
  struct f_pick_capsule_481fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_480 = d_480;
F->y_1856 = NULL;
F->y_1856 = ({ A1060 b_ = (((P1058)rt_nil_check(g_table_1084))->all); b_.p[(rt_index(f_hash_161(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_480)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
F->first_1857 = NULL;
F->fit_1858 = NULL;
F->n_1859 = ((rt_int)0LL);
while ((F->y_1856 != NULL)) {
if ((rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_1856)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_480)).name))->all)) && ((*(P1054)rt_nil_check(F->y_1856)).kind == (((rt_int)8LL))))) {
F->n_1859 = rt_add(F->n_1859, ((rt_int)1LL));
if ((F->first_1857 == NULL)) {
F->first_1857 = F->y_1856;
}
if ((((F->fit_1858 == NULL) && f_fits_934(F->y_1856, (*(P1044)rt_nil_check(F->d_480)).b)) && f_cap_tt_match_479((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_1856)).decl)).e, (*(P1044)rt_nil_check(F->d_480)).e))) {
F->fit_1858 = F->y_1856;
}
}
F->y_1856 = (*(P1054)rt_nil_check(F->y_1856)).chain;
}
if ((F->n_1859 > ((rt_int)1LL))) {
if ((F->fit_1858 == NULL)) {
f_fail_23((*(P1044)rt_nil_check(F->d_480)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no capsule ", 11), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_480)).name))->all)), rt_str(" has formals that fit these actual parameters", 45)); b_; }));
}
F->result_ = F->fit_1858;
goto ret_;
}
if ((F->first_1857 == NULL)) {
F->result_ = f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_480)).name))->all));
goto ret_;
}
F->result_ = F->first_1857;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1054 f_capsule_instance_484(P1054 g_482, P1044 d_483) {
  struct f_capsule_instance_484fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_482 = g_482;
F->d_483 = d_483;
F->gd_1860 = NULL;
F->gd_1860 = (*(P1054)rt_nil_check(F->g_482)).decl;
F->pat_1861 = NULL;
F->pat_1861 = (*(P1044)rt_nil_check(F->gd_1860)).b;
F->binds_1862 = NULL;
F->binds_1862 = f_need_binds_742(F->gd_1860, f_tt_binds_721(F->gd_1860, (*(P1044)rt_nil_check(F->pat_1861)).e, (*(P1044)rt_nil_check(F->d_483)).e, (*(P1044)rt_nil_check(F->d_483)).line), (*(P1044)rt_nil_check(F->d_483)).line);
F->inst_1863 = NULL;
F->inst_1863 = (*(P1054)rt_nil_check(F->g_482)).insts;
F->saved_env_1864 = NULL;
F->saved_env_1864 = g_genv_1085;
F->saved_gdepth_1865 = g_gdepth_1117;
if ((((*(P1044)rt_nil_check(F->d_483)).flag != ((rt_int)1LL)) && ((*(P1044)rt_nil_check(F->d_483)).flag != ((rt_int)3LL)))) {
while ((F->inst_1863 != NULL)) {
if (f_same_binds_713((*(P1054)rt_nil_check(F->inst_1863)).tbinds, F->binds_1862)) {
F->result_ = F->inst_1863;
goto ret_;
}
F->inst_1863 = (*(P1054)rt_nil_check(F->inst_1863)).insts;
}
}
F->inst_1863 = f_new_sym_181((((rt_int)8LL)), (*(P1044)rt_nil_check(F->pat_1861)).name);
(*(P1054)rt_nil_check(F->inst_1863)).decl = F->pat_1861;
(*(P1054)rt_nil_check(F->inst_1863)).tbinds = F->binds_1862;
f_open_scope_177();
{
F->b_1866 = NULL;
F->b_1866 = F->binds_1862;
while ((F->b_1866 != NULL)) {
f_define_168(F->b_1866, (*(P1044)rt_nil_check(F->d_483)).line);
F->b_1866 = (*(P1054)rt_nil_check(F->b_1866)).mnext;
}
}
g_genv_1085 = (*(P1054)rt_nil_check(F->g_482)).env;
g_gdepth_1117 = g_depth_1087;
f_elaborate_capsule_470(F->pat_1861, F->inst_1863, (*(P1044)rt_nil_check(F->d_483)).b, F->d_483);
g_genv_1085 = F->saved_env_1864;
g_gdepth_1117 = F->saved_gdepth_1865;
f_close_scope_178();
if ((((*(P1044)rt_nil_check(F->d_483)).flag != ((rt_int)1LL)) && ((*(P1044)rt_nil_check(F->d_483)).flag != ((rt_int)3LL)))) {
(*(P1054)rt_nil_check(F->inst_1863)).insts = (*(P1054)rt_nil_check(F->g_482)).insts;
(*(P1054)rt_nil_check(F->g_482)).insts = F->inst_1863;
}
F->result_ = F->inst_1863;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_configure_486(P1054 y_485) {
  struct f_configure_486fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_485 = y_485;
F->m_1867 = NULL;
F->m_1867 = (*(P1054)rt_nil_check(F->y_485)).members;
while ((F->m_1867 != NULL)) {
F->n_1868 = rt_str_copy((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->m_1867)).name))->all));
if (((((*(P1054)rt_nil_check(F->m_1867)).kind == (((rt_int)2LL))) && (*(P1054)rt_nil_check(F->m_1867)).hasmv) && (((rt_str_eq(F->n_1868, rt_str("MILLISECONDS", 12)) || rt_str_eq(F->n_1868, rt_str("SECONDS", 7))) || rt_str_eq(F->n_1868, rt_str("MINUTES", 7))) || rt_str_eq(F->n_1868, rt_str("HOURS", 5))))) {
f_put_27(g_out_excs_1097, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  RT_", 5), F->n_1868), rt_str(" = ", 3)), f_itos_7((*(P1054)rt_nil_check(F->m_1867)).mvalue)), rt_str(";", 1)); b_; }));
}
F->m_1867 = (*(P1054)rt_nil_check(F->m_1867)).mnext;
}
ret_:
  RT_FPOP();
  return;
}

static void f_gen_expose_488(P1044 d_487) {
  struct f_gen_expose_488fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_487 = d_487;
F->y_1869 = NULL;
F->y_1869 = f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_487)).name))->all));
F->m_1870 = NULL;
F->p_1871 = NULL;
F->p_1871 = (*(P1044)rt_nil_check(F->d_487)).a;
F->r_1872 = NULL;
F->r_1872 = (*(P1044)rt_nil_check(F->d_487)).c;
if ((((F->y_1869 != NULL) && ((*(P1054)rt_nil_check(F->y_1869)).kind == (((rt_int)10LL)))) && ((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_1869)).decl)).b)).kind == (((rt_int)47LL))))) {
F->y_1869 = f_capsule_instance_484(F->y_1869, F->d_487);
} else {
F->y_1869 = f_pick_capsule_481(F->d_487);
if (((F->y_1869 == NULL) || ((*(P1054)rt_nil_check(F->y_1869)).kind != (((rt_int)8LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->d_487)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_487)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
f_elaborate_pending_459(F->y_1869);
if ((((*(P1044)rt_nil_check(F->d_487)).e != NULL) && (((*(P1054)rt_nil_check(F->y_1869)).decl == NULL) || ((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_1869)).decl)).e == NULL)))) {
f_fail_23((*(P1044)rt_nil_check(F->d_487)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_487)).name))->all), rt_str(" has no translation time property list", 38)); b_; }));
}
}
if (rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_1869)).name))->all), rt_str("CONFIGURATION", 13))) {
f_configure_486(F->y_1869);
}
if ((((*(P1054)rt_nil_check(F->y_1869)).tbinds != NULL) || ((((*(P1054)rt_nil_check(F->y_1869)).decl != NULL) && ((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_1869)).decl)).e != NULL)) && ((*(P1054)rt_nil_check(F->y_1869)).kind == (((rt_int)10LL)))))) {
} else if ((((*(P1044)rt_nil_check(F->d_487)).flag == ((rt_int)1LL)) || ((*(P1044)rt_nil_check(F->d_487)).flag == ((rt_int)3LL)))) {
F->inst_1873 = NULL;
F->inst_1873 = f_new_sym_181((((rt_int)8LL)), (*(P1054)rt_nil_check(F->y_1869)).name);
(*(P1054)rt_nil_check(F->inst_1873)).decl = (*(P1054)rt_nil_check(F->y_1869)).decl;
f_elaborate_capsule_470((*(P1054)rt_nil_check(F->y_1869)).decl, F->inst_1873, (*(P1044)rt_nil_check(F->d_487)).b, F->d_487);
F->y_1869 = F->inst_1873;
} else if ((((*(P1054)rt_nil_check(F->y_1869)).decl != NULL) && ((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_1869)).decl)).b != NULL))) {
f_fail_23((*(P1044)rt_nil_check(F->d_487)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_487)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P1044)rt_nil_check(F->d_487)).b != NULL)) {
f_fail_23((*(P1044)rt_nil_check(F->d_487)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1872 != NULL)) {
F->found_1874 = 0;
F->m_1870 = (*(P1054)rt_nil_check(F->y_1869)).members;
while ((F->m_1870 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->m_1870)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->r_1872)).name))->all))) {
F->found_1874 = 1;
}
F->m_1870 = (*(P1054)rt_nil_check(F->m_1870)).mnext;
}
if ((!F->found_1874)) {
f_fail_23((*(P1044)rt_nil_check(F->d_487)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->r_1872)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_487)).name))->all)); b_; }));
}
F->r_1872 = (*(P1044)rt_nil_check(F->r_1872)).next;
}
if (((*(P1044)rt_nil_check(F->d_487)).ival == ((rt_int)1LL))) {
F->m_1870 = (*(P1054)rt_nil_check(F->y_1869)).members;
while ((F->m_1870 != NULL)) {
F->z_1875 = NULL;
F->z_1875 = f_copy_sym_453(F->m_1870);
(*(P1054)rt_nil_check(F->z_1875)).name = f_renamed_476(F->d_487, F->m_1870);
f_define_168(F->z_1875, (*(P1044)rt_nil_check(F->d_487)).line);
F->m_1870 = (*(P1054)rt_nil_check(F->m_1870)).mnext;
}
goto ret_;
}
while ((F->p_1871 != NULL)) {
F->found_1876 = 0;
F->m_1870 = (*(P1054)rt_nil_check(F->y_1869)).members;
while ((F->m_1870 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->m_1870)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1871)).name))->all))) {
F->z_1877 = NULL;
F->z_1877 = f_copy_sym_453(F->m_1870);
if (((*(P1044)rt_nil_check(F->p_1871)).ival == ((rt_int)1LL))) {
(*(P1054)rt_nil_check(F->z_1877)).ro_flag = 1;
}
(*(P1054)rt_nil_check(F->z_1877)).name = f_renamed_476(F->d_487, F->m_1870);
f_define_168(F->z_1877, (*(P1044)rt_nil_check(F->d_487)).line);
F->found_1876 = 1;
}
F->m_1870 = (*(P1054)rt_nil_check(F->m_1870)).mnext;
}
if ((!F->found_1876)) {
f_fail_23((*(P1044)rt_nil_check(F->d_487)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1871)).name))->all), rt_str(" is not exported by ", 20)), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_487)).name))->all)); b_; }));
}
F->p_1871 = (*(P1044)rt_nil_check(F->p_1871)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_490(P1050 t_489) {
  struct f_finish_ptr_490fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_489 = t_489;
F->d_1878 = NULL;
F->d_1878 = (*(P1050)rt_nil_check(F->t_489)).decl;
F->p_1879 = NULL;
F->c_1880 = NULL;
F->dummy_1881 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1881, rt_str(" ", 1));
if (((*(P1050)rt_nil_check(F->t_489)).target != NULL)) {
goto ret_;
}
f_open_scope_177();
{ rt_int lo1883 = ((rt_int)1LL), hi1884 = ((rt_int)2LL);
for (rt_int it1885 = lo1883; it1885 <= hi1884; it1885++) {
F->pass_1882 = it1885;
if ((F->pass_1882 == ((rt_int)1LL))) {
F->p_1879 = (*(P1044)rt_nil_check(F->d_1878)).d;
} else {
F->p_1879 = (*(P1044)rt_nil_check(F->d_1878)).b;
}
while ((F->p_1879 != NULL)) {
F->y_1886 = NULL;
F->y_1886 = f_new_sym_181((((rt_int)2LL)), (*(P1044)rt_nil_check(F->p_1879)).name);
F->pc_1887 = NULL;
(*(P1054)rt_nil_check(F->y_1886)).t = f_resolve_subtype_268((*(P1044)rt_nil_check(F->p_1879)).a, &F->pc_1887);
(*(P1054)rt_nil_check(F->y_1886)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_168(F->y_1886, (*(P1044)rt_nil_check(F->d_1878)).line);
F->p_1879 = (*(P1044)rt_nil_check(F->p_1879)).next;
}
}
}
(*(P1050)rt_nil_check(F->t_489)).target = f_resolve_subtype_268((*(P1044)rt_nil_check(F->d_1878)).a, &F->c_1880);
if (((*(P1044)rt_nil_check(F->d_1878)).c != NULL)) {
f_check_rep_337((*(P1044)rt_nil_check(F->d_1878)).c, (*(P1050)rt_nil_check(F->t_489)).target, F->c_1880, 1, 1, F->d_1878);
(*(P1050)rt_nil_check(F->t_489)).repn = (*(P1044)rt_nil_check(F->d_1878)).c;
}
f_close_scope_178();
(*rt_str_at(&F->dummy_1881, ((rt_int)1LL))) = rt_str_get(f_ctype_234(F->t_489), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1881, ((rt_int)1LL))) = rt_str_get(f_ctype_234((*(P1050)rt_nil_check(F->t_489)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1044 f_ptr_args_492(P1046 c_491) {
  struct f_ptr_args_492fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_491 = c_491;
if ((F->c_491 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1046)rt_nil_check(F->c_491)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_497(P1044 formals_493, P1044 actuals_494, rstr *cell_495, rt_int line_496) {
  struct f_bind_ptr_params_497fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_493 = formals_493;
F->actuals_494 = actuals_494;
F->cell_495 = cell_495;
F->line_496 = line_496;
F->p_1888 = NULL;
F->p_1888 = F->formals_493;
F->a_1889 = NULL;
F->a_1889 = F->actuals_494;
F->vt_1890 = NULL;
if ((f_list_len_71(F->formals_493) != f_list_len_71(F->actuals_494))) {
f_fail_23(F->line_496, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_71(F->formals_493))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1888 != NULL)) {
F->pc_1891 = NULL;
F->y_1892 = NULL;
F->y_1892 = f_new_sym_181((((rt_int)2LL)), (*(P1044)rt_nil_check(F->p_1888)).name);
(*(P1054)rt_nil_check(F->y_1892)).t = f_resolve_subtype_268((*(P1044)rt_nil_check(F->p_1888)).a, &F->pc_1891);
{
F->v_1893 = rt_str_copy(f_gexpr_815(F->a_1889, (*(P1054)rt_nil_check(F->y_1892)).t, &F->vt_1890));
F->pv_1894 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_232(F->vt_1890, (*(P1054)rt_nil_check(F->y_1892)).t, F->line_496);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1054)rt_nil_check(F->y_1892)).t), rt_str(" ", 1)), F->pv_1894), rt_str(" = ", 3)), f_checked_213((*(P1054)rt_nil_check(F->y_1892)).t, F->pc_1891, &F->v_1893)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_495), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_495), rt_str("->p_", 4)), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1888)).name))->all))), rt_str(" = ", 3)), F->pv_1894), rt_str(";", 1)); b_; }));
}
(*(P1054)rt_nil_check(F->y_1892)).access = f_mk_3(&F->pv_1894);
}
f_define_168(F->y_1892, F->line_496);
F->p_1888 = (*(P1044)rt_nil_check(F->p_1888)).next;
F->a_1889 = (*(P1044)rt_nil_check(F->a_1889)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_502(P1044 s_498, rstr *lv_499, P1050 t_500, P1046 c_501) {
  struct f_alloc_cell_502fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_498 = s_498;
F->lv_499 = lv_499;
F->t_500 = t_500;
F->c_501 = c_501;
F->d_1895 = NULL;
F->d_1895 = (*(P1050)rt_nil_check(F->t_500)).decl;
F->tc_1896 = NULL;
F->vt_1897 = NULL;
F->pt_1898 = rt_str_copy(f_ctype_234(F->t_500));
F->cell_1899 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_351((*(P1050)rt_nil_check(F->t_500)).target)) {
F->fn_1900 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_1109 = 1;
g_uses_findyn_1111 = 1;
f_put_27(g_out_protos_1093, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1900), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1900), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (g_in_func_1100) {
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1037)rt_nil_check((*(P1054)rt_nil_check(g_func_sym_1112)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1898), rt_str(")cell_)->all)", 13)); b_; }), (*(P1050)rt_nil_check(F->t_500)).target)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (g_in_func_1100) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1898), rt_str(" ", 1)), F->cell_1899), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1899), rt_str(", ", 2)), F->fn_1900), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1898), rt_str(" ", 1)), F->cell_1899), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1899), rt_str(", ", 2)), F->fn_1900), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1898), rt_str(" ", 1)), F->cell_1899), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1899), rt_str(");", 2)); b_; }));
}
f_open_scope_177();
f_bind_ptr_params_497((*(P1044)rt_nil_check(F->d_1895)).d, f_ptr_args_492(F->c_501), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), (*(P1044)rt_nil_check(F->s_498)).line);
f_bind_ptr_params_497((*(P1044)rt_nil_check(F->d_1895)).b, (*(P1044)rt_nil_check(F->s_498)).b, &F->cell_1899, (*(P1044)rt_nil_check(F->s_498)).line);
F->vt_1897 = f_resolve_subtype_268((*(P1044)rt_nil_check(F->d_1895)).a, &F->tc_1896);
g_mark_uninit_1120 = (!f_suppressed_527(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; })));
f_init_storage_346(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1899, rt_str("->all", 5)); b_; }), (*(P1050)rt_nil_check(F->t_500)).target, F->tc_1896);
g_mark_uninit_1120 = 0;
f_close_scope_178();
if (((*(P1044)rt_nil_check(F->s_498)).c != NULL)) {
F->v_1901 = rt_str_copy(f_gexpr_in_826((*(P1044)rt_nil_check(F->s_498)).c, (*(P1050)rt_nil_check(F->t_500)).target, F->tc_1896, &F->vt_1897));
f_check_type_232(F->vt_1897, (*(P1050)rt_nil_check(F->t_500)).target, (*(P1044)rt_nil_check(F->s_498)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_426(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1899, rt_str("->all", 5)); b_; }), (*(P1050)rt_nil_check(F->t_500)).target, &F->v_1901, F->tc_1896); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_499), rt_str(" = ", 3)), F->cell_1899), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1046 f_freeze_args_506(P1046 c_503, P1050 t_504, rt_int line_505) {
  struct f_freeze_args_506fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_503 = c_503;
F->t_504 = t_504;
F->line_505 = line_505;
F->r_1902 = NULL;
F->r_1902 = f_copy_cons_206(F->c_503);
F->p_1903 = NULL;
F->p_1903 = (*(P1044)rt_nil_check((*(P1050)rt_nil_check(F->t_504)).decl)).d;
F->a_1904 = NULL;
F->a_1904 = (*(P1046)rt_nil_check(F->c_503)).args;
F->head_1905 = NULL;
F->tail_1906 = NULL;
F->saved_1907 = NULL;
F->saved_1907 = g_st_field_1106;
if ((f_list_len_71(F->p_1903) != f_list_len_71(F->a_1904))) {
f_fail_23(F->line_505, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_504)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1903))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1904 != NULL)) {
F->pc_1908 = NULL;
F->vt_1909 = NULL;
F->pt_1910 = NULL;
F->pt_1910 = f_resolve_subtype_268((*(P1044)rt_nil_check(F->p_1903)).a, &F->pc_1908);
F->nm_1911 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1912 = NULL;
F->y_1912 = f_new_sym_181((((rt_int)2LL)), f_mk_3(&F->nm_1911));
F->n_1913 = NULL;
F->n_1913 = f_nn_65((((rt_int)7LL)), F->line_505);
F->v_1914 = rt_str_copy(f_gexpr_815(F->a_1904, F->pt_1910, &F->vt_1909));
F->access_1915 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_234(F->pt_1910); b_; })));
f_check_type_232(F->vt_1909, F->pt_1910, F->line_505);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1915, rt_str(" = ", 3)), f_checked_213(F->pt_1910, F->pc_1908, &F->v_1914)), rt_str(";", 1)); b_; }));
(*(P1054)rt_nil_check(F->y_1912)).t = F->pt_1910;
(*(P1054)rt_nil_check(F->y_1912)).ro_flag = 1;
f_bind_537(F->y_1912, &F->access_1915);
f_define_168(F->y_1912, F->line_505);
(*(P1044)rt_nil_check(F->n_1913)).name = f_mk_3(&F->nm_1911);
f_append_69(&F->head_1905, &F->tail_1906, F->n_1913);
F->a_1904 = (*(P1044)rt_nil_check(F->a_1904)).next;
F->p_1903 = (*(P1044)rt_nil_check(F->p_1903)).next;
}
(*(P1046)rt_nil_check(F->r_1902)).args = F->head_1905;
g_st_field_1106 = F->saved_1907;
F->result_ = F->r_1902;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_510(P1050 t_507, P1046 c_508, P1044 src_509) {
  struct f_ptr_subtype_check_510fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_507 = t_507;
F->c_508 = c_508;
F->src_509 = src_509;
F->lv_1916 = NULL;
F->st_1917 = NULL;
F->sc_1918 = NULL;
F->cond_1920 = NULL;
F->cond_1920 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1921 = NULL;
F->b_1922 = NULL;
F->at_1923 = NULL;
F->bt_1924 = NULL;
if (((((((*(P1050)rt_nil_check(F->t_507)).kind != (((rt_int)8LL))) || (F->c_508 == NULL)) || ((*(P1046)rt_nil_check(F->c_508)).args == NULL)) || (F->src_509 == NULL)) || (!f_is_lvalue_778(F->src_509)))) {
goto ret_;
}
f_lvalue_784(F->src_509, &F->lv_1916, &F->st_1917, &F->sc_1918, &F->ro_1919);
if (((F->sc_1918 == NULL) || ((*(P1046)rt_nil_check(F->sc_1918)).args == NULL))) {
goto ret_;
}
F->a_1921 = (*(P1046)rt_nil_check(F->c_508)).args;
F->b_1922 = (*(P1046)rt_nil_check(F->sc_1918)).args;
while (((F->a_1921 != NULL) && (F->b_1922 != NULL))) {
F->x_1925 = rt_str_copy(f_gexpr_815(F->a_1921, NULL, &F->at_1923));
F->y_1926 = rt_str_copy(f_gexpr_815(F->b_1922, F->at_1923, &F->bt_1924));
F->cond_1920 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->cond_1920))->all), rt_str(" || !", 5)), f_eq_code_433(F->at_1923, &F->x_1925, &F->y_1926)); b_; }));
F->a_1921 = (*(P1044)rt_nil_check(F->a_1921)).next;
F->b_1922 = (*(P1044)rt_nil_check(F->b_1922)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1037)rt_nil_check(F->cond_1920))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_normal_function_513(P1044 d_511, P1054 y_512) {
  struct f_normal_function_513fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_511 = d_511;
F->y_512 = y_512;
F->p_1927 = NULL;
F->p_1927 = (*(P1054)rt_nil_check(F->y_512)).params;
F->imp_1928 = NULL;
F->imp_1928 = (*(P1044)rt_nil_check(F->d_511)).d;
if ((((*(P1044)rt_nil_check(F->d_511)).kind != (((rt_int)46LL))) || (rt_mod((*(P1044)rt_nil_check(F->d_511)).flag, ((rt_int)2LL)) == ((rt_int)1LL)))) {
goto ret_;
}
while ((F->p_1927 != NULL)) {
if ((((*(P1056)rt_nil_check(F->p_1927)).mode == (((rt_int)2LL))) || ((*(P1056)rt_nil_check(F->p_1927)).mode == (((rt_int)3LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->d_511)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may have only CONST and READONLY formal parameters: ", 70), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_511)).name))->all)); b_; }));
}
F->p_1927 = (*(P1056)rt_nil_check(F->p_1927)).next;
}
if ((((*(P1044)rt_nil_check(F->d_511)).d == NULL) && ((*(P1044)rt_nil_check(F->d_511)).flag < ((rt_int)2LL)))) {
goto ret_;
}
if (((g_caps_1103 == NULL) || (g_depth_1087 != (*(P1071)rt_nil_check(g_caps_1103)).depth))) {
f_fail_23((*(P1044)rt_nil_check(F->d_511)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function with an imports list must be local to a capsule body: ", 72), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_511)).name))->all)); b_; }));
}
while ((F->imp_1928 != NULL)) {
F->z_1930 = NULL;
F->z_1930 = f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->imp_1928)).name))->all));
if ((((F->z_1930 != NULL) && ((*(P1054)rt_nil_check(F->z_1930)).kind == (((rt_int)1LL)))) && ((*(P1054)rt_nil_check(F->z_1930)).depth != (*(P1071)rt_nil_check(g_caps_1103)).depth))) {
f_fail_23((*(P1044)rt_nil_check(F->d_511)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function imports only variables of its capsule body: ", 62), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->imp_1928)).name))->all)); b_; }));
}
if ((f_exported_451((*(P1071)rt_nil_check(g_caps_1103)).d, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->imp_1928)).name))->all), &F->ro_1929) && ((*(P1044)rt_nil_check((*(P1071)rt_nil_check(g_caps_1103)).d)).ival != ((rt_int)1LL)))) {
f_fail_23((*(P1044)rt_nil_check(F->d_511)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may not import an exported variable: ", 55), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->imp_1928)).name))->all)); b_; }));
}
F->imp_1928 = (*(P1044)rt_nil_check(F->imp_1928)).next;
}
(*(P1054)rt_nil_check(F->y_512)).capn = (*(P1071)rt_nil_check(g_caps_1103)).d;
ret_:
  RT_FPOP();
  return;
}

static void f_foreign_body_516(P1044 d_514, P1054 y_515) {
  struct f_foreign_body_516fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_514 = d_514;
F->y_515 = y_515;
F->pm_1931 = NULL;
F->pm_1931 = (*(P1054)rt_nil_check(F->y_515)).params;
F->proto_1932 = NULL;
F->proto_1932 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->args_1933 = NULL;
F->args_1933 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cn_1934 = rt_str_copy(f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_514)).name))->all)));
if (((*(P1044)rt_nil_check(F->d_514)).c != NULL)) {
f_fail_23((*(P1044)rt_nil_check(F->d_514)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a foreign ", 10), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_514)).name))->all)), rt_str(" has an empty body", 18)); b_; }));
}
while ((F->pm_1931 != NULL)) {
if ((((*(P1056)rt_nil_check(F->pm_1931)).mode != (((rt_int)1LL))) || (!(f_scalar_kind_186(f_base_of_223((*(P1056)rt_nil_check(F->pm_1931)).t)) || ((*(P1050)rt_nil_check(f_base_of_223((*(P1056)rt_nil_check(F->pm_1931)).t))).kind == (((rt_int)2LL))))))) {
f_fail_23((*(P1044)rt_nil_check(F->d_514)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a foreign subprogram takes CONST INT, FLOAT, BOOL and ENUM formals", 66); b_; }));
}
if ((((rt_int)(((((P1037)rt_nil_check(F->proto_1932))->all)).len)) > ((rt_int)0LL))) {
F->proto_1932 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->proto_1932))->all), rt_str(", ", 2)); b_; }));
F->args_1933 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->args_1933))->all), rt_str(", ", 2)); b_; }));
}
F->proto_1932 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->proto_1932))->all), f_ctype_234((*(P1056)rt_nil_check(F->pm_1931)).t)); b_; }));
F->args_1933 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->args_1933))->all), rt_str("F->", 3)), (((P1037)rt_nil_check((*(P1056)rt_nil_check(F->pm_1931)).cfield))->all)); b_; }));
F->pm_1931 = (*(P1056)rt_nil_check(F->pm_1931)).next;
}
if ((((rt_int)(((((P1037)rt_nil_check(F->proto_1932))->all)).len)) == ((rt_int)0LL))) {
F->proto_1932 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if ((((*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_515)).result)).kind != (((rt_int)9LL))) && (!(f_scalar_kind_186(f_base_of_223((*(P1054)rt_nil_check(F->y_515)).result)) || ((*(P1050)rt_nil_check(f_base_of_223((*(P1054)rt_nil_check(F->y_515)).result))).kind == (((rt_int)2LL))))))) {
f_fail_23((*(P1044)rt_nil_check(F->d_514)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a foreign function returns an INT, FLOAT, BOOL or ENUM value", 60); b_; }));
}
f_put_27(g_out_protos_1093, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("extern ", 7), f_ctype_234((*(P1054)rt_nil_check(F->y_515)).result)), rt_str(" ", 1)), F->cn_1934), rt_str("(", 1)), (((P1037)rt_nil_check(F->proto_1932))->all)), rt_str(");", 2)); b_; }));
if (((*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_515)).result)).kind == (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->cn_1934, rt_str("(", 1)), (((P1037)rt_nil_check(F->args_1933))->all)), rt_str(");", 2)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->cn_1934), rt_str("(", 1)), (((P1037)rt_nil_check(F->args_1933))->all)), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_518(P1044 d_517) {
  struct f_declare_subprogram_518fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_517 = d_517;
f_define_168(f_build_subprogram_520(F->d_517), (*(P1044)rt_nil_check(F->d_517)).line);
ret_:
  RT_FPOP();
  return;
}

static P1054 f_build_subprogram_520(P1044 d_519) {
  struct f_build_subprogram_520fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_519 = d_519;
F->y_1935 = NULL;
F->p_1936 = NULL;
F->p_1936 = (*(P1044)rt_nil_check(F->d_519)).a;
F->tail_1937 = NULL;
if (((*(P1044)rt_nil_check(F->d_519)).kind == (((rt_int)46LL)))) {
F->y_1935 = f_new_sym_181((((rt_int)3LL)), (*(P1044)rt_nil_check(F->d_519)).name);
} else if (((*(P1044)rt_nil_check(F->d_519)).kind == (((rt_int)50LL)))) {
F->y_1935 = f_new_sym_181((((rt_int)9LL)), (*(P1044)rt_nil_check(F->d_519)).name);
} else {
F->y_1935 = f_new_sym_181((((rt_int)4LL)), (*(P1044)rt_nil_check(F->d_519)).name);
}
while ((F->p_1936 != NULL)) {
F->pm_1938 = NULL;
if ((((*(P1044)rt_nil_check(F->d_519)).kind == (((rt_int)50LL))) && ((*(P1044)rt_nil_check(F->p_1936)).ival == (((rt_int)3LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->d_519)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a task may not have OUT formal parameters", 41); b_; }));
}
{ R1057 *cell1939 = rt_alloc(sizeof(R1057));
(*cell1939).name = NULL;
(*cell1939).t = NULL;
(*cell1939).c = NULL;
(*cell1939).cfield = NULL;
(*cell1939).next = NULL;
F->pm_1938 = cell1939;
}
(*(P1056)rt_nil_check(F->pm_1938)).name = (*(P1044)rt_nil_check(F->p_1936)).name;
(*(P1056)rt_nil_check(F->pm_1938)).mode = (*(P1044)rt_nil_check(F->p_1936)).ival;
(*(P1056)rt_nil_check(F->pm_1938)).t = f_resolve_subtype_268((*(P1044)rt_nil_check(F->p_1936)).a, &(*(P1056)rt_nil_check(F->pm_1938)).c);
(*(P1056)rt_nil_check(F->pm_1938)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1936)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1937 == NULL)) {
(*(P1054)rt_nil_check(F->y_1935)).params = F->pm_1938;
} else {
(*(P1056)rt_nil_check(F->tail_1937)).next = F->pm_1938;
}
F->tail_1937 = F->pm_1938;
F->p_1936 = (*(P1044)rt_nil_check(F->p_1936)).next;
}
(*(P1054)rt_nil_check(F->y_1935)).result = g_ty_void_1134;
if (((*(P1044)rt_nil_check(F->d_519)).b != NULL)) {
F->rc_1940 = NULL;
F->pm_1941 = NULL;
F->pm_1941 = (*(P1054)rt_nil_check(F->y_1935)).params;
F->saved_1942 = NULL;
F->saved_1942 = g_code_1098;
g_code_1098 = f_new_buffer_24();
f_open_scope_177();
while ((F->pm_1941 != NULL)) {
F->z_1943 = NULL;
F->z_1943 = f_new_sym_181((((rt_int)2LL)), (*(P1056)rt_nil_check(F->pm_1941)).name);
(*(P1054)rt_nil_check(F->z_1943)).t = (*(P1056)rt_nil_check(F->pm_1941)).t;
(*(P1054)rt_nil_check(F->z_1943)).c = (*(P1056)rt_nil_check(F->pm_1941)).c;
(*(P1054)rt_nil_check(F->z_1943)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_168(F->z_1943, (*(P1044)rt_nil_check(F->d_519)).line);
F->pm_1941 = (*(P1056)rt_nil_check(F->pm_1941)).next;
}
(*(P1054)rt_nil_check(F->y_1935)).result = f_resolve_subtype_268((*(P1044)rt_nil_check(F->d_519)).b, &F->rc_1940);
f_close_scope_178();
g_code_1098 = F->saved_1942;
}
(*(P1054)rt_nil_check(F->y_1935)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_770(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_519)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P1054)rt_nil_check(F->y_1935)).decl = F->d_519;
(*(P1054)rt_nil_check(F->y_1935)).level = g_cur_level_1101;
if (((*(P1044)rt_nil_check(F->d_519)).kind == (((rt_int)50LL)))) {
f_put_27(g_out_globals_1094, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_1935)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1935;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_523(P1037 pr_521, rstr *p_522) {
  struct f_has_pragmat_523fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_521 = pr_521;
F->p_522 = p_522;
if ((F->pr_521 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1945 = ((rt_int)1LL), hi1946 = rt_sub(((rt_int)(((((P1037)rt_nil_check(F->pr_521))->all)).len)), ((rt_int)(((*F->p_522)).len)));
for (rt_int it1947 = lo1945; it1947 <= hi1946; it1947++) {
F->i_1944 = it1947;
if (((rt_str_eq(rt_str_slice((((P1037)rt_nil_check(F->pr_521))->all), F->i_1944, rt_sub(rt_add(F->i_1944, ((rt_int)(((*F->p_522)).len))), ((rt_int)1LL))), (*F->p_522)) && (rt_str_get((((P1037)rt_nil_check(F->pr_521))->all), rt_add(F->i_1944, ((rt_int)(((*F->p_522)).len)))) == 59)) && ((F->i_1944 == ((rt_int)1LL)) || (rt_str_get((((P1037)rt_nil_check(F->pr_521))->all), rt_sub(F->i_1944, ((rt_int)1LL))) == 59)))) {
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

static P1037 f_suppressing_525(P1037 pr_524) {
  struct f_suppressing_525fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_524 = pr_524;
F->r_1948 = NULL;
F->r_1948 = g_suppress_1118;
F->i_1949 = ((rt_int)1LL);
if ((F->pr_524 == NULL)) {
F->result_ = F->r_1948;
goto ret_;
}
if ((F->r_1948 == NULL)) {
F->r_1948 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(F->i_1949, ((rt_int)9LL)) <= ((rt_int)(((((P1037)rt_nil_check(F->pr_524))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P1037)rt_nil_check(F->pr_524))->all), F->i_1949, rt_add(F->i_1949, ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1950 = rt_add(F->i_1949, ((rt_int)9LL));
F->k_1951 = F->j_1950;
while ((rt_str_get((((P1037)rt_nil_check(F->pr_524))->all), F->k_1951) != 41)) {
if ((rt_str_get((((P1037)rt_nil_check(F->pr_524))->all), F->k_1951) == 44)) {
F->r_1948 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1948))->all), rt_str_slice((((P1037)rt_nil_check(F->pr_524))->all), F->j_1950, rt_sub(F->k_1951, ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1950 = rt_add(F->k_1951, ((rt_int)1LL));
}
F->k_1951 = rt_add(F->k_1951, ((rt_int)1LL));
}
F->r_1948 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_1948))->all), rt_str_slice((((P1037)rt_nil_check(F->pr_524))->all), F->j_1950, rt_sub(F->k_1951, ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1949 = F->k_1951;
}
F->i_1949 = rt_add(F->i_1949, ((rt_int)1LL));
}
F->result_ = F->r_1948;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_suppressed_527(rstr *x_526) {
  struct f_suppressed_527fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_526 = x_526;
F->w_1952 = rt_str_new(rt_add(((rt_int)(((*F->x_526)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1952, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_526)), rt_str(" ", 1)));
if ((g_suppress_1118 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1954 = ((rt_int)1LL), hi1955 = rt_add(rt_sub(((rt_int)(((((P1037)rt_nil_check(g_suppress_1118))->all)).len)), ((rt_int)((F->w_1952).len))), ((rt_int)1LL));
for (rt_int it1956 = lo1954; it1956 <= hi1955; it1956++) {
F->i_1953 = it1956;
if (rt_str_eq(rt_str_slice((((P1037)rt_nil_check(g_suppress_1118))->all), F->i_1953, rt_sub(rt_add(F->i_1953, ((rt_int)((F->w_1952).len))), ((rt_int)1LL))), F->w_1952)) {
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

static void f_element_529(P1044 e_528) {
  struct f_element_529fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_528 = e_528;
F->saved_1957 = NULL;
F->saved_1957 = g_suppress_1118;
g_suppress_1118 = f_suppressing_525((*(P1044)rt_nil_check(F->e_528)).prags);
f_element1_531(F->e_528);
g_suppress_1118 = F->saved_1957;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_531(P1044 e_530) {
  struct f_element1_531fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_530 = e_530;
F->k_1958 = (*(P1044)rt_nil_check(F->e_530)).kind;
if (((F->k_1958 == (((rt_int)47LL))) && (f_lookup_decl_165(F->e_530) != NULL))) {
f_elaborate_pending_459(f_lookup_decl_165(F->e_530));
} else if (((((F->k_1958 == (((rt_int)48LL))) && ((*(P1044)rt_nil_check(F->e_530)).flag != ((rt_int)1LL))) && ((*(P1044)rt_nil_check(F->e_530)).flag != ((rt_int)3LL))) && ((*(P1044)rt_nil_check(F->e_530)).eline == ((rt_int)0LL)))) {
f_gen_expose_488(F->e_530);
} else if (((F->k_1958 == (((rt_int)48LL))) && (((*(P1044)rt_nil_check(F->e_530)).flag == ((rt_int)1LL)) || ((*(P1044)rt_nil_check(F->e_530)).flag == ((rt_int)3LL))))) {
f_gen_expose_488(F->e_530);
} else if ((((F->k_1958 == (((rt_int)45LL))) || (F->k_1958 == (((rt_int)46LL)))) || (F->k_1958 == (((rt_int)50LL))))) {
f_subprogram_588(F->e_530);
} else if ((F->k_1958 == (((rt_int)51LL)))) {
F->g_1959 = NULL;
F->g_1959 = f_lookup_decl_165(F->e_530);
if ((F->g_1959 != NULL)) {
{ P1058 cell1960 = rt_alloc(sizeof *cell1960);
rt_int pv1961 = (((rt_int)4093LL));
cell1960->p_n = pv1961;
cell1960->all.lo = ((rt_int)0LL); cell1960->all.hi = pv1961;
cell1960->all.lo2 = cell1960->all.hi2 = 1;
cell1960->all.p = rt_alloc(sizeof(P1054) * (size_t)(RT_CNT(cell1960->all)) + 1);
for (rt_int i1962 = 0; i1962 < (RT_CNT(cell1960->all)); i1962++) {
cell1960->all.p[i1962] = NULL;
}
(*(P1054)rt_nil_check(F->g_1959)).env = cell1960;
}
{ rt_int lo1964 = ((rt_int)0LL), hi1965 = (((rt_int)4093LL));
for (rt_int it1966 = lo1964; it1966 <= hi1965; it1966++) {
F->i_1963 = it1966;
(((P1058)rt_nil_check((*(P1054)rt_nil_check(F->g_1959)).env))->all).p[(rt_index(F->i_1963, (((P1058)rt_nil_check((*(P1054)rt_nil_check(F->g_1959)).env))->all).lo, (((P1058)rt_nil_check((*(P1054)rt_nil_check(F->g_1959)).env))->all).hi) - (((P1058)rt_nil_check((*(P1054)rt_nil_check(F->g_1959)).env))->all).lo)] = ({ A1060 b_ = (((P1058)rt_nil_check(g_table_1084))->all); b_.p[(rt_index(F->i_1963, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((F->k_1958 == (((rt_int)43LL))) && ((*(P1044)rt_nil_check(F->e_530)).c != NULL)) && ((*(P1044)rt_nil_check(F->e_530)).b == NULL))) {
F->c_1967 = NULL;
F->st_1968 = NULL;
F->st_1968 = f_nn_65((((rt_int)80LL)), (*(P1044)rt_nil_check(F->e_530)).line);
F->t_1969 = NULL;
(*(P1044)rt_nil_check(F->st_1968)).name = (*(P1044)rt_nil_check(F->e_530)).name;
F->t_1969 = f_resolve_subtype_268(F->st_1968, &F->c_1967);
} else if ((((((F->k_1958 == (((rt_int)49LL))) || (F->k_1958 == (((rt_int)42LL)))) || (F->k_1958 == (((rt_int)43LL)))) || (F->k_1958 == (((rt_int)47LL)))) || (F->k_1958 == (((rt_int)48LL))))) {
goto ret_;
} else if ((F->k_1958 == (((rt_int)44LL)))) {
f_finish_ptr_490((*(P1054)rt_nil_check(f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_530)).name))->all)))).t);
} else if ((F->k_1958 == (((rt_int)40LL)))) {
f_var_decl_539(F->e_530);
} else if (((F->k_1958 == (((rt_int)41LL))) && ((*(P1044)rt_nil_check(F->e_530)).flag == ((rt_int)0LL)))) {
f_const_decl_586(F->e_530);
} else if ((F->k_1958 == (((rt_int)41LL)))) {
goto ret_;
} else if ((F->k_1958 == (((rt_int)33LL)))) {
F->t_1970 = NULL;
F->c_1971 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_530)).a, g_ty_bool_1130, &F->t_1970));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1971), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_623(F->e_530);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_534(rstr *name_532, P1050 t_533) {
  struct f_storage_534fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_532 = name_532;
F->t_533 = t_533;
if ((!g_in_func_1100)) {
F->g_1972 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_532))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1094, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234(F->t_533)), rt_str(" ", 1)), F->g_1972), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_1108, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1972), rt_str(");", 2)); b_; }));
g_st_field_1106 = f_mk_3(&F->g_1972);
F->result_ = F->g_1972;
goto ret_;
}
{
F->f_1973 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_532)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1099, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234(F->t_533)), rt_str(" ", 1)), F->f_1973), rt_str(";", 1)); b_; }));
g_st_field_1106 = f_mk_3(&F->f_1973);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1973);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_537(P1054 y_535, rstr *access_536) {
  struct f_bind_537fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_535 = y_535;
F->access_536 = access_536;
if (g_in_func_1100) {
(*(P1054)rt_nil_check(F->y_535)).level = g_cur_level_1101;
(*(P1054)rt_nil_check(F->y_535)).access = g_st_field_1106;
} else {
(*(P1054)rt_nil_check(F->y_535)).level = ((rt_int)0LL);
(*(P1054)rt_nil_check(F->y_535)).access = f_mk_3(&(*F->access_536));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_539(P1044 d_538) {
  struct f_var_decl_539fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_538 = d_538;
if (((*(P1044)rt_nil_check(F->d_538)).ival == ((rt_int)2LL))) {
f_located_var_541(F->d_538);
} else {
f_var_decl2_580(F->d_538);
}
ret_:
  RT_FPOP();
  return;
}

static void f_located_var_541(P1044 d_540) {
  struct f_located_var_541fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_540 = d_540;
F->c_1974 = NULL;
F->at_1975 = NULL;
F->t_1976 = NULL;
F->t_1976 = f_resolve_subtype_268((*(P1044)rt_nil_check(F->d_540)).a, &F->c_1974);
F->y_1977 = NULL;
F->y_1977 = f_new_sym_181((((rt_int)1LL)), (*(P1044)rt_nil_check(F->d_540)).name);
F->addr_1978 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->d_540)).c, g_ty_int_1129, &F->at_1975));
F->av_1979 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("loc", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_int", 6); b_; })));
F->af_1980 = rt_str_copy((((P1037)rt_nil_check(g_st_field_1106))->all));
f_check_type_232(F->at_1975, g_ty_int_1129, (*(P1044)rt_nil_check(F->d_540)).line);
F->c_1974 = f_freeze_209(F->c_1974, F->t_1976);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->av_1979, rt_str(" = ", 3)), F->addr_1978), rt_str(";", 1)); b_; }));
if ((((*(P1050)rt_nil_check(F->t_1976)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_1976)).repn != NULL))) {
F->access_1981 = rt_str_copy(f_storage_534(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_540)).name))->all), F->t_1976));
g_mark_uninit_1120 = (!f_suppressed_527(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; })));
f_init_storage_346(&F->access_1981, F->t_1976, F->c_1974);
g_mark_uninit_1120 = 0;
(*(P1054)rt_nil_check(F->y_1977)).t = F->t_1976;
(*(P1054)rt_nil_check(F->y_1977)).c = F->c_1974;
f_bind_537(F->y_1977, &F->access_1981);
if (g_in_func_1100) {
(*(P1054)rt_nil_check(F->y_1977)).loc = f_mk_3(&F->af_1980);
} else {
(*(P1054)rt_nil_check(F->y_1977)).loc = f_mk_3(&F->av_1979);
}
f_define_168(F->y_1977, (*(P1044)rt_nil_check(F->d_540)).line);
if (((*(P1044)rt_nil_check(F->d_540)).b != NULL)) {
F->vt_1982 = NULL;
F->v_1983 = rt_str_copy(f_gexpr_in_826((*(P1044)rt_nil_check(F->d_540)).b, F->t_1976, F->c_1974, &F->vt_1982));
f_check_type_232(F->vt_1982, F->t_1976, (*(P1044)rt_nil_check(F->d_540)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_426(&F->access_1981, F->t_1976, &F->v_1983, F->c_1974); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_544(F->y_1977, 1); b_; }));
}
goto ret_;
}
{
F->pv_1984 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_540)).name))->all)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_ctype_234(F->t_1976), rt_str(" *", 2)); b_; })));
F->pf_1985 = rt_str_copy((((P1037)rt_nil_check(g_st_field_1106))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->pv_1984, rt_str(" = (", 4)), f_ctype_234(F->t_1976)), rt_str(" *)rt_r_mem_at(", 15)), F->av_1979), rt_str(", sizeof(", 9)), f_ctype_234(F->t_1976)), rt_str("));", 3)); b_; }));
(*(P1054)rt_nil_check(F->y_1977)).t = F->t_1976;
(*(P1054)rt_nil_check(F->y_1977)).c = F->c_1974;
if (g_in_func_1100) {
(*(P1054)rt_nil_check(F->y_1977)).level = g_cur_level_1101;
(*(P1054)rt_nil_check(F->y_1977)).access = f_mk_3(&F->pf_1985);
(*(P1054)rt_nil_check(F->y_1977)).byref = 1;
} else {
(*(P1054)rt_nil_check(F->y_1977)).level = ((rt_int)0LL);
(*(P1054)rt_nil_check(F->y_1977)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1984), rt_str(")", 1)); b_; }));
}
g_mark_uninit_1120 = (!f_suppressed_527(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; })));
f_init_storage_346(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1984), rt_str(")", 1)); b_; }), F->t_1976, F->c_1974);
g_mark_uninit_1120 = 0;
f_define_168(F->y_1977, (*(P1044)rt_nil_check(F->d_540)).line);
if (((*(P1044)rt_nil_check(F->d_540)).b != NULL)) {
F->vt_1986 = NULL;
F->v_1987 = rt_str_copy(f_gexpr_in_826((*(P1044)rt_nil_check(F->d_540)).b, F->t_1976, F->c_1974, &F->vt_1986));
f_check_type_232(F->vt_1986, F->t_1976, (*(P1044)rt_nil_check(F->d_540)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_426(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1984), rt_str(")", 1)); b_; }), F->t_1976, &F->v_1987, F->c_1974); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_rep_sync_544(P1054 y_542, int pack_543) {
  struct f_rep_sync_544fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_542 = y_542;
F->pack_543 = pack_543;
F->lv_1988 = rt_str_copy(f_access_of_762(F->y_542));
F->base_1989 = rt_str_copy(f_cbound_access_546(F->y_542));
F->saved_1990 = NULL;
F->saved_1990 = g_psub_1105;
F->p_1991 = NULL;
F->p_1991 = (*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_542)).t)).tparams;
F->r_1992 = NULL;
F->inner_1993 = NULL;
F->inner_1993 = f_mk_3(&F->lv_1988);
if (((*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_542)).t)).tparams != NULL)) {
F->inner_1993 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->lv_1988, rt_str(".all", 4)); b_; }));
}
f_open_scope_177();
while ((F->p_1991 != NULL)) {
F->z_1994 = NULL;
F->z_1994 = f_new_sym_181((((rt_int)2LL)), (*(P1044)rt_nil_check(F->p_1991)).name);
(*(P1054)rt_nil_check(F->z_1994)).t = f_tparam_type_357((*(P1054)rt_nil_check(F->y_542)).t, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1991)).name))->all));
(*(P1054)rt_nil_check(F->z_1994)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->lv_1988), rt_str(".p_", 3)), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_1991)).name))->all))), rt_str(")", 1)); b_; }));
f_define_168(F->z_1994, (*(P1054)rt_nil_check(F->y_542)).decl_line);
F->p_1991 = (*(P1044)rt_nil_check(F->p_1991)).next;
}
F->r_1992 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_code_566((*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_542)).t)).under, (*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_542)).t)).elemcons, (*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_542)).t)).repn, &(((P1037)rt_nil_check(F->inner_1993))->all), &F->base_1989, F->pack_543); b_; }));
f_close_scope_178();
g_psub_1105 = F->saved_1990;
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ ", 2), (((P1037)rt_nil_check(F->r_1992))->all)), rt_str(" }", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cbound_access_546(P1054 y_545) {
  struct f_cbound_access_546fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_545 = y_545;
F->c_1995 = NULL;
F->c_1995 = f_new_cons_184();
(*(P1046)rt_nil_check(F->c_1995)).dyn = ((*(P1054)rt_nil_check(F->y_545)).level > ((rt_int)0LL));
(*(P1046)rt_nil_check(F->c_1995)).lvl = (*(P1054)rt_nil_check(F->y_545)).level;
F->result_ = f_cbound_191(F->c_1995, &(((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_545)).loc))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_rep_size_550(P1044 items_547, P1050 t_548, P1046 c_549) {
  struct f_rep_size_550fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_547 = items_547;
F->t_548 = t_548;
F->c_549 = c_549;
F->it_1996 = NULL;
F->it_1996 = f_rep_find_553(F->items_547, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SIZE", 4); b_; }));
F->at_1997 = NULL;
if ((F->it_1996 != NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_815((*(P1044)rt_nil_check(F->it_1996)).a, g_ty_int_1129, &F->at_1997)), rt_str(")", 1));
goto ret_;
}
F->result_ = f_itos_7(f_default_bits_559(F->t_548, F->c_549));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_rep_find_553(P1044 items_551, rstr *w_552) {
  struct f_rep_find_553fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_551 = items_551;
F->w_552 = w_552;
F->it_1998 = NULL;
F->it_1998 = F->items_551;
while ((F->it_1998 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->it_1998)).name))->all), (*F->w_552))) {
F->result_ = F->it_1998;
goto ret_;
}
F->it_1998 = (*(P1044)rt_nil_check(F->it_1998)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_rep_comp_556(P1044 items_554, rstr *name_555) {
  struct f_rep_comp_556fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_554 = items_554;
F->name_555 = name_555;
F->r_1999 = NULL;
F->r_1999 = f_rep_find_553(F->items_554, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RECORD", 6); b_; }));
F->comp_2000 = NULL;
if ((F->r_1999 == NULL)) {
F->r_1999 = f_rep_find_553(F->items_554, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNION", 5); b_; }));
}
if ((F->r_1999 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->comp_2000 = (*(P1044)rt_nil_check(F->r_1999)).c;
while ((F->comp_2000 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->comp_2000)).name))->all), (*F->name_555))) {
F->result_ = (*(P1044)rt_nil_check(F->comp_2000)).a;
goto ret_;
}
F->comp_2000 = (*(P1044)rt_nil_check(F->comp_2000)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_default_bits_559(P1050 t_557, P1046 c_558) {
  struct f_default_bits_559fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_557 = t_557;
F->c_558 = c_558;
if ((((*(P1050)rt_nil_check(F->t_557)).kind == (((rt_int)7LL))) || ((*(P1050)rt_nil_check(F->t_557)).kind == (((rt_int)17LL))))) {
F->f_2001 = NULL;
F->f_2001 = (*(P1050)rt_nil_check(F->t_557)).fields;
F->n_2002 = ((rt_int)0LL);
if (((*(P1050)rt_nil_check(F->t_557)).kind == (((rt_int)17LL)))) {
F->n_2002 = f_needed_bits_326((*(P1050)rt_nil_check(F->t_557)).elem, NULL);
}
while ((F->f_2001 != NULL)) {
F->n_2002 = rt_add(F->n_2002, f_default_bits_559((*(P1052)rt_nil_check(F->f_2001)).t, (*(P1052)rt_nil_check(F->f_2001)).c));
F->f_2001 = (*(P1052)rt_nil_check(F->f_2001)).next;
}
F->result_ = F->n_2002;
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->t_557)).kind == (((rt_int)4LL))) && f_same_221(F->t_557, g_ty_ascii_1132))) {
F->result_ = ((rt_int)8LL);
goto ret_;
} else if ((f_needed_bits_326(F->t_557, F->c_558) > ((rt_int)0LL))) {
F->result_ = f_needed_bits_326(F->t_557, F->c_558);
goto ret_;
}
F->result_ = ((rt_int)64LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_rep_code_566(P1050 t_560, P1046 c_561, P1044 items_562, rstr *lval_563, rstr *addr_564, int pack_565) {
  struct f_rep_code_566fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_560 = t_560;
F->c_561 = c_561;
F->items_562 = items_562;
F->lval_563 = lval_563;
F->addr_564 = addr_564;
F->pack_565 = pack_565;
F->size_2003 = rt_str_copy(f_rep_size_550(F->items_562, F->t_560, F->c_561));
if ((((*(P1050)rt_nil_check(F->t_560)).kind == (((rt_int)7LL))) || ((*(P1050)rt_nil_check(F->t_560)).kind == (((rt_int)17LL))))) {
F->f_2004 = NULL;
F->f_2004 = (*(P1050)rt_nil_check(F->t_560)).fields;
F->r_2005 = NULL;
F->r_2005 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->off_2006 = NULL;
F->off_2006 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->i_2007 = ((rt_int)0LL);
if (((*(P1050)rt_nil_check(F->t_560)).kind == (((rt_int)17LL)))) {
F->ti_2008 = NULL;
F->ti_2008 = f_rep_comp_556(F->items_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TAG", 3); b_; }));
F->tsize_2009 = NULL;
F->tsize_2009 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(f_needed_bits_326((*(P1050)rt_nil_check(F->t_560)).elem, NULL)); b_; }));
F->toff_2010 = NULL;
F->toff_2010 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
if (((F->ti_2008 != NULL) && (f_rep_find_553(F->ti_2008, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SIZE", 4); b_; })) != NULL))) {
F->tsize_2009 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_size_550(F->ti_2008, (*(P1050)rt_nil_check(F->t_560)).elem, NULL); b_; }));
}
if (((F->ti_2008 != NULL) && (f_rep_find_553(F->ti_2008, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })) != NULL))) {
F->at_2011 = NULL;
F->toff_2010 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_815((*(P1044)rt_nil_check(f_rep_find_553(F->ti_2008, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })))).a, g_ty_int_1129, &F->at_2011)), rt_str(")", 1)); b_; }));
}
if (F->pack_565) {
F->r_2005 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_mem_put(", 13), (*F->addr_564)), rt_str(" + ", 3)), (((P1037)rt_nil_check(F->toff_2010))->all)), rt_str(", ", 2)), (((P1037)rt_nil_check(F->tsize_2009))->all)), rt_str(", (uint64_t)", 12)), (*F->lval_563)), rt_str(".tag);", 6)); b_; }));
} else {
F->r_2005 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_563), rt_str(".tag = (int)rt_r_mem_get(", 25)), (*F->addr_564)), rt_str(" + ", 3)), (((P1037)rt_nil_check(F->toff_2010))->all)), rt_str(", ", 2)), (((P1037)rt_nil_check(F->tsize_2009))->all)), rt_str(", 0);", 5)); b_; }));
}
F->off_2006 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1037)rt_nil_check(F->toff_2010))->all)), rt_str(" + ", 3)), (((P1037)rt_nil_check(F->tsize_2009))->all)), rt_str(")", 1)); b_; }));
}
while ((F->f_2004 != NULL)) {
F->ci_2012 = NULL;
F->ci_2012 = f_rep_comp_556(F->items_562, &(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_2004)).name))->all));
F->fo_2013 = NULL;
F->fo_2013 = F->off_2006;
F->fl_2014 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_563), rt_str(".", 1)), f_union_part_568(F->t_560)), f_field_c_17(&(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_2004)).name))->all))));
if (((F->ci_2012 != NULL) && (f_rep_find_553(F->ci_2012, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })) != NULL))) {
F->at_2015 = NULL;
F->fo_2013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_815((*(P1044)rt_nil_check(f_rep_find_553(F->ci_2012, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })))).a, g_ty_int_1129, &F->at_2015)), rt_str(")", 1)); b_; }));
}
{
F->part_2016 = rt_str_copy(f_rep_code_566((*(P1052)rt_nil_check(F->f_2004)).t, (*(P1052)rt_nil_check(F->f_2004)).c, F->ci_2012, &F->fl_2014, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->addr_564), rt_str(" + ", 3)), (((P1037)rt_nil_check(F->fo_2013))->all)); b_; }), F->pack_565));
if (((*(P1050)rt_nil_check(F->t_560)).kind == (((rt_int)17LL)))) {
F->r_2005 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_2005))->all), rt_str(" if (", 5)), (*F->lval_563)), rt_str(".tag == ", 8)), f_itos_7(F->i_2007)), rt_str(") { ", 4)), F->part_2016), rt_str(" }", 2)); b_; }));
} else {
F->r_2005 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_2005))->all), rt_str(" ", 1)), F->part_2016); b_; }));
}
}
if (((*(P1050)rt_nil_check(F->t_560)).kind == (((rt_int)7LL)))) {
F->off_2006 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1037)rt_nil_check(F->fo_2013))->all)), rt_str(" + ", 3)), f_rep_size_550(F->ci_2012, (*(P1052)rt_nil_check(F->f_2004)).t, (*(P1052)rt_nil_check(F->f_2004)).c)), rt_str(")", 1)); b_; }));
}
F->i_2007 = rt_add(F->i_2007, ((rt_int)1LL));
F->f_2004 = (*(P1052)rt_nil_check(F->f_2004)).next;
}
F->result_ = (((P1037)rt_nil_check(F->r_2005))->all);
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_560)).kind == (((rt_int)6LL)))) {
F->ai_2017 = NULL;
F->ai_2017 = f_rep_find_553(F->items_562, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ARRAY", 5); b_; }));
F->ei_2018 = NULL;
if ((F->ai_2017 != NULL)) {
F->ei_2018 = (*(P1044)rt_nil_check(F->ai_2017)).c;
}
{
F->es_2019 = rt_str_copy(f_rep_size_550(F->ei_2018, (*(P1050)rt_nil_check(F->t_560)).elem, (*(P1050)rt_nil_check(F->t_560)).elemcons));
F->iv_2020 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ri", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->iv_2020), rt_str(" = 0; ", 6)), F->iv_2020), rt_str(" < ", 3)), f_acnt_249(F->t_560, &(*F->lval_563))), rt_str("; ", 2)), F->iv_2020), rt_str("++) { ", 6)), f_rep_code_566((*(P1050)rt_nil_check(F->t_560)).elem, (*(P1050)rt_nil_check(F->t_560)).elemcons, F->ei_2018, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_563), rt_str(".p[", 3)), F->iv_2020), rt_str("]", 1)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->addr_564), rt_str(" + ", 3)), F->iv_2020), rt_str(" * ", 3)), F->es_2019); b_; }), F->pack_565)), rt_str(" }", 2));
goto ret_;
}
} else if (((*(P1050)rt_nil_check(F->t_560)).kind == (((rt_int)5LL)))) {
F->iv_2021 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ri", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->iv_2021), rt_str(" = 0; ", 6)), F->iv_2021), rt_str(" < ", 3)), (*F->lval_563)), rt_str(".len; ", 6)), F->iv_2021), rt_str("++) { ", 6)), f_rep_scalar_575(f_str_elem_218(F->t_560), NULL, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_563), rt_str(".p[", 3)), F->iv_2021), rt_str("]", 1)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->addr_564), rt_str(" + ", 3)), F->iv_2021), rt_str(" * 8", 4)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("8", 1); b_; }), F->pack_565)), rt_str(" }", 2));
goto ret_;
}
F->result_ = f_rep_scalar_575(F->t_560, F->c_561, &(*F->lval_563), &(*F->addr_564), &F->size_2003, F->pack_565);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_union_part_568(P1050 t_567) {
  struct f_union_part_568fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_567 = t_567;
if (((*(P1050)rt_nil_check(F->t_567)).kind == (((rt_int)17LL)))) {
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

static rstr f_rep_scalar_575(P1050 t_569, P1046 c_570, rstr *lval_571, rstr *addr_572, rstr *size_573, int pack_574) {
  struct f_rep_scalar_575fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_569 = t_569;
F->c_570 = c_570;
F->lval_571 = lval_571;
F->addr_572 = addr_572;
F->size_573 = size_573;
F->pack_574 = pack_574;
F->signed_2022 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->signed_2022, rt_str("0", 1));
if ((((*(P1050)rt_nil_check(F->t_569)).kind == (((rt_int)1LL))) && (!(((F->c_570 != NULL) && (*(P1046)rt_nil_check(F->c_570)).hasm) && ((*(P1046)rt_nil_check(F->c_570)).mlo >= ((rt_int)0LL)))))) {
rt_str_assign(&F->signed_2022, rt_str("1", 1));
}
if (((*(P1050)rt_nil_check(F->t_569)).kind == (((rt_int)3LL)))) {
if (F->pack_574) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_mem_putf(", 14), (*F->addr_572)), rt_str(", ", 2)), (*F->size_573)), rt_str(", ", 2)), (*F->lval_571)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_571), rt_str(" = rt_r_mem_getf(", 17)), (*F->addr_572)), rt_str(", ", 2)), (*F->size_573)), rt_str(");", 2));
goto ret_;
} else if (F->pack_574) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (!rt_r_undef_", 16), f_kind_name_228(f_base_of_223(F->t_569))), rt_str("(", 1)), (*F->lval_571)), rt_str(")) rt_r_mem_put(", 16)), (*F->addr_572)), rt_str(", ", 2)), (*F->size_573)), rt_str(", rt_r_fits((rt_int)(", 21)), (*F->lval_571)), rt_str("), ", 3)), (*F->size_573)), rt_str(", ", 2)), F->signed_2022), rt_str("));", 3));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_571), rt_str(" = rt_r_mem_get(", 16)), (*F->addr_572)), rt_str(", ", 2)), (*F->size_573)), rt_str(", ", 2)), F->signed_2022), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_max_range_578(P1050 t_576, P1046 c_577) {
  struct f_max_range_578fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_576 = t_576;
F->c_577 = c_577;
if ((F->c_577 == NULL)) {
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->t_576)).kind == (((rt_int)3LL))) && ((*(P1046)rt_nil_check(F->c_577)).prec != NULL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_maxprec(", 13), (((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_577)).prec))->all)), rt_str(");", 2)); b_; }));
}
if ((((*(P1050)rt_nil_check(F->t_576)).kind == (((rt_int)3LL))) && ((*(P1046)rt_nil_check(F->c_577)).lo != NULL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_maxrange_f(", 16), f_clo_193(F->c_577)), rt_str(", ", 2)), f_chi_195(F->c_577)), rt_str(");", 2)); b_; }));
} else if (((((*(P1050)rt_nil_check(F->t_576)).kind == (((rt_int)1LL))) && ((*(P1046)rt_nil_check(F->c_577)).lo != NULL)) && (!(*(P1046)rt_nil_check(F->c_577)).hasm))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_maxrange_i(", 16), f_clo_193(F->c_577)), rt_str(", ", 2)), f_chi_195(F->c_577)), rt_str(");", 2)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl2_580(P1044 d_579) {
  struct f_var_decl2_580fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_579 = d_579;
F->c_2023 = NULL;
F->t_2024 = NULL;
F->t_2024 = f_resolve_subtype_268((*(P1044)rt_nil_check(F->d_579)).a, &F->c_2023);
F->y_2025 = NULL;
F->y_2025 = f_new_sym_181((((rt_int)1LL)), (*(P1044)rt_nil_check(F->d_579)).name);
F->access_2026 = rt_str_copy(f_storage_534(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_579)).name))->all), F->t_2024));
F->c_2023 = f_freeze_209(F->c_2023, F->t_2024);
f_max_range_578(F->t_2024, F->c_2023);
if (((((*(P1050)rt_nil_check(F->t_2024)).kind == (((rt_int)8LL))) && (F->c_2023 != NULL)) && ((*(P1046)rt_nil_check(F->c_2023)).args != NULL))) {
F->c_2023 = f_freeze_args_506(F->c_2023, F->t_2024, (*(P1044)rt_nil_check(F->d_579)).line);
}
g_mark_uninit_1120 = (!f_suppressed_527(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; })));
f_init_storage_346(&F->access_2026, F->t_2024, F->c_2023);
g_mark_uninit_1120 = 0;
if (((*(P1044)rt_nil_check(F->d_579)).ival == ((rt_int)1LL))) {
F->it_2027 = NULL;
F->n_2028 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->d_579)).c, g_ty_int_1129, &F->it_2027));
if (((*(P1050)rt_nil_check(F->t_2024)).kind != (((rt_int)12LL)))) {
f_fail_23((*(P1044)rt_nil_check(F->d_579)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_221((*(P1050)rt_nil_check(F->t_2024)).elem, g_ty_ascii_1132)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_2026), rt_str(", ", 2)), F->n_2028), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_2026), rt_str(", ", 2)), F->n_2028), rt_str(", 0);", 5)); b_; }));
}
}
if (((*(P1044)rt_nil_check(F->d_579)).b != NULL)) {
F->vt_2029 = NULL;
F->v_2030 = rt_str_copy(f_gexpr_in_826((*(P1044)rt_nil_check(F->d_579)).b, F->t_2024, F->c_2023, &F->vt_2029));
f_check_type_232(F->vt_2029, F->t_2024, (*(P1044)rt_nil_check(F->d_579)).line);
f_ptr_subtype_check_510(F->t_2024, F->c_2023, (*(P1044)rt_nil_check(F->d_579)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_426(&F->access_2026, F->t_2024, &F->v_2030, F->c_2023); b_; }));
}
(*(P1054)rt_nil_check(F->y_2025)).t = F->t_2024;
(*(P1054)rt_nil_check(F->y_2025)).c = F->c_2023;
f_bind_537(F->y_2025, &F->access_2026);
f_define_168(F->y_2025, (*(P1044)rt_nil_check(F->d_579)).line);
if (f_needs_fin_351(F->t_2024)) {
f_open_fin_582(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_354(&F->access_2026, F->t_2024); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_582(rstr *fc_581) {
  struct f_open_fin_582fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_581 = fc_581;
F->f_2031 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_2032 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2031), rt_str("; if (RT_TRY(", 13)), F->f_2031), rt_str(")) {", 4)); b_; }));
f_push_cleanup_620(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2031), rt_str("); ", 3)), (*F->fc_581)); b_; }));
{ R1049 *cell2033 = rt_alloc(sizeof(R1049));
(*cell2033).s = NULL;
(*cell2033).next = NULL;
F->l_2032 = cell2033;
}
(*(P1048)rt_nil_check(F->l_2032)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2031), rt_str("); ", 3)), (*F->fc_581)), rt_str(" } else { RT_POP(", 17)), F->f_2031), rt_str("); ", 3)), (*F->fc_581)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P1048)rt_nil_check(F->l_2032)).next = g_fins_1110;
g_fins_1110 = F->l_2032;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_584(P1048 saved_583) {
  struct f_close_fins_584fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_583 = saved_583;
while (((g_fins_1110 != F->saved_583) && (g_fins_1110 != NULL))) {
f_emit_29(&(((P1037)rt_nil_check((*(P1048)rt_nil_check(g_fins_1110)).s))->all));
f_pop_cleanup_621();
g_fins_1110 = (*(P1048)rt_nil_check(g_fins_1110)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_586(P1044 d_585) {
  struct f_const_decl_586fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_585 = d_585;
F->c_2034 = NULL;
F->c_2034 = f_new_cons_184();
F->t_2035 = NULL;
F->vt_2036 = NULL;
F->y_2037 = NULL;
F->y_2037 = f_new_sym_181((((rt_int)2LL)), (*(P1044)rt_nil_check(F->d_585)).name);
if (((*(P1044)rt_nil_check(F->d_585)).a != NULL)) {
F->t_2035 = f_resolve_subtype_268((*(P1044)rt_nil_check(F->d_585)).a, &F->c_2034);
}
{
F->v_2039 = rt_str_copy(f_gexpr_in_826((*(P1044)rt_nil_check(F->d_585)).b, F->t_2035, F->c_2034, &F->vt_2036));
if ((F->t_2035 != NULL)) {
f_check_type_232(F->vt_2036, F->t_2035, (*(P1044)rt_nil_check(F->d_585)).line);
} else {
F->t_2035 = F->vt_2036;
}
if (((*(P1050)rt_nil_check(F->t_2035)).kind == (((rt_int)1LL)))) {
(*(P1054)rt_nil_check(F->y_2037)).mvalue = f_manifest_381((*(P1044)rt_nil_check(F->d_585)).b, &F->ok_2038);
(*(P1054)rt_nil_check(F->y_2037)).hasmv = F->ok_2038;
}
{
F->access_2040 = rt_str_copy(f_storage_534(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_585)).name))->all), F->t_2035));
if (((*(P1050)rt_nil_check(F->t_2035)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_349((*(P1050)rt_nil_check(F->t_2035)).initp, &F->access_2040); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_2040, rt_str(" = ", 3)), f_checked_213(F->t_2035, F->c_2034, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_429(F->t_2035, &F->v_2039); b_; }))), rt_str(";", 1)); b_; }));
f_bind_537(F->y_2037, &F->access_2040);
if (f_needs_fin_351(F->t_2035)) {
f_open_fin_582(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_354(&F->access_2040, F->t_2035); b_; }));
}
}
}
(*(P1054)rt_nil_check(F->y_2037)).t = F->t_2035;
(*(P1054)rt_nil_check(F->y_2037)).c = F->c_2034;
(*(P1054)rt_nil_check(F->y_2037)).ro_flag = 1;
f_define_168(F->y_2037, (*(P1044)rt_nil_check(F->d_585)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_588(P1044 d_587) {
  struct f_subprogram_588fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_587 = d_587;
f_gen_subprogram_591(F->d_587, f_lookup_decl_165(F->d_587));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_591(P1044 d_589, P1054 y_590) {
  struct f_gen_subprogram_591fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_589 = d_589;
F->y_590 = y_590;
F->saved_code_2041 = NULL;
F->saved_code_2041 = g_code_1098;
F->saved_fields_2042 = NULL;
F->saved_fields_2042 = g_fields_buf_1099;
F->saved_in_2043 = g_in_func_1100;
F->saved_sym_2044 = NULL;
F->saved_sym_2044 = g_func_sym_1112;
F->saved_exits_2045 = NULL;
F->saved_exits_2045 = g_exits_1122;
F->saved_gotos_2046 = NULL;
F->saved_gotos_2046 = g_gotos_1123;
F->saved_frames_2047 = g_frames_1124;
F->args_2048 = NULL;
F->args_2048 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_2049 = NULL;
F->pm_2049 = (*(P1054)rt_nil_check(F->y_590)).params;
F->saved_handlers_2050 = NULL;
F->saved_handlers_2050 = g_handlers_1125;
F->saved_cleanups_2051 = NULL;
F->saved_cleanups_2051 = g_cleanups_1126;
F->ctx_2052 = NULL;
F->head_2053 = NULL;
F->frame_2054 = NULL;
F->frame_2054 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_590)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_2055 = NULL;
F->copy_back_2056 = NULL;
F->copy_back_2056 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_2057 = NULL;
F->pfin_2057 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_2058 = NULL;
F->saved_fins_2058 = g_fins_1110;
F->saved_rc_2059 = NULL;
F->saved_rc_2059 = g_func_rc_1113;
F->saved_ret_2060 = NULL;
F->saved_ret_2060 = g_cap_ret_1114;
F->saved_rflag_2061 = NULL;
F->saved_rflag_2061 = g_cap_rflag_1115;
F->pn_2062 = NULL;
F->pn_2062 = (*(P1044)rt_nil_check(F->d_589)).a;
F->nonrec_end_2063 = NULL;
if (g_in_func_1100) {
F->parent_2055 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1054)rt_nil_check(g_func_sym_1112)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_1110 = NULL;
g_func_rc_1113 = NULL;
g_cap_ret_1114 = NULL;
g_cap_rflag_1115 = NULL;
g_code_1098 = f_new_buffer_24();
g_fields_buf_1099 = f_new_buffer_24();
g_in_func_1100 = 1;
g_func_sym_1112 = F->y_590;
g_exits_1122 = NULL;
g_gotos_1123 = NULL;
g_frames_1124 = ((rt_int)0LL);
g_handlers_1125 = NULL;
g_cleanups_1126 = NULL;
g_cur_level_1101 = rt_add(g_cur_level_1101, ((rt_int)1LL));
f_open_scope_177();
{ R1062 *cell2065 = rt_alloc(sizeof(R1062));
(*cell2065).imps = NULL;
(*cell2065).next = NULL;
F->ctx_2052 = cell2065;
}
(*(P1061)rt_nil_check(F->ctx_2052)).depth = g_depth_1087;
(*(P1061)rt_nil_check(F->ctx_2052)).imps = (*(P1044)rt_nil_check(F->d_589)).d;
(*(P1061)rt_nil_check(F->ctx_2052)).all_imp = ((*(P1044)rt_nil_check(F->d_589)).flag >= ((rt_int)2LL));
(*(P1061)rt_nil_check(F->ctx_2052)).next = g_fctx_1102;
g_fctx_1102 = F->ctx_2052;
if ((F->parent_2055 != NULL)) {
f_put_27(g_fields_buf_1099, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P1037)rt_nil_check(F->parent_2055))->all)), rt_str(" *up;", 5)); b_; }));
if (((*(P1054)rt_nil_check(F->y_590)).kind != (((rt_int)9LL)))) {
F->args_2048 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1037)rt_nil_check(F->parent_2055))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_2049 != NULL)) {
F->ct_2066 = rt_str_copy(f_ctype_234((*(P1056)rt_nil_check(F->pm_2049)).t));
F->f_2067 = rt_str_copy((((P1037)rt_nil_check((*(P1056)rt_nil_check(F->pm_2049)).cfield))->all));
F->p_2068 = NULL;
F->pc_2069 = NULL;
F->pc_2069 = (*(P1056)rt_nil_check(F->pm_2049)).c;
F->ac_2070 = NULL;
if ((((rt_int)(((((P1037)rt_nil_check(F->args_2048))->all)).len)) > ((rt_int)0LL))) {
F->args_2048 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->args_2048))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_186((*(P1056)rt_nil_check(F->pm_2049)).t)) {
F->fc_2071 = NULL;
F->ft_2072 = NULL;
F->ft_2072 = f_resolve_subtype_268((*(P1044)rt_nil_check(F->pn_2062)).a, &F->fc_2071);
F->pc_2069 = f_freeze_209(F->fc_2071, (*(P1056)rt_nil_check(F->pm_2049)).t);
}
if (((*(P1056)rt_nil_check(F->pm_2049)).mode == (((rt_int)1LL)))) {
F->p_2068 = f_new_sym_181((((rt_int)2LL)), (*(P1056)rt_nil_check(F->pm_2049)).name);
f_put_27(g_fields_buf_1099, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_2066), rt_str(" ", 1)), F->f_2067), rt_str(";", 1)); b_; }));
F->args_2048 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->args_2048))->all), F->ct_2066), rt_str(" ", 1)), F->f_2067); b_; }));
(*(P1054)rt_nil_check(F->p_2068)).access = f_mk_3(&F->f_2067);
if (((*(P1054)rt_nil_check(F->y_590)).kind != (((rt_int)9LL)))) {
if (((*(P1050)rt_nil_check((*(P1056)rt_nil_check(F->pm_2049)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_349((*(P1050)rt_nil_check((*(P1056)rt_nil_check(F->pm_2049)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_2067); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2067), rt_str(" = ", 3)), f_checked_213((*(P1056)rt_nil_check(F->pm_2049)).t, F->pc_2069, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_429((*(P1056)rt_nil_check(F->pm_2049)).t, &F->f_2067); b_; }))), rt_str(";", 1)); b_; }));
if (((((*(P1050)rt_nil_check((*(P1056)rt_nil_check(F->pm_2049)).t)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check((*(P1056)rt_nil_check(F->pm_2049)).t)).assignp != NULL)) && ((*(P1050)rt_nil_check((*(P1056)rt_nil_check(F->pm_2049)).t)).assignp != F->y_590))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_user_call2_415((*(P1050)rt_nil_check((*(P1056)rt_nil_check(F->pm_2049)).t)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_2067); b_; }), 1, &F->f_2067, 0), rt_str(";", 1)); b_; }));
}
if (f_needs_fin_351((*(P1056)rt_nil_check(F->pm_2049)).t)) {
F->pfin_2057 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->pfin_2057))->all), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_2067); b_; }), (*(P1056)rt_nil_check(F->pm_2049)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_2068 = f_new_sym_181((((rt_int)1LL)), (*(P1056)rt_nil_check(F->pm_2049)).name);
f_put_27(g_fields_buf_1099, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_2066), rt_str(" *", 2)), F->f_2067), rt_str(";", 1)); b_; }));
F->args_2048 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->args_2048))->all), F->ct_2066), rt_str(" *", 2)), F->f_2067); b_; }));
(*(P1054)rt_nil_check(F->p_2068)).access = f_mk_3(&F->f_2067);
(*(P1054)rt_nil_check(F->p_2068)).byref = 1;
if (((*(P1054)rt_nil_check(F->y_590)).kind != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2067), rt_str(" = ", 3)), F->f_2067), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_186((*(P1056)rt_nil_check(F->pm_2049)).t)) {
F->bt_2073 = rt_str_copy(f_bound_ctype_188((*(P1056)rt_nil_check(F->pm_2049)).t));
f_put_27(g_fields_buf_1099, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_2073), rt_str(" ", 1)), F->f_2067), rt_str("lo, ", 4)), F->f_2067), rt_str("hi;", 3)); b_; }));
F->args_2048 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->args_2048))->all), rt_str(", ", 2)), F->bt_2073), rt_str(" ", 1)), F->f_2067), rt_str("lo, ", 4)), F->bt_2073), rt_str(" ", 1)), F->f_2067), rt_str("hi", 2)); b_; }));
if (((*(P1054)rt_nil_check(F->y_590)).kind != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2067), rt_str("lo = ", 5)), F->f_2067), rt_str("lo; F->", 7)), F->f_2067), rt_str("hi = ", 5)), F->f_2067), rt_str("hi;", 3)); b_; }));
}
F->ac_2070 = f_new_cons_184();
(*(P1046)rt_nil_check(F->ac_2070)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_2067, rt_str("lo", 2)); b_; }));
(*(P1046)rt_nil_check(F->ac_2070)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_2067, rt_str("hi", 2)); b_; }));
(*(P1046)rt_nil_check(F->ac_2070)).dyn = 1;
(*(P1046)rt_nil_check(F->ac_2070)).lvl = g_cur_level_1101;
if (((F->pc_2069 == NULL) || ((*(P1046)rt_nil_check(F->pc_2069)).lo == NULL))) {
F->pc_2069 = F->ac_2070;
} else if (((*(P1056)rt_nil_check(F->pm_2049)).mode != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_2067), rt_str("lo <= F->", 9)), F->f_2067), rt_str("hi && (F->", 10)), F->f_2067), rt_str("lo != ", 6)), f_sub_lo_198((*(P1056)rt_nil_check(F->pm_2049)).t, F->pc_2069)), rt_str(" || F->", 7)), F->f_2067), rt_str("hi != ", 6)), f_sub_hi_201((*(P1056)rt_nil_check(F->pm_2049)).t, F->pc_2069)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if ((((*(P1056)rt_nil_check(F->pm_2049)).mode == (((rt_int)3LL))) && ((*(P1054)rt_nil_check(F->y_590)).kind != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_1099, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_2066), rt_str(" ", 1)), F->f_2067), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2067), rt_str("v = ", 4)), f_copy_code_429((*(P1056)rt_nil_check(F->pm_2049)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_2067); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P1050)rt_nil_check((*(P1056)rt_nil_check(F->pm_2049)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_349((*(P1050)rt_nil_check((*(P1056)rt_nil_check(F->pm_2049)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2067), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_2070 == NULL)) {
F->ac_2070 = (*(P1056)rt_nil_check(F->pm_2049)).c;
}
if ((!rt_str_eq(f_uninit_value_375(f_base_of_223((*(P1056)rt_nil_check(F->pm_2049)).t)), rt_str("", 0)))) {
F->copy_back_2056 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->copy_back_2056))->all), rt_str("  if (!rt_r_undef_", 18)), f_kind_name_228(f_base_of_223((*(P1056)rt_nil_check(F->pm_2049)).t))), rt_str("(F->", 4)), F->f_2067), rt_str("v)) ", 4)), f_assign_code_426(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_2067), rt_str(")", 1)); b_; }), (*(P1056)rt_nil_check(F->pm_2049)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2067), rt_str("v", 1)); b_; }), F->ac_2070)); b_; }));
} else {
F->copy_back_2056 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->copy_back_2056))->all), rt_str("  ", 2)), f_assign_code_426(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_2067), rt_str(")", 1)); b_; }), (*(P1056)rt_nil_check(F->pm_2049)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2067), rt_str("v", 1)); b_; }), F->ac_2070)); b_; }));
}
if (f_needs_fin_351((*(P1056)rt_nil_check(F->pm_2049)).t)) {
F->pfin_2057 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->pfin_2057))->all), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2067), rt_str("v", 1)); b_; }), (*(P1056)rt_nil_check(F->pm_2049)).t)), rt_str(" ", 1)); b_; }));
}
(*(P1054)rt_nil_check(F->p_2068)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_2067, rt_str("v", 1)); b_; }));
(*(P1054)rt_nil_check(F->p_2068)).byref = 0;
}
}
(*(P1054)rt_nil_check(F->p_2068)).t = (*(P1056)rt_nil_check(F->pm_2049)).t;
(*(P1054)rt_nil_check(F->p_2068)).c = F->pc_2069;
(*(P1054)rt_nil_check(F->p_2068)).level = g_cur_level_1101;
(*(P1054)rt_nil_check(F->p_2068)).ro_flag = (((*(P1056)rt_nil_check(F->pm_2049)).mode == (((rt_int)1LL))) || ((*(P1056)rt_nil_check(F->pm_2049)).mode == (((rt_int)4LL))));
f_define_168(F->p_2068, (*(P1044)rt_nil_check(F->d_589)).line);
F->pm_2049 = (*(P1056)rt_nil_check(F->pm_2049)).next;
F->pn_2062 = (*(P1044)rt_nil_check(F->pn_2062)).next;
}
if (((*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_590)).result)).kind != (((rt_int)9LL)))) {
if (((*(P1044)rt_nil_check(F->d_589)).b != NULL)) {
F->rc_2074 = NULL;
F->rt_2075 = NULL;
F->rt_2075 = f_resolve_subtype_268((*(P1044)rt_nil_check(F->d_589)).b, &F->rc_2074);
g_func_rc_1113 = f_freeze_209(F->rc_2074, (*(P1054)rt_nil_check(F->y_590)).result);
}
f_put_27(g_fields_buf_1099, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234((*(P1054)rt_nil_check(F->y_590)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_590)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_349((*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_590)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_2064 = (((rt_int)(((((P1037)rt_nil_check(F->pfin_2057))->all)).len)) > ((rt_int)0LL));
if (F->has_pfin_2064) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_620(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_523((*(P1044)rt_nil_check(F->d_589)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_523((*(P1044)rt_nil_check(F->d_589)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_2076 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_2077 = NULL;
F->leave_2077 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_2076), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_1094, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_2076), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_2076), rt_str(", ", 2)), f_bool_text_397(f_has_pragmat_523((*(P1044)rt_nil_check(F->d_589)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_397(f_has_pragmat_523((*(P1044)rt_nil_check(F->d_589)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->d_589)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_620(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_2056 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->copy_back_2056))->all), rt_str("  ", 2)), (((P1037)rt_nil_check(F->leave_2077))->all)); b_; }));
F->nonrec_end_2063 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P1037)rt_nil_check(F->leave_2077))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
if (f_has_pragmat_523((*(P1044)rt_nil_check(F->d_589)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOREIGN", 7); b_; }))) {
f_foreign_body_516(F->d_589, F->y_590);
}
f_declare_labels_601((*(P1044)rt_nil_check(F->d_589)).c);
f_declare_body_445((*(P1044)rt_nil_check(F->d_589)).c);
{
F->xu_2078 = rt_str_copy(f_open_unhandled_614((*(P1044)rt_nil_check(F->d_589)).c));
f_body_elements_610((*(P1044)rt_nil_check(F->d_589)).c);
f_close_fins_584(NULL);
f_close_unhandled_616(&F->xu_2078);
}
if ((F->nonrec_end_2063 != NULL)) {
f_emit_29(&(((P1037)rt_nil_check(F->nonrec_end_2063))->all));
f_pop_cleanup_621();
}
if (F->has_pfin_2064) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P1037)rt_nil_check(F->pfin_2057))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_621();
F->copy_back_2056 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->copy_back_2056))->all), rt_str("  ", 2)), (((P1037)rt_nil_check(F->pfin_2057))->all)); b_; }));
}
f_close_scope_178();
g_fctx_1102 = (*(P1061)rt_nil_check(g_fctx_1102)).next;
g_cur_level_1101 = rt_sub(g_cur_level_1101, ((rt_int)1LL));
if (((((rt_int)(((((P1037)rt_nil_check(F->args_2048))->all)).len)) == ((rt_int)0LL)) || ((*(P1054)rt_nil_check(F->y_590)).kind == (((rt_int)9LL))))) {
F->args_2048 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P1054)rt_nil_check(F->y_590)).kind == (((rt_int)9LL)))) {
F->args_2048 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_2053 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234((*(P1054)rt_nil_check(F->y_590)).result)), rt_str(" ", 1)), (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_590)).cname))->all)), rt_str("(", 1)), (((P1037)rt_nil_check(F->args_2048))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_1093, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->head_2053))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->head_2053))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_1107, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1037)rt_nil_check(F->frame_2054))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_1107, g_fields_buf_1099);
f_put_27(g_out_frames_1107, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P1054)rt_nil_check(F->y_590)).kind == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1037)rt_nil_check(F->frame_2054))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1037)rt_nil_check(F->frame_2054))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_1095, g_code_1098);
if (((*(P1050)rt_nil_check((*(P1054)rt_nil_check(F->y_590)).result)).kind != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P1037)rt_nil_check(F->copy_back_2056))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_1095, &(((P1037)rt_nil_check(F->copy_back_2056))->all));
}
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P1037)rt_nil_check(F->copy_back_2056))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_1095, &(((P1037)rt_nil_check(F->copy_back_2056))->all));
}
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_1098 = F->saved_code_2041;
g_fields_buf_1099 = F->saved_fields_2042;
g_in_func_1100 = F->saved_in_2043;
g_func_sym_1112 = F->saved_sym_2044;
g_exits_1122 = F->saved_exits_2045;
g_gotos_1123 = F->saved_gotos_2046;
g_frames_1124 = F->saved_frames_2047;
g_handlers_1125 = F->saved_handlers_2050;
g_cleanups_1126 = F->saved_cleanups_2051;
g_fins_1110 = F->saved_fins_2058;
g_func_rc_1113 = F->saved_rc_2059;
g_cap_ret_1114 = F->saved_ret_2060;
g_cap_rflag_1115 = F->saved_rflag_2061;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_593(P1044 d_592) {
  struct f_waits_of_593fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_592 = d_592;
F->w_2079 = NULL;
F->w_2079 = g_cap_waits_1104;
while ((F->w_2079 != NULL)) {
if (((*(P1073)rt_nil_check(F->w_2079)).d == F->d_592)) {
F->result_ = (((P1037)rt_nil_check((*(P1073)rt_nil_check(F->w_2079)).w))->all);
goto ret_;
}
F->w_2079 = (*(P1073)rt_nil_check(F->w_2079)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_595(P1044 elems_594) {
  struct f_task_waits_595fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_594 = elems_594;
F->e_2080 = NULL;
F->e_2080 = F->elems_594;
F->r_2081 = NULL;
F->r_2081 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_2080 != NULL)) {
if (((*(P1044)rt_nil_check(F->e_2080)).kind == (((rt_int)50LL)))) {
F->r_2081 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_2081))->all), rt_str(" rt_await_decl(&", 16)), (((P1037)rt_nil_check((*(P1054)rt_nil_check(f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_2080)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if ((((*(P1044)rt_nil_check(F->e_2080)).kind == (((rt_int)47LL))) || (((*(P1044)rt_nil_check(F->e_2080)).kind == (((rt_int)48LL))) && (((*(P1044)rt_nil_check(F->e_2080)).flag == ((rt_int)1LL)) || ((*(P1044)rt_nil_check(F->e_2080)).flag == ((rt_int)3LL)))))) {
F->r_2081 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_2081))->all), f_waits_of_593(F->e_2080)); b_; }));
}
F->e_2080 = (*(P1044)rt_nil_check(F->e_2080)).next;
}
F->result_ = (((P1037)rt_nil_check(F->r_2081))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_597(P1044 elems_596) {
  struct f_await_tasks_597fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_596 = elems_596;
F->w_2082 = rt_str_copy(f_task_waits_595(F->elems_596));
if ((((rt_int)((F->w_2082).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2082);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_599(P1044 elems_598) {
  struct f_capsule_elements_599fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_598 = elems_598;
F->e_2083 = NULL;
F->e_2083 = F->elems_598;
while ((F->e_2083 != NULL)) {
if ((((*(P1044)rt_nil_check(F->e_2083)).kind >= (((rt_int)20LL))) && ((*(P1044)rt_nil_check(F->e_2083)).kind <= (((rt_int)36LL))))) {
f_start_labels_602();
}
f_element_529(F->e_2083);
F->e_2083 = (*(P1044)rt_nil_check(F->e_2083)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_601(P1044 elems_600) {
  struct f_declare_labels_601fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_600 = elems_600;
F->e_2084 = NULL;
F->e_2084 = F->elems_600;
while ((F->e_2084 != NULL)) {
F->l_2085 = NULL;
F->l_2085 = (*(P1044)rt_nil_check(F->e_2084)).labels;
while ((F->l_2085 != NULL)) {
F->x_2086 = NULL;
F->x_2086 = g_gotos_1123;
while (((F->x_2086 != NULL) && ((*(P1069)rt_nil_check(F->x_2086)).depth == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1069)rt_nil_check(F->x_2086)).match))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->l_2085)).name))->all))) {
f_fail_23((*(P1044)rt_nil_check(F->l_2085)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->l_2085)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_2086 = (*(P1069)rt_nil_check(F->x_2086)).next;
}
{ R1070 *cell2087 = rt_alloc(sizeof(R1070));
(*cell2087).match = NULL;
(*cell2087).label = NULL;
(*cell2087).next = NULL;
F->x_2086 = cell2087;
}
(*(P1069)rt_nil_check(F->x_2086)).match = (*(P1044)rt_nil_check(F->l_2085)).name;
(*(P1069)rt_nil_check(F->x_2086)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P1069)rt_nil_check(F->x_2086)).depth = rt_neg(((rt_int)1LL));
(*(P1069)rt_nil_check(F->x_2086)).next = g_gotos_1123;
g_gotos_1123 = F->x_2086;
F->l_2085 = (*(P1044)rt_nil_check(F->l_2085)).next;
}
F->e_2084 = (*(P1044)rt_nil_check(F->e_2084)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_602(void) {
  struct f_start_labels_602fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_2088 = NULL;
F->x_2088 = g_gotos_1123;
while (((F->x_2088 != NULL) && ((*(P1069)rt_nil_check(F->x_2088)).depth == rt_neg(((rt_int)1LL))))) {
(*(P1069)rt_nil_check(F->x_2088)).depth = g_frames_1124;
F->x_2088 = (*(P1069)rt_nil_check(F->x_2088)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P1069 f_goto_label_604(rstr *name_603) {
  struct f_goto_label_604fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_603 = name_603;
F->x_2089 = NULL;
F->x_2089 = g_gotos_1123;
while ((F->x_2089 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1069)rt_nil_check(F->x_2089)).match))->all), (*F->name_603))) {
F->result_ = F->x_2089;
goto ret_;
}
F->x_2089 = (*(P1069)rt_nil_check(F->x_2089)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_606(P1044 e_605) {
  struct f_has_return_606fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_605 = e_605;
F->x_2090 = NULL;
F->x_2090 = F->e_605;
while ((F->x_2090 != NULL)) {
if (((*(P1044)rt_nil_check(F->x_2090)).kind == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if (((((((*(P1044)rt_nil_check(F->x_2090)).kind != (((rt_int)45LL))) && ((*(P1044)rt_nil_check(F->x_2090)).kind != (((rt_int)46LL)))) && ((*(P1044)rt_nil_check(F->x_2090)).kind != (((rt_int)50LL)))) && ((*(P1044)rt_nil_check(F->x_2090)).kind != (((rt_int)47LL)))) && ((*(P1044)rt_nil_check(F->x_2090)).kind != (((rt_int)51LL))))) {
if ((((((*(P1044)rt_nil_check(F->x_2090)).a != NULL) && f_has_return_606((*(P1044)rt_nil_check(F->x_2090)).a)) || (((*(P1044)rt_nil_check(F->x_2090)).b != NULL) && f_has_return_606((*(P1044)rt_nil_check(F->x_2090)).b))) || (((*(P1044)rt_nil_check(F->x_2090)).c != NULL) && f_has_return_606((*(P1044)rt_nil_check(F->x_2090)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_2090 = (*(P1044)rt_nil_check(F->x_2090)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_608(P1044 elems_607) {
  struct f_capsule_body_608fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_607 = elems_607;
F->saved_ret_2091 = NULL;
F->saved_ret_2091 = g_cap_ret_1114;
F->saved_flag_2092 = NULL;
F->saved_flag_2092 = g_cap_rflag_1115;
F->saved_frames_2093 = g_ret_frames_1116;
F->e_2094 = NULL;
F->e_2094 = F->elems_607;
if ((!f_has_return_606(F->elems_607))) {
g_cap_ret_1114 = NULL;
g_cap_rflag_1115 = NULL;
f_capsule_elements_599(F->elems_607);
} else {
g_cap_rflag_1115 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(g_cap_rflag_1115))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_2094 != NULL)) {
F->stmt_2095 = (((*(P1044)rt_nil_check(F->e_2094)).kind >= (((rt_int)20LL))) && ((*(P1044)rt_nil_check(F->e_2094)).kind <= (((rt_int)36LL))));
g_cap_ret_1114 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_1116 = g_frames_1124;
if (F->stmt_2095) {
f_start_labels_602();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P1037)rt_nil_check(g_cap_rflag_1115))->all)), rt_str(") {", 3)); b_; }));
}
f_element_529(F->e_2094);
if (F->stmt_2095) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(g_cap_ret_1114))->all), rt_str(": ;", 3)); b_; }));
F->e_2094 = (*(P1044)rt_nil_check(F->e_2094)).next;
}
}
g_cap_ret_1114 = F->saved_ret_2091;
g_cap_rflag_1115 = F->saved_flag_2092;
g_ret_frames_1116 = F->saved_frames_2093;
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_610(P1044 elems_609) {
  struct f_body_elements_610fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_609 = elems_609;
f_capsule_elements_599(F->elems_609);
f_await_tasks_597(F->elems_609);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_612(P1044 elems_611) {
  struct f_gen_body_612fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_611 = elems_611;
F->saved_2096 = NULL;
F->saved_2096 = g_fins_1110;
F->saved_gotos_2097 = NULL;
F->saved_gotos_2097 = g_gotos_1123;
f_open_scope_177();
f_declare_labels_601(F->elems_611);
f_declare_body_445(F->elems_611);
{
F->xu_2098 = rt_str_copy(f_open_unhandled_614(F->elems_611));
f_body_elements_610(F->elems_611);
f_close_fins_584(F->saved_2096);
f_close_unhandled_616(&F->xu_2098);
}
f_close_scope_178();
g_gotos_1123 = F->saved_gotos_2097;
ret_:
  RT_FPOP();
  return;
}

static rstr f_open_unhandled_614(P1044 elems_613) {
  struct f_open_unhandled_614fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_613 = elems_613;
F->e_2099 = NULL;
F->e_2099 = F->elems_613;
F->conds_2100 = NULL;
F->conds_2100 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->e_2099 != NULL)) {
if (((*(P1044)rt_nil_check(F->e_2099)).kind == (((rt_int)49LL)))) {
F->conds_2100 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->conds_2100))->all), rt_str(" || rt_xcur == ", 15)), (((P1037)rt_nil_check((*(P1054)rt_nil_check(f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_2099)).name))->all)))).cname))->all)); b_; }));
}
F->e_2099 = (*(P1044)rt_nil_check(F->e_2099)).next;
}
if ((((rt_int)(((((P1037)rt_nil_check(F->conds_2100))->all)).len)) == ((rt_int)1LL))) {
F->result_ = rt_str("", 0);
goto ret_;
}
{
F->f_2101 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xu", 2); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2101), rt_str("; if (RT_TRY(", 13)), F->f_2101), rt_str(")) {", 4)); b_; }));
f_push_cleanup_620(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2101), rt_str(");", 2)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(F->f_2101, rt_str(":", 1)), (((P1037)rt_nil_check(F->conds_2100))->all));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_close_unhandled_616(rstr *xu_615) {
  struct f_close_unhandled_616fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->xu_615 = xu_615;
F->i_2102 = ((rt_int)1LL);
if (rt_str_eq((*F->xu_615), rt_str("", 0))) {
goto ret_;
}
while ((rt_str_get((*F->xu_615), F->i_2102) != 58)) {
F->i_2102 = rt_add(F->i_2102, ((rt_int)1LL));
}
{
F->f_2103 = rt_str_copy(rt_str_slice((*F->xu_615), ((rt_int)1LL), rt_sub(F->i_2102, ((rt_int)1LL))));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2103), rt_str("); } else { RT_POP(", 19)), F->f_2103), rt_str("); if (", 7)), rt_str_slice((*F->xu_615), rt_add(F->i_2102, ((rt_int)1LL)), ((rt_int)(((*F->xu_615)).len)))), rt_str(") rt_raise(rt_exc(", 18)), f_q_18()), rt_str("X_UNHANDLED", 11)), f_q_18()), rt_str(")); rt_raise(rt_xcur); }", 24)); b_; }));
f_pop_cleanup_621();
}
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_618(rt_int upto_617) {
  struct f_pop_frames_618fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_617 = upto_617;
F->i_2104 = g_frames_1124;
F->c_2105 = NULL;
F->c_2105 = g_cleanups_1126;
while ((F->i_2104 > F->upto_617)) {
f_emit_29(&(((P1037)rt_nil_check((*(P1048)rt_nil_check(F->c_2105)).s))->all));
F->c_2105 = (*(P1048)rt_nil_check(F->c_2105)).next;
F->i_2104 = rt_sub(F->i_2104, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_620(rstr *s_619) {
  struct f_push_cleanup_620fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_619 = s_619;
F->c_2106 = NULL;
{ R1049 *cell2107 = rt_alloc(sizeof(R1049));
(*cell2107).s = NULL;
(*cell2107).next = NULL;
F->c_2106 = cell2107;
}
(*(P1048)rt_nil_check(F->c_2106)).s = f_mk_3(&(*F->s_619));
(*(P1048)rt_nil_check(F->c_2106)).next = g_cleanups_1126;
g_cleanups_1126 = F->c_2106;
g_frames_1124 = rt_add(g_frames_1124, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_621(void) {
  struct f_pop_cleanup_621fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_1126 = (*(P1048)rt_nil_check(g_cleanups_1126)).next;
g_frames_1124 = rt_sub(g_frames_1124, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_623(P1044 s_622) {
  struct f_gen_statement_623fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_622 = s_622;
F->located_2108 = NULL;
F->located_2108 = f_located_in_626(f_copy_node_857(F->s_622), NULL);
F->l_2109 = NULL;
F->l_2109 = F->located_2108;
while ((F->l_2109 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_544(F->l_2109, 0); b_; }));
F->l_2109 = (*(P1054)rt_nil_check(F->l_2109)).reqs_sym;
}
f_gen_statement2_631(F->s_622);
F->l_2109 = F->located_2108;
while ((F->l_2109 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_544(F->l_2109, 1); b_; }));
F->l_2109 = (*(P1054)rt_nil_check(F->l_2109)).reqs_sym;
}
ret_:
  RT_FPOP();
  return;
}

static P1054 f_located_in_626(P1044 e_624, P1054 found_625) {
  struct f_located_in_626fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_624 = e_624;
F->found_625 = found_625;
F->x_2110 = NULL;
F->x_2110 = F->e_624;
F->r_2111 = NULL;
F->r_2111 = F->found_625;
while ((F->x_2110 != NULL)) {
if (((*(P1044)rt_nil_check(F->x_2110)).kind == (((rt_int)7LL)))) {
F->y_2112 = NULL;
F->y_2112 = f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_2110)).name))->all));
if (((((F->y_2112 != NULL) && ((*(P1054)rt_nil_check(F->y_2112)).kind == (((rt_int)1LL)))) && ((*(P1054)rt_nil_check(F->y_2112)).loc != NULL)) && (!f_sym_in_629(F->r_2111, F->y_2112)))) {
(*(P1054)rt_nil_check(F->y_2112)).reqs_sym = F->r_2111;
F->r_2111 = F->y_2112;
}
} else if (((((((*(P1044)rt_nil_check(F->x_2110)).kind == (((rt_int)45LL))) || ((*(P1044)rt_nil_check(F->x_2110)).kind == (((rt_int)46LL)))) || ((*(P1044)rt_nil_check(F->x_2110)).kind == (((rt_int)50LL)))) || ((*(P1044)rt_nil_check(F->x_2110)).kind == (((rt_int)47LL)))) || ((*(P1044)rt_nil_check(F->x_2110)).kind == (((rt_int)51LL))))) {
F->result_ = F->r_2111;
goto ret_;
}
if (((*(P1044)rt_nil_check(F->x_2110)).a != NULL)) {
F->r_2111 = f_located_in_626((*(P1044)rt_nil_check(F->x_2110)).a, F->r_2111);
}
if (((*(P1044)rt_nil_check(F->x_2110)).b != NULL)) {
F->r_2111 = f_located_in_626((*(P1044)rt_nil_check(F->x_2110)).b, F->r_2111);
}
if (((*(P1044)rt_nil_check(F->x_2110)).c != NULL)) {
F->r_2111 = f_located_in_626((*(P1044)rt_nil_check(F->x_2110)).c, F->r_2111);
}
F->x_2110 = (*(P1044)rt_nil_check(F->x_2110)).next;
}
F->result_ = F->r_2111;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_sym_in_629(P1054 l_627, P1054 y_628) {
  struct f_sym_in_629fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_627 = l_627;
F->y_628 = y_628;
F->p_2113 = NULL;
F->p_2113 = F->l_627;
while ((F->p_2113 != NULL)) {
if ((F->p_2113 == F->y_628)) {
F->result_ = 1;
goto ret_;
}
F->p_2113 = (*(P1054)rt_nil_check(F->p_2113)).reqs_sym;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_statement2_631(P1044 s_630) {
  struct f_gen_statement2_631fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_630 = s_630;
F->label_2114 = NULL;
F->gl_2115 = NULL;
F->gl_2115 = (*(P1044)rt_nil_check(F->s_630)).labels;
while ((F->gl_2115 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1069)rt_nil_check(f_goto_label_604(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->gl_2115)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_2115 = (*(P1044)rt_nil_check(F->gl_2115)).next;
}
if (((*(P1044)rt_nil_check(F->s_630)).tag != NULL)) {
F->x_2116 = NULL;
{ R1070 *cell2117 = rt_alloc(sizeof(R1070));
(*cell2117).match = NULL;
(*cell2117).label = NULL;
(*cell2117).next = NULL;
F->x_2116 = cell2117;
}
F->label_2114 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P1069)rt_nil_check(F->x_2116)).match = (*(P1044)rt_nil_check(F->s_630)).tag;
(*(P1069)rt_nil_check(F->x_2116)).label = F->label_2114;
(*(P1069)rt_nil_check(F->x_2116)).depth = g_frames_1124;
(*(P1069)rt_nil_check(F->x_2116)).next = g_exits_1122;
g_exits_1122 = F->x_2116;
}
{ rt_int sel2118 = (*(P1044)rt_nil_check(F->s_630)).kind;
if (0 || (sel2118 == (((rt_int)20LL)))) {
f_st_assign_633(F->s_630);
} else if (0 || (sel2118 == (((rt_int)21LL)))) {
f_st_call_635(F->s_630);
} else if (0 || (sel2118 == (((rt_int)22LL)))) {
f_st_if_637(F->s_630);
} else if (0 || (sel2118 == (((rt_int)23LL)))) {
f_st_case_641(F->s_630);
} else if (0 || (sel2118 == (((rt_int)24LL)))) {
f_st_repeat_649(F->s_630);
} else if (0 || (sel2118 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_612((*(P1044)rt_nil_check(F->s_630)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel2118 == (((rt_int)27LL)))) {
f_st_exit_651(F->s_630);
} else if (0 || (sel2118 == (((rt_int)29LL)))) {
{
F->x_2119 = NULL;
F->x_2119 = f_goto_label_604(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->s_630)).name))->all));
if ((F->x_2119 == NULL)) {
f_fail_23((*(P1044)rt_nil_check(F->s_630)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->s_630)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_618((*(P1069)rt_nil_check(F->x_2119)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P1037)rt_nil_check((*(P1069)rt_nil_check(F->x_2119)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel2118 == (((rt_int)28LL)))) {
f_st_return_653(F->s_630);
} else if (0 || (sel2118 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_660(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->s_630)).name))->all), (*(P1044)rt_nil_check(F->s_630)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel2118 == (((rt_int)31LL)))) {
if ((g_handlers_1125 == NULL)) {
f_fail_23((*(P1044)rt_nil_check(F->s_630)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P1037)rt_nil_check((*(P1048)rt_nil_check(g_handlers_1125)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel2118 == (((rt_int)26LL)))) {
f_st_guard_662(F->s_630);
} else if (0 || (sel2118 == (((rt_int)32LL)))) {
f_st_alloc_664(F->s_630);
} else if (0 || (sel2118 == (((rt_int)34LL)))) {
f_st_create_668(F->s_630);
} else if (0 || (sel2118 == (((rt_int)35LL)))) {
f_st_wait_697(F->s_630);
} else if (0 || (sel2118 == (((rt_int)36LL)))) {
f_st_region_705(F->s_630);
} else {
f_fail_23((*(P1044)rt_nil_check(F->s_630)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P1044)rt_nil_check(F->s_630)).tag != NULL)) {
g_exits_1122 = (*(P1069)rt_nil_check(g_exits_1122)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->label_2114))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_633(P1044 s_632) {
  struct f_st_assign_633fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_632 = s_632;
F->lv_2120 = NULL;
F->t_2121 = NULL;
F->vt_2122 = NULL;
F->c_2123 = NULL;
if (((((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->s_632)).a)).kind == (((rt_int)10LL))) && ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->s_632)).a)).b != NULL)) && ((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->s_632)).a)).b)).kind == (((rt_int)16LL))))) {
f_lvalue_784((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->s_632)).a)).a, &F->lv_2120, &F->t_2121, &F->c_2123, &F->ro_2124);
while (((*(P1050)rt_nil_check(F->t_2121)).kind == (((rt_int)8LL)))) {
f_finish_ptr_490(F->t_2121);
F->lv_2120 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_776(&(((P1037)rt_nil_check(F->lv_2120))->all), F->t_2121); b_; }));
F->t_2121 = (*(P1050)rt_nil_check(F->t_2121)).target;
}
if ((((*(P1050)rt_nil_check(F->t_2121)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_2121)).tparams == NULL))) {
F->t_2121 = (*(P1050)rt_nil_check(F->t_2121)).under;
} else if (((*(P1050)rt_nil_check(F->t_2121)).kind == (((rt_int)15LL)))) {
F->lv_2120 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->lv_2120))->all), rt_str(".all", 4)); b_; }));
F->t_2121 = (*(P1050)rt_nil_check(F->t_2121)).under;
}
if ((((!F->ro_2124) && ((*(P1050)rt_nil_check(F->t_2121)).kind == (((rt_int)6LL)))) && ((*(P1050)rt_nil_check(F->t_2121)).ndim == ((rt_int)1LL)))) {
F->lo_2125 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->s_632)).a)).b)).a, (*(P1050)rt_nil_check(F->t_2121)).idx, &F->vt_2122));
F->hi_2126 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->s_632)).a)).b)).b, (*(P1050)rt_nil_check(F->t_2121)).idx, &F->vt_2122));
F->v_2127 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->s_632)).b, F->t_2121, &F->vt_2122));
f_need_slice_796(F->t_2121);
f_check_type_232(F->vt_2122, F->t_2121, (*(P1044)rt_nil_check(F->s_632)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->t_2121)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_234(F->t_2121)), rt_str("(", 1)), (((P1037)rt_nil_check(F->lv_2120))->all)), rt_str(", ", 2)), F->lo_2125), rt_str(", ", 2)), F->hi_2126), rt_str("); as_", 6)), f_ctype_234(F->t_2121)), rt_str("(&sl_, ", 7)), F->v_2127), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((F->ro_2124 || ((*(P1050)rt_nil_check(F->t_2121)).kind != (((rt_int)5LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->s_632)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_2128 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->s_632)).a)).b)).a, g_ty_int_1129, &F->vt_2122));
F->hi_2129 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->s_632)).a)).b)).b, g_ty_int_1129, &F->vt_2122));
F->v_2130 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->s_632)).b, g_ty_string_1133, &F->vt_2122));
f_check_type_232(F->vt_2122, g_ty_string_1133, (*(P1044)rt_nil_check(F->s_632)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P1037)rt_nil_check(F->lv_2120))->all)), rt_str(", ", 2)), F->lo_2128), rt_str(", ", 2)), F->hi_2129), rt_str(", ", 2)), F->v_2130), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_784((*(P1044)rt_nil_check(F->s_632)).a, &F->lv_2120, &F->t_2121, &F->c_2123, &F->ro_2124);
if (F->ro_2124) {
f_fail_23((*(P1044)rt_nil_check(F->s_632)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_313(F->t_2121)) && (!f_exports_op_473((*(P1050)rt_nil_check(F->t_2121)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23((*(P1044)rt_nil_check(F->s_632)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_2121)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_2131 = rt_str_copy(f_gexpr_in_826((*(P1044)rt_nil_check(F->s_632)).b, F->t_2121, F->c_2123, &F->vt_2122));
f_check_type_232(F->vt_2122, F->t_2121, (*(P1044)rt_nil_check(F->s_632)).line);
f_ptr_subtype_check_510(F->t_2121, F->c_2123, (*(P1044)rt_nil_check(F->s_632)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_426(&(((P1037)rt_nil_check(F->lv_2120))->all), F->t_2121, &F->v_2131, F->c_2123); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_635(P1044 s_634) {
  struct f_st_call_635fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_634 = s_634;
F->c_2132 = NULL;
F->c_2132 = (*(P1044)rt_nil_check(F->s_634)).a;
F->t_2133 = NULL;
if ((((*(P1044)rt_nil_check(F->c_2132)).kind == (((rt_int)7LL))) || ((*(P1044)rt_nil_check(F->c_2132)).kind == (((rt_int)12LL))))) {
F->x_2134 = NULL;
F->x_2134 = f_nn_65((((rt_int)10LL)), (*(P1044)rt_nil_check(F->c_2132)).line);
(*(P1044)rt_nil_check(F->x_2134)).a = F->c_2132;
F->c_2132 = F->x_2134;
}
if (((*(P1044)rt_nil_check(F->c_2132)).kind != (((rt_int)10LL)))) {
f_fail_23((*(P1044)rt_nil_check(F->s_634)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_966(F->c_2132, 1, &F->t_2133), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_637(P1044 s_636) {
  struct f_st_if_637fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_636 = s_636;
F->a_2135 = NULL;
F->a_2135 = (*(P1044)rt_nil_check(F->s_636)).a;
F->first_2136 = 1;
F->t_2137 = NULL;
F->taken_2138 = 0;
F->mv_2140 = NULL;
while (((F->a_2135 != NULL) && (!F->taken_2138))) {
F->mv_2140 = f_meval_390((*(P1044)rt_nil_check(F->a_2135)).a, &F->ok_2139);
if (((F->ok_2139 && ((*(P1063)rt_nil_check(F->mv_2140)).kind == (((rt_int)2LL)))) && ((*(P1063)rt_nil_check(F->mv_2140)).i == ((rt_int)0LL)))) {
F->a_2135 = (*(P1044)rt_nil_check(F->a_2135)).next;
} else {
if ((F->ok_2139 && ((*(P1063)rt_nil_check(F->mv_2140)).kind == (((rt_int)2LL))))) {
F->taken_2138 = 1;
if (F->first_2136) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_2141 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->a_2135)).a, g_ty_bool_1130, &F->t_2137));
f_check_type_232(F->t_2137, g_ty_bool_1130, (*(P1044)rt_nil_check(F->s_636)).line);
if (F->first_2136) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_2141), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_2141), rt_str(") {", 3)); b_; }));
}
}
F->first_2136 = 0;
f_gen_body_612((*(P1044)rt_nil_check(F->a_2135)).b);
F->a_2135 = (*(P1044)rt_nil_check(F->a_2135)).next;
}
}
if ((((*(P1044)rt_nil_check(F->s_636)).flag == ((rt_int)1LL)) && (!F->taken_2138))) {
if (F->first_2136) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_2136 = 0;
f_gen_body_612((*(P1044)rt_nil_check(F->s_636)).b);
}
if ((!F->first_2136)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_manifest_case_639(P1044 s_638) {
  struct f_manifest_case_639fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_638 = s_638;
F->sv_2143 = NULL;
F->sv_2143 = f_meval_390((*(P1044)rt_nil_check(F->s_638)).a, &F->ok_2142);
F->a_2144 = NULL;
F->a_2144 = (*(P1044)rt_nil_check(F->s_638)).b;
if (((!F->ok_2142) || ((((*(P1063)rt_nil_check(F->sv_2143)).kind != (((rt_int)1LL))) && ((*(P1063)rt_nil_check(F->sv_2143)).kind != (((rt_int)2LL)))) && ((*(P1063)rt_nil_check(F->sv_2143)).kind != (((rt_int)4LL)))))) {
F->result_ = 0;
goto ret_;
}
while ((F->a_2144 != NULL)) {
F->lab_2145 = NULL;
F->lab_2145 = (*(P1044)rt_nil_check(F->a_2144)).a;
while ((F->lab_2145 != NULL)) {
F->lo_2146 = NULL;
F->lo_2146 = f_meval_390((*(P1044)rt_nil_check(F->lab_2145)).a, &F->ok_2142);
F->hi_2147 = NULL;
F->hi_2147 = F->lo_2146;
if (((!F->ok_2142) || ((*(P1063)rt_nil_check(F->lo_2146)).kind != (*(P1063)rt_nil_check(F->sv_2143)).kind))) {
F->result_ = 0;
goto ret_;
}
if (((*(P1044)rt_nil_check(F->lab_2145)).b != NULL)) {
F->hi_2147 = f_meval_390((*(P1044)rt_nil_check(F->lab_2145)).b, &F->ok_2142);
if ((((!F->ok_2142) || ((*(P1063)rt_nil_check(F->hi_2147)).kind != (*(P1063)rt_nil_check(F->sv_2143)).kind)) || ((*(P1063)rt_nil_check(F->sv_2143)).kind == (((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
}
if (((((*(P1063)rt_nil_check(F->sv_2143)).kind == (((rt_int)4LL))) && rt_str_eq((((P1037)rt_nil_check((*(P1063)rt_nil_check(F->sv_2143)).s))->all), (((P1037)rt_nil_check((*(P1063)rt_nil_check(F->lo_2146)).s))->all))) || ((((*(P1063)rt_nil_check(F->sv_2143)).kind != (((rt_int)4LL))) && ((*(P1063)rt_nil_check(F->lo_2146)).i <= (*(P1063)rt_nil_check(F->sv_2143)).i)) && ((*(P1063)rt_nil_check(F->sv_2143)).i <= (*(P1063)rt_nil_check(F->hi_2147)).i)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_612((*(P1044)rt_nil_check(F->a_2144)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
F->result_ = 1;
goto ret_;
}
F->lab_2145 = (*(P1044)rt_nil_check(F->lab_2145)).next;
}
F->a_2144 = (*(P1044)rt_nil_check(F->a_2144)).next;
}
if (((*(P1044)rt_nil_check(F->s_638)).flag == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_612((*(P1044)rt_nil_check(F->s_638)).c);
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

static void f_st_case_641(P1044 s_640) {
  struct f_st_case_641fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_640 = s_640;
F->st_2148 = NULL;
F->vt_2149 = NULL;
F->first_2150 = 1;
F->a_2151 = NULL;
F->a_2151 = (*(P1044)rt_nil_check(F->s_640)).b;
if (f_manifest_case_639(F->s_640)) {
goto ret_;
}
f_st_case2_643(F->s_640);
ret_:
  RT_FPOP();
  return;
}

static void f_st_case2_643(P1044 s_642) {
  struct f_st_case2_643fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_642 = s_642;
F->st_2152 = NULL;
F->vt_2153 = NULL;
F->first_2154 = 1;
F->a_2155 = NULL;
F->a_2155 = (*(P1044)rt_nil_check(F->s_642)).b;
F->sel_2156 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->s_642)).a, NULL, &F->st_2152));
F->tmp_2157 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->st_2152)), rt_str(" ", 1)), F->tmp_2157), rt_str(" = ", 3)), F->sel_2156), rt_str(";", 1)); b_; }));
while ((F->a_2155 != NULL)) {
F->lab_2158 = NULL;
F->lab_2158 = (*(P1044)rt_nil_check(F->a_2155)).a;
F->conds_2159 = NULL;
F->conds_2159 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_2158 != NULL)) {
if (((*(P1044)rt_nil_check(F->lab_2158)).b == NULL)) {
F->v_2160 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->lab_2158)).a, F->st_2152, &F->vt_2153));
f_check_type_232(F->vt_2153, F->st_2152, (*(P1044)rt_nil_check(F->s_642)).line);
F->conds_2159 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->conds_2159))->all), rt_str(" || ", 4)), f_eq_code_433(F->st_2152, &F->tmp_2157, &F->v_2160)); b_; }));
} else if ((((*(P1050)rt_nil_check(F->st_2152)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->st_2152)).ltp != NULL))) {
F->lo_2161 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->lab_2158)).a, F->st_2152, &F->vt_2153));
F->hi_2162 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->lab_2158)).b, F->st_2152, &F->vt_2153));
F->conds_2159 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->conds_2159))->all), rt_str(" || (!", 6)), f_user_call2_415((*(P1050)rt_nil_check(F->st_2152)).ltp, &F->tmp_2157, 1, &F->lo_2161, 0)), rt_str(" && !", 5)), f_user_call2_415((*(P1050)rt_nil_check(F->st_2152)).ltp, &F->hi_2162, 0, &F->tmp_2157, 1)), rt_str(")", 1)); b_; }));
} else {
F->lo_2163 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->lab_2158)).a, F->st_2152, &F->vt_2153));
F->hi_2164 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->lab_2158)).b, F->st_2152, &F->vt_2153));
F->conds_2159 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->conds_2159))->all), rt_str(" || (", 5)), F->tmp_2157), rt_str(" >= ", 4)), F->lo_2163), rt_str(" && ", 4)), F->tmp_2157), rt_str(" <= ", 4)), F->hi_2164), rt_str(")", 1)); b_; }));
}
F->lab_2158 = (*(P1044)rt_nil_check(F->lab_2158)).next;
}
if (F->first_2154) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1037)rt_nil_check(F->conds_2159))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1037)rt_nil_check(F->conds_2159))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2154 = 0;
f_gen_body_612((*(P1044)rt_nil_check(F->a_2155)).b);
F->a_2155 = (*(P1044)rt_nil_check(F->a_2155)).next;
}
if (F->first_2154) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P1044)rt_nil_check(F->s_642)).flag == ((rt_int)1LL))) {
f_gen_body_612((*(P1044)rt_nil_check(F->s_642)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_user_for_647(P1044 s_644, P1050 t_645, P1046 c_646) {
  struct f_user_for_647fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_644 = s_644;
F->t_645 = t_645;
F->c_646 = c_646;
F->y_2165 = NULL;
F->y_2165 = f_new_sym_181((((rt_int)2LL)), (*(P1044)rt_nil_check(F->s_644)).name);
F->saved_2166 = NULL;
F->saved_2166 = g_psub_1105;
F->p_2167 = NULL;
F->p_2167 = (*(P1050)rt_nil_check(F->t_645)).tparams;
F->iv_2168 = NULL;
F->iv_2168 = f_nn_65((((rt_int)7LL)), (*(P1044)rt_nil_check(F->s_644)).line);
F->st_2169 = NULL;
F->access_2170 = rt_str_copy(f_storage_534(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->s_644)).name))->all), F->t_645));
F->uv_2171 = NULL;
F->uv_2171 = f_mk_3(&F->access_2170);
if (((*(P1050)rt_nil_check(F->t_645)).tparams != NULL)) {
F->uv_2171 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->access_2170, rt_str(".all", 4)); b_; }));
}
if ((((!f_scalar_kind_186(f_base_of_223((*(P1050)rt_nil_check(F->t_645)).under))) || ((*(P1050)rt_nil_check(F->t_645)).elemcons == NULL)) || ((*(P1046)rt_nil_check((*(P1050)rt_nil_check(F->t_645)).elemcons)).lo == NULL))) {
f_fail_23((*(P1044)rt_nil_check(F->s_644)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a FOR over ", 11), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_645)).name))->all)), rt_str(" needs an underlying subtype with a range", 41)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_init_storage_346(&F->access_2170, F->t_645, F->c_646);
while ((F->p_2167 != NULL)) {
F->l1_2172 = NULL;
F->l2_2173 = NULL;
{ R1049 *cell2174 = rt_alloc(sizeof(R1049));
(*cell2174).s = NULL;
(*cell2174).next = NULL;
F->l1_2172 = cell2174;
}
{ R1049 *cell2175 = rt_alloc(sizeof(R1049));
(*cell2175).s = NULL;
(*cell2175).next = NULL;
F->l2_2173 = cell2175;
}
(*(P1048)rt_nil_check(F->l1_2172)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2167)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1048)rt_nil_check(F->l2_2173)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(F->access_2170, rt_str(".p_", 3)), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2167)).name))->all))); b_; }));
(*(P1048)rt_nil_check(F->l1_2172)).next = F->l2_2173;
(*(P1048)rt_nil_check(F->l2_2173)).next = g_psub_1105;
g_psub_1105 = F->l1_2172;
F->p_2167 = (*(P1044)rt_nil_check(F->p_2167)).next;
}
{
F->lo_2176 = rt_str_copy(f_subst_319(&(((P1037)rt_nil_check((*(P1046)rt_nil_check((*(P1050)rt_nil_check(F->t_645)).elemcons)).lo))->all)));
F->hi_2177 = rt_str_copy(f_subst_319(&(((P1037)rt_nil_check((*(P1046)rt_nil_check((*(P1050)rt_nil_check(F->t_645)).elemcons)).hi))->all)));
g_psub_1105 = F->saved_2166;
if (((*(P1044)rt_nil_check(F->s_644)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->uv_2171))->all), rt_str(" = ", 3)), F->hi_2177), rt_str("; if (", 6)), F->lo_2176), rt_str(" <= ", 4)), (((P1037)rt_nil_check(F->uv_2171))->all)), rt_str(") for (;;) {", 12)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->uv_2171))->all), rt_str(" = ", 3)), F->lo_2176), rt_str("; if (", 6)), (((P1037)rt_nil_check(F->uv_2171))->all)), rt_str(" <= ", 4)), F->hi_2177), rt_str(") for (;;) {", 12)); b_; }));
}
f_open_scope_177();
(*(P1054)rt_nil_check(F->y_2165)).t = F->t_645;
(*(P1054)rt_nil_check(F->y_2165)).c = F->c_646;
f_bind_537(F->y_2165, &F->access_2170);
(*(P1054)rt_nil_check(F->y_2165)).ro_flag = 1;
f_define_168(F->y_2165, (*(P1044)rt_nil_check(F->s_644)).line);
f_gen_body_612((*(P1044)rt_nil_check(F->s_644)).b);
(*(P1044)rt_nil_check(F->iv_2168)).name = (*(P1044)rt_nil_check(F->s_644)).name;
if (((*(P1044)rt_nil_check(F->s_644)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1037)rt_nil_check(F->uv_2171))->all)), rt_str(" == ", 4)), F->lo_2176), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_426(&F->access_2170, F->t_645, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_966(f_call_node_701(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRED", 4); b_; }), F->iv_2168, (*(P1044)rt_nil_check(F->s_644)).line), 0, &F->st_2169); b_; }), F->c_646); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1037)rt_nil_check(F->uv_2171))->all)), rt_str(" == ", 4)), F->hi_2177), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_426(&F->access_2170, F->t_645, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_966(f_call_node_701(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUCC", 4); b_; }), F->iv_2168, (*(P1044)rt_nil_check(F->s_644)).line), 0, &F->st_2169); b_; }), F->c_646); b_; }));
}
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} }", 3); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_649(P1044 s_648) {
  struct f_st_repeat_649fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_648 = s_648;
F->t_2178 = NULL;
F->c_2179 = NULL;
if (((*(P1044)rt_nil_check(F->s_648)).flag == ((rt_int)0LL))) {
F->cond_2180 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->s_648)).a, g_ty_bool_1130, &F->t_2178));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_2180), rt_str(") {", 3)); b_; }));
f_gen_body_612((*(P1044)rt_nil_check(F->s_648)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_2178 = f_resolve_subtype_268((*(P1044)rt_nil_check(F->s_648)).a, &F->c_2179);
if ((((*(P1050)rt_nil_check(F->t_2178)).kind == (((rt_int)15LL))) && (((*(P1050)rt_nil_check(F->t_2178)).tparams != NULL) || (!f_scalar_kind_186(f_base_of_223(F->t_2178)))))) {
f_user_for_647(F->s_648, F->t_2178, F->c_2179);
goto ret_;
}
F->c_2179 = f_base_cons_226(F->t_2178, F->c_2179);
if ((((*(P1050)rt_nil_check(f_base_of_223(F->t_2178))).kind == (((rt_int)4LL))) && ((*(P1046)rt_nil_check(F->c_2179)).lo == NULL))) {
F->c_2179 = f_new_cons_184();
(*(P1046)rt_nil_check(F->c_2179)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P1046)rt_nil_check(F->c_2179)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_71((*(P1050)rt_nil_check(f_base_of_223(F->t_2178))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P1046)rt_nil_check(F->c_2179)).lo == NULL)) {
f_fail_23((*(P1044)rt_nil_check(F->s_648)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_2181 = rt_str_copy(f_storage_534(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->s_648)).name))->all), F->t_2178));
F->lov_2182 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_2183 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_2184 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_2185 = NULL;
F->y_2185 = f_new_sym_181((((rt_int)2LL)), (*(P1044)rt_nil_check(F->s_648)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_2182), rt_str(" = ", 3)), f_clo_193(F->c_2179)), rt_str(", ", 2)), F->hiv_2183), rt_str(" = ", 3)), f_chi_195(F->c_2179)), rt_str(";", 1)); b_; }));
if (((*(P1044)rt_nil_check(F->s_648)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_2184), rt_str(" = ", 3)), F->hiv_2183), rt_str("; ", 2)), F->it_2184), rt_str(" >= ", 4)), F->lov_2182), rt_str("; ", 2)), F->it_2184), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_2184), rt_str(" = ", 3)), F->lov_2182), rt_str("; ", 2)), F->it_2184), rt_str(" <= ", 4)), F->hiv_2183), rt_str("; ", 2)), F->it_2184), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_2181, rt_str(" = ", 3)), F->it_2184), rt_str(";", 1)); b_; }));
f_open_scope_177();
(*(P1054)rt_nil_check(F->y_2185)).t = F->t_2178;
(*(P1054)rt_nil_check(F->y_2185)).c = F->c_2179;
f_bind_537(F->y_2185, &F->access_2181);
(*(P1054)rt_nil_check(F->y_2185)).ro_flag = 1;
f_define_168(F->y_2185, (*(P1044)rt_nil_check(F->s_648)).line);
f_gen_body_612((*(P1044)rt_nil_check(F->s_648)).b);
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_651(P1044 s_650) {
  struct f_st_exit_651fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_650 = s_650;
F->x_2186 = NULL;
F->x_2186 = g_exits_1122;
while ((F->x_2186 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1069)rt_nil_check(F->x_2186)).match))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->s_650)).name))->all))) {
f_pop_frames_618((*(P1069)rt_nil_check(F->x_2186)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P1037)rt_nil_check((*(P1069)rt_nil_check(F->x_2186)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_2186 = (*(P1069)rt_nil_check(F->x_2186)).next;
}
f_fail_23((*(P1044)rt_nil_check(F->s_650)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->s_650)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_653(P1044 s_652) {
  struct f_st_return_653fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_652 = s_652;
F->vt_2187 = NULL;
if ((g_cap_ret_1114 != NULL)) {
if (((*(P1044)rt_nil_check(F->s_652)).a != NULL)) {
f_fail_23((*(P1044)rt_nil_check(F->s_652)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_618(g_ret_frames_1116);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(g_cap_rflag_1115))->all), rt_str(" = 1; goto ", 11)), (((P1037)rt_nil_check(g_cap_ret_1114))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!g_in_func_1100)) {
f_pop_frames_618(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P1050)rt_nil_check((*(P1054)rt_nil_check(g_func_sym_1112)).result)).kind == (((rt_int)9LL)))) {
if (((*(P1044)rt_nil_check(F->s_652)).a != NULL)) {
f_fail_23((*(P1044)rt_nil_check(F->s_652)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_618(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P1044)rt_nil_check(F->s_652)).a == NULL)) {
f_fail_23((*(P1044)rt_nil_check(F->s_652)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_2188 = rt_str_copy(f_gexpr_in_826((*(P1044)rt_nil_check(F->s_652)).a, (*(P1054)rt_nil_check(g_func_sym_1112)).result, g_func_rc_1113, &F->vt_2187));
f_check_type_232(F->vt_2187, (*(P1054)rt_nil_check(g_func_sym_1112)).result, (*(P1044)rt_nil_check(F->s_652)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_657((*(P1054)rt_nil_check(g_func_sym_1112)).result, g_func_rc_1113, &F->v_2188)), rt_str(";", 1)); b_; }));
f_pop_frames_618(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_657(P1050 t_654, P1046 c_655, rstr *v_656) {
  struct f_result_checked_657fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_654 = t_654;
F->c_655 = c_655;
F->v_656 = v_656;
if ((F->c_655 == NULL)) {
F->result_ = (*F->v_656);
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->t_654)).kind == (((rt_int)5LL))) && ((*(P1046)rt_nil_check(F->c_655)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_656)), rt_str(", ", 2)), (((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_655)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->t_654)).kind == (((rt_int)6LL))) && ((*(P1046)rt_nil_check(F->c_655)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->t_654)), rt_str(" r_ = ", 6)), (*F->v_656)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_655)).lo))->all)), rt_str(", ", 2)), (((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_655)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_213(F->t_654, F->c_655, &(*F->v_656));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_660(rstr *name_658, rt_int line_659) {
  struct f_exc_id_660fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_658 = name_658;
F->line_659 = line_659;
F->y_2189 = NULL;
F->y_2189 = f_lookup_163(&(*F->name_658));
if (((F->y_2189 != NULL) && ((*(P1054)rt_nil_check(F->y_2189)).kind == (((rt_int)7LL))))) {
F->result_ = (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_2189)).cname))->all);
goto ret_;
}
if (((((rt_int)(((*F->name_658)).len)) > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_658), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_658)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_659, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_658), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_662(P1044 s_661) {
  struct f_st_guard_662fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_661 = s_661;
F->h_2190 = NULL;
F->h_2190 = (*(P1044)rt_nil_check(F->s_661)).b;
F->first_2191 = 1;
F->hv_2192 = NULL;
{
F->f_2193 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_2194 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_620(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2193), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_2193), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2193), rt_str(")) {", 4)); b_; }));
f_gen_body_612((*(P1044)rt_nil_check(F->s_661)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2193), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_621();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2193), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_2194), rt_str(" = rt_xcur;", 11)); b_; }));
{ R1049 *cell2195 = rt_alloc(sizeof(R1049));
(*cell2195).s = NULL;
(*cell2195).next = NULL;
F->hv_2192 = cell2195;
}
(*(P1048)rt_nil_check(F->hv_2192)).s = f_mk_3(&F->x_2194);
(*(P1048)rt_nil_check(F->hv_2192)).next = g_handlers_1125;
g_handlers_1125 = F->hv_2192;
{
F->h1_2196 = NULL;
F->h1_2196 = (*(P1044)rt_nil_check(F->s_661)).b;
F->seen_2197 = NULL;
while ((F->h1_2196 != NULL)) {
F->n1_2198 = NULL;
F->n1_2198 = (*(P1044)rt_nil_check(F->h1_2196)).a;
while ((F->n1_2198 != NULL)) {
if (f_seen_name_440(F->seen_2197, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->n1_2198)).name))->all))) {
f_fail_23((*(P1044)rt_nil_check(F->n1_2198)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->n1_2198)).name))->all), rt_str(" has two handlers in one guard statement", 40)); b_; }));
}
F->seen_2197 = f_add_line_916(F->seen_2197, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->n1_2198)).name))->all));
F->n1_2198 = (*(P1044)rt_nil_check(F->n1_2198)).next;
}
F->h1_2196 = (*(P1044)rt_nil_check(F->h1_2196)).next;
}
}
while ((F->h_2190 != NULL)) {
F->n_2199 = NULL;
F->n_2199 = (*(P1044)rt_nil_check(F->h_2190)).a;
F->conds_2200 = NULL;
F->conds_2200 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_2199 != NULL)) {
F->conds_2200 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->conds_2200))->all), rt_str(" || ", 4)), F->x_2194), rt_str(" == ", 4)), f_exc_id_660(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->n_2199)).name))->all), (*(P1044)rt_nil_check(F->s_661)).line)); b_; }));
F->n_2199 = (*(P1044)rt_nil_check(F->n_2199)).next;
}
if (F->first_2191) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1037)rt_nil_check(F->conds_2200))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1037)rt_nil_check(F->conds_2200))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2191 = 0;
f_gen_body_612((*(P1044)rt_nil_check(F->h_2190)).b);
F->h_2190 = (*(P1044)rt_nil_check(F->h_2190)).next;
}
if (F->first_2191) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P1044)rt_nil_check(F->s_661)).flag == ((rt_int)1LL))) {
f_gen_body_612((*(P1044)rt_nil_check(F->s_661)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_2194), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_1125 = (*(P1048)rt_nil_check(g_handlers_1125)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_664(P1044 s_663) {
  struct f_st_alloc_664fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_663 = s_663;
F->lv_2201 = NULL;
F->t_2202 = NULL;
F->target_2203 = NULL;
F->vt_2204 = NULL;
F->c_2205 = NULL;
F->tc_2206 = NULL;
F->d_2208 = NULL;
F->p_2209 = NULL;
F->a_2210 = NULL;
f_lvalue_784((*(P1044)rt_nil_check(F->s_663)).a, &F->lv_2201, &F->t_2202, &F->c_2205, &F->ro_2207);
if (((*(P1050)rt_nil_check(F->t_2202)).kind != (((rt_int)8LL)))) {
f_fail_23((*(P1044)rt_nil_check(F->s_663)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_490(F->t_2202);
F->d_2208 = (*(P1050)rt_nil_check(F->t_2202)).decl;
F->target_2203 = (*(P1050)rt_nil_check(F->t_2202)).target;
if ((f_list_len_71((*(P1044)rt_nil_check(F->s_663)).b) != f_list_len_71((*(P1044)rt_nil_check(F->d_2208)).b))) {
f_fail_23((*(P1044)rt_nil_check(F->s_663)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_71((*(P1044)rt_nil_check(F->d_2208)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P1044)rt_nil_check(F->d_2208)).b != NULL)) {
f_alloc_cell_502(F->s_663, &(((P1037)rt_nil_check(F->lv_2201))->all), F->t_2202, F->c_2205);
goto ret_;
}
{
F->tcn_2211 = rt_str_copy(f_ctype_234(F->target_2203));
F->cell_2212 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_351(F->target_2203)) {
F->fn_2213 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_1109 = 1;
g_uses_findyn_1111 = 1;
f_put_27(g_out_protos_1093, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_2213), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_2213), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (g_in_func_1100) {
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1037)rt_nil_check((*(P1054)rt_nil_check(g_func_sym_1112)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_2211), rt_str(" *)cell_)", 9)); b_; }), F->target_2203)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (g_in_func_1100) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_2211), rt_str(" *", 2)), F->cell_2212), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_2211), rt_str("), ", 3)), F->fn_2213), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_2211), rt_str(" *", 2)), F->cell_2212), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_2211), rt_str("), ", 3)), F->fn_2213), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_2211), rt_str(" *", 2)), F->cell_2212), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_2211), rt_str("));", 3)); b_; }));
}
f_open_scope_177();
f_bind_ptr_params_497((*(P1044)rt_nil_check(F->d_2208)).d, f_ptr_args_492(F->c_2205), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), (*(P1044)rt_nil_check(F->s_663)).line);
F->vt_2204 = f_resolve_subtype_268((*(P1044)rt_nil_check(F->d_2208)).a, &F->tc_2206);
g_mark_uninit_1120 = (!f_suppressed_527(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; })));
f_init_storage_346(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_2212), rt_str(")", 1)); b_; }), F->target_2203, F->tc_2206);
g_mark_uninit_1120 = 0;
f_close_scope_178();
if (((*(P1044)rt_nil_check(F->s_663)).c != NULL)) {
F->v_2214 = rt_str_copy(f_gexpr_in_826((*(P1044)rt_nil_check(F->s_663)).c, F->target_2203, F->tc_2206, &F->vt_2204));
f_check_type_232(F->vt_2204, F->target_2203, (*(P1044)rt_nil_check(F->s_663)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_426(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_2212), rt_str(")", 1)); b_; }), F->target_2203, &F->v_2214, F->tc_2206); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->lv_2201))->all), rt_str(" = ", 3)), F->cell_2212), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_666(P1044 e_665) {
  struct f_act_ref_666fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_665 = e_665;
F->lv_2215 = NULL;
F->t_2216 = NULL;
F->c_2217 = NULL;
if (((((*(P1044)rt_nil_check(F->e_665)).kind == (((rt_int)7LL))) && rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_665)).name))->all), rt_str("ME", 2))) && (f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_778(F->e_665))) {
F->v_2219 = rt_str_copy(f_gexpr_815(F->e_665, g_ty_act_1139, &F->t_2216));
if (((*(P1050)rt_nil_check(F->t_2216)).kind != (((rt_int)14LL)))) {
f_fail_23((*(P1044)rt_nil_check(F->e_665)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_2219;
goto ret_;
}
f_lvalue_784(F->e_665, &F->lv_2215, &F->t_2216, &F->c_2217, &F->ro_2218);
if (((*(P1050)rt_nil_check(F->t_2216)).kind != (((rt_int)14LL)))) {
f_fail_23((*(P1044)rt_nil_check(F->e_665)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P1037)rt_nil_check(F->lv_2215))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_668(P1044 s_667) {
  struct f_st_create_668fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_667 = s_667;
F->y_2220 = NULL;
F->y_2220 = f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->s_667)).name))->all));
F->pm_2221 = NULL;
F->a_2222 = NULL;
F->a_2222 = (*(P1044)rt_nil_check(F->s_667)).b;
F->lv_2223 = NULL;
F->lt_2224 = NULL;
F->vt_2225 = NULL;
F->lc_2226 = NULL;
if (((F->y_2220 != NULL) && ((*(P1054)rt_nil_check(F->y_2220)).kind == (((rt_int)10LL))))) {
F->y_2220 = f_instantiate_760(F->y_2220, (*(P1044)rt_nil_check(F->s_667)).e, (*(P1044)rt_nil_check(F->s_667)).b, (*(P1044)rt_nil_check(F->s_667)).line);
}
if (((F->y_2220 == NULL) || ((*(P1054)rt_nil_check(F->y_2220)).kind != (((rt_int)9LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->s_667)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->s_667)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_2221 = (*(P1054)rt_nil_check(F->y_2220)).params;
{
F->at_2228 = NULL;
F->ac_2229 = NULL;
F->act_2231 = NULL;
F->nf_2232 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_784((*(P1044)rt_nil_check(F->s_667)).a, &F->lv_2223, &F->at_2228, &F->ac_2229, &F->aro_2230);
if (((*(P1050)rt_nil_check(F->at_2228)).kind == (((rt_int)14LL)))) {
F->act_2231 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_666((*(P1044)rt_nil_check(F->s_667)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_2220)).cname))->all)), rt_str("fr *", 4)), F->nf_2232), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_2232), rt_str(");", 2)); b_; }));
if (((*(P1054)rt_nil_check(F->y_2220)).level > ((rt_int)0LL))) {
F->link_2233 = NULL;
F->link_2233 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2235 = ((rt_int)1LL), hi2236 = rt_sub(g_cur_level_1101, (*(P1054)rt_nil_check(F->y_2220)).level);
for (rt_int it2237 = lo2235; it2237 <= hi2236; it2237++) {
F->i_2234 = it2237;
F->link_2233 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->link_2233))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2232, rt_str("->up = ", 7)), (((P1037)rt_nil_check(F->link_2233))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_2222 != NULL) && (F->pm_2221 != NULL))) {
if (((*(P1056)rt_nil_check(F->pm_2221)).mode == (((rt_int)1LL)))) {
F->v_2238 = rt_str_copy(f_gexpr_in_826(F->a_2222, (*(P1056)rt_nil_check(F->pm_2221)).t, (*(P1056)rt_nil_check(F->pm_2221)).c, &F->vt_2225));
f_check_type_232(F->vt_2225, (*(P1056)rt_nil_check(F->pm_2221)).t, (*(P1044)rt_nil_check(F->s_667)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2232, rt_str("->", 2)), (((P1037)rt_nil_check((*(P1056)rt_nil_check(F->pm_2221)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_429((*(P1056)rt_nil_check(F->pm_2221)).t, &F->v_2238)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_784(F->a_2222, &F->lv_2223, &F->lt_2224, &F->lc_2226, &F->ro_2227);
f_check_type_232(F->lt_2224, (*(P1056)rt_nil_check(F->pm_2221)).t, (*(P1044)rt_nil_check(F->s_667)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2232, rt_str("->", 2)), (((P1037)rt_nil_check((*(P1056)rt_nil_check(F->pm_2221)).cfield))->all)), rt_str(" = &", 4)), (((P1037)rt_nil_check(F->lv_2223))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_186((*(P1056)rt_nil_check(F->pm_2221)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2232, rt_str("->", 2)), (((P1037)rt_nil_check((*(P1056)rt_nil_check(F->pm_2221)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_198(F->lt_2224, F->lc_2226)), rt_str("; ", 2)), F->nf_2232), rt_str("->", 2)), (((P1037)rt_nil_check((*(P1056)rt_nil_check(F->pm_2221)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_201(F->lt_2224, F->lc_2226)), rt_str(";", 1)); b_; }));
}
}
F->a_2222 = (*(P1044)rt_nil_check(F->a_2222)).next;
F->pm_2221 = (*(P1056)rt_nil_check(F->pm_2221)).next;
}
if (((F->a_2222 != NULL) || (F->pm_2221 != NULL))) {
f_fail_23((*(P1044)rt_nil_check(F->s_667)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->s_667)).name))->all)); b_; }));
}
if ((F->act_2231 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P1037)rt_nil_check(F->act_2231))->all)), rt_str(", &", 3)), (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_2220)).cname))->all)), rt_str("decl, ", 6)), (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_2220)).cname))->all)), rt_str(", ", 2)), F->nf_2232), rt_str("); }", 4)); b_; }));
} else {
f_user_create_678(F->s_667, F->y_2220, &(((P1037)rt_nil_check(F->lv_2223))->all), F->at_2228, &F->nf_2232);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_672(rstr *name_669, P1050 t_670, rstr *place_671) {
  struct f_hidden_var_672fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_669 = name_669;
F->t_670 = t_670;
F->place_671 = place_671;
F->y_2239 = NULL;
F->y_2239 = f_new_sym_181((((rt_int)1LL)), f_mk_3(&(*F->name_669)));
(*(P1054)rt_nil_check(F->y_2239)).t = F->t_670;
(*(P1054)rt_nil_check(F->y_2239)).level = ((rt_int)0LL);
(*(P1054)rt_nil_check(F->y_2239)).access = f_mk_3(&(*F->place_671));
f_define_168(F->y_2239, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_678(P1044 s_673, P1054 y_674, rstr *uv_675, P1050 ut_676, rstr *nf_677) {
  struct f_user_create_678fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_673 = s_673;
F->y_674 = y_674;
F->uv_675 = uv_675;
F->ut_676 = ut_676;
F->nf_677 = nf_677;
F->t_2240 = NULL;
F->saved_2241 = NULL;
F->saved_2241 = g_code_1098;
F->hook_2242 = NULL;
F->hook_2242 = f_new_buffer_24();
F->un_2243 = NULL;
F->un_2243 = f_nn_65((((rt_int)7LL)), (*(P1044)rt_nil_check(F->s_673)).line);
F->hn_2244 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_2245 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_2246 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_2247 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_177();
f_hidden_var_672(&F->uname_2246, F->ut_676, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->ut_676)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P1044)rt_nil_check(F->un_2243)).name = f_mk_3(&F->uname_2246);
g_code_1098 = F->hook_2242;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_966(f_call_node_701(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_2243, (*(P1044)rt_nil_check(F->s_673)).line), 1, &F->t_2240)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_966(f_call_node_701(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_2243, (*(P1044)rt_nil_check(F->s_673)).line), 1, &F->t_2240)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_966(f_call_node_701(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_2243, (*(P1044)rt_nil_check(F->s_673)).line), 1, &F->t_2240)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_966(f_call_node_701(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_2243, (*(P1044)rt_nil_check(F->s_673)).line), 1, &F->t_2240)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_1098 = F->saved_2241;
f_put_27(g_out_protos_1093, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_2244), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_2244), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (g_in_func_1100) {
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1037)rt_nil_check((*(P1054)rt_nil_check(g_func_sym_1112)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_1095, F->hook_2242);
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_2245), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_2245, rt_str("->hook = ", 9)), F->hn_2244), rt_str("; ", 2)), F->aa_2245), rt_str("->ua = &", 8)), (*F->uv_675)), rt_str("; ", 2)), F->aa_2245), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_956(F->ut_676)), f_q_18()), rt_str(";", 1)); b_; }));
if (g_in_func_1100) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_2245, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_2245), rt_str(", &", 3)), (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_674)).cname))->all)), rt_str("decl, ", 6)), (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_674)).cname))->all)), rt_str(", ", 2)), (*F->nf_677)), rt_str(");", 2)); b_; }));
f_hidden_var_672(&F->aname_2247, g_ty_act_1139, &F->aa_2245);
{
F->start_2248 = NULL;
F->start_2248 = f_call_node_701(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P1044)rt_nil_check(F->s_673)).a, (*(P1044)rt_nil_check(F->s_673)).line);
F->an_2249 = NULL;
F->an_2249 = f_nn_65((((rt_int)7LL)), (*(P1044)rt_nil_check(F->s_673)).line);
(*(P1044)rt_nil_check(F->an_2249)).name = f_mk_3(&F->aname_2247);
(*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->start_2248)).b)).next = F->an_2249;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_966(F->start_2248, 1, &F->t_2240), rt_str(";", 1)); b_; }));
}
f_close_scope_178();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_683(P1044 inv_679, rstr *arr_680, rt_int i_681, int mixed_682) {
  struct f_wait_alt_683fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_679 = inv_679;
F->arr_680 = arr_680;
F->i_681 = i_681;
F->mixed_682 = mixed_682;
F->lv_2250 = NULL;
F->t_2251 = NULL;
F->vt_2252 = NULL;
F->c_2253 = NULL;
F->fn_2255 = NULL;
F->args_2256 = NULL;
F->slot_2257 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_680), rt_str("[", 1)), f_itos_7(F->i_681)), rt_str("]", 1)));
if ((((*(P1044)rt_nil_check(F->inv_679)).kind != (((rt_int)10LL))) || ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->inv_679)).a)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->inv_679)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_2255 = (*(P1044)rt_nil_check(F->inv_679)).a;
F->args_2256 = (*(P1044)rt_nil_check(F->inv_679)).b;
if ((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2255)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2255)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_784(F->args_2256, &F->lv_2250, &F->t_2251, &F->c_2253, &F->ro_2254);
if (((*(P1050)rt_nil_check(F->t_2251)).kind != (((rt_int)12LL)))) {
f_fail_23((*(P1044)rt_nil_check(F->inv_679)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2255)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_2258 = NULL;
F->dt_2259 = NULL;
f_lvalue_784((*(P1044)rt_nil_check(F->args_2256)).next, &F->dv_2258, &F->dt_2259, &F->c_2253, &F->ro_2254);
f_check_type_232(F->dt_2259, (*(P1050)rt_nil_check(F->t_2251)).elem, (*(P1044)rt_nil_check(F->inv_679)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2257, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P1037)rt_nil_check(F->lv_2250))->all)), rt_str(", &", 3)), (((P1037)rt_nil_check(F->dv_2258))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_2260 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_2261 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->args_2256)).next, (*(P1050)rt_nil_check(F->t_2251)).elem, &F->vt_2252));
f_check_type_232(F->vt_2252, (*(P1050)rt_nil_check(F->t_2251)).elem, (*(P1044)rt_nil_check(F->inv_679)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1050)rt_nil_check(F->t_2251)).elem), rt_str(" ", 1)), F->tmp_2260), rt_str(" = ", 3)), F->v_2261), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2257, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P1037)rt_nil_check(F->lv_2250))->all)), rt_str(", &", 3)), F->tmp_2260), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2255)).name))->all), rt_str("DELAY_UNTIL", 11)) && (f_list_len_71(F->args_2256) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2257, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_r_act_deadline(", 65)), f_act_delay_args_982(F->args_2256)), rt_str(")};", 3));
goto ret_;
} else if ((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2255)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2255)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_2262 = rt_str_copy(f_gexpr_815(F->args_2256, g_ty_int_1129, &F->vt_2252));
if ((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2255)).name))->all), rt_str("DELAY", 5)) && F->mixed_682)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2257, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_2262), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2255)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2257, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_2262), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2257, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_2262), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2255)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2257, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_666(F->args_2256)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23((*(P1044)rt_nil_check(F->inv_679)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2255)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_685(P1044 inv_684) {
  struct f_builtin_wait_685fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_684 = inv_684;
F->lv_2263 = NULL;
F->t_2264 = NULL;
F->c_2265 = NULL;
F->saved_2267 = NULL;
F->saved_2267 = g_code_1098;
F->ok_2268 = 0;
if ((((*(P1044)rt_nil_check(F->inv_684)).kind != (((rt_int)10LL))) || ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->inv_684)).a)).kind != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->inv_684)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->inv_684)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->inv_684)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->inv_684)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->inv_684)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_1127 = rt_add(g_trial_1127, ((rt_int)1LL));
g_code_1098 = f_new_buffer_24();
{ rt_frame xf2269;
if (RT_TRY(xf2269)) {
f_lvalue_784((*(P1044)rt_nil_check(F->inv_684)).b, &F->lv_2263, &F->t_2264, &F->c_2265, &F->ro_2266);
F->ok_2268 = ((*(P1050)rt_nil_check(F->t_2264)).kind == (((rt_int)12LL)));
RT_POP(xf2269);
} else {
RT_POP(xf2269);
int x2270 = rt_xcur;
if (0 || x2270 == ex_compile_error_1) {
F->ok_2268 = 0;
} else {
rt_raise(x2270);
}
}
}
g_trial_1127 = rt_sub(g_trial_1127, ((rt_int)1LL));
g_code_1098 = F->saved_2267;
F->result_ = F->ok_2268;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_690(P1044 inv_686, rstr *op_687, rstr *q_688, int is_stmt_689) {
  struct f_wait_op_690fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_686 = inv_686;
F->op_687 = op_687;
F->q_688 = q_688;
F->is_stmt_689 = is_stmt_689;
F->x_2271 = NULL;
F->x_2271 = f_nn_65((((rt_int)10LL)), (*(P1044)rt_nil_check(F->inv_686)).line);
F->f_2272 = NULL;
F->f_2272 = f_nn_65((((rt_int)7LL)), (*(P1044)rt_nil_check(F->inv_686)).line);
F->qn_2273 = NULL;
F->qn_2273 = f_nn_65((((rt_int)7LL)), (*(P1044)rt_nil_check(F->inv_686)).line);
F->t_2274 = NULL;
(*(P1044)rt_nil_check(F->f_2272)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->inv_686)).a)).name))->all), rt_str("_", 1)), (*F->op_687)); b_; }));
(*(P1044)rt_nil_check(F->qn_2273)).name = f_mk_3(&(*F->q_688));
(*(P1044)rt_nil_check(F->qn_2273)).next = (*(P1044)rt_nil_check(F->inv_686)).b;
(*(P1044)rt_nil_check(F->x_2271)).a = F->f_2272;
(*(P1044)rt_nil_check(F->x_2271)).b = F->qn_2273;
{
F->r_2275 = rt_str_copy(f_gcall_966(F->x_2271, F->is_stmt_689, &F->t_2274));
if ((!F->is_stmt_689)) {
f_check_type_232(F->t_2274, g_ty_bool_1130, (*(P1044)rt_nil_check(F->inv_686)).line);
}
F->result_ = F->r_2275;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_695(P1044 s_691, rstr *arr_692, rstr *w_693, rt_int n_694) {
  struct f_user_wait_695fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_691 = s_691;
F->arr_692 = arr_692;
F->w_693 = w_693;
F->n_694 = n_694;
F->a_2276 = NULL;
F->a_2276 = (*(P1044)rt_nil_check(F->s_691)).a;
F->i_2277 = ((rt_int)0LL);
F->tests_2278 = NULL;
F->tests_2278 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_2279 = NULL;
F->revokes_2279 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_177();
while ((F->a_2276 != NULL)) {
F->inv_2280 = NULL;
F->inv_2280 = (*(P1044)rt_nil_check(F->a_2276)).a;
while ((F->inv_2280 != NULL)) {
if (f_builtin_wait_685(F->inv_2280)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_683(F->inv_2280, &(*F->arr_692), F->i_2277, 1); b_; }));
} else {
F->st_2281 = NULL;
F->st_2281 = f_nn_65((((rt_int)80LL)), (*(P1044)rt_nil_check(F->inv_2280)).line);
F->c_2282 = NULL;
F->qt_2283 = NULL;
F->qname_2284 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_2285 = NULL;
F->y_2285 = f_new_sym_181((((rt_int)1LL)), f_mk_3(&F->qname_2284));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_692), rt_str("[", 1)), f_itos_7(F->i_2277)), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P1044)rt_nil_check(F->st_2281)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->inv_2280)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_2283 = f_resolve_subtype_268(F->st_2281, &F->c_2282);
{
F->access_2286 = rt_str_copy(f_storage_534(&F->qname_2284, F->qt_2283));
f_init_storage_346(&F->access_2286, F->qt_2283, F->c_2282);
(*(P1054)rt_nil_check(F->y_2285)).t = F->qt_2283;
(*(P1054)rt_nil_check(F->y_2285)).c = F->c_2282;
f_bind_537(F->y_2285, &F->access_2286);
f_define_168(F->y_2285, (*(P1044)rt_nil_check(F->inv_2280)).line);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_690(F->inv_2280, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_2284, 1), rt_str(";", 1)); b_; }));
F->tests_2278 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->tests_2278))->all), rt_str("if (", 4)), f_wait_op_690(F->inv_2280, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_2284, 0)), rt_str(") { ", 4)), f_wait_op_690(F->inv_2280, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_2284, 1)), rt_str("; ", 2)), (*F->w_693)), rt_str(" = ", 3)), f_itos_7(F->i_2277)), rt_str("; break; } ", 11)); b_; }));
F->revokes_2279 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->revokes_2279))->all), f_wait_op_690(F->inv_2280, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_2284, 1)), rt_str("; ", 2)); b_; }));
}
F->i_2277 = rt_add(F->i_2277, ((rt_int)1LL));
F->inv_2280 = (*(P1044)rt_nil_check(F->inv_2280)).next;
}
F->a_2276 = (*(P1044)rt_nil_check(F->a_2276)).next;
}
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_693)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P1037)rt_nil_check(F->tests_2278))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_693), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_694)), rt_str(", ", 2)), (*F->arr_692)), rt_str("); if (", 7)), (*F->w_693)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_694)), rt_str(", ", 2)), (*F->arr_692)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_693)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_693)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P1037)rt_nil_check(F->revokes_2279))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_697(P1044 s_696) {
  struct f_st_wait_697fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_696 = s_696;
F->a_2287 = NULL;
F->a_2287 = (*(P1044)rt_nil_check(F->s_696)).a;
F->n_2288 = ((rt_int)0LL);
F->first_2289 = 1;
F->inits_2290 = NULL;
F->inits_2290 = f_new_buffer_24();
F->user_2291 = 0;
F->arr_2292 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_2293 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_2287 != NULL)) {
F->inv_2294 = NULL;
F->inv_2294 = (*(P1044)rt_nil_check(F->a_2287)).a;
F->n_2288 = rt_add(F->n_2288, f_list_len_71((*(P1044)rt_nil_check(F->a_2287)).a));
while ((F->inv_2294 != NULL)) {
if ((!f_builtin_wait_685(F->inv_2294))) {
F->user_2291 = 1;
}
F->inv_2294 = (*(P1044)rt_nil_check(F->inv_2294)).next;
}
F->a_2287 = (*(P1044)rt_nil_check(F->a_2287)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_2292), rt_str("[", 1)), f_itos_7(F->n_2288)), rt_str("];", 2)); b_; }));
if (F->user_2291) {
f_user_wait_695(F->s_696, &F->arr_2292, &F->w_2293, F->n_2288);
} else {
F->a_2287 = (*(P1044)rt_nil_check(F->s_696)).a;
F->n_2288 = ((rt_int)0LL);
while ((F->a_2287 != NULL)) {
F->inv_2295 = NULL;
F->inv_2295 = (*(P1044)rt_nil_check(F->a_2287)).a;
while ((F->inv_2295 != NULL)) {
f_put_27(F->inits_2290, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_683(F->inv_2295, &F->arr_2292, F->n_2288, 0); b_; }));
F->n_2288 = rt_add(F->n_2288, ((rt_int)1LL));
F->inv_2295 = (*(P1044)rt_nil_check(F->inv_2295)).next;
}
F->a_2287 = (*(P1044)rt_nil_check(F->a_2287)).next;
}
f_splice_34(g_code_1098, F->inits_2290);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_2293), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_2288)), rt_str(", ", 2)), F->arr_2292), rt_str(");", 2)); b_; }));
}
F->a_2287 = (*(P1044)rt_nil_check(F->s_696)).a;
F->n_2288 = ((rt_int)0LL);
while ((F->a_2287 != NULL)) {
F->conds_2296 = NULL;
F->conds_2296 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo2298 = ((rt_int)1LL), hi2299 = f_list_len_71((*(P1044)rt_nil_check(F->a_2287)).a);
for (rt_int it2300 = lo2298; it2300 <= hi2299; it2300++) {
F->i_2297 = it2300;
F->conds_2296 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->conds_2296))->all), rt_str(" || ", 4)), F->w_2293), rt_str(" == ", 4)), f_itos_7(F->n_2288)); b_; }));
F->n_2288 = rt_add(F->n_2288, ((rt_int)1LL));
}
}
if (F->first_2289) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1037)rt_nil_check(F->conds_2296))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1037)rt_nil_check(F->conds_2296))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2289 = 0;
f_gen_body_612((*(P1044)rt_nil_check(F->a_2287)).b);
F->a_2287 = (*(P1044)rt_nil_check(F->a_2287)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1044 f_call_node_701(rstr *name_698, P1044 arg_699, rt_int line_700) {
  struct f_call_node_701fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_698 = name_698;
F->arg_699 = arg_699;
F->line_700 = line_700;
F->x_2301 = NULL;
F->x_2301 = f_nn_65((((rt_int)10LL)), F->line_700);
F->f_2302 = NULL;
F->f_2302 = f_nn_65((((rt_int)7LL)), F->line_700);
(*(P1044)rt_nil_check(F->f_2302)).name = f_mk_3(&(*F->name_698));
(*(P1044)rt_nil_check(F->x_2301)).a = F->f_2302;
(*(P1044)rt_nil_check(F->x_2301)).b = f_copy_node_857(F->arg_699);
(*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->x_2301)).b)).next = NULL;
F->result_ = F->x_2301;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_703(P1044 s_702) {
  struct f_user_region_703fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_702 = s_702;
F->t_2303 = NULL;
F->f_2304 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_2305 = rt_str_copy(f_gcall_966(f_call_node_701(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P1044)rt_nil_check(F->s_702)).a, (*(P1044)rt_nil_check(F->s_702)).line), 1, &F->t_2303));
F->unlock_2306 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_966(f_call_node_701(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P1044)rt_nil_check(F->s_702)).a, (*(P1044)rt_nil_check(F->s_702)).line), 1, &F->t_2303)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_2305), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2304), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2304), rt_str(")) {", 4)); b_; }));
f_push_cleanup_620(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2304), rt_str("); ", 3)), F->unlock_2306); b_; }));
f_gen_body_612((*(P1044)rt_nil_check(F->s_702)).b);
f_pop_cleanup_621();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2304), rt_str("); ", 3)), F->unlock_2306); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2304), rt_str("); ", 3)), F->unlock_2306), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_705(P1044 s_704) {
  struct f_st_region_705fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_704 = s_704;
F->lv_2307 = NULL;
F->t_2308 = NULL;
F->c_2309 = NULL;
F->lk_2311 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_2312 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_784((*(P1044)rt_nil_check(F->s_704)).a, &F->lv_2307, &F->t_2308, &F->c_2309, &F->ro_2310);
if (((*(P1050)rt_nil_check(F->t_2308)).kind != (((rt_int)13LL)))) {
f_user_region_703(F->s_704);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_2311), rt_str(" = &", 4)), (((P1037)rt_nil_check(F->lv_2307))->all)), rt_str("; rt_region_enter(", 18)), F->lk_2311), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2312), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2312), rt_str(")) {", 4)); b_; }));
f_push_cleanup_620(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2312), rt_str("); rt_region_leave(", 19)), F->lk_2311), rt_str(");", 2)); b_; }));
f_gen_body_612((*(P1044)rt_nil_check(F->s_704)).b);
f_pop_cleanup_621();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2312), rt_str("); rt_region_leave(", 19)), F->lk_2311), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2312), rt_str("); rt_region_leave(", 19)), F->lk_2311), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1044 f_gparam_708(P1044 g_706, rstr *name_707) {
  struct f_gparam_708fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_706 = g_706;
F->name_707 = name_707;
F->p_2313 = NULL;
F->p_2313 = (*(P1044)rt_nil_check(F->g_706)).a;
while ((F->p_2313 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2313)).name))->all), (*F->name_707))) {
F->result_ = F->p_2313;
goto ret_;
}
F->p_2313 = (*(P1044)rt_nil_check(F->p_2313)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1054 f_bind_sym_710(P1044 p_709) {
  struct f_bind_sym_710fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_709 = p_709;
F->y_2314 = NULL;
if (((*(P1044)rt_nil_check(F->p_709)).ival <= ((rt_int)2LL))) {
F->y_2314 = f_new_sym_181((((rt_int)5LL)), (*(P1044)rt_nil_check(F->p_709)).name);
} else {
F->y_2314 = f_new_sym_181((((rt_int)2LL)), (*(P1044)rt_nil_check(F->p_709)).name);
}
F->result_ = F->y_2314;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_713(P1054 a_711, P1054 b_712) {
  struct f_same_binds_713fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_711 = a_711;
F->b_712 = b_712;
F->x_2315 = NULL;
F->x_2315 = F->a_711;
F->y_2316 = NULL;
F->y_2316 = F->b_712;
while (((F->x_2315 != NULL) && (F->y_2316 != NULL))) {
if (((!rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->x_2315)).name))->all), (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_2316)).name))->all))) || (!f_same_binding_716(F->x_2315, F->y_2316)))) {
F->result_ = 0;
goto ret_;
}
F->x_2315 = (*(P1054)rt_nil_check(F->x_2315)).mnext;
F->y_2316 = (*(P1054)rt_nil_check(F->y_2316)).mnext;
}
F->result_ = ((F->x_2315 == NULL) && (F->y_2316 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_716(P1054 a_714, P1054 b_715) {
  struct f_same_binding_716fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_714 = a_714;
F->b_715 = b_715;
if (((*(P1054)rt_nil_check(F->a_714)).kind == (((rt_int)5LL)))) {
F->result_ = (((*(P1054)rt_nil_check(F->b_715)).kind == (((rt_int)5LL))) && f_same_221((*(P1054)rt_nil_check(F->a_714)).t, (*(P1054)rt_nil_check(F->b_715)).t));
goto ret_;
}
if ((((*(P1054)rt_nil_check(F->a_714)).kind == (((rt_int)2LL))) && (*(P1054)rt_nil_check(F->a_714)).hasmv)) {
F->result_ = ((*(P1054)rt_nil_check(F->b_715)).hasmv && ((*(P1054)rt_nil_check(F->a_714)).mvalue == (*(P1054)rt_nil_check(F->b_715)).mvalue));
goto ret_;
}
if ((((*(P1054)rt_nil_check(F->a_714)).kind == (((rt_int)2LL))) && ((*(P1054)rt_nil_check(F->a_714)).mv != NULL))) {
if (((((*(P1054)rt_nil_check(F->b_715)).mv == NULL) || ((*(P1063)rt_nil_check((*(P1054)rt_nil_check(F->a_714)).mv)).kind != (*(P1063)rt_nil_check((*(P1054)rt_nil_check(F->b_715)).mv)).kind)) || (!f_same_221((*(P1054)rt_nil_check(F->a_714)).t, (*(P1054)rt_nil_check(F->b_715)).t)))) {
F->result_ = 0;
goto ret_;
} else if (((*(P1063)rt_nil_check((*(P1054)rt_nil_check(F->a_714)).mv)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_eq((((P1037)rt_nil_check((*(P1063)rt_nil_check((*(P1054)rt_nil_check(F->a_714)).mv)).s))->all), (((P1037)rt_nil_check((*(P1063)rt_nil_check((*(P1054)rt_nil_check(F->b_715)).mv)).s))->all));
goto ret_;
}
F->result_ = ((*(P1063)rt_nil_check((*(P1054)rt_nil_check(F->a_714)).mv)).i == (*(P1063)rt_nil_check((*(P1054)rt_nil_check(F->b_715)).mv)).i);
goto ret_;
}
F->result_ = ((((*(P1054)rt_nil_check(F->a_714)).cname != NULL) && ((*(P1054)rt_nil_check(F->b_715)).cname != NULL)) && rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->a_714)).cname))->all), (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->b_715)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1054 f_tt_binds_721(P1044 gd_717, P1044 formals_718, P1044 actuals_719, rt_int line_720) {
  struct f_tt_binds_721fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_717 = gd_717;
F->formals_718 = formals_718;
F->actuals_719 = actuals_719;
F->line_720 = line_720;
F->f_2317 = NULL;
F->f_2317 = F->formals_718;
F->a_2318 = NULL;
F->a_2318 = F->actuals_719;
F->binds_2319 = NULL;
F->c_2320 = NULL;
F->at_2321 = NULL;
while (((F->f_2317 != NULL) && (F->a_2318 != NULL))) {
F->p_2322 = NULL;
F->p_2322 = f_gparam_708(F->gd_717, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->f_2317)).name))->all));
F->b_2323 = NULL;
if ((F->p_2322 == NULL)) {
f_fail_23(F->line_720, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->f_2317)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_2323 = f_bind_sym_710(F->p_2322);
if (((*(P1044)rt_nil_check(F->p_2322)).ival <= ((rt_int)2LL))) {
if (((*(P1044)rt_nil_check(F->a_2318)).kind >= (((rt_int)70LL)))) {
(*(P1054)rt_nil_check(F->b_2323)).t = f_resolve_subtype_268(F->a_2318, &F->c_2320);
} else {
F->st_2324 = NULL;
F->st_2324 = f_nn_65((((rt_int)80LL)), F->line_720);
(*(P1044)rt_nil_check(F->st_2324)).name = (*(P1044)rt_nil_check(F->a_2318)).name;
(*(P1054)rt_nil_check(F->b_2323)).t = f_resolve_subtype_268(F->st_2324, &F->c_2320);
}
(*(P1054)rt_nil_check(F->b_2323)).c = F->c_2320;
if ((((*(P1044)rt_nil_check(F->p_2322)).b != NULL) && (!f_type_allowed_725((*(P1054)rt_nil_check(F->b_2323)).t, (*(P1044)rt_nil_check(F->p_2322)).b, F->binds_2319)))) {
f_fail_23(F->line_720, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2322)).name))->all)); b_; }));
}
} else if (((*(P1044)rt_nil_check(F->p_2322)).ival <= ((rt_int)5LL))) {
if (((*(P1044)rt_nil_check(F->a_2318)).kind != (((rt_int)7LL)))) {
f_fail_23(F->line_720, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2322)).name))->all)); b_; }));
}
F->b_2323 = f_copy_sym_453(f_pick_operation_736((*(P1044)rt_nil_check(F->p_2322)).ival, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->a_2318)).name))->all), (*(P1044)rt_nil_check(F->p_2322)).b, (*(P1044)rt_nil_check(F->p_2322)).a, F->binds_2319, F->line_720));
(*(P1054)rt_nil_check(F->b_2323)).name = (*(P1044)rt_nil_check(F->p_2322)).name;
} else if ((((*(P1044)rt_nil_check(F->p_2322)).ival == ((rt_int)7LL)) || ((*(P1044)rt_nil_check(F->p_2322)).ival == ((rt_int)8LL)))) {
(*(P1054)rt_nil_check(F->b_2323)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_815(F->a_2318, NULL, &F->at_2321)), rt_str(")", 1)); b_; }));
(*(P1054)rt_nil_check(F->b_2323)).t = F->at_2321;
if (((((*(P1044)rt_nil_check(F->p_2322)).ival == ((rt_int)7LL)) && ((*(P1050)rt_nil_check(F->at_2321)).kind != (((rt_int)5LL)))) || (((*(P1044)rt_nil_check(F->p_2322)).ival == ((rt_int)8LL)) && ((*(P1050)rt_nil_check(f_base_of_223(F->at_2321))).kind != (((rt_int)4LL)))))) {
f_fail_23(F->line_720, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2322)).name))->all)), rt_str(" is not of the kind its constraint requires", 43)); b_; }));
}
(*(P1054)rt_nil_check(F->b_2323)).mv = f_meval_390(F->a_2318, &F->ok_2325);
if ((!F->ok_2325)) {
f_fail_23(F->line_720, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2322)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
if (((*(P1063)rt_nil_check((*(P1054)rt_nil_check(F->b_2323)).mv)).kind == (((rt_int)4LL)))) {
(*(P1063)rt_nil_check((*(P1054)rt_nil_check(F->b_2323)).mv)).i = f_lit_index_265((*(P1050)rt_nil_check(f_base_of_223(F->at_2321))).lits, &(((P1037)rt_nil_check((*(P1063)rt_nil_check((*(P1054)rt_nil_check(F->b_2323)).mv)).s))->all));
}
} else {
(*(P1054)rt_nil_check(F->b_2323)).t = f_resolve_subtype_268((*(P1044)rt_nil_check(F->p_2322)).a, &F->c_2320);
(*(P1054)rt_nil_check(F->b_2323)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_checked_213((*(P1054)rt_nil_check(F->b_2323)).t, F->c_2320, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_815(F->a_2318, (*(P1054)rt_nil_check(F->b_2323)).t, &F->at_2321); b_; }))), rt_str(")", 1)); b_; }));
f_check_type_232(F->at_2321, (*(P1054)rt_nil_check(F->b_2323)).t, F->line_720);
(*(P1054)rt_nil_check(F->b_2323)).mvalue = f_manifest_381(F->a_2318, &F->ok_2326);
(*(P1054)rt_nil_check(F->b_2323)).hasmv = F->ok_2326;
(*(P1054)rt_nil_check(F->b_2323)).mv = f_meval_390(F->a_2318, &F->ok_2326);
if ((!F->ok_2326)) {
f_fail_23(F->line_720, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2322)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
}
(*(P1054)rt_nil_check(F->b_2323)).mnext = F->binds_2319;
F->binds_2319 = F->b_2323;
F->f_2317 = (*(P1044)rt_nil_check(F->f_2317)).next;
F->a_2318 = (*(P1044)rt_nil_check(F->a_2318)).next;
}
F->result_ = F->binds_2319;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_allowed_725(P1050 t_722, P1044 items_723, P1054 binds_724) {
  struct f_type_allowed_725fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_722 = t_722;
F->items_723 = items_723;
F->binds_724 = binds_724;
F->it_2327 = NULL;
F->it_2327 = F->items_723;
F->b_2328 = NULL;
F->b_2328 = f_base_of_223(F->t_722);
while ((F->it_2327 != NULL)) {
if (((((*(P1044)rt_nil_check(F->it_2327)).kind == (((rt_int)80LL))) && ((*(P1044)rt_nil_check(F->it_2327)).b == NULL)) && (f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->it_2327)).name))->all)) == NULL))) {
F->w_2329 = rt_str_copy((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->it_2327)).name))->all));
if (((((((((((rt_str_eq(F->w_2329, rt_str("INT", 3)) && ((*(P1050)rt_nil_check(F->b_2328)).kind == (((rt_int)1LL)))) || (rt_str_eq(F->w_2329, rt_str("FLOAT", 5)) && ((*(P1050)rt_nil_check(F->b_2328)).kind == (((rt_int)3LL))))) || (rt_str_eq(F->w_2329, rt_str("BOOL", 4)) && ((*(P1050)rt_nil_check(F->b_2328)).kind == (((rt_int)2LL))))) || (rt_str_eq(F->w_2329, rt_str("ENUM", 4)) && ((*(P1050)rt_nil_check(F->b_2328)).kind == (((rt_int)4LL))))) || (rt_str_eq(F->w_2329, rt_str("STRING", 6)) && ((*(P1050)rt_nil_check(F->b_2328)).kind == (((rt_int)5LL))))) || (rt_str_eq(F->w_2329, rt_str("ARRAY", 5)) && ((*(P1050)rt_nil_check(F->b_2328)).kind == (((rt_int)6LL))))) || (rt_str_eq(F->w_2329, rt_str("RECORD", 6)) && ((*(P1050)rt_nil_check(F->b_2328)).kind == (((rt_int)7LL))))) || (rt_str_eq(F->w_2329, rt_str("UNION", 5)) && ((*(P1050)rt_nil_check(F->b_2328)).kind == (((rt_int)17LL))))) || (rt_str_eq(F->w_2329, rt_str("SET", 3)) && ((*(P1050)rt_nil_check(F->b_2328)).kind == (((rt_int)16LL))))) || (rt_str_eq(F->w_2329, rt_str("ASCII", 5)) && f_same_221(F->t_722, g_ty_ascii_1132)))) {
F->result_ = 1;
goto ret_;
}
} else {
F->c_2330 = NULL;
if (f_same_221(f_resolve_in_binds_729(F->it_2327, F->binds_724, &F->c_2330), F->t_722)) {
F->result_ = 1;
goto ret_;
}
}
F->it_2327 = (*(P1044)rt_nil_check(F->it_2327)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1050 f_resolve_in_binds_729(P1044 st_726, P1054 binds_727, P1046 *c_728) {
  struct f_resolve_in_binds_729fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_726 = st_726;
F->binds_727 = binds_727;
F->c_728 = c_728;
F->c_728v = *F->c_728;
F->b_2331 = NULL;
F->b_2331 = F->binds_727;
F->t_2332 = NULL;
f_open_scope_177();
while ((F->b_2331 != NULL)) {
F->z_2333 = NULL;
F->z_2333 = f_copy_sym_453(F->b_2331);
f_define_168(F->z_2333, (*(P1044)rt_nil_check(F->st_726)).line);
F->b_2331 = (*(P1054)rt_nil_check(F->b_2331)).mnext;
}
F->t_2332 = f_resolve_subtype_268(F->st_726, &F->c_728v);
f_close_scope_178();
F->result_ = F->t_2332;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_728) = F->c_728v;
  RT_FPOP();
  return F->result_;
}

static P1054 f_pick_operation_736(rt_int kind_730, rstr *name_731, P1044 sig_732, P1044 res_733, P1054 binds_734, rt_int line_735) {
  struct f_pick_operation_736fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_730 = kind_730;
F->name_731 = name_731;
F->sig_732 = sig_732;
F->res_733 = res_733;
F->binds_734 = binds_734;
F->line_735 = line_735;
F->y_2334 = NULL;
F->c_2335 = NULL;
F->want_2336 = (((rt_int)4LL));
if ((F->kind_730 == ((rt_int)4LL))) {
F->want_2336 = (((rt_int)3LL));
} else if ((F->kind_730 == ((rt_int)5LL))) {
F->want_2336 = (((rt_int)9LL));
}
{ rt_int lo2338 = ((rt_int)1LL), hi2339 = ((rt_int)3LL);
for (rt_int it2340 = lo2338; it2340 <= hi2339; it2340++) {
F->pass_2337 = it2340;
F->y_2334 = f_overload_chain_946(&(*F->name_731), F->pass_2337);
while ((F->y_2334 != NULL)) {
if (((rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_2334)).name))->all), (*F->name_731)) && (((*(P1054)rt_nil_check(F->y_2334)).kind == F->want_2336) || ((F->kind_730 == ((rt_int)0LL)) && (((*(P1054)rt_nil_check(F->y_2334)).kind == (((rt_int)4LL))) || ((*(P1054)rt_nil_check(F->y_2334)).kind == (((rt_int)3LL))))))) && ((F->pass_2337 != ((rt_int)1LL)) || ((*(P1054)rt_nil_check(F->y_2334)).depth >= g_gdepth_1117)))) {
F->ok_2341 = 1;
if (((F->sig_732 != NULL) || (F->kind_730 == ((rt_int)0LL)))) {
F->s_2342 = NULL;
F->s_2342 = F->sig_732;
F->pm_2343 = NULL;
F->pm_2343 = (*(P1054)rt_nil_check(F->y_2334)).params;
while (((F->ok_2341 && (F->s_2342 != NULL)) && (F->pm_2343 != NULL))) {
F->ok_2341 = f_same_221(f_resolve_in_binds_729(F->s_2342, F->binds_734, &F->c_2335), (*(P1056)rt_nil_check(F->pm_2343)).t);
F->s_2342 = (*(P1044)rt_nil_check(F->s_2342)).next;
F->pm_2343 = (*(P1056)rt_nil_check(F->pm_2343)).next;
}
F->ok_2341 = ((F->ok_2341 && (F->s_2342 == NULL)) && (F->pm_2343 == NULL));
}
if ((F->ok_2341 && (F->res_733 != NULL))) {
F->ok_2341 = (((*(P1054)rt_nil_check(F->y_2334)).kind == (((rt_int)3LL))) && f_same_221(f_resolve_in_binds_729(F->res_733, F->binds_734, &F->c_2335), (*(P1054)rt_nil_check(F->y_2334)).result));
}
if (F->ok_2341) {
F->result_ = F->y_2334;
goto ret_;
}
}
F->y_2334 = (*(P1054)rt_nil_check(F->y_2334)).chain;
}
}
}
f_fail_23(F->line_735, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no ", 3), f_kind_word_738(F->kind_730)), (*F->name_731)), rt_str(" has the interface the generic requires", 39)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_word_738(rt_int kind_737) {
  struct f_kind_word_738fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_737 = kind_737;
if ((F->kind_737 == ((rt_int)3LL))) {
F->result_ = rt_str("procedure ", 10);
goto ret_;
} else if ((F->kind_737 == ((rt_int)4LL))) {
F->result_ = rt_str("function ", 9);
goto ret_;
} else if ((F->kind_737 == ((rt_int)5LL))) {
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

static P1054 f_need_binds_742(P1044 gd_739, P1054 binds_740, rt_int line_741) {
  struct f_need_binds_742fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_739 = gd_739;
F->binds_740 = binds_740;
F->line_741 = line_741;
F->it_2344 = NULL;
F->it_2344 = (*(P1044)rt_nil_check(F->gd_739)).d;
F->r_2345 = NULL;
F->r_2345 = F->binds_740;
while ((F->it_2344 != NULL)) {
F->found_2346 = 0;
F->y_2347 = NULL;
F->y_2347 = ({ A1060 b_ = (((P1058)rt_nil_check(g_table_1084))->all); b_.p[(rt_index(f_hash_161(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->it_2344)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while (((F->y_2347 != NULL) && (!F->found_2346))) {
if ((rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_2347)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->it_2344)).name))->all)) && ((((*(P1054)rt_nil_check(F->y_2347)).kind == (((rt_int)4LL))) || ((*(P1054)rt_nil_check(F->y_2347)).kind == (((rt_int)3LL)))) || ((*(P1054)rt_nil_check(F->y_2347)).kind == (((rt_int)9LL)))))) {
F->found_2346 = 1;
}
F->y_2347 = (*(P1054)rt_nil_check(F->y_2347)).chain;
}
if (F->found_2346) {
F->z_2348 = NULL;
F->z_2348 = f_copy_sym_453(f_pick_operation_736((*(P1044)rt_nil_check(F->it_2344)).ival, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->it_2344)).name))->all), (*(P1044)rt_nil_check(F->it_2344)).b, (*(P1044)rt_nil_check(F->it_2344)).a, F->r_2345, F->line_741));
(*(P1054)rt_nil_check(F->z_2348)).mnext = F->r_2345;
F->r_2345 = F->z_2348;
} else if ((!f_is_definable_138(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->it_2344)).name))->all)))) {
f_fail_23(F->line_741, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the generic needs ", 18), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->it_2344)).name))->all)), rt_str(", which is not known where it is invoked", 40)); b_; }));
}
F->it_2344 = (*(P1044)rt_nil_check(F->it_2344)).next;
}
F->result_ = F->r_2345;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_744(P1044 st_743) {
  struct f_generic_use_744fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_743 = st_743;
if (((*(P1044)rt_nil_check(F->st_743)).kind == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P1054)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = (((((*(P1044)rt_nil_check(F->st_743)).kind == (((rt_int)80LL))) && ((*(P1044)rt_nil_check(F->st_743)).a != NULL)) && (f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->st_743)).name))->all)) != NULL)) && ((*(P1054)rt_nil_check(f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->st_743)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1054 f_infer_from_749(P1044 gd_745, P1044 pat_746, P1050 t_747, P1054 known_748) {
  struct f_infer_from_749fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_745 = gd_745;
F->pat_746 = pat_746;
F->t_747 = t_747;
F->known_748 = known_748;
F->binds_2349 = NULL;
F->binds_2349 = F->known_748;
F->e_2350 = NULL;
F->e_2350 = (*(P1044)rt_nil_check(F->pat_746)).a;
F->tp_2351 = NULL;
if (((F->t_747 == NULL) || ((*(P1050)rt_nil_check(F->t_747)).gen == NULL))) {
F->result_ = F->binds_2349;
goto ret_;
}
F->tp_2351 = (*(P1044)rt_nil_check((*(P1054)rt_nil_check((*(P1050)rt_nil_check(F->t_747)).gen)).decl)).a;
if (((*(P1044)rt_nil_check(F->pat_746)).kind == (((rt_int)78LL)))) {
F->e_2350 = f_copy_node_857((*(P1044)rt_nil_check(F->pat_746)).a);
(*(P1044)rt_nil_check(F->e_2350)).next = NULL;
}
while (((F->e_2350 != NULL) && (F->tp_2351 != NULL))) {
F->nm_2352 = NULL;
if ((((*(P1044)rt_nil_check(F->e_2350)).kind == (((rt_int)7LL))) || ((*(P1044)rt_nil_check(F->e_2350)).kind == (((rt_int)80LL))))) {
F->nm_2352 = (*(P1044)rt_nil_check(F->e_2350)).name;
}
if ((((F->nm_2352 != NULL) && (f_gparam_708(F->gd_745, &(((P1037)rt_nil_check(F->nm_2352))->all)) != NULL)) && ((*(P1044)rt_nil_check(f_gparam_708(F->gd_745, &(((P1037)rt_nil_check(F->nm_2352))->all)))).ival <= ((rt_int)2LL)))) {
F->q_2353 = NULL;
F->q_2353 = F->binds_2349;
F->have_2354 = 0;
while ((F->q_2353 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->q_2353)).name))->all), (((P1037)rt_nil_check(F->nm_2352))->all))) {
F->have_2354 = 1;
}
F->q_2353 = (*(P1054)rt_nil_check(F->q_2353)).mnext;
}
if ((!F->have_2354)) {
F->g_2355 = NULL;
F->g_2355 = (*(P1050)rt_nil_check(F->t_747)).gbinds;
while ((F->g_2355 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->g_2355)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->tp_2351)).name))->all))) {
F->b_2356 = NULL;
F->b_2356 = f_bind_sym_710(f_gparam_708(F->gd_745, &(((P1037)rt_nil_check(F->nm_2352))->all)));
(*(P1054)rt_nil_check(F->b_2356)).t = (*(P1054)rt_nil_check(F->g_2355)).t;
(*(P1054)rt_nil_check(F->b_2356)).c = (*(P1054)rt_nil_check(F->g_2355)).c;
(*(P1054)rt_nil_check(F->b_2356)).mnext = F->binds_2349;
F->binds_2349 = F->b_2356;
}
F->g_2355 = (*(P1054)rt_nil_check(F->g_2355)).mnext;
}
}
}
F->e_2350 = (*(P1044)rt_nil_check(F->e_2350)).next;
F->tp_2351 = (*(P1044)rt_nil_check(F->tp_2351)).next;
}
F->result_ = F->binds_2349;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1050 f_instantiate_type_755(P1054 g_750, P1044 tt_751, P1044 args_752, P1046 *c_753, rt_int line_754) {
  struct f_instantiate_type_755fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_750 = g_750;
F->tt_751 = tt_751;
F->args_752 = args_752;
F->c_753 = c_753;
F->c_753v = *F->c_753;
F->line_754 = line_754;
F->gd_2357 = NULL;
F->gd_2357 = (*(P1054)rt_nil_check(F->g_750)).decl;
F->pat_2358 = NULL;
F->pat_2358 = (*(P1044)rt_nil_check(F->gd_2357)).b;
F->binds_2359 = NULL;
F->binds_2359 = f_tt_binds_721(F->gd_2357, (*(P1044)rt_nil_check(F->pat_2358)).e, F->tt_751, F->line_754);
F->inst_2360 = NULL;
F->inst_2360 = g_all_insts_1086;
F->t_2361 = NULL;
F->saved_caps_2362 = NULL;
F->saved_caps_2362 = g_caps_1103;
F->saved_env_2363 = NULL;
F->saved_env_2363 = g_genv_1085;
F->saved_gdepth_2364 = g_gdepth_1117;
F->c_753v = f_new_cons_184();
(*(P1046)rt_nil_check(F->c_753v)).args = F->args_752;
while ((F->inst_2360 != NULL)) {
if ((((*(P1054)rt_nil_check(F->inst_2360)).decl == F->pat_2358) && f_same_binds_713((*(P1054)rt_nil_check(F->inst_2360)).members, F->binds_2359))) {
F->result_ = (*(P1054)rt_nil_check(F->inst_2360)).t;
goto ret_;
}
F->inst_2360 = (*(P1054)rt_nil_check(F->inst_2360)).insts;
}
f_open_scope_177();
{
F->b_2365 = NULL;
F->b_2365 = F->binds_2359;
while ((F->b_2365 != NULL)) {
f_define_168(F->b_2365, F->line_754);
F->b_2365 = (*(P1054)rt_nil_check(F->b_2365)).mnext;
}
}
g_caps_1103 = NULL;
g_genv_1085 = (*(P1054)rt_nil_check(F->g_750)).env;
g_gdepth_1117 = g_depth_1087;
{
F->y_2366 = NULL;
F->y_2366 = f_new_sym_181((((rt_int)5LL)), (*(P1044)rt_nil_check(F->pat_2358)).name);
F->yc_2367 = NULL;
(*(P1054)rt_nil_check(F->y_2366)).decl = F->pat_2358;
if (((*(P1044)rt_nil_check(F->pat_2358)).kind == (((rt_int)44LL)))) {
F->t_2361 = f_new_typ_183((((rt_int)8LL)));
(*(P1050)rt_nil_check(F->t_2361)).name = (*(P1044)rt_nil_check(F->pat_2358)).name;
(*(P1050)rt_nil_check(F->t_2361)).decl = F->pat_2358;
(*(P1054)rt_nil_check(F->y_2366)).t = F->t_2361;
f_define_168(F->y_2366, F->line_754);
f_finish_ptr_490(F->t_2361);
} else {
f_define_168(F->y_2366, F->line_754);
F->t_2361 = f_new_type_323(F->y_2366, f_nn_65((((rt_int)80LL)), F->line_754), &F->yc_2367);
}
}
g_caps_1103 = F->saved_caps_2362;
g_genv_1085 = F->saved_env_2363;
g_gdepth_1117 = F->saved_gdepth_2364;
(*(P1050)rt_nil_check(F->t_2361)).gen = F->g_750;
(*(P1050)rt_nil_check(F->t_2361)).gbinds = F->binds_2359;
f_close_scope_178();
{ R1055 *cell2368 = rt_alloc(sizeof(R1055));
(*cell2368).name = NULL;
(*cell2368).t = NULL;
(*cell2368).c = NULL;
(*cell2368).access = NULL;
(*cell2368).cname = NULL;
(*cell2368).st = NULL;
(*cell2368).decl = NULL;
(*cell2368).params = NULL;
(*cell2368).result = NULL;
(*cell2368).members = NULL;
(*cell2368).mnext = NULL;
(*cell2368).binds = NULL;
(*cell2368).insts = NULL;
(*cell2368).env = NULL;
(*cell2368).chain = NULL;
(*cell2368).stack = NULL;
(*cell2368).owner = NULL;
(*cell2368).gctx = NULL;
(*cell2368).mv = NULL;
(*cell2368).reqs = NULL;
(*cell2368).home = NULL;
(*cell2368).capn = NULL;
(*cell2368).tbinds = NULL;
(*cell2368).loc = NULL;
(*cell2368).reqs_sym = NULL;
F->inst_2360 = cell2368;
}
(*(P1054)rt_nil_check(F->inst_2360)).kind = (((rt_int)5LL));
(*(P1054)rt_nil_check(F->inst_2360)).name = (*(P1054)rt_nil_check(F->g_750)).name;
(*(P1054)rt_nil_check(F->inst_2360)).decl = F->pat_2358;
(*(P1054)rt_nil_check(F->inst_2360)).t = F->t_2361;
(*(P1054)rt_nil_check(F->inst_2360)).members = F->binds_2359;
(*(P1054)rt_nil_check(F->inst_2360)).insts = g_all_insts_1086;
g_all_insts_1086 = F->inst_2360;
F->result_ = F->t_2361;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_753) = F->c_753v;
  RT_FPOP();
  return F->result_;
}

static P1054 f_instantiate_760(P1054 g_756, P1044 tt_757, P1044 args_758, rt_int line_759) {
  struct f_instantiate_760fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_756 = g_756;
F->tt_757 = tt_757;
F->args_758 = args_758;
F->line_759 = line_759;
F->gd_2369 = NULL;
F->gd_2369 = (*(P1054)rt_nil_check(F->g_756)).decl;
F->pat_2370 = NULL;
F->pat_2370 = (*(P1044)rt_nil_check(F->gd_2369)).b;
F->binds_2371 = NULL;
F->f_2372 = NULL;
F->f_2372 = (*(P1044)rt_nil_check(F->pat_2370)).e;
F->a_2373 = NULL;
F->a_2373 = F->tt_757;
F->fp_2374 = NULL;
F->fp_2374 = (*(P1044)rt_nil_check(F->pat_2370)).a;
F->inst_2375 = NULL;
F->at_2376 = NULL;
F->c_2377 = NULL;
F->saved_fctx_2378 = NULL;
F->saved_fctx_2378 = g_fctx_1102;
F->saved_in_2379 = g_in_func_1100;
F->saved_level_2380 = g_cur_level_1101;
F->saved_sym_2381 = NULL;
F->saved_sym_2381 = g_func_sym_1112;
F->saved_code_2382 = NULL;
F->saved_code_2382 = g_code_1098;
F->saved_env_2383 = NULL;
F->saved_env_2383 = g_genv_1085;
F->saved_gdepth_2384 = g_gdepth_1117;
F->binds_2371 = f_tt_binds_721(F->gd_2369, F->f_2372, F->a_2373, F->line_759);
F->a_2373 = F->args_758;
while (((F->fp_2374 != NULL) && (F->a_2373 != NULL))) {
if (f_generic_use_744((*(P1044)rt_nil_check(F->fp_2374)).a)) {
F->v_2385 = rt_str_copy(f_gexpr_815(F->a_2373, NULL, &F->at_2376));
F->binds_2371 = f_infer_from_749(F->gd_2369, (*(P1044)rt_nil_check(F->fp_2374)).a, F->at_2376, F->binds_2371);
} else if (((((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->fp_2374)).a)).kind == (((rt_int)80LL))) && (f_gparam_708(F->gd_2369, &(((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->fp_2374)).a)).name))->all)) != NULL)) && ((*(P1044)rt_nil_check(f_gparam_708(F->gd_2369, &(((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->fp_2374)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_2386 = 0;
F->q_2387 = NULL;
F->q_2387 = F->binds_2371;
while ((F->q_2387 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->q_2387)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->fp_2374)).a)).name))->all))) {
F->known_2386 = 1;
}
F->q_2387 = (*(P1054)rt_nil_check(F->q_2387)).mnext;
}
if ((!F->known_2386)) {
F->b_2388 = NULL;
F->b_2388 = f_bind_sym_710(f_gparam_708(F->gd_2369, &(((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->fp_2374)).a)).name))->all)));
F->v_2389 = rt_str_copy(f_gexpr_815(F->a_2373, NULL, &F->at_2376));
(*(P1054)rt_nil_check(F->b_2388)).t = F->at_2376;
(*(P1054)rt_nil_check(F->b_2388)).c = g_no_cons_1147;
if ((((*(P1044)rt_nil_check(f_gparam_708(F->gd_2369, &(((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->fp_2374)).a)).name))->all)))).b != NULL) && (!f_type_allowed_725(F->at_2376, (*(P1044)rt_nil_check(f_gparam_708(F->gd_2369, &(((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->fp_2374)).a)).name))->all)))).b, F->binds_2371)))) {
f_fail_23(F->line_759, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->fp_2374)).a)).name))->all)); b_; }));
}
(*(P1054)rt_nil_check(F->b_2388)).mnext = F->binds_2371;
F->binds_2371 = F->b_2388;
}
}
F->fp_2374 = (*(P1044)rt_nil_check(F->fp_2374)).next;
F->a_2373 = (*(P1044)rt_nil_check(F->a_2373)).next;
}
F->binds_2371 = f_need_binds_742(F->gd_2369, F->binds_2371, F->line_759);
F->inst_2375 = g_all_insts_1086;
while ((F->inst_2375 != NULL)) {
if ((((*(P1054)rt_nil_check(F->inst_2375)).decl == F->pat_2370) && f_same_binds_713((*(P1054)rt_nil_check(F->inst_2375)).members, F->binds_2371))) {
F->result_ = F->inst_2375;
goto ret_;
}
F->inst_2375 = (*(P1054)rt_nil_check(F->inst_2375)).insts;
}
g_fctx_1102 = (*(P1054)rt_nil_check(F->g_756)).gctx;
g_in_func_1100 = ((*(P1054)rt_nil_check(F->g_756)).level > ((rt_int)0LL));
g_cur_level_1101 = (*(P1054)rt_nil_check(F->g_756)).level;
g_func_sym_1112 = (*(P1054)rt_nil_check(F->g_756)).owner;
g_code_1098 = f_new_buffer_24();
f_open_scope_177();
g_gdepth_1117 = g_depth_1087;
{
F->b_2390 = NULL;
F->b_2390 = F->binds_2371;
while ((F->b_2390 != NULL)) {
f_define_168(F->b_2390, F->line_759);
F->b_2390 = (*(P1054)rt_nil_check(F->b_2390)).mnext;
}
}
g_genv_1085 = (*(P1054)rt_nil_check(F->g_756)).env;
F->inst_2375 = f_build_subprogram_520(F->pat_2370);
(*(P1054)rt_nil_check(F->inst_2375)).members = F->binds_2371;
(*(P1054)rt_nil_check(F->inst_2375)).insts = g_all_insts_1086;
g_all_insts_1086 = F->inst_2375;
f_define_168(F->inst_2375, F->line_759);
f_gen_subprogram_591(F->pat_2370, F->inst_2375);
f_close_scope_178();
g_fctx_1102 = F->saved_fctx_2378;
g_in_func_1100 = F->saved_in_2379;
g_cur_level_1101 = F->saved_level_2380;
g_func_sym_1112 = F->saved_sym_2381;
g_code_1098 = F->saved_code_2382;
g_genv_1085 = F->saved_env_2383;
g_gdepth_1117 = F->saved_gdepth_2384;
F->result_ = F->inst_2375;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_762(P1054 y_761) {
  struct f_access_of_762fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_761 = y_761;
F->p_2391 = NULL;
F->p_2391 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P1054)rt_nil_check(F->y_761)).level <= ((rt_int)0LL))) {
F->result_ = (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_761)).access))->all);
goto ret_;
}
{ rt_int lo2393 = ((rt_int)1LL), hi2394 = rt_sub(g_cur_level_1101, (*(P1054)rt_nil_check(F->y_761)).level);
for (rt_int it2395 = lo2393; it2395 <= hi2394; it2395++) {
F->i_2392 = it2395;
F->p_2391 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->p_2391))->all), rt_str("->up", 4)); b_; }));
}
}
if ((*(P1054)rt_nil_check(F->y_761)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P1037)rt_nil_check(F->p_2391))->all)), rt_str("->", 2)), (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_761)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->p_2391))->all), rt_str("->", 2)), (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_761)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_import_of_765(P1044 l_763, rstr *name_764) {
  struct f_import_of_765fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_763 = l_763;
F->name_764 = name_764;
F->p_2396 = NULL;
F->p_2396 = F->l_763;
while ((F->p_2396 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2396)).name))->all), (*F->name_764))) {
F->result_ = F->p_2396;
goto ret_;
}
F->p_2396 = (*(P1044)rt_nil_check(F->p_2396)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_768(P1054 y_766, rt_int line_767) {
  struct f_check_import_768fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_766 = y_766;
F->line_767 = line_767;
F->c_2397 = NULL;
F->c_2397 = g_fctx_1102;
F->ro_2398 = 0;
while (((F->c_2397 != NULL) && ((*(P1054)rt_nil_check(F->y_766)).depth < (*(P1061)rt_nil_check(F->c_2397)).depth))) {
if ((!(*(P1061)rt_nil_check(F->c_2397)).all_imp)) {
F->imp_2399 = NULL;
F->imp_2399 = f_import_of_765((*(P1061)rt_nil_check(F->c_2397)).imps, &(((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_766)).name))->all));
if ((F->imp_2399 == NULL)) {
f_fail_23(F->line_767, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_766)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P1044)rt_nil_check(F->imp_2399)).ival == ((rt_int)1LL))) {
F->ro_2398 = 1;
}
}
F->c_2397 = (*(P1061)rt_nil_check(F->c_2397)).next;
}
F->result_ = F->ro_2398;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_770(rstr *s_769) {
  struct f_c_ident_770fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_769 = s_769;
if (((((rt_int)(((*F->s_769)).len)) > ((rt_int)1LL)) && (rt_str_get((*F->s_769), ((rt_int)1LL)) == 46))) {
F->result_ = rt_str_cat(rt_str("dot_", 4), f_lower_s_15(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_769), ((rt_int)2LL), ((rt_int)(((*F->s_769)).len))); b_; })));
goto ret_;
} else if (((((rt_int)(((*F->s_769)).len)) > ((rt_int)1LL)) && (rt_str_get((*F->s_769), ((rt_int)1LL)) == 40))) {
F->r_2400 = NULL;
F->r_2400 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel_", 4); b_; }));
{ rt_int lo2402 = ((rt_int)2LL), hi2403 = rt_sub(((rt_int)(((*F->s_769)).len)), ((rt_int)1LL));
for (rt_int it2404 = lo2402; it2404 <= hi2403; it2404++) {
F->i_2401 = it2404;
if ((rt_str_get((*F->s_769), F->i_2401) == 42)) {
F->r_2400 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_2400))->all), rt_str("s", 1)); b_; }));
} else if ((rt_str_get((*F->s_769), F->i_2401) == 44)) {
F->r_2400 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_2400))->all), rt_str("_", 1)); b_; }));
} else if ((rt_str_get((*F->s_769), F->i_2401) == 46)) {
F->r_2400 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_2400))->all), rt_str("r", 1)); b_; }));
}
}
}
F->result_ = (((P1037)rt_nil_check(F->r_2400))->all);
goto ret_;
} else if (rt_str_eq((*F->s_769), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_769), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_769), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_769), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_769), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_769), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_769), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_769), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_769), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_769), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_769), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_769), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_769), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_769), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_769));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cell_deref_773(P1050 t_771, rstr *p_772) {
  struct f_cell_deref_773fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_771 = t_771;
F->p_772 = p_772;
if ((((*(P1050)rt_nil_check(F->t_771)).decl != NULL) && ((*(P1044)rt_nil_check((*(P1050)rt_nil_check(F->t_771)).decl)).b != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->p_772)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*F->p_772)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_776(rstr *base_774, P1050 t_775) {
  struct f_deref_776fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_774 = base_774;
F->t_775 = t_775;
if ((((*(P1050)rt_nil_check(F->t_775)).decl != NULL) && ((*(P1044)rt_nil_check((*(P1050)rt_nil_check(F->t_775)).decl)).b != NULL))) {
if (f_suppressed_527(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->base_774)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_234(F->t_775)), rt_str(")rt_nil_check(", 14)), (*F->base_774)), rt_str("))->all)", 8));
goto ret_;
}
if (f_suppressed_527(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->t_775)), rt_str(")(", 2)), (*F->base_774)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->t_775)), rt_str(")rt_nil_check(", 14)), (*F->base_774)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_778(P1044 e_777) {
  struct f_is_lvalue_778fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_777 = e_777;
if (((*(P1044)rt_nil_check(F->e_777)).kind == (((rt_int)7LL)))) {
F->y_2405 = NULL;
F->y_2405 = f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_777)).name))->all));
F->result_ = ((F->y_2405 != NULL) && (((*(P1054)rt_nil_check(F->y_2405)).kind == (((rt_int)1LL))) || ((((*(P1054)rt_nil_check(F->y_2405)).kind == (((rt_int)2LL))) && ((*(P1054)rt_nil_check(F->y_2405)).mv == NULL)) && (!(*(P1054)rt_nil_check(F->y_2405)).hasmv))));
goto ret_;
} else if (((*(P1044)rt_nil_check(F->e_777)).kind == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_778((*(P1044)rt_nil_check(F->e_777)).a);
goto ret_;
} else if (((*(P1044)rt_nil_check(F->e_777)).kind == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_777)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_778((*(P1044)rt_nil_check(F->e_777)).a));
goto ret_;
} else if (((*(P1044)rt_nil_check(F->e_777)).kind == (((rt_int)10LL)))) {
if ((((*(P1044)rt_nil_check(F->e_777)).b != NULL) && ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_777)).b)).kind == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_778((*(P1044)rt_nil_check(F->e_777)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_784(P1044 e_779, P1037 *code_780, P1050 *t_781, P1046 *c_782, int *ro_783) {
  struct f_lvalue_784fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_779 = e_779;
F->code_780 = code_780;
F->code_780v = *F->code_780;
F->t_781 = t_781;
F->t_781v = *F->t_781;
F->c_782 = c_782;
F->c_782v = *F->c_782;
F->ro_783 = ro_783;
F->ro_783v = *F->ro_783;
F->base_2406 = NULL;
F->bt_2407 = NULL;
F->bc_2408 = NULL;
if (((*(P1044)rt_nil_check(F->e_779)).kind == (((rt_int)7LL)))) {
F->y_2409 = NULL;
F->y_2409 = f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_779)).name))->all));
if ((F->y_2409 == NULL)) {
f_fail_23((*(P1044)rt_nil_check(F->e_779)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_779)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P1054)rt_nil_check(F->y_2409)).kind != (((rt_int)1LL))) && ((*(P1054)rt_nil_check(F->y_2409)).kind != (((rt_int)2LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->e_779)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_779)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_780v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_762(F->y_2409); b_; }));
F->t_781v = (*(P1054)rt_nil_check(F->y_2409)).t;
F->c_782v = (*(P1054)rt_nil_check(F->y_2409)).c;
F->ro_783v = (*(P1054)rt_nil_check(F->y_2409)).ro_flag;
if ((((*(P1054)rt_nil_check(F->y_2409)).kind == (((rt_int)1LL))) && f_check_import_768(F->y_2409, (*(P1044)rt_nil_check(F->e_779)).line))) {
F->ro_783v = 1;
}
} else if (((*(P1044)rt_nil_check(F->e_779)).kind == (((rt_int)17LL)))) {
f_lvalue_784((*(P1044)rt_nil_check(F->e_779)).a, &F->code_780v, &F->t_781v, &F->c_782v, &F->ro_783v);
} else if ((((((*(P1044)rt_nil_check(F->e_779)).kind == (((rt_int)12LL))) && ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_779)).a)).kind == (((rt_int)7LL)))) && rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_779)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_780v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_954((*(P1044)rt_nil_check(F->e_779)).b, (*(P1044)rt_nil_check(F->e_779)).line, &F->t_781v); b_; }));
F->c_782v = g_no_cons_1147;
F->ro_783v = 0;
} else if (((*(P1044)rt_nil_check(F->e_779)).kind == (((rt_int)11LL)))) {
f_lvalue_784((*(P1044)rt_nil_check(F->e_779)).a, &F->base_2406, &F->bt_2407, &F->bc_2408, &F->ro_783v);
f_select_on_792(&(((P1037)rt_nil_check(F->base_2406))->all), F->bt_2407, F->e_779, &F->ro_783v, &F->code_780v, &F->t_781v, &F->c_782v);
} else if (((*(P1044)rt_nil_check(F->e_779)).kind == (((rt_int)10LL)))) {
f_lvalue_784((*(P1044)rt_nil_check(F->e_779)).a, &F->base_2406, &F->bt_2407, &F->bc_2408, &F->ro_783v);
f_index_on_809(&(((P1037)rt_nil_check(F->base_2406))->all), F->bt_2407, F->e_779, &F->ro_783v, 1, &F->code_780v, &F->t_781v, &F->c_782v);
} else {
f_fail_23((*(P1044)rt_nil_check(F->e_779)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_780) = F->code_780v;  (*F->t_781) = F->t_781v;  (*F->c_782) = F->c_782v;  if (!rt_r_undef_BOOL(F->ro_783v)) (*F->ro_783) = F->ro_783v;
  RT_FPOP();
  return;
}

static void f_select_on_792(rstr *base_785, P1050 bt_786, P1044 e_787, int *ro_788, P1037 *code_789, P1050 *t_790, P1046 *c_791) {
  struct f_select_on_792fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_785 = base_785;
F->bt_786 = bt_786;
F->e_787 = e_787;
F->ro_788 = ro_788;
F->code_789 = code_789;
F->code_789v = *F->code_789;
F->t_790 = t_790;
F->t_790v = *F->t_790;
F->c_791 = c_791;
F->c_791v = *F->c_791;
F->c_791v = g_no_cons_1147;
if (((*(P1050)rt_nil_check(F->bt_786)).kind == (((rt_int)8LL)))) {
f_finish_ptr_490(F->bt_786);
(*F->ro_788) = 0;
if (((*(P1050)rt_nil_check(F->bt_786)).decl != NULL)) {
F->p_2410 = NULL;
F->p_2410 = (*(P1044)rt_nil_check((*(P1050)rt_nil_check(F->bt_786)).decl)).b;
while ((F->p_2410 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2410)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_787)).name))->all))) {
F->pc_2411 = NULL;
F->code_789v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_234(F->bt_786)), rt_str(")rt_nil_check(", 14)), (*F->base_785)), rt_str("))->p_", 6)), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2410)).name))->all))), rt_str(")", 1)); b_; }));
F->t_790v = f_resolve_subtype_268((*(P1044)rt_nil_check(F->p_2410)).a, &F->pc_2411);
(*F->ro_788) = 1;
goto ret_;
}
F->p_2410 = (*(P1044)rt_nil_check(F->p_2410)).next;
}
}
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_787)).name))->all), rt_str("ALL", 3))) {
F->code_789v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_776(&(*F->base_785), F->bt_786); b_; }));
F->t_790v = (*(P1050)rt_nil_check(F->bt_786)).target;
goto ret_;
}
f_select_on_792(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_776(&(*F->base_785), F->bt_786); b_; }), (*(P1050)rt_nil_check(F->bt_786)).target, F->e_787, &(*F->ro_788), &F->code_789v, &F->t_790v, &F->c_791v);
goto ret_;
}
if (((*(P1050)rt_nil_check(F->bt_786)).kind == (((rt_int)15LL)))) {
F->p_2412 = NULL;
F->p_2412 = (*(P1050)rt_nil_check(F->bt_786)).tparams;
while ((F->p_2412 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2412)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_787)).name))->all))) {
F->code_789v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_785), rt_str(".p_", 3)), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2412)).name))->all))); b_; }));
F->t_790v = f_tparam_type_357(F->bt_786, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2412)).name))->all));
(*F->ro_788) = 1;
goto ret_;
}
F->p_2412 = (*(P1044)rt_nil_check(F->p_2412)).next;
}
F->p_2412 = (*(P1050)rt_nil_check(F->bt_786)).tparams;
if ((!f_opened_313(F->bt_786))) {
f_fail_23((*(P1044)rt_nil_check(F->e_787)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->bt_786)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P1050)rt_nil_check(F->bt_786)).tparams == NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_787)).name))->all), rt_str("ALL", 3))) {
F->code_789v = f_mk_3(&(*F->base_785));
F->t_790v = (*(P1050)rt_nil_check(F->bt_786)).under;
goto ret_;
}
f_select_on_792(&(*F->base_785), (*(P1050)rt_nil_check(F->bt_786)).under, F->e_787, &(*F->ro_788), &F->code_789v, &F->t_790v, &F->c_791v);
goto ret_;
}
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_787)).name))->all), rt_str("ALL", 3))) {
F->code_789v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_785), rt_str(".all", 4)); b_; }));
F->t_790v = (*(P1050)rt_nil_check(F->bt_786)).under;
goto ret_;
}
while ((F->p_2412 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2412)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_787)).name))->all))) {
F->code_789v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_785), rt_str(".p_", 3)), f_lower_s_15(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2412)).name))->all))); b_; }));
F->t_790v = f_tparam_type_357(F->bt_786, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2412)).name))->all));
(*F->ro_788) = 1;
goto ret_;
}
F->p_2412 = (*(P1044)rt_nil_check(F->p_2412)).next;
}
f_select_on_792(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_785), rt_str(".all", 4)); b_; }), (*(P1050)rt_nil_check(F->bt_786)).under, F->e_787, &(*F->ro_788), &F->code_789v, &F->t_790v, &F->c_791v);
goto ret_;
}
if (((*(P1050)rt_nil_check(F->bt_786)).kind == (((rt_int)17LL)))) {
F->f_2413 = NULL;
F->f_2413 = (*(P1050)rt_nil_check(F->bt_786)).fields;
F->i_2414 = ((rt_int)0LL);
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_787)).name))->all), rt_str("TAG", 3))) {
F->code_789v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_785)), rt_str(").tag)", 6)); b_; }));
F->t_790v = (*(P1050)rt_nil_check(F->bt_786)).elem;
(*F->ro_788) = 1;
goto ret_;
}
while ((F->f_2413 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_2413)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_787)).name))->all))) {
F->fn_2415 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_785)), rt_str(").u.", 4)), f_field_c_17(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_787)).name))->all))));
F->c_791v = (*(P1052)rt_nil_check(F->f_2413)).c;
F->code_789v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_785)), rt_str(").tag == ", 9)), f_itos_7(F->i_2414)), rt_str(" \? &", 4)), F->fn_2415), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_2415), rt_str(")))", 3)); b_; }));
F->t_790v = (*(P1052)rt_nil_check(F->f_2413)).t;
goto ret_;
}
F->i_2414 = rt_add(F->i_2414, ((rt_int)1LL));
F->f_2413 = (*(P1052)rt_nil_check(F->f_2413)).next;
}
f_fail_23((*(P1044)rt_nil_check(F->e_787)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_787)).name))->all)); b_; }));
}
if (((*(P1050)rt_nil_check(F->bt_786)).kind == (((rt_int)7LL)))) {
F->f_2416 = NULL;
F->f_2416 = (*(P1050)rt_nil_check(F->bt_786)).fields;
while ((F->f_2416 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_2416)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_787)).name))->all))) {
F->c_791v = (*(P1052)rt_nil_check(F->f_2416)).c;
F->code_789v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_785), rt_str(".", 1)), f_field_c_17(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_787)).name))->all))); b_; }));
F->t_790v = (*(P1052)rt_nil_check(F->f_2416)).t;
goto ret_;
}
F->f_2416 = (*(P1052)rt_nil_check(F->f_2416)).next;
}
f_fail_23((*(P1044)rt_nil_check(F->e_787)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_787)).name))->all)); b_; }));
}
f_fail_23((*(P1044)rt_nil_check(F->e_787)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_787)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_789) = F->code_789v;  (*F->t_790) = F->t_790v;  (*F->c_791) = F->c_791v;
  RT_FPOP();
  return;
}

static int f_has_call_794(rstr *s_793) {
  struct f_has_call_794fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_793 = s_793;
{ rt_int lo2418 = ((rt_int)1LL), hi2419 = ((rt_int)(((*F->s_793)).len));
for (rt_int it2420 = lo2418; it2420 <= hi2419; it2420++) {
F->i_2417 = it2420;
if ((rt_str_get((*F->s_793), F->i_2417) == 40)) {
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

static void f_need_slice_796(P1050 t_795) {
  struct f_need_slice_796fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_795 = t_795;
F->c_2421 = rt_str_copy(f_ctype_234(F->t_795));
F->n_2422 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_2421));
F->l_2423 = NULL;
if (f_seen_name_440(g_mcopies_1128, &F->n_2422)) {
goto ret_;
}
{ R1049 *cell2424 = rt_alloc(sizeof(R1049));
(*cell2424).s = NULL;
(*cell2424).next = NULL;
F->l_2423 = cell2424;
}
(*(P1048)rt_nil_check(F->l_2423)).s = f_mk_3(&F->n_2422);
(*(P1048)rt_nil_check(F->l_2423)).next = g_mcopies_1128;
g_mcopies_1128 = F->l_2423;
f_put_27(g_out_protos_1093, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2421), rt_str(" ", 1)), F->n_2422), rt_str("(", 1)), F->c_2421), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2421), rt_str(" ", 1)), F->n_2422), rt_str("(", 1)), F->c_2421), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_1093, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2421), rt_str(" rt_r_acat_", 11)), F->c_2421), rt_str("(", 1)), F->c_2421), rt_str(" a, ", 4)), F->c_2421), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2421), rt_str(" rt_r_acat_", 11)), F->c_2421), rt_str("(", 1)), F->c_2421), rt_str(" a, ", 4)), F->c_2421), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_2421), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_429((*(P1050)rt_nil_check(F->t_795)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_429((*(P1050)rt_nil_check(F->t_795)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_1095, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rstr f_ix_800(rstr *i_797, rstr *lo_798, rstr *hi_799) {
  struct f_ix_800fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_797 = i_797;
F->lo_798 = lo_798;
F->hi_799 = hi_799;
if (f_suppressed_527(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_797)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_797)), rt_str(", ", 2)), (*F->lo_798)), rt_str(", ", 2)), (*F->hi_799)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_809(rstr *base_801, P1050 bt_802, P1044 e_803, int *ro_804, int lv_805, P1037 *code_806, P1050 *t_807, P1046 *c_808) {
  struct f_index_on_809fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_801 = base_801;
F->bt_802 = bt_802;
F->e_803 = e_803;
F->ro_804 = ro_804;
F->lv_805 = lv_805;
F->code_806 = code_806;
F->code_806v = *F->code_806;
F->t_807 = t_807;
F->t_807v = *F->t_807;
F->c_808 = c_808;
F->c_808v = *F->c_808;
F->a_2425 = NULL;
F->a_2425 = (*(P1044)rt_nil_check(F->e_803)).b;
F->it_2426 = NULL;
F->c_808v = g_no_cons_1147;
if (((*(P1050)rt_nil_check(F->bt_802)).kind == (((rt_int)8LL)))) {
f_finish_ptr_490(F->bt_802);
(*F->ro_804) = 0;
f_index_on_809(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_776(&(*F->base_801), F->bt_802); b_; }), (*(P1050)rt_nil_check(F->bt_802)).target, F->e_803, &(*F->ro_804), F->lv_805, &F->code_806v, &F->t_807v, &F->c_808v);
goto ret_;
}
if (((*(P1050)rt_nil_check(F->bt_802)).kind == (((rt_int)15LL)))) {
if ((!f_opened_313(F->bt_802))) {
f_fail_23((*(P1044)rt_nil_check(F->e_803)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->bt_802)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P1050)rt_nil_check(F->bt_802)).tparams == NULL)) {
f_index_on_809(&(*F->base_801), (*(P1050)rt_nil_check(F->bt_802)).under, F->e_803, &(*F->ro_804), F->lv_805, &F->code_806v, &F->t_807v, &F->c_808v);
} else {
f_index_on_809(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_801), rt_str(".all", 4)); b_; }), (*(P1050)rt_nil_check(F->bt_802)).under, F->e_803, &(*F->ro_804), F->lv_805, &F->code_806v, &F->t_807v, &F->c_808v);
}
goto ret_;
}
if (((((*(P1050)rt_nil_check(F->bt_802)).kind == (((rt_int)6LL))) && (F->a_2425 != NULL)) && ((*(P1044)rt_nil_check(F->a_2425)).kind == (((rt_int)16LL))))) {
if ((((*(P1050)rt_nil_check(F->bt_802)).ndim != ((rt_int)1LL)) || ((*(P1044)rt_nil_check(F->a_2425)).next != NULL))) {
f_fail_23((*(P1044)rt_nil_check(F->e_803)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_2427 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->a_2425)).a, (*(P1050)rt_nil_check(F->bt_802)).idx, &F->it_2426));
F->hi_2428 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->a_2425)).b, (*(P1050)rt_nil_check(F->bt_802)).idx, &F->it_2426));
F->code_806v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_234(F->bt_802)), rt_str("(", 1)), (*F->base_801)), rt_str(", ", 2)), F->lo_2427), rt_str(", ", 2)), F->hi_2428), rt_str(")", 1)); b_; }));
f_need_slice_796(F->bt_802);
F->t_807v = F->bt_802;
(*F->ro_804) = 1;
}
goto ret_;
}
if (((*(P1050)rt_nil_check(F->bt_802)).kind == (((rt_int)6LL)))) {
F->off_2429 = NULL;
F->k_2430 = ((rt_int)0LL);
F->b_2431 = NULL;
F->b_2431 = f_mk_3(&(*F->base_801));
F->pre_2432 = NULL;
F->pre_2432 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_71(F->a_2425) != (*(P1050)rt_nil_check(F->bt_802)).ndim)) {
f_fail_23((*(P1044)rt_nil_check(F->e_803)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7((*(P1050)rt_nil_check(F->bt_802)).ndim), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_805) && f_has_call_794(&(*F->base_801)))) {
F->pre_2432 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->bt_802)), rt_str(" b_ = ", 6)), (*F->base_801)), rt_str("; ", 2)); b_; }));
F->b_2431 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_2425 != NULL)) {
F->k_2430 = rt_add(F->k_2430, ((rt_int)1LL));
{
F->i_2433 = rt_str_copy(f_gexpr_815(F->a_2425, f_idx_type_258(F->bt_802, F->k_2430), &F->it_2426));
F->l_2434 = rt_str_copy(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->b_2431))->all), rt_str(".", 1)), f_dim_lo_242(F->k_2430)));
F->h_2435 = rt_str_copy(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->b_2431))->all), rt_str(".", 1)), f_dim_hi_244(F->k_2430)));
f_check_type_232(F->it_2426, f_idx_type_258(F->bt_802, F->k_2430), (*(P1044)rt_nil_check(F->e_803)).line);
if ((F->off_2429 == NULL)) {
F->off_2429 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_800(&F->i_2433, &F->l_2434, &F->h_2435)), rt_str(" - ", 3)), F->l_2434), rt_str(")", 1)); b_; }));
} else {
F->off_2429 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1037)rt_nil_check(F->off_2429))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2434), rt_str(", ", 2)), F->h_2435), rt_str(") + ", 4)), f_ix_800(&F->i_2433, &F->l_2434, &F->h_2435)), rt_str(" - ", 3)), F->l_2434), rt_str(")", 1)); b_; }));
}
}
F->a_2425 = (*(P1044)rt_nil_check(F->a_2425)).next;
}
if ((((rt_int)(((((P1037)rt_nil_check(F->pre_2432))->all)).len)) > ((rt_int)0LL))) {
F->code_806v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->pre_2432))->all), (((P1037)rt_nil_check(F->b_2431))->all)), rt_str(".p[", 3)), (((P1037)rt_nil_check(F->off_2429))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_806v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->b_2431))->all), rt_str(".p[", 3)), (((P1037)rt_nil_check(F->off_2429))->all)), rt_str("]", 1)); b_; }));
}
F->t_807v = (*(P1050)rt_nil_check(F->bt_802)).elem;
F->c_808v = (*(P1050)rt_nil_check(F->bt_802)).elemcons;
goto ret_;
}
if ((f_list_len_71(F->a_2425) != ((rt_int)1LL))) {
f_fail_23((*(P1044)rt_nil_check(F->e_803)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P1050)rt_nil_check(F->bt_802)).kind == (((rt_int)5LL)))) {
if (((*(P1044)rt_nil_check(F->a_2425)).kind == (((rt_int)16LL)))) {
F->lo_2436 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->a_2425)).a, g_ty_int_1129, &F->it_2426));
F->hi_2437 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->a_2425)).b, g_ty_int_1129, &F->it_2426));
F->code_806v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_801)), rt_str(", ", 2)), F->lo_2436), rt_str(", ", 2)), F->hi_2437), rt_str(")", 1)); b_; }));
F->t_807v = F->bt_802;
(*F->ro_804) = 1;
goto ret_;
}
{
F->i_2438 = rt_str_copy(f_gexpr_815(F->a_2425, g_ty_int_1129, &F->it_2426));
F->t_807v = f_str_elem_218(F->bt_802);
F->c_808v = (*(P1050)rt_nil_check(F->bt_802)).elemcons;
if (F->lv_805) {
F->code_806v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_801)), rt_str(", ", 2)), F->i_2438), rt_str("))", 2)); b_; }));
} else {
if (((f_list_len_71((*(P1050)rt_nil_check(f_base_of_223(f_str_elem_218(F->bt_802)))).lits) < ((rt_int)256LL)) && (!f_suppressed_527(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))))) {
F->code_806v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_cchk(rt_str_get(", 21), (*F->base_801)), rt_str(", ", 2)), F->i_2438), rt_str("))", 2)); b_; }));
} else {
F->code_806v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_801)), rt_str(", ", 2)), F->i_2438), rt_str(")", 1)); b_; }));
}
(*F->ro_804) = 1;
}
}
goto ret_;
}
f_fail_23((*(P1044)rt_nil_check(F->e_803)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_806) = F->code_806v;  (*F->t_807) = F->t_807v;  (*F->c_808) = F->c_808v;
  RT_FPOP();
  return;
}

static int f_own_attribute_811(P1044 e_810) {
  struct f_own_attribute_811fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_810 = e_810;
F->saved_2439 = NULL;
F->saved_2439 = g_code_1098;
F->bt_2440 = NULL;
F->ok_2441 = 0;
g_trial_1127 = rt_add(g_trial_1127, ((rt_int)1LL));
g_code_1098 = f_new_buffer_24();
{ rt_frame xf2442;
if (RT_TRY(xf2442)) {
F->base_2444 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_810)).a, NULL, &F->bt_2440));
while (((F->bt_2440 != NULL) && ((*(P1050)rt_nil_check(F->bt_2440)).kind == (((rt_int)8LL))))) {
f_finish_ptr_490(F->bt_2440);
F->bt_2440 = (*(P1050)rt_nil_check(F->bt_2440)).target;
}
while ((((F->bt_2440 != NULL) && ((*(P1050)rt_nil_check(F->bt_2440)).kind == (((rt_int)15LL)))) && ((*(P1050)rt_nil_check(F->bt_2440)).tparams == NULL))) {
F->bt_2440 = (*(P1050)rt_nil_check(F->bt_2440)).under;
}
if (((F->bt_2440 != NULL) && ((*(P1050)rt_nil_check(F->bt_2440)).kind == (((rt_int)15LL))))) {
F->p_2445 = NULL;
F->p_2445 = (*(P1050)rt_nil_check(F->bt_2440)).tparams;
while ((F->p_2445 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2445)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_810)).name))->all))) {
F->ok_2441 = 1;
}
F->p_2445 = (*(P1044)rt_nil_check(F->p_2445)).next;
}
F->bt_2440 = (*(P1050)rt_nil_check(F->bt_2440)).under;
}
if (((F->bt_2440 != NULL) && (((*(P1050)rt_nil_check(F->bt_2440)).kind == (((rt_int)7LL))) || ((*(P1050)rt_nil_check(F->bt_2440)).kind == (((rt_int)17LL)))))) {
F->f_2446 = NULL;
F->f_2446 = (*(P1050)rt_nil_check(F->bt_2440)).fields;
while ((F->f_2446 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_2446)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_810)).name))->all))) {
F->ok_2441 = 1;
}
F->f_2446 = (*(P1052)rt_nil_check(F->f_2446)).next;
}
}
RT_POP(xf2442);
} else {
RT_POP(xf2442);
int x2443 = rt_xcur;
if (0 || x2443 == ex_compile_error_1) {
F->ok_2441 = 0;
} else {
rt_raise(x2443);
}
}
}
g_trial_1127 = rt_sub(g_trial_1127, ((rt_int)1LL));
g_code_1098 = F->saved_2439;
F->result_ = F->ok_2441;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_815(P1044 e_812, P1050 want_813, P1050 *t_814) {
  struct f_gexpr_815fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_812 = e_812;
F->want_813 = want_813;
F->t_814 = t_814;
F->t_814v = *F->t_814;
F->k_2447 = (*(P1044)rt_nil_check(F->e_812)).kind;
F->code_2448 = NULL;
F->c_2449 = NULL;
F->bt_2451 = NULL;
F->ctx_2452 = NULL;
F->ctx_2452 = g_cons_ctx_1119;
F->whole_2453 = (!g_skip_chk_1121);
g_cons_ctx_1119 = NULL;
g_skip_chk_1121 = 0;
F->t_814v = g_ty_int_1129;
if ((F->k_2447 == (((rt_int)1LL)))) {
if (((F->want_813 != NULL) && ((*(P1050)rt_nil_check(F->want_813)).kind == (((rt_int)3LL))))) {
F->t_814v = g_ty_float_1131;
F->result_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_2447 == (((rt_int)2LL)))) {
F->t_814v = g_ty_float_1131;
F->result_ = (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all);
goto ret_;
} else if ((F->k_2447 == (((rt_int)5LL)))) {
F->t_814v = g_ty_bool_1130;
F->result_ = f_itos_7((*(P1044)rt_nil_check(F->e_812)).ival);
goto ret_;
} else if (((((F->k_2447 == (((rt_int)3LL))) && (F->want_813 != NULL)) && ((*(P1050)rt_nil_check(F->want_813)).kind == (((rt_int)5LL)))) && (!f_same_221(f_str_elem_218(F->want_813), g_ty_ascii_1132)))) {
F->r_2454 = NULL;
F->r_2454 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_q_18(); b_; }));
F->t_814v = F->want_813;
{ rt_int lo2456 = ((rt_int)1LL), hi2457 = ((rt_int)(((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all)).len));
for (rt_int it2458 = lo2456; it2458 <= hi2457; it2458++) {
F->i_2455 = it2458;
F->pos_2459 = f_lit_index_265((*(P1050)rt_nil_check(f_base_of_223(f_str_elem_218(F->want_813)))).lits, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ascii_lit_828(rt_str_get((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), F->i_2455)); b_; }));
if ((F->pos_2459 < ((rt_int)0LL))) {
f_fail_23((*(P1044)rt_nil_check(F->e_812)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), f_ascii_lit_828(rt_str_get((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), F->i_2455))), rt_str(" is not a value of the component type", 37)); b_; }));
}
F->r_2454 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_2454))->all), rt_str("\\", 1)), f_octal_830(F->pos_2459)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), (((P1037)rt_nil_check(F->r_2454))->all)), f_q_18()), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_2447 == (((rt_int)3LL)))) {
F->t_814v = g_ty_string_1133;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_861(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_2447 == (((rt_int)6LL)))) {
F->t_814v = g_ty_nil_1136;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_2447 == (((rt_int)4LL)))) {
if (((F->want_813 != NULL) && ((*(P1050)rt_nil_check(f_base_of_223(F->want_813))).kind == (((rt_int)4LL))))) {
F->t_814v = F->want_813;
} else {
F->t_814v = f_enum_type_of_864(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), (*(P1044)rt_nil_check(F->e_812)).line);
}
{
F->i_2460 = f_lit_index_265((*(P1050)rt_nil_check(f_base_of_223(F->t_814v))).lits, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all));
if ((F->i_2460 < ((rt_int)0LL))) {
f_fail_23((*(P1044)rt_nil_check(F->e_812)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_2460);
goto ret_;
}
} else if ((F->k_2447 == (((rt_int)17LL)))) {
g_cons_ctx_1119 = F->ctx_2452;
F->result_ = f_gexpr_815((*(P1044)rt_nil_check(F->e_812)).a, F->want_813, &F->t_814v);
goto ret_;
} else if ((F->k_2447 == (((rt_int)7LL)))) {
F->y_2461 = NULL;
F->y_2461 = f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all));
if ((F->y_2461 == NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("ME", 2))) {
F->t_814v = g_ty_act_1139;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_814v = g_ty_act_1139;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_966(f_wrap_apply_859(F->e_812), 0, &F->t_814v);
goto ret_;
}
if (((((((((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_966(f_wrap_apply_859(F->e_812), 0, &F->t_814v);
goto ret_;
}
f_fail_23((*(P1044)rt_nil_check(F->e_812)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P1054)rt_nil_check(F->y_2461)).kind == (((rt_int)1LL))) || ((*(P1054)rt_nil_check(F->y_2461)).kind == (((rt_int)2LL))))) {
F->t_814v = (*(P1054)rt_nil_check(F->y_2461)).t;
if (((*(P1054)rt_nil_check(F->y_2461)).kind == (((rt_int)1LL)))) {
F->ro_2462 = f_check_import_768(F->y_2461, (*(P1044)rt_nil_check(F->e_812)).line);
if ((!F->whole_2453)) {
F->result_ = f_access_of_762(F->y_2461);
goto ret_;
}
F->result_ = f_init_chk_378((*(P1054)rt_nil_check(F->y_2461)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_762(F->y_2461); b_; }));
goto ret_;
}
F->result_ = f_access_of_762(F->y_2461);
goto ret_;
}
if (((*(P1054)rt_nil_check(F->y_2461)).kind == (((rt_int)3LL)))) {
F->result_ = f_gcall_966(f_wrap_apply_859(F->e_812), 0, &F->t_814v);
goto ret_;
}
f_fail_23((*(P1044)rt_nil_check(F->e_812)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_2447 == (((rt_int)8LL))) && (f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all)) != NULL)) && (f_user_op_962(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), f_copy_node_857((*(P1044)rt_nil_check(F->e_812)).a)) != NULL))) {
F->call_2463 = NULL;
F->call_2463 = f_nn_65((((rt_int)10LL)), (*(P1044)rt_nil_check(F->e_812)).line);
F->fname_2464 = NULL;
F->fname_2464 = f_nn_65((((rt_int)7LL)), (*(P1044)rt_nil_check(F->e_812)).line);
(*(P1044)rt_nil_check(F->fname_2464)).name = (*(P1044)rt_nil_check(F->e_812)).name;
(*(P1044)rt_nil_check(F->call_2463)).a = F->fname_2464;
(*(P1044)rt_nil_check(F->call_2463)).b = f_copy_node_857((*(P1044)rt_nil_check(F->e_812)).a);
F->result_ = f_gcall_966(F->call_2463, 0, &F->t_814v);
goto ret_;
} else if (((((F->k_2447 == (((rt_int)8LL))) && rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("NOT", 3))) && (F->want_813 != NULL)) && ((*(P1050)rt_nil_check(F->want_813)).kind == (((rt_int)16LL))))) {
F->a_2465 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_812)).a, F->want_813, &F->t_814v));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->want_813, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("compl", 5); b_; })), rt_str("(", 1)), F->a_2465), rt_str(")", 1));
goto ret_;
} else if ((F->k_2447 == (((rt_int)8LL)))) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("NOT", 3))) {
F->a_2466 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_812)).a, g_ty_bool_1130, &F->t_814v));
f_check_type_232(F->t_814v, g_ty_bool_1130, (*(P1044)rt_nil_check(F->e_812)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_2466), rt_str(")", 1));
goto ret_;
}
{
F->a_2467 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_812)).a, F->want_813, &F->t_814v));
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_2467;
goto ret_;
} else if (((*(P1050)rt_nil_check(F->t_814v)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_2467), rt_str(")", 1));
goto ret_;
}
f_check_type_232(F->t_814v, g_ty_int_1129, (*(P1044)rt_nil_check(F->e_812)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_2467), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_2447 == (((rt_int)9LL)))) {
F->result_ = f_gbinop_886(F->e_812, F->want_813, &F->t_814v);
goto ret_;
} else if ((F->k_2447 == (((rt_int)10LL)))) {
if ((((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).a)).kind == (((rt_int)7LL))) || ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).a)).kind == (((rt_int)12LL))))) {
F->nm_2468 = NULL;
F->nm_2468 = (*(P1044)rt_nil_check(F->e_812)).a;
F->y_2469 = NULL;
if (((*(P1044)rt_nil_check(F->nm_2468)).kind == (((rt_int)12LL)))) {
F->nm_2468 = (*(P1044)rt_nil_check(F->nm_2468)).a;
}
F->y_2469 = f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->nm_2468)).name))->all));
if (((((F->y_2469 == NULL) || ((*(P1054)rt_nil_check(F->y_2469)).kind == (((rt_int)3LL)))) || ((*(P1054)rt_nil_check(F->y_2469)).kind == (((rt_int)4LL)))) || ((*(P1054)rt_nil_check(F->y_2469)).kind == (((rt_int)10LL))))) {
F->result_ = f_gcall_966(F->e_812, 0, &F->t_814v);
goto ret_;
}
}
if ((f_user_subscript_841(F->e_812) != NULL)) {
F->result_ = f_gcall_966(f_user_subscript_841(F->e_812), 0, &F->t_814v);
goto ret_;
}
{
F->base_2470 = rt_str_copy(f_gexpr_base_821((*(P1044)rt_nil_check(F->e_812)).a, &F->bt_2451));
F->ro_2450 = 1;
f_index_on_809(&F->base_2470, F->bt_2451, F->e_812, &F->ro_2450, 0, &F->code_2448, &F->t_814v, &F->c_2449);
if ((((!f_is_lvalue_778(F->e_812)) || ((*(P1050)rt_nil_check(F->t_814v)).kind == (((rt_int)6LL)))) || ((*(P1050)rt_nil_check(F->t_814v)).kind == (((rt_int)5LL))))) {
F->result_ = (((P1037)rt_nil_check(F->code_2448))->all);
goto ret_;
}
F->result_ = f_init_chk_378(F->t_814v, &(((P1037)rt_nil_check(F->code_2448))->all));
goto ret_;
}
} else if (((F->k_2447 == (((rt_int)11LL))) && (f_user_dot_839(F->e_812) != NULL))) {
F->result_ = f_gcall_966(f_user_dot_839(F->e_812), 0, &F->t_814v);
goto ret_;
} else if ((F->k_2447 == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_811(F->e_812)))) {
F->result_ = f_attribute_869(F->e_812, &F->t_814v);
goto ret_;
} else if (((f_as_subtype_297((*(P1044)rt_nil_check(F->e_812)).a) != NULL) || f_ptr_attribute_866(F->e_812))) {
F->result_ = f_attribute_869(F->e_812, &F->t_814v);
goto ret_;
}
{
F->base_2471 = rt_str_copy(f_gexpr_base_821((*(P1044)rt_nil_check(F->e_812)).a, &F->bt_2451));
F->ro_2450 = 1;
f_select_on_792(&F->base_2471, F->bt_2451, F->e_812, &F->ro_2450, &F->code_2448, &F->t_814v, &F->c_2449);
if ((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_812)).name))->all), rt_str("TAG", 3)) || (!f_is_lvalue_778(F->e_812)))) {
F->result_ = (((P1037)rt_nil_check(F->code_2448))->all);
goto ret_;
}
F->result_ = f_init_chk_378(F->t_814v, &(((P1037)rt_nil_check(F->code_2448))->all));
goto ret_;
}
} else if ((F->k_2447 == (((rt_int)12LL)))) {
F->result_ = f_gcall_966(f_wrap_apply_859(F->e_812), 0, &F->t_814v);
goto ret_;
} else if ((F->k_2447 == (((rt_int)14LL)))) {
F->result_ = f_constructor_891(F->e_812, F->want_813, F->ctx_2452, &F->t_814v);
goto ret_;
} else if ((F->k_2447 == (((rt_int)13LL)))) {
F->result_ = f_resolved_818(F->e_812, &F->t_814v);
goto ret_;
}
f_fail_23((*(P1044)rt_nil_check(F->e_812)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_814) = F->t_814v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_818(P1044 e_816, P1050 *t_817) {
  struct f_resolved_818fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_816 = e_816;
F->t_817 = t_817;
F->t_817v = *F->t_817;
F->c_2472 = NULL;
F->vt_2473 = NULL;
F->y_2474 = NULL;
F->y_2474 = f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_2475 = NULL;
F->tt_2475 = f_copy_node_857((*(P1044)rt_nil_check(F->e_816)).b);
(*(P1044)rt_nil_check(F->tt_2475)).next = NULL;
if (((F->y_2474 != NULL) && (((*(P1054)rt_nil_check(F->y_2474)).kind == (((rt_int)10LL))) || (f_resolve_overload_940(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_2475, f_copy_node_857((*(P1044)rt_nil_check(F->e_816)).a), 0, (*(P1044)rt_nil_check(F->e_816)).line) != NULL)))) {
F->call_2476 = NULL;
F->call_2476 = f_nn_65((((rt_int)10LL)), (*(P1044)rt_nil_check(F->e_816)).line);
F->f_2477 = NULL;
F->f_2477 = f_nn_65((((rt_int)12LL)), (*(P1044)rt_nil_check(F->e_816)).line);
F->fname_2478 = NULL;
F->fname_2478 = f_nn_65((((rt_int)7LL)), (*(P1044)rt_nil_check(F->e_816)).line);
(*(P1044)rt_nil_check(F->fname_2478)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P1044)rt_nil_check(F->f_2477)).a = F->fname_2478;
(*(P1044)rt_nil_check(F->f_2477)).b = F->tt_2475;
(*(P1044)rt_nil_check(F->call_2476)).a = F->f_2477;
(*(P1044)rt_nil_check(F->call_2476)).b = f_copy_node_857((*(P1044)rt_nil_check(F->e_816)).a);
(*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->call_2476)).b)).next = NULL;
F->result_ = f_gcall_966(F->call_2476, 0, &F->t_817v);
goto ret_;
}
F->t_817v = f_resolve_subtype_268((*(P1044)rt_nil_check(F->e_816)).b, &F->c_2472);
{
F->v_2479 = rt_str_copy(f_gexpr_in_826((*(P1044)rt_nil_check(F->e_816)).a, F->t_817v, F->c_2472, &F->vt_2473));
f_check_type_232(F->vt_2473, F->t_817v, (*(P1044)rt_nil_check(F->e_816)).line);
F->result_ = f_checked_213(F->t_817v, F->c_2472, &F->v_2479);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_817) = F->t_817v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_base_821(P1044 e_819, P1050 *t_820) {
  struct f_gexpr_base_821fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_819 = e_819;
F->t_820 = t_820;
F->t_820v = *F->t_820;
g_skip_chk_1121 = 1;
F->result_ = f_gexpr_815(F->e_819, NULL, &F->t_820v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_820) = F->t_820v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_826(P1044 e_822, P1050 want_823, P1046 c_824, P1050 *t_825) {
  struct f_gexpr_in_826fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_822 = e_822;
F->want_823 = want_823;
F->c_824 = c_824;
F->t_825 = t_825;
F->t_825v = *F->t_825;
g_cons_ctx_1119 = F->c_824;
F->result_ = f_gexpr_815(F->e_822, F->want_823, &F->t_825v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_825) = F->t_825v;
  RT_FPOP();
  return F->result_;
}

static rstr f_ascii_lit_828(int ch_827) {
  struct f_ascii_lit_828fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ch_827 = ch_827;
F->l_2480 = NULL;
F->l_2480 = (*(P1050)rt_nil_check(g_ty_ascii_1132)).lits;
{ rt_int lo2482 = ((rt_int)1LL), hi2483 = rt_sub(((rt_int)(F->ch_827) + 1), ((rt_int)1LL));
for (rt_int it2484 = lo2482; it2484 <= hi2483; it2484++) {
F->i_2481 = it2484;
F->l_2480 = (*(P1044)rt_nil_check(F->l_2480)).next;
}
}
F->result_ = (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->l_2480)).name))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_octal_830(rt_int n_829) {
  struct f_octal_830fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_829 = n_829;
F->r_2485 = rt_str_new(((rt_int)3LL));
rt_str_assign(&F->r_2485, rt_str("000", 3));
(*rt_str_at(&F->r_2485, ((rt_int)1LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_829, ((rt_int)64LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2485, ((rt_int)2LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_829, ((rt_int)8LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2485, ((rt_int)3LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(F->n_829, ((rt_int)8LL)), ((rt_int)1LL)));
F->result_ = F->r_2485;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1050 f_str_cat_part_832(P1050 t_831) {
  struct f_str_cat_part_832fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_831 = t_831;
if (((*(P1050)rt_nil_check(F->t_831)).kind == (((rt_int)5LL)))) {
F->result_ = f_str_elem_218(F->t_831);
goto ret_;
}
F->result_ = F->t_831;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1050 f_peek_type_834(P1044 e_833) {
  struct f_peek_type_834fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_833 = e_833;
F->saved_2486 = NULL;
F->saved_2486 = g_code_1098;
F->t_2487 = NULL;
g_trial_1127 = rt_add(g_trial_1127, ((rt_int)1LL));
g_code_1098 = f_new_buffer_24();
{ rt_frame xf2488;
if (RT_TRY(xf2488)) {
F->v_2490 = rt_str_copy(f_gexpr_815(F->e_833, NULL, &F->t_2487));
RT_POP(xf2488);
} else {
RT_POP(xf2488);
int x2489 = rt_xcur;
if (0 || x2489 == ex_compile_error_1) {
F->t_2487 = NULL;
} else {
rt_raise(x2489);
}
}
}
g_trial_1127 = rt_sub(g_trial_1127, ((rt_int)1LL));
g_code_1098 = F->saved_2486;
F->result_ = F->t_2487;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1050 f_set_operands_837(P1044 e_835, P1050 want_836) {
  struct f_set_operands_837fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_835 = e_835;
F->want_836 = want_836;
F->t_2491 = NULL;
if (((F->want_836 != NULL) && ((*(P1050)rt_nil_check(F->want_836)).kind == (((rt_int)16LL))))) {
F->result_ = F->want_836;
goto ret_;
} else if ((F->want_836 != NULL)) {
F->result_ = NULL;
goto ret_;
}
if (((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_835)).a)).kind != (((rt_int)14LL)))) {
F->t_2491 = f_peek_type_834((*(P1044)rt_nil_check(F->e_835)).a);
} else if (((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_835)).b)).kind != (((rt_int)14LL)))) {
F->t_2491 = f_peek_type_834((*(P1044)rt_nil_check(F->e_835)).b);
}
if (((F->t_2491 != NULL) && ((*(P1050)rt_nil_check(F->t_2491)).kind == (((rt_int)16LL))))) {
F->result_ = F->t_2491;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_user_dot_839(P1044 e_838) {
  struct f_user_dot_839fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_838 = e_838;
F->arg_2492 = NULL;
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_838)).name))->all)); b_; })) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->arg_2492 = f_copy_node_857((*(P1044)rt_nil_check(F->e_838)).a);
if ((f_user_op_962(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_838)).name))->all)); b_; }), F->arg_2492) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_845(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_838)).name))->all)); b_; }), F->arg_2492, (*(P1044)rt_nil_check(F->e_838)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_user_subscript_841(P1044 e_840) {
  struct f_user_subscript_841fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_840 = e_840;
F->name_2493 = NULL;
F->name_2493 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
F->args_2494 = NULL;
F->tail_2495 = NULL;
F->a_2496 = NULL;
F->a_2496 = (*(P1044)rt_nil_check(F->e_840)).b;
if ((((((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_840)).a)).kind == (((rt_int)7LL))) && (f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_840)).a)).name))->all)) != NULL)) && ((*(P1054)rt_nil_check(f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_840)).a)).name))->all)))).kind != (((rt_int)1LL)))) && ((*(P1054)rt_nil_check(f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_840)).a)).name))->all)))).kind != (((rt_int)2LL))))) {
F->result_ = NULL;
goto ret_;
}
f_append_69(&F->args_2494, &F->tail_2495, f_copy_node_857((*(P1044)rt_nil_check(F->e_840)).a));
while ((F->a_2496 != NULL)) {
if ((((rt_int)(((((P1037)rt_nil_check(F->name_2493))->all)).len)) > ((rt_int)1LL))) {
F->name_2493 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->name_2493))->all), rt_str(",", 1)); b_; }));
}
if (((*(P1044)rt_nil_check(F->a_2496)).kind == (((rt_int)16LL)))) {
F->name_2493 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->name_2493))->all), rt_str("*..*", 4)); b_; }));
f_append_69(&F->args_2494, &F->tail_2495, f_copy_node_857((*(P1044)rt_nil_check(F->a_2496)).a));
f_append_69(&F->args_2494, &F->tail_2495, f_copy_node_857((*(P1044)rt_nil_check(F->a_2496)).b));
} else {
F->name_2493 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->name_2493))->all), rt_str("*", 1)); b_; }));
f_append_69(&F->args_2494, &F->tail_2495, f_copy_node_857(F->a_2496));
}
F->a_2496 = (*(P1044)rt_nil_check(F->a_2496)).next;
}
F->name_2493 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->name_2493))->all), rt_str(")", 1)); b_; }));
if (((f_lookup_163(&(((P1037)rt_nil_check(F->name_2493))->all)) == NULL) || (f_user_op_962(&(((P1037)rt_nil_check(F->name_2493))->all), F->args_2494) == NULL))) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_845(&(((P1037)rt_nil_check(F->name_2493))->all), F->args_2494, (*(P1044)rt_nil_check(F->e_840)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_op_call_845(rstr *name_842, P1044 args_843, rt_int line_844) {
  struct f_op_call_845fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_842 = name_842;
F->args_843 = args_843;
F->line_844 = line_844;
F->call_2497 = NULL;
F->call_2497 = f_nn_65((((rt_int)10LL)), F->line_844);
F->f_2498 = NULL;
F->f_2498 = f_nn_65((((rt_int)7LL)), F->line_844);
(*(P1044)rt_nil_check(F->f_2498)).name = f_mk_3(&(*F->name_842));
(*(P1044)rt_nil_check(F->call_2497)).a = F->f_2498;
(*(P1044)rt_nil_check(F->call_2497)).b = F->args_843;
F->result_ = F->call_2497;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_derived_relation_847(P1044 e_846) {
  struct f_derived_relation_847fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_846 = e_846;
F->l_2499 = NULL;
F->r_2500 = NULL;
F->has_eq_2501 = 0;
F->has_lt_2502 = 0;
F->l_2499 = f_copy_node_857((*(P1044)rt_nil_check(F->e_846)).a);
F->r_2500 = f_copy_node_857((*(P1044)rt_nil_check(F->e_846)).b);
(*(P1044)rt_nil_check(F->l_2499)).next = F->r_2500;
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; })) != NULL)) {
F->has_eq_2501 = (f_user_op_962(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), F->l_2499) != NULL);
}
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; })) != NULL)) {
F->l_2499 = f_copy_node_857((*(P1044)rt_nil_check(F->e_846)).a);
F->r_2500 = f_copy_node_857((*(P1044)rt_nil_check(F->e_846)).b);
(*(P1044)rt_nil_check(F->l_2499)).next = F->r_2500;
F->has_lt_2502 = (f_user_op_962(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), F->l_2499) != NULL);
}
if ((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_846)).name))->all), rt_str("/=", 2)) && F->has_eq_2501)) {
F->result_ = f_rel_not_855(f_rel_node_852(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1044)rt_nil_check(F->e_846)).a, (*(P1044)rt_nil_check(F->e_846)).b, (*(P1044)rt_nil_check(F->e_846)).line), (*(P1044)rt_nil_check(F->e_846)).line);
goto ret_;
} else if ((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_846)).name))->all), rt_str(">", 1)) && F->has_lt_2502)) {
F->result_ = f_rel_node_852(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1044)rt_nil_check(F->e_846)).b, (*(P1044)rt_nil_check(F->e_846)).a, (*(P1044)rt_nil_check(F->e_846)).line);
goto ret_;
} else if (((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_846)).name))->all), rt_str("<=", 2)) && F->has_lt_2502) && F->has_eq_2501)) {
F->result_ = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_852(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1044)rt_nil_check(F->e_846)).a, (*(P1044)rt_nil_check(F->e_846)).b, (*(P1044)rt_nil_check(F->e_846)).line), f_rel_node_852(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1044)rt_nil_check(F->e_846)).a, (*(P1044)rt_nil_check(F->e_846)).b, (*(P1044)rt_nil_check(F->e_846)).line), (*(P1044)rt_nil_check(F->e_846)).line);
goto ret_;
} else if (((rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_846)).name))->all), rt_str(">=", 2)) && F->has_lt_2502) && F->has_eq_2501)) {
F->result_ = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_852(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1044)rt_nil_check(F->e_846)).b, (*(P1044)rt_nil_check(F->e_846)).a, (*(P1044)rt_nil_check(F->e_846)).line), f_rel_node_852(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1044)rt_nil_check(F->e_846)).a, (*(P1044)rt_nil_check(F->e_846)).b, (*(P1044)rt_nil_check(F->e_846)).line), (*(P1044)rt_nil_check(F->e_846)).line);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_rel_node_852(rstr *op_848, P1044 a_849, P1044 b_850, rt_int line_851) {
  struct f_rel_node_852fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_848 = op_848;
F->a_849 = a_849;
F->b_850 = b_850;
F->line_851 = line_851;
F->result_ = f_binop_106(f_mk_3(&(*F->op_848)), f_copy_node_857(F->a_849), f_copy_node_857(F->b_850), F->line_851);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_rel_not_855(P1044 x_853, rt_int line_854) {
  struct f_rel_not_855fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_853 = x_853;
F->line_854 = line_854;
F->n_2503 = NULL;
F->n_2503 = f_nn_65((((rt_int)8LL)), F->line_854);
(*(P1044)rt_nil_check(F->n_2503)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P1044)rt_nil_check(F->n_2503)).a = F->x_853;
F->result_ = F->n_2503;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_copy_node_857(P1044 e_856) {
  struct f_copy_node_857fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_856 = e_856;
F->x_2504 = NULL;
{ R1045 *cell2505 = rt_alloc(sizeof(R1045));
(*cell2505).name = NULL;
(*cell2505).tag = NULL;
(*cell2505).prags = NULL;
(*cell2505).labels = NULL;
(*cell2505).a = NULL;
(*cell2505).b = NULL;
(*cell2505).c = NULL;
(*cell2505).d = NULL;
(*cell2505).e = NULL;
(*cell2505).next = NULL;
F->x_2504 = cell2505;
}
(*(P1044)rt_nil_check(F->x_2504)).kind = (*(P1044)rt_nil_check(F->e_856)).kind;
(*(P1044)rt_nil_check(F->x_2504)).line = (*(P1044)rt_nil_check(F->e_856)).line;
(*(P1044)rt_nil_check(F->x_2504)).ival = (*(P1044)rt_nil_check(F->e_856)).ival;
(*(P1044)rt_nil_check(F->x_2504)).flag = (*(P1044)rt_nil_check(F->e_856)).flag;
(*(P1044)rt_nil_check(F->x_2504)).name = (*(P1044)rt_nil_check(F->e_856)).name;
(*(P1044)rt_nil_check(F->x_2504)).tag = (*(P1044)rt_nil_check(F->e_856)).tag;
(*(P1044)rt_nil_check(F->x_2504)).a = (*(P1044)rt_nil_check(F->e_856)).a;
(*(P1044)rt_nil_check(F->x_2504)).b = (*(P1044)rt_nil_check(F->e_856)).b;
(*(P1044)rt_nil_check(F->x_2504)).c = (*(P1044)rt_nil_check(F->e_856)).c;
(*(P1044)rt_nil_check(F->x_2504)).d = (*(P1044)rt_nil_check(F->e_856)).d;
F->result_ = F->x_2504;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_wrap_apply_859(P1044 e_858) {
  struct f_wrap_apply_859fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_858 = e_858;
F->x_2506 = NULL;
F->x_2506 = f_nn_65((((rt_int)10LL)), (*(P1044)rt_nil_check(F->e_858)).line);
(*(P1044)rt_nil_check(F->x_2506)).a = F->e_858;
F->result_ = F->x_2506;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_861(rstr *s_860) {
  struct f_c_string_861fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_860 = s_860;
F->n_2507 = ((rt_int)0LL);
{ rt_int lo2509 = ((rt_int)1LL), hi2510 = ((rt_int)(((*F->s_860)).len));
for (rt_int it2511 = lo2509; it2511 <= hi2510; it2511++) {
F->i_2508 = it2511;
if (((rt_str_get((*F->s_860), F->i_2508) == 92) || (rt_str_get((*F->s_860), F->i_2508) == 63))) {
F->n_2507 = rt_add(F->n_2507, ((rt_int)1LL));
}
}
}
{
F->r_2512 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_860)).len)), F->n_2507), ((rt_int)2LL)));
F->j_2513 = ((rt_int)1LL);
(*rt_str_at(&F->r_2512, ((rt_int)1LL))) = 34;
{ rt_int lo2515 = ((rt_int)1LL), hi2516 = ((rt_int)(((*F->s_860)).len));
for (rt_int it2517 = lo2515; it2517 <= hi2516; it2517++) {
F->i_2514 = it2517;
F->j_2513 = rt_add(F->j_2513, ((rt_int)1LL));
if (((rt_str_get((*F->s_860), F->i_2514) == 92) || (rt_str_get((*F->s_860), F->i_2514) == 63))) {
(*rt_str_at(&F->r_2512, F->j_2513)) = 92;
F->j_2513 = rt_add(F->j_2513, ((rt_int)1LL));
}
(*rt_str_at(&F->r_2512, F->j_2513)) = rt_str_get((*F->s_860), F->i_2514);
}
}
(*rt_str_at(&F->r_2512, rt_add(F->j_2513, ((rt_int)1LL)))) = 34;
F->result_ = F->r_2512;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1050 f_enum_type_of_864(rstr *lit_862, rt_int line_863) {
  struct f_enum_type_of_864fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_862 = lit_862;
F->line_863 = line_863;
F->y_2518 = NULL;
F->y_2518 = g_scope_stack_1088;
F->c_2519 = NULL;
if ((f_lit_index_265((*(P1050)rt_nil_check(g_ty_ascii_1132)).lits, &(*F->lit_862)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_1132;
goto ret_;
}
while ((F->y_2518 != NULL)) {
if ((((((*(P1054)rt_nil_check(F->y_2518)).kind == (((rt_int)6LL))) || ((*(P1054)rt_nil_check(F->y_2518)).kind == (((rt_int)5LL)))) && ((*(P1054)rt_nil_check(F->y_2518)).st != NULL)) && ((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_2518)).st)).kind == (((rt_int)72LL))))) {
if ((f_lit_index_265((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_2518)).st)).a, &(*F->lit_862)) >= ((rt_int)0LL))) {
if (((*(P1054)rt_nil_check(F->y_2518)).kind == (((rt_int)5LL)))) {
F->st_2520 = NULL;
F->st_2520 = f_nn_65((((rt_int)80LL)), F->line_863);
(*(P1044)rt_nil_check(F->st_2520)).name = (*(P1054)rt_nil_check(F->y_2518)).name;
F->result_ = f_resolve_subtype_268(F->st_2520, &F->c_2519);
goto ret_;
}
F->result_ = f_resolve_subtype_268((*(P1054)rt_nil_check(F->y_2518)).st, &F->c_2519);
goto ret_;
}
}
F->y_2518 = (*(P1054)rt_nil_check(F->y_2518)).stack;
}
f_fail_23(F->line_863, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_862)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_866(P1044 e_865) {
  struct f_ptr_attribute_866fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_865 = e_865;
F->lv_2521 = NULL;
F->t_2522 = NULL;
F->c_2523 = NULL;
F->p_2525 = NULL;
F->saved_2526 = NULL;
F->saved_2526 = g_code_1098;
if ((!f_is_lvalue_778((*(P1044)rt_nil_check(F->e_865)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_1098 = f_new_buffer_24();
f_lvalue_784((*(P1044)rt_nil_check(F->e_865)).a, &F->lv_2521, &F->t_2522, &F->c_2523, &F->ro_2524);
g_code_1098 = F->saved_2526;
if ((((*(P1050)rt_nil_check(F->t_2522)).kind != (((rt_int)8LL))) || ((*(P1050)rt_nil_check(F->t_2522)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_2525 = (*(P1044)rt_nil_check((*(P1050)rt_nil_check(F->t_2522)).decl)).d;
while ((F->p_2525 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2525)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_865)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_2525 = (*(P1044)rt_nil_check(F->p_2525)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_869(P1044 e_867, P1050 *t_868) {
  struct f_attribute_869fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_867 = e_867;
F->t_868 = t_868;
F->t_868v = *F->t_868;
F->bt_2527 = NULL;
F->c_2528 = NULL;
F->base_2529 = NULL;
F->sub_2530 = NULL;
F->sub_2530 = f_as_subtype_297((*(P1044)rt_nil_check(F->e_867)).a);
F->name_2531 = rt_str_copy((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_867)).name))->all));
if ((F->sub_2530 != NULL)) {
F->bt_2527 = f_resolve_subtype_268(F->sub_2530, &F->c_2528);
} else {
F->bt_2527 = f_value_subtype_290((*(P1044)rt_nil_check(F->e_867)).a, &F->c_2528, &F->base_2529);
}
if ((((((*(P1050)rt_nil_check(F->bt_2527)).kind == (((rt_int)8LL))) && (F->c_2528 != NULL)) && ((*(P1046)rt_nil_check(F->c_2528)).args != NULL)) && ((*(P1050)rt_nil_check(F->bt_2527)).decl != NULL))) {
F->p_2532 = NULL;
F->p_2532 = (*(P1044)rt_nil_check((*(P1050)rt_nil_check(F->bt_2527)).decl)).d;
F->a_2533 = NULL;
F->a_2533 = (*(P1046)rt_nil_check(F->c_2528)).args;
while (((F->p_2532 != NULL) && (F->a_2533 != NULL))) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2532)).name))->all), F->name_2531)) {
F->pc_2534 = NULL;
F->v_2535 = rt_str_copy(f_gexpr_815(F->a_2533, f_resolve_subtype_268((*(P1044)rt_nil_check(F->p_2532)).a, &F->pc_2534), &F->t_868v));
F->result_ = F->v_2535;
goto ret_;
}
F->p_2532 = (*(P1044)rt_nil_check(F->p_2532)).next;
F->a_2533 = (*(P1044)rt_nil_check(F->a_2533)).next;
}
}
while ((((*(P1050)rt_nil_check(F->bt_2527)).kind == (((rt_int)8LL))) && (F->base_2529 != NULL))) {
f_finish_ptr_490(F->bt_2527);
F->base_2529 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_776(&(((P1037)rt_nil_check(F->base_2529))->all), F->bt_2527); b_; }));
F->bt_2527 = (*(P1050)rt_nil_check(F->bt_2527)).target;
F->c_2528 = NULL;
if (((*(P1050)rt_nil_check(F->bt_2527)).kind == (((rt_int)5LL)))) {
F->c_2528 = f_new_cons_184();
(*(P1046)rt_nil_check(F->c_2528)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1037)rt_nil_check(F->base_2529))->all)), rt_str(").len", 5)); b_; }));
}
}
if ((((((*(P1050)rt_nil_check(F->bt_2527)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->bt_2527)).tparams != NULL)) && (F->c_2528 != NULL)) && ((*(P1046)rt_nil_check(F->c_2528)).args != NULL))) {
F->p_2536 = NULL;
F->p_2536 = (*(P1050)rt_nil_check(F->bt_2527)).tparams;
F->a_2537 = NULL;
F->a_2537 = (*(P1046)rt_nil_check(F->c_2528)).args;
while (((F->p_2536 != NULL) && (F->a_2537 != NULL))) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2536)).name))->all), F->name_2531)) {
F->pt_2538 = f_tparam_type_357(F->bt_2527, &F->name_2531);
F->v_2539 = rt_str_copy(f_gexpr_815(F->a_2537, F->pt_2538, &F->t_868v));
F->result_ = F->v_2539;
goto ret_;
}
F->p_2536 = (*(P1044)rt_nil_check(F->p_2536)).next;
F->a_2537 = (*(P1044)rt_nil_check(F->a_2537)).next;
}
}
if ((((*(P1050)rt_nil_check(F->bt_2527)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->bt_2527)).tparams == NULL))) {
F->c_2528 = f_base_cons_226(F->bt_2527, F->c_2528);
F->bt_2527 = f_base_of_223(F->bt_2527);
}
F->t_868v = g_ty_int_1129;
if ((rt_str_eq(F->name_2531, rt_str("LEN", 3)) && ((*(P1050)rt_nil_check(F->bt_2527)).kind == (((rt_int)5LL))))) {
if (((F->c_2528 != NULL) && ((*(P1046)rt_nil_check(F->c_2528)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_2528)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23((*(P1044)rt_nil_check(F->e_867)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_2531, rt_str("LEN", 3)) && ((*(P1050)rt_nil_check(F->bt_2527)).kind == (((rt_int)12LL))))) {
if (((F->c_2528 != NULL) && ((*(P1046)rt_nil_check(F->c_2528)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_2528)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23((*(P1044)rt_nil_check(F->e_867)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_2531, rt_str("MIN", 3)) || rt_str_eq(F->name_2531, rt_str("MAX", 3))) && f_scalar_kind_186(F->bt_2527))) {
F->t_868v = F->bt_2527;
if (rt_str_eq(F->name_2531, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_198(F->bt_2527, F->c_2528);
goto ret_;
}
F->result_ = f_sub_hi_201(F->bt_2527, F->c_2528);
goto ret_;
} else if ((rt_str_eq(F->name_2531, rt_str("PREC", 4)) && ((*(P1050)rt_nil_check(F->bt_2527)).kind == (((rt_int)3LL))))) {
if (((F->c_2528 != NULL) && ((*(P1046)rt_nil_check(F->c_2528)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_2528)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_2531, rt_str("ACCESS", 6)) || rt_str_eq(F->name_2531, rt_str("USE", 3))) && ((*(P1050)rt_nil_check(F->bt_2527)).kind == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_882(F->e_867, F->bt_2527, F->c_2528, F->base_2529, &F->t_868v);
goto ret_;
}
f_fail_23((*(P1044)rt_nil_check(F->e_867)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_2531, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_868) = F->t_868v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_874(P1044 sa_870, P1044 sb_871, rstr *op_872, rt_int line_873) {
  struct f_subtype_compare_874fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_870 = sa_870;
F->sb_871 = sb_871;
F->op_872 = op_872;
F->line_873 = line_873;
F->ca_2540 = NULL;
F->cb_2541 = NULL;
F->ta_2542 = NULL;
F->ta_2542 = f_resolve_subtype_268(F->sa_870, &F->ca_2540);
F->tb_2543 = NULL;
F->tb_2543 = f_resolve_subtype_268(F->sb_871, &F->cb_2541);
F->r_2544 = NULL;
F->r_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_2545 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_2545, rt_str("1", 1));
F->no_2546 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_2546, rt_str("0", 1));
if (rt_str_eq((*F->op_872), rt_str("/=", 2))) {
rt_str_assign(&F->yes_2545, rt_str("0", 1));
rt_str_assign(&F->no_2546, rt_str("1", 1));
}
if ((!f_same_221(F->ta_2542, F->tb_2543))) {
F->result_ = F->no_2546;
goto ret_;
} else if (((((*(P1044)rt_nil_check(F->sa_870)).kind == (((rt_int)80LL))) && rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->sa_870)).name))->all), rt_str("TYPEOF", 6))) || (((*(P1044)rt_nil_check(F->sb_871)).kind == (((rt_int)80LL))) && rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->sb_871)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_2545;
goto ret_;
}
if (f_scalar_kind_186(F->ta_2542)) {
F->r_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_198(F->ta_2542, F->ca_2540)), rt_str(") == (", 6)), f_sub_lo_198(F->tb_2543, F->cb_2541)), rt_str(") && (", 6)), f_sub_hi_201(F->ta_2542, F->ca_2540)), rt_str(") == (", 6)), f_sub_hi_201(F->tb_2543, F->cb_2541)), rt_str(")", 1)); b_; }));
if (((*(P1050)rt_nil_check(F->ta_2542)).kind == (((rt_int)3LL)))) {
F->r_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_2544))->all), rt_str(" && ", 4)), f_float_prec_876(F->ca_2540)), rt_str(" == ", 4)), f_float_prec_876(F->cb_2541)); b_; }));
}
} else if (((*(P1050)rt_nil_check(F->ta_2542)).kind == (((rt_int)5LL)))) {
if (((((F->ca_2540 != NULL) && (F->cb_2541 != NULL)) && ((*(P1046)rt_nil_check(F->ca_2540)).slen != NULL)) && ((*(P1046)rt_nil_check(F->cb_2541)).slen != NULL))) {
F->r_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1037)rt_nil_check((*(P1046)rt_nil_check(F->ca_2540)).slen))->all)), rt_str(") == (", 6)), (((P1037)rt_nil_check((*(P1046)rt_nil_check(F->cb_2541)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_2540 == NULL) || ((*(P1046)rt_nil_check(F->ca_2540)).slen == NULL)) && ((F->cb_2541 == NULL) || ((*(P1046)rt_nil_check(F->cb_2541)).slen == NULL))))) {
F->r_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if (((*(P1050)rt_nil_check(F->ta_2542)).kind == (((rt_int)6LL)))) {
{ rt_int lo2548 = ((rt_int)1LL), hi2549 = (*(P1050)rt_nil_check(F->ta_2542)).ndim;
for (rt_int it2550 = lo2548; it2550 <= hi2549; it2550++) {
F->k_2547 = it2550;
if (((((F->ca_2540 != NULL) && (F->cb_2541 != NULL)) && (f_cons_lo_252(F->ca_2540, F->k_2547) != NULL)) && (f_cons_lo_252(F->cb_2541, F->k_2547) != NULL))) {
F->r_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_2544))->all), rt_str(" && (", 5)), (((P1037)rt_nil_check(f_cons_lo_252(F->ca_2540, F->k_2547)))->all)), rt_str(") == (", 6)), (((P1037)rt_nil_check(f_cons_lo_252(F->cb_2541, F->k_2547)))->all)), rt_str(") && (", 6)), (((P1037)rt_nil_check(f_cons_hi_255(F->ca_2540, F->k_2547)))->all)), rt_str(") == (", 6)), (((P1037)rt_nil_check(f_cons_hi_255(F->cb_2541, F->k_2547)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if ((((((*(P1050)rt_nil_check(F->ta_2542)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->ta_2542)).tparams != NULL)) && (F->ca_2540 != NULL)) && (F->cb_2541 != NULL))) {
F->a_2551 = NULL;
F->a_2551 = (*(P1046)rt_nil_check(F->ca_2540)).args;
F->b_2552 = NULL;
F->b_2552 = (*(P1046)rt_nil_check(F->cb_2541)).args;
F->at_2553 = NULL;
F->bt2_2554 = NULL;
while (((F->a_2551 != NULL) && (F->b_2552 != NULL))) {
F->x_2555 = rt_str_copy(f_gexpr_815(F->a_2551, NULL, &F->at_2553));
F->y_2556 = rt_str_copy(f_gexpr_815(F->b_2552, F->at_2553, &F->bt2_2554));
F->r_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_2544))->all), rt_str(" && ", 4)), f_eq_code_433(F->at_2553, &F->x_2555, &F->y_2556)); b_; }));
F->a_2551 = (*(P1044)rt_nil_check(F->a_2551)).next;
F->b_2552 = (*(P1044)rt_nil_check(F->b_2552)).next;
}
} else if (((((*(P1050)rt_nil_check(F->ta_2542)).kind == (((rt_int)17LL))) && (F->ca_2540 != NULL)) && (F->cb_2541 != NULL))) {
if ((((*(P1046)rt_nil_check(F->ca_2540)).lo != NULL) && ((*(P1046)rt_nil_check(F->cb_2541)).lo != NULL))) {
F->r_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1037)rt_nil_check((*(P1046)rt_nil_check(F->ca_2540)).lo))->all)), rt_str(") == (", 6)), (((P1037)rt_nil_check((*(P1046)rt_nil_check(F->cb_2541)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P1046)rt_nil_check(F->ca_2540)).lo != NULL) || ((*(P1046)rt_nil_check(F->cb_2541)).lo != NULL))) {
F->r_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_872), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P1037)rt_nil_check(F->r_2544))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1037)rt_nil_check(F->r_2544))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_876(P1046 c_875) {
  struct f_float_prec_876fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_875 = c_875;
if (((F->c_875 != NULL) && ((*(P1046)rt_nil_check(F->c_875)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_875)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_882(P1044 e_877, P1050 bt_878, P1046 c_879, P1037 base_880, P1050 *t_881) {
  struct f_file_attribute_882fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_877 = e_877;
F->bt_878 = bt_878;
F->c_879 = c_879;
F->base_880 = base_880;
F->t_881 = t_881;
F->t_881v = *F->t_881;
F->t_881v = g_file_mode_type_1140;
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_877)).name))->all), rt_str("ACCESS", 6))) {
F->t_881v = g_file_access_type_1146;
}
if ((F->base_880 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_877)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P1037)rt_nil_check(F->base_880))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P1037)rt_nil_check(F->base_880))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_879 != NULL) && ((*(P1046)rt_nil_check(F->c_879)).args != NULL))) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_877)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_815((*(P1046)rt_nil_check(F->c_879)).args, F->t_881v, &F->t_881v);
goto ret_;
} else if (((*(P1044)rt_nil_check((*(P1046)rt_nil_check(F->c_879)).args)).next != NULL)) {
F->result_ = f_gexpr_815((*(P1044)rt_nil_check((*(P1046)rt_nil_check(F->c_879)).args)).next, F->t_881v, &F->t_881v);
goto ret_;
}
}
f_fail_23((*(P1044)rt_nil_check(F->e_877)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_877)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_881) = F->t_881v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_886(P1044 e_883, P1050 want_884, P1050 *t_885) {
  struct f_gbinop_886fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_883 = e_883;
F->want_884 = want_884;
F->t_885 = t_885;
F->t_885v = *F->t_885;
F->op_2557 = NULL;
F->op_2557 = (*(P1044)rt_nil_check(F->e_883)).name;
F->ta_2558 = NULL;
F->tb_2559 = NULL;
F->hint_2560 = NULL;
F->uy_2561 = NULL;
F->t_885v = g_ty_bool_1130;
if (((((rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("/=", 2)) || rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str(">", 1))) || rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("<=", 2))) || rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str(">=", 2))) && (f_derived_relation_847(F->e_883) != NULL))) {
F->result_ = f_gexpr_815(f_derived_relation_847(F->e_883), g_ty_bool_1130, &F->t_885v);
goto ret_;
}
if ((f_lookup_163(&(((P1037)rt_nil_check(F->op_2557))->all)) != NULL)) {
F->l_2562 = NULL;
F->r_2563 = NULL;
F->l_2562 = f_copy_node_857((*(P1044)rt_nil_check(F->e_883)).a);
F->r_2563 = f_copy_node_857((*(P1044)rt_nil_check(F->e_883)).b);
(*(P1044)rt_nil_check(F->l_2562)).next = F->r_2563;
F->uy_2561 = f_user_op_962(&(((P1037)rt_nil_check(F->op_2557))->all), F->l_2562);
if ((F->uy_2561 != NULL)) {
F->call_2564 = NULL;
F->call_2564 = f_nn_65((((rt_int)10LL)), (*(P1044)rt_nil_check(F->e_883)).line);
F->fname_2565 = NULL;
F->fname_2565 = f_nn_65((((rt_int)7LL)), (*(P1044)rt_nil_check(F->e_883)).line);
(*(P1044)rt_nil_check(F->fname_2565)).name = F->op_2557;
(*(P1044)rt_nil_check(F->call_2564)).a = F->fname_2565;
(*(P1044)rt_nil_check(F->call_2564)).b = F->l_2562;
F->result_ = f_gcall_966(F->call_2564, 0, &F->t_885v);
goto ret_;
}
}
if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("IN", 2))) {
F->s_2566 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_883)).b, NULL, &F->tb_2559));
if (((*(P1050)rt_nil_check(F->tb_2559)).kind != (((rt_int)16LL)))) {
f_fail_23((*(P1044)rt_nil_check(F->e_883)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2567 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_883)).a, (*(P1050)rt_nil_check(F->tb_2559)).elem, &F->ta_2558));
f_check_type_232(F->ta_2558, (*(P1050)rt_nil_check(F->tb_2559)).elem, (*(P1044)rt_nil_check(F->e_883)).line);
F->t_885v = g_ty_bool_1130;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->tb_2559, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("in", 2); b_; })), rt_str("(", 1)), F->a_2567), rt_str(", ", 2)), F->s_2566), rt_str(")", 1));
goto ret_;
}
}
if ((((rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("AND", 3)) || rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("OR", 2))) || rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("XOR", 3))) && (f_set_operands_837(F->e_883, F->want_884) != NULL))) {
F->a_2568 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_883)).a, f_set_operands_837(F->e_883, F->want_884), &F->ta_2558));
F->b_2569 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_883)).b, F->ta_2558, &F->tb_2559));
f_check_type_232(F->tb_2559, F->ta_2558, (*(P1044)rt_nil_check(F->e_883)).line);
F->t_885v = F->ta_2558;
if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->ta_2558, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("inter", 5); b_; })), rt_str("(", 1)), F->a_2568), rt_str(", ", 2)), F->b_2569), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->ta_2558, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("union", 5); b_; })), rt_str("(", 1)), F->a_2568), rt_str(", ", 2)), F->b_2569), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->ta_2558, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xor", 3); b_; })), rt_str("(", 1)), F->a_2568), rt_str(", ", 2)), F->b_2569), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("AND", 3)) || rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("OR", 2))) || rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("XOR", 3)))) {
F->a_2570 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_883)).a, g_ty_bool_1130, &F->ta_2558));
F->b_2571 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_883)).b, g_ty_bool_1130, &F->tb_2559));
f_check_type_232(F->ta_2558, g_ty_bool_1130, (*(P1044)rt_nil_check(F->e_883)).line);
f_check_type_232(F->tb_2559, g_ty_bool_1130, (*(P1044)rt_nil_check(F->e_883)).line);
if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2570), rt_str(" && ", 4)), F->b_2571), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2570), rt_str(" || ", 4)), F->b_2571), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2570), rt_str(" != ", 4)), F->b_2571), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("&", 1)) && (F->want_884 != NULL)) && ((*(P1050)rt_nil_check(f_base_of_223(F->want_884))).kind == (((rt_int)6LL))))) {
F->at_2572 = NULL;
F->at_2572 = f_base_of_223(F->want_884);
F->a_2573 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_883)).a, F->at_2572, &F->ta_2558));
F->b_2574 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_883)).b, F->at_2572, &F->tb_2559));
f_check_type_232(F->ta_2558, F->at_2572, (*(P1044)rt_nil_check(F->e_883)).line);
f_check_type_232(F->tb_2559, F->at_2572, (*(P1044)rt_nil_check(F->e_883)).line);
if ((((*(P1050)rt_nil_check(F->at_2572)).ndim != ((rt_int)1LL)) || ((*(P1050)rt_nil_check(f_base_of_223((*(P1050)rt_nil_check(F->at_2572)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->e_883)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_796(F->at_2572);
F->t_885v = F->at_2572;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_234(F->at_2572)), rt_str("(", 1)), F->a_2573), rt_str(", ", 2)), F->b_2574), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("&", 1))) {
F->wa_2575 = NULL;
F->wb_2576 = NULL;
F->ws_2577 = NULL;
F->ce_2578 = NULL;
F->ce_2578 = g_ty_ascii_1132;
if (((F->want_884 != NULL) && ((*(P1050)rt_nil_check(F->want_884)).kind == (((rt_int)5LL))))) {
F->ws_2577 = F->want_884;
F->ce_2578 = f_str_elem_218(F->want_884);
}
if (((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_883)).a)).kind == (((rt_int)4LL)))) {
F->wa_2575 = F->ce_2578;
} else {
F->wa_2575 = F->ws_2577;
}
if (((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_883)).b)).kind == (((rt_int)4LL)))) {
F->wb_2576 = F->ce_2578;
} else {
F->wb_2576 = F->ws_2577;
}
{
F->a_2579 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_883)).a, F->wa_2575, &F->ta_2558));
F->b_2580 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_883)).b, F->wb_2576, &F->tb_2559));
F->t_885v = g_ty_string_1133;
if (((*(P1050)rt_nil_check(F->ta_2558)).kind == (((rt_int)5LL)))) {
F->t_885v = F->ta_2558;
} else if (((*(P1050)rt_nil_check(F->tb_2559)).kind == (((rt_int)5LL)))) {
F->t_885v = F->tb_2559;
} else if ((!f_same_221(F->ta_2558, g_ty_ascii_1132))) {
F->t_885v = f_new_typ_183((((rt_int)5LL)));
(*(P1050)rt_nil_check(F->t_885v)).elem = F->ta_2558;
}
if ((((*(P1050)rt_nil_check(F->ta_2558)).kind == (((rt_int)6LL))) && ((*(P1050)rt_nil_check(F->tb_2559)).kind == (((rt_int)6LL))))) {
f_need_slice_796(F->ta_2558);
f_check_type_232(F->tb_2559, F->ta_2558, (*(P1044)rt_nil_check(F->e_883)).line);
F->t_885v = F->ta_2558;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_234(F->ta_2558)), rt_str("(", 1)), F->a_2579), rt_str(", ", 2)), F->b_2580), rt_str(")", 1));
goto ret_;
}
if (((*(P1050)rt_nil_check(F->ta_2558)).kind == (((rt_int)5LL)))) {
f_check_type_232(f_str_cat_part_832(F->tb_2559), f_str_elem_218(F->ta_2558), (*(P1044)rt_nil_check(F->e_883)).line);
} else if (((*(P1050)rt_nil_check(F->tb_2559)).kind == (((rt_int)5LL)))) {
f_check_type_232(F->ta_2558, f_str_elem_218(F->tb_2559), (*(P1044)rt_nil_check(F->e_883)).line);
} else {
f_check_type_232(F->tb_2559, F->ta_2558, (*(P1044)rt_nil_check(F->e_883)).line);
}
if ((((*(P1050)rt_nil_check(F->ta_2558)).kind == (((rt_int)5LL))) && ((*(P1050)rt_nil_check(F->tb_2559)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2579), rt_str(", ", 2)), F->b_2580), rt_str(")", 1));
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->ta_2558)).kind == (((rt_int)5LL))) && ((*(P1050)rt_nil_check(F->tb_2559)).kind == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2579), rt_str(", ", 2)), F->b_2580), rt_str(")", 1));
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->ta_2558)).kind == (((rt_int)4LL))) && ((*(P1050)rt_nil_check(F->tb_2559)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2579), rt_str(", ", 2)), F->b_2580), rt_str(")", 1));
goto ret_;
} else if ((((*(P1050)rt_nil_check(F->ta_2558)).kind == (((rt_int)4LL))) && ((*(P1050)rt_nil_check(F->tb_2559)).kind == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2579), rt_str(", ", 2)), F->b_2580), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P1044)rt_nil_check(F->e_883)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("=", 1)) || rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("/=", 2))) && (f_as_subtype_297((*(P1044)rt_nil_check(F->e_883)).a) != NULL)) && (f_as_subtype_297((*(P1044)rt_nil_check(F->e_883)).b) != NULL))) {
F->t_885v = g_ty_bool_1130;
F->result_ = f_subtype_compare_874(f_as_subtype_297((*(P1044)rt_nil_check(F->e_883)).a), f_as_subtype_297((*(P1044)rt_nil_check(F->e_883)).b), &(((P1037)rt_nil_check(F->op_2557))->all), (*(P1044)rt_nil_check(F->e_883)).line);
goto ret_;
}
if ((f_is_rel_111(&(((P1037)rt_nil_check(F->op_2557))->all)) && (!rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("IN", 2))))) {
if (((((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_883)).a)).kind == (((rt_int)4LL))) || ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_883)).a)).kind == (((rt_int)6LL)))) || ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_883)).a)).kind == (((rt_int)1LL))))) {
F->dummy_2581 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_883)).b, NULL, &F->hint_2560));
} else if (((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->e_883)).a)).kind == (((rt_int)14LL)))) {
F->hint_2560 = f_peek_type_834((*(P1044)rt_nil_check(F->e_883)).b);
}
{
F->a_2582 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_883)).a, F->hint_2560, &F->ta_2558));
F->b_2583 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_883)).b, F->ta_2558, &F->tb_2559));
F->ct_2584 = NULL;
F->ct_2584 = f_base_of_223(F->ta_2558);
F->t_885v = g_ty_bool_1130;
if ((((*(P1050)rt_nil_check(F->ta_2558)).kind != (((rt_int)11LL))) && ((*(P1050)rt_nil_check(F->tb_2559)).kind != (((rt_int)11LL))))) {
f_check_type_232(F->tb_2559, F->ta_2558, (*(P1044)rt_nil_check(F->e_883)).line);
}
if (((*(P1050)rt_nil_check(F->ta_2558)).kind == (((rt_int)11LL)))) {
F->ct_2584 = f_base_of_223(F->tb_2559);
}
if (((*(P1050)rt_nil_check(F->ct_2584)).kind == (((rt_int)5LL)))) {
if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2582), rt_str(", ", 2)), F->b_2583), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2582), rt_str(", ", 2)), F->b_2583), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2582), rt_str(", ", 2)), F->b_2583), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2582), rt_str(", ", 2)), F->b_2583), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2583), rt_str(", ", 2)), F->a_2582), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2583), rt_str(", ", 2)), F->a_2582), rt_str(")", 1));
goto ret_;
}
if (((*(P1050)rt_nil_check(F->ct_2584)).kind == (((rt_int)16LL)))) {
if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->ct_2584, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("eq", 2); b_; })), rt_str("(", 1)), F->a_2582), rt_str(", ", 2)), F->b_2583), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!", 2), f_set_fn_311(F->ct_2584, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("eq", 2); b_; }))), rt_str("(", 1)), F->a_2582), rt_str(", ", 2)), F->b_2583), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->ct_2584, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("le", 2); b_; })), rt_str("(", 1)), F->a_2582), rt_str(", ", 2)), F->b_2583), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->ct_2584, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("le", 2); b_; })), rt_str("(", 1)), F->b_2583), rt_str(", ", 2)), F->a_2582), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->ct_2584, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lt", 2); b_; })), rt_str("(", 1)), F->a_2582), rt_str(", ", 2)), F->b_2583), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->ct_2584, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lt", 2); b_; })), rt_str("(", 1)), F->b_2583), rt_str(", ", 2)), F->a_2582), rt_str(")", 1));
goto ret_;
}
if (((((((((*(P1050)rt_nil_check(F->ct_2584)).kind == (((rt_int)2LL))) || ((*(P1050)rt_nil_check(F->ct_2584)).kind == (((rt_int)8LL)))) || ((*(P1050)rt_nil_check(F->ct_2584)).kind == (((rt_int)11LL)))) || ((*(P1050)rt_nil_check(F->ct_2584)).kind == (((rt_int)14LL)))) || ((*(P1050)rt_nil_check(F->ct_2584)).kind == (((rt_int)12LL)))) && (!rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("=", 1)))) && (!rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("/=", 2))))) {
f_fail_23((*(P1044)rt_nil_check(F->e_883)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only = and /= compare values of this type", 41); b_; }));
}
if (f_composite_409(F->ct_2584)) {
if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_433(F->ct_2584, &F->a_2582, &F->b_2583);
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_433(F->ct_2584, &F->a_2582, &F->b_2583)), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P1044)rt_nil_check(F->e_883)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2582), rt_str(" == ", 4)), F->b_2583), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2582), rt_str(" != ", 4)), F->b_2583), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2582), rt_str(" ", 1)), (((P1037)rt_nil_check(F->op_2557))->all)), rt_str(" ", 1)), F->b_2583), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2585 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_883)).a, F->want_884, &F->ta_2558));
F->b_2586 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->e_883)).b, f_exponent_want_993(&(((P1037)rt_nil_check(F->op_2557))->all), F->ta_2558), &F->tb_2559));
if ((((*(P1050)rt_nil_check(F->ta_2558)).kind == (((rt_int)3LL))) || ((*(P1050)rt_nil_check(F->tb_2559)).kind == (((rt_int)3LL))))) {
F->t_885v = g_ty_float_1131;
if (((rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("+", 1)) || rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("-", 1))) || rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(", 10), F->a_2585), rt_str(" ", 1)), (((P1037)rt_nil_check(F->op_2557))->all)), rt_str(" ", 1)), F->b_2586), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(rt_fdiv(", 18), F->a_2585), rt_str(", ", 2)), F->b_2586), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("**", 2))) {
f_check_type_232(F->tb_2559, g_ty_int_1129, (*(P1044)rt_nil_check(F->e_883)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fpow(", 10), F->a_2585), rt_str(", ", 2)), F->b_2586), rt_str(")", 1));
goto ret_;
}
}
f_check_type_232(F->ta_2558, g_ty_int_1129, (*(P1044)rt_nil_check(F->e_883)).line);
f_check_type_232(F->tb_2559, g_ty_int_1129, (*(P1044)rt_nil_check(F->e_883)).line);
F->t_885v = g_ty_int_1129;
if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2585), rt_str(", ", 2)), F->b_2586), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2585), rt_str(", ", 2)), F->b_2586), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2585), rt_str(", ", 2)), F->b_2586), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2585), rt_str(", ", 2)), F->b_2586), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2585), rt_str(", ", 2)), F->b_2586), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1037)rt_nil_check(F->op_2557))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2585), rt_str(", ", 2)), F->b_2586), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P1044)rt_nil_check(F->e_883)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P1037)rt_nil_check(F->op_2557))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_885) = F->t_885v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_891(P1044 e_887, P1050 want_888, P1046 ctx_889, P1050 *t_890) {
  struct f_constructor_891fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_887 = e_887;
F->want_888 = want_888;
F->ctx_889 = ctx_889;
F->t_890 = t_890;
F->t_890v = *F->t_890;
F->it_2587 = NULL;
F->it_2587 = (*(P1044)rt_nil_check(F->e_887)).a;
F->f_2588 = NULL;
F->vt_2589 = NULL;
if (((F->want_888 != NULL) && ((*(P1050)rt_nil_check(F->want_888)).kind == (((rt_int)16LL))))) {
F->s_2590 = NULL;
F->s_2590 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_empty_set_306(F->want_888); b_; }));
F->t_890v = F->want_888;
while ((F->it_2587 != NULL)) {
F->v_2591 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->it_2587)).b, (*(P1050)rt_nil_check(F->want_888)).elem, &F->vt_2589));
f_check_type_232(F->vt_2589, (*(P1050)rt_nil_check(F->want_888)).elem, (*(P1044)rt_nil_check(F->e_887)).line);
F->s_2590 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->want_888, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("add", 3); b_; })), rt_str("(", 1)), (((P1037)rt_nil_check(F->s_2590))->all)), rt_str(", ", 2)), F->v_2591), rt_str(")", 1)); b_; }));
F->it_2587 = (*(P1044)rt_nil_check(F->it_2587)).next;
}
F->result_ = (((P1037)rt_nil_check(F->s_2590))->all);
goto ret_;
}
if (((F->want_888 != NULL) && ((*(P1050)rt_nil_check(F->want_888)).kind == (((rt_int)15LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->e_887)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->want_888)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_888 != NULL) && ((*(P1050)rt_nil_check(F->want_888)).kind == (((rt_int)6LL))))) {
F->result_ = f_array_cons_905(F->e_887, F->want_888, F->ctx_889, &F->t_890v);
goto ret_;
}
if (((F->want_888 != NULL) && ((*(P1050)rt_nil_check(F->want_888)).kind == (((rt_int)17LL))))) {
if ((((((F->it_2587 == NULL) || ((*(P1044)rt_nil_check(F->it_2587)).next != NULL)) || ((*(P1044)rt_nil_check(F->it_2587)).a == NULL)) || ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->it_2587)).a)).next != NULL)) || ((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->it_2587)).a)).a)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->e_887)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2588 = (*(P1050)rt_nil_check(F->want_888)).fields;
{
F->i_2592 = ((rt_int)0LL);
F->tmp_2593 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2588 != NULL) && (!rt_str_eq((((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_2588)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->it_2587)).a)).a)).name))->all))))) {
F->i_2592 = rt_add(F->i_2592, ((rt_int)1LL));
F->f_2588 = (*(P1052)rt_nil_check(F->f_2588)).next;
}
if ((F->f_2588 == NULL)) {
f_fail_23((*(P1044)rt_nil_check(F->e_887)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->it_2587)).a)).a)).name))->all)); b_; }));
}
F->t_890v = F->want_888;
g_cons_ctx_1119 = (*(P1052)rt_nil_check(F->f_2588)).c;
{
F->v_2594 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->it_2587)).b, (*(P1052)rt_nil_check(F->f_2588)).t, &F->vt_2589));
f_check_type_232(F->vt_2589, (*(P1052)rt_nil_check(F->f_2588)).t, (*(P1044)rt_nil_check(F->e_887)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->want_888)), rt_str(" ", 1)), F->tmp_2593), rt_str("; ", 2)), F->tmp_2593), rt_str(".tag = ", 7)), f_itos_7(F->i_2592)), rt_str("; ", 2)), F->tmp_2593), rt_str(".u.", 3)), f_field_c_17(&(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_2588)).name))->all))), rt_str(" = ", 3)), f_comp_value_895((*(P1052)rt_nil_check(F->f_2588)).t, (*(P1052)rt_nil_check(F->f_2588)).c, &F->v_2594)), rt_str("; ", 2)), F->tmp_2593), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_888 == NULL) || ((*(P1050)rt_nil_check(F->want_888)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->e_887)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_890v = F->want_888;
F->f_2588 = (*(P1050)rt_nil_check(F->want_888)).fields;
{
F->tmp_2595 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2596 = NULL;
F->parts_2596 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->want_888)), rt_str(" ", 1)), F->tmp_2595), rt_str(";", 1)); b_; }));
while ((F->it_2587 != NULL)) {
F->k_2597 = NULL;
F->k_2597 = (*(P1044)rt_nil_check(F->it_2587)).a;
F->shared_2598 = NULL;
if ((F->k_2597 == NULL)) {
f_fail_23((*(P1044)rt_nil_check(F->e_887)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2597 != NULL)) {
if (((((F->f_2588 == NULL) || ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->k_2597)).a)).kind != (((rt_int)7LL)))) || ((*(P1044)rt_nil_check(F->k_2597)).b != NULL)) || (!rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->k_2597)).a)).name))->all), (((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_2588)).name))->all))))) {
if ((F->f_2588 == NULL)) {
f_fail_23((*(P1044)rt_nil_check(F->e_887)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23((*(P1044)rt_nil_check(F->e_887)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_2588)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->it_2587)).a)).next == NULL)) {
g_cons_ctx_1119 = (*(P1052)rt_nil_check(F->f_2588)).c;
{
F->v_2599 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->it_2587)).b, (*(P1052)rt_nil_check(F->f_2588)).t, &F->vt_2589));
f_check_type_232(F->vt_2589, (*(P1052)rt_nil_check(F->f_2588)).t, (*(P1044)rt_nil_check(F->e_887)).line);
F->parts_2596 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->parts_2596))->all), rt_str(" ", 1)), F->tmp_2595), rt_str(".", 1)), f_field_c_17(&(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_2588)).name))->all))), rt_str(" = ", 3)), f_comp_value_895((*(P1052)rt_nil_check(F->f_2588)).t, (*(P1052)rt_nil_check(F->f_2588)).c, &F->v_2599)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2598 == NULL)) {
F->v_2600 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->it_2587)).b, (*(P1052)rt_nil_check(F->f_2588)).t, &F->vt_2589));
F->shared_2598 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_232(F->vt_2589, (*(P1052)rt_nil_check(F->f_2588)).t, (*(P1044)rt_nil_check(F->e_887)).line);
F->parts_2596 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->parts_2596))->all), rt_str(" ", 1)), f_ctype_234((*(P1052)rt_nil_check(F->f_2588)).t)), rt_str(" ", 1)), (((P1037)rt_nil_check(F->shared_2598))->all)), rt_str(" = ", 3)), F->v_2600), rt_str(";", 1)); b_; }));
}
f_check_type_232(F->vt_2589, (*(P1052)rt_nil_check(F->f_2588)).t, (*(P1044)rt_nil_check(F->e_887)).line);
F->parts_2596 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->parts_2596))->all), rt_str(" ", 1)), F->tmp_2595), rt_str(".", 1)), f_field_c_17(&(((P1037)rt_nil_check((*(P1052)rt_nil_check(F->f_2588)).name))->all))), rt_str(" = ", 3)), f_comp_value_895((*(P1052)rt_nil_check(F->f_2588)).t, (*(P1052)rt_nil_check(F->f_2588)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_429((*(P1052)rt_nil_check(F->f_2588)).t, &(((P1037)rt_nil_check(F->shared_2598))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2588 = (*(P1052)rt_nil_check(F->f_2588)).next;
F->k_2597 = (*(P1044)rt_nil_check(F->k_2597)).next;
}
F->it_2587 = (*(P1044)rt_nil_check(F->it_2587)).next;
}
if ((F->f_2588 != NULL)) {
f_fail_23((*(P1044)rt_nil_check(F->e_887)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->parts_2596))->all), rt_str(" ", 1)), F->tmp_2595), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_890) = F->t_890v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_895(P1050 t_892, P1046 c_893, rstr *v_894) {
  struct f_comp_value_895fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_892 = t_892;
F->c_893 = c_893;
F->v_894 = v_894;
if (((((*(P1050)rt_nil_check(F->t_892)).kind == (((rt_int)15LL))) && ((*(P1050)rt_nil_check(F->t_892)).assignp != NULL)) && (g_in_func_1100 || f_top_level_421((*(P1050)rt_nil_check(F->t_892)).assignp)))) {
F->ct_2601 = rt_str_copy(f_ctype_234(F->t_892));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_2601), rt_str(" s_ = ", 6)), (*F->v_894)), rt_str("; ", 2)), F->ct_2601), rt_str(" t_ = ", 6)), f_copy_code_429(F->t_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s_", 2); b_; }))), rt_str("; ", 2)), f_user_call2_415((*(P1050)rt_nil_check(F->t_892)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("t_", 2); b_; }), 1, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s_", 2); b_; }), 0)), rt_str("; t_; })", 8));
goto ret_;
} else if (((F->c_893 == NULL) || (((*(P1046)rt_nil_check(F->c_893)).lo != NULL) && f_has_at_897(&(((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_893)).lo))->all))))) {
F->result_ = f_copy_code_429(F->t_892, &(*F->v_894));
goto ret_;
} else if (((((*(P1050)rt_nil_check(F->t_892)).kind == (((rt_int)5LL))) && ((*(P1046)rt_nil_check(F->c_893)).slen != NULL)) && (!f_has_at_897(&(((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_893)).slen))->all))))) {
F->result_ = f_copy_code_429(F->t_892, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_894)), rt_str(", ", 2)), (((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_893)).slen))->all)), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_213(F->t_892, F->c_893, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_429(F->t_892, &(*F->v_894)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_897(rstr *s_896) {
  struct f_has_at_897fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_896 = s_896;
{ rt_int lo2603 = ((rt_int)1LL), hi2604 = ((rt_int)(((*F->s_896)).len));
for (rt_int it2605 = lo2603; it2605 <= hi2604; it2605++) {
F->i_2602 = it2605;
if ((rt_str_get((*F->s_896), F->i_2602) == 64)) {
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

static rstr f_set_elem_900(P1050 st_898, rstr *v_899) {
  struct f_set_elem_900fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_898 = st_898;
F->v_899 = v_899;
F->result_ = (*F->v_899);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_905(P1044 e_901, P1050 at_902, P1046 ctx_903, P1050 *t_904) {
  struct f_array_cons_905fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_901 = e_901;
F->at_902 = at_902;
F->ctx_903 = ctx_903;
F->t_904 = t_904;
F->t_904v = *F->t_904;
F->tmp_2606 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2607 = NULL;
F->parts_2607 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->at_902)), rt_str(" ", 1)), F->tmp_2606), rt_str(";", 1)); b_; }));
F->it_2608 = NULL;
F->it_2608 = (*(P1044)rt_nil_check(F->e_901)).a;
F->positional_2609 = 1;
F->t_904v = F->at_902;
while ((F->it_2608 != NULL)) {
if (((*(P1044)rt_nil_check(F->it_2608)).a != NULL)) {
F->positional_2609 = 0;
}
F->it_2608 = (*(P1044)rt_nil_check(F->it_2608)).next;
}
{ rt_int lo2611 = ((rt_int)1LL), hi2612 = (*(P1050)rt_nil_check(F->at_902)).ndim;
for (rt_int it2613 = lo2611; it2613 <= hi2612; it2613++) {
F->k_2610 = it2613;
F->lo_2614 = NULL;
F->hi_2615 = NULL;
if ((((F->ctx_903 != NULL) && (f_cons_lo_252(F->ctx_903, F->k_2610) != NULL)) && (!f_has_at_897(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1037)rt_nil_check(f_cons_lo_252(F->ctx_903, F->k_2610)))->all); b_; }))))) {
F->lo_2614 = f_cons_lo_252(F->ctx_903, F->k_2610);
F->hi_2615 = f_cons_hi_255(F->ctx_903, F->k_2610);
} else if ((((*(P1050)rt_nil_check(F->at_902)).ndim == ((rt_int)1LL)) && F->positional_2609)) {
if (((*(P1050)rt_nil_check(f_base_of_223((*(P1050)rt_nil_check(F->at_902)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2614 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2614 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2615 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1037)rt_nil_check(F->lo_2614))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_71((*(P1044)rt_nil_check(F->e_901)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23((*(P1044)rt_nil_check(F->e_901)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2607 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->parts_2607))->all), rt_str(" ", 1)), F->tmp_2606), rt_str(".", 1)), f_dim_lo_242(F->k_2610)), rt_str(" = ", 3)), (((P1037)rt_nil_check(F->lo_2614))->all)), rt_str("; ", 2)), F->tmp_2606), rt_str(".", 1)), f_dim_hi_244(F->k_2610)), rt_str(" = ", 3)), (((P1037)rt_nil_check(F->hi_2615))->all)), rt_str(";", 1)); b_; }));
}
}
if (((*(P1050)rt_nil_check(F->at_902)).ndim == ((rt_int)1LL))) {
F->parts_2607 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->parts_2607))->all), rt_str(" ", 1)), F->tmp_2606), rt_str(".lo2 = ", 7)), F->tmp_2606), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2607 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->parts_2607))->all), rt_str(" rt_int n_", 10)), F->tmp_2606), rt_str(" = ", 3)), f_acnt_249(F->at_902, &F->tmp_2606)), rt_str("; ", 2)), F->tmp_2606), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_234((*(P1050)rt_nil_check(F->at_902)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2606), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2606), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2606), rt_str(" + 1);", 6)); b_; }));
F->parts_2607 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->parts_2607))->all), f_fill_items_911((*(P1044)rt_nil_check(F->e_901)).a, F->at_902, &F->tmp_2606, NULL, ((rt_int)1LL))); b_; }));
F->parts_2607 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->parts_2607))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2606), rt_str("; i_++) if (seen_", 17)), F->tmp_2606), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2606), rt_str("; })", 4)); b_; }));
F->result_ = (((P1037)rt_nil_check(F->parts_2607))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_904) = F->t_904v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_911(P1044 items_906, P1050 at_907, rstr *tmp_908, P1048 prefix_909, rt_int dim_910) {
  struct f_fill_items_911fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_906 = items_906;
F->at_907 = at_907;
F->tmp_908 = tmp_908;
F->prefix_909 = prefix_909;
F->dim_910 = dim_910;
F->it_2616 = NULL;
F->it_2616 = F->items_906;
F->pos_2617 = ((rt_int)0LL);
F->r_2618 = NULL;
F->r_2618 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2619 = NULL;
while ((F->it_2616 != NULL)) {
if (((*(P1044)rt_nil_check(F->it_2616)).a == NULL)) {
if (((F->dim_910 < (*(P1050)rt_nil_check(F->at_907)).ndim) && ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->it_2616)).b)).kind == (((rt_int)14LL))))) {
F->r_2618 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_2618))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_910)), rt_str(" = ", 3)), (*F->tmp_908)), rt_str(".", 1)), f_dim_lo_242(F->dim_910)), rt_str(" + ", 3)), f_itos_7(F->pos_2617)), rt_str("; ", 2)), f_fill_items_911((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->it_2616)).b)).a, F->at_907, &(*F->tmp_908), f_add_line_916(F->prefix_909, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_910)); b_; })), rt_add(F->dim_910, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2620 = rt_str_copy(f_item_value_921((*(P1044)rt_nil_check(F->it_2616)).b, F->at_907, f_e_line_913(F->it_2616), &F->vt_2619));
if (((F->dim_910 == ((rt_int)1LL)) && ((*(P1050)rt_nil_check(F->at_907)).ndim > ((rt_int)1LL)))) {
F->r_2618 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_2618))->all), rt_str(" { ", 3)), F->v_2620), rt_str(" if (", 5)), f_itos_7(F->pos_2617)), rt_str(" >= n_", 6)), (*F->tmp_908)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_908)), rt_str(".p[", 3)), f_itos_7(F->pos_2617)), rt_str("] = ", 4)), f_copy_code_429((*(P1050)rt_nil_check(F->at_907)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_908)), rt_str("[", 1)), f_itos_7(F->pos_2617)), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2618 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_2618))->all), rt_str(" { ", 3)), F->v_2620), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_910)), rt_str(" = ", 3)), (*F->tmp_908)), rt_str(".", 1)), f_dim_lo_242(F->dim_910)), rt_str(" + ", 3)), f_itos_7(F->pos_2617)), rt_str("; ", 2)), f_store_at_931(F->at_907, &(*F->tmp_908), f_add_line_916(F->prefix_909, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_910)); b_; })), F->dim_910)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2617 = rt_add(F->pos_2617, ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_910, f_list_len_71((*(P1044)rt_nil_check(F->it_2616)).a)), ((rt_int)1LL)) == (*(P1050)rt_nil_check(F->at_907)).ndim)) {
F->k_2621 = NULL;
F->k_2621 = (*(P1044)rt_nil_check(F->it_2616)).a;
F->d_2622 = F->dim_910;
F->pre_2623 = NULL;
F->pre_2623 = F->prefix_909;
F->loops_2624 = NULL;
F->loops_2624 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2625 = NULL;
F->ends_2625 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2626 = rt_str_copy(f_item_value_921((*(P1044)rt_nil_check(F->it_2616)).b, F->at_907, (*(P1044)rt_nil_check(F->it_2616)).line, &F->vt_2619));
while ((F->k_2621 != NULL)) {
F->xv_2627 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->d_2622)));
F->loops_2624 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->loops_2624))->all), f_key_loop_926(F->k_2621, F->at_907, F->d_2622, &F->xv_2627)); b_; }));
F->ends_2625 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->ends_2625))->all), rt_str(" }", 2)); b_; }));
F->pre_2623 = f_add_line_916(F->pre_2623, &F->xv_2627);
F->d_2622 = rt_add(F->d_2622, ((rt_int)1LL));
F->k_2621 = (*(P1044)rt_nil_check(F->k_2621)).next;
}
F->r_2618 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_2618))->all), rt_str(" { ", 3)), F->v_2626), (((P1037)rt_nil_check(F->loops_2624))->all)), rt_str(" ", 1)), f_store_at_931(F->at_907, &(*F->tmp_908), F->pre_2623, (*(P1050)rt_nil_check(F->at_907)).ndim)), (((P1037)rt_nil_check(F->ends_2625))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_910 == (*(P1050)rt_nil_check(F->at_907)).ndim) || ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->it_2616)).b)).kind == (((rt_int)14LL))))) {
F->k_2628 = NULL;
F->k_2628 = (*(P1044)rt_nil_check(F->it_2616)).a;
while ((F->k_2628 != NULL)) {
F->xv_2629 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_910)));
if ((F->dim_910 < (*(P1050)rt_nil_check(F->at_907)).ndim)) {
F->r_2618 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_2618))->all), rt_str(" {", 2)), f_key_loop_926(F->k_2628, F->at_907, F->dim_910, &F->xv_2629)), rt_str(" ", 1)), f_fill_items_911((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->it_2616)).b)).a, F->at_907, &(*F->tmp_908), f_add_line_916(F->prefix_909, &F->xv_2629), rt_add(F->dim_910, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2630 = rt_str_copy(f_item_value_921((*(P1044)rt_nil_check(F->it_2616)).b, F->at_907, (*(P1044)rt_nil_check(F->it_2616)).line, &F->vt_2619));
F->r_2618 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_2618))->all), rt_str(" { ", 3)), F->v_2630), f_key_loop_926(F->k_2628, F->at_907, F->dim_910, &F->xv_2629)), rt_str(" ", 1)), f_store_at_931(F->at_907, &(*F->tmp_908), f_add_line_916(F->prefix_909, &F->xv_2629), F->dim_910)), rt_str(" } }", 4)); b_; }));
}
F->k_2628 = (*(P1044)rt_nil_check(F->k_2628)).next;
}
} else {
f_fail_23((*(P1044)rt_nil_check(F->it_2616)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub((*(P1050)rt_nil_check(F->at_907)).ndim, F->dim_910), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2616 = (*(P1044)rt_nil_check(F->it_2616)).next;
}
F->result_ = (((P1037)rt_nil_check(F->r_2618))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_913(P1044 e_912) {
  struct f_e_line_913fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_912 = e_912;
F->result_ = (*(P1044)rt_nil_check(F->e_912)).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1048 f_add_line_916(P1048 l_914, rstr *s_915) {
  struct f_add_line_916fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_914 = l_914;
F->s_915 = s_915;
F->r_2631 = NULL;
F->tail_2632 = NULL;
F->x_2633 = NULL;
F->p_2634 = NULL;
F->p_2634 = F->l_914;
while ((F->p_2634 != NULL)) {
{ R1049 *cell2635 = rt_alloc(sizeof(R1049));
(*cell2635).s = NULL;
(*cell2635).next = NULL;
F->x_2633 = cell2635;
}
(*(P1048)rt_nil_check(F->x_2633)).s = (*(P1048)rt_nil_check(F->p_2634)).s;
if ((F->tail_2632 == NULL)) {
F->r_2631 = F->x_2633;
} else {
(*(P1048)rt_nil_check(F->tail_2632)).next = F->x_2633;
}
F->tail_2632 = F->x_2633;
F->p_2634 = (*(P1048)rt_nil_check(F->p_2634)).next;
}
{ R1049 *cell2636 = rt_alloc(sizeof(R1049));
(*cell2636).s = NULL;
(*cell2636).next = NULL;
F->x_2633 = cell2636;
}
(*(P1048)rt_nil_check(F->x_2633)).s = f_mk_3(&(*F->s_915));
if ((F->tail_2632 == NULL)) {
F->r_2631 = F->x_2633;
} else {
(*(P1048)rt_nil_check(F->tail_2632)).next = F->x_2633;
}
F->result_ = F->r_2631;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_921(P1044 e_917, P1050 at_918, rt_int line_919, P1050 *vt_920) {
  struct f_item_value_921fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_917 = e_917;
F->at_918 = at_918;
F->line_919 = line_919;
F->vt_920 = vt_920;
F->vt_920v = *F->vt_920;
g_cons_ctx_1119 = (*(P1050)rt_nil_check(F->at_918)).elemcons;
{
F->v_2637 = rt_str_copy(f_gexpr_815(F->e_917, (*(P1050)rt_nil_check(F->at_918)).elem, &F->vt_920v));
f_check_type_232(F->vt_920v, (*(P1050)rt_nil_check(F->at_918)).elem, F->line_919);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1050)rt_nil_check(F->at_918)).elem), rt_str(" v_ = ", 6)), f_comp_value_895((*(P1050)rt_nil_check(F->at_918)).elem, (*(P1050)rt_nil_check(F->at_918)).elemcons, &F->v_2637)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_920) = F->vt_920v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_926(P1044 k_922, P1050 at_923, rt_int d_924, rstr *xv_925) {
  struct f_key_loop_926fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_922 = k_922;
F->at_923 = at_923;
F->d_924 = d_924;
F->xv_925 = xv_925;
F->it_2638 = NULL;
F->lo_2639 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->k_922)).a, f_idx_type_258(F->at_923, F->d_924), &F->it_2638));
f_check_type_232(F->it_2638, f_idx_type_258(F->at_923, F->d_924), (*(P1044)rt_nil_check(F->k_922)).line);
if (((*(P1044)rt_nil_check(F->k_922)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_925)), rt_str(" = ", 3)), F->lo_2639), rt_str(";", 1));
goto ret_;
}
{
F->hi_2640 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->k_922)).b, f_idx_type_258(F->at_923, F->d_924), &F->it_2638));
f_check_type_232(F->it_2638, f_idx_type_258(F->at_923, F->d_924), (*(P1044)rt_nil_check(F->k_922)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_925)), rt_str(" = ", 3)), F->lo_2639), rt_str(", h", 3)), (*F->xv_925)), rt_str(" = ", 3)), F->hi_2640), rt_str("; ", 2)), (*F->xv_925)), rt_str(" <= h", 5)), (*F->xv_925)), rt_str("; ", 2)), (*F->xv_925)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_931(P1050 at_927, rstr *tmp_928, P1048 xs_929, rt_int n_930) {
  struct f_store_at_931fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_927 = at_927;
F->tmp_928 = tmp_928;
F->xs_929 = xs_929;
F->n_930 = n_930;
F->off_2641 = NULL;
F->x_2642 = NULL;
F->x_2642 = F->xs_929;
F->k_2643 = ((rt_int)0LL);
while ((F->x_2642 != NULL)) {
F->k_2643 = rt_add(F->k_2643, ((rt_int)1LL));
{
F->l_2644 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_928), rt_str(".", 1)), f_dim_lo_242(F->k_2643)));
F->h_2645 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_928), rt_str(".", 1)), f_dim_hi_244(F->k_2643)));
if ((F->off_2641 == NULL)) {
F->off_2641 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P1037)rt_nil_check((*(P1048)rt_nil_check(F->x_2642)).s))->all)), rt_str(", ", 2)), F->l_2644), rt_str(", ", 2)), F->h_2645), rt_str(") - ", 4)), F->l_2644), rt_str(")", 1)); b_; }));
} else {
F->off_2641 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1037)rt_nil_check(F->off_2641))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2644), rt_str(", ", 2)), F->h_2645), rt_str(") + rt_index(", 13)), (((P1037)rt_nil_check((*(P1048)rt_nil_check(F->x_2642)).s))->all)), rt_str(", ", 2)), F->l_2644), rt_str(", ", 2)), F->h_2645), rt_str(") - ", 4)), F->l_2644), rt_str(")", 1)); b_; }));
}
}
F->x_2642 = (*(P1048)rt_nil_check(F->x_2642)).next;
}
if ((F->k_2643 != (*(P1050)rt_nil_check(F->at_927)).ndim)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7((*(P1050)rt_nil_check(F->at_927)).ndim)), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P1037)rt_nil_check(F->off_2641))->all)), rt_str("; ", 2)), (*F->tmp_928)), rt_str(".p[o_] = ", 9)), f_copy_code_429((*(P1050)rt_nil_check(F->at_927)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_928)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_934(P1054 y_932, P1044 args_933) {
  struct f_fits_934fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_932 = y_932;
F->args_933 = args_933;
F->a_2646 = NULL;
F->a_2646 = F->args_933;
F->pm_2647 = NULL;
F->pm_2647 = (*(P1054)rt_nil_check(F->y_932)).params;
F->t_2648 = NULL;
F->saved_2649 = NULL;
F->saved_2649 = g_code_1098;
F->ok_2650 = 1;
F->lv_2651 = NULL;
F->lc_2652 = NULL;
g_trial_1127 = rt_add(g_trial_1127, ((rt_int)1LL));
g_code_1098 = f_new_buffer_24();
{ rt_frame xf2654;
if (RT_TRY(xf2654)) {
while (((F->ok_2650 && (F->a_2646 != NULL)) && (F->pm_2647 != NULL))) {
if ((((*(P1056)rt_nil_check(F->pm_2647)).mode == (((rt_int)2LL))) || ((*(P1056)rt_nil_check(F->pm_2647)).mode == (((rt_int)3LL))))) {
f_lvalue_784(F->a_2646, &F->lv_2651, &F->t_2648, &F->lc_2652, &F->ro_2653);
} else {
F->v_2656 = rt_str_copy(f_gexpr_815(F->a_2646, (*(P1056)rt_nil_check(F->pm_2647)).t, &F->t_2648));
}
if ((!(f_same_221(F->t_2648, (*(P1056)rt_nil_check(F->pm_2647)).t) || (((*(P1050)rt_nil_check(F->t_2648)).kind == (((rt_int)11LL))) && ((*(P1050)rt_nil_check((*(P1056)rt_nil_check(F->pm_2647)).t)).kind == (((rt_int)8LL))))))) {
F->ok_2650 = 0;
}
F->a_2646 = (*(P1044)rt_nil_check(F->a_2646)).next;
F->pm_2647 = (*(P1056)rt_nil_check(F->pm_2647)).next;
}
if (((F->a_2646 != NULL) || (F->pm_2647 != NULL))) {
F->ok_2650 = 0;
}
RT_POP(xf2654);
} else {
RT_POP(xf2654);
int x2655 = rt_xcur;
if (0 || x2655 == ex_compile_error_1) {
F->ok_2650 = 0;
} else {
rt_raise(x2655);
}
}
}
g_trial_1127 = rt_sub(g_trial_1127, ((rt_int)1LL));
g_code_1098 = F->saved_2649;
F->result_ = F->ok_2650;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1054 f_resolve_overload_940(rstr *name_935, P1044 tt_936, P1044 args_937, int is_stmt_938, rt_int line_939) {
  struct f_resolve_overload_940fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_935 = name_935;
F->tt_936 = tt_936;
F->args_937 = args_937;
F->is_stmt_938 = is_stmt_938;
F->line_939 = line_939;
F->y_2657 = NULL;
F->first_2658 = NULL;
F->n_2659 = ((rt_int)0LL);
{ rt_int lo2661 = ((rt_int)1LL), hi2662 = ((rt_int)3LL);
for (rt_int it2663 = lo2661; it2663 <= hi2662; it2663++) {
F->pass_2660 = it2663;
F->y_2657 = f_overload_chain_946(&(*F->name_935), F->pass_2660);
while ((F->y_2657 != NULL)) {
if (((rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_2657)).name))->all), (*F->name_935)) && (((*(P1054)rt_nil_check(F->y_2657)).kind == (((rt_int)3LL))) || ((*(P1054)rt_nil_check(F->y_2657)).kind == (((rt_int)4LL))))) && ((F->pass_2660 != ((rt_int)1LL)) || ((*(P1054)rt_nil_check(F->y_2657)).depth >= g_gdepth_1117)))) {
F->n_2659 = rt_add(F->n_2659, ((rt_int)1LL));
if ((F->first_2658 == NULL)) {
F->first_2658 = F->y_2657;
}
if ((((((*(P1054)rt_nil_check(F->y_2657)).kind == (((rt_int)4LL))) == F->is_stmt_938) && f_tt_fits_943(F->y_2657, F->tt_936)) && f_fits_934(F->y_2657, F->args_937))) {
F->result_ = F->y_2657;
goto ret_;
}
}
F->y_2657 = (*(P1054)rt_nil_check(F->y_2657)).chain;
}
}
}
if (f_is_builtin_948(&(*F->name_935))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_2659 > ((rt_int)1LL))) {
f_fail_23(F->line_939, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_935)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2658;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_943(P1054 y_941, P1044 tt_942) {
  struct f_tt_fits_943fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_941 = y_941;
F->tt_942 = tt_942;
F->f_2664 = NULL;
F->a_2665 = NULL;
F->saved_2666 = NULL;
F->saved_2666 = g_code_1098;
F->ok_2667 = 1;
if ((((*(P1054)rt_nil_check(F->y_941)).decl == NULL) || ((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_941)).decl)).e == NULL))) {
F->result_ = (F->tt_942 == NULL);
goto ret_;
} else if ((F->tt_942 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2664 = (*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_941)).decl)).e;
F->a_2665 = F->tt_942;
g_trial_1127 = rt_add(g_trial_1127, ((rt_int)1LL));
g_code_1098 = f_new_buffer_24();
{ rt_frame xf2668;
if (RT_TRY(xf2668)) {
while (((F->ok_2667 && (F->f_2664 != NULL)) && (F->a_2665 != NULL))) {
F->fc_2670 = NULL;
F->ac_2671 = NULL;
F->fst_2672 = NULL;
F->fst_2672 = f_nn_65((((rt_int)80LL)), (*(P1044)rt_nil_check(F->f_2664)).line);
F->ft_2673 = NULL;
F->at_2674 = NULL;
(*(P1044)rt_nil_check(F->fst_2672)).name = (*(P1044)rt_nil_check(F->f_2664)).name;
F->ft_2673 = f_resolve_subtype_268(F->fst_2672, &F->fc_2670);
if (((*(P1044)rt_nil_check(F->a_2665)).kind >= (((rt_int)70LL)))) {
F->at_2674 = f_resolve_subtype_268(F->a_2665, &F->ac_2671);
} else {
F->ast_2675 = NULL;
F->ast_2675 = f_nn_65((((rt_int)80LL)), (*(P1044)rt_nil_check(F->a_2665)).line);
(*(P1044)rt_nil_check(F->ast_2675)).name = (*(P1044)rt_nil_check(F->a_2665)).name;
F->at_2674 = f_resolve_subtype_268(F->ast_2675, &F->ac_2671);
}
F->ok_2667 = f_same_221(F->ft_2673, F->at_2674);
F->f_2664 = (*(P1044)rt_nil_check(F->f_2664)).next;
F->a_2665 = (*(P1044)rt_nil_check(F->a_2665)).next;
}
F->ok_2667 = ((F->ok_2667 && (F->f_2664 == NULL)) && (F->a_2665 == NULL));
RT_POP(xf2668);
} else {
RT_POP(xf2668);
int x2669 = rt_xcur;
if (0 || x2669 == ex_compile_error_1) {
F->ok_2667 = 0;
} else {
rt_raise(x2669);
}
}
}
g_trial_1127 = rt_sub(g_trial_1127, ((rt_int)1LL));
g_code_1098 = F->saved_2666;
F->result_ = F->ok_2667;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1054 f_overload_chain_946(rstr *name_944, rt_int pass_945) {
  struct f_overload_chain_946fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_944 = name_944;
F->pass_945 = pass_945;
if (((g_genv_1085 == NULL) && (F->pass_945 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_945 == ((rt_int)2LL))) {
F->result_ = ({ A1060 b_ = (((P1058)rt_nil_check(g_genv_1085))->all); b_.p[(rt_index(f_hash_161(&(*F->name_944)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A1060 b_ = (((P1058)rt_nil_check(g_table_1084))->all); b_.p[(rt_index(f_hash_161(&(*F->name_944)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_948(rstr *n_947) {
  struct f_is_builtin_948fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_947 = n_947;
F->result_ = (((((((((((((((rt_str_eq((*F->n_947), rt_str("ABS", 3)) || rt_str_eq((*F->n_947), rt_str("POS", 3))) || rt_str_eq((*F->n_947), rt_str("SUCC", 4))) || rt_str_eq((*F->n_947), rt_str("PRED", 4))) || rt_str_eq((*F->n_947), rt_str("SQRT", 4))) || rt_str_eq((*F->n_947), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_947), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_947), rt_str("WRITE", 5))) || rt_str_eq((*F->n_947), rt_str("READLN", 6))) || rt_str_eq((*F->n_947), rt_str("SEND", 4))) || rt_str_eq((*F->n_947), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_947), rt_str("DELAY", 5))) || rt_str_eq((*F->n_947), rt_str("TIME", 4))) || rt_str_eq((*F->n_947), rt_str("CNVT", 4))) || rt_str_eq((*F->n_947), rt_str("FORMAT", 6))) || f_is_low_level_950(&(*F->n_947)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_950(rstr *n_949) {
  struct f_is_low_level_950fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_949 = n_949;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_949), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_949), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_949), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_949), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_949), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_949), rt_str("LOCK", 4))) || rt_str_eq((*F->n_949), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_949), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_949), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_949), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_949), rt_str("WAITING", 7))) || rt_str_eq((*F->n_949), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_949), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_949), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_949), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_949), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_949), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_949), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_949), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_954(P1044 tt_951, rt_int line_952, P1050 *t_953) {
  struct f_me_high_954fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_951 = tt_951;
F->line_952 = line_952;
F->t_953 = t_953;
F->t_953v = *F->t_953;
F->c_2676 = NULL;
if ((F->tt_951 == NULL)) {
f_fail_23(F->line_952, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_953v = f_resolve_subtype_268(F->tt_951, &F->c_2676);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->t_953v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_956(F->t_953v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_953) = F->t_953v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_956(P1050 t_955) {
  struct f_type_tag_956fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_955 = t_955;
if (((*(P1050)rt_nil_check(F->t_955)).name != NULL)) {
F->result_ = (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_955)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_959(P1044 e_957, rstr *name_958) {
  struct f_lock_ref_959fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_957 = e_957;
F->name_958 = name_958;
F->lv_2677 = NULL;
F->t_2678 = NULL;
F->c_2679 = NULL;
f_lvalue_784(F->e_957, &F->lv_2677, &F->t_2678, &F->c_2679, &F->ro_2680);
if (((*(P1050)rt_nil_check(F->t_2678)).kind != (((rt_int)13LL)))) {
f_fail_23((*(P1044)rt_nil_check(F->e_957)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_958), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P1037)rt_nil_check(F->lv_2677))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1054 f_user_op_962(rstr *op_960, P1044 args_961) {
  struct f_user_op_962fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_960 = op_960;
F->args_961 = args_961;
F->y_2681 = NULL;
{ rt_int lo2683 = ((rt_int)1LL), hi2684 = ((rt_int)3LL);
for (rt_int it2685 = lo2683; it2685 <= hi2684; it2685++) {
F->pass_2682 = it2685;
F->y_2681 = f_overload_chain_946(&(*F->op_960), F->pass_2682);
while ((F->y_2681 != NULL)) {
if ((((rt_str_eq((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_2681)).name))->all), (*F->op_960)) && ((*(P1054)rt_nil_check(F->y_2681)).kind == (((rt_int)3LL)))) && ((F->pass_2682 != ((rt_int)1LL)) || ((*(P1054)rt_nil_check(F->y_2681)).depth >= g_gdepth_1117))) && f_fits_934(F->y_2681, F->args_961))) {
F->result_ = F->y_2681;
goto ret_;
}
F->y_2681 = (*(P1054)rt_nil_check(F->y_2681)).chain;
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

static rstr f_gcall_966(P1044 e_963, int is_stmt_964, P1050 *t_965) {
  struct f_gcall_966fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_963 = e_963;
F->is_stmt_964 = is_stmt_964;
F->t_965 = t_965;
F->t_965v = *F->t_965;
F->gd_2686 = NULL;
F->fn_2687 = NULL;
F->fn_2687 = (*(P1044)rt_nil_check(F->e_963)).a;
F->tt_2688 = NULL;
F->y_2689 = NULL;
F->args_2690 = NULL;
F->args_2690 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2691 = NULL;
F->a_2691 = (*(P1044)rt_nil_check(F->e_963)).b;
F->pm_2692 = NULL;
F->lt_2693 = NULL;
F->vt_2694 = NULL;
F->lv_2695 = NULL;
F->lc_2696 = NULL;
if (((*(P1044)rt_nil_check(F->fn_2687)).kind == (((rt_int)12LL)))) {
F->tt_2688 = (*(P1044)rt_nil_check(F->fn_2687)).b;
F->fn_2687 = (*(P1044)rt_nil_check(F->fn_2687)).a;
}
F->y_2689 = f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2687)).name))->all));
if ((F->y_2689 == NULL)) {
F->result_ = f_builtin_1021(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2687)).name))->all), F->tt_2688, (*(P1044)rt_nil_check(F->e_963)).b, (*(P1044)rt_nil_check(F->e_963)).line, F->is_stmt_964, &F->t_965v);
goto ret_;
}
if (((((*(P1054)rt_nil_check(F->y_2689)).kind != (((rt_int)3LL))) && ((*(P1054)rt_nil_check(F->y_2689)).kind != (((rt_int)4LL)))) && ((*(P1054)rt_nil_check(F->y_2689)).kind != (((rt_int)10LL))))) {
F->alt_2698 = NULL;
F->alt_2698 = f_resolve_overload_940(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2687)).name))->all), F->tt_2688, (*(P1044)rt_nil_check(F->e_963)).b, F->is_stmt_964, (*(P1044)rt_nil_check(F->e_963)).line);
if ((F->alt_2698 != NULL)) {
F->y_2689 = F->alt_2698;
} else if (f_is_builtin_948(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2687)).name))->all))) {
F->result_ = f_builtin_1021(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2687)).name))->all), F->tt_2688, (*(P1044)rt_nil_check(F->e_963)).b, (*(P1044)rt_nil_check(F->e_963)).line, F->is_stmt_964, &F->t_965v);
goto ret_;
}
}
if (((*(P1054)rt_nil_check(F->y_2689)).kind == (((rt_int)10LL)))) {
F->gd_2686 = (*(P1054)rt_nil_check(F->y_2689)).decl;
F->y_2689 = f_instantiate_760(F->y_2689, F->tt_2688, (*(P1044)rt_nil_check(F->e_963)).b, (*(P1044)rt_nil_check(F->e_963)).line);
} else if ((((*(P1054)rt_nil_check(F->y_2689)).kind == (((rt_int)3LL))) || ((*(P1054)rt_nil_check(F->y_2689)).kind == (((rt_int)4LL))))) {
F->y_2689 = f_resolve_overload_940(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2687)).name))->all), F->tt_2688, (*(P1044)rt_nil_check(F->e_963)).b, F->is_stmt_964, (*(P1044)rt_nil_check(F->e_963)).line);
if ((F->y_2689 == NULL)) {
F->result_ = f_builtin_1021(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2687)).name))->all), F->tt_2688, (*(P1044)rt_nil_check(F->e_963)).b, (*(P1044)rt_nil_check(F->e_963)).line, F->is_stmt_964, &F->t_965v);
goto ret_;
}
}
if ((((*(P1054)rt_nil_check(F->y_2689)).kind != (((rt_int)3LL))) && ((*(P1054)rt_nil_check(F->y_2689)).kind != (((rt_int)4LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->e_963)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2687)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_980(F->y_2689, (*(P1044)rt_nil_check(F->e_963)).line);
if (((*(P1054)rt_nil_check(F->y_2689)).capn != NULL)) {
F->cr_2699 = NULL;
F->cr_2699 = g_caps_1103;
while ((F->cr_2699 != NULL)) {
if (((*(P1071)rt_nil_check(F->cr_2699)).d == (*(P1054)rt_nil_check(F->y_2689)).capn)) {
f_fail_23((*(P1044)rt_nil_check(F->e_963)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_2689)).name))->all), rt_str(" is a normal function with an imports list: it may not be invoked inside its capsule", 84)); b_; }));
}
F->cr_2699 = (*(P1071)rt_nil_check(F->cr_2699)).next;
}
}
if ((F->is_stmt_964 && ((*(P1054)rt_nil_check(F->y_2689)).kind != (((rt_int)4LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->e_963)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2687)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_964) && ((*(P1054)rt_nil_check(F->y_2689)).kind != (((rt_int)3LL))))) {
f_fail_23((*(P1044)rt_nil_check(F->e_963)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2687)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2692 = (*(P1054)rt_nil_check(F->y_2689)).params;
if (((*(P1054)rt_nil_check(F->y_2689)).level > ((rt_int)0LL))) {
F->args_2690 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2701 = ((rt_int)1LL), hi2702 = rt_sub(g_cur_level_1101, (*(P1054)rt_nil_check(F->y_2689)).level);
for (rt_int it2703 = lo2701; it2703 <= hi2702; it2703++) {
F->i_2700 = it2703;
F->args_2690 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->args_2690))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2691 != NULL) && (F->pm_2692 != NULL))) {
if ((((rt_int)(((((P1037)rt_nil_check(F->args_2690))->all)).len)) > ((rt_int)0LL))) {
F->args_2690 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->args_2690))->all), rt_str(", ", 2)); b_; }));
}
if (((((*(P1056)rt_nil_check(F->pm_2692)).mode == (((rt_int)2LL))) || ((*(P1056)rt_nil_check(F->pm_2692)).mode == (((rt_int)4LL)))) && f_explicit_rep_1010(F->a_2691))) {
f_fail_23((*(P1044)rt_nil_check(F->e_963)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("data with an explicit representation may not be bound to a VAR or READONLY formal", 81); b_; }));
}
if ((((*(P1056)rt_nil_check(F->pm_2692)).mode == (((rt_int)2LL))) || ((*(P1056)rt_nil_check(F->pm_2692)).mode == (((rt_int)3LL))))) {
f_lvalue_784(F->a_2691, &F->lv_2695, &F->lt_2693, &F->lc_2696, &F->ro_2697);
if (F->ro_2697) {
f_fail_23((*(P1044)rt_nil_check(F->e_963)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check((*(P1056)rt_nil_check(F->pm_2692)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_232(F->lt_2693, (*(P1056)rt_nil_check(F->pm_2692)).t, (*(P1044)rt_nil_check(F->e_963)).line);
F->args_2690 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->args_2690))->all), rt_str("&", 1)), (((P1037)rt_nil_check(F->lv_2695))->all)), f_actual_bounds_1014((*(P1056)rt_nil_check(F->pm_2692)).t, F->lt_2693, F->lc_2696)); b_; }));
} else if ((((*(P1056)rt_nil_check(F->pm_2692)).mode == (((rt_int)4LL))) && f_is_lvalue_778(F->a_2691))) {
f_lvalue_784(F->a_2691, &F->lv_2695, &F->lt_2693, &F->lc_2696, &F->ro_2697);
f_check_type_232(F->lt_2693, (*(P1056)rt_nil_check(F->pm_2692)).t, (*(P1044)rt_nil_check(F->e_963)).line);
F->args_2690 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->args_2690))->all), rt_str("&", 1)), (((P1037)rt_nil_check(F->lv_2695))->all)), f_actual_bounds_1014((*(P1056)rt_nil_check(F->pm_2692)).t, F->lt_2693, F->lc_2696)); b_; }));
} else if (((*(P1056)rt_nil_check(F->pm_2692)).mode == (((rt_int)4LL)))) {
F->v_2704 = rt_str_copy(f_gexpr_in_826(F->a_2691, (*(P1056)rt_nil_check(F->pm_2692)).t, (*(P1056)rt_nil_check(F->pm_2692)).c, &F->vt_2694));
F->ct_2705 = rt_str_copy(f_ctype_234((*(P1056)rt_nil_check(F->pm_2692)).t));
f_check_type_232(F->vt_2694, (*(P1056)rt_nil_check(F->pm_2692)).t, (*(P1044)rt_nil_check(F->e_963)).line);
F->args_2690 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->args_2690))->all), rt_str("({ ", 3)), F->ct_2705), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2705), rt_str(")); *b_ = ", 10)), F->v_2704), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_186((*(P1056)rt_nil_check(F->pm_2692)).t)) {
F->args_2690 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->args_2690))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2706 = rt_str_copy(f_gexpr_in_826(F->a_2691, (*(P1056)rt_nil_check(F->pm_2692)).t, (*(P1056)rt_nil_check(F->pm_2692)).c, &F->vt_2694));
f_check_type_232(F->vt_2694, (*(P1056)rt_nil_check(F->pm_2692)).t, (*(P1044)rt_nil_check(F->e_963)).line);
F->args_2690 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->args_2690))->all), F->v_2706); b_; }));
}
F->a_2691 = (*(P1044)rt_nil_check(F->a_2691)).next;
F->pm_2692 = (*(P1056)rt_nil_check(F->pm_2692)).next;
}
if (((F->a_2691 != NULL) || (F->pm_2692 != NULL))) {
f_fail_23((*(P1044)rt_nil_check(F->e_963)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->fn_2687)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_71((*(P1044)rt_nil_check(F->e_963)).b), f_list_len_71(F->a_2691)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_965v = (*(P1054)rt_nil_check(F->y_2689)).result;
if ((F->gd_2686 != NULL)) {
F->chk_2707 = rt_str_copy(f_same_subtypes_985(F->gd_2686, (*(P1044)rt_nil_check(F->e_963)).b));
if ((!rt_str_eq(F->chk_2707, rt_str("", 0)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), F->chk_2707), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("generic subtype", 15)), f_q_18()), rt_str("); ", 3)), (((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_2689)).cname))->all)), rt_str("(", 1)), (((P1037)rt_nil_check(F->args_2690))->all)), rt_str("); })", 5));
goto ret_;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_2689)).cname))->all), rt_str("(", 1)), (((P1037)rt_nil_check(F->args_2690))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_965) = F->t_965v;
  RT_FPOP();
  return F->result_;
}

static P1048 f_requires_968(P1054 y_967) {
  struct f_requires_968fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_967 = y_967;
if ((*(P1054)rt_nil_check(F->y_967)).reqdone) {
F->result_ = (*(P1054)rt_nil_check(F->y_967)).reqs;
goto ret_;
}
(*(P1054)rt_nil_check(F->y_967)).reqdone = 1;
if ((((*(P1054)rt_nil_check(F->y_967)).decl != NULL) && ((((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_967)).decl)).kind == (((rt_int)45LL))) || ((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_967)).decl)).kind == (((rt_int)46LL)))) || ((*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_967)).decl)).kind == (((rt_int)50LL)))))) {
F->imp_2708 = NULL;
F->imp_2708 = (*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_967)).decl)).d;
while ((F->imp_2708 != NULL)) {
f_add_req_971(F->y_967, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->imp_2708)).name))->all));
F->imp_2708 = (*(P1044)rt_nil_check(F->imp_2708)).next;
}
f_require_calls_974(F->y_967, (*(P1044)rt_nil_check((*(P1054)rt_nil_check(F->y_967)).decl)).c);
}
F->result_ = (*(P1054)rt_nil_check(F->y_967)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_971(P1054 y_969, rstr *name_970) {
  struct f_add_req_971fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_969 = y_969;
F->name_970 = name_970;
F->l_2709 = NULL;
if ((!f_seen_name_440((*(P1054)rt_nil_check(F->y_969)).reqs, &(*F->name_970)))) {
{ R1049 *cell2710 = rt_alloc(sizeof(R1049));
(*cell2710).s = NULL;
(*cell2710).next = NULL;
F->l_2709 = cell2710;
}
(*(P1048)rt_nil_check(F->l_2709)).s = f_mk_3(&(*F->name_970));
(*(P1048)rt_nil_check(F->l_2709)).next = (*(P1054)rt_nil_check(F->y_969)).reqs;
(*(P1054)rt_nil_check(F->y_969)).reqs = F->l_2709;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_974(P1054 y_972, P1044 e_973) {
  struct f_require_calls_974fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_972 = y_972;
F->e_973 = e_973;
F->x_2711 = NULL;
F->x_2711 = F->e_973;
while ((F->x_2711 != NULL)) {
if (((((((*(P1044)rt_nil_check(F->x_2711)).kind == (((rt_int)45LL))) || ((*(P1044)rt_nil_check(F->x_2711)).kind == (((rt_int)46LL)))) || ((*(P1044)rt_nil_check(F->x_2711)).kind == (((rt_int)50LL)))) || ((*(P1044)rt_nil_check(F->x_2711)).kind == (((rt_int)47LL)))) || ((*(P1044)rt_nil_check(F->x_2711)).kind == (((rt_int)51LL))))) {
F->x_2711 = (*(P1044)rt_nil_check(F->x_2711)).next;
} else {
F->callee_2712 = NULL;
if ((((((*(P1044)rt_nil_check(F->x_2711)).kind == (((rt_int)10LL))) || ((*(P1044)rt_nil_check(F->x_2711)).kind == (((rt_int)21LL)))) && ((*(P1044)rt_nil_check(F->x_2711)).a != NULL)) && ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->x_2711)).a)).kind == (((rt_int)7LL))))) {
F->callee_2712 = (*(P1044)rt_nil_check(F->x_2711)).a;
}
if ((F->callee_2712 != NULL)) {
F->z_2713 = NULL;
F->z_2713 = f_lookup_163(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->callee_2712)).name))->all));
if ((((F->z_2713 != NULL) && (F->z_2713 != F->y_972)) && (((*(P1054)rt_nil_check(F->z_2713)).kind == (((rt_int)4LL))) || ((*(P1054)rt_nil_check(F->z_2713)).kind == (((rt_int)3LL)))))) {
F->l_2714 = NULL;
F->l_2714 = f_requires_968(F->z_2713);
while ((F->l_2714 != NULL)) {
f_add_req_971(F->y_972, &(((P1037)rt_nil_check((*(P1048)rt_nil_check(F->l_2714)).s))->all));
F->l_2714 = (*(P1048)rt_nil_check(F->l_2714)).next;
}
}
}
if (((*(P1044)rt_nil_check(F->x_2711)).a != NULL)) {
f_require_calls_974(F->y_972, (*(P1044)rt_nil_check(F->x_2711)).a);
}
if (((*(P1044)rt_nil_check(F->x_2711)).b != NULL)) {
f_require_calls_974(F->y_972, (*(P1044)rt_nil_check(F->x_2711)).b);
}
if (((*(P1044)rt_nil_check(F->x_2711)).c != NULL)) {
f_require_calls_974(F->y_972, (*(P1044)rt_nil_check(F->x_2711)).c);
}
F->x_2711 = (*(P1044)rt_nil_check(F->x_2711)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_977(P1044 elems_975, rstr *name_976) {
  struct f_declared_in_977fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_975 = elems_975;
F->name_976 = name_976;
F->e_2715 = NULL;
F->e_2715 = F->elems_975;
while ((F->e_2715 != NULL)) {
if (((((*(P1044)rt_nil_check(F->e_2715)).kind == (((rt_int)40LL))) || ((*(P1044)rt_nil_check(F->e_2715)).kind == (((rt_int)41LL)))) && rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_2715)).name))->all), (*F->name_976)))) {
F->result_ = 1;
goto ret_;
}
F->e_2715 = (*(P1044)rt_nil_check(F->e_2715)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_980(P1054 y_978, rt_int line_979) {
  struct f_check_requires_980fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_978 = y_978;
F->line_979 = line_979;
F->l_2716 = NULL;
F->l_2716 = f_requires_968(F->y_978);
if ((((*(P1054)rt_nil_check(F->y_978)).home == NULL) || ((*(P1054)rt_nil_check(F->y_978)).level != g_cur_level_1101))) {
goto ret_;
}
while ((F->l_2716 != NULL)) {
F->z_2717 = NULL;
F->z_2717 = f_lookup_163(&(((P1037)rt_nil_check((*(P1048)rt_nil_check(F->l_2716)).s))->all));
if ((f_declared_in_977((*(P1054)rt_nil_check(F->y_978)).home, &(((P1037)rt_nil_check((*(P1048)rt_nil_check(F->l_2716)).s))->all)) && ((F->z_2717 == NULL) || ((*(P1054)rt_nil_check(F->z_2717)).depth < (*(P1054)rt_nil_check(F->y_978)).depth)))) {
f_fail_23(F->line_979, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check((*(P1054)rt_nil_check(F->y_978)).name))->all), rt_str(" requires ", 10)), (((P1037)rt_nil_check((*(P1048)rt_nil_check(F->l_2716)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2716 = (*(P1048)rt_nil_check(F->l_2716)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_delay_args_982(P1044 args_981) {
  struct f_act_delay_args_982fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->args_981 = args_981;
F->at_2718 = NULL;
F->t1_2719 = NULL;
F->t1_2719 = f_peek_type_834(F->args_981);
if (((F->t1_2719 != NULL) && ((*(P1050)rt_nil_check(F->t1_2719)).kind == (((rt_int)14LL))))) {
F->a_2720 = rt_str_copy(f_act_ref_666(F->args_981));
F->v_2721 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->args_981)).next, g_ty_int_1129, &F->at_2718));
f_check_type_232(F->at_2718, g_ty_int_1129, (*(P1044)rt_nil_check(F->args_981)).line);
F->result_ = rt_str_cat(rt_str_cat(F->v_2721, rt_str(", ", 2)), F->a_2720);
goto ret_;
}
{
F->v_2722 = rt_str_copy(f_gexpr_815(F->args_981, g_ty_int_1129, &F->at_2718));
f_check_type_232(F->at_2718, g_ty_int_1129, (*(P1044)rt_nil_check(F->args_981)).line);
F->result_ = rt_str_cat(rt_str_cat(F->v_2722, rt_str(", ", 2)), f_act_ref_666((*(P1044)rt_nil_check(F->args_981)).next));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_same_subtypes_985(P1044 gd_983, P1044 args_984) {
  struct f_same_subtypes_985fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_983 = gd_983;
F->args_984 = args_984;
F->p_2723 = NULL;
F->p_2723 = (*(P1044)rt_nil_check(F->gd_983)).a;
F->r_2724 = NULL;
F->r_2724 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->p_2723 != NULL)) {
if (((*(P1044)rt_nil_check(F->p_2723)).ival == ((rt_int)2LL))) {
F->fp_2725 = NULL;
F->fp_2725 = (*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->gd_983)).b)).a;
F->a_2726 = NULL;
F->a_2726 = F->args_984;
F->flo_2727 = NULL;
F->fhi_2728 = NULL;
while (((F->fp_2725 != NULL) && (F->a_2726 != NULL))) {
if ((((((*(P1044)rt_nil_check(F->fp_2725)).a != NULL) && ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->fp_2725)).a)).kind == (((rt_int)80LL)))) && rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->fp_2725)).a)).name))->all), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->p_2723)).name))->all))) && ((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->fp_2725)).a)).b == NULL))) {
F->st_2729 = NULL;
F->c_2730 = NULL;
F->base_2731 = NULL;
F->lo_2732 = NULL;
F->hi_2733 = NULL;
F->st_2729 = f_value_subtype_290(F->a_2726, &F->c_2730, &F->base_2731);
if (f_scalar_kind_186(F->st_2729)) {
F->lo_2732 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_lo_198(F->st_2729, F->c_2730); b_; }));
F->hi_2733 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_hi_201(F->st_2729, F->c_2730); b_; }));
} else if ((((*(P1050)rt_nil_check(F->st_2729)).kind == (((rt_int)5LL))) && ((*(P1046)rt_nil_check(F->c_2730)).slen != NULL))) {
F->lo_2732 = (*(P1046)rt_nil_check(F->c_2730)).slen;
F->hi_2733 = (*(P1046)rt_nil_check(F->c_2730)).slen;
}
if (((F->lo_2732 != NULL) && (F->flo_2727 != NULL))) {
if ((((rt_int)(((((P1037)rt_nil_check(F->r_2724))->all)).len)) > ((rt_int)0LL))) {
F->r_2724 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_2724))->all), rt_str(" || ", 4)); b_; }));
}
F->r_2724 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_2724))->all), rt_str("(", 1)), (((P1037)rt_nil_check(F->flo_2727))->all)), rt_str(") != (", 6)), (((P1037)rt_nil_check(F->lo_2732))->all)), rt_str(") || (", 6)), (((P1037)rt_nil_check(F->fhi_2728))->all)), rt_str(") != (", 6)), (((P1037)rt_nil_check(F->hi_2733))->all)), rt_str(")", 1)); b_; }));
} else if ((F->lo_2732 != NULL)) {
F->flo_2727 = F->lo_2732;
F->fhi_2728 = F->hi_2733;
}
}
F->fp_2725 = (*(P1044)rt_nil_check(F->fp_2725)).next;
F->a_2726 = (*(P1044)rt_nil_check(F->a_2726)).next;
}
}
F->p_2723 = (*(P1044)rt_nil_check(F->p_2723)).next;
}
F->result_ = (((P1037)rt_nil_check(F->r_2724))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mailbox_low_990(rstr *name_986, P1044 args_987, rt_int line_988, P1050 *t_989) {
  struct f_mailbox_low_990fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_986 = name_986;
F->args_987 = args_987;
F->line_988 = line_988;
F->t_989 = t_989;
F->t_989v = *F->t_989;
F->qv_2734 = NULL;
F->mv_2735 = NULL;
F->dv_2736 = NULL;
F->qt_2737 = NULL;
F->mt_2738 = NULL;
F->dt_2739 = NULL;
F->at_2740 = NULL;
F->c_2741 = NULL;
F->send_2743 = rt_str_eq(rt_str_slice((*F->name_986), ((rt_int)1LL), ((rt_int)4LL)), rt_str("SEND", 4));
f_lvalue_784(F->args_987, &F->qv_2734, &F->qt_2737, &F->c_2741, &F->ro_2742);
f_lvalue_784((*(P1044)rt_nil_check(F->args_987)).next, &F->mv_2735, &F->mt_2738, &F->c_2741, &F->ro_2742);
if (((*(P1050)rt_nil_check(F->mt_2738)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_988, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_986), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_989v = g_ty_void_1134;
if (((F->send_2743 && (F->qt_2737 != g_ty_send_st_1141)) || ((!F->send_2743) && (F->qt_2737 != g_ty_receive_st_1142)))) {
f_fail_23(F->line_988, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->name_986), rt_str(" needs a variable of subtype ", 29)), rt_str_slice((*F->name_986), ((rt_int)1LL), ((rt_int)4LL))), rt_str("_ST", 3)); b_; }));
}
if ((rt_str_eq((*F->name_986), rt_str("SEND_TEST", 9)) || rt_str_eq((*F->name_986), rt_str("RECEIVE_TEST", 12)))) {
F->t_989v = g_ty_bool_1130;
if (F->send_2743) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_send(", 14), (((P1037)rt_nil_check(F->mv_2735))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_receive(", 17), (((P1037)rt_nil_check(F->mv_2735))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("SEND_COMPLETE", 13))) {
F->v_2744 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_987)).next)).next, (*(P1050)rt_nil_check(F->mt_2738)).elem, &F->at_2740));
f_check_type_232(F->at_2740, (*(P1050)rt_nil_check(F->mt_2738)).elem, F->line_988);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1050)rt_nil_check(F->mt_2738)).elem)), rt_str(" m_ = ", 6)), F->v_2744), rt_str("; if (!rt_cond_send(", 20)), (((P1037)rt_nil_check(F->mv_2735))->all)), rt_str(", &m_)) rt_raise(RT_X_EMPTY_MAILBOX); })", 40));
goto ret_;
} else if (rt_str_eq((*F->name_986), rt_str("RECEIVE_COMPLETE", 16))) {
f_lvalue_784((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_987)).next)).next, &F->dv_2736, &F->dt_2739, &F->c_2741, &F->ro_2742);
f_check_type_232(F->dt_2739, (*(P1050)rt_nil_check(F->mt_2738)).elem, F->line_988);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (!rt_cond_receive(", 24), (((P1037)rt_nil_check(F->mv_2735))->all)), rt_str(", &", 3)), (((P1037)rt_nil_check(F->dv_2736))->all)), rt_str(")) rt_raise(RT_X_EMPTY_MAILBOX); })", 35));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1037)rt_nil_check(F->qv_2734))->all)), rt_str(" = 1)", 5));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_989) = F->t_989v;
  RT_FPOP();
  return F->result_;
}

static P1050 f_exponent_want_993(rstr *op_991, P1050 ta_992) {
  struct f_exponent_want_993fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_991 = op_991;
F->ta_992 = ta_992;
if (rt_str_eq((*F->op_991), rt_str("**", 2))) {
F->result_ = g_ty_int_1129;
goto ret_;
}
F->result_ = F->ta_992;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_ref_997(P1044 e_994, int text_995, rt_int line_996) {
  struct f_file_ref_997fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_994 = e_994;
F->text_995 = text_995;
F->line_996 = line_996;
F->t_2745 = NULL;
F->f_2746 = rt_str_copy(f_gexpr_815(F->e_994, NULL, &F->t_2745));
if (((*(P1050)rt_nil_check(F->t_2745)).kind != (((rt_int)10LL)))) {
f_fail_23(F->line_996, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a file is required", 18); b_; }));
} else if ((F->text_995 && (!f_text_file_999(F->t_2745)))) {
f_fail_23(F->line_996, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a text file, whose components are characters, is required", 57); b_; }));
}
F->result_ = F->f_2746;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_text_file_999(P1050 t_998) {
  struct f_text_file_999fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_998 = t_998;
F->result_ = (((F->t_998 != NULL) && ((*(P1050)rt_nil_check(F->t_998)).kind == (((rt_int)10LL)))) && ((*(P1050)rt_nil_check(f_base_of_223(f_str_elem_218(F->t_998)))).kind == (((rt_int)4LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_conversion_1004(P1044 tt_1000, P1044 args_1001, rt_int line_1002, P1050 *t_1003) {
  struct f_conversion_1004fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_1000 = tt_1000;
F->args_1001 = args_1001;
F->line_1002 = line_1002;
F->t_1003 = t_1003;
F->t_1003v = *F->t_1003;
F->c_2747 = NULL;
F->at_2748 = NULL;
F->target_2749 = NULL;
F->target_2749 = f_resolve_subtype_268(F->tt_1000, &F->c_2747);
F->a_2750 = rt_str_copy(f_gexpr_815(F->args_1001, NULL, &F->at_2748));
F->t_1003v = F->target_2749;
if ((((*(P1050)rt_nil_check(F->target_2749)).kind == (((rt_int)5LL))) && f_same_221(f_str_elem_218(F->target_2749), g_ty_ascii_1132))) {
F->r_2751 = NULL;
if (((*(P1050)rt_nil_check(F->at_2748)).kind == (((rt_int)1LL)))) {
F->r_2751 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2750), rt_str(")", 1)); b_; }));
} else if (((*(P1050)rt_nil_check(F->at_2748)).kind == (((rt_int)3LL)))) {
F->r_2751 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_str_of_float(", 18), F->a_2750), rt_str(", ", 2)), f_float_digits_1006(F->args_1001)), rt_str(")", 1)); b_; }));
} else if (((*(P1050)rt_nil_check(F->at_2748)).kind == (((rt_int)2LL)))) {
F->r_2751 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2750), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5)); b_; }));
} else if (((*(P1050)rt_nil_check(f_base_of_223(F->at_2748))).kind == (((rt_int)4LL)))) {
F->r_2751 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_enum_image(", 16), f_enum_names_1008(f_base_of_223(F->at_2748))), rt_str(", ", 2)), F->a_2750), rt_str(")", 1)); b_; }));
} else if (((*(P1050)rt_nil_check(F->at_2748)).kind == (((rt_int)5LL)))) {
F->r_2751 = f_mk_3(&F->a_2750);
} else {
f_fail_23(F->line_1002, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT converts BOOL, INT, FLOAT and ENUM values to strings", 57); b_; }));
}
if (((F->c_2747 != NULL) && ((*(P1046)rt_nil_check(F->c_2747)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_str_pad(", 13), (((P1037)rt_nil_check(F->r_2751))->all)), rt_str(", ", 2)), (((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_2747)).slen))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = (((P1037)rt_nil_check(F->r_2751))->all);
goto ret_;
} else if (((*(P1050)rt_nil_check(F->at_2748)).kind == (((rt_int)5LL)))) {
if (((*(P1050)rt_nil_check(F->target_2749)).kind == (((rt_int)1LL)))) {
F->result_ = f_checked_213(F->target_2749, F->c_2747, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2750), rt_str(")", 1)); b_; }));
goto ret_;
} else if (((*(P1050)rt_nil_check(F->target_2749)).kind == (((rt_int)3LL)))) {
F->result_ = f_checked_213(F->target_2749, F->c_2747, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_float_of_str(", 18), F->a_2750), rt_str(")", 1)); b_; }));
goto ret_;
} else if (((*(P1050)rt_nil_check(F->target_2749)).kind == (((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_bool_of_str(", 17), F->a_2750), rt_str(")", 1));
goto ret_;
} else if (((*(P1050)rt_nil_check(f_base_of_223(F->target_2749))).kind == (((rt_int)4LL)))) {
F->result_ = f_checked_213(F->target_2749, F->c_2747, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_enum_of_str(", 17), f_enum_names_1008(f_base_of_223(F->target_2749))), rt_str(", ", 2)), f_itos_7(f_list_len_71((*(P1050)rt_nil_check(f_base_of_223(F->target_2749))).lits))), rt_str(", ", 2)), F->a_2750), rt_str(")", 1)); b_; }));
goto ret_;
}
} else if ((((*(P1050)rt_nil_check(F->target_2749)).kind == (((rt_int)3LL))) && ((*(P1050)rt_nil_check(F->at_2748)).kind == (((rt_int)1LL))))) {
F->result_ = f_checked_213(F->target_2749, F->c_2747, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2750), rt_str("))", 2)); b_; }));
goto ret_;
} else if (f_same_221(F->target_2749, F->at_2748)) {
F->result_ = f_checked_213(F->target_2749, F->c_2747, &F->a_2750);
goto ret_;
}
f_fail_23(F->line_1002, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT does not convert between these types", 41); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_1003) = F->t_1003v;
  RT_FPOP();
  return F->result_;
}

static rstr f_float_digits_1006(P1044 e_1005) {
  struct f_float_digits_1006fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_1005 = e_1005;
F->lv_2752 = NULL;
F->t_2753 = NULL;
F->c_2754 = NULL;
if ((((*(P1044)rt_nil_check(F->e_1005)).kind == (((rt_int)8LL))) || ((*(P1044)rt_nil_check(F->e_1005)).kind == (((rt_int)17LL))))) {
F->result_ = f_float_digits_1006((*(P1044)rt_nil_check(F->e_1005)).a);
goto ret_;
} else if (((*(P1044)rt_nil_check(F->e_1005)).kind == (((rt_int)2LL)))) {
F->n_2756 = ((rt_int)0LL);
F->lead_2757 = 1;
{ rt_int lo2759 = ((rt_int)1LL), hi2760 = ((rt_int)(((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1005)).name))->all)).len));
for (rt_int it2761 = lo2759; it2761 <= hi2760; it2761++) {
F->i_2758 = it2761;
if (((rt_str_get((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1005)).name))->all), F->i_2758) == 69) || (rt_str_get((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1005)).name))->all), F->i_2758) == 101))) {
F->result_ = f_itos_7(F->n_2756);
goto ret_;
} else if ((f_is_digit_11(rt_str_get((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1005)).name))->all), F->i_2758)) && (!(F->lead_2757 && (rt_str_get((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1005)).name))->all), F->i_2758) == 48))))) {
F->n_2756 = rt_add(F->n_2756, ((rt_int)1LL));
F->lead_2757 = 0;
} else if ((f_is_digit_11(rt_str_get((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->e_1005)).name))->all), F->i_2758)) && (!F->lead_2757))) {
F->n_2756 = rt_add(F->n_2756, ((rt_int)1LL));
}
}
}
F->result_ = f_itos_7(F->n_2756);
goto ret_;
} else if (f_is_lvalue_778(F->e_1005)) {
F->saved_2762 = NULL;
F->saved_2762 = g_code_1098;
g_code_1098 = f_new_buffer_24();
f_lvalue_784(F->e_1005, &F->lv_2752, &F->t_2753, &F->c_2754, &F->ro_2755);
g_code_1098 = F->saved_2762;
if (((F->c_2754 != NULL) && ((*(P1046)rt_nil_check(F->c_2754)).prec != NULL))) {
F->result_ = (((P1037)rt_nil_check((*(P1046)rt_nil_check(F->c_2754)).prec))->all);
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

static rstr f_enum_names_1008(P1050 t_1007) {
  struct f_enum_names_1008fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_1007 = t_1007;
F->l_2763 = NULL;
F->l_2763 = (*(P1050)rt_nil_check(F->t_1007)).lits;
F->r_2764 = NULL;
F->r_2764 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1050)rt_nil_check(F->t_1007)).cname != NULL)) {
F->result_ = (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_1007)).cname))->all);
goto ret_;
}
while ((F->l_2763 != NULL)) {
if ((((rt_int)(((((P1037)rt_nil_check(F->r_2764))->all)).len)) > ((rt_int)0LL))) {
F->r_2764 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1037)rt_nil_check(F->r_2764))->all), rt_str(", ", 2)); b_; }));
}
F->r_2764 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->r_2764))->all), f_q_18()), (((P1037)rt_nil_check((*(P1044)rt_nil_check(F->l_2763)).name))->all)), f_q_18()); b_; }));
F->l_2763 = (*(P1044)rt_nil_check(F->l_2763)).next;
}
(*(P1050)rt_nil_check(F->t_1007)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("en_", 3); b_; })); b_; }));
f_put_27(g_out_globals_1094, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static const char *const ", 25), (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_1007)).cname))->all)), rt_str("[] = {", 6)), (((P1037)rt_nil_check(F->r_2764))->all)), rt_str("};", 2)); b_; }));
F->result_ = (((P1037)rt_nil_check((*(P1050)rt_nil_check(F->t_1007)).cname))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_explicit_rep_1010(P1044 e_1009) {
  struct f_explicit_rep_1010fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_1009 = e_1009;
F->bt_2765 = NULL;
if ((((*(P1044)rt_nil_check(F->e_1009)).kind != (((rt_int)11LL))) && (!(((*(P1044)rt_nil_check(F->e_1009)).kind == (((rt_int)10LL))) && f_is_lvalue_778(F->e_1009))))) {
F->result_ = 0;
goto ret_;
}
F->bt_2765 = f_peek_type_834((*(P1044)rt_nil_check(F->e_1009)).a);
while ((((F->bt_2765 != NULL) && ((*(P1050)rt_nil_check(F->bt_2765)).kind == (((rt_int)8LL)))) && ((*(P1050)rt_nil_check(F->bt_2765)).repn == NULL))) {
f_finish_ptr_490(F->bt_2765);
F->bt_2765 = (*(P1050)rt_nil_check(F->bt_2765)).target;
}
if (((F->bt_2765 != NULL) && ((*(P1050)rt_nil_check(F->bt_2765)).repn != NULL))) {
F->result_ = 1;
goto ret_;
}
F->result_ = f_explicit_rep_1010((*(P1044)rt_nil_check(F->e_1009)).a);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_actual_bounds_1014(P1050 ft_1011, P1050 t_1012, P1046 c_1013) {
  struct f_actual_bounds_1014fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_1011 = ft_1011;
F->t_1012 = t_1012;
F->c_1013 = c_1013;
if ((!f_scalar_kind_186(F->ft_1011))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_198(F->t_1012, F->c_1013)), rt_str(", ", 2)), f_sub_hi_201(F->t_1012, F->c_1013));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_1021(rstr *name_1015, P1044 tt_1016, P1044 args_1017, rt_int line_1018, int is_stmt_1019, P1050 *t_1020) {
  struct f_builtin_1021fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_1015 = name_1015;
F->tt_1016 = tt_1016;
F->args_1017 = args_1017;
F->line_1018 = line_1018;
F->is_stmt_1019 = is_stmt_1019;
F->t_1020 = t_1020;
F->t_1020v = *F->t_1020;
F->at_2766 = NULL;
F->n_2767 = f_list_len_71(F->args_1017);
F->t_1020v = g_ty_void_1134;
if (((rt_str_eq((*F->name_1015), rt_str("POS", 3)) || rt_str_eq((*F->name_1015), rt_str("SUCC", 4))) || rt_str_eq((*F->name_1015), rt_str("PRED", 4)))) {
F->a_2768 = rt_str_copy(f_gexpr_815(F->args_1017, NULL, &F->at_2766));
if (rt_str_eq((*F->name_1015), rt_str("POS", 3))) {
if (((*(P1050)rt_nil_check(f_base_of_223(F->at_2766))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_1018, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_1020v = g_ty_int_1129;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2768), rt_str(") + 1)", 6));
goto ret_;
}
F->t_1020v = F->at_2766;
if (((*(P1050)rt_nil_check(F->at_2766)).kind == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_1015), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2768), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2768), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_1015), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2768), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_71((*(P1050)rt_nil_check(f_base_of_223(F->at_2766))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2768), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_71((*(P1050)rt_nil_check(f_base_of_223(F->at_2766))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("FLOOR", 5))) {
F->a_2769 = rt_str_copy(f_gexpr_815(F->args_1017, g_ty_float_1131, &F->at_2766));
f_check_type_232(F->at_2766, g_ty_float_1131, F->line_1018);
F->t_1020v = g_ty_int_1129;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_floor(", 11), F->a_2769), rt_str(")", 1));
goto ret_;
} else if ((((rt_str_eq((*F->name_1015), rt_str("ACTP", 4)) || rt_str_eq((*F->name_1015), rt_str("RADIX", 5))) || rt_str_eq((*F->name_1015), rt_str("EMIN", 4))) || rt_str_eq((*F->name_1015), rt_str("EMAX", 4)))) {
F->a_2770 = rt_str_copy(f_gexpr_815(F->args_1017, g_ty_float_1131, &F->at_2766));
f_check_type_232(F->at_2766, g_ty_float_1131, F->line_1018);
F->t_1020v = g_ty_int_1129;
if (rt_str_eq((*F->name_1015), rt_str("ACTP", 4))) {
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("RADIX", 5))) {
F->result_ = rt_str("((rt_int)2)", 11);
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("EMIN", 4))) {
F->result_ = rt_str("((rt_int)-1021)", 15);
goto ret_;
}
F->result_ = rt_str("((rt_int)1024)", 14);
goto ret_;
} else if (((((rt_str_eq((*F->name_1015), rt_str("SQRT", 4)) || rt_str_eq((*F->name_1015), rt_str("SIN", 3))) || rt_str_eq((*F->name_1015), rt_str("COS", 3))) || rt_str_eq((*F->name_1015), rt_str("EXP", 3))) || rt_str_eq((*F->name_1015), rt_str("LN", 2)))) {
F->a_2771 = rt_str_copy(f_gexpr_815(F->args_1017, g_ty_float_1131, &F->at_2766));
F->t_1020v = g_ty_float_1131;
if (rt_str_eq((*F->name_1015), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2771), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_1015)), rt_str("(", 1)), F->a_2771), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("IFLOAT", 6))) {
F->a_2772 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->args_1017)).next, g_ty_int_1129, &F->at_2766));
F->t_1020v = g_ty_float_1131;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2772), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("IFIX", 4))) {
F->a_2773 = rt_str_copy(f_gexpr_815(F->args_1017, g_ty_float_1131, &F->at_2766));
F->t_1020v = g_ty_int_1129;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2773), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("FORMAT", 6))) {
F->a_2774 = rt_str_copy(f_gexpr_815(F->args_1017, g_ty_float_1131, &F->at_2766));
F->n1_2775 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->args_1017)).next, g_ty_int_1129, &F->at_2766));
F->m1_2776 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_1017)).next)).next, g_ty_int_1129, &F->at_2766));
F->t_1020v = g_ty_string_1133;
if ((F->n_2767 == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_format_e(", 14), F->a_2774), rt_str(", ", 2)), F->n1_2775), rt_str(", ", 2)), F->m1_2776), rt_str(", ", 2)), f_gexpr_815((*(P1044)rt_nil_check((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_1017)).next)).next)).next, g_ty_int_1129, &F->at_2766)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_format(", 12), F->a_2774), rt_str(", ", 2)), F->n1_2775), rt_str(", ", 2)), F->m1_2776), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("ABS", 3))) {
F->a_2777 = rt_str_copy(f_gexpr_815(F->args_1017, NULL, &F->at_2766));
F->t_1020v = F->at_2766;
if (((*(P1050)rt_nil_check(F->at_2766)).kind == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2777), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2777), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("CNVT", 4))) {
if ((F->tt_1016 == NULL)) {
f_fail_23(F->line_1018, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
F->result_ = f_conversion_1004(F->tt_1016, F->args_1017, F->line_1018, &F->t_1020v);
goto ret_;
} else if ((rt_str_eq((*F->name_1015), rt_str("WRITELN", 7)) && (F->n_2767 == ((rt_int)2LL)))) {
F->f_2778 = rt_str_copy(f_file_ref_997(F->args_1017, 1, F->line_1018));
F->a_2779 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->args_1017)).next, g_ty_string_1133, &F->at_2766));
f_check_type_232(F->at_2766, g_ty_string_1133, F->line_1018);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fwriteln(", 14), F->f_2778), rt_str(", ", 2)), F->a_2779), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("WRITELN", 7))) {
if ((F->n_2767 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->a_2780 = rt_str_copy(f_gexpr_815(F->args_1017, g_ty_string_1133, &F->at_2766));
f_check_type_232(F->at_2766, g_ty_string_1133, F->line_1018);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2780), rt_str(")", 1));
goto ret_;
}
} else if ((rt_str_eq((*F->name_1015), rt_str("WRITE", 5)) || rt_str_eq((*F->name_1015), rt_str("READ", 4)))) {
F->ft_2781 = NULL;
F->f_2782 = rt_str_copy(f_file_ref_997(F->args_1017, 0, F->line_1018));
F->ft_2781 = f_peek_type_834(F->args_1017);
if (rt_str_eq((*F->name_1015), rt_str("READ", 4))) {
F->lv_2783 = NULL;
F->lc_2784 = NULL;
f_lvalue_784((*(P1044)rt_nil_check(F->args_1017)).next, &F->lv_2783, &F->at_2766, &F->lc_2784, &F->ro_2785);
if (F->ro_2785) {
f_fail_23(F->line_1018, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READ needs a variable", 21); b_; }));
}
f_check_type_232(F->at_2766, f_str_elem_218(F->ft_2781), F->line_1018);
if (f_text_file_999(F->ft_2781)) {
F->result_ = f_assign_code_426(&(((P1037)rt_nil_check(F->lv_2783))->all), F->at_2766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fgetc(", 11), F->f_2782), rt_str(")", 1)); b_; }), F->lc_2784);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ const unsigned char *q_ = rt_r_fread_rec(", 44), F->f_2782), rt_str("); ", 3)), f_assign_code_426(&(((P1037)rt_nil_check(F->lv_2783))->all), F->at_2766, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("fr_", 3), f_ser_name_367(F->at_2766)), rt_str("(&q_)", 5)); b_; }), F->lc_2784)), rt_str(" })", 3));
goto ret_;
}
{
F->a_2786 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->args_1017)).next, f_str_elem_218(F->ft_2781), &F->at_2766));
if ((f_text_file_999(F->ft_2781) && ((*(P1050)rt_nil_check(F->at_2766)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fputs(", 11), F->f_2782), rt_str(", ", 2)), F->a_2786), rt_str(")", 1));
goto ret_;
}
f_check_type_232(F->at_2766, f_str_elem_218(F->ft_2781), F->line_1018);
if (f_text_file_999(F->ft_2781)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fputc(", 11), F->f_2782), rt_str(", ", 2)), F->a_2786), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_r_buf b_ = {NULL, 0, 0}; fw_", 34), f_ser_name_367(F->at_2766)), rt_str("(&b_, ", 6)), F->a_2786), rt_str("); rt_r_fwrite_rec(", 19)), F->f_2782), rt_str(", b_.p, b_.n); })", 17));
goto ret_;
}
} else if ((rt_str_eq((*F->name_1015), rt_str("READLN", 6)) && (F->n_2767 == ((rt_int)2LL)))) {
F->lv_2787 = NULL;
F->lc_2788 = NULL;
F->f_2790 = rt_str_copy(f_file_ref_997(F->args_1017, 1, F->line_1018));
f_lvalue_784((*(P1044)rt_nil_check(F->args_1017)).next, &F->lv_2787, &F->at_2766, &F->lc_2788, &F->ro_2789);
f_check_type_232(F->at_2766, g_ty_string_1133, F->line_1018);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_freadln(", 13), F->f_2790), rt_str(", &", 3)), (((P1037)rt_nil_check(F->lv_2787))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("READLN", 6))) {
F->lv_2791 = NULL;
F->lc_2792 = NULL;
f_lvalue_784(F->args_1017, &F->lv_2791, &F->at_2766, &F->lc_2792, &F->ro_2793);
f_check_type_232(F->at_2766, g_ty_string_1133, F->line_1018);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_readln(&", 13), (((P1037)rt_nil_check(F->lv_2791))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1015), rt_str("SIZELN", 6)) && (F->n_2767 == ((rt_int)1LL)))) {
F->t_1020v = g_ty_int_1129;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fsizeln(", 13), f_file_ref_997(F->args_1017, 1, F->line_1018)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("SIZELN", 6))) {
F->t_1020v = g_ty_int_1129;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if ((rt_str_eq((*F->name_1015), rt_str("EOF", 3)) && (F->n_2767 == ((rt_int)1LL)))) {
F->t_1020v = g_ty_bool_1130;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_feof(", 10), f_file_ref_997(F->args_1017, 0, F->line_1018)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("EOF", 3))) {
F->t_1020v = g_ty_bool_1130;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("SYS_IN", 6))) {
F->t_1020v = g_ty_text_file_1143;
F->result_ = rt_str("rt_r_sys_in()", 13);
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("SYS_OUT", 7))) {
F->t_1020v = g_ty_text_file_1143;
F->result_ = rt_str("rt_r_sys_out()", 14);
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("OPEN", 4))) {
F->f_2794 = rt_str_copy(f_file_ref_997(F->args_1017, 0, F->line_1018));
F->nm_2795 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->args_1017)).next, g_ty_string_1133, &F->at_2766));
F->st_2796 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_1017)).next)).next, g_file_state_type_1144, &F->at_2766));
f_check_type_232(F->at_2766, g_file_state_type_1144, F->line_1018);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_open(", 10), F->f_2794), rt_str(", ", 2)), F->nm_2795), rt_str(", ", 2)), F->st_2796), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("CLOSE", 5))) {
F->f_2797 = rt_str_copy(f_file_ref_997(F->args_1017, 0, F->line_1018));
F->d_2798 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->args_1017)).next, g_file_disp_type_1145, &F->at_2766));
f_check_type_232(F->at_2766, g_file_disp_type_1145, F->line_1018);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_close(", 11), F->f_2797), rt_str(", ", 2)), F->d_2798), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1015), rt_str("SIZE", 4)) || rt_str_eq((*F->name_1015), rt_str("POSITION", 8)))) {
F->t_1020v = g_ty_int_1129;
if (rt_str_eq((*F->name_1015), rt_str("SIZE", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fsize(", 11), f_file_ref_997(F->args_1017, 0, F->line_1018)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fpos(", 10), f_file_ref_997(F->args_1017, 0, F->line_1018)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("SET_POSITION", 12))) {
F->f_2799 = rt_str_copy(f_file_ref_997(F->args_1017, 0, F->line_1018));
F->v_2800 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->args_1017)).next, g_ty_int_1129, &F->at_2766));
f_check_type_232(F->at_2766, g_ty_int_1129, F->line_1018);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fsetpos(", 13), F->f_2799), rt_str(", ", 2)), F->v_2800), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("FILE_RENAME", 11))) {
F->a_2801 = rt_str_copy(f_gexpr_815(F->args_1017, g_ty_string_1133, &F->at_2766));
F->b_2802 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->args_1017)).next, g_ty_string_1133, &F->at_2766));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_rename(", 12), F->a_2801), rt_str(", ", 2)), F->b_2802), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1015), rt_str("SEND", 4)) || rt_str_eq((*F->name_1015), rt_str("RECEIVE", 7)))) {
F->lv_2803 = NULL;
F->dv_2804 = NULL;
F->lc_2805 = NULL;
F->mt_2807 = NULL;
F->dt_2808 = NULL;
f_lvalue_784(F->args_1017, &F->lv_2803, &F->mt_2807, &F->lc_2805, &F->ro_2806);
if (((*(P1050)rt_nil_check(F->mt_2807)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_1018, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_1015), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_1015), rt_str("RECEIVE", 7))) {
f_lvalue_784((*(P1044)rt_nil_check(F->args_1017)).next, &F->dv_2804, &F->dt_2808, &F->lc_2805, &F->ro_2806);
f_check_type_232(F->dt_2808, (*(P1050)rt_nil_check(F->mt_2807)).elem, F->line_1018);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P1037)rt_nil_check(F->lv_2803))->all)), rt_str(", &", 3)), (((P1037)rt_nil_check(F->dv_2804))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2809 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->args_1017)).next, (*(P1050)rt_nil_check(F->mt_2807)).elem, &F->at_2766));
f_check_type_232(F->at_2766, (*(P1050)rt_nil_check(F->mt_2807)).elem, F->line_1018);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1050)rt_nil_check(F->mt_2807)).elem)), rt_str(" m_ = ", 6)), F->v_2809), rt_str("; rt_send(", 10)), (((P1037)rt_nil_check(F->lv_2803))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_1015), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_1015), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2810 = NULL;
F->lc_2811 = NULL;
F->mt_2813 = NULL;
f_lvalue_784(F->args_1017, &F->lv_2810, &F->mt_2813, &F->lc_2811, &F->ro_2812);
if (((*(P1050)rt_nil_check(F->mt_2813)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_1018, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_1015), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_1020v = g_ty_int_1129;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_1015))), rt_str("(", 1)), (((P1037)rt_nil_check(F->lv_2810))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1015), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_1015), rt_str("COND_RECEIVE", 12)))) {
F->lv_2814 = NULL;
F->dv_2815 = NULL;
F->bv_2816 = NULL;
F->lc_2817 = NULL;
F->mt_2819 = NULL;
F->dt_2820 = NULL;
F->bt_2821 = NULL;
f_lvalue_784(F->args_1017, &F->lv_2814, &F->mt_2819, &F->lc_2817, &F->ro_2818);
if (((*(P1050)rt_nil_check(F->mt_2819)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_1018, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_1015), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_784((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_1017)).next)).next, &F->bv_2816, &F->bt_2821, &F->lc_2817, &F->ro_2818);
f_check_type_232(F->bt_2821, g_ty_bool_1130, F->line_1018);
if (rt_str_eq((*F->name_1015), rt_str("COND_RECEIVE", 12))) {
f_lvalue_784((*(P1044)rt_nil_check(F->args_1017)).next, &F->dv_2815, &F->dt_2820, &F->lc_2817, &F->ro_2818);
f_check_type_232(F->dt_2820, (*(P1050)rt_nil_check(F->mt_2819)).elem, F->line_1018);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->bv_2816))->all), rt_str(" = rt_cond_receive(", 19)), (((P1037)rt_nil_check(F->lv_2814))->all)), rt_str(", &", 3)), (((P1037)rt_nil_check(F->dv_2815))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2822 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->args_1017)).next, (*(P1050)rt_nil_check(F->mt_2819)).elem, &F->at_2766));
f_check_type_232(F->at_2766, (*(P1050)rt_nil_check(F->mt_2819)).elem, F->line_1018);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1050)rt_nil_check(F->mt_2819)).elem)), rt_str(" m_ = ", 6)), F->v_2822), rt_str("; ", 2)), (((P1037)rt_nil_check(F->bv_2816))->all)), rt_str(" = rt_cond_send(", 16)), (((P1037)rt_nil_check(F->lv_2814))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_1015), rt_str("PRIORITY", 8))) {
F->t_1020v = g_ty_int_1129;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_666(F->args_1017)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("SET_PRIORITY", 12))) {
F->v_2823 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->args_1017)).next, g_ty_int_1129, &F->at_2766));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_666(F->args_1017)), rt_str(", ", 2)), F->v_2823), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_666(F->args_1017)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("ACTIVE", 6))) {
F->t_1020v = g_ty_bool_1130;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_666(F->args_1017)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("DELAY", 5))) {
F->v_2824 = rt_str_copy(f_gexpr_815(F->args_1017, g_ty_int_1129, &F->at_2766));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2824), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1015), rt_str("DELAY_UNTIL", 11)) && (F->n_2767 == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_delay_act(", 15), f_act_delay_args_982(F->args_1017)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("DELAY_UNTIL", 11))) {
F->v_2825 = rt_str_copy(f_gexpr_815(F->args_1017, g_ty_int_1129, &F->at_2766));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2825), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_666(F->args_1017)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1015), rt_str("TIME", 4)) && (F->n_2767 == ((rt_int)1LL)))) {
F->t_1020v = g_ty_int_1129;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_act_time(", 14), f_act_ref_666(F->args_1017)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("TIME", 4))) {
F->t_1020v = g_ty_int_1129;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_1015), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_1015), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_1015), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_1015), rt_str("HOURS", 5)))) {
F->t_1020v = g_ty_int_1129;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_1015));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("HALT", 4))) {
F->a_2826 = rt_str_copy(f_gexpr_815(F->args_1017, g_ty_int_1129, &F->at_2766));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2826), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1015), rt_str("ME", 2)) && (F->tt_1016 != NULL))) {
F->result_ = f_me_high_954(F->tt_1016, F->line_1018, &F->t_1020v);
goto ret_;
} else if ((rt_str_eq((*F->name_1015), rt_str("WAITING", 7)) || rt_str_eq((*F->name_1015), rt_str("SUSPENDED", 9)))) {
F->t_1020v = g_ty_bool_1130;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_1015))), rt_str("(", 1)), f_act_ref_666(F->args_1017)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_1015), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_1015), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_1015), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_1015), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_1015), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_1015), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_1015))), rt_str("(", 1)), f_act_ref_666(F->args_1017)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("TASK_START", 10))) {
if ((F->n_2767 != ((rt_int)2LL))) {
f_fail_23(F->line_1018, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_666(F->args_1017)), rt_str(", ", 2)), f_act_ref_666((*(P1044)rt_nil_check(F->args_1017)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_1015), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_1015), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_1015), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_1015), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_1015), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_1015), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((F->n_2767 != ((rt_int)0LL))) {
f_fail_23(F->line_1018, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_1015), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_1015))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_959(F->args_1017, &(*F->name_1015))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1015), rt_str("UNLOCK", 6)) && (f_peek_type_834(F->args_1017) != g_ty_latch_1138))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_unlock(", 12), f_lock_ref_959(F->args_1017, &(*F->name_1015))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_959(F->args_1017, &(*F->name_1015))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("COND_LOCK", 9))) {
F->bv_2827 = NULL;
F->bc_2828 = NULL;
F->bt_2830 = NULL;
F->l_2831 = rt_str_copy(f_lock_ref_959(F->args_1017, &(*F->name_1015)));
f_lvalue_784((*(P1044)rt_nil_check(F->args_1017)).next, &F->bv_2827, &F->bt_2830, &F->bc_2828, &F->ro_2829);
f_check_type_232(F->bt_2830, g_ty_bool_1130, F->line_1018);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1037)rt_nil_check(F->bv_2827))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2831), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("EXCESS_LOCKS", 12))) {
F->t_1020v = g_ty_int_1129;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_959(F->args_1017, &(*F->name_1015))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("OWNER", 5))) {
F->t_1020v = g_ty_act_1139;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_owner(", 11), f_lock_ref_959(F->args_1017, &(*F->name_1015))), rt_str(")", 1));
goto ret_;
} else if (((((((((rt_str_eq((*F->name_1015), rt_str("SEND_REQUEST", 12)) || rt_str_eq((*F->name_1015), rt_str("SEND_TEST", 9))) || rt_str_eq((*F->name_1015), rt_str("SEND_COMPLETE", 13))) || rt_str_eq((*F->name_1015), rt_str("SEND_REVOKE", 11))) || rt_str_eq((*F->name_1015), rt_str("RECEIVE_REQUEST", 15))) || rt_str_eq((*F->name_1015), rt_str("RECEIVE_TEST", 12))) || rt_str_eq((*F->name_1015), rt_str("RECEIVE_COMPLETE", 16))) || rt_str_eq((*F->name_1015), rt_str("RECEIVE_REVOKE", 14))) && (F->n_2767 == ((rt_int)3LL)))) {
F->result_ = f_mailbox_low_990(&(*F->name_1015), F->args_1017, F->line_1018, &F->t_1020v);
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("FREE", 4))) {
F->pv_2832 = NULL;
F->pc_2833 = NULL;
F->pt_2835 = NULL;
f_lvalue_784(F->args_1017, &F->pv_2832, &F->pt_2835, &F->pc_2833, &F->ro_2834);
if ((((*(P1050)rt_nil_check(F->pt_2835)).kind != (((rt_int)8LL))) || F->ro_2834)) {
f_fail_23(F->line_1018, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_1109 = 1;
f_finish_ptr_490(F->pt_2835);
if ((f_suppressed_527(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; })) || f_unchecked_free_342(F->pt_2835))) {
if (f_needs_fin_351((*(P1050)rt_nil_check(F->pt_2835)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P1037)rt_nil_check(F->pv_2832))->all)), rt_str(") { ", 4)), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_773(F->pt_2835, &(((P1037)rt_nil_check(F->pv_2832))->all)); b_; }), (*(P1050)rt_nil_check(F->pt_2835)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P1037)rt_nil_check(F->pv_2832))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P1037)rt_nil_check(F->pv_2832))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_351((*(P1050)rt_nil_check(F->pt_2835)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P1037)rt_nil_check(F->pv_2832))->all)), rt_str("); if (", 7)), (((P1037)rt_nil_check(F->pv_2832))->all)), rt_str(") { ", 4)), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_773(F->pt_2835, &(((P1037)rt_nil_check(F->pv_2832))->all)); b_; }), (*(P1050)rt_nil_check(F->pt_2835)).target)), rt_str(" } rt_free((void **)&", 21)), (((P1037)rt_nil_check(F->pv_2832))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P1037)rt_nil_check(F->pv_2832))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1015), rt_str("LOW_IO", 6))) {
F->dev_2836 = rt_str_copy(f_gexpr_815(F->args_1017, g_ty_int_1129, &F->at_2766));
F->cmd_2837 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check(F->args_1017)).next, g_ty_int_1129, &F->at_2766));
if ((F->n_2767 == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_r_low_io(", 30), F->dev_2836), rt_str(", ", 2)), F->cmd_2837), rt_str(", &d_); })", 10));
goto ret_;
} else if ((!f_is_lvalue_778((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_1017)).next)).next))) {
F->v_2838 = rt_str_copy(f_gexpr_815((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_1017)).next)).next, g_ty_int_1129, &F->at_2766));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = ", 15), F->v_2838), rt_str("; rt_r_low_io(", 14)), F->dev_2836), rt_str(", ", 2)), F->cmd_2837), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2839 = NULL;
F->dc_2840 = NULL;
F->dt_2842 = NULL;
f_lvalue_784((*(P1044)rt_nil_check((*(P1044)rt_nil_check(F->args_1017)).next)).next, &F->dv_2839, &F->dt_2842, &F->dc_2840, &F->ro_2841);
f_check_type_232(F->dt_2842, g_ty_int_1129, F->line_1018);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_low_io(", 12), F->dev_2836), rt_str(", ", 2)), F->cmd_2837), rt_str(", &", 3)), (((P1037)rt_nil_check(F->dv_2839))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_1018, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_1015), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_1020) = F->t_1020v;
  RT_FPOP();
  return F->result_;
}

static P1044 f_with_library_1023(P1044 units_1022) {
  struct f_with_library_1023fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_1022 = units_1022;
F->r_2843 = NULL;
F->r_2843 = F->units_1022;
F->more_2844 = 1;
while (F->more_2844) {
F->missing_2845 = NULL;
F->missing_2845 = f_external_missing_1026(F->r_2843, F->r_2843);
F->more_2844 = 0;
if ((F->missing_2845 != NULL)) {
F->saved_2846 = g_tpos_1077;
if (f_read_library_60(&(((P1037)rt_nil_check(F->missing_2845))->all))) {
F->lib_2847 = NULL;
g_tpos_1077 = g_ntoks_before_library_1082;
F->lib_2847 = f_program_159();
g_tpos_1077 = F->saved_2846;
if ((F->lib_2847 != NULL)) {
F->t_2848 = NULL;
F->t_2848 = F->lib_2847;
while (((*(P1044)rt_nil_check(F->t_2848)).next != NULL)) {
F->t_2848 = (*(P1044)rt_nil_check(F->t_2848)).next;
}
(*(P1044)rt_nil_check(F->t_2848)).next = F->r_2843;
F->r_2843 = F->lib_2847;
F->more_2844 = 1;
}
}
}
g_ntoks_before_library_1082 = rt_add(g_ntoks_1076, ((rt_int)1LL));
}
F->result_ = F->r_2843;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1037 f_external_missing_1026(P1044 e_1024, P1044 units_1025) {
  struct f_external_missing_1026fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_1024 = e_1024;
F->units_1025 = units_1025;
F->x_2849 = NULL;
F->x_2849 = F->e_1024;
while ((F->x_2849 != NULL)) {
if ((((((*(P1044)rt_nil_check(F->x_2849)).kind == (((rt_int)48LL))) && ((*(P1044)rt_nil_check(F->x_2849)).flag >= ((rt_int)2LL))) && (!f_unit_named_1029(F->units_1025, &(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_2849)).name))->all)))) && (!f_tried_1031(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_2849)).name))->all))))) {
f_mark_tried_1033(&(((P1037)rt_nil_check((*(P1044)rt_nil_check(F->x_2849)).name))->all));
F->result_ = (*(P1044)rt_nil_check(F->x_2849)).name;
goto ret_;
}
if ((((*(P1044)rt_nil_check(F->x_2849)).a != NULL) && ((*(P1044)rt_nil_check(F->x_2849)).kind != (((rt_int)48LL))))) {
F->r_2850 = NULL;
F->r_2850 = f_external_missing_1026((*(P1044)rt_nil_check(F->x_2849)).a, F->units_1025);
if ((F->r_2850 != NULL)) {
F->result_ = F->r_2850;
goto ret_;
}
}
if ((((*(P1044)rt_nil_check(F->x_2849)).c != NULL) && ((*(P1044)rt_nil_check(F->x_2849)).kind != (((rt_int)48LL))))) {
F->r_2851 = NULL;
F->r_2851 = f_external_missing_1026((*(P1044)rt_nil_check(F->x_2849)).c, F->units_1025);
if ((F->r_2851 != NULL)) {
F->result_ = F->r_2851;
goto ret_;
}
}
F->x_2849 = (*(P1044)rt_nil_check(F->x_2849)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_unit_named_1029(P1044 units_1027, rstr *name_1028) {
  struct f_unit_named_1029fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_1027 = units_1027;
F->name_1028 = name_1028;
F->u_2852 = NULL;
F->u_2852 = F->units_1027;
while ((F->u_2852 != NULL)) {
if (rt_str_eq((((P1037)rt_nil_check((*(P1044)rt_nil_check(F->u_2852)).name))->all), (*F->name_1028))) {
F->result_ = 1;
goto ret_;
}
F->u_2852 = (*(P1044)rt_nil_check(F->u_2852)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tried_1031(rstr *name_1030) {
  struct f_tried_1031fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_1030 = name_1030;
F->result_ = f_seen_name_440(g_library_tried_1083, &(*F->name_1030));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_mark_tried_1033(rstr *name_1032) {
  struct f_mark_tried_1033fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_1032 = name_1032;
F->l_2853 = NULL;
{ R1049 *cell2854 = rt_alloc(sizeof(R1049));
(*cell2854).s = NULL;
(*cell2854).next = NULL;
F->l_2853 = cell2854;
}
(*(P1048)rt_nil_check(F->l_2853)).s = f_mk_3(&(*F->name_1032));
(*(P1048)rt_nil_check(F->l_2853)).next = g_library_tried_1083;
g_library_tried_1083 = F->l_2853;
ret_:
  RT_FPOP();
  return;
}

static void f_translate_1035(P1044 units_1034) {
  struct f_translate_1035fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_1034 = units_1034;
F->u_2855 = NULL;
F->u_2855 = F->units_1034;
while ((F->u_2855 != NULL)) {
if (f_has_pragmat_523((*(P1044)rt_nil_check(F->u_2855)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LIBRARY", 7); b_; }))) {
f_write_library_62(F->u_2855);
}
if ((((*(P1044)rt_nil_check(F->u_2855)).next == NULL) && (!f_has_pragmat_523((*(P1044)rt_nil_check(F->u_2855)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LIBRARY", 7); b_; }))))) {
{ R1072 *cell2856 = rt_alloc(sizeof(R1072));
(*cell2856).d = NULL;
(*cell2856).next = NULL;
g_caps_1103 = cell2856;
}
(*(P1071)rt_nil_check(g_caps_1103)).d = F->u_2855;
g_suppress_1118 = f_suppressing_525((*(P1044)rt_nil_check(F->u_2855)).prags);
(*(P1071)rt_nil_check(g_caps_1103)).depth = g_depth_1087;
f_declare_labels_601((*(P1044)rt_nil_check(F->u_2855)).c);
f_declare_body_445((*(P1044)rt_nil_check(F->u_2855)).c);
f_capsule_body_608((*(P1044)rt_nil_check(F->u_2855)).c);
f_await_tasks_597((*(P1044)rt_nil_check(F->u_2855)).c);
{
F->l_2857 = NULL;
F->l_2857 = F->units_1034;
while ((F->l_2857 != F->u_2855)) {
{
F->w_2858 = rt_str_copy(f_waits_of_593(F->l_2857));
if ((((rt_int)((F->w_2858).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2858);
}
}
F->l_2857 = (*(P1044)rt_nil_check(F->l_2857)).next;
}
}
f_close_fins_584(NULL);
if (g_uses_findyn_1111) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_455(F->u_2855);
f_elaborate_pending_459(f_lookup_decl_165(F->u_2855));
}
F->u_2855 = (*(P1044)rt_nil_check(F->u_2855)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_1036(void) {
  struct f_print_program_1036fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_441();
if (g_uses_free_1109) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_1091);
f_print_buffer_31(g_out_frames_1107);
f_print_buffer_31(g_out_helpers_1092);
f_print_buffer_31(g_out_protos_1093);
f_print_buffer_31(g_out_globals_1094);
f_print_buffer_31(g_out_funcs_1095);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_1108);
f_print_buffer_31(g_out_excs_1097);
f_print_buffer_31(g_out_init_1096);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R1074(R1074 *d, R1074 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R1074 cp_R1074(R1074 s) {
  R1074 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R1074(R1074 a, R1074 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R1072(R1072 *d, R1072 s) {
  d->d = s.d;
  d->next = s.next;
  d->depth = s.depth;
}
static R1072 cp_R1072(R1072 s) {
  R1072 d = s;
  d.d = s.d;
  d.next = s.next;
  d.depth = s.depth;
  return d;
}
static int eq_R1072(R1072 a, R1072 b) {
  return 1 && (a.d == b.d) && (a.next == b.next) && (a.depth == b.depth);
}
static void as_R1070(R1070 *d, R1070 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R1070 cp_R1070(R1070 s) {
  R1070 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R1070(R1070 a, R1070 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R1068(R1068 *d, R1068 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R1068 cp_R1068(R1068 s) {
  R1068 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R1068(R1068 a, R1068 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R1066(R1066 *d, R1066 s) {
  d->t = s.t;
  d->next = s.next;
}
static R1066 cp_R1066(R1066 s) {
  R1066 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R1066(R1066 a, R1066 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R1064(R1064 *d, R1064 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
  d->f = s.f;
}
static R1064 cp_R1064(R1064 s) {
  R1064 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  d.f = s.f;
  return d;
}
static int eq_R1064(R1064 a, R1064 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t) && (a.f == b.f);
}
static void as_R1062(R1062 *d, R1062 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R1062 cp_R1062(R1062 s) {
  R1062 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R1062(R1062 a, R1062 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A1060(A1060 *d, A1060 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A1060 cp_A1060(A1060 s) {
  A1060 d = s; d.p = rt_alloc(sizeof(P1054) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A1060(A1060 a, A1060 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R1057(R1057 *d, R1057 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R1057 cp_R1057(R1057 s) {
  R1057 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R1057(R1057 a, R1057 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R1055(R1055 *d, R1055 s) {
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
  d->pending = s.pending;
}
static R1055 cp_R1055(R1055 s) {
  R1055 d = s;
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
  d.pending = s.pending;
  return d;
}
static int eq_R1055(R1055 a, R1055 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home) && (a.capn == b.capn) && (a.tbinds == b.tbinds) && (a.loc == b.loc) && (a.reqs_sym == b.reqs_sym) && (a.decl_line == b.decl_line) && (a.pending == b.pending);
}
static void as_R1053(R1053 *d, R1053 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R1053 cp_R1053(R1053 s) {
  R1053 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R1053(R1053 a, R1053 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R1051(R1051 *d, R1051 s) {
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
static R1051 cp_R1051(R1051 s) {
  R1051 d = s;
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
static int eq_R1051(R1051 a, R1051 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs) && (a.assignp == b.assignp) && (a.eqp == b.eqp) && (a.ltp == b.ltp) && (a.repn == b.repn);
}
static void as_R1049(R1049 *d, R1049 s) {
  d->s = s.s;
  d->next = s.next;
}
static R1049 cp_R1049(R1049 s) {
  R1049 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R1049(R1049 a, R1049 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R1047(R1047 *d, R1047 s) {
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
static R1047 cp_R1047(R1047 s) {
  R1047 d = s;
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
static int eq_R1047(R1047 a, R1047 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R1045(R1045 *d, R1045 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->flag = s.flag;
  d->name = s.name;
  d->tag = s.tag;
  d->prags = s.prags;
  d->labels = s.labels;
  d->eline = s.eline;
  d->a = s.a;
  d->b = s.b;
  d->c = s.c;
  d->d = s.d;
  d->e = s.e;
  d->next = s.next;
}
static R1045 cp_R1045(R1045 s) {
  R1045 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.flag = s.flag;
  d.name = s.name;
  d.tag = s.tag;
  d.prags = s.prags;
  d.labels = s.labels;
  d.eline = s.eline;
  d.a = s.a;
  d.b = s.b;
  d.c = s.c;
  d.d = s.d;
  d.e = s.e;
  d.next = s.next;
  return d;
}
static int eq_R1045(R1045 a, R1045 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.eline == b.eline) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A1043(A1043 *d, A1043 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A1043 cp_A1043(A1043 s) {
  A1043 d = s; d.p = rt_alloc(sizeof(P1039) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A1043(A1043 a, A1043 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R1040(R1040 *d, R1040 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R1040 cp_R1040(R1040 s) {
  R1040 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R1040(R1040 a, R1040 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_1075);
  RT_ROOT(g_ntoks_1076);
  RT_ROOT(g_tpos_1077);
  RT_ROOT(g_src_line_1078);
  RT_ROOT(g_pending_prag_1079);
  RT_ROOT(g_src_head_1080);
  RT_ROOT(g_src_tail_1081);
  RT_ROOT(g_ntoks_before_library_1082);
  RT_ROOT(g_library_tried_1083);
  RT_ROOT(g_table_1084);
  RT_ROOT(g_genv_1085);
  RT_ROOT(g_all_insts_1086);
  RT_ROOT(g_depth_1087);
  RT_ROOT(g_scope_stack_1088);
  RT_ROOT(g_all_types_1089);
  RT_ROOT(g_serial_1090);
  RT_ROOT(g_out_types_1091);
  RT_ROOT(g_out_helpers_1092);
  RT_ROOT(g_out_protos_1093);
  RT_ROOT(g_out_globals_1094);
  RT_ROOT(g_out_funcs_1095);
  RT_ROOT(g_out_init_1096);
  RT_ROOT(g_out_excs_1097);
  RT_ROOT(g_code_1098);
  RT_ROOT(g_fields_buf_1099);
  RT_ROOT(g_in_func_1100);
  RT_ROOT(g_cur_level_1101);
  RT_ROOT(g_fctx_1102);
  RT_ROOT(g_caps_1103);
  RT_ROOT(g_cap_waits_1104);
  RT_ROOT(g_psub_1105);
  RT_ROOT(g_st_field_1106);
  RT_ROOT(g_out_frames_1107);
  RT_ROOT(g_out_roots_1108);
  RT_ROOT(g_uses_free_1109);
  RT_ROOT(g_fins_1110);
  RT_ROOT(g_uses_findyn_1111);
  RT_ROOT(g_func_sym_1112);
  RT_ROOT(g_func_rc_1113);
  RT_ROOT(g_cap_ret_1114);
  RT_ROOT(g_cap_rflag_1115);
  RT_ROOT(g_ret_frames_1116);
  RT_ROOT(g_gdepth_1117);
  RT_ROOT(g_suppress_1118);
  RT_ROOT(g_cons_ctx_1119);
  RT_ROOT(g_mark_uninit_1120);
  RT_ROOT(g_skip_chk_1121);
  RT_ROOT(g_exits_1122);
  RT_ROOT(g_gotos_1123);
  RT_ROOT(g_frames_1124);
  RT_ROOT(g_handlers_1125);
  RT_ROOT(g_cleanups_1126);
  RT_ROOT(g_trial_1127);
  RT_ROOT(g_mcopies_1128);
  RT_ROOT(g_ty_int_1129);
  RT_ROOT(g_ty_bool_1130);
  RT_ROOT(g_ty_float_1131);
  RT_ROOT(g_ty_ascii_1132);
  RT_ROOT(g_ty_string_1133);
  RT_ROOT(g_ty_void_1134);
  RT_ROOT(g_ty_file_1135);
  RT_ROOT(g_ty_nil_1136);
  RT_ROOT(g_ty_lock_1137);
  RT_ROOT(g_ty_latch_1138);
  RT_ROOT(g_ty_act_1139);
  RT_ROOT(g_file_mode_type_1140);
  RT_ROOT(g_ty_send_st_1141);
  RT_ROOT(g_ty_receive_st_1142);
  RT_ROOT(g_ty_text_file_1143);
  RT_ROOT(g_file_state_type_1144);
  RT_ROOT(g_file_disp_type_1145);
  RT_ROOT(g_file_access_type_1146);
  RT_ROOT(g_no_cons_1147);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_1075 = NULL;
g_ntoks_1076 = ((rt_int)0LL);
g_tpos_1077 = ((rt_int)1LL);
g_src_line_1078 = ((rt_int)0LL);
g_pending_prag_1079 = NULL;
g_src_head_1080 = NULL;
g_src_tail_1081 = NULL;
g_ntoks_before_library_1082 = ((rt_int)0LL);
g_library_tried_1083 = NULL;
g_table_1084 = NULL;
g_genv_1085 = NULL;
g_all_insts_1086 = NULL;
g_depth_1087 = ((rt_int)0LL);
g_scope_stack_1088 = NULL;
g_all_types_1089 = NULL;
g_serial_1090 = ((rt_int)0LL);
g_out_types_1091 = NULL;
g_out_helpers_1092 = NULL;
g_out_protos_1093 = NULL;
g_out_globals_1094 = NULL;
g_out_funcs_1095 = NULL;
g_out_init_1096 = NULL;
g_out_excs_1097 = NULL;
g_code_1098 = NULL;
g_fields_buf_1099 = NULL;
g_in_func_1100 = 0;
g_cur_level_1101 = ((rt_int)0LL);
g_fctx_1102 = NULL;
g_caps_1103 = NULL;
g_cap_waits_1104 = NULL;
g_psub_1105 = NULL;
g_st_field_1106 = NULL;
g_out_frames_1107 = NULL;
g_out_roots_1108 = NULL;
g_uses_free_1109 = 0;
g_fins_1110 = NULL;
g_uses_findyn_1111 = 0;
g_func_sym_1112 = NULL;
g_func_rc_1113 = NULL;
g_cap_ret_1114 = NULL;
g_cap_rflag_1115 = NULL;
g_ret_frames_1116 = ((rt_int)0LL);
g_gdepth_1117 = ((rt_int)0LL);
g_suppress_1118 = NULL;
g_cons_ctx_1119 = NULL;
g_mark_uninit_1120 = 0;
g_skip_chk_1121 = 0;
g_exits_1122 = NULL;
g_gotos_1123 = NULL;
g_frames_1124 = ((rt_int)0LL);
g_handlers_1125 = NULL;
g_cleanups_1126 = NULL;
g_trial_1127 = ((rt_int)0LL);
g_mcopies_1128 = NULL;
g_ty_int_1129 = NULL;
g_ty_bool_1130 = NULL;
g_ty_float_1131 = NULL;
g_ty_ascii_1132 = NULL;
g_ty_string_1133 = NULL;
g_ty_void_1134 = NULL;
g_ty_file_1135 = NULL;
g_ty_nil_1136 = NULL;
g_ty_lock_1137 = NULL;
g_ty_latch_1138 = NULL;
g_ty_act_1139 = NULL;
g_file_mode_type_1140 = NULL;
g_ty_send_st_1141 = NULL;
g_ty_receive_st_1142 = NULL;
g_ty_text_file_1143 = NULL;
g_file_state_type_1144 = NULL;
g_file_disp_type_1145 = NULL;
g_file_access_type_1146 = NULL;
g_no_cons_1147 = NULL;
{ P1041 cell2859 = rt_alloc(sizeof *cell2859);
rt_int pv2860 = ((rt_int)1000000LL);
cell2859->p_n = pv2860;
cell2859->all.lo = ((rt_int)1LL); cell2859->all.hi = pv2860;
cell2859->all.lo2 = cell2859->all.hi2 = 1;
cell2859->all.p = rt_alloc(sizeof(P1039) * (size_t)(RT_CNT(cell2859->all)) + 1);
for (rt_int i2861 = 0; i2861 < (RT_CNT(cell2859->all)); i2861++) {
cell2859->all.p[i2861] = NULL;
}
g_toks_1075 = cell2859;
}
{ P1058 cell2862 = rt_alloc(sizeof *cell2862);
rt_int pv2863 = (((rt_int)4093LL));
cell2862->p_n = pv2863;
cell2862->all.lo = ((rt_int)0LL); cell2862->all.hi = pv2863;
cell2862->all.lo2 = cell2862->all.hi2 = 1;
cell2862->all.p = rt_alloc(sizeof(P1054) * (size_t)(RT_CNT(cell2862->all)) + 1);
for (rt_int i2864 = 0; i2864 < (RT_CNT(cell2862->all)); i2864++) {
cell2862->all.p[i2864] = NULL;
}
g_table_1084 = cell2862;
}
g_out_types_1091 = f_new_buffer_24();
g_out_helpers_1092 = f_new_buffer_24();
g_out_protos_1093 = f_new_buffer_24();
g_out_globals_1094 = f_new_buffer_24();
g_out_funcs_1095 = f_new_buffer_24();
g_out_init_1096 = f_new_buffer_24();
g_out_excs_1097 = f_new_buffer_24();
g_out_frames_1107 = f_new_buffer_24();
g_out_roots_1108 = f_new_buffer_24();
g_code_1098 = g_out_init_1096;
g_no_cons_1147 = f_new_cons_184();
g_ty_int_1129 = f_new_typ_183((((rt_int)1LL)));
g_ty_bool_1130 = f_new_typ_183((((rt_int)2LL)));
g_ty_float_1131 = f_new_typ_183((((rt_int)3LL)));
g_ty_string_1133 = f_new_typ_183((((rt_int)5LL)));
g_ty_void_1134 = f_new_typ_183((((rt_int)9LL)));
g_ty_file_1135 = f_new_typ_183((((rt_int)10LL)));
g_ty_nil_1136 = f_new_typ_183((((rt_int)11LL)));
g_ty_lock_1137 = f_new_typ_183((((rt_int)13LL)));
g_ty_latch_1138 = f_new_typ_183((((rt_int)13LL)));
g_ty_act_1139 = f_new_typ_183((((rt_int)14LL)));
{ rt_frame xf2865;
if (RT_TRY(xf2865)) {
f_init_ascii_259();
f_read_source_58();
g_ntoks_before_library_1082 = rt_add(g_ntoks_1076, ((rt_int)1LL));
f_translate_1035(f_with_library_1023(f_program_159()));
f_print_program_1036();
RT_POP(xf2865);
} else {
RT_POP(xf2865);
int x2866 = rt_xcur;
if (0 || x2866 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2866);
}
}
}
  rt_main_done();
  return 0;
}
