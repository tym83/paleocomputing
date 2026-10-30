#include "paleo.h"
#include <math.h>
typedef struct Pc1028 *P1027;
typedef struct R1030 R1030;
typedef struct R1030 *P1029;
struct R1030 {  rt_int kind; rt_int line; rt_int ival; P1027 s; P1027 prags;  };
typedef struct Pc1032 *P1031;
typedef struct A1033 A1033;
struct A1033 { rt_int lo, hi, lo2, hi2; P1029 *p; };
typedef struct R1035 R1035;
typedef struct R1035 *P1034;
struct R1035 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P1027 name; P1027 tag; P1027 prags; P1034 labels; rt_int eline; P1034 a; P1034 b; P1034 c; P1034 d; P1034 e; P1034 next;  };
typedef struct R1037 R1037;
typedef struct R1037 *P1036;
typedef struct R1039 R1039;
typedef struct R1039 *P1038;
struct R1039 {  P1027 s; P1038 next;  };
struct R1037 {  P1027 lo; P1027 hi; P1027 lo2; P1027 hi2; P1027 slen; rt_int mlo; rt_int mhi; int hasm; P1034 args; int dyn; rt_int lvl; P1027 prec; P1038 bnds;  };
typedef struct R1041 R1041;
typedef struct R1041 *P1040;
typedef struct R1043 R1043;
typedef struct R1043 *P1042;
struct R1043 {  P1027 name; P1040 t; P1036 c; P1034 st; P1042 next;  };
typedef struct R1045 R1045;
typedef struct R1045 *P1044;
typedef struct R1047 R1047;
typedef struct R1047 *P1046;
struct R1047 {  P1027 name; rt_int mode; P1040 t; P1036 c; P1027 cfield; P1046 next;  };
typedef struct Pc1049 *P1048;
typedef struct A1050 A1050;
struct A1050 { rt_int lo, hi, lo2, hi2; P1044 *p; };
typedef struct R1052 R1052;
typedef struct R1052 *P1051;
struct R1052 {  rt_int depth; P1034 imps; int all_imp; P1051 next;  };
typedef struct R1054 R1054;
typedef struct R1054 *P1053;
struct R1054 {  rt_int kind; rt_int i; P1027 s; P1040 t; double f;  };
struct R1045 {  rt_int kind; P1027 name; P1040 t; P1036 c; P1027 access; P1027 cname; int ro_flag; rt_int mvalue; int hasmv; P1034 st; P1034 decl; P1046 params; P1040 result; rt_int depth; rt_int level; int byref; P1044 members; P1044 mnext; P1034 binds; P1044 insts; P1048 env; P1044 chain; P1044 stack; P1044 owner; P1051 gctx; P1053 mv; P1038 reqs; int reqdone; P1034 home; P1034 capn; P1044 tbinds; P1027 loc; P1044 reqs_sym; rt_int decl_line; int pending;  };
typedef struct R1056 R1056;
typedef struct R1056 *P1055;
struct R1056 {  P1040 t; P1055 next;  };
struct R1041 {  rt_int kind; P1027 name; P1034 lits; P1040 elem; P1040 idx; P1040 idx2; P1036 elemcons; P1034 elemst; P1040 under; P1034 tparams; P1034 ocap; P1042 fields; P1040 target; P1034 decl; P1027 cname; int forward; int defined; int helpers; P1044 initp; P1044 finalp; P1044 tpsyms; P1044 gen; P1044 gbinds; P1040 next; rt_int ndim; P1055 idxs; P1044 assignp; P1044 eqp; P1044 ltp; P1034 repn;  };
typedef struct R1058 R1058;
typedef struct R1058 *P1057;
struct R1058 {  P1038 head; P1038 tail;  };
typedef struct R1060 R1060;
typedef struct R1060 *P1059;
struct R1060 {  P1027 match; P1027 label; rt_int depth; P1059 next;  };
typedef struct R1062 R1062;
typedef struct R1062 *P1061;
struct R1062 {  P1034 d; P1061 next; rt_int depth;  };
typedef struct R1064 R1064;
typedef struct R1064 *P1063;
struct R1064 {  P1034 d; P1027 w; P1063 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P1027 result_;
 P1027 t_1138;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_1141;
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
 rstr r_1142;
 rt_int i_1143;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_1147;
 rstr w_1148;
 rt_int i_1149;
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
 P1057 result_;
 P1057 b_1153;
};
struct f_put_27fr { int dummy;
 P1057 b_25;
 rstr *s_26;
 P1038 l_1155;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P1057 b_30;
 P1038 l_1157;
};
struct f_splice_34fr { int dummy;
 P1057 a_32;
 P1057 b_33;
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
 P1029 t_1159;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_1161;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_1162;
 rt_int k_1163;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_1167;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_1168;
 P1027 r_1169;
 int more_1170;
 rt_int k_1171;
 int go_1172;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_1173;
 rt_int k_1174;
 rstr p_1175;
 int ok_1176;
 int known_1177;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_1178;
 rt_int j_1179;
 rt_int n_1180;
 int c_1181;
 rstr w_1182;
 rt_int k_1183;
 rstr w_1187;
 rt_int k_1188;
 rstr two_1192;
};
struct f_read_source_58fr { int dummy;
 rstr line_1193;
 P1038 l_1194;
};
struct f_read_library_60fr { int dummy;
 rstr *name_59;
 int result_;
 rt_r_file * f_1196;
 int found_1197;
 rstr line_1200;
};
struct f_write_library_62fr { int dummy;
 P1034 u_61;
 rt_r_file * f_1201;
 P1038 l_1202;
 rt_int n_1203;
};
struct f_nn_65fr { int dummy;
 rt_int kind_63;
 rt_int line_64;
 P1034 result_;
 P1034 x_1204;
};
struct f_append_69fr { int dummy;
 P1034 *head_66;
 P1034 *tail_67;
 P1034 x_68;
};
struct f_list_len_71fr { int dummy;
 P1034 l_70;
 rt_int result_;
 rt_int n_1206;
 P1034 p_1207;
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
 P1027 result_;
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
 P1027 result_;
};
struct f_name_node_94fr { int dummy;
 P1034 result_;
 P1034 x_1208;
};
struct f_id_list_95fr { int dummy;
 P1034 result_;
 P1034 head_1209;
 P1034 tail_1210;
};
struct f_p_subtype_96fr { int dummy;
 P1034 result_;
 rt_int line_1211;
 P1034 x_1212;
 rstr w_1213;
 P1034 head_1214;
 P1034 tail_1215;
 P1034 head_1216;
 P1034 tail_1217;
 int more_1218;
 P1034 names_1219;
 P1034 st_1220;
 P1034 cmp_1221;
 P1034 head_1222;
 P1034 tail_1223;
 int more_1224;
 P1034 lit_1225;
};
struct f_constraint_list_97fr { int dummy;
 P1034 result_;
 P1034 head_1226;
 P1034 tail_1227;
 int more_1228;
 rt_int line_1229;
 P1034 lo_1230;
 P1034 r_1231;
};
struct f_actual_params_98fr { int dummy;
 P1034 result_;
 P1034 head_1232;
 P1034 tail_1233;
};
struct f_is_type_word_100fr { int dummy;
 rstr *w_99;
 int result_;
};
struct f_actual_tt_101fr { int dummy;
 P1034 result_;
 P1034 head_1234;
 P1034 tail_1235;
 int more_1236;
};
struct f_binop_106fr { int dummy;
 P1027 op_102;
 P1034 l_103;
 P1034 r_104;
 rt_int line_105;
 P1034 result_;
 P1034 x_1237;
};
struct f_expr_107fr { int dummy;
 P1034 result_;
 P1034 l_1238;
 P1027 op_1239;
 rt_int line_1240;
};
struct f_expr_and_108fr { int dummy;
 P1034 result_;
 P1034 l_1241;
 rt_int line_1242;
};
struct f_expr_not_109fr { int dummy;
 P1034 result_;
 P1034 x_1243;
};
struct f_is_rel_111fr { int dummy;
 rstr *s_110;
 int result_;
};
struct f_expr_rel_112fr { int dummy;
 P1034 result_;
 P1034 l_1244;
 P1027 op_1245;
 rt_int line_1246;
};
struct f_expr_add_113fr { int dummy;
 P1034 result_;
 P1034 l_1247;
 P1027 op_1248;
 rt_int line_1249;
};
struct f_expr_mul_114fr { int dummy;
 P1034 result_;
 P1034 l_1250;
 P1027 op_1251;
 rt_int line_1252;
};
struct f_expr_pow_115fr { int dummy;
 P1034 result_;
 P1034 l_1253;
 rt_int line_1254;
};
struct f_expr_prefix_116fr { int dummy;
 P1034 result_;
 P1034 x_1255;
};
struct f_postfix_117fr { int dummy;
 P1034 result_;
 P1034 p_1256;
 rt_int line_1257;
 P1034 x_1258;
 P1034 head_1259;
 P1034 tail_1260;
 int more_1261;
 P1034 lo_1262;
 P1034 r_1263;
 P1034 x_1264;
 P1034 x_1265;
 P1034 x_1266;
};
struct f_primary_118fr { int dummy;
 P1034 result_;
 rt_int line_1267;
 P1034 x_1268;
 rt_int k_1269;
 rstr w_1270;
 P1034 head_1271;
 P1034 tail_1272;
 int more_1273;
};
struct f_constructor_item_119fr { int dummy;
 P1034 result_;
 rt_int line_1274;
 P1034 it_1275;
 P1034 first_1276;
 P1034 keys_1277;
 P1034 ktail_1278;
 P1034 lab_1279;
 rt_int save_1280;
 P1034 more_1281;
 P1034 tail2_1282;
 int ok_1283;
 int go_1284;
 P1034 l2_1285;
};
struct f_at_body_end_120fr { int dummy;
 int result_;
};
struct f_body_121fr { int dummy;
 P1034 result_;
 P1034 head_1286;
 P1034 tail_1287;
 int stmts_1288;
 P1034 after_1289;
 P1034 x_1290;
};
struct f_body_element_122fr { int dummy;
 P1034 result_;
 P1034 x_1291;
 P1027 pr_1292;
 P1034 p_1293;
};
struct f_declaration_123fr { int dummy;
 P1034 result_;
 rt_int line_1294;
 P1034 head_1295;
 P1034 tail_1296;
 P1034 names_1297;
 P1034 x_1298;
};
struct f_object_decl_124fr { int dummy;
 P1034 result_;
 rt_int line_1299;
 int is_var_1300;
 P1034 names_1301;
 P1034 st_1302;
 P1034 init_1303;
 P1034 loc_1304;
 rt_int loc_kind_1305;
 P1034 head_1306;
 P1034 tail_1307;
 P1034 x_1308;
};
struct f_abbrev_decl_125fr { int dummy;
 P1034 result_;
 P1034 x_1309;
};
struct f_rep_spec_126fr { int dummy;
 P1034 result_;
};
struct f_rep_items_127fr { int dummy;
 P1034 result_;
 P1034 head_1310;
 P1034 tail_1311;
 int more_1312;
};
struct f_rep_word_129fr { int dummy;
 rt_int k_128;
 int result_;
 rstr w_1313;
};
struct f_rep_item_130fr { int dummy;
 P1034 result_;
 P1034 x_1314;
 P1034 head_1315;
 P1034 tail_1316;
 int more_1317;
 P1034 names_1318;
 P1034 items_1319;
 P1034 cmp_1320;
 P1034 head_1321;
 P1034 tail_1322;
 P1034 head_1323;
 P1034 tail_1324;
 int dummy_1325;
};
struct f_type_decl_131fr { int dummy;
 P1034 result_;
 rt_int line_1326;
 P1027 name_1327;
 P1034 params_1328;
 P1034 x_1329;
 P1034 tts_1330;
};
struct f_mode_of_133fr { int dummy;
 rstr *w_132;
 rt_int result_;
};
struct f_formal_params_134fr { int dummy;
 P1034 result_;
 P1034 head_1331;
 P1034 tail_1332;
 int more_1333;
 rt_int mode_1334;
 P1034 names_1335;
 P1034 ntail_1336;
 P1034 st_1337;
 P1034 p_1338;
};
struct f_imports_list_136fr { int dummy;
 P1034 owner_135;
 int result_;
 P1034 head_1339;
 P1034 tail_1340;
 int more_1341;
 int ro_1342;
 P1034 x_1343;
};
struct f_is_definable_138fr { int dummy;
 rstr *w_137;
 int result_;
};
struct f_definable_name_139fr { int dummy;
 P1027 result_;
 P1027 r_1344;
};
struct f_subprogram_decl_140fr { int dummy;
 P1034 result_;
 rt_int line_1345;
 P1034 x_1346;
 int is_abn_1347;
 int is_func_1348;
 int dummy_1349;
};
struct f_capsule_decl_141fr { int dummy;
 P1034 result_;
 P1034 x_1350;
 int dummy_1351;
 P1034 head_1352;
 P1034 tail_1353;
 int more_1354;
 P1034 n_1355;
};
struct f_formal_tt_142fr { int dummy;
 P1034 result_;
 P1034 head_1356;
 P1034 tail_1357;
 int more_1358;
};
struct f_generic_decl_143fr { int dummy;
 P1034 result_;
 P1034 x_1359;
 P1034 head_1360;
 P1034 tail_1361;
 int more_1362;
 P1034 names_1363;
 rt_int kind_1364;
 P1034 st_1365;
 P1034 items_1366;
 P1034 p_1367;
 P1034 nhead_1368;
 P1034 ntail_1369;
 P1034 it_1370;
};
struct f_type_list_144fr { int dummy;
 P1034 result_;
 P1034 head_1371;
 P1034 tail_1372;
 int more_1373;
 P1034 n_1374;
};
struct f_task_decl_145fr { int dummy;
 P1034 result_;
 P1034 x_1375;
 int dummy_1376;
};
struct f_expose_decl_146fr { int dummy;
 P1034 result_;
 P1034 x_1377;
 P1034 head_1378;
 P1034 tail_1379;
 int more_1380;
 P1034 n_1381;
 P1034 head_1382;
 P1034 tail_1383;
 int more_1384;
 P1034 n_1385;
 P1034 tgt_1386;
};
struct f_is_compound_kw_148fr { int dummy;
 rstr *w_147;
 int result_;
};
struct f_statement_149fr { int dummy;
 P1034 result_;
 P1034 labels_1387;
 P1034 ltail_1388;
 P1027 match_1389;
 P1034 s_1390;
};
struct f_unlabeled_statement_150fr { int dummy;
 P1034 result_;
 rt_int line_1391;
 P1034 x_1392;
 P1034 head_1393;
 P1034 tail_1394;
 P1034 invs_1395;
 P1034 itail_1396;
 int more_1397;
 P1034 target_1398;
};
struct f_arm_154fr { int dummy;
 P1034 cond_151;
 P1034 b_152;
 rt_int line_153;
 P1034 result_;
 P1034 x_1399;
};
struct f_if_stmt_155fr { int dummy;
 P1034 result_;
 P1034 x_1400;
 P1034 head_1401;
 P1034 tail_1402;
 P1034 cond_1403;
 int go_1404;
};
struct f_case_stmt_156fr { int dummy;
 P1034 result_;
 P1034 x_1405;
 P1034 head_1406;
 P1034 tail_1407;
 P1034 labs_1408;
 P1034 ltail_1409;
 int more_1410;
 P1034 l_1411;
};
struct f_repeat_stmt_157fr { int dummy;
 P1034 result_;
 P1034 x_1412;
};
struct f_guard_stmt_158fr { int dummy;
 P1034 result_;
 P1034 x_1413;
 P1034 head_1414;
 P1034 tail_1415;
 P1034 h_1416;
};
struct f_program_159fr { int dummy;
 P1034 result_;
 P1034 head_1417;
 P1034 tail_1418;
 P1027 pr_1419;
 P1034 u_1420;
};
struct f_hash_161fr { int dummy;
 rstr *s_160;
 rt_int result_;
 rt_int h_1421;
 rt_int i_1422;
};
struct f_lookup_163fr { int dummy;
 rstr *name_162;
 P1044 result_;
 P1044 y_1426;
};
struct f_lookup_decl_165fr { int dummy;
 P1034 d_164;
 P1044 result_;
 P1044 y_1427;
};
struct f_define_168fr { int dummy;
 P1044 y_166;
 rt_int line_167;
 rt_int h_1428;
 P1044 z_1429;
};
struct f_overloadable_170fr { int dummy;
 P1044 y_169;
 int result_;
};
struct f_same_tt_173fr { int dummy;
 P1034 a_171;
 P1034 b_172;
 int result_;
 P1034 x_1430;
 P1034 y_1431;
};
struct f_same_signature_176fr { int dummy;
 P1046 a_174;
 P1046 b_175;
 int result_;
 P1046 x_1432;
 P1046 y_1433;
};
struct f_open_scope_177fr { int dummy;
};
struct f_close_scope_178fr { int dummy;
};
struct f_new_sym_181fr { int dummy;
 rt_int kind_179;
 P1027 name_180;
 P1044 result_;
 P1044 y_1434;
};
struct f_new_typ_183fr { int dummy;
 rt_int kind_182;
 P1040 result_;
 P1040 t_1436;
};
struct f_new_cons_184fr { int dummy;
 P1036 result_;
 P1036 c_1438;
};
struct f_scalar_kind_186fr { int dummy;
 P1040 t_185;
 int result_;
};
struct f_bound_ctype_188fr { int dummy;
 P1040 t_187;
 rstr result_;
};
struct f_cbound_191fr { int dummy;
 P1036 c_189;
 rstr *b_190;
 rstr result_;
 P1027 p_1440;
 rt_int i_1441;
};
struct f_clo_193fr { int dummy;
 P1036 c_192;
 rstr result_;
};
struct f_chi_195fr { int dummy;
 P1036 c_194;
 rstr result_;
};
struct f_sub_lo_198fr { int dummy;
 P1040 t_196;
 P1036 c_197;
 rstr result_;
};
struct f_sub_hi_201fr { int dummy;
 P1040 t_199;
 P1036 c_200;
 rstr result_;
};
struct f_raw_storage_204fr { int dummy;
 rstr *name_202;
 rstr *ct_203;
 rstr result_;
 rstr g_1445;
 rstr f_1446;
};
struct f_copy_cons_206fr { int dummy;
 P1036 c_205;
 P1036 result_;
 P1036 r_1447;
};
struct f_freeze_209fr { int dummy;
 P1036 c_207;
 P1040 t_208;
 P1036 result_;
 P1036 r_1449;
 P1027 saved_field_1450;
 rstr ct_1451;
 rstr la_1452;
 rstr lf_1453;
 rstr ha_1454;
 rstr hf_1455;
};
struct f_checked_213fr { int dummy;
 P1040 t_210;
 P1036 c_211;
 rstr *v_212;
 rstr result_;
};
struct f_same_lits_216fr { int dummy;
 P1034 a_214;
 P1034 b_215;
 int result_;
 P1034 x_1456;
 P1034 y_1457;
};
struct f_str_elem_218fr { int dummy;
 P1040 t_217;
 P1040 result_;
};
struct f_same_221fr { int dummy;
 P1040 a_219;
 P1040 b_220;
 int result_;
 P1055 x_1458;
 P1055 y_1459;
 P1042 f_1460;
 P1042 g_1461;
};
struct f_base_of_223fr { int dummy;
 P1040 t_222;
 P1040 result_;
};
struct f_base_cons_226fr { int dummy;
 P1040 t_224;
 P1036 c_225;
 P1036 result_;
};
struct f_kind_name_228fr { int dummy;
 P1040 t_227;
 rstr result_;
};
struct f_check_type_232fr { int dummy;
 P1040 got_229;
 P1040 want_230;
 rt_int line_231;
};
struct f_ctype_234fr { int dummy;
 P1040 t_233;
 rstr result_;
};
struct f_struct_body_236fr { int dummy;
 P1040 t_235;
 rstr result_;
};
struct f_field_decls_238fr { int dummy;
 P1040 t_237;
 rstr result_;
 P1042 f_1464;
 P1027 s_1465;
};
struct f_declare_ctype_240fr { int dummy;
 P1040 t_239;
 P1040 u_1466;
 P1034 p_1467;
 P1027 fs_1468;
 rstr sn_1469;
 P1036 pc_1470;
 P1040 target_1471;
 P1034 p_1472;
 P1027 fs_1473;
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
 P1040 t_245;
 rstr result_;
 P1027 r_1474;
 rt_int k_1475;
};
struct f_acnt_249fr { int dummy;
 P1040 t_247;
 rstr *base_248;
 rstr result_;
 P1027 r_1479;
 rt_int k_1480;
};
struct f_cons_lo_252fr { int dummy;
 P1036 c_250;
 rt_int k_251;
 P1027 result_;
 P1038 l_1484;
 rt_int i_1485;
};
struct f_cons_hi_255fr { int dummy;
 P1036 c_253;
 rt_int k_254;
 P1027 result_;
 P1038 l_1489;
 rt_int i_1490;
};
struct f_idx_type_258fr { int dummy;
 P1040 t_256;
 rt_int k_257;
 P1040 result_;
 P1055 l_1494;
 rt_int i_1495;
};
struct f_init_ascii_259fr { int dummy;
 P1034 head_1499;
 P1034 tail_1500;
 rt_int start_1501;
 rt_int i_1502;
 P1034 lit_1506;
 P1034 h2_1507;
 P1034 t2_1508;
 P1034 l1_1509;
 P1034 l2_1510;
 P1034 l3_1511;
};
struct f_enum2_262fr { int dummy;
 rstr *a_260;
 rstr *b_261;
 P1040 result_;
 P1040 t_1512;
 P1034 l1_1513;
 P1034 l2_1514;
};
struct f_lit_index_265fr { int dummy;
 P1034 lits_263;
 rstr *name_264;
 rt_int result_;
 rt_int i_1515;
 P1034 l_1516;
};
struct f_resolve_subtype_268fr { int dummy;
 P1034 st_266;
 P1036 *c_267;
 P1036 c_267v;
 P1040 result_;
 P1040 t_1517;
 int ok_1518;
 P1040 dummy_1519;
 P1040 et_1521;
 P1036 ec_1522;
 P1040 et_1523;
 P1034 ix_1524;
 rt_int k_1525;
 P1055 tail_1526;
 P1038 btail_1527;
 P1036 ic_1528;
 P1040 it_1529;
 P1027 lo_1530;
 P1027 hi_1531;
 P1055 tl_1532;
 P1038 l1_1534;
 P1038 l2_1535;
 P1036 ec_1538;
 P1034 comp_1539;
 P1042 tail_1540;
 P1036 cc_1541;
 P1042 f_1542;
 P1034 lits_1544;
 P1034 ltail_1545;
 P1042 f_1546;
 P1034 l_1547;
 P1036 ec_1548;
 P1034 gt_1549;
 P1036 ec_1550;
 P1027 base_1551;
};
struct f_float_lit_270fr { int dummy;
 P1034 e_269;
 int result_;
};
struct f_tag_constraint_274fr { int dummy;
 P1040 t_271;
 P1034 e_272;
 P1036 c_273;
 P1040 dummy_1552;
};
struct f_named_subtype_277fr { int dummy;
 P1034 st_275;
 P1036 *c_276;
 P1036 c_276v;
 P1040 result_;
 P1040 t_1553;
 P1044 y_1554;
 rstr name_1555;
 P1044 binds_1556;
 P1048 saved_env_1557;
 rt_int saved_gdepth_1558;
 P1044 nb_1559;
};
struct f_invoke_abbrev_281fr { int dummy;
 P1044 y_278;
 P1034 st_279;
 P1036 *c_280;
 P1036 c_280v;
 P1040 result_;
 P1034 p_1560;
 P1034 a_1561;
 P1040 t_1562;
 P1044 z_1563;
 P1036 pc_1564;
 P1040 at_1565;
 int ok_1566;
};
struct f_apply_constraint_286fr { int dummy;
 P1040 t_282;
 P1034 args_283;
 P1036 c_284;
 rt_int line_285;
 P1040 dummy_1567;
 int ok_1568;
};
struct f_value_subtype_290fr { int dummy;
 P1034 e_287;
 P1036 *c_288;
 P1036 c_288v;
 P1027 *base_289;
 P1027 base_289v;
 P1040 result_;
 P1040 t_1569;
 P1036 c0_1570;
 int ro_1571;
 rt_int k_1572;
 rstr lo_1576;
 rstr hi_1577;
 P1038 l1_1578;
 P1038 l2_1579;
 P1034 p_1582;
 P1034 head_1583;
 P1034 tail_1584;
 P1034 sel_1585;
};
struct f_reverse_pairs_292fr { int dummy;
 P1038 l_291;
 P1038 result_;
 P1038 r_1586;
 P1038 p_1587;
 P1038 a_1588;
 P1038 b_1589;
};
struct f_inquiry_295fr { int dummy;
 P1034 st_293;
 P1036 *c_294;
 P1036 c_294v;
 P1040 result_;
 P1027 base_1590;
 P1040 t_1591;
 rstr name_1592;
 P1034 sub_1593;
 P1036 c2_1594;
 rt_int k_1595;
 int ok_1596;
 P1036 ac_1597;
};
struct f_as_subtype_297fr { int dummy;
 P1034 e_296;
 P1034 result_;
 P1034 st_1598;
 rstr name_1599;
 P1044 y_1600;
};
struct f_tt_subtype_302fr { int dummy;
 P1027 name_298;
 P1034 tt_299;
 P1034 args_300;
 rt_int line_301;
 P1034 result_;
 P1034 st_1601;
};
struct f_type_name_304fr { int dummy;
 rstr *name_303;
 int result_;
 P1044 y_1602;
};
struct f_empty_set_306fr { int dummy;
 P1040 t_305;
 rstr result_;
};
struct f_sparse_set_308fr { int dummy;
 P1040 t_307;
 int result_;
};
struct f_set_fn_311fr { int dummy;
 P1040 t_309;
 rstr *op_310;
 rstr result_;
};
struct f_opened_313fr { int dummy;
 P1040 t_312;
 int result_;
 P1061 c_1603;
};
struct f_replace_all_317fr { int dummy;
 rstr *s_314;
 rstr *pat_315;
 rstr *r_316;
 rstr result_;
 rt_int i_1604;
};
struct f_subst_319fr { int dummy;
 rstr *s_318;
 rstr result_;
 P1038 l_1605;
 P1027 r_1606;
};
struct f_new_type_323fr { int dummy;
 P1044 y_320;
 P1034 st_321;
 P1036 *c_322;
 P1036 c_322v;
 P1040 result_;
 P1034 d_1607;
 P1034 p_1608;
 P1036 uc_1609;
 P1044 z_1610;
 P1036 zc_1611;
};
struct f_needed_bits_326fr { int dummy;
 P1040 t_324;
 P1036 c_325;
 rt_int result_;
 rt_int n_1612;
 rt_int v_1613;
};
struct f_has_digits_only_328fr { int dummy;
 rstr *s_327;
 int result_;
 rt_int i_1614;
};
struct f_built_in_only_330fr { int dummy;
 P1040 t_329;
 int result_;
 P1042 f_1618;
};
struct f_check_rep_337fr { int dummy;
 P1034 items_331;
 P1040 t_332;
 P1036 c_333;
 int top_334;
 int indirect_335;
 P1034 d_336;
 P1034 it_1619;
 int ok_1620;
 P1040 at_1621;
 rstr w_1622;
 rt_int v_1623;
 rstr dummy_1624;
 rt_int m_1625;
 int ok2_1626;
 rt_int r_1627;
 rt_int o_1628;
 P1034 comp_1629;
 P1042 f_1630;
 P1034 k_1631;
 P1034 a_1632;
};
struct f_formal_named_340fr { int dummy;
 P1034 d_338;
 rstr *name_339;
 int result_;
 P1034 p_1633;
};
struct f_unchecked_free_342fr { int dummy;
 P1040 t_341;
 int result_;
 P1034 it_1634;
};
struct f_init_storage_346fr { int dummy;
 rstr *lval_343;
 P1040 t_344;
 P1036 c_345;
};
struct f_init_call_349fr { int dummy;
 P1044 y_347;
 rstr *lval_348;
 rstr result_;
 P1027 link_1635;
 rt_int i_1636;
};
struct f_needs_fin_351fr { int dummy;
 P1040 t_350;
 int result_;
 P1042 f_1640;
};
struct f_fin_code_354fr { int dummy;
 rstr *lval_352;
 P1040 t_353;
 rstr result_;
 P1027 r_1641;
 rstr i_1642;
 P1042 f_1643;
 P1042 f_1644;
 rt_int i_1645;
};
struct f_tparam_type_357fr { int dummy;
 P1040 t_355;
 rstr *name_356;
 P1040 result_;
 P1044 z_1646;
};
struct f_make_storage_361fr { int dummy;
 rstr *lval_358;
 P1040 t_359;
 P1036 c_360;
 P1034 p_1647;
 P1034 a_1648;
 P1036 uc_1649;
 P1040 ut_1650;
 P1040 at_1651;
 P1040 pt_1652;
 rstr v_1653;
 P1038 saved_1654;
 P1038 l1_1655;
 P1038 l2_1656;
 P1040 at_1659;
 rstr acc_1660;
 rstr use_1661;
 rt_int k_1662;
 rstr i_1666;
 P1042 f_1667;
 P1042 f_1668;
 rt_int i_1669;
};
struct f_flat_363fr { int dummy;
 P1040 t_362;
 int result_;
 P1042 f_1673;
};
struct f_uninit_value_365fr { int dummy;
 P1040 t_364;
 rstr result_;
};
struct f_init_chk_368fr { int dummy;
 P1040 t_366;
 rstr *v_367;
 rstr result_;
 P1040 b_1674;
};
struct f_manifest_371fr { int dummy;
 P1034 e_369;
 int *ok_370;
 int ok_370v;
 rt_int result_;
 P1053 v_1675;
};
struct f_mk_mval_374fr { int dummy;
 rt_int kind_372;
 rt_int i_373;
 P1053 result_;
 P1053 v_1676;
};
struct f_ipow_377fr { int dummy;
 rt_int a_375;
 rt_int b_376;
 rt_int result_;
 rt_int r_1678;
 rt_int i_1679;
};
struct f_meval_380fr { int dummy;
 P1034 e_378;
 int *ok_379;
 int ok_379v;
 P1053 result_;
 P1053 a_1683;
 P1053 b_1684;
 int ok2_1685;
 P1027 op_1686;
 P1044 y_1689;
 P1053 r_1690;
};
struct f_float_op_385fr { int dummy;
 rstr *op_381;
 P1053 a_382;
 P1053 b_383;
 int *ok_384;
 int ok_384v;
 P1053 result_;
 P1053 r_1691;
};
struct f_bool_text_387fr { int dummy;
 int b_386;
 rstr result_;
};
struct f_bool_i_389fr { int dummy;
 int b_388;
 rt_int result_;
};
struct f_mstr_391fr { int dummy;
 P1053 v_390;
 rstr result_;
};
struct f_ascii_char_393fr { int dummy;
 rt_int i_392;
 int result_;
 rstr printable_1694;
};
struct f_user_defined_395fr { int dummy;
 rstr *op_394;
 int result_;
 P1044 y_1695;
};
struct f_mcopy_397fr { int dummy;
 P1040 t_396;
 rstr result_;
 rstr ct_1696;
 rstr name_1697;
 P1038 l_1698;
};
struct f_composite_399fr { int dummy;
 P1040 t_398;
 int result_;
};
struct f_user_call2_405fr { int dummy;
 P1044 y_400;
 rstr *a_401;
 int lv_a_402;
 rstr *b_403;
 int lv_b_404;
 rstr result_;
 P1027 args_1700;
 rt_int i_1701;
};
struct f_user_arg_409fr { int dummy;
 P1046 pm_406;
 rstr *v_407;
 int lv_408;
 rstr result_;
 rstr ct_1705;
};
struct f_top_level_411fr { int dummy;
 P1044 y_410;
 int result_;
};
struct f_assign_code_416fr { int dummy;
 rstr *lval_412;
 P1040 t_413;
 rstr *v_414;
 P1036 c_415;
 rstr result_;
};
struct f_copy_code_419fr { int dummy;
 P1040 t_417;
 rstr *v_418;
 rstr result_;
};
struct f_eq_code_423fr { int dummy;
 P1040 t_420;
 rstr *a_421;
 rstr *b_422;
 rstr result_;
};
struct f_elem_assign_427fr { int dummy;
 rstr *lval_424;
 P1040 t_425;
 rstr *v_426;
 rstr result_;
};
struct f_seen_name_430fr { int dummy;
 P1038 l_428;
 rstr *s_429;
 int result_;
 P1038 p_1706;
};
struct f_emit_helpers_431fr { int dummy;
 P1040 order_1707;
 P1040 t_1708;
 P1038 done_1709;
 P1038 l_1710;
 rstr c_1711;
};
struct f_helper_bodies_433fr { int dummy;
 P1040 t_432;
 rstr c_1713;
 P1057 b_1714;
 P1040 e_1715;
 P1027 sizes_1716;
 P1027 bounds_1717;
 rt_int k_1718;
 rstr l_1722;
 rstr h_1723;
 P1038 saved_1724;
 P1034 p_1725;
 P1038 l1_1726;
 P1038 l2_1727;
 P1042 f_1730;
 rt_int i_1731;
 P1027 cases_as_1732;
 P1027 cases_cp_1733;
 P1027 cases_eq_1734;
 rstr fn_1735;
 P1042 f_1736;
 P1027 conds_1737;
 rstr fn_1738;
 rstr fn_1739;
};
struct f_declare_body_435fr { int dummy;
 P1034 elems_434;
 P1034 e_1740;
 P1044 g_1741;
 P1044 y_1742;
 P1044 y_1743;
 P1044 y_1744;
 P1040 t_1745;
 P1044 y_1746;
 P1044 y_1747;
 P1048 snap_1748;
 rt_int i_1752;
 P1044 g_1756;
 P1044 y_1757;
 P1044 y_1758;
};
struct f_manifest_const_437fr { int dummy;
 P1034 d_436;
 int ok_1759;
 P1053 v_1760;
 P1044 y_1761;
 P1040 t_1762;
 P1027 ctext_1763;
 P1057 saved_1764;
};
struct f_exported_441fr { int dummy;
 P1034 d_438;
 rstr *name_439;
 int *ro_440;
 int ro_440v;
 int result_;
 P1034 p_1767;
};
struct f_copy_sym_443fr { int dummy;
 P1044 y_442;
 P1044 result_;
 P1044 z_1768;
};
struct f_gen_capsule_445fr { int dummy;
 P1034 d_444;
 P1044 y_1770;
 P1027 saved_1771;
 P1034 p_1772;
 P1046 tail_1773;
 P1046 pm_1774;
};
struct f_imports_variables_447fr { int dummy;
 P1034 d_446;
 int result_;
};
struct f_elaborate_pending_449fr { int dummy;
 P1044 y_448;
 P1027 saved_1776;
};
struct f_pending_capsule_451fr { int dummy;
 rstr *name_450;
 int result_;
 P1044 y_1777;
};
struct f_capsule_params_455fr { int dummy;
 P1034 d_452;
 P1034 args_453;
 rt_int line_454;
 P1034 p_1778;
 P1034 a_1779;
 P1040 t_1780;
 P1040 vt_1781;
 P1036 c_1782;
 P1027 lv_1783;
 P1036 lc_1784;
 int ro_1785;
 P1044 y_1786;
 rstr f_1787;
 rstr g_1788;
 P1044 y_1789;
 rstr v_1790;
 rstr access_1791;
};
struct f_elaborate_capsule_460fr { int dummy;
 P1034 d_456;
 P1044 y_457;
 P1034 args_458;
 P1034 owner_459;
 P1061 cr_1792;
 P1051 ctx_1793;
 P1059 saved_gotos_1794;
 P1044 m_1795;
 P1034 p_1796;
 int ro_1797;
 P1063 w_1800;
 P1044 z_1802;
};
struct f_exports_op_463fr { int dummy;
 P1034 d_461;
 rstr *op_462;
 int result_;
 P1034 p_1803;
};
struct f_renamed_466fr { int dummy;
 P1034 d_464;
 P1044 z_465;
 P1027 result_;
 P1034 r_1804;
};
struct f_cap_tt_match_469fr { int dummy;
 P1034 f_467;
 P1034 a_468;
 int result_;
 P1034 x_1805;
 P1034 y_1806;
 int ok1_1807;
 int ok2_1808;
 P1053 v1_1809;
 P1053 v2_1810;
};
struct f_pick_capsule_471fr { int dummy;
 P1034 d_470;
 P1044 result_;
 P1044 y_1811;
 P1044 first_1812;
 P1044 fit_1813;
 rt_int n_1814;
};
struct f_capsule_instance_474fr { int dummy;
 P1044 g_472;
 P1034 d_473;
 P1044 result_;
 P1034 gd_1815;
 P1034 pat_1816;
 P1044 binds_1817;
 P1044 inst_1818;
 P1048 saved_env_1819;
 rt_int saved_gdepth_1820;
 P1044 b_1821;
};
struct f_configure_476fr { int dummy;
 P1044 y_475;
 P1044 m_1822;
 rstr n_1823;
};
struct f_gen_expose_478fr { int dummy;
 P1034 d_477;
 P1044 y_1824;
 P1044 m_1825;
 P1034 p_1826;
 P1034 r_1827;
 P1044 inst_1828;
 int found_1829;
 P1044 z_1830;
 int found_1831;
 P1044 z_1832;
};
struct f_finish_ptr_480fr { int dummy;
 P1040 t_479;
 P1034 d_1833;
 P1034 p_1834;
 P1036 c_1835;
 rstr dummy_1836;
 rt_int pass_1837;
 P1044 y_1841;
 P1036 pc_1842;
};
struct f_ptr_args_482fr { int dummy;
 P1036 c_481;
 P1034 result_;
};
struct f_bind_ptr_params_487fr { int dummy;
 P1034 formals_483;
 P1034 actuals_484;
 rstr *cell_485;
 rt_int line_486;
 P1034 p_1843;
 P1034 a_1844;
 P1040 vt_1845;
 P1036 pc_1846;
 P1044 y_1847;
 rstr v_1848;
 rstr pv_1849;
};
struct f_alloc_cell_492fr { int dummy;
 P1034 s_488;
 rstr *lv_489;
 P1040 t_490;
 P1036 c_491;
 P1034 d_1850;
 P1036 tc_1851;
 P1040 vt_1852;
 rstr pt_1853;
 rstr cell_1854;
 rstr fn_1855;
 rstr v_1856;
};
struct f_freeze_args_496fr { int dummy;
 P1036 c_493;
 P1040 t_494;
 rt_int line_495;
 P1036 result_;
 P1036 r_1857;
 P1034 p_1858;
 P1034 a_1859;
 P1034 head_1860;
 P1034 tail_1861;
 P1027 saved_1862;
 P1036 pc_1863;
 P1040 vt_1864;
 P1040 pt_1865;
 rstr nm_1866;
 P1044 y_1867;
 P1034 n_1868;
 rstr v_1869;
 rstr access_1870;
};
struct f_ptr_subtype_check_500fr { int dummy;
 P1040 t_497;
 P1036 c_498;
 P1034 src_499;
 P1027 lv_1871;
 P1040 st_1872;
 P1036 sc_1873;
 int ro_1874;
 P1027 cond_1875;
 P1034 a_1876;
 P1034 b_1877;
 P1040 at_1878;
 P1040 bt_1879;
 rstr x_1880;
 rstr y_1881;
};
struct f_normal_function_503fr { int dummy;
 P1034 d_501;
 P1044 y_502;
 P1046 p_1882;
 P1034 imp_1883;
 int ro_1884;
 P1044 z_1885;
};
struct f_foreign_body_506fr { int dummy;
 P1034 d_504;
 P1044 y_505;
 P1046 pm_1886;
 P1027 proto_1887;
 P1027 args_1888;
 rstr cn_1889;
};
struct f_declare_subprogram_508fr { int dummy;
 P1034 d_507;
};
struct f_build_subprogram_510fr { int dummy;
 P1034 d_509;
 P1044 result_;
 P1044 y_1890;
 P1034 p_1891;
 P1046 tail_1892;
 P1046 pm_1893;
 P1036 rc_1895;
 P1046 pm_1896;
 P1057 saved_1897;
 P1044 z_1898;
};
struct f_has_pragmat_513fr { int dummy;
 P1027 pr_511;
 rstr *p_512;
 int result_;
 rt_int i_1899;
};
struct f_suppressing_515fr { int dummy;
 P1027 pr_514;
 P1027 result_;
 P1027 r_1903;
 rt_int i_1904;
 rt_int j_1905;
 rt_int k_1906;
};
struct f_suppressed_517fr { int dummy;
 rstr *x_516;
 int result_;
 rstr w_1907;
 rt_int i_1908;
};
struct f_element_519fr { int dummy;
 P1034 e_518;
 P1027 saved_1912;
};
struct f_element1_521fr { int dummy;
 P1034 e_520;
 rt_int k_1913;
 P1044 g_1914;
 rt_int i_1918;
 P1036 c_1922;
 P1034 st_1923;
 P1040 t_1924;
 P1040 t_1925;
 rstr c_1926;
};
struct f_storage_524fr { int dummy;
 rstr *name_522;
 P1040 t_523;
 rstr result_;
 rstr g_1927;
 rstr f_1928;
};
struct f_bind_527fr { int dummy;
 P1044 y_525;
 rstr *access_526;
};
struct f_var_decl_529fr { int dummy;
 P1034 d_528;
};
struct f_located_var_531fr { int dummy;
 P1034 d_530;
 P1036 c_1929;
 P1040 at_1930;
 P1040 t_1931;
 P1044 y_1932;
 rstr addr_1933;
 rstr av_1934;
 rstr af_1935;
 rstr access_1936;
 P1040 vt_1937;
 rstr v_1938;
 rstr pv_1939;
 rstr pf_1940;
 P1040 vt_1941;
 rstr v_1942;
};
struct f_rep_sync_534fr { int dummy;
 P1044 y_532;
 int pack_533;
 rstr result_;
 rstr lv_1943;
 rstr base_1944;
 P1038 saved_1945;
 P1034 p_1946;
 P1027 r_1947;
 P1027 inner_1948;
 P1044 z_1949;
};
struct f_cbound_access_536fr { int dummy;
 P1044 y_535;
 rstr result_;
 P1036 c_1950;
};
struct f_rep_size_540fr { int dummy;
 P1034 items_537;
 P1040 t_538;
 P1036 c_539;
 rstr result_;
 P1034 it_1951;
 P1040 at_1952;
};
struct f_rep_find_543fr { int dummy;
 P1034 items_541;
 rstr *w_542;
 P1034 result_;
 P1034 it_1953;
};
struct f_rep_comp_546fr { int dummy;
 P1034 items_544;
 rstr *name_545;
 P1034 result_;
 P1034 r_1954;
 P1034 comp_1955;
};
struct f_default_bits_549fr { int dummy;
 P1040 t_547;
 P1036 c_548;
 rt_int result_;
 P1042 f_1956;
 rt_int n_1957;
};
struct f_rep_code_556fr { int dummy;
 P1040 t_550;
 P1036 c_551;
 P1034 items_552;
 rstr *lval_553;
 rstr *addr_554;
 int pack_555;
 rstr result_;
 rstr size_1958;
 P1042 f_1959;
 P1027 r_1960;
 P1027 off_1961;
 rt_int i_1962;
 P1034 ti_1963;
 P1027 tsize_1964;
 P1027 toff_1965;
 P1040 at_1966;
 P1034 ci_1967;
 P1027 fo_1968;
 rstr fl_1969;
 P1040 at_1970;
 rstr part_1971;
 P1034 ai_1972;
 P1034 ei_1973;
 rstr es_1974;
 rstr iv_1975;
 rstr iv_1976;
};
struct f_union_part_558fr { int dummy;
 P1040 t_557;
 rstr result_;
};
struct f_rep_scalar_565fr { int dummy;
 P1040 t_559;
 P1036 c_560;
 rstr *lval_561;
 rstr *addr_562;
 rstr *size_563;
 int pack_564;
 rstr result_;
 rstr signed_1977;
};
struct f_max_range_568fr { int dummy;
 P1040 t_566;
 P1036 c_567;
};
struct f_var_decl2_570fr { int dummy;
 P1034 d_569;
 P1036 c_1978;
 P1040 t_1979;
 P1044 y_1980;
 rstr access_1981;
 P1040 it_1982;
 rstr n_1983;
 P1040 vt_1984;
 rstr v_1985;
};
struct f_open_fin_572fr { int dummy;
 rstr *fc_571;
 rstr f_1986;
 P1038 l_1987;
};
struct f_close_fins_574fr { int dummy;
 P1038 saved_573;
};
struct f_const_decl_576fr { int dummy;
 P1034 d_575;
 P1036 c_1989;
 P1040 t_1990;
 P1040 vt_1991;
 P1044 y_1992;
 int ok_1993;
 rstr v_1994;
 rstr access_1995;
};
struct f_subprogram_578fr { int dummy;
 P1034 d_577;
};
struct f_gen_subprogram_581fr { int dummy;
 P1034 d_579;
 P1044 y_580;
 P1057 saved_code_1996;
 P1057 saved_fields_1997;
 int saved_in_1998;
 P1044 saved_sym_1999;
 P1059 saved_exits_2000;
 P1059 saved_gotos_2001;
 rt_int saved_frames_2002;
 P1027 args_2003;
 P1046 pm_2004;
 P1038 saved_handlers_2005;
 P1038 saved_cleanups_2006;
 P1051 ctx_2007;
 P1027 head_2008;
 P1027 frame_2009;
 P1027 parent_2010;
 P1027 copy_back_2011;
 P1027 pfin_2012;
 P1038 saved_fins_2013;
 P1036 saved_rc_2014;
 P1027 saved_ret_2015;
 P1027 saved_rflag_2016;
 P1034 pn_2017;
 P1027 nonrec_end_2018;
 int has_pfin_2019;
 rstr ct_2021;
 rstr f_2022;
 P1044 p_2023;
 P1036 pc_2024;
 P1036 ac_2025;
 P1036 fc_2026;
 P1040 ft_2027;
 rstr bt_2028;
 P1036 rc_2029;
 P1040 rt_2030;
 rstr g_2031;
 P1027 leave_2032;
 rstr xu_2033;
};
struct f_waits_of_583fr { int dummy;
 P1034 d_582;
 rstr result_;
 P1063 w_2034;
};
struct f_task_waits_585fr { int dummy;
 P1034 elems_584;
 rstr result_;
 P1034 e_2035;
 P1027 r_2036;
};
struct f_await_tasks_587fr { int dummy;
 P1034 elems_586;
 rstr w_2037;
};
struct f_capsule_elements_589fr { int dummy;
 P1034 elems_588;
 P1034 e_2038;
};
struct f_declare_labels_591fr { int dummy;
 P1034 elems_590;
 P1034 e_2039;
 P1034 l_2040;
 P1059 x_2041;
};
struct f_start_labels_592fr { int dummy;
 P1059 x_2043;
};
struct f_goto_label_594fr { int dummy;
 rstr *name_593;
 P1059 result_;
 P1059 x_2044;
};
struct f_has_return_596fr { int dummy;
 P1034 e_595;
 int result_;
 P1034 x_2045;
};
struct f_capsule_body_598fr { int dummy;
 P1034 elems_597;
 P1027 saved_ret_2046;
 P1027 saved_flag_2047;
 rt_int saved_frames_2048;
 P1034 e_2049;
 int stmt_2050;
};
struct f_body_elements_600fr { int dummy;
 P1034 elems_599;
};
struct f_gen_body_602fr { int dummy;
 P1034 elems_601;
 P1038 saved_2051;
 P1059 saved_gotos_2052;
 rstr xu_2053;
};
struct f_open_unhandled_604fr { int dummy;
 P1034 elems_603;
 rstr result_;
 P1034 e_2054;
 P1027 conds_2055;
 rstr f_2056;
};
struct f_close_unhandled_606fr { int dummy;
 rstr *xu_605;
 rt_int i_2057;
 rstr f_2058;
};
struct f_pop_frames_608fr { int dummy;
 rt_int upto_607;
 rt_int i_2059;
 P1038 c_2060;
};
struct f_push_cleanup_610fr { int dummy;
 rstr *s_609;
 P1038 c_2061;
};
struct f_pop_cleanup_611fr { int dummy;
};
struct f_gen_statement_613fr { int dummy;
 P1034 s_612;
 P1044 located_2063;
 P1044 l_2064;
};
struct f_located_in_616fr { int dummy;
 P1034 e_614;
 P1044 found_615;
 P1044 result_;
 P1034 x_2065;
 P1044 r_2066;
 P1044 y_2067;
};
struct f_sym_in_619fr { int dummy;
 P1044 l_617;
 P1044 y_618;
 int result_;
 P1044 p_2068;
};
struct f_gen_statement2_621fr { int dummy;
 P1034 s_620;
 P1027 label_2069;
 P1034 gl_2070;
 P1059 x_2071;
 P1059 x_2074;
};
struct f_st_assign_623fr { int dummy;
 P1034 s_622;
 P1027 lv_2075;
 P1040 t_2076;
 P1040 vt_2077;
 P1036 c_2078;
 int ro_2079;
 rstr lo_2080;
 rstr hi_2081;
 rstr v_2082;
 rstr lo_2083;
 rstr hi_2084;
 rstr v_2085;
 rstr v_2086;
};
struct f_st_call_625fr { int dummy;
 P1034 s_624;
 P1034 c_2087;
 P1040 t_2088;
 P1034 x_2089;
};
struct f_st_if_627fr { int dummy;
 P1034 s_626;
 P1034 a_2090;
 int first_2091;
 P1040 t_2092;
 int taken_2093;
 int ok_2094;
 P1053 mv_2095;
 rstr c_2096;
};
struct f_manifest_case_629fr { int dummy;
 P1034 s_628;
 int result_;
 int ok_2097;
 P1053 sv_2098;
 P1034 a_2099;
 P1034 lab_2100;
 P1053 lo_2101;
 P1053 hi_2102;
};
struct f_st_case_631fr { int dummy;
 P1034 s_630;
 P1040 st_2103;
 P1040 vt_2104;
 int first_2105;
 P1034 a_2106;
};
struct f_st_case2_633fr { int dummy;
 P1034 s_632;
 P1040 st_2107;
 P1040 vt_2108;
 int first_2109;
 P1034 a_2110;
 rstr sel_2111;
 rstr tmp_2112;
 P1034 lab_2113;
 P1027 conds_2114;
 rstr v_2115;
 rstr lo_2116;
 rstr hi_2117;
 rstr lo_2118;
 rstr hi_2119;
};
struct f_user_for_637fr { int dummy;
 P1034 s_634;
 P1040 t_635;
 P1036 c_636;
 P1044 y_2120;
 P1038 saved_2121;
 P1034 p_2122;
 P1034 iv_2123;
 P1040 st_2124;
 rstr access_2125;
 P1027 uv_2126;
 P1038 l1_2127;
 P1038 l2_2128;
 rstr lo_2131;
 rstr hi_2132;
};
struct f_st_repeat_639fr { int dummy;
 P1034 s_638;
 P1040 t_2133;
 P1036 c_2134;
 rstr cond_2135;
 rstr access_2136;
 rstr lov_2137;
 rstr hiv_2138;
 rstr it_2139;
 P1044 y_2140;
};
struct f_st_exit_641fr { int dummy;
 P1034 s_640;
 P1059 x_2141;
};
struct f_st_return_643fr { int dummy;
 P1034 s_642;
 P1040 vt_2142;
 rstr v_2143;
};
struct f_result_checked_647fr { int dummy;
 P1040 t_644;
 P1036 c_645;
 rstr *v_646;
 rstr result_;
};
struct f_exc_id_650fr { int dummy;
 rstr *name_648;
 rt_int line_649;
 rstr result_;
 P1044 y_2144;
};
struct f_st_guard_652fr { int dummy;
 P1034 s_651;
 P1034 h_2145;
 int first_2146;
 P1038 hv_2147;
 rstr f_2148;
 rstr x_2149;
 P1034 h1_2151;
 P1038 seen_2152;
 P1034 n1_2153;
 P1034 n_2154;
 P1027 conds_2155;
};
struct f_st_alloc_654fr { int dummy;
 P1034 s_653;
 P1027 lv_2156;
 P1040 t_2157;
 P1040 target_2158;
 P1040 vt_2159;
 P1036 c_2160;
 P1036 tc_2161;
 int ro_2162;
 P1034 d_2163;
 P1034 p_2164;
 P1034 a_2165;
 rstr tcn_2166;
 rstr cell_2167;
 rstr fn_2168;
 rstr v_2169;
};
struct f_act_ref_656fr { int dummy;
 P1034 e_655;
 rstr result_;
 P1027 lv_2170;
 P1040 t_2171;
 P1036 c_2172;
 int ro_2173;
 rstr v_2174;
};
struct f_st_create_658fr { int dummy;
 P1034 s_657;
 P1044 y_2175;
 P1046 pm_2176;
 P1034 a_2177;
 P1027 lv_2178;
 P1040 lt_2179;
 P1040 vt_2180;
 P1036 lc_2181;
 int ro_2182;
 P1040 at_2183;
 P1036 ac_2184;
 int aro_2185;
 P1027 act_2186;
 rstr nf_2187;
 P1027 link_2188;
 rt_int i_2189;
 rstr v_2193;
};
struct f_hidden_var_662fr { int dummy;
 rstr *name_659;
 P1040 t_660;
 rstr *place_661;
 P1044 y_2194;
};
struct f_user_create_668fr { int dummy;
 P1034 s_663;
 P1044 y_664;
 rstr *uv_665;
 P1040 ut_666;
 rstr *nf_667;
 P1040 t_2195;
 P1057 saved_2196;
 P1057 hook_2197;
 P1034 un_2198;
 rstr hn_2199;
 rstr aa_2200;
 rstr uname_2201;
 rstr aname_2202;
 P1034 start_2203;
 P1034 an_2204;
};
struct f_wait_alt_673fr { int dummy;
 P1034 inv_669;
 rstr *arr_670;
 rt_int i_671;
 int mixed_672;
 rstr result_;
 P1027 lv_2205;
 P1040 t_2206;
 P1040 vt_2207;
 P1036 c_2208;
 int ro_2209;
 P1034 fn_2210;
 P1034 args_2211;
 rstr slot_2212;
 P1027 dv_2213;
 P1040 dt_2214;
 rstr tmp_2215;
 rstr v_2216;
 rstr v_2217;
};
struct f_builtin_wait_675fr { int dummy;
 P1034 inv_674;
 int result_;
 P1027 lv_2218;
 P1040 t_2219;
 P1036 c_2220;
 int ro_2221;
 P1057 saved_2222;
 int ok_2223;
};
struct f_wait_op_680fr { int dummy;
 P1034 inv_676;
 rstr *op_677;
 rstr *q_678;
 int is_stmt_679;
 rstr result_;
 P1034 x_2226;
 P1034 f_2227;
 P1034 qn_2228;
 P1040 t_2229;
 rstr r_2230;
};
struct f_user_wait_685fr { int dummy;
 P1034 s_681;
 rstr *arr_682;
 rstr *w_683;
 rt_int n_684;
 P1034 a_2231;
 rt_int i_2232;
 P1027 tests_2233;
 P1027 revokes_2234;
 P1034 inv_2235;
 P1034 st_2236;
 P1036 c_2237;
 P1040 qt_2238;
 rstr qname_2239;
 P1044 y_2240;
 rstr access_2241;
};
struct f_st_wait_687fr { int dummy;
 P1034 s_686;
 P1034 a_2242;
 rt_int n_2243;
 int first_2244;
 P1057 inits_2245;
 int user_2246;
 rstr arr_2247;
 rstr w_2248;
 P1034 inv_2249;
 P1034 inv_2250;
 P1027 conds_2251;
 rt_int i_2252;
};
struct f_call_node_691fr { int dummy;
 rstr *name_688;
 P1034 arg_689;
 rt_int line_690;
 P1034 result_;
 P1034 x_2256;
 P1034 f_2257;
};
struct f_user_region_693fr { int dummy;
 P1034 s_692;
 P1040 t_2258;
 rstr f_2259;
 rstr lock_2260;
 rstr unlock_2261;
};
struct f_st_region_695fr { int dummy;
 P1034 s_694;
 P1027 lv_2262;
 P1040 t_2263;
 P1036 c_2264;
 int ro_2265;
 rstr lk_2266;
 rstr f_2267;
};
struct f_gparam_698fr { int dummy;
 P1034 g_696;
 rstr *name_697;
 P1034 result_;
 P1034 p_2268;
};
struct f_bind_sym_700fr { int dummy;
 P1034 p_699;
 P1044 result_;
 P1044 y_2269;
};
struct f_same_binds_703fr { int dummy;
 P1044 a_701;
 P1044 b_702;
 int result_;
 P1044 x_2270;
 P1044 y_2271;
};
struct f_same_binding_706fr { int dummy;
 P1044 a_704;
 P1044 b_705;
 int result_;
};
struct f_tt_binds_711fr { int dummy;
 P1034 gd_707;
 P1034 formals_708;
 P1034 actuals_709;
 rt_int line_710;
 P1044 result_;
 P1034 f_2272;
 P1034 a_2273;
 P1044 binds_2274;
 P1036 c_2275;
 P1040 at_2276;
 P1034 p_2277;
 P1044 b_2278;
 P1034 st_2279;
 int ok_2280;
 int ok_2281;
};
struct f_type_allowed_715fr { int dummy;
 P1040 t_712;
 P1034 items_713;
 P1044 binds_714;
 int result_;
 P1034 it_2282;
 P1040 b_2283;
 rstr w_2284;
 P1036 c_2285;
};
struct f_resolve_in_binds_719fr { int dummy;
 P1034 st_716;
 P1044 binds_717;
 P1036 *c_718;
 P1036 c_718v;
 P1040 result_;
 P1044 b_2286;
 P1040 t_2287;
 P1044 z_2288;
};
struct f_pick_operation_726fr { int dummy;
 rt_int kind_720;
 rstr *name_721;
 P1034 sig_722;
 P1034 res_723;
 P1044 binds_724;
 rt_int line_725;
 P1044 result_;
 P1044 y_2289;
 P1036 c_2290;
 rt_int want_2291;
 rt_int pass_2292;
 int ok_2296;
 P1034 s_2297;
 P1046 pm_2298;
};
struct f_kind_word_728fr { int dummy;
 rt_int kind_727;
 rstr result_;
};
struct f_need_binds_732fr { int dummy;
 P1034 gd_729;
 P1044 binds_730;
 rt_int line_731;
 P1044 result_;
 P1034 it_2299;
 P1044 r_2300;
 int found_2301;
 P1044 y_2302;
 P1044 z_2303;
};
struct f_generic_use_734fr { int dummy;
 P1034 st_733;
 int result_;
};
struct f_infer_from_739fr { int dummy;
 P1034 gd_735;
 P1034 pat_736;
 P1040 t_737;
 P1044 known_738;
 P1044 result_;
 P1044 binds_2304;
 P1034 e_2305;
 P1034 tp_2306;
 P1027 nm_2307;
 P1044 q_2308;
 int have_2309;
 P1044 g_2310;
 P1044 b_2311;
};
struct f_instantiate_type_745fr { int dummy;
 P1044 g_740;
 P1034 tt_741;
 P1034 args_742;
 P1036 *c_743;
 P1036 c_743v;
 rt_int line_744;
 P1040 result_;
 P1034 gd_2312;
 P1034 pat_2313;
 P1044 binds_2314;
 P1044 inst_2315;
 P1040 t_2316;
 P1061 saved_caps_2317;
 P1048 saved_env_2318;
 rt_int saved_gdepth_2319;
 P1044 b_2320;
 P1044 y_2321;
 P1036 yc_2322;
};
struct f_instantiate_750fr { int dummy;
 P1044 g_746;
 P1034 tt_747;
 P1034 args_748;
 rt_int line_749;
 P1044 result_;
 P1034 gd_2324;
 P1034 pat_2325;
 P1044 binds_2326;
 P1034 f_2327;
 P1034 a_2328;
 P1034 fp_2329;
 P1044 inst_2330;
 P1040 at_2331;
 P1036 c_2332;
 P1051 saved_fctx_2333;
 int saved_in_2334;
 rt_int saved_level_2335;
 P1044 saved_sym_2336;
 P1057 saved_code_2337;
 P1048 saved_env_2338;
 rt_int saved_gdepth_2339;
 rstr v_2340;
 int known_2341;
 P1044 q_2342;
 P1044 b_2343;
 rstr v_2344;
 P1044 b_2345;
};
struct f_access_of_752fr { int dummy;
 P1044 y_751;
 rstr result_;
 P1027 p_2346;
 rt_int i_2347;
};
struct f_import_of_755fr { int dummy;
 P1034 l_753;
 rstr *name_754;
 P1034 result_;
 P1034 p_2351;
};
struct f_check_import_758fr { int dummy;
 P1044 y_756;
 rt_int line_757;
 int result_;
 P1051 c_2352;
 int ro_2353;
 P1034 imp_2354;
};
struct f_c_ident_760fr { int dummy;
 rstr *s_759;
 rstr result_;
 P1027 r_2355;
 rt_int i_2356;
};
struct f_cell_deref_763fr { int dummy;
 P1040 t_761;
 rstr *p_762;
 rstr result_;
};
struct f_deref_766fr { int dummy;
 rstr *base_764;
 P1040 t_765;
 rstr result_;
};
struct f_is_lvalue_768fr { int dummy;
 P1034 e_767;
 int result_;
 P1044 y_2360;
};
struct f_lvalue_774fr { int dummy;
 P1034 e_769;
 P1027 *code_770;
 P1027 code_770v;
 P1040 *t_771;
 P1040 t_771v;
 P1036 *c_772;
 P1036 c_772v;
 int *ro_773;
 int ro_773v;
 P1027 base_2361;
 P1040 bt_2362;
 P1036 bc_2363;
 P1044 y_2364;
};
struct f_select_on_782fr { int dummy;
 rstr *base_775;
 P1040 bt_776;
 P1034 e_777;
 int *ro_778;
 P1027 *code_779;
 P1027 code_779v;
 P1040 *t_780;
 P1040 t_780v;
 P1036 *c_781;
 P1036 c_781v;
 P1034 p_2365;
 P1036 pc_2366;
 P1034 p_2367;
 P1042 f_2368;
 rt_int i_2369;
 rstr fn_2370;
 P1042 f_2371;
};
struct f_has_call_784fr { int dummy;
 rstr *s_783;
 int result_;
 rt_int i_2372;
};
struct f_need_slice_786fr { int dummy;
 P1040 t_785;
 rstr c_2376;
 rstr n_2377;
 P1038 l_2378;
};
struct f_ix_790fr { int dummy;
 rstr *i_787;
 rstr *lo_788;
 rstr *hi_789;
 rstr result_;
};
struct f_index_on_799fr { int dummy;
 rstr *base_791;
 P1040 bt_792;
 P1034 e_793;
 int *ro_794;
 int lv_795;
 P1027 *code_796;
 P1027 code_796v;
 P1040 *t_797;
 P1040 t_797v;
 P1036 *c_798;
 P1036 c_798v;
 P1034 a_2380;
 P1040 it_2381;
 rstr lo_2382;
 rstr hi_2383;
 P1027 off_2384;
 rt_int k_2385;
 P1027 b_2386;
 P1027 pre_2387;
 rstr i_2388;
 rstr l_2389;
 rstr h_2390;
 rstr lo_2391;
 rstr hi_2392;
 rstr i_2393;
};
struct f_own_attribute_801fr { int dummy;
 P1034 e_800;
 int result_;
 P1057 saved_2394;
 P1040 bt_2395;
 int ok_2396;
 rstr base_2399;
 P1034 p_2400;
 P1042 f_2401;
};
struct f_gexpr_805fr { int dummy;
 P1034 e_802;
 P1040 want_803;
 P1040 *t_804;
 P1040 t_804v;
 rstr result_;
 rt_int k_2402;
 P1027 code_2403;
 P1036 c_2404;
 int ro_2405;
 P1040 bt_2406;
 P1036 ctx_2407;
 int whole_2408;
 P1027 r_2409;
 rt_int i_2410;
 rt_int pos_2414;
 rt_int i_2415;
 P1044 y_2416;
 int ro_2417;
 P1034 call_2418;
 P1034 fname_2419;
 rstr a_2420;
 rstr a_2421;
 rstr a_2422;
 P1034 nm_2423;
 P1044 y_2424;
 rstr base_2425;
 rstr base_2426;
};
struct f_resolved_808fr { int dummy;
 P1034 e_806;
 P1040 *t_807;
 P1040 t_807v;
 rstr result_;
 P1036 c_2427;
 P1040 vt_2428;
 P1044 y_2429;
 P1034 tt_2430;
 P1034 call_2431;
 P1034 f_2432;
 P1034 fname_2433;
 rstr v_2434;
};
struct f_gexpr_base_811fr { int dummy;
 P1034 e_809;
 P1040 *t_810;
 P1040 t_810v;
 rstr result_;
};
struct f_gexpr_in_816fr { int dummy;
 P1034 e_812;
 P1040 want_813;
 P1036 c_814;
 P1040 *t_815;
 P1040 t_815v;
 rstr result_;
};
struct f_ascii_lit_818fr { int dummy;
 int ch_817;
 rstr result_;
 P1034 l_2435;
 rt_int i_2436;
};
struct f_octal_820fr { int dummy;
 rt_int n_819;
 rstr result_;
 rstr r_2440;
};
struct f_str_cat_part_822fr { int dummy;
 P1040 t_821;
 P1040 result_;
};
struct f_peek_type_824fr { int dummy;
 P1034 e_823;
 P1040 result_;
 P1057 saved_2441;
 P1040 t_2442;
 rstr v_2445;
};
struct f_set_operands_827fr { int dummy;
 P1034 e_825;
 P1040 want_826;
 P1040 result_;
 P1040 t_2446;
};
struct f_user_dot_829fr { int dummy;
 P1034 e_828;
 P1034 result_;
 P1034 arg_2447;
};
struct f_user_subscript_831fr { int dummy;
 P1034 e_830;
 P1034 result_;
 P1027 name_2448;
 P1034 args_2449;
 P1034 tail_2450;
 P1034 a_2451;
};
struct f_op_call_835fr { int dummy;
 rstr *name_832;
 P1034 args_833;
 rt_int line_834;
 P1034 result_;
 P1034 call_2452;
 P1034 f_2453;
};
struct f_derived_relation_837fr { int dummy;
 P1034 e_836;
 P1034 result_;
 P1034 l_2454;
 P1034 r_2455;
 int has_eq_2456;
 int has_lt_2457;
};
struct f_rel_node_842fr { int dummy;
 rstr *op_838;
 P1034 a_839;
 P1034 b_840;
 rt_int line_841;
 P1034 result_;
};
struct f_rel_not_845fr { int dummy;
 P1034 x_843;
 rt_int line_844;
 P1034 result_;
 P1034 n_2458;
};
struct f_copy_node_847fr { int dummy;
 P1034 e_846;
 P1034 result_;
 P1034 x_2459;
};
struct f_wrap_apply_849fr { int dummy;
 P1034 e_848;
 P1034 result_;
 P1034 x_2461;
};
struct f_c_string_851fr { int dummy;
 rstr *s_850;
 rstr result_;
 rt_int n_2462;
 rt_int i_2463;
 rstr r_2467;
 rt_int j_2468;
 rt_int i_2469;
};
struct f_enum_type_of_854fr { int dummy;
 rstr *lit_852;
 rt_int line_853;
 P1040 result_;
 P1044 y_2473;
 P1036 c_2474;
 P1034 st_2475;
};
struct f_ptr_attribute_856fr { int dummy;
 P1034 e_855;
 int result_;
 P1027 lv_2476;
 P1040 t_2477;
 P1036 c_2478;
 int ro_2479;
 P1034 p_2480;
 P1057 saved_2481;
};
struct f_attribute_859fr { int dummy;
 P1034 e_857;
 P1040 *t_858;
 P1040 t_858v;
 rstr result_;
 P1040 bt_2482;
 P1036 c_2483;
 P1027 base_2484;
 P1034 sub_2485;
 rstr name_2486;
 P1034 p_2487;
 P1034 a_2488;
 P1036 pc_2489;
 rstr v_2490;
 P1034 p_2491;
 P1034 a_2492;
 P1040 pt_2493;
 rstr v_2494;
};
struct f_subtype_compare_864fr { int dummy;
 P1034 sa_860;
 P1034 sb_861;
 rstr *op_862;
 rt_int line_863;
 rstr result_;
 P1036 ca_2495;
 P1036 cb_2496;
 P1040 ta_2497;
 P1040 tb_2498;
 P1027 r_2499;
 rstr yes_2500;
 rstr no_2501;
 rt_int k_2502;
 P1034 a_2506;
 P1034 b_2507;
 P1040 at_2508;
 P1040 bt2_2509;
 rstr x_2510;
 rstr y_2511;
};
struct f_float_prec_866fr { int dummy;
 P1036 c_865;
 rstr result_;
};
struct f_file_attribute_872fr { int dummy;
 P1034 e_867;
 P1040 bt_868;
 P1036 c_869;
 P1027 base_870;
 P1040 *t_871;
 P1040 t_871v;
 rstr result_;
};
struct f_gbinop_876fr { int dummy;
 P1034 e_873;
 P1040 want_874;
 P1040 *t_875;
 P1040 t_875v;
 rstr result_;
 P1027 op_2512;
 P1040 ta_2513;
 P1040 tb_2514;
 P1040 hint_2515;
 P1044 uy_2516;
 P1034 l_2517;
 P1034 r_2518;
 P1034 call_2519;
 P1034 fname_2520;
 rstr s_2521;
 rstr a_2522;
 rstr a_2523;
 rstr b_2524;
 rstr a_2525;
 rstr b_2526;
 P1040 at_2527;
 rstr a_2528;
 rstr b_2529;
 P1040 wa_2530;
 P1040 wb_2531;
 P1040 ws_2532;
 P1040 ce_2533;
 rstr a_2534;
 rstr b_2535;
 rstr dummy_2536;
 rstr a_2537;
 rstr b_2538;
 P1040 ct_2539;
 rstr a_2540;
 rstr b_2541;
};
struct f_constructor_881fr { int dummy;
 P1034 e_877;
 P1040 want_878;
 P1036 ctx_879;
 P1040 *t_880;
 P1040 t_880v;
 rstr result_;
 P1034 it_2542;
 P1042 f_2543;
 P1040 vt_2544;
 P1027 s_2545;
 rstr v_2546;
 rt_int i_2547;
 rstr tmp_2548;
 rstr v_2549;
 rstr tmp_2550;
 P1027 parts_2551;
 P1034 k_2552;
 P1027 shared_2553;
 rstr v_2554;
 rstr v_2555;
};
struct f_comp_value_885fr { int dummy;
 P1040 t_882;
 P1036 c_883;
 rstr *v_884;
 rstr result_;
 rstr ct_2556;
};
struct f_has_at_887fr { int dummy;
 rstr *s_886;
 int result_;
 rt_int i_2557;
};
struct f_set_elem_890fr { int dummy;
 P1040 st_888;
 rstr *v_889;
 rstr result_;
};
struct f_array_cons_895fr { int dummy;
 P1034 e_891;
 P1040 at_892;
 P1036 ctx_893;
 P1040 *t_894;
 P1040 t_894v;
 rstr result_;
 rstr tmp_2561;
 P1027 parts_2562;
 P1034 it_2563;
 int positional_2564;
 rt_int k_2565;
 P1027 lo_2569;
 P1027 hi_2570;
};
struct f_fill_items_901fr { int dummy;
 P1034 items_896;
 P1040 at_897;
 rstr *tmp_898;
 P1038 prefix_899;
 rt_int dim_900;
 rstr result_;
 P1034 it_2571;
 rt_int pos_2572;
 P1027 r_2573;
 P1040 vt_2574;
 rstr v_2575;
 P1034 k_2576;
 rt_int d_2577;
 P1038 pre_2578;
 P1027 loops_2579;
 P1027 ends_2580;
 rstr v_2581;
 rstr xv_2582;
 P1034 k_2583;
 rstr xv_2584;
 rstr v_2585;
};
struct f_e_line_903fr { int dummy;
 P1034 e_902;
 rt_int result_;
};
struct f_add_line_906fr { int dummy;
 P1038 l_904;
 rstr *s_905;
 P1038 result_;
 P1038 r_2586;
 P1038 tail_2587;
 P1038 x_2588;
 P1038 p_2589;
};
struct f_item_value_911fr { int dummy;
 P1034 e_907;
 P1040 at_908;
 rt_int line_909;
 P1040 *vt_910;
 P1040 vt_910v;
 rstr result_;
 rstr v_2592;
};
struct f_key_loop_916fr { int dummy;
 P1034 k_912;
 P1040 at_913;
 rt_int d_914;
 rstr *xv_915;
 rstr result_;
 P1040 it_2593;
 rstr lo_2594;
 rstr hi_2595;
};
struct f_store_at_921fr { int dummy;
 P1040 at_917;
 rstr *tmp_918;
 P1038 xs_919;
 rt_int n_920;
 rstr result_;
 P1027 off_2596;
 P1038 x_2597;
 rt_int k_2598;
 rstr l_2599;
 rstr h_2600;
};
struct f_fits_924fr { int dummy;
 P1044 y_922;
 P1034 args_923;
 int result_;
 P1034 a_2601;
 P1046 pm_2602;
 P1040 t_2603;
 P1057 saved_2604;
 int ok_2605;
 P1027 lv_2606;
 P1036 lc_2607;
 int ro_2608;
 rstr v_2611;
};
struct f_resolve_overload_930fr { int dummy;
 rstr *name_925;
 P1034 tt_926;
 P1034 args_927;
 int is_stmt_928;
 rt_int line_929;
 P1044 result_;
 P1044 y_2612;
 P1044 first_2613;
 rt_int n_2614;
 rt_int pass_2615;
};
struct f_tt_fits_933fr { int dummy;
 P1044 y_931;
 P1034 tt_932;
 int result_;
 P1034 f_2619;
 P1034 a_2620;
 P1057 saved_2621;
 int ok_2622;
 P1036 fc_2625;
 P1036 ac_2626;
 P1034 fst_2627;
 P1040 ft_2628;
 P1040 at_2629;
 P1034 ast_2630;
};
struct f_overload_chain_936fr { int dummy;
 rstr *name_934;
 rt_int pass_935;
 P1044 result_;
};
struct f_is_builtin_938fr { int dummy;
 rstr *n_937;
 int result_;
};
struct f_is_low_level_940fr { int dummy;
 rstr *n_939;
 int result_;
};
struct f_me_high_944fr { int dummy;
 P1034 tt_941;
 rt_int line_942;
 P1040 *t_943;
 P1040 t_943v;
 rstr result_;
 P1036 c_2631;
};
struct f_type_tag_946fr { int dummy;
 P1040 t_945;
 rstr result_;
};
struct f_lock_ref_949fr { int dummy;
 P1034 e_947;
 rstr *name_948;
 rstr result_;
 P1027 lv_2632;
 P1040 t_2633;
 P1036 c_2634;
 int ro_2635;
};
struct f_user_op_952fr { int dummy;
 rstr *op_950;
 P1034 args_951;
 P1044 result_;
 P1044 y_2636;
 rt_int pass_2637;
};
struct f_gcall_956fr { int dummy;
 P1034 e_953;
 int is_stmt_954;
 P1040 *t_955;
 P1040 t_955v;
 rstr result_;
 P1034 gd_2641;
 P1034 fn_2642;
 P1034 tt_2643;
 P1044 y_2644;
 P1027 args_2645;
 P1034 a_2646;
 P1046 pm_2647;
 P1040 lt_2648;
 P1040 vt_2649;
 P1027 lv_2650;
 P1036 lc_2651;
 int ro_2652;
 P1044 alt_2653;
 P1061 cr_2654;
 rt_int i_2655;
 rstr v_2659;
 rstr ct_2660;
 rstr v_2661;
 rstr chk_2662;
};
struct f_requires_958fr { int dummy;
 P1044 y_957;
 P1038 result_;
 P1034 imp_2663;
};
struct f_add_req_961fr { int dummy;
 P1044 y_959;
 rstr *name_960;
 P1038 l_2664;
};
struct f_require_calls_964fr { int dummy;
 P1044 y_962;
 P1034 e_963;
 P1034 x_2666;
 P1034 callee_2667;
 P1044 z_2668;
 P1038 l_2669;
};
struct f_declared_in_967fr { int dummy;
 P1034 elems_965;
 rstr *name_966;
 int result_;
 P1034 e_2670;
};
struct f_check_requires_970fr { int dummy;
 P1044 y_968;
 rt_int line_969;
 P1038 l_2671;
 P1044 z_2672;
};
struct f_act_delay_args_972fr { int dummy;
 P1034 args_971;
 rstr result_;
 P1040 at_2673;
 P1040 t1_2674;
 rstr a_2675;
 rstr v_2676;
 rstr v_2677;
};
struct f_same_subtypes_975fr { int dummy;
 P1034 gd_973;
 P1034 args_974;
 rstr result_;
 P1034 p_2678;
 P1027 r_2679;
 P1034 fp_2680;
 P1034 a_2681;
 P1027 flo_2682;
 P1027 fhi_2683;
 P1040 st_2684;
 P1036 c_2685;
 P1027 base_2686;
 P1027 lo_2687;
 P1027 hi_2688;
};
struct f_mailbox_low_980fr { int dummy;
 rstr *name_976;
 P1034 args_977;
 rt_int line_978;
 P1040 *t_979;
 P1040 t_979v;
 rstr result_;
 P1027 qv_2689;
 P1027 mv_2690;
 P1027 dv_2691;
 P1040 qt_2692;
 P1040 mt_2693;
 P1040 dt_2694;
 P1040 at_2695;
 P1036 c_2696;
 int ro_2697;
 int send_2698;
 rstr v_2699;
};
struct f_exponent_want_983fr { int dummy;
 rstr *op_981;
 P1040 ta_982;
 P1040 result_;
};
struct f_file_ref_987fr { int dummy;
 P1034 e_984;
 int text_985;
 rt_int line_986;
 rstr result_;
 P1040 t_2700;
 rstr f_2701;
};
struct f_text_file_989fr { int dummy;
 P1040 t_988;
 int result_;
};
struct f_conversion_994fr { int dummy;
 P1034 tt_990;
 P1034 args_991;
 rt_int line_992;
 P1040 *t_993;
 P1040 t_993v;
 rstr result_;
 P1036 c_2702;
 P1040 at_2703;
 P1040 target_2704;
 rstr a_2705;
 P1027 r_2706;
};
struct f_float_digits_996fr { int dummy;
 P1034 e_995;
 rstr result_;
 P1027 lv_2707;
 P1040 t_2708;
 P1036 c_2709;
 int ro_2710;
 rt_int n_2711;
 int lead_2712;
 rt_int i_2713;
 P1057 saved_2717;
};
struct f_enum_names_998fr { int dummy;
 P1040 t_997;
 rstr result_;
 P1034 l_2718;
 P1027 r_2719;
};
struct f_explicit_rep_1000fr { int dummy;
 P1034 e_999;
 int result_;
 P1040 bt_2720;
};
struct f_actual_bounds_1004fr { int dummy;
 P1040 ft_1001;
 P1040 t_1002;
 P1036 c_1003;
 rstr result_;
};
struct f_builtin_1011fr { int dummy;
 rstr *name_1005;
 P1034 tt_1006;
 P1034 args_1007;
 rt_int line_1008;
 int is_stmt_1009;
 P1040 *t_1010;
 P1040 t_1010v;
 rstr result_;
 P1040 at_2721;
 rt_int n_2722;
 rstr a_2723;
 rstr a_2724;
 rstr a_2725;
 rstr a_2726;
 rstr a_2727;
 rstr a_2728;
 rstr a_2729;
 rstr n1_2730;
 rstr m1_2731;
 rstr a_2732;
 rstr f_2733;
 rstr a_2734;
 rstr a_2735;
 P1040 ft_2736;
 rstr f_2737;
 P1027 lv_2738;
 P1036 lc_2739;
 int ro_2740;
 rstr a_2741;
 P1027 lv_2742;
 P1036 lc_2743;
 int ro_2744;
 rstr f_2745;
 P1027 lv_2746;
 P1036 lc_2747;
 int ro_2748;
 rstr f_2749;
 rstr nm_2750;
 rstr st_2751;
 rstr f_2752;
 rstr d_2753;
 rstr f_2754;
 rstr v_2755;
 rstr a_2756;
 rstr b_2757;
 P1027 lv_2758;
 P1027 dv_2759;
 P1036 lc_2760;
 int ro_2761;
 P1040 mt_2762;
 P1040 dt_2763;
 rstr v_2764;
 P1027 lv_2765;
 P1036 lc_2766;
 int ro_2767;
 P1040 mt_2768;
 P1027 lv_2769;
 P1027 dv_2770;
 P1027 bv_2771;
 P1036 lc_2772;
 int ro_2773;
 P1040 mt_2774;
 P1040 dt_2775;
 P1040 bt_2776;
 rstr v_2777;
 rstr v_2778;
 rstr v_2779;
 rstr v_2780;
 rstr a_2781;
 P1027 bv_2782;
 P1036 bc_2783;
 int ro_2784;
 P1040 bt_2785;
 rstr l_2786;
 P1027 pv_2787;
 P1036 pc_2788;
 int ro_2789;
 P1040 pt_2790;
 rstr dev_2791;
 rstr cmd_2792;
 rstr v_2793;
 P1027 dv_2794;
 P1036 dc_2795;
 int ro_2796;
 P1040 dt_2797;
};
struct f_with_library_1013fr { int dummy;
 P1034 units_1012;
 P1034 result_;
 P1034 r_2798;
 int more_2799;
 P1027 missing_2800;
 rt_int saved_2801;
 P1034 lib_2802;
 P1034 t_2803;
};
struct f_external_missing_1016fr { int dummy;
 P1034 e_1014;
 P1034 units_1015;
 P1027 result_;
 P1034 x_2804;
 P1027 r_2805;
 P1027 r_2806;
};
struct f_unit_named_1019fr { int dummy;
 P1034 units_1017;
 rstr *name_1018;
 int result_;
 P1034 u_2807;
};
struct f_tried_1021fr { int dummy;
 rstr *name_1020;
 int result_;
};
struct f_mark_tried_1023fr { int dummy;
 rstr *name_1022;
 P1038 l_2808;
};
struct f_translate_1025fr { int dummy;
 P1034 units_1024;
 P1034 u_2810;
 P1034 l_2812;
 rstr w_2813;
};
struct f_print_program_1026fr { int dummy;
};
struct Pc1028 { rt_int p_n; rstr all; };
struct Pc1032 { rt_int p_n; A1033 all; };
struct Pc1049 { rt_int p_n; A1050 all; };
static void as_R1064(R1064 *d, R1064 s);
static R1064 cp_R1064(R1064 s);
static int eq_R1064(R1064 a, R1064 b);
static void as_R1062(R1062 *d, R1062 s);
static R1062 cp_R1062(R1062 s);
static int eq_R1062(R1062 a, R1062 b);
static void as_R1060(R1060 *d, R1060 s);
static R1060 cp_R1060(R1060 s);
static int eq_R1060(R1060 a, R1060 b);
static void as_R1058(R1058 *d, R1058 s);
static R1058 cp_R1058(R1058 s);
static int eq_R1058(R1058 a, R1058 b);
static void as_R1056(R1056 *d, R1056 s);
static R1056 cp_R1056(R1056 s);
static int eq_R1056(R1056 a, R1056 b);
static void as_R1054(R1054 *d, R1054 s);
static R1054 cp_R1054(R1054 s);
static int eq_R1054(R1054 a, R1054 b);
static void as_R1052(R1052 *d, R1052 s);
static R1052 cp_R1052(R1052 s);
static int eq_R1052(R1052 a, R1052 b);
static void as_A1050(A1050 *d, A1050 s);
static A1050 cp_A1050(A1050 s);
static int eq_A1050(A1050 a, A1050 b);
static void as_R1047(R1047 *d, R1047 s);
static R1047 cp_R1047(R1047 s);
static int eq_R1047(R1047 a, R1047 b);
static void as_R1045(R1045 *d, R1045 s);
static R1045 cp_R1045(R1045 s);
static int eq_R1045(R1045 a, R1045 b);
static void as_R1043(R1043 *d, R1043 s);
static R1043 cp_R1043(R1043 s);
static int eq_R1043(R1043 a, R1043 b);
static void as_R1041(R1041 *d, R1041 s);
static R1041 cp_R1041(R1041 s);
static int eq_R1041(R1041 a, R1041 b);
static void as_R1039(R1039 *d, R1039 s);
static R1039 cp_R1039(R1039 s);
static int eq_R1039(R1039 a, R1039 b);
static void as_R1037(R1037 *d, R1037 s);
static R1037 cp_R1037(R1037 s);
static int eq_R1037(R1037 a, R1037 b);
static void as_R1035(R1035 *d, R1035 s);
static R1035 cp_R1035(R1035 s);
static int eq_R1035(R1035 a, R1035 b);
static void as_A1033(A1033 *d, A1033 s);
static A1033 cp_A1033(A1033 s);
static int eq_A1033(A1033 a, A1033 b);
static void as_R1030(R1030 *d, R1030 s);
static R1030 cp_R1030(R1030 s);
static int eq_R1030(R1030 a, R1030 b);
static P1027 f_mk_3(rstr *s_2);
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
static P1057 f_new_buffer_24(void);
static void f_put_27(P1057 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P1057 b_30);
static void f_splice_34(P1057 a_32, P1057 b_33);
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
static void f_write_library_62(P1034 u_61);
static P1034 f_nn_65(rt_int kind_63, rt_int line_64);
static void f_append_69(P1034 *head_66, P1034 *tail_67, P1034 x_68);
static rt_int f_list_len_71(P1034 l_70);
static rt_int f_cur_line_72(void);
static int f_at_kw_74(rstr *w_73);
static int f_at_op_76(rstr *w_75);
static int f_at_kind_78(rt_int k_77);
static rt_int f_kind_at_80(rt_int k_79);
static P1027 f_text_at_82(rt_int k_81);
static void f_perror_84(rstr *msg_83);
static int f_accept_kw_86(rstr *w_85);
static int f_accept_op_88(rstr *w_87);
static void f_expect_kw_90(rstr *w_89);
static void f_expect_op_92(rstr *w_91);
static P1027 f_expect_id_93(void);
static P1034 f_name_node_94(void);
static P1034 f_id_list_95(void);
static P1034 f_p_subtype_96(void);
static P1034 f_constraint_list_97(void);
static P1034 f_actual_params_98(void);
static int f_is_type_word_100(rstr *w_99);
static P1034 f_actual_tt_101(void);
static P1034 f_binop_106(P1027 op_102, P1034 l_103, P1034 r_104, rt_int line_105);
static P1034 f_expr_107(void);
static P1034 f_expr_and_108(void);
static P1034 f_expr_not_109(void);
static int f_is_rel_111(rstr *s_110);
static P1034 f_expr_rel_112(void);
static P1034 f_expr_add_113(void);
static P1034 f_expr_mul_114(void);
static P1034 f_expr_pow_115(void);
static P1034 f_expr_prefix_116(void);
static P1034 f_postfix_117(void);
static P1034 f_primary_118(void);
static P1034 f_constructor_item_119(void);
static int f_at_body_end_120(void);
static P1034 f_body_121(void);
static P1034 f_body_element_122(void);
static P1034 f_declaration_123(void);
static P1034 f_object_decl_124(void);
static P1034 f_abbrev_decl_125(void);
static P1034 f_rep_spec_126(void);
static P1034 f_rep_items_127(void);
static int f_rep_word_129(rt_int k_128);
static P1034 f_rep_item_130(void);
static P1034 f_type_decl_131(void);
static rt_int f_mode_of_133(rstr *w_132);
static P1034 f_formal_params_134(void);
static int f_imports_list_136(P1034 owner_135);
static int f_is_definable_138(rstr *w_137);
static P1027 f_definable_name_139(void);
static P1034 f_subprogram_decl_140(void);
static P1034 f_capsule_decl_141(void);
static P1034 f_formal_tt_142(void);
static P1034 f_generic_decl_143(void);
static P1034 f_type_list_144(void);
static P1034 f_task_decl_145(void);
static P1034 f_expose_decl_146(void);
static int f_is_compound_kw_148(rstr *w_147);
static P1034 f_statement_149(void);
static P1034 f_unlabeled_statement_150(void);
static P1034 f_arm_154(P1034 cond_151, P1034 b_152, rt_int line_153);
static P1034 f_if_stmt_155(void);
static P1034 f_case_stmt_156(void);
static P1034 f_repeat_stmt_157(void);
static P1034 f_guard_stmt_158(void);
static P1034 f_program_159(void);
static rt_int f_hash_161(rstr *s_160);
static P1044 f_lookup_163(rstr *name_162);
static P1044 f_lookup_decl_165(P1034 d_164);
static void f_define_168(P1044 y_166, rt_int line_167);
static int f_overloadable_170(P1044 y_169);
static int f_same_tt_173(P1034 a_171, P1034 b_172);
static int f_same_signature_176(P1046 a_174, P1046 b_175);
static void f_open_scope_177(void);
static void f_close_scope_178(void);
static P1044 f_new_sym_181(rt_int kind_179, P1027 name_180);
static P1040 f_new_typ_183(rt_int kind_182);
static P1036 f_new_cons_184(void);
static int f_scalar_kind_186(P1040 t_185);
static rstr f_bound_ctype_188(P1040 t_187);
static rstr f_cbound_191(P1036 c_189, rstr *b_190);
static rstr f_clo_193(P1036 c_192);
static rstr f_chi_195(P1036 c_194);
static rstr f_sub_lo_198(P1040 t_196, P1036 c_197);
static rstr f_sub_hi_201(P1040 t_199, P1036 c_200);
static rstr f_raw_storage_204(rstr *name_202, rstr *ct_203);
static P1036 f_copy_cons_206(P1036 c_205);
static P1036 f_freeze_209(P1036 c_207, P1040 t_208);
static rstr f_checked_213(P1040 t_210, P1036 c_211, rstr *v_212);
static int f_same_lits_216(P1034 a_214, P1034 b_215);
static P1040 f_str_elem_218(P1040 t_217);
static int f_same_221(P1040 a_219, P1040 b_220);
static P1040 f_base_of_223(P1040 t_222);
static P1036 f_base_cons_226(P1040 t_224, P1036 c_225);
static rstr f_kind_name_228(P1040 t_227);
static void f_check_type_232(P1040 got_229, P1040 want_230, rt_int line_231);
static rstr f_ctype_234(P1040 t_233);
static rstr f_struct_body_236(P1040 t_235);
static rstr f_field_decls_238(P1040 t_237);
static void f_declare_ctype_240(P1040 t_239);
static rstr f_dim_lo_242(rt_int k_241);
static rstr f_dim_hi_244(rt_int k_243);
static rstr f_more_dims_246(P1040 t_245);
static rstr f_acnt_249(P1040 t_247, rstr *base_248);
static P1027 f_cons_lo_252(P1036 c_250, rt_int k_251);
static P1027 f_cons_hi_255(P1036 c_253, rt_int k_254);
static P1040 f_idx_type_258(P1040 t_256, rt_int k_257);
static void f_init_ascii_259(void);
static P1040 f_enum2_262(rstr *a_260, rstr *b_261);
static rt_int f_lit_index_265(P1034 lits_263, rstr *name_264);
static P1040 f_resolve_subtype_268(P1034 st_266, P1036 *c_267);
static int f_float_lit_270(P1034 e_269);
static void f_tag_constraint_274(P1040 t_271, P1034 e_272, P1036 c_273);
static P1040 f_named_subtype_277(P1034 st_275, P1036 *c_276);
static P1040 f_invoke_abbrev_281(P1044 y_278, P1034 st_279, P1036 *c_280);
static void f_apply_constraint_286(P1040 t_282, P1034 args_283, P1036 c_284, rt_int line_285);
static P1040 f_value_subtype_290(P1034 e_287, P1036 *c_288, P1027 *base_289);
static P1038 f_reverse_pairs_292(P1038 l_291);
static P1040 f_inquiry_295(P1034 st_293, P1036 *c_294);
static P1034 f_as_subtype_297(P1034 e_296);
static P1034 f_tt_subtype_302(P1027 name_298, P1034 tt_299, P1034 args_300, rt_int line_301);
static int f_type_name_304(rstr *name_303);
static rstr f_empty_set_306(P1040 t_305);
static int f_sparse_set_308(P1040 t_307);
static rstr f_set_fn_311(P1040 t_309, rstr *op_310);
static int f_opened_313(P1040 t_312);
static rstr f_replace_all_317(rstr *s_314, rstr *pat_315, rstr *r_316);
static rstr f_subst_319(rstr *s_318);
static P1040 f_new_type_323(P1044 y_320, P1034 st_321, P1036 *c_322);
static rt_int f_needed_bits_326(P1040 t_324, P1036 c_325);
static int f_has_digits_only_328(rstr *s_327);
static int f_built_in_only_330(P1040 t_329);
static void f_check_rep_337(P1034 items_331, P1040 t_332, P1036 c_333, int top_334, int indirect_335, P1034 d_336);
static int f_formal_named_340(P1034 d_338, rstr *name_339);
static int f_unchecked_free_342(P1040 t_341);
static void f_init_storage_346(rstr *lval_343, P1040 t_344, P1036 c_345);
static rstr f_init_call_349(P1044 y_347, rstr *lval_348);
static int f_needs_fin_351(P1040 t_350);
static rstr f_fin_code_354(rstr *lval_352, P1040 t_353);
static P1040 f_tparam_type_357(P1040 t_355, rstr *name_356);
static void f_make_storage_361(rstr *lval_358, P1040 t_359, P1036 c_360);
static int f_flat_363(P1040 t_362);
static rstr f_uninit_value_365(P1040 t_364);
static rstr f_init_chk_368(P1040 t_366, rstr *v_367);
static rt_int f_manifest_371(P1034 e_369, int *ok_370);
static P1053 f_mk_mval_374(rt_int kind_372, rt_int i_373);
static rt_int f_ipow_377(rt_int a_375, rt_int b_376);
static P1053 f_meval_380(P1034 e_378, int *ok_379);
static P1053 f_float_op_385(rstr *op_381, P1053 a_382, P1053 b_383, int *ok_384);
static rstr f_bool_text_387(int b_386);
static rt_int f_bool_i_389(int b_388);
static rstr f_mstr_391(P1053 v_390);
static int f_ascii_char_393(rt_int i_392);
static int f_user_defined_395(rstr *op_394);
static rstr f_mcopy_397(P1040 t_396);
static int f_composite_399(P1040 t_398);
static rstr f_user_call2_405(P1044 y_400, rstr *a_401, int lv_a_402, rstr *b_403, int lv_b_404);
static rstr f_user_arg_409(P1046 pm_406, rstr *v_407, int lv_408);
static int f_top_level_411(P1044 y_410);
static rstr f_assign_code_416(rstr *lval_412, P1040 t_413, rstr *v_414, P1036 c_415);
static rstr f_copy_code_419(P1040 t_417, rstr *v_418);
static rstr f_eq_code_423(P1040 t_420, rstr *a_421, rstr *b_422);
static rstr f_elem_assign_427(rstr *lval_424, P1040 t_425, rstr *v_426);
static int f_seen_name_430(P1038 l_428, rstr *s_429);
static void f_emit_helpers_431(void);
static void f_helper_bodies_433(P1040 t_432);
static void f_declare_body_435(P1034 elems_434);
static void f_manifest_const_437(P1034 d_436);
static int f_exported_441(P1034 d_438, rstr *name_439, int *ro_440);
static P1044 f_copy_sym_443(P1044 y_442);
static void f_gen_capsule_445(P1034 d_444);
static int f_imports_variables_447(P1034 d_446);
static void f_elaborate_pending_449(P1044 y_448);
static int f_pending_capsule_451(rstr *name_450);
static void f_capsule_params_455(P1034 d_452, P1034 args_453, rt_int line_454);
static void f_elaborate_capsule_460(P1034 d_456, P1044 y_457, P1034 args_458, P1034 owner_459);
static int f_exports_op_463(P1034 d_461, rstr *op_462);
static P1027 f_renamed_466(P1034 d_464, P1044 z_465);
static int f_cap_tt_match_469(P1034 f_467, P1034 a_468);
static P1044 f_pick_capsule_471(P1034 d_470);
static P1044 f_capsule_instance_474(P1044 g_472, P1034 d_473);
static void f_configure_476(P1044 y_475);
static void f_gen_expose_478(P1034 d_477);
static void f_finish_ptr_480(P1040 t_479);
static P1034 f_ptr_args_482(P1036 c_481);
static void f_bind_ptr_params_487(P1034 formals_483, P1034 actuals_484, rstr *cell_485, rt_int line_486);
static void f_alloc_cell_492(P1034 s_488, rstr *lv_489, P1040 t_490, P1036 c_491);
static P1036 f_freeze_args_496(P1036 c_493, P1040 t_494, rt_int line_495);
static void f_ptr_subtype_check_500(P1040 t_497, P1036 c_498, P1034 src_499);
static void f_normal_function_503(P1034 d_501, P1044 y_502);
static void f_foreign_body_506(P1034 d_504, P1044 y_505);
static void f_declare_subprogram_508(P1034 d_507);
static P1044 f_build_subprogram_510(P1034 d_509);
static int f_has_pragmat_513(P1027 pr_511, rstr *p_512);
static P1027 f_suppressing_515(P1027 pr_514);
static int f_suppressed_517(rstr *x_516);
static void f_element_519(P1034 e_518);
static void f_element1_521(P1034 e_520);
static rstr f_storage_524(rstr *name_522, P1040 t_523);
static void f_bind_527(P1044 y_525, rstr *access_526);
static void f_var_decl_529(P1034 d_528);
static void f_located_var_531(P1034 d_530);
static rstr f_rep_sync_534(P1044 y_532, int pack_533);
static rstr f_cbound_access_536(P1044 y_535);
static rstr f_rep_size_540(P1034 items_537, P1040 t_538, P1036 c_539);
static P1034 f_rep_find_543(P1034 items_541, rstr *w_542);
static P1034 f_rep_comp_546(P1034 items_544, rstr *name_545);
static rt_int f_default_bits_549(P1040 t_547, P1036 c_548);
static rstr f_rep_code_556(P1040 t_550, P1036 c_551, P1034 items_552, rstr *lval_553, rstr *addr_554, int pack_555);
static rstr f_union_part_558(P1040 t_557);
static rstr f_rep_scalar_565(P1040 t_559, P1036 c_560, rstr *lval_561, rstr *addr_562, rstr *size_563, int pack_564);
static void f_max_range_568(P1040 t_566, P1036 c_567);
static void f_var_decl2_570(P1034 d_569);
static void f_open_fin_572(rstr *fc_571);
static void f_close_fins_574(P1038 saved_573);
static void f_const_decl_576(P1034 d_575);
static void f_subprogram_578(P1034 d_577);
static void f_gen_subprogram_581(P1034 d_579, P1044 y_580);
static rstr f_waits_of_583(P1034 d_582);
static rstr f_task_waits_585(P1034 elems_584);
static void f_await_tasks_587(P1034 elems_586);
static void f_capsule_elements_589(P1034 elems_588);
static void f_declare_labels_591(P1034 elems_590);
static void f_start_labels_592(void);
static P1059 f_goto_label_594(rstr *name_593);
static int f_has_return_596(P1034 e_595);
static void f_capsule_body_598(P1034 elems_597);
static void f_body_elements_600(P1034 elems_599);
static void f_gen_body_602(P1034 elems_601);
static rstr f_open_unhandled_604(P1034 elems_603);
static void f_close_unhandled_606(rstr *xu_605);
static void f_pop_frames_608(rt_int upto_607);
static void f_push_cleanup_610(rstr *s_609);
static void f_pop_cleanup_611(void);
static void f_gen_statement_613(P1034 s_612);
static P1044 f_located_in_616(P1034 e_614, P1044 found_615);
static int f_sym_in_619(P1044 l_617, P1044 y_618);
static void f_gen_statement2_621(P1034 s_620);
static void f_st_assign_623(P1034 s_622);
static void f_st_call_625(P1034 s_624);
static void f_st_if_627(P1034 s_626);
static int f_manifest_case_629(P1034 s_628);
static void f_st_case_631(P1034 s_630);
static void f_st_case2_633(P1034 s_632);
static void f_user_for_637(P1034 s_634, P1040 t_635, P1036 c_636);
static void f_st_repeat_639(P1034 s_638);
static void f_st_exit_641(P1034 s_640);
static void f_st_return_643(P1034 s_642);
static rstr f_result_checked_647(P1040 t_644, P1036 c_645, rstr *v_646);
static rstr f_exc_id_650(rstr *name_648, rt_int line_649);
static void f_st_guard_652(P1034 s_651);
static void f_st_alloc_654(P1034 s_653);
static rstr f_act_ref_656(P1034 e_655);
static void f_st_create_658(P1034 s_657);
static void f_hidden_var_662(rstr *name_659, P1040 t_660, rstr *place_661);
static void f_user_create_668(P1034 s_663, P1044 y_664, rstr *uv_665, P1040 ut_666, rstr *nf_667);
static rstr f_wait_alt_673(P1034 inv_669, rstr *arr_670, rt_int i_671, int mixed_672);
static int f_builtin_wait_675(P1034 inv_674);
static rstr f_wait_op_680(P1034 inv_676, rstr *op_677, rstr *q_678, int is_stmt_679);
static void f_user_wait_685(P1034 s_681, rstr *arr_682, rstr *w_683, rt_int n_684);
static void f_st_wait_687(P1034 s_686);
static P1034 f_call_node_691(rstr *name_688, P1034 arg_689, rt_int line_690);
static void f_user_region_693(P1034 s_692);
static void f_st_region_695(P1034 s_694);
static P1034 f_gparam_698(P1034 g_696, rstr *name_697);
static P1044 f_bind_sym_700(P1034 p_699);
static int f_same_binds_703(P1044 a_701, P1044 b_702);
static int f_same_binding_706(P1044 a_704, P1044 b_705);
static P1044 f_tt_binds_711(P1034 gd_707, P1034 formals_708, P1034 actuals_709, rt_int line_710);
static int f_type_allowed_715(P1040 t_712, P1034 items_713, P1044 binds_714);
static P1040 f_resolve_in_binds_719(P1034 st_716, P1044 binds_717, P1036 *c_718);
static P1044 f_pick_operation_726(rt_int kind_720, rstr *name_721, P1034 sig_722, P1034 res_723, P1044 binds_724, rt_int line_725);
static rstr f_kind_word_728(rt_int kind_727);
static P1044 f_need_binds_732(P1034 gd_729, P1044 binds_730, rt_int line_731);
static int f_generic_use_734(P1034 st_733);
static P1044 f_infer_from_739(P1034 gd_735, P1034 pat_736, P1040 t_737, P1044 known_738);
static P1040 f_instantiate_type_745(P1044 g_740, P1034 tt_741, P1034 args_742, P1036 *c_743, rt_int line_744);
static P1044 f_instantiate_750(P1044 g_746, P1034 tt_747, P1034 args_748, rt_int line_749);
static rstr f_access_of_752(P1044 y_751);
static P1034 f_import_of_755(P1034 l_753, rstr *name_754);
static int f_check_import_758(P1044 y_756, rt_int line_757);
static rstr f_c_ident_760(rstr *s_759);
static rstr f_cell_deref_763(P1040 t_761, rstr *p_762);
static rstr f_deref_766(rstr *base_764, P1040 t_765);
static int f_is_lvalue_768(P1034 e_767);
static void f_lvalue_774(P1034 e_769, P1027 *code_770, P1040 *t_771, P1036 *c_772, int *ro_773);
static void f_select_on_782(rstr *base_775, P1040 bt_776, P1034 e_777, int *ro_778, P1027 *code_779, P1040 *t_780, P1036 *c_781);
static int f_has_call_784(rstr *s_783);
static void f_need_slice_786(P1040 t_785);
static rstr f_ix_790(rstr *i_787, rstr *lo_788, rstr *hi_789);
static void f_index_on_799(rstr *base_791, P1040 bt_792, P1034 e_793, int *ro_794, int lv_795, P1027 *code_796, P1040 *t_797, P1036 *c_798);
static int f_own_attribute_801(P1034 e_800);
static rstr f_gexpr_805(P1034 e_802, P1040 want_803, P1040 *t_804);
static rstr f_resolved_808(P1034 e_806, P1040 *t_807);
static rstr f_gexpr_base_811(P1034 e_809, P1040 *t_810);
static rstr f_gexpr_in_816(P1034 e_812, P1040 want_813, P1036 c_814, P1040 *t_815);
static rstr f_ascii_lit_818(int ch_817);
static rstr f_octal_820(rt_int n_819);
static P1040 f_str_cat_part_822(P1040 t_821);
static P1040 f_peek_type_824(P1034 e_823);
static P1040 f_set_operands_827(P1034 e_825, P1040 want_826);
static P1034 f_user_dot_829(P1034 e_828);
static P1034 f_user_subscript_831(P1034 e_830);
static P1034 f_op_call_835(rstr *name_832, P1034 args_833, rt_int line_834);
static P1034 f_derived_relation_837(P1034 e_836);
static P1034 f_rel_node_842(rstr *op_838, P1034 a_839, P1034 b_840, rt_int line_841);
static P1034 f_rel_not_845(P1034 x_843, rt_int line_844);
static P1034 f_copy_node_847(P1034 e_846);
static P1034 f_wrap_apply_849(P1034 e_848);
static rstr f_c_string_851(rstr *s_850);
static P1040 f_enum_type_of_854(rstr *lit_852, rt_int line_853);
static int f_ptr_attribute_856(P1034 e_855);
static rstr f_attribute_859(P1034 e_857, P1040 *t_858);
static rstr f_subtype_compare_864(P1034 sa_860, P1034 sb_861, rstr *op_862, rt_int line_863);
static rstr f_float_prec_866(P1036 c_865);
static rstr f_file_attribute_872(P1034 e_867, P1040 bt_868, P1036 c_869, P1027 base_870, P1040 *t_871);
static rstr f_gbinop_876(P1034 e_873, P1040 want_874, P1040 *t_875);
static rstr f_constructor_881(P1034 e_877, P1040 want_878, P1036 ctx_879, P1040 *t_880);
static rstr f_comp_value_885(P1040 t_882, P1036 c_883, rstr *v_884);
static int f_has_at_887(rstr *s_886);
static rstr f_set_elem_890(P1040 st_888, rstr *v_889);
static rstr f_array_cons_895(P1034 e_891, P1040 at_892, P1036 ctx_893, P1040 *t_894);
static rstr f_fill_items_901(P1034 items_896, P1040 at_897, rstr *tmp_898, P1038 prefix_899, rt_int dim_900);
static rt_int f_e_line_903(P1034 e_902);
static P1038 f_add_line_906(P1038 l_904, rstr *s_905);
static rstr f_item_value_911(P1034 e_907, P1040 at_908, rt_int line_909, P1040 *vt_910);
static rstr f_key_loop_916(P1034 k_912, P1040 at_913, rt_int d_914, rstr *xv_915);
static rstr f_store_at_921(P1040 at_917, rstr *tmp_918, P1038 xs_919, rt_int n_920);
static int f_fits_924(P1044 y_922, P1034 args_923);
static P1044 f_resolve_overload_930(rstr *name_925, P1034 tt_926, P1034 args_927, int is_stmt_928, rt_int line_929);
static int f_tt_fits_933(P1044 y_931, P1034 tt_932);
static P1044 f_overload_chain_936(rstr *name_934, rt_int pass_935);
static int f_is_builtin_938(rstr *n_937);
static int f_is_low_level_940(rstr *n_939);
static rstr f_me_high_944(P1034 tt_941, rt_int line_942, P1040 *t_943);
static rstr f_type_tag_946(P1040 t_945);
static rstr f_lock_ref_949(P1034 e_947, rstr *name_948);
static P1044 f_user_op_952(rstr *op_950, P1034 args_951);
static rstr f_gcall_956(P1034 e_953, int is_stmt_954, P1040 *t_955);
static P1038 f_requires_958(P1044 y_957);
static void f_add_req_961(P1044 y_959, rstr *name_960);
static void f_require_calls_964(P1044 y_962, P1034 e_963);
static int f_declared_in_967(P1034 elems_965, rstr *name_966);
static void f_check_requires_970(P1044 y_968, rt_int line_969);
static rstr f_act_delay_args_972(P1034 args_971);
static rstr f_same_subtypes_975(P1034 gd_973, P1034 args_974);
static rstr f_mailbox_low_980(rstr *name_976, P1034 args_977, rt_int line_978, P1040 *t_979);
static P1040 f_exponent_want_983(rstr *op_981, P1040 ta_982);
static rstr f_file_ref_987(P1034 e_984, int text_985, rt_int line_986);
static int f_text_file_989(P1040 t_988);
static rstr f_conversion_994(P1034 tt_990, P1034 args_991, rt_int line_992, P1040 *t_993);
static rstr f_float_digits_996(P1034 e_995);
static rstr f_enum_names_998(P1040 t_997);
static int f_explicit_rep_1000(P1034 e_999);
static rstr f_actual_bounds_1004(P1040 ft_1001, P1040 t_1002, P1036 c_1003);
static rstr f_builtin_1011(rstr *name_1005, P1034 tt_1006, P1034 args_1007, rt_int line_1008, int is_stmt_1009, P1040 *t_1010);
static P1034 f_with_library_1013(P1034 units_1012);
static P1027 f_external_missing_1016(P1034 e_1014, P1034 units_1015);
static int f_unit_named_1019(P1034 units_1017, rstr *name_1018);
static int f_tried_1021(rstr *name_1020);
static void f_mark_tried_1023(rstr *name_1022);
static void f_translate_1025(P1034 units_1024);
static void f_print_program_1026(void);
static int ex_compile_error_1;
static P1031 g_toks_1065;
static rt_int g_ntoks_1066;
static rt_int g_tpos_1067;
static rt_int g_src_line_1068;
static P1027 g_pending_prag_1069;
static P1038 g_src_head_1070;
static P1038 g_src_tail_1071;
static rt_int g_ntoks_before_library_1072;
static P1038 g_library_tried_1073;
static P1048 g_table_1074;
static P1048 g_genv_1075;
static P1044 g_all_insts_1076;
static rt_int g_depth_1077;
static P1044 g_scope_stack_1078;
static P1040 g_all_types_1079;
static rt_int g_serial_1080;
static P1057 g_out_types_1081;
static P1057 g_out_helpers_1082;
static P1057 g_out_protos_1083;
static P1057 g_out_globals_1084;
static P1057 g_out_funcs_1085;
static P1057 g_out_init_1086;
static P1057 g_out_excs_1087;
static P1057 g_code_1088;
static P1057 g_fields_buf_1089;
static int g_in_func_1090;
static rt_int g_cur_level_1091;
static P1051 g_fctx_1092;
static P1061 g_caps_1093;
static P1063 g_cap_waits_1094;
static P1038 g_psub_1095;
static P1027 g_st_field_1096;
static P1057 g_out_frames_1097;
static P1057 g_out_roots_1098;
static int g_uses_free_1099;
static P1038 g_fins_1100;
static int g_uses_findyn_1101;
static P1044 g_func_sym_1102;
static P1036 g_func_rc_1103;
static P1027 g_cap_ret_1104;
static P1027 g_cap_rflag_1105;
static rt_int g_ret_frames_1106;
static rt_int g_gdepth_1107;
static P1027 g_suppress_1108;
static P1036 g_cons_ctx_1109;
static int g_mark_uninit_1110;
static int g_skip_chk_1111;
static P1059 g_exits_1112;
static P1059 g_gotos_1113;
static rt_int g_frames_1114;
static P1038 g_handlers_1115;
static P1038 g_cleanups_1116;
static rt_int g_trial_1117;
static P1038 g_mcopies_1118;
static P1040 g_ty_int_1119;
static P1040 g_ty_bool_1120;
static P1040 g_ty_float_1121;
static P1040 g_ty_ascii_1122;
static P1040 g_ty_string_1123;
static P1040 g_ty_void_1124;
static P1040 g_ty_file_1125;
static P1040 g_ty_nil_1126;
static P1040 g_ty_lock_1127;
static P1040 g_ty_latch_1128;
static P1040 g_ty_act_1129;
static P1040 g_file_mode_type_1130;
static P1040 g_ty_send_st_1131;
static P1040 g_ty_receive_st_1132;
static P1040 g_ty_text_file_1133;
static P1040 g_file_state_type_1134;
static P1040 g_file_disp_type_1135;
static P1040 g_file_access_type_1136;
static P1036 g_no_cons_1137;
static P1027 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_1138 = NULL;
{ P1027 cell1139 = rt_alloc(sizeof *cell1139);
rt_int pv1140 = ((rt_int)(((*F->s_2)).len));
cell1139->p_n = pv1140;
cell1139->all = rt_str_new(pv1140);
rt_str_assign(&cell1139->all, (*F->s_2));
F->t_1138 = cell1139;
}
F->result_ = F->t_1138;
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
F->r_1141 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_1141, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_1141;
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
F->r_1142 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_1142, (*F->s_14));
{ rt_int lo1144 = ((rt_int)1LL), hi1145 = ((rt_int)(((*F->s_14)).len));
for (rt_int it1146 = lo1144; it1146 <= hi1145; it1146++) {
F->i_1143 = it1146;
if (((65 <= rt_str_get(F->r_1142, F->i_1143)) && (rt_str_get(F->r_1142, F->i_1143) <= 90))) {
(*rt_str_at(&F->r_1142, F->i_1143)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_str_get(F->r_1142, F->i_1143)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_1142;
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
F->l_1147 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_1148 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_1147), rt_str(" ", 1)));
{ rt_int lo1150 = ((rt_int)1LL), hi1151 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_1148).len))), ((rt_int)1LL));
for (rt_int it1152 = lo1150; it1152 <= hi1151; it1152++) {
F->i_1149 = it1152;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_1149, rt_sub(rt_add(F->i_1149, ((rt_int)((F->w_1148).len))), ((rt_int)1LL))), F->w_1148)) {
F->result_ = rt_str_cat(F->l_1147, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_1147;
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
g_serial_1080 = rt_add(g_serial_1080, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(g_serial_1080));
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
if ((g_trial_1117 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P1057 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_1153 = NULL;
{ R1058 *cell1154 = rt_alloc(sizeof(R1058));
(*cell1154).head = NULL;
(*cell1154).tail = NULL;
F->b_1153 = cell1154;
}
F->result_ = F->b_1153;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P1057 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_1155 = NULL;
{ R1039 *cell1156 = rt_alloc(sizeof(R1039));
(*cell1156).s = NULL;
(*cell1156).next = NULL;
F->l_1155 = cell1156;
}
(*(P1038)rt_nil_check(F->l_1155)).s = f_mk_3(&(*F->s_26));
if (((*(P1057)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P1057)rt_nil_check(F->b_25)).head = F->l_1155;
} else {
(*(P1038)rt_nil_check((*(P1057)rt_nil_check(F->b_25)).tail)).next = F->l_1155;
}
(*(P1057)rt_nil_check(F->b_25)).tail = F->l_1155;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_1088, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P1057 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_1157 = NULL;
F->l_1157 = (*(P1057)rt_nil_check(F->b_30)).head;
while ((F->l_1157 != NULL)) {
rt_putln((((P1027)rt_nil_check((*(P1038)rt_nil_check(F->l_1157)).s))->all));
F->l_1157 = (*(P1038)rt_nil_check(F->l_1157)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P1057 a_32, P1057 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P1057)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P1057)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P1057)rt_nil_check(F->a_32)).head = (*(P1057)rt_nil_check(F->b_33)).head;
} else {
(*(P1038)rt_nil_check((*(P1057)rt_nil_check(F->a_32)).tail)).next = (*(P1057)rt_nil_check(F->b_33)).head;
}
(*(P1057)rt_nil_check(F->a_32)).tail = (*(P1057)rt_nil_check(F->b_33)).tail;
(*(P1057)rt_nil_check(F->b_33)).head = NULL;
(*(P1057)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel1158 = (*F->w_35);
if (0 || rt_str_eq(sel1158, rt_str("ABBREV", 6)) || rt_str_eq(sel1158, rt_str("ABNORMAL", 8)) || rt_str_eq(sel1158, rt_str("ALL", 3)) || rt_str_eq(sel1158, rt_str("ALLOC", 5)) || rt_str_eq(sel1158, rt_str("ASSERT", 6)) || rt_str_eq(sel1158, rt_str("BEGIN", 5)) || rt_str_eq(sel1158, rt_str("BY", 2)) || rt_str_eq(sel1158, rt_str("CAPSULE", 7)) || rt_str_eq(sel1158, rt_str("CASE", 4)) || rt_str_eq(sel1158, rt_str("CONST", 5)) || rt_str_eq(sel1158, rt_str("CREATE", 6)) || rt_str_eq(sel1158, rt_str("DO", 2)) || rt_str_eq(sel1158, rt_str("ELSE", 4)) || rt_str_eq(sel1158, rt_str("ELSEIF", 6)) || rt_str_eq(sel1158, rt_str("END", 3)) || rt_str_eq(sel1158, rt_str("EXCEPTION", 9)) || rt_str_eq(sel1158, rt_str("EXIT", 4)) || rt_str_eq(sel1158, rt_str("EXPORTS", 7)) || rt_str_eq(sel1158, rt_str("EXPOSE", 6)) || rt_str_eq(sel1158, rt_str("EXTERNAL", 8)) || rt_str_eq(sel1158, rt_str("FOR", 3)) || rt_str_eq(sel1158, rt_str("FROM", 4)) || rt_str_eq(sel1158, rt_str("FUNC", 4)) || rt_str_eq(sel1158, rt_str("GENERIC", 7)) || rt_str_eq(sel1158, rt_str("GOTO", 4)) || rt_str_eq(sel1158, rt_str("GUARD", 5)) || rt_str_eq(sel1158, rt_str("IF", 2)) || rt_str_eq(sel1158, rt_str("IMPORTS", 7)) || rt_str_eq(sel1158, rt_str("LOCATION", 8)) || rt_str_eq(sel1158, rt_str("NAMED", 5)) || rt_str_eq(sel1158, rt_str("NEEDS", 5)) || rt_str_eq(sel1158, rt_str("NEW", 3)) || rt_str_eq(sel1158, rt_str("NONE", 4)) || rt_str_eq(sel1158, rt_str("OUT", 3)) || rt_str_eq(sel1158, rt_str("OF", 2)) || rt_str_eq(sel1158, rt_str("PRAG", 4)) || rt_str_eq(sel1158, rt_str("PROC", 4)) || rt_str_eq(sel1158, rt_str("RAISE", 5)) || rt_str_eq(sel1158, rt_str("READONLY", 8)) || rt_str_eq(sel1158, rt_str("REVERSE", 7)) || rt_str_eq(sel1158, rt_str("REGION", 6)) || rt_str_eq(sel1158, rt_str("RENAMING", 8)) || rt_str_eq(sel1158, rt_str("REP", 3)) || rt_str_eq(sel1158, rt_str("REPEAT", 6)) || rt_str_eq(sel1158, rt_str("RERAISE", 7)) || rt_str_eq(sel1158, rt_str("RETURN", 6)) || rt_str_eq(sel1158, rt_str("SUBTYPE", 7)) || rt_str_eq(sel1158, rt_str("TASK", 4)) || rt_str_eq(sel1158, rt_str("THEN", 4)) || rt_str_eq(sel1158, rt_str("TO", 2)) || rt_str_eq(sel1158, rt_str("TYPE", 4)) || rt_str_eq(sel1158, rt_str("VAR", 3)) || rt_str_eq(sel1158, rt_str("WAIT", 4)) || rt_str_eq(sel1158, rt_str("WHEN", 4)) || rt_str_eq(sel1158, rt_str("WHILE", 5))) {
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
F->t_1159 = NULL;
{ R1030 *cell1160 = rt_alloc(sizeof(R1030));
(*cell1160).s = NULL;
(*cell1160).prags = NULL;
F->t_1159 = cell1160;
}
(*(P1029)rt_nil_check(F->t_1159)).kind = F->kind_39;
(*(P1029)rt_nil_check(F->t_1159)).line = g_src_line_1068;
(*(P1029)rt_nil_check(F->t_1159)).ival = F->ival_41;
(*(P1029)rt_nil_check(F->t_1159)).s = f_mk_3(&(*F->s_40));
(*(P1029)rt_nil_check(F->t_1159)).prags = g_pending_prag_1069;
g_pending_prag_1069 = NULL;
g_ntoks_1066 = rt_add(g_ntoks_1066, ((rt_int)1LL));
(((P1031)rt_nil_check(g_toks_1065))->all).p[(rt_index(g_ntoks_1066, (((P1031)rt_nil_check(g_toks_1065))->all).lo, (((P1031)rt_nil_check(g_toks_1065))->all).hi) - (((P1031)rt_nil_check(g_toks_1065))->all).lo)] = F->t_1159;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_1161 = rt_add(F->i_44, ((rt_int)1LL));
while (((F->j_1161 <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_1161)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_1161))) || (rt_str_get((*F->line_43), F->j_1161) == 95)))) {
if (((rt_str_get((*F->line_43), F->j_1161) == 95) && ((F->j_1161 == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_str_get((*F->line_43), rt_add(F->j_1161, ((rt_int)1LL)))) || f_is_digit_11(rt_str_get((*F->line_43), rt_add(F->j_1161, ((rt_int)1LL))))))))) {
f_fail_23(g_src_line_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_1161 = rt_add(F->j_1161, ((rt_int)1LL));
}
F->result_ = F->j_1161;
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
F->w_1162 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_1162, (*F->s_46));
{ rt_int lo1164 = ((rt_int)1LL), hi1165 = ((rt_int)((F->w_1162).len));
for (rt_int it1166 = lo1164; it1166 <= hi1165; it1166++) {
F->k_1163 = it1166;
(*rt_str_at(&F->w_1162, F->k_1163)) = f_upper_13(rt_str_get(F->w_1162, F->k_1163));
}
}
F->result_ = F->w_1162;
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
F->j_1167 = F->i_49;
while (((F->j_1167 <= ((rt_int)(((*F->line_48)).len))) && ((rt_str_get((*F->line_48), F->j_1167) == 32) || (rt_str_get((*F->line_48), F->j_1167) == 9)))) {
F->j_1167 = rt_add(F->j_1167, ((rt_int)1LL));
}
F->result_ = F->j_1167;
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
F->j_1168 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_1169 = NULL;
F->r_1169 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_1170 = 1;
if (((F->j_1168 > ((rt_int)(((*F->line_51)).len))) || (rt_str_get((*F->line_51), F->j_1168) != 40))) {
f_fail_23(g_src_line_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_1168 = rt_add(F->j_1168, ((rt_int)1LL));
while (F->more_1170) {
F->j_1168 = f_skip_blanks_50(&(*F->line_51), F->j_1168);
if (((F->j_1168 > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_str_get((*F->line_51), F->j_1168))))) {
f_fail_23(g_src_line_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_1171 = f_ident_end_45(&(*F->line_51), F->j_1168);
F->r_1169 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_1169))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), F->j_1168, rt_sub(F->k_1171, ((rt_int)1LL))); b_; }))); b_; }));
F->j_1168 = f_skip_blanks_50(&(*F->line_51), F->k_1171);
if (((F->j_1168 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_1168) == 40))) {
F->go_1172 = 1;
F->r_1169 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_1169))->all), rt_str("(", 1)); b_; }));
F->j_1168 = rt_add(F->j_1168, ((rt_int)1LL));
while (F->go_1172) {
F->j_1168 = f_skip_blanks_50(&(*F->line_51), F->j_1168);
if (((F->j_1168 > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_str_get((*F->line_51), F->j_1168))))) {
f_fail_23(g_src_line_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_1171 = f_ident_end_45(&(*F->line_51), F->j_1168);
F->r_1169 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_1169))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), F->j_1168, rt_sub(F->k_1171, ((rt_int)1LL))); b_; }))); b_; }));
F->j_1168 = f_skip_blanks_50(&(*F->line_51), F->k_1171);
if (((F->j_1168 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_1168) == 44))) {
F->r_1169 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_1169))->all), rt_str(",", 1)); b_; }));
F->j_1168 = rt_add(F->j_1168, ((rt_int)1LL));
} else if (((F->j_1168 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_1168) == 41))) {
F->j_1168 = rt_add(F->j_1168, ((rt_int)1LL));
F->go_1172 = 0;
} else {
f_fail_23(g_src_line_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_1169 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_1169))->all), rt_str(")", 1)); b_; }));
}
F->r_1169 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_1169))->all), rt_str(";", 1)); b_; }));
F->j_1168 = f_skip_blanks_50(&(*F->line_51), F->j_1168);
if (((F->j_1168 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_1168) == 44))) {
F->j_1168 = rt_add(F->j_1168, ((rt_int)1LL));
} else if (((F->j_1168 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_1168) == 41))) {
F->j_1168 = rt_add(F->j_1168, ((rt_int)1LL));
F->more_1170 = 0;
} else {
f_fail_23(g_src_line_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P1027)rt_nil_check(F->r_1169))->all));
if ((g_pending_prag_1069 == NULL)) {
g_pending_prag_1069 = F->r_1169;
} else {
g_pending_prag_1069 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(g_pending_prag_1069))->all), (((P1027)rt_nil_check(F->r_1169))->all)); b_; }));
}
F->result_ = F->j_1168;
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
F->i_1173 = ((rt_int)1LL);
while ((F->i_1173 <= ((rt_int)(((*F->r_54)).len)))) {
F->k_1174 = F->i_1173;
while ((rt_str_get((*F->r_54), F->k_1174) != 59)) {
F->k_1174 = rt_add(F->k_1174, ((rt_int)1LL));
}
{
F->p_1175 = rt_str_copy(rt_str_slice((*F->r_54), F->i_1173, rt_sub(F->k_1174, ((rt_int)1LL))));
F->ok_1176 = ((((((((((rt_str_eq(F->p_1175, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_1175, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_1175, rt_str("OPEN", 4))) || rt_str_eq(F->p_1175, rt_str("CLOSED", 6))) || rt_str_eq(F->p_1175, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_1175, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_1175, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1175, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_1175, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_1175, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_1175).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_1175, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_1177 = ((((((((((rt_int)((F->p_1175).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_1175, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_1175, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_1175, rt_str("OPEN", 4))) || rt_str_eq(F->p_1175, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_1175).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_1175, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_1175, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1175, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_1175).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_1175, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_1177 && (!F->ok_1176))) {
f_fail_23(g_src_line_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_1175); b_; }));
}
}
F->i_1173 = rt_add(F->k_1174, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_1178 = ((rt_int)1LL);
F->j_1179 = ((rt_int)0LL);
F->n_1180 = ((rt_int)(((*F->line_56)).len));
while ((F->i_1178 <= F->n_1180)) {
F->c_1181 = rt_str_get((*F->line_56), F->i_1178);
if (((((F->c_1181 == 32) || (F->c_1181 == 9)) || (F->c_1181 == 13)) || (F->c_1181 == 12))) {
F->i_1178 = rt_add(F->i_1178, ((rt_int)1LL));
} else if ((F->c_1181 == 37)) {
F->i_1178 = rt_add(F->n_1180, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_1181)) {
F->j_1179 = f_ident_end_45(&(*F->line_56), F->i_1178);
{
F->w_1182 = rt_str_new(rt_sub(F->j_1179, F->i_1178));
rt_str_assign(&F->w_1182, rt_str_slice((*F->line_56), F->i_1178, rt_sub(F->j_1179, ((rt_int)1LL))));
{ rt_int lo1184 = ((rt_int)1LL), hi1185 = ((rt_int)((F->w_1182).len));
for (rt_int it1186 = lo1184; it1186 <= hi1185; it1186++) {
F->k_1183 = it1186;
(*rt_str_at(&F->w_1182, F->k_1183)) = f_upper_13(rt_str_get(F->w_1182, F->k_1183));
}
}
if (rt_str_eq(F->w_1182, rt_str("PRAGMAT", 7))) {
while (((F->j_1179 <= F->n_1180) && (rt_str_get((*F->line_56), F->j_1179) != 59))) {
F->j_1179 = rt_add(F->j_1179, ((rt_int)1LL));
}
F->j_1179 = rt_add(F->j_1179, ((rt_int)1LL));
} else if (rt_str_eq(F->w_1182, rt_str("PRAG", 4))) {
F->j_1179 = f_lex_prag_53(&(*F->line_56), F->j_1179);
} else if (f_is_reserved_36(&F->w_1182)) {
f_add_token_42((((rt_int)2LL)), &F->w_1182, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_1182)) {
f_add_token_42((((rt_int)3LL)), &F->w_1182, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_1182, ((rt_int)0LL));
}
}
F->i_1178 = F->j_1179;
} else if (f_is_digit_11(F->c_1181)) {
F->j_1179 = F->i_1178;
while (((F->j_1179 <= F->n_1180) && f_is_digit_11(rt_str_get((*F->line_56), F->j_1179)))) {
F->j_1179 = rt_add(F->j_1179, ((rt_int)1LL));
}
if ((((F->j_1179 < F->n_1180) && (rt_str_get((*F->line_56), F->j_1179) == 46)) && f_is_digit_11(rt_str_get((*F->line_56), rt_add(F->j_1179, ((rt_int)1LL)))))) {
F->j_1179 = rt_add(F->j_1179, ((rt_int)1LL));
while (((F->j_1179 <= F->n_1180) && f_is_digit_11(rt_str_get((*F->line_56), F->j_1179)))) {
F->j_1179 = rt_add(F->j_1179, ((rt_int)1LL));
}
if (((F->j_1179 <= F->n_1180) && ((rt_str_get((*F->line_56), F->j_1179) == 69) || (rt_str_get((*F->line_56), F->j_1179) == 101)))) {
F->j_1179 = rt_add(F->j_1179, ((rt_int)1LL));
if (((F->j_1179 <= F->n_1180) && ((rt_str_get((*F->line_56), F->j_1179) == 43) || (rt_str_get((*F->line_56), F->j_1179) == 45)))) {
F->j_1179 = rt_add(F->j_1179, ((rt_int)1LL));
}
while (((F->j_1179 <= F->n_1180) && f_is_digit_11(rt_str_get((*F->line_56), F->j_1179)))) {
F->j_1179 = rt_add(F->j_1179, ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), F->i_1178, rt_sub(F->j_1179, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), F->i_1178, rt_sub(F->j_1179, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), F->i_1178, rt_sub(F->j_1179, ((rt_int)1LL)))));
}
F->i_1178 = F->j_1179;
} else if ((((F->c_1181 == 39) && (F->i_1178 < F->n_1180)) && (rt_str_get((*F->line_56), rt_add(F->i_1178, ((rt_int)1LL))) == 39))) {
F->j_1179 = rt_add(F->i_1178, ((rt_int)2LL));
while (((F->j_1179 < F->n_1180) && (!((rt_str_get((*F->line_56), F->j_1179) == 39) && (rt_str_get((*F->line_56), rt_add(F->j_1179, ((rt_int)1LL))) == 39))))) {
if ((rt_str_get((*F->line_56), F->j_1179) == 34)) {
f_fail_23(g_src_line_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_1179 = rt_add(F->j_1179, ((rt_int)1LL));
}
if ((F->j_1179 >= F->n_1180)) {
f_fail_23(g_src_line_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(F->i_1178, ((rt_int)2LL)), rt_sub(F->j_1179, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1178 = rt_add(F->j_1179, ((rt_int)2LL));
} else if ((F->c_1181 == 39)) {
F->j_1179 = rt_add(F->i_1178, ((rt_int)1LL));
if (((F->j_1179 > F->n_1180) || (!f_is_letter_9(rt_str_get((*F->line_56), F->j_1179))))) {
f_fail_23(g_src_line_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_1179 = f_ident_end_45(&(*F->line_56), F->j_1179);
{
F->w_1187 = rt_str_new(rt_sub(rt_sub(F->j_1179, F->i_1178), ((rt_int)1LL)));
rt_str_assign(&F->w_1187, rt_str_slice((*F->line_56), rt_add(F->i_1178, ((rt_int)1LL)), rt_sub(F->j_1179, ((rt_int)1LL))));
{ rt_int lo1189 = ((rt_int)1LL), hi1190 = ((rt_int)((F->w_1187).len));
for (rt_int it1191 = lo1189; it1191 <= hi1190; it1191++) {
F->k_1188 = it1191;
(*rt_str_at(&F->w_1187, F->k_1188)) = f_upper_13(rt_str_get(F->w_1187, F->k_1188));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_1187, ((rt_int)0LL));
}
F->i_1178 = F->j_1179;
} else if ((F->c_1181 == 34)) {
F->j_1179 = rt_add(F->i_1178, ((rt_int)1LL));
while (((F->j_1179 <= F->n_1180) && (rt_str_get((*F->line_56), F->j_1179) != 34))) {
if ((rt_str_get((*F->line_56), F->j_1179) == 39)) {
f_fail_23(g_src_line_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_1179 = rt_add(F->j_1179, ((rt_int)1LL));
}
if ((F->j_1179 > F->n_1180)) {
f_fail_23(g_src_line_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(F->i_1178, ((rt_int)1LL)), rt_sub(F->j_1179, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1178 = rt_add(F->j_1179, ((rt_int)1LL));
} else {
{
F->two_1192 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_1192, rt_str("  ", 2));
(*rt_str_at(&F->two_1192, ((rt_int)1LL))) = F->c_1181;
if ((F->i_1178 < F->n_1180)) {
(*rt_str_at(&F->two_1192, ((rt_int)2LL))) = rt_str_get((*F->line_56), rt_add(F->i_1178, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_1192, rt_str(":=", 2)) || rt_str_eq(F->two_1192, rt_str("=>", 2))) || rt_str_eq(F->two_1192, rt_str("..", 2))) || rt_str_eq(F->two_1192, rt_str("**", 2))) || rt_str_eq(F->two_1192, rt_str("/=", 2))) || rt_str_eq(F->two_1192, rt_str("<=", 2))) || rt_str_eq(F->two_1192, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_1192, ((rt_int)0LL));
F->i_1178 = rt_add(F->i_1178, ((rt_int)2LL));
} else if (((rt_str_eq(F->two_1192, rt_str("<<", 2)) || rt_str_eq(F->two_1192, rt_str(">>", 2))) || rt_str_eq(F->two_1192, rt_str("::", 2)))) {
if (rt_str_eq(F->two_1192, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_1192, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_1178 = rt_add(F->i_1178, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_1181 == 40) || (F->c_1181 == 41)) || (F->c_1181 == 91)) || (F->c_1181 == 93)) || (F->c_1181 == 44)) || (F->c_1181 == 58)) || (F->c_1181 == 59)) || (F->c_1181 == 46)) || (F->c_1181 == 35)) || (F->c_1181 == 43)) || (F->c_1181 == 45)) || (F->c_1181 == 42)) || (F->c_1181 == 47)) || (F->c_1181 == 38)) || (F->c_1181 == 61)) || (F->c_1181 == 60)) || (F->c_1181 == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_1181); b_; }), ((rt_int)0LL));
F->i_1178 = rt_add(F->i_1178, ((rt_int)1LL));
} else {
f_fail_23(g_src_line_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_1193 = rt_str_new(rt_sizeln());
F->l_1194 = NULL;
rt_r_readln(&F->line_1193);
g_src_line_1068 = rt_add(g_src_line_1068, ((rt_int)1LL));
{ R1039 *cell1195 = rt_alloc(sizeof(R1039));
(*cell1195).s = NULL;
(*cell1195).next = NULL;
F->l_1194 = cell1195;
}
(*(P1038)rt_nil_check(F->l_1194)).s = f_mk_3(&F->line_1193);
if ((g_src_tail_1071 == NULL)) {
g_src_head_1070 = F->l_1194;
} else {
(*(P1038)rt_nil_check(g_src_tail_1071)).next = F->l_1194;
}
g_src_tail_1071 = F->l_1194;
f_lex_line_57(&F->line_1193);
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
F->f_1196 = rt_r_file_new(0, 0, sizeof(int), 1);
F->found_1197 = 1;
{ rt_frame xf1198;
if (RT_TRY(xf1198)) {
rt_r_open(F->f_1196, rt_str_cat(f_lower_s_15(&(*F->name_59)), rt_str(".red", 4)), 0);
RT_POP(xf1198);
} else {
RT_POP(xf1198);
int x1199 = rt_xcur;
if (0 || x1199 == rt_exc("X_NOFILE") || x1199 == rt_exc("X_FILENAME")) {
F->found_1197 = 0;
} else {
rt_raise(x1199);
}
}
}
if ((!F->found_1197)) {
F->result_ = 0;
goto ret_;
}
while ((!rt_r_feof(F->f_1196))) {
F->line_1200 = rt_str_new(rt_r_fsizeln(F->f_1196));
rt_r_freadln(F->f_1196, &F->line_1200);
g_src_line_1068 = rt_add(g_src_line_1068, ((rt_int)1LL));
f_lex_line_57(&F->line_1200);
}
rt_r_close(F->f_1196, 0);
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_write_library_62(P1034 u_61) {
  struct f_write_library_62fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->u_61 = u_61;
F->f_1201 = rt_r_file_new(0, 1, sizeof(int), 1);
F->l_1202 = NULL;
F->l_1202 = g_src_head_1070;
F->n_1203 = ((rt_int)1LL);
rt_r_open(F->f_1201, rt_str_cat(f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->u_61)).name))->all)), rt_str(".red", 4)), 1);
while (((F->l_1202 != NULL) && (F->n_1203 <= (*(P1034)rt_nil_check(F->u_61)).eline))) {
if ((F->n_1203 >= (*(P1034)rt_nil_check(F->u_61)).line)) {
rt_r_fwriteln(F->f_1201, (((P1027)rt_nil_check((*(P1038)rt_nil_check(F->l_1202)).s))->all));
}
F->n_1203 = rt_add(F->n_1203, ((rt_int)1LL));
F->l_1202 = (*(P1038)rt_nil_check(F->l_1202)).next;
}
rt_r_close(F->f_1201, 0);
ret_:
  RT_FPOP();
  return;
}

static P1034 f_nn_65(rt_int kind_63, rt_int line_64) {
  struct f_nn_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_63 = kind_63;
F->line_64 = line_64;
F->x_1204 = NULL;
{ R1035 *cell1205 = rt_alloc(sizeof(R1035));
(*cell1205).name = NULL;
(*cell1205).tag = NULL;
(*cell1205).prags = NULL;
(*cell1205).labels = NULL;
(*cell1205).a = NULL;
(*cell1205).b = NULL;
(*cell1205).c = NULL;
(*cell1205).d = NULL;
(*cell1205).e = NULL;
(*cell1205).next = NULL;
F->x_1204 = cell1205;
}
(*(P1034)rt_nil_check(F->x_1204)).kind = F->kind_63;
(*(P1034)rt_nil_check(F->x_1204)).line = F->line_64;
F->result_ = F->x_1204;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_69(P1034 *head_66, P1034 *tail_67, P1034 x_68) {
  struct f_append_69fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_66 = head_66;
F->tail_67 = tail_67;
F->x_68 = x_68;
if (((*F->head_66) == NULL)) {
(*F->head_66) = F->x_68;
} else {
(*(P1034)rt_nil_check((*F->tail_67))).next = F->x_68;
}
(*F->tail_67) = F->x_68;
while (((*(P1034)rt_nil_check((*F->tail_67))).next != NULL)) {
(*F->tail_67) = (*(P1034)rt_nil_check((*F->tail_67))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_71(P1034 l_70) {
  struct f_list_len_71fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_70 = l_70;
F->n_1206 = ((rt_int)0LL);
F->p_1207 = NULL;
F->p_1207 = F->l_70;
while ((F->p_1207 != NULL)) {
F->n_1206 = rt_add(F->n_1206, ((rt_int)1LL));
F->p_1207 = (*(P1034)rt_nil_check(F->p_1207)).next;
}
F->result_ = F->n_1206;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_72(void) {
  struct f_cur_line_72fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).line;
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
F->result_ = (((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).kind == (((rt_int)2LL))) && rt_str_eq((((P1027)rt_nil_check((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_73)));
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
F->result_ = (((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).kind == (((rt_int)3LL))) && rt_str_eq((((P1027)rt_nil_check((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_75)));
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
F->result_ = ((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).kind == F->k_77);
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
if ((rt_add(g_tpos_1067, F->k_79) > g_ntoks_1066)) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(rt_add(g_tpos_1067, F->k_79), b_.lo, b_.hi) - b_.lo)]; }))).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1027 f_text_at_82(rt_int k_81) {
  struct f_text_at_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_81 = k_81;
if ((rt_add(g_tpos_1067, F->k_81) > g_ntoks_1066)) {
F->result_ = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_ntoks_1066, b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(rt_add(g_tpos_1067, F->k_81), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_83), rt_str(" (at ", 5)), (((P1027)rt_nil_check((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_86(rstr *w_85) {
  struct f_accept_kw_86fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_85 = w_85;
if (f_at_kw_74(&(*F->w_85))) {
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
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
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
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
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
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
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1027 f_expect_id_93(void) {
  struct f_expect_id_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_78((((rt_int)1LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->result_ = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(rt_sub(g_tpos_1067, ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_name_node_94(void) {
  struct f_name_node_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1208 = NULL;
F->x_1208 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
(*(P1034)rt_nil_check(F->x_1208)).name = f_expect_id_93();
F->result_ = F->x_1208;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_id_list_95(void) {
  struct f_id_list_95fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1209 = NULL;
F->tail_1210 = NULL;
f_append_69(&F->head_1209, &F->tail_1210, f_name_node_94());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1209, &F->tail_1210, f_name_node_94());
}
F->result_ = F->head_1209;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_p_subtype_96(void) {
  struct f_p_subtype_96fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1211 = f_cur_line_72();
F->x_1212 = NULL;
if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->x_1212 = f_nn_65((((rt_int)81LL)), F->line_1211);
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1034)rt_nil_check(F->x_1212)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1212;
goto ret_;
}
if ((!f_at_kind_78((((rt_int)1LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_1213 = rt_str_copy((((P1027)rt_nil_check((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
if (rt_str_eq(F->w_1213, rt_str("ARRAY", 5))) {
F->x_1212 = f_nn_65((((rt_int)74LL)), F->line_1211);
{
F->head_1214 = NULL;
F->tail_1215 = NULL;
f_append_69(&F->head_1214, &F->tail_1215, f_p_subtype_96());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1214, &F->tail_1215, f_p_subtype_96());
}
(*(P1034)rt_nil_check(F->x_1212)).a = F->head_1214;
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P1034)rt_nil_check(F->x_1212)).b = f_p_subtype_96();
} else if ((rt_str_eq(F->w_1213, rt_str("RECORD", 6)) || rt_str_eq(F->w_1213, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_1213, rt_str("RECORD", 6))) {
F->x_1212 = f_nn_65((((rt_int)75LL)), F->line_1211);
} else {
F->x_1212 = f_nn_65((((rt_int)76LL)), F->line_1211);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1216 = NULL;
F->tail_1217 = NULL;
F->more_1218 = 1;
while (F->more_1218) {
F->names_1219 = NULL;
F->names_1219 = f_id_list_95();
F->st_1220 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1220 = f_p_subtype_96();
while ((F->names_1219 != NULL)) {
F->cmp_1221 = NULL;
F->cmp_1221 = f_nn_65((((rt_int)63LL)), (*(P1034)rt_nil_check(F->names_1219)).line);
(*(P1034)rt_nil_check(F->cmp_1221)).name = (*(P1034)rt_nil_check(F->names_1219)).name;
(*(P1034)rt_nil_check(F->cmp_1221)).a = F->st_1220;
f_append_69(&F->head_1216, &F->tail_1217, F->cmp_1221);
F->names_1219 = (*(P1034)rt_nil_check(F->names_1219)).next;
}
F->more_1218 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1034)rt_nil_check(F->x_1212)).a = F->head_1216;
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_1213, rt_str("UNION", 5)) && f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1212)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1213, rt_str("ENUM", 4))) {
F->x_1212 = f_nn_65((((rt_int)72LL)), F->line_1211);
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1222 = NULL;
F->tail_1223 = NULL;
F->more_1224 = 1;
while (F->more_1224) {
F->lit_1225 = NULL;
F->lit_1225 = f_nn_65((((rt_int)4LL)), F->line_1211);
if ((!f_at_kind_78((((rt_int)6LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P1034)rt_nil_check(F->lit_1225)).name = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
f_append_69(&F->head_1222, &F->tail_1223, F->lit_1225);
F->more_1224 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1034)rt_nil_check(F->x_1212)).a = F->head_1222;
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1212)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1034)rt_nil_check(F->x_1212)).c = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_1213, rt_str("STRING", 6)) || rt_str_eq(F->w_1213, rt_str("SET", 3))) || rt_str_eq(F->w_1213, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_1213, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_1213, rt_str("STRING", 6))) {
F->x_1212 = f_nn_65((((rt_int)73LL)), F->line_1211);
} else if (rt_str_eq(F->w_1213, rt_str("SET", 3))) {
F->x_1212 = f_nn_65((((rt_int)77LL)), F->line_1211);
} else if (rt_str_eq(F->w_1213, rt_str("MAILBOX", 7))) {
F->x_1212 = f_nn_65((((rt_int)78LL)), F->line_1211);
} else {
F->x_1212 = f_nn_65((((rt_int)79LL)), F->line_1211);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P1034)rt_nil_check(F->x_1212)).a = f_p_subtype_96();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1212)).b = f_actual_params_98();
}
} else if (rt_str_eq(F->w_1213, rt_str("INT", 3))) {
F->x_1212 = f_nn_65((((rt_int)70LL)), F->line_1211);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1212)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1034)rt_nil_check(F->x_1212)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1213, rt_str("FLOAT", 5))) {
F->x_1212 = f_nn_65((((rt_int)71LL)), F->line_1211);
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1212)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1212)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1034)rt_nil_check(F->x_1212)).c = f_expr_107();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_1212 = f_nn_65((((rt_int)80LL)), F->line_1211);
(*(P1034)rt_nil_check(F->x_1212)).name = f_mk_3(&F->w_1213);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1212)).a = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1212)).b = f_constraint_list_97();
(*(P1034)rt_nil_check(F->x_1212)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_1212;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_constraint_list_97(void) {
  struct f_constraint_list_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1226 = NULL;
F->tail_1227 = NULL;
F->more_1228 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_1228) {
F->line_1229 = f_cur_line_72();
F->lo_1230 = NULL;
F->lo_1230 = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1231 = NULL;
F->r_1231 = f_nn_65((((rt_int)16LL)), F->line_1229);
(*(P1034)rt_nil_check(F->r_1231)).a = F->lo_1230;
(*(P1034)rt_nil_check(F->r_1231)).b = f_expr_107();
f_append_69(&F->head_1226, &F->tail_1227, F->r_1231);
} else {
f_append_69(&F->head_1226, &F->tail_1227, F->lo_1230);
}
F->more_1228 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1226;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_actual_params_98(void) {
  struct f_actual_params_98fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1232 = NULL;
F->tail_1233 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_69(&F->head_1232, &F->tail_1233, f_expr_107());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1232, &F->tail_1233, f_expr_107());
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1232;
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

static P1034 f_actual_tt_101(void) {
  struct f_actual_tt_101fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1234 = NULL;
F->tail_1235 = NULL;
F->more_1236 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_1236) {
if ((f_at_kind_78((((rt_int)1LL))) && f_is_type_word_100(&(((P1027)rt_nil_check((*(P1029)rt_nil_check((((P1031)rt_nil_check(g_toks_1065))->all).p[(rt_index(g_tpos_1067, (((P1031)rt_nil_check(g_toks_1065))->all).lo, (((P1031)rt_nil_check(g_toks_1065))->all).hi) - (((P1031)rt_nil_check(g_toks_1065))->all).lo)])).s))->all)))) {
f_append_69(&F->head_1234, &F->tail_1235, f_p_subtype_96());
} else {
f_append_69(&F->head_1234, &F->tail_1235, f_expr_107());
}
F->more_1236 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1234;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_binop_106(P1027 op_102, P1034 l_103, P1034 r_104, rt_int line_105) {
  struct f_binop_106fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_102 = op_102;
F->l_103 = l_103;
F->r_104 = r_104;
F->line_105 = line_105;
F->x_1237 = NULL;
F->x_1237 = f_nn_65((((rt_int)9LL)), F->line_105);
(*(P1034)rt_nil_check(F->x_1237)).name = F->op_102;
(*(P1034)rt_nil_check(F->x_1237)).a = F->l_103;
(*(P1034)rt_nil_check(F->x_1237)).b = F->r_104;
F->result_ = F->x_1237;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_expr_107(void) {
  struct f_expr_107fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1238 = NULL;
F->l_1238 = f_expr_and_108();
while ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_1239 = NULL;
F->op_1239 = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1240 = f_cur_line_72();
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->l_1238 = f_binop_106(F->op_1239, F->l_1238, f_expr_and_108(), F->line_1240);
}
F->result_ = F->l_1238;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_expr_and_108(void) {
  struct f_expr_and_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1241 = NULL;
F->l_1241 = f_expr_not_109();
while (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_1242 = f_cur_line_72();
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->l_1241 = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_1241, f_expr_not_109(), F->line_1242);
}
F->result_ = F->l_1241;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_expr_not_109(void) {
  struct f_expr_not_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_1243 = NULL;
F->x_1243 = f_nn_65((((rt_int)8LL)), f_cur_line_72());
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1243)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P1034)rt_nil_check(F->x_1243)).a = f_expr_not_109();
F->result_ = F->x_1243;
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

static P1034 f_expr_rel_112(void) {
  struct f_expr_rel_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1244 = NULL;
F->l_1244 = f_expr_add_113();
while ((f_at_kind_78((((rt_int)3LL))) && f_is_rel_111(&(((P1027)rt_nil_check((*(P1029)rt_nil_check((((P1031)rt_nil_check(g_toks_1065))->all).p[(rt_index(g_tpos_1067, (((P1031)rt_nil_check(g_toks_1065))->all).lo, (((P1031)rt_nil_check(g_toks_1065))->all).hi) - (((P1031)rt_nil_check(g_toks_1065))->all).lo)])).s))->all)))) {
F->op_1245 = NULL;
F->op_1245 = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1246 = f_cur_line_72();
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->l_1244 = f_binop_106(F->op_1245, F->l_1244, f_expr_add_113(), F->line_1246);
}
F->result_ = F->l_1244;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_expr_add_113(void) {
  struct f_expr_add_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1247 = NULL;
F->l_1247 = f_expr_mul_114();
while ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_1248 = NULL;
F->op_1248 = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1249 = f_cur_line_72();
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->l_1247 = f_binop_106(F->op_1248, F->l_1247, f_expr_mul_114(), F->line_1249);
}
F->result_ = F->l_1247;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_expr_mul_114(void) {
  struct f_expr_mul_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1250 = NULL;
F->l_1250 = f_expr_pow_115();
while (((((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_1251 = NULL;
F->op_1251 = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1252 = f_cur_line_72();
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->l_1250 = f_binop_106(F->op_1251, F->l_1250, f_expr_pow_115(), F->line_1252);
}
F->result_ = F->l_1250;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_expr_pow_115(void) {
  struct f_expr_pow_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1253 = NULL;
F->l_1253 = f_expr_prefix_116();
while (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_1254 = f_cur_line_72();
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->l_1253 = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_1253, f_expr_prefix_116(), F->line_1254);
}
F->result_ = F->l_1253;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_expr_prefix_116(void) {
  struct f_expr_prefix_116fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_1255 = NULL;
F->x_1255 = f_nn_65((((rt_int)8LL)), f_cur_line_72());
(*(P1034)rt_nil_check(F->x_1255)).name = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1255)).a = f_expr_prefix_116();
F->result_ = F->x_1255;
goto ret_;
}
F->result_ = f_postfix_117();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_postfix_117(void) {
  struct f_postfix_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_1256 = NULL;
F->p_1256 = f_primary_118();
while (1) {
F->line_1257 = f_cur_line_72();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1258 = NULL;
F->x_1258 = f_nn_65((((rt_int)10LL)), F->line_1257);
F->head_1259 = NULL;
F->tail_1260 = NULL;
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1261 = 1;
while (F->more_1261) {
F->lo_1262 = NULL;
F->lo_1262 = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1263 = NULL;
F->r_1263 = f_nn_65((((rt_int)16LL)), F->line_1257);
(*(P1034)rt_nil_check(F->r_1263)).a = F->lo_1262;
(*(P1034)rt_nil_check(F->r_1263)).b = f_expr_107();
f_append_69(&F->head_1259, &F->tail_1260, F->r_1263);
} else {
f_append_69(&F->head_1259, &F->tail_1260, F->lo_1262);
}
F->more_1261 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P1034)rt_nil_check(F->x_1258)).a = F->p_1256;
(*(P1034)rt_nil_check(F->x_1258)).b = F->head_1259;
F->p_1256 = F->x_1258;
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_80(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1264 = NULL;
F->x_1264 = f_nn_65((((rt_int)11LL)), F->line_1257);
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1264)).a = F->p_1256;
(*(P1034)rt_nil_check(F->x_1264)).name = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->p_1256 = F->x_1264;
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P1034)rt_nil_check(F->p_1256)).kind == (((rt_int)7LL))))) {
F->x_1265 = NULL;
F->x_1265 = f_nn_65((((rt_int)12LL)), F->line_1257);
(*(P1034)rt_nil_check(F->x_1265)).a = F->p_1256;
(*(P1034)rt_nil_check(F->x_1265)).b = f_actual_tt_101();
F->p_1256 = F->x_1265;
} else if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1266 = NULL;
F->x_1266 = f_nn_65((((rt_int)13LL)), F->line_1257);
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1266)).a = F->p_1256;
(*(P1034)rt_nil_check(F->x_1266)).b = f_p_subtype_96();
F->p_1256 = F->x_1266;
} else {
F->result_ = F->p_1256;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_primary_118(void) {
  struct f_primary_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1267 = f_cur_line_72();
F->x_1268 = NULL;
F->k_1269 = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).kind;
if ((F->k_1269 == (((rt_int)4LL)))) {
F->x_1268 = f_nn_65((((rt_int)1LL)), F->line_1267);
(*(P1034)rt_nil_check(F->x_1268)).ival = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).ival;
(*(P1034)rt_nil_check(F->x_1268)).name = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->result_ = F->x_1268;
goto ret_;
}
if ((((F->k_1269 == (((rt_int)5LL))) || (F->k_1269 == (((rt_int)7LL)))) || (F->k_1269 == (((rt_int)6LL))))) {
if ((F->k_1269 == (((rt_int)5LL)))) {
F->x_1268 = f_nn_65((((rt_int)2LL)), F->line_1267);
} else if ((F->k_1269 == (((rt_int)7LL)))) {
F->x_1268 = f_nn_65((((rt_int)3LL)), F->line_1267);
} else {
F->x_1268 = f_nn_65((((rt_int)4LL)), F->line_1267);
}
(*(P1034)rt_nil_check(F->x_1268)).name = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->result_ = F->x_1268;
goto ret_;
}
if ((F->k_1269 == (((rt_int)1LL)))) {
F->w_1270 = rt_str_copy((((P1027)rt_nil_check((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1270, rt_str("TRUE", 4)) || rt_str_eq(F->w_1270, rt_str("FALSE", 5)))) {
F->x_1268 = f_nn_65((((rt_int)5LL)), F->line_1267);
if (rt_str_eq(F->w_1270, rt_str("TRUE", 4))) {
(*(P1034)rt_nil_check(F->x_1268)).ival = ((rt_int)1LL);
}
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->result_ = F->x_1268;
goto ret_;
}
if (rt_str_eq(F->w_1270, rt_str("NIL", 3))) {
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->result_ = f_nn_65((((rt_int)6LL)), F->line_1267);
goto ret_;
}
F->result_ = f_name_node_94();
goto ret_;
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1268 = f_nn_65((((rt_int)17LL)), F->line_1267);
(*(P1034)rt_nil_check(F->x_1268)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1268;
goto ret_;
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1271 = NULL;
F->tail_1272 = NULL;
F->x_1268 = f_nn_65((((rt_int)14LL)), F->line_1267);
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1273 = 1;
while (F->more_1273) {
f_append_69(&F->head_1271, &F->tail_1272, f_constructor_item_119());
F->more_1273 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P1034)rt_nil_check(F->x_1268)).a = F->head_1271;
F->result_ = F->x_1268;
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

static P1034 f_constructor_item_119(void) {
  struct f_constructor_item_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1274 = f_cur_line_72();
F->it_1275 = NULL;
F->it_1275 = f_nn_65((((rt_int)15LL)), F->line_1274);
F->first_1276 = NULL;
F->first_1276 = f_expr_107();
F->keys_1277 = NULL;
F->ktail_1278 = NULL;
F->lab_1279 = NULL;
F->lab_1279 = f_nn_65((((rt_int)61LL)), F->line_1274);
(*(P1034)rt_nil_check(F->lab_1279)).a = F->first_1276;
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1034)rt_nil_check(F->lab_1279)).b = f_expr_107();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_69(&F->keys_1277, &F->ktail_1278, F->lab_1279);
} else if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1280 = g_tpos_1067;
F->more_1281 = NULL;
F->tail2_1282 = NULL;
F->ok_1283 = 0;
F->go_1284 = 1;
while ((F->go_1284 && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1285 = NULL;
F->l2_1285 = f_nn_65((((rt_int)61LL)), F->line_1274);
(*(P1034)rt_nil_check(F->l2_1285)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1034)rt_nil_check(F->l2_1285)).b = f_expr_107();
}
f_append_69(&F->more_1281, &F->tail2_1282, F->l2_1285);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1283 = 1;
F->go_1284 = 0;
} else if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1284 = 0;
}
}
if (F->ok_1283) {
f_append_69(&F->keys_1277, &F->ktail_1278, F->lab_1279);
f_append_69(&F->keys_1277, &F->ktail_1278, F->more_1281);
} else {
g_tpos_1067 = F->save_1280;
}
}
if (((F->keys_1277 == NULL) && ((*(P1034)rt_nil_check(F->lab_1279)).b != NULL))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1277 != NULL)) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P1034)rt_nil_check(F->it_1275)).a = F->keys_1277;
(*(P1034)rt_nil_check(F->it_1275)).b = f_expr_107();
} else {
(*(P1034)rt_nil_check(F->it_1275)).b = F->first_1276;
}
F->result_ = F->it_1275;
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

static P1034 f_body_121(void) {
  struct f_body_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1286 = NULL;
F->tail_1287 = NULL;
F->stmts_1288 = 0;
F->after_1289 = NULL;
while ((!f_at_body_end_120())) {
F->x_1290 = NULL;
F->x_1290 = f_body_element_122();
if (((F->x_1290 != NULL) && (((((*(P1034)rt_nil_check(F->x_1290)).kind == (((rt_int)40LL))) || ((*(P1034)rt_nil_check(F->x_1290)).kind == (((rt_int)41LL)))) || ((*(P1034)rt_nil_check(F->x_1290)).kind == (((rt_int)49LL)))) || ((*(P1034)rt_nil_check(F->x_1290)).kind == (((rt_int)48LL)))))) {
if (F->stmts_1288) {
f_fail_23((*(P1034)rt_nil_check(F->x_1290)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1290 != NULL) && ((*(P1034)rt_nil_check(F->x_1290)).kind >= (((rt_int)42LL)))) && ((*(P1034)rt_nil_check(F->x_1290)).kind <= (((rt_int)51LL))))) {
if ((F->stmts_1288 && (F->after_1289 == NULL))) {
F->after_1289 = F->x_1290;
}
} else if (((F->x_1290 != NULL) && ((*(P1034)rt_nil_check(F->x_1290)).kind != (((rt_int)33LL))))) {
if ((F->after_1289 != NULL)) {
f_fail_23((*(P1034)rt_nil_check(F->after_1289)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1288 = 1;
}
f_append_69(&F->head_1286, &F->tail_1287, F->x_1290);
}
F->result_ = F->head_1286;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_body_element_122(void) {
  struct f_body_element_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1291 = NULL;
F->pr_1292 = NULL;
F->pr_1292 = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1291 = f_declaration_123();
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1291 = f_nn_65((((rt_int)33LL)), f_cur_line_72());
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1291)).a = f_expr_107();
} else {
F->x_1291 = f_statement_149();
}
if ((F->pr_1292 != NULL)) {
F->p_1293 = NULL;
F->p_1293 = F->x_1291;
while ((F->p_1293 != NULL)) {
if (((*(P1034)rt_nil_check(F->p_1293)).prags == NULL)) {
(*(P1034)rt_nil_check(F->p_1293)).prags = F->pr_1292;
} else {
(*(P1034)rt_nil_check(F->p_1293)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->pr_1292))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1293)).prags))->all)); b_; }));
}
F->p_1293 = (*(P1034)rt_nil_check(F->p_1293)).next;
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1291;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_declaration_123(void) {
  struct f_declaration_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1294 = f_cur_line_72();
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
F->head_1295 = NULL;
F->tail_1296 = NULL;
F->names_1297 = NULL;
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->names_1297 = f_id_list_95();
while ((F->names_1297 != NULL)) {
F->x_1298 = NULL;
F->x_1298 = f_nn_65((((rt_int)49LL)), F->line_1294);
(*(P1034)rt_nil_check(F->x_1298)).name = (*(P1034)rt_nil_check(F->names_1297)).name;
f_append_69(&F->head_1295, &F->tail_1296, F->x_1298);
F->names_1297 = (*(P1034)rt_nil_check(F->names_1297)).next;
}
F->result_ = F->head_1295;
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

static P1034 f_object_decl_124(void) {
  struct f_object_decl_124fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1299 = f_cur_line_72();
F->is_var_1300 = f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1301 = NULL;
F->st_1302 = NULL;
F->init_1303 = NULL;
F->loc_1304 = NULL;
F->loc_kind_1305 = ((rt_int)0LL);
F->head_1306 = NULL;
F->tail_1307 = NULL;
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->names_1301 = f_id_list_95();
if (F->is_var_1300) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1302 = f_p_subtype_96();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1303 = f_expr_107();
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1027)rt_nil_check((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->loc_kind_1305 = ((rt_int)1LL);
} else {
F->loc_kind_1305 = ((rt_int)2LL);
}
F->loc_1304 = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (((F->init_1303 == NULL) && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; })))) {
F->init_1303 = f_expr_107();
}
} else {
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1302 = f_p_subtype_96();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1303 = f_expr_107();
}
while ((F->names_1301 != NULL)) {
F->x_1308 = NULL;
if (F->is_var_1300) {
F->x_1308 = f_nn_65((((rt_int)40LL)), F->line_1299);
} else {
F->x_1308 = f_nn_65((((rt_int)41LL)), F->line_1299);
}
(*(P1034)rt_nil_check(F->x_1308)).name = (*(P1034)rt_nil_check(F->names_1301)).name;
(*(P1034)rt_nil_check(F->x_1308)).a = F->st_1302;
(*(P1034)rt_nil_check(F->x_1308)).b = F->init_1303;
(*(P1034)rt_nil_check(F->x_1308)).c = F->loc_1304;
(*(P1034)rt_nil_check(F->x_1308)).ival = F->loc_kind_1305;
f_append_69(&F->head_1306, &F->tail_1307, F->x_1308);
F->names_1301 = (*(P1034)rt_nil_check(F->names_1301)).next;
}
F->result_ = F->head_1306;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_abbrev_decl_125(void) {
  struct f_abbrev_decl_125fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1309 = NULL;
F->x_1309 = f_nn_65((((rt_int)42LL)), f_cur_line_72());
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1309)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1309)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1309)).b = f_formal_params_134();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P1034)rt_nil_check(F->x_1309)).a = f_p_subtype_96();
F->result_ = F->x_1309;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_rep_spec_126(void) {
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

static P1034 f_rep_items_127(void) {
  struct f_rep_items_127fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1310 = NULL;
F->tail_1311 = NULL;
F->more_1312 = 1;
while (F->more_1312) {
f_append_69(&F->head_1310, &F->tail_1311, f_rep_item_130());
F->more_1312 = (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && f_rep_word_129(((rt_int)1LL)));
if (F->more_1312) {
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
}
}
F->result_ = F->head_1310;
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
F->w_1313 = rt_str_copy((((P1027)rt_nil_check(f_text_at_82(F->k_128)))->all));
F->result_ = (((f_kind_at_80(F->k_128) == (((rt_int)1LL))) || (f_kind_at_80(F->k_128) == (((rt_int)2LL)))) && ((((((((rt_str_eq(F->w_1313, rt_str("SIZE", 4)) || rt_str_eq(F->w_1313, rt_str("ALIGN", 5))) || rt_str_eq(F->w_1313, rt_str("OFFSET", 6))) || rt_str_eq(F->w_1313, rt_str("RECORD", 6))) || rt_str_eq(F->w_1313, rt_str("UNION", 5))) || rt_str_eq(F->w_1313, rt_str("ARRAY", 5))) || rt_str_eq(F->w_1313, rt_str("ABSENT", 6))) || rt_str_eq(F->w_1313, rt_str("PTR", 3))) || rt_str_eq(F->w_1313, rt_str("ENUM", 4))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_rep_item_130(void) {
  struct f_rep_item_130fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1314 = NULL;
F->x_1314 = f_nn_65((((rt_int)64LL)), f_cur_line_72());
if ((!f_rep_word_129(((rt_int)0LL)))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a representational item", 32); b_; }));
}
(*(P1034)rt_nil_check(F->x_1314)).name = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
if ((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1314)).name))->all), rt_str("SIZE", 4)) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1314)).name))->all), rt_str("OFFSET", 6)))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1034)rt_nil_check(F->x_1314)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
} else if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1314)).name))->all), rt_str("ALIGN", 5))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1034)rt_nil_check(F->x_1314)).a = f_expr_107();
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }))) {
(*(P1034)rt_nil_check(F->x_1314)).b = (*(P1034)rt_nil_check(F->x_1314)).a;
(*(P1034)rt_nil_check(F->x_1314)).a = f_expr_107();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
} else if ((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1314)).name))->all), rt_str("RECORD", 6)) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1314)).name))->all), rt_str("UNION", 5)))) {
F->head_1315 = NULL;
F->tail_1316 = NULL;
F->more_1317 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_1317) {
F->names_1318 = NULL;
F->names_1318 = f_id_list_95();
F->items_1319 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_rep_word_129(((rt_int)0LL))) {
F->items_1319 = f_rep_items_127();
}
while ((F->names_1318 != NULL)) {
F->cmp_1320 = NULL;
F->cmp_1320 = f_nn_65((((rt_int)63LL)), (*(P1034)rt_nil_check(F->names_1318)).line);
(*(P1034)rt_nil_check(F->cmp_1320)).name = (*(P1034)rt_nil_check(F->names_1318)).name;
(*(P1034)rt_nil_check(F->cmp_1320)).a = F->items_1319;
f_append_69(&F->head_1315, &F->tail_1316, F->cmp_1320);
F->names_1318 = (*(P1034)rt_nil_check(F->names_1318)).next;
}
F->more_1317 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P1034)rt_nil_check(F->x_1314)).c = F->head_1315;
} else if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1314)).name))->all), rt_str("ARRAY", 5))) {
F->head_1321 = NULL;
F->tail_1322 = NULL;
while ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; })))) {
f_append_69(&F->head_1321, &F->tail_1322, f_name_node_94());
if ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; })))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P1034)rt_nil_check(F->x_1314)).d = F->head_1321;
if (f_rep_word_129(((rt_int)0LL))) {
(*(P1034)rt_nil_check(F->x_1314)).c = f_rep_items_127();
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && f_rep_word_129(((rt_int)1LL)))) {
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1314)).c = f_rep_items_127();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->head_1323 = NULL;
F->tail_1324 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_69(&F->head_1323, &F->tail_1324, f_name_node_94());
F->dummy_1325 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P1034)rt_nil_check(F->x_1314)).d = F->head_1323;
}
F->result_ = F->x_1314;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_type_decl_131(void) {
  struct f_type_decl_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1326 = f_cur_line_72();
F->name_1327 = NULL;
F->params_1328 = NULL;
F->x_1329 = NULL;
F->tts_1330 = NULL;
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->name_1327 = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1330 = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1328 = f_formal_params_134();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1027)rt_nil_check((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->x_1329 = f_nn_65((((rt_int)44LL)), F->line_1326);
(*(P1034)rt_nil_check(F->x_1329)).d = F->params_1328;
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1329)).b = f_formal_params_134();
}
} else {
F->x_1329 = f_nn_65((((rt_int)43LL)), F->line_1326);
(*(P1034)rt_nil_check(F->x_1329)).b = F->params_1328;
}
(*(P1034)rt_nil_check(F->x_1329)).name = F->name_1327;
(*(P1034)rt_nil_check(F->x_1329)).e = F->tts_1330;
(*(P1034)rt_nil_check(F->x_1329)).a = f_p_subtype_96();
(*(P1034)rt_nil_check(F->x_1329)).c = f_rep_spec_126();
F->result_ = F->x_1329;
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

static P1034 f_formal_params_134(void) {
  struct f_formal_params_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1331 = NULL;
F->tail_1332 = NULL;
F->more_1333 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_1333) {
F->mode_1334 = (((rt_int)1LL));
F->names_1335 = NULL;
F->ntail_1336 = NULL;
F->st_1337 = NULL;
if ((((f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1334 = f_mode_of_133(&(((P1027)rt_nil_check((*(P1029)rt_nil_check((((P1031)rt_nil_check(g_toks_1065))->all).p[(rt_index(g_tpos_1067, (((P1031)rt_nil_check(g_toks_1065))->all).lo, (((P1031)rt_nil_check(g_toks_1065))->all).hi) - (((P1031)rt_nil_check(g_toks_1065))->all).lo)])).s))->all));
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
}
f_append_69(&F->names_1335, &F->ntail_1336, f_name_node_94());
while ((((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_80(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P1027)rt_nil_check(f_text_at_82(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P1027)rt_nil_check(f_text_at_82(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
f_append_69(&F->names_1335, &F->ntail_1336, f_name_node_94());
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1337 = f_p_subtype_96();
while ((F->names_1335 != NULL)) {
F->p_1338 = NULL;
F->p_1338 = f_nn_65((((rt_int)52LL)), (*(P1034)rt_nil_check(F->names_1335)).line);
(*(P1034)rt_nil_check(F->p_1338)).name = (*(P1034)rt_nil_check(F->names_1335)).name;
(*(P1034)rt_nil_check(F->p_1338)).ival = F->mode_1334;
(*(P1034)rt_nil_check(F->p_1338)).a = F->st_1337;
f_append_69(&F->head_1331, &F->tail_1332, F->p_1338);
F->names_1335 = (*(P1034)rt_nil_check(F->names_1335)).next;
}
F->more_1333 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1331;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_136(P1034 owner_135) {
  struct f_imports_list_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_135 = owner_135;
F->head_1339 = NULL;
F->tail_1340 = NULL;
F->more_1341 = 1;
if ((!f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1034)rt_nil_check(F->owner_135)).flag = rt_add((*(P1034)rt_nil_check(F->owner_135)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_1341) {
F->ro_1342 = f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1343 = NULL;
F->x_1343 = f_name_node_94();
if (F->ro_1342) {
(*(P1034)rt_nil_check(F->x_1343)).ival = ((rt_int)1LL);
}
f_append_69(&F->head_1339, &F->tail_1340, F->x_1343);
F->more_1341 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1034)rt_nil_check(F->owner_135)).d = F->head_1339;
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

static P1027 f_definable_name_139(void) {
  struct f_definable_name_139fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL))))) {
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)2LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1027)rt_nil_check((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(rt_sub(g_tpos_1067, ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)); b_; }));
goto ret_;
} else if (((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P1027)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("*", 1)))) {
F->r_1344 = NULL;
F->r_1344 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
while ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; }))) {
F->r_1344 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_1344))->all), rt_str("*", 1)); b_; }));
} else if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1344 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_1344))->all), rt_str("..", 2)); b_; }));
} else if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->r_1344 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_1344))->all), rt_str(",", 1)); b_; }));
} else {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a subscripting selector is made of *, .. and ,", 46); b_; }));
}
}
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_1344))->all), rt_str(")", 1)); b_; }));
goto ret_;
}
if ((f_at_kind_78((((rt_int)1LL))) || (f_at_kind_78((((rt_int)3LL))) && f_is_definable_138(&(((P1027)rt_nil_check((*(P1029)rt_nil_check((((P1031)rt_nil_check(g_toks_1065))->all).p[(rt_index(g_tpos_1067, (((P1031)rt_nil_check(g_toks_1065))->all).lo, (((P1031)rt_nil_check(g_toks_1065))->all).hi) - (((P1031)rt_nil_check(g_toks_1065))->all).lo)])).s))->all))))) {
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->result_ = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(rt_sub(g_tpos_1067, ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P1034 f_subprogram_decl_140(void) {
  struct f_subprogram_decl_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1345 = f_cur_line_72();
F->x_1346 = NULL;
F->is_abn_1347 = f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1348 = f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_1348) {
F->x_1346 = f_nn_65((((rt_int)46LL)), F->line_1345);
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1346 = f_nn_65((((rt_int)45LL)), F->line_1345);
} else {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
if (F->is_abn_1347) {
(*(P1034)rt_nil_check(F->x_1346)).flag = ((rt_int)1LL);
}
(*(P1034)rt_nil_check(F->x_1346)).name = f_definable_name_139();
if ((((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1346)).name))->all), rt_str(">", 1)) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1346)).name))->all), rt_str("<=", 2))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1346)).name))->all), rt_str(">=", 2))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1346)).name))->all), rt_str("/=", 2)))) {
f_fail_23(F->line_1345, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1346)).name))->all), rt_str(" is not a definable symbol", 26)); b_; }));
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1346)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1346)).a = f_formal_params_134();
}
if (F->is_func_1348) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1034)rt_nil_check(F->x_1346)).b = f_p_subtype_96();
}
F->dummy_1349 = f_imports_list_136(F->x_1346);
if (((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P1034)rt_nil_check(F->x_1346)).prags == NULL)) {
(*(P1034)rt_nil_check(F->x_1346)).prags = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P1034)rt_nil_check(F->x_1346)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1346)).prags))->all), (((P1027)rt_nil_check((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1034)rt_nil_check(F->x_1346)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_1348) {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P1027)rt_nil_check(f_definable_name_139()))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1346)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1346)).name))->all)); b_; }));
}
F->result_ = F->x_1346;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_capsule_decl_141(void) {
  struct f_capsule_decl_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1350 = NULL;
F->x_1350 = f_nn_65((((rt_int)47LL)), f_cur_line_72());
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1350)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1350)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1350)).b = f_formal_params_134();
}
F->dummy_1351 = f_imports_list_136(F->x_1350);
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1034)rt_nil_check(F->x_1350)).ival = ((rt_int)1LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P1034)rt_nil_check(F->x_1350)).ival = ((rt_int)0LL);
} else {
F->head_1352 = NULL;
F->tail_1353 = NULL;
F->more_1354 = 1;
while (F->more_1354) {
F->n_1355 = NULL;
F->n_1355 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P1034)rt_nil_check(F->n_1355)).ival = ((rt_int)1LL);
}
(*(P1034)rt_nil_check(F->n_1355)).name = f_definable_name_139();
f_append_69(&F->head_1352, &F->tail_1353, F->n_1355);
F->more_1354 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1034)rt_nil_check(F->x_1350)).a = F->head_1352;
(*(P1034)rt_nil_check(F->x_1350)).ival = ((rt_int)2LL);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1034)rt_nil_check(F->x_1350)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
(*(P1034)rt_nil_check(F->x_1350)).eline = f_cur_line_72();
if ((!rt_str_eq((((P1027)rt_nil_check(f_expect_id_93()))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1350)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1350;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_formal_tt_142(void) {
  struct f_formal_tt_142fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1356 = NULL;
F->tail_1357 = NULL;
F->more_1358 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_1358) {
f_append_69(&F->head_1356, &F->tail_1357, f_name_node_94());
F->more_1358 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1356;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_generic_decl_143(void) {
  struct f_generic_decl_143fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1359 = NULL;
F->x_1359 = f_nn_65((((rt_int)51LL)), f_cur_line_72());
F->head_1360 = NULL;
F->tail_1361 = NULL;
F->more_1362 = 1;
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
while (F->more_1362) {
F->names_1363 = NULL;
F->names_1363 = f_id_list_95();
F->kind_1364 = ((rt_int)6LL);
F->st_1365 = NULL;
F->items_1366 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1364 = ((rt_int)1LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1364 = ((rt_int)2LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1364 = ((rt_int)3LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1364 = ((rt_int)4LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1364 = ((rt_int)5LL);
} else if (((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1027)rt_nil_check((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("STRING", 6))) && (!((f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P1027)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->kind_1364 = ((rt_int)7LL);
} else if (((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1027)rt_nil_check((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("ENUM", 4))) && (!((f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P1027)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->kind_1364 = ((rt_int)8LL);
} else {
F->st_1365 = f_p_subtype_96();
}
if (((F->kind_1364 <= ((rt_int)5LL)) && f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
F->items_1366 = f_type_list_144();
}
if (((F->kind_1364 == ((rt_int)4LL)) && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1365 = f_p_subtype_96();
}
while ((F->names_1363 != NULL)) {
F->p_1367 = NULL;
F->p_1367 = f_nn_65((((rt_int)52LL)), (*(P1034)rt_nil_check(F->names_1363)).line);
(*(P1034)rt_nil_check(F->p_1367)).name = (*(P1034)rt_nil_check(F->names_1363)).name;
(*(P1034)rt_nil_check(F->p_1367)).ival = F->kind_1364;
(*(P1034)rt_nil_check(F->p_1367)).a = F->st_1365;
(*(P1034)rt_nil_check(F->p_1367)).b = F->items_1366;
f_append_69(&F->head_1360, &F->tail_1361, F->p_1367);
F->names_1363 = (*(P1034)rt_nil_check(F->names_1363)).next;
}
F->more_1362 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->nhead_1368 = NULL;
F->ntail_1369 = NULL;
F->more_1362 = 1;
while (F->more_1362) {
F->it_1370 = NULL;
F->it_1370 = f_nn_65((((rt_int)52LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
(*(P1034)rt_nil_check(F->it_1370)).ival = ((rt_int)3LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
(*(P1034)rt_nil_check(F->it_1370)).ival = ((rt_int)4LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
(*(P1034)rt_nil_check(F->it_1370)).ival = ((rt_int)5LL);
}
(*(P1034)rt_nil_check(F->it_1370)).name = f_definable_name_139();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1034)rt_nil_check(F->it_1370)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1034)rt_nil_check(F->it_1370)).b = f_type_list_144();
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
(*(P1034)rt_nil_check(F->it_1370)).a = f_p_subtype_96();
}
f_append_69(&F->nhead_1368, &F->ntail_1369, F->it_1370);
F->more_1362 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1034)rt_nil_check(F->x_1359)).d = F->nhead_1368;
}
(*(P1034)rt_nil_check(F->x_1359)).a = F->head_1360;
(*(P1034)rt_nil_check(F->x_1359)).b = f_declaration_123();
(*(P1034)rt_nil_check(F->x_1359)).name = (*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->x_1359)).b)).name;
F->result_ = F->x_1359;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_type_list_144(void) {
  struct f_type_list_144fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1371 = NULL;
F->tail_1372 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1373 = 1;
while (F->more_1373) {
if (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P1027)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(",", 1)) || rt_str_eq((((P1027)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(")", 1))))) {
F->n_1374 = NULL;
F->n_1374 = f_nn_65((((rt_int)80LL)), f_cur_line_72());
(*(P1034)rt_nil_check(F->n_1374)).name = f_expect_id_93();
f_append_69(&F->head_1371, &F->tail_1372, F->n_1374);
} else {
f_append_69(&F->head_1371, &F->tail_1372, f_p_subtype_96());
}
F->more_1373 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1371;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_task_decl_145(void) {
  struct f_task_decl_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1375 = NULL;
F->x_1375 = f_nn_65((((rt_int)50LL)), f_cur_line_72());
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1375)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1375)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1375)).a = f_formal_params_134();
}
F->dummy_1376 = f_imports_list_136(F->x_1375);
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1034)rt_nil_check(F->x_1375)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P1027)rt_nil_check(f_expect_id_93()))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1375)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1375)).name))->all)); b_; }));
}
F->result_ = F->x_1375;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_expose_decl_146(void) {
  struct f_expose_decl_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1377 = NULL;
F->x_1377 = f_nn_65((((rt_int)48LL)), f_cur_line_72());
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1034)rt_nil_check(F->x_1377)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1378 = NULL;
F->tail_1379 = NULL;
F->more_1380 = 1;
while (F->more_1380) {
F->n_1381 = NULL;
F->n_1381 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P1034)rt_nil_check(F->n_1381)).ival = ((rt_int)1LL);
}
(*(P1034)rt_nil_check(F->n_1381)).name = f_definable_name_139();
f_append_69(&F->head_1378, &F->tail_1379, F->n_1381);
F->more_1380 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1034)rt_nil_check(F->x_1377)).a = F->head_1378;
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P1034)rt_nil_check(F->x_1377)).flag = ((rt_int)1LL);
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P1034)rt_nil_check(F->x_1377)).flag = rt_add((*(P1034)rt_nil_check(F->x_1377)).flag, ((rt_int)2LL));
}
(*(P1034)rt_nil_check(F->x_1377)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1377)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1377)).b = f_actual_params_98();
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1382 = NULL;
F->tail_1383 = NULL;
F->more_1384 = 1;
while (F->more_1384) {
F->n_1385 = NULL;
F->n_1385 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
F->tgt_1386 = NULL;
F->tgt_1386 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
(*(P1034)rt_nil_check(F->n_1385)).name = f_definable_name_139();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P1034)rt_nil_check(F->tgt_1386)).name = f_definable_name_139();
(*(P1034)rt_nil_check(F->n_1385)).a = F->tgt_1386;
f_append_69(&F->head_1382, &F->tail_1383, F->n_1385);
F->more_1384 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1034)rt_nil_check(F->x_1377)).c = F->head_1382;
}
F->result_ = F->x_1377;
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

static P1034 f_statement_149(void) {
  struct f_statement_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1387 = NULL;
F->ltail_1388 = NULL;
F->match_1389 = NULL;
F->s_1390 = NULL;
while (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P1027)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_69(&F->labels_1387, &F->ltail_1388, f_name_node_94());
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
}
if (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_148(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1027)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all); b_; })))) {
F->match_1389 = f_expect_id_93();
}
F->s_1390 = f_unlabeled_statement_150();
if ((F->match_1389 != NULL)) {
if (((((((((*(P1034)rt_nil_check(F->s_1390)).kind != (((rt_int)22LL))) && ((*(P1034)rt_nil_check(F->s_1390)).kind != (((rt_int)23LL)))) && ((*(P1034)rt_nil_check(F->s_1390)).kind != (((rt_int)24LL)))) && ((*(P1034)rt_nil_check(F->s_1390)).kind != (((rt_int)25LL)))) && ((*(P1034)rt_nil_check(F->s_1390)).kind != (((rt_int)26LL)))) && ((*(P1034)rt_nil_check(F->s_1390)).kind != (((rt_int)35LL)))) && ((*(P1034)rt_nil_check(F->s_1390)).kind != (((rt_int)36LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->s_1390)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P1027)rt_nil_check(f_expect_id_93()))->all), (((P1027)rt_nil_check(F->match_1389))->all)))) {
f_fail_23((*(P1034)rt_nil_check(F->s_1390)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P1027)rt_nil_check(F->match_1389))->all)); b_; }));
}
(*(P1034)rt_nil_check(F->s_1390)).tag = F->match_1389;
}
(*(P1034)rt_nil_check(F->s_1390)).labels = F->labels_1387;
F->result_ = F->s_1390;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_unlabeled_statement_150(void) {
  struct f_unlabeled_statement_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1391 = f_cur_line_72();
F->x_1392 = NULL;
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
F->x_1392 = f_nn_65((((rt_int)25LL)), F->line_1391);
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1392)).a = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1392;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_158();
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1392 = f_nn_65((((rt_int)27LL)), F->line_1391);
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1392)).name = f_expect_id_93();
F->result_ = F->x_1392;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1392 = f_nn_65((((rt_int)28LL)), F->line_1391);
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P1034)rt_nil_check(F->x_1392)).a = f_expr_107();
}
F->result_ = F->x_1392;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1392 = f_nn_65((((rt_int)29LL)), F->line_1391);
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1392)).name = f_expect_id_93();
F->result_ = F->x_1392;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1392 = f_nn_65((((rt_int)30LL)), F->line_1391);
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1392)).name = f_expect_id_93();
F->result_ = F->x_1392;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->result_ = f_nn_65((((rt_int)31LL)), F->line_1391);
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1392 = f_nn_65((((rt_int)34LL)), F->line_1391);
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1392)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1392)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1392)).b = f_actual_params_98();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P1034)rt_nil_check(F->x_1392)).a = f_postfix_117();
F->result_ = F->x_1392;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1393 = NULL;
F->tail_1394 = NULL;
F->x_1392 = f_nn_65((((rt_int)35LL)), F->line_1391);
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1395 = NULL;
F->itail_1396 = NULL;
F->more_1397 = 1;
while (F->more_1397) {
f_append_69(&F->invs_1395, &F->itail_1396, f_postfix_117());
F->more_1397 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_69(&F->head_1393, &F->tail_1394, f_arm_154(F->invs_1395, f_body_121(), F->line_1391));
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P1034)rt_nil_check(F->x_1392)).a = F->head_1393;
F->result_ = F->x_1392;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1392 = f_nn_65((((rt_int)36LL)), F->line_1391);
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1392)).a = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P1034)rt_nil_check(F->x_1392)).b = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1392;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1392 = f_nn_65((((rt_int)32LL)), F->line_1391);
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1392)).a = f_postfix_117();
if ((!(f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1027)rt_nil_check((*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1034)rt_nil_check(F->x_1392)).b = f_actual_params_98();
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P1034)rt_nil_check(F->x_1392)).c = f_expr_107();
}
F->result_ = F->x_1392;
goto ret_;
}
{
F->target_1398 = NULL;
F->target_1398 = f_postfix_117();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1392 = f_nn_65((((rt_int)20LL)), F->line_1391);
(*(P1034)rt_nil_check(F->x_1392)).a = F->target_1398;
(*(P1034)rt_nil_check(F->x_1392)).b = f_expr_107();
} else {
F->x_1392 = f_nn_65((((rt_int)21LL)), F->line_1391);
(*(P1034)rt_nil_check(F->x_1392)).a = F->target_1398;
}
}
F->result_ = F->x_1392;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_arm_154(P1034 cond_151, P1034 b_152, rt_int line_153) {
  struct f_arm_154fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_151 = cond_151;
F->b_152 = b_152;
F->line_153 = line_153;
F->x_1399 = NULL;
F->x_1399 = f_nn_65((((rt_int)60LL)), F->line_153);
(*(P1034)rt_nil_check(F->x_1399)).a = F->cond_151;
(*(P1034)rt_nil_check(F->x_1399)).b = F->b_152;
F->result_ = F->x_1399;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_if_stmt_155(void) {
  struct f_if_stmt_155fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1400 = NULL;
F->x_1400 = f_nn_65((((rt_int)22LL)), f_cur_line_72());
F->head_1401 = NULL;
F->tail_1402 = NULL;
F->cond_1403 = NULL;
F->go_1404 = 1;
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
F->cond_1403 = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_69(&F->head_1401, &F->tail_1402, f_arm_154(F->cond_1403, f_body_121(), (*(P1034)rt_nil_check(F->x_1400)).line));
while (F->go_1404) {
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1403 = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_69(&F->head_1401, &F->tail_1402, f_arm_154(F->cond_1403, f_body_121(), (*(P1034)rt_nil_check(F->x_1400)).line));
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P1034)rt_nil_check(F->x_1400)).flag = ((rt_int)1LL);
(*(P1034)rt_nil_check(F->x_1400)).b = f_body_121();
} else {
F->go_1404 = 0;
}
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P1034)rt_nil_check(F->x_1400)).a = F->head_1401;
F->result_ = F->x_1400;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_case_stmt_156(void) {
  struct f_case_stmt_156fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1405 = NULL;
F->x_1405 = f_nn_65((((rt_int)23LL)), f_cur_line_72());
F->head_1406 = NULL;
F->tail_1407 = NULL;
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1405)).a = f_expr_107();
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1408 = NULL;
F->ltail_1409 = NULL;
F->more_1410 = 1;
while (F->more_1410) {
F->l_1411 = NULL;
F->l_1411 = f_nn_65((((rt_int)61LL)), f_cur_line_72());
(*(P1034)rt_nil_check(F->l_1411)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1034)rt_nil_check(F->l_1411)).b = f_expr_107();
}
f_append_69(&F->labs_1408, &F->ltail_1409, F->l_1411);
F->more_1410 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_69(&F->head_1406, &F->tail_1407, f_arm_154(F->labs_1408, f_body_121(), (*(P1034)rt_nil_check(F->x_1405)).line));
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1034)rt_nil_check(F->x_1405)).flag = ((rt_int)1LL);
(*(P1034)rt_nil_check(F->x_1405)).c = f_body_121();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P1034)rt_nil_check(F->x_1405)).b = F->head_1406;
F->result_ = F->x_1405;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_repeat_stmt_157(void) {
  struct f_repeat_stmt_157fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1412 = NULL;
F->x_1412 = f_nn_65((((rt_int)24LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P1034)rt_nil_check(F->x_1412)).flag = ((rt_int)1LL);
(*(P1034)rt_nil_check(F->x_1412)).name = f_expect_id_93();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P1034)rt_nil_check(F->x_1412)).ival = ((rt_int)1LL);
}
(*(P1034)rt_nil_check(F->x_1412)).a = f_p_subtype_96();
} else {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P1034)rt_nil_check(F->x_1412)).a = f_expr_107();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P1034)rt_nil_check(F->x_1412)).b = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1412;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_guard_stmt_158(void) {
  struct f_guard_stmt_158fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1413 = NULL;
F->x_1413 = f_nn_65((((rt_int)26LL)), f_cur_line_72());
F->head_1414 = NULL;
F->tail_1415 = NULL;
g_tpos_1067 = rt_add(g_tpos_1067, ((rt_int)1LL));
(*(P1034)rt_nil_check(F->x_1413)).a = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1416 = NULL;
F->h_1416 = f_nn_65((((rt_int)62LL)), f_cur_line_72());
(*(P1034)rt_nil_check(F->h_1416)).a = f_id_list_95();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1034)rt_nil_check(F->h_1416)).b = f_body_121();
f_append_69(&F->head_1414, &F->tail_1415, F->h_1416);
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1034)rt_nil_check(F->x_1413)).flag = ((rt_int)1LL);
(*(P1034)rt_nil_check(F->x_1413)).c = f_body_121();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P1034)rt_nil_check(F->x_1413)).b = F->head_1414;
F->result_ = F->x_1413;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_program_159(void) {
  struct f_program_159fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1417 = NULL;
F->tail_1418 = NULL;
while ((!f_at_kind_78((((rt_int)0LL))))) {
if ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1419 = NULL;
F->pr_1419 = (*(P1029)rt_nil_check(({ A1033 b_ = (((P1031)rt_nil_check(g_toks_1065))->all); b_.p[(rt_index(g_tpos_1067, b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1420 = NULL;
F->u_1420 = f_capsule_decl_141();
(*(P1034)rt_nil_check(F->u_1420)).prags = F->pr_1419;
f_append_69(&F->head_1417, &F->tail_1418, F->u_1420);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1417;
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
F->h_1421 = ((rt_int)0LL);
{ rt_int lo1423 = ((rt_int)1LL), hi1424 = ((rt_int)(((*F->s_160)).len));
for (rt_int it1425 = lo1423; it1425 <= hi1424; it1425++) {
F->i_1422 = it1425;
F->h_1421 = rt_mod(rt_add(rt_mul(F->h_1421, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_160), F->i_1422)) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = F->h_1421;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_lookup_163(rstr *name_162) {
  struct f_lookup_163fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_162 = name_162;
F->y_1426 = NULL;
F->y_1426 = ({ A1050 b_ = (((P1048)rt_nil_check(g_table_1074))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_1075 != NULL)) {
while ((F->y_1426 != NULL)) {
if ((((*(P1044)rt_nil_check(F->y_1426)).depth >= g_gdepth_1107) && rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_1426)).name))->all), (*F->name_162)))) {
F->result_ = F->y_1426;
goto ret_;
}
F->y_1426 = (*(P1044)rt_nil_check(F->y_1426)).chain;
}
F->y_1426 = ({ A1050 b_ = (((P1048)rt_nil_check(g_genv_1075))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1426 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_1426)).name))->all), (*F->name_162))) {
F->result_ = F->y_1426;
goto ret_;
}
F->y_1426 = (*(P1044)rt_nil_check(F->y_1426)).chain;
}
F->y_1426 = ({ A1050 b_ = (((P1048)rt_nil_check(g_table_1074))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1426 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_1426)).name))->all), (*F->name_162))) {
F->result_ = F->y_1426;
goto ret_;
}
F->y_1426 = (*(P1044)rt_nil_check(F->y_1426)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_lookup_decl_165(P1034 d_164) {
  struct f_lookup_decl_165fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_164 = d_164;
F->y_1427 = NULL;
F->y_1427 = ({ A1050 b_ = (((P1048)rt_nil_check(g_table_1074))->all); b_.p[(rt_index(f_hash_161(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_164)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1427 != NULL)) {
if (((*(P1044)rt_nil_check(F->y_1427)).decl == F->d_164)) {
F->result_ = F->y_1427;
goto ret_;
}
F->y_1427 = (*(P1044)rt_nil_check(F->y_1427)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_168(P1044 y_166, rt_int line_167) {
  struct f_define_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_166 = y_166;
F->line_167 = line_167;
F->h_1428 = f_hash_161(&(((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_166)).name))->all));
F->z_1429 = NULL;
F->z_1429 = ({ A1050 b_ = (((P1048)rt_nil_check(g_table_1074))->all); b_.p[(rt_index(F->h_1428, b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1429 != NULL)) {
if (((((*(P1044)rt_nil_check(F->z_1429)).depth == g_depth_1077) && rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->z_1429)).name))->all), (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_166)).name))->all))) && (!(((f_overloadable_170(F->y_166) && f_overloadable_170(F->z_1429)) && ((*(P1044)rt_nil_check(F->z_1429)).kind == (*(P1044)rt_nil_check(F->y_166)).kind)) && (!(f_same_signature_176((*(P1044)rt_nil_check(F->y_166)).params, (*(P1044)rt_nil_check(F->z_1429)).params) && f_same_tt_173((*(P1044)rt_nil_check(F->y_166)).decl, (*(P1044)rt_nil_check(F->z_1429)).decl))))))) {
f_fail_23(F->line_167, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_166)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1429 = (*(P1044)rt_nil_check(F->z_1429)).chain;
}
(*(P1044)rt_nil_check(F->y_166)).depth = g_depth_1077;
(*(P1044)rt_nil_check(F->y_166)).chain = ({ A1050 b_ = (((P1048)rt_nil_check(g_table_1074))->all); b_.p[(rt_index(F->h_1428, b_.lo, b_.hi) - b_.lo)]; });
(((P1048)rt_nil_check(g_table_1074))->all).p[(rt_index(F->h_1428, (((P1048)rt_nil_check(g_table_1074))->all).lo, (((P1048)rt_nil_check(g_table_1074))->all).hi) - (((P1048)rt_nil_check(g_table_1074))->all).lo)] = F->y_166;
(*(P1044)rt_nil_check(F->y_166)).stack = g_scope_stack_1078;
g_scope_stack_1078 = F->y_166;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_170(P1044 y_169) {
  struct f_overloadable_170fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_169 = y_169;
F->result_ = (((((*(P1044)rt_nil_check(F->y_169)).kind == (((rt_int)3LL))) || ((*(P1044)rt_nil_check(F->y_169)).kind == (((rt_int)4LL)))) || ((*(P1044)rt_nil_check(F->y_169)).kind == (((rt_int)9LL)))) || ((*(P1044)rt_nil_check(F->y_169)).kind == (((rt_int)8LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_173(P1034 a_171, P1034 b_172) {
  struct f_same_tt_173fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_171 = a_171;
F->b_172 = b_172;
F->x_1430 = NULL;
F->y_1431 = NULL;
if (((F->a_171 == NULL) || (F->b_172 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1430 = (*(P1034)rt_nil_check(F->a_171)).e;
F->y_1431 = (*(P1034)rt_nil_check(F->b_172)).e;
while (((F->x_1430 != NULL) && (F->y_1431 != NULL))) {
if ((!rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1430)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->y_1431)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1430 = (*(P1034)rt_nil_check(F->x_1430)).next;
F->y_1431 = (*(P1034)rt_nil_check(F->y_1431)).next;
}
F->result_ = ((F->x_1430 == NULL) && (F->y_1431 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_176(P1046 a_174, P1046 b_175) {
  struct f_same_signature_176fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_174 = a_174;
F->b_175 = b_175;
F->x_1432 = NULL;
F->x_1432 = F->a_174;
F->y_1433 = NULL;
F->y_1433 = F->b_175;
while (((F->x_1432 != NULL) && (F->y_1433 != NULL))) {
if ((!f_same_221((*(P1046)rt_nil_check(F->x_1432)).t, (*(P1046)rt_nil_check(F->y_1433)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1432 = (*(P1046)rt_nil_check(F->x_1432)).next;
F->y_1433 = (*(P1046)rt_nil_check(F->y_1433)).next;
}
F->result_ = ((F->x_1432 == NULL) && (F->y_1433 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_177(void) {
  struct f_open_scope_177fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_1077 = rt_add(g_depth_1077, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_178(void) {
  struct f_close_scope_178fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_1078 != NULL) && ((*(P1044)rt_nil_check(g_scope_stack_1078)).depth == g_depth_1077))) {
(((P1048)rt_nil_check(g_table_1074))->all).p[(rt_index(f_hash_161(&(((P1027)rt_nil_check((*(P1044)rt_nil_check(g_scope_stack_1078)).name))->all)), (((P1048)rt_nil_check(g_table_1074))->all).lo, (((P1048)rt_nil_check(g_table_1074))->all).hi) - (((P1048)rt_nil_check(g_table_1074))->all).lo)] = (*(P1044)rt_nil_check(g_scope_stack_1078)).chain;
g_scope_stack_1078 = (*(P1044)rt_nil_check(g_scope_stack_1078)).stack;
}
g_depth_1077 = rt_sub(g_depth_1077, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1044 f_new_sym_181(rt_int kind_179, P1027 name_180) {
  struct f_new_sym_181fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_179 = kind_179;
F->name_180 = name_180;
F->y_1434 = NULL;
{ R1045 *cell1435 = rt_alloc(sizeof(R1045));
(*cell1435).name = NULL;
(*cell1435).t = NULL;
(*cell1435).c = NULL;
(*cell1435).access = NULL;
(*cell1435).cname = NULL;
(*cell1435).st = NULL;
(*cell1435).decl = NULL;
(*cell1435).params = NULL;
(*cell1435).result = NULL;
(*cell1435).members = NULL;
(*cell1435).mnext = NULL;
(*cell1435).binds = NULL;
(*cell1435).insts = NULL;
(*cell1435).env = NULL;
(*cell1435).chain = NULL;
(*cell1435).stack = NULL;
(*cell1435).owner = NULL;
(*cell1435).gctx = NULL;
(*cell1435).mv = NULL;
(*cell1435).reqs = NULL;
(*cell1435).home = NULL;
(*cell1435).capn = NULL;
(*cell1435).tbinds = NULL;
(*cell1435).loc = NULL;
(*cell1435).reqs_sym = NULL;
F->y_1434 = cell1435;
}
(*(P1044)rt_nil_check(F->y_1434)).kind = F->kind_179;
(*(P1044)rt_nil_check(F->y_1434)).name = F->name_180;
F->result_ = F->y_1434;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1040 f_new_typ_183(rt_int kind_182) {
  struct f_new_typ_183fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_182 = kind_182;
F->t_1436 = NULL;
{ R1041 *cell1437 = rt_alloc(sizeof(R1041));
(*cell1437).name = NULL;
(*cell1437).lits = NULL;
(*cell1437).elem = NULL;
(*cell1437).idx = NULL;
(*cell1437).idx2 = NULL;
(*cell1437).elemcons = NULL;
(*cell1437).elemst = NULL;
(*cell1437).under = NULL;
(*cell1437).tparams = NULL;
(*cell1437).ocap = NULL;
(*cell1437).fields = NULL;
(*cell1437).target = NULL;
(*cell1437).decl = NULL;
(*cell1437).cname = NULL;
(*cell1437).initp = NULL;
(*cell1437).finalp = NULL;
(*cell1437).tpsyms = NULL;
(*cell1437).gen = NULL;
(*cell1437).gbinds = NULL;
(*cell1437).next = NULL;
(*cell1437).idxs = NULL;
(*cell1437).assignp = NULL;
(*cell1437).eqp = NULL;
(*cell1437).ltp = NULL;
(*cell1437).repn = NULL;
F->t_1436 = cell1437;
}
(*(P1040)rt_nil_check(F->t_1436)).kind = F->kind_182;
F->result_ = F->t_1436;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1036 f_new_cons_184(void) {
  struct f_new_cons_184fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1438 = NULL;
{ R1037 *cell1439 = rt_alloc(sizeof(R1037));
(*cell1439).lo = NULL;
(*cell1439).hi = NULL;
(*cell1439).lo2 = NULL;
(*cell1439).hi2 = NULL;
(*cell1439).slen = NULL;
(*cell1439).args = NULL;
(*cell1439).prec = NULL;
(*cell1439).bnds = NULL;
F->c_1438 = cell1439;
}
F->result_ = F->c_1438;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_186(P1040 t_185) {
  struct f_scalar_kind_186fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_185 = t_185;
F->result_ = ((F->t_185 != NULL) && ((((*(P1040)rt_nil_check(F->t_185)).kind == (((rt_int)1LL))) || ((*(P1040)rt_nil_check(F->t_185)).kind == (((rt_int)3LL)))) || ((*(P1040)rt_nil_check(F->t_185)).kind == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_188(P1040 t_187) {
  struct f_bound_ctype_188fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_187 = t_187;
if (((*(P1040)rt_nil_check(F->t_187)).kind == (((rt_int)3LL)))) {
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

static rstr f_cbound_191(P1036 c_189, rstr *b_190) {
  struct f_cbound_191fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_189 = c_189;
F->b_190 = b_190;
F->p_1440 = NULL;
F->p_1440 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!(*(P1036)rt_nil_check(F->c_189)).dyn) || ((*(P1036)rt_nil_check(F->c_189)).lvl <= ((rt_int)0LL)))) {
F->result_ = (*F->b_190);
goto ret_;
}
{ rt_int lo1442 = ((rt_int)1LL), hi1443 = rt_sub(g_cur_level_1091, (*(P1036)rt_nil_check(F->c_189)).lvl);
for (rt_int it1444 = lo1442; it1444 <= hi1443; it1444++) {
F->i_1441 = it1444;
F->p_1440 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->p_1440))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->p_1440))->all), rt_str("->", 2)), (*F->b_190));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_193(P1036 c_192) {
  struct f_clo_193fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_192 = c_192;
F->result_ = f_cbound_191(F->c_192, &(((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_192)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_195(P1036 c_194) {
  struct f_chi_195fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_194 = c_194;
F->result_ = f_cbound_191(F->c_194, &(((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_194)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_198(P1040 t_196, P1036 c_197) {
  struct f_sub_lo_198fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_196 = t_196;
F->c_197 = c_197;
if (((F->c_197 != NULL) && ((*(P1036)rt_nil_check(F->c_197)).lo != NULL))) {
F->result_ = f_clo_193(F->c_197);
goto ret_;
} else if (((*(P1040)rt_nil_check(F->t_196)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if (((*(P1040)rt_nil_check(F->t_196)).kind == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_201(P1040 t_199, P1036 c_200) {
  struct f_sub_hi_201fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_199 = t_199;
F->c_200 = c_200;
if (((F->c_200 != NULL) && ((*(P1036)rt_nil_check(F->c_200)).lo != NULL))) {
F->result_ = f_chi_195(F->c_200);
goto ret_;
} else if (((*(P1040)rt_nil_check(F->t_199)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if (((*(P1040)rt_nil_check(F->t_199)).kind == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_71((*(P1040)rt_nil_check(F->t_199)).lits), ((rt_int)1LL)));
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
if ((!g_in_func_1090)) {
F->g_1445 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_202)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_203)), rt_str(" ", 1)), F->g_1445), rt_str(";", 1)); b_; }));
g_st_field_1096 = f_mk_3(&F->g_1445);
F->result_ = F->g_1445;
goto ret_;
}
{
F->f_1446 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_202), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1089, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_203)), rt_str(" ", 1)), F->f_1446), rt_str(";", 1)); b_; }));
g_st_field_1096 = f_mk_3(&F->f_1446);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1446);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1036 f_copy_cons_206(P1036 c_205) {
  struct f_copy_cons_206fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_205 = c_205;
F->r_1447 = NULL;
{ R1037 *cell1448 = rt_alloc(sizeof(R1037));
(*cell1448).lo = NULL;
(*cell1448).hi = NULL;
(*cell1448).lo2 = NULL;
(*cell1448).hi2 = NULL;
(*cell1448).slen = NULL;
(*cell1448).args = NULL;
(*cell1448).prec = NULL;
(*cell1448).bnds = NULL;
F->r_1447 = cell1448;
}
(*(P1036)rt_nil_check(F->r_1447)).lo = (*(P1036)rt_nil_check(F->c_205)).lo;
(*(P1036)rt_nil_check(F->r_1447)).hi = (*(P1036)rt_nil_check(F->c_205)).hi;
(*(P1036)rt_nil_check(F->r_1447)).lo2 = (*(P1036)rt_nil_check(F->c_205)).lo2;
(*(P1036)rt_nil_check(F->r_1447)).hi2 = (*(P1036)rt_nil_check(F->c_205)).hi2;
(*(P1036)rt_nil_check(F->r_1447)).slen = (*(P1036)rt_nil_check(F->c_205)).slen;
(*(P1036)rt_nil_check(F->r_1447)).mlo = (*(P1036)rt_nil_check(F->c_205)).mlo;
(*(P1036)rt_nil_check(F->r_1447)).mhi = (*(P1036)rt_nil_check(F->c_205)).mhi;
(*(P1036)rt_nil_check(F->r_1447)).hasm = (*(P1036)rt_nil_check(F->c_205)).hasm;
(*(P1036)rt_nil_check(F->r_1447)).args = (*(P1036)rt_nil_check(F->c_205)).args;
(*(P1036)rt_nil_check(F->r_1447)).dyn = (*(P1036)rt_nil_check(F->c_205)).dyn;
(*(P1036)rt_nil_check(F->r_1447)).lvl = (*(P1036)rt_nil_check(F->c_205)).lvl;
(*(P1036)rt_nil_check(F->r_1447)).prec = (*(P1036)rt_nil_check(F->c_205)).prec;
F->result_ = F->r_1447;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1036 f_freeze_209(P1036 c_207, P1040 t_208) {
  struct f_freeze_209fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_207 = c_207;
F->t_208 = t_208;
F->r_1449 = NULL;
F->saved_field_1450 = NULL;
F->saved_field_1450 = g_st_field_1096;
if ((((((F->c_207 == NULL) || ((*(P1036)rt_nil_check(F->c_207)).lo == NULL)) || (*(P1036)rt_nil_check(F->c_207)).hasm) || (*(P1036)rt_nil_check(F->c_207)).dyn) || (!f_scalar_kind_186(F->t_208)))) {
F->result_ = F->c_207;
goto ret_;
}
F->r_1449 = f_copy_cons_206(F->c_207);
{
F->ct_1451 = rt_str_copy(f_bound_ctype_188(F->t_208));
F->la_1452 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1451));
F->lf_1453 = rt_str_copy((((P1027)rt_nil_check(g_st_field_1096))->all));
F->ha_1454 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1451));
F->hf_1455 = rt_str_copy((((P1027)rt_nil_check(g_st_field_1096))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1452, rt_str(" = ", 3)), f_clo_193(F->c_207)), rt_str("; ", 2)), F->ha_1454), rt_str(" = ", 3)), f_chi_195(F->c_207)), rt_str(";", 1)); b_; }));
if (g_in_func_1090) {
(*(P1036)rt_nil_check(F->r_1449)).lo = f_mk_3(&F->lf_1453);
(*(P1036)rt_nil_check(F->r_1449)).hi = f_mk_3(&F->hf_1455);
(*(P1036)rt_nil_check(F->r_1449)).dyn = 1;
(*(P1036)rt_nil_check(F->r_1449)).lvl = g_cur_level_1091;
} else {
(*(P1036)rt_nil_check(F->r_1449)).lo = f_mk_3(&F->la_1452);
(*(P1036)rt_nil_check(F->r_1449)).hi = f_mk_3(&F->ha_1454);
(*(P1036)rt_nil_check(F->r_1449)).dyn = 0;
}
}
g_st_field_1096 = F->saved_field_1450;
F->result_ = F->r_1449;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_213(P1040 t_210, P1036 c_211, rstr *v_212) {
  struct f_checked_213fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_210 = t_210;
F->c_211 = c_211;
F->v_212 = v_212;
if ((((F->c_211 == NULL) || (!f_scalar_kind_186(F->t_210))) || f_suppressed_517(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_212);
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->t_210)).kind != (((rt_int)3LL))) && (*(P1036)rt_nil_check(F->c_211)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_212)), rt_str(", ", 2)), f_itos_7((*(P1036)rt_nil_check(F->c_211)).mlo)), rt_str(", ", 2)), f_itos_7((*(P1036)rt_nil_check(F->c_211)).mhi)), rt_str(")", 1));
goto ret_;
} else if (((*(P1036)rt_nil_check(F->c_211)).lo == NULL)) {
F->result_ = (*F->v_212);
goto ret_;
} else if (((*(P1040)rt_nil_check(F->t_210)).kind == (((rt_int)3LL)))) {
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

static int f_same_lits_216(P1034 a_214, P1034 b_215) {
  struct f_same_lits_216fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_214 = a_214;
F->b_215 = b_215;
F->x_1456 = NULL;
F->x_1456 = F->a_214;
F->y_1457 = NULL;
F->y_1457 = F->b_215;
while (((F->x_1456 != NULL) && (F->y_1457 != NULL))) {
if ((!rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_1456)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->y_1457)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1456 = (*(P1034)rt_nil_check(F->x_1456)).next;
F->y_1457 = (*(P1034)rt_nil_check(F->y_1457)).next;
}
F->result_ = ((F->x_1456 == NULL) && (F->y_1457 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1040 f_str_elem_218(P1040 t_217) {
  struct f_str_elem_218fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_217 = t_217;
if (((*(P1040)rt_nil_check(F->t_217)).elem == NULL)) {
F->result_ = g_ty_ascii_1122;
goto ret_;
}
F->result_ = (*(P1040)rt_nil_check(F->t_217)).elem;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_221(P1040 a_219, P1040 b_220) {
  struct f_same_221fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_219 = a_219;
F->b_220 = b_220;
if ((F->a_219 == F->b_220)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_219 == NULL) || (F->b_220 == NULL)) || ((*(P1040)rt_nil_check(F->a_219)).kind != (*(P1040)rt_nil_check(F->b_220)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((*(P1040)rt_nil_check(F->a_219)).kind == (((rt_int)5LL))) || ((*(P1040)rt_nil_check(F->a_219)).kind == (((rt_int)10LL))))) {
F->result_ = f_same_221(f_str_elem_218(F->a_219), f_str_elem_218(F->b_220));
goto ret_;
}
if ((((((*(P1040)rt_nil_check(F->a_219)).kind == (((rt_int)1LL))) || ((*(P1040)rt_nil_check(F->a_219)).kind == (((rt_int)2LL)))) || ((*(P1040)rt_nil_check(F->a_219)).kind == (((rt_int)3LL)))) || ((*(P1040)rt_nil_check(F->a_219)).kind == (((rt_int)9LL))))) {
F->result_ = 1;
goto ret_;
}
if (((*(P1040)rt_nil_check(F->a_219)).kind == (((rt_int)4LL)))) {
F->result_ = f_same_lits_216((*(P1040)rt_nil_check(F->a_219)).lits, (*(P1040)rt_nil_check(F->b_220)).lits);
goto ret_;
}
if (((*(P1040)rt_nil_check(F->a_219)).kind == (((rt_int)6LL)))) {
F->x_1458 = NULL;
F->x_1458 = (*(P1040)rt_nil_check(F->a_219)).idxs;
F->y_1459 = NULL;
F->y_1459 = (*(P1040)rt_nil_check(F->b_220)).idxs;
while (((F->x_1458 != NULL) && (F->y_1459 != NULL))) {
if ((!f_same_221((*(P1055)rt_nil_check(F->x_1458)).t, (*(P1055)rt_nil_check(F->y_1459)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1458 = (*(P1055)rt_nil_check(F->x_1458)).next;
F->y_1459 = (*(P1055)rt_nil_check(F->y_1459)).next;
}
F->result_ = (((F->x_1458 == NULL) && (F->y_1459 == NULL)) && f_same_221((*(P1040)rt_nil_check(F->a_219)).elem, (*(P1040)rt_nil_check(F->b_220)).elem));
goto ret_;
}
if ((((*(P1040)rt_nil_check(F->a_219)).kind == (((rt_int)16LL))) || ((*(P1040)rt_nil_check(F->a_219)).kind == (((rt_int)12LL))))) {
F->result_ = f_same_221((*(P1040)rt_nil_check(F->a_219)).elem, (*(P1040)rt_nil_check(F->b_220)).elem);
goto ret_;
}
if ((((*(P1040)rt_nil_check(F->a_219)).kind == (((rt_int)7LL))) || ((*(P1040)rt_nil_check(F->a_219)).kind == (((rt_int)17LL))))) {
F->f_1460 = NULL;
F->f_1460 = (*(P1040)rt_nil_check(F->a_219)).fields;
F->g_1461 = NULL;
F->g_1461 = (*(P1040)rt_nil_check(F->b_220)).fields;
while (((F->f_1460 != NULL) && (F->g_1461 != NULL))) {
if (((!rt_str_eq((((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_1460)).name))->all), (((P1027)rt_nil_check((*(P1042)rt_nil_check(F->g_1461)).name))->all))) || (!f_same_221((*(P1042)rt_nil_check(F->f_1460)).t, (*(P1042)rt_nil_check(F->g_1461)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1460 = (*(P1042)rt_nil_check(F->f_1460)).next;
F->g_1461 = (*(P1042)rt_nil_check(F->g_1461)).next;
}
F->result_ = ((F->f_1460 == NULL) && (F->g_1461 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1040 f_base_of_223(P1040 t_222) {
  struct f_base_of_223fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_222 = t_222;
if ((((F->t_222 != NULL) && ((*(P1040)rt_nil_check(F->t_222)).kind == (((rt_int)15LL)))) && ((*(P1040)rt_nil_check(F->t_222)).tparams == NULL))) {
F->result_ = f_base_of_223((*(P1040)rt_nil_check(F->t_222)).under);
goto ret_;
}
F->result_ = F->t_222;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1036 f_base_cons_226(P1040 t_224, P1036 c_225) {
  struct f_base_cons_226fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_224 = t_224;
F->c_225 = c_225;
if (((((F->t_224 != NULL) && ((*(P1040)rt_nil_check(F->t_224)).kind == (((rt_int)15LL)))) && ((*(P1040)rt_nil_check(F->t_224)).tparams == NULL)) && ((*(P1040)rt_nil_check(F->t_224)).elemcons != NULL))) {
F->result_ = f_base_cons_226((*(P1040)rt_nil_check(F->t_224)).under, (*(P1040)rt_nil_check(F->t_224)).elemcons);
goto ret_;
}
F->result_ = F->c_225;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_228(P1040 t_227) {
  struct f_kind_name_228fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_227 = t_227;
{ rt_int sel1462 = (*(P1040)rt_nil_check(F->t_227)).kind;
if (0 || (sel1462 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1462 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1462 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1462 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1462 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1462 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1462 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1462 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1462 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_227)).name))->all));
goto ret_;
} else if (0 || (sel1462 == (((rt_int)11LL)))) {
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

static void f_check_type_232(P1040 got_229, P1040 want_230, rt_int line_231) {
  struct f_check_type_232fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_229 = got_229;
F->want_230 = want_230;
F->line_231 = line_231;
if ((F->want_230 == NULL)) {
goto ret_;
}
if ((((*(P1040)rt_nil_check(F->got_229)).kind == (((rt_int)11LL))) && ((*(P1040)rt_nil_check(F->want_230)).kind == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_221(F->got_229, F->want_230))) {
f_fail_23(F->line_231, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_228(F->got_229)), rt_str(" where ", 7)), f_kind_name_228(F->want_230)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_234(P1040 t_233) {
  struct f_ctype_234fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_233 = t_233;
{ rt_int sel1463 = (*(P1040)rt_nil_check(F->t_233)).kind;
if (0 || (sel1463 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1463 == (((rt_int)2LL))) || (sel1463 == (((rt_int)4LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1463 == (((rt_int)10LL)))) {
F->result_ = rt_str("rt_r_file *", 11);
goto ret_;
} else if (0 || (sel1463 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1463 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1463 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1463 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1463 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1463 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1463 == (((rt_int)16LL)))) {
if (f_sparse_set_308(F->t_233)) {
F->result_ = rt_str("rt_r_iset", 9);
goto ret_;
}
F->result_ = rt_str("yset", 4);
goto ret_;
} else {
if (((*(P1040)rt_nil_check(F->t_233)).cname == NULL)) {
f_declare_ctype_240(F->t_233);
} else if ((((((*(P1040)rt_nil_check(F->t_233)).kind == (((rt_int)7LL))) || ((*(P1040)rt_nil_check(F->t_233)).kind == (((rt_int)17LL)))) && (*(P1040)rt_nil_check(F->t_233)).forward) && (!(*(P1040)rt_nil_check(F->t_233)).defined))) {
(*(P1040)rt_nil_check(F->t_233)).defined = 1;
f_put_27(g_out_types_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_233)).cname))->all)), rt_str(" ", 1)), f_struct_body_236(F->t_233)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_233)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_236(P1040 t_235) {
  struct f_struct_body_236fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_235 = t_235;
if (((*(P1040)rt_nil_check(F->t_235)).kind == (((rt_int)17LL)))) {
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

static rstr f_field_decls_238(P1040 t_237) {
  struct f_field_decls_238fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_237 = t_237;
F->f_1464 = NULL;
F->f_1464 = (*(P1040)rt_nil_check(F->t_237)).fields;
F->s_1465 = NULL;
F->s_1465 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1464 != NULL)) {
F->s_1465 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->s_1465))->all), f_ctype_234((*(P1042)rt_nil_check(F->f_1464)).t)), rt_str(" ", 1)), f_field_c_17(&(((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_1464)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1464 = (*(P1042)rt_nil_check(F->f_1464)).next;
}
F->result_ = (((P1027)rt_nil_check(F->s_1465))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_240(P1040 t_239) {
  struct f_declare_ctype_240fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_239 = t_239;
F->u_1466 = NULL;
F->u_1466 = g_all_types_1079;
if ((((*(P1040)rt_nil_check(F->t_239)).kind == (((rt_int)8LL))) && ((*(P1040)rt_nil_check(F->t_239)).target == NULL))) {
f_finish_ptr_480(F->t_239);
if (((*(P1040)rt_nil_check(F->t_239)).cname != NULL)) {
goto ret_;
}
}
if (((*(P1040)rt_nil_check(F->t_239)).kind != (((rt_int)8LL)))) {
while ((F->u_1466 != NULL)) {
if ((((*(P1040)rt_nil_check(F->u_1466)).kind == (*(P1040)rt_nil_check(F->t_239)).kind) && f_same_221(F->u_1466, F->t_239))) {
(*(P1040)rt_nil_check(F->t_239)).cname = (*(P1040)rt_nil_check(F->u_1466)).cname;
goto ret_;
}
F->u_1466 = (*(P1040)rt_nil_check(F->u_1466)).next;
}
}
if ((((*(P1040)rt_nil_check(F->t_239)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->t_239)).tparams == NULL))) {
(*(P1040)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_234((*(P1040)rt_nil_check(F->t_239)).under); b_; }));
goto ret_;
}
if (((*(P1040)rt_nil_check(F->t_239)).kind == (((rt_int)6LL)))) {
(*(P1040)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P1040)rt_nil_check(F->t_239)).kind == (((rt_int)15LL)))) {
(*(P1040)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if ((((*(P1040)rt_nil_check(F->t_239)).kind == (((rt_int)7LL))) || ((*(P1040)rt_nil_check(F->t_239)).kind == (((rt_int)17LL))))) {
(*(P1040)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P1040)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P1040)rt_nil_check(F->t_239)).next = g_all_types_1079;
g_all_types_1079 = F->t_239;
if (((((*(P1040)rt_nil_check(F->t_239)).kind == (((rt_int)8LL))) && ((*(P1040)rt_nil_check(F->t_239)).decl != NULL)) && ((*(P1034)rt_nil_check((*(P1040)rt_nil_check(F->t_239)).decl)).b != NULL))) {
F->p_1467 = NULL;
F->p_1467 = (*(P1034)rt_nil_check((*(P1040)rt_nil_check(F->t_239)).decl)).b;
F->fs_1468 = NULL;
F->fs_1468 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1469 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1467 != NULL)) {
F->pc_1470 = NULL;
F->fs_1468 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->fs_1468))->all), rt_str(" ", 1)), f_ctype_234(f_resolve_subtype_268((*(P1034)rt_nil_check(F->p_1467)).a, &F->pc_1470))), rt_str(" p_", 3)), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1467)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1467 = (*(P1034)rt_nil_check(F->p_1467)).next;
}
f_put_27(g_out_types_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1469), rt_str(" *", 2)), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_1082, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1469), rt_str(" {", 2)), (((P1027)rt_nil_check(F->fs_1468))->all)), rt_str(" ", 1)), f_ctype_234((*(P1040)rt_nil_check(F->t_239)).target)), rt_str(" all; };", 8)); b_; }));
} else if (((*(P1040)rt_nil_check(F->t_239)).kind == (((rt_int)8LL)))) {
F->target_1471 = NULL;
F->target_1471 = (*(P1040)rt_nil_check(F->t_239)).target;
if ((((*(P1040)rt_nil_check(F->target_1471)).kind == (((rt_int)7LL))) || ((*(P1040)rt_nil_check(F->target_1471)).kind == (((rt_int)17LL))))) {
if (((*(P1040)rt_nil_check(F->target_1471)).cname == NULL)) {
(*(P1040)rt_nil_check(F->target_1471)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P1040)rt_nil_check(F->target_1471)).next = g_all_types_1079;
g_all_types_1079 = F->target_1471;
f_put_27(g_out_types_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->target_1471)).cname))->all)), rt_str(" ", 1)), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->target_1471)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P1040)rt_nil_check(F->target_1471)).forward = 1;
}
f_put_27(g_out_types_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->target_1471)).cname))->all)), rt_str(" *", 2)), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_234(F->target_1471)), rt_str(" *", 2)), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if (((*(P1040)rt_nil_check(F->t_239)).kind == (((rt_int)6LL)))) {
f_put_27(g_out_types_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_239)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_234((*(P1040)rt_nil_check(F->t_239)).elem)), rt_str(" *p;", 4)), f_more_dims_246(F->t_239)), rt_str(" };", 3)); b_; }));
} else if (((*(P1040)rt_nil_check(F->t_239)).kind == (((rt_int)15LL)))) {
F->p_1472 = NULL;
F->p_1472 = (*(P1040)rt_nil_check(F->t_239)).tparams;
F->fs_1473 = NULL;
F->fs_1473 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1472 != NULL)) {
F->fs_1473 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->fs_1473))->all), f_ctype_234(f_tparam_type_357(F->t_239, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1472)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1472)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1472 = (*(P1034)rt_nil_check(F->p_1472)).next;
}
f_put_27(g_out_types_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_239)).cname))->all)), rt_str(" {", 2)), (((P1027)rt_nil_check(F->fs_1473))->all)), f_ctype_234((*(P1040)rt_nil_check(F->t_239)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P1040)rt_nil_check(F->t_239)).defined = 1;
f_put_27(g_out_types_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), f_struct_body_236(F->t_239)), rt_str(";", 1)); b_; }));
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

static rstr f_more_dims_246(P1040 t_245) {
  struct f_more_dims_246fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_245 = t_245;
F->r_1474 = NULL;
F->r_1474 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1476 = ((rt_int)3LL), hi1477 = (*(P1040)rt_nil_check(F->t_245)).ndim;
for (rt_int it1478 = lo1476; it1478 <= hi1477; it1478++) {
F->k_1475 = it1478;
F->r_1474 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_1474))->all), rt_str(" rt_int ", 8)), f_dim_lo_242(F->k_1475)), rt_str(", ", 2)), f_dim_hi_244(F->k_1475)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P1027)rt_nil_check(F->r_1474))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_249(P1040 t_247, rstr *base_248) {
  struct f_acnt_249fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_247 = t_247;
F->base_248 = base_248;
F->r_1479 = NULL;
F->r_1479 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_248)), rt_str(")", 1)); b_; }));
{ rt_int lo1481 = ((rt_int)3LL), hi1482 = (*(P1040)rt_nil_check(F->t_247)).ndim;
for (rt_int it1483 = lo1481; it1483 <= hi1482; it1483++) {
F->k_1480 = it1483;
F->r_1479 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_1479))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_248)), rt_str(".", 1)), f_dim_lo_242(F->k_1480)), rt_str(", ", 2)), (*F->base_248)), rt_str(".", 1)), f_dim_hi_244(F->k_1480)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1027)rt_nil_check(F->r_1479))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1027 f_cons_lo_252(P1036 c_250, rt_int k_251) {
  struct f_cons_lo_252fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_250 = c_250;
F->k_251 = k_251;
F->l_1484 = NULL;
if ((F->k_251 == ((rt_int)1LL))) {
F->result_ = (*(P1036)rt_nil_check(F->c_250)).lo;
goto ret_;
} else if ((F->k_251 == ((rt_int)2LL))) {
F->result_ = (*(P1036)rt_nil_check(F->c_250)).lo2;
goto ret_;
}
F->l_1484 = (*(P1036)rt_nil_check(F->c_250)).bnds;
{ rt_int lo1486 = ((rt_int)1LL), hi1487 = rt_sub(rt_add(F->k_251, F->k_251), ((rt_int)6LL));
for (rt_int it1488 = lo1486; it1488 <= hi1487; it1488++) {
F->i_1485 = it1488;
if ((F->l_1484 != NULL)) {
F->l_1484 = (*(P1038)rt_nil_check(F->l_1484)).next;
}
}
}
if ((F->l_1484 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1038)rt_nil_check(F->l_1484)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1027 f_cons_hi_255(P1036 c_253, rt_int k_254) {
  struct f_cons_hi_255fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_253 = c_253;
F->k_254 = k_254;
F->l_1489 = NULL;
if ((F->k_254 == ((rt_int)1LL))) {
F->result_ = (*(P1036)rt_nil_check(F->c_253)).hi;
goto ret_;
} else if ((F->k_254 == ((rt_int)2LL))) {
F->result_ = (*(P1036)rt_nil_check(F->c_253)).hi2;
goto ret_;
}
F->l_1489 = (*(P1036)rt_nil_check(F->c_253)).bnds;
{ rt_int lo1491 = ((rt_int)1LL), hi1492 = rt_sub(rt_add(F->k_254, F->k_254), ((rt_int)5LL));
for (rt_int it1493 = lo1491; it1493 <= hi1492; it1493++) {
F->i_1490 = it1493;
if ((F->l_1489 != NULL)) {
F->l_1489 = (*(P1038)rt_nil_check(F->l_1489)).next;
}
}
}
if ((F->l_1489 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1038)rt_nil_check(F->l_1489)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1040 f_idx_type_258(P1040 t_256, rt_int k_257) {
  struct f_idx_type_258fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_256 = t_256;
F->k_257 = k_257;
F->l_1494 = NULL;
F->l_1494 = (*(P1040)rt_nil_check(F->t_256)).idxs;
{ rt_int lo1496 = ((rt_int)2LL), hi1497 = F->k_257;
for (rt_int it1498 = lo1496; it1498 <= hi1497; it1498++) {
F->i_1495 = it1498;
F->l_1494 = (*(P1055)rt_nil_check(F->l_1494)).next;
}
}
F->result_ = (*(P1055)rt_nil_check(F->l_1494)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_259(void) {
  struct f_init_ascii_259fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1499 = NULL;
F->tail_1500 = NULL;
F->start_1501 = ((rt_int)1LL);
{ rt_int lo1503 = ((rt_int)1LL), hi1504 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1505 = lo1503; it1505 <= hi1504; it1505++) {
F->i_1502 = it1505;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1502) == 32)) {
F->lit_1506 = NULL;
F->lit_1506 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1034)rt_nil_check(F->lit_1506)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->start_1501, rt_sub(F->i_1502, ((rt_int)1LL))); b_; }));
f_append_69(&F->head_1499, &F->tail_1500, F->lit_1506);
F->start_1501 = rt_add(F->i_1502, ((rt_int)1LL));
}
}
}
g_ty_ascii_1122 = f_new_typ_183((((rt_int)4LL)));
(*(P1040)rt_nil_check(g_ty_ascii_1122)).lits = F->head_1499;
(*(P1040)rt_nil_check(g_ty_ascii_1122)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1507 = NULL;
F->t2_1508 = NULL;
F->l1_1509 = NULL;
F->l1_1509 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1510 = NULL;
F->l2_1510 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1511 = NULL;
F->l3_1511 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1034)rt_nil_check(F->l1_1509)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P1034)rt_nil_check(F->l2_1510)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P1034)rt_nil_check(F->l3_1511)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_69(&F->h2_1507, &F->t2_1508, F->l1_1509);
f_append_69(&F->h2_1507, &F->t2_1508, F->l2_1510);
f_append_69(&F->h2_1507, &F->t2_1508, F->l3_1511);
g_file_mode_type_1130 = f_new_typ_183((((rt_int)4LL)));
(*(P1040)rt_nil_check(g_file_mode_type_1130)).lits = F->h2_1507;
}
g_file_state_type_1134 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OLD", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }));
g_file_disp_type_1135 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SAVE", 4); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DELETE", 6); b_; }));
g_file_access_type_1136 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEQ", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RANDOM", 6); b_; }));
g_ty_text_file_1133 = f_new_typ_183((((rt_int)10LL)));
(*(P1040)rt_nil_check(g_ty_text_file_1133)).elem = g_ty_ascii_1122;
g_ty_send_st_1131 = f_new_typ_183((((rt_int)1LL)));
(*(P1040)rt_nil_check(g_ty_send_st_1131)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEND_ST", 7); b_; }));
g_ty_receive_st_1132 = f_new_typ_183((((rt_int)1LL)));
(*(P1040)rt_nil_check(g_ty_receive_st_1132)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RECEIVE_ST", 10); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1040 f_enum2_262(rstr *a_260, rstr *b_261) {
  struct f_enum2_262fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_260 = a_260;
F->b_261 = b_261;
F->t_1512 = NULL;
F->t_1512 = f_new_typ_183((((rt_int)4LL)));
F->l1_1513 = NULL;
F->l1_1513 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1514 = NULL;
F->l2_1514 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1034)rt_nil_check(F->l1_1513)).name = f_mk_3(&(*F->a_260));
(*(P1034)rt_nil_check(F->l2_1514)).name = f_mk_3(&(*F->b_261));
(*(P1034)rt_nil_check(F->l1_1513)).next = F->l2_1514;
(*(P1040)rt_nil_check(F->t_1512)).lits = F->l1_1513;
F->result_ = F->t_1512;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_lit_index_265(P1034 lits_263, rstr *name_264) {
  struct f_lit_index_265fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_263 = lits_263;
F->name_264 = name_264;
F->i_1515 = ((rt_int)0LL);
F->l_1516 = NULL;
F->l_1516 = F->lits_263;
while ((F->l_1516 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->l_1516)).name))->all), (*F->name_264))) {
F->result_ = F->i_1515;
goto ret_;
}
F->i_1515 = rt_add(F->i_1515, ((rt_int)1LL));
F->l_1516 = (*(P1034)rt_nil_check(F->l_1516)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1040 f_resolve_subtype_268(P1034 st_266, P1036 *c_267) {
  struct f_resolve_subtype_268fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_266 = st_266;
F->c_267 = c_267;
F->c_267v = *F->c_267;
F->t_1517 = NULL;
F->dummy_1519 = NULL;
F->c_267v = f_new_cons_184();
{ rt_int sel1520 = (*(P1034)rt_nil_check(F->st_266)).kind;
if (0 || (sel1520 == (((rt_int)70LL)))) {
if (((*(P1034)rt_nil_check(F->st_266)).a != NULL)) {
(*(P1036)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805((*(P1034)rt_nil_check(F->st_266)).a, g_ty_int_1119, &F->dummy_1519); b_; }));
(*(P1036)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805((*(P1034)rt_nil_check(F->st_266)).b, g_ty_int_1119, &F->dummy_1519); b_; }));
(*(P1036)rt_nil_check(F->c_267v)).mlo = f_manifest_371((*(P1034)rt_nil_check(F->st_266)).a, &F->ok_1518);
(*(P1036)rt_nil_check(F->c_267v)).hasm = F->ok_1518;
(*(P1036)rt_nil_check(F->c_267v)).mhi = f_manifest_371((*(P1034)rt_nil_check(F->st_266)).b, &F->ok_1518);
(*(P1036)rt_nil_check(F->c_267v)).hasm = ((*(P1036)rt_nil_check(F->c_267v)).hasm && F->ok_1518);
}
F->result_ = g_ty_int_1119;
goto ret_;
} else if (0 || (sel1520 == (((rt_int)71LL)))) {
if (((*(P1034)rt_nil_check(F->st_266)).a != NULL)) {
(*(P1036)rt_nil_check(F->c_267v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805((*(P1034)rt_nil_check(F->st_266)).a, g_ty_int_1119, &F->dummy_1519); b_; }));
}
if (((*(P1034)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1036)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805((*(P1034)rt_nil_check(F->st_266)).b, g_ty_float_1121, &F->dummy_1519); b_; }));
(*(P1036)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805((*(P1034)rt_nil_check(F->st_266)).c, g_ty_float_1121, &F->dummy_1519); b_; }));
(*(P1036)rt_nil_check(F->c_267v)).hasm = (f_float_lit_270((*(P1034)rt_nil_check(F->st_266)).b) && f_float_lit_270((*(P1034)rt_nil_check(F->st_266)).c));
}
F->result_ = g_ty_float_1121;
goto ret_;
} else if (0 || (sel1520 == (((rt_int)72LL)))) {
F->t_1517 = f_new_typ_183((((rt_int)4LL)));
(*(P1040)rt_nil_check(F->t_1517)).lits = (*(P1034)rt_nil_check(F->st_266)).a;
if (((*(P1034)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1036)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805((*(P1034)rt_nil_check(F->st_266)).b, F->t_1517, &F->dummy_1519); b_; }));
(*(P1036)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805((*(P1034)rt_nil_check(F->st_266)).c, F->t_1517, &F->dummy_1519); b_; }));
if ((((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->st_266)).b)).kind == (((rt_int)4LL))) && ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->st_266)).c)).kind == (((rt_int)4LL))))) {
(*(P1036)rt_nil_check(F->c_267v)).mlo = f_lit_index_265((*(P1040)rt_nil_check(F->t_1517)).lits, &(((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->st_266)).b)).name))->all));
(*(P1036)rt_nil_check(F->c_267v)).mhi = f_lit_index_265((*(P1040)rt_nil_check(F->t_1517)).lits, &(((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->st_266)).c)).name))->all));
(*(P1036)rt_nil_check(F->c_267v)).hasm = 1;
}
}
F->result_ = F->t_1517;
goto ret_;
} else if (0 || (sel1520 == (((rt_int)73LL)))) {
F->t_1517 = f_resolve_subtype_268((*(P1034)rt_nil_check(F->st_266)).a, &F->c_267v);
if (((*(P1040)rt_nil_check(f_base_of_223(F->t_1517))).kind != (((rt_int)4LL)))) {
f_fail_23((*(P1034)rt_nil_check(F->st_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component type of a string is an enumeration type", 53); b_; }));
}
if ((f_same_221(F->t_1517, g_ty_ascii_1122) && ((F->c_267v == NULL) || ((*(P1036)rt_nil_check(F->c_267v)).lo == NULL)))) {
F->t_1517 = g_ty_string_1123;
} else {
F->et_1521 = NULL;
F->et_1521 = F->t_1517;
F->t_1517 = f_new_typ_183((((rt_int)5LL)));
(*(P1040)rt_nil_check(F->t_1517)).elem = F->et_1521;
(*(P1040)rt_nil_check(F->t_1517)).elemcons = F->c_267v;
}
F->c_267v = f_new_cons_184();
if (((*(P1034)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1036)rt_nil_check(F->c_267v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805((*(P1034)rt_nil_check(F->st_266)).b, g_ty_int_1119, &F->dummy_1519); b_; }));
}
F->result_ = F->t_1517;
goto ret_;
} else if (0 || (sel1520 == (((rt_int)74LL)))) {
{
F->ec_1522 = NULL;
F->et_1523 = NULL;
F->et_1523 = f_resolve_subtype_268((*(P1034)rt_nil_check(F->st_266)).b, &F->ec_1522);
F->ix_1524 = NULL;
F->ix_1524 = (*(P1034)rt_nil_check(F->st_266)).a;
F->k_1525 = ((rt_int)0LL);
F->tail_1526 = NULL;
F->btail_1527 = NULL;
F->t_1517 = f_new_typ_183((((rt_int)6LL)));
(*(P1040)rt_nil_check(F->t_1517)).elem = F->et_1523;
(*(P1040)rt_nil_check(F->t_1517)).elemcons = F->ec_1522;
(*(P1040)rt_nil_check(F->t_1517)).elemst = (*(P1034)rt_nil_check(F->st_266)).b;
(*(P1036)rt_nil_check(F->c_267v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P1036)rt_nil_check(F->c_267v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1524 != NULL)) {
F->ic_1528 = NULL;
F->it_1529 = NULL;
F->it_1529 = f_resolve_subtype_268(F->ix_1524, &F->ic_1528);
F->lo_1530 = NULL;
F->hi_1531 = NULL;
F->tl_1532 = NULL;
if ((((*(P1040)rt_nil_check(f_base_of_223(F->it_1529))).kind != (((rt_int)1LL))) && ((*(P1040)rt_nil_check(f_base_of_223(F->it_1529))).kind != (((rt_int)4LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->st_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1528 = f_base_cons_226(F->it_1529, F->ic_1528);
F->k_1525 = rt_add(F->k_1525, ((rt_int)1LL));
{ R1056 *cell1533 = rt_alloc(sizeof(R1056));
(*cell1533).t = NULL;
(*cell1533).next = NULL;
F->tl_1532 = cell1533;
}
(*(P1055)rt_nil_check(F->tl_1532)).t = F->it_1529;
if ((F->tail_1526 == NULL)) {
(*(P1040)rt_nil_check(F->t_1517)).idxs = F->tl_1532;
} else {
(*(P1055)rt_nil_check(F->tail_1526)).next = F->tl_1532;
}
F->tail_1526 = F->tl_1532;
if (((F->ic_1528 != NULL) && ((*(P1036)rt_nil_check(F->ic_1528)).lo != NULL))) {
F->lo_1530 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_193(F->ic_1528); b_; }));
F->hi_1531 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_195(F->ic_1528); b_; }));
} else if (((*(P1040)rt_nil_check(f_base_of_223(F->it_1529))).kind == (((rt_int)4LL)))) {
F->lo_1530 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1531 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_71((*(P1040)rt_nil_check(f_base_of_223(F->it_1529))).lits), ((rt_int)1LL))); b_; }));
}
if ((F->k_1525 == ((rt_int)1LL))) {
(*(P1040)rt_nil_check(F->t_1517)).idx = F->it_1529;
(*(P1036)rt_nil_check(F->c_267v)).lo = F->lo_1530;
(*(P1036)rt_nil_check(F->c_267v)).hi = F->hi_1531;
} else if ((F->k_1525 == ((rt_int)2LL))) {
(*(P1040)rt_nil_check(F->t_1517)).idx2 = F->it_1529;
(*(P1036)rt_nil_check(F->c_267v)).lo2 = F->lo_1530;
(*(P1036)rt_nil_check(F->c_267v)).hi2 = F->hi_1531;
} else if ((F->lo_1530 != NULL)) {
F->l1_1534 = NULL;
F->l2_1535 = NULL;
{ R1039 *cell1536 = rt_alloc(sizeof(R1039));
(*cell1536).s = NULL;
(*cell1536).next = NULL;
F->l1_1534 = cell1536;
}
{ R1039 *cell1537 = rt_alloc(sizeof(R1039));
(*cell1537).s = NULL;
(*cell1537).next = NULL;
F->l2_1535 = cell1537;
}
(*(P1038)rt_nil_check(F->l1_1534)).s = F->lo_1530;
(*(P1038)rt_nil_check(F->l2_1535)).s = F->hi_1531;
(*(P1038)rt_nil_check(F->l1_1534)).next = F->l2_1535;
if ((F->btail_1527 == NULL)) {
(*(P1036)rt_nil_check(F->c_267v)).bnds = F->l1_1534;
} else {
(*(P1038)rt_nil_check(F->btail_1527)).next = F->l1_1534;
}
F->btail_1527 = F->l2_1535;
}
F->ix_1524 = (*(P1034)rt_nil_check(F->ix_1524)).next;
}
(*(P1040)rt_nil_check(F->t_1517)).ndim = F->k_1525;
}
F->result_ = F->t_1517;
goto ret_;
} else if (0 || (sel1520 == (((rt_int)77LL)))) {
F->t_1517 = f_new_typ_183((((rt_int)16LL)));
{
F->ec_1538 = NULL;
(*(P1040)rt_nil_check(F->t_1517)).elem = f_resolve_subtype_268((*(P1034)rt_nil_check(F->st_266)).a, &F->ec_1538);
(*(P1040)rt_nil_check(F->t_1517)).elemcons = F->ec_1538;
if ((((*(P1040)rt_nil_check(f_base_of_223((*(P1040)rt_nil_check(F->t_1517)).elem))).kind != (((rt_int)1LL))) && ((*(P1040)rt_nil_check(f_base_of_223((*(P1040)rt_nil_check(F->t_1517)).elem))).kind != (((rt_int)4LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->st_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component subtype of a set is an INT or ENUM subtype", 56); b_; }));
}
}
F->result_ = F->t_1517;
goto ret_;
} else if (0 || (sel1520 == (((rt_int)75LL))) || (sel1520 == (((rt_int)76LL)))) {
if (((*(P1034)rt_nil_check(F->st_266)).kind == (((rt_int)76LL)))) {
F->t_1517 = f_new_typ_183((((rt_int)17LL)));
} else {
F->t_1517 = f_new_typ_183((((rt_int)7LL)));
}
{
F->comp_1539 = NULL;
F->comp_1539 = (*(P1034)rt_nil_check(F->st_266)).a;
F->tail_1540 = NULL;
while ((F->comp_1539 != NULL)) {
F->cc_1541 = NULL;
F->f_1542 = NULL;
{ R1043 *cell1543 = rt_alloc(sizeof(R1043));
(*cell1543).name = NULL;
(*cell1543).t = NULL;
(*cell1543).c = NULL;
(*cell1543).st = NULL;
(*cell1543).next = NULL;
F->f_1542 = cell1543;
}
(*(P1042)rt_nil_check(F->f_1542)).name = (*(P1034)rt_nil_check(F->comp_1539)).name;
(*(P1042)rt_nil_check(F->f_1542)).t = f_resolve_subtype_268((*(P1034)rt_nil_check(F->comp_1539)).a, &F->cc_1541);
(*(P1042)rt_nil_check(F->f_1542)).c = F->cc_1541;
(*(P1042)rt_nil_check(F->f_1542)).st = (*(P1034)rt_nil_check(F->comp_1539)).a;
if ((F->tail_1540 == NULL)) {
(*(P1040)rt_nil_check(F->t_1517)).fields = F->f_1542;
} else {
(*(P1042)rt_nil_check(F->tail_1540)).next = F->f_1542;
}
F->tail_1540 = F->f_1542;
F->comp_1539 = (*(P1034)rt_nil_check(F->comp_1539)).next;
}
}
if (((*(P1040)rt_nil_check(F->t_1517)).kind == (((rt_int)17LL)))) {
F->lits_1544 = NULL;
F->ltail_1545 = NULL;
F->f_1546 = NULL;
F->f_1546 = (*(P1040)rt_nil_check(F->t_1517)).fields;
while ((F->f_1546 != NULL)) {
F->l_1547 = NULL;
F->l_1547 = f_nn_65((((rt_int)4LL)), (*(P1034)rt_nil_check(F->st_266)).line);
if (rt_str_eq((((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_1546)).name))->all), rt_str("TAG", 3))) {
f_fail_23((*(P1034)rt_nil_check(F->st_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P1034)rt_nil_check(F->l_1547)).name = (*(P1042)rt_nil_check(F->f_1546)).name;
f_append_69(&F->lits_1544, &F->ltail_1545, F->l_1547);
F->f_1546 = (*(P1042)rt_nil_check(F->f_1546)).next;
}
(*(P1040)rt_nil_check(F->t_1517)).elem = f_new_typ_183((((rt_int)4LL)));
(*(P1040)rt_nil_check((*(P1040)rt_nil_check(F->t_1517)).elem)).lits = F->lits_1544;
if (((*(P1034)rt_nil_check(F->st_266)).b != NULL)) {
f_tag_constraint_274(F->t_1517, (*(P1034)rt_nil_check(F->st_266)).b, F->c_267v);
}
}
F->result_ = F->t_1517;
goto ret_;
} else if (0 || (sel1520 == (((rt_int)79LL)))) {
F->t_1517 = f_new_typ_183((((rt_int)10LL)));
{
F->ec_1548 = NULL;
(*(P1040)rt_nil_check(F->t_1517)).elem = f_resolve_subtype_268((*(P1034)rt_nil_check(F->st_266)).a, &F->ec_1548);
(*(P1040)rt_nil_check(F->t_1517)).elemcons = F->ec_1548;
}
(*(P1036)rt_nil_check(F->c_267v)).args = (*(P1034)rt_nil_check(F->st_266)).b;
F->result_ = F->t_1517;
goto ret_;
} else if (0 || (sel1520 == (((rt_int)78LL)))) {
if (((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P1044)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1549 = NULL;
F->gt_1549 = f_copy_node_847((*(P1034)rt_nil_check(F->st_266)).a);
(*(P1034)rt_nil_check(F->gt_1549)).next = NULL;
F->result_ = f_instantiate_type_745(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1549, (*(P1034)rt_nil_check(F->st_266)).b, &F->c_267v, (*(P1034)rt_nil_check(F->st_266)).line);
goto ret_;
}
{
F->ec_1550 = NULL;
F->t_1517 = f_new_typ_183((((rt_int)12LL)));
(*(P1040)rt_nil_check(F->t_1517)).elem = f_resolve_subtype_268((*(P1034)rt_nil_check(F->st_266)).a, &F->ec_1550);
(*(P1040)rt_nil_check(F->t_1517)).elemcons = F->ec_1550;
if (((*(P1034)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1036)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805((*(P1034)rt_nil_check(F->st_266)).b, g_ty_int_1119, &F->dummy_1519); b_; }));
}
}
F->result_ = F->t_1517;
goto ret_;
} else if (0 || (sel1520 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_277(F->st_266, &F->c_267v);
goto ret_;
} else if (0 || (sel1520 == (((rt_int)81LL)))) {
{
F->base_1551 = NULL;
F->result_ = f_value_subtype_290((*(P1034)rt_nil_check(F->st_266)).a, &F->c_267v, &F->base_1551);
goto ret_;
}
} else {
f_fail_23((*(P1034)rt_nil_check(F->st_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
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

static int f_float_lit_270(P1034 e_269) {
  struct f_float_lit_270fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_269 = e_269;
if ((((*(P1034)rt_nil_check(F->e_269)).kind == (((rt_int)8LL))) && (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_269)).name))->all), rt_str("-", 1)) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_269)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_270((*(P1034)rt_nil_check(F->e_269)).a);
goto ret_;
}
F->result_ = (((*(P1034)rt_nil_check(F->e_269)).kind == (((rt_int)2LL))) || ((*(P1034)rt_nil_check(F->e_269)).kind == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_274(P1040 t_271, P1034 e_272, P1036 c_273) {
  struct f_tag_constraint_274fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_271 = t_271;
F->e_272 = e_272;
F->c_273 = c_273;
F->dummy_1552 = NULL;
(*(P1036)rt_nil_check(F->c_273)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805(F->e_272, (*(P1040)rt_nil_check(F->t_271)).elem, &F->dummy_1552); b_; }));
f_check_type_232(F->dummy_1552, (*(P1040)rt_nil_check(F->t_271)).elem, (*(P1034)rt_nil_check(F->e_272)).line);
(*(P1036)rt_nil_check(F->c_273)).hi = (*(P1036)rt_nil_check(F->c_273)).lo;
if (((*(P1034)rt_nil_check(F->e_272)).kind == (((rt_int)4LL)))) {
(*(P1036)rt_nil_check(F->c_273)).mlo = f_lit_index_265((*(P1040)rt_nil_check((*(P1040)rt_nil_check(F->t_271)).elem)).lits, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_272)).name))->all));
(*(P1036)rt_nil_check(F->c_273)).mhi = (*(P1036)rt_nil_check(F->c_273)).mlo;
(*(P1036)rt_nil_check(F->c_273)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P1040 f_named_subtype_277(P1034 st_275, P1036 *c_276) {
  struct f_named_subtype_277fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_275 = st_275;
F->c_276 = c_276;
F->c_276v = *F->c_276;
F->t_1553 = NULL;
F->y_1554 = NULL;
F->y_1554 = f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->st_275)).name))->all));
F->name_1555 = rt_str_copy((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->st_275)).name))->all));
F->c_276v = f_new_cons_184();
if (((F->y_1554 == NULL) && ((rt_str_eq(F->name_1555, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1555, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1555, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_295(F->st_275, &F->c_276v);
goto ret_;
}
if ((F->y_1554 == NULL)) {
if (rt_str_eq(F->name_1555, rt_str("BOOL", 4))) {
F->t_1553 = g_ty_bool_1120;
} else if (rt_str_eq(F->name_1555, rt_str("ASCII", 5))) {
F->t_1553 = g_ty_ascii_1122;
} else if (rt_str_eq(F->name_1555, rt_str("DATA_LOCK", 9))) {
F->t_1553 = g_ty_lock_1127;
} else if (rt_str_eq(F->name_1555, rt_str("LATCH", 5))) {
F->t_1553 = g_ty_latch_1128;
} else if (rt_str_eq(F->name_1555, rt_str("ACT", 3))) {
F->t_1553 = g_ty_act_1129;
} else if (rt_str_eq(F->name_1555, rt_str("INT", 3))) {
F->t_1553 = g_ty_int_1119;
} else if (rt_str_eq(F->name_1555, rt_str("SEND_ST", 7))) {
F->t_1553 = g_ty_send_st_1131;
} else if (rt_str_eq(F->name_1555, rt_str("RECEIVE_ST", 10))) {
F->t_1553 = g_ty_receive_st_1132;
} else if (rt_str_eq(F->name_1555, rt_str("FLOAT", 5))) {
F->t_1553 = g_ty_float_1121;
} else {
f_fail_23((*(P1034)rt_nil_check(F->st_275)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1555); b_; }));
}
if (((*(P1034)rt_nil_check(F->st_275)).b != NULL)) {
f_apply_constraint_286(F->t_1553, (*(P1034)rt_nil_check(F->st_275)).b, F->c_276v, (*(P1034)rt_nil_check(F->st_275)).line);
}
F->result_ = F->t_1553;
goto ret_;
}
if ((((*(P1044)rt_nil_check(F->y_1554)).kind == (((rt_int)10LL))) && (((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_1554)).decl)).b)).kind == (((rt_int)43LL))) || ((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_1554)).decl)).b)).kind == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_745(F->y_1554, (*(P1034)rt_nil_check(F->st_275)).a, (*(P1034)rt_nil_check(F->st_275)).b, &F->c_276v, (*(P1034)rt_nil_check(F->st_275)).line);
goto ret_;
}
if ((((*(P1044)rt_nil_check(F->y_1554)).kind == (((rt_int)10LL))) && ((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_1554)).decl)).b)).kind == (((rt_int)42LL))))) {
F->binds_1556 = NULL;
F->binds_1556 = f_tt_binds_711((*(P1044)rt_nil_check(F->y_1554)).decl, (*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_1554)).decl)).b)).e, (*(P1034)rt_nil_check(F->st_275)).a, (*(P1034)rt_nil_check(F->st_275)).line);
F->saved_env_1557 = NULL;
F->saved_env_1557 = g_genv_1075;
F->saved_gdepth_1558 = g_gdepth_1107;
f_open_scope_177();
while ((F->binds_1556 != NULL)) {
F->nb_1559 = NULL;
F->nb_1559 = (*(P1044)rt_nil_check(F->binds_1556)).mnext;
f_define_168(F->binds_1556, (*(P1034)rt_nil_check(F->st_275)).line);
F->binds_1556 = F->nb_1559;
}
g_genv_1075 = (*(P1044)rt_nil_check(F->y_1554)).env;
g_gdepth_1107 = g_depth_1077;
F->t_1553 = f_resolve_subtype_268((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_1554)).decl)).b)).a, &F->c_276v);
g_genv_1075 = F->saved_env_1557;
g_gdepth_1107 = F->saved_gdepth_1558;
f_close_scope_178();
if (((*(P1034)rt_nil_check(F->st_275)).b != NULL)) {
F->c_276v = f_copy_cons_206(F->c_276v);
f_apply_constraint_286(F->t_1553, (*(P1034)rt_nil_check(F->st_275)).b, F->c_276v, (*(P1034)rt_nil_check(F->st_275)).line);
}
F->result_ = F->t_1553;
goto ret_;
}
if (((((*(P1044)rt_nil_check(F->y_1554)).kind == (((rt_int)5LL))) && ((*(P1044)rt_nil_check(F->y_1554)).t != NULL)) && ((*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_1554)).t)).kind == (((rt_int)15LL))))) {
F->result_ = f_new_type_323(F->y_1554, F->st_275, &F->c_276v);
goto ret_;
}
if (((((*(P1044)rt_nil_check(F->y_1554)).kind == (((rt_int)5LL))) && ((*(P1044)rt_nil_check(F->y_1554)).t != NULL)) && ((*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_1554)).t)).kind == (((rt_int)8LL))))) {
(*(P1036)rt_nil_check(F->c_276v)).args = (*(P1034)rt_nil_check(F->st_275)).b;
F->result_ = (*(P1044)rt_nil_check(F->y_1554)).t;
goto ret_;
}
if (((((*(P1044)rt_nil_check(F->y_1554)).kind == (((rt_int)6LL))) && ((*(P1044)rt_nil_check(F->y_1554)).decl != NULL)) && ((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_1554)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_281(F->y_1554, F->st_275, &F->c_276v);
goto ret_;
}
if (((((*(P1044)rt_nil_check(F->y_1554)).kind == (((rt_int)6LL))) || ((*(P1044)rt_nil_check(F->y_1554)).kind == (((rt_int)5LL)))) && ((*(P1044)rt_nil_check(F->y_1554)).t != NULL))) {
if (((*(P1044)rt_nil_check(F->y_1554)).c != NULL)) {
F->c_276v = (*(P1044)rt_nil_check(F->y_1554)).c;
}
F->t_1553 = (*(P1044)rt_nil_check(F->y_1554)).t;
} else if (((((*(P1044)rt_nil_check(F->y_1554)).kind == (((rt_int)5LL))) && ((*(P1044)rt_nil_check(F->y_1554)).decl != NULL)) && ((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_1554)).decl)).kind == (((rt_int)43LL))))) {
F->result_ = f_new_type_323(F->y_1554, F->st_275, &F->c_276v);
goto ret_;
} else if ((((*(P1044)rt_nil_check(F->y_1554)).kind == (((rt_int)6LL))) || ((*(P1044)rt_nil_check(F->y_1554)).kind == (((rt_int)5LL))))) {
F->t_1553 = f_resolve_subtype_268((*(P1044)rt_nil_check(F->y_1554)).st, &F->c_276v);
} else {
f_fail_23((*(P1034)rt_nil_check(F->st_275)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1555, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P1034)rt_nil_check(F->st_275)).b != NULL)) {
F->c_276v = f_copy_cons_206(F->c_276v);
f_apply_constraint_286(F->t_1553, (*(P1034)rt_nil_check(F->st_275)).b, F->c_276v, (*(P1034)rt_nil_check(F->st_275)).line);
}
F->result_ = F->t_1553;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_276) = F->c_276v;
  RT_FPOP();
  return F->result_;
}

static P1040 f_invoke_abbrev_281(P1044 y_278, P1034 st_279, P1036 *c_280) {
  struct f_invoke_abbrev_281fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_278 = y_278;
F->st_279 = st_279;
F->c_280 = c_280;
F->c_280v = *F->c_280;
F->p_1560 = NULL;
F->p_1560 = (*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_278)).decl)).b;
F->a_1561 = NULL;
F->a_1561 = (*(P1034)rt_nil_check(F->st_279)).b;
F->t_1562 = NULL;
if ((f_list_len_71(F->p_1560) != f_list_len_71(F->a_1561))) {
f_fail_23((*(P1034)rt_nil_check(F->st_279)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_278)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1560))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_177();
while ((F->p_1560 != NULL)) {
F->z_1563 = NULL;
F->z_1563 = f_new_sym_181((((rt_int)2LL)), (*(P1034)rt_nil_check(F->p_1560)).name);
F->pc_1564 = NULL;
F->at_1565 = NULL;
if (((*(P1034)rt_nil_check(F->p_1560)).ival != (((rt_int)1LL)))) {
f_fail_23((*(P1034)rt_nil_check(F->st_279)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P1044)rt_nil_check(F->z_1563)).t = f_resolve_subtype_268((*(P1034)rt_nil_check(F->p_1560)).a, &F->pc_1564);
(*(P1044)rt_nil_check(F->z_1563)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_805(F->a_1561, (*(P1044)rt_nil_check(F->z_1563)).t, &F->at_1565)), rt_str(")", 1)); b_; }));
f_check_type_232(F->at_1565, (*(P1044)rt_nil_check(F->z_1563)).t, (*(P1034)rt_nil_check(F->st_279)).line);
(*(P1044)rt_nil_check(F->z_1563)).mvalue = f_manifest_371(F->a_1561, &F->ok_1566);
(*(P1044)rt_nil_check(F->z_1563)).hasmv = F->ok_1566;
(*(P1044)rt_nil_check(F->z_1563)).mv = f_meval_380(F->a_1561, &F->ok_1566);
if ((!F->ok_1566)) {
(*(P1044)rt_nil_check(F->z_1563)).mv = NULL;
}
(*(P1044)rt_nil_check(F->z_1563)).ro_flag = 1;
f_define_168(F->z_1563, (*(P1034)rt_nil_check(F->st_279)).line);
F->p_1560 = (*(P1034)rt_nil_check(F->p_1560)).next;
F->a_1561 = (*(P1034)rt_nil_check(F->a_1561)).next;
}
F->t_1562 = f_resolve_subtype_268((*(P1044)rt_nil_check(F->y_278)).st, &F->c_280v);
f_close_scope_178();
F->result_ = F->t_1562;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_280) = F->c_280v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_286(P1040 t_282, P1034 args_283, P1036 c_284, rt_int line_285) {
  struct f_apply_constraint_286fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_282 = t_282;
F->args_283 = args_283;
F->c_284 = c_284;
F->line_285 = line_285;
F->dummy_1567 = NULL;
if ((((*(P1040)rt_nil_check(F->t_282)).kind == (((rt_int)1LL))) || ((*(P1040)rt_nil_check(F->t_282)).kind == (((rt_int)4LL))))) {
if ((((*(P1034)rt_nil_check(F->args_283)).kind != (((rt_int)16LL))) || ((*(P1034)rt_nil_check(F->args_283)).next != NULL))) {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P1036)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805((*(P1034)rt_nil_check(F->args_283)).a, F->t_282, &F->dummy_1567); b_; }));
f_check_type_232(F->dummy_1567, F->t_282, F->line_285);
(*(P1036)rt_nil_check(F->c_284)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805((*(P1034)rt_nil_check(F->args_283)).b, F->t_282, &F->dummy_1567); b_; }));
f_check_type_232(F->dummy_1567, F->t_282, F->line_285);
(*(P1036)rt_nil_check(F->c_284)).hasm = 0;
if (((*(P1040)rt_nil_check(F->t_282)).kind == (((rt_int)1LL)))) {
(*(P1036)rt_nil_check(F->c_284)).mlo = f_manifest_371((*(P1034)rt_nil_check(F->args_283)).a, &F->ok_1568);
(*(P1036)rt_nil_check(F->c_284)).hasm = F->ok_1568;
(*(P1036)rt_nil_check(F->c_284)).mhi = f_manifest_371((*(P1034)rt_nil_check(F->args_283)).b, &F->ok_1568);
(*(P1036)rt_nil_check(F->c_284)).hasm = ((*(P1036)rt_nil_check(F->c_284)).hasm && F->ok_1568);
} else if ((((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_283)).a)).kind == (((rt_int)4LL))) && ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_283)).b)).kind == (((rt_int)4LL))))) {
(*(P1036)rt_nil_check(F->c_284)).mlo = f_lit_index_265((*(P1040)rt_nil_check(f_base_of_223(F->t_282))).lits, &(((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_283)).a)).name))->all));
(*(P1036)rt_nil_check(F->c_284)).mhi = f_lit_index_265((*(P1040)rt_nil_check(f_base_of_223(F->t_282))).lits, &(((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_283)).b)).name))->all));
(*(P1036)rt_nil_check(F->c_284)).hasm = 1;
}
} else if (((*(P1040)rt_nil_check(F->t_282)).kind == (((rt_int)3LL)))) {
(*(P1036)rt_nil_check(F->c_284)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805(F->args_283, g_ty_int_1119, &F->dummy_1567); b_; }));
if (((*(P1034)rt_nil_check(F->args_283)).next != NULL)) {
if (((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_283)).next)).kind != (((rt_int)16LL)))) {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P1036)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_283)).next)).a, g_ty_float_1121, &F->dummy_1567); b_; }));
(*(P1036)rt_nil_check(F->c_284)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_283)).next)).b, g_ty_float_1121, &F->dummy_1567); b_; }));
(*(P1036)rt_nil_check(F->c_284)).hasm = (f_float_lit_270((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_283)).next)).a) && f_float_lit_270((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_283)).next)).b));
}
} else if (((*(P1040)rt_nil_check(F->t_282)).kind == (((rt_int)5LL)))) {
(*(P1036)rt_nil_check(F->c_284)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805(F->args_283, g_ty_int_1119, &F->dummy_1567); b_; }));
} else if (((*(P1040)rt_nil_check(F->t_282)).kind == (((rt_int)12LL)))) {
(*(P1036)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805(F->args_283, g_ty_int_1119, &F->dummy_1567); b_; }));
} else if (((*(P1040)rt_nil_check(F->t_282)).kind == (((rt_int)17LL)))) {
f_tag_constraint_274(F->t_282, F->args_283, F->c_284);
} else {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P1040 f_value_subtype_290(P1034 e_287, P1036 *c_288, P1027 *base_289) {
  struct f_value_subtype_290fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_287 = e_287;
F->c_288 = c_288;
F->c_288v = *F->c_288;
F->base_289 = base_289;
F->base_289v = *F->base_289;
F->t_1569 = NULL;
F->c0_1570 = NULL;
if (f_is_lvalue_768(F->e_287)) {
f_lvalue_774(F->e_287, &F->base_289v, &F->t_1569, &F->c0_1570, &F->ro_1571);
} else {
F->base_289v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805(F->e_287, NULL, &F->t_1569); b_; }));
}
if ((F->c0_1570 == NULL)) {
F->c_288v = f_new_cons_184();
} else {
F->c_288v = f_copy_cons_206(F->c0_1570);
}
if (((*(P1040)rt_nil_check(F->t_1569)).kind == (((rt_int)5LL)))) {
(*(P1036)rt_nil_check(F->c_288v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1027)rt_nil_check(F->base_289v))->all)), rt_str(").len", 5)); b_; }));
} else if (((*(P1040)rt_nil_check(F->t_1569)).kind == (((rt_int)6LL)))) {
(*(P1036)rt_nil_check(F->c_288v)).bnds = NULL;
{ rt_int lo1573 = ((rt_int)1LL), hi1574 = (*(P1040)rt_nil_check(F->t_1569)).ndim;
for (rt_int it1575 = lo1573; it1575 <= hi1574; it1575++) {
F->k_1572 = it1575;
F->lo_1576 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1027)rt_nil_check(F->base_289v))->all)), rt_str(").", 2)), f_dim_lo_242(F->k_1572)));
F->hi_1577 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1027)rt_nil_check(F->base_289v))->all)), rt_str(").", 2)), f_dim_hi_244(F->k_1572)));
if ((F->k_1572 == ((rt_int)1LL))) {
(*(P1036)rt_nil_check(F->c_288v)).lo = f_mk_3(&F->lo_1576);
(*(P1036)rt_nil_check(F->c_288v)).hi = f_mk_3(&F->hi_1577);
} else if ((F->k_1572 == ((rt_int)2LL))) {
(*(P1036)rt_nil_check(F->c_288v)).lo2 = f_mk_3(&F->lo_1576);
(*(P1036)rt_nil_check(F->c_288v)).hi2 = f_mk_3(&F->hi_1577);
} else {
F->l1_1578 = NULL;
F->l2_1579 = NULL;
{ R1039 *cell1580 = rt_alloc(sizeof(R1039));
(*cell1580).s = NULL;
(*cell1580).next = NULL;
F->l1_1578 = cell1580;
}
{ R1039 *cell1581 = rt_alloc(sizeof(R1039));
(*cell1581).s = NULL;
(*cell1581).next = NULL;
F->l2_1579 = cell1581;
}
(*(P1038)rt_nil_check(F->l1_1578)).s = f_mk_3(&F->lo_1576);
(*(P1038)rt_nil_check(F->l2_1579)).s = f_mk_3(&F->hi_1577);
(*(P1038)rt_nil_check(F->l1_1578)).next = F->l2_1579;
(*(P1038)rt_nil_check(F->l2_1579)).next = (*(P1036)rt_nil_check(F->c_288v)).bnds;
(*(P1036)rt_nil_check(F->c_288v)).bnds = F->l1_1578;
}
}
}
(*(P1036)rt_nil_check(F->c_288v)).bnds = f_reverse_pairs_292((*(P1036)rt_nil_check(F->c_288v)).bnds);
} else if (((*(P1040)rt_nil_check(F->t_1569)).kind == (((rt_int)12LL)))) {
(*(P1036)rt_nil_check(F->c_288v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1027)rt_nil_check(F->base_289v))->all)), rt_str(")->cap", 6)); b_; }));
} else if ((((*(P1040)rt_nil_check(F->t_1569)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->t_1569)).tparams != NULL))) {
F->p_1582 = NULL;
F->p_1582 = (*(P1040)rt_nil_check(F->t_1569)).tparams;
F->head_1583 = NULL;
F->tail_1584 = NULL;
while ((F->p_1582 != NULL)) {
F->sel_1585 = NULL;
F->sel_1585 = f_nn_65((((rt_int)11LL)), (*(P1034)rt_nil_check(F->e_287)).line);
(*(P1034)rt_nil_check(F->sel_1585)).a = F->e_287;
(*(P1034)rt_nil_check(F->sel_1585)).name = (*(P1034)rt_nil_check(F->p_1582)).name;
f_append_69(&F->head_1583, &F->tail_1584, F->sel_1585);
F->p_1582 = (*(P1034)rt_nil_check(F->p_1582)).next;
}
(*(P1036)rt_nil_check(F->c_288v)).args = F->head_1583;
}
F->result_ = F->t_1569;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_288) = F->c_288v;  (*F->base_289) = F->base_289v;
  RT_FPOP();
  return F->result_;
}

static P1038 f_reverse_pairs_292(P1038 l_291) {
  struct f_reverse_pairs_292fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_291 = l_291;
F->r_1586 = NULL;
F->p_1587 = NULL;
F->p_1587 = F->l_291;
while ((F->p_1587 != NULL)) {
F->a_1588 = NULL;
F->a_1588 = F->p_1587;
F->b_1589 = NULL;
F->b_1589 = (*(P1038)rt_nil_check(F->p_1587)).next;
F->p_1587 = (*(P1038)rt_nil_check(F->b_1589)).next;
(*(P1038)rt_nil_check(F->b_1589)).next = F->r_1586;
F->r_1586 = F->a_1588;
}
F->result_ = F->r_1586;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1040 f_inquiry_295(P1034 st_293, P1036 *c_294) {
  struct f_inquiry_295fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_293 = st_293;
F->c_294 = c_294;
F->c_294v = *F->c_294;
F->base_1590 = NULL;
F->t_1591 = NULL;
F->name_1592 = rt_str_copy((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->st_293)).name))->all));
if (((*(P1034)rt_nil_check(F->st_293)).b == NULL)) {
f_fail_23((*(P1034)rt_nil_check(F->st_293)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1592, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1592, rt_str("TYPEOF", 6))) {
F->sub_1593 = NULL;
F->sub_1593 = f_as_subtype_297((*(P1034)rt_nil_check(F->st_293)).b);
F->c2_1594 = NULL;
if ((F->sub_1593 != NULL)) {
F->t_1591 = f_resolve_subtype_268(F->sub_1593, &F->c2_1594);
} else {
F->t_1591 = f_value_subtype_290((*(P1034)rt_nil_check(F->st_293)).b, &F->c2_1594, &F->base_1590);
}
F->c_294v = f_new_cons_184();
F->result_ = F->t_1591;
goto ret_;
}
F->t_1591 = f_value_subtype_290((*(P1034)rt_nil_check(F->st_293)).b, &F->c_294v, &F->base_1590);
if (rt_str_eq(F->name_1592, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1591;
goto ret_;
}
{
F->k_1595 = ((rt_int)1LL);
F->ok_1596 = 1;
F->ac_1597 = NULL;
F->ac_1597 = F->c_294v;
if (((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->st_293)).b)).next != NULL)) {
F->k_1595 = f_manifest_371((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->st_293)).b)).next, &F->ok_1596);
}
while ((((*(P1040)rt_nil_check(F->t_1591)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->t_1591)).tparams == NULL))) {
F->t_1591 = (*(P1040)rt_nil_check(F->t_1591)).under;
}
if ((((((*(P1040)rt_nil_check(F->t_1591)).kind != (((rt_int)6LL))) || (!F->ok_1596)) || (F->k_1595 < ((rt_int)1LL))) || (F->k_1595 > (*(P1040)rt_nil_check(F->t_1591)).ndim))) {
f_fail_23((*(P1034)rt_nil_check(F->st_293)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_294v = f_new_cons_184();
(*(P1036)rt_nil_check(F->c_294v)).lo = f_cons_lo_252(F->ac_1597, F->k_1595);
(*(P1036)rt_nil_check(F->c_294v)).hi = f_cons_hi_255(F->ac_1597, F->k_1595);
F->result_ = f_idx_type_258(F->t_1591, F->k_1595);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_294) = F->c_294v;
  RT_FPOP();
  return F->result_;
}

static P1034 f_as_subtype_297(P1034 e_296) {
  struct f_as_subtype_297fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_296 = e_296;
F->st_1598 = NULL;
if ((F->e_296 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((*(P1034)rt_nil_check(F->e_296)).kind == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_297((*(P1034)rt_nil_check(F->e_296)).a);
goto ret_;
} else if (((*(P1034)rt_nil_check(F->e_296)).kind == (((rt_int)7LL)))) {
if ((!f_type_name_304(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1598 = f_nn_65((((rt_int)80LL)), (*(P1034)rt_nil_check(F->e_296)).line);
(*(P1034)rt_nil_check(F->st_1598)).name = (*(P1034)rt_nil_check(F->e_296)).name;
F->result_ = F->st_1598;
goto ret_;
} else if ((((*(P1034)rt_nil_check(F->e_296)).kind == (((rt_int)12LL))) && ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).a)).kind == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_302((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).a)).name, (*(P1034)rt_nil_check(F->e_296)).b, NULL, (*(P1034)rt_nil_check(F->e_296)).line);
goto ret_;
} else if (((*(P1034)rt_nil_check(F->e_296)).kind != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).a)).kind == (((rt_int)12LL))) && ((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).a)).a)).kind == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_302((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).a)).a)).name, (*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).a)).b, (*(P1034)rt_nil_check(F->e_296)).b, (*(P1034)rt_nil_check(F->e_296)).line);
goto ret_;
} else if (((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).a)).kind != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1599 = rt_str_copy((((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).a)).name))->all));
F->y_1600 = NULL;
F->y_1600 = f_lookup_163(&F->name_1599);
if ((rt_str_eq(F->name_1599, rt_str("INT", 3)) && (F->y_1600 == NULL))) {
if (((((*(P1034)rt_nil_check(F->e_296)).b == NULL) || ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).b)).kind != (((rt_int)16LL)))) || ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1598 = f_nn_65((((rt_int)70LL)), (*(P1034)rt_nil_check(F->e_296)).line);
(*(P1034)rt_nil_check(F->st_1598)).a = (*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).b)).a;
(*(P1034)rt_nil_check(F->st_1598)).b = (*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).b)).b;
F->result_ = F->st_1598;
goto ret_;
} else if ((rt_str_eq(F->name_1599, rt_str("FLOAT", 5)) && (F->y_1600 == NULL))) {
F->st_1598 = f_nn_65((((rt_int)71LL)), (*(P1034)rt_nil_check(F->e_296)).line);
(*(P1034)rt_nil_check(F->st_1598)).a = (*(P1034)rt_nil_check(F->e_296)).b;
if ((((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).b)).next != NULL) && ((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).b)).next)).kind == (((rt_int)16LL))))) {
(*(P1034)rt_nil_check(F->st_1598)).b = (*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).b)).next)).a;
(*(P1034)rt_nil_check(F->st_1598)).c = (*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).b)).next)).b;
}
F->result_ = F->st_1598;
goto ret_;
} else if (((!f_type_name_304(&F->name_1599)) && (!((F->y_1600 == NULL) && ((rt_str_eq(F->name_1599, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1599, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1599, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1598 = f_nn_65((((rt_int)80LL)), (*(P1034)rt_nil_check(F->e_296)).line);
(*(P1034)rt_nil_check(F->st_1598)).name = (*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_296)).a)).name;
(*(P1034)rt_nil_check(F->st_1598)).b = (*(P1034)rt_nil_check(F->e_296)).b;
(*(P1034)rt_nil_check(F->st_1598)).flag = ((rt_int)1LL);
F->result_ = F->st_1598;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_tt_subtype_302(P1027 name_298, P1034 tt_299, P1034 args_300, rt_int line_301) {
  struct f_tt_subtype_302fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_298 = name_298;
F->tt_299 = tt_299;
F->args_300 = args_300;
F->line_301 = line_301;
F->st_1601 = NULL;
if (rt_str_eq((((P1027)rt_nil_check(F->name_298))->all), rt_str("STRING", 6))) {
F->st_1601 = f_nn_65((((rt_int)73LL)), F->line_301);
} else if (rt_str_eq((((P1027)rt_nil_check(F->name_298))->all), rt_str("SET", 3))) {
F->st_1601 = f_nn_65((((rt_int)77LL)), F->line_301);
} else if ((rt_str_eq((((P1027)rt_nil_check(F->name_298))->all), rt_str("MAILBOX", 7)) && ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P1044)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1601 = f_nn_65((((rt_int)78LL)), F->line_301);
} else if (rt_str_eq((((P1027)rt_nil_check(F->name_298))->all), rt_str("FILE", 4))) {
F->st_1601 = f_nn_65((((rt_int)79LL)), F->line_301);
} else if (f_type_name_304(&(((P1027)rt_nil_check(F->name_298))->all))) {
F->st_1601 = f_nn_65((((rt_int)80LL)), F->line_301);
(*(P1034)rt_nil_check(F->st_1601)).name = F->name_298;
(*(P1034)rt_nil_check(F->st_1601)).a = F->tt_299;
(*(P1034)rt_nil_check(F->st_1601)).b = F->args_300;
F->result_ = F->st_1601;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P1034)rt_nil_check(F->st_1601)).a = F->tt_299;
(*(P1034)rt_nil_check(F->st_1601)).b = F->args_300;
F->result_ = F->st_1601;
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
F->y_1602 = NULL;
F->y_1602 = f_lookup_163(&(*F->name_303));
if ((F->y_1602 == NULL)) {
F->result_ = ((((((((rt_str_eq((*F->name_303), rt_str("INT", 3)) || rt_str_eq((*F->name_303), rt_str("BOOL", 4))) || rt_str_eq((*F->name_303), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_303), rt_str("ASCII", 5))) || rt_str_eq((*F->name_303), rt_str("ACT", 3))) || rt_str_eq((*F->name_303), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_303), rt_str("LATCH", 5))) || rt_str_eq((*F->name_303), rt_str("SEND_ST", 7))) || rt_str_eq((*F->name_303), rt_str("RECEIVE_ST", 10)));
goto ret_;
}
F->result_ = ((((*(P1044)rt_nil_check(F->y_1602)).kind == (((rt_int)5LL))) || ((*(P1044)rt_nil_check(F->y_1602)).kind == (((rt_int)6LL)))) || (((*(P1044)rt_nil_check(F->y_1602)).kind == (((rt_int)10LL))) && ((((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_1602)).decl)).b)).kind == (((rt_int)43LL))) || ((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_1602)).decl)).b)).kind == (((rt_int)44LL)))) || ((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_1602)).decl)).b)).kind == (((rt_int)42LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_empty_set_306(P1040 t_305) {
  struct f_empty_set_306fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_305 = t_305;
if (f_sparse_set_308(F->t_305)) {
F->result_ = rt_str("rt_r_iset_empty()", 17);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_new(", 10), f_sub_lo_198(f_base_of_223((*(P1040)rt_nil_check(F->t_305)).elem), f_base_cons_226((*(P1040)rt_nil_check(F->t_305)).elem, (*(P1040)rt_nil_check(F->t_305)).elemcons))), rt_str(", ", 2)), f_sub_hi_201(f_base_of_223((*(P1040)rt_nil_check(F->t_305)).elem), f_base_cons_226((*(P1040)rt_nil_check(F->t_305)).elem, (*(P1040)rt_nil_check(F->t_305)).elemcons))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_sparse_set_308(P1040 t_307) {
  struct f_sparse_set_308fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_307 = t_307;
F->result_ = ((((*(P1040)rt_nil_check(F->t_307)).kind == (((rt_int)16LL))) && ((*(P1040)rt_nil_check(f_base_of_223((*(P1040)rt_nil_check(F->t_307)).elem))).kind == (((rt_int)1LL)))) && (((*(P1040)rt_nil_check(F->t_307)).elemcons == NULL) || ((*(P1036)rt_nil_check((*(P1040)rt_nil_check(F->t_307)).elemcons)).lo == NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_set_fn_311(P1040 t_309, rstr *op_310) {
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

static int f_opened_313(P1040 t_312) {
  struct f_opened_313fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_312 = t_312;
F->c_1603 = NULL;
F->c_1603 = g_caps_1093;
if (((((*(P1040)rt_nil_check(F->t_312)).kind != (((rt_int)15LL))) || ((*(P1040)rt_nil_check(F->t_312)).ocap == NULL)) || ((*(P1034)rt_nil_check((*(P1040)rt_nil_check(F->t_312)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1603 != NULL)) {
if (((*(P1061)rt_nil_check(F->c_1603)).d == (*(P1040)rt_nil_check(F->t_312)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1603 = (*(P1061)rt_nil_check(F->c_1603)).next;
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
F->i_1604 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_315)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_314)).len)) < ((rt_int)(((*F->pat_315)).len))))) {
F->result_ = (*F->s_314);
goto ret_;
}
while ((rt_sub(rt_add(F->i_1604, ((rt_int)(((*F->pat_315)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_314)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_314), F->i_1604, rt_sub(rt_add(F->i_1604, ((rt_int)(((*F->pat_315)).len))), ((rt_int)1LL))), (*F->pat_315))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_314), ((rt_int)1LL), rt_sub(F->i_1604, ((rt_int)1LL))), (*F->r_316)), f_replace_all_317(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_314), rt_add(F->i_1604, ((rt_int)(((*F->pat_315)).len))), ((rt_int)(((*F->s_314)).len))); b_; }), &(*F->pat_315), &(*F->r_316)));
goto ret_;
}
F->i_1604 = rt_add(F->i_1604, ((rt_int)1LL));
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
F->l_1605 = NULL;
F->l_1605 = g_psub_1095;
F->r_1606 = NULL;
F->r_1606 = f_mk_3(&(*F->s_318));
while ((F->l_1605 != NULL)) {
F->r_1606 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_317(&(((P1027)rt_nil_check(F->r_1606))->all), &(((P1027)rt_nil_check((*(P1038)rt_nil_check(F->l_1605)).s))->all), &(((P1027)rt_nil_check((*(P1038)rt_nil_check((*(P1038)rt_nil_check(F->l_1605)).next)).s))->all)); b_; }));
F->l_1605 = (*(P1038)rt_nil_check((*(P1038)rt_nil_check(F->l_1605)).next)).next;
}
F->result_ = (((P1027)rt_nil_check(F->r_1606))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1040 f_new_type_323(P1044 y_320, P1034 st_321, P1036 *c_322) {
  struct f_new_type_323fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_320 = y_320;
F->st_321 = st_321;
F->c_322 = c_322;
F->c_322v = *F->c_322;
F->d_1607 = NULL;
F->d_1607 = (*(P1044)rt_nil_check(F->y_320)).decl;
F->p_1608 = NULL;
F->uc_1609 = NULL;
F->c_322v = f_new_cons_184();
if (((*(P1044)rt_nil_check(F->y_320)).t == NULL)) {
(*(P1044)rt_nil_check(F->y_320)).t = f_new_typ_183((((rt_int)15LL)));
(*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_320)).t)).name = (*(P1044)rt_nil_check(F->y_320)).name;
(*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_320)).t)).decl = F->d_1607;
(*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_320)).t)).tparams = (*(P1034)rt_nil_check(F->d_1607)).b;
if ((g_caps_1093 != NULL)) {
(*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_320)).t)).ocap = (*(P1061)rt_nil_check(g_caps_1093)).d;
}
f_open_scope_177();
F->p_1608 = (*(P1034)rt_nil_check(F->d_1607)).b;
while ((F->p_1608 != NULL)) {
F->z_1610 = NULL;
F->z_1610 = f_new_sym_181((((rt_int)2LL)), (*(P1034)rt_nil_check(F->p_1608)).name);
F->zc_1611 = NULL;
(*(P1044)rt_nil_check(F->z_1610)).t = f_resolve_subtype_268((*(P1034)rt_nil_check(F->p_1608)).a, &F->zc_1611);
(*(P1044)rt_nil_check(F->z_1610)).mnext = (*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_320)).t)).tpsyms;
(*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_320)).t)).tpsyms = F->z_1610;
(*(P1044)rt_nil_check(F->z_1610)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1608)).name))->all))), rt_str("@", 1)); b_; }));
f_define_168(F->z_1610, (*(P1034)rt_nil_check(F->d_1607)).line);
F->p_1608 = (*(P1034)rt_nil_check(F->p_1608)).next;
}
(*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_320)).t)).under = f_resolve_subtype_268((*(P1034)rt_nil_check(F->d_1607)).a, &F->uc_1609);
(*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_320)).t)).elemcons = F->uc_1609;
if (((*(P1034)rt_nil_check(F->d_1607)).c != NULL)) {
f_check_rep_337((*(P1034)rt_nil_check(F->d_1607)).c, (*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_320)).t)).under, F->uc_1609, 1, 0, F->d_1607);
(*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_320)).t)).repn = (*(P1034)rt_nil_check(F->d_1607)).c;
}
f_close_scope_178();
}
(*(P1036)rt_nil_check(F->c_322v)).args = (*(P1034)rt_nil_check(F->st_321)).b;
F->result_ = (*(P1044)rt_nil_check(F->y_320)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_322) = F->c_322v;
  RT_FPOP();
  return F->result_;
}

static rt_int f_needed_bits_326(P1040 t_324, P1036 c_325) {
  struct f_needed_bits_326fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_324 = t_324;
F->c_325 = c_325;
F->n_1612 = ((rt_int)0LL);
if (((*(P1040)rt_nil_check(F->t_324)).kind == (((rt_int)2LL)))) {
F->result_ = ((rt_int)1LL);
goto ret_;
} else if (((*(P1040)rt_nil_check(F->t_324)).kind == (((rt_int)4LL)))) {
F->v_1613 = rt_sub(f_list_len_71((*(P1040)rt_nil_check(F->t_324)).lits), ((rt_int)1LL));
if (((F->c_325 != NULL) && (*(P1036)rt_nil_check(F->c_325)).hasm)) {
F->v_1613 = (*(P1036)rt_nil_check(F->c_325)).mhi;
}
} else if (((((*(P1040)rt_nil_check(F->t_324)).kind == (((rt_int)1LL))) && (F->c_325 != NULL)) && (*(P1036)rt_nil_check(F->c_325)).hasm)) {
if (((*(P1036)rt_nil_check(F->c_325)).mlo < ((rt_int)0LL))) {
F->v_1613 = (*(P1036)rt_nil_check(F->c_325)).mhi;
if ((rt_sub(rt_neg((*(P1036)rt_nil_check(F->c_325)).mlo), ((rt_int)1LL)) > F->v_1613)) {
F->v_1613 = rt_sub(rt_neg((*(P1036)rt_nil_check(F->c_325)).mlo), ((rt_int)1LL));
}
F->n_1612 = ((rt_int)1LL);
} else {
F->v_1613 = (*(P1036)rt_nil_check(F->c_325)).mhi;
}
} else if (((*(P1040)rt_nil_check(F->t_324)).kind == (((rt_int)1LL)))) {
F->result_ = ((rt_int)64LL);
goto ret_;
} else if (((*(P1040)rt_nil_check(F->t_324)).kind == (((rt_int)3LL)))) {
if (((((F->c_325 != NULL) && ((*(P1036)rt_nil_check(F->c_325)).prec != NULL)) && f_has_digits_only_328(&(((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_325)).prec))->all))) && (rt_int_of_str((((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_325)).prec))->all)) <= ((rt_int)6LL)))) {
F->result_ = ((rt_int)32LL);
goto ret_;
}
F->result_ = ((rt_int)64LL);
goto ret_;
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
while ((F->v_1613 > ((rt_int)0LL))) {
F->n_1612 = rt_add(F->n_1612, ((rt_int)1LL));
F->v_1613 = rt_div(F->v_1613, ((rt_int)2LL));
}
if ((F->n_1612 == ((rt_int)0LL))) {
F->n_1612 = ((rt_int)1LL);
}
F->result_ = F->n_1612;
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
{ rt_int lo1615 = ((rt_int)1LL), hi1616 = ((rt_int)(((*F->s_327)).len));
for (rt_int it1617 = lo1615; it1617 <= hi1616; it1617++) {
F->i_1614 = it1617;
if ((!f_is_digit_11(rt_str_get((*F->s_327), F->i_1614)))) {
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

static int f_built_in_only_330(P1040 t_329) {
  struct f_built_in_only_330fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_329 = t_329;
if (((*(P1040)rt_nil_check(F->t_329)).kind == (((rt_int)15LL)))) {
F->result_ = ((*(P1040)rt_nil_check(F->t_329)).repn != NULL);
goto ret_;
} else if (((*(P1040)rt_nil_check(F->t_329)).kind == (((rt_int)8LL)))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->t_329)).kind == (((rt_int)7LL))) || ((*(P1040)rt_nil_check(F->t_329)).kind == (((rt_int)17LL))))) {
F->f_1618 = NULL;
F->f_1618 = (*(P1040)rt_nil_check(F->t_329)).fields;
while ((F->f_1618 != NULL)) {
if ((!f_built_in_only_330((*(P1042)rt_nil_check(F->f_1618)).t))) {
F->result_ = 0;
goto ret_;
}
F->f_1618 = (*(P1042)rt_nil_check(F->f_1618)).next;
}
} else if (((((*(P1040)rt_nil_check(F->t_329)).kind == (((rt_int)6LL))) || ((*(P1040)rt_nil_check(F->t_329)).kind == (((rt_int)16LL)))) || ((*(P1040)rt_nil_check(F->t_329)).kind == (((rt_int)5LL))))) {
F->result_ = (((*(P1040)rt_nil_check(F->t_329)).elem == NULL) || f_built_in_only_330((*(P1040)rt_nil_check(F->t_329)).elem));
goto ret_;
}
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_rep_337(P1034 items_331, P1040 t_332, P1036 c_333, int top_334, int indirect_335, P1034 d_336) {
  struct f_check_rep_337fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_331 = items_331;
F->t_332 = t_332;
F->c_333 = c_333;
F->top_334 = top_334;
F->indirect_335 = indirect_335;
F->d_336 = d_336;
F->it_1619 = NULL;
F->it_1619 = F->items_331;
F->at_1621 = NULL;
if (((F->top_334 && (!F->indirect_335)) && (!f_built_in_only_330(F->t_332)))) {
f_fail_23((*(P1034)rt_nil_check(F->d_336)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only built-in types may underlie a representation", 49); b_; }));
}
while ((F->it_1619 != NULL)) {
F->w_1622 = rt_str_copy((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->it_1619)).name))->all));
if (rt_str_eq(F->w_1622, rt_str("SIZE", 4))) {
F->v_1623 = f_manifest_371((*(P1034)rt_nil_check(F->it_1619)).a, &F->ok_1620);
F->dummy_1624 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->it_1619)).a, g_ty_int_1119, &F->at_1621));
f_check_type_232(F->at_1621, g_ty_int_1119, (*(P1034)rt_nil_check(F->it_1619)).line);
if ((F->ok_1620 && (F->v_1623 < ((rt_int)0LL)))) {
f_fail_23((*(P1034)rt_nil_check(F->it_1619)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a SIZE is not negative", 22); b_; }));
} else if (((F->ok_1620 && (f_needed_bits_326(F->t_332, F->c_333) > F->v_1623)) && (!F->indirect_335))) {
f_fail_23((*(P1034)rt_nil_check(F->it_1619)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("SIZE(", 5), f_itos_7(F->v_1623)), rt_str(") is too small for this subtype, which needs ", 45)), f_itos_7(f_needed_bits_326(F->t_332, F->c_333))), rt_str(" bits", 5)); b_; }));
}
} else if (rt_str_eq(F->w_1622, rt_str("ALIGN", 5))) {
F->m_1625 = f_manifest_371((*(P1034)rt_nil_check(F->it_1619)).a, &F->ok_1620);
if ((!F->top_334)) {
f_fail_23((*(P1034)rt_nil_check(F->it_1619)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALIGN is for the whole underlying subtype only", 46); b_; }));
}
if ((F->ok_1620 && (F->m_1625 <= ((rt_int)0LL)))) {
f_fail_23((*(P1034)rt_nil_check(F->it_1619)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the modulus of ALIGN is greater than zero", 41); b_; }));
}
if ((F->ok_1620 && ((*(P1034)rt_nil_check(F->it_1619)).b != NULL))) {
F->r_1627 = f_manifest_371((*(P1034)rt_nil_check(F->it_1619)).b, &F->ok2_1626);
if ((F->ok2_1626 && ((F->r_1627 < ((rt_int)0LL)) || (F->r_1627 >= F->m_1625)))) {
f_fail_23((*(P1034)rt_nil_check(F->it_1619)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALIGN(e1 OF e2) needs e1 in 0 .. e2 - 1", 39); b_; }));
}
}
} else if (rt_str_eq(F->w_1622, rt_str("OFFSET", 6))) {
F->o_1628 = f_manifest_371((*(P1034)rt_nil_check(F->it_1619)).a, &F->ok_1620);
if (F->top_334) {
f_fail_23((*(P1034)rt_nil_check(F->it_1619)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET is for components of records and unions only", 51); b_; }));
} else if ((F->ok_1620 && (F->o_1628 < ((rt_int)0LL)))) {
f_fail_23((*(P1034)rt_nil_check(F->it_1619)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an OFFSET is not negative", 25); b_; }));
}
} else if ((rt_str_eq(F->w_1622, rt_str("RECORD", 6)) || rt_str_eq(F->w_1622, rt_str("UNION", 5)))) {
F->comp_1629 = NULL;
F->comp_1629 = (*(P1034)rt_nil_check(F->it_1619)).c;
if (((rt_str_eq(F->w_1622, rt_str("RECORD", 6)) && ((*(P1040)rt_nil_check(F->t_332)).kind != (((rt_int)7LL)))) || (rt_str_eq(F->w_1622, rt_str("UNION", 5)) && ((*(P1040)rt_nil_check(F->t_332)).kind != (((rt_int)17LL)))))) {
f_fail_23((*(P1034)rt_nil_check(F->it_1619)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->w_1622, rt_str(" is a representation for ", 25)), F->w_1622), rt_str(" types only", 11)); b_; }));
}
while ((F->comp_1629 != NULL)) {
F->f_1630 = NULL;
F->f_1630 = (*(P1040)rt_nil_check(F->t_332)).fields;
while (((F->f_1630 != NULL) && (!rt_str_eq((((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_1630)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->comp_1629)).name))->all))))) {
F->f_1630 = (*(P1042)rt_nil_check(F->f_1630)).next;
}
if ((F->f_1630 != NULL)) {
f_check_rep_337((*(P1034)rt_nil_check(F->comp_1629)).a, (*(P1042)rt_nil_check(F->f_1630)).t, (*(P1042)rt_nil_check(F->f_1630)).c, 0, 0, F->d_336);
} else if (((!(rt_str_eq(F->w_1622, rt_str("UNION", 5)) && rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->comp_1629)).name))->all), rt_str("TAG", 3)))) && (!(F->top_334 && f_formal_named_340(F->d_336, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->comp_1629)).name))->all)))))) {
f_fail_23((*(P1034)rt_nil_check(F->comp_1629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->comp_1629)).name))->all), rt_str(" is not a component", 19)); b_; }));
}
F->comp_1629 = (*(P1034)rt_nil_check(F->comp_1629)).next;
}
} else if (rt_str_eq(F->w_1622, rt_str("ARRAY", 5))) {
F->k_1631 = NULL;
F->k_1631 = (*(P1034)rt_nil_check(F->it_1619)).d;
if ((((*(P1040)rt_nil_check(F->t_332)).kind != (((rt_int)6LL))) || (f_list_len_71((*(P1034)rt_nil_check(F->it_1619)).d) != (*(P1040)rt_nil_check(F->t_332)).ndim))) {
f_fail_23((*(P1034)rt_nil_check(F->it_1619)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ARRAY names NORMAL or NOBOUNDS for each index of an array", 57); b_; }));
}
while ((F->k_1631 != NULL)) {
if (((!rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->k_1631)).name))->all), rt_str("NORMAL", 6))) && (!rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->k_1631)).name))->all), rt_str("NOBOUNDS", 8))))) {
f_fail_23((*(P1034)rt_nil_check(F->k_1631)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NORMAL or NOBOUNDS expected", 27); b_; }));
}
F->k_1631 = (*(P1034)rt_nil_check(F->k_1631)).next;
}
f_check_rep_337((*(P1034)rt_nil_check(F->it_1619)).c, (*(P1040)rt_nil_check(F->t_332)).elem, (*(P1040)rt_nil_check(F->t_332)).elemcons, 0, 0, F->d_336);
} else if (rt_str_eq(F->w_1622, rt_str("ENUM", 4))) {
if (((((*(P1040)rt_nil_check(F->t_332)).kind != (((rt_int)4LL))) || ((*(P1034)rt_nil_check(F->it_1619)).d == NULL)) || (!rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->it_1619)).d)).name))->all), rt_str("STANDARD", 8))))) {
f_fail_23((*(P1034)rt_nil_check(F->it_1619)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ENUM(STANDARD) is for enumeration subtypes", 42); b_; }));
}
} else if (rt_str_eq(F->w_1622, rt_str("PTR", 3))) {
if ((((((!F->indirect_335) || (!F->top_334)) || ((*(P1034)rt_nil_check(F->it_1619)).d == NULL)) || (!rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->it_1619)).d)).name))->all), rt_str("FREE", 4)))) || (((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->it_1619)).d)).next != NULL) && (!rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->it_1619)).d)).next)).name))->all), rt_str("UNCHECKED", 9)))))) {
f_fail_23((*(P1034)rt_nil_check(F->it_1619)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR(FREE) or PTR(FREE UNCHECKED) is for indirect types", 54); b_; }));
}
} else if (rt_str_eq(F->w_1622, rt_str("ABSENT", 6))) {
F->a_1632 = NULL;
F->a_1632 = (*(P1034)rt_nil_check(F->it_1619)).d;
if ((!F->top_334)) {
f_fail_23((*(P1034)rt_nil_check(F->it_1619)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABSENT is for the whole type", 28); b_; }));
}
while ((F->a_1632 != NULL)) {
if ((!f_formal_named_340(F->d_336, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->a_1632)).name))->all)))) {
f_fail_23((*(P1034)rt_nil_check(F->a_1632)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->a_1632)).name))->all), rt_str(" is not a formal parameter of the type", 38)); b_; }));
}
F->a_1632 = (*(P1034)rt_nil_check(F->a_1632)).next;
}
}
F->it_1619 = (*(P1034)rt_nil_check(F->it_1619)).next;
}
ret_:
  RT_FPOP();
  return;
}

static int f_formal_named_340(P1034 d_338, rstr *name_339) {
  struct f_formal_named_340fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_338 = d_338;
F->name_339 = name_339;
F->p_1633 = NULL;
F->p_1633 = (*(P1034)rt_nil_check(F->d_338)).b;
while ((F->p_1633 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1633)).name))->all), (*F->name_339))) {
F->result_ = 1;
goto ret_;
}
F->p_1633 = (*(P1034)rt_nil_check(F->p_1633)).next;
}
F->p_1633 = (*(P1034)rt_nil_check(F->d_338)).d;
if (((*(P1034)rt_nil_check(F->d_338)).kind == (((rt_int)44LL)))) {
while ((F->p_1633 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1633)).name))->all), (*F->name_339))) {
F->result_ = 1;
goto ret_;
}
F->p_1633 = (*(P1034)rt_nil_check(F->p_1633)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_unchecked_free_342(P1040 t_341) {
  struct f_unchecked_free_342fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_341 = t_341;
F->it_1634 = NULL;
if ((((*(P1040)rt_nil_check(F->t_341)).decl == NULL) || ((*(P1034)rt_nil_check((*(P1040)rt_nil_check(F->t_341)).decl)).kind != (((rt_int)44LL))))) {
F->result_ = 0;
goto ret_;
}
F->it_1634 = (*(P1034)rt_nil_check((*(P1040)rt_nil_check(F->t_341)).decl)).c;
while ((F->it_1634 != NULL)) {
if (((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->it_1634)).name))->all), rt_str("PTR", 3)) && ((*(P1034)rt_nil_check(F->it_1634)).d != NULL)) && ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->it_1634)).d)).next != NULL))) {
F->result_ = 1;
goto ret_;
}
F->it_1634 = (*(P1034)rt_nil_check(F->it_1634)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_346(rstr *lval_343, P1040 t_344, P1036 c_345) {
  struct f_init_storage_346fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_343 = lval_343;
F->t_344 = t_344;
F->c_345 = c_345;
f_make_storage_361(&(*F->lval_343), F->t_344, F->c_345);
if (((*(P1040)rt_nil_check(F->t_344)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_349((*(P1040)rt_nil_check(F->t_344)).initp, &(*F->lval_343)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_349(P1044 y_347, rstr *lval_348) {
  struct f_init_call_349fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_347 = y_347;
F->lval_348 = lval_348;
F->link_1635 = NULL;
F->link_1635 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1044)rt_nil_check(F->y_347)).level > ((rt_int)0LL))) {
F->link_1635 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1637 = ((rt_int)1LL), hi1638 = rt_sub(g_cur_level_1091, (*(P1044)rt_nil_check(F->y_347)).level);
for (rt_int it1639 = lo1637; it1639 <= hi1638; it1639++) {
F->i_1636 = it1639;
F->link_1635 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->link_1635))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1635 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->link_1635))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_347)).cname))->all), rt_str("(", 1)), (((P1027)rt_nil_check(F->link_1635))->all)), rt_str("&", 1)), (*F->lval_348)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_351(P1040 t_350) {
  struct f_needs_fin_351fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_350 = t_350;
if ((F->t_350 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P1040)rt_nil_check(F->t_350)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if (((*(P1040)rt_nil_check(F->t_350)).kind == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_351((*(P1040)rt_nil_check(F->t_350)).under);
goto ret_;
} else if (((*(P1040)rt_nil_check(F->t_350)).kind == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_351((*(P1040)rt_nil_check(F->t_350)).elem);
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->t_350)).kind == (((rt_int)7LL))) || ((*(P1040)rt_nil_check(F->t_350)).kind == (((rt_int)17LL))))) {
F->f_1640 = NULL;
F->f_1640 = (*(P1040)rt_nil_check(F->t_350)).fields;
while ((F->f_1640 != NULL)) {
if (f_needs_fin_351((*(P1042)rt_nil_check(F->f_1640)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1640 = (*(P1042)rt_nil_check(F->f_1640)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_354(rstr *lval_352, P1040 t_353) {
  struct f_fin_code_354fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_352 = lval_352;
F->t_353 = t_353;
F->r_1641 = NULL;
F->r_1641 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1040)rt_nil_check(F->t_353)).finalp != NULL)) {
F->r_1641 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_349((*(P1040)rt_nil_check(F->t_353)).finalp, &(*F->lval_352)), rt_str(" ", 1)); b_; }));
}
if ((((*(P1040)rt_nil_check(F->t_353)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->t_353)).tparams == NULL))) {
F->result_ = rt_str_cat((((P1027)rt_nil_check(F->r_1641))->all), f_fin_code_354(&(*F->lval_352), (*(P1040)rt_nil_check(F->t_353)).under));
goto ret_;
} else if (((*(P1040)rt_nil_check(F->t_353)).kind == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P1027)rt_nil_check(F->r_1641))->all), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_352), rt_str(".all", 4)); b_; }), (*(P1040)rt_nil_check(F->t_353)).under));
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->t_353)).kind == (((rt_int)6LL))) && f_needs_fin_351((*(P1040)rt_nil_check(F->t_353)).elem))) {
F->i_1642 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_1641))->all), rt_str("for (rt_int ", 12)), F->i_1642), rt_str(" = 0; ", 6)), F->i_1642), rt_str(" < ", 3)), f_acnt_249(F->t_353, &(*F->lval_352))), rt_str("; ", 2)), F->i_1642), rt_str("++) { ", 6)), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_352), rt_str(".p[", 3)), F->i_1642), rt_str("]", 1)); b_; }), (*(P1040)rt_nil_check(F->t_353)).elem)), rt_str(" }", 2));
goto ret_;
} else if (((*(P1040)rt_nil_check(F->t_353)).kind == (((rt_int)7LL)))) {
F->f_1643 = NULL;
F->f_1643 = (*(P1040)rt_nil_check(F->t_353)).fields;
while ((F->f_1643 != NULL)) {
if (f_needs_fin_351((*(P1042)rt_nil_check(F->f_1643)).t)) {
F->r_1641 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_1641))->all), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_352), rt_str(".", 1)), f_field_c_17(&(((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_1643)).name))->all))); b_; }), (*(P1042)rt_nil_check(F->f_1643)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1643 = (*(P1042)rt_nil_check(F->f_1643)).next;
}
} else if (((*(P1040)rt_nil_check(F->t_353)).kind == (((rt_int)17LL)))) {
F->f_1644 = NULL;
F->f_1644 = (*(P1040)rt_nil_check(F->t_353)).fields;
F->i_1645 = ((rt_int)0LL);
F->r_1641 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_1641))->all), rt_str("switch (", 8)), (*F->lval_352)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1644 != NULL)) {
if (f_needs_fin_351((*(P1042)rt_nil_check(F->f_1644)).t)) {
F->r_1641 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_1641))->all), rt_str(" case ", 6)), f_itos_7(F->i_1645)), rt_str(": ", 2)), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_352), rt_str(".u.", 3)), f_field_c_17(&(((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_1644)).name))->all))); b_; }), (*(P1042)rt_nil_check(F->f_1644)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1645 = rt_add(F->i_1645, ((rt_int)1LL));
F->f_1644 = (*(P1042)rt_nil_check(F->f_1644)).next;
}
F->r_1641 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_1641))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P1027)rt_nil_check(F->r_1641))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1040 f_tparam_type_357(P1040 t_355, rstr *name_356) {
  struct f_tparam_type_357fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_355 = t_355;
F->name_356 = name_356;
F->z_1646 = NULL;
F->z_1646 = (*(P1040)rt_nil_check(F->t_355)).tpsyms;
while ((F->z_1646 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->z_1646)).name))->all), (*F->name_356))) {
F->result_ = (*(P1044)rt_nil_check(F->z_1646)).t;
goto ret_;
}
F->z_1646 = (*(P1044)rt_nil_check(F->z_1646)).mnext;
}
F->result_ = g_ty_int_1119;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_361(rstr *lval_358, P1040 t_359, P1036 c_360) {
  struct f_make_storage_361fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_358 = lval_358;
F->t_359 = t_359;
F->c_360 = c_360;
if (((*(P1040)rt_nil_check(F->t_359)).kind == (((rt_int)15LL)))) {
F->p_1647 = NULL;
F->p_1647 = (*(P1040)rt_nil_check(F->t_359)).tparams;
F->a_1648 = NULL;
F->a_1648 = (*(P1036)rt_nil_check(F->c_360)).args;
F->uc_1649 = NULL;
F->ut_1650 = NULL;
F->at_1651 = NULL;
if ((f_list_len_71(F->a_1648) != f_list_len_71(F->p_1647))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_359)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1647))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1647 != NULL)) {
F->pt_1652 = f_tparam_type_357(F->t_359, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1647)).name))->all));
F->v_1653 = rt_str_copy(f_gexpr_805(F->a_1648, F->pt_1652, &F->at_1651));
f_check_type_232(F->at_1651, F->pt_1652, (*(P1034)rt_nil_check(F->a_1648)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".p_", 3)), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1647)).name))->all))), rt_str(" = ", 3)), F->v_1653), rt_str(";", 1)); b_; }));
F->p_1647 = (*(P1034)rt_nil_check(F->p_1647)).next;
F->a_1648 = (*(P1034)rt_nil_check(F->a_1648)).next;
}
{
F->saved_1654 = NULL;
F->saved_1654 = g_psub_1095;
F->p_1647 = (*(P1040)rt_nil_check(F->t_359)).tparams;
while ((F->p_1647 != NULL)) {
F->l1_1655 = NULL;
F->l2_1656 = NULL;
{ R1039 *cell1657 = rt_alloc(sizeof(R1039));
(*cell1657).s = NULL;
(*cell1657).next = NULL;
F->l1_1655 = cell1657;
}
{ R1039 *cell1658 = rt_alloc(sizeof(R1039));
(*cell1658).s = NULL;
(*cell1658).next = NULL;
F->l2_1656 = cell1658;
}
(*(P1038)rt_nil_check(F->l1_1655)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1647)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1038)rt_nil_check(F->l2_1656)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".p_", 3)), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1647)).name))->all))); b_; }));
(*(P1038)rt_nil_check(F->l1_1655)).next = F->l2_1656;
(*(P1038)rt_nil_check(F->l2_1656)).next = g_psub_1095;
g_psub_1095 = F->l1_1655;
F->p_1647 = (*(P1034)rt_nil_check(F->p_1647)).next;
}
if (((*(P1040)rt_nil_check(F->t_359)).tparams == NULL)) {
f_init_storage_346(&(*F->lval_358), (*(P1040)rt_nil_check(F->t_359)).under, (*(P1040)rt_nil_check(F->t_359)).elemcons);
} else {
f_init_storage_346(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_358), rt_str(".all", 4)); b_; }), (*(P1040)rt_nil_check(F->t_359)).under, (*(P1040)rt_nil_check(F->t_359)).elemcons);
}
g_psub_1095 = F->saved_1654;
}
} else if (((*(P1040)rt_nil_check(F->t_359)).kind == (((rt_int)12LL)))) {
if (((*(P1036)rt_nil_check(F->c_360)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_358), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_358)), rt_str(", ", 2)), f_subst_319(&(((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_360)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_234((*(P1040)rt_nil_check(F->t_359)).elem)), rt_str("), ", 3)), f_mcopy_397((*(P1040)rt_nil_check(F->t_359)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P1040)rt_nil_check(F->t_359)).kind == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_358)), rt_str(");", 2)); b_; }));
} else if (((*(P1040)rt_nil_check(F->t_359)).kind == (((rt_int)16LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(" = ", 3)), f_empty_set_306(F->t_359)), rt_str(";", 1)); b_; }));
} else if (((*(P1040)rt_nil_check(F->t_359)).kind == (((rt_int)10LL)))) {
F->at_1659 = NULL;
if ((((F->c_360 == NULL) || ((*(P1036)rt_nil_check(F->c_360)).args == NULL)) || ((*(P1034)rt_nil_check((*(P1036)rt_nil_check(F->c_360)).args)).next == NULL))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a file variable needs its access and use: FILE[S](access, use)", 62); b_; }));
}
if (((!f_text_file_989(F->t_359)) && (!f_flat_363((*(P1040)rt_nil_check(F->t_359)).elem)))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the components of a file on the simulated machine hold no strings, arrays, sets or pointers", 91); b_; }));
}
{
F->acc_1660 = rt_str_copy(f_gexpr_805((*(P1036)rt_nil_check(F->c_360)).args, g_file_access_type_1136, &F->at_1659));
F->use_1661 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check((*(P1036)rt_nil_check(F->c_360)).args)).next, g_file_mode_type_1130, &F->at_1659));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(" = rt_r_file_new(", 17)), F->acc_1660), rt_str(", ", 2)), F->use_1661), rt_str(", sizeof(", 9)), f_ctype_234((*(P1040)rt_nil_check(F->t_359)).elem)), rt_str("), ", 3)), f_bool_text_387(f_text_file_989(F->t_359))), rt_str(");", 2)); b_; }));
}
} else if (((*(P1040)rt_nil_check(F->t_359)).kind == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_358), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if (((*(P1040)rt_nil_check(F->t_359)).kind == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_358), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P1040)rt_nil_check(F->t_359)).kind == (((rt_int)5LL)))) {
if (((*(P1036)rt_nil_check(F->c_360)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
if ((g_mark_uninit_1110 && (f_list_len_71((*(P1040)rt_nil_check(f_base_of_223(f_str_elem_218(F->t_359)))).lits) < ((rt_int)256LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(" = rt_r_str_undef(", 18)), f_subst_319(&(((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_360)).slen))->all))), rt_str(");", 2)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(" = rt_str_new(", 14)), f_subst_319(&(((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_360)).slen))->all))), rt_str(");", 2)); b_; }));
}
} else if (((*(P1040)rt_nil_check(F->t_359)).kind == (((rt_int)6LL)))) {
if (((*(P1036)rt_nil_check(F->c_360)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1663 = ((rt_int)1LL), hi1664 = (*(P1040)rt_nil_check(F->t_359)).ndim;
for (rt_int it1665 = lo1663; it1665 <= hi1664; it1665++) {
F->k_1662 = it1665;
if ((f_cons_lo_252(F->c_360, F->k_1662) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".", 1)), f_dim_lo_242(F->k_1662)), rt_str(" = ", 3)), f_subst_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1027)rt_nil_check(f_cons_lo_252(F->c_360, F->k_1662)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_358)), rt_str(".", 1)), f_dim_hi_244(F->k_1662)), rt_str(" = ", 3)), f_subst_319(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1027)rt_nil_check(f_cons_hi_255(F->c_360, F->k_1662)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if (((*(P1040)rt_nil_check(F->t_359)).ndim == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".lo2 = ", 7)), (*F->lval_358)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_234((*(P1040)rt_nil_check(F->t_359)).elem)), rt_str(") * (size_t)", 12)), f_acnt_249(F->t_359, &(*F->lval_358))), rt_str(" + 1);", 6)); b_; }));
if ((((((((((((*(P1040)rt_nil_check((*(P1040)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)5LL))) || ((*(P1040)rt_nil_check((*(P1040)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)6LL)))) || ((*(P1040)rt_nil_check((*(P1040)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)7LL)))) || ((*(P1040)rt_nil_check((*(P1040)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)15LL)))) || ((*(P1040)rt_nil_check((*(P1040)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)8LL)))) || ((*(P1040)rt_nil_check((*(P1040)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)12LL)))) || ((*(P1040)rt_nil_check((*(P1040)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)13LL)))) || ((*(P1040)rt_nil_check((*(P1040)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)14LL)))) || ((*(P1040)rt_nil_check((*(P1040)rt_nil_check(F->t_359)).elem)).kind == (((rt_int)17LL)))) || (g_mark_uninit_1110 && (!rt_str_eq(f_uninit_value_365((*(P1040)rt_nil_check(F->t_359)).elem), rt_str("", 0)))))) {
F->i_1666 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1666), rt_str(" = 0; ", 6)), F->i_1666), rt_str(" < ", 3)), f_acnt_249(F->t_359, &(*F->lval_358))), rt_str("; ", 2)), F->i_1666), rt_str("++) {", 5)); b_; }));
f_init_storage_346(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".p[", 3)), F->i_1666), rt_str("]", 1)); b_; }), (*(P1040)rt_nil_check(F->t_359)).elem, (*(P1040)rt_nil_check(F->t_359)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P1040)rt_nil_check(F->t_359)).kind == (((rt_int)7LL)))) {
F->f_1667 = NULL;
F->f_1667 = (*(P1040)rt_nil_check(F->t_359)).fields;
while ((F->f_1667 != NULL)) {
f_init_storage_346(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".", 1)), f_field_c_17(&(((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_1667)).name))->all))); b_; }), (*(P1042)rt_nil_check(F->f_1667)).t, (*(P1042)rt_nil_check(F->f_1667)).c);
F->f_1667 = (*(P1042)rt_nil_check(F->f_1667)).next;
}
} else if (((*(P1040)rt_nil_check(F->t_359)).kind == (((rt_int)17LL)))) {
if (((F->c_360 != NULL) && (*(P1036)rt_nil_check(F->c_360)).hasm)) {
F->f_1668 = NULL;
F->f_1668 = (*(P1040)rt_nil_check(F->t_359)).fields;
{ rt_int lo1670 = ((rt_int)1LL), hi1671 = (*(P1036)rt_nil_check(F->c_360)).mlo;
for (rt_int it1672 = lo1670; it1672 <= hi1671; it1672++) {
F->i_1669 = it1672;
F->f_1668 = (*(P1042)rt_nil_check(F->f_1668)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".tag = ", 7)), f_itos_7((*(P1036)rt_nil_check(F->c_360)).mlo)), rt_str(";", 1)); b_; }));
f_init_storage_346(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_358), rt_str(".u.", 3)), f_field_c_17(&(((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_1668)).name))->all))); b_; }), (*(P1042)rt_nil_check(F->f_1668)).t, (*(P1042)rt_nil_check(F->f_1668)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_358), rt_str(".tag = -1;", 10)); b_; }));
}
} else if ((g_mark_uninit_1110 && (!rt_str_eq(f_uninit_value_365(F->t_359), rt_str("", 0))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_358), rt_str(" = ", 3)), f_uninit_value_365(F->t_359)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_flat_363(P1040 t_362) {
  struct f_flat_363fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_362 = t_362;
if ((((*(P1040)rt_nil_check(F->t_362)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->t_362)).tparams == NULL))) {
F->result_ = f_flat_363((*(P1040)rt_nil_check(F->t_362)).under);
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->t_362)).kind == (((rt_int)7LL))) || ((*(P1040)rt_nil_check(F->t_362)).kind == (((rt_int)17LL))))) {
F->f_1673 = NULL;
F->f_1673 = (*(P1040)rt_nil_check(F->t_362)).fields;
while ((F->f_1673 != NULL)) {
if ((!f_flat_363((*(P1042)rt_nil_check(F->f_1673)).t))) {
F->result_ = 0;
goto ret_;
}
F->f_1673 = (*(P1042)rt_nil_check(F->f_1673)).next;
}
F->result_ = 1;
goto ret_;
}
F->result_ = (((((*(P1040)rt_nil_check(F->t_362)).kind == (((rt_int)1LL))) || ((*(P1040)rt_nil_check(F->t_362)).kind == (((rt_int)3LL)))) || ((*(P1040)rt_nil_check(F->t_362)).kind == (((rt_int)4LL)))) || ((*(P1040)rt_nil_check(F->t_362)).kind == (((rt_int)2LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_uninit_value_365(P1040 t_364) {
  struct f_uninit_value_365fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_364 = t_364;
if (((*(P1040)rt_nil_check(F->t_364)).kind == (((rt_int)1LL)))) {
F->result_ = rt_str("RT_R_IUNDEF", 11);
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->t_364)).kind == (((rt_int)4LL))) || ((*(P1040)rt_nil_check(F->t_364)).kind == (((rt_int)2LL))))) {
F->result_ = rt_str("RT_R_EUNDEF", 11);
goto ret_;
} else if (((*(P1040)rt_nil_check(F->t_364)).kind == (((rt_int)3LL)))) {
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

static rstr f_init_chk_368(P1040 t_366, rstr *v_367) {
  struct f_init_chk_368fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_366 = t_366;
F->v_367 = v_367;
F->b_1674 = NULL;
F->b_1674 = f_base_of_223(F->t_366);
if (f_suppressed_517(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))) {
F->result_ = (*F->v_367);
goto ret_;
} else if (((*(P1040)rt_nil_check(F->b_1674)).kind == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_ichk(", 10), (*F->v_367)), rt_str(")", 1));
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->b_1674)).kind == (((rt_int)4LL))) || ((*(P1040)rt_nil_check(F->b_1674)).kind == (((rt_int)2LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_echk(", 10), (*F->v_367)), rt_str(")", 1));
goto ret_;
} else if (((*(P1040)rt_nil_check(F->b_1674)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fchk(", 10), (*F->v_367)), rt_str(")", 1));
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->b_1674)).kind == (((rt_int)5LL))) && (f_list_len_71((*(P1040)rt_nil_check(f_base_of_223(f_str_elem_218(F->b_1674)))).lits) < ((rt_int)256LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_schk(", 10), (*F->v_367)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_367);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_manifest_371(P1034 e_369, int *ok_370) {
  struct f_manifest_371fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_369 = e_369;
F->ok_370 = ok_370;
F->ok_370v = *F->ok_370;
F->v_1675 = NULL;
F->v_1675 = f_meval_380(F->e_369, &F->ok_370v);
if ((F->ok_370v && ((*(P1053)rt_nil_check(F->v_1675)).kind == (((rt_int)1LL))))) {
F->result_ = (*(P1053)rt_nil_check(F->v_1675)).i;
goto ret_;
}
F->ok_370v = 0;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_370v)) (*F->ok_370) = F->ok_370v;
  RT_FPOP();
  return F->result_;
}

static P1053 f_mk_mval_374(rt_int kind_372, rt_int i_373) {
  struct f_mk_mval_374fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_372 = kind_372;
F->i_373 = i_373;
F->v_1676 = NULL;
{ R1054 *cell1677 = rt_alloc(sizeof(R1054));
(*cell1677).s = NULL;
(*cell1677).t = NULL;
F->v_1676 = cell1677;
}
(*(P1053)rt_nil_check(F->v_1676)).kind = F->kind_372;
(*(P1053)rt_nil_check(F->v_1676)).i = F->i_373;
F->result_ = F->v_1676;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_ipow_377(rt_int a_375, rt_int b_376) {
  struct f_ipow_377fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_375 = a_375;
F->b_376 = b_376;
F->r_1678 = ((rt_int)1LL);
{ rt_int lo1680 = ((rt_int)1LL), hi1681 = F->b_376;
for (rt_int it1682 = lo1680; it1682 <= hi1681; it1682++) {
F->i_1679 = it1682;
F->r_1678 = rt_mul(F->r_1678, F->a_375);
}
}
F->result_ = F->r_1678;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1053 f_meval_380(P1034 e_378, int *ok_379) {
  struct f_meval_380fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_378 = e_378;
F->ok_379 = ok_379;
F->ok_379v = *F->ok_379;
F->a_1683 = NULL;
F->b_1684 = NULL;
F->op_1686 = NULL;
F->ok_379v = 0;
if ((F->e_378 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((*(P1034)rt_nil_check(F->e_378)).kind == (((rt_int)1LL)))) {
F->ok_379v = 1;
F->result_ = f_mk_mval_374((((rt_int)1LL)), (*(P1034)rt_nil_check(F->e_378)).ival);
goto ret_;
} else if (((*(P1034)rt_nil_check(F->e_378)).kind == (((rt_int)5LL)))) {
F->ok_379v = 1;
F->result_ = f_mk_mval_374((((rt_int)2LL)), (*(P1034)rt_nil_check(F->e_378)).ival);
goto ret_;
} else if (((*(P1034)rt_nil_check(F->e_378)).kind == (((rt_int)2LL)))) {
F->a_1683 = f_mk_mval_374((((rt_int)3LL)), ((rt_int)0LL));
{ rt_frame xf1687;
if (RT_TRY(xf1687)) {
(*(P1053)rt_nil_check(F->a_1683)).f = rt_r_float_of_str((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_378)).name))->all));
F->ok_379v = 1;
RT_POP(xf1687);
} else {
RT_POP(xf1687);
int x1688 = rt_xcur;
{
F->ok_379v = 0;
}
}
}
F->result_ = F->a_1683;
goto ret_;
} else if (((*(P1034)rt_nil_check(F->e_378)).kind == (((rt_int)3LL)))) {
F->ok_379v = 1;
F->a_1683 = f_mk_mval_374((((rt_int)5LL)), ((rt_int)0LL));
(*(P1053)rt_nil_check(F->a_1683)).s = (*(P1034)rt_nil_check(F->e_378)).name;
F->result_ = F->a_1683;
goto ret_;
} else if (((*(P1034)rt_nil_check(F->e_378)).kind == (((rt_int)4LL)))) {
if ((f_lit_index_265((*(P1040)rt_nil_check(g_ty_ascii_1122)).lits, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_378)).name))->all)) >= ((rt_int)0LL))) {
F->ok_379v = 1;
F->a_1683 = f_mk_mval_374((((rt_int)4LL)), f_lit_index_265((*(P1040)rt_nil_check(g_ty_ascii_1122)).lits, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_378)).name))->all)));
(*(P1053)rt_nil_check(F->a_1683)).t = g_ty_ascii_1122;
(*(P1053)rt_nil_check(F->a_1683)).s = (*(P1034)rt_nil_check(F->e_378)).name;
F->result_ = F->a_1683;
goto ret_;
}
F->a_1683 = f_mk_mval_374((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P1053)rt_nil_check(F->a_1683)).s = (*(P1034)rt_nil_check(F->e_378)).name;
F->ok_379v = 1;
F->result_ = F->a_1683;
goto ret_;
} else if (((*(P1034)rt_nil_check(F->e_378)).kind == (((rt_int)17LL)))) {
F->result_ = f_meval_380((*(P1034)rt_nil_check(F->e_378)).a, &F->ok_379v);
goto ret_;
} else if (((*(P1034)rt_nil_check(F->e_378)).kind == (((rt_int)7LL)))) {
F->y_1689 = NULL;
F->y_1689 = f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_378)).name))->all));
if ((((F->y_1689 != NULL) && ((*(P1044)rt_nil_check(F->y_1689)).kind == (((rt_int)2LL)))) && ((*(P1044)rt_nil_check(F->y_1689)).mv != NULL))) {
F->ok_379v = 1;
F->result_ = (*(P1044)rt_nil_check(F->y_1689)).mv;
goto ret_;
} else if ((((F->y_1689 != NULL) && ((*(P1044)rt_nil_check(F->y_1689)).kind == (((rt_int)2LL)))) && (*(P1044)rt_nil_check(F->y_1689)).hasmv)) {
F->ok_379v = 1;
F->result_ = f_mk_mval_374((((rt_int)1LL)), (*(P1044)rt_nil_check(F->y_1689)).mvalue);
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if (((*(P1034)rt_nil_check(F->e_378)).kind == (((rt_int)8LL)))) {
F->a_1683 = f_meval_380((*(P1034)rt_nil_check(F->e_378)).a, &F->ok_379v);
if ((!F->ok_379v)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_378)).name))->all), rt_str("NOT", 3)) && ((*(P1053)rt_nil_check(F->a_1683)).kind == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_374((((rt_int)2LL)), rt_sub(((rt_int)1LL), (*(P1053)rt_nil_check(F->a_1683)).i));
goto ret_;
} else if ((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_378)).name))->all), rt_str("-", 1)) && ((*(P1053)rt_nil_check(F->a_1683)).kind == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_374((((rt_int)1LL)), rt_neg((*(P1053)rt_nil_check(F->a_1683)).i));
goto ret_;
} else if ((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_378)).name))->all), rt_str("-", 1)) && ((*(P1053)rt_nil_check(F->a_1683)).kind == (((rt_int)3LL))))) {
F->b_1684 = f_mk_mval_374((((rt_int)3LL)), ((rt_int)0LL));
(*(P1053)rt_nil_check(F->b_1684)).f = (-(*(P1053)rt_nil_check(F->a_1683)).f);
F->result_ = F->b_1684;
goto ret_;
} else if (((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_378)).name))->all), rt_str("+", 1)) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_378)).name))->all), rt_str("-", 1))) && (((*(P1053)rt_nil_check(F->a_1683)).kind == (((rt_int)1LL))) || ((*(P1053)rt_nil_check(F->a_1683)).kind == (((rt_int)3LL)))))) {
F->result_ = F->a_1683;
goto ret_;
}
F->ok_379v = 0;
F->result_ = NULL;
goto ret_;
} else if ((((*(P1034)rt_nil_check(F->e_378)).kind != (((rt_int)9LL))) || f_user_defined_395(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_378)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1686 = (*(P1034)rt_nil_check(F->e_378)).name;
F->a_1683 = f_meval_380((*(P1034)rt_nil_check(F->e_378)).a, &F->ok_379v);
F->b_1684 = f_meval_380((*(P1034)rt_nil_check(F->e_378)).b, &F->ok2_1685);
F->ok_379v = (F->ok_379v && F->ok2_1685);
if ((!F->ok_379v)) {
F->result_ = NULL;
goto ret_;
}
F->ok_379v = 0;
if ((((*(P1053)rt_nil_check(F->a_1683)).kind == (((rt_int)1LL))) && ((*(P1053)rt_nil_check(F->b_1684)).kind == (((rt_int)1LL))))) {
F->ok_379v = 1;
if (rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_374((((rt_int)1LL)), rt_add((*(P1053)rt_nil_check(F->a_1683)).i, (*(P1053)rt_nil_check(F->b_1684)).i));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_374((((rt_int)1LL)), rt_sub((*(P1053)rt_nil_check(F->a_1683)).i, (*(P1053)rt_nil_check(F->b_1684)).i));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_374((((rt_int)1LL)), rt_mul((*(P1053)rt_nil_check(F->a_1683)).i, (*(P1053)rt_nil_check(F->b_1684)).i));
goto ret_;
} else if ((rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("DIV", 3)) && ((*(P1053)rt_nil_check(F->b_1684)).i != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_374((((rt_int)1LL)), rt_div((*(P1053)rt_nil_check(F->a_1683)).i, (*(P1053)rt_nil_check(F->b_1684)).i));
goto ret_;
} else if ((rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("MOD", 3)) && ((*(P1053)rt_nil_check(F->b_1684)).i != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_374((((rt_int)1LL)), rt_mod((*(P1053)rt_nil_check(F->a_1683)).i, (*(P1053)rt_nil_check(F->b_1684)).i));
goto ret_;
} else if ((rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("**", 2)) && ((*(P1053)rt_nil_check(F->b_1684)).i >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_374((((rt_int)1LL)), f_ipow_377((*(P1053)rt_nil_check(F->a_1683)).i, (*(P1053)rt_nil_check(F->b_1684)).i));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_374((((rt_int)2LL)), f_bool_i_389(((*(P1053)rt_nil_check(F->a_1683)).i == (*(P1053)rt_nil_check(F->b_1684)).i)));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_374((((rt_int)2LL)), f_bool_i_389(((*(P1053)rt_nil_check(F->a_1683)).i != (*(P1053)rt_nil_check(F->b_1684)).i)));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_374((((rt_int)2LL)), f_bool_i_389(((*(P1053)rt_nil_check(F->a_1683)).i < (*(P1053)rt_nil_check(F->b_1684)).i)));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_374((((rt_int)2LL)), f_bool_i_389(((*(P1053)rt_nil_check(F->a_1683)).i <= (*(P1053)rt_nil_check(F->b_1684)).i)));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_374((((rt_int)2LL)), f_bool_i_389(((*(P1053)rt_nil_check(F->a_1683)).i > (*(P1053)rt_nil_check(F->b_1684)).i)));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_374((((rt_int)2LL)), f_bool_i_389(((*(P1053)rt_nil_check(F->a_1683)).i >= (*(P1053)rt_nil_check(F->b_1684)).i)));
goto ret_;
}
} else if ((((*(P1053)rt_nil_check(F->a_1683)).kind == (((rt_int)3LL))) && (((*(P1053)rt_nil_check(F->b_1684)).kind == (((rt_int)3LL))) || (((*(P1053)rt_nil_check(F->b_1684)).kind == (((rt_int)1LL))) && rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("**", 2)))))) {
F->result_ = f_float_op_385(&(((P1027)rt_nil_check(F->op_1686))->all), F->a_1683, F->b_1684, &F->ok_379v);
goto ret_;
} else if ((((*(P1053)rt_nil_check(F->a_1683)).kind == (((rt_int)2LL))) && ((*(P1053)rt_nil_check(F->b_1684)).kind == (((rt_int)2LL))))) {
F->ok_379v = 1;
if (rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_374((((rt_int)2LL)), rt_mul((*(P1053)rt_nil_check(F->a_1683)).i, (*(P1053)rt_nil_check(F->b_1684)).i));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_374((((rt_int)2LL)), f_bool_i_389((rt_add((*(P1053)rt_nil_check(F->a_1683)).i, (*(P1053)rt_nil_check(F->b_1684)).i) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("XOR", 3)) || rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_374((((rt_int)2LL)), f_bool_i_389(((*(P1053)rt_nil_check(F->a_1683)).i != (*(P1053)rt_nil_check(F->b_1684)).i)));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_374((((rt_int)2LL)), f_bool_i_389(((*(P1053)rt_nil_check(F->a_1683)).i == (*(P1053)rt_nil_check(F->b_1684)).i)));
goto ret_;
}
} else if (((((*(P1053)rt_nil_check(F->a_1683)).kind == (((rt_int)4LL))) && ((*(P1053)rt_nil_check(F->b_1684)).kind == (((rt_int)4LL)))) && (rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("=", 1)) || rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("/=", 2))))) {
F->ok_379v = 1;
if (rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_374((((rt_int)2LL)), f_bool_i_389(rt_str_eq((((P1027)rt_nil_check((*(P1053)rt_nil_check(F->a_1683)).s))->all), (((P1027)rt_nil_check((*(P1053)rt_nil_check(F->b_1684)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_374((((rt_int)2LL)), f_bool_i_389((!rt_str_eq((((P1027)rt_nil_check((*(P1053)rt_nil_check(F->a_1683)).s))->all), (((P1027)rt_nil_check((*(P1053)rt_nil_check(F->b_1684)).s))->all)))));
goto ret_;
} else if (((((*(P1053)rt_nil_check(F->a_1683)).kind == (((rt_int)5LL))) && ((*(P1053)rt_nil_check(F->b_1684)).kind == (((rt_int)5LL)))) && (rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("=", 1)) || rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("/=", 2))))) {
F->ok_379v = 1;
if (rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_374((((rt_int)2LL)), f_bool_i_389(rt_str_eq((((P1027)rt_nil_check((*(P1053)rt_nil_check(F->a_1683)).s))->all), (((P1027)rt_nil_check((*(P1053)rt_nil_check(F->b_1684)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_374((((rt_int)2LL)), f_bool_i_389((!rt_str_eq((((P1027)rt_nil_check((*(P1053)rt_nil_check(F->a_1683)).s))->all), (((P1027)rt_nil_check((*(P1053)rt_nil_check(F->b_1684)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P1027)rt_nil_check(F->op_1686))->all), rt_str("&", 1)) && (((*(P1053)rt_nil_check(F->a_1683)).kind == (((rt_int)5LL))) || ((*(P1053)rt_nil_check(F->a_1683)).t == g_ty_ascii_1122))) && (((*(P1053)rt_nil_check(F->b_1684)).kind == (((rt_int)5LL))) || ((*(P1053)rt_nil_check(F->b_1684)).t == g_ty_ascii_1122)))) {
F->r_1690 = NULL;
F->r_1690 = f_mk_mval_374((((rt_int)5LL)), ((rt_int)0LL));
F->ok_379v = 1;
(*(P1053)rt_nil_check(F->r_1690)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_391(F->a_1683), f_mstr_391(F->b_1684)); b_; }));
F->result_ = F->r_1690;
goto ret_;
}
F->ok_379v = 0;
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_379v)) (*F->ok_379) = F->ok_379v;
  RT_FPOP();
  return F->result_;
}

static P1053 f_float_op_385(rstr *op_381, P1053 a_382, P1053 b_383, int *ok_384) {
  struct f_float_op_385fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_381 = op_381;
F->a_382 = a_382;
F->b_383 = b_383;
F->ok_384 = ok_384;
F->ok_384v = *F->ok_384;
F->r_1691 = NULL;
F->r_1691 = f_mk_mval_374((((rt_int)3LL)), ((rt_int)0LL));
F->ok_384v = 1;
{ rt_frame xf1692;
if (RT_TRY(xf1692)) {
if (rt_str_eq((*F->op_381), rt_str("+", 1))) {
(*(P1053)rt_nil_check(F->r_1691)).f = rt_r_fovf((*(P1053)rt_nil_check(F->a_382)).f + (*(P1053)rt_nil_check(F->b_383)).f);
} else if (rt_str_eq((*F->op_381), rt_str("-", 1))) {
(*(P1053)rt_nil_check(F->r_1691)).f = rt_r_fovf((*(P1053)rt_nil_check(F->a_382)).f - (*(P1053)rt_nil_check(F->b_383)).f);
} else if (rt_str_eq((*F->op_381), rt_str("*", 1))) {
(*(P1053)rt_nil_check(F->r_1691)).f = rt_r_fovf((*(P1053)rt_nil_check(F->a_382)).f * (*(P1053)rt_nil_check(F->b_383)).f);
} else if (rt_str_eq((*F->op_381), rt_str("/", 1))) {
(*(P1053)rt_nil_check(F->r_1691)).f = rt_r_fovf(rt_fdiv((*(P1053)rt_nil_check(F->a_382)).f, (*(P1053)rt_nil_check(F->b_383)).f));
} else if (rt_str_eq((*F->op_381), rt_str("**", 2))) {
(*(P1053)rt_nil_check(F->r_1691)).f = rt_r_fpow((*(P1053)rt_nil_check(F->a_382)).f, (*(P1053)rt_nil_check(F->b_383)).i);
} else {
(*(P1053)rt_nil_check(F->r_1691)).kind = (((rt_int)2LL));
if (rt_str_eq((*F->op_381), rt_str("=", 1))) {
(*(P1053)rt_nil_check(F->r_1691)).i = f_bool_i_389(((*(P1053)rt_nil_check(F->a_382)).f == (*(P1053)rt_nil_check(F->b_383)).f));
} else if (rt_str_eq((*F->op_381), rt_str("/=", 2))) {
(*(P1053)rt_nil_check(F->r_1691)).i = f_bool_i_389(((*(P1053)rt_nil_check(F->a_382)).f != (*(P1053)rt_nil_check(F->b_383)).f));
} else if (rt_str_eq((*F->op_381), rt_str("<", 1))) {
(*(P1053)rt_nil_check(F->r_1691)).i = f_bool_i_389(((*(P1053)rt_nil_check(F->a_382)).f < (*(P1053)rt_nil_check(F->b_383)).f));
} else if (rt_str_eq((*F->op_381), rt_str("<=", 2))) {
(*(P1053)rt_nil_check(F->r_1691)).i = f_bool_i_389(((*(P1053)rt_nil_check(F->a_382)).f <= (*(P1053)rt_nil_check(F->b_383)).f));
} else if (rt_str_eq((*F->op_381), rt_str(">", 1))) {
(*(P1053)rt_nil_check(F->r_1691)).i = f_bool_i_389(((*(P1053)rt_nil_check(F->a_382)).f > (*(P1053)rt_nil_check(F->b_383)).f));
} else if (rt_str_eq((*F->op_381), rt_str(">=", 2))) {
(*(P1053)rt_nil_check(F->r_1691)).i = f_bool_i_389(((*(P1053)rt_nil_check(F->a_382)).f >= (*(P1053)rt_nil_check(F->b_383)).f));
} else {
F->ok_384v = 0;
}
}
RT_POP(xf1692);
} else {
RT_POP(xf1692);
int x1693 = rt_xcur;
{
F->ok_384v = 0;
}
}
}
F->result_ = F->r_1691;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_384v)) (*F->ok_384) = F->ok_384v;
  RT_FPOP();
  return F->result_;
}

static rstr f_bool_text_387(int b_386) {
  struct f_bool_text_387fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_386 = b_386;
if (F->b_386) {
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

static rt_int f_bool_i_389(int b_388) {
  struct f_bool_i_389fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_388 = b_388;
if (F->b_388) {
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

static rstr f_mstr_391(P1053 v_390) {
  struct f_mstr_391fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_390 = v_390;
if (((*(P1053)rt_nil_check(F->v_390)).kind == (((rt_int)5LL)))) {
F->result_ = (((P1027)rt_nil_check((*(P1053)rt_nil_check(F->v_390)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_393((*(P1053)rt_nil_check(F->v_390)).i));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ascii_char_393(rt_int i_392) {
  struct f_ascii_char_393fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_392 = i_392;
F->printable_1694 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_392 >= ((rt_int)32LL)) && (F->i_392 <= ((rt_int)126LL)))) {
F->result_ = rt_str_get(F->printable_1694, rt_sub(F->i_392, ((rt_int)31LL)));
goto ret_;
}
F->result_ = 32;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_user_defined_395(rstr *op_394) {
  struct f_user_defined_395fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_394 = op_394;
F->y_1695 = NULL;
F->y_1695 = f_lookup_163(&(*F->op_394));
F->result_ = ((F->y_1695 != NULL) && (((*(P1044)rt_nil_check(F->y_1695)).kind == (((rt_int)3LL))) || ((*(P1044)rt_nil_check(F->y_1695)).kind == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_397(P1040 t_396) {
  struct f_mcopy_397fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_396 = t_396;
F->ct_1696 = rt_str_copy(f_ctype_234(F->t_396));
F->name_1697 = rt_str_new(rt_add(((rt_int)((F->ct_1696).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1697, rt_str_cat(rt_str("mc_", 3), F->ct_1696));
F->l_1698 = NULL;
if ((!f_seen_name_430(g_mcopies_1118, &F->name_1697))) {
{ R1039 *cell1699 = rt_alloc(sizeof(R1039));
(*cell1699).s = NULL;
(*cell1699).next = NULL;
F->l_1698 = cell1699;
}
(*(P1038)rt_nil_check(F->l_1698)).s = f_mk_3(&F->name_1697);
(*(P1038)rt_nil_check(F->l_1698)).next = g_mcopies_1118;
g_mcopies_1118 = F->l_1698;
f_put_27(g_out_protos_1083, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1697), rt_str("(void *d, const void *s);", 25)); b_; }));
if ((((*(P1040)rt_nil_check(F->t_396)).kind == (((rt_int)15LL))) && f_top_level_411((*(P1040)rt_nil_check(F->t_396)).assignp))) {
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1697), rt_str("(void *d, const void *s) { ", 27)), f_user_call2_405((*(P1040)rt_nil_check(F->t_396)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(", 2), F->ct_1696), rt_str(" *)d", 4)); b_; }), 1, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1696), rt_str(" *)s", 4)); b_; }), 0)), rt_str("; }", 3)); b_; }));
} else {
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1697), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1696), rt_str(" *)d = ", 7)), f_copy_code_419(F->t_396, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1696), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
}
F->result_ = F->name_1697;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_399(P1040 t_398) {
  struct f_composite_399fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_398 = t_398;
F->result_ = (((((*(P1040)rt_nil_check(F->t_398)).kind == (((rt_int)6LL))) || ((*(P1040)rt_nil_check(F->t_398)).kind == (((rt_int)7LL)))) || ((*(P1040)rt_nil_check(F->t_398)).kind == (((rt_int)17LL)))) || (((*(P1040)rt_nil_check(F->t_398)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->t_398)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_call2_405(P1044 y_400, rstr *a_401, int lv_a_402, rstr *b_403, int lv_b_404) {
  struct f_user_call2_405fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_400 = y_400;
F->a_401 = a_401;
F->lv_a_402 = lv_a_402;
F->b_403 = b_403;
F->lv_b_404 = lv_b_404;
F->args_1700 = NULL;
F->args_1700 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1044)rt_nil_check(F->y_400)).level > ((rt_int)0LL))) {
F->args_1700 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1702 = ((rt_int)1LL), hi1703 = rt_sub(g_cur_level_1091, (*(P1044)rt_nil_check(F->y_400)).level);
for (rt_int it1704 = lo1702; it1704 <= hi1703; it1704++) {
F->i_1701 = it1704;
F->args_1700 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->args_1700))->all), rt_str("->up", 4)); b_; }));
}
}
F->args_1700 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->args_1700))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_400)).cname))->all), rt_str("(", 1)), (((P1027)rt_nil_check(F->args_1700))->all)), f_user_arg_409((*(P1044)rt_nil_check(F->y_400)).params, &(*F->a_401), F->lv_a_402)), rt_str(", ", 2)), f_user_arg_409((*(P1046)rt_nil_check((*(P1044)rt_nil_check(F->y_400)).params)).next, &(*F->b_403), F->lv_b_404)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_arg_409(P1046 pm_406, rstr *v_407, int lv_408) {
  struct f_user_arg_409fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pm_406 = pm_406;
F->v_407 = v_407;
F->lv_408 = lv_408;
if (((*(P1046)rt_nil_check(F->pm_406)).mode == (((rt_int)1LL)))) {
F->result_ = f_copy_code_419((*(P1046)rt_nil_check(F->pm_406)).t, &(*F->v_407));
goto ret_;
} else if (F->lv_408) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("&(", 2), (*F->v_407)), rt_str(")", 1));
goto ret_;
}
{
F->ct_1705 = rt_str_copy(f_ctype_234((*(P1046)rt_nil_check(F->pm_406)).t));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1705), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1705), rt_str(")); *b_ = ", 10)), (*F->v_407)), rt_str("; b_; })", 8));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_top_level_411(P1044 y_410) {
  struct f_top_level_411fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_410 = y_410;
F->result_ = ((F->y_410 != NULL) && ((*(P1044)rt_nil_check(F->y_410)).level == ((rt_int)0LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_416(rstr *lval_412, P1040 t_413, rstr *v_414, P1036 c_415) {
  struct f_assign_code_416fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_412 = lval_412;
F->t_413 = t_413;
F->v_414 = v_414;
F->c_415 = c_415;
if (((((*(P1040)rt_nil_check(F->t_413)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->t_413)).assignp != NULL)) && (g_in_func_1090 || f_top_level_411((*(P1040)rt_nil_check(F->t_413)).assignp)))) {
F->result_ = rt_str_cat(f_user_call2_405((*(P1040)rt_nil_check(F->t_413)).assignp, &(*F->lval_412), 1, &(*F->v_414), 0), rt_str(";", 1));
goto ret_;
}
if ((((*(P1040)rt_nil_check(F->t_413)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->t_413)).tparams == NULL))) {
F->result_ = f_assign_code_416(&(*F->lval_412), (*(P1040)rt_nil_check(F->t_413)).under, &(*F->v_414), F->c_415);
goto ret_;
}
if (((((*(P1040)rt_nil_check(F->t_413)).kind == (((rt_int)17LL))) && (F->c_415 != NULL)) && ((*(P1036)rt_nil_check(F->c_415)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->t_413)), rt_str(" u_ = ", 6)), (*F->v_414)), rt_str("; if (u_.tag != (", 17)), (((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_415)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_234(F->t_413)), rt_str("(&", 2)), (*F->lval_412)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_399(F->t_413)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_234(F->t_413)), rt_str("(&", 2)), (*F->lval_412)), rt_str(", ", 2)), (*F->v_414)), rt_str(");", 2));
goto ret_;
}
if (((*(P1040)rt_nil_check(F->t_413)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_412)), rt_str(", ", 2)), (*F->v_414)), rt_str(");", 2));
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->t_413)).kind == (((rt_int)6LL))) || ((*(P1040)rt_nil_check(F->t_413)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_234(F->t_413)), rt_str("(&", 2)), (*F->lval_412)), rt_str(", ", 2)), (*F->v_414)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_412), rt_str(" = ", 3)), f_checked_213(F->t_413, F->c_415, &(*F->v_414))), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_419(P1040 t_417, rstr *v_418) {
  struct f_copy_code_419fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_417 = t_417;
F->v_418 = v_418;
if ((((*(P1040)rt_nil_check(F->t_417)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->t_417)).tparams == NULL))) {
F->result_ = f_copy_code_419((*(P1040)rt_nil_check(F->t_417)).under, &(*F->v_418));
goto ret_;
}
if (f_composite_399(F->t_417)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_234(F->t_417)), rt_str("(", 1)), (*F->v_418)), rt_str(")", 1));
goto ret_;
}
if (((*(P1040)rt_nil_check(F->t_417)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_418)), rt_str(")", 1));
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->t_417)).kind == (((rt_int)6LL))) || ((*(P1040)rt_nil_check(F->t_417)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_234(F->t_417)), rt_str("(", 1)), (*F->v_418)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_418);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_423(P1040 t_420, rstr *a_421, rstr *b_422) {
  struct f_eq_code_423fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_420 = t_420;
F->a_421 = a_421;
F->b_422 = b_422;
if (((((*(P1040)rt_nil_check(F->t_420)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->t_420)).eqp != NULL)) && (g_in_func_1090 || f_top_level_411((*(P1040)rt_nil_check(F->t_420)).eqp)))) {
F->result_ = f_user_call2_405((*(P1040)rt_nil_check(F->t_420)).eqp, &(*F->a_421), 0, &(*F->b_422), 0);
goto ret_;
}
if ((((*(P1040)rt_nil_check(F->t_420)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->t_420)).tparams == NULL))) {
F->result_ = f_eq_code_423((*(P1040)rt_nil_check(F->t_420)).under, &(*F->a_421), &(*F->b_422));
goto ret_;
}
if (f_composite_399(F->t_420)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_234(F->t_420)), rt_str("(", 1)), (*F->a_421)), rt_str(", ", 2)), (*F->b_422)), rt_str(")", 1));
goto ret_;
}
if (((*(P1040)rt_nil_check(F->t_420)).kind == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->t_420, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("eq", 2); b_; })), rt_str("(", 1)), (*F->a_421)), rt_str(", ", 2)), (*F->b_422)), rt_str(")", 1));
goto ret_;
}
if (((*(P1040)rt_nil_check(F->t_420)).kind == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_421)), rt_str(" == ", 4)), (*F->b_422)), rt_str(")", 1));
goto ret_;
}
if (((*(P1040)rt_nil_check(F->t_420)).kind == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_421)), rt_str(" == ", 4)), (*F->b_422)), rt_str(")", 1));
goto ret_;
}
if (((*(P1040)rt_nil_check(F->t_420)).kind == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P1040)rt_nil_check(F->t_420)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_421)), rt_str(", ", 2)), (*F->b_422)), rt_str(")", 1));
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->t_420)).kind == (((rt_int)6LL))) || ((*(P1040)rt_nil_check(F->t_420)).kind == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_234(F->t_420)), rt_str("(", 1)), (*F->a_421)), rt_str(", ", 2)), (*F->b_422)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_421)), rt_str(" == ", 4)), (*F->b_422)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_427(rstr *lval_424, P1040 t_425, rstr *v_426) {
  struct f_elem_assign_427fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_424 = lval_424;
F->t_425 = t_425;
F->v_426 = v_426;
F->result_ = f_assign_code_416(&(*F->lval_424), F->t_425, &(*F->v_426), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_430(P1038 l_428, rstr *s_429) {
  struct f_seen_name_430fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_428 = l_428;
F->s_429 = s_429;
F->p_1706 = NULL;
F->p_1706 = F->l_428;
while ((F->p_1706 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1038)rt_nil_check(F->p_1706)).s))->all), (*F->s_429))) {
F->result_ = 1;
goto ret_;
}
F->p_1706 = (*(P1038)rt_nil_check(F->p_1706)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_431(void) {
  struct f_emit_helpers_431fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_1707 = NULL;
F->t_1708 = NULL;
F->t_1708 = g_all_types_1079;
F->done_1709 = NULL;
while ((F->t_1708 != NULL)) {
if ((f_composite_399(F->t_1708) && (!f_seen_name_430(F->done_1709, &(((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_1708)).cname))->all))))) {
F->l_1710 = NULL;
F->c_1711 = rt_str_new(((rt_int)(((((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_1708)).cname))->all)).len)));
rt_str_assign(&F->c_1711, (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_1708)).cname))->all));
{ R1039 *cell1712 = rt_alloc(sizeof(R1039));
(*cell1712).s = NULL;
(*cell1712).next = NULL;
F->l_1710 = cell1712;
}
(*(P1038)rt_nil_check(F->l_1710)).s = (*(P1040)rt_nil_check(F->t_1708)).cname;
(*(P1038)rt_nil_check(F->l_1710)).next = F->done_1709;
F->done_1709 = F->l_1710;
f_put_27(g_out_helpers_1082, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1711), rt_str("(", 1)), F->c_1711), rt_str(" *d, ", 5)), F->c_1711), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_1082, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1711), rt_str(" cp_", 4)), F->c_1711), rt_str("(", 1)), F->c_1711), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_1082, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1711), rt_str("(", 1)), F->c_1711), rt_str(" a, ", 4)), F->c_1711), rt_str(" b);", 4)); b_; }));
f_helper_bodies_433(F->t_1708);
}
F->t_1708 = (*(P1040)rt_nil_check(F->t_1708)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_433(P1040 t_432) {
  struct f_helper_bodies_433fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_432 = t_432;
F->c_1713 = rt_str_new(((rt_int)(((((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_432)).cname))->all)).len)));
rt_str_assign(&F->c_1713, (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_432)).cname))->all));
F->b_1714 = NULL;
F->b_1714 = g_out_funcs_1085;
if (((*(P1040)rt_nil_check(F->t_432)).kind == (((rt_int)6LL)))) {
F->e_1715 = NULL;
F->e_1715 = (*(P1040)rt_nil_check(F->t_432)).elem;
F->sizes_1716 = NULL;
F->sizes_1716 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1717 = NULL;
F->bounds_1717 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1719 = ((rt_int)1LL), hi1720 = (*(P1040)rt_nil_check(F->t_432)).ndim;
for (rt_int it1721 = lo1719; it1721 <= hi1720; it1721++) {
F->k_1718 = it1721;
F->l_1722 = rt_str_copy(f_dim_lo_242(F->k_1718));
F->h_1723 = rt_str_copy(f_dim_hi_244(F->k_1718));
F->sizes_1716 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->sizes_1716))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1722), rt_str(", d->", 5)), F->h_1723), rt_str(") != RT_R_EXT(s.", 16)), F->l_1722), rt_str(", s.", 4)), F->h_1723), rt_str(")", 1)); b_; }));
F->bounds_1717 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->bounds_1717))->all), rt_str(" || a.", 6)), F->l_1722), rt_str(" != b.", 6)), F->l_1722), rt_str(" || a.", 6)), F->h_1723), rt_str(" != b.", 6)), F->h_1723); b_; }));
}
}
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1713), rt_str("(", 1)), F->c_1713), rt_str(" *d, ", 5)), F->c_1713), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P1027)rt_nil_check(F->sizes_1716))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_249(F->t_432, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_427(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1715, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_427(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1715, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1713), rt_str(" cp_", 4)), F->c_1713), rt_str("(", 1)), F->c_1713), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1713), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_234(F->e_1715)), rt_str(") * (size_t)", 12)), f_acnt_249(F->t_432, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_249(F->t_432, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_419(F->e_1715, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1713), rt_str("(", 1)), F->c_1713), rt_str(" a, ", 4)), F->c_1713), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P1027)rt_nil_check(F->bounds_1717))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_249(F->t_432, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_423(F->e_1715, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P1040)rt_nil_check(F->t_432)).kind == (((rt_int)15LL)))) {
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1713), rt_str("(", 1)), F->c_1713), rt_str(" *d, ", 5)), F->c_1713), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_186((*(P1040)rt_nil_check(F->t_432)).under) && ((*(P1040)rt_nil_check(F->t_432)).elemcons != NULL)) && ((*(P1036)rt_nil_check((*(P1040)rt_nil_check(F->t_432)).elemcons)).lo != NULL))) {
F->saved_1724 = NULL;
F->saved_1724 = g_psub_1095;
F->p_1725 = NULL;
F->p_1725 = (*(P1040)rt_nil_check(F->t_432)).tparams;
while ((F->p_1725 != NULL)) {
F->l1_1726 = NULL;
F->l2_1727 = NULL;
{ R1039 *cell1728 = rt_alloc(sizeof(R1039));
(*cell1728).s = NULL;
(*cell1728).next = NULL;
F->l1_1726 = cell1728;
}
{ R1039 *cell1729 = rt_alloc(sizeof(R1039));
(*cell1729).s = NULL;
(*cell1729).next = NULL;
F->l2_1727 = cell1729;
}
(*(P1038)rt_nil_check(F->l1_1726)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1725)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1038)rt_nil_check(F->l2_1727)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1725)).name))->all))); b_; }));
(*(P1038)rt_nil_check(F->l1_1726)).next = F->l2_1727;
(*(P1038)rt_nil_check(F->l2_1727)).next = g_psub_1095;
g_psub_1095 = F->l1_1726;
F->p_1725 = (*(P1034)rt_nil_check(F->p_1725)).next;
}
if (((*(P1040)rt_nil_check((*(P1040)rt_nil_check(F->t_432)).under)).kind == (((rt_int)3LL)))) {
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_319(&(((P1027)rt_nil_check((*(P1036)rt_nil_check((*(P1040)rt_nil_check(F->t_432)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_319(&(((P1027)rt_nil_check((*(P1036)rt_nil_check((*(P1040)rt_nil_check(F->t_432)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_319(&(((P1027)rt_nil_check((*(P1036)rt_nil_check((*(P1040)rt_nil_check(F->t_432)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_319(&(((P1027)rt_nil_check((*(P1036)rt_nil_check((*(P1040)rt_nil_check(F->t_432)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_1095 = F->saved_1724;
} else {
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_427(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P1040)rt_nil_check(F->t_432)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1713), rt_str(" cp_", 4)), F->c_1713), rt_str("(", 1)), F->c_1713), rt_str(" s) { s.all = ", 14)), f_copy_code_419((*(P1040)rt_nil_check(F->t_432)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1713), rt_str("(", 1)), F->c_1713), rt_str(" a, ", 4)), F->c_1713), rt_str(" b) { return ", 13)), f_eq_code_423((*(P1040)rt_nil_check(F->t_432)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if (((*(P1040)rt_nil_check(F->t_432)).kind == (((rt_int)17LL)))) {
F->f_1730 = NULL;
F->f_1730 = (*(P1040)rt_nil_check(F->t_432)).fields;
F->i_1731 = ((rt_int)0LL);
F->cases_as_1732 = NULL;
F->cases_as_1732 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1733 = NULL;
F->cases_cp_1733 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1734 = NULL;
F->cases_eq_1734 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1730 != NULL)) {
F->fn_1735 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_1730)).name))->all))));
F->cases_as_1732 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->cases_as_1732))->all), rt_str(" case ", 6)), f_itos_7(F->i_1731)), rt_str(": d->", 5)), F->fn_1735), rt_str(" = ", 3)), f_copy_code_419((*(P1042)rt_nil_check(F->f_1730)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1735); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1733 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->cases_cp_1733))->all), rt_str(" case ", 6)), f_itos_7(F->i_1731)), rt_str(": d.", 4)), F->fn_1735), rt_str(" = ", 3)), f_copy_code_419((*(P1042)rt_nil_check(F->f_1730)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1735); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1734 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->cases_eq_1734))->all), rt_str(" case ", 6)), f_itos_7(F->i_1731)), rt_str(": return ", 9)), f_eq_code_423((*(P1042)rt_nil_check(F->f_1730)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1735); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1735); b_; }))), rt_str(";", 1)); b_; }));
F->i_1731 = rt_add(F->i_1731, ((rt_int)1LL));
F->f_1730 = (*(P1042)rt_nil_check(F->f_1730)).next;
}
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1713), rt_str("(", 1)), F->c_1713), rt_str(" *d, ", 5)), F->c_1713), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P1027)rt_nil_check(F->cases_as_1732))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1713), rt_str(" cp_", 4)), F->c_1713), rt_str("(", 1)), F->c_1713), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1713), rt_str(" d = s; switch (s.tag) {", 24)), (((P1027)rt_nil_check(F->cases_cp_1733))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1713), rt_str("(", 1)), F->c_1713), rt_str(" a, ", 4)), F->c_1713), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P1027)rt_nil_check(F->cases_eq_1734))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1736 = NULL;
F->f_1736 = (*(P1040)rt_nil_check(F->t_432)).fields;
F->conds_1737 = NULL;
F->conds_1737 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1713), rt_str("(", 1)), F->c_1713), rt_str(" *d, ", 5)), F->c_1713), rt_str(" s) {", 5)); b_; }));
while ((F->f_1736 != NULL)) {
F->fn_1738 = rt_str_copy(f_field_c_17(&(((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_1736)).name))->all)));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_427(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1738); b_; }), (*(P1042)rt_nil_check(F->f_1736)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1738); b_; }))); b_; }));
F->f_1736 = (*(P1042)rt_nil_check(F->f_1736)).next;
}
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1713), rt_str(" cp_", 4)), F->c_1713), rt_str("(", 1)), F->c_1713), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1713), rt_str(" d = s;", 7)); b_; }));
F->f_1736 = (*(P1040)rt_nil_check(F->t_432)).fields;
while ((F->f_1736 != NULL)) {
F->fn_1739 = rt_str_copy(f_field_c_17(&(((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_1736)).name))->all)));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1739), rt_str(" = ", 3)), f_copy_code_419((*(P1042)rt_nil_check(F->f_1736)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1739); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1737 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->conds_1737))->all), rt_str(" && ", 4)), f_eq_code_423((*(P1042)rt_nil_check(F->f_1736)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1739); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1739); b_; }))); b_; }));
F->f_1736 = (*(P1042)rt_nil_check(F->f_1736)).next;
}
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1713), rt_str("(", 1)), F->c_1713), rt_str(" a, ", 4)), F->c_1713), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P1027)rt_nil_check(F->conds_1737))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_435(P1034 elems_434) {
  struct f_declare_body_435fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_434 = elems_434;
F->e_1740 = NULL;
F->e_1740 = F->elems_434;
while ((F->e_1740 != NULL)) {
if (((*(P1034)rt_nil_check(F->e_1740)).kind == (((rt_int)51LL)))) {
F->g_1741 = NULL;
F->g_1741 = f_new_sym_181((((rt_int)10LL)), (*(P1034)rt_nil_check(F->e_1740)).name);
(*(P1044)rt_nil_check(F->g_1741)).decl = F->e_1740;
(*(P1044)rt_nil_check(F->g_1741)).level = g_cur_level_1091;
(*(P1044)rt_nil_check(F->g_1741)).owner = g_func_sym_1102;
(*(P1044)rt_nil_check(F->g_1741)).gctx = g_fctx_1092;
f_define_168(F->g_1741, (*(P1034)rt_nil_check(F->e_1740)).line);
}
F->e_1740 = (*(P1034)rt_nil_check(F->e_1740)).next;
}
F->e_1740 = F->elems_434;
while ((F->e_1740 != NULL)) {
if ((((*(P1034)rt_nil_check(F->e_1740)).kind == (((rt_int)41LL))) && ((*(P1034)rt_nil_check(F->e_1740)).flag == ((rt_int)0LL)))) {
f_manifest_const_437(F->e_1740);
} else if (((*(P1034)rt_nil_check(F->e_1740)).kind == (((rt_int)47LL)))) {
f_gen_capsule_445(F->e_1740);
} else if ((((((*(P1034)rt_nil_check(F->e_1740)).kind == (((rt_int)48LL))) && ((*(P1034)rt_nil_check(F->e_1740)).flag != ((rt_int)1LL))) && ((*(P1034)rt_nil_check(F->e_1740)).flag != ((rt_int)3LL))) && (!f_pending_capsule_451(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_1740)).name))->all))))) {
f_gen_expose_478(F->e_1740);
(*(P1034)rt_nil_check(F->e_1740)).eline = ((rt_int)1LL);
} else if (((*(P1034)rt_nil_check(F->e_1740)).kind == (((rt_int)49LL)))) {
F->y_1742 = NULL;
F->y_1742 = f_new_sym_181((((rt_int)7LL)), (*(P1034)rt_nil_check(F->e_1740)).name);
(*(P1044)rt_nil_check(F->y_1742)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_1740)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_168(F->y_1742, (*(P1034)rt_nil_check(F->e_1740)).line);
f_put_27(g_out_globals_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_1742)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_1087, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_1742)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_1740)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if (((*(P1034)rt_nil_check(F->e_1740)).kind == (((rt_int)42LL)))) {
F->y_1743 = NULL;
F->y_1743 = f_new_sym_181((((rt_int)6LL)), (*(P1034)rt_nil_check(F->e_1740)).name);
(*(P1044)rt_nil_check(F->y_1743)).st = (*(P1034)rt_nil_check(F->e_1740)).a;
(*(P1044)rt_nil_check(F->y_1743)).decl = F->e_1740;
f_define_168(F->y_1743, (*(P1034)rt_nil_check(F->e_1740)).line);
} else if (((*(P1034)rt_nil_check(F->e_1740)).kind == (((rt_int)44LL)))) {
F->y_1744 = NULL;
F->y_1744 = f_new_sym_181((((rt_int)5LL)), (*(P1034)rt_nil_check(F->e_1740)).name);
F->t_1745 = NULL;
F->t_1745 = f_new_typ_183((((rt_int)8LL)));
(*(P1040)rt_nil_check(F->t_1745)).name = (*(P1034)rt_nil_check(F->e_1740)).name;
(*(P1040)rt_nil_check(F->t_1745)).decl = F->e_1740;
(*(P1044)rt_nil_check(F->y_1744)).t = F->t_1745;
f_define_168(F->y_1744, (*(P1034)rt_nil_check(F->e_1740)).line);
} else if (((*(P1034)rt_nil_check(F->e_1740)).kind == (((rt_int)43LL)))) {
F->y_1746 = NULL;
F->y_1746 = f_new_sym_181((((rt_int)5LL)), (*(P1034)rt_nil_check(F->e_1740)).name);
(*(P1044)rt_nil_check(F->y_1746)).st = (*(P1034)rt_nil_check(F->e_1740)).a;
(*(P1044)rt_nil_check(F->y_1746)).decl = F->e_1740;
f_define_168(F->y_1746, (*(P1034)rt_nil_check(F->e_1740)).line);
}
F->e_1740 = (*(P1034)rt_nil_check(F->e_1740)).next;
}
F->e_1740 = F->elems_434;
while ((F->e_1740 != NULL)) {
if (((((*(P1034)rt_nil_check(F->e_1740)).kind == (((rt_int)45LL))) || ((*(P1034)rt_nil_check(F->e_1740)).kind == (((rt_int)46LL)))) || ((*(P1034)rt_nil_check(F->e_1740)).kind == (((rt_int)50LL))))) {
F->y_1747 = NULL;
f_declare_subprogram_508(F->e_1740);
F->y_1747 = f_lookup_decl_165(F->e_1740);
(*(P1044)rt_nil_check(F->y_1747)).home = F->elems_434;
f_normal_function_503(F->e_1740, F->y_1747);
}
F->e_1740 = (*(P1034)rt_nil_check(F->e_1740)).next;
}
F->e_1740 = F->elems_434;
{
F->snap_1748 = NULL;
while ((F->e_1740 != NULL)) {
if (((*(P1034)rt_nil_check(F->e_1740)).kind == (((rt_int)51LL)))) {
if ((F->snap_1748 == NULL)) {
{ P1048 cell1749 = rt_alloc(sizeof *cell1749);
rt_int pv1750 = (((rt_int)4093LL));
cell1749->p_n = pv1750;
cell1749->all.lo = ((rt_int)0LL); cell1749->all.hi = pv1750;
cell1749->all.lo2 = cell1749->all.hi2 = 1;
cell1749->all.p = rt_alloc(sizeof(P1044) * (size_t)(RT_CNT(cell1749->all)) + 1);
for (rt_int i1751 = 0; i1751 < (RT_CNT(cell1749->all)); i1751++) {
cell1749->all.p[i1751] = NULL;
}
F->snap_1748 = cell1749;
}
{ rt_int lo1753 = ((rt_int)0LL), hi1754 = (((rt_int)4093LL));
for (rt_int it1755 = lo1753; it1755 <= hi1754; it1755++) {
F->i_1752 = it1755;
(((P1048)rt_nil_check(F->snap_1748))->all).p[(rt_index(F->i_1752, (((P1048)rt_nil_check(F->snap_1748))->all).lo, (((P1048)rt_nil_check(F->snap_1748))->all).hi) - (((P1048)rt_nil_check(F->snap_1748))->all).lo)] = ({ A1050 b_ = (((P1048)rt_nil_check(g_table_1074))->all); b_.p[(rt_index(F->i_1752, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1756 = NULL;
F->g_1756 = f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_1740)).name))->all));
(*(P1044)rt_nil_check(F->g_1756)).env = F->snap_1748;
}
}
F->e_1740 = (*(P1034)rt_nil_check(F->e_1740)).next;
}
}
F->e_1740 = F->elems_434;
while ((F->e_1740 != NULL)) {
if ((((*(P1034)rt_nil_check(F->e_1740)).kind == (((rt_int)45LL))) && (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_1740)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_1740)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1757 = NULL;
F->y_1757 = f_lookup_decl_165(F->e_1740);
if (((((F->y_1757 != NULL) && ((*(P1044)rt_nil_check(F->y_1757)).params != NULL)) && ((*(P1046)rt_nil_check((*(P1044)rt_nil_check(F->y_1757)).params)).next == NULL)) && (((*(P1040)rt_nil_check((*(P1046)rt_nil_check((*(P1044)rt_nil_check(F->y_1757)).params)).t)).kind == (((rt_int)15LL))) || ((*(P1040)rt_nil_check((*(P1046)rt_nil_check((*(P1044)rt_nil_check(F->y_1757)).params)).t)).kind == (((rt_int)8LL)))))) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_1740)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P1040)rt_nil_check((*(P1046)rt_nil_check((*(P1044)rt_nil_check(F->y_1757)).params)).t)).initp = F->y_1757;
} else {
(*(P1040)rt_nil_check((*(P1046)rt_nil_check((*(P1044)rt_nil_check(F->y_1757)).params)).t)).finalp = F->y_1757;
}
}
}
if (((((*(P1034)rt_nil_check(F->e_1740)).kind == (((rt_int)45LL))) && rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_1740)).name))->all), rt_str(":=", 2))) || (((*(P1034)rt_nil_check(F->e_1740)).kind == (((rt_int)46LL))) && (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_1740)).name))->all), rt_str("=", 1)) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_1740)).name))->all), rt_str("<", 1)))))) {
F->y_1758 = NULL;
F->y_1758 = f_lookup_decl_165(F->e_1740);
if (((((((F->y_1758 != NULL) && ((*(P1044)rt_nil_check(F->y_1758)).params != NULL)) && ((*(P1046)rt_nil_check((*(P1044)rt_nil_check(F->y_1758)).params)).next != NULL)) && ((*(P1046)rt_nil_check((*(P1046)rt_nil_check((*(P1044)rt_nil_check(F->y_1758)).params)).next)).next == NULL)) && ((*(P1040)rt_nil_check((*(P1046)rt_nil_check((*(P1044)rt_nil_check(F->y_1758)).params)).t)).kind == (((rt_int)15LL)))) && f_same_221((*(P1046)rt_nil_check((*(P1044)rt_nil_check(F->y_1758)).params)).t, (*(P1046)rt_nil_check((*(P1046)rt_nil_check((*(P1044)rt_nil_check(F->y_1758)).params)).next)).t))) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_1740)).name))->all), rt_str(":=", 2))) {
if (((*(P1046)rt_nil_check((*(P1044)rt_nil_check(F->y_1758)).params)).mode != (((rt_int)2LL)))) {
f_fail_23((*(P1034)rt_nil_check(F->e_1740)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the first formal of := is a VAR formal (13.2)", 45); b_; }));
}
(*(P1040)rt_nil_check((*(P1046)rt_nil_check((*(P1044)rt_nil_check(F->y_1758)).params)).t)).assignp = F->y_1758;
} else if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_1740)).name))->all), rt_str("=", 1))) {
(*(P1040)rt_nil_check((*(P1046)rt_nil_check((*(P1044)rt_nil_check(F->y_1758)).params)).t)).eqp = F->y_1758;
} else {
(*(P1040)rt_nil_check((*(P1046)rt_nil_check((*(P1044)rt_nil_check(F->y_1758)).params)).t)).ltp = F->y_1758;
}
}
}
F->e_1740 = (*(P1034)rt_nil_check(F->e_1740)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_437(P1034 d_436) {
  struct f_manifest_const_437fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_436 = d_436;
F->v_1760 = NULL;
F->y_1761 = NULL;
F->t_1762 = NULL;
F->ctext_1763 = NULL;
if (((*(P1034)rt_nil_check(F->d_436)).a != NULL)) {
if ((((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->d_436)).a)).kind != (((rt_int)70LL))) || ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->d_436)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1760 = f_meval_380((*(P1034)rt_nil_check(F->d_436)).b, &F->ok_1759);
if ((!F->ok_1759)) {
goto ret_;
}
{
F->saved_1764 = NULL;
F->saved_1764 = g_code_1088;
g_code_1088 = f_new_buffer_24();
g_trial_1117 = rt_add(g_trial_1117, ((rt_int)1LL));
{ rt_frame xf1765;
if (RT_TRY(xf1765)) {
F->ctext_1763 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_805((*(P1034)rt_nil_check(F->d_436)).b, NULL, &F->t_1762)), rt_str(")", 1)); b_; }));
RT_POP(xf1765);
} else {
RT_POP(xf1765);
int x1766 = rt_xcur;
if (0 || x1766 == ex_compile_error_1) {
F->ok_1759 = 0;
} else {
rt_raise(x1766);
}
}
}
g_trial_1117 = rt_sub(g_trial_1117, ((rt_int)1LL));
F->ok_1759 = (F->ok_1759 && ((*(P1057)rt_nil_check(g_code_1088)).head == NULL));
g_code_1088 = F->saved_1764;
}
if (((!F->ok_1759) || (((*(P1034)rt_nil_check(F->d_436)).a != NULL) && ((*(P1040)rt_nil_check(F->t_1762)).kind != (((rt_int)1LL)))))) {
goto ret_;
}
if (((*(P1053)rt_nil_check(F->v_1760)).kind == (((rt_int)4LL)))) {
(*(P1053)rt_nil_check(F->v_1760)).t = F->t_1762;
(*(P1053)rt_nil_check(F->v_1760)).i = f_lit_index_265((*(P1040)rt_nil_check(f_base_of_223(F->t_1762))).lits, &(((P1027)rt_nil_check((*(P1053)rt_nil_check(F->v_1760)).s))->all));
}
(*(P1034)rt_nil_check(F->d_436)).flag = ((rt_int)1LL);
F->y_1761 = f_new_sym_181((((rt_int)2LL)), (*(P1034)rt_nil_check(F->d_436)).name);
(*(P1044)rt_nil_check(F->y_1761)).t = F->t_1762;
(*(P1044)rt_nil_check(F->y_1761)).c = f_new_cons_184();
(*(P1044)rt_nil_check(F->y_1761)).mv = F->v_1760;
if (((*(P1053)rt_nil_check(F->v_1760)).kind == (((rt_int)1LL)))) {
(*(P1044)rt_nil_check(F->y_1761)).mvalue = (*(P1053)rt_nil_check(F->v_1760)).i;
(*(P1044)rt_nil_check(F->y_1761)).hasmv = 1;
}
(*(P1044)rt_nil_check(F->y_1761)).ro_flag = 1;
(*(P1044)rt_nil_check(F->y_1761)).access = F->ctext_1763;
f_define_168(F->y_1761, (*(P1034)rt_nil_check(F->d_436)).line);
ret_:
  RT_FPOP();
  return;
}

static int f_exported_441(P1034 d_438, rstr *name_439, int *ro_440) {
  struct f_exported_441fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_438 = d_438;
F->name_439 = name_439;
F->ro_440 = ro_440;
F->ro_440v = *F->ro_440;
F->p_1767 = NULL;
F->p_1767 = (*(P1034)rt_nil_check(F->d_438)).a;
F->ro_440v = 0;
if (((*(P1034)rt_nil_check(F->d_438)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1767 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1767)).name))->all), (*F->name_439))) {
F->ro_440v = ((*(P1034)rt_nil_check(F->p_1767)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1767 = (*(P1034)rt_nil_check(F->p_1767)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ro_440v)) (*F->ro_440) = F->ro_440v;
  RT_FPOP();
  return F->result_;
}

static P1044 f_copy_sym_443(P1044 y_442) {
  struct f_copy_sym_443fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_442 = y_442;
F->z_1768 = NULL;
{ R1045 *cell1769 = rt_alloc(sizeof(R1045));
(*cell1769).name = NULL;
(*cell1769).t = NULL;
(*cell1769).c = NULL;
(*cell1769).access = NULL;
(*cell1769).cname = NULL;
(*cell1769).st = NULL;
(*cell1769).decl = NULL;
(*cell1769).params = NULL;
(*cell1769).result = NULL;
(*cell1769).members = NULL;
(*cell1769).mnext = NULL;
(*cell1769).binds = NULL;
(*cell1769).insts = NULL;
(*cell1769).env = NULL;
(*cell1769).chain = NULL;
(*cell1769).stack = NULL;
(*cell1769).owner = NULL;
(*cell1769).gctx = NULL;
(*cell1769).mv = NULL;
(*cell1769).reqs = NULL;
(*cell1769).home = NULL;
(*cell1769).capn = NULL;
(*cell1769).tbinds = NULL;
(*cell1769).loc = NULL;
(*cell1769).reqs_sym = NULL;
F->z_1768 = cell1769;
}
(*(P1044)rt_nil_check(F->z_1768)).kind = (*(P1044)rt_nil_check(F->y_442)).kind;
(*(P1044)rt_nil_check(F->z_1768)).name = (*(P1044)rt_nil_check(F->y_442)).name;
(*(P1044)rt_nil_check(F->z_1768)).t = (*(P1044)rt_nil_check(F->y_442)).t;
(*(P1044)rt_nil_check(F->z_1768)).c = (*(P1044)rt_nil_check(F->y_442)).c;
(*(P1044)rt_nil_check(F->z_1768)).access = (*(P1044)rt_nil_check(F->y_442)).access;
(*(P1044)rt_nil_check(F->z_1768)).cname = (*(P1044)rt_nil_check(F->y_442)).cname;
(*(P1044)rt_nil_check(F->z_1768)).ro_flag = (*(P1044)rt_nil_check(F->y_442)).ro_flag;
(*(P1044)rt_nil_check(F->z_1768)).mvalue = (*(P1044)rt_nil_check(F->y_442)).mvalue;
(*(P1044)rt_nil_check(F->z_1768)).hasmv = (*(P1044)rt_nil_check(F->y_442)).hasmv;
(*(P1044)rt_nil_check(F->z_1768)).st = (*(P1044)rt_nil_check(F->y_442)).st;
(*(P1044)rt_nil_check(F->z_1768)).decl = (*(P1044)rt_nil_check(F->y_442)).decl;
(*(P1044)rt_nil_check(F->z_1768)).params = (*(P1044)rt_nil_check(F->y_442)).params;
(*(P1044)rt_nil_check(F->z_1768)).result = (*(P1044)rt_nil_check(F->y_442)).result;
(*(P1044)rt_nil_check(F->z_1768)).level = (*(P1044)rt_nil_check(F->y_442)).level;
(*(P1044)rt_nil_check(F->z_1768)).byref = (*(P1044)rt_nil_check(F->y_442)).byref;
(*(P1044)rt_nil_check(F->z_1768)).members = (*(P1044)rt_nil_check(F->y_442)).members;
(*(P1044)rt_nil_check(F->z_1768)).env = (*(P1044)rt_nil_check(F->y_442)).env;
F->result_ = F->z_1768;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_445(P1034 d_444) {
  struct f_gen_capsule_445fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_444 = d_444;
F->y_1770 = NULL;
F->y_1770 = f_new_sym_181((((rt_int)8LL)), (*(P1034)rt_nil_check(F->d_444)).name);
F->saved_1771 = NULL;
F->saved_1771 = g_suppress_1108;
F->p_1772 = NULL;
F->p_1772 = (*(P1034)rt_nil_check(F->d_444)).b;
F->tail_1773 = NULL;
(*(P1044)rt_nil_check(F->y_1770)).decl = F->d_444;
while ((F->p_1772 != NULL)) {
F->pm_1774 = NULL;
{ R1047 *cell1775 = rt_alloc(sizeof(R1047));
(*cell1775).name = NULL;
(*cell1775).t = NULL;
(*cell1775).c = NULL;
(*cell1775).cfield = NULL;
(*cell1775).next = NULL;
F->pm_1774 = cell1775;
}
(*(P1046)rt_nil_check(F->pm_1774)).name = (*(P1034)rt_nil_check(F->p_1772)).name;
(*(P1046)rt_nil_check(F->pm_1774)).mode = (*(P1034)rt_nil_check(F->p_1772)).ival;
(*(P1046)rt_nil_check(F->pm_1774)).t = f_resolve_subtype_268((*(P1034)rt_nil_check(F->p_1772)).a, &(*(P1046)rt_nil_check(F->pm_1774)).c);
if ((F->tail_1773 == NULL)) {
(*(P1044)rt_nil_check(F->y_1770)).params = F->pm_1774;
} else {
(*(P1046)rt_nil_check(F->tail_1773)).next = F->pm_1774;
}
F->tail_1773 = F->pm_1774;
F->p_1772 = (*(P1034)rt_nil_check(F->p_1772)).next;
}
if ((((*(P1034)rt_nil_check(F->d_444)).b == NULL) && f_imports_variables_447(F->d_444))) {
(*(P1044)rt_nil_check(F->y_1770)).pending = 1;
} else if (((*(P1034)rt_nil_check(F->d_444)).b == NULL)) {
g_suppress_1108 = f_suppressing_515((*(P1034)rt_nil_check(F->d_444)).prags);
f_elaborate_capsule_460(F->d_444, F->y_1770, NULL, F->d_444);
g_suppress_1108 = F->saved_1771;
}
f_define_168(F->y_1770, (*(P1034)rt_nil_check(F->d_444)).line);
ret_:
  RT_FPOP();
  return;
}

static int f_imports_variables_447(P1034 d_446) {
  struct f_imports_variables_447fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_446 = d_446;
F->result_ = (((*(P1034)rt_nil_check(F->d_446)).d != NULL) || ((*(P1034)rt_nil_check(F->d_446)).flag >= ((rt_int)2LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_elaborate_pending_449(P1044 y_448) {
  struct f_elaborate_pending_449fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_448 = y_448;
F->saved_1776 = NULL;
F->saved_1776 = g_suppress_1108;
if ((*(P1044)rt_nil_check(F->y_448)).pending) {
(*(P1044)rt_nil_check(F->y_448)).pending = 0;
g_suppress_1108 = f_suppressing_515((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_448)).decl)).prags);
f_elaborate_capsule_460((*(P1044)rt_nil_check(F->y_448)).decl, F->y_448, NULL, (*(P1044)rt_nil_check(F->y_448)).decl);
g_suppress_1108 = F->saved_1776;
}
ret_:
  RT_FPOP();
  return;
}

static int f_pending_capsule_451(rstr *name_450) {
  struct f_pending_capsule_451fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_450 = name_450;
F->y_1777 = NULL;
F->y_1777 = f_lookup_163(&(*F->name_450));
F->result_ = (((F->y_1777 != NULL) && ((*(P1044)rt_nil_check(F->y_1777)).kind == (((rt_int)8LL)))) && (*(P1044)rt_nil_check(F->y_1777)).pending);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_params_455(P1034 d_452, P1034 args_453, rt_int line_454) {
  struct f_capsule_params_455fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_452 = d_452;
F->args_453 = args_453;
F->line_454 = line_454;
F->p_1778 = NULL;
F->p_1778 = (*(P1034)rt_nil_check(F->d_452)).b;
F->a_1779 = NULL;
F->a_1779 = F->args_453;
F->t_1780 = NULL;
F->vt_1781 = NULL;
F->c_1782 = NULL;
while (((F->p_1778 != NULL) && (F->a_1779 != NULL))) {
F->t_1780 = f_resolve_subtype_268((*(P1034)rt_nil_check(F->p_1778)).a, &F->c_1782);
if (((*(P1034)rt_nil_check(F->p_1778)).ival == (((rt_int)3LL)))) {
f_fail_23(F->line_454, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if ((((*(P1034)rt_nil_check(F->p_1778)).ival == (((rt_int)2LL))) || ((*(P1034)rt_nil_check(F->p_1778)).ival == (((rt_int)4LL))))) {
F->lv_1783 = NULL;
F->lc_1784 = NULL;
F->y_1786 = NULL;
F->y_1786 = f_new_sym_181((((rt_int)1LL)), (*(P1034)rt_nil_check(F->p_1778)).name);
f_lvalue_774(F->a_1779, &F->lv_1783, &F->vt_1781, &F->lc_1784, &F->ro_1785);
f_check_type_232(F->vt_1781, F->t_1780, F->line_454);
if ((F->ro_1785 && ((*(P1034)rt_nil_check(F->p_1778)).ival == (((rt_int)2LL))))) {
f_fail_23(F->line_454, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1778)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (g_in_func_1090) {
F->f_1787 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1778)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1089, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234(F->t_1780)), rt_str(" *", 2)), F->f_1787), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1787), rt_str(" = &", 4)), (((P1027)rt_nil_check(F->lv_1783))->all)), rt_str(";", 1)); b_; }));
(*(P1044)rt_nil_check(F->y_1786)).level = g_cur_level_1091;
(*(P1044)rt_nil_check(F->y_1786)).access = f_mk_3(&F->f_1787);
(*(P1044)rt_nil_check(F->y_1786)).byref = 1;
} else {
F->g_1788 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1778)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234(F->t_1780)), rt_str(" *", 2)), F->g_1788), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_1098, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1788), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1788, rt_str(" = &", 4)), (((P1027)rt_nil_check(F->lv_1783))->all)), rt_str(";", 1)); b_; }));
(*(P1044)rt_nil_check(F->y_1786)).level = ((rt_int)0LL);
(*(P1044)rt_nil_check(F->y_1786)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1788), rt_str(")", 1)); b_; }));
}
(*(P1044)rt_nil_check(F->y_1786)).t = F->t_1780;
(*(P1044)rt_nil_check(F->y_1786)).c = F->lc_1784;
(*(P1044)rt_nil_check(F->y_1786)).ro_flag = ((*(P1034)rt_nil_check(F->p_1778)).ival == (((rt_int)4LL)));
f_define_168(F->y_1786, F->line_454);
} else {
F->y_1789 = NULL;
F->y_1789 = f_new_sym_181((((rt_int)2LL)), (*(P1034)rt_nil_check(F->p_1778)).name);
F->v_1790 = rt_str_copy(f_gexpr_805(F->a_1779, F->t_1780, &F->vt_1781));
f_check_type_232(F->vt_1781, F->t_1780, F->line_454);
{
F->access_1791 = rt_str_copy(f_storage_524(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1778)).name))->all), F->t_1780));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1791, rt_str(" = ", 3)), f_copy_code_419(F->t_1780, &F->v_1790)), rt_str(";", 1)); b_; }));
f_bind_527(F->y_1789, &F->access_1791);
}
(*(P1044)rt_nil_check(F->y_1789)).t = F->t_1780;
(*(P1044)rt_nil_check(F->y_1789)).c = F->c_1782;
(*(P1044)rt_nil_check(F->y_1789)).ro_flag = 1;
f_define_168(F->y_1789, F->line_454);
}
F->p_1778 = (*(P1034)rt_nil_check(F->p_1778)).next;
F->a_1779 = (*(P1034)rt_nil_check(F->a_1779)).next;
}
if (((F->p_1778 != NULL) || (F->a_1779 != NULL))) {
f_fail_23(F->line_454, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_452)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_460(P1034 d_456, P1044 y_457, P1034 args_458, P1034 owner_459) {
  struct f_elaborate_capsule_460fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_456 = d_456;
F->y_457 = y_457;
F->args_458 = args_458;
F->owner_459 = owner_459;
F->cr_1792 = NULL;
F->ctx_1793 = NULL;
F->saved_gotos_1794 = NULL;
F->m_1795 = NULL;
F->p_1796 = NULL;
F->p_1796 = (*(P1034)rt_nil_check(F->d_456)).a;
{ R1062 *cell1798 = rt_alloc(sizeof(R1062));
(*cell1798).d = NULL;
(*cell1798).next = NULL;
F->cr_1792 = cell1798;
}
(*(P1061)rt_nil_check(F->cr_1792)).d = F->d_456;
(*(P1061)rt_nil_check(F->cr_1792)).next = g_caps_1093;
g_caps_1093 = F->cr_1792;
f_open_scope_177();
(*(P1061)rt_nil_check(F->cr_1792)).depth = g_depth_1077;
if (((*(P1034)rt_nil_check(F->d_456)).b != NULL)) {
f_capsule_params_455(F->d_456, F->args_458, (*(P1034)rt_nil_check(F->owner_459)).line);
}
{ R1052 *cell1799 = rt_alloc(sizeof(R1052));
(*cell1799).imps = NULL;
(*cell1799).next = NULL;
F->ctx_1793 = cell1799;
}
(*(P1051)rt_nil_check(F->ctx_1793)).depth = g_depth_1077;
(*(P1051)rt_nil_check(F->ctx_1793)).imps = (*(P1034)rt_nil_check(F->d_456)).d;
(*(P1051)rt_nil_check(F->ctx_1793)).all_imp = ((*(P1034)rt_nil_check(F->d_456)).flag >= ((rt_int)2LL));
(*(P1051)rt_nil_check(F->ctx_1793)).next = g_fctx_1092;
g_fctx_1092 = F->ctx_1793;
F->saved_gotos_1794 = g_gotos_1113;
g_gotos_1113 = NULL;
f_declare_labels_591((*(P1034)rt_nil_check(F->d_456)).c);
f_declare_body_435((*(P1034)rt_nil_check(F->d_456)).c);
f_capsule_body_598((*(P1034)rt_nil_check(F->d_456)).c);
{
F->w_1800 = NULL;
{ R1064 *cell1801 = rt_alloc(sizeof(R1064));
(*cell1801).d = NULL;
(*cell1801).w = NULL;
(*cell1801).next = NULL;
F->w_1800 = cell1801;
}
(*(P1063)rt_nil_check(F->w_1800)).d = F->owner_459;
(*(P1063)rt_nil_check(F->w_1800)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_585((*(P1034)rt_nil_check(F->d_456)).c); b_; }));
(*(P1063)rt_nil_check(F->w_1800)).next = g_cap_waits_1094;
g_cap_waits_1094 = F->w_1800;
}
g_fctx_1092 = (*(P1051)rt_nil_check(g_fctx_1092)).next;
F->m_1795 = g_scope_stack_1078;
while (((F->m_1795 != NULL) && ((*(P1044)rt_nil_check(F->m_1795)).depth == g_depth_1077))) {
if ((((((*(P1044)rt_nil_check(F->m_1795)).kind == (((rt_int)5LL))) && ((*(P1044)rt_nil_check(F->m_1795)).t == NULL)) && ((*(P1044)rt_nil_check(F->m_1795)).decl != NULL)) && ((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->m_1795)).decl)).kind == (((rt_int)43LL))))) {
(*(P1044)rt_nil_check(F->m_1795)).t = f_new_type_323(F->m_1795, f_nn_65((((rt_int)80LL)), (*(P1034)rt_nil_check(F->d_456)).line), &(*(P1044)rt_nil_check(F->m_1795)).c);
} else if (((((*(P1044)rt_nil_check(F->m_1795)).kind == (((rt_int)5LL))) || ((*(P1044)rt_nil_check(F->m_1795)).kind == (((rt_int)6LL)))) && ((*(P1044)rt_nil_check(F->m_1795)).t == NULL))) {
(*(P1044)rt_nil_check(F->m_1795)).t = f_resolve_subtype_268((*(P1044)rt_nil_check(F->m_1795)).st, &(*(P1044)rt_nil_check(F->m_1795)).c);
} else if ((((*(P1044)rt_nil_check(F->m_1795)).kind == (((rt_int)5LL))) && ((*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->m_1795)).t)).kind == (((rt_int)8LL))))) {
f_finish_ptr_480((*(P1044)rt_nil_check(F->m_1795)).t);
}
F->m_1795 = (*(P1044)rt_nil_check(F->m_1795)).stack;
}
F->m_1795 = g_scope_stack_1078;
while (((F->m_1795 != NULL) && ((*(P1044)rt_nil_check(F->m_1795)).depth == g_depth_1077))) {
if (f_exported_441(F->d_456, &(((P1027)rt_nil_check((*(P1044)rt_nil_check(F->m_1795)).name))->all), &F->ro_1797)) {
F->z_1802 = NULL;
F->z_1802 = f_copy_sym_443(F->m_1795);
if (F->ro_1797) {
(*(P1044)rt_nil_check(F->z_1802)).ro_flag = 1;
}
(*(P1044)rt_nil_check(F->z_1802)).mnext = (*(P1044)rt_nil_check(F->y_457)).members;
(*(P1044)rt_nil_check(F->y_457)).members = F->z_1802;
}
F->m_1795 = (*(P1044)rt_nil_check(F->m_1795)).stack;
}
while ((F->p_1796 != NULL)) {
if ((((!rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1796)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1796)).name))->all), rt_str("=", 1)))) && ((f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1796)).name))->all)) == NULL) || ((*(P1044)rt_nil_check(f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1796)).name))->all)))).depth != g_depth_1077)))) {
f_fail_23((*(P1034)rt_nil_check(F->d_456)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1796)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_456)).name))->all)); b_; }));
}
F->p_1796 = (*(P1034)rt_nil_check(F->p_1796)).next;
}
f_close_scope_178();
g_caps_1093 = (*(P1061)rt_nil_check(g_caps_1093)).next;
g_gotos_1113 = F->saved_gotos_1794;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_463(P1034 d_461, rstr *op_462) {
  struct f_exports_op_463fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_461 = d_461;
F->op_462 = op_462;
F->p_1803 = NULL;
if ((F->d_461 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1803 = (*(P1034)rt_nil_check(F->d_461)).a;
while ((F->p_1803 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1803)).name))->all), (*F->op_462))) {
F->result_ = 1;
goto ret_;
}
F->p_1803 = (*(P1034)rt_nil_check(F->p_1803)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1027 f_renamed_466(P1034 d_464, P1044 z_465) {
  struct f_renamed_466fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_464 = d_464;
F->z_465 = z_465;
F->r_1804 = NULL;
F->r_1804 = (*(P1034)rt_nil_check(F->d_464)).c;
while ((F->r_1804 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->r_1804)).name))->all), (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->z_465)).name))->all))) {
F->result_ = (*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->r_1804)).a)).name;
goto ret_;
}
F->r_1804 = (*(P1034)rt_nil_check(F->r_1804)).next;
}
F->result_ = (*(P1044)rt_nil_check(F->z_465)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_cap_tt_match_469(P1034 f_467, P1034 a_468) {
  struct f_cap_tt_match_469fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->f_467 = f_467;
F->a_468 = a_468;
F->x_1805 = NULL;
F->x_1805 = F->f_467;
F->y_1806 = NULL;
F->y_1806 = F->a_468;
while (((F->x_1805 != NULL) && (F->y_1806 != NULL))) {
F->v1_1809 = NULL;
F->v1_1809 = f_meval_380(F->x_1805, &F->ok1_1807);
F->v2_1810 = NULL;
F->v2_1810 = f_meval_380(F->y_1806, &F->ok2_1808);
if ((((!F->ok1_1807) || (!F->ok2_1808)) || ((*(P1053)rt_nil_check(F->v1_1809)).kind != (*(P1053)rt_nil_check(F->v2_1810)).kind))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P1053)rt_nil_check(F->v1_1809)).kind == (((rt_int)5LL))) || ((*(P1053)rt_nil_check(F->v1_1809)).kind == (((rt_int)4LL))))) {
if ((!rt_str_eq((((P1027)rt_nil_check((*(P1053)rt_nil_check(F->v1_1809)).s))->all), (((P1027)rt_nil_check((*(P1053)rt_nil_check(F->v2_1810)).s))->all)))) {
F->result_ = 0;
goto ret_;
}
} else if (((*(P1053)rt_nil_check(F->v1_1809)).i != (*(P1053)rt_nil_check(F->v2_1810)).i)) {
F->result_ = 0;
goto ret_;
}
F->x_1805 = (*(P1034)rt_nil_check(F->x_1805)).next;
F->y_1806 = (*(P1034)rt_nil_check(F->y_1806)).next;
}
F->result_ = ((F->x_1805 == NULL) && (F->y_1806 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_pick_capsule_471(P1034 d_470) {
  struct f_pick_capsule_471fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_470 = d_470;
F->y_1811 = NULL;
F->y_1811 = ({ A1050 b_ = (((P1048)rt_nil_check(g_table_1074))->all); b_.p[(rt_index(f_hash_161(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_470)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
F->first_1812 = NULL;
F->fit_1813 = NULL;
F->n_1814 = ((rt_int)0LL);
while ((F->y_1811 != NULL)) {
if ((rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_1811)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_470)).name))->all)) && ((*(P1044)rt_nil_check(F->y_1811)).kind == (((rt_int)8LL))))) {
F->n_1814 = rt_add(F->n_1814, ((rt_int)1LL));
if ((F->first_1812 == NULL)) {
F->first_1812 = F->y_1811;
}
if ((((F->fit_1813 == NULL) && f_fits_924(F->y_1811, (*(P1034)rt_nil_check(F->d_470)).b)) && f_cap_tt_match_469((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_1811)).decl)).e, (*(P1034)rt_nil_check(F->d_470)).e))) {
F->fit_1813 = F->y_1811;
}
}
F->y_1811 = (*(P1044)rt_nil_check(F->y_1811)).chain;
}
if ((F->n_1814 > ((rt_int)1LL))) {
if ((F->fit_1813 == NULL)) {
f_fail_23((*(P1034)rt_nil_check(F->d_470)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no capsule ", 11), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_470)).name))->all)), rt_str(" has formals that fit these actual parameters", 45)); b_; }));
}
F->result_ = F->fit_1813;
goto ret_;
}
if ((F->first_1812 == NULL)) {
F->result_ = f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_470)).name))->all));
goto ret_;
}
F->result_ = F->first_1812;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_capsule_instance_474(P1044 g_472, P1034 d_473) {
  struct f_capsule_instance_474fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_472 = g_472;
F->d_473 = d_473;
F->gd_1815 = NULL;
F->gd_1815 = (*(P1044)rt_nil_check(F->g_472)).decl;
F->pat_1816 = NULL;
F->pat_1816 = (*(P1034)rt_nil_check(F->gd_1815)).b;
F->binds_1817 = NULL;
F->binds_1817 = f_need_binds_732(F->gd_1815, f_tt_binds_711(F->gd_1815, (*(P1034)rt_nil_check(F->pat_1816)).e, (*(P1034)rt_nil_check(F->d_473)).e, (*(P1034)rt_nil_check(F->d_473)).line), (*(P1034)rt_nil_check(F->d_473)).line);
F->inst_1818 = NULL;
F->inst_1818 = (*(P1044)rt_nil_check(F->g_472)).insts;
F->saved_env_1819 = NULL;
F->saved_env_1819 = g_genv_1075;
F->saved_gdepth_1820 = g_gdepth_1107;
if ((((*(P1034)rt_nil_check(F->d_473)).flag != ((rt_int)1LL)) && ((*(P1034)rt_nil_check(F->d_473)).flag != ((rt_int)3LL)))) {
while ((F->inst_1818 != NULL)) {
if (f_same_binds_703((*(P1044)rt_nil_check(F->inst_1818)).tbinds, F->binds_1817)) {
F->result_ = F->inst_1818;
goto ret_;
}
F->inst_1818 = (*(P1044)rt_nil_check(F->inst_1818)).insts;
}
}
F->inst_1818 = f_new_sym_181((((rt_int)8LL)), (*(P1034)rt_nil_check(F->pat_1816)).name);
(*(P1044)rt_nil_check(F->inst_1818)).decl = F->pat_1816;
(*(P1044)rt_nil_check(F->inst_1818)).tbinds = F->binds_1817;
f_open_scope_177();
{
F->b_1821 = NULL;
F->b_1821 = F->binds_1817;
while ((F->b_1821 != NULL)) {
f_define_168(F->b_1821, (*(P1034)rt_nil_check(F->d_473)).line);
F->b_1821 = (*(P1044)rt_nil_check(F->b_1821)).mnext;
}
}
g_genv_1075 = (*(P1044)rt_nil_check(F->g_472)).env;
g_gdepth_1107 = g_depth_1077;
f_elaborate_capsule_460(F->pat_1816, F->inst_1818, (*(P1034)rt_nil_check(F->d_473)).b, F->d_473);
g_genv_1075 = F->saved_env_1819;
g_gdepth_1107 = F->saved_gdepth_1820;
f_close_scope_178();
if ((((*(P1034)rt_nil_check(F->d_473)).flag != ((rt_int)1LL)) && ((*(P1034)rt_nil_check(F->d_473)).flag != ((rt_int)3LL)))) {
(*(P1044)rt_nil_check(F->inst_1818)).insts = (*(P1044)rt_nil_check(F->g_472)).insts;
(*(P1044)rt_nil_check(F->g_472)).insts = F->inst_1818;
}
F->result_ = F->inst_1818;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_configure_476(P1044 y_475) {
  struct f_configure_476fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_475 = y_475;
F->m_1822 = NULL;
F->m_1822 = (*(P1044)rt_nil_check(F->y_475)).members;
while ((F->m_1822 != NULL)) {
F->n_1823 = rt_str_copy((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->m_1822)).name))->all));
if (((((*(P1044)rt_nil_check(F->m_1822)).kind == (((rt_int)2LL))) && (*(P1044)rt_nil_check(F->m_1822)).hasmv) && (((rt_str_eq(F->n_1823, rt_str("MILLISECONDS", 12)) || rt_str_eq(F->n_1823, rt_str("SECONDS", 7))) || rt_str_eq(F->n_1823, rt_str("MINUTES", 7))) || rt_str_eq(F->n_1823, rt_str("HOURS", 5))))) {
f_put_27(g_out_excs_1087, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  RT_", 5), F->n_1823), rt_str(" = ", 3)), f_itos_7((*(P1044)rt_nil_check(F->m_1822)).mvalue)), rt_str(";", 1)); b_; }));
}
F->m_1822 = (*(P1044)rt_nil_check(F->m_1822)).mnext;
}
ret_:
  RT_FPOP();
  return;
}

static void f_gen_expose_478(P1034 d_477) {
  struct f_gen_expose_478fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_477 = d_477;
F->y_1824 = NULL;
F->y_1824 = f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_477)).name))->all));
F->m_1825 = NULL;
F->p_1826 = NULL;
F->p_1826 = (*(P1034)rt_nil_check(F->d_477)).a;
F->r_1827 = NULL;
F->r_1827 = (*(P1034)rt_nil_check(F->d_477)).c;
if ((((F->y_1824 != NULL) && ((*(P1044)rt_nil_check(F->y_1824)).kind == (((rt_int)10LL)))) && ((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_1824)).decl)).b)).kind == (((rt_int)47LL))))) {
F->y_1824 = f_capsule_instance_474(F->y_1824, F->d_477);
} else {
F->y_1824 = f_pick_capsule_471(F->d_477);
if (((F->y_1824 == NULL) || ((*(P1044)rt_nil_check(F->y_1824)).kind != (((rt_int)8LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->d_477)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_477)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
f_elaborate_pending_449(F->y_1824);
if ((((*(P1034)rt_nil_check(F->d_477)).e != NULL) && (((*(P1044)rt_nil_check(F->y_1824)).decl == NULL) || ((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_1824)).decl)).e == NULL)))) {
f_fail_23((*(P1034)rt_nil_check(F->d_477)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_477)).name))->all), rt_str(" has no translation time property list", 38)); b_; }));
}
}
if (rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_1824)).name))->all), rt_str("CONFIGURATION", 13))) {
f_configure_476(F->y_1824);
}
if ((((*(P1044)rt_nil_check(F->y_1824)).tbinds != NULL) || ((((*(P1044)rt_nil_check(F->y_1824)).decl != NULL) && ((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_1824)).decl)).e != NULL)) && ((*(P1044)rt_nil_check(F->y_1824)).kind == (((rt_int)10LL)))))) {
} else if ((((*(P1034)rt_nil_check(F->d_477)).flag == ((rt_int)1LL)) || ((*(P1034)rt_nil_check(F->d_477)).flag == ((rt_int)3LL)))) {
F->inst_1828 = NULL;
F->inst_1828 = f_new_sym_181((((rt_int)8LL)), (*(P1044)rt_nil_check(F->y_1824)).name);
(*(P1044)rt_nil_check(F->inst_1828)).decl = (*(P1044)rt_nil_check(F->y_1824)).decl;
f_elaborate_capsule_460((*(P1044)rt_nil_check(F->y_1824)).decl, F->inst_1828, (*(P1034)rt_nil_check(F->d_477)).b, F->d_477);
F->y_1824 = F->inst_1828;
} else if ((((*(P1044)rt_nil_check(F->y_1824)).decl != NULL) && ((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_1824)).decl)).b != NULL))) {
f_fail_23((*(P1034)rt_nil_check(F->d_477)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_477)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P1034)rt_nil_check(F->d_477)).b != NULL)) {
f_fail_23((*(P1034)rt_nil_check(F->d_477)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1827 != NULL)) {
F->found_1829 = 0;
F->m_1825 = (*(P1044)rt_nil_check(F->y_1824)).members;
while ((F->m_1825 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->m_1825)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->r_1827)).name))->all))) {
F->found_1829 = 1;
}
F->m_1825 = (*(P1044)rt_nil_check(F->m_1825)).mnext;
}
if ((!F->found_1829)) {
f_fail_23((*(P1034)rt_nil_check(F->d_477)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->r_1827)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_477)).name))->all)); b_; }));
}
F->r_1827 = (*(P1034)rt_nil_check(F->r_1827)).next;
}
if (((*(P1034)rt_nil_check(F->d_477)).ival == ((rt_int)1LL))) {
F->m_1825 = (*(P1044)rt_nil_check(F->y_1824)).members;
while ((F->m_1825 != NULL)) {
F->z_1830 = NULL;
F->z_1830 = f_copy_sym_443(F->m_1825);
(*(P1044)rt_nil_check(F->z_1830)).name = f_renamed_466(F->d_477, F->m_1825);
f_define_168(F->z_1830, (*(P1034)rt_nil_check(F->d_477)).line);
F->m_1825 = (*(P1044)rt_nil_check(F->m_1825)).mnext;
}
goto ret_;
}
while ((F->p_1826 != NULL)) {
F->found_1831 = 0;
F->m_1825 = (*(P1044)rt_nil_check(F->y_1824)).members;
while ((F->m_1825 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->m_1825)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1826)).name))->all))) {
F->z_1832 = NULL;
F->z_1832 = f_copy_sym_443(F->m_1825);
if (((*(P1034)rt_nil_check(F->p_1826)).ival == ((rt_int)1LL))) {
(*(P1044)rt_nil_check(F->z_1832)).ro_flag = 1;
}
(*(P1044)rt_nil_check(F->z_1832)).name = f_renamed_466(F->d_477, F->m_1825);
f_define_168(F->z_1832, (*(P1034)rt_nil_check(F->d_477)).line);
F->found_1831 = 1;
}
F->m_1825 = (*(P1044)rt_nil_check(F->m_1825)).mnext;
}
if ((!F->found_1831)) {
f_fail_23((*(P1034)rt_nil_check(F->d_477)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1826)).name))->all), rt_str(" is not exported by ", 20)), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_477)).name))->all)); b_; }));
}
F->p_1826 = (*(P1034)rt_nil_check(F->p_1826)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_480(P1040 t_479) {
  struct f_finish_ptr_480fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_479 = t_479;
F->d_1833 = NULL;
F->d_1833 = (*(P1040)rt_nil_check(F->t_479)).decl;
F->p_1834 = NULL;
F->c_1835 = NULL;
F->dummy_1836 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1836, rt_str(" ", 1));
if (((*(P1040)rt_nil_check(F->t_479)).target != NULL)) {
goto ret_;
}
f_open_scope_177();
{ rt_int lo1838 = ((rt_int)1LL), hi1839 = ((rt_int)2LL);
for (rt_int it1840 = lo1838; it1840 <= hi1839; it1840++) {
F->pass_1837 = it1840;
if ((F->pass_1837 == ((rt_int)1LL))) {
F->p_1834 = (*(P1034)rt_nil_check(F->d_1833)).d;
} else {
F->p_1834 = (*(P1034)rt_nil_check(F->d_1833)).b;
}
while ((F->p_1834 != NULL)) {
F->y_1841 = NULL;
F->y_1841 = f_new_sym_181((((rt_int)2LL)), (*(P1034)rt_nil_check(F->p_1834)).name);
F->pc_1842 = NULL;
(*(P1044)rt_nil_check(F->y_1841)).t = f_resolve_subtype_268((*(P1034)rt_nil_check(F->p_1834)).a, &F->pc_1842);
(*(P1044)rt_nil_check(F->y_1841)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_168(F->y_1841, (*(P1034)rt_nil_check(F->d_1833)).line);
F->p_1834 = (*(P1034)rt_nil_check(F->p_1834)).next;
}
}
}
(*(P1040)rt_nil_check(F->t_479)).target = f_resolve_subtype_268((*(P1034)rt_nil_check(F->d_1833)).a, &F->c_1835);
if (((*(P1034)rt_nil_check(F->d_1833)).c != NULL)) {
f_check_rep_337((*(P1034)rt_nil_check(F->d_1833)).c, (*(P1040)rt_nil_check(F->t_479)).target, F->c_1835, 1, 1, F->d_1833);
(*(P1040)rt_nil_check(F->t_479)).repn = (*(P1034)rt_nil_check(F->d_1833)).c;
}
f_close_scope_178();
(*rt_str_at(&F->dummy_1836, ((rt_int)1LL))) = rt_str_get(f_ctype_234(F->t_479), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1836, ((rt_int)1LL))) = rt_str_get(f_ctype_234((*(P1040)rt_nil_check(F->t_479)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1034 f_ptr_args_482(P1036 c_481) {
  struct f_ptr_args_482fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_481 = c_481;
if ((F->c_481 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1036)rt_nil_check(F->c_481)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_487(P1034 formals_483, P1034 actuals_484, rstr *cell_485, rt_int line_486) {
  struct f_bind_ptr_params_487fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_483 = formals_483;
F->actuals_484 = actuals_484;
F->cell_485 = cell_485;
F->line_486 = line_486;
F->p_1843 = NULL;
F->p_1843 = F->formals_483;
F->a_1844 = NULL;
F->a_1844 = F->actuals_484;
F->vt_1845 = NULL;
if ((f_list_len_71(F->formals_483) != f_list_len_71(F->actuals_484))) {
f_fail_23(F->line_486, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_71(F->formals_483))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1843 != NULL)) {
F->pc_1846 = NULL;
F->y_1847 = NULL;
F->y_1847 = f_new_sym_181((((rt_int)2LL)), (*(P1034)rt_nil_check(F->p_1843)).name);
(*(P1044)rt_nil_check(F->y_1847)).t = f_resolve_subtype_268((*(P1034)rt_nil_check(F->p_1843)).a, &F->pc_1846);
{
F->v_1848 = rt_str_copy(f_gexpr_805(F->a_1844, (*(P1044)rt_nil_check(F->y_1847)).t, &F->vt_1845));
F->pv_1849 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_232(F->vt_1845, (*(P1044)rt_nil_check(F->y_1847)).t, F->line_486);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1044)rt_nil_check(F->y_1847)).t), rt_str(" ", 1)), F->pv_1849), rt_str(" = ", 3)), f_checked_213((*(P1044)rt_nil_check(F->y_1847)).t, F->pc_1846, &F->v_1848)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_485), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_485), rt_str("->p_", 4)), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1843)).name))->all))), rt_str(" = ", 3)), F->pv_1849), rt_str(";", 1)); b_; }));
}
(*(P1044)rt_nil_check(F->y_1847)).access = f_mk_3(&F->pv_1849);
}
f_define_168(F->y_1847, F->line_486);
F->p_1843 = (*(P1034)rt_nil_check(F->p_1843)).next;
F->a_1844 = (*(P1034)rt_nil_check(F->a_1844)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_492(P1034 s_488, rstr *lv_489, P1040 t_490, P1036 c_491) {
  struct f_alloc_cell_492fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_488 = s_488;
F->lv_489 = lv_489;
F->t_490 = t_490;
F->c_491 = c_491;
F->d_1850 = NULL;
F->d_1850 = (*(P1040)rt_nil_check(F->t_490)).decl;
F->tc_1851 = NULL;
F->vt_1852 = NULL;
F->pt_1853 = rt_str_copy(f_ctype_234(F->t_490));
F->cell_1854 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_351((*(P1040)rt_nil_check(F->t_490)).target)) {
F->fn_1855 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_1099 = 1;
g_uses_findyn_1101 = 1;
f_put_27(g_out_protos_1083, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1855), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1855), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (g_in_func_1090) {
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1027)rt_nil_check((*(P1044)rt_nil_check(g_func_sym_1102)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1853), rt_str(")cell_)->all)", 13)); b_; }), (*(P1040)rt_nil_check(F->t_490)).target)); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (g_in_func_1090) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1853), rt_str(" ", 1)), F->cell_1854), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1854), rt_str(", ", 2)), F->fn_1855), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1853), rt_str(" ", 1)), F->cell_1854), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1854), rt_str(", ", 2)), F->fn_1855), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1853), rt_str(" ", 1)), F->cell_1854), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1854), rt_str(");", 2)); b_; }));
}
f_open_scope_177();
f_bind_ptr_params_487((*(P1034)rt_nil_check(F->d_1850)).d, f_ptr_args_482(F->c_491), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), (*(P1034)rt_nil_check(F->s_488)).line);
f_bind_ptr_params_487((*(P1034)rt_nil_check(F->d_1850)).b, (*(P1034)rt_nil_check(F->s_488)).b, &F->cell_1854, (*(P1034)rt_nil_check(F->s_488)).line);
F->vt_1852 = f_resolve_subtype_268((*(P1034)rt_nil_check(F->d_1850)).a, &F->tc_1851);
g_mark_uninit_1110 = (!f_suppressed_517(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; })));
f_init_storage_346(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1854, rt_str("->all", 5)); b_; }), (*(P1040)rt_nil_check(F->t_490)).target, F->tc_1851);
g_mark_uninit_1110 = 0;
f_close_scope_178();
if (((*(P1034)rt_nil_check(F->s_488)).c != NULL)) {
F->v_1856 = rt_str_copy(f_gexpr_in_816((*(P1034)rt_nil_check(F->s_488)).c, (*(P1040)rt_nil_check(F->t_490)).target, F->tc_1851, &F->vt_1852));
f_check_type_232(F->vt_1852, (*(P1040)rt_nil_check(F->t_490)).target, (*(P1034)rt_nil_check(F->s_488)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_416(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1854, rt_str("->all", 5)); b_; }), (*(P1040)rt_nil_check(F->t_490)).target, &F->v_1856, F->tc_1851); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_489), rt_str(" = ", 3)), F->cell_1854), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1036 f_freeze_args_496(P1036 c_493, P1040 t_494, rt_int line_495) {
  struct f_freeze_args_496fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_493 = c_493;
F->t_494 = t_494;
F->line_495 = line_495;
F->r_1857 = NULL;
F->r_1857 = f_copy_cons_206(F->c_493);
F->p_1858 = NULL;
F->p_1858 = (*(P1034)rt_nil_check((*(P1040)rt_nil_check(F->t_494)).decl)).d;
F->a_1859 = NULL;
F->a_1859 = (*(P1036)rt_nil_check(F->c_493)).args;
F->head_1860 = NULL;
F->tail_1861 = NULL;
F->saved_1862 = NULL;
F->saved_1862 = g_st_field_1096;
if ((f_list_len_71(F->p_1858) != f_list_len_71(F->a_1859))) {
f_fail_23(F->line_495, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_494)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1858))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1859 != NULL)) {
F->pc_1863 = NULL;
F->vt_1864 = NULL;
F->pt_1865 = NULL;
F->pt_1865 = f_resolve_subtype_268((*(P1034)rt_nil_check(F->p_1858)).a, &F->pc_1863);
F->nm_1866 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1867 = NULL;
F->y_1867 = f_new_sym_181((((rt_int)2LL)), f_mk_3(&F->nm_1866));
F->n_1868 = NULL;
F->n_1868 = f_nn_65((((rt_int)7LL)), F->line_495);
F->v_1869 = rt_str_copy(f_gexpr_805(F->a_1859, F->pt_1865, &F->vt_1864));
F->access_1870 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_234(F->pt_1865); b_; })));
f_check_type_232(F->vt_1864, F->pt_1865, F->line_495);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1870, rt_str(" = ", 3)), f_checked_213(F->pt_1865, F->pc_1863, &F->v_1869)), rt_str(";", 1)); b_; }));
(*(P1044)rt_nil_check(F->y_1867)).t = F->pt_1865;
(*(P1044)rt_nil_check(F->y_1867)).ro_flag = 1;
f_bind_527(F->y_1867, &F->access_1870);
f_define_168(F->y_1867, F->line_495);
(*(P1034)rt_nil_check(F->n_1868)).name = f_mk_3(&F->nm_1866);
f_append_69(&F->head_1860, &F->tail_1861, F->n_1868);
F->a_1859 = (*(P1034)rt_nil_check(F->a_1859)).next;
F->p_1858 = (*(P1034)rt_nil_check(F->p_1858)).next;
}
(*(P1036)rt_nil_check(F->r_1857)).args = F->head_1860;
g_st_field_1096 = F->saved_1862;
F->result_ = F->r_1857;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_500(P1040 t_497, P1036 c_498, P1034 src_499) {
  struct f_ptr_subtype_check_500fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_497 = t_497;
F->c_498 = c_498;
F->src_499 = src_499;
F->lv_1871 = NULL;
F->st_1872 = NULL;
F->sc_1873 = NULL;
F->cond_1875 = NULL;
F->cond_1875 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1876 = NULL;
F->b_1877 = NULL;
F->at_1878 = NULL;
F->bt_1879 = NULL;
if (((((((*(P1040)rt_nil_check(F->t_497)).kind != (((rt_int)8LL))) || (F->c_498 == NULL)) || ((*(P1036)rt_nil_check(F->c_498)).args == NULL)) || (F->src_499 == NULL)) || (!f_is_lvalue_768(F->src_499)))) {
goto ret_;
}
f_lvalue_774(F->src_499, &F->lv_1871, &F->st_1872, &F->sc_1873, &F->ro_1874);
if (((F->sc_1873 == NULL) || ((*(P1036)rt_nil_check(F->sc_1873)).args == NULL))) {
goto ret_;
}
F->a_1876 = (*(P1036)rt_nil_check(F->c_498)).args;
F->b_1877 = (*(P1036)rt_nil_check(F->sc_1873)).args;
while (((F->a_1876 != NULL) && (F->b_1877 != NULL))) {
F->x_1880 = rt_str_copy(f_gexpr_805(F->a_1876, NULL, &F->at_1878));
F->y_1881 = rt_str_copy(f_gexpr_805(F->b_1877, F->at_1878, &F->bt_1879));
F->cond_1875 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->cond_1875))->all), rt_str(" || !", 5)), f_eq_code_423(F->at_1878, &F->x_1880, &F->y_1881)); b_; }));
F->a_1876 = (*(P1034)rt_nil_check(F->a_1876)).next;
F->b_1877 = (*(P1034)rt_nil_check(F->b_1877)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1027)rt_nil_check(F->cond_1875))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_normal_function_503(P1034 d_501, P1044 y_502) {
  struct f_normal_function_503fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_501 = d_501;
F->y_502 = y_502;
F->p_1882 = NULL;
F->p_1882 = (*(P1044)rt_nil_check(F->y_502)).params;
F->imp_1883 = NULL;
F->imp_1883 = (*(P1034)rt_nil_check(F->d_501)).d;
if ((((*(P1034)rt_nil_check(F->d_501)).kind != (((rt_int)46LL))) || (rt_mod((*(P1034)rt_nil_check(F->d_501)).flag, ((rt_int)2LL)) == ((rt_int)1LL)))) {
goto ret_;
}
while ((F->p_1882 != NULL)) {
if ((((*(P1046)rt_nil_check(F->p_1882)).mode == (((rt_int)2LL))) || ((*(P1046)rt_nil_check(F->p_1882)).mode == (((rt_int)3LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->d_501)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may have only CONST and READONLY formal parameters: ", 70), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_501)).name))->all)); b_; }));
}
F->p_1882 = (*(P1046)rt_nil_check(F->p_1882)).next;
}
if ((((*(P1034)rt_nil_check(F->d_501)).d == NULL) && ((*(P1034)rt_nil_check(F->d_501)).flag < ((rt_int)2LL)))) {
goto ret_;
}
if (((g_caps_1093 == NULL) || (g_depth_1077 != (*(P1061)rt_nil_check(g_caps_1093)).depth))) {
f_fail_23((*(P1034)rt_nil_check(F->d_501)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function with an imports list must be local to a capsule body: ", 72), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_501)).name))->all)); b_; }));
}
while ((F->imp_1883 != NULL)) {
F->z_1885 = NULL;
F->z_1885 = f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->imp_1883)).name))->all));
if ((((F->z_1885 != NULL) && ((*(P1044)rt_nil_check(F->z_1885)).kind == (((rt_int)1LL)))) && ((*(P1044)rt_nil_check(F->z_1885)).depth != (*(P1061)rt_nil_check(g_caps_1093)).depth))) {
f_fail_23((*(P1034)rt_nil_check(F->d_501)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function imports only variables of its capsule body: ", 62), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->imp_1883)).name))->all)); b_; }));
}
if ((f_exported_441((*(P1061)rt_nil_check(g_caps_1093)).d, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->imp_1883)).name))->all), &F->ro_1884) && ((*(P1034)rt_nil_check((*(P1061)rt_nil_check(g_caps_1093)).d)).ival != ((rt_int)1LL)))) {
f_fail_23((*(P1034)rt_nil_check(F->d_501)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may not import an exported variable: ", 55), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->imp_1883)).name))->all)); b_; }));
}
F->imp_1883 = (*(P1034)rt_nil_check(F->imp_1883)).next;
}
(*(P1044)rt_nil_check(F->y_502)).capn = (*(P1061)rt_nil_check(g_caps_1093)).d;
ret_:
  RT_FPOP();
  return;
}

static void f_foreign_body_506(P1034 d_504, P1044 y_505) {
  struct f_foreign_body_506fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_504 = d_504;
F->y_505 = y_505;
F->pm_1886 = NULL;
F->pm_1886 = (*(P1044)rt_nil_check(F->y_505)).params;
F->proto_1887 = NULL;
F->proto_1887 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->args_1888 = NULL;
F->args_1888 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cn_1889 = rt_str_copy(f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_504)).name))->all)));
if (((*(P1034)rt_nil_check(F->d_504)).c != NULL)) {
f_fail_23((*(P1034)rt_nil_check(F->d_504)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a foreign ", 10), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_504)).name))->all)), rt_str(" has an empty body", 18)); b_; }));
}
while ((F->pm_1886 != NULL)) {
if ((((*(P1046)rt_nil_check(F->pm_1886)).mode != (((rt_int)1LL))) || (!(f_scalar_kind_186(f_base_of_223((*(P1046)rt_nil_check(F->pm_1886)).t)) || ((*(P1040)rt_nil_check(f_base_of_223((*(P1046)rt_nil_check(F->pm_1886)).t))).kind == (((rt_int)2LL))))))) {
f_fail_23((*(P1034)rt_nil_check(F->d_504)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a foreign subprogram takes CONST INT, FLOAT, BOOL and ENUM formals", 66); b_; }));
}
if ((((rt_int)(((((P1027)rt_nil_check(F->proto_1887))->all)).len)) > ((rt_int)0LL))) {
F->proto_1887 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->proto_1887))->all), rt_str(", ", 2)); b_; }));
F->args_1888 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->args_1888))->all), rt_str(", ", 2)); b_; }));
}
F->proto_1887 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->proto_1887))->all), f_ctype_234((*(P1046)rt_nil_check(F->pm_1886)).t)); b_; }));
F->args_1888 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->args_1888))->all), rt_str("F->", 3)), (((P1027)rt_nil_check((*(P1046)rt_nil_check(F->pm_1886)).cfield))->all)); b_; }));
F->pm_1886 = (*(P1046)rt_nil_check(F->pm_1886)).next;
}
if ((((rt_int)(((((P1027)rt_nil_check(F->proto_1887))->all)).len)) == ((rt_int)0LL))) {
F->proto_1887 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if ((((*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_505)).result)).kind != (((rt_int)9LL))) && (!(f_scalar_kind_186(f_base_of_223((*(P1044)rt_nil_check(F->y_505)).result)) || ((*(P1040)rt_nil_check(f_base_of_223((*(P1044)rt_nil_check(F->y_505)).result))).kind == (((rt_int)2LL))))))) {
f_fail_23((*(P1034)rt_nil_check(F->d_504)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a foreign function returns an INT, FLOAT, BOOL or ENUM value", 60); b_; }));
}
f_put_27(g_out_protos_1083, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("extern ", 7), f_ctype_234((*(P1044)rt_nil_check(F->y_505)).result)), rt_str(" ", 1)), F->cn_1889), rt_str("(", 1)), (((P1027)rt_nil_check(F->proto_1887))->all)), rt_str(");", 2)); b_; }));
if (((*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_505)).result)).kind == (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->cn_1889, rt_str("(", 1)), (((P1027)rt_nil_check(F->args_1888))->all)), rt_str(");", 2)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->cn_1889), rt_str("(", 1)), (((P1027)rt_nil_check(F->args_1888))->all)), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_508(P1034 d_507) {
  struct f_declare_subprogram_508fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_507 = d_507;
f_define_168(f_build_subprogram_510(F->d_507), (*(P1034)rt_nil_check(F->d_507)).line);
ret_:
  RT_FPOP();
  return;
}

static P1044 f_build_subprogram_510(P1034 d_509) {
  struct f_build_subprogram_510fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_509 = d_509;
F->y_1890 = NULL;
F->p_1891 = NULL;
F->p_1891 = (*(P1034)rt_nil_check(F->d_509)).a;
F->tail_1892 = NULL;
if (((*(P1034)rt_nil_check(F->d_509)).kind == (((rt_int)46LL)))) {
F->y_1890 = f_new_sym_181((((rt_int)3LL)), (*(P1034)rt_nil_check(F->d_509)).name);
} else if (((*(P1034)rt_nil_check(F->d_509)).kind == (((rt_int)50LL)))) {
F->y_1890 = f_new_sym_181((((rt_int)9LL)), (*(P1034)rt_nil_check(F->d_509)).name);
} else {
F->y_1890 = f_new_sym_181((((rt_int)4LL)), (*(P1034)rt_nil_check(F->d_509)).name);
}
while ((F->p_1891 != NULL)) {
F->pm_1893 = NULL;
if ((((*(P1034)rt_nil_check(F->d_509)).kind == (((rt_int)50LL))) && ((*(P1034)rt_nil_check(F->p_1891)).ival == (((rt_int)3LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->d_509)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a task may not have OUT formal parameters", 41); b_; }));
}
{ R1047 *cell1894 = rt_alloc(sizeof(R1047));
(*cell1894).name = NULL;
(*cell1894).t = NULL;
(*cell1894).c = NULL;
(*cell1894).cfield = NULL;
(*cell1894).next = NULL;
F->pm_1893 = cell1894;
}
(*(P1046)rt_nil_check(F->pm_1893)).name = (*(P1034)rt_nil_check(F->p_1891)).name;
(*(P1046)rt_nil_check(F->pm_1893)).mode = (*(P1034)rt_nil_check(F->p_1891)).ival;
(*(P1046)rt_nil_check(F->pm_1893)).t = f_resolve_subtype_268((*(P1034)rt_nil_check(F->p_1891)).a, &(*(P1046)rt_nil_check(F->pm_1893)).c);
(*(P1046)rt_nil_check(F->pm_1893)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1891)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1892 == NULL)) {
(*(P1044)rt_nil_check(F->y_1890)).params = F->pm_1893;
} else {
(*(P1046)rt_nil_check(F->tail_1892)).next = F->pm_1893;
}
F->tail_1892 = F->pm_1893;
F->p_1891 = (*(P1034)rt_nil_check(F->p_1891)).next;
}
(*(P1044)rt_nil_check(F->y_1890)).result = g_ty_void_1124;
if (((*(P1034)rt_nil_check(F->d_509)).b != NULL)) {
F->rc_1895 = NULL;
F->pm_1896 = NULL;
F->pm_1896 = (*(P1044)rt_nil_check(F->y_1890)).params;
F->saved_1897 = NULL;
F->saved_1897 = g_code_1088;
g_code_1088 = f_new_buffer_24();
f_open_scope_177();
while ((F->pm_1896 != NULL)) {
F->z_1898 = NULL;
F->z_1898 = f_new_sym_181((((rt_int)2LL)), (*(P1046)rt_nil_check(F->pm_1896)).name);
(*(P1044)rt_nil_check(F->z_1898)).t = (*(P1046)rt_nil_check(F->pm_1896)).t;
(*(P1044)rt_nil_check(F->z_1898)).c = (*(P1046)rt_nil_check(F->pm_1896)).c;
(*(P1044)rt_nil_check(F->z_1898)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_168(F->z_1898, (*(P1034)rt_nil_check(F->d_509)).line);
F->pm_1896 = (*(P1046)rt_nil_check(F->pm_1896)).next;
}
(*(P1044)rt_nil_check(F->y_1890)).result = f_resolve_subtype_268((*(P1034)rt_nil_check(F->d_509)).b, &F->rc_1895);
f_close_scope_178();
g_code_1088 = F->saved_1897;
}
(*(P1044)rt_nil_check(F->y_1890)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_760(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_509)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P1044)rt_nil_check(F->y_1890)).decl = F->d_509;
(*(P1044)rt_nil_check(F->y_1890)).level = g_cur_level_1091;
if (((*(P1034)rt_nil_check(F->d_509)).kind == (((rt_int)50LL)))) {
f_put_27(g_out_globals_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_1890)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1890;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_513(P1027 pr_511, rstr *p_512) {
  struct f_has_pragmat_513fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_511 = pr_511;
F->p_512 = p_512;
if ((F->pr_511 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1900 = ((rt_int)1LL), hi1901 = rt_sub(((rt_int)(((((P1027)rt_nil_check(F->pr_511))->all)).len)), ((rt_int)(((*F->p_512)).len)));
for (rt_int it1902 = lo1900; it1902 <= hi1901; it1902++) {
F->i_1899 = it1902;
if (((rt_str_eq(rt_str_slice((((P1027)rt_nil_check(F->pr_511))->all), F->i_1899, rt_sub(rt_add(F->i_1899, ((rt_int)(((*F->p_512)).len))), ((rt_int)1LL))), (*F->p_512)) && (rt_str_get((((P1027)rt_nil_check(F->pr_511))->all), rt_add(F->i_1899, ((rt_int)(((*F->p_512)).len)))) == 59)) && ((F->i_1899 == ((rt_int)1LL)) || (rt_str_get((((P1027)rt_nil_check(F->pr_511))->all), rt_sub(F->i_1899, ((rt_int)1LL))) == 59)))) {
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

static P1027 f_suppressing_515(P1027 pr_514) {
  struct f_suppressing_515fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_514 = pr_514;
F->r_1903 = NULL;
F->r_1903 = g_suppress_1108;
F->i_1904 = ((rt_int)1LL);
if ((F->pr_514 == NULL)) {
F->result_ = F->r_1903;
goto ret_;
}
if ((F->r_1903 == NULL)) {
F->r_1903 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(F->i_1904, ((rt_int)9LL)) <= ((rt_int)(((((P1027)rt_nil_check(F->pr_514))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P1027)rt_nil_check(F->pr_514))->all), F->i_1904, rt_add(F->i_1904, ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1905 = rt_add(F->i_1904, ((rt_int)9LL));
F->k_1906 = F->j_1905;
while ((rt_str_get((((P1027)rt_nil_check(F->pr_514))->all), F->k_1906) != 41)) {
if ((rt_str_get((((P1027)rt_nil_check(F->pr_514))->all), F->k_1906) == 44)) {
F->r_1903 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_1903))->all), rt_str_slice((((P1027)rt_nil_check(F->pr_514))->all), F->j_1905, rt_sub(F->k_1906, ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1905 = rt_add(F->k_1906, ((rt_int)1LL));
}
F->k_1906 = rt_add(F->k_1906, ((rt_int)1LL));
}
F->r_1903 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_1903))->all), rt_str_slice((((P1027)rt_nil_check(F->pr_514))->all), F->j_1905, rt_sub(F->k_1906, ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1904 = F->k_1906;
}
F->i_1904 = rt_add(F->i_1904, ((rt_int)1LL));
}
F->result_ = F->r_1903;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_suppressed_517(rstr *x_516) {
  struct f_suppressed_517fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_516 = x_516;
F->w_1907 = rt_str_new(rt_add(((rt_int)(((*F->x_516)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1907, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_516)), rt_str(" ", 1)));
if ((g_suppress_1108 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1909 = ((rt_int)1LL), hi1910 = rt_add(rt_sub(((rt_int)(((((P1027)rt_nil_check(g_suppress_1108))->all)).len)), ((rt_int)((F->w_1907).len))), ((rt_int)1LL));
for (rt_int it1911 = lo1909; it1911 <= hi1910; it1911++) {
F->i_1908 = it1911;
if (rt_str_eq(rt_str_slice((((P1027)rt_nil_check(g_suppress_1108))->all), F->i_1908, rt_sub(rt_add(F->i_1908, ((rt_int)((F->w_1907).len))), ((rt_int)1LL))), F->w_1907)) {
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

static void f_element_519(P1034 e_518) {
  struct f_element_519fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_518 = e_518;
F->saved_1912 = NULL;
F->saved_1912 = g_suppress_1108;
g_suppress_1108 = f_suppressing_515((*(P1034)rt_nil_check(F->e_518)).prags);
f_element1_521(F->e_518);
g_suppress_1108 = F->saved_1912;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_521(P1034 e_520) {
  struct f_element1_521fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_520 = e_520;
F->k_1913 = (*(P1034)rt_nil_check(F->e_520)).kind;
if (((F->k_1913 == (((rt_int)47LL))) && (f_lookup_decl_165(F->e_520) != NULL))) {
f_elaborate_pending_449(f_lookup_decl_165(F->e_520));
} else if (((((F->k_1913 == (((rt_int)48LL))) && ((*(P1034)rt_nil_check(F->e_520)).flag != ((rt_int)1LL))) && ((*(P1034)rt_nil_check(F->e_520)).flag != ((rt_int)3LL))) && ((*(P1034)rt_nil_check(F->e_520)).eline == ((rt_int)0LL)))) {
f_gen_expose_478(F->e_520);
} else if (((F->k_1913 == (((rt_int)48LL))) && (((*(P1034)rt_nil_check(F->e_520)).flag == ((rt_int)1LL)) || ((*(P1034)rt_nil_check(F->e_520)).flag == ((rt_int)3LL))))) {
f_gen_expose_478(F->e_520);
} else if ((((F->k_1913 == (((rt_int)45LL))) || (F->k_1913 == (((rt_int)46LL)))) || (F->k_1913 == (((rt_int)50LL))))) {
f_subprogram_578(F->e_520);
} else if ((F->k_1913 == (((rt_int)51LL)))) {
F->g_1914 = NULL;
F->g_1914 = f_lookup_decl_165(F->e_520);
if ((F->g_1914 != NULL)) {
{ P1048 cell1915 = rt_alloc(sizeof *cell1915);
rt_int pv1916 = (((rt_int)4093LL));
cell1915->p_n = pv1916;
cell1915->all.lo = ((rt_int)0LL); cell1915->all.hi = pv1916;
cell1915->all.lo2 = cell1915->all.hi2 = 1;
cell1915->all.p = rt_alloc(sizeof(P1044) * (size_t)(RT_CNT(cell1915->all)) + 1);
for (rt_int i1917 = 0; i1917 < (RT_CNT(cell1915->all)); i1917++) {
cell1915->all.p[i1917] = NULL;
}
(*(P1044)rt_nil_check(F->g_1914)).env = cell1915;
}
{ rt_int lo1919 = ((rt_int)0LL), hi1920 = (((rt_int)4093LL));
for (rt_int it1921 = lo1919; it1921 <= hi1920; it1921++) {
F->i_1918 = it1921;
(((P1048)rt_nil_check((*(P1044)rt_nil_check(F->g_1914)).env))->all).p[(rt_index(F->i_1918, (((P1048)rt_nil_check((*(P1044)rt_nil_check(F->g_1914)).env))->all).lo, (((P1048)rt_nil_check((*(P1044)rt_nil_check(F->g_1914)).env))->all).hi) - (((P1048)rt_nil_check((*(P1044)rt_nil_check(F->g_1914)).env))->all).lo)] = ({ A1050 b_ = (((P1048)rt_nil_check(g_table_1074))->all); b_.p[(rt_index(F->i_1918, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((F->k_1913 == (((rt_int)43LL))) && ((*(P1034)rt_nil_check(F->e_520)).c != NULL)) && ((*(P1034)rt_nil_check(F->e_520)).b == NULL))) {
F->c_1922 = NULL;
F->st_1923 = NULL;
F->st_1923 = f_nn_65((((rt_int)80LL)), (*(P1034)rt_nil_check(F->e_520)).line);
F->t_1924 = NULL;
(*(P1034)rt_nil_check(F->st_1923)).name = (*(P1034)rt_nil_check(F->e_520)).name;
F->t_1924 = f_resolve_subtype_268(F->st_1923, &F->c_1922);
} else if ((((((F->k_1913 == (((rt_int)49LL))) || (F->k_1913 == (((rt_int)42LL)))) || (F->k_1913 == (((rt_int)43LL)))) || (F->k_1913 == (((rt_int)47LL)))) || (F->k_1913 == (((rt_int)48LL))))) {
goto ret_;
} else if ((F->k_1913 == (((rt_int)44LL)))) {
f_finish_ptr_480((*(P1044)rt_nil_check(f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_520)).name))->all)))).t);
} else if ((F->k_1913 == (((rt_int)40LL)))) {
f_var_decl_529(F->e_520);
} else if (((F->k_1913 == (((rt_int)41LL))) && ((*(P1034)rt_nil_check(F->e_520)).flag == ((rt_int)0LL)))) {
f_const_decl_576(F->e_520);
} else if ((F->k_1913 == (((rt_int)41LL)))) {
goto ret_;
} else if ((F->k_1913 == (((rt_int)33LL)))) {
F->t_1925 = NULL;
F->c_1926 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_520)).a, g_ty_bool_1120, &F->t_1925));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1926), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_613(F->e_520);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_524(rstr *name_522, P1040 t_523) {
  struct f_storage_524fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_522 = name_522;
F->t_523 = t_523;
if ((!g_in_func_1090)) {
F->g_1927 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_522))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234(F->t_523)), rt_str(" ", 1)), F->g_1927), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_1098, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1927), rt_str(");", 2)); b_; }));
g_st_field_1096 = f_mk_3(&F->g_1927);
F->result_ = F->g_1927;
goto ret_;
}
{
F->f_1928 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_522)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1089, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234(F->t_523)), rt_str(" ", 1)), F->f_1928), rt_str(";", 1)); b_; }));
g_st_field_1096 = f_mk_3(&F->f_1928);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1928);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_527(P1044 y_525, rstr *access_526) {
  struct f_bind_527fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_525 = y_525;
F->access_526 = access_526;
if (g_in_func_1090) {
(*(P1044)rt_nil_check(F->y_525)).level = g_cur_level_1091;
(*(P1044)rt_nil_check(F->y_525)).access = g_st_field_1096;
} else {
(*(P1044)rt_nil_check(F->y_525)).level = ((rt_int)0LL);
(*(P1044)rt_nil_check(F->y_525)).access = f_mk_3(&(*F->access_526));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_529(P1034 d_528) {
  struct f_var_decl_529fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_528 = d_528;
if (((*(P1034)rt_nil_check(F->d_528)).ival == ((rt_int)2LL))) {
f_located_var_531(F->d_528);
} else {
f_var_decl2_570(F->d_528);
}
ret_:
  RT_FPOP();
  return;
}

static void f_located_var_531(P1034 d_530) {
  struct f_located_var_531fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_530 = d_530;
F->c_1929 = NULL;
F->at_1930 = NULL;
F->t_1931 = NULL;
F->t_1931 = f_resolve_subtype_268((*(P1034)rt_nil_check(F->d_530)).a, &F->c_1929);
F->y_1932 = NULL;
F->y_1932 = f_new_sym_181((((rt_int)1LL)), (*(P1034)rt_nil_check(F->d_530)).name);
F->addr_1933 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->d_530)).c, g_ty_int_1119, &F->at_1930));
F->av_1934 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("loc", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_int", 6); b_; })));
F->af_1935 = rt_str_copy((((P1027)rt_nil_check(g_st_field_1096))->all));
f_check_type_232(F->at_1930, g_ty_int_1119, (*(P1034)rt_nil_check(F->d_530)).line);
F->c_1929 = f_freeze_209(F->c_1929, F->t_1931);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->av_1934, rt_str(" = ", 3)), F->addr_1933), rt_str(";", 1)); b_; }));
if ((((*(P1040)rt_nil_check(F->t_1931)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->t_1931)).repn != NULL))) {
F->access_1936 = rt_str_copy(f_storage_524(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_530)).name))->all), F->t_1931));
g_mark_uninit_1110 = (!f_suppressed_517(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; })));
f_init_storage_346(&F->access_1936, F->t_1931, F->c_1929);
g_mark_uninit_1110 = 0;
(*(P1044)rt_nil_check(F->y_1932)).t = F->t_1931;
(*(P1044)rt_nil_check(F->y_1932)).c = F->c_1929;
f_bind_527(F->y_1932, &F->access_1936);
if (g_in_func_1090) {
(*(P1044)rt_nil_check(F->y_1932)).loc = f_mk_3(&F->af_1935);
} else {
(*(P1044)rt_nil_check(F->y_1932)).loc = f_mk_3(&F->av_1934);
}
f_define_168(F->y_1932, (*(P1034)rt_nil_check(F->d_530)).line);
if (((*(P1034)rt_nil_check(F->d_530)).b != NULL)) {
F->vt_1937 = NULL;
F->v_1938 = rt_str_copy(f_gexpr_in_816((*(P1034)rt_nil_check(F->d_530)).b, F->t_1931, F->c_1929, &F->vt_1937));
f_check_type_232(F->vt_1937, F->t_1931, (*(P1034)rt_nil_check(F->d_530)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_416(&F->access_1936, F->t_1931, &F->v_1938, F->c_1929); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_534(F->y_1932, 1); b_; }));
}
goto ret_;
}
{
F->pv_1939 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_530)).name))->all)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_ctype_234(F->t_1931), rt_str(" *", 2)); b_; })));
F->pf_1940 = rt_str_copy((((P1027)rt_nil_check(g_st_field_1096))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->pv_1939, rt_str(" = (", 4)), f_ctype_234(F->t_1931)), rt_str(" *)rt_r_mem_at(", 15)), F->av_1934), rt_str(", sizeof(", 9)), f_ctype_234(F->t_1931)), rt_str("));", 3)); b_; }));
(*(P1044)rt_nil_check(F->y_1932)).t = F->t_1931;
(*(P1044)rt_nil_check(F->y_1932)).c = F->c_1929;
if (g_in_func_1090) {
(*(P1044)rt_nil_check(F->y_1932)).level = g_cur_level_1091;
(*(P1044)rt_nil_check(F->y_1932)).access = f_mk_3(&F->pf_1940);
(*(P1044)rt_nil_check(F->y_1932)).byref = 1;
} else {
(*(P1044)rt_nil_check(F->y_1932)).level = ((rt_int)0LL);
(*(P1044)rt_nil_check(F->y_1932)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1939), rt_str(")", 1)); b_; }));
}
g_mark_uninit_1110 = (!f_suppressed_517(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; })));
f_init_storage_346(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1939), rt_str(")", 1)); b_; }), F->t_1931, F->c_1929);
g_mark_uninit_1110 = 0;
f_define_168(F->y_1932, (*(P1034)rt_nil_check(F->d_530)).line);
if (((*(P1034)rt_nil_check(F->d_530)).b != NULL)) {
F->vt_1941 = NULL;
F->v_1942 = rt_str_copy(f_gexpr_in_816((*(P1034)rt_nil_check(F->d_530)).b, F->t_1931, F->c_1929, &F->vt_1941));
f_check_type_232(F->vt_1941, F->t_1931, (*(P1034)rt_nil_check(F->d_530)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_416(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1939), rt_str(")", 1)); b_; }), F->t_1931, &F->v_1942, F->c_1929); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_rep_sync_534(P1044 y_532, int pack_533) {
  struct f_rep_sync_534fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_532 = y_532;
F->pack_533 = pack_533;
F->lv_1943 = rt_str_copy(f_access_of_752(F->y_532));
F->base_1944 = rt_str_copy(f_cbound_access_536(F->y_532));
F->saved_1945 = NULL;
F->saved_1945 = g_psub_1095;
F->p_1946 = NULL;
F->p_1946 = (*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_532)).t)).tparams;
F->r_1947 = NULL;
F->inner_1948 = NULL;
F->inner_1948 = f_mk_3(&F->lv_1943);
if (((*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_532)).t)).tparams != NULL)) {
F->inner_1948 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->lv_1943, rt_str(".all", 4)); b_; }));
}
f_open_scope_177();
while ((F->p_1946 != NULL)) {
F->z_1949 = NULL;
F->z_1949 = f_new_sym_181((((rt_int)2LL)), (*(P1034)rt_nil_check(F->p_1946)).name);
(*(P1044)rt_nil_check(F->z_1949)).t = f_tparam_type_357((*(P1044)rt_nil_check(F->y_532)).t, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1946)).name))->all));
(*(P1044)rt_nil_check(F->z_1949)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->lv_1943), rt_str(".p_", 3)), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_1946)).name))->all))), rt_str(")", 1)); b_; }));
f_define_168(F->z_1949, (*(P1044)rt_nil_check(F->y_532)).decl_line);
F->p_1946 = (*(P1034)rt_nil_check(F->p_1946)).next;
}
F->r_1947 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_code_556((*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_532)).t)).under, (*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_532)).t)).elemcons, (*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_532)).t)).repn, &(((P1027)rt_nil_check(F->inner_1948))->all), &F->base_1944, F->pack_533); b_; }));
f_close_scope_178();
g_psub_1095 = F->saved_1945;
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ ", 2), (((P1027)rt_nil_check(F->r_1947))->all)), rt_str(" }", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cbound_access_536(P1044 y_535) {
  struct f_cbound_access_536fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_535 = y_535;
F->c_1950 = NULL;
F->c_1950 = f_new_cons_184();
(*(P1036)rt_nil_check(F->c_1950)).dyn = ((*(P1044)rt_nil_check(F->y_535)).level > ((rt_int)0LL));
(*(P1036)rt_nil_check(F->c_1950)).lvl = (*(P1044)rt_nil_check(F->y_535)).level;
F->result_ = f_cbound_191(F->c_1950, &(((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_535)).loc))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_rep_size_540(P1034 items_537, P1040 t_538, P1036 c_539) {
  struct f_rep_size_540fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_537 = items_537;
F->t_538 = t_538;
F->c_539 = c_539;
F->it_1951 = NULL;
F->it_1951 = f_rep_find_543(F->items_537, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SIZE", 4); b_; }));
F->at_1952 = NULL;
if ((F->it_1951 != NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_805((*(P1034)rt_nil_check(F->it_1951)).a, g_ty_int_1119, &F->at_1952)), rt_str(")", 1));
goto ret_;
}
F->result_ = f_itos_7(f_default_bits_549(F->t_538, F->c_539));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_rep_find_543(P1034 items_541, rstr *w_542) {
  struct f_rep_find_543fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_541 = items_541;
F->w_542 = w_542;
F->it_1953 = NULL;
F->it_1953 = F->items_541;
while ((F->it_1953 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->it_1953)).name))->all), (*F->w_542))) {
F->result_ = F->it_1953;
goto ret_;
}
F->it_1953 = (*(P1034)rt_nil_check(F->it_1953)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_rep_comp_546(P1034 items_544, rstr *name_545) {
  struct f_rep_comp_546fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_544 = items_544;
F->name_545 = name_545;
F->r_1954 = NULL;
F->r_1954 = f_rep_find_543(F->items_544, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RECORD", 6); b_; }));
F->comp_1955 = NULL;
if ((F->r_1954 == NULL)) {
F->r_1954 = f_rep_find_543(F->items_544, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNION", 5); b_; }));
}
if ((F->r_1954 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->comp_1955 = (*(P1034)rt_nil_check(F->r_1954)).c;
while ((F->comp_1955 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->comp_1955)).name))->all), (*F->name_545))) {
F->result_ = (*(P1034)rt_nil_check(F->comp_1955)).a;
goto ret_;
}
F->comp_1955 = (*(P1034)rt_nil_check(F->comp_1955)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_default_bits_549(P1040 t_547, P1036 c_548) {
  struct f_default_bits_549fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_547 = t_547;
F->c_548 = c_548;
if ((((*(P1040)rt_nil_check(F->t_547)).kind == (((rt_int)7LL))) || ((*(P1040)rt_nil_check(F->t_547)).kind == (((rt_int)17LL))))) {
F->f_1956 = NULL;
F->f_1956 = (*(P1040)rt_nil_check(F->t_547)).fields;
F->n_1957 = ((rt_int)0LL);
if (((*(P1040)rt_nil_check(F->t_547)).kind == (((rt_int)17LL)))) {
F->n_1957 = f_needed_bits_326((*(P1040)rt_nil_check(F->t_547)).elem, NULL);
}
while ((F->f_1956 != NULL)) {
F->n_1957 = rt_add(F->n_1957, f_default_bits_549((*(P1042)rt_nil_check(F->f_1956)).t, (*(P1042)rt_nil_check(F->f_1956)).c));
F->f_1956 = (*(P1042)rt_nil_check(F->f_1956)).next;
}
F->result_ = F->n_1957;
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->t_547)).kind == (((rt_int)4LL))) && f_same_221(F->t_547, g_ty_ascii_1122))) {
F->result_ = ((rt_int)8LL);
goto ret_;
} else if ((f_needed_bits_326(F->t_547, F->c_548) > ((rt_int)0LL))) {
F->result_ = f_needed_bits_326(F->t_547, F->c_548);
goto ret_;
}
F->result_ = ((rt_int)64LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_rep_code_556(P1040 t_550, P1036 c_551, P1034 items_552, rstr *lval_553, rstr *addr_554, int pack_555) {
  struct f_rep_code_556fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_550 = t_550;
F->c_551 = c_551;
F->items_552 = items_552;
F->lval_553 = lval_553;
F->addr_554 = addr_554;
F->pack_555 = pack_555;
F->size_1958 = rt_str_copy(f_rep_size_540(F->items_552, F->t_550, F->c_551));
if ((((*(P1040)rt_nil_check(F->t_550)).kind == (((rt_int)7LL))) || ((*(P1040)rt_nil_check(F->t_550)).kind == (((rt_int)17LL))))) {
F->f_1959 = NULL;
F->f_1959 = (*(P1040)rt_nil_check(F->t_550)).fields;
F->r_1960 = NULL;
F->r_1960 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->off_1961 = NULL;
F->off_1961 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->i_1962 = ((rt_int)0LL);
if (((*(P1040)rt_nil_check(F->t_550)).kind == (((rt_int)17LL)))) {
F->ti_1963 = NULL;
F->ti_1963 = f_rep_comp_546(F->items_552, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TAG", 3); b_; }));
F->tsize_1964 = NULL;
F->tsize_1964 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(f_needed_bits_326((*(P1040)rt_nil_check(F->t_550)).elem, NULL)); b_; }));
F->toff_1965 = NULL;
F->toff_1965 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
if (((F->ti_1963 != NULL) && (f_rep_find_543(F->ti_1963, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SIZE", 4); b_; })) != NULL))) {
F->tsize_1964 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_size_540(F->ti_1963, (*(P1040)rt_nil_check(F->t_550)).elem, NULL); b_; }));
}
if (((F->ti_1963 != NULL) && (f_rep_find_543(F->ti_1963, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })) != NULL))) {
F->at_1966 = NULL;
F->toff_1965 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_805((*(P1034)rt_nil_check(f_rep_find_543(F->ti_1963, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })))).a, g_ty_int_1119, &F->at_1966)), rt_str(")", 1)); b_; }));
}
if (F->pack_555) {
F->r_1960 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_mem_put(", 13), (*F->addr_554)), rt_str(" + ", 3)), (((P1027)rt_nil_check(F->toff_1965))->all)), rt_str(", ", 2)), (((P1027)rt_nil_check(F->tsize_1964))->all)), rt_str(", (uint64_t)", 12)), (*F->lval_553)), rt_str(".tag);", 6)); b_; }));
} else {
F->r_1960 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_553), rt_str(".tag = (int)rt_r_mem_get(", 25)), (*F->addr_554)), rt_str(" + ", 3)), (((P1027)rt_nil_check(F->toff_1965))->all)), rt_str(", ", 2)), (((P1027)rt_nil_check(F->tsize_1964))->all)), rt_str(", 0);", 5)); b_; }));
}
F->off_1961 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1027)rt_nil_check(F->toff_1965))->all)), rt_str(" + ", 3)), (((P1027)rt_nil_check(F->tsize_1964))->all)), rt_str(")", 1)); b_; }));
}
while ((F->f_1959 != NULL)) {
F->ci_1967 = NULL;
F->ci_1967 = f_rep_comp_546(F->items_552, &(((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_1959)).name))->all));
F->fo_1968 = NULL;
F->fo_1968 = F->off_1961;
F->fl_1969 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_553), rt_str(".", 1)), f_union_part_558(F->t_550)), f_field_c_17(&(((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_1959)).name))->all))));
if (((F->ci_1967 != NULL) && (f_rep_find_543(F->ci_1967, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })) != NULL))) {
F->at_1970 = NULL;
F->fo_1968 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_805((*(P1034)rt_nil_check(f_rep_find_543(F->ci_1967, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })))).a, g_ty_int_1119, &F->at_1970)), rt_str(")", 1)); b_; }));
}
{
F->part_1971 = rt_str_copy(f_rep_code_556((*(P1042)rt_nil_check(F->f_1959)).t, (*(P1042)rt_nil_check(F->f_1959)).c, F->ci_1967, &F->fl_1969, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->addr_554), rt_str(" + ", 3)), (((P1027)rt_nil_check(F->fo_1968))->all)); b_; }), F->pack_555));
if (((*(P1040)rt_nil_check(F->t_550)).kind == (((rt_int)17LL)))) {
F->r_1960 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_1960))->all), rt_str(" if (", 5)), (*F->lval_553)), rt_str(".tag == ", 8)), f_itos_7(F->i_1962)), rt_str(") { ", 4)), F->part_1971), rt_str(" }", 2)); b_; }));
} else {
F->r_1960 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_1960))->all), rt_str(" ", 1)), F->part_1971); b_; }));
}
}
if (((*(P1040)rt_nil_check(F->t_550)).kind == (((rt_int)7LL)))) {
F->off_1961 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1027)rt_nil_check(F->fo_1968))->all)), rt_str(" + ", 3)), f_rep_size_540(F->ci_1967, (*(P1042)rt_nil_check(F->f_1959)).t, (*(P1042)rt_nil_check(F->f_1959)).c)), rt_str(")", 1)); b_; }));
}
F->i_1962 = rt_add(F->i_1962, ((rt_int)1LL));
F->f_1959 = (*(P1042)rt_nil_check(F->f_1959)).next;
}
F->result_ = (((P1027)rt_nil_check(F->r_1960))->all);
goto ret_;
} else if (((*(P1040)rt_nil_check(F->t_550)).kind == (((rt_int)6LL)))) {
F->ai_1972 = NULL;
F->ai_1972 = f_rep_find_543(F->items_552, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ARRAY", 5); b_; }));
F->ei_1973 = NULL;
if ((F->ai_1972 != NULL)) {
F->ei_1973 = (*(P1034)rt_nil_check(F->ai_1972)).c;
}
{
F->es_1974 = rt_str_copy(f_rep_size_540(F->ei_1973, (*(P1040)rt_nil_check(F->t_550)).elem, (*(P1040)rt_nil_check(F->t_550)).elemcons));
F->iv_1975 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ri", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->iv_1975), rt_str(" = 0; ", 6)), F->iv_1975), rt_str(" < ", 3)), f_acnt_249(F->t_550, &(*F->lval_553))), rt_str("; ", 2)), F->iv_1975), rt_str("++) { ", 6)), f_rep_code_556((*(P1040)rt_nil_check(F->t_550)).elem, (*(P1040)rt_nil_check(F->t_550)).elemcons, F->ei_1973, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_553), rt_str(".p[", 3)), F->iv_1975), rt_str("]", 1)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->addr_554), rt_str(" + ", 3)), F->iv_1975), rt_str(" * ", 3)), F->es_1974); b_; }), F->pack_555)), rt_str(" }", 2));
goto ret_;
}
} else if (((*(P1040)rt_nil_check(F->t_550)).kind == (((rt_int)5LL)))) {
F->iv_1976 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ri", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->iv_1976), rt_str(" = 0; ", 6)), F->iv_1976), rt_str(" < ", 3)), (*F->lval_553)), rt_str(".len; ", 6)), F->iv_1976), rt_str("++) { ", 6)), f_rep_scalar_565(f_str_elem_218(F->t_550), NULL, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_553), rt_str(".p[", 3)), F->iv_1976), rt_str("]", 1)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->addr_554), rt_str(" + ", 3)), F->iv_1976), rt_str(" * 8", 4)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("8", 1); b_; }), F->pack_555)), rt_str(" }", 2));
goto ret_;
}
F->result_ = f_rep_scalar_565(F->t_550, F->c_551, &(*F->lval_553), &(*F->addr_554), &F->size_1958, F->pack_555);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_union_part_558(P1040 t_557) {
  struct f_union_part_558fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_557 = t_557;
if (((*(P1040)rt_nil_check(F->t_557)).kind == (((rt_int)17LL)))) {
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

static rstr f_rep_scalar_565(P1040 t_559, P1036 c_560, rstr *lval_561, rstr *addr_562, rstr *size_563, int pack_564) {
  struct f_rep_scalar_565fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_559 = t_559;
F->c_560 = c_560;
F->lval_561 = lval_561;
F->addr_562 = addr_562;
F->size_563 = size_563;
F->pack_564 = pack_564;
F->signed_1977 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->signed_1977, rt_str("0", 1));
if ((((*(P1040)rt_nil_check(F->t_559)).kind == (((rt_int)1LL))) && (!(((F->c_560 != NULL) && (*(P1036)rt_nil_check(F->c_560)).hasm) && ((*(P1036)rt_nil_check(F->c_560)).mlo >= ((rt_int)0LL)))))) {
rt_str_assign(&F->signed_1977, rt_str("1", 1));
}
if (((*(P1040)rt_nil_check(F->t_559)).kind == (((rt_int)3LL)))) {
if (F->pack_564) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_mem_putf(", 14), (*F->addr_562)), rt_str(", ", 2)), (*F->size_563)), rt_str(", ", 2)), (*F->lval_561)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_561), rt_str(" = rt_r_mem_getf(", 17)), (*F->addr_562)), rt_str(", ", 2)), (*F->size_563)), rt_str(");", 2));
goto ret_;
} else if (F->pack_564) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (!rt_r_undef_", 16), f_kind_name_228(f_base_of_223(F->t_559))), rt_str("(", 1)), (*F->lval_561)), rt_str(")) rt_r_mem_put(", 16)), (*F->addr_562)), rt_str(", ", 2)), (*F->size_563)), rt_str(", rt_r_fits((rt_int)(", 21)), (*F->lval_561)), rt_str("), ", 3)), (*F->size_563)), rt_str(", ", 2)), F->signed_1977), rt_str("));", 3));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_561), rt_str(" = rt_r_mem_get(", 16)), (*F->addr_562)), rt_str(", ", 2)), (*F->size_563)), rt_str(", ", 2)), F->signed_1977), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_max_range_568(P1040 t_566, P1036 c_567) {
  struct f_max_range_568fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_566 = t_566;
F->c_567 = c_567;
if ((F->c_567 == NULL)) {
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->t_566)).kind == (((rt_int)3LL))) && ((*(P1036)rt_nil_check(F->c_567)).prec != NULL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_maxprec(", 13), (((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_567)).prec))->all)), rt_str(");", 2)); b_; }));
}
if ((((*(P1040)rt_nil_check(F->t_566)).kind == (((rt_int)3LL))) && ((*(P1036)rt_nil_check(F->c_567)).lo != NULL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_maxrange_f(", 16), f_clo_193(F->c_567)), rt_str(", ", 2)), f_chi_195(F->c_567)), rt_str(");", 2)); b_; }));
} else if (((((*(P1040)rt_nil_check(F->t_566)).kind == (((rt_int)1LL))) && ((*(P1036)rt_nil_check(F->c_567)).lo != NULL)) && (!(*(P1036)rt_nil_check(F->c_567)).hasm))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_maxrange_i(", 16), f_clo_193(F->c_567)), rt_str(", ", 2)), f_chi_195(F->c_567)), rt_str(");", 2)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl2_570(P1034 d_569) {
  struct f_var_decl2_570fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_569 = d_569;
F->c_1978 = NULL;
F->t_1979 = NULL;
F->t_1979 = f_resolve_subtype_268((*(P1034)rt_nil_check(F->d_569)).a, &F->c_1978);
F->y_1980 = NULL;
F->y_1980 = f_new_sym_181((((rt_int)1LL)), (*(P1034)rt_nil_check(F->d_569)).name);
F->access_1981 = rt_str_copy(f_storage_524(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_569)).name))->all), F->t_1979));
F->c_1978 = f_freeze_209(F->c_1978, F->t_1979);
f_max_range_568(F->t_1979, F->c_1978);
if (((((*(P1040)rt_nil_check(F->t_1979)).kind == (((rt_int)8LL))) && (F->c_1978 != NULL)) && ((*(P1036)rt_nil_check(F->c_1978)).args != NULL))) {
F->c_1978 = f_freeze_args_496(F->c_1978, F->t_1979, (*(P1034)rt_nil_check(F->d_569)).line);
}
g_mark_uninit_1110 = (!f_suppressed_517(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; })));
f_init_storage_346(&F->access_1981, F->t_1979, F->c_1978);
g_mark_uninit_1110 = 0;
if (((*(P1034)rt_nil_check(F->d_569)).ival == ((rt_int)1LL))) {
F->it_1982 = NULL;
F->n_1983 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->d_569)).c, g_ty_int_1119, &F->it_1982));
if (((*(P1040)rt_nil_check(F->t_1979)).kind != (((rt_int)12LL)))) {
f_fail_23((*(P1034)rt_nil_check(F->d_569)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_221((*(P1040)rt_nil_check(F->t_1979)).elem, g_ty_ascii_1122)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1981), rt_str(", ", 2)), F->n_1983), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1981), rt_str(", ", 2)), F->n_1983), rt_str(", 0);", 5)); b_; }));
}
}
if (((*(P1034)rt_nil_check(F->d_569)).b != NULL)) {
F->vt_1984 = NULL;
F->v_1985 = rt_str_copy(f_gexpr_in_816((*(P1034)rt_nil_check(F->d_569)).b, F->t_1979, F->c_1978, &F->vt_1984));
f_check_type_232(F->vt_1984, F->t_1979, (*(P1034)rt_nil_check(F->d_569)).line);
f_ptr_subtype_check_500(F->t_1979, F->c_1978, (*(P1034)rt_nil_check(F->d_569)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_416(&F->access_1981, F->t_1979, &F->v_1985, F->c_1978); b_; }));
}
(*(P1044)rt_nil_check(F->y_1980)).t = F->t_1979;
(*(P1044)rt_nil_check(F->y_1980)).c = F->c_1978;
f_bind_527(F->y_1980, &F->access_1981);
f_define_168(F->y_1980, (*(P1034)rt_nil_check(F->d_569)).line);
if (f_needs_fin_351(F->t_1979)) {
f_open_fin_572(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_354(&F->access_1981, F->t_1979); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_572(rstr *fc_571) {
  struct f_open_fin_572fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_571 = fc_571;
F->f_1986 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1987 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1986), rt_str("; if (RT_TRY(", 13)), F->f_1986), rt_str(")) {", 4)); b_; }));
f_push_cleanup_610(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1986), rt_str("); ", 3)), (*F->fc_571)); b_; }));
{ R1039 *cell1988 = rt_alloc(sizeof(R1039));
(*cell1988).s = NULL;
(*cell1988).next = NULL;
F->l_1987 = cell1988;
}
(*(P1038)rt_nil_check(F->l_1987)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1986), rt_str("); ", 3)), (*F->fc_571)), rt_str(" } else { RT_POP(", 17)), F->f_1986), rt_str("); ", 3)), (*F->fc_571)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P1038)rt_nil_check(F->l_1987)).next = g_fins_1100;
g_fins_1100 = F->l_1987;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_574(P1038 saved_573) {
  struct f_close_fins_574fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_573 = saved_573;
while (((g_fins_1100 != F->saved_573) && (g_fins_1100 != NULL))) {
f_emit_29(&(((P1027)rt_nil_check((*(P1038)rt_nil_check(g_fins_1100)).s))->all));
f_pop_cleanup_611();
g_fins_1100 = (*(P1038)rt_nil_check(g_fins_1100)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_576(P1034 d_575) {
  struct f_const_decl_576fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_575 = d_575;
F->c_1989 = NULL;
F->c_1989 = f_new_cons_184();
F->t_1990 = NULL;
F->vt_1991 = NULL;
F->y_1992 = NULL;
F->y_1992 = f_new_sym_181((((rt_int)2LL)), (*(P1034)rt_nil_check(F->d_575)).name);
if (((*(P1034)rt_nil_check(F->d_575)).a != NULL)) {
F->t_1990 = f_resolve_subtype_268((*(P1034)rt_nil_check(F->d_575)).a, &F->c_1989);
}
{
F->v_1994 = rt_str_copy(f_gexpr_in_816((*(P1034)rt_nil_check(F->d_575)).b, F->t_1990, F->c_1989, &F->vt_1991));
if ((F->t_1990 != NULL)) {
f_check_type_232(F->vt_1991, F->t_1990, (*(P1034)rt_nil_check(F->d_575)).line);
} else {
F->t_1990 = F->vt_1991;
}
if (((*(P1040)rt_nil_check(F->t_1990)).kind == (((rt_int)1LL)))) {
(*(P1044)rt_nil_check(F->y_1992)).mvalue = f_manifest_371((*(P1034)rt_nil_check(F->d_575)).b, &F->ok_1993);
(*(P1044)rt_nil_check(F->y_1992)).hasmv = F->ok_1993;
}
{
F->access_1995 = rt_str_copy(f_storage_524(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_575)).name))->all), F->t_1990));
if (((*(P1040)rt_nil_check(F->t_1990)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_349((*(P1040)rt_nil_check(F->t_1990)).initp, &F->access_1995); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1995, rt_str(" = ", 3)), f_checked_213(F->t_1990, F->c_1989, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_419(F->t_1990, &F->v_1994); b_; }))), rt_str(";", 1)); b_; }));
f_bind_527(F->y_1992, &F->access_1995);
if (f_needs_fin_351(F->t_1990)) {
f_open_fin_572(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_354(&F->access_1995, F->t_1990); b_; }));
}
}
}
(*(P1044)rt_nil_check(F->y_1992)).t = F->t_1990;
(*(P1044)rt_nil_check(F->y_1992)).c = F->c_1989;
(*(P1044)rt_nil_check(F->y_1992)).ro_flag = 1;
f_define_168(F->y_1992, (*(P1034)rt_nil_check(F->d_575)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_578(P1034 d_577) {
  struct f_subprogram_578fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_577 = d_577;
f_gen_subprogram_581(F->d_577, f_lookup_decl_165(F->d_577));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_581(P1034 d_579, P1044 y_580) {
  struct f_gen_subprogram_581fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_579 = d_579;
F->y_580 = y_580;
F->saved_code_1996 = NULL;
F->saved_code_1996 = g_code_1088;
F->saved_fields_1997 = NULL;
F->saved_fields_1997 = g_fields_buf_1089;
F->saved_in_1998 = g_in_func_1090;
F->saved_sym_1999 = NULL;
F->saved_sym_1999 = g_func_sym_1102;
F->saved_exits_2000 = NULL;
F->saved_exits_2000 = g_exits_1112;
F->saved_gotos_2001 = NULL;
F->saved_gotos_2001 = g_gotos_1113;
F->saved_frames_2002 = g_frames_1114;
F->args_2003 = NULL;
F->args_2003 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_2004 = NULL;
F->pm_2004 = (*(P1044)rt_nil_check(F->y_580)).params;
F->saved_handlers_2005 = NULL;
F->saved_handlers_2005 = g_handlers_1115;
F->saved_cleanups_2006 = NULL;
F->saved_cleanups_2006 = g_cleanups_1116;
F->ctx_2007 = NULL;
F->head_2008 = NULL;
F->frame_2009 = NULL;
F->frame_2009 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_580)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_2010 = NULL;
F->copy_back_2011 = NULL;
F->copy_back_2011 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_2012 = NULL;
F->pfin_2012 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_2013 = NULL;
F->saved_fins_2013 = g_fins_1100;
F->saved_rc_2014 = NULL;
F->saved_rc_2014 = g_func_rc_1103;
F->saved_ret_2015 = NULL;
F->saved_ret_2015 = g_cap_ret_1104;
F->saved_rflag_2016 = NULL;
F->saved_rflag_2016 = g_cap_rflag_1105;
F->pn_2017 = NULL;
F->pn_2017 = (*(P1034)rt_nil_check(F->d_579)).a;
F->nonrec_end_2018 = NULL;
if (g_in_func_1090) {
F->parent_2010 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1044)rt_nil_check(g_func_sym_1102)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_1100 = NULL;
g_func_rc_1103 = NULL;
g_cap_ret_1104 = NULL;
g_cap_rflag_1105 = NULL;
g_code_1088 = f_new_buffer_24();
g_fields_buf_1089 = f_new_buffer_24();
g_in_func_1090 = 1;
g_func_sym_1102 = F->y_580;
g_exits_1112 = NULL;
g_gotos_1113 = NULL;
g_frames_1114 = ((rt_int)0LL);
g_handlers_1115 = NULL;
g_cleanups_1116 = NULL;
g_cur_level_1091 = rt_add(g_cur_level_1091, ((rt_int)1LL));
f_open_scope_177();
{ R1052 *cell2020 = rt_alloc(sizeof(R1052));
(*cell2020).imps = NULL;
(*cell2020).next = NULL;
F->ctx_2007 = cell2020;
}
(*(P1051)rt_nil_check(F->ctx_2007)).depth = g_depth_1077;
(*(P1051)rt_nil_check(F->ctx_2007)).imps = (*(P1034)rt_nil_check(F->d_579)).d;
(*(P1051)rt_nil_check(F->ctx_2007)).all_imp = ((*(P1034)rt_nil_check(F->d_579)).flag >= ((rt_int)2LL));
(*(P1051)rt_nil_check(F->ctx_2007)).next = g_fctx_1092;
g_fctx_1092 = F->ctx_2007;
if ((F->parent_2010 != NULL)) {
f_put_27(g_fields_buf_1089, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P1027)rt_nil_check(F->parent_2010))->all)), rt_str(" *up;", 5)); b_; }));
if (((*(P1044)rt_nil_check(F->y_580)).kind != (((rt_int)9LL)))) {
F->args_2003 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1027)rt_nil_check(F->parent_2010))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_2004 != NULL)) {
F->ct_2021 = rt_str_copy(f_ctype_234((*(P1046)rt_nil_check(F->pm_2004)).t));
F->f_2022 = rt_str_copy((((P1027)rt_nil_check((*(P1046)rt_nil_check(F->pm_2004)).cfield))->all));
F->p_2023 = NULL;
F->pc_2024 = NULL;
F->pc_2024 = (*(P1046)rt_nil_check(F->pm_2004)).c;
F->ac_2025 = NULL;
if ((((rt_int)(((((P1027)rt_nil_check(F->args_2003))->all)).len)) > ((rt_int)0LL))) {
F->args_2003 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->args_2003))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_186((*(P1046)rt_nil_check(F->pm_2004)).t)) {
F->fc_2026 = NULL;
F->ft_2027 = NULL;
F->ft_2027 = f_resolve_subtype_268((*(P1034)rt_nil_check(F->pn_2017)).a, &F->fc_2026);
F->pc_2024 = f_freeze_209(F->fc_2026, (*(P1046)rt_nil_check(F->pm_2004)).t);
}
if (((*(P1046)rt_nil_check(F->pm_2004)).mode == (((rt_int)1LL)))) {
F->p_2023 = f_new_sym_181((((rt_int)2LL)), (*(P1046)rt_nil_check(F->pm_2004)).name);
f_put_27(g_fields_buf_1089, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_2021), rt_str(" ", 1)), F->f_2022), rt_str(";", 1)); b_; }));
F->args_2003 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->args_2003))->all), F->ct_2021), rt_str(" ", 1)), F->f_2022); b_; }));
(*(P1044)rt_nil_check(F->p_2023)).access = f_mk_3(&F->f_2022);
if (((*(P1044)rt_nil_check(F->y_580)).kind != (((rt_int)9LL)))) {
if (((*(P1040)rt_nil_check((*(P1046)rt_nil_check(F->pm_2004)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_349((*(P1040)rt_nil_check((*(P1046)rt_nil_check(F->pm_2004)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_2022); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2022), rt_str(" = ", 3)), f_checked_213((*(P1046)rt_nil_check(F->pm_2004)).t, F->pc_2024, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_419((*(P1046)rt_nil_check(F->pm_2004)).t, &F->f_2022); b_; }))), rt_str(";", 1)); b_; }));
if (((((*(P1040)rt_nil_check((*(P1046)rt_nil_check(F->pm_2004)).t)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check((*(P1046)rt_nil_check(F->pm_2004)).t)).assignp != NULL)) && ((*(P1040)rt_nil_check((*(P1046)rt_nil_check(F->pm_2004)).t)).assignp != F->y_580))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_user_call2_405((*(P1040)rt_nil_check((*(P1046)rt_nil_check(F->pm_2004)).t)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_2022); b_; }), 1, &F->f_2022, 0), rt_str(";", 1)); b_; }));
}
if (f_needs_fin_351((*(P1046)rt_nil_check(F->pm_2004)).t)) {
F->pfin_2012 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->pfin_2012))->all), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_2022); b_; }), (*(P1046)rt_nil_check(F->pm_2004)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_2023 = f_new_sym_181((((rt_int)1LL)), (*(P1046)rt_nil_check(F->pm_2004)).name);
f_put_27(g_fields_buf_1089, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_2021), rt_str(" *", 2)), F->f_2022), rt_str(";", 1)); b_; }));
F->args_2003 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->args_2003))->all), F->ct_2021), rt_str(" *", 2)), F->f_2022); b_; }));
(*(P1044)rt_nil_check(F->p_2023)).access = f_mk_3(&F->f_2022);
(*(P1044)rt_nil_check(F->p_2023)).byref = 1;
if (((*(P1044)rt_nil_check(F->y_580)).kind != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2022), rt_str(" = ", 3)), F->f_2022), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_186((*(P1046)rt_nil_check(F->pm_2004)).t)) {
F->bt_2028 = rt_str_copy(f_bound_ctype_188((*(P1046)rt_nil_check(F->pm_2004)).t));
f_put_27(g_fields_buf_1089, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_2028), rt_str(" ", 1)), F->f_2022), rt_str("lo, ", 4)), F->f_2022), rt_str("hi;", 3)); b_; }));
F->args_2003 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->args_2003))->all), rt_str(", ", 2)), F->bt_2028), rt_str(" ", 1)), F->f_2022), rt_str("lo, ", 4)), F->bt_2028), rt_str(" ", 1)), F->f_2022), rt_str("hi", 2)); b_; }));
if (((*(P1044)rt_nil_check(F->y_580)).kind != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2022), rt_str("lo = ", 5)), F->f_2022), rt_str("lo; F->", 7)), F->f_2022), rt_str("hi = ", 5)), F->f_2022), rt_str("hi;", 3)); b_; }));
}
F->ac_2025 = f_new_cons_184();
(*(P1036)rt_nil_check(F->ac_2025)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_2022, rt_str("lo", 2)); b_; }));
(*(P1036)rt_nil_check(F->ac_2025)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_2022, rt_str("hi", 2)); b_; }));
(*(P1036)rt_nil_check(F->ac_2025)).dyn = 1;
(*(P1036)rt_nil_check(F->ac_2025)).lvl = g_cur_level_1091;
if (((F->pc_2024 == NULL) || ((*(P1036)rt_nil_check(F->pc_2024)).lo == NULL))) {
F->pc_2024 = F->ac_2025;
} else if (((*(P1046)rt_nil_check(F->pm_2004)).mode != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_2022), rt_str("lo <= F->", 9)), F->f_2022), rt_str("hi && (F->", 10)), F->f_2022), rt_str("lo != ", 6)), f_sub_lo_198((*(P1046)rt_nil_check(F->pm_2004)).t, F->pc_2024)), rt_str(" || F->", 7)), F->f_2022), rt_str("hi != ", 6)), f_sub_hi_201((*(P1046)rt_nil_check(F->pm_2004)).t, F->pc_2024)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if ((((*(P1046)rt_nil_check(F->pm_2004)).mode == (((rt_int)3LL))) && ((*(P1044)rt_nil_check(F->y_580)).kind != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_1089, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_2021), rt_str(" ", 1)), F->f_2022), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2022), rt_str("v = ", 4)), f_copy_code_419((*(P1046)rt_nil_check(F->pm_2004)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_2022); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P1040)rt_nil_check((*(P1046)rt_nil_check(F->pm_2004)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_349((*(P1040)rt_nil_check((*(P1046)rt_nil_check(F->pm_2004)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2022), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_2025 == NULL)) {
F->ac_2025 = (*(P1046)rt_nil_check(F->pm_2004)).c;
}
if ((!rt_str_eq(f_uninit_value_365(f_base_of_223((*(P1046)rt_nil_check(F->pm_2004)).t)), rt_str("", 0)))) {
F->copy_back_2011 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->copy_back_2011))->all), rt_str("  if (!rt_r_undef_", 18)), f_kind_name_228(f_base_of_223((*(P1046)rt_nil_check(F->pm_2004)).t))), rt_str("(F->", 4)), F->f_2022), rt_str("v)) ", 4)), f_assign_code_416(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_2022), rt_str(")", 1)); b_; }), (*(P1046)rt_nil_check(F->pm_2004)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2022), rt_str("v", 1)); b_; }), F->ac_2025)); b_; }));
} else {
F->copy_back_2011 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->copy_back_2011))->all), rt_str("  ", 2)), f_assign_code_416(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_2022), rt_str(")", 1)); b_; }), (*(P1046)rt_nil_check(F->pm_2004)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2022), rt_str("v", 1)); b_; }), F->ac_2025)); b_; }));
}
if (f_needs_fin_351((*(P1046)rt_nil_check(F->pm_2004)).t)) {
F->pfin_2012 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->pfin_2012))->all), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2022), rt_str("v", 1)); b_; }), (*(P1046)rt_nil_check(F->pm_2004)).t)), rt_str(" ", 1)); b_; }));
}
(*(P1044)rt_nil_check(F->p_2023)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_2022, rt_str("v", 1)); b_; }));
(*(P1044)rt_nil_check(F->p_2023)).byref = 0;
}
}
(*(P1044)rt_nil_check(F->p_2023)).t = (*(P1046)rt_nil_check(F->pm_2004)).t;
(*(P1044)rt_nil_check(F->p_2023)).c = F->pc_2024;
(*(P1044)rt_nil_check(F->p_2023)).level = g_cur_level_1091;
(*(P1044)rt_nil_check(F->p_2023)).ro_flag = (((*(P1046)rt_nil_check(F->pm_2004)).mode == (((rt_int)1LL))) || ((*(P1046)rt_nil_check(F->pm_2004)).mode == (((rt_int)4LL))));
f_define_168(F->p_2023, (*(P1034)rt_nil_check(F->d_579)).line);
F->pm_2004 = (*(P1046)rt_nil_check(F->pm_2004)).next;
F->pn_2017 = (*(P1034)rt_nil_check(F->pn_2017)).next;
}
if (((*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_580)).result)).kind != (((rt_int)9LL)))) {
if (((*(P1034)rt_nil_check(F->d_579)).b != NULL)) {
F->rc_2029 = NULL;
F->rt_2030 = NULL;
F->rt_2030 = f_resolve_subtype_268((*(P1034)rt_nil_check(F->d_579)).b, &F->rc_2029);
g_func_rc_1103 = f_freeze_209(F->rc_2029, (*(P1044)rt_nil_check(F->y_580)).result);
}
f_put_27(g_fields_buf_1089, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234((*(P1044)rt_nil_check(F->y_580)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_580)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_349((*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_580)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_2019 = (((rt_int)(((((P1027)rt_nil_check(F->pfin_2012))->all)).len)) > ((rt_int)0LL));
if (F->has_pfin_2019) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_610(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_513((*(P1034)rt_nil_check(F->d_579)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_513((*(P1034)rt_nil_check(F->d_579)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_2031 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_2032 = NULL;
F->leave_2032 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_2031), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_2031), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_2031), rt_str(", ", 2)), f_bool_text_387(f_has_pragmat_513((*(P1034)rt_nil_check(F->d_579)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_387(f_has_pragmat_513((*(P1034)rt_nil_check(F->d_579)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->d_579)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_610(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_2011 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->copy_back_2011))->all), rt_str("  ", 2)), (((P1027)rt_nil_check(F->leave_2032))->all)); b_; }));
F->nonrec_end_2018 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P1027)rt_nil_check(F->leave_2032))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
if (f_has_pragmat_513((*(P1034)rt_nil_check(F->d_579)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOREIGN", 7); b_; }))) {
f_foreign_body_506(F->d_579, F->y_580);
}
f_declare_labels_591((*(P1034)rt_nil_check(F->d_579)).c);
f_declare_body_435((*(P1034)rt_nil_check(F->d_579)).c);
{
F->xu_2033 = rt_str_copy(f_open_unhandled_604((*(P1034)rt_nil_check(F->d_579)).c));
f_body_elements_600((*(P1034)rt_nil_check(F->d_579)).c);
f_close_fins_574(NULL);
f_close_unhandled_606(&F->xu_2033);
}
if ((F->nonrec_end_2018 != NULL)) {
f_emit_29(&(((P1027)rt_nil_check(F->nonrec_end_2018))->all));
f_pop_cleanup_611();
}
if (F->has_pfin_2019) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P1027)rt_nil_check(F->pfin_2012))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_611();
F->copy_back_2011 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->copy_back_2011))->all), rt_str("  ", 2)), (((P1027)rt_nil_check(F->pfin_2012))->all)); b_; }));
}
f_close_scope_178();
g_fctx_1092 = (*(P1051)rt_nil_check(g_fctx_1092)).next;
g_cur_level_1091 = rt_sub(g_cur_level_1091, ((rt_int)1LL));
if (((((rt_int)(((((P1027)rt_nil_check(F->args_2003))->all)).len)) == ((rt_int)0LL)) || ((*(P1044)rt_nil_check(F->y_580)).kind == (((rt_int)9LL))))) {
F->args_2003 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P1044)rt_nil_check(F->y_580)).kind == (((rt_int)9LL)))) {
F->args_2003 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_2008 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234((*(P1044)rt_nil_check(F->y_580)).result)), rt_str(" ", 1)), (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_580)).cname))->all)), rt_str("(", 1)), (((P1027)rt_nil_check(F->args_2003))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_1083, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->head_2008))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->head_2008))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_1097, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1027)rt_nil_check(F->frame_2009))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_1097, g_fields_buf_1089);
f_put_27(g_out_frames_1097, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P1044)rt_nil_check(F->y_580)).kind == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1027)rt_nil_check(F->frame_2009))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1027)rt_nil_check(F->frame_2009))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_1085, g_code_1088);
if (((*(P1040)rt_nil_check((*(P1044)rt_nil_check(F->y_580)).result)).kind != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P1027)rt_nil_check(F->copy_back_2011))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_1085, &(((P1027)rt_nil_check(F->copy_back_2011))->all));
}
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P1027)rt_nil_check(F->copy_back_2011))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_1085, &(((P1027)rt_nil_check(F->copy_back_2011))->all));
}
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_1088 = F->saved_code_1996;
g_fields_buf_1089 = F->saved_fields_1997;
g_in_func_1090 = F->saved_in_1998;
g_func_sym_1102 = F->saved_sym_1999;
g_exits_1112 = F->saved_exits_2000;
g_gotos_1113 = F->saved_gotos_2001;
g_frames_1114 = F->saved_frames_2002;
g_handlers_1115 = F->saved_handlers_2005;
g_cleanups_1116 = F->saved_cleanups_2006;
g_fins_1100 = F->saved_fins_2013;
g_func_rc_1103 = F->saved_rc_2014;
g_cap_ret_1104 = F->saved_ret_2015;
g_cap_rflag_1105 = F->saved_rflag_2016;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_583(P1034 d_582) {
  struct f_waits_of_583fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_582 = d_582;
F->w_2034 = NULL;
F->w_2034 = g_cap_waits_1094;
while ((F->w_2034 != NULL)) {
if (((*(P1063)rt_nil_check(F->w_2034)).d == F->d_582)) {
F->result_ = (((P1027)rt_nil_check((*(P1063)rt_nil_check(F->w_2034)).w))->all);
goto ret_;
}
F->w_2034 = (*(P1063)rt_nil_check(F->w_2034)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_585(P1034 elems_584) {
  struct f_task_waits_585fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_584 = elems_584;
F->e_2035 = NULL;
F->e_2035 = F->elems_584;
F->r_2036 = NULL;
F->r_2036 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_2035 != NULL)) {
if (((*(P1034)rt_nil_check(F->e_2035)).kind == (((rt_int)50LL)))) {
F->r_2036 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_2036))->all), rt_str(" rt_await_decl(&", 16)), (((P1027)rt_nil_check((*(P1044)rt_nil_check(f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_2035)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if ((((*(P1034)rt_nil_check(F->e_2035)).kind == (((rt_int)47LL))) || (((*(P1034)rt_nil_check(F->e_2035)).kind == (((rt_int)48LL))) && (((*(P1034)rt_nil_check(F->e_2035)).flag == ((rt_int)1LL)) || ((*(P1034)rt_nil_check(F->e_2035)).flag == ((rt_int)3LL)))))) {
F->r_2036 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_2036))->all), f_waits_of_583(F->e_2035)); b_; }));
}
F->e_2035 = (*(P1034)rt_nil_check(F->e_2035)).next;
}
F->result_ = (((P1027)rt_nil_check(F->r_2036))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_587(P1034 elems_586) {
  struct f_await_tasks_587fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_586 = elems_586;
F->w_2037 = rt_str_copy(f_task_waits_585(F->elems_586));
if ((((rt_int)((F->w_2037).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2037);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_589(P1034 elems_588) {
  struct f_capsule_elements_589fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_588 = elems_588;
F->e_2038 = NULL;
F->e_2038 = F->elems_588;
while ((F->e_2038 != NULL)) {
if ((((*(P1034)rt_nil_check(F->e_2038)).kind >= (((rt_int)20LL))) && ((*(P1034)rt_nil_check(F->e_2038)).kind <= (((rt_int)36LL))))) {
f_start_labels_592();
}
f_element_519(F->e_2038);
F->e_2038 = (*(P1034)rt_nil_check(F->e_2038)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_591(P1034 elems_590) {
  struct f_declare_labels_591fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_590 = elems_590;
F->e_2039 = NULL;
F->e_2039 = F->elems_590;
while ((F->e_2039 != NULL)) {
F->l_2040 = NULL;
F->l_2040 = (*(P1034)rt_nil_check(F->e_2039)).labels;
while ((F->l_2040 != NULL)) {
F->x_2041 = NULL;
F->x_2041 = g_gotos_1113;
while (((F->x_2041 != NULL) && ((*(P1059)rt_nil_check(F->x_2041)).depth == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1059)rt_nil_check(F->x_2041)).match))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->l_2040)).name))->all))) {
f_fail_23((*(P1034)rt_nil_check(F->l_2040)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->l_2040)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_2041 = (*(P1059)rt_nil_check(F->x_2041)).next;
}
{ R1060 *cell2042 = rt_alloc(sizeof(R1060));
(*cell2042).match = NULL;
(*cell2042).label = NULL;
(*cell2042).next = NULL;
F->x_2041 = cell2042;
}
(*(P1059)rt_nil_check(F->x_2041)).match = (*(P1034)rt_nil_check(F->l_2040)).name;
(*(P1059)rt_nil_check(F->x_2041)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P1059)rt_nil_check(F->x_2041)).depth = rt_neg(((rt_int)1LL));
(*(P1059)rt_nil_check(F->x_2041)).next = g_gotos_1113;
g_gotos_1113 = F->x_2041;
F->l_2040 = (*(P1034)rt_nil_check(F->l_2040)).next;
}
F->e_2039 = (*(P1034)rt_nil_check(F->e_2039)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_592(void) {
  struct f_start_labels_592fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_2043 = NULL;
F->x_2043 = g_gotos_1113;
while (((F->x_2043 != NULL) && ((*(P1059)rt_nil_check(F->x_2043)).depth == rt_neg(((rt_int)1LL))))) {
(*(P1059)rt_nil_check(F->x_2043)).depth = g_frames_1114;
F->x_2043 = (*(P1059)rt_nil_check(F->x_2043)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P1059 f_goto_label_594(rstr *name_593) {
  struct f_goto_label_594fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_593 = name_593;
F->x_2044 = NULL;
F->x_2044 = g_gotos_1113;
while ((F->x_2044 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1059)rt_nil_check(F->x_2044)).match))->all), (*F->name_593))) {
F->result_ = F->x_2044;
goto ret_;
}
F->x_2044 = (*(P1059)rt_nil_check(F->x_2044)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_596(P1034 e_595) {
  struct f_has_return_596fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_595 = e_595;
F->x_2045 = NULL;
F->x_2045 = F->e_595;
while ((F->x_2045 != NULL)) {
if (((*(P1034)rt_nil_check(F->x_2045)).kind == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if (((((((*(P1034)rt_nil_check(F->x_2045)).kind != (((rt_int)45LL))) && ((*(P1034)rt_nil_check(F->x_2045)).kind != (((rt_int)46LL)))) && ((*(P1034)rt_nil_check(F->x_2045)).kind != (((rt_int)50LL)))) && ((*(P1034)rt_nil_check(F->x_2045)).kind != (((rt_int)47LL)))) && ((*(P1034)rt_nil_check(F->x_2045)).kind != (((rt_int)51LL))))) {
if ((((((*(P1034)rt_nil_check(F->x_2045)).a != NULL) && f_has_return_596((*(P1034)rt_nil_check(F->x_2045)).a)) || (((*(P1034)rt_nil_check(F->x_2045)).b != NULL) && f_has_return_596((*(P1034)rt_nil_check(F->x_2045)).b))) || (((*(P1034)rt_nil_check(F->x_2045)).c != NULL) && f_has_return_596((*(P1034)rt_nil_check(F->x_2045)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_2045 = (*(P1034)rt_nil_check(F->x_2045)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_598(P1034 elems_597) {
  struct f_capsule_body_598fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_597 = elems_597;
F->saved_ret_2046 = NULL;
F->saved_ret_2046 = g_cap_ret_1104;
F->saved_flag_2047 = NULL;
F->saved_flag_2047 = g_cap_rflag_1105;
F->saved_frames_2048 = g_ret_frames_1106;
F->e_2049 = NULL;
F->e_2049 = F->elems_597;
if ((!f_has_return_596(F->elems_597))) {
g_cap_ret_1104 = NULL;
g_cap_rflag_1105 = NULL;
f_capsule_elements_589(F->elems_597);
} else {
g_cap_rflag_1105 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(g_cap_rflag_1105))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_2049 != NULL)) {
F->stmt_2050 = (((*(P1034)rt_nil_check(F->e_2049)).kind >= (((rt_int)20LL))) && ((*(P1034)rt_nil_check(F->e_2049)).kind <= (((rt_int)36LL))));
g_cap_ret_1104 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_1106 = g_frames_1114;
if (F->stmt_2050) {
f_start_labels_592();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P1027)rt_nil_check(g_cap_rflag_1105))->all)), rt_str(") {", 3)); b_; }));
}
f_element_519(F->e_2049);
if (F->stmt_2050) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(g_cap_ret_1104))->all), rt_str(": ;", 3)); b_; }));
F->e_2049 = (*(P1034)rt_nil_check(F->e_2049)).next;
}
}
g_cap_ret_1104 = F->saved_ret_2046;
g_cap_rflag_1105 = F->saved_flag_2047;
g_ret_frames_1106 = F->saved_frames_2048;
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_600(P1034 elems_599) {
  struct f_body_elements_600fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_599 = elems_599;
f_capsule_elements_589(F->elems_599);
f_await_tasks_587(F->elems_599);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_602(P1034 elems_601) {
  struct f_gen_body_602fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_601 = elems_601;
F->saved_2051 = NULL;
F->saved_2051 = g_fins_1100;
F->saved_gotos_2052 = NULL;
F->saved_gotos_2052 = g_gotos_1113;
f_open_scope_177();
f_declare_labels_591(F->elems_601);
f_declare_body_435(F->elems_601);
{
F->xu_2053 = rt_str_copy(f_open_unhandled_604(F->elems_601));
f_body_elements_600(F->elems_601);
f_close_fins_574(F->saved_2051);
f_close_unhandled_606(&F->xu_2053);
}
f_close_scope_178();
g_gotos_1113 = F->saved_gotos_2052;
ret_:
  RT_FPOP();
  return;
}

static rstr f_open_unhandled_604(P1034 elems_603) {
  struct f_open_unhandled_604fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_603 = elems_603;
F->e_2054 = NULL;
F->e_2054 = F->elems_603;
F->conds_2055 = NULL;
F->conds_2055 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->e_2054 != NULL)) {
if (((*(P1034)rt_nil_check(F->e_2054)).kind == (((rt_int)49LL)))) {
F->conds_2055 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->conds_2055))->all), rt_str(" || rt_xcur == ", 15)), (((P1027)rt_nil_check((*(P1044)rt_nil_check(f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_2054)).name))->all)))).cname))->all)); b_; }));
}
F->e_2054 = (*(P1034)rt_nil_check(F->e_2054)).next;
}
if ((((rt_int)(((((P1027)rt_nil_check(F->conds_2055))->all)).len)) == ((rt_int)1LL))) {
F->result_ = rt_str("", 0);
goto ret_;
}
{
F->f_2056 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xu", 2); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2056), rt_str("; if (RT_TRY(", 13)), F->f_2056), rt_str(")) {", 4)); b_; }));
f_push_cleanup_610(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2056), rt_str(");", 2)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(F->f_2056, rt_str(":", 1)), (((P1027)rt_nil_check(F->conds_2055))->all));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_close_unhandled_606(rstr *xu_605) {
  struct f_close_unhandled_606fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->xu_605 = xu_605;
F->i_2057 = ((rt_int)1LL);
if (rt_str_eq((*F->xu_605), rt_str("", 0))) {
goto ret_;
}
while ((rt_str_get((*F->xu_605), F->i_2057) != 58)) {
F->i_2057 = rt_add(F->i_2057, ((rt_int)1LL));
}
{
F->f_2058 = rt_str_copy(rt_str_slice((*F->xu_605), ((rt_int)1LL), rt_sub(F->i_2057, ((rt_int)1LL))));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2058), rt_str("); } else { RT_POP(", 19)), F->f_2058), rt_str("); if (", 7)), rt_str_slice((*F->xu_605), rt_add(F->i_2057, ((rt_int)1LL)), ((rt_int)(((*F->xu_605)).len)))), rt_str(") rt_raise(rt_exc(", 18)), f_q_18()), rt_str("X_UNHANDLED", 11)), f_q_18()), rt_str(")); rt_raise(rt_xcur); }", 24)); b_; }));
f_pop_cleanup_611();
}
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_608(rt_int upto_607) {
  struct f_pop_frames_608fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_607 = upto_607;
F->i_2059 = g_frames_1114;
F->c_2060 = NULL;
F->c_2060 = g_cleanups_1116;
while ((F->i_2059 > F->upto_607)) {
f_emit_29(&(((P1027)rt_nil_check((*(P1038)rt_nil_check(F->c_2060)).s))->all));
F->c_2060 = (*(P1038)rt_nil_check(F->c_2060)).next;
F->i_2059 = rt_sub(F->i_2059, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_610(rstr *s_609) {
  struct f_push_cleanup_610fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_609 = s_609;
F->c_2061 = NULL;
{ R1039 *cell2062 = rt_alloc(sizeof(R1039));
(*cell2062).s = NULL;
(*cell2062).next = NULL;
F->c_2061 = cell2062;
}
(*(P1038)rt_nil_check(F->c_2061)).s = f_mk_3(&(*F->s_609));
(*(P1038)rt_nil_check(F->c_2061)).next = g_cleanups_1116;
g_cleanups_1116 = F->c_2061;
g_frames_1114 = rt_add(g_frames_1114, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_611(void) {
  struct f_pop_cleanup_611fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_1116 = (*(P1038)rt_nil_check(g_cleanups_1116)).next;
g_frames_1114 = rt_sub(g_frames_1114, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_613(P1034 s_612) {
  struct f_gen_statement_613fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_612 = s_612;
F->located_2063 = NULL;
F->located_2063 = f_located_in_616(f_copy_node_847(F->s_612), NULL);
F->l_2064 = NULL;
F->l_2064 = F->located_2063;
while ((F->l_2064 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_534(F->l_2064, 0); b_; }));
F->l_2064 = (*(P1044)rt_nil_check(F->l_2064)).reqs_sym;
}
f_gen_statement2_621(F->s_612);
F->l_2064 = F->located_2063;
while ((F->l_2064 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_534(F->l_2064, 1); b_; }));
F->l_2064 = (*(P1044)rt_nil_check(F->l_2064)).reqs_sym;
}
ret_:
  RT_FPOP();
  return;
}

static P1044 f_located_in_616(P1034 e_614, P1044 found_615) {
  struct f_located_in_616fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_614 = e_614;
F->found_615 = found_615;
F->x_2065 = NULL;
F->x_2065 = F->e_614;
F->r_2066 = NULL;
F->r_2066 = F->found_615;
while ((F->x_2065 != NULL)) {
if (((*(P1034)rt_nil_check(F->x_2065)).kind == (((rt_int)7LL)))) {
F->y_2067 = NULL;
F->y_2067 = f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_2065)).name))->all));
if (((((F->y_2067 != NULL) && ((*(P1044)rt_nil_check(F->y_2067)).kind == (((rt_int)1LL)))) && ((*(P1044)rt_nil_check(F->y_2067)).loc != NULL)) && (!f_sym_in_619(F->r_2066, F->y_2067)))) {
(*(P1044)rt_nil_check(F->y_2067)).reqs_sym = F->r_2066;
F->r_2066 = F->y_2067;
}
} else if (((((((*(P1034)rt_nil_check(F->x_2065)).kind == (((rt_int)45LL))) || ((*(P1034)rt_nil_check(F->x_2065)).kind == (((rt_int)46LL)))) || ((*(P1034)rt_nil_check(F->x_2065)).kind == (((rt_int)50LL)))) || ((*(P1034)rt_nil_check(F->x_2065)).kind == (((rt_int)47LL)))) || ((*(P1034)rt_nil_check(F->x_2065)).kind == (((rt_int)51LL))))) {
F->result_ = F->r_2066;
goto ret_;
}
if (((*(P1034)rt_nil_check(F->x_2065)).a != NULL)) {
F->r_2066 = f_located_in_616((*(P1034)rt_nil_check(F->x_2065)).a, F->r_2066);
}
if (((*(P1034)rt_nil_check(F->x_2065)).b != NULL)) {
F->r_2066 = f_located_in_616((*(P1034)rt_nil_check(F->x_2065)).b, F->r_2066);
}
if (((*(P1034)rt_nil_check(F->x_2065)).c != NULL)) {
F->r_2066 = f_located_in_616((*(P1034)rt_nil_check(F->x_2065)).c, F->r_2066);
}
F->x_2065 = (*(P1034)rt_nil_check(F->x_2065)).next;
}
F->result_ = F->r_2066;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_sym_in_619(P1044 l_617, P1044 y_618) {
  struct f_sym_in_619fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_617 = l_617;
F->y_618 = y_618;
F->p_2068 = NULL;
F->p_2068 = F->l_617;
while ((F->p_2068 != NULL)) {
if ((F->p_2068 == F->y_618)) {
F->result_ = 1;
goto ret_;
}
F->p_2068 = (*(P1044)rt_nil_check(F->p_2068)).reqs_sym;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_statement2_621(P1034 s_620) {
  struct f_gen_statement2_621fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_620 = s_620;
F->label_2069 = NULL;
F->gl_2070 = NULL;
F->gl_2070 = (*(P1034)rt_nil_check(F->s_620)).labels;
while ((F->gl_2070 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1059)rt_nil_check(f_goto_label_594(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->gl_2070)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_2070 = (*(P1034)rt_nil_check(F->gl_2070)).next;
}
if (((*(P1034)rt_nil_check(F->s_620)).tag != NULL)) {
F->x_2071 = NULL;
{ R1060 *cell2072 = rt_alloc(sizeof(R1060));
(*cell2072).match = NULL;
(*cell2072).label = NULL;
(*cell2072).next = NULL;
F->x_2071 = cell2072;
}
F->label_2069 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P1059)rt_nil_check(F->x_2071)).match = (*(P1034)rt_nil_check(F->s_620)).tag;
(*(P1059)rt_nil_check(F->x_2071)).label = F->label_2069;
(*(P1059)rt_nil_check(F->x_2071)).depth = g_frames_1114;
(*(P1059)rt_nil_check(F->x_2071)).next = g_exits_1112;
g_exits_1112 = F->x_2071;
}
{ rt_int sel2073 = (*(P1034)rt_nil_check(F->s_620)).kind;
if (0 || (sel2073 == (((rt_int)20LL)))) {
f_st_assign_623(F->s_620);
} else if (0 || (sel2073 == (((rt_int)21LL)))) {
f_st_call_625(F->s_620);
} else if (0 || (sel2073 == (((rt_int)22LL)))) {
f_st_if_627(F->s_620);
} else if (0 || (sel2073 == (((rt_int)23LL)))) {
f_st_case_631(F->s_620);
} else if (0 || (sel2073 == (((rt_int)24LL)))) {
f_st_repeat_639(F->s_620);
} else if (0 || (sel2073 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_602((*(P1034)rt_nil_check(F->s_620)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel2073 == (((rt_int)27LL)))) {
f_st_exit_641(F->s_620);
} else if (0 || (sel2073 == (((rt_int)29LL)))) {
{
F->x_2074 = NULL;
F->x_2074 = f_goto_label_594(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->s_620)).name))->all));
if ((F->x_2074 == NULL)) {
f_fail_23((*(P1034)rt_nil_check(F->s_620)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->s_620)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_608((*(P1059)rt_nil_check(F->x_2074)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P1027)rt_nil_check((*(P1059)rt_nil_check(F->x_2074)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel2073 == (((rt_int)28LL)))) {
f_st_return_643(F->s_620);
} else if (0 || (sel2073 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_650(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->s_620)).name))->all), (*(P1034)rt_nil_check(F->s_620)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel2073 == (((rt_int)31LL)))) {
if ((g_handlers_1115 == NULL)) {
f_fail_23((*(P1034)rt_nil_check(F->s_620)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P1027)rt_nil_check((*(P1038)rt_nil_check(g_handlers_1115)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel2073 == (((rt_int)26LL)))) {
f_st_guard_652(F->s_620);
} else if (0 || (sel2073 == (((rt_int)32LL)))) {
f_st_alloc_654(F->s_620);
} else if (0 || (sel2073 == (((rt_int)34LL)))) {
f_st_create_658(F->s_620);
} else if (0 || (sel2073 == (((rt_int)35LL)))) {
f_st_wait_687(F->s_620);
} else if (0 || (sel2073 == (((rt_int)36LL)))) {
f_st_region_695(F->s_620);
} else {
f_fail_23((*(P1034)rt_nil_check(F->s_620)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P1034)rt_nil_check(F->s_620)).tag != NULL)) {
g_exits_1112 = (*(P1059)rt_nil_check(g_exits_1112)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->label_2069))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_623(P1034 s_622) {
  struct f_st_assign_623fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_622 = s_622;
F->lv_2075 = NULL;
F->t_2076 = NULL;
F->vt_2077 = NULL;
F->c_2078 = NULL;
if (((((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->s_622)).a)).kind == (((rt_int)10LL))) && ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->s_622)).a)).b != NULL)) && ((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->s_622)).a)).b)).kind == (((rt_int)16LL))))) {
f_lvalue_774((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->s_622)).a)).a, &F->lv_2075, &F->t_2076, &F->c_2078, &F->ro_2079);
while (((*(P1040)rt_nil_check(F->t_2076)).kind == (((rt_int)8LL)))) {
f_finish_ptr_480(F->t_2076);
F->lv_2075 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_766(&(((P1027)rt_nil_check(F->lv_2075))->all), F->t_2076); b_; }));
F->t_2076 = (*(P1040)rt_nil_check(F->t_2076)).target;
}
if ((((*(P1040)rt_nil_check(F->t_2076)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->t_2076)).tparams == NULL))) {
F->t_2076 = (*(P1040)rt_nil_check(F->t_2076)).under;
} else if (((*(P1040)rt_nil_check(F->t_2076)).kind == (((rt_int)15LL)))) {
F->lv_2075 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->lv_2075))->all), rt_str(".all", 4)); b_; }));
F->t_2076 = (*(P1040)rt_nil_check(F->t_2076)).under;
}
if ((((!F->ro_2079) && ((*(P1040)rt_nil_check(F->t_2076)).kind == (((rt_int)6LL)))) && ((*(P1040)rt_nil_check(F->t_2076)).ndim == ((rt_int)1LL)))) {
F->lo_2080 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->s_622)).a)).b)).a, (*(P1040)rt_nil_check(F->t_2076)).idx, &F->vt_2077));
F->hi_2081 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->s_622)).a)).b)).b, (*(P1040)rt_nil_check(F->t_2076)).idx, &F->vt_2077));
F->v_2082 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->s_622)).b, F->t_2076, &F->vt_2077));
f_need_slice_786(F->t_2076);
f_check_type_232(F->vt_2077, F->t_2076, (*(P1034)rt_nil_check(F->s_622)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->t_2076)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_234(F->t_2076)), rt_str("(", 1)), (((P1027)rt_nil_check(F->lv_2075))->all)), rt_str(", ", 2)), F->lo_2080), rt_str(", ", 2)), F->hi_2081), rt_str("); as_", 6)), f_ctype_234(F->t_2076)), rt_str("(&sl_, ", 7)), F->v_2082), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((F->ro_2079 || ((*(P1040)rt_nil_check(F->t_2076)).kind != (((rt_int)5LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->s_622)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_2083 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->s_622)).a)).b)).a, g_ty_int_1119, &F->vt_2077));
F->hi_2084 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->s_622)).a)).b)).b, g_ty_int_1119, &F->vt_2077));
F->v_2085 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->s_622)).b, g_ty_string_1123, &F->vt_2077));
f_check_type_232(F->vt_2077, g_ty_string_1123, (*(P1034)rt_nil_check(F->s_622)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P1027)rt_nil_check(F->lv_2075))->all)), rt_str(", ", 2)), F->lo_2083), rt_str(", ", 2)), F->hi_2084), rt_str(", ", 2)), F->v_2085), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_774((*(P1034)rt_nil_check(F->s_622)).a, &F->lv_2075, &F->t_2076, &F->c_2078, &F->ro_2079);
if (F->ro_2079) {
f_fail_23((*(P1034)rt_nil_check(F->s_622)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_313(F->t_2076)) && (!f_exports_op_463((*(P1040)rt_nil_check(F->t_2076)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23((*(P1034)rt_nil_check(F->s_622)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_2076)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_2086 = rt_str_copy(f_gexpr_in_816((*(P1034)rt_nil_check(F->s_622)).b, F->t_2076, F->c_2078, &F->vt_2077));
f_check_type_232(F->vt_2077, F->t_2076, (*(P1034)rt_nil_check(F->s_622)).line);
f_ptr_subtype_check_500(F->t_2076, F->c_2078, (*(P1034)rt_nil_check(F->s_622)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_416(&(((P1027)rt_nil_check(F->lv_2075))->all), F->t_2076, &F->v_2086, F->c_2078); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_625(P1034 s_624) {
  struct f_st_call_625fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_624 = s_624;
F->c_2087 = NULL;
F->c_2087 = (*(P1034)rt_nil_check(F->s_624)).a;
F->t_2088 = NULL;
if ((((*(P1034)rt_nil_check(F->c_2087)).kind == (((rt_int)7LL))) || ((*(P1034)rt_nil_check(F->c_2087)).kind == (((rt_int)12LL))))) {
F->x_2089 = NULL;
F->x_2089 = f_nn_65((((rt_int)10LL)), (*(P1034)rt_nil_check(F->c_2087)).line);
(*(P1034)rt_nil_check(F->x_2089)).a = F->c_2087;
F->c_2087 = F->x_2089;
}
if (((*(P1034)rt_nil_check(F->c_2087)).kind != (((rt_int)10LL)))) {
f_fail_23((*(P1034)rt_nil_check(F->s_624)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_956(F->c_2087, 1, &F->t_2088), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_627(P1034 s_626) {
  struct f_st_if_627fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_626 = s_626;
F->a_2090 = NULL;
F->a_2090 = (*(P1034)rt_nil_check(F->s_626)).a;
F->first_2091 = 1;
F->t_2092 = NULL;
F->taken_2093 = 0;
F->mv_2095 = NULL;
while (((F->a_2090 != NULL) && (!F->taken_2093))) {
F->mv_2095 = f_meval_380((*(P1034)rt_nil_check(F->a_2090)).a, &F->ok_2094);
if (((F->ok_2094 && ((*(P1053)rt_nil_check(F->mv_2095)).kind == (((rt_int)2LL)))) && ((*(P1053)rt_nil_check(F->mv_2095)).i == ((rt_int)0LL)))) {
F->a_2090 = (*(P1034)rt_nil_check(F->a_2090)).next;
} else {
if ((F->ok_2094 && ((*(P1053)rt_nil_check(F->mv_2095)).kind == (((rt_int)2LL))))) {
F->taken_2093 = 1;
if (F->first_2091) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_2096 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->a_2090)).a, g_ty_bool_1120, &F->t_2092));
f_check_type_232(F->t_2092, g_ty_bool_1120, (*(P1034)rt_nil_check(F->s_626)).line);
if (F->first_2091) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_2096), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_2096), rt_str(") {", 3)); b_; }));
}
}
F->first_2091 = 0;
f_gen_body_602((*(P1034)rt_nil_check(F->a_2090)).b);
F->a_2090 = (*(P1034)rt_nil_check(F->a_2090)).next;
}
}
if ((((*(P1034)rt_nil_check(F->s_626)).flag == ((rt_int)1LL)) && (!F->taken_2093))) {
if (F->first_2091) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_2091 = 0;
f_gen_body_602((*(P1034)rt_nil_check(F->s_626)).b);
}
if ((!F->first_2091)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_manifest_case_629(P1034 s_628) {
  struct f_manifest_case_629fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_628 = s_628;
F->sv_2098 = NULL;
F->sv_2098 = f_meval_380((*(P1034)rt_nil_check(F->s_628)).a, &F->ok_2097);
F->a_2099 = NULL;
F->a_2099 = (*(P1034)rt_nil_check(F->s_628)).b;
if (((!F->ok_2097) || ((((*(P1053)rt_nil_check(F->sv_2098)).kind != (((rt_int)1LL))) && ((*(P1053)rt_nil_check(F->sv_2098)).kind != (((rt_int)2LL)))) && ((*(P1053)rt_nil_check(F->sv_2098)).kind != (((rt_int)4LL)))))) {
F->result_ = 0;
goto ret_;
}
while ((F->a_2099 != NULL)) {
F->lab_2100 = NULL;
F->lab_2100 = (*(P1034)rt_nil_check(F->a_2099)).a;
while ((F->lab_2100 != NULL)) {
F->lo_2101 = NULL;
F->lo_2101 = f_meval_380((*(P1034)rt_nil_check(F->lab_2100)).a, &F->ok_2097);
F->hi_2102 = NULL;
F->hi_2102 = F->lo_2101;
if (((!F->ok_2097) || ((*(P1053)rt_nil_check(F->lo_2101)).kind != (*(P1053)rt_nil_check(F->sv_2098)).kind))) {
F->result_ = 0;
goto ret_;
}
if (((*(P1034)rt_nil_check(F->lab_2100)).b != NULL)) {
F->hi_2102 = f_meval_380((*(P1034)rt_nil_check(F->lab_2100)).b, &F->ok_2097);
if ((((!F->ok_2097) || ((*(P1053)rt_nil_check(F->hi_2102)).kind != (*(P1053)rt_nil_check(F->sv_2098)).kind)) || ((*(P1053)rt_nil_check(F->sv_2098)).kind == (((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
}
if (((((*(P1053)rt_nil_check(F->sv_2098)).kind == (((rt_int)4LL))) && rt_str_eq((((P1027)rt_nil_check((*(P1053)rt_nil_check(F->sv_2098)).s))->all), (((P1027)rt_nil_check((*(P1053)rt_nil_check(F->lo_2101)).s))->all))) || ((((*(P1053)rt_nil_check(F->sv_2098)).kind != (((rt_int)4LL))) && ((*(P1053)rt_nil_check(F->lo_2101)).i <= (*(P1053)rt_nil_check(F->sv_2098)).i)) && ((*(P1053)rt_nil_check(F->sv_2098)).i <= (*(P1053)rt_nil_check(F->hi_2102)).i)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_602((*(P1034)rt_nil_check(F->a_2099)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
F->result_ = 1;
goto ret_;
}
F->lab_2100 = (*(P1034)rt_nil_check(F->lab_2100)).next;
}
F->a_2099 = (*(P1034)rt_nil_check(F->a_2099)).next;
}
if (((*(P1034)rt_nil_check(F->s_628)).flag == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_602((*(P1034)rt_nil_check(F->s_628)).c);
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

static void f_st_case_631(P1034 s_630) {
  struct f_st_case_631fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_630 = s_630;
F->st_2103 = NULL;
F->vt_2104 = NULL;
F->first_2105 = 1;
F->a_2106 = NULL;
F->a_2106 = (*(P1034)rt_nil_check(F->s_630)).b;
if (f_manifest_case_629(F->s_630)) {
goto ret_;
}
f_st_case2_633(F->s_630);
ret_:
  RT_FPOP();
  return;
}

static void f_st_case2_633(P1034 s_632) {
  struct f_st_case2_633fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_632 = s_632;
F->st_2107 = NULL;
F->vt_2108 = NULL;
F->first_2109 = 1;
F->a_2110 = NULL;
F->a_2110 = (*(P1034)rt_nil_check(F->s_632)).b;
F->sel_2111 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->s_632)).a, NULL, &F->st_2107));
F->tmp_2112 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->st_2107)), rt_str(" ", 1)), F->tmp_2112), rt_str(" = ", 3)), F->sel_2111), rt_str(";", 1)); b_; }));
while ((F->a_2110 != NULL)) {
F->lab_2113 = NULL;
F->lab_2113 = (*(P1034)rt_nil_check(F->a_2110)).a;
F->conds_2114 = NULL;
F->conds_2114 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_2113 != NULL)) {
if (((*(P1034)rt_nil_check(F->lab_2113)).b == NULL)) {
F->v_2115 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->lab_2113)).a, F->st_2107, &F->vt_2108));
f_check_type_232(F->vt_2108, F->st_2107, (*(P1034)rt_nil_check(F->s_632)).line);
F->conds_2114 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->conds_2114))->all), rt_str(" || ", 4)), f_eq_code_423(F->st_2107, &F->tmp_2112, &F->v_2115)); b_; }));
} else if ((((*(P1040)rt_nil_check(F->st_2107)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->st_2107)).ltp != NULL))) {
F->lo_2116 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->lab_2113)).a, F->st_2107, &F->vt_2108));
F->hi_2117 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->lab_2113)).b, F->st_2107, &F->vt_2108));
F->conds_2114 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->conds_2114))->all), rt_str(" || (!", 6)), f_user_call2_405((*(P1040)rt_nil_check(F->st_2107)).ltp, &F->tmp_2112, 1, &F->lo_2116, 0)), rt_str(" && !", 5)), f_user_call2_405((*(P1040)rt_nil_check(F->st_2107)).ltp, &F->hi_2117, 0, &F->tmp_2112, 1)), rt_str(")", 1)); b_; }));
} else {
F->lo_2118 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->lab_2113)).a, F->st_2107, &F->vt_2108));
F->hi_2119 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->lab_2113)).b, F->st_2107, &F->vt_2108));
F->conds_2114 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->conds_2114))->all), rt_str(" || (", 5)), F->tmp_2112), rt_str(" >= ", 4)), F->lo_2118), rt_str(" && ", 4)), F->tmp_2112), rt_str(" <= ", 4)), F->hi_2119), rt_str(")", 1)); b_; }));
}
F->lab_2113 = (*(P1034)rt_nil_check(F->lab_2113)).next;
}
if (F->first_2109) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1027)rt_nil_check(F->conds_2114))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1027)rt_nil_check(F->conds_2114))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2109 = 0;
f_gen_body_602((*(P1034)rt_nil_check(F->a_2110)).b);
F->a_2110 = (*(P1034)rt_nil_check(F->a_2110)).next;
}
if (F->first_2109) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P1034)rt_nil_check(F->s_632)).flag == ((rt_int)1LL))) {
f_gen_body_602((*(P1034)rt_nil_check(F->s_632)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_user_for_637(P1034 s_634, P1040 t_635, P1036 c_636) {
  struct f_user_for_637fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_634 = s_634;
F->t_635 = t_635;
F->c_636 = c_636;
F->y_2120 = NULL;
F->y_2120 = f_new_sym_181((((rt_int)2LL)), (*(P1034)rt_nil_check(F->s_634)).name);
F->saved_2121 = NULL;
F->saved_2121 = g_psub_1095;
F->p_2122 = NULL;
F->p_2122 = (*(P1040)rt_nil_check(F->t_635)).tparams;
F->iv_2123 = NULL;
F->iv_2123 = f_nn_65((((rt_int)7LL)), (*(P1034)rt_nil_check(F->s_634)).line);
F->st_2124 = NULL;
F->access_2125 = rt_str_copy(f_storage_524(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->s_634)).name))->all), F->t_635));
F->uv_2126 = NULL;
F->uv_2126 = f_mk_3(&F->access_2125);
if (((*(P1040)rt_nil_check(F->t_635)).tparams != NULL)) {
F->uv_2126 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->access_2125, rt_str(".all", 4)); b_; }));
}
if ((((!f_scalar_kind_186(f_base_of_223((*(P1040)rt_nil_check(F->t_635)).under))) || ((*(P1040)rt_nil_check(F->t_635)).elemcons == NULL)) || ((*(P1036)rt_nil_check((*(P1040)rt_nil_check(F->t_635)).elemcons)).lo == NULL))) {
f_fail_23((*(P1034)rt_nil_check(F->s_634)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a FOR over ", 11), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_635)).name))->all)), rt_str(" needs an underlying subtype with a range", 41)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_init_storage_346(&F->access_2125, F->t_635, F->c_636);
while ((F->p_2122 != NULL)) {
F->l1_2127 = NULL;
F->l2_2128 = NULL;
{ R1039 *cell2129 = rt_alloc(sizeof(R1039));
(*cell2129).s = NULL;
(*cell2129).next = NULL;
F->l1_2127 = cell2129;
}
{ R1039 *cell2130 = rt_alloc(sizeof(R1039));
(*cell2130).s = NULL;
(*cell2130).next = NULL;
F->l2_2128 = cell2130;
}
(*(P1038)rt_nil_check(F->l1_2127)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2122)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1038)rt_nil_check(F->l2_2128)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(F->access_2125, rt_str(".p_", 3)), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2122)).name))->all))); b_; }));
(*(P1038)rt_nil_check(F->l1_2127)).next = F->l2_2128;
(*(P1038)rt_nil_check(F->l2_2128)).next = g_psub_1095;
g_psub_1095 = F->l1_2127;
F->p_2122 = (*(P1034)rt_nil_check(F->p_2122)).next;
}
{
F->lo_2131 = rt_str_copy(f_subst_319(&(((P1027)rt_nil_check((*(P1036)rt_nil_check((*(P1040)rt_nil_check(F->t_635)).elemcons)).lo))->all)));
F->hi_2132 = rt_str_copy(f_subst_319(&(((P1027)rt_nil_check((*(P1036)rt_nil_check((*(P1040)rt_nil_check(F->t_635)).elemcons)).hi))->all)));
g_psub_1095 = F->saved_2121;
if (((*(P1034)rt_nil_check(F->s_634)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->uv_2126))->all), rt_str(" = ", 3)), F->hi_2132), rt_str("; if (", 6)), F->lo_2131), rt_str(" <= ", 4)), (((P1027)rt_nil_check(F->uv_2126))->all)), rt_str(") for (;;) {", 12)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->uv_2126))->all), rt_str(" = ", 3)), F->lo_2131), rt_str("; if (", 6)), (((P1027)rt_nil_check(F->uv_2126))->all)), rt_str(" <= ", 4)), F->hi_2132), rt_str(") for (;;) {", 12)); b_; }));
}
f_open_scope_177();
(*(P1044)rt_nil_check(F->y_2120)).t = F->t_635;
(*(P1044)rt_nil_check(F->y_2120)).c = F->c_636;
f_bind_527(F->y_2120, &F->access_2125);
(*(P1044)rt_nil_check(F->y_2120)).ro_flag = 1;
f_define_168(F->y_2120, (*(P1034)rt_nil_check(F->s_634)).line);
f_gen_body_602((*(P1034)rt_nil_check(F->s_634)).b);
(*(P1034)rt_nil_check(F->iv_2123)).name = (*(P1034)rt_nil_check(F->s_634)).name;
if (((*(P1034)rt_nil_check(F->s_634)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1027)rt_nil_check(F->uv_2126))->all)), rt_str(" == ", 4)), F->lo_2131), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_416(&F->access_2125, F->t_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_956(f_call_node_691(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRED", 4); b_; }), F->iv_2123, (*(P1034)rt_nil_check(F->s_634)).line), 0, &F->st_2124); b_; }), F->c_636); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1027)rt_nil_check(F->uv_2126))->all)), rt_str(" == ", 4)), F->hi_2132), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_416(&F->access_2125, F->t_635, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_956(f_call_node_691(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUCC", 4); b_; }), F->iv_2123, (*(P1034)rt_nil_check(F->s_634)).line), 0, &F->st_2124); b_; }), F->c_636); b_; }));
}
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} }", 3); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_639(P1034 s_638) {
  struct f_st_repeat_639fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_638 = s_638;
F->t_2133 = NULL;
F->c_2134 = NULL;
if (((*(P1034)rt_nil_check(F->s_638)).flag == ((rt_int)0LL))) {
F->cond_2135 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->s_638)).a, g_ty_bool_1120, &F->t_2133));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_2135), rt_str(") {", 3)); b_; }));
f_gen_body_602((*(P1034)rt_nil_check(F->s_638)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_2133 = f_resolve_subtype_268((*(P1034)rt_nil_check(F->s_638)).a, &F->c_2134);
if ((((*(P1040)rt_nil_check(F->t_2133)).kind == (((rt_int)15LL))) && (((*(P1040)rt_nil_check(F->t_2133)).tparams != NULL) || (!f_scalar_kind_186(f_base_of_223(F->t_2133)))))) {
f_user_for_637(F->s_638, F->t_2133, F->c_2134);
goto ret_;
}
F->c_2134 = f_base_cons_226(F->t_2133, F->c_2134);
if ((((*(P1040)rt_nil_check(f_base_of_223(F->t_2133))).kind == (((rt_int)4LL))) && ((*(P1036)rt_nil_check(F->c_2134)).lo == NULL))) {
F->c_2134 = f_new_cons_184();
(*(P1036)rt_nil_check(F->c_2134)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P1036)rt_nil_check(F->c_2134)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_71((*(P1040)rt_nil_check(f_base_of_223(F->t_2133))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P1036)rt_nil_check(F->c_2134)).lo == NULL)) {
f_fail_23((*(P1034)rt_nil_check(F->s_638)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_2136 = rt_str_copy(f_storage_524(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->s_638)).name))->all), F->t_2133));
F->lov_2137 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_2138 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_2139 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_2140 = NULL;
F->y_2140 = f_new_sym_181((((rt_int)2LL)), (*(P1034)rt_nil_check(F->s_638)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_2137), rt_str(" = ", 3)), f_clo_193(F->c_2134)), rt_str(", ", 2)), F->hiv_2138), rt_str(" = ", 3)), f_chi_195(F->c_2134)), rt_str(";", 1)); b_; }));
if (((*(P1034)rt_nil_check(F->s_638)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_2139), rt_str(" = ", 3)), F->hiv_2138), rt_str("; ", 2)), F->it_2139), rt_str(" >= ", 4)), F->lov_2137), rt_str("; ", 2)), F->it_2139), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_2139), rt_str(" = ", 3)), F->lov_2137), rt_str("; ", 2)), F->it_2139), rt_str(" <= ", 4)), F->hiv_2138), rt_str("; ", 2)), F->it_2139), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_2136, rt_str(" = ", 3)), F->it_2139), rt_str(";", 1)); b_; }));
f_open_scope_177();
(*(P1044)rt_nil_check(F->y_2140)).t = F->t_2133;
(*(P1044)rt_nil_check(F->y_2140)).c = F->c_2134;
f_bind_527(F->y_2140, &F->access_2136);
(*(P1044)rt_nil_check(F->y_2140)).ro_flag = 1;
f_define_168(F->y_2140, (*(P1034)rt_nil_check(F->s_638)).line);
f_gen_body_602((*(P1034)rt_nil_check(F->s_638)).b);
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_641(P1034 s_640) {
  struct f_st_exit_641fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_640 = s_640;
F->x_2141 = NULL;
F->x_2141 = g_exits_1112;
while ((F->x_2141 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1059)rt_nil_check(F->x_2141)).match))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->s_640)).name))->all))) {
f_pop_frames_608((*(P1059)rt_nil_check(F->x_2141)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P1027)rt_nil_check((*(P1059)rt_nil_check(F->x_2141)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_2141 = (*(P1059)rt_nil_check(F->x_2141)).next;
}
f_fail_23((*(P1034)rt_nil_check(F->s_640)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->s_640)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_643(P1034 s_642) {
  struct f_st_return_643fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_642 = s_642;
F->vt_2142 = NULL;
if ((g_cap_ret_1104 != NULL)) {
if (((*(P1034)rt_nil_check(F->s_642)).a != NULL)) {
f_fail_23((*(P1034)rt_nil_check(F->s_642)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_608(g_ret_frames_1106);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(g_cap_rflag_1105))->all), rt_str(" = 1; goto ", 11)), (((P1027)rt_nil_check(g_cap_ret_1104))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!g_in_func_1090)) {
f_pop_frames_608(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P1040)rt_nil_check((*(P1044)rt_nil_check(g_func_sym_1102)).result)).kind == (((rt_int)9LL)))) {
if (((*(P1034)rt_nil_check(F->s_642)).a != NULL)) {
f_fail_23((*(P1034)rt_nil_check(F->s_642)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_608(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P1034)rt_nil_check(F->s_642)).a == NULL)) {
f_fail_23((*(P1034)rt_nil_check(F->s_642)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_2143 = rt_str_copy(f_gexpr_in_816((*(P1034)rt_nil_check(F->s_642)).a, (*(P1044)rt_nil_check(g_func_sym_1102)).result, g_func_rc_1103, &F->vt_2142));
f_check_type_232(F->vt_2142, (*(P1044)rt_nil_check(g_func_sym_1102)).result, (*(P1034)rt_nil_check(F->s_642)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_647((*(P1044)rt_nil_check(g_func_sym_1102)).result, g_func_rc_1103, &F->v_2143)), rt_str(";", 1)); b_; }));
f_pop_frames_608(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_647(P1040 t_644, P1036 c_645, rstr *v_646) {
  struct f_result_checked_647fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_644 = t_644;
F->c_645 = c_645;
F->v_646 = v_646;
if ((F->c_645 == NULL)) {
F->result_ = (*F->v_646);
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->t_644)).kind == (((rt_int)5LL))) && ((*(P1036)rt_nil_check(F->c_645)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_646)), rt_str(", ", 2)), (((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_645)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->t_644)).kind == (((rt_int)6LL))) && ((*(P1036)rt_nil_check(F->c_645)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->t_644)), rt_str(" r_ = ", 6)), (*F->v_646)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_645)).lo))->all)), rt_str(", ", 2)), (((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_645)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_213(F->t_644, F->c_645, &(*F->v_646));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_650(rstr *name_648, rt_int line_649) {
  struct f_exc_id_650fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_648 = name_648;
F->line_649 = line_649;
F->y_2144 = NULL;
F->y_2144 = f_lookup_163(&(*F->name_648));
if (((F->y_2144 != NULL) && ((*(P1044)rt_nil_check(F->y_2144)).kind == (((rt_int)7LL))))) {
F->result_ = (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_2144)).cname))->all);
goto ret_;
}
if (((((rt_int)(((*F->name_648)).len)) > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_648), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_648)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_649, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_648), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_652(P1034 s_651) {
  struct f_st_guard_652fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_651 = s_651;
F->h_2145 = NULL;
F->h_2145 = (*(P1034)rt_nil_check(F->s_651)).b;
F->first_2146 = 1;
F->hv_2147 = NULL;
{
F->f_2148 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_2149 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_610(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2148), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_2148), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2148), rt_str(")) {", 4)); b_; }));
f_gen_body_602((*(P1034)rt_nil_check(F->s_651)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2148), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_611();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2148), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_2149), rt_str(" = rt_xcur;", 11)); b_; }));
{ R1039 *cell2150 = rt_alloc(sizeof(R1039));
(*cell2150).s = NULL;
(*cell2150).next = NULL;
F->hv_2147 = cell2150;
}
(*(P1038)rt_nil_check(F->hv_2147)).s = f_mk_3(&F->x_2149);
(*(P1038)rt_nil_check(F->hv_2147)).next = g_handlers_1115;
g_handlers_1115 = F->hv_2147;
{
F->h1_2151 = NULL;
F->h1_2151 = (*(P1034)rt_nil_check(F->s_651)).b;
F->seen_2152 = NULL;
while ((F->h1_2151 != NULL)) {
F->n1_2153 = NULL;
F->n1_2153 = (*(P1034)rt_nil_check(F->h1_2151)).a;
while ((F->n1_2153 != NULL)) {
if (f_seen_name_430(F->seen_2152, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->n1_2153)).name))->all))) {
f_fail_23((*(P1034)rt_nil_check(F->n1_2153)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->n1_2153)).name))->all), rt_str(" has two handlers in one guard statement", 40)); b_; }));
}
F->seen_2152 = f_add_line_906(F->seen_2152, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->n1_2153)).name))->all));
F->n1_2153 = (*(P1034)rt_nil_check(F->n1_2153)).next;
}
F->h1_2151 = (*(P1034)rt_nil_check(F->h1_2151)).next;
}
}
while ((F->h_2145 != NULL)) {
F->n_2154 = NULL;
F->n_2154 = (*(P1034)rt_nil_check(F->h_2145)).a;
F->conds_2155 = NULL;
F->conds_2155 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_2154 != NULL)) {
F->conds_2155 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->conds_2155))->all), rt_str(" || ", 4)), F->x_2149), rt_str(" == ", 4)), f_exc_id_650(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->n_2154)).name))->all), (*(P1034)rt_nil_check(F->s_651)).line)); b_; }));
F->n_2154 = (*(P1034)rt_nil_check(F->n_2154)).next;
}
if (F->first_2146) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1027)rt_nil_check(F->conds_2155))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1027)rt_nil_check(F->conds_2155))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2146 = 0;
f_gen_body_602((*(P1034)rt_nil_check(F->h_2145)).b);
F->h_2145 = (*(P1034)rt_nil_check(F->h_2145)).next;
}
if (F->first_2146) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P1034)rt_nil_check(F->s_651)).flag == ((rt_int)1LL))) {
f_gen_body_602((*(P1034)rt_nil_check(F->s_651)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_2149), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_1115 = (*(P1038)rt_nil_check(g_handlers_1115)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_654(P1034 s_653) {
  struct f_st_alloc_654fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_653 = s_653;
F->lv_2156 = NULL;
F->t_2157 = NULL;
F->target_2158 = NULL;
F->vt_2159 = NULL;
F->c_2160 = NULL;
F->tc_2161 = NULL;
F->d_2163 = NULL;
F->p_2164 = NULL;
F->a_2165 = NULL;
f_lvalue_774((*(P1034)rt_nil_check(F->s_653)).a, &F->lv_2156, &F->t_2157, &F->c_2160, &F->ro_2162);
if (((*(P1040)rt_nil_check(F->t_2157)).kind != (((rt_int)8LL)))) {
f_fail_23((*(P1034)rt_nil_check(F->s_653)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_480(F->t_2157);
F->d_2163 = (*(P1040)rt_nil_check(F->t_2157)).decl;
F->target_2158 = (*(P1040)rt_nil_check(F->t_2157)).target;
if ((f_list_len_71((*(P1034)rt_nil_check(F->s_653)).b) != f_list_len_71((*(P1034)rt_nil_check(F->d_2163)).b))) {
f_fail_23((*(P1034)rt_nil_check(F->s_653)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_71((*(P1034)rt_nil_check(F->d_2163)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P1034)rt_nil_check(F->d_2163)).b != NULL)) {
f_alloc_cell_492(F->s_653, &(((P1027)rt_nil_check(F->lv_2156))->all), F->t_2157, F->c_2160);
goto ret_;
}
{
F->tcn_2166 = rt_str_copy(f_ctype_234(F->target_2158));
F->cell_2167 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_351(F->target_2158)) {
F->fn_2168 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_1099 = 1;
g_uses_findyn_1101 = 1;
f_put_27(g_out_protos_1083, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_2168), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_2168), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (g_in_func_1090) {
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1027)rt_nil_check((*(P1044)rt_nil_check(g_func_sym_1102)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_2166), rt_str(" *)cell_)", 9)); b_; }), F->target_2158)); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (g_in_func_1090) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_2166), rt_str(" *", 2)), F->cell_2167), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_2166), rt_str("), ", 3)), F->fn_2168), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_2166), rt_str(" *", 2)), F->cell_2167), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_2166), rt_str("), ", 3)), F->fn_2168), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_2166), rt_str(" *", 2)), F->cell_2167), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_2166), rt_str("));", 3)); b_; }));
}
f_open_scope_177();
f_bind_ptr_params_487((*(P1034)rt_nil_check(F->d_2163)).d, f_ptr_args_482(F->c_2160), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), (*(P1034)rt_nil_check(F->s_653)).line);
F->vt_2159 = f_resolve_subtype_268((*(P1034)rt_nil_check(F->d_2163)).a, &F->tc_2161);
g_mark_uninit_1110 = (!f_suppressed_517(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; })));
f_init_storage_346(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_2167), rt_str(")", 1)); b_; }), F->target_2158, F->tc_2161);
g_mark_uninit_1110 = 0;
f_close_scope_178();
if (((*(P1034)rt_nil_check(F->s_653)).c != NULL)) {
F->v_2169 = rt_str_copy(f_gexpr_in_816((*(P1034)rt_nil_check(F->s_653)).c, F->target_2158, F->tc_2161, &F->vt_2159));
f_check_type_232(F->vt_2159, F->target_2158, (*(P1034)rt_nil_check(F->s_653)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_416(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_2167), rt_str(")", 1)); b_; }), F->target_2158, &F->v_2169, F->tc_2161); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->lv_2156))->all), rt_str(" = ", 3)), F->cell_2167), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_656(P1034 e_655) {
  struct f_act_ref_656fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_655 = e_655;
F->lv_2170 = NULL;
F->t_2171 = NULL;
F->c_2172 = NULL;
if (((((*(P1034)rt_nil_check(F->e_655)).kind == (((rt_int)7LL))) && rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_655)).name))->all), rt_str("ME", 2))) && (f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_768(F->e_655))) {
F->v_2174 = rt_str_copy(f_gexpr_805(F->e_655, g_ty_act_1129, &F->t_2171));
if (((*(P1040)rt_nil_check(F->t_2171)).kind != (((rt_int)14LL)))) {
f_fail_23((*(P1034)rt_nil_check(F->e_655)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_2174;
goto ret_;
}
f_lvalue_774(F->e_655, &F->lv_2170, &F->t_2171, &F->c_2172, &F->ro_2173);
if (((*(P1040)rt_nil_check(F->t_2171)).kind != (((rt_int)14LL)))) {
f_fail_23((*(P1034)rt_nil_check(F->e_655)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P1027)rt_nil_check(F->lv_2170))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_658(P1034 s_657) {
  struct f_st_create_658fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_657 = s_657;
F->y_2175 = NULL;
F->y_2175 = f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->s_657)).name))->all));
F->pm_2176 = NULL;
F->a_2177 = NULL;
F->a_2177 = (*(P1034)rt_nil_check(F->s_657)).b;
F->lv_2178 = NULL;
F->lt_2179 = NULL;
F->vt_2180 = NULL;
F->lc_2181 = NULL;
if (((F->y_2175 != NULL) && ((*(P1044)rt_nil_check(F->y_2175)).kind == (((rt_int)10LL))))) {
F->y_2175 = f_instantiate_750(F->y_2175, (*(P1034)rt_nil_check(F->s_657)).e, (*(P1034)rt_nil_check(F->s_657)).b, (*(P1034)rt_nil_check(F->s_657)).line);
}
if (((F->y_2175 == NULL) || ((*(P1044)rt_nil_check(F->y_2175)).kind != (((rt_int)9LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->s_657)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->s_657)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_2176 = (*(P1044)rt_nil_check(F->y_2175)).params;
{
F->at_2183 = NULL;
F->ac_2184 = NULL;
F->act_2186 = NULL;
F->nf_2187 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_774((*(P1034)rt_nil_check(F->s_657)).a, &F->lv_2178, &F->at_2183, &F->ac_2184, &F->aro_2185);
if (((*(P1040)rt_nil_check(F->at_2183)).kind == (((rt_int)14LL)))) {
F->act_2186 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_656((*(P1034)rt_nil_check(F->s_657)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_2175)).cname))->all)), rt_str("fr *", 4)), F->nf_2187), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_2187), rt_str(");", 2)); b_; }));
if (((*(P1044)rt_nil_check(F->y_2175)).level > ((rt_int)0LL))) {
F->link_2188 = NULL;
F->link_2188 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2190 = ((rt_int)1LL), hi2191 = rt_sub(g_cur_level_1091, (*(P1044)rt_nil_check(F->y_2175)).level);
for (rt_int it2192 = lo2190; it2192 <= hi2191; it2192++) {
F->i_2189 = it2192;
F->link_2188 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->link_2188))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2187, rt_str("->up = ", 7)), (((P1027)rt_nil_check(F->link_2188))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_2177 != NULL) && (F->pm_2176 != NULL))) {
if (((*(P1046)rt_nil_check(F->pm_2176)).mode == (((rt_int)1LL)))) {
F->v_2193 = rt_str_copy(f_gexpr_in_816(F->a_2177, (*(P1046)rt_nil_check(F->pm_2176)).t, (*(P1046)rt_nil_check(F->pm_2176)).c, &F->vt_2180));
f_check_type_232(F->vt_2180, (*(P1046)rt_nil_check(F->pm_2176)).t, (*(P1034)rt_nil_check(F->s_657)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2187, rt_str("->", 2)), (((P1027)rt_nil_check((*(P1046)rt_nil_check(F->pm_2176)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_419((*(P1046)rt_nil_check(F->pm_2176)).t, &F->v_2193)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_774(F->a_2177, &F->lv_2178, &F->lt_2179, &F->lc_2181, &F->ro_2182);
f_check_type_232(F->lt_2179, (*(P1046)rt_nil_check(F->pm_2176)).t, (*(P1034)rt_nil_check(F->s_657)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2187, rt_str("->", 2)), (((P1027)rt_nil_check((*(P1046)rt_nil_check(F->pm_2176)).cfield))->all)), rt_str(" = &", 4)), (((P1027)rt_nil_check(F->lv_2178))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_186((*(P1046)rt_nil_check(F->pm_2176)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2187, rt_str("->", 2)), (((P1027)rt_nil_check((*(P1046)rt_nil_check(F->pm_2176)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_198(F->lt_2179, F->lc_2181)), rt_str("; ", 2)), F->nf_2187), rt_str("->", 2)), (((P1027)rt_nil_check((*(P1046)rt_nil_check(F->pm_2176)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_201(F->lt_2179, F->lc_2181)), rt_str(";", 1)); b_; }));
}
}
F->a_2177 = (*(P1034)rt_nil_check(F->a_2177)).next;
F->pm_2176 = (*(P1046)rt_nil_check(F->pm_2176)).next;
}
if (((F->a_2177 != NULL) || (F->pm_2176 != NULL))) {
f_fail_23((*(P1034)rt_nil_check(F->s_657)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->s_657)).name))->all)); b_; }));
}
if ((F->act_2186 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P1027)rt_nil_check(F->act_2186))->all)), rt_str(", &", 3)), (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_2175)).cname))->all)), rt_str("decl, ", 6)), (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_2175)).cname))->all)), rt_str(", ", 2)), F->nf_2187), rt_str("); }", 4)); b_; }));
} else {
f_user_create_668(F->s_657, F->y_2175, &(((P1027)rt_nil_check(F->lv_2178))->all), F->at_2183, &F->nf_2187);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_662(rstr *name_659, P1040 t_660, rstr *place_661) {
  struct f_hidden_var_662fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_659 = name_659;
F->t_660 = t_660;
F->place_661 = place_661;
F->y_2194 = NULL;
F->y_2194 = f_new_sym_181((((rt_int)1LL)), f_mk_3(&(*F->name_659)));
(*(P1044)rt_nil_check(F->y_2194)).t = F->t_660;
(*(P1044)rt_nil_check(F->y_2194)).level = ((rt_int)0LL);
(*(P1044)rt_nil_check(F->y_2194)).access = f_mk_3(&(*F->place_661));
f_define_168(F->y_2194, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_668(P1034 s_663, P1044 y_664, rstr *uv_665, P1040 ut_666, rstr *nf_667) {
  struct f_user_create_668fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_663 = s_663;
F->y_664 = y_664;
F->uv_665 = uv_665;
F->ut_666 = ut_666;
F->nf_667 = nf_667;
F->t_2195 = NULL;
F->saved_2196 = NULL;
F->saved_2196 = g_code_1088;
F->hook_2197 = NULL;
F->hook_2197 = f_new_buffer_24();
F->un_2198 = NULL;
F->un_2198 = f_nn_65((((rt_int)7LL)), (*(P1034)rt_nil_check(F->s_663)).line);
F->hn_2199 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_2200 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_2201 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_2202 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_177();
f_hidden_var_662(&F->uname_2201, F->ut_666, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->ut_666)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P1034)rt_nil_check(F->un_2198)).name = f_mk_3(&F->uname_2201);
g_code_1088 = F->hook_2197;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_956(f_call_node_691(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_2198, (*(P1034)rt_nil_check(F->s_663)).line), 1, &F->t_2195)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_956(f_call_node_691(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_2198, (*(P1034)rt_nil_check(F->s_663)).line), 1, &F->t_2195)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_956(f_call_node_691(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_2198, (*(P1034)rt_nil_check(F->s_663)).line), 1, &F->t_2195)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_956(f_call_node_691(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_2198, (*(P1034)rt_nil_check(F->s_663)).line), 1, &F->t_2195)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_1088 = F->saved_2196;
f_put_27(g_out_protos_1083, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_2199), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_2199), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (g_in_func_1090) {
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1027)rt_nil_check((*(P1044)rt_nil_check(g_func_sym_1102)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_1085, F->hook_2197);
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_2200), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_2200, rt_str("->hook = ", 9)), F->hn_2199), rt_str("; ", 2)), F->aa_2200), rt_str("->ua = &", 8)), (*F->uv_665)), rt_str("; ", 2)), F->aa_2200), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_946(F->ut_666)), f_q_18()), rt_str(";", 1)); b_; }));
if (g_in_func_1090) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_2200, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_2200), rt_str(", &", 3)), (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_664)).cname))->all)), rt_str("decl, ", 6)), (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_664)).cname))->all)), rt_str(", ", 2)), (*F->nf_667)), rt_str(");", 2)); b_; }));
f_hidden_var_662(&F->aname_2202, g_ty_act_1129, &F->aa_2200);
{
F->start_2203 = NULL;
F->start_2203 = f_call_node_691(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P1034)rt_nil_check(F->s_663)).a, (*(P1034)rt_nil_check(F->s_663)).line);
F->an_2204 = NULL;
F->an_2204 = f_nn_65((((rt_int)7LL)), (*(P1034)rt_nil_check(F->s_663)).line);
(*(P1034)rt_nil_check(F->an_2204)).name = f_mk_3(&F->aname_2202);
(*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->start_2203)).b)).next = F->an_2204;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_956(F->start_2203, 1, &F->t_2195), rt_str(";", 1)); b_; }));
}
f_close_scope_178();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_673(P1034 inv_669, rstr *arr_670, rt_int i_671, int mixed_672) {
  struct f_wait_alt_673fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_669 = inv_669;
F->arr_670 = arr_670;
F->i_671 = i_671;
F->mixed_672 = mixed_672;
F->lv_2205 = NULL;
F->t_2206 = NULL;
F->vt_2207 = NULL;
F->c_2208 = NULL;
F->fn_2210 = NULL;
F->args_2211 = NULL;
F->slot_2212 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_670), rt_str("[", 1)), f_itos_7(F->i_671)), rt_str("]", 1)));
if ((((*(P1034)rt_nil_check(F->inv_669)).kind != (((rt_int)10LL))) || ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->inv_669)).a)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->inv_669)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_2210 = (*(P1034)rt_nil_check(F->inv_669)).a;
F->args_2211 = (*(P1034)rt_nil_check(F->inv_669)).b;
if ((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2210)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2210)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_774(F->args_2211, &F->lv_2205, &F->t_2206, &F->c_2208, &F->ro_2209);
if (((*(P1040)rt_nil_check(F->t_2206)).kind != (((rt_int)12LL)))) {
f_fail_23((*(P1034)rt_nil_check(F->inv_669)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2210)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_2213 = NULL;
F->dt_2214 = NULL;
f_lvalue_774((*(P1034)rt_nil_check(F->args_2211)).next, &F->dv_2213, &F->dt_2214, &F->c_2208, &F->ro_2209);
f_check_type_232(F->dt_2214, (*(P1040)rt_nil_check(F->t_2206)).elem, (*(P1034)rt_nil_check(F->inv_669)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2212, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P1027)rt_nil_check(F->lv_2205))->all)), rt_str(", &", 3)), (((P1027)rt_nil_check(F->dv_2213))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_2215 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_2216 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->args_2211)).next, (*(P1040)rt_nil_check(F->t_2206)).elem, &F->vt_2207));
f_check_type_232(F->vt_2207, (*(P1040)rt_nil_check(F->t_2206)).elem, (*(P1034)rt_nil_check(F->inv_669)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1040)rt_nil_check(F->t_2206)).elem), rt_str(" ", 1)), F->tmp_2215), rt_str(" = ", 3)), F->v_2216), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2212, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P1027)rt_nil_check(F->lv_2205))->all)), rt_str(", &", 3)), F->tmp_2215), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2210)).name))->all), rt_str("DELAY_UNTIL", 11)) && (f_list_len_71(F->args_2211) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2212, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_r_act_deadline(", 65)), f_act_delay_args_972(F->args_2211)), rt_str(")};", 3));
goto ret_;
} else if ((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2210)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2210)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_2217 = rt_str_copy(f_gexpr_805(F->args_2211, g_ty_int_1119, &F->vt_2207));
if ((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2210)).name))->all), rt_str("DELAY", 5)) && F->mixed_672)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2212, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_2217), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2210)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2212, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_2217), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2212, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_2217), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2210)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2212, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_656(F->args_2211)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23((*(P1034)rt_nil_check(F->inv_669)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2210)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_675(P1034 inv_674) {
  struct f_builtin_wait_675fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_674 = inv_674;
F->lv_2218 = NULL;
F->t_2219 = NULL;
F->c_2220 = NULL;
F->saved_2222 = NULL;
F->saved_2222 = g_code_1088;
F->ok_2223 = 0;
if ((((*(P1034)rt_nil_check(F->inv_674)).kind != (((rt_int)10LL))) || ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->inv_674)).a)).kind != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->inv_674)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->inv_674)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->inv_674)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->inv_674)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->inv_674)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_1117 = rt_add(g_trial_1117, ((rt_int)1LL));
g_code_1088 = f_new_buffer_24();
{ rt_frame xf2224;
if (RT_TRY(xf2224)) {
f_lvalue_774((*(P1034)rt_nil_check(F->inv_674)).b, &F->lv_2218, &F->t_2219, &F->c_2220, &F->ro_2221);
F->ok_2223 = ((*(P1040)rt_nil_check(F->t_2219)).kind == (((rt_int)12LL)));
RT_POP(xf2224);
} else {
RT_POP(xf2224);
int x2225 = rt_xcur;
if (0 || x2225 == ex_compile_error_1) {
F->ok_2223 = 0;
} else {
rt_raise(x2225);
}
}
}
g_trial_1117 = rt_sub(g_trial_1117, ((rt_int)1LL));
g_code_1088 = F->saved_2222;
F->result_ = F->ok_2223;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_680(P1034 inv_676, rstr *op_677, rstr *q_678, int is_stmt_679) {
  struct f_wait_op_680fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_676 = inv_676;
F->op_677 = op_677;
F->q_678 = q_678;
F->is_stmt_679 = is_stmt_679;
F->x_2226 = NULL;
F->x_2226 = f_nn_65((((rt_int)10LL)), (*(P1034)rt_nil_check(F->inv_676)).line);
F->f_2227 = NULL;
F->f_2227 = f_nn_65((((rt_int)7LL)), (*(P1034)rt_nil_check(F->inv_676)).line);
F->qn_2228 = NULL;
F->qn_2228 = f_nn_65((((rt_int)7LL)), (*(P1034)rt_nil_check(F->inv_676)).line);
F->t_2229 = NULL;
(*(P1034)rt_nil_check(F->f_2227)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->inv_676)).a)).name))->all), rt_str("_", 1)), (*F->op_677)); b_; }));
(*(P1034)rt_nil_check(F->qn_2228)).name = f_mk_3(&(*F->q_678));
(*(P1034)rt_nil_check(F->qn_2228)).next = (*(P1034)rt_nil_check(F->inv_676)).b;
(*(P1034)rt_nil_check(F->x_2226)).a = F->f_2227;
(*(P1034)rt_nil_check(F->x_2226)).b = F->qn_2228;
{
F->r_2230 = rt_str_copy(f_gcall_956(F->x_2226, F->is_stmt_679, &F->t_2229));
if ((!F->is_stmt_679)) {
f_check_type_232(F->t_2229, g_ty_bool_1120, (*(P1034)rt_nil_check(F->inv_676)).line);
}
F->result_ = F->r_2230;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_685(P1034 s_681, rstr *arr_682, rstr *w_683, rt_int n_684) {
  struct f_user_wait_685fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_681 = s_681;
F->arr_682 = arr_682;
F->w_683 = w_683;
F->n_684 = n_684;
F->a_2231 = NULL;
F->a_2231 = (*(P1034)rt_nil_check(F->s_681)).a;
F->i_2232 = ((rt_int)0LL);
F->tests_2233 = NULL;
F->tests_2233 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_2234 = NULL;
F->revokes_2234 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_177();
while ((F->a_2231 != NULL)) {
F->inv_2235 = NULL;
F->inv_2235 = (*(P1034)rt_nil_check(F->a_2231)).a;
while ((F->inv_2235 != NULL)) {
if (f_builtin_wait_675(F->inv_2235)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_673(F->inv_2235, &(*F->arr_682), F->i_2232, 1); b_; }));
} else {
F->st_2236 = NULL;
F->st_2236 = f_nn_65((((rt_int)80LL)), (*(P1034)rt_nil_check(F->inv_2235)).line);
F->c_2237 = NULL;
F->qt_2238 = NULL;
F->qname_2239 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_2240 = NULL;
F->y_2240 = f_new_sym_181((((rt_int)1LL)), f_mk_3(&F->qname_2239));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_682), rt_str("[", 1)), f_itos_7(F->i_2232)), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P1034)rt_nil_check(F->st_2236)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->inv_2235)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_2238 = f_resolve_subtype_268(F->st_2236, &F->c_2237);
{
F->access_2241 = rt_str_copy(f_storage_524(&F->qname_2239, F->qt_2238));
f_init_storage_346(&F->access_2241, F->qt_2238, F->c_2237);
(*(P1044)rt_nil_check(F->y_2240)).t = F->qt_2238;
(*(P1044)rt_nil_check(F->y_2240)).c = F->c_2237;
f_bind_527(F->y_2240, &F->access_2241);
f_define_168(F->y_2240, (*(P1034)rt_nil_check(F->inv_2235)).line);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_680(F->inv_2235, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_2239, 1), rt_str(";", 1)); b_; }));
F->tests_2233 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->tests_2233))->all), rt_str("if (", 4)), f_wait_op_680(F->inv_2235, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_2239, 0)), rt_str(") { ", 4)), f_wait_op_680(F->inv_2235, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_2239, 1)), rt_str("; ", 2)), (*F->w_683)), rt_str(" = ", 3)), f_itos_7(F->i_2232)), rt_str("; break; } ", 11)); b_; }));
F->revokes_2234 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->revokes_2234))->all), f_wait_op_680(F->inv_2235, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_2239, 1)), rt_str("; ", 2)); b_; }));
}
F->i_2232 = rt_add(F->i_2232, ((rt_int)1LL));
F->inv_2235 = (*(P1034)rt_nil_check(F->inv_2235)).next;
}
F->a_2231 = (*(P1034)rt_nil_check(F->a_2231)).next;
}
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_683)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P1027)rt_nil_check(F->tests_2233))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_683), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_684)), rt_str(", ", 2)), (*F->arr_682)), rt_str("); if (", 7)), (*F->w_683)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_684)), rt_str(", ", 2)), (*F->arr_682)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_683)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_683)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P1027)rt_nil_check(F->revokes_2234))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_687(P1034 s_686) {
  struct f_st_wait_687fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_686 = s_686;
F->a_2242 = NULL;
F->a_2242 = (*(P1034)rt_nil_check(F->s_686)).a;
F->n_2243 = ((rt_int)0LL);
F->first_2244 = 1;
F->inits_2245 = NULL;
F->inits_2245 = f_new_buffer_24();
F->user_2246 = 0;
F->arr_2247 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_2248 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_2242 != NULL)) {
F->inv_2249 = NULL;
F->inv_2249 = (*(P1034)rt_nil_check(F->a_2242)).a;
F->n_2243 = rt_add(F->n_2243, f_list_len_71((*(P1034)rt_nil_check(F->a_2242)).a));
while ((F->inv_2249 != NULL)) {
if ((!f_builtin_wait_675(F->inv_2249))) {
F->user_2246 = 1;
}
F->inv_2249 = (*(P1034)rt_nil_check(F->inv_2249)).next;
}
F->a_2242 = (*(P1034)rt_nil_check(F->a_2242)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_2247), rt_str("[", 1)), f_itos_7(F->n_2243)), rt_str("];", 2)); b_; }));
if (F->user_2246) {
f_user_wait_685(F->s_686, &F->arr_2247, &F->w_2248, F->n_2243);
} else {
F->a_2242 = (*(P1034)rt_nil_check(F->s_686)).a;
F->n_2243 = ((rt_int)0LL);
while ((F->a_2242 != NULL)) {
F->inv_2250 = NULL;
F->inv_2250 = (*(P1034)rt_nil_check(F->a_2242)).a;
while ((F->inv_2250 != NULL)) {
f_put_27(F->inits_2245, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_673(F->inv_2250, &F->arr_2247, F->n_2243, 0); b_; }));
F->n_2243 = rt_add(F->n_2243, ((rt_int)1LL));
F->inv_2250 = (*(P1034)rt_nil_check(F->inv_2250)).next;
}
F->a_2242 = (*(P1034)rt_nil_check(F->a_2242)).next;
}
f_splice_34(g_code_1088, F->inits_2245);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_2248), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_2243)), rt_str(", ", 2)), F->arr_2247), rt_str(");", 2)); b_; }));
}
F->a_2242 = (*(P1034)rt_nil_check(F->s_686)).a;
F->n_2243 = ((rt_int)0LL);
while ((F->a_2242 != NULL)) {
F->conds_2251 = NULL;
F->conds_2251 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo2253 = ((rt_int)1LL), hi2254 = f_list_len_71((*(P1034)rt_nil_check(F->a_2242)).a);
for (rt_int it2255 = lo2253; it2255 <= hi2254; it2255++) {
F->i_2252 = it2255;
F->conds_2251 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->conds_2251))->all), rt_str(" || ", 4)), F->w_2248), rt_str(" == ", 4)), f_itos_7(F->n_2243)); b_; }));
F->n_2243 = rt_add(F->n_2243, ((rt_int)1LL));
}
}
if (F->first_2244) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1027)rt_nil_check(F->conds_2251))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1027)rt_nil_check(F->conds_2251))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2244 = 0;
f_gen_body_602((*(P1034)rt_nil_check(F->a_2242)).b);
F->a_2242 = (*(P1034)rt_nil_check(F->a_2242)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1034 f_call_node_691(rstr *name_688, P1034 arg_689, rt_int line_690) {
  struct f_call_node_691fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_688 = name_688;
F->arg_689 = arg_689;
F->line_690 = line_690;
F->x_2256 = NULL;
F->x_2256 = f_nn_65((((rt_int)10LL)), F->line_690);
F->f_2257 = NULL;
F->f_2257 = f_nn_65((((rt_int)7LL)), F->line_690);
(*(P1034)rt_nil_check(F->f_2257)).name = f_mk_3(&(*F->name_688));
(*(P1034)rt_nil_check(F->x_2256)).a = F->f_2257;
(*(P1034)rt_nil_check(F->x_2256)).b = f_copy_node_847(F->arg_689);
(*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->x_2256)).b)).next = NULL;
F->result_ = F->x_2256;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_693(P1034 s_692) {
  struct f_user_region_693fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_692 = s_692;
F->t_2258 = NULL;
F->f_2259 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_2260 = rt_str_copy(f_gcall_956(f_call_node_691(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P1034)rt_nil_check(F->s_692)).a, (*(P1034)rt_nil_check(F->s_692)).line), 1, &F->t_2258));
F->unlock_2261 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_956(f_call_node_691(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P1034)rt_nil_check(F->s_692)).a, (*(P1034)rt_nil_check(F->s_692)).line), 1, &F->t_2258)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_2260), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2259), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2259), rt_str(")) {", 4)); b_; }));
f_push_cleanup_610(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2259), rt_str("); ", 3)), F->unlock_2261); b_; }));
f_gen_body_602((*(P1034)rt_nil_check(F->s_692)).b);
f_pop_cleanup_611();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2259), rt_str("); ", 3)), F->unlock_2261); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2259), rt_str("); ", 3)), F->unlock_2261), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_695(P1034 s_694) {
  struct f_st_region_695fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_694 = s_694;
F->lv_2262 = NULL;
F->t_2263 = NULL;
F->c_2264 = NULL;
F->lk_2266 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_2267 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_774((*(P1034)rt_nil_check(F->s_694)).a, &F->lv_2262, &F->t_2263, &F->c_2264, &F->ro_2265);
if (((*(P1040)rt_nil_check(F->t_2263)).kind != (((rt_int)13LL)))) {
f_user_region_693(F->s_694);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_2266), rt_str(" = &", 4)), (((P1027)rt_nil_check(F->lv_2262))->all)), rt_str("; rt_region_enter(", 18)), F->lk_2266), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2267), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2267), rt_str(")) {", 4)); b_; }));
f_push_cleanup_610(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2267), rt_str("); rt_region_leave(", 19)), F->lk_2266), rt_str(");", 2)); b_; }));
f_gen_body_602((*(P1034)rt_nil_check(F->s_694)).b);
f_pop_cleanup_611();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2267), rt_str("); rt_region_leave(", 19)), F->lk_2266), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2267), rt_str("); rt_region_leave(", 19)), F->lk_2266), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1034 f_gparam_698(P1034 g_696, rstr *name_697) {
  struct f_gparam_698fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_696 = g_696;
F->name_697 = name_697;
F->p_2268 = NULL;
F->p_2268 = (*(P1034)rt_nil_check(F->g_696)).a;
while ((F->p_2268 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2268)).name))->all), (*F->name_697))) {
F->result_ = F->p_2268;
goto ret_;
}
F->p_2268 = (*(P1034)rt_nil_check(F->p_2268)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_bind_sym_700(P1034 p_699) {
  struct f_bind_sym_700fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_699 = p_699;
F->y_2269 = NULL;
if (((*(P1034)rt_nil_check(F->p_699)).ival <= ((rt_int)2LL))) {
F->y_2269 = f_new_sym_181((((rt_int)5LL)), (*(P1034)rt_nil_check(F->p_699)).name);
} else {
F->y_2269 = f_new_sym_181((((rt_int)2LL)), (*(P1034)rt_nil_check(F->p_699)).name);
}
F->result_ = F->y_2269;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_703(P1044 a_701, P1044 b_702) {
  struct f_same_binds_703fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_701 = a_701;
F->b_702 = b_702;
F->x_2270 = NULL;
F->x_2270 = F->a_701;
F->y_2271 = NULL;
F->y_2271 = F->b_702;
while (((F->x_2270 != NULL) && (F->y_2271 != NULL))) {
if (((!rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->x_2270)).name))->all), (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_2271)).name))->all))) || (!f_same_binding_706(F->x_2270, F->y_2271)))) {
F->result_ = 0;
goto ret_;
}
F->x_2270 = (*(P1044)rt_nil_check(F->x_2270)).mnext;
F->y_2271 = (*(P1044)rt_nil_check(F->y_2271)).mnext;
}
F->result_ = ((F->x_2270 == NULL) && (F->y_2271 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_706(P1044 a_704, P1044 b_705) {
  struct f_same_binding_706fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_704 = a_704;
F->b_705 = b_705;
if (((*(P1044)rt_nil_check(F->a_704)).kind == (((rt_int)5LL)))) {
F->result_ = (((*(P1044)rt_nil_check(F->b_705)).kind == (((rt_int)5LL))) && f_same_221((*(P1044)rt_nil_check(F->a_704)).t, (*(P1044)rt_nil_check(F->b_705)).t));
goto ret_;
}
if ((((*(P1044)rt_nil_check(F->a_704)).kind == (((rt_int)2LL))) && (*(P1044)rt_nil_check(F->a_704)).hasmv)) {
F->result_ = ((*(P1044)rt_nil_check(F->b_705)).hasmv && ((*(P1044)rt_nil_check(F->a_704)).mvalue == (*(P1044)rt_nil_check(F->b_705)).mvalue));
goto ret_;
}
if ((((*(P1044)rt_nil_check(F->a_704)).kind == (((rt_int)2LL))) && ((*(P1044)rt_nil_check(F->a_704)).mv != NULL))) {
if (((((*(P1044)rt_nil_check(F->b_705)).mv == NULL) || ((*(P1053)rt_nil_check((*(P1044)rt_nil_check(F->a_704)).mv)).kind != (*(P1053)rt_nil_check((*(P1044)rt_nil_check(F->b_705)).mv)).kind)) || (!f_same_221((*(P1044)rt_nil_check(F->a_704)).t, (*(P1044)rt_nil_check(F->b_705)).t)))) {
F->result_ = 0;
goto ret_;
} else if (((*(P1053)rt_nil_check((*(P1044)rt_nil_check(F->a_704)).mv)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_eq((((P1027)rt_nil_check((*(P1053)rt_nil_check((*(P1044)rt_nil_check(F->a_704)).mv)).s))->all), (((P1027)rt_nil_check((*(P1053)rt_nil_check((*(P1044)rt_nil_check(F->b_705)).mv)).s))->all));
goto ret_;
}
F->result_ = ((*(P1053)rt_nil_check((*(P1044)rt_nil_check(F->a_704)).mv)).i == (*(P1053)rt_nil_check((*(P1044)rt_nil_check(F->b_705)).mv)).i);
goto ret_;
}
F->result_ = ((((*(P1044)rt_nil_check(F->a_704)).cname != NULL) && ((*(P1044)rt_nil_check(F->b_705)).cname != NULL)) && rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->a_704)).cname))->all), (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->b_705)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_tt_binds_711(P1034 gd_707, P1034 formals_708, P1034 actuals_709, rt_int line_710) {
  struct f_tt_binds_711fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_707 = gd_707;
F->formals_708 = formals_708;
F->actuals_709 = actuals_709;
F->line_710 = line_710;
F->f_2272 = NULL;
F->f_2272 = F->formals_708;
F->a_2273 = NULL;
F->a_2273 = F->actuals_709;
F->binds_2274 = NULL;
F->c_2275 = NULL;
F->at_2276 = NULL;
while (((F->f_2272 != NULL) && (F->a_2273 != NULL))) {
F->p_2277 = NULL;
F->p_2277 = f_gparam_698(F->gd_707, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->f_2272)).name))->all));
F->b_2278 = NULL;
if ((F->p_2277 == NULL)) {
f_fail_23(F->line_710, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->f_2272)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_2278 = f_bind_sym_700(F->p_2277);
if (((*(P1034)rt_nil_check(F->p_2277)).ival <= ((rt_int)2LL))) {
if (((*(P1034)rt_nil_check(F->a_2273)).kind >= (((rt_int)70LL)))) {
(*(P1044)rt_nil_check(F->b_2278)).t = f_resolve_subtype_268(F->a_2273, &F->c_2275);
} else {
F->st_2279 = NULL;
F->st_2279 = f_nn_65((((rt_int)80LL)), F->line_710);
(*(P1034)rt_nil_check(F->st_2279)).name = (*(P1034)rt_nil_check(F->a_2273)).name;
(*(P1044)rt_nil_check(F->b_2278)).t = f_resolve_subtype_268(F->st_2279, &F->c_2275);
}
(*(P1044)rt_nil_check(F->b_2278)).c = F->c_2275;
if ((((*(P1034)rt_nil_check(F->p_2277)).b != NULL) && (!f_type_allowed_715((*(P1044)rt_nil_check(F->b_2278)).t, (*(P1034)rt_nil_check(F->p_2277)).b, F->binds_2274)))) {
f_fail_23(F->line_710, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2277)).name))->all)); b_; }));
}
} else if (((*(P1034)rt_nil_check(F->p_2277)).ival <= ((rt_int)5LL))) {
if (((*(P1034)rt_nil_check(F->a_2273)).kind != (((rt_int)7LL)))) {
f_fail_23(F->line_710, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2277)).name))->all)); b_; }));
}
F->b_2278 = f_copy_sym_443(f_pick_operation_726((*(P1034)rt_nil_check(F->p_2277)).ival, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->a_2273)).name))->all), (*(P1034)rt_nil_check(F->p_2277)).b, (*(P1034)rt_nil_check(F->p_2277)).a, F->binds_2274, F->line_710));
(*(P1044)rt_nil_check(F->b_2278)).name = (*(P1034)rt_nil_check(F->p_2277)).name;
} else if ((((*(P1034)rt_nil_check(F->p_2277)).ival == ((rt_int)7LL)) || ((*(P1034)rt_nil_check(F->p_2277)).ival == ((rt_int)8LL)))) {
(*(P1044)rt_nil_check(F->b_2278)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_805(F->a_2273, NULL, &F->at_2276)), rt_str(")", 1)); b_; }));
(*(P1044)rt_nil_check(F->b_2278)).t = F->at_2276;
if (((((*(P1034)rt_nil_check(F->p_2277)).ival == ((rt_int)7LL)) && ((*(P1040)rt_nil_check(F->at_2276)).kind != (((rt_int)5LL)))) || (((*(P1034)rt_nil_check(F->p_2277)).ival == ((rt_int)8LL)) && ((*(P1040)rt_nil_check(f_base_of_223(F->at_2276))).kind != (((rt_int)4LL)))))) {
f_fail_23(F->line_710, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2277)).name))->all)), rt_str(" is not of the kind its constraint requires", 43)); b_; }));
}
(*(P1044)rt_nil_check(F->b_2278)).mv = f_meval_380(F->a_2273, &F->ok_2280);
if ((!F->ok_2280)) {
f_fail_23(F->line_710, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2277)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
if (((*(P1053)rt_nil_check((*(P1044)rt_nil_check(F->b_2278)).mv)).kind == (((rt_int)4LL)))) {
(*(P1053)rt_nil_check((*(P1044)rt_nil_check(F->b_2278)).mv)).i = f_lit_index_265((*(P1040)rt_nil_check(f_base_of_223(F->at_2276))).lits, &(((P1027)rt_nil_check((*(P1053)rt_nil_check((*(P1044)rt_nil_check(F->b_2278)).mv)).s))->all));
}
} else {
(*(P1044)rt_nil_check(F->b_2278)).t = f_resolve_subtype_268((*(P1034)rt_nil_check(F->p_2277)).a, &F->c_2275);
(*(P1044)rt_nil_check(F->b_2278)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_checked_213((*(P1044)rt_nil_check(F->b_2278)).t, F->c_2275, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_805(F->a_2273, (*(P1044)rt_nil_check(F->b_2278)).t, &F->at_2276); b_; }))), rt_str(")", 1)); b_; }));
f_check_type_232(F->at_2276, (*(P1044)rt_nil_check(F->b_2278)).t, F->line_710);
(*(P1044)rt_nil_check(F->b_2278)).mvalue = f_manifest_371(F->a_2273, &F->ok_2281);
(*(P1044)rt_nil_check(F->b_2278)).hasmv = F->ok_2281;
(*(P1044)rt_nil_check(F->b_2278)).mv = f_meval_380(F->a_2273, &F->ok_2281);
if ((!F->ok_2281)) {
f_fail_23(F->line_710, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2277)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
}
(*(P1044)rt_nil_check(F->b_2278)).mnext = F->binds_2274;
F->binds_2274 = F->b_2278;
F->f_2272 = (*(P1034)rt_nil_check(F->f_2272)).next;
F->a_2273 = (*(P1034)rt_nil_check(F->a_2273)).next;
}
F->result_ = F->binds_2274;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_allowed_715(P1040 t_712, P1034 items_713, P1044 binds_714) {
  struct f_type_allowed_715fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_712 = t_712;
F->items_713 = items_713;
F->binds_714 = binds_714;
F->it_2282 = NULL;
F->it_2282 = F->items_713;
F->b_2283 = NULL;
F->b_2283 = f_base_of_223(F->t_712);
while ((F->it_2282 != NULL)) {
if (((((*(P1034)rt_nil_check(F->it_2282)).kind == (((rt_int)80LL))) && ((*(P1034)rt_nil_check(F->it_2282)).b == NULL)) && (f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->it_2282)).name))->all)) == NULL))) {
F->w_2284 = rt_str_copy((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->it_2282)).name))->all));
if (((((((((((rt_str_eq(F->w_2284, rt_str("INT", 3)) && ((*(P1040)rt_nil_check(F->b_2283)).kind == (((rt_int)1LL)))) || (rt_str_eq(F->w_2284, rt_str("FLOAT", 5)) && ((*(P1040)rt_nil_check(F->b_2283)).kind == (((rt_int)3LL))))) || (rt_str_eq(F->w_2284, rt_str("BOOL", 4)) && ((*(P1040)rt_nil_check(F->b_2283)).kind == (((rt_int)2LL))))) || (rt_str_eq(F->w_2284, rt_str("ENUM", 4)) && ((*(P1040)rt_nil_check(F->b_2283)).kind == (((rt_int)4LL))))) || (rt_str_eq(F->w_2284, rt_str("STRING", 6)) && ((*(P1040)rt_nil_check(F->b_2283)).kind == (((rt_int)5LL))))) || (rt_str_eq(F->w_2284, rt_str("ARRAY", 5)) && ((*(P1040)rt_nil_check(F->b_2283)).kind == (((rt_int)6LL))))) || (rt_str_eq(F->w_2284, rt_str("RECORD", 6)) && ((*(P1040)rt_nil_check(F->b_2283)).kind == (((rt_int)7LL))))) || (rt_str_eq(F->w_2284, rt_str("UNION", 5)) && ((*(P1040)rt_nil_check(F->b_2283)).kind == (((rt_int)17LL))))) || (rt_str_eq(F->w_2284, rt_str("SET", 3)) && ((*(P1040)rt_nil_check(F->b_2283)).kind == (((rt_int)16LL))))) || (rt_str_eq(F->w_2284, rt_str("ASCII", 5)) && f_same_221(F->t_712, g_ty_ascii_1122)))) {
F->result_ = 1;
goto ret_;
}
} else {
F->c_2285 = NULL;
if (f_same_221(f_resolve_in_binds_719(F->it_2282, F->binds_714, &F->c_2285), F->t_712)) {
F->result_ = 1;
goto ret_;
}
}
F->it_2282 = (*(P1034)rt_nil_check(F->it_2282)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1040 f_resolve_in_binds_719(P1034 st_716, P1044 binds_717, P1036 *c_718) {
  struct f_resolve_in_binds_719fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_716 = st_716;
F->binds_717 = binds_717;
F->c_718 = c_718;
F->c_718v = *F->c_718;
F->b_2286 = NULL;
F->b_2286 = F->binds_717;
F->t_2287 = NULL;
f_open_scope_177();
while ((F->b_2286 != NULL)) {
F->z_2288 = NULL;
F->z_2288 = f_copy_sym_443(F->b_2286);
f_define_168(F->z_2288, (*(P1034)rt_nil_check(F->st_716)).line);
F->b_2286 = (*(P1044)rt_nil_check(F->b_2286)).mnext;
}
F->t_2287 = f_resolve_subtype_268(F->st_716, &F->c_718v);
f_close_scope_178();
F->result_ = F->t_2287;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_718) = F->c_718v;
  RT_FPOP();
  return F->result_;
}

static P1044 f_pick_operation_726(rt_int kind_720, rstr *name_721, P1034 sig_722, P1034 res_723, P1044 binds_724, rt_int line_725) {
  struct f_pick_operation_726fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_720 = kind_720;
F->name_721 = name_721;
F->sig_722 = sig_722;
F->res_723 = res_723;
F->binds_724 = binds_724;
F->line_725 = line_725;
F->y_2289 = NULL;
F->c_2290 = NULL;
F->want_2291 = (((rt_int)4LL));
if ((F->kind_720 == ((rt_int)4LL))) {
F->want_2291 = (((rt_int)3LL));
} else if ((F->kind_720 == ((rt_int)5LL))) {
F->want_2291 = (((rt_int)9LL));
}
{ rt_int lo2293 = ((rt_int)1LL), hi2294 = ((rt_int)3LL);
for (rt_int it2295 = lo2293; it2295 <= hi2294; it2295++) {
F->pass_2292 = it2295;
F->y_2289 = f_overload_chain_936(&(*F->name_721), F->pass_2292);
while ((F->y_2289 != NULL)) {
if (((rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_2289)).name))->all), (*F->name_721)) && (((*(P1044)rt_nil_check(F->y_2289)).kind == F->want_2291) || ((F->kind_720 == ((rt_int)0LL)) && (((*(P1044)rt_nil_check(F->y_2289)).kind == (((rt_int)4LL))) || ((*(P1044)rt_nil_check(F->y_2289)).kind == (((rt_int)3LL))))))) && ((F->pass_2292 != ((rt_int)1LL)) || ((*(P1044)rt_nil_check(F->y_2289)).depth >= g_gdepth_1107)))) {
F->ok_2296 = 1;
if (((F->sig_722 != NULL) || (F->kind_720 == ((rt_int)0LL)))) {
F->s_2297 = NULL;
F->s_2297 = F->sig_722;
F->pm_2298 = NULL;
F->pm_2298 = (*(P1044)rt_nil_check(F->y_2289)).params;
while (((F->ok_2296 && (F->s_2297 != NULL)) && (F->pm_2298 != NULL))) {
F->ok_2296 = f_same_221(f_resolve_in_binds_719(F->s_2297, F->binds_724, &F->c_2290), (*(P1046)rt_nil_check(F->pm_2298)).t);
F->s_2297 = (*(P1034)rt_nil_check(F->s_2297)).next;
F->pm_2298 = (*(P1046)rt_nil_check(F->pm_2298)).next;
}
F->ok_2296 = ((F->ok_2296 && (F->s_2297 == NULL)) && (F->pm_2298 == NULL));
}
if ((F->ok_2296 && (F->res_723 != NULL))) {
F->ok_2296 = (((*(P1044)rt_nil_check(F->y_2289)).kind == (((rt_int)3LL))) && f_same_221(f_resolve_in_binds_719(F->res_723, F->binds_724, &F->c_2290), (*(P1044)rt_nil_check(F->y_2289)).result));
}
if (F->ok_2296) {
F->result_ = F->y_2289;
goto ret_;
}
}
F->y_2289 = (*(P1044)rt_nil_check(F->y_2289)).chain;
}
}
}
f_fail_23(F->line_725, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no ", 3), f_kind_word_728(F->kind_720)), (*F->name_721)), rt_str(" has the interface the generic requires", 39)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_word_728(rt_int kind_727) {
  struct f_kind_word_728fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_727 = kind_727;
if ((F->kind_727 == ((rt_int)3LL))) {
F->result_ = rt_str("procedure ", 10);
goto ret_;
} else if ((F->kind_727 == ((rt_int)4LL))) {
F->result_ = rt_str("function ", 9);
goto ret_;
} else if ((F->kind_727 == ((rt_int)5LL))) {
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

static P1044 f_need_binds_732(P1034 gd_729, P1044 binds_730, rt_int line_731) {
  struct f_need_binds_732fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_729 = gd_729;
F->binds_730 = binds_730;
F->line_731 = line_731;
F->it_2299 = NULL;
F->it_2299 = (*(P1034)rt_nil_check(F->gd_729)).d;
F->r_2300 = NULL;
F->r_2300 = F->binds_730;
while ((F->it_2299 != NULL)) {
F->found_2301 = 0;
F->y_2302 = NULL;
F->y_2302 = ({ A1050 b_ = (((P1048)rt_nil_check(g_table_1074))->all); b_.p[(rt_index(f_hash_161(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->it_2299)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while (((F->y_2302 != NULL) && (!F->found_2301))) {
if ((rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_2302)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->it_2299)).name))->all)) && ((((*(P1044)rt_nil_check(F->y_2302)).kind == (((rt_int)4LL))) || ((*(P1044)rt_nil_check(F->y_2302)).kind == (((rt_int)3LL)))) || ((*(P1044)rt_nil_check(F->y_2302)).kind == (((rt_int)9LL)))))) {
F->found_2301 = 1;
}
F->y_2302 = (*(P1044)rt_nil_check(F->y_2302)).chain;
}
if (F->found_2301) {
F->z_2303 = NULL;
F->z_2303 = f_copy_sym_443(f_pick_operation_726((*(P1034)rt_nil_check(F->it_2299)).ival, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->it_2299)).name))->all), (*(P1034)rt_nil_check(F->it_2299)).b, (*(P1034)rt_nil_check(F->it_2299)).a, F->r_2300, F->line_731));
(*(P1044)rt_nil_check(F->z_2303)).mnext = F->r_2300;
F->r_2300 = F->z_2303;
} else if ((!f_is_definable_138(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->it_2299)).name))->all)))) {
f_fail_23(F->line_731, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the generic needs ", 18), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->it_2299)).name))->all)), rt_str(", which is not known where it is invoked", 40)); b_; }));
}
F->it_2299 = (*(P1034)rt_nil_check(F->it_2299)).next;
}
F->result_ = F->r_2300;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_734(P1034 st_733) {
  struct f_generic_use_734fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_733 = st_733;
if (((*(P1034)rt_nil_check(F->st_733)).kind == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P1044)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = (((((*(P1034)rt_nil_check(F->st_733)).kind == (((rt_int)80LL))) && ((*(P1034)rt_nil_check(F->st_733)).a != NULL)) && (f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->st_733)).name))->all)) != NULL)) && ((*(P1044)rt_nil_check(f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->st_733)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_infer_from_739(P1034 gd_735, P1034 pat_736, P1040 t_737, P1044 known_738) {
  struct f_infer_from_739fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_735 = gd_735;
F->pat_736 = pat_736;
F->t_737 = t_737;
F->known_738 = known_738;
F->binds_2304 = NULL;
F->binds_2304 = F->known_738;
F->e_2305 = NULL;
F->e_2305 = (*(P1034)rt_nil_check(F->pat_736)).a;
F->tp_2306 = NULL;
if (((F->t_737 == NULL) || ((*(P1040)rt_nil_check(F->t_737)).gen == NULL))) {
F->result_ = F->binds_2304;
goto ret_;
}
F->tp_2306 = (*(P1034)rt_nil_check((*(P1044)rt_nil_check((*(P1040)rt_nil_check(F->t_737)).gen)).decl)).a;
if (((*(P1034)rt_nil_check(F->pat_736)).kind == (((rt_int)78LL)))) {
F->e_2305 = f_copy_node_847((*(P1034)rt_nil_check(F->pat_736)).a);
(*(P1034)rt_nil_check(F->e_2305)).next = NULL;
}
while (((F->e_2305 != NULL) && (F->tp_2306 != NULL))) {
F->nm_2307 = NULL;
if ((((*(P1034)rt_nil_check(F->e_2305)).kind == (((rt_int)7LL))) || ((*(P1034)rt_nil_check(F->e_2305)).kind == (((rt_int)80LL))))) {
F->nm_2307 = (*(P1034)rt_nil_check(F->e_2305)).name;
}
if ((((F->nm_2307 != NULL) && (f_gparam_698(F->gd_735, &(((P1027)rt_nil_check(F->nm_2307))->all)) != NULL)) && ((*(P1034)rt_nil_check(f_gparam_698(F->gd_735, &(((P1027)rt_nil_check(F->nm_2307))->all)))).ival <= ((rt_int)2LL)))) {
F->q_2308 = NULL;
F->q_2308 = F->binds_2304;
F->have_2309 = 0;
while ((F->q_2308 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->q_2308)).name))->all), (((P1027)rt_nil_check(F->nm_2307))->all))) {
F->have_2309 = 1;
}
F->q_2308 = (*(P1044)rt_nil_check(F->q_2308)).mnext;
}
if ((!F->have_2309)) {
F->g_2310 = NULL;
F->g_2310 = (*(P1040)rt_nil_check(F->t_737)).gbinds;
while ((F->g_2310 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->g_2310)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->tp_2306)).name))->all))) {
F->b_2311 = NULL;
F->b_2311 = f_bind_sym_700(f_gparam_698(F->gd_735, &(((P1027)rt_nil_check(F->nm_2307))->all)));
(*(P1044)rt_nil_check(F->b_2311)).t = (*(P1044)rt_nil_check(F->g_2310)).t;
(*(P1044)rt_nil_check(F->b_2311)).c = (*(P1044)rt_nil_check(F->g_2310)).c;
(*(P1044)rt_nil_check(F->b_2311)).mnext = F->binds_2304;
F->binds_2304 = F->b_2311;
}
F->g_2310 = (*(P1044)rt_nil_check(F->g_2310)).mnext;
}
}
}
F->e_2305 = (*(P1034)rt_nil_check(F->e_2305)).next;
F->tp_2306 = (*(P1034)rt_nil_check(F->tp_2306)).next;
}
F->result_ = F->binds_2304;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1040 f_instantiate_type_745(P1044 g_740, P1034 tt_741, P1034 args_742, P1036 *c_743, rt_int line_744) {
  struct f_instantiate_type_745fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_740 = g_740;
F->tt_741 = tt_741;
F->args_742 = args_742;
F->c_743 = c_743;
F->c_743v = *F->c_743;
F->line_744 = line_744;
F->gd_2312 = NULL;
F->gd_2312 = (*(P1044)rt_nil_check(F->g_740)).decl;
F->pat_2313 = NULL;
F->pat_2313 = (*(P1034)rt_nil_check(F->gd_2312)).b;
F->binds_2314 = NULL;
F->binds_2314 = f_tt_binds_711(F->gd_2312, (*(P1034)rt_nil_check(F->pat_2313)).e, F->tt_741, F->line_744);
F->inst_2315 = NULL;
F->inst_2315 = g_all_insts_1076;
F->t_2316 = NULL;
F->saved_caps_2317 = NULL;
F->saved_caps_2317 = g_caps_1093;
F->saved_env_2318 = NULL;
F->saved_env_2318 = g_genv_1075;
F->saved_gdepth_2319 = g_gdepth_1107;
F->c_743v = f_new_cons_184();
(*(P1036)rt_nil_check(F->c_743v)).args = F->args_742;
while ((F->inst_2315 != NULL)) {
if ((((*(P1044)rt_nil_check(F->inst_2315)).decl == F->pat_2313) && f_same_binds_703((*(P1044)rt_nil_check(F->inst_2315)).members, F->binds_2314))) {
F->result_ = (*(P1044)rt_nil_check(F->inst_2315)).t;
goto ret_;
}
F->inst_2315 = (*(P1044)rt_nil_check(F->inst_2315)).insts;
}
f_open_scope_177();
{
F->b_2320 = NULL;
F->b_2320 = F->binds_2314;
while ((F->b_2320 != NULL)) {
f_define_168(F->b_2320, F->line_744);
F->b_2320 = (*(P1044)rt_nil_check(F->b_2320)).mnext;
}
}
g_caps_1093 = NULL;
g_genv_1075 = (*(P1044)rt_nil_check(F->g_740)).env;
g_gdepth_1107 = g_depth_1077;
{
F->y_2321 = NULL;
F->y_2321 = f_new_sym_181((((rt_int)5LL)), (*(P1034)rt_nil_check(F->pat_2313)).name);
F->yc_2322 = NULL;
(*(P1044)rt_nil_check(F->y_2321)).decl = F->pat_2313;
if (((*(P1034)rt_nil_check(F->pat_2313)).kind == (((rt_int)44LL)))) {
F->t_2316 = f_new_typ_183((((rt_int)8LL)));
(*(P1040)rt_nil_check(F->t_2316)).name = (*(P1034)rt_nil_check(F->pat_2313)).name;
(*(P1040)rt_nil_check(F->t_2316)).decl = F->pat_2313;
(*(P1044)rt_nil_check(F->y_2321)).t = F->t_2316;
f_define_168(F->y_2321, F->line_744);
f_finish_ptr_480(F->t_2316);
} else {
f_define_168(F->y_2321, F->line_744);
F->t_2316 = f_new_type_323(F->y_2321, f_nn_65((((rt_int)80LL)), F->line_744), &F->yc_2322);
}
}
g_caps_1093 = F->saved_caps_2317;
g_genv_1075 = F->saved_env_2318;
g_gdepth_1107 = F->saved_gdepth_2319;
(*(P1040)rt_nil_check(F->t_2316)).gen = F->g_740;
(*(P1040)rt_nil_check(F->t_2316)).gbinds = F->binds_2314;
f_close_scope_178();
{ R1045 *cell2323 = rt_alloc(sizeof(R1045));
(*cell2323).name = NULL;
(*cell2323).t = NULL;
(*cell2323).c = NULL;
(*cell2323).access = NULL;
(*cell2323).cname = NULL;
(*cell2323).st = NULL;
(*cell2323).decl = NULL;
(*cell2323).params = NULL;
(*cell2323).result = NULL;
(*cell2323).members = NULL;
(*cell2323).mnext = NULL;
(*cell2323).binds = NULL;
(*cell2323).insts = NULL;
(*cell2323).env = NULL;
(*cell2323).chain = NULL;
(*cell2323).stack = NULL;
(*cell2323).owner = NULL;
(*cell2323).gctx = NULL;
(*cell2323).mv = NULL;
(*cell2323).reqs = NULL;
(*cell2323).home = NULL;
(*cell2323).capn = NULL;
(*cell2323).tbinds = NULL;
(*cell2323).loc = NULL;
(*cell2323).reqs_sym = NULL;
F->inst_2315 = cell2323;
}
(*(P1044)rt_nil_check(F->inst_2315)).kind = (((rt_int)5LL));
(*(P1044)rt_nil_check(F->inst_2315)).name = (*(P1044)rt_nil_check(F->g_740)).name;
(*(P1044)rt_nil_check(F->inst_2315)).decl = F->pat_2313;
(*(P1044)rt_nil_check(F->inst_2315)).t = F->t_2316;
(*(P1044)rt_nil_check(F->inst_2315)).members = F->binds_2314;
(*(P1044)rt_nil_check(F->inst_2315)).insts = g_all_insts_1076;
g_all_insts_1076 = F->inst_2315;
F->result_ = F->t_2316;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_743) = F->c_743v;
  RT_FPOP();
  return F->result_;
}

static P1044 f_instantiate_750(P1044 g_746, P1034 tt_747, P1034 args_748, rt_int line_749) {
  struct f_instantiate_750fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_746 = g_746;
F->tt_747 = tt_747;
F->args_748 = args_748;
F->line_749 = line_749;
F->gd_2324 = NULL;
F->gd_2324 = (*(P1044)rt_nil_check(F->g_746)).decl;
F->pat_2325 = NULL;
F->pat_2325 = (*(P1034)rt_nil_check(F->gd_2324)).b;
F->binds_2326 = NULL;
F->f_2327 = NULL;
F->f_2327 = (*(P1034)rt_nil_check(F->pat_2325)).e;
F->a_2328 = NULL;
F->a_2328 = F->tt_747;
F->fp_2329 = NULL;
F->fp_2329 = (*(P1034)rt_nil_check(F->pat_2325)).a;
F->inst_2330 = NULL;
F->at_2331 = NULL;
F->c_2332 = NULL;
F->saved_fctx_2333 = NULL;
F->saved_fctx_2333 = g_fctx_1092;
F->saved_in_2334 = g_in_func_1090;
F->saved_level_2335 = g_cur_level_1091;
F->saved_sym_2336 = NULL;
F->saved_sym_2336 = g_func_sym_1102;
F->saved_code_2337 = NULL;
F->saved_code_2337 = g_code_1088;
F->saved_env_2338 = NULL;
F->saved_env_2338 = g_genv_1075;
F->saved_gdepth_2339 = g_gdepth_1107;
F->binds_2326 = f_tt_binds_711(F->gd_2324, F->f_2327, F->a_2328, F->line_749);
F->a_2328 = F->args_748;
while (((F->fp_2329 != NULL) && (F->a_2328 != NULL))) {
if (f_generic_use_734((*(P1034)rt_nil_check(F->fp_2329)).a)) {
F->v_2340 = rt_str_copy(f_gexpr_805(F->a_2328, NULL, &F->at_2331));
F->binds_2326 = f_infer_from_739(F->gd_2324, (*(P1034)rt_nil_check(F->fp_2329)).a, F->at_2331, F->binds_2326);
} else if (((((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->fp_2329)).a)).kind == (((rt_int)80LL))) && (f_gparam_698(F->gd_2324, &(((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->fp_2329)).a)).name))->all)) != NULL)) && ((*(P1034)rt_nil_check(f_gparam_698(F->gd_2324, &(((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->fp_2329)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_2341 = 0;
F->q_2342 = NULL;
F->q_2342 = F->binds_2326;
while ((F->q_2342 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->q_2342)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->fp_2329)).a)).name))->all))) {
F->known_2341 = 1;
}
F->q_2342 = (*(P1044)rt_nil_check(F->q_2342)).mnext;
}
if ((!F->known_2341)) {
F->b_2343 = NULL;
F->b_2343 = f_bind_sym_700(f_gparam_698(F->gd_2324, &(((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->fp_2329)).a)).name))->all)));
F->v_2344 = rt_str_copy(f_gexpr_805(F->a_2328, NULL, &F->at_2331));
(*(P1044)rt_nil_check(F->b_2343)).t = F->at_2331;
(*(P1044)rt_nil_check(F->b_2343)).c = g_no_cons_1137;
if ((((*(P1034)rt_nil_check(f_gparam_698(F->gd_2324, &(((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->fp_2329)).a)).name))->all)))).b != NULL) && (!f_type_allowed_715(F->at_2331, (*(P1034)rt_nil_check(f_gparam_698(F->gd_2324, &(((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->fp_2329)).a)).name))->all)))).b, F->binds_2326)))) {
f_fail_23(F->line_749, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->fp_2329)).a)).name))->all)); b_; }));
}
(*(P1044)rt_nil_check(F->b_2343)).mnext = F->binds_2326;
F->binds_2326 = F->b_2343;
}
}
F->fp_2329 = (*(P1034)rt_nil_check(F->fp_2329)).next;
F->a_2328 = (*(P1034)rt_nil_check(F->a_2328)).next;
}
F->binds_2326 = f_need_binds_732(F->gd_2324, F->binds_2326, F->line_749);
F->inst_2330 = g_all_insts_1076;
while ((F->inst_2330 != NULL)) {
if ((((*(P1044)rt_nil_check(F->inst_2330)).decl == F->pat_2325) && f_same_binds_703((*(P1044)rt_nil_check(F->inst_2330)).members, F->binds_2326))) {
F->result_ = F->inst_2330;
goto ret_;
}
F->inst_2330 = (*(P1044)rt_nil_check(F->inst_2330)).insts;
}
g_fctx_1092 = (*(P1044)rt_nil_check(F->g_746)).gctx;
g_in_func_1090 = ((*(P1044)rt_nil_check(F->g_746)).level > ((rt_int)0LL));
g_cur_level_1091 = (*(P1044)rt_nil_check(F->g_746)).level;
g_func_sym_1102 = (*(P1044)rt_nil_check(F->g_746)).owner;
g_code_1088 = f_new_buffer_24();
f_open_scope_177();
g_gdepth_1107 = g_depth_1077;
{
F->b_2345 = NULL;
F->b_2345 = F->binds_2326;
while ((F->b_2345 != NULL)) {
f_define_168(F->b_2345, F->line_749);
F->b_2345 = (*(P1044)rt_nil_check(F->b_2345)).mnext;
}
}
g_genv_1075 = (*(P1044)rt_nil_check(F->g_746)).env;
F->inst_2330 = f_build_subprogram_510(F->pat_2325);
(*(P1044)rt_nil_check(F->inst_2330)).members = F->binds_2326;
(*(P1044)rt_nil_check(F->inst_2330)).insts = g_all_insts_1076;
g_all_insts_1076 = F->inst_2330;
f_define_168(F->inst_2330, F->line_749);
f_gen_subprogram_581(F->pat_2325, F->inst_2330);
f_close_scope_178();
g_fctx_1092 = F->saved_fctx_2333;
g_in_func_1090 = F->saved_in_2334;
g_cur_level_1091 = F->saved_level_2335;
g_func_sym_1102 = F->saved_sym_2336;
g_code_1088 = F->saved_code_2337;
g_genv_1075 = F->saved_env_2338;
g_gdepth_1107 = F->saved_gdepth_2339;
F->result_ = F->inst_2330;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_752(P1044 y_751) {
  struct f_access_of_752fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_751 = y_751;
F->p_2346 = NULL;
F->p_2346 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P1044)rt_nil_check(F->y_751)).level <= ((rt_int)0LL))) {
F->result_ = (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_751)).access))->all);
goto ret_;
}
{ rt_int lo2348 = ((rt_int)1LL), hi2349 = rt_sub(g_cur_level_1091, (*(P1044)rt_nil_check(F->y_751)).level);
for (rt_int it2350 = lo2348; it2350 <= hi2349; it2350++) {
F->i_2347 = it2350;
F->p_2346 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->p_2346))->all), rt_str("->up", 4)); b_; }));
}
}
if ((*(P1044)rt_nil_check(F->y_751)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P1027)rt_nil_check(F->p_2346))->all)), rt_str("->", 2)), (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_751)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->p_2346))->all), rt_str("->", 2)), (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_751)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_import_of_755(P1034 l_753, rstr *name_754) {
  struct f_import_of_755fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_753 = l_753;
F->name_754 = name_754;
F->p_2351 = NULL;
F->p_2351 = F->l_753;
while ((F->p_2351 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2351)).name))->all), (*F->name_754))) {
F->result_ = F->p_2351;
goto ret_;
}
F->p_2351 = (*(P1034)rt_nil_check(F->p_2351)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_758(P1044 y_756, rt_int line_757) {
  struct f_check_import_758fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_756 = y_756;
F->line_757 = line_757;
F->c_2352 = NULL;
F->c_2352 = g_fctx_1092;
F->ro_2353 = 0;
while (((F->c_2352 != NULL) && ((*(P1044)rt_nil_check(F->y_756)).depth < (*(P1051)rt_nil_check(F->c_2352)).depth))) {
if ((!(*(P1051)rt_nil_check(F->c_2352)).all_imp)) {
F->imp_2354 = NULL;
F->imp_2354 = f_import_of_755((*(P1051)rt_nil_check(F->c_2352)).imps, &(((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_756)).name))->all));
if ((F->imp_2354 == NULL)) {
f_fail_23(F->line_757, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_756)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P1034)rt_nil_check(F->imp_2354)).ival == ((rt_int)1LL))) {
F->ro_2353 = 1;
}
}
F->c_2352 = (*(P1051)rt_nil_check(F->c_2352)).next;
}
F->result_ = F->ro_2353;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_760(rstr *s_759) {
  struct f_c_ident_760fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_759 = s_759;
if (((((rt_int)(((*F->s_759)).len)) > ((rt_int)1LL)) && (rt_str_get((*F->s_759), ((rt_int)1LL)) == 46))) {
F->result_ = rt_str_cat(rt_str("dot_", 4), f_lower_s_15(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_759), ((rt_int)2LL), ((rt_int)(((*F->s_759)).len))); b_; })));
goto ret_;
} else if (((((rt_int)(((*F->s_759)).len)) > ((rt_int)1LL)) && (rt_str_get((*F->s_759), ((rt_int)1LL)) == 40))) {
F->r_2355 = NULL;
F->r_2355 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel_", 4); b_; }));
{ rt_int lo2357 = ((rt_int)2LL), hi2358 = rt_sub(((rt_int)(((*F->s_759)).len)), ((rt_int)1LL));
for (rt_int it2359 = lo2357; it2359 <= hi2358; it2359++) {
F->i_2356 = it2359;
if ((rt_str_get((*F->s_759), F->i_2356) == 42)) {
F->r_2355 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_2355))->all), rt_str("s", 1)); b_; }));
} else if ((rt_str_get((*F->s_759), F->i_2356) == 44)) {
F->r_2355 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_2355))->all), rt_str("_", 1)); b_; }));
} else if ((rt_str_get((*F->s_759), F->i_2356) == 46)) {
F->r_2355 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_2355))->all), rt_str("r", 1)); b_; }));
}
}
}
F->result_ = (((P1027)rt_nil_check(F->r_2355))->all);
goto ret_;
} else if (rt_str_eq((*F->s_759), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_759), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_759), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_759), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_759), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_759), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_759), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_759), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_759), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_759), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_759), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_759), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_759), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_759), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_759));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cell_deref_763(P1040 t_761, rstr *p_762) {
  struct f_cell_deref_763fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_761 = t_761;
F->p_762 = p_762;
if ((((*(P1040)rt_nil_check(F->t_761)).decl != NULL) && ((*(P1034)rt_nil_check((*(P1040)rt_nil_check(F->t_761)).decl)).b != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->p_762)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*F->p_762)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_766(rstr *base_764, P1040 t_765) {
  struct f_deref_766fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_764 = base_764;
F->t_765 = t_765;
if ((((*(P1040)rt_nil_check(F->t_765)).decl != NULL) && ((*(P1034)rt_nil_check((*(P1040)rt_nil_check(F->t_765)).decl)).b != NULL))) {
if (f_suppressed_517(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->base_764)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_234(F->t_765)), rt_str(")rt_nil_check(", 14)), (*F->base_764)), rt_str("))->all)", 8));
goto ret_;
}
if (f_suppressed_517(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->t_765)), rt_str(")(", 2)), (*F->base_764)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->t_765)), rt_str(")rt_nil_check(", 14)), (*F->base_764)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_768(P1034 e_767) {
  struct f_is_lvalue_768fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_767 = e_767;
if (((*(P1034)rt_nil_check(F->e_767)).kind == (((rt_int)7LL)))) {
F->y_2360 = NULL;
F->y_2360 = f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_767)).name))->all));
F->result_ = ((F->y_2360 != NULL) && (((*(P1044)rt_nil_check(F->y_2360)).kind == (((rt_int)1LL))) || ((((*(P1044)rt_nil_check(F->y_2360)).kind == (((rt_int)2LL))) && ((*(P1044)rt_nil_check(F->y_2360)).mv == NULL)) && (!(*(P1044)rt_nil_check(F->y_2360)).hasmv))));
goto ret_;
} else if (((*(P1034)rt_nil_check(F->e_767)).kind == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_768((*(P1034)rt_nil_check(F->e_767)).a);
goto ret_;
} else if (((*(P1034)rt_nil_check(F->e_767)).kind == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_767)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_768((*(P1034)rt_nil_check(F->e_767)).a));
goto ret_;
} else if (((*(P1034)rt_nil_check(F->e_767)).kind == (((rt_int)10LL)))) {
if ((((*(P1034)rt_nil_check(F->e_767)).b != NULL) && ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_767)).b)).kind == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_768((*(P1034)rt_nil_check(F->e_767)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_774(P1034 e_769, P1027 *code_770, P1040 *t_771, P1036 *c_772, int *ro_773) {
  struct f_lvalue_774fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_769 = e_769;
F->code_770 = code_770;
F->code_770v = *F->code_770;
F->t_771 = t_771;
F->t_771v = *F->t_771;
F->c_772 = c_772;
F->c_772v = *F->c_772;
F->ro_773 = ro_773;
F->ro_773v = *F->ro_773;
F->base_2361 = NULL;
F->bt_2362 = NULL;
F->bc_2363 = NULL;
if (((*(P1034)rt_nil_check(F->e_769)).kind == (((rt_int)7LL)))) {
F->y_2364 = NULL;
F->y_2364 = f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_769)).name))->all));
if ((F->y_2364 == NULL)) {
f_fail_23((*(P1034)rt_nil_check(F->e_769)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_769)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P1044)rt_nil_check(F->y_2364)).kind != (((rt_int)1LL))) && ((*(P1044)rt_nil_check(F->y_2364)).kind != (((rt_int)2LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->e_769)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_769)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_770v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_752(F->y_2364); b_; }));
F->t_771v = (*(P1044)rt_nil_check(F->y_2364)).t;
F->c_772v = (*(P1044)rt_nil_check(F->y_2364)).c;
F->ro_773v = (*(P1044)rt_nil_check(F->y_2364)).ro_flag;
if ((((*(P1044)rt_nil_check(F->y_2364)).kind == (((rt_int)1LL))) && f_check_import_758(F->y_2364, (*(P1034)rt_nil_check(F->e_769)).line))) {
F->ro_773v = 1;
}
} else if (((*(P1034)rt_nil_check(F->e_769)).kind == (((rt_int)17LL)))) {
f_lvalue_774((*(P1034)rt_nil_check(F->e_769)).a, &F->code_770v, &F->t_771v, &F->c_772v, &F->ro_773v);
} else if ((((((*(P1034)rt_nil_check(F->e_769)).kind == (((rt_int)12LL))) && ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_769)).a)).kind == (((rt_int)7LL)))) && rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_769)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_770v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_944((*(P1034)rt_nil_check(F->e_769)).b, (*(P1034)rt_nil_check(F->e_769)).line, &F->t_771v); b_; }));
F->c_772v = g_no_cons_1137;
F->ro_773v = 0;
} else if (((*(P1034)rt_nil_check(F->e_769)).kind == (((rt_int)11LL)))) {
f_lvalue_774((*(P1034)rt_nil_check(F->e_769)).a, &F->base_2361, &F->bt_2362, &F->bc_2363, &F->ro_773v);
f_select_on_782(&(((P1027)rt_nil_check(F->base_2361))->all), F->bt_2362, F->e_769, &F->ro_773v, &F->code_770v, &F->t_771v, &F->c_772v);
} else if (((*(P1034)rt_nil_check(F->e_769)).kind == (((rt_int)10LL)))) {
f_lvalue_774((*(P1034)rt_nil_check(F->e_769)).a, &F->base_2361, &F->bt_2362, &F->bc_2363, &F->ro_773v);
f_index_on_799(&(((P1027)rt_nil_check(F->base_2361))->all), F->bt_2362, F->e_769, &F->ro_773v, 1, &F->code_770v, &F->t_771v, &F->c_772v);
} else {
f_fail_23((*(P1034)rt_nil_check(F->e_769)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_770) = F->code_770v;  (*F->t_771) = F->t_771v;  (*F->c_772) = F->c_772v;  if (!rt_r_undef_BOOL(F->ro_773v)) (*F->ro_773) = F->ro_773v;
  RT_FPOP();
  return;
}

static void f_select_on_782(rstr *base_775, P1040 bt_776, P1034 e_777, int *ro_778, P1027 *code_779, P1040 *t_780, P1036 *c_781) {
  struct f_select_on_782fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_775 = base_775;
F->bt_776 = bt_776;
F->e_777 = e_777;
F->ro_778 = ro_778;
F->code_779 = code_779;
F->code_779v = *F->code_779;
F->t_780 = t_780;
F->t_780v = *F->t_780;
F->c_781 = c_781;
F->c_781v = *F->c_781;
F->c_781v = g_no_cons_1137;
if (((*(P1040)rt_nil_check(F->bt_776)).kind == (((rt_int)8LL)))) {
f_finish_ptr_480(F->bt_776);
(*F->ro_778) = 0;
if (((*(P1040)rt_nil_check(F->bt_776)).decl != NULL)) {
F->p_2365 = NULL;
F->p_2365 = (*(P1034)rt_nil_check((*(P1040)rt_nil_check(F->bt_776)).decl)).b;
while ((F->p_2365 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2365)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_777)).name))->all))) {
F->pc_2366 = NULL;
F->code_779v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_234(F->bt_776)), rt_str(")rt_nil_check(", 14)), (*F->base_775)), rt_str("))->p_", 6)), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2365)).name))->all))), rt_str(")", 1)); b_; }));
F->t_780v = f_resolve_subtype_268((*(P1034)rt_nil_check(F->p_2365)).a, &F->pc_2366);
(*F->ro_778) = 1;
goto ret_;
}
F->p_2365 = (*(P1034)rt_nil_check(F->p_2365)).next;
}
}
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_777)).name))->all), rt_str("ALL", 3))) {
F->code_779v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_766(&(*F->base_775), F->bt_776); b_; }));
F->t_780v = (*(P1040)rt_nil_check(F->bt_776)).target;
goto ret_;
}
f_select_on_782(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_766(&(*F->base_775), F->bt_776); b_; }), (*(P1040)rt_nil_check(F->bt_776)).target, F->e_777, &(*F->ro_778), &F->code_779v, &F->t_780v, &F->c_781v);
goto ret_;
}
if (((*(P1040)rt_nil_check(F->bt_776)).kind == (((rt_int)15LL)))) {
F->p_2367 = NULL;
F->p_2367 = (*(P1040)rt_nil_check(F->bt_776)).tparams;
while ((F->p_2367 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2367)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_777)).name))->all))) {
F->code_779v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_775), rt_str(".p_", 3)), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2367)).name))->all))); b_; }));
F->t_780v = f_tparam_type_357(F->bt_776, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2367)).name))->all));
(*F->ro_778) = 1;
goto ret_;
}
F->p_2367 = (*(P1034)rt_nil_check(F->p_2367)).next;
}
F->p_2367 = (*(P1040)rt_nil_check(F->bt_776)).tparams;
if ((!f_opened_313(F->bt_776))) {
f_fail_23((*(P1034)rt_nil_check(F->e_777)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->bt_776)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P1040)rt_nil_check(F->bt_776)).tparams == NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_777)).name))->all), rt_str("ALL", 3))) {
F->code_779v = f_mk_3(&(*F->base_775));
F->t_780v = (*(P1040)rt_nil_check(F->bt_776)).under;
goto ret_;
}
f_select_on_782(&(*F->base_775), (*(P1040)rt_nil_check(F->bt_776)).under, F->e_777, &(*F->ro_778), &F->code_779v, &F->t_780v, &F->c_781v);
goto ret_;
}
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_777)).name))->all), rt_str("ALL", 3))) {
F->code_779v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_775), rt_str(".all", 4)); b_; }));
F->t_780v = (*(P1040)rt_nil_check(F->bt_776)).under;
goto ret_;
}
while ((F->p_2367 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2367)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_777)).name))->all))) {
F->code_779v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_775), rt_str(".p_", 3)), f_lower_s_15(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2367)).name))->all))); b_; }));
F->t_780v = f_tparam_type_357(F->bt_776, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2367)).name))->all));
(*F->ro_778) = 1;
goto ret_;
}
F->p_2367 = (*(P1034)rt_nil_check(F->p_2367)).next;
}
f_select_on_782(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_775), rt_str(".all", 4)); b_; }), (*(P1040)rt_nil_check(F->bt_776)).under, F->e_777, &(*F->ro_778), &F->code_779v, &F->t_780v, &F->c_781v);
goto ret_;
}
if (((*(P1040)rt_nil_check(F->bt_776)).kind == (((rt_int)17LL)))) {
F->f_2368 = NULL;
F->f_2368 = (*(P1040)rt_nil_check(F->bt_776)).fields;
F->i_2369 = ((rt_int)0LL);
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_777)).name))->all), rt_str("TAG", 3))) {
F->code_779v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_775)), rt_str(").tag)", 6)); b_; }));
F->t_780v = (*(P1040)rt_nil_check(F->bt_776)).elem;
(*F->ro_778) = 1;
goto ret_;
}
while ((F->f_2368 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_2368)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_777)).name))->all))) {
F->fn_2370 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_775)), rt_str(").u.", 4)), f_field_c_17(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_777)).name))->all))));
F->c_781v = (*(P1042)rt_nil_check(F->f_2368)).c;
F->code_779v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_775)), rt_str(").tag == ", 9)), f_itos_7(F->i_2369)), rt_str(" \? &", 4)), F->fn_2370), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_2370), rt_str(")))", 3)); b_; }));
F->t_780v = (*(P1042)rt_nil_check(F->f_2368)).t;
goto ret_;
}
F->i_2369 = rt_add(F->i_2369, ((rt_int)1LL));
F->f_2368 = (*(P1042)rt_nil_check(F->f_2368)).next;
}
f_fail_23((*(P1034)rt_nil_check(F->e_777)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_777)).name))->all)); b_; }));
}
if (((*(P1040)rt_nil_check(F->bt_776)).kind == (((rt_int)7LL)))) {
F->f_2371 = NULL;
F->f_2371 = (*(P1040)rt_nil_check(F->bt_776)).fields;
while ((F->f_2371 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_2371)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_777)).name))->all))) {
F->c_781v = (*(P1042)rt_nil_check(F->f_2371)).c;
F->code_779v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_775), rt_str(".", 1)), f_field_c_17(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_777)).name))->all))); b_; }));
F->t_780v = (*(P1042)rt_nil_check(F->f_2371)).t;
goto ret_;
}
F->f_2371 = (*(P1042)rt_nil_check(F->f_2371)).next;
}
f_fail_23((*(P1034)rt_nil_check(F->e_777)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_777)).name))->all)); b_; }));
}
f_fail_23((*(P1034)rt_nil_check(F->e_777)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_777)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_779) = F->code_779v;  (*F->t_780) = F->t_780v;  (*F->c_781) = F->c_781v;
  RT_FPOP();
  return;
}

static int f_has_call_784(rstr *s_783) {
  struct f_has_call_784fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_783 = s_783;
{ rt_int lo2373 = ((rt_int)1LL), hi2374 = ((rt_int)(((*F->s_783)).len));
for (rt_int it2375 = lo2373; it2375 <= hi2374; it2375++) {
F->i_2372 = it2375;
if ((rt_str_get((*F->s_783), F->i_2372) == 40)) {
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

static void f_need_slice_786(P1040 t_785) {
  struct f_need_slice_786fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_785 = t_785;
F->c_2376 = rt_str_copy(f_ctype_234(F->t_785));
F->n_2377 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_2376));
F->l_2378 = NULL;
if (f_seen_name_430(g_mcopies_1118, &F->n_2377)) {
goto ret_;
}
{ R1039 *cell2379 = rt_alloc(sizeof(R1039));
(*cell2379).s = NULL;
(*cell2379).next = NULL;
F->l_2378 = cell2379;
}
(*(P1038)rt_nil_check(F->l_2378)).s = f_mk_3(&F->n_2377);
(*(P1038)rt_nil_check(F->l_2378)).next = g_mcopies_1118;
g_mcopies_1118 = F->l_2378;
f_put_27(g_out_protos_1083, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2376), rt_str(" ", 1)), F->n_2377), rt_str("(", 1)), F->c_2376), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2376), rt_str(" ", 1)), F->n_2377), rt_str("(", 1)), F->c_2376), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_1083, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2376), rt_str(" rt_r_acat_", 11)), F->c_2376), rt_str("(", 1)), F->c_2376), rt_str(" a, ", 4)), F->c_2376), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2376), rt_str(" rt_r_acat_", 11)), F->c_2376), rt_str("(", 1)), F->c_2376), rt_str(" a, ", 4)), F->c_2376), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_2376), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_419((*(P1040)rt_nil_check(F->t_785)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_419((*(P1040)rt_nil_check(F->t_785)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_1085, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rstr f_ix_790(rstr *i_787, rstr *lo_788, rstr *hi_789) {
  struct f_ix_790fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_787 = i_787;
F->lo_788 = lo_788;
F->hi_789 = hi_789;
if (f_suppressed_517(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_787)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_787)), rt_str(", ", 2)), (*F->lo_788)), rt_str(", ", 2)), (*F->hi_789)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_799(rstr *base_791, P1040 bt_792, P1034 e_793, int *ro_794, int lv_795, P1027 *code_796, P1040 *t_797, P1036 *c_798) {
  struct f_index_on_799fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_791 = base_791;
F->bt_792 = bt_792;
F->e_793 = e_793;
F->ro_794 = ro_794;
F->lv_795 = lv_795;
F->code_796 = code_796;
F->code_796v = *F->code_796;
F->t_797 = t_797;
F->t_797v = *F->t_797;
F->c_798 = c_798;
F->c_798v = *F->c_798;
F->a_2380 = NULL;
F->a_2380 = (*(P1034)rt_nil_check(F->e_793)).b;
F->it_2381 = NULL;
F->c_798v = g_no_cons_1137;
if (((*(P1040)rt_nil_check(F->bt_792)).kind == (((rt_int)8LL)))) {
f_finish_ptr_480(F->bt_792);
(*F->ro_794) = 0;
f_index_on_799(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_766(&(*F->base_791), F->bt_792); b_; }), (*(P1040)rt_nil_check(F->bt_792)).target, F->e_793, &(*F->ro_794), F->lv_795, &F->code_796v, &F->t_797v, &F->c_798v);
goto ret_;
}
if (((*(P1040)rt_nil_check(F->bt_792)).kind == (((rt_int)15LL)))) {
if ((!f_opened_313(F->bt_792))) {
f_fail_23((*(P1034)rt_nil_check(F->e_793)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->bt_792)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P1040)rt_nil_check(F->bt_792)).tparams == NULL)) {
f_index_on_799(&(*F->base_791), (*(P1040)rt_nil_check(F->bt_792)).under, F->e_793, &(*F->ro_794), F->lv_795, &F->code_796v, &F->t_797v, &F->c_798v);
} else {
f_index_on_799(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_791), rt_str(".all", 4)); b_; }), (*(P1040)rt_nil_check(F->bt_792)).under, F->e_793, &(*F->ro_794), F->lv_795, &F->code_796v, &F->t_797v, &F->c_798v);
}
goto ret_;
}
if (((((*(P1040)rt_nil_check(F->bt_792)).kind == (((rt_int)6LL))) && (F->a_2380 != NULL)) && ((*(P1034)rt_nil_check(F->a_2380)).kind == (((rt_int)16LL))))) {
if ((((*(P1040)rt_nil_check(F->bt_792)).ndim != ((rt_int)1LL)) || ((*(P1034)rt_nil_check(F->a_2380)).next != NULL))) {
f_fail_23((*(P1034)rt_nil_check(F->e_793)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_2382 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->a_2380)).a, (*(P1040)rt_nil_check(F->bt_792)).idx, &F->it_2381));
F->hi_2383 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->a_2380)).b, (*(P1040)rt_nil_check(F->bt_792)).idx, &F->it_2381));
F->code_796v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_234(F->bt_792)), rt_str("(", 1)), (*F->base_791)), rt_str(", ", 2)), F->lo_2382), rt_str(", ", 2)), F->hi_2383), rt_str(")", 1)); b_; }));
f_need_slice_786(F->bt_792);
F->t_797v = F->bt_792;
(*F->ro_794) = 1;
}
goto ret_;
}
if (((*(P1040)rt_nil_check(F->bt_792)).kind == (((rt_int)6LL)))) {
F->off_2384 = NULL;
F->k_2385 = ((rt_int)0LL);
F->b_2386 = NULL;
F->b_2386 = f_mk_3(&(*F->base_791));
F->pre_2387 = NULL;
F->pre_2387 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_71(F->a_2380) != (*(P1040)rt_nil_check(F->bt_792)).ndim)) {
f_fail_23((*(P1034)rt_nil_check(F->e_793)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7((*(P1040)rt_nil_check(F->bt_792)).ndim), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_795) && f_has_call_784(&(*F->base_791)))) {
F->pre_2387 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->bt_792)), rt_str(" b_ = ", 6)), (*F->base_791)), rt_str("; ", 2)); b_; }));
F->b_2386 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_2380 != NULL)) {
F->k_2385 = rt_add(F->k_2385, ((rt_int)1LL));
{
F->i_2388 = rt_str_copy(f_gexpr_805(F->a_2380, f_idx_type_258(F->bt_792, F->k_2385), &F->it_2381));
F->l_2389 = rt_str_copy(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->b_2386))->all), rt_str(".", 1)), f_dim_lo_242(F->k_2385)));
F->h_2390 = rt_str_copy(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->b_2386))->all), rt_str(".", 1)), f_dim_hi_244(F->k_2385)));
f_check_type_232(F->it_2381, f_idx_type_258(F->bt_792, F->k_2385), (*(P1034)rt_nil_check(F->e_793)).line);
if ((F->off_2384 == NULL)) {
F->off_2384 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_790(&F->i_2388, &F->l_2389, &F->h_2390)), rt_str(" - ", 3)), F->l_2389), rt_str(")", 1)); b_; }));
} else {
F->off_2384 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1027)rt_nil_check(F->off_2384))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2389), rt_str(", ", 2)), F->h_2390), rt_str(") + ", 4)), f_ix_790(&F->i_2388, &F->l_2389, &F->h_2390)), rt_str(" - ", 3)), F->l_2389), rt_str(")", 1)); b_; }));
}
}
F->a_2380 = (*(P1034)rt_nil_check(F->a_2380)).next;
}
if ((((rt_int)(((((P1027)rt_nil_check(F->pre_2387))->all)).len)) > ((rt_int)0LL))) {
F->code_796v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->pre_2387))->all), (((P1027)rt_nil_check(F->b_2386))->all)), rt_str(".p[", 3)), (((P1027)rt_nil_check(F->off_2384))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_796v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->b_2386))->all), rt_str(".p[", 3)), (((P1027)rt_nil_check(F->off_2384))->all)), rt_str("]", 1)); b_; }));
}
F->t_797v = (*(P1040)rt_nil_check(F->bt_792)).elem;
F->c_798v = (*(P1040)rt_nil_check(F->bt_792)).elemcons;
goto ret_;
}
if ((f_list_len_71(F->a_2380) != ((rt_int)1LL))) {
f_fail_23((*(P1034)rt_nil_check(F->e_793)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P1040)rt_nil_check(F->bt_792)).kind == (((rt_int)5LL)))) {
if (((*(P1034)rt_nil_check(F->a_2380)).kind == (((rt_int)16LL)))) {
F->lo_2391 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->a_2380)).a, g_ty_int_1119, &F->it_2381));
F->hi_2392 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->a_2380)).b, g_ty_int_1119, &F->it_2381));
F->code_796v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_791)), rt_str(", ", 2)), F->lo_2391), rt_str(", ", 2)), F->hi_2392), rt_str(")", 1)); b_; }));
F->t_797v = F->bt_792;
(*F->ro_794) = 1;
goto ret_;
}
{
F->i_2393 = rt_str_copy(f_gexpr_805(F->a_2380, g_ty_int_1119, &F->it_2381));
F->t_797v = f_str_elem_218(F->bt_792);
F->c_798v = (*(P1040)rt_nil_check(F->bt_792)).elemcons;
if (F->lv_795) {
F->code_796v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_791)), rt_str(", ", 2)), F->i_2393), rt_str("))", 2)); b_; }));
} else {
if (((f_list_len_71((*(P1040)rt_nil_check(f_base_of_223(f_str_elem_218(F->bt_792)))).lits) < ((rt_int)256LL)) && (!f_suppressed_517(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))))) {
F->code_796v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_cchk(rt_str_get(", 21), (*F->base_791)), rt_str(", ", 2)), F->i_2393), rt_str("))", 2)); b_; }));
} else {
F->code_796v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_791)), rt_str(", ", 2)), F->i_2393), rt_str(")", 1)); b_; }));
}
(*F->ro_794) = 1;
}
}
goto ret_;
}
f_fail_23((*(P1034)rt_nil_check(F->e_793)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_796) = F->code_796v;  (*F->t_797) = F->t_797v;  (*F->c_798) = F->c_798v;
  RT_FPOP();
  return;
}

static int f_own_attribute_801(P1034 e_800) {
  struct f_own_attribute_801fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_800 = e_800;
F->saved_2394 = NULL;
F->saved_2394 = g_code_1088;
F->bt_2395 = NULL;
F->ok_2396 = 0;
g_trial_1117 = rt_add(g_trial_1117, ((rt_int)1LL));
g_code_1088 = f_new_buffer_24();
{ rt_frame xf2397;
if (RT_TRY(xf2397)) {
F->base_2399 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_800)).a, NULL, &F->bt_2395));
while (((F->bt_2395 != NULL) && ((*(P1040)rt_nil_check(F->bt_2395)).kind == (((rt_int)8LL))))) {
f_finish_ptr_480(F->bt_2395);
F->bt_2395 = (*(P1040)rt_nil_check(F->bt_2395)).target;
}
while ((((F->bt_2395 != NULL) && ((*(P1040)rt_nil_check(F->bt_2395)).kind == (((rt_int)15LL)))) && ((*(P1040)rt_nil_check(F->bt_2395)).tparams == NULL))) {
F->bt_2395 = (*(P1040)rt_nil_check(F->bt_2395)).under;
}
if (((F->bt_2395 != NULL) && ((*(P1040)rt_nil_check(F->bt_2395)).kind == (((rt_int)15LL))))) {
F->p_2400 = NULL;
F->p_2400 = (*(P1040)rt_nil_check(F->bt_2395)).tparams;
while ((F->p_2400 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2400)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_800)).name))->all))) {
F->ok_2396 = 1;
}
F->p_2400 = (*(P1034)rt_nil_check(F->p_2400)).next;
}
F->bt_2395 = (*(P1040)rt_nil_check(F->bt_2395)).under;
}
if (((F->bt_2395 != NULL) && (((*(P1040)rt_nil_check(F->bt_2395)).kind == (((rt_int)7LL))) || ((*(P1040)rt_nil_check(F->bt_2395)).kind == (((rt_int)17LL)))))) {
F->f_2401 = NULL;
F->f_2401 = (*(P1040)rt_nil_check(F->bt_2395)).fields;
while ((F->f_2401 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_2401)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_800)).name))->all))) {
F->ok_2396 = 1;
}
F->f_2401 = (*(P1042)rt_nil_check(F->f_2401)).next;
}
}
RT_POP(xf2397);
} else {
RT_POP(xf2397);
int x2398 = rt_xcur;
if (0 || x2398 == ex_compile_error_1) {
F->ok_2396 = 0;
} else {
rt_raise(x2398);
}
}
}
g_trial_1117 = rt_sub(g_trial_1117, ((rt_int)1LL));
g_code_1088 = F->saved_2394;
F->result_ = F->ok_2396;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_805(P1034 e_802, P1040 want_803, P1040 *t_804) {
  struct f_gexpr_805fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_802 = e_802;
F->want_803 = want_803;
F->t_804 = t_804;
F->t_804v = *F->t_804;
F->k_2402 = (*(P1034)rt_nil_check(F->e_802)).kind;
F->code_2403 = NULL;
F->c_2404 = NULL;
F->bt_2406 = NULL;
F->ctx_2407 = NULL;
F->ctx_2407 = g_cons_ctx_1109;
F->whole_2408 = (!g_skip_chk_1111);
g_cons_ctx_1109 = NULL;
g_skip_chk_1111 = 0;
F->t_804v = g_ty_int_1119;
if ((F->k_2402 == (((rt_int)1LL)))) {
if (((F->want_803 != NULL) && ((*(P1040)rt_nil_check(F->want_803)).kind == (((rt_int)3LL))))) {
F->t_804v = g_ty_float_1121;
F->result_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_2402 == (((rt_int)2LL)))) {
F->t_804v = g_ty_float_1121;
F->result_ = (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all);
goto ret_;
} else if ((F->k_2402 == (((rt_int)5LL)))) {
F->t_804v = g_ty_bool_1120;
F->result_ = f_itos_7((*(P1034)rt_nil_check(F->e_802)).ival);
goto ret_;
} else if (((((F->k_2402 == (((rt_int)3LL))) && (F->want_803 != NULL)) && ((*(P1040)rt_nil_check(F->want_803)).kind == (((rt_int)5LL)))) && (!f_same_221(f_str_elem_218(F->want_803), g_ty_ascii_1122)))) {
F->r_2409 = NULL;
F->r_2409 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_q_18(); b_; }));
F->t_804v = F->want_803;
{ rt_int lo2411 = ((rt_int)1LL), hi2412 = ((rt_int)(((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all)).len));
for (rt_int it2413 = lo2411; it2413 <= hi2412; it2413++) {
F->i_2410 = it2413;
F->pos_2414 = f_lit_index_265((*(P1040)rt_nil_check(f_base_of_223(f_str_elem_218(F->want_803)))).lits, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ascii_lit_818(rt_str_get((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), F->i_2410)); b_; }));
if ((F->pos_2414 < ((rt_int)0LL))) {
f_fail_23((*(P1034)rt_nil_check(F->e_802)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), f_ascii_lit_818(rt_str_get((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), F->i_2410))), rt_str(" is not a value of the component type", 37)); b_; }));
}
F->r_2409 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_2409))->all), rt_str("\\", 1)), f_octal_820(F->pos_2414)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), (((P1027)rt_nil_check(F->r_2409))->all)), f_q_18()), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_2402 == (((rt_int)3LL)))) {
F->t_804v = g_ty_string_1123;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_851(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_2402 == (((rt_int)6LL)))) {
F->t_804v = g_ty_nil_1126;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_2402 == (((rt_int)4LL)))) {
if (((F->want_803 != NULL) && ((*(P1040)rt_nil_check(f_base_of_223(F->want_803))).kind == (((rt_int)4LL))))) {
F->t_804v = F->want_803;
} else {
F->t_804v = f_enum_type_of_854(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), (*(P1034)rt_nil_check(F->e_802)).line);
}
{
F->i_2415 = f_lit_index_265((*(P1040)rt_nil_check(f_base_of_223(F->t_804v))).lits, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all));
if ((F->i_2415 < ((rt_int)0LL))) {
f_fail_23((*(P1034)rt_nil_check(F->e_802)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_2415);
goto ret_;
}
} else if ((F->k_2402 == (((rt_int)17LL)))) {
g_cons_ctx_1109 = F->ctx_2407;
F->result_ = f_gexpr_805((*(P1034)rt_nil_check(F->e_802)).a, F->want_803, &F->t_804v);
goto ret_;
} else if ((F->k_2402 == (((rt_int)7LL)))) {
F->y_2416 = NULL;
F->y_2416 = f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all));
if ((F->y_2416 == NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("ME", 2))) {
F->t_804v = g_ty_act_1129;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_804v = g_ty_act_1129;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_956(f_wrap_apply_849(F->e_802), 0, &F->t_804v);
goto ret_;
}
if (((((((((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_956(f_wrap_apply_849(F->e_802), 0, &F->t_804v);
goto ret_;
}
f_fail_23((*(P1034)rt_nil_check(F->e_802)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P1044)rt_nil_check(F->y_2416)).kind == (((rt_int)1LL))) || ((*(P1044)rt_nil_check(F->y_2416)).kind == (((rt_int)2LL))))) {
F->t_804v = (*(P1044)rt_nil_check(F->y_2416)).t;
if (((*(P1044)rt_nil_check(F->y_2416)).kind == (((rt_int)1LL)))) {
F->ro_2417 = f_check_import_758(F->y_2416, (*(P1034)rt_nil_check(F->e_802)).line);
if ((!F->whole_2408)) {
F->result_ = f_access_of_752(F->y_2416);
goto ret_;
}
F->result_ = f_init_chk_368((*(P1044)rt_nil_check(F->y_2416)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_752(F->y_2416); b_; }));
goto ret_;
}
F->result_ = f_access_of_752(F->y_2416);
goto ret_;
}
if (((*(P1044)rt_nil_check(F->y_2416)).kind == (((rt_int)3LL)))) {
F->result_ = f_gcall_956(f_wrap_apply_849(F->e_802), 0, &F->t_804v);
goto ret_;
}
f_fail_23((*(P1034)rt_nil_check(F->e_802)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_2402 == (((rt_int)8LL))) && (f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all)) != NULL)) && (f_user_op_952(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), f_copy_node_847((*(P1034)rt_nil_check(F->e_802)).a)) != NULL))) {
F->call_2418 = NULL;
F->call_2418 = f_nn_65((((rt_int)10LL)), (*(P1034)rt_nil_check(F->e_802)).line);
F->fname_2419 = NULL;
F->fname_2419 = f_nn_65((((rt_int)7LL)), (*(P1034)rt_nil_check(F->e_802)).line);
(*(P1034)rt_nil_check(F->fname_2419)).name = (*(P1034)rt_nil_check(F->e_802)).name;
(*(P1034)rt_nil_check(F->call_2418)).a = F->fname_2419;
(*(P1034)rt_nil_check(F->call_2418)).b = f_copy_node_847((*(P1034)rt_nil_check(F->e_802)).a);
F->result_ = f_gcall_956(F->call_2418, 0, &F->t_804v);
goto ret_;
} else if (((((F->k_2402 == (((rt_int)8LL))) && rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("NOT", 3))) && (F->want_803 != NULL)) && ((*(P1040)rt_nil_check(F->want_803)).kind == (((rt_int)16LL))))) {
F->a_2420 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_802)).a, F->want_803, &F->t_804v));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->want_803, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("compl", 5); b_; })), rt_str("(", 1)), F->a_2420), rt_str(")", 1));
goto ret_;
} else if ((F->k_2402 == (((rt_int)8LL)))) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("NOT", 3))) {
F->a_2421 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_802)).a, g_ty_bool_1120, &F->t_804v));
f_check_type_232(F->t_804v, g_ty_bool_1120, (*(P1034)rt_nil_check(F->e_802)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_2421), rt_str(")", 1));
goto ret_;
}
{
F->a_2422 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_802)).a, F->want_803, &F->t_804v));
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_2422;
goto ret_;
} else if (((*(P1040)rt_nil_check(F->t_804v)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_2422), rt_str(")", 1));
goto ret_;
}
f_check_type_232(F->t_804v, g_ty_int_1119, (*(P1034)rt_nil_check(F->e_802)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_2422), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_2402 == (((rt_int)9LL)))) {
F->result_ = f_gbinop_876(F->e_802, F->want_803, &F->t_804v);
goto ret_;
} else if ((F->k_2402 == (((rt_int)10LL)))) {
if ((((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).a)).kind == (((rt_int)7LL))) || ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).a)).kind == (((rt_int)12LL))))) {
F->nm_2423 = NULL;
F->nm_2423 = (*(P1034)rt_nil_check(F->e_802)).a;
F->y_2424 = NULL;
if (((*(P1034)rt_nil_check(F->nm_2423)).kind == (((rt_int)12LL)))) {
F->nm_2423 = (*(P1034)rt_nil_check(F->nm_2423)).a;
}
F->y_2424 = f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->nm_2423)).name))->all));
if (((((F->y_2424 == NULL) || ((*(P1044)rt_nil_check(F->y_2424)).kind == (((rt_int)3LL)))) || ((*(P1044)rt_nil_check(F->y_2424)).kind == (((rt_int)4LL)))) || ((*(P1044)rt_nil_check(F->y_2424)).kind == (((rt_int)10LL))))) {
F->result_ = f_gcall_956(F->e_802, 0, &F->t_804v);
goto ret_;
}
}
if ((f_user_subscript_831(F->e_802) != NULL)) {
F->result_ = f_gcall_956(f_user_subscript_831(F->e_802), 0, &F->t_804v);
goto ret_;
}
{
F->base_2425 = rt_str_copy(f_gexpr_base_811((*(P1034)rt_nil_check(F->e_802)).a, &F->bt_2406));
F->ro_2405 = 1;
f_index_on_799(&F->base_2425, F->bt_2406, F->e_802, &F->ro_2405, 0, &F->code_2403, &F->t_804v, &F->c_2404);
if ((((!f_is_lvalue_768(F->e_802)) || ((*(P1040)rt_nil_check(F->t_804v)).kind == (((rt_int)6LL)))) || ((*(P1040)rt_nil_check(F->t_804v)).kind == (((rt_int)5LL))))) {
F->result_ = (((P1027)rt_nil_check(F->code_2403))->all);
goto ret_;
}
F->result_ = f_init_chk_368(F->t_804v, &(((P1027)rt_nil_check(F->code_2403))->all));
goto ret_;
}
} else if (((F->k_2402 == (((rt_int)11LL))) && (f_user_dot_829(F->e_802) != NULL))) {
F->result_ = f_gcall_956(f_user_dot_829(F->e_802), 0, &F->t_804v);
goto ret_;
} else if ((F->k_2402 == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_801(F->e_802)))) {
F->result_ = f_attribute_859(F->e_802, &F->t_804v);
goto ret_;
} else if (((f_as_subtype_297((*(P1034)rt_nil_check(F->e_802)).a) != NULL) || f_ptr_attribute_856(F->e_802))) {
F->result_ = f_attribute_859(F->e_802, &F->t_804v);
goto ret_;
}
{
F->base_2426 = rt_str_copy(f_gexpr_base_811((*(P1034)rt_nil_check(F->e_802)).a, &F->bt_2406));
F->ro_2405 = 1;
f_select_on_782(&F->base_2426, F->bt_2406, F->e_802, &F->ro_2405, &F->code_2403, &F->t_804v, &F->c_2404);
if ((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_802)).name))->all), rt_str("TAG", 3)) || (!f_is_lvalue_768(F->e_802)))) {
F->result_ = (((P1027)rt_nil_check(F->code_2403))->all);
goto ret_;
}
F->result_ = f_init_chk_368(F->t_804v, &(((P1027)rt_nil_check(F->code_2403))->all));
goto ret_;
}
} else if ((F->k_2402 == (((rt_int)12LL)))) {
F->result_ = f_gcall_956(f_wrap_apply_849(F->e_802), 0, &F->t_804v);
goto ret_;
} else if ((F->k_2402 == (((rt_int)14LL)))) {
F->result_ = f_constructor_881(F->e_802, F->want_803, F->ctx_2407, &F->t_804v);
goto ret_;
} else if ((F->k_2402 == (((rt_int)13LL)))) {
F->result_ = f_resolved_808(F->e_802, &F->t_804v);
goto ret_;
}
f_fail_23((*(P1034)rt_nil_check(F->e_802)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_804) = F->t_804v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_808(P1034 e_806, P1040 *t_807) {
  struct f_resolved_808fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_806 = e_806;
F->t_807 = t_807;
F->t_807v = *F->t_807;
F->c_2427 = NULL;
F->vt_2428 = NULL;
F->y_2429 = NULL;
F->y_2429 = f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_2430 = NULL;
F->tt_2430 = f_copy_node_847((*(P1034)rt_nil_check(F->e_806)).b);
(*(P1034)rt_nil_check(F->tt_2430)).next = NULL;
if (((F->y_2429 != NULL) && (((*(P1044)rt_nil_check(F->y_2429)).kind == (((rt_int)10LL))) || (f_resolve_overload_930(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_2430, f_copy_node_847((*(P1034)rt_nil_check(F->e_806)).a), 0, (*(P1034)rt_nil_check(F->e_806)).line) != NULL)))) {
F->call_2431 = NULL;
F->call_2431 = f_nn_65((((rt_int)10LL)), (*(P1034)rt_nil_check(F->e_806)).line);
F->f_2432 = NULL;
F->f_2432 = f_nn_65((((rt_int)12LL)), (*(P1034)rt_nil_check(F->e_806)).line);
F->fname_2433 = NULL;
F->fname_2433 = f_nn_65((((rt_int)7LL)), (*(P1034)rt_nil_check(F->e_806)).line);
(*(P1034)rt_nil_check(F->fname_2433)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P1034)rt_nil_check(F->f_2432)).a = F->fname_2433;
(*(P1034)rt_nil_check(F->f_2432)).b = F->tt_2430;
(*(P1034)rt_nil_check(F->call_2431)).a = F->f_2432;
(*(P1034)rt_nil_check(F->call_2431)).b = f_copy_node_847((*(P1034)rt_nil_check(F->e_806)).a);
(*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->call_2431)).b)).next = NULL;
F->result_ = f_gcall_956(F->call_2431, 0, &F->t_807v);
goto ret_;
}
F->t_807v = f_resolve_subtype_268((*(P1034)rt_nil_check(F->e_806)).b, &F->c_2427);
{
F->v_2434 = rt_str_copy(f_gexpr_in_816((*(P1034)rt_nil_check(F->e_806)).a, F->t_807v, F->c_2427, &F->vt_2428));
f_check_type_232(F->vt_2428, F->t_807v, (*(P1034)rt_nil_check(F->e_806)).line);
F->result_ = f_checked_213(F->t_807v, F->c_2427, &F->v_2434);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_807) = F->t_807v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_base_811(P1034 e_809, P1040 *t_810) {
  struct f_gexpr_base_811fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_809 = e_809;
F->t_810 = t_810;
F->t_810v = *F->t_810;
g_skip_chk_1111 = 1;
F->result_ = f_gexpr_805(F->e_809, NULL, &F->t_810v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_810) = F->t_810v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_816(P1034 e_812, P1040 want_813, P1036 c_814, P1040 *t_815) {
  struct f_gexpr_in_816fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_812 = e_812;
F->want_813 = want_813;
F->c_814 = c_814;
F->t_815 = t_815;
F->t_815v = *F->t_815;
g_cons_ctx_1109 = F->c_814;
F->result_ = f_gexpr_805(F->e_812, F->want_813, &F->t_815v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_815) = F->t_815v;
  RT_FPOP();
  return F->result_;
}

static rstr f_ascii_lit_818(int ch_817) {
  struct f_ascii_lit_818fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ch_817 = ch_817;
F->l_2435 = NULL;
F->l_2435 = (*(P1040)rt_nil_check(g_ty_ascii_1122)).lits;
{ rt_int lo2437 = ((rt_int)1LL), hi2438 = rt_sub(((rt_int)(F->ch_817) + 1), ((rt_int)1LL));
for (rt_int it2439 = lo2437; it2439 <= hi2438; it2439++) {
F->i_2436 = it2439;
F->l_2435 = (*(P1034)rt_nil_check(F->l_2435)).next;
}
}
F->result_ = (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->l_2435)).name))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_octal_820(rt_int n_819) {
  struct f_octal_820fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_819 = n_819;
F->r_2440 = rt_str_new(((rt_int)3LL));
rt_str_assign(&F->r_2440, rt_str("000", 3));
(*rt_str_at(&F->r_2440, ((rt_int)1LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_819, ((rt_int)64LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2440, ((rt_int)2LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_819, ((rt_int)8LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2440, ((rt_int)3LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(F->n_819, ((rt_int)8LL)), ((rt_int)1LL)));
F->result_ = F->r_2440;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1040 f_str_cat_part_822(P1040 t_821) {
  struct f_str_cat_part_822fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_821 = t_821;
if (((*(P1040)rt_nil_check(F->t_821)).kind == (((rt_int)5LL)))) {
F->result_ = f_str_elem_218(F->t_821);
goto ret_;
}
F->result_ = F->t_821;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1040 f_peek_type_824(P1034 e_823) {
  struct f_peek_type_824fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_823 = e_823;
F->saved_2441 = NULL;
F->saved_2441 = g_code_1088;
F->t_2442 = NULL;
g_trial_1117 = rt_add(g_trial_1117, ((rt_int)1LL));
g_code_1088 = f_new_buffer_24();
{ rt_frame xf2443;
if (RT_TRY(xf2443)) {
F->v_2445 = rt_str_copy(f_gexpr_805(F->e_823, NULL, &F->t_2442));
RT_POP(xf2443);
} else {
RT_POP(xf2443);
int x2444 = rt_xcur;
if (0 || x2444 == ex_compile_error_1) {
F->t_2442 = NULL;
} else {
rt_raise(x2444);
}
}
}
g_trial_1117 = rt_sub(g_trial_1117, ((rt_int)1LL));
g_code_1088 = F->saved_2441;
F->result_ = F->t_2442;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1040 f_set_operands_827(P1034 e_825, P1040 want_826) {
  struct f_set_operands_827fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_825 = e_825;
F->want_826 = want_826;
F->t_2446 = NULL;
if (((F->want_826 != NULL) && ((*(P1040)rt_nil_check(F->want_826)).kind == (((rt_int)16LL))))) {
F->result_ = F->want_826;
goto ret_;
} else if ((F->want_826 != NULL)) {
F->result_ = NULL;
goto ret_;
}
if (((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_825)).a)).kind != (((rt_int)14LL)))) {
F->t_2446 = f_peek_type_824((*(P1034)rt_nil_check(F->e_825)).a);
} else if (((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_825)).b)).kind != (((rt_int)14LL)))) {
F->t_2446 = f_peek_type_824((*(P1034)rt_nil_check(F->e_825)).b);
}
if (((F->t_2446 != NULL) && ((*(P1040)rt_nil_check(F->t_2446)).kind == (((rt_int)16LL))))) {
F->result_ = F->t_2446;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_user_dot_829(P1034 e_828) {
  struct f_user_dot_829fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_828 = e_828;
F->arg_2447 = NULL;
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_828)).name))->all)); b_; })) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->arg_2447 = f_copy_node_847((*(P1034)rt_nil_check(F->e_828)).a);
if ((f_user_op_952(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_828)).name))->all)); b_; }), F->arg_2447) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_835(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_828)).name))->all)); b_; }), F->arg_2447, (*(P1034)rt_nil_check(F->e_828)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_user_subscript_831(P1034 e_830) {
  struct f_user_subscript_831fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_830 = e_830;
F->name_2448 = NULL;
F->name_2448 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
F->args_2449 = NULL;
F->tail_2450 = NULL;
F->a_2451 = NULL;
F->a_2451 = (*(P1034)rt_nil_check(F->e_830)).b;
if ((((((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_830)).a)).kind == (((rt_int)7LL))) && (f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_830)).a)).name))->all)) != NULL)) && ((*(P1044)rt_nil_check(f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_830)).a)).name))->all)))).kind != (((rt_int)1LL)))) && ((*(P1044)rt_nil_check(f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_830)).a)).name))->all)))).kind != (((rt_int)2LL))))) {
F->result_ = NULL;
goto ret_;
}
f_append_69(&F->args_2449, &F->tail_2450, f_copy_node_847((*(P1034)rt_nil_check(F->e_830)).a));
while ((F->a_2451 != NULL)) {
if ((((rt_int)(((((P1027)rt_nil_check(F->name_2448))->all)).len)) > ((rt_int)1LL))) {
F->name_2448 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->name_2448))->all), rt_str(",", 1)); b_; }));
}
if (((*(P1034)rt_nil_check(F->a_2451)).kind == (((rt_int)16LL)))) {
F->name_2448 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->name_2448))->all), rt_str("*..*", 4)); b_; }));
f_append_69(&F->args_2449, &F->tail_2450, f_copy_node_847((*(P1034)rt_nil_check(F->a_2451)).a));
f_append_69(&F->args_2449, &F->tail_2450, f_copy_node_847((*(P1034)rt_nil_check(F->a_2451)).b));
} else {
F->name_2448 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->name_2448))->all), rt_str("*", 1)); b_; }));
f_append_69(&F->args_2449, &F->tail_2450, f_copy_node_847(F->a_2451));
}
F->a_2451 = (*(P1034)rt_nil_check(F->a_2451)).next;
}
F->name_2448 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->name_2448))->all), rt_str(")", 1)); b_; }));
if (((f_lookup_163(&(((P1027)rt_nil_check(F->name_2448))->all)) == NULL) || (f_user_op_952(&(((P1027)rt_nil_check(F->name_2448))->all), F->args_2449) == NULL))) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_835(&(((P1027)rt_nil_check(F->name_2448))->all), F->args_2449, (*(P1034)rt_nil_check(F->e_830)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_op_call_835(rstr *name_832, P1034 args_833, rt_int line_834) {
  struct f_op_call_835fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_832 = name_832;
F->args_833 = args_833;
F->line_834 = line_834;
F->call_2452 = NULL;
F->call_2452 = f_nn_65((((rt_int)10LL)), F->line_834);
F->f_2453 = NULL;
F->f_2453 = f_nn_65((((rt_int)7LL)), F->line_834);
(*(P1034)rt_nil_check(F->f_2453)).name = f_mk_3(&(*F->name_832));
(*(P1034)rt_nil_check(F->call_2452)).a = F->f_2453;
(*(P1034)rt_nil_check(F->call_2452)).b = F->args_833;
F->result_ = F->call_2452;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_derived_relation_837(P1034 e_836) {
  struct f_derived_relation_837fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_836 = e_836;
F->l_2454 = NULL;
F->r_2455 = NULL;
F->has_eq_2456 = 0;
F->has_lt_2457 = 0;
F->l_2454 = f_copy_node_847((*(P1034)rt_nil_check(F->e_836)).a);
F->r_2455 = f_copy_node_847((*(P1034)rt_nil_check(F->e_836)).b);
(*(P1034)rt_nil_check(F->l_2454)).next = F->r_2455;
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; })) != NULL)) {
F->has_eq_2456 = (f_user_op_952(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), F->l_2454) != NULL);
}
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; })) != NULL)) {
F->l_2454 = f_copy_node_847((*(P1034)rt_nil_check(F->e_836)).a);
F->r_2455 = f_copy_node_847((*(P1034)rt_nil_check(F->e_836)).b);
(*(P1034)rt_nil_check(F->l_2454)).next = F->r_2455;
F->has_lt_2457 = (f_user_op_952(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), F->l_2454) != NULL);
}
if ((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_836)).name))->all), rt_str("/=", 2)) && F->has_eq_2456)) {
F->result_ = f_rel_not_845(f_rel_node_842(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1034)rt_nil_check(F->e_836)).a, (*(P1034)rt_nil_check(F->e_836)).b, (*(P1034)rt_nil_check(F->e_836)).line), (*(P1034)rt_nil_check(F->e_836)).line);
goto ret_;
} else if ((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_836)).name))->all), rt_str(">", 1)) && F->has_lt_2457)) {
F->result_ = f_rel_node_842(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1034)rt_nil_check(F->e_836)).b, (*(P1034)rt_nil_check(F->e_836)).a, (*(P1034)rt_nil_check(F->e_836)).line);
goto ret_;
} else if (((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_836)).name))->all), rt_str("<=", 2)) && F->has_lt_2457) && F->has_eq_2456)) {
F->result_ = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_842(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1034)rt_nil_check(F->e_836)).a, (*(P1034)rt_nil_check(F->e_836)).b, (*(P1034)rt_nil_check(F->e_836)).line), f_rel_node_842(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1034)rt_nil_check(F->e_836)).a, (*(P1034)rt_nil_check(F->e_836)).b, (*(P1034)rt_nil_check(F->e_836)).line), (*(P1034)rt_nil_check(F->e_836)).line);
goto ret_;
} else if (((rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_836)).name))->all), rt_str(">=", 2)) && F->has_lt_2457) && F->has_eq_2456)) {
F->result_ = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_842(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1034)rt_nil_check(F->e_836)).b, (*(P1034)rt_nil_check(F->e_836)).a, (*(P1034)rt_nil_check(F->e_836)).line), f_rel_node_842(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1034)rt_nil_check(F->e_836)).a, (*(P1034)rt_nil_check(F->e_836)).b, (*(P1034)rt_nil_check(F->e_836)).line), (*(P1034)rt_nil_check(F->e_836)).line);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_rel_node_842(rstr *op_838, P1034 a_839, P1034 b_840, rt_int line_841) {
  struct f_rel_node_842fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_838 = op_838;
F->a_839 = a_839;
F->b_840 = b_840;
F->line_841 = line_841;
F->result_ = f_binop_106(f_mk_3(&(*F->op_838)), f_copy_node_847(F->a_839), f_copy_node_847(F->b_840), F->line_841);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_rel_not_845(P1034 x_843, rt_int line_844) {
  struct f_rel_not_845fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_843 = x_843;
F->line_844 = line_844;
F->n_2458 = NULL;
F->n_2458 = f_nn_65((((rt_int)8LL)), F->line_844);
(*(P1034)rt_nil_check(F->n_2458)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P1034)rt_nil_check(F->n_2458)).a = F->x_843;
F->result_ = F->n_2458;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_copy_node_847(P1034 e_846) {
  struct f_copy_node_847fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_846 = e_846;
F->x_2459 = NULL;
{ R1035 *cell2460 = rt_alloc(sizeof(R1035));
(*cell2460).name = NULL;
(*cell2460).tag = NULL;
(*cell2460).prags = NULL;
(*cell2460).labels = NULL;
(*cell2460).a = NULL;
(*cell2460).b = NULL;
(*cell2460).c = NULL;
(*cell2460).d = NULL;
(*cell2460).e = NULL;
(*cell2460).next = NULL;
F->x_2459 = cell2460;
}
(*(P1034)rt_nil_check(F->x_2459)).kind = (*(P1034)rt_nil_check(F->e_846)).kind;
(*(P1034)rt_nil_check(F->x_2459)).line = (*(P1034)rt_nil_check(F->e_846)).line;
(*(P1034)rt_nil_check(F->x_2459)).ival = (*(P1034)rt_nil_check(F->e_846)).ival;
(*(P1034)rt_nil_check(F->x_2459)).flag = (*(P1034)rt_nil_check(F->e_846)).flag;
(*(P1034)rt_nil_check(F->x_2459)).name = (*(P1034)rt_nil_check(F->e_846)).name;
(*(P1034)rt_nil_check(F->x_2459)).tag = (*(P1034)rt_nil_check(F->e_846)).tag;
(*(P1034)rt_nil_check(F->x_2459)).a = (*(P1034)rt_nil_check(F->e_846)).a;
(*(P1034)rt_nil_check(F->x_2459)).b = (*(P1034)rt_nil_check(F->e_846)).b;
(*(P1034)rt_nil_check(F->x_2459)).c = (*(P1034)rt_nil_check(F->e_846)).c;
(*(P1034)rt_nil_check(F->x_2459)).d = (*(P1034)rt_nil_check(F->e_846)).d;
F->result_ = F->x_2459;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1034 f_wrap_apply_849(P1034 e_848) {
  struct f_wrap_apply_849fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_848 = e_848;
F->x_2461 = NULL;
F->x_2461 = f_nn_65((((rt_int)10LL)), (*(P1034)rt_nil_check(F->e_848)).line);
(*(P1034)rt_nil_check(F->x_2461)).a = F->e_848;
F->result_ = F->x_2461;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_851(rstr *s_850) {
  struct f_c_string_851fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_850 = s_850;
F->n_2462 = ((rt_int)0LL);
{ rt_int lo2464 = ((rt_int)1LL), hi2465 = ((rt_int)(((*F->s_850)).len));
for (rt_int it2466 = lo2464; it2466 <= hi2465; it2466++) {
F->i_2463 = it2466;
if (((rt_str_get((*F->s_850), F->i_2463) == 92) || (rt_str_get((*F->s_850), F->i_2463) == 63))) {
F->n_2462 = rt_add(F->n_2462, ((rt_int)1LL));
}
}
}
{
F->r_2467 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_850)).len)), F->n_2462), ((rt_int)2LL)));
F->j_2468 = ((rt_int)1LL);
(*rt_str_at(&F->r_2467, ((rt_int)1LL))) = 34;
{ rt_int lo2470 = ((rt_int)1LL), hi2471 = ((rt_int)(((*F->s_850)).len));
for (rt_int it2472 = lo2470; it2472 <= hi2471; it2472++) {
F->i_2469 = it2472;
F->j_2468 = rt_add(F->j_2468, ((rt_int)1LL));
if (((rt_str_get((*F->s_850), F->i_2469) == 92) || (rt_str_get((*F->s_850), F->i_2469) == 63))) {
(*rt_str_at(&F->r_2467, F->j_2468)) = 92;
F->j_2468 = rt_add(F->j_2468, ((rt_int)1LL));
}
(*rt_str_at(&F->r_2467, F->j_2468)) = rt_str_get((*F->s_850), F->i_2469);
}
}
(*rt_str_at(&F->r_2467, rt_add(F->j_2468, ((rt_int)1LL)))) = 34;
F->result_ = F->r_2467;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1040 f_enum_type_of_854(rstr *lit_852, rt_int line_853) {
  struct f_enum_type_of_854fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_852 = lit_852;
F->line_853 = line_853;
F->y_2473 = NULL;
F->y_2473 = g_scope_stack_1078;
F->c_2474 = NULL;
if ((f_lit_index_265((*(P1040)rt_nil_check(g_ty_ascii_1122)).lits, &(*F->lit_852)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_1122;
goto ret_;
}
while ((F->y_2473 != NULL)) {
if ((((((*(P1044)rt_nil_check(F->y_2473)).kind == (((rt_int)6LL))) || ((*(P1044)rt_nil_check(F->y_2473)).kind == (((rt_int)5LL)))) && ((*(P1044)rt_nil_check(F->y_2473)).st != NULL)) && ((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_2473)).st)).kind == (((rt_int)72LL))))) {
if ((f_lit_index_265((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_2473)).st)).a, &(*F->lit_852)) >= ((rt_int)0LL))) {
if (((*(P1044)rt_nil_check(F->y_2473)).kind == (((rt_int)5LL)))) {
F->st_2475 = NULL;
F->st_2475 = f_nn_65((((rt_int)80LL)), F->line_853);
(*(P1034)rt_nil_check(F->st_2475)).name = (*(P1044)rt_nil_check(F->y_2473)).name;
F->result_ = f_resolve_subtype_268(F->st_2475, &F->c_2474);
goto ret_;
}
F->result_ = f_resolve_subtype_268((*(P1044)rt_nil_check(F->y_2473)).st, &F->c_2474);
goto ret_;
}
}
F->y_2473 = (*(P1044)rt_nil_check(F->y_2473)).stack;
}
f_fail_23(F->line_853, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_852)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_856(P1034 e_855) {
  struct f_ptr_attribute_856fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_855 = e_855;
F->lv_2476 = NULL;
F->t_2477 = NULL;
F->c_2478 = NULL;
F->p_2480 = NULL;
F->saved_2481 = NULL;
F->saved_2481 = g_code_1088;
if ((!f_is_lvalue_768((*(P1034)rt_nil_check(F->e_855)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_1088 = f_new_buffer_24();
f_lvalue_774((*(P1034)rt_nil_check(F->e_855)).a, &F->lv_2476, &F->t_2477, &F->c_2478, &F->ro_2479);
g_code_1088 = F->saved_2481;
if ((((*(P1040)rt_nil_check(F->t_2477)).kind != (((rt_int)8LL))) || ((*(P1040)rt_nil_check(F->t_2477)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_2480 = (*(P1034)rt_nil_check((*(P1040)rt_nil_check(F->t_2477)).decl)).d;
while ((F->p_2480 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2480)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_855)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_2480 = (*(P1034)rt_nil_check(F->p_2480)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_859(P1034 e_857, P1040 *t_858) {
  struct f_attribute_859fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_857 = e_857;
F->t_858 = t_858;
F->t_858v = *F->t_858;
F->bt_2482 = NULL;
F->c_2483 = NULL;
F->base_2484 = NULL;
F->sub_2485 = NULL;
F->sub_2485 = f_as_subtype_297((*(P1034)rt_nil_check(F->e_857)).a);
F->name_2486 = rt_str_copy((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_857)).name))->all));
if ((F->sub_2485 != NULL)) {
F->bt_2482 = f_resolve_subtype_268(F->sub_2485, &F->c_2483);
} else {
F->bt_2482 = f_value_subtype_290((*(P1034)rt_nil_check(F->e_857)).a, &F->c_2483, &F->base_2484);
}
if ((((((*(P1040)rt_nil_check(F->bt_2482)).kind == (((rt_int)8LL))) && (F->c_2483 != NULL)) && ((*(P1036)rt_nil_check(F->c_2483)).args != NULL)) && ((*(P1040)rt_nil_check(F->bt_2482)).decl != NULL))) {
F->p_2487 = NULL;
F->p_2487 = (*(P1034)rt_nil_check((*(P1040)rt_nil_check(F->bt_2482)).decl)).d;
F->a_2488 = NULL;
F->a_2488 = (*(P1036)rt_nil_check(F->c_2483)).args;
while (((F->p_2487 != NULL) && (F->a_2488 != NULL))) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2487)).name))->all), F->name_2486)) {
F->pc_2489 = NULL;
F->v_2490 = rt_str_copy(f_gexpr_805(F->a_2488, f_resolve_subtype_268((*(P1034)rt_nil_check(F->p_2487)).a, &F->pc_2489), &F->t_858v));
F->result_ = F->v_2490;
goto ret_;
}
F->p_2487 = (*(P1034)rt_nil_check(F->p_2487)).next;
F->a_2488 = (*(P1034)rt_nil_check(F->a_2488)).next;
}
}
while ((((*(P1040)rt_nil_check(F->bt_2482)).kind == (((rt_int)8LL))) && (F->base_2484 != NULL))) {
f_finish_ptr_480(F->bt_2482);
F->base_2484 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_766(&(((P1027)rt_nil_check(F->base_2484))->all), F->bt_2482); b_; }));
F->bt_2482 = (*(P1040)rt_nil_check(F->bt_2482)).target;
F->c_2483 = NULL;
if (((*(P1040)rt_nil_check(F->bt_2482)).kind == (((rt_int)5LL)))) {
F->c_2483 = f_new_cons_184();
(*(P1036)rt_nil_check(F->c_2483)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1027)rt_nil_check(F->base_2484))->all)), rt_str(").len", 5)); b_; }));
}
}
if ((((((*(P1040)rt_nil_check(F->bt_2482)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->bt_2482)).tparams != NULL)) && (F->c_2483 != NULL)) && ((*(P1036)rt_nil_check(F->c_2483)).args != NULL))) {
F->p_2491 = NULL;
F->p_2491 = (*(P1040)rt_nil_check(F->bt_2482)).tparams;
F->a_2492 = NULL;
F->a_2492 = (*(P1036)rt_nil_check(F->c_2483)).args;
while (((F->p_2491 != NULL) && (F->a_2492 != NULL))) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2491)).name))->all), F->name_2486)) {
F->pt_2493 = f_tparam_type_357(F->bt_2482, &F->name_2486);
F->v_2494 = rt_str_copy(f_gexpr_805(F->a_2492, F->pt_2493, &F->t_858v));
F->result_ = F->v_2494;
goto ret_;
}
F->p_2491 = (*(P1034)rt_nil_check(F->p_2491)).next;
F->a_2492 = (*(P1034)rt_nil_check(F->a_2492)).next;
}
}
if ((((*(P1040)rt_nil_check(F->bt_2482)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->bt_2482)).tparams == NULL))) {
F->c_2483 = f_base_cons_226(F->bt_2482, F->c_2483);
F->bt_2482 = f_base_of_223(F->bt_2482);
}
F->t_858v = g_ty_int_1119;
if ((rt_str_eq(F->name_2486, rt_str("LEN", 3)) && ((*(P1040)rt_nil_check(F->bt_2482)).kind == (((rt_int)5LL))))) {
if (((F->c_2483 != NULL) && ((*(P1036)rt_nil_check(F->c_2483)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_2483)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23((*(P1034)rt_nil_check(F->e_857)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_2486, rt_str("LEN", 3)) && ((*(P1040)rt_nil_check(F->bt_2482)).kind == (((rt_int)12LL))))) {
if (((F->c_2483 != NULL) && ((*(P1036)rt_nil_check(F->c_2483)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_2483)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23((*(P1034)rt_nil_check(F->e_857)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_2486, rt_str("MIN", 3)) || rt_str_eq(F->name_2486, rt_str("MAX", 3))) && f_scalar_kind_186(F->bt_2482))) {
F->t_858v = F->bt_2482;
if (rt_str_eq(F->name_2486, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_198(F->bt_2482, F->c_2483);
goto ret_;
}
F->result_ = f_sub_hi_201(F->bt_2482, F->c_2483);
goto ret_;
} else if ((rt_str_eq(F->name_2486, rt_str("PREC", 4)) && ((*(P1040)rt_nil_check(F->bt_2482)).kind == (((rt_int)3LL))))) {
if (((F->c_2483 != NULL) && ((*(P1036)rt_nil_check(F->c_2483)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_2483)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_2486, rt_str("ACCESS", 6)) || rt_str_eq(F->name_2486, rt_str("USE", 3))) && ((*(P1040)rt_nil_check(F->bt_2482)).kind == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_872(F->e_857, F->bt_2482, F->c_2483, F->base_2484, &F->t_858v);
goto ret_;
}
f_fail_23((*(P1034)rt_nil_check(F->e_857)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_2486, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_858) = F->t_858v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_864(P1034 sa_860, P1034 sb_861, rstr *op_862, rt_int line_863) {
  struct f_subtype_compare_864fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_860 = sa_860;
F->sb_861 = sb_861;
F->op_862 = op_862;
F->line_863 = line_863;
F->ca_2495 = NULL;
F->cb_2496 = NULL;
F->ta_2497 = NULL;
F->ta_2497 = f_resolve_subtype_268(F->sa_860, &F->ca_2495);
F->tb_2498 = NULL;
F->tb_2498 = f_resolve_subtype_268(F->sb_861, &F->cb_2496);
F->r_2499 = NULL;
F->r_2499 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_2500 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_2500, rt_str("1", 1));
F->no_2501 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_2501, rt_str("0", 1));
if (rt_str_eq((*F->op_862), rt_str("/=", 2))) {
rt_str_assign(&F->yes_2500, rt_str("0", 1));
rt_str_assign(&F->no_2501, rt_str("1", 1));
}
if ((!f_same_221(F->ta_2497, F->tb_2498))) {
F->result_ = F->no_2501;
goto ret_;
} else if (((((*(P1034)rt_nil_check(F->sa_860)).kind == (((rt_int)80LL))) && rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->sa_860)).name))->all), rt_str("TYPEOF", 6))) || (((*(P1034)rt_nil_check(F->sb_861)).kind == (((rt_int)80LL))) && rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->sb_861)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_2500;
goto ret_;
}
if (f_scalar_kind_186(F->ta_2497)) {
F->r_2499 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_198(F->ta_2497, F->ca_2495)), rt_str(") == (", 6)), f_sub_lo_198(F->tb_2498, F->cb_2496)), rt_str(") && (", 6)), f_sub_hi_201(F->ta_2497, F->ca_2495)), rt_str(") == (", 6)), f_sub_hi_201(F->tb_2498, F->cb_2496)), rt_str(")", 1)); b_; }));
if (((*(P1040)rt_nil_check(F->ta_2497)).kind == (((rt_int)3LL)))) {
F->r_2499 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_2499))->all), rt_str(" && ", 4)), f_float_prec_866(F->ca_2495)), rt_str(" == ", 4)), f_float_prec_866(F->cb_2496)); b_; }));
}
} else if (((*(P1040)rt_nil_check(F->ta_2497)).kind == (((rt_int)5LL)))) {
if (((((F->ca_2495 != NULL) && (F->cb_2496 != NULL)) && ((*(P1036)rt_nil_check(F->ca_2495)).slen != NULL)) && ((*(P1036)rt_nil_check(F->cb_2496)).slen != NULL))) {
F->r_2499 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1027)rt_nil_check((*(P1036)rt_nil_check(F->ca_2495)).slen))->all)), rt_str(") == (", 6)), (((P1027)rt_nil_check((*(P1036)rt_nil_check(F->cb_2496)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_2495 == NULL) || ((*(P1036)rt_nil_check(F->ca_2495)).slen == NULL)) && ((F->cb_2496 == NULL) || ((*(P1036)rt_nil_check(F->cb_2496)).slen == NULL))))) {
F->r_2499 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if (((*(P1040)rt_nil_check(F->ta_2497)).kind == (((rt_int)6LL)))) {
{ rt_int lo2503 = ((rt_int)1LL), hi2504 = (*(P1040)rt_nil_check(F->ta_2497)).ndim;
for (rt_int it2505 = lo2503; it2505 <= hi2504; it2505++) {
F->k_2502 = it2505;
if (((((F->ca_2495 != NULL) && (F->cb_2496 != NULL)) && (f_cons_lo_252(F->ca_2495, F->k_2502) != NULL)) && (f_cons_lo_252(F->cb_2496, F->k_2502) != NULL))) {
F->r_2499 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_2499))->all), rt_str(" && (", 5)), (((P1027)rt_nil_check(f_cons_lo_252(F->ca_2495, F->k_2502)))->all)), rt_str(") == (", 6)), (((P1027)rt_nil_check(f_cons_lo_252(F->cb_2496, F->k_2502)))->all)), rt_str(") && (", 6)), (((P1027)rt_nil_check(f_cons_hi_255(F->ca_2495, F->k_2502)))->all)), rt_str(") == (", 6)), (((P1027)rt_nil_check(f_cons_hi_255(F->cb_2496, F->k_2502)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if ((((((*(P1040)rt_nil_check(F->ta_2497)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->ta_2497)).tparams != NULL)) && (F->ca_2495 != NULL)) && (F->cb_2496 != NULL))) {
F->a_2506 = NULL;
F->a_2506 = (*(P1036)rt_nil_check(F->ca_2495)).args;
F->b_2507 = NULL;
F->b_2507 = (*(P1036)rt_nil_check(F->cb_2496)).args;
F->at_2508 = NULL;
F->bt2_2509 = NULL;
while (((F->a_2506 != NULL) && (F->b_2507 != NULL))) {
F->x_2510 = rt_str_copy(f_gexpr_805(F->a_2506, NULL, &F->at_2508));
F->y_2511 = rt_str_copy(f_gexpr_805(F->b_2507, F->at_2508, &F->bt2_2509));
F->r_2499 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_2499))->all), rt_str(" && ", 4)), f_eq_code_423(F->at_2508, &F->x_2510, &F->y_2511)); b_; }));
F->a_2506 = (*(P1034)rt_nil_check(F->a_2506)).next;
F->b_2507 = (*(P1034)rt_nil_check(F->b_2507)).next;
}
} else if (((((*(P1040)rt_nil_check(F->ta_2497)).kind == (((rt_int)17LL))) && (F->ca_2495 != NULL)) && (F->cb_2496 != NULL))) {
if ((((*(P1036)rt_nil_check(F->ca_2495)).lo != NULL) && ((*(P1036)rt_nil_check(F->cb_2496)).lo != NULL))) {
F->r_2499 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1027)rt_nil_check((*(P1036)rt_nil_check(F->ca_2495)).lo))->all)), rt_str(") == (", 6)), (((P1027)rt_nil_check((*(P1036)rt_nil_check(F->cb_2496)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P1036)rt_nil_check(F->ca_2495)).lo != NULL) || ((*(P1036)rt_nil_check(F->cb_2496)).lo != NULL))) {
F->r_2499 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_862), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P1027)rt_nil_check(F->r_2499))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1027)rt_nil_check(F->r_2499))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_866(P1036 c_865) {
  struct f_float_prec_866fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_865 = c_865;
if (((F->c_865 != NULL) && ((*(P1036)rt_nil_check(F->c_865)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_865)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_872(P1034 e_867, P1040 bt_868, P1036 c_869, P1027 base_870, P1040 *t_871) {
  struct f_file_attribute_872fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_867 = e_867;
F->bt_868 = bt_868;
F->c_869 = c_869;
F->base_870 = base_870;
F->t_871 = t_871;
F->t_871v = *F->t_871;
F->t_871v = g_file_mode_type_1130;
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_867)).name))->all), rt_str("ACCESS", 6))) {
F->t_871v = g_file_access_type_1136;
}
if ((F->base_870 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_867)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P1027)rt_nil_check(F->base_870))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P1027)rt_nil_check(F->base_870))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_869 != NULL) && ((*(P1036)rt_nil_check(F->c_869)).args != NULL))) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_867)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_805((*(P1036)rt_nil_check(F->c_869)).args, F->t_871v, &F->t_871v);
goto ret_;
} else if (((*(P1034)rt_nil_check((*(P1036)rt_nil_check(F->c_869)).args)).next != NULL)) {
F->result_ = f_gexpr_805((*(P1034)rt_nil_check((*(P1036)rt_nil_check(F->c_869)).args)).next, F->t_871v, &F->t_871v);
goto ret_;
}
}
f_fail_23((*(P1034)rt_nil_check(F->e_867)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_867)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_871) = F->t_871v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_876(P1034 e_873, P1040 want_874, P1040 *t_875) {
  struct f_gbinop_876fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_873 = e_873;
F->want_874 = want_874;
F->t_875 = t_875;
F->t_875v = *F->t_875;
F->op_2512 = NULL;
F->op_2512 = (*(P1034)rt_nil_check(F->e_873)).name;
F->ta_2513 = NULL;
F->tb_2514 = NULL;
F->hint_2515 = NULL;
F->uy_2516 = NULL;
F->t_875v = g_ty_bool_1120;
if (((((rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("/=", 2)) || rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str(">", 1))) || rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("<=", 2))) || rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str(">=", 2))) && (f_derived_relation_837(F->e_873) != NULL))) {
F->result_ = f_gexpr_805(f_derived_relation_837(F->e_873), g_ty_bool_1120, &F->t_875v);
goto ret_;
}
if ((f_lookup_163(&(((P1027)rt_nil_check(F->op_2512))->all)) != NULL)) {
F->l_2517 = NULL;
F->r_2518 = NULL;
F->l_2517 = f_copy_node_847((*(P1034)rt_nil_check(F->e_873)).a);
F->r_2518 = f_copy_node_847((*(P1034)rt_nil_check(F->e_873)).b);
(*(P1034)rt_nil_check(F->l_2517)).next = F->r_2518;
F->uy_2516 = f_user_op_952(&(((P1027)rt_nil_check(F->op_2512))->all), F->l_2517);
if ((F->uy_2516 != NULL)) {
F->call_2519 = NULL;
F->call_2519 = f_nn_65((((rt_int)10LL)), (*(P1034)rt_nil_check(F->e_873)).line);
F->fname_2520 = NULL;
F->fname_2520 = f_nn_65((((rt_int)7LL)), (*(P1034)rt_nil_check(F->e_873)).line);
(*(P1034)rt_nil_check(F->fname_2520)).name = F->op_2512;
(*(P1034)rt_nil_check(F->call_2519)).a = F->fname_2520;
(*(P1034)rt_nil_check(F->call_2519)).b = F->l_2517;
F->result_ = f_gcall_956(F->call_2519, 0, &F->t_875v);
goto ret_;
}
}
if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("IN", 2))) {
F->s_2521 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_873)).b, NULL, &F->tb_2514));
if (((*(P1040)rt_nil_check(F->tb_2514)).kind != (((rt_int)16LL)))) {
f_fail_23((*(P1034)rt_nil_check(F->e_873)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2522 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_873)).a, (*(P1040)rt_nil_check(F->tb_2514)).elem, &F->ta_2513));
f_check_type_232(F->ta_2513, (*(P1040)rt_nil_check(F->tb_2514)).elem, (*(P1034)rt_nil_check(F->e_873)).line);
F->t_875v = g_ty_bool_1120;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->tb_2514, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("in", 2); b_; })), rt_str("(", 1)), F->a_2522), rt_str(", ", 2)), F->s_2521), rt_str(")", 1));
goto ret_;
}
}
if ((((rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("AND", 3)) || rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("OR", 2))) || rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("XOR", 3))) && (f_set_operands_827(F->e_873, F->want_874) != NULL))) {
F->a_2523 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_873)).a, f_set_operands_827(F->e_873, F->want_874), &F->ta_2513));
F->b_2524 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_873)).b, F->ta_2513, &F->tb_2514));
f_check_type_232(F->tb_2514, F->ta_2513, (*(P1034)rt_nil_check(F->e_873)).line);
F->t_875v = F->ta_2513;
if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->ta_2513, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("inter", 5); b_; })), rt_str("(", 1)), F->a_2523), rt_str(", ", 2)), F->b_2524), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->ta_2513, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("union", 5); b_; })), rt_str("(", 1)), F->a_2523), rt_str(", ", 2)), F->b_2524), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->ta_2513, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xor", 3); b_; })), rt_str("(", 1)), F->a_2523), rt_str(", ", 2)), F->b_2524), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("AND", 3)) || rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("OR", 2))) || rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("XOR", 3)))) {
F->a_2525 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_873)).a, g_ty_bool_1120, &F->ta_2513));
F->b_2526 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_873)).b, g_ty_bool_1120, &F->tb_2514));
f_check_type_232(F->ta_2513, g_ty_bool_1120, (*(P1034)rt_nil_check(F->e_873)).line);
f_check_type_232(F->tb_2514, g_ty_bool_1120, (*(P1034)rt_nil_check(F->e_873)).line);
if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2525), rt_str(" && ", 4)), F->b_2526), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2525), rt_str(" || ", 4)), F->b_2526), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2525), rt_str(" != ", 4)), F->b_2526), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("&", 1)) && (F->want_874 != NULL)) && ((*(P1040)rt_nil_check(f_base_of_223(F->want_874))).kind == (((rt_int)6LL))))) {
F->at_2527 = NULL;
F->at_2527 = f_base_of_223(F->want_874);
F->a_2528 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_873)).a, F->at_2527, &F->ta_2513));
F->b_2529 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_873)).b, F->at_2527, &F->tb_2514));
f_check_type_232(F->ta_2513, F->at_2527, (*(P1034)rt_nil_check(F->e_873)).line);
f_check_type_232(F->tb_2514, F->at_2527, (*(P1034)rt_nil_check(F->e_873)).line);
if ((((*(P1040)rt_nil_check(F->at_2527)).ndim != ((rt_int)1LL)) || ((*(P1040)rt_nil_check(f_base_of_223((*(P1040)rt_nil_check(F->at_2527)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->e_873)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_786(F->at_2527);
F->t_875v = F->at_2527;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_234(F->at_2527)), rt_str("(", 1)), F->a_2528), rt_str(", ", 2)), F->b_2529), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("&", 1))) {
F->wa_2530 = NULL;
F->wb_2531 = NULL;
F->ws_2532 = NULL;
F->ce_2533 = NULL;
F->ce_2533 = g_ty_ascii_1122;
if (((F->want_874 != NULL) && ((*(P1040)rt_nil_check(F->want_874)).kind == (((rt_int)5LL))))) {
F->ws_2532 = F->want_874;
F->ce_2533 = f_str_elem_218(F->want_874);
}
if (((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_873)).a)).kind == (((rt_int)4LL)))) {
F->wa_2530 = F->ce_2533;
} else {
F->wa_2530 = F->ws_2532;
}
if (((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_873)).b)).kind == (((rt_int)4LL)))) {
F->wb_2531 = F->ce_2533;
} else {
F->wb_2531 = F->ws_2532;
}
{
F->a_2534 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_873)).a, F->wa_2530, &F->ta_2513));
F->b_2535 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_873)).b, F->wb_2531, &F->tb_2514));
F->t_875v = g_ty_string_1123;
if (((*(P1040)rt_nil_check(F->ta_2513)).kind == (((rt_int)5LL)))) {
F->t_875v = F->ta_2513;
} else if (((*(P1040)rt_nil_check(F->tb_2514)).kind == (((rt_int)5LL)))) {
F->t_875v = F->tb_2514;
} else if ((!f_same_221(F->ta_2513, g_ty_ascii_1122))) {
F->t_875v = f_new_typ_183((((rt_int)5LL)));
(*(P1040)rt_nil_check(F->t_875v)).elem = F->ta_2513;
}
if ((((*(P1040)rt_nil_check(F->ta_2513)).kind == (((rt_int)6LL))) && ((*(P1040)rt_nil_check(F->tb_2514)).kind == (((rt_int)6LL))))) {
f_need_slice_786(F->ta_2513);
f_check_type_232(F->tb_2514, F->ta_2513, (*(P1034)rt_nil_check(F->e_873)).line);
F->t_875v = F->ta_2513;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_234(F->ta_2513)), rt_str("(", 1)), F->a_2534), rt_str(", ", 2)), F->b_2535), rt_str(")", 1));
goto ret_;
}
if (((*(P1040)rt_nil_check(F->ta_2513)).kind == (((rt_int)5LL)))) {
f_check_type_232(f_str_cat_part_822(F->tb_2514), f_str_elem_218(F->ta_2513), (*(P1034)rt_nil_check(F->e_873)).line);
} else if (((*(P1040)rt_nil_check(F->tb_2514)).kind == (((rt_int)5LL)))) {
f_check_type_232(F->ta_2513, f_str_elem_218(F->tb_2514), (*(P1034)rt_nil_check(F->e_873)).line);
} else {
f_check_type_232(F->tb_2514, F->ta_2513, (*(P1034)rt_nil_check(F->e_873)).line);
}
if ((((*(P1040)rt_nil_check(F->ta_2513)).kind == (((rt_int)5LL))) && ((*(P1040)rt_nil_check(F->tb_2514)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2534), rt_str(", ", 2)), F->b_2535), rt_str(")", 1));
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->ta_2513)).kind == (((rt_int)5LL))) && ((*(P1040)rt_nil_check(F->tb_2514)).kind == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2534), rt_str(", ", 2)), F->b_2535), rt_str(")", 1));
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->ta_2513)).kind == (((rt_int)4LL))) && ((*(P1040)rt_nil_check(F->tb_2514)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2534), rt_str(", ", 2)), F->b_2535), rt_str(")", 1));
goto ret_;
} else if ((((*(P1040)rt_nil_check(F->ta_2513)).kind == (((rt_int)4LL))) && ((*(P1040)rt_nil_check(F->tb_2514)).kind == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2534), rt_str(", ", 2)), F->b_2535), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P1034)rt_nil_check(F->e_873)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("=", 1)) || rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("/=", 2))) && (f_as_subtype_297((*(P1034)rt_nil_check(F->e_873)).a) != NULL)) && (f_as_subtype_297((*(P1034)rt_nil_check(F->e_873)).b) != NULL))) {
F->t_875v = g_ty_bool_1120;
F->result_ = f_subtype_compare_864(f_as_subtype_297((*(P1034)rt_nil_check(F->e_873)).a), f_as_subtype_297((*(P1034)rt_nil_check(F->e_873)).b), &(((P1027)rt_nil_check(F->op_2512))->all), (*(P1034)rt_nil_check(F->e_873)).line);
goto ret_;
}
if ((f_is_rel_111(&(((P1027)rt_nil_check(F->op_2512))->all)) && (!rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("IN", 2))))) {
if (((((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_873)).a)).kind == (((rt_int)4LL))) || ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_873)).a)).kind == (((rt_int)6LL)))) || ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_873)).a)).kind == (((rt_int)1LL))))) {
F->dummy_2536 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_873)).b, NULL, &F->hint_2515));
} else if (((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->e_873)).a)).kind == (((rt_int)14LL)))) {
F->hint_2515 = f_peek_type_824((*(P1034)rt_nil_check(F->e_873)).b);
}
{
F->a_2537 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_873)).a, F->hint_2515, &F->ta_2513));
F->b_2538 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_873)).b, F->ta_2513, &F->tb_2514));
F->ct_2539 = NULL;
F->ct_2539 = f_base_of_223(F->ta_2513);
F->t_875v = g_ty_bool_1120;
if ((((*(P1040)rt_nil_check(F->ta_2513)).kind != (((rt_int)11LL))) && ((*(P1040)rt_nil_check(F->tb_2514)).kind != (((rt_int)11LL))))) {
f_check_type_232(F->tb_2514, F->ta_2513, (*(P1034)rt_nil_check(F->e_873)).line);
}
if (((*(P1040)rt_nil_check(F->ta_2513)).kind == (((rt_int)11LL)))) {
F->ct_2539 = f_base_of_223(F->tb_2514);
}
if (((*(P1040)rt_nil_check(F->ct_2539)).kind == (((rt_int)5LL)))) {
if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2537), rt_str(", ", 2)), F->b_2538), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2537), rt_str(", ", 2)), F->b_2538), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2537), rt_str(", ", 2)), F->b_2538), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2537), rt_str(", ", 2)), F->b_2538), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2538), rt_str(", ", 2)), F->a_2537), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2538), rt_str(", ", 2)), F->a_2537), rt_str(")", 1));
goto ret_;
}
if (((*(P1040)rt_nil_check(F->ct_2539)).kind == (((rt_int)16LL)))) {
if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->ct_2539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("eq", 2); b_; })), rt_str("(", 1)), F->a_2537), rt_str(", ", 2)), F->b_2538), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!", 2), f_set_fn_311(F->ct_2539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("eq", 2); b_; }))), rt_str("(", 1)), F->a_2537), rt_str(", ", 2)), F->b_2538), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->ct_2539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("le", 2); b_; })), rt_str("(", 1)), F->a_2537), rt_str(", ", 2)), F->b_2538), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->ct_2539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("le", 2); b_; })), rt_str("(", 1)), F->b_2538), rt_str(", ", 2)), F->a_2537), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->ct_2539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lt", 2); b_; })), rt_str("(", 1)), F->a_2537), rt_str(", ", 2)), F->b_2538), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->ct_2539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lt", 2); b_; })), rt_str("(", 1)), F->b_2538), rt_str(", ", 2)), F->a_2537), rt_str(")", 1));
goto ret_;
}
if (((((((((*(P1040)rt_nil_check(F->ct_2539)).kind == (((rt_int)2LL))) || ((*(P1040)rt_nil_check(F->ct_2539)).kind == (((rt_int)8LL)))) || ((*(P1040)rt_nil_check(F->ct_2539)).kind == (((rt_int)11LL)))) || ((*(P1040)rt_nil_check(F->ct_2539)).kind == (((rt_int)14LL)))) || ((*(P1040)rt_nil_check(F->ct_2539)).kind == (((rt_int)12LL)))) && (!rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("=", 1)))) && (!rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("/=", 2))))) {
f_fail_23((*(P1034)rt_nil_check(F->e_873)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only = and /= compare values of this type", 41); b_; }));
}
if (f_composite_399(F->ct_2539)) {
if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_423(F->ct_2539, &F->a_2537, &F->b_2538);
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_423(F->ct_2539, &F->a_2537, &F->b_2538)), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P1034)rt_nil_check(F->e_873)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2537), rt_str(" == ", 4)), F->b_2538), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2537), rt_str(" != ", 4)), F->b_2538), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2537), rt_str(" ", 1)), (((P1027)rt_nil_check(F->op_2512))->all)), rt_str(" ", 1)), F->b_2538), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2540 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_873)).a, F->want_874, &F->ta_2513));
F->b_2541 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->e_873)).b, f_exponent_want_983(&(((P1027)rt_nil_check(F->op_2512))->all), F->ta_2513), &F->tb_2514));
if ((((*(P1040)rt_nil_check(F->ta_2513)).kind == (((rt_int)3LL))) || ((*(P1040)rt_nil_check(F->tb_2514)).kind == (((rt_int)3LL))))) {
F->t_875v = g_ty_float_1121;
if (((rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("+", 1)) || rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("-", 1))) || rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(", 10), F->a_2540), rt_str(" ", 1)), (((P1027)rt_nil_check(F->op_2512))->all)), rt_str(" ", 1)), F->b_2541), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(rt_fdiv(", 18), F->a_2540), rt_str(", ", 2)), F->b_2541), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("**", 2))) {
f_check_type_232(F->tb_2514, g_ty_int_1119, (*(P1034)rt_nil_check(F->e_873)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fpow(", 10), F->a_2540), rt_str(", ", 2)), F->b_2541), rt_str(")", 1));
goto ret_;
}
}
f_check_type_232(F->ta_2513, g_ty_int_1119, (*(P1034)rt_nil_check(F->e_873)).line);
f_check_type_232(F->tb_2514, g_ty_int_1119, (*(P1034)rt_nil_check(F->e_873)).line);
F->t_875v = g_ty_int_1119;
if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2540), rt_str(", ", 2)), F->b_2541), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2540), rt_str(", ", 2)), F->b_2541), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2540), rt_str(", ", 2)), F->b_2541), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2540), rt_str(", ", 2)), F->b_2541), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2540), rt_str(", ", 2)), F->b_2541), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1027)rt_nil_check(F->op_2512))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2540), rt_str(", ", 2)), F->b_2541), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P1034)rt_nil_check(F->e_873)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P1027)rt_nil_check(F->op_2512))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_875) = F->t_875v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_881(P1034 e_877, P1040 want_878, P1036 ctx_879, P1040 *t_880) {
  struct f_constructor_881fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_877 = e_877;
F->want_878 = want_878;
F->ctx_879 = ctx_879;
F->t_880 = t_880;
F->t_880v = *F->t_880;
F->it_2542 = NULL;
F->it_2542 = (*(P1034)rt_nil_check(F->e_877)).a;
F->f_2543 = NULL;
F->vt_2544 = NULL;
if (((F->want_878 != NULL) && ((*(P1040)rt_nil_check(F->want_878)).kind == (((rt_int)16LL))))) {
F->s_2545 = NULL;
F->s_2545 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_empty_set_306(F->want_878); b_; }));
F->t_880v = F->want_878;
while ((F->it_2542 != NULL)) {
F->v_2546 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->it_2542)).b, (*(P1040)rt_nil_check(F->want_878)).elem, &F->vt_2544));
f_check_type_232(F->vt_2544, (*(P1040)rt_nil_check(F->want_878)).elem, (*(P1034)rt_nil_check(F->e_877)).line);
F->s_2545 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_set_fn_311(F->want_878, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("add", 3); b_; })), rt_str("(", 1)), (((P1027)rt_nil_check(F->s_2545))->all)), rt_str(", ", 2)), F->v_2546), rt_str(")", 1)); b_; }));
F->it_2542 = (*(P1034)rt_nil_check(F->it_2542)).next;
}
F->result_ = (((P1027)rt_nil_check(F->s_2545))->all);
goto ret_;
}
if (((F->want_878 != NULL) && ((*(P1040)rt_nil_check(F->want_878)).kind == (((rt_int)15LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->e_877)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->want_878)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_878 != NULL) && ((*(P1040)rt_nil_check(F->want_878)).kind == (((rt_int)6LL))))) {
F->result_ = f_array_cons_895(F->e_877, F->want_878, F->ctx_879, &F->t_880v);
goto ret_;
}
if (((F->want_878 != NULL) && ((*(P1040)rt_nil_check(F->want_878)).kind == (((rt_int)17LL))))) {
if ((((((F->it_2542 == NULL) || ((*(P1034)rt_nil_check(F->it_2542)).next != NULL)) || ((*(P1034)rt_nil_check(F->it_2542)).a == NULL)) || ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->it_2542)).a)).next != NULL)) || ((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->it_2542)).a)).a)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->e_877)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2543 = (*(P1040)rt_nil_check(F->want_878)).fields;
{
F->i_2547 = ((rt_int)0LL);
F->tmp_2548 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2543 != NULL) && (!rt_str_eq((((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_2543)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->it_2542)).a)).a)).name))->all))))) {
F->i_2547 = rt_add(F->i_2547, ((rt_int)1LL));
F->f_2543 = (*(P1042)rt_nil_check(F->f_2543)).next;
}
if ((F->f_2543 == NULL)) {
f_fail_23((*(P1034)rt_nil_check(F->e_877)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->it_2542)).a)).a)).name))->all)); b_; }));
}
F->t_880v = F->want_878;
g_cons_ctx_1109 = (*(P1042)rt_nil_check(F->f_2543)).c;
{
F->v_2549 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->it_2542)).b, (*(P1042)rt_nil_check(F->f_2543)).t, &F->vt_2544));
f_check_type_232(F->vt_2544, (*(P1042)rt_nil_check(F->f_2543)).t, (*(P1034)rt_nil_check(F->e_877)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->want_878)), rt_str(" ", 1)), F->tmp_2548), rt_str("; ", 2)), F->tmp_2548), rt_str(".tag = ", 7)), f_itos_7(F->i_2547)), rt_str("; ", 2)), F->tmp_2548), rt_str(".u.", 3)), f_field_c_17(&(((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_2543)).name))->all))), rt_str(" = ", 3)), f_comp_value_885((*(P1042)rt_nil_check(F->f_2543)).t, (*(P1042)rt_nil_check(F->f_2543)).c, &F->v_2549)), rt_str("; ", 2)), F->tmp_2548), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_878 == NULL) || ((*(P1040)rt_nil_check(F->want_878)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->e_877)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_880v = F->want_878;
F->f_2543 = (*(P1040)rt_nil_check(F->want_878)).fields;
{
F->tmp_2550 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2551 = NULL;
F->parts_2551 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->want_878)), rt_str(" ", 1)), F->tmp_2550), rt_str(";", 1)); b_; }));
while ((F->it_2542 != NULL)) {
F->k_2552 = NULL;
F->k_2552 = (*(P1034)rt_nil_check(F->it_2542)).a;
F->shared_2553 = NULL;
if ((F->k_2552 == NULL)) {
f_fail_23((*(P1034)rt_nil_check(F->e_877)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2552 != NULL)) {
if (((((F->f_2543 == NULL) || ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->k_2552)).a)).kind != (((rt_int)7LL)))) || ((*(P1034)rt_nil_check(F->k_2552)).b != NULL)) || (!rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->k_2552)).a)).name))->all), (((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_2543)).name))->all))))) {
if ((F->f_2543 == NULL)) {
f_fail_23((*(P1034)rt_nil_check(F->e_877)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23((*(P1034)rt_nil_check(F->e_877)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_2543)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->it_2542)).a)).next == NULL)) {
g_cons_ctx_1109 = (*(P1042)rt_nil_check(F->f_2543)).c;
{
F->v_2554 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->it_2542)).b, (*(P1042)rt_nil_check(F->f_2543)).t, &F->vt_2544));
f_check_type_232(F->vt_2544, (*(P1042)rt_nil_check(F->f_2543)).t, (*(P1034)rt_nil_check(F->e_877)).line);
F->parts_2551 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->parts_2551))->all), rt_str(" ", 1)), F->tmp_2550), rt_str(".", 1)), f_field_c_17(&(((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_2543)).name))->all))), rt_str(" = ", 3)), f_comp_value_885((*(P1042)rt_nil_check(F->f_2543)).t, (*(P1042)rt_nil_check(F->f_2543)).c, &F->v_2554)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2553 == NULL)) {
F->v_2555 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->it_2542)).b, (*(P1042)rt_nil_check(F->f_2543)).t, &F->vt_2544));
F->shared_2553 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_232(F->vt_2544, (*(P1042)rt_nil_check(F->f_2543)).t, (*(P1034)rt_nil_check(F->e_877)).line);
F->parts_2551 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->parts_2551))->all), rt_str(" ", 1)), f_ctype_234((*(P1042)rt_nil_check(F->f_2543)).t)), rt_str(" ", 1)), (((P1027)rt_nil_check(F->shared_2553))->all)), rt_str(" = ", 3)), F->v_2555), rt_str(";", 1)); b_; }));
}
f_check_type_232(F->vt_2544, (*(P1042)rt_nil_check(F->f_2543)).t, (*(P1034)rt_nil_check(F->e_877)).line);
F->parts_2551 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->parts_2551))->all), rt_str(" ", 1)), F->tmp_2550), rt_str(".", 1)), f_field_c_17(&(((P1027)rt_nil_check((*(P1042)rt_nil_check(F->f_2543)).name))->all))), rt_str(" = ", 3)), f_comp_value_885((*(P1042)rt_nil_check(F->f_2543)).t, (*(P1042)rt_nil_check(F->f_2543)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_419((*(P1042)rt_nil_check(F->f_2543)).t, &(((P1027)rt_nil_check(F->shared_2553))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2543 = (*(P1042)rt_nil_check(F->f_2543)).next;
F->k_2552 = (*(P1034)rt_nil_check(F->k_2552)).next;
}
F->it_2542 = (*(P1034)rt_nil_check(F->it_2542)).next;
}
if ((F->f_2543 != NULL)) {
f_fail_23((*(P1034)rt_nil_check(F->e_877)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->parts_2551))->all), rt_str(" ", 1)), F->tmp_2550), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_880) = F->t_880v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_885(P1040 t_882, P1036 c_883, rstr *v_884) {
  struct f_comp_value_885fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_882 = t_882;
F->c_883 = c_883;
F->v_884 = v_884;
if (((((*(P1040)rt_nil_check(F->t_882)).kind == (((rt_int)15LL))) && ((*(P1040)rt_nil_check(F->t_882)).assignp != NULL)) && (g_in_func_1090 || f_top_level_411((*(P1040)rt_nil_check(F->t_882)).assignp)))) {
F->ct_2556 = rt_str_copy(f_ctype_234(F->t_882));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_2556), rt_str(" s_ = ", 6)), (*F->v_884)), rt_str("; ", 2)), F->ct_2556), rt_str(" t_ = ", 6)), f_copy_code_419(F->t_882, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s_", 2); b_; }))), rt_str("; ", 2)), f_user_call2_405((*(P1040)rt_nil_check(F->t_882)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("t_", 2); b_; }), 1, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s_", 2); b_; }), 0)), rt_str("; t_; })", 8));
goto ret_;
} else if (((F->c_883 == NULL) || (((*(P1036)rt_nil_check(F->c_883)).lo != NULL) && f_has_at_887(&(((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_883)).lo))->all))))) {
F->result_ = f_copy_code_419(F->t_882, &(*F->v_884));
goto ret_;
} else if (((((*(P1040)rt_nil_check(F->t_882)).kind == (((rt_int)5LL))) && ((*(P1036)rt_nil_check(F->c_883)).slen != NULL)) && (!f_has_at_887(&(((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_883)).slen))->all))))) {
F->result_ = f_copy_code_419(F->t_882, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_884)), rt_str(", ", 2)), (((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_883)).slen))->all)), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_213(F->t_882, F->c_883, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_419(F->t_882, &(*F->v_884)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_887(rstr *s_886) {
  struct f_has_at_887fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_886 = s_886;
{ rt_int lo2558 = ((rt_int)1LL), hi2559 = ((rt_int)(((*F->s_886)).len));
for (rt_int it2560 = lo2558; it2560 <= hi2559; it2560++) {
F->i_2557 = it2560;
if ((rt_str_get((*F->s_886), F->i_2557) == 64)) {
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

static rstr f_set_elem_890(P1040 st_888, rstr *v_889) {
  struct f_set_elem_890fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_888 = st_888;
F->v_889 = v_889;
F->result_ = (*F->v_889);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_895(P1034 e_891, P1040 at_892, P1036 ctx_893, P1040 *t_894) {
  struct f_array_cons_895fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_891 = e_891;
F->at_892 = at_892;
F->ctx_893 = ctx_893;
F->t_894 = t_894;
F->t_894v = *F->t_894;
F->tmp_2561 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2562 = NULL;
F->parts_2562 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->at_892)), rt_str(" ", 1)), F->tmp_2561), rt_str(";", 1)); b_; }));
F->it_2563 = NULL;
F->it_2563 = (*(P1034)rt_nil_check(F->e_891)).a;
F->positional_2564 = 1;
F->t_894v = F->at_892;
while ((F->it_2563 != NULL)) {
if (((*(P1034)rt_nil_check(F->it_2563)).a != NULL)) {
F->positional_2564 = 0;
}
F->it_2563 = (*(P1034)rt_nil_check(F->it_2563)).next;
}
{ rt_int lo2566 = ((rt_int)1LL), hi2567 = (*(P1040)rt_nil_check(F->at_892)).ndim;
for (rt_int it2568 = lo2566; it2568 <= hi2567; it2568++) {
F->k_2565 = it2568;
F->lo_2569 = NULL;
F->hi_2570 = NULL;
if ((((F->ctx_893 != NULL) && (f_cons_lo_252(F->ctx_893, F->k_2565) != NULL)) && (!f_has_at_887(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1027)rt_nil_check(f_cons_lo_252(F->ctx_893, F->k_2565)))->all); b_; }))))) {
F->lo_2569 = f_cons_lo_252(F->ctx_893, F->k_2565);
F->hi_2570 = f_cons_hi_255(F->ctx_893, F->k_2565);
} else if ((((*(P1040)rt_nil_check(F->at_892)).ndim == ((rt_int)1LL)) && F->positional_2564)) {
if (((*(P1040)rt_nil_check(f_base_of_223((*(P1040)rt_nil_check(F->at_892)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2569 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2569 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2570 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1027)rt_nil_check(F->lo_2569))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_71((*(P1034)rt_nil_check(F->e_891)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23((*(P1034)rt_nil_check(F->e_891)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2562 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->parts_2562))->all), rt_str(" ", 1)), F->tmp_2561), rt_str(".", 1)), f_dim_lo_242(F->k_2565)), rt_str(" = ", 3)), (((P1027)rt_nil_check(F->lo_2569))->all)), rt_str("; ", 2)), F->tmp_2561), rt_str(".", 1)), f_dim_hi_244(F->k_2565)), rt_str(" = ", 3)), (((P1027)rt_nil_check(F->hi_2570))->all)), rt_str(";", 1)); b_; }));
}
}
if (((*(P1040)rt_nil_check(F->at_892)).ndim == ((rt_int)1LL))) {
F->parts_2562 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->parts_2562))->all), rt_str(" ", 1)), F->tmp_2561), rt_str(".lo2 = ", 7)), F->tmp_2561), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2562 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->parts_2562))->all), rt_str(" rt_int n_", 10)), F->tmp_2561), rt_str(" = ", 3)), f_acnt_249(F->at_892, &F->tmp_2561)), rt_str("; ", 2)), F->tmp_2561), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_234((*(P1040)rt_nil_check(F->at_892)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2561), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2561), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2561), rt_str(" + 1);", 6)); b_; }));
F->parts_2562 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->parts_2562))->all), f_fill_items_901((*(P1034)rt_nil_check(F->e_891)).a, F->at_892, &F->tmp_2561, NULL, ((rt_int)1LL))); b_; }));
F->parts_2562 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->parts_2562))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2561), rt_str("; i_++) if (seen_", 17)), F->tmp_2561), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2561), rt_str("; })", 4)); b_; }));
F->result_ = (((P1027)rt_nil_check(F->parts_2562))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_894) = F->t_894v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_901(P1034 items_896, P1040 at_897, rstr *tmp_898, P1038 prefix_899, rt_int dim_900) {
  struct f_fill_items_901fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_896 = items_896;
F->at_897 = at_897;
F->tmp_898 = tmp_898;
F->prefix_899 = prefix_899;
F->dim_900 = dim_900;
F->it_2571 = NULL;
F->it_2571 = F->items_896;
F->pos_2572 = ((rt_int)0LL);
F->r_2573 = NULL;
F->r_2573 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2574 = NULL;
while ((F->it_2571 != NULL)) {
if (((*(P1034)rt_nil_check(F->it_2571)).a == NULL)) {
if (((F->dim_900 < (*(P1040)rt_nil_check(F->at_897)).ndim) && ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->it_2571)).b)).kind == (((rt_int)14LL))))) {
F->r_2573 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_2573))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_900)), rt_str(" = ", 3)), (*F->tmp_898)), rt_str(".", 1)), f_dim_lo_242(F->dim_900)), rt_str(" + ", 3)), f_itos_7(F->pos_2572)), rt_str("; ", 2)), f_fill_items_901((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->it_2571)).b)).a, F->at_897, &(*F->tmp_898), f_add_line_906(F->prefix_899, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_900)); b_; })), rt_add(F->dim_900, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2575 = rt_str_copy(f_item_value_911((*(P1034)rt_nil_check(F->it_2571)).b, F->at_897, f_e_line_903(F->it_2571), &F->vt_2574));
if (((F->dim_900 == ((rt_int)1LL)) && ((*(P1040)rt_nil_check(F->at_897)).ndim > ((rt_int)1LL)))) {
F->r_2573 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_2573))->all), rt_str(" { ", 3)), F->v_2575), rt_str(" if (", 5)), f_itos_7(F->pos_2572)), rt_str(" >= n_", 6)), (*F->tmp_898)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_898)), rt_str(".p[", 3)), f_itos_7(F->pos_2572)), rt_str("] = ", 4)), f_copy_code_419((*(P1040)rt_nil_check(F->at_897)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_898)), rt_str("[", 1)), f_itos_7(F->pos_2572)), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2573 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_2573))->all), rt_str(" { ", 3)), F->v_2575), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_900)), rt_str(" = ", 3)), (*F->tmp_898)), rt_str(".", 1)), f_dim_lo_242(F->dim_900)), rt_str(" + ", 3)), f_itos_7(F->pos_2572)), rt_str("; ", 2)), f_store_at_921(F->at_897, &(*F->tmp_898), f_add_line_906(F->prefix_899, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_900)); b_; })), F->dim_900)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2572 = rt_add(F->pos_2572, ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_900, f_list_len_71((*(P1034)rt_nil_check(F->it_2571)).a)), ((rt_int)1LL)) == (*(P1040)rt_nil_check(F->at_897)).ndim)) {
F->k_2576 = NULL;
F->k_2576 = (*(P1034)rt_nil_check(F->it_2571)).a;
F->d_2577 = F->dim_900;
F->pre_2578 = NULL;
F->pre_2578 = F->prefix_899;
F->loops_2579 = NULL;
F->loops_2579 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2580 = NULL;
F->ends_2580 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2581 = rt_str_copy(f_item_value_911((*(P1034)rt_nil_check(F->it_2571)).b, F->at_897, (*(P1034)rt_nil_check(F->it_2571)).line, &F->vt_2574));
while ((F->k_2576 != NULL)) {
F->xv_2582 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->d_2577)));
F->loops_2579 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->loops_2579))->all), f_key_loop_916(F->k_2576, F->at_897, F->d_2577, &F->xv_2582)); b_; }));
F->ends_2580 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->ends_2580))->all), rt_str(" }", 2)); b_; }));
F->pre_2578 = f_add_line_906(F->pre_2578, &F->xv_2582);
F->d_2577 = rt_add(F->d_2577, ((rt_int)1LL));
F->k_2576 = (*(P1034)rt_nil_check(F->k_2576)).next;
}
F->r_2573 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_2573))->all), rt_str(" { ", 3)), F->v_2581), (((P1027)rt_nil_check(F->loops_2579))->all)), rt_str(" ", 1)), f_store_at_921(F->at_897, &(*F->tmp_898), F->pre_2578, (*(P1040)rt_nil_check(F->at_897)).ndim)), (((P1027)rt_nil_check(F->ends_2580))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_900 == (*(P1040)rt_nil_check(F->at_897)).ndim) || ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->it_2571)).b)).kind == (((rt_int)14LL))))) {
F->k_2583 = NULL;
F->k_2583 = (*(P1034)rt_nil_check(F->it_2571)).a;
while ((F->k_2583 != NULL)) {
F->xv_2584 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_900)));
if ((F->dim_900 < (*(P1040)rt_nil_check(F->at_897)).ndim)) {
F->r_2573 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_2573))->all), rt_str(" {", 2)), f_key_loop_916(F->k_2583, F->at_897, F->dim_900, &F->xv_2584)), rt_str(" ", 1)), f_fill_items_901((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->it_2571)).b)).a, F->at_897, &(*F->tmp_898), f_add_line_906(F->prefix_899, &F->xv_2584), rt_add(F->dim_900, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2585 = rt_str_copy(f_item_value_911((*(P1034)rt_nil_check(F->it_2571)).b, F->at_897, (*(P1034)rt_nil_check(F->it_2571)).line, &F->vt_2574));
F->r_2573 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_2573))->all), rt_str(" { ", 3)), F->v_2585), f_key_loop_916(F->k_2583, F->at_897, F->dim_900, &F->xv_2584)), rt_str(" ", 1)), f_store_at_921(F->at_897, &(*F->tmp_898), f_add_line_906(F->prefix_899, &F->xv_2584), F->dim_900)), rt_str(" } }", 4)); b_; }));
}
F->k_2583 = (*(P1034)rt_nil_check(F->k_2583)).next;
}
} else {
f_fail_23((*(P1034)rt_nil_check(F->it_2571)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub((*(P1040)rt_nil_check(F->at_897)).ndim, F->dim_900), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2571 = (*(P1034)rt_nil_check(F->it_2571)).next;
}
F->result_ = (((P1027)rt_nil_check(F->r_2573))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_903(P1034 e_902) {
  struct f_e_line_903fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_902 = e_902;
F->result_ = (*(P1034)rt_nil_check(F->e_902)).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1038 f_add_line_906(P1038 l_904, rstr *s_905) {
  struct f_add_line_906fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_904 = l_904;
F->s_905 = s_905;
F->r_2586 = NULL;
F->tail_2587 = NULL;
F->x_2588 = NULL;
F->p_2589 = NULL;
F->p_2589 = F->l_904;
while ((F->p_2589 != NULL)) {
{ R1039 *cell2590 = rt_alloc(sizeof(R1039));
(*cell2590).s = NULL;
(*cell2590).next = NULL;
F->x_2588 = cell2590;
}
(*(P1038)rt_nil_check(F->x_2588)).s = (*(P1038)rt_nil_check(F->p_2589)).s;
if ((F->tail_2587 == NULL)) {
F->r_2586 = F->x_2588;
} else {
(*(P1038)rt_nil_check(F->tail_2587)).next = F->x_2588;
}
F->tail_2587 = F->x_2588;
F->p_2589 = (*(P1038)rt_nil_check(F->p_2589)).next;
}
{ R1039 *cell2591 = rt_alloc(sizeof(R1039));
(*cell2591).s = NULL;
(*cell2591).next = NULL;
F->x_2588 = cell2591;
}
(*(P1038)rt_nil_check(F->x_2588)).s = f_mk_3(&(*F->s_905));
if ((F->tail_2587 == NULL)) {
F->r_2586 = F->x_2588;
} else {
(*(P1038)rt_nil_check(F->tail_2587)).next = F->x_2588;
}
F->result_ = F->r_2586;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_911(P1034 e_907, P1040 at_908, rt_int line_909, P1040 *vt_910) {
  struct f_item_value_911fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_907 = e_907;
F->at_908 = at_908;
F->line_909 = line_909;
F->vt_910 = vt_910;
F->vt_910v = *F->vt_910;
g_cons_ctx_1109 = (*(P1040)rt_nil_check(F->at_908)).elemcons;
{
F->v_2592 = rt_str_copy(f_gexpr_805(F->e_907, (*(P1040)rt_nil_check(F->at_908)).elem, &F->vt_910v));
f_check_type_232(F->vt_910v, (*(P1040)rt_nil_check(F->at_908)).elem, F->line_909);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1040)rt_nil_check(F->at_908)).elem), rt_str(" v_ = ", 6)), f_comp_value_885((*(P1040)rt_nil_check(F->at_908)).elem, (*(P1040)rt_nil_check(F->at_908)).elemcons, &F->v_2592)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_910) = F->vt_910v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_916(P1034 k_912, P1040 at_913, rt_int d_914, rstr *xv_915) {
  struct f_key_loop_916fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_912 = k_912;
F->at_913 = at_913;
F->d_914 = d_914;
F->xv_915 = xv_915;
F->it_2593 = NULL;
F->lo_2594 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->k_912)).a, f_idx_type_258(F->at_913, F->d_914), &F->it_2593));
f_check_type_232(F->it_2593, f_idx_type_258(F->at_913, F->d_914), (*(P1034)rt_nil_check(F->k_912)).line);
if (((*(P1034)rt_nil_check(F->k_912)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_915)), rt_str(" = ", 3)), F->lo_2594), rt_str(";", 1));
goto ret_;
}
{
F->hi_2595 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->k_912)).b, f_idx_type_258(F->at_913, F->d_914), &F->it_2593));
f_check_type_232(F->it_2593, f_idx_type_258(F->at_913, F->d_914), (*(P1034)rt_nil_check(F->k_912)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_915)), rt_str(" = ", 3)), F->lo_2594), rt_str(", h", 3)), (*F->xv_915)), rt_str(" = ", 3)), F->hi_2595), rt_str("; ", 2)), (*F->xv_915)), rt_str(" <= h", 5)), (*F->xv_915)), rt_str("; ", 2)), (*F->xv_915)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_921(P1040 at_917, rstr *tmp_918, P1038 xs_919, rt_int n_920) {
  struct f_store_at_921fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_917 = at_917;
F->tmp_918 = tmp_918;
F->xs_919 = xs_919;
F->n_920 = n_920;
F->off_2596 = NULL;
F->x_2597 = NULL;
F->x_2597 = F->xs_919;
F->k_2598 = ((rt_int)0LL);
while ((F->x_2597 != NULL)) {
F->k_2598 = rt_add(F->k_2598, ((rt_int)1LL));
{
F->l_2599 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_918), rt_str(".", 1)), f_dim_lo_242(F->k_2598)));
F->h_2600 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_918), rt_str(".", 1)), f_dim_hi_244(F->k_2598)));
if ((F->off_2596 == NULL)) {
F->off_2596 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P1027)rt_nil_check((*(P1038)rt_nil_check(F->x_2597)).s))->all)), rt_str(", ", 2)), F->l_2599), rt_str(", ", 2)), F->h_2600), rt_str(") - ", 4)), F->l_2599), rt_str(")", 1)); b_; }));
} else {
F->off_2596 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1027)rt_nil_check(F->off_2596))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2599), rt_str(", ", 2)), F->h_2600), rt_str(") + rt_index(", 13)), (((P1027)rt_nil_check((*(P1038)rt_nil_check(F->x_2597)).s))->all)), rt_str(", ", 2)), F->l_2599), rt_str(", ", 2)), F->h_2600), rt_str(") - ", 4)), F->l_2599), rt_str(")", 1)); b_; }));
}
}
F->x_2597 = (*(P1038)rt_nil_check(F->x_2597)).next;
}
if ((F->k_2598 != (*(P1040)rt_nil_check(F->at_917)).ndim)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7((*(P1040)rt_nil_check(F->at_917)).ndim)), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P1027)rt_nil_check(F->off_2596))->all)), rt_str("; ", 2)), (*F->tmp_918)), rt_str(".p[o_] = ", 9)), f_copy_code_419((*(P1040)rt_nil_check(F->at_917)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_918)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_924(P1044 y_922, P1034 args_923) {
  struct f_fits_924fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_922 = y_922;
F->args_923 = args_923;
F->a_2601 = NULL;
F->a_2601 = F->args_923;
F->pm_2602 = NULL;
F->pm_2602 = (*(P1044)rt_nil_check(F->y_922)).params;
F->t_2603 = NULL;
F->saved_2604 = NULL;
F->saved_2604 = g_code_1088;
F->ok_2605 = 1;
F->lv_2606 = NULL;
F->lc_2607 = NULL;
g_trial_1117 = rt_add(g_trial_1117, ((rt_int)1LL));
g_code_1088 = f_new_buffer_24();
{ rt_frame xf2609;
if (RT_TRY(xf2609)) {
while (((F->ok_2605 && (F->a_2601 != NULL)) && (F->pm_2602 != NULL))) {
if ((((*(P1046)rt_nil_check(F->pm_2602)).mode == (((rt_int)2LL))) || ((*(P1046)rt_nil_check(F->pm_2602)).mode == (((rt_int)3LL))))) {
f_lvalue_774(F->a_2601, &F->lv_2606, &F->t_2603, &F->lc_2607, &F->ro_2608);
} else {
F->v_2611 = rt_str_copy(f_gexpr_805(F->a_2601, (*(P1046)rt_nil_check(F->pm_2602)).t, &F->t_2603));
}
if ((!(f_same_221(F->t_2603, (*(P1046)rt_nil_check(F->pm_2602)).t) || (((*(P1040)rt_nil_check(F->t_2603)).kind == (((rt_int)11LL))) && ((*(P1040)rt_nil_check((*(P1046)rt_nil_check(F->pm_2602)).t)).kind == (((rt_int)8LL))))))) {
F->ok_2605 = 0;
}
F->a_2601 = (*(P1034)rt_nil_check(F->a_2601)).next;
F->pm_2602 = (*(P1046)rt_nil_check(F->pm_2602)).next;
}
if (((F->a_2601 != NULL) || (F->pm_2602 != NULL))) {
F->ok_2605 = 0;
}
RT_POP(xf2609);
} else {
RT_POP(xf2609);
int x2610 = rt_xcur;
if (0 || x2610 == ex_compile_error_1) {
F->ok_2605 = 0;
} else {
rt_raise(x2610);
}
}
}
g_trial_1117 = rt_sub(g_trial_1117, ((rt_int)1LL));
g_code_1088 = F->saved_2604;
F->result_ = F->ok_2605;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_resolve_overload_930(rstr *name_925, P1034 tt_926, P1034 args_927, int is_stmt_928, rt_int line_929) {
  struct f_resolve_overload_930fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_925 = name_925;
F->tt_926 = tt_926;
F->args_927 = args_927;
F->is_stmt_928 = is_stmt_928;
F->line_929 = line_929;
F->y_2612 = NULL;
F->first_2613 = NULL;
F->n_2614 = ((rt_int)0LL);
{ rt_int lo2616 = ((rt_int)1LL), hi2617 = ((rt_int)3LL);
for (rt_int it2618 = lo2616; it2618 <= hi2617; it2618++) {
F->pass_2615 = it2618;
F->y_2612 = f_overload_chain_936(&(*F->name_925), F->pass_2615);
while ((F->y_2612 != NULL)) {
if (((rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_2612)).name))->all), (*F->name_925)) && (((*(P1044)rt_nil_check(F->y_2612)).kind == (((rt_int)3LL))) || ((*(P1044)rt_nil_check(F->y_2612)).kind == (((rt_int)4LL))))) && ((F->pass_2615 != ((rt_int)1LL)) || ((*(P1044)rt_nil_check(F->y_2612)).depth >= g_gdepth_1107)))) {
F->n_2614 = rt_add(F->n_2614, ((rt_int)1LL));
if ((F->first_2613 == NULL)) {
F->first_2613 = F->y_2612;
}
if ((((((*(P1044)rt_nil_check(F->y_2612)).kind == (((rt_int)4LL))) == F->is_stmt_928) && f_tt_fits_933(F->y_2612, F->tt_926)) && f_fits_924(F->y_2612, F->args_927))) {
F->result_ = F->y_2612;
goto ret_;
}
}
F->y_2612 = (*(P1044)rt_nil_check(F->y_2612)).chain;
}
}
}
if (f_is_builtin_938(&(*F->name_925))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_2614 > ((rt_int)1LL))) {
f_fail_23(F->line_929, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_925)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2613;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_933(P1044 y_931, P1034 tt_932) {
  struct f_tt_fits_933fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_931 = y_931;
F->tt_932 = tt_932;
F->f_2619 = NULL;
F->a_2620 = NULL;
F->saved_2621 = NULL;
F->saved_2621 = g_code_1088;
F->ok_2622 = 1;
if ((((*(P1044)rt_nil_check(F->y_931)).decl == NULL) || ((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_931)).decl)).e == NULL))) {
F->result_ = (F->tt_932 == NULL);
goto ret_;
} else if ((F->tt_932 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2619 = (*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_931)).decl)).e;
F->a_2620 = F->tt_932;
g_trial_1117 = rt_add(g_trial_1117, ((rt_int)1LL));
g_code_1088 = f_new_buffer_24();
{ rt_frame xf2623;
if (RT_TRY(xf2623)) {
while (((F->ok_2622 && (F->f_2619 != NULL)) && (F->a_2620 != NULL))) {
F->fc_2625 = NULL;
F->ac_2626 = NULL;
F->fst_2627 = NULL;
F->fst_2627 = f_nn_65((((rt_int)80LL)), (*(P1034)rt_nil_check(F->f_2619)).line);
F->ft_2628 = NULL;
F->at_2629 = NULL;
(*(P1034)rt_nil_check(F->fst_2627)).name = (*(P1034)rt_nil_check(F->f_2619)).name;
F->ft_2628 = f_resolve_subtype_268(F->fst_2627, &F->fc_2625);
if (((*(P1034)rt_nil_check(F->a_2620)).kind >= (((rt_int)70LL)))) {
F->at_2629 = f_resolve_subtype_268(F->a_2620, &F->ac_2626);
} else {
F->ast_2630 = NULL;
F->ast_2630 = f_nn_65((((rt_int)80LL)), (*(P1034)rt_nil_check(F->a_2620)).line);
(*(P1034)rt_nil_check(F->ast_2630)).name = (*(P1034)rt_nil_check(F->a_2620)).name;
F->at_2629 = f_resolve_subtype_268(F->ast_2630, &F->ac_2626);
}
F->ok_2622 = f_same_221(F->ft_2628, F->at_2629);
F->f_2619 = (*(P1034)rt_nil_check(F->f_2619)).next;
F->a_2620 = (*(P1034)rt_nil_check(F->a_2620)).next;
}
F->ok_2622 = ((F->ok_2622 && (F->f_2619 == NULL)) && (F->a_2620 == NULL));
RT_POP(xf2623);
} else {
RT_POP(xf2623);
int x2624 = rt_xcur;
if (0 || x2624 == ex_compile_error_1) {
F->ok_2622 = 0;
} else {
rt_raise(x2624);
}
}
}
g_trial_1117 = rt_sub(g_trial_1117, ((rt_int)1LL));
g_code_1088 = F->saved_2621;
F->result_ = F->ok_2622;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_overload_chain_936(rstr *name_934, rt_int pass_935) {
  struct f_overload_chain_936fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_934 = name_934;
F->pass_935 = pass_935;
if (((g_genv_1075 == NULL) && (F->pass_935 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_935 == ((rt_int)2LL))) {
F->result_ = ({ A1050 b_ = (((P1048)rt_nil_check(g_genv_1075))->all); b_.p[(rt_index(f_hash_161(&(*F->name_934)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A1050 b_ = (((P1048)rt_nil_check(g_table_1074))->all); b_.p[(rt_index(f_hash_161(&(*F->name_934)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_938(rstr *n_937) {
  struct f_is_builtin_938fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_937 = n_937;
F->result_ = (((((((((((((((rt_str_eq((*F->n_937), rt_str("ABS", 3)) || rt_str_eq((*F->n_937), rt_str("POS", 3))) || rt_str_eq((*F->n_937), rt_str("SUCC", 4))) || rt_str_eq((*F->n_937), rt_str("PRED", 4))) || rt_str_eq((*F->n_937), rt_str("SQRT", 4))) || rt_str_eq((*F->n_937), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_937), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_937), rt_str("WRITE", 5))) || rt_str_eq((*F->n_937), rt_str("READLN", 6))) || rt_str_eq((*F->n_937), rt_str("SEND", 4))) || rt_str_eq((*F->n_937), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_937), rt_str("DELAY", 5))) || rt_str_eq((*F->n_937), rt_str("TIME", 4))) || rt_str_eq((*F->n_937), rt_str("CNVT", 4))) || rt_str_eq((*F->n_937), rt_str("FORMAT", 6))) || f_is_low_level_940(&(*F->n_937)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_940(rstr *n_939) {
  struct f_is_low_level_940fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_939 = n_939;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_939), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_939), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_939), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_939), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_939), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_939), rt_str("LOCK", 4))) || rt_str_eq((*F->n_939), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_939), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_939), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_939), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_939), rt_str("WAITING", 7))) || rt_str_eq((*F->n_939), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_939), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_939), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_939), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_939), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_939), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_939), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_939), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_944(P1034 tt_941, rt_int line_942, P1040 *t_943) {
  struct f_me_high_944fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_941 = tt_941;
F->line_942 = line_942;
F->t_943 = t_943;
F->t_943v = *F->t_943;
F->c_2631 = NULL;
if ((F->tt_941 == NULL)) {
f_fail_23(F->line_942, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_943v = f_resolve_subtype_268(F->tt_941, &F->c_2631);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->t_943v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_946(F->t_943v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_943) = F->t_943v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_946(P1040 t_945) {
  struct f_type_tag_946fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_945 = t_945;
if (((*(P1040)rt_nil_check(F->t_945)).name != NULL)) {
F->result_ = (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_945)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_949(P1034 e_947, rstr *name_948) {
  struct f_lock_ref_949fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_947 = e_947;
F->name_948 = name_948;
F->lv_2632 = NULL;
F->t_2633 = NULL;
F->c_2634 = NULL;
f_lvalue_774(F->e_947, &F->lv_2632, &F->t_2633, &F->c_2634, &F->ro_2635);
if (((*(P1040)rt_nil_check(F->t_2633)).kind != (((rt_int)13LL)))) {
f_fail_23((*(P1034)rt_nil_check(F->e_947)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_948), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P1027)rt_nil_check(F->lv_2632))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1044 f_user_op_952(rstr *op_950, P1034 args_951) {
  struct f_user_op_952fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_950 = op_950;
F->args_951 = args_951;
F->y_2636 = NULL;
{ rt_int lo2638 = ((rt_int)1LL), hi2639 = ((rt_int)3LL);
for (rt_int it2640 = lo2638; it2640 <= hi2639; it2640++) {
F->pass_2637 = it2640;
F->y_2636 = f_overload_chain_936(&(*F->op_950), F->pass_2637);
while ((F->y_2636 != NULL)) {
if ((((rt_str_eq((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_2636)).name))->all), (*F->op_950)) && ((*(P1044)rt_nil_check(F->y_2636)).kind == (((rt_int)3LL)))) && ((F->pass_2637 != ((rt_int)1LL)) || ((*(P1044)rt_nil_check(F->y_2636)).depth >= g_gdepth_1107))) && f_fits_924(F->y_2636, F->args_951))) {
F->result_ = F->y_2636;
goto ret_;
}
F->y_2636 = (*(P1044)rt_nil_check(F->y_2636)).chain;
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

static rstr f_gcall_956(P1034 e_953, int is_stmt_954, P1040 *t_955) {
  struct f_gcall_956fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_953 = e_953;
F->is_stmt_954 = is_stmt_954;
F->t_955 = t_955;
F->t_955v = *F->t_955;
F->gd_2641 = NULL;
F->fn_2642 = NULL;
F->fn_2642 = (*(P1034)rt_nil_check(F->e_953)).a;
F->tt_2643 = NULL;
F->y_2644 = NULL;
F->args_2645 = NULL;
F->args_2645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2646 = NULL;
F->a_2646 = (*(P1034)rt_nil_check(F->e_953)).b;
F->pm_2647 = NULL;
F->lt_2648 = NULL;
F->vt_2649 = NULL;
F->lv_2650 = NULL;
F->lc_2651 = NULL;
if (((*(P1034)rt_nil_check(F->fn_2642)).kind == (((rt_int)12LL)))) {
F->tt_2643 = (*(P1034)rt_nil_check(F->fn_2642)).b;
F->fn_2642 = (*(P1034)rt_nil_check(F->fn_2642)).a;
}
F->y_2644 = f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2642)).name))->all));
if ((F->y_2644 == NULL)) {
F->result_ = f_builtin_1011(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2642)).name))->all), F->tt_2643, (*(P1034)rt_nil_check(F->e_953)).b, (*(P1034)rt_nil_check(F->e_953)).line, F->is_stmt_954, &F->t_955v);
goto ret_;
}
if (((((*(P1044)rt_nil_check(F->y_2644)).kind != (((rt_int)3LL))) && ((*(P1044)rt_nil_check(F->y_2644)).kind != (((rt_int)4LL)))) && ((*(P1044)rt_nil_check(F->y_2644)).kind != (((rt_int)10LL))))) {
F->alt_2653 = NULL;
F->alt_2653 = f_resolve_overload_930(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2642)).name))->all), F->tt_2643, (*(P1034)rt_nil_check(F->e_953)).b, F->is_stmt_954, (*(P1034)rt_nil_check(F->e_953)).line);
if ((F->alt_2653 != NULL)) {
F->y_2644 = F->alt_2653;
} else if (f_is_builtin_938(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2642)).name))->all))) {
F->result_ = f_builtin_1011(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2642)).name))->all), F->tt_2643, (*(P1034)rt_nil_check(F->e_953)).b, (*(P1034)rt_nil_check(F->e_953)).line, F->is_stmt_954, &F->t_955v);
goto ret_;
}
}
if (((*(P1044)rt_nil_check(F->y_2644)).kind == (((rt_int)10LL)))) {
F->gd_2641 = (*(P1044)rt_nil_check(F->y_2644)).decl;
F->y_2644 = f_instantiate_750(F->y_2644, F->tt_2643, (*(P1034)rt_nil_check(F->e_953)).b, (*(P1034)rt_nil_check(F->e_953)).line);
} else if ((((*(P1044)rt_nil_check(F->y_2644)).kind == (((rt_int)3LL))) || ((*(P1044)rt_nil_check(F->y_2644)).kind == (((rt_int)4LL))))) {
F->y_2644 = f_resolve_overload_930(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2642)).name))->all), F->tt_2643, (*(P1034)rt_nil_check(F->e_953)).b, F->is_stmt_954, (*(P1034)rt_nil_check(F->e_953)).line);
if ((F->y_2644 == NULL)) {
F->result_ = f_builtin_1011(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2642)).name))->all), F->tt_2643, (*(P1034)rt_nil_check(F->e_953)).b, (*(P1034)rt_nil_check(F->e_953)).line, F->is_stmt_954, &F->t_955v);
goto ret_;
}
}
if ((((*(P1044)rt_nil_check(F->y_2644)).kind != (((rt_int)3LL))) && ((*(P1044)rt_nil_check(F->y_2644)).kind != (((rt_int)4LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->e_953)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2642)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_970(F->y_2644, (*(P1034)rt_nil_check(F->e_953)).line);
if (((*(P1044)rt_nil_check(F->y_2644)).capn != NULL)) {
F->cr_2654 = NULL;
F->cr_2654 = g_caps_1093;
while ((F->cr_2654 != NULL)) {
if (((*(P1061)rt_nil_check(F->cr_2654)).d == (*(P1044)rt_nil_check(F->y_2644)).capn)) {
f_fail_23((*(P1034)rt_nil_check(F->e_953)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_2644)).name))->all), rt_str(" is a normal function with an imports list: it may not be invoked inside its capsule", 84)); b_; }));
}
F->cr_2654 = (*(P1061)rt_nil_check(F->cr_2654)).next;
}
}
if ((F->is_stmt_954 && ((*(P1044)rt_nil_check(F->y_2644)).kind != (((rt_int)4LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->e_953)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2642)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_954) && ((*(P1044)rt_nil_check(F->y_2644)).kind != (((rt_int)3LL))))) {
f_fail_23((*(P1034)rt_nil_check(F->e_953)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2642)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2647 = (*(P1044)rt_nil_check(F->y_2644)).params;
if (((*(P1044)rt_nil_check(F->y_2644)).level > ((rt_int)0LL))) {
F->args_2645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2656 = ((rt_int)1LL), hi2657 = rt_sub(g_cur_level_1091, (*(P1044)rt_nil_check(F->y_2644)).level);
for (rt_int it2658 = lo2656; it2658 <= hi2657; it2658++) {
F->i_2655 = it2658;
F->args_2645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->args_2645))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2646 != NULL) && (F->pm_2647 != NULL))) {
if ((((rt_int)(((((P1027)rt_nil_check(F->args_2645))->all)).len)) > ((rt_int)0LL))) {
F->args_2645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->args_2645))->all), rt_str(", ", 2)); b_; }));
}
if (((((*(P1046)rt_nil_check(F->pm_2647)).mode == (((rt_int)2LL))) || ((*(P1046)rt_nil_check(F->pm_2647)).mode == (((rt_int)4LL)))) && f_explicit_rep_1000(F->a_2646))) {
f_fail_23((*(P1034)rt_nil_check(F->e_953)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("data with an explicit representation may not be bound to a VAR or READONLY formal", 81); b_; }));
}
if ((((*(P1046)rt_nil_check(F->pm_2647)).mode == (((rt_int)2LL))) || ((*(P1046)rt_nil_check(F->pm_2647)).mode == (((rt_int)3LL))))) {
f_lvalue_774(F->a_2646, &F->lv_2650, &F->lt_2648, &F->lc_2651, &F->ro_2652);
if (F->ro_2652) {
f_fail_23((*(P1034)rt_nil_check(F->e_953)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check((*(P1046)rt_nil_check(F->pm_2647)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_232(F->lt_2648, (*(P1046)rt_nil_check(F->pm_2647)).t, (*(P1034)rt_nil_check(F->e_953)).line);
F->args_2645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->args_2645))->all), rt_str("&", 1)), (((P1027)rt_nil_check(F->lv_2650))->all)), f_actual_bounds_1004((*(P1046)rt_nil_check(F->pm_2647)).t, F->lt_2648, F->lc_2651)); b_; }));
} else if ((((*(P1046)rt_nil_check(F->pm_2647)).mode == (((rt_int)4LL))) && f_is_lvalue_768(F->a_2646))) {
f_lvalue_774(F->a_2646, &F->lv_2650, &F->lt_2648, &F->lc_2651, &F->ro_2652);
f_check_type_232(F->lt_2648, (*(P1046)rt_nil_check(F->pm_2647)).t, (*(P1034)rt_nil_check(F->e_953)).line);
F->args_2645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->args_2645))->all), rt_str("&", 1)), (((P1027)rt_nil_check(F->lv_2650))->all)), f_actual_bounds_1004((*(P1046)rt_nil_check(F->pm_2647)).t, F->lt_2648, F->lc_2651)); b_; }));
} else if (((*(P1046)rt_nil_check(F->pm_2647)).mode == (((rt_int)4LL)))) {
F->v_2659 = rt_str_copy(f_gexpr_in_816(F->a_2646, (*(P1046)rt_nil_check(F->pm_2647)).t, (*(P1046)rt_nil_check(F->pm_2647)).c, &F->vt_2649));
F->ct_2660 = rt_str_copy(f_ctype_234((*(P1046)rt_nil_check(F->pm_2647)).t));
f_check_type_232(F->vt_2649, (*(P1046)rt_nil_check(F->pm_2647)).t, (*(P1034)rt_nil_check(F->e_953)).line);
F->args_2645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->args_2645))->all), rt_str("({ ", 3)), F->ct_2660), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2660), rt_str(")); *b_ = ", 10)), F->v_2659), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_186((*(P1046)rt_nil_check(F->pm_2647)).t)) {
F->args_2645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->args_2645))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2661 = rt_str_copy(f_gexpr_in_816(F->a_2646, (*(P1046)rt_nil_check(F->pm_2647)).t, (*(P1046)rt_nil_check(F->pm_2647)).c, &F->vt_2649));
f_check_type_232(F->vt_2649, (*(P1046)rt_nil_check(F->pm_2647)).t, (*(P1034)rt_nil_check(F->e_953)).line);
F->args_2645 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->args_2645))->all), F->v_2661); b_; }));
}
F->a_2646 = (*(P1034)rt_nil_check(F->a_2646)).next;
F->pm_2647 = (*(P1046)rt_nil_check(F->pm_2647)).next;
}
if (((F->a_2646 != NULL) || (F->pm_2647 != NULL))) {
f_fail_23((*(P1034)rt_nil_check(F->e_953)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->fn_2642)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_71((*(P1034)rt_nil_check(F->e_953)).b), f_list_len_71(F->a_2646)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_955v = (*(P1044)rt_nil_check(F->y_2644)).result;
if ((F->gd_2641 != NULL)) {
F->chk_2662 = rt_str_copy(f_same_subtypes_975(F->gd_2641, (*(P1034)rt_nil_check(F->e_953)).b));
if ((!rt_str_eq(F->chk_2662, rt_str("", 0)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), F->chk_2662), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("generic subtype", 15)), f_q_18()), rt_str("); ", 3)), (((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_2644)).cname))->all)), rt_str("(", 1)), (((P1027)rt_nil_check(F->args_2645))->all)), rt_str("); })", 5));
goto ret_;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_2644)).cname))->all), rt_str("(", 1)), (((P1027)rt_nil_check(F->args_2645))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_955) = F->t_955v;
  RT_FPOP();
  return F->result_;
}

static P1038 f_requires_958(P1044 y_957) {
  struct f_requires_958fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_957 = y_957;
if ((*(P1044)rt_nil_check(F->y_957)).reqdone) {
F->result_ = (*(P1044)rt_nil_check(F->y_957)).reqs;
goto ret_;
}
(*(P1044)rt_nil_check(F->y_957)).reqdone = 1;
if ((((*(P1044)rt_nil_check(F->y_957)).decl != NULL) && ((((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_957)).decl)).kind == (((rt_int)45LL))) || ((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_957)).decl)).kind == (((rt_int)46LL)))) || ((*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_957)).decl)).kind == (((rt_int)50LL)))))) {
F->imp_2663 = NULL;
F->imp_2663 = (*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_957)).decl)).d;
while ((F->imp_2663 != NULL)) {
f_add_req_961(F->y_957, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->imp_2663)).name))->all));
F->imp_2663 = (*(P1034)rt_nil_check(F->imp_2663)).next;
}
f_require_calls_964(F->y_957, (*(P1034)rt_nil_check((*(P1044)rt_nil_check(F->y_957)).decl)).c);
}
F->result_ = (*(P1044)rt_nil_check(F->y_957)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_961(P1044 y_959, rstr *name_960) {
  struct f_add_req_961fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_959 = y_959;
F->name_960 = name_960;
F->l_2664 = NULL;
if ((!f_seen_name_430((*(P1044)rt_nil_check(F->y_959)).reqs, &(*F->name_960)))) {
{ R1039 *cell2665 = rt_alloc(sizeof(R1039));
(*cell2665).s = NULL;
(*cell2665).next = NULL;
F->l_2664 = cell2665;
}
(*(P1038)rt_nil_check(F->l_2664)).s = f_mk_3(&(*F->name_960));
(*(P1038)rt_nil_check(F->l_2664)).next = (*(P1044)rt_nil_check(F->y_959)).reqs;
(*(P1044)rt_nil_check(F->y_959)).reqs = F->l_2664;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_964(P1044 y_962, P1034 e_963) {
  struct f_require_calls_964fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_962 = y_962;
F->e_963 = e_963;
F->x_2666 = NULL;
F->x_2666 = F->e_963;
while ((F->x_2666 != NULL)) {
if (((((((*(P1034)rt_nil_check(F->x_2666)).kind == (((rt_int)45LL))) || ((*(P1034)rt_nil_check(F->x_2666)).kind == (((rt_int)46LL)))) || ((*(P1034)rt_nil_check(F->x_2666)).kind == (((rt_int)50LL)))) || ((*(P1034)rt_nil_check(F->x_2666)).kind == (((rt_int)47LL)))) || ((*(P1034)rt_nil_check(F->x_2666)).kind == (((rt_int)51LL))))) {
F->x_2666 = (*(P1034)rt_nil_check(F->x_2666)).next;
} else {
F->callee_2667 = NULL;
if ((((((*(P1034)rt_nil_check(F->x_2666)).kind == (((rt_int)10LL))) || ((*(P1034)rt_nil_check(F->x_2666)).kind == (((rt_int)21LL)))) && ((*(P1034)rt_nil_check(F->x_2666)).a != NULL)) && ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->x_2666)).a)).kind == (((rt_int)7LL))))) {
F->callee_2667 = (*(P1034)rt_nil_check(F->x_2666)).a;
}
if ((F->callee_2667 != NULL)) {
F->z_2668 = NULL;
F->z_2668 = f_lookup_163(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->callee_2667)).name))->all));
if ((((F->z_2668 != NULL) && (F->z_2668 != F->y_962)) && (((*(P1044)rt_nil_check(F->z_2668)).kind == (((rt_int)4LL))) || ((*(P1044)rt_nil_check(F->z_2668)).kind == (((rt_int)3LL)))))) {
F->l_2669 = NULL;
F->l_2669 = f_requires_958(F->z_2668);
while ((F->l_2669 != NULL)) {
f_add_req_961(F->y_962, &(((P1027)rt_nil_check((*(P1038)rt_nil_check(F->l_2669)).s))->all));
F->l_2669 = (*(P1038)rt_nil_check(F->l_2669)).next;
}
}
}
if (((*(P1034)rt_nil_check(F->x_2666)).a != NULL)) {
f_require_calls_964(F->y_962, (*(P1034)rt_nil_check(F->x_2666)).a);
}
if (((*(P1034)rt_nil_check(F->x_2666)).b != NULL)) {
f_require_calls_964(F->y_962, (*(P1034)rt_nil_check(F->x_2666)).b);
}
if (((*(P1034)rt_nil_check(F->x_2666)).c != NULL)) {
f_require_calls_964(F->y_962, (*(P1034)rt_nil_check(F->x_2666)).c);
}
F->x_2666 = (*(P1034)rt_nil_check(F->x_2666)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_967(P1034 elems_965, rstr *name_966) {
  struct f_declared_in_967fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_965 = elems_965;
F->name_966 = name_966;
F->e_2670 = NULL;
F->e_2670 = F->elems_965;
while ((F->e_2670 != NULL)) {
if (((((*(P1034)rt_nil_check(F->e_2670)).kind == (((rt_int)40LL))) || ((*(P1034)rt_nil_check(F->e_2670)).kind == (((rt_int)41LL)))) && rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_2670)).name))->all), (*F->name_966)))) {
F->result_ = 1;
goto ret_;
}
F->e_2670 = (*(P1034)rt_nil_check(F->e_2670)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_970(P1044 y_968, rt_int line_969) {
  struct f_check_requires_970fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_968 = y_968;
F->line_969 = line_969;
F->l_2671 = NULL;
F->l_2671 = f_requires_958(F->y_968);
if ((((*(P1044)rt_nil_check(F->y_968)).home == NULL) || ((*(P1044)rt_nil_check(F->y_968)).level != g_cur_level_1091))) {
goto ret_;
}
while ((F->l_2671 != NULL)) {
F->z_2672 = NULL;
F->z_2672 = f_lookup_163(&(((P1027)rt_nil_check((*(P1038)rt_nil_check(F->l_2671)).s))->all));
if ((f_declared_in_967((*(P1044)rt_nil_check(F->y_968)).home, &(((P1027)rt_nil_check((*(P1038)rt_nil_check(F->l_2671)).s))->all)) && ((F->z_2672 == NULL) || ((*(P1044)rt_nil_check(F->z_2672)).depth < (*(P1044)rt_nil_check(F->y_968)).depth)))) {
f_fail_23(F->line_969, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check((*(P1044)rt_nil_check(F->y_968)).name))->all), rt_str(" requires ", 10)), (((P1027)rt_nil_check((*(P1038)rt_nil_check(F->l_2671)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2671 = (*(P1038)rt_nil_check(F->l_2671)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_delay_args_972(P1034 args_971) {
  struct f_act_delay_args_972fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->args_971 = args_971;
F->at_2673 = NULL;
F->t1_2674 = NULL;
F->t1_2674 = f_peek_type_824(F->args_971);
if (((F->t1_2674 != NULL) && ((*(P1040)rt_nil_check(F->t1_2674)).kind == (((rt_int)14LL))))) {
F->a_2675 = rt_str_copy(f_act_ref_656(F->args_971));
F->v_2676 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->args_971)).next, g_ty_int_1119, &F->at_2673));
f_check_type_232(F->at_2673, g_ty_int_1119, (*(P1034)rt_nil_check(F->args_971)).line);
F->result_ = rt_str_cat(rt_str_cat(F->v_2676, rt_str(", ", 2)), F->a_2675);
goto ret_;
}
{
F->v_2677 = rt_str_copy(f_gexpr_805(F->args_971, g_ty_int_1119, &F->at_2673));
f_check_type_232(F->at_2673, g_ty_int_1119, (*(P1034)rt_nil_check(F->args_971)).line);
F->result_ = rt_str_cat(rt_str_cat(F->v_2677, rt_str(", ", 2)), f_act_ref_656((*(P1034)rt_nil_check(F->args_971)).next));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_same_subtypes_975(P1034 gd_973, P1034 args_974) {
  struct f_same_subtypes_975fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_973 = gd_973;
F->args_974 = args_974;
F->p_2678 = NULL;
F->p_2678 = (*(P1034)rt_nil_check(F->gd_973)).a;
F->r_2679 = NULL;
F->r_2679 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->p_2678 != NULL)) {
if (((*(P1034)rt_nil_check(F->p_2678)).ival == ((rt_int)2LL))) {
F->fp_2680 = NULL;
F->fp_2680 = (*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->gd_973)).b)).a;
F->a_2681 = NULL;
F->a_2681 = F->args_974;
F->flo_2682 = NULL;
F->fhi_2683 = NULL;
while (((F->fp_2680 != NULL) && (F->a_2681 != NULL))) {
if ((((((*(P1034)rt_nil_check(F->fp_2680)).a != NULL) && ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->fp_2680)).a)).kind == (((rt_int)80LL)))) && rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->fp_2680)).a)).name))->all), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->p_2678)).name))->all))) && ((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->fp_2680)).a)).b == NULL))) {
F->st_2684 = NULL;
F->c_2685 = NULL;
F->base_2686 = NULL;
F->lo_2687 = NULL;
F->hi_2688 = NULL;
F->st_2684 = f_value_subtype_290(F->a_2681, &F->c_2685, &F->base_2686);
if (f_scalar_kind_186(F->st_2684)) {
F->lo_2687 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_lo_198(F->st_2684, F->c_2685); b_; }));
F->hi_2688 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_hi_201(F->st_2684, F->c_2685); b_; }));
} else if ((((*(P1040)rt_nil_check(F->st_2684)).kind == (((rt_int)5LL))) && ((*(P1036)rt_nil_check(F->c_2685)).slen != NULL))) {
F->lo_2687 = (*(P1036)rt_nil_check(F->c_2685)).slen;
F->hi_2688 = (*(P1036)rt_nil_check(F->c_2685)).slen;
}
if (((F->lo_2687 != NULL) && (F->flo_2682 != NULL))) {
if ((((rt_int)(((((P1027)rt_nil_check(F->r_2679))->all)).len)) > ((rt_int)0LL))) {
F->r_2679 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_2679))->all), rt_str(" || ", 4)); b_; }));
}
F->r_2679 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_2679))->all), rt_str("(", 1)), (((P1027)rt_nil_check(F->flo_2682))->all)), rt_str(") != (", 6)), (((P1027)rt_nil_check(F->lo_2687))->all)), rt_str(") || (", 6)), (((P1027)rt_nil_check(F->fhi_2683))->all)), rt_str(") != (", 6)), (((P1027)rt_nil_check(F->hi_2688))->all)), rt_str(")", 1)); b_; }));
} else if ((F->lo_2687 != NULL)) {
F->flo_2682 = F->lo_2687;
F->fhi_2683 = F->hi_2688;
}
}
F->fp_2680 = (*(P1034)rt_nil_check(F->fp_2680)).next;
F->a_2681 = (*(P1034)rt_nil_check(F->a_2681)).next;
}
}
F->p_2678 = (*(P1034)rt_nil_check(F->p_2678)).next;
}
F->result_ = (((P1027)rt_nil_check(F->r_2679))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mailbox_low_980(rstr *name_976, P1034 args_977, rt_int line_978, P1040 *t_979) {
  struct f_mailbox_low_980fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_976 = name_976;
F->args_977 = args_977;
F->line_978 = line_978;
F->t_979 = t_979;
F->t_979v = *F->t_979;
F->qv_2689 = NULL;
F->mv_2690 = NULL;
F->dv_2691 = NULL;
F->qt_2692 = NULL;
F->mt_2693 = NULL;
F->dt_2694 = NULL;
F->at_2695 = NULL;
F->c_2696 = NULL;
F->send_2698 = rt_str_eq(rt_str_slice((*F->name_976), ((rt_int)1LL), ((rt_int)4LL)), rt_str("SEND", 4));
f_lvalue_774(F->args_977, &F->qv_2689, &F->qt_2692, &F->c_2696, &F->ro_2697);
f_lvalue_774((*(P1034)rt_nil_check(F->args_977)).next, &F->mv_2690, &F->mt_2693, &F->c_2696, &F->ro_2697);
if (((*(P1040)rt_nil_check(F->mt_2693)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_978, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_976), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_979v = g_ty_void_1124;
if (((F->send_2698 && (F->qt_2692 != g_ty_send_st_1131)) || ((!F->send_2698) && (F->qt_2692 != g_ty_receive_st_1132)))) {
f_fail_23(F->line_978, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->name_976), rt_str(" needs a variable of subtype ", 29)), rt_str_slice((*F->name_976), ((rt_int)1LL), ((rt_int)4LL))), rt_str("_ST", 3)); b_; }));
}
if ((rt_str_eq((*F->name_976), rt_str("SEND_TEST", 9)) || rt_str_eq((*F->name_976), rt_str("RECEIVE_TEST", 12)))) {
F->t_979v = g_ty_bool_1120;
if (F->send_2698) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_send(", 14), (((P1027)rt_nil_check(F->mv_2690))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_receive(", 17), (((P1027)rt_nil_check(F->mv_2690))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_976), rt_str("SEND_COMPLETE", 13))) {
F->v_2699 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_977)).next)).next, (*(P1040)rt_nil_check(F->mt_2693)).elem, &F->at_2695));
f_check_type_232(F->at_2695, (*(P1040)rt_nil_check(F->mt_2693)).elem, F->line_978);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1040)rt_nil_check(F->mt_2693)).elem)), rt_str(" m_ = ", 6)), F->v_2699), rt_str("; if (!rt_cond_send(", 20)), (((P1027)rt_nil_check(F->mv_2690))->all)), rt_str(", &m_)) rt_raise(RT_X_EMPTY_MAILBOX); })", 40));
goto ret_;
} else if (rt_str_eq((*F->name_976), rt_str("RECEIVE_COMPLETE", 16))) {
f_lvalue_774((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_977)).next)).next, &F->dv_2691, &F->dt_2694, &F->c_2696, &F->ro_2697);
f_check_type_232(F->dt_2694, (*(P1040)rt_nil_check(F->mt_2693)).elem, F->line_978);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (!rt_cond_receive(", 24), (((P1027)rt_nil_check(F->mv_2690))->all)), rt_str(", &", 3)), (((P1027)rt_nil_check(F->dv_2691))->all)), rt_str(")) rt_raise(RT_X_EMPTY_MAILBOX); })", 35));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1027)rt_nil_check(F->qv_2689))->all)), rt_str(" = 1)", 5));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_979) = F->t_979v;
  RT_FPOP();
  return F->result_;
}

static P1040 f_exponent_want_983(rstr *op_981, P1040 ta_982) {
  struct f_exponent_want_983fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_981 = op_981;
F->ta_982 = ta_982;
if (rt_str_eq((*F->op_981), rt_str("**", 2))) {
F->result_ = g_ty_int_1119;
goto ret_;
}
F->result_ = F->ta_982;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_ref_987(P1034 e_984, int text_985, rt_int line_986) {
  struct f_file_ref_987fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_984 = e_984;
F->text_985 = text_985;
F->line_986 = line_986;
F->t_2700 = NULL;
F->f_2701 = rt_str_copy(f_gexpr_805(F->e_984, NULL, &F->t_2700));
if (((*(P1040)rt_nil_check(F->t_2700)).kind != (((rt_int)10LL)))) {
f_fail_23(F->line_986, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a file is required", 18); b_; }));
} else if ((F->text_985 && (!f_text_file_989(F->t_2700)))) {
f_fail_23(F->line_986, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a text file, whose components are characters, is required", 57); b_; }));
}
F->result_ = F->f_2701;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_text_file_989(P1040 t_988) {
  struct f_text_file_989fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_988 = t_988;
F->result_ = (((F->t_988 != NULL) && ((*(P1040)rt_nil_check(F->t_988)).kind == (((rt_int)10LL)))) && ((*(P1040)rt_nil_check(f_base_of_223(f_str_elem_218(F->t_988)))).kind == (((rt_int)4LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_conversion_994(P1034 tt_990, P1034 args_991, rt_int line_992, P1040 *t_993) {
  struct f_conversion_994fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_990 = tt_990;
F->args_991 = args_991;
F->line_992 = line_992;
F->t_993 = t_993;
F->t_993v = *F->t_993;
F->c_2702 = NULL;
F->at_2703 = NULL;
F->target_2704 = NULL;
F->target_2704 = f_resolve_subtype_268(F->tt_990, &F->c_2702);
F->a_2705 = rt_str_copy(f_gexpr_805(F->args_991, NULL, &F->at_2703));
F->t_993v = F->target_2704;
if ((((*(P1040)rt_nil_check(F->target_2704)).kind == (((rt_int)5LL))) && f_same_221(f_str_elem_218(F->target_2704), g_ty_ascii_1122))) {
F->r_2706 = NULL;
if (((*(P1040)rt_nil_check(F->at_2703)).kind == (((rt_int)1LL)))) {
F->r_2706 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2705), rt_str(")", 1)); b_; }));
} else if (((*(P1040)rt_nil_check(F->at_2703)).kind == (((rt_int)3LL)))) {
F->r_2706 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_str_of_float(", 18), F->a_2705), rt_str(", ", 2)), f_float_digits_996(F->args_991)), rt_str(")", 1)); b_; }));
} else if (((*(P1040)rt_nil_check(F->at_2703)).kind == (((rt_int)2LL)))) {
F->r_2706 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2705), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5)); b_; }));
} else if (((*(P1040)rt_nil_check(f_base_of_223(F->at_2703))).kind == (((rt_int)4LL)))) {
F->r_2706 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_enum_image(", 16), f_enum_names_998(f_base_of_223(F->at_2703))), rt_str(", ", 2)), F->a_2705), rt_str(")", 1)); b_; }));
} else if (((*(P1040)rt_nil_check(F->at_2703)).kind == (((rt_int)5LL)))) {
F->r_2706 = f_mk_3(&F->a_2705);
} else {
f_fail_23(F->line_992, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT converts BOOL, INT, FLOAT and ENUM values to strings", 57); b_; }));
}
if (((F->c_2702 != NULL) && ((*(P1036)rt_nil_check(F->c_2702)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_str_pad(", 13), (((P1027)rt_nil_check(F->r_2706))->all)), rt_str(", ", 2)), (((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_2702)).slen))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = (((P1027)rt_nil_check(F->r_2706))->all);
goto ret_;
} else if (((*(P1040)rt_nil_check(F->at_2703)).kind == (((rt_int)5LL)))) {
if (((*(P1040)rt_nil_check(F->target_2704)).kind == (((rt_int)1LL)))) {
F->result_ = f_checked_213(F->target_2704, F->c_2702, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2705), rt_str(")", 1)); b_; }));
goto ret_;
} else if (((*(P1040)rt_nil_check(F->target_2704)).kind == (((rt_int)3LL)))) {
F->result_ = f_checked_213(F->target_2704, F->c_2702, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_float_of_str(", 18), F->a_2705), rt_str(")", 1)); b_; }));
goto ret_;
} else if (((*(P1040)rt_nil_check(F->target_2704)).kind == (((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_bool_of_str(", 17), F->a_2705), rt_str(")", 1));
goto ret_;
} else if (((*(P1040)rt_nil_check(f_base_of_223(F->target_2704))).kind == (((rt_int)4LL)))) {
F->result_ = f_checked_213(F->target_2704, F->c_2702, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_enum_of_str(", 17), f_enum_names_998(f_base_of_223(F->target_2704))), rt_str(", ", 2)), f_itos_7(f_list_len_71((*(P1040)rt_nil_check(f_base_of_223(F->target_2704))).lits))), rt_str(", ", 2)), F->a_2705), rt_str(")", 1)); b_; }));
goto ret_;
}
} else if ((((*(P1040)rt_nil_check(F->target_2704)).kind == (((rt_int)3LL))) && ((*(P1040)rt_nil_check(F->at_2703)).kind == (((rt_int)1LL))))) {
F->result_ = f_checked_213(F->target_2704, F->c_2702, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2705), rt_str("))", 2)); b_; }));
goto ret_;
} else if (f_same_221(F->target_2704, F->at_2703)) {
F->result_ = f_checked_213(F->target_2704, F->c_2702, &F->a_2705);
goto ret_;
}
f_fail_23(F->line_992, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT does not convert between these types", 41); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_993) = F->t_993v;
  RT_FPOP();
  return F->result_;
}

static rstr f_float_digits_996(P1034 e_995) {
  struct f_float_digits_996fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_995 = e_995;
F->lv_2707 = NULL;
F->t_2708 = NULL;
F->c_2709 = NULL;
if ((((*(P1034)rt_nil_check(F->e_995)).kind == (((rt_int)8LL))) || ((*(P1034)rt_nil_check(F->e_995)).kind == (((rt_int)17LL))))) {
F->result_ = f_float_digits_996((*(P1034)rt_nil_check(F->e_995)).a);
goto ret_;
} else if (((*(P1034)rt_nil_check(F->e_995)).kind == (((rt_int)2LL)))) {
F->n_2711 = ((rt_int)0LL);
F->lead_2712 = 1;
{ rt_int lo2714 = ((rt_int)1LL), hi2715 = ((rt_int)(((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_995)).name))->all)).len));
for (rt_int it2716 = lo2714; it2716 <= hi2715; it2716++) {
F->i_2713 = it2716;
if (((rt_str_get((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_995)).name))->all), F->i_2713) == 69) || (rt_str_get((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_995)).name))->all), F->i_2713) == 101))) {
F->result_ = f_itos_7(F->n_2711);
goto ret_;
} else if ((f_is_digit_11(rt_str_get((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_995)).name))->all), F->i_2713)) && (!(F->lead_2712 && (rt_str_get((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_995)).name))->all), F->i_2713) == 48))))) {
F->n_2711 = rt_add(F->n_2711, ((rt_int)1LL));
F->lead_2712 = 0;
} else if ((f_is_digit_11(rt_str_get((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->e_995)).name))->all), F->i_2713)) && (!F->lead_2712))) {
F->n_2711 = rt_add(F->n_2711, ((rt_int)1LL));
}
}
}
F->result_ = f_itos_7(F->n_2711);
goto ret_;
} else if (f_is_lvalue_768(F->e_995)) {
F->saved_2717 = NULL;
F->saved_2717 = g_code_1088;
g_code_1088 = f_new_buffer_24();
f_lvalue_774(F->e_995, &F->lv_2707, &F->t_2708, &F->c_2709, &F->ro_2710);
g_code_1088 = F->saved_2717;
if (((F->c_2709 != NULL) && ((*(P1036)rt_nil_check(F->c_2709)).prec != NULL))) {
F->result_ = (((P1027)rt_nil_check((*(P1036)rt_nil_check(F->c_2709)).prec))->all);
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

static rstr f_enum_names_998(P1040 t_997) {
  struct f_enum_names_998fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_997 = t_997;
F->l_2718 = NULL;
F->l_2718 = (*(P1040)rt_nil_check(F->t_997)).lits;
F->r_2719 = NULL;
F->r_2719 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1040)rt_nil_check(F->t_997)).cname != NULL)) {
F->result_ = (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_997)).cname))->all);
goto ret_;
}
while ((F->l_2718 != NULL)) {
if ((((rt_int)(((((P1027)rt_nil_check(F->r_2719))->all)).len)) > ((rt_int)0LL))) {
F->r_2719 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1027)rt_nil_check(F->r_2719))->all), rt_str(", ", 2)); b_; }));
}
F->r_2719 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->r_2719))->all), f_q_18()), (((P1027)rt_nil_check((*(P1034)rt_nil_check(F->l_2718)).name))->all)), f_q_18()); b_; }));
F->l_2718 = (*(P1034)rt_nil_check(F->l_2718)).next;
}
(*(P1040)rt_nil_check(F->t_997)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("en_", 3); b_; })); b_; }));
f_put_27(g_out_globals_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static const char *const ", 25), (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_997)).cname))->all)), rt_str("[] = {", 6)), (((P1027)rt_nil_check(F->r_2719))->all)), rt_str("};", 2)); b_; }));
F->result_ = (((P1027)rt_nil_check((*(P1040)rt_nil_check(F->t_997)).cname))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_explicit_rep_1000(P1034 e_999) {
  struct f_explicit_rep_1000fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_999 = e_999;
F->bt_2720 = NULL;
if ((((*(P1034)rt_nil_check(F->e_999)).kind != (((rt_int)11LL))) && (!(((*(P1034)rt_nil_check(F->e_999)).kind == (((rt_int)10LL))) && f_is_lvalue_768(F->e_999))))) {
F->result_ = 0;
goto ret_;
}
F->bt_2720 = f_peek_type_824((*(P1034)rt_nil_check(F->e_999)).a);
while ((((F->bt_2720 != NULL) && ((*(P1040)rt_nil_check(F->bt_2720)).kind == (((rt_int)8LL)))) && ((*(P1040)rt_nil_check(F->bt_2720)).repn == NULL))) {
f_finish_ptr_480(F->bt_2720);
F->bt_2720 = (*(P1040)rt_nil_check(F->bt_2720)).target;
}
if (((F->bt_2720 != NULL) && ((*(P1040)rt_nil_check(F->bt_2720)).repn != NULL))) {
F->result_ = 1;
goto ret_;
}
F->result_ = f_explicit_rep_1000((*(P1034)rt_nil_check(F->e_999)).a);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_actual_bounds_1004(P1040 ft_1001, P1040 t_1002, P1036 c_1003) {
  struct f_actual_bounds_1004fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_1001 = ft_1001;
F->t_1002 = t_1002;
F->c_1003 = c_1003;
if ((!f_scalar_kind_186(F->ft_1001))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_198(F->t_1002, F->c_1003)), rt_str(", ", 2)), f_sub_hi_201(F->t_1002, F->c_1003));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_1011(rstr *name_1005, P1034 tt_1006, P1034 args_1007, rt_int line_1008, int is_stmt_1009, P1040 *t_1010) {
  struct f_builtin_1011fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_1005 = name_1005;
F->tt_1006 = tt_1006;
F->args_1007 = args_1007;
F->line_1008 = line_1008;
F->is_stmt_1009 = is_stmt_1009;
F->t_1010 = t_1010;
F->t_1010v = *F->t_1010;
F->at_2721 = NULL;
F->n_2722 = f_list_len_71(F->args_1007);
F->t_1010v = g_ty_void_1124;
if (((rt_str_eq((*F->name_1005), rt_str("POS", 3)) || rt_str_eq((*F->name_1005), rt_str("SUCC", 4))) || rt_str_eq((*F->name_1005), rt_str("PRED", 4)))) {
F->a_2723 = rt_str_copy(f_gexpr_805(F->args_1007, NULL, &F->at_2721));
if (rt_str_eq((*F->name_1005), rt_str("POS", 3))) {
if (((*(P1040)rt_nil_check(f_base_of_223(F->at_2721))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_1008, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_1010v = g_ty_int_1119;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2723), rt_str(") + 1)", 6));
goto ret_;
}
F->t_1010v = F->at_2721;
if (((*(P1040)rt_nil_check(F->at_2721)).kind == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_1005), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2723), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2723), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_1005), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2723), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_71((*(P1040)rt_nil_check(f_base_of_223(F->at_2721))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2723), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_71((*(P1040)rt_nil_check(f_base_of_223(F->at_2721))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("FLOOR", 5))) {
F->a_2724 = rt_str_copy(f_gexpr_805(F->args_1007, g_ty_float_1121, &F->at_2721));
f_check_type_232(F->at_2721, g_ty_float_1121, F->line_1008);
F->t_1010v = g_ty_int_1119;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_floor(", 11), F->a_2724), rt_str(")", 1));
goto ret_;
} else if ((((rt_str_eq((*F->name_1005), rt_str("ACTP", 4)) || rt_str_eq((*F->name_1005), rt_str("RADIX", 5))) || rt_str_eq((*F->name_1005), rt_str("EMIN", 4))) || rt_str_eq((*F->name_1005), rt_str("EMAX", 4)))) {
F->a_2725 = rt_str_copy(f_gexpr_805(F->args_1007, g_ty_float_1121, &F->at_2721));
f_check_type_232(F->at_2721, g_ty_float_1121, F->line_1008);
F->t_1010v = g_ty_int_1119;
if (rt_str_eq((*F->name_1005), rt_str("ACTP", 4))) {
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("RADIX", 5))) {
F->result_ = rt_str("((rt_int)2)", 11);
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("EMIN", 4))) {
F->result_ = rt_str("((rt_int)-1021)", 15);
goto ret_;
}
F->result_ = rt_str("((rt_int)1024)", 14);
goto ret_;
} else if (((((rt_str_eq((*F->name_1005), rt_str("SQRT", 4)) || rt_str_eq((*F->name_1005), rt_str("SIN", 3))) || rt_str_eq((*F->name_1005), rt_str("COS", 3))) || rt_str_eq((*F->name_1005), rt_str("EXP", 3))) || rt_str_eq((*F->name_1005), rt_str("LN", 2)))) {
F->a_2726 = rt_str_copy(f_gexpr_805(F->args_1007, g_ty_float_1121, &F->at_2721));
F->t_1010v = g_ty_float_1121;
if (rt_str_eq((*F->name_1005), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2726), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_1005)), rt_str("(", 1)), F->a_2726), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("IFLOAT", 6))) {
F->a_2727 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->args_1007)).next, g_ty_int_1119, &F->at_2721));
F->t_1010v = g_ty_float_1121;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2727), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("IFIX", 4))) {
F->a_2728 = rt_str_copy(f_gexpr_805(F->args_1007, g_ty_float_1121, &F->at_2721));
F->t_1010v = g_ty_int_1119;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2728), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("FORMAT", 6))) {
F->a_2729 = rt_str_copy(f_gexpr_805(F->args_1007, g_ty_float_1121, &F->at_2721));
F->n1_2730 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->args_1007)).next, g_ty_int_1119, &F->at_2721));
F->m1_2731 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_1007)).next)).next, g_ty_int_1119, &F->at_2721));
F->t_1010v = g_ty_string_1123;
if ((F->n_2722 == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_format_e(", 14), F->a_2729), rt_str(", ", 2)), F->n1_2730), rt_str(", ", 2)), F->m1_2731), rt_str(", ", 2)), f_gexpr_805((*(P1034)rt_nil_check((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_1007)).next)).next)).next, g_ty_int_1119, &F->at_2721)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_format(", 12), F->a_2729), rt_str(", ", 2)), F->n1_2730), rt_str(", ", 2)), F->m1_2731), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("ABS", 3))) {
F->a_2732 = rt_str_copy(f_gexpr_805(F->args_1007, NULL, &F->at_2721));
F->t_1010v = F->at_2721;
if (((*(P1040)rt_nil_check(F->at_2721)).kind == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2732), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2732), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("CNVT", 4))) {
if ((F->tt_1006 == NULL)) {
f_fail_23(F->line_1008, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
F->result_ = f_conversion_994(F->tt_1006, F->args_1007, F->line_1008, &F->t_1010v);
goto ret_;
} else if ((rt_str_eq((*F->name_1005), rt_str("WRITELN", 7)) && (F->n_2722 == ((rt_int)2LL)))) {
F->f_2733 = rt_str_copy(f_file_ref_987(F->args_1007, 1, F->line_1008));
F->a_2734 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->args_1007)).next, g_ty_string_1123, &F->at_2721));
f_check_type_232(F->at_2721, g_ty_string_1123, F->line_1008);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fwriteln(", 14), F->f_2733), rt_str(", ", 2)), F->a_2734), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("WRITELN", 7))) {
if ((F->n_2722 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->a_2735 = rt_str_copy(f_gexpr_805(F->args_1007, g_ty_string_1123, &F->at_2721));
f_check_type_232(F->at_2721, g_ty_string_1123, F->line_1008);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2735), rt_str(")", 1));
goto ret_;
}
} else if ((rt_str_eq((*F->name_1005), rt_str("WRITE", 5)) || rt_str_eq((*F->name_1005), rt_str("READ", 4)))) {
F->ft_2736 = NULL;
F->f_2737 = rt_str_copy(f_file_ref_987(F->args_1007, 0, F->line_1008));
F->ft_2736 = f_peek_type_824(F->args_1007);
if (rt_str_eq((*F->name_1005), rt_str("READ", 4))) {
F->lv_2738 = NULL;
F->lc_2739 = NULL;
f_lvalue_774((*(P1034)rt_nil_check(F->args_1007)).next, &F->lv_2738, &F->at_2721, &F->lc_2739, &F->ro_2740);
if (F->ro_2740) {
f_fail_23(F->line_1008, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READ needs a variable", 21); b_; }));
}
f_check_type_232(F->at_2721, f_str_elem_218(F->ft_2736), F->line_1008);
if (f_text_file_989(F->ft_2736)) {
F->result_ = f_assign_code_416(&(((P1027)rt_nil_check(F->lv_2738))->all), F->at_2721, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fgetc(", 11), F->f_2737), rt_str(")", 1)); b_; }), F->lc_2739);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fread(", 11), F->f_2737), rt_str(", &", 3)), (((P1027)rt_nil_check(F->lv_2738))->all)), rt_str(")", 1));
goto ret_;
}
{
F->a_2741 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->args_1007)).next, f_str_elem_218(F->ft_2736), &F->at_2721));
if ((f_text_file_989(F->ft_2736) && ((*(P1040)rt_nil_check(F->at_2721)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fputs(", 11), F->f_2737), rt_str(", ", 2)), F->a_2741), rt_str(")", 1));
goto ret_;
}
f_check_type_232(F->at_2721, f_str_elem_218(F->ft_2736), F->line_1008);
if (f_text_file_989(F->ft_2736)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fputc(", 11), F->f_2737), rt_str(", ", 2)), F->a_2741), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->at_2721)), rt_str(" w_ = ", 6)), F->a_2741), rt_str("; rt_r_fwrite(", 14)), F->f_2737), rt_str(", &w_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_1005), rt_str("READLN", 6)) && (F->n_2722 == ((rt_int)2LL)))) {
F->lv_2742 = NULL;
F->lc_2743 = NULL;
F->f_2745 = rt_str_copy(f_file_ref_987(F->args_1007, 1, F->line_1008));
f_lvalue_774((*(P1034)rt_nil_check(F->args_1007)).next, &F->lv_2742, &F->at_2721, &F->lc_2743, &F->ro_2744);
f_check_type_232(F->at_2721, g_ty_string_1123, F->line_1008);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_freadln(", 13), F->f_2745), rt_str(", &", 3)), (((P1027)rt_nil_check(F->lv_2742))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("READLN", 6))) {
F->lv_2746 = NULL;
F->lc_2747 = NULL;
f_lvalue_774(F->args_1007, &F->lv_2746, &F->at_2721, &F->lc_2747, &F->ro_2748);
f_check_type_232(F->at_2721, g_ty_string_1123, F->line_1008);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_readln(&", 13), (((P1027)rt_nil_check(F->lv_2746))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1005), rt_str("SIZELN", 6)) && (F->n_2722 == ((rt_int)1LL)))) {
F->t_1010v = g_ty_int_1119;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fsizeln(", 13), f_file_ref_987(F->args_1007, 1, F->line_1008)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("SIZELN", 6))) {
F->t_1010v = g_ty_int_1119;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if ((rt_str_eq((*F->name_1005), rt_str("EOF", 3)) && (F->n_2722 == ((rt_int)1LL)))) {
F->t_1010v = g_ty_bool_1120;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_feof(", 10), f_file_ref_987(F->args_1007, 0, F->line_1008)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("EOF", 3))) {
F->t_1010v = g_ty_bool_1120;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("SYS_IN", 6))) {
F->t_1010v = g_ty_text_file_1133;
F->result_ = rt_str("rt_r_sys_in()", 13);
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("SYS_OUT", 7))) {
F->t_1010v = g_ty_text_file_1133;
F->result_ = rt_str("rt_r_sys_out()", 14);
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("OPEN", 4))) {
F->f_2749 = rt_str_copy(f_file_ref_987(F->args_1007, 0, F->line_1008));
F->nm_2750 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->args_1007)).next, g_ty_string_1123, &F->at_2721));
F->st_2751 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_1007)).next)).next, g_file_state_type_1134, &F->at_2721));
f_check_type_232(F->at_2721, g_file_state_type_1134, F->line_1008);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_open(", 10), F->f_2749), rt_str(", ", 2)), F->nm_2750), rt_str(", ", 2)), F->st_2751), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("CLOSE", 5))) {
F->f_2752 = rt_str_copy(f_file_ref_987(F->args_1007, 0, F->line_1008));
F->d_2753 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->args_1007)).next, g_file_disp_type_1135, &F->at_2721));
f_check_type_232(F->at_2721, g_file_disp_type_1135, F->line_1008);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_close(", 11), F->f_2752), rt_str(", ", 2)), F->d_2753), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1005), rt_str("SIZE", 4)) || rt_str_eq((*F->name_1005), rt_str("POSITION", 8)))) {
F->t_1010v = g_ty_int_1119;
if (rt_str_eq((*F->name_1005), rt_str("SIZE", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fsize(", 11), f_file_ref_987(F->args_1007, 0, F->line_1008)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fpos(", 10), f_file_ref_987(F->args_1007, 0, F->line_1008)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("SET_POSITION", 12))) {
F->f_2754 = rt_str_copy(f_file_ref_987(F->args_1007, 0, F->line_1008));
F->v_2755 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->args_1007)).next, g_ty_int_1119, &F->at_2721));
f_check_type_232(F->at_2721, g_ty_int_1119, F->line_1008);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fsetpos(", 13), F->f_2754), rt_str(", ", 2)), F->v_2755), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("FILE_RENAME", 11))) {
F->a_2756 = rt_str_copy(f_gexpr_805(F->args_1007, g_ty_string_1123, &F->at_2721));
F->b_2757 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->args_1007)).next, g_ty_string_1123, &F->at_2721));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_rename(", 12), F->a_2756), rt_str(", ", 2)), F->b_2757), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1005), rt_str("SEND", 4)) || rt_str_eq((*F->name_1005), rt_str("RECEIVE", 7)))) {
F->lv_2758 = NULL;
F->dv_2759 = NULL;
F->lc_2760 = NULL;
F->mt_2762 = NULL;
F->dt_2763 = NULL;
f_lvalue_774(F->args_1007, &F->lv_2758, &F->mt_2762, &F->lc_2760, &F->ro_2761);
if (((*(P1040)rt_nil_check(F->mt_2762)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_1008, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_1005), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_1005), rt_str("RECEIVE", 7))) {
f_lvalue_774((*(P1034)rt_nil_check(F->args_1007)).next, &F->dv_2759, &F->dt_2763, &F->lc_2760, &F->ro_2761);
f_check_type_232(F->dt_2763, (*(P1040)rt_nil_check(F->mt_2762)).elem, F->line_1008);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P1027)rt_nil_check(F->lv_2758))->all)), rt_str(", &", 3)), (((P1027)rt_nil_check(F->dv_2759))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2764 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->args_1007)).next, (*(P1040)rt_nil_check(F->mt_2762)).elem, &F->at_2721));
f_check_type_232(F->at_2721, (*(P1040)rt_nil_check(F->mt_2762)).elem, F->line_1008);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1040)rt_nil_check(F->mt_2762)).elem)), rt_str(" m_ = ", 6)), F->v_2764), rt_str("; rt_send(", 10)), (((P1027)rt_nil_check(F->lv_2758))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_1005), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_1005), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2765 = NULL;
F->lc_2766 = NULL;
F->mt_2768 = NULL;
f_lvalue_774(F->args_1007, &F->lv_2765, &F->mt_2768, &F->lc_2766, &F->ro_2767);
if (((*(P1040)rt_nil_check(F->mt_2768)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_1008, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_1005), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_1010v = g_ty_int_1119;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_1005))), rt_str("(", 1)), (((P1027)rt_nil_check(F->lv_2765))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1005), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_1005), rt_str("COND_RECEIVE", 12)))) {
F->lv_2769 = NULL;
F->dv_2770 = NULL;
F->bv_2771 = NULL;
F->lc_2772 = NULL;
F->mt_2774 = NULL;
F->dt_2775 = NULL;
F->bt_2776 = NULL;
f_lvalue_774(F->args_1007, &F->lv_2769, &F->mt_2774, &F->lc_2772, &F->ro_2773);
if (((*(P1040)rt_nil_check(F->mt_2774)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_1008, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_1005), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_774((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_1007)).next)).next, &F->bv_2771, &F->bt_2776, &F->lc_2772, &F->ro_2773);
f_check_type_232(F->bt_2776, g_ty_bool_1120, F->line_1008);
if (rt_str_eq((*F->name_1005), rt_str("COND_RECEIVE", 12))) {
f_lvalue_774((*(P1034)rt_nil_check(F->args_1007)).next, &F->dv_2770, &F->dt_2775, &F->lc_2772, &F->ro_2773);
f_check_type_232(F->dt_2775, (*(P1040)rt_nil_check(F->mt_2774)).elem, F->line_1008);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->bv_2771))->all), rt_str(" = rt_cond_receive(", 19)), (((P1027)rt_nil_check(F->lv_2769))->all)), rt_str(", &", 3)), (((P1027)rt_nil_check(F->dv_2770))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2777 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->args_1007)).next, (*(P1040)rt_nil_check(F->mt_2774)).elem, &F->at_2721));
f_check_type_232(F->at_2721, (*(P1040)rt_nil_check(F->mt_2774)).elem, F->line_1008);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1040)rt_nil_check(F->mt_2774)).elem)), rt_str(" m_ = ", 6)), F->v_2777), rt_str("; ", 2)), (((P1027)rt_nil_check(F->bv_2771))->all)), rt_str(" = rt_cond_send(", 16)), (((P1027)rt_nil_check(F->lv_2769))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_1005), rt_str("PRIORITY", 8))) {
F->t_1010v = g_ty_int_1119;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_656(F->args_1007)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("SET_PRIORITY", 12))) {
F->v_2778 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->args_1007)).next, g_ty_int_1119, &F->at_2721));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_656(F->args_1007)), rt_str(", ", 2)), F->v_2778), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_656(F->args_1007)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("ACTIVE", 6))) {
F->t_1010v = g_ty_bool_1120;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_656(F->args_1007)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("DELAY", 5))) {
F->v_2779 = rt_str_copy(f_gexpr_805(F->args_1007, g_ty_int_1119, &F->at_2721));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2779), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1005), rt_str("DELAY_UNTIL", 11)) && (F->n_2722 == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_delay_act(", 15), f_act_delay_args_972(F->args_1007)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("DELAY_UNTIL", 11))) {
F->v_2780 = rt_str_copy(f_gexpr_805(F->args_1007, g_ty_int_1119, &F->at_2721));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2780), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_656(F->args_1007)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1005), rt_str("TIME", 4)) && (F->n_2722 == ((rt_int)1LL)))) {
F->t_1010v = g_ty_int_1119;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_act_time(", 14), f_act_ref_656(F->args_1007)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("TIME", 4))) {
F->t_1010v = g_ty_int_1119;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_1005), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_1005), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_1005), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_1005), rt_str("HOURS", 5)))) {
F->t_1010v = g_ty_int_1119;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_1005));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("HALT", 4))) {
F->a_2781 = rt_str_copy(f_gexpr_805(F->args_1007, g_ty_int_1119, &F->at_2721));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2781), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1005), rt_str("ME", 2)) && (F->tt_1006 != NULL))) {
F->result_ = f_me_high_944(F->tt_1006, F->line_1008, &F->t_1010v);
goto ret_;
} else if ((rt_str_eq((*F->name_1005), rt_str("WAITING", 7)) || rt_str_eq((*F->name_1005), rt_str("SUSPENDED", 9)))) {
F->t_1010v = g_ty_bool_1120;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_1005))), rt_str("(", 1)), f_act_ref_656(F->args_1007)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_1005), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_1005), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_1005), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_1005), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_1005), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_1005), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_1005))), rt_str("(", 1)), f_act_ref_656(F->args_1007)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("TASK_START", 10))) {
if ((F->n_2722 != ((rt_int)2LL))) {
f_fail_23(F->line_1008, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_656(F->args_1007)), rt_str(", ", 2)), f_act_ref_656((*(P1034)rt_nil_check(F->args_1007)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_1005), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_1005), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_1005), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_1005), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_1005), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_1005), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((F->n_2722 != ((rt_int)0LL))) {
f_fail_23(F->line_1008, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_1005), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_1005))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_949(F->args_1007, &(*F->name_1005))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1005), rt_str("UNLOCK", 6)) && (f_peek_type_824(F->args_1007) != g_ty_latch_1128))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_unlock(", 12), f_lock_ref_949(F->args_1007, &(*F->name_1005))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_949(F->args_1007, &(*F->name_1005))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("COND_LOCK", 9))) {
F->bv_2782 = NULL;
F->bc_2783 = NULL;
F->bt_2785 = NULL;
F->l_2786 = rt_str_copy(f_lock_ref_949(F->args_1007, &(*F->name_1005)));
f_lvalue_774((*(P1034)rt_nil_check(F->args_1007)).next, &F->bv_2782, &F->bt_2785, &F->bc_2783, &F->ro_2784);
f_check_type_232(F->bt_2785, g_ty_bool_1120, F->line_1008);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1027)rt_nil_check(F->bv_2782))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2786), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("EXCESS_LOCKS", 12))) {
F->t_1010v = g_ty_int_1119;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_949(F->args_1007, &(*F->name_1005))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("OWNER", 5))) {
F->t_1010v = g_ty_act_1129;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_owner(", 11), f_lock_ref_949(F->args_1007, &(*F->name_1005))), rt_str(")", 1));
goto ret_;
} else if (((((((((rt_str_eq((*F->name_1005), rt_str("SEND_REQUEST", 12)) || rt_str_eq((*F->name_1005), rt_str("SEND_TEST", 9))) || rt_str_eq((*F->name_1005), rt_str("SEND_COMPLETE", 13))) || rt_str_eq((*F->name_1005), rt_str("SEND_REVOKE", 11))) || rt_str_eq((*F->name_1005), rt_str("RECEIVE_REQUEST", 15))) || rt_str_eq((*F->name_1005), rt_str("RECEIVE_TEST", 12))) || rt_str_eq((*F->name_1005), rt_str("RECEIVE_COMPLETE", 16))) || rt_str_eq((*F->name_1005), rt_str("RECEIVE_REVOKE", 14))) && (F->n_2722 == ((rt_int)3LL)))) {
F->result_ = f_mailbox_low_980(&(*F->name_1005), F->args_1007, F->line_1008, &F->t_1010v);
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("FREE", 4))) {
F->pv_2787 = NULL;
F->pc_2788 = NULL;
F->pt_2790 = NULL;
f_lvalue_774(F->args_1007, &F->pv_2787, &F->pt_2790, &F->pc_2788, &F->ro_2789);
if ((((*(P1040)rt_nil_check(F->pt_2790)).kind != (((rt_int)8LL))) || F->ro_2789)) {
f_fail_23(F->line_1008, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_1099 = 1;
f_finish_ptr_480(F->pt_2790);
if ((f_suppressed_517(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; })) || f_unchecked_free_342(F->pt_2790))) {
if (f_needs_fin_351((*(P1040)rt_nil_check(F->pt_2790)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P1027)rt_nil_check(F->pv_2787))->all)), rt_str(") { ", 4)), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_763(F->pt_2790, &(((P1027)rt_nil_check(F->pv_2787))->all)); b_; }), (*(P1040)rt_nil_check(F->pt_2790)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P1027)rt_nil_check(F->pv_2787))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P1027)rt_nil_check(F->pv_2787))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_351((*(P1040)rt_nil_check(F->pt_2790)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P1027)rt_nil_check(F->pv_2787))->all)), rt_str("); if (", 7)), (((P1027)rt_nil_check(F->pv_2787))->all)), rt_str(") { ", 4)), f_fin_code_354(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_763(F->pt_2790, &(((P1027)rt_nil_check(F->pv_2787))->all)); b_; }), (*(P1040)rt_nil_check(F->pt_2790)).target)), rt_str(" } rt_free((void **)&", 21)), (((P1027)rt_nil_check(F->pv_2787))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P1027)rt_nil_check(F->pv_2787))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1005), rt_str("LOW_IO", 6))) {
F->dev_2791 = rt_str_copy(f_gexpr_805(F->args_1007, g_ty_int_1119, &F->at_2721));
F->cmd_2792 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check(F->args_1007)).next, g_ty_int_1119, &F->at_2721));
if ((F->n_2722 == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_r_low_io(", 30), F->dev_2791), rt_str(", ", 2)), F->cmd_2792), rt_str(", &d_); })", 10));
goto ret_;
} else if ((!f_is_lvalue_768((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_1007)).next)).next))) {
F->v_2793 = rt_str_copy(f_gexpr_805((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_1007)).next)).next, g_ty_int_1119, &F->at_2721));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = ", 15), F->v_2793), rt_str("; rt_r_low_io(", 14)), F->dev_2791), rt_str(", ", 2)), F->cmd_2792), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2794 = NULL;
F->dc_2795 = NULL;
F->dt_2797 = NULL;
f_lvalue_774((*(P1034)rt_nil_check((*(P1034)rt_nil_check(F->args_1007)).next)).next, &F->dv_2794, &F->dt_2797, &F->dc_2795, &F->ro_2796);
f_check_type_232(F->dt_2797, g_ty_int_1119, F->line_1008);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_low_io(", 12), F->dev_2791), rt_str(", ", 2)), F->cmd_2792), rt_str(", &", 3)), (((P1027)rt_nil_check(F->dv_2794))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_1008, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_1005), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_1010) = F->t_1010v;
  RT_FPOP();
  return F->result_;
}

static P1034 f_with_library_1013(P1034 units_1012) {
  struct f_with_library_1013fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_1012 = units_1012;
F->r_2798 = NULL;
F->r_2798 = F->units_1012;
F->more_2799 = 1;
while (F->more_2799) {
F->missing_2800 = NULL;
F->missing_2800 = f_external_missing_1016(F->r_2798, F->r_2798);
F->more_2799 = 0;
if ((F->missing_2800 != NULL)) {
F->saved_2801 = g_tpos_1067;
if (f_read_library_60(&(((P1027)rt_nil_check(F->missing_2800))->all))) {
F->lib_2802 = NULL;
g_tpos_1067 = g_ntoks_before_library_1072;
F->lib_2802 = f_program_159();
g_tpos_1067 = F->saved_2801;
if ((F->lib_2802 != NULL)) {
F->t_2803 = NULL;
F->t_2803 = F->lib_2802;
while (((*(P1034)rt_nil_check(F->t_2803)).next != NULL)) {
F->t_2803 = (*(P1034)rt_nil_check(F->t_2803)).next;
}
(*(P1034)rt_nil_check(F->t_2803)).next = F->r_2798;
F->r_2798 = F->lib_2802;
F->more_2799 = 1;
}
}
}
g_ntoks_before_library_1072 = rt_add(g_ntoks_1066, ((rt_int)1LL));
}
F->result_ = F->r_2798;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1027 f_external_missing_1016(P1034 e_1014, P1034 units_1015) {
  struct f_external_missing_1016fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_1014 = e_1014;
F->units_1015 = units_1015;
F->x_2804 = NULL;
F->x_2804 = F->e_1014;
while ((F->x_2804 != NULL)) {
if ((((((*(P1034)rt_nil_check(F->x_2804)).kind == (((rt_int)48LL))) && ((*(P1034)rt_nil_check(F->x_2804)).flag >= ((rt_int)2LL))) && (!f_unit_named_1019(F->units_1015, &(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_2804)).name))->all)))) && (!f_tried_1021(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_2804)).name))->all))))) {
f_mark_tried_1023(&(((P1027)rt_nil_check((*(P1034)rt_nil_check(F->x_2804)).name))->all));
F->result_ = (*(P1034)rt_nil_check(F->x_2804)).name;
goto ret_;
}
if ((((*(P1034)rt_nil_check(F->x_2804)).a != NULL) && ((*(P1034)rt_nil_check(F->x_2804)).kind != (((rt_int)48LL))))) {
F->r_2805 = NULL;
F->r_2805 = f_external_missing_1016((*(P1034)rt_nil_check(F->x_2804)).a, F->units_1015);
if ((F->r_2805 != NULL)) {
F->result_ = F->r_2805;
goto ret_;
}
}
if ((((*(P1034)rt_nil_check(F->x_2804)).c != NULL) && ((*(P1034)rt_nil_check(F->x_2804)).kind != (((rt_int)48LL))))) {
F->r_2806 = NULL;
F->r_2806 = f_external_missing_1016((*(P1034)rt_nil_check(F->x_2804)).c, F->units_1015);
if ((F->r_2806 != NULL)) {
F->result_ = F->r_2806;
goto ret_;
}
}
F->x_2804 = (*(P1034)rt_nil_check(F->x_2804)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_unit_named_1019(P1034 units_1017, rstr *name_1018) {
  struct f_unit_named_1019fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_1017 = units_1017;
F->name_1018 = name_1018;
F->u_2807 = NULL;
F->u_2807 = F->units_1017;
while ((F->u_2807 != NULL)) {
if (rt_str_eq((((P1027)rt_nil_check((*(P1034)rt_nil_check(F->u_2807)).name))->all), (*F->name_1018))) {
F->result_ = 1;
goto ret_;
}
F->u_2807 = (*(P1034)rt_nil_check(F->u_2807)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tried_1021(rstr *name_1020) {
  struct f_tried_1021fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_1020 = name_1020;
F->result_ = f_seen_name_430(g_library_tried_1073, &(*F->name_1020));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_mark_tried_1023(rstr *name_1022) {
  struct f_mark_tried_1023fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_1022 = name_1022;
F->l_2808 = NULL;
{ R1039 *cell2809 = rt_alloc(sizeof(R1039));
(*cell2809).s = NULL;
(*cell2809).next = NULL;
F->l_2808 = cell2809;
}
(*(P1038)rt_nil_check(F->l_2808)).s = f_mk_3(&(*F->name_1022));
(*(P1038)rt_nil_check(F->l_2808)).next = g_library_tried_1073;
g_library_tried_1073 = F->l_2808;
ret_:
  RT_FPOP();
  return;
}

static void f_translate_1025(P1034 units_1024) {
  struct f_translate_1025fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_1024 = units_1024;
F->u_2810 = NULL;
F->u_2810 = F->units_1024;
while ((F->u_2810 != NULL)) {
if (f_has_pragmat_513((*(P1034)rt_nil_check(F->u_2810)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LIBRARY", 7); b_; }))) {
f_write_library_62(F->u_2810);
}
if ((((*(P1034)rt_nil_check(F->u_2810)).next == NULL) && (!f_has_pragmat_513((*(P1034)rt_nil_check(F->u_2810)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LIBRARY", 7); b_; }))))) {
{ R1062 *cell2811 = rt_alloc(sizeof(R1062));
(*cell2811).d = NULL;
(*cell2811).next = NULL;
g_caps_1093 = cell2811;
}
(*(P1061)rt_nil_check(g_caps_1093)).d = F->u_2810;
g_suppress_1108 = f_suppressing_515((*(P1034)rt_nil_check(F->u_2810)).prags);
(*(P1061)rt_nil_check(g_caps_1093)).depth = g_depth_1077;
f_declare_labels_591((*(P1034)rt_nil_check(F->u_2810)).c);
f_declare_body_435((*(P1034)rt_nil_check(F->u_2810)).c);
f_capsule_body_598((*(P1034)rt_nil_check(F->u_2810)).c);
f_await_tasks_587((*(P1034)rt_nil_check(F->u_2810)).c);
{
F->l_2812 = NULL;
F->l_2812 = F->units_1024;
while ((F->l_2812 != F->u_2810)) {
{
F->w_2813 = rt_str_copy(f_waits_of_583(F->l_2812));
if ((((rt_int)((F->w_2813).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2813);
}
}
F->l_2812 = (*(P1034)rt_nil_check(F->l_2812)).next;
}
}
f_close_fins_574(NULL);
if (g_uses_findyn_1101) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_445(F->u_2810);
f_elaborate_pending_449(f_lookup_decl_165(F->u_2810));
}
F->u_2810 = (*(P1034)rt_nil_check(F->u_2810)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_1026(void) {
  struct f_print_program_1026fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_431();
if (g_uses_free_1099) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_1081);
f_print_buffer_31(g_out_frames_1097);
f_print_buffer_31(g_out_helpers_1082);
f_print_buffer_31(g_out_protos_1083);
f_print_buffer_31(g_out_globals_1084);
f_print_buffer_31(g_out_funcs_1085);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_1098);
f_print_buffer_31(g_out_excs_1087);
f_print_buffer_31(g_out_init_1086);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R1064(R1064 *d, R1064 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R1064 cp_R1064(R1064 s) {
  R1064 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R1064(R1064 a, R1064 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R1062(R1062 *d, R1062 s) {
  d->d = s.d;
  d->next = s.next;
  d->depth = s.depth;
}
static R1062 cp_R1062(R1062 s) {
  R1062 d = s;
  d.d = s.d;
  d.next = s.next;
  d.depth = s.depth;
  return d;
}
static int eq_R1062(R1062 a, R1062 b) {
  return 1 && (a.d == b.d) && (a.next == b.next) && (a.depth == b.depth);
}
static void as_R1060(R1060 *d, R1060 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R1060 cp_R1060(R1060 s) {
  R1060 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R1060(R1060 a, R1060 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R1058(R1058 *d, R1058 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R1058 cp_R1058(R1058 s) {
  R1058 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R1058(R1058 a, R1058 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R1056(R1056 *d, R1056 s) {
  d->t = s.t;
  d->next = s.next;
}
static R1056 cp_R1056(R1056 s) {
  R1056 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R1056(R1056 a, R1056 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R1054(R1054 *d, R1054 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
  d->f = s.f;
}
static R1054 cp_R1054(R1054 s) {
  R1054 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  d.f = s.f;
  return d;
}
static int eq_R1054(R1054 a, R1054 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t) && (a.f == b.f);
}
static void as_R1052(R1052 *d, R1052 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R1052 cp_R1052(R1052 s) {
  R1052 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R1052(R1052 a, R1052 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A1050(A1050 *d, A1050 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A1050 cp_A1050(A1050 s) {
  A1050 d = s; d.p = rt_alloc(sizeof(P1044) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A1050(A1050 a, A1050 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R1047(R1047 *d, R1047 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R1047 cp_R1047(R1047 s) {
  R1047 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R1047(R1047 a, R1047 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R1045(R1045 *d, R1045 s) {
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
static R1045 cp_R1045(R1045 s) {
  R1045 d = s;
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
static int eq_R1045(R1045 a, R1045 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home) && (a.capn == b.capn) && (a.tbinds == b.tbinds) && (a.loc == b.loc) && (a.reqs_sym == b.reqs_sym) && (a.decl_line == b.decl_line) && (a.pending == b.pending);
}
static void as_R1043(R1043 *d, R1043 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R1043 cp_R1043(R1043 s) {
  R1043 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R1043(R1043 a, R1043 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R1041(R1041 *d, R1041 s) {
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
static R1041 cp_R1041(R1041 s) {
  R1041 d = s;
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
static int eq_R1041(R1041 a, R1041 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs) && (a.assignp == b.assignp) && (a.eqp == b.eqp) && (a.ltp == b.ltp) && (a.repn == b.repn);
}
static void as_R1039(R1039 *d, R1039 s) {
  d->s = s.s;
  d->next = s.next;
}
static R1039 cp_R1039(R1039 s) {
  R1039 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R1039(R1039 a, R1039 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R1037(R1037 *d, R1037 s) {
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
static R1037 cp_R1037(R1037 s) {
  R1037 d = s;
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
static int eq_R1037(R1037 a, R1037 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R1035(R1035 *d, R1035 s) {
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
static R1035 cp_R1035(R1035 s) {
  R1035 d = s;
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
static int eq_R1035(R1035 a, R1035 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.eline == b.eline) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A1033(A1033 *d, A1033 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A1033 cp_A1033(A1033 s) {
  A1033 d = s; d.p = rt_alloc(sizeof(P1029) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A1033(A1033 a, A1033 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R1030(R1030 *d, R1030 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R1030 cp_R1030(R1030 s) {
  R1030 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R1030(R1030 a, R1030 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_1065);
  RT_ROOT(g_ntoks_1066);
  RT_ROOT(g_tpos_1067);
  RT_ROOT(g_src_line_1068);
  RT_ROOT(g_pending_prag_1069);
  RT_ROOT(g_src_head_1070);
  RT_ROOT(g_src_tail_1071);
  RT_ROOT(g_ntoks_before_library_1072);
  RT_ROOT(g_library_tried_1073);
  RT_ROOT(g_table_1074);
  RT_ROOT(g_genv_1075);
  RT_ROOT(g_all_insts_1076);
  RT_ROOT(g_depth_1077);
  RT_ROOT(g_scope_stack_1078);
  RT_ROOT(g_all_types_1079);
  RT_ROOT(g_serial_1080);
  RT_ROOT(g_out_types_1081);
  RT_ROOT(g_out_helpers_1082);
  RT_ROOT(g_out_protos_1083);
  RT_ROOT(g_out_globals_1084);
  RT_ROOT(g_out_funcs_1085);
  RT_ROOT(g_out_init_1086);
  RT_ROOT(g_out_excs_1087);
  RT_ROOT(g_code_1088);
  RT_ROOT(g_fields_buf_1089);
  RT_ROOT(g_in_func_1090);
  RT_ROOT(g_cur_level_1091);
  RT_ROOT(g_fctx_1092);
  RT_ROOT(g_caps_1093);
  RT_ROOT(g_cap_waits_1094);
  RT_ROOT(g_psub_1095);
  RT_ROOT(g_st_field_1096);
  RT_ROOT(g_out_frames_1097);
  RT_ROOT(g_out_roots_1098);
  RT_ROOT(g_uses_free_1099);
  RT_ROOT(g_fins_1100);
  RT_ROOT(g_uses_findyn_1101);
  RT_ROOT(g_func_sym_1102);
  RT_ROOT(g_func_rc_1103);
  RT_ROOT(g_cap_ret_1104);
  RT_ROOT(g_cap_rflag_1105);
  RT_ROOT(g_ret_frames_1106);
  RT_ROOT(g_gdepth_1107);
  RT_ROOT(g_suppress_1108);
  RT_ROOT(g_cons_ctx_1109);
  RT_ROOT(g_mark_uninit_1110);
  RT_ROOT(g_skip_chk_1111);
  RT_ROOT(g_exits_1112);
  RT_ROOT(g_gotos_1113);
  RT_ROOT(g_frames_1114);
  RT_ROOT(g_handlers_1115);
  RT_ROOT(g_cleanups_1116);
  RT_ROOT(g_trial_1117);
  RT_ROOT(g_mcopies_1118);
  RT_ROOT(g_ty_int_1119);
  RT_ROOT(g_ty_bool_1120);
  RT_ROOT(g_ty_float_1121);
  RT_ROOT(g_ty_ascii_1122);
  RT_ROOT(g_ty_string_1123);
  RT_ROOT(g_ty_void_1124);
  RT_ROOT(g_ty_file_1125);
  RT_ROOT(g_ty_nil_1126);
  RT_ROOT(g_ty_lock_1127);
  RT_ROOT(g_ty_latch_1128);
  RT_ROOT(g_ty_act_1129);
  RT_ROOT(g_file_mode_type_1130);
  RT_ROOT(g_ty_send_st_1131);
  RT_ROOT(g_ty_receive_st_1132);
  RT_ROOT(g_ty_text_file_1133);
  RT_ROOT(g_file_state_type_1134);
  RT_ROOT(g_file_disp_type_1135);
  RT_ROOT(g_file_access_type_1136);
  RT_ROOT(g_no_cons_1137);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_1065 = NULL;
g_ntoks_1066 = ((rt_int)0LL);
g_tpos_1067 = ((rt_int)1LL);
g_src_line_1068 = ((rt_int)0LL);
g_pending_prag_1069 = NULL;
g_src_head_1070 = NULL;
g_src_tail_1071 = NULL;
g_ntoks_before_library_1072 = ((rt_int)0LL);
g_library_tried_1073 = NULL;
g_table_1074 = NULL;
g_genv_1075 = NULL;
g_all_insts_1076 = NULL;
g_depth_1077 = ((rt_int)0LL);
g_scope_stack_1078 = NULL;
g_all_types_1079 = NULL;
g_serial_1080 = ((rt_int)0LL);
g_out_types_1081 = NULL;
g_out_helpers_1082 = NULL;
g_out_protos_1083 = NULL;
g_out_globals_1084 = NULL;
g_out_funcs_1085 = NULL;
g_out_init_1086 = NULL;
g_out_excs_1087 = NULL;
g_code_1088 = NULL;
g_fields_buf_1089 = NULL;
g_in_func_1090 = 0;
g_cur_level_1091 = ((rt_int)0LL);
g_fctx_1092 = NULL;
g_caps_1093 = NULL;
g_cap_waits_1094 = NULL;
g_psub_1095 = NULL;
g_st_field_1096 = NULL;
g_out_frames_1097 = NULL;
g_out_roots_1098 = NULL;
g_uses_free_1099 = 0;
g_fins_1100 = NULL;
g_uses_findyn_1101 = 0;
g_func_sym_1102 = NULL;
g_func_rc_1103 = NULL;
g_cap_ret_1104 = NULL;
g_cap_rflag_1105 = NULL;
g_ret_frames_1106 = ((rt_int)0LL);
g_gdepth_1107 = ((rt_int)0LL);
g_suppress_1108 = NULL;
g_cons_ctx_1109 = NULL;
g_mark_uninit_1110 = 0;
g_skip_chk_1111 = 0;
g_exits_1112 = NULL;
g_gotos_1113 = NULL;
g_frames_1114 = ((rt_int)0LL);
g_handlers_1115 = NULL;
g_cleanups_1116 = NULL;
g_trial_1117 = ((rt_int)0LL);
g_mcopies_1118 = NULL;
g_ty_int_1119 = NULL;
g_ty_bool_1120 = NULL;
g_ty_float_1121 = NULL;
g_ty_ascii_1122 = NULL;
g_ty_string_1123 = NULL;
g_ty_void_1124 = NULL;
g_ty_file_1125 = NULL;
g_ty_nil_1126 = NULL;
g_ty_lock_1127 = NULL;
g_ty_latch_1128 = NULL;
g_ty_act_1129 = NULL;
g_file_mode_type_1130 = NULL;
g_ty_send_st_1131 = NULL;
g_ty_receive_st_1132 = NULL;
g_ty_text_file_1133 = NULL;
g_file_state_type_1134 = NULL;
g_file_disp_type_1135 = NULL;
g_file_access_type_1136 = NULL;
g_no_cons_1137 = NULL;
{ P1031 cell2814 = rt_alloc(sizeof *cell2814);
rt_int pv2815 = ((rt_int)1000000LL);
cell2814->p_n = pv2815;
cell2814->all.lo = ((rt_int)1LL); cell2814->all.hi = pv2815;
cell2814->all.lo2 = cell2814->all.hi2 = 1;
cell2814->all.p = rt_alloc(sizeof(P1029) * (size_t)(RT_CNT(cell2814->all)) + 1);
for (rt_int i2816 = 0; i2816 < (RT_CNT(cell2814->all)); i2816++) {
cell2814->all.p[i2816] = NULL;
}
g_toks_1065 = cell2814;
}
{ P1048 cell2817 = rt_alloc(sizeof *cell2817);
rt_int pv2818 = (((rt_int)4093LL));
cell2817->p_n = pv2818;
cell2817->all.lo = ((rt_int)0LL); cell2817->all.hi = pv2818;
cell2817->all.lo2 = cell2817->all.hi2 = 1;
cell2817->all.p = rt_alloc(sizeof(P1044) * (size_t)(RT_CNT(cell2817->all)) + 1);
for (rt_int i2819 = 0; i2819 < (RT_CNT(cell2817->all)); i2819++) {
cell2817->all.p[i2819] = NULL;
}
g_table_1074 = cell2817;
}
g_out_types_1081 = f_new_buffer_24();
g_out_helpers_1082 = f_new_buffer_24();
g_out_protos_1083 = f_new_buffer_24();
g_out_globals_1084 = f_new_buffer_24();
g_out_funcs_1085 = f_new_buffer_24();
g_out_init_1086 = f_new_buffer_24();
g_out_excs_1087 = f_new_buffer_24();
g_out_frames_1097 = f_new_buffer_24();
g_out_roots_1098 = f_new_buffer_24();
g_code_1088 = g_out_init_1086;
g_no_cons_1137 = f_new_cons_184();
g_ty_int_1119 = f_new_typ_183((((rt_int)1LL)));
g_ty_bool_1120 = f_new_typ_183((((rt_int)2LL)));
g_ty_float_1121 = f_new_typ_183((((rt_int)3LL)));
g_ty_string_1123 = f_new_typ_183((((rt_int)5LL)));
g_ty_void_1124 = f_new_typ_183((((rt_int)9LL)));
g_ty_file_1125 = f_new_typ_183((((rt_int)10LL)));
g_ty_nil_1126 = f_new_typ_183((((rt_int)11LL)));
g_ty_lock_1127 = f_new_typ_183((((rt_int)13LL)));
g_ty_latch_1128 = f_new_typ_183((((rt_int)13LL)));
g_ty_act_1129 = f_new_typ_183((((rt_int)14LL)));
{ rt_frame xf2820;
if (RT_TRY(xf2820)) {
f_init_ascii_259();
f_read_source_58();
g_ntoks_before_library_1072 = rt_add(g_ntoks_1066, ((rt_int)1LL));
f_translate_1025(f_with_library_1013(f_program_159()));
f_print_program_1026();
RT_POP(xf2820);
} else {
RT_POP(xf2820);
int x2821 = rt_xcur;
if (0 || x2821 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2821);
}
}
}
  rt_main_done();
  return 0;
}
