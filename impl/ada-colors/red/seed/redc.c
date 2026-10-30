#include "paleo.h"
#include <math.h>
typedef struct Pc1020 *P1019;
typedef struct R1022 R1022;
typedef struct R1022 *P1021;
struct R1022 {  rt_int kind; rt_int line; rt_int ival; P1019 s; P1019 prags;  };
typedef struct Pc1024 *P1023;
typedef struct A1025 A1025;
struct A1025 { rt_int lo, hi, lo2, hi2; P1021 *p; };
typedef struct R1027 R1027;
typedef struct R1027 *P1026;
struct R1027 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P1019 name; P1019 tag; P1019 prags; P1026 labels; rt_int eline; P1026 a; P1026 b; P1026 c; P1026 d; P1026 e; P1026 next;  };
typedef struct R1029 R1029;
typedef struct R1029 *P1028;
typedef struct R1031 R1031;
typedef struct R1031 *P1030;
struct R1031 {  P1019 s; P1030 next;  };
struct R1029 {  P1019 lo; P1019 hi; P1019 lo2; P1019 hi2; P1019 slen; rt_int mlo; rt_int mhi; int hasm; P1026 args; int dyn; rt_int lvl; P1019 prec; P1030 bnds;  };
typedef struct R1033 R1033;
typedef struct R1033 *P1032;
typedef struct R1035 R1035;
typedef struct R1035 *P1034;
struct R1035 {  P1019 name; P1032 t; P1028 c; P1026 st; P1034 next;  };
typedef struct R1037 R1037;
typedef struct R1037 *P1036;
typedef struct R1039 R1039;
typedef struct R1039 *P1038;
struct R1039 {  P1019 name; rt_int mode; P1032 t; P1028 c; P1019 cfield; P1038 next;  };
typedef struct Pc1041 *P1040;
typedef struct A1042 A1042;
struct A1042 { rt_int lo, hi, lo2, hi2; P1036 *p; };
typedef struct R1044 R1044;
typedef struct R1044 *P1043;
struct R1044 {  rt_int depth; P1026 imps; int all_imp; P1043 next;  };
typedef struct R1046 R1046;
typedef struct R1046 *P1045;
struct R1046 {  rt_int kind; rt_int i; P1019 s; P1032 t; double f;  };
struct R1037 {  rt_int kind; P1019 name; P1032 t; P1028 c; P1019 access; P1019 cname; int ro_flag; rt_int mvalue; int hasmv; P1026 st; P1026 decl; P1038 params; P1032 result; rt_int depth; rt_int level; int byref; P1036 members; P1036 mnext; P1026 binds; P1036 insts; P1040 env; P1036 chain; P1036 stack; P1036 owner; P1043 gctx; P1045 mv; P1030 reqs; int reqdone; P1026 home; P1026 capn; P1036 tbinds; P1019 loc; P1036 reqs_sym; rt_int decl_line; int pending;  };
typedef struct R1048 R1048;
typedef struct R1048 *P1047;
struct R1048 {  P1032 t; P1047 next;  };
struct R1033 {  rt_int kind; P1019 name; P1026 lits; P1032 elem; P1032 idx; P1032 idx2; P1028 elemcons; P1026 elemst; P1032 under; P1026 tparams; P1026 ocap; P1034 fields; P1032 target; P1026 decl; P1019 cname; int forward; int defined; int helpers; P1036 initp; P1036 finalp; P1036 tpsyms; P1036 gen; P1036 gbinds; P1032 next; rt_int ndim; P1047 idxs; P1036 assignp; P1036 eqp; P1036 ltp; P1026 repn;  };
typedef struct R1050 R1050;
typedef struct R1050 *P1049;
struct R1050 {  P1030 head; P1030 tail;  };
typedef struct R1052 R1052;
typedef struct R1052 *P1051;
struct R1052 {  P1019 match; P1019 label; rt_int depth; P1051 next;  };
typedef struct R1054 R1054;
typedef struct R1054 *P1053;
struct R1054 {  P1026 d; P1053 next; rt_int depth;  };
typedef struct R1056 R1056;
typedef struct R1056 *P1055;
struct R1056 {  P1026 d; P1019 w; P1055 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P1019 result_;
 P1019 t_1129;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_1132;
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
 rstr r_1133;
 rt_int i_1134;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_1138;
 rstr w_1139;
 rt_int i_1140;
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
 P1049 result_;
 P1049 b_1144;
};
struct f_put_27fr { int dummy;
 P1049 b_25;
 rstr *s_26;
 P1030 l_1146;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P1049 b_30;
 P1030 l_1148;
};
struct f_splice_34fr { int dummy;
 P1049 a_32;
 P1049 b_33;
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
 P1021 t_1150;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_1152;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_1153;
 rt_int k_1154;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_1158;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_1159;
 P1019 r_1160;
 int more_1161;
 rt_int k_1162;
 int go_1163;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_1164;
 rt_int k_1165;
 rstr p_1166;
 int ok_1167;
 int known_1168;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_1169;
 rt_int j_1170;
 rt_int n_1171;
 int c_1172;
 rstr w_1173;
 rt_int k_1174;
 rstr w_1178;
 rt_int k_1179;
 rstr two_1183;
};
struct f_read_source_58fr { int dummy;
 rstr line_1184;
 P1030 l_1185;
};
struct f_read_library_60fr { int dummy;
 rstr *name_59;
 int result_;
 rt_r_file * f_1187;
 int found_1188;
 rstr line_1191;
};
struct f_write_library_62fr { int dummy;
 P1026 u_61;
 rt_r_file * f_1192;
 P1030 l_1193;
 rt_int n_1194;
};
struct f_nn_65fr { int dummy;
 rt_int kind_63;
 rt_int line_64;
 P1026 result_;
 P1026 x_1195;
};
struct f_append_69fr { int dummy;
 P1026 *head_66;
 P1026 *tail_67;
 P1026 x_68;
};
struct f_list_len_71fr { int dummy;
 P1026 l_70;
 rt_int result_;
 rt_int n_1197;
 P1026 p_1198;
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
 P1019 result_;
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
 P1019 result_;
};
struct f_name_node_94fr { int dummy;
 P1026 result_;
 P1026 x_1199;
};
struct f_id_list_95fr { int dummy;
 P1026 result_;
 P1026 head_1200;
 P1026 tail_1201;
};
struct f_p_subtype_96fr { int dummy;
 P1026 result_;
 rt_int line_1202;
 P1026 x_1203;
 rstr w_1204;
 P1026 head_1205;
 P1026 tail_1206;
 P1026 head_1207;
 P1026 tail_1208;
 int more_1209;
 P1026 names_1210;
 P1026 st_1211;
 P1026 cmp_1212;
 P1026 head_1213;
 P1026 tail_1214;
 int more_1215;
 P1026 lit_1216;
};
struct f_constraint_list_97fr { int dummy;
 P1026 result_;
 P1026 head_1217;
 P1026 tail_1218;
 int more_1219;
 rt_int line_1220;
 P1026 lo_1221;
 P1026 r_1222;
};
struct f_actual_params_98fr { int dummy;
 P1026 result_;
 P1026 head_1223;
 P1026 tail_1224;
};
struct f_is_type_word_100fr { int dummy;
 rstr *w_99;
 int result_;
};
struct f_actual_tt_101fr { int dummy;
 P1026 result_;
 P1026 head_1225;
 P1026 tail_1226;
 int more_1227;
};
struct f_binop_106fr { int dummy;
 P1019 op_102;
 P1026 l_103;
 P1026 r_104;
 rt_int line_105;
 P1026 result_;
 P1026 x_1228;
};
struct f_expr_107fr { int dummy;
 P1026 result_;
 P1026 l_1229;
 P1019 op_1230;
 rt_int line_1231;
};
struct f_expr_and_108fr { int dummy;
 P1026 result_;
 P1026 l_1232;
 rt_int line_1233;
};
struct f_expr_not_109fr { int dummy;
 P1026 result_;
 P1026 x_1234;
};
struct f_is_rel_111fr { int dummy;
 rstr *s_110;
 int result_;
};
struct f_expr_rel_112fr { int dummy;
 P1026 result_;
 P1026 l_1235;
 P1019 op_1236;
 rt_int line_1237;
};
struct f_expr_add_113fr { int dummy;
 P1026 result_;
 P1026 l_1238;
 P1019 op_1239;
 rt_int line_1240;
};
struct f_expr_mul_114fr { int dummy;
 P1026 result_;
 P1026 l_1241;
 P1019 op_1242;
 rt_int line_1243;
};
struct f_expr_pow_115fr { int dummy;
 P1026 result_;
 P1026 l_1244;
 rt_int line_1245;
};
struct f_expr_prefix_116fr { int dummy;
 P1026 result_;
 P1026 x_1246;
};
struct f_postfix_117fr { int dummy;
 P1026 result_;
 P1026 p_1247;
 rt_int line_1248;
 P1026 x_1249;
 P1026 head_1250;
 P1026 tail_1251;
 int more_1252;
 P1026 lo_1253;
 P1026 r_1254;
 P1026 x_1255;
 P1026 x_1256;
 P1026 x_1257;
};
struct f_primary_118fr { int dummy;
 P1026 result_;
 rt_int line_1258;
 P1026 x_1259;
 rt_int k_1260;
 rstr w_1261;
 P1026 head_1262;
 P1026 tail_1263;
 int more_1264;
};
struct f_constructor_item_119fr { int dummy;
 P1026 result_;
 rt_int line_1265;
 P1026 it_1266;
 P1026 first_1267;
 P1026 keys_1268;
 P1026 ktail_1269;
 P1026 lab_1270;
 rt_int save_1271;
 P1026 more_1272;
 P1026 tail2_1273;
 int ok_1274;
 int go_1275;
 P1026 l2_1276;
};
struct f_at_body_end_120fr { int dummy;
 int result_;
};
struct f_body_121fr { int dummy;
 P1026 result_;
 P1026 head_1277;
 P1026 tail_1278;
 int stmts_1279;
 P1026 after_1280;
 P1026 x_1281;
};
struct f_body_element_122fr { int dummy;
 P1026 result_;
 P1026 x_1282;
 P1019 pr_1283;
 P1026 p_1284;
};
struct f_declaration_123fr { int dummy;
 P1026 result_;
 rt_int line_1285;
 P1026 head_1286;
 P1026 tail_1287;
 P1026 names_1288;
 P1026 x_1289;
};
struct f_object_decl_124fr { int dummy;
 P1026 result_;
 rt_int line_1290;
 int is_var_1291;
 P1026 names_1292;
 P1026 st_1293;
 P1026 init_1294;
 P1026 loc_1295;
 rt_int loc_kind_1296;
 P1026 head_1297;
 P1026 tail_1298;
 P1026 x_1299;
};
struct f_abbrev_decl_125fr { int dummy;
 P1026 result_;
 P1026 x_1300;
};
struct f_rep_spec_126fr { int dummy;
 P1026 result_;
};
struct f_rep_items_127fr { int dummy;
 P1026 result_;
 P1026 head_1301;
 P1026 tail_1302;
 int more_1303;
};
struct f_rep_word_129fr { int dummy;
 rt_int k_128;
 int result_;
 rstr w_1304;
};
struct f_rep_item_130fr { int dummy;
 P1026 result_;
 P1026 x_1305;
 P1026 head_1306;
 P1026 tail_1307;
 int more_1308;
 P1026 names_1309;
 P1026 items_1310;
 P1026 cmp_1311;
 P1026 head_1312;
 P1026 tail_1313;
 P1026 head_1314;
 P1026 tail_1315;
 int dummy_1316;
};
struct f_type_decl_131fr { int dummy;
 P1026 result_;
 rt_int line_1317;
 P1019 name_1318;
 P1026 params_1319;
 P1026 x_1320;
 P1026 tts_1321;
};
struct f_mode_of_133fr { int dummy;
 rstr *w_132;
 rt_int result_;
};
struct f_formal_params_134fr { int dummy;
 P1026 result_;
 P1026 head_1322;
 P1026 tail_1323;
 int more_1324;
 rt_int mode_1325;
 P1026 names_1326;
 P1026 ntail_1327;
 P1026 st_1328;
 P1026 p_1329;
};
struct f_imports_list_136fr { int dummy;
 P1026 owner_135;
 int result_;
 P1026 head_1330;
 P1026 tail_1331;
 int more_1332;
 int ro_1333;
 P1026 x_1334;
};
struct f_is_definable_138fr { int dummy;
 rstr *w_137;
 int result_;
};
struct f_definable_name_139fr { int dummy;
 P1019 result_;
 P1019 r_1335;
};
struct f_subprogram_decl_140fr { int dummy;
 P1026 result_;
 rt_int line_1336;
 P1026 x_1337;
 int is_abn_1338;
 int is_func_1339;
 int dummy_1340;
};
struct f_capsule_decl_141fr { int dummy;
 P1026 result_;
 P1026 x_1341;
 int dummy_1342;
 P1026 head_1343;
 P1026 tail_1344;
 int more_1345;
 P1026 n_1346;
};
struct f_formal_tt_142fr { int dummy;
 P1026 result_;
 P1026 head_1347;
 P1026 tail_1348;
 int more_1349;
};
struct f_generic_decl_143fr { int dummy;
 P1026 result_;
 P1026 x_1350;
 P1026 head_1351;
 P1026 tail_1352;
 int more_1353;
 P1026 names_1354;
 rt_int kind_1355;
 P1026 st_1356;
 P1026 items_1357;
 P1026 p_1358;
 P1026 nhead_1359;
 P1026 ntail_1360;
 P1026 it_1361;
};
struct f_type_list_144fr { int dummy;
 P1026 result_;
 P1026 head_1362;
 P1026 tail_1363;
 int more_1364;
 P1026 n_1365;
};
struct f_task_decl_145fr { int dummy;
 P1026 result_;
 P1026 x_1366;
 int dummy_1367;
};
struct f_expose_decl_146fr { int dummy;
 P1026 result_;
 P1026 x_1368;
 P1026 head_1369;
 P1026 tail_1370;
 int more_1371;
 P1026 n_1372;
 P1026 head_1373;
 P1026 tail_1374;
 int more_1375;
 P1026 n_1376;
 P1026 tgt_1377;
};
struct f_is_compound_kw_148fr { int dummy;
 rstr *w_147;
 int result_;
};
struct f_statement_149fr { int dummy;
 P1026 result_;
 P1026 labels_1378;
 P1026 ltail_1379;
 P1019 match_1380;
 P1026 s_1381;
};
struct f_unlabeled_statement_150fr { int dummy;
 P1026 result_;
 rt_int line_1382;
 P1026 x_1383;
 P1026 head_1384;
 P1026 tail_1385;
 P1026 invs_1386;
 P1026 itail_1387;
 int more_1388;
 P1026 target_1389;
};
struct f_arm_154fr { int dummy;
 P1026 cond_151;
 P1026 b_152;
 rt_int line_153;
 P1026 result_;
 P1026 x_1390;
};
struct f_if_stmt_155fr { int dummy;
 P1026 result_;
 P1026 x_1391;
 P1026 head_1392;
 P1026 tail_1393;
 P1026 cond_1394;
 int go_1395;
};
struct f_case_stmt_156fr { int dummy;
 P1026 result_;
 P1026 x_1396;
 P1026 head_1397;
 P1026 tail_1398;
 P1026 labs_1399;
 P1026 ltail_1400;
 int more_1401;
 P1026 l_1402;
};
struct f_repeat_stmt_157fr { int dummy;
 P1026 result_;
 P1026 x_1403;
};
struct f_guard_stmt_158fr { int dummy;
 P1026 result_;
 P1026 x_1404;
 P1026 head_1405;
 P1026 tail_1406;
 P1026 h_1407;
};
struct f_program_159fr { int dummy;
 P1026 result_;
 P1026 head_1408;
 P1026 tail_1409;
 P1019 pr_1410;
 P1026 u_1411;
};
struct f_hash_161fr { int dummy;
 rstr *s_160;
 rt_int result_;
 rt_int h_1412;
 rt_int i_1413;
};
struct f_lookup_163fr { int dummy;
 rstr *name_162;
 P1036 result_;
 P1036 y_1417;
};
struct f_lookup_decl_165fr { int dummy;
 P1026 d_164;
 P1036 result_;
 P1036 y_1418;
};
struct f_define_168fr { int dummy;
 P1036 y_166;
 rt_int line_167;
 rt_int h_1419;
 P1036 z_1420;
};
struct f_overloadable_170fr { int dummy;
 P1036 y_169;
 int result_;
};
struct f_same_tt_173fr { int dummy;
 P1026 a_171;
 P1026 b_172;
 int result_;
 P1026 x_1421;
 P1026 y_1422;
};
struct f_same_signature_176fr { int dummy;
 P1038 a_174;
 P1038 b_175;
 int result_;
 P1038 x_1423;
 P1038 y_1424;
};
struct f_open_scope_177fr { int dummy;
};
struct f_close_scope_178fr { int dummy;
};
struct f_new_sym_181fr { int dummy;
 rt_int kind_179;
 P1019 name_180;
 P1036 result_;
 P1036 y_1425;
};
struct f_new_typ_183fr { int dummy;
 rt_int kind_182;
 P1032 result_;
 P1032 t_1427;
};
struct f_new_cons_184fr { int dummy;
 P1028 result_;
 P1028 c_1429;
};
struct f_scalar_kind_186fr { int dummy;
 P1032 t_185;
 int result_;
};
struct f_bound_ctype_188fr { int dummy;
 P1032 t_187;
 rstr result_;
};
struct f_cbound_191fr { int dummy;
 P1028 c_189;
 rstr *b_190;
 rstr result_;
 P1019 p_1431;
 rt_int i_1432;
};
struct f_clo_193fr { int dummy;
 P1028 c_192;
 rstr result_;
};
struct f_chi_195fr { int dummy;
 P1028 c_194;
 rstr result_;
};
struct f_sub_lo_198fr { int dummy;
 P1032 t_196;
 P1028 c_197;
 rstr result_;
};
struct f_sub_hi_201fr { int dummy;
 P1032 t_199;
 P1028 c_200;
 rstr result_;
};
struct f_raw_storage_204fr { int dummy;
 rstr *name_202;
 rstr *ct_203;
 rstr result_;
 rstr g_1436;
 rstr f_1437;
};
struct f_copy_cons_206fr { int dummy;
 P1028 c_205;
 P1028 result_;
 P1028 r_1438;
};
struct f_freeze_209fr { int dummy;
 P1028 c_207;
 P1032 t_208;
 P1028 result_;
 P1028 r_1440;
 P1019 saved_field_1441;
 rstr ct_1442;
 rstr la_1443;
 rstr lf_1444;
 rstr ha_1445;
 rstr hf_1446;
};
struct f_checked_213fr { int dummy;
 P1032 t_210;
 P1028 c_211;
 rstr *v_212;
 rstr result_;
};
struct f_same_lits_216fr { int dummy;
 P1026 a_214;
 P1026 b_215;
 int result_;
 P1026 x_1447;
 P1026 y_1448;
};
struct f_str_elem_218fr { int dummy;
 P1032 t_217;
 P1032 result_;
};
struct f_same_221fr { int dummy;
 P1032 a_219;
 P1032 b_220;
 int result_;
 P1047 x_1449;
 P1047 y_1450;
 P1034 f_1451;
 P1034 g_1452;
};
struct f_base_of_223fr { int dummy;
 P1032 t_222;
 P1032 result_;
};
struct f_base_cons_226fr { int dummy;
 P1032 t_224;
 P1028 c_225;
 P1028 result_;
};
struct f_kind_name_228fr { int dummy;
 P1032 t_227;
 rstr result_;
};
struct f_check_type_232fr { int dummy;
 P1032 got_229;
 P1032 want_230;
 rt_int line_231;
};
struct f_ctype_234fr { int dummy;
 P1032 t_233;
 rstr result_;
};
struct f_struct_body_236fr { int dummy;
 P1032 t_235;
 rstr result_;
};
struct f_field_decls_238fr { int dummy;
 P1032 t_237;
 rstr result_;
 P1034 f_1455;
 P1019 s_1456;
};
struct f_declare_ctype_240fr { int dummy;
 P1032 t_239;
 P1032 u_1457;
 P1026 p_1458;
 P1019 fs_1459;
 rstr sn_1460;
 P1028 pc_1461;
 P1032 target_1462;
 P1026 p_1463;
 P1019 fs_1464;
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
 P1032 t_245;
 rstr result_;
 P1019 r_1465;
 rt_int k_1466;
};
struct f_acnt_249fr { int dummy;
 P1032 t_247;
 rstr *base_248;
 rstr result_;
 P1019 r_1470;
 rt_int k_1471;
};
struct f_cons_lo_252fr { int dummy;
 P1028 c_250;
 rt_int k_251;
 P1019 result_;
 P1030 l_1475;
 rt_int i_1476;
};
struct f_cons_hi_255fr { int dummy;
 P1028 c_253;
 rt_int k_254;
 P1019 result_;
 P1030 l_1480;
 rt_int i_1481;
};
struct f_idx_type_258fr { int dummy;
 P1032 t_256;
 rt_int k_257;
 P1032 result_;
 P1047 l_1485;
 rt_int i_1486;
};
struct f_init_ascii_259fr { int dummy;
 P1026 head_1490;
 P1026 tail_1491;
 rt_int start_1492;
 rt_int i_1493;
 P1026 lit_1497;
 P1026 h2_1498;
 P1026 t2_1499;
 P1026 l1_1500;
 P1026 l2_1501;
 P1026 l3_1502;
};
struct f_enum2_262fr { int dummy;
 rstr *a_260;
 rstr *b_261;
 P1032 result_;
 P1032 t_1503;
 P1026 l1_1504;
 P1026 l2_1505;
};
struct f_lit_index_265fr { int dummy;
 P1026 lits_263;
 rstr *name_264;
 rt_int result_;
 rt_int i_1506;
 P1026 l_1507;
};
struct f_resolve_subtype_268fr { int dummy;
 P1026 st_266;
 P1028 *c_267;
 P1028 c_267v;
 P1032 result_;
 P1032 t_1508;
 int ok_1509;
 P1032 dummy_1510;
 P1032 et_1512;
 P1028 ec_1513;
 P1032 et_1514;
 P1026 ix_1515;
 rt_int k_1516;
 P1047 tail_1517;
 P1030 btail_1518;
 P1028 ic_1519;
 P1032 it_1520;
 P1019 lo_1521;
 P1019 hi_1522;
 P1047 tl_1523;
 P1030 l1_1525;
 P1030 l2_1526;
 P1028 ec_1529;
 P1026 comp_1530;
 P1034 tail_1531;
 P1028 cc_1532;
 P1034 f_1533;
 P1026 lits_1535;
 P1026 ltail_1536;
 P1034 f_1537;
 P1026 l_1538;
 P1028 ec_1539;
 P1026 gt_1540;
 P1028 ec_1541;
 P1019 base_1542;
};
struct f_float_lit_270fr { int dummy;
 P1026 e_269;
 int result_;
};
struct f_tag_constraint_274fr { int dummy;
 P1032 t_271;
 P1026 e_272;
 P1028 c_273;
 P1032 dummy_1543;
};
struct f_named_subtype_277fr { int dummy;
 P1026 st_275;
 P1028 *c_276;
 P1028 c_276v;
 P1032 result_;
 P1032 t_1544;
 P1036 y_1545;
 rstr name_1546;
 P1036 binds_1547;
 P1040 saved_env_1548;
 rt_int saved_gdepth_1549;
 P1036 nb_1550;
};
struct f_invoke_abbrev_281fr { int dummy;
 P1036 y_278;
 P1026 st_279;
 P1028 *c_280;
 P1028 c_280v;
 P1032 result_;
 P1026 p_1551;
 P1026 a_1552;
 P1032 t_1553;
 P1036 z_1554;
 P1028 pc_1555;
 P1032 at_1556;
 int ok_1557;
};
struct f_apply_constraint_286fr { int dummy;
 P1032 t_282;
 P1026 args_283;
 P1028 c_284;
 rt_int line_285;
 P1032 dummy_1558;
 int ok_1559;
};
struct f_value_subtype_290fr { int dummy;
 P1026 e_287;
 P1028 *c_288;
 P1028 c_288v;
 P1019 *base_289;
 P1019 base_289v;
 P1032 result_;
 P1032 t_1560;
 P1028 c0_1561;
 int ro_1562;
 rt_int k_1563;
 rstr lo_1567;
 rstr hi_1568;
 P1030 l1_1569;
 P1030 l2_1570;
 P1026 p_1573;
 P1026 head_1574;
 P1026 tail_1575;
 P1026 sel_1576;
};
struct f_reverse_pairs_292fr { int dummy;
 P1030 l_291;
 P1030 result_;
 P1030 r_1577;
 P1030 p_1578;
 P1030 a_1579;
 P1030 b_1580;
};
struct f_inquiry_295fr { int dummy;
 P1026 st_293;
 P1028 *c_294;
 P1028 c_294v;
 P1032 result_;
 P1019 base_1581;
 P1032 t_1582;
 rstr name_1583;
 P1026 sub_1584;
 P1028 c2_1585;
 rt_int k_1586;
 int ok_1587;
 P1028 ac_1588;
};
struct f_as_subtype_297fr { int dummy;
 P1026 e_296;
 P1026 result_;
 P1026 st_1589;
 rstr name_1590;
 P1036 y_1591;
};
struct f_tt_subtype_302fr { int dummy;
 P1019 name_298;
 P1026 tt_299;
 P1026 args_300;
 rt_int line_301;
 P1026 result_;
 P1026 st_1592;
};
struct f_type_name_304fr { int dummy;
 rstr *name_303;
 int result_;
 P1036 y_1593;
};
struct f_empty_set_306fr { int dummy;
 P1032 t_305;
 rstr result_;
};
struct f_opened_308fr { int dummy;
 P1032 t_307;
 int result_;
 P1053 c_1594;
};
struct f_replace_all_312fr { int dummy;
 rstr *s_309;
 rstr *pat_310;
 rstr *r_311;
 rstr result_;
 rt_int i_1595;
};
struct f_subst_314fr { int dummy;
 rstr *s_313;
 rstr result_;
 P1030 l_1596;
 P1019 r_1597;
};
struct f_new_type_318fr { int dummy;
 P1036 y_315;
 P1026 st_316;
 P1028 *c_317;
 P1028 c_317v;
 P1032 result_;
 P1026 d_1598;
 P1026 p_1599;
 P1028 uc_1600;
 P1036 z_1601;
 P1028 zc_1602;
};
struct f_needed_bits_321fr { int dummy;
 P1032 t_319;
 P1028 c_320;
 rt_int result_;
 rt_int n_1603;
 rt_int v_1604;
};
struct f_has_digits_only_323fr { int dummy;
 rstr *s_322;
 int result_;
 rt_int i_1605;
};
struct f_built_in_only_325fr { int dummy;
 P1032 t_324;
 int result_;
 P1034 f_1609;
};
struct f_check_rep_332fr { int dummy;
 P1026 items_326;
 P1032 t_327;
 P1028 c_328;
 int top_329;
 int indirect_330;
 P1026 d_331;
 P1026 it_1610;
 int ok_1611;
 P1032 at_1612;
 rstr w_1613;
 rt_int v_1614;
 rstr dummy_1615;
 rt_int m_1616;
 int ok2_1617;
 rt_int r_1618;
 rt_int o_1619;
 P1026 comp_1620;
 P1034 f_1621;
 P1026 k_1622;
 P1026 a_1623;
};
struct f_formal_named_335fr { int dummy;
 P1026 d_333;
 rstr *name_334;
 int result_;
 P1026 p_1624;
};
struct f_unchecked_free_337fr { int dummy;
 P1032 t_336;
 int result_;
 P1026 it_1625;
};
struct f_init_storage_341fr { int dummy;
 rstr *lval_338;
 P1032 t_339;
 P1028 c_340;
};
struct f_init_call_344fr { int dummy;
 P1036 y_342;
 rstr *lval_343;
 rstr result_;
 P1019 link_1626;
 rt_int i_1627;
};
struct f_needs_fin_346fr { int dummy;
 P1032 t_345;
 int result_;
 P1034 f_1631;
};
struct f_fin_code_349fr { int dummy;
 rstr *lval_347;
 P1032 t_348;
 rstr result_;
 P1019 r_1632;
 rstr i_1633;
 P1034 f_1634;
 P1034 f_1635;
 rt_int i_1636;
};
struct f_tparam_type_352fr { int dummy;
 P1032 t_350;
 rstr *name_351;
 P1032 result_;
 P1036 z_1637;
};
struct f_make_storage_356fr { int dummy;
 rstr *lval_353;
 P1032 t_354;
 P1028 c_355;
 P1026 p_1638;
 P1026 a_1639;
 P1028 uc_1640;
 P1032 ut_1641;
 P1032 at_1642;
 P1032 pt_1643;
 rstr v_1644;
 P1030 saved_1645;
 P1030 l1_1646;
 P1030 l2_1647;
 P1032 at_1650;
 rstr acc_1651;
 rstr use_1652;
 rt_int k_1653;
 rstr i_1657;
 P1034 f_1658;
 P1034 f_1659;
 rt_int i_1660;
};
struct f_flat_358fr { int dummy;
 P1032 t_357;
 int result_;
 P1034 f_1664;
};
struct f_uninit_value_360fr { int dummy;
 P1032 t_359;
 rstr result_;
};
struct f_init_chk_363fr { int dummy;
 P1032 t_361;
 rstr *v_362;
 rstr result_;
 P1032 b_1665;
};
struct f_manifest_366fr { int dummy;
 P1026 e_364;
 int *ok_365;
 int ok_365v;
 rt_int result_;
 P1045 v_1666;
};
struct f_mk_mval_369fr { int dummy;
 rt_int kind_367;
 rt_int i_368;
 P1045 result_;
 P1045 v_1667;
};
struct f_ipow_372fr { int dummy;
 rt_int a_370;
 rt_int b_371;
 rt_int result_;
 rt_int r_1669;
 rt_int i_1670;
};
struct f_meval_375fr { int dummy;
 P1026 e_373;
 int *ok_374;
 int ok_374v;
 P1045 result_;
 P1045 a_1674;
 P1045 b_1675;
 int ok2_1676;
 P1019 op_1677;
 P1036 y_1680;
 P1045 r_1681;
};
struct f_float_op_380fr { int dummy;
 rstr *op_376;
 P1045 a_377;
 P1045 b_378;
 int *ok_379;
 int ok_379v;
 P1045 result_;
 P1045 r_1682;
};
struct f_bool_text_382fr { int dummy;
 int b_381;
 rstr result_;
};
struct f_bool_i_384fr { int dummy;
 int b_383;
 rt_int result_;
};
struct f_mstr_386fr { int dummy;
 P1045 v_385;
 rstr result_;
};
struct f_ascii_char_388fr { int dummy;
 rt_int i_387;
 int result_;
 rstr printable_1685;
};
struct f_user_defined_390fr { int dummy;
 rstr *op_389;
 int result_;
 P1036 y_1686;
};
struct f_mcopy_392fr { int dummy;
 P1032 t_391;
 rstr result_;
 rstr ct_1687;
 rstr name_1688;
 P1030 l_1689;
};
struct f_composite_394fr { int dummy;
 P1032 t_393;
 int result_;
};
struct f_user_call2_400fr { int dummy;
 P1036 y_395;
 rstr *a_396;
 int lv_a_397;
 rstr *b_398;
 int lv_b_399;
 rstr result_;
 P1019 args_1691;
 rt_int i_1692;
};
struct f_user_arg_404fr { int dummy;
 P1038 pm_401;
 rstr *v_402;
 int lv_403;
 rstr result_;
 rstr ct_1696;
};
struct f_top_level_406fr { int dummy;
 P1036 y_405;
 int result_;
};
struct f_assign_code_411fr { int dummy;
 rstr *lval_407;
 P1032 t_408;
 rstr *v_409;
 P1028 c_410;
 rstr result_;
};
struct f_copy_code_414fr { int dummy;
 P1032 t_412;
 rstr *v_413;
 rstr result_;
};
struct f_eq_code_418fr { int dummy;
 P1032 t_415;
 rstr *a_416;
 rstr *b_417;
 rstr result_;
};
struct f_elem_assign_422fr { int dummy;
 rstr *lval_419;
 P1032 t_420;
 rstr *v_421;
 rstr result_;
};
struct f_seen_name_425fr { int dummy;
 P1030 l_423;
 rstr *s_424;
 int result_;
 P1030 p_1697;
};
struct f_emit_helpers_426fr { int dummy;
 P1032 order_1698;
 P1032 t_1699;
 P1030 done_1700;
 P1030 l_1701;
 rstr c_1702;
};
struct f_helper_bodies_428fr { int dummy;
 P1032 t_427;
 rstr c_1704;
 P1049 b_1705;
 P1032 e_1706;
 P1019 sizes_1707;
 P1019 bounds_1708;
 rt_int k_1709;
 rstr l_1713;
 rstr h_1714;
 P1030 saved_1715;
 P1026 p_1716;
 P1030 l1_1717;
 P1030 l2_1718;
 P1034 f_1721;
 rt_int i_1722;
 P1019 cases_as_1723;
 P1019 cases_cp_1724;
 P1019 cases_eq_1725;
 rstr fn_1726;
 P1034 f_1727;
 P1019 conds_1728;
 rstr fn_1729;
 rstr fn_1730;
};
struct f_declare_body_430fr { int dummy;
 P1026 elems_429;
 P1026 e_1731;
 P1036 g_1732;
 P1036 y_1733;
 P1036 y_1734;
 P1036 y_1735;
 P1032 t_1736;
 P1036 y_1737;
 P1036 y_1738;
 P1040 snap_1739;
 rt_int i_1743;
 P1036 g_1747;
 P1036 y_1748;
 P1036 y_1749;
};
struct f_manifest_const_432fr { int dummy;
 P1026 d_431;
 int ok_1750;
 P1045 v_1751;
 P1036 y_1752;
 P1032 t_1753;
 P1019 ctext_1754;
 P1049 saved_1755;
};
struct f_exported_436fr { int dummy;
 P1026 d_433;
 rstr *name_434;
 int *ro_435;
 int ro_435v;
 int result_;
 P1026 p_1758;
};
struct f_copy_sym_438fr { int dummy;
 P1036 y_437;
 P1036 result_;
 P1036 z_1759;
};
struct f_gen_capsule_440fr { int dummy;
 P1026 d_439;
 P1036 y_1761;
 P1019 saved_1762;
 P1026 p_1763;
 P1038 tail_1764;
 P1038 pm_1765;
};
struct f_imports_variables_442fr { int dummy;
 P1026 d_441;
 int result_;
};
struct f_elaborate_pending_444fr { int dummy;
 P1036 y_443;
 P1019 saved_1767;
};
struct f_pending_capsule_446fr { int dummy;
 rstr *name_445;
 int result_;
 P1036 y_1768;
};
struct f_capsule_params_450fr { int dummy;
 P1026 d_447;
 P1026 args_448;
 rt_int line_449;
 P1026 p_1769;
 P1026 a_1770;
 P1032 t_1771;
 P1032 vt_1772;
 P1028 c_1773;
 P1019 lv_1774;
 P1028 lc_1775;
 int ro_1776;
 P1036 y_1777;
 rstr f_1778;
 rstr g_1779;
 P1036 y_1780;
 rstr v_1781;
 rstr access_1782;
};
struct f_elaborate_capsule_455fr { int dummy;
 P1026 d_451;
 P1036 y_452;
 P1026 args_453;
 P1026 owner_454;
 P1053 cr_1783;
 P1043 ctx_1784;
 P1051 saved_gotos_1785;
 P1036 m_1786;
 P1026 p_1787;
 int ro_1788;
 P1055 w_1791;
 P1036 z_1793;
};
struct f_exports_op_458fr { int dummy;
 P1026 d_456;
 rstr *op_457;
 int result_;
 P1026 p_1794;
};
struct f_renamed_461fr { int dummy;
 P1026 d_459;
 P1036 z_460;
 P1019 result_;
 P1026 r_1795;
};
struct f_cap_tt_match_464fr { int dummy;
 P1026 f_462;
 P1026 a_463;
 int result_;
 P1026 x_1796;
 P1026 y_1797;
 int ok1_1798;
 int ok2_1799;
 P1045 v1_1800;
 P1045 v2_1801;
};
struct f_pick_capsule_466fr { int dummy;
 P1026 d_465;
 P1036 result_;
 P1036 y_1802;
 P1036 first_1803;
 P1036 fit_1804;
 rt_int n_1805;
};
struct f_capsule_instance_469fr { int dummy;
 P1036 g_467;
 P1026 d_468;
 P1036 result_;
 P1026 gd_1806;
 P1026 pat_1807;
 P1036 binds_1808;
 P1036 inst_1809;
 P1040 saved_env_1810;
 rt_int saved_gdepth_1811;
 P1036 b_1812;
};
struct f_configure_471fr { int dummy;
 P1036 y_470;
 P1036 m_1813;
 rstr n_1814;
};
struct f_gen_expose_473fr { int dummy;
 P1026 d_472;
 P1036 y_1815;
 P1036 m_1816;
 P1026 p_1817;
 P1026 r_1818;
 P1036 inst_1819;
 int found_1820;
 P1036 z_1821;
 int found_1822;
 P1036 z_1823;
};
struct f_finish_ptr_475fr { int dummy;
 P1032 t_474;
 P1026 d_1824;
 P1026 p_1825;
 P1028 c_1826;
 rstr dummy_1827;
 rt_int pass_1828;
 P1036 y_1832;
 P1028 pc_1833;
};
struct f_ptr_args_477fr { int dummy;
 P1028 c_476;
 P1026 result_;
};
struct f_bind_ptr_params_482fr { int dummy;
 P1026 formals_478;
 P1026 actuals_479;
 rstr *cell_480;
 rt_int line_481;
 P1026 p_1834;
 P1026 a_1835;
 P1032 vt_1836;
 P1028 pc_1837;
 P1036 y_1838;
 rstr v_1839;
 rstr pv_1840;
};
struct f_alloc_cell_487fr { int dummy;
 P1026 s_483;
 rstr *lv_484;
 P1032 t_485;
 P1028 c_486;
 P1026 d_1841;
 P1028 tc_1842;
 P1032 vt_1843;
 rstr pt_1844;
 rstr cell_1845;
 rstr fn_1846;
 rstr v_1847;
};
struct f_freeze_args_491fr { int dummy;
 P1028 c_488;
 P1032 t_489;
 rt_int line_490;
 P1028 result_;
 P1028 r_1848;
 P1026 p_1849;
 P1026 a_1850;
 P1026 head_1851;
 P1026 tail_1852;
 P1019 saved_1853;
 P1028 pc_1854;
 P1032 vt_1855;
 P1032 pt_1856;
 rstr nm_1857;
 P1036 y_1858;
 P1026 n_1859;
 rstr v_1860;
 rstr access_1861;
};
struct f_ptr_subtype_check_495fr { int dummy;
 P1032 t_492;
 P1028 c_493;
 P1026 src_494;
 P1019 lv_1862;
 P1032 st_1863;
 P1028 sc_1864;
 int ro_1865;
 P1019 cond_1866;
 P1026 a_1867;
 P1026 b_1868;
 P1032 at_1869;
 P1032 bt_1870;
 rstr x_1871;
 rstr y_1872;
};
struct f_normal_function_498fr { int dummy;
 P1026 d_496;
 P1036 y_497;
 P1038 p_1873;
 P1026 imp_1874;
 int ro_1875;
 P1036 z_1876;
};
struct f_foreign_body_501fr { int dummy;
 P1026 d_499;
 P1036 y_500;
 P1038 pm_1877;
 P1019 proto_1878;
 P1019 args_1879;
 rstr cn_1880;
};
struct f_declare_subprogram_503fr { int dummy;
 P1026 d_502;
};
struct f_build_subprogram_505fr { int dummy;
 P1026 d_504;
 P1036 result_;
 P1036 y_1881;
 P1026 p_1882;
 P1038 tail_1883;
 P1038 pm_1884;
 P1028 rc_1886;
 P1038 pm_1887;
 P1049 saved_1888;
 P1036 z_1889;
};
struct f_has_pragmat_508fr { int dummy;
 P1019 pr_506;
 rstr *p_507;
 int result_;
 rt_int i_1890;
};
struct f_suppressing_510fr { int dummy;
 P1019 pr_509;
 P1019 result_;
 P1019 r_1894;
 rt_int i_1895;
 rt_int j_1896;
 rt_int k_1897;
};
struct f_suppressed_512fr { int dummy;
 rstr *x_511;
 int result_;
 rstr w_1898;
 rt_int i_1899;
};
struct f_element_514fr { int dummy;
 P1026 e_513;
 P1019 saved_1903;
};
struct f_element1_516fr { int dummy;
 P1026 e_515;
 rt_int k_1904;
 P1036 g_1905;
 rt_int i_1909;
 P1028 c_1913;
 P1026 st_1914;
 P1032 t_1915;
 P1032 t_1916;
 rstr c_1917;
};
struct f_storage_519fr { int dummy;
 rstr *name_517;
 P1032 t_518;
 rstr result_;
 rstr g_1918;
 rstr f_1919;
};
struct f_bind_522fr { int dummy;
 P1036 y_520;
 rstr *access_521;
};
struct f_var_decl_524fr { int dummy;
 P1026 d_523;
};
struct f_located_var_526fr { int dummy;
 P1026 d_525;
 P1028 c_1920;
 P1032 at_1921;
 P1032 t_1922;
 P1036 y_1923;
 rstr addr_1924;
 rstr av_1925;
 rstr af_1926;
 rstr access_1927;
 P1032 vt_1928;
 rstr v_1929;
 rstr pv_1930;
 rstr pf_1931;
 P1032 vt_1932;
 rstr v_1933;
};
struct f_rep_sync_529fr { int dummy;
 P1036 y_527;
 int pack_528;
 rstr result_;
 rstr lv_1934;
 rstr base_1935;
 P1030 saved_1936;
 P1026 p_1937;
 P1019 r_1938;
 P1019 inner_1939;
 P1036 z_1940;
};
struct f_cbound_access_531fr { int dummy;
 P1036 y_530;
 rstr result_;
 P1028 c_1941;
};
struct f_rep_size_535fr { int dummy;
 P1026 items_532;
 P1032 t_533;
 P1028 c_534;
 rstr result_;
 P1026 it_1942;
 P1032 at_1943;
};
struct f_rep_find_538fr { int dummy;
 P1026 items_536;
 rstr *w_537;
 P1026 result_;
 P1026 it_1944;
};
struct f_rep_comp_541fr { int dummy;
 P1026 items_539;
 rstr *name_540;
 P1026 result_;
 P1026 r_1945;
 P1026 comp_1946;
};
struct f_default_bits_544fr { int dummy;
 P1032 t_542;
 P1028 c_543;
 rt_int result_;
 P1034 f_1947;
 rt_int n_1948;
};
struct f_rep_code_551fr { int dummy;
 P1032 t_545;
 P1028 c_546;
 P1026 items_547;
 rstr *lval_548;
 rstr *addr_549;
 int pack_550;
 rstr result_;
 rstr size_1949;
 P1034 f_1950;
 P1019 r_1951;
 P1019 off_1952;
 rt_int i_1953;
 P1026 ti_1954;
 P1019 tsize_1955;
 P1019 toff_1956;
 P1032 at_1957;
 P1026 ci_1958;
 P1019 fo_1959;
 rstr fl_1960;
 P1032 at_1961;
 rstr part_1962;
 P1026 ai_1963;
 P1026 ei_1964;
 rstr es_1965;
 rstr iv_1966;
 rstr iv_1967;
};
struct f_union_part_553fr { int dummy;
 P1032 t_552;
 rstr result_;
};
struct f_rep_scalar_560fr { int dummy;
 P1032 t_554;
 P1028 c_555;
 rstr *lval_556;
 rstr *addr_557;
 rstr *size_558;
 int pack_559;
 rstr result_;
 rstr signed_1968;
};
struct f_max_range_563fr { int dummy;
 P1032 t_561;
 P1028 c_562;
};
struct f_var_decl2_565fr { int dummy;
 P1026 d_564;
 P1028 c_1969;
 P1032 t_1970;
 P1036 y_1971;
 rstr access_1972;
 P1032 it_1973;
 rstr n_1974;
 P1032 vt_1975;
 rstr v_1976;
};
struct f_open_fin_567fr { int dummy;
 rstr *fc_566;
 rstr f_1977;
 P1030 l_1978;
};
struct f_close_fins_569fr { int dummy;
 P1030 saved_568;
};
struct f_const_decl_571fr { int dummy;
 P1026 d_570;
 P1028 c_1980;
 P1032 t_1981;
 P1032 vt_1982;
 P1036 y_1983;
 int ok_1984;
 rstr v_1985;
 rstr access_1986;
};
struct f_subprogram_573fr { int dummy;
 P1026 d_572;
};
struct f_gen_subprogram_576fr { int dummy;
 P1026 d_574;
 P1036 y_575;
 P1049 saved_code_1987;
 P1049 saved_fields_1988;
 int saved_in_1989;
 P1036 saved_sym_1990;
 P1051 saved_exits_1991;
 P1051 saved_gotos_1992;
 rt_int saved_frames_1993;
 P1019 args_1994;
 P1038 pm_1995;
 P1030 saved_handlers_1996;
 P1030 saved_cleanups_1997;
 P1043 ctx_1998;
 P1019 head_1999;
 P1019 frame_2000;
 P1019 parent_2001;
 P1019 copy_back_2002;
 P1019 pfin_2003;
 P1030 saved_fins_2004;
 P1028 saved_rc_2005;
 P1019 saved_ret_2006;
 P1019 saved_rflag_2007;
 P1026 pn_2008;
 P1019 nonrec_end_2009;
 int has_pfin_2010;
 rstr ct_2012;
 rstr f_2013;
 P1036 p_2014;
 P1028 pc_2015;
 P1028 ac_2016;
 P1028 fc_2017;
 P1032 ft_2018;
 rstr bt_2019;
 P1028 rc_2020;
 P1032 rt_2021;
 rstr g_2022;
 P1019 leave_2023;
 rstr xu_2024;
};
struct f_waits_of_578fr { int dummy;
 P1026 d_577;
 rstr result_;
 P1055 w_2025;
};
struct f_task_waits_580fr { int dummy;
 P1026 elems_579;
 rstr result_;
 P1026 e_2026;
 P1019 r_2027;
};
struct f_await_tasks_582fr { int dummy;
 P1026 elems_581;
 rstr w_2028;
};
struct f_capsule_elements_584fr { int dummy;
 P1026 elems_583;
 P1026 e_2029;
};
struct f_declare_labels_586fr { int dummy;
 P1026 elems_585;
 P1026 e_2030;
 P1026 l_2031;
 P1051 x_2032;
};
struct f_start_labels_587fr { int dummy;
 P1051 x_2034;
};
struct f_goto_label_589fr { int dummy;
 rstr *name_588;
 P1051 result_;
 P1051 x_2035;
};
struct f_has_return_591fr { int dummy;
 P1026 e_590;
 int result_;
 P1026 x_2036;
};
struct f_capsule_body_593fr { int dummy;
 P1026 elems_592;
 P1019 saved_ret_2037;
 P1019 saved_flag_2038;
 rt_int saved_frames_2039;
 P1026 e_2040;
 int stmt_2041;
};
struct f_body_elements_595fr { int dummy;
 P1026 elems_594;
};
struct f_gen_body_597fr { int dummy;
 P1026 elems_596;
 P1030 saved_2042;
 P1051 saved_gotos_2043;
 rstr xu_2044;
};
struct f_open_unhandled_599fr { int dummy;
 P1026 elems_598;
 rstr result_;
 P1026 e_2045;
 P1019 conds_2046;
 rstr f_2047;
};
struct f_close_unhandled_601fr { int dummy;
 rstr *xu_600;
 rt_int i_2048;
 rstr f_2049;
};
struct f_pop_frames_603fr { int dummy;
 rt_int upto_602;
 rt_int i_2050;
 P1030 c_2051;
};
struct f_push_cleanup_605fr { int dummy;
 rstr *s_604;
 P1030 c_2052;
};
struct f_pop_cleanup_606fr { int dummy;
};
struct f_gen_statement_608fr { int dummy;
 P1026 s_607;
 P1036 located_2054;
 P1036 l_2055;
};
struct f_located_in_611fr { int dummy;
 P1026 e_609;
 P1036 found_610;
 P1036 result_;
 P1026 x_2056;
 P1036 r_2057;
 P1036 y_2058;
};
struct f_sym_in_614fr { int dummy;
 P1036 l_612;
 P1036 y_613;
 int result_;
 P1036 p_2059;
};
struct f_gen_statement2_616fr { int dummy;
 P1026 s_615;
 P1019 label_2060;
 P1026 gl_2061;
 P1051 x_2062;
 P1051 x_2065;
};
struct f_st_assign_618fr { int dummy;
 P1026 s_617;
 P1019 lv_2066;
 P1032 t_2067;
 P1032 vt_2068;
 P1028 c_2069;
 int ro_2070;
 rstr lo_2071;
 rstr hi_2072;
 rstr v_2073;
 rstr lo_2074;
 rstr hi_2075;
 rstr v_2076;
 rstr v_2077;
};
struct f_st_call_620fr { int dummy;
 P1026 s_619;
 P1026 c_2078;
 P1032 t_2079;
 P1026 x_2080;
};
struct f_st_if_622fr { int dummy;
 P1026 s_621;
 P1026 a_2081;
 int first_2082;
 P1032 t_2083;
 int taken_2084;
 int ok_2085;
 P1045 mv_2086;
 rstr c_2087;
};
struct f_manifest_case_624fr { int dummy;
 P1026 s_623;
 int result_;
 int ok_2088;
 P1045 sv_2089;
 P1026 a_2090;
 P1026 lab_2091;
 P1045 lo_2092;
 P1045 hi_2093;
};
struct f_st_case_626fr { int dummy;
 P1026 s_625;
 P1032 st_2094;
 P1032 vt_2095;
 int first_2096;
 P1026 a_2097;
};
struct f_st_case2_628fr { int dummy;
 P1026 s_627;
 P1032 st_2098;
 P1032 vt_2099;
 int first_2100;
 P1026 a_2101;
 rstr sel_2102;
 rstr tmp_2103;
 P1026 lab_2104;
 P1019 conds_2105;
 rstr v_2106;
 rstr lo_2107;
 rstr hi_2108;
 rstr lo_2109;
 rstr hi_2110;
};
struct f_user_for_632fr { int dummy;
 P1026 s_629;
 P1032 t_630;
 P1028 c_631;
 P1036 y_2111;
 P1030 saved_2112;
 P1026 p_2113;
 P1026 iv_2114;
 P1032 st_2115;
 rstr access_2116;
 P1019 uv_2117;
 P1030 l1_2118;
 P1030 l2_2119;
 rstr lo_2122;
 rstr hi_2123;
};
struct f_st_repeat_634fr { int dummy;
 P1026 s_633;
 P1032 t_2124;
 P1028 c_2125;
 rstr cond_2126;
 rstr access_2127;
 rstr lov_2128;
 rstr hiv_2129;
 rstr it_2130;
 P1036 y_2131;
};
struct f_st_exit_636fr { int dummy;
 P1026 s_635;
 P1051 x_2132;
};
struct f_st_return_638fr { int dummy;
 P1026 s_637;
 P1032 vt_2133;
 rstr v_2134;
};
struct f_result_checked_642fr { int dummy;
 P1032 t_639;
 P1028 c_640;
 rstr *v_641;
 rstr result_;
};
struct f_exc_id_645fr { int dummy;
 rstr *name_643;
 rt_int line_644;
 rstr result_;
 P1036 y_2135;
};
struct f_st_guard_647fr { int dummy;
 P1026 s_646;
 P1026 h_2136;
 int first_2137;
 P1030 hv_2138;
 rstr f_2139;
 rstr x_2140;
 P1026 h1_2142;
 P1030 seen_2143;
 P1026 n1_2144;
 P1026 n_2145;
 P1019 conds_2146;
};
struct f_st_alloc_649fr { int dummy;
 P1026 s_648;
 P1019 lv_2147;
 P1032 t_2148;
 P1032 target_2149;
 P1032 vt_2150;
 P1028 c_2151;
 P1028 tc_2152;
 int ro_2153;
 P1026 d_2154;
 P1026 p_2155;
 P1026 a_2156;
 rstr tcn_2157;
 rstr cell_2158;
 rstr fn_2159;
 rstr v_2160;
};
struct f_act_ref_651fr { int dummy;
 P1026 e_650;
 rstr result_;
 P1019 lv_2161;
 P1032 t_2162;
 P1028 c_2163;
 int ro_2164;
 rstr v_2165;
};
struct f_st_create_653fr { int dummy;
 P1026 s_652;
 P1036 y_2166;
 P1038 pm_2167;
 P1026 a_2168;
 P1019 lv_2169;
 P1032 lt_2170;
 P1032 vt_2171;
 P1028 lc_2172;
 int ro_2173;
 P1032 at_2174;
 P1028 ac_2175;
 int aro_2176;
 P1019 act_2177;
 rstr nf_2178;
 P1019 link_2179;
 rt_int i_2180;
 rstr v_2184;
};
struct f_hidden_var_657fr { int dummy;
 rstr *name_654;
 P1032 t_655;
 rstr *place_656;
 P1036 y_2185;
};
struct f_user_create_663fr { int dummy;
 P1026 s_658;
 P1036 y_659;
 rstr *uv_660;
 P1032 ut_661;
 rstr *nf_662;
 P1032 t_2186;
 P1049 saved_2187;
 P1049 hook_2188;
 P1026 un_2189;
 rstr hn_2190;
 rstr aa_2191;
 rstr uname_2192;
 rstr aname_2193;
 P1026 start_2194;
 P1026 an_2195;
};
struct f_wait_alt_668fr { int dummy;
 P1026 inv_664;
 rstr *arr_665;
 rt_int i_666;
 int mixed_667;
 rstr result_;
 P1019 lv_2196;
 P1032 t_2197;
 P1032 vt_2198;
 P1028 c_2199;
 int ro_2200;
 P1026 fn_2201;
 P1026 args_2202;
 rstr slot_2203;
 P1019 dv_2204;
 P1032 dt_2205;
 rstr tmp_2206;
 rstr v_2207;
 rstr v_2208;
};
struct f_builtin_wait_670fr { int dummy;
 P1026 inv_669;
 int result_;
 P1019 lv_2209;
 P1032 t_2210;
 P1028 c_2211;
 int ro_2212;
 P1049 saved_2213;
 int ok_2214;
};
struct f_wait_op_675fr { int dummy;
 P1026 inv_671;
 rstr *op_672;
 rstr *q_673;
 int is_stmt_674;
 rstr result_;
 P1026 x_2217;
 P1026 f_2218;
 P1026 qn_2219;
 P1032 t_2220;
 rstr r_2221;
};
struct f_user_wait_680fr { int dummy;
 P1026 s_676;
 rstr *arr_677;
 rstr *w_678;
 rt_int n_679;
 P1026 a_2222;
 rt_int i_2223;
 P1019 tests_2224;
 P1019 revokes_2225;
 P1026 inv_2226;
 P1026 st_2227;
 P1028 c_2228;
 P1032 qt_2229;
 rstr qname_2230;
 P1036 y_2231;
 rstr access_2232;
};
struct f_st_wait_682fr { int dummy;
 P1026 s_681;
 P1026 a_2233;
 rt_int n_2234;
 int first_2235;
 P1049 inits_2236;
 int user_2237;
 rstr arr_2238;
 rstr w_2239;
 P1026 inv_2240;
 P1026 inv_2241;
 P1019 conds_2242;
 rt_int i_2243;
};
struct f_call_node_686fr { int dummy;
 rstr *name_683;
 P1026 arg_684;
 rt_int line_685;
 P1026 result_;
 P1026 x_2247;
 P1026 f_2248;
};
struct f_user_region_688fr { int dummy;
 P1026 s_687;
 P1032 t_2249;
 rstr f_2250;
 rstr lock_2251;
 rstr unlock_2252;
};
struct f_st_region_690fr { int dummy;
 P1026 s_689;
 P1019 lv_2253;
 P1032 t_2254;
 P1028 c_2255;
 int ro_2256;
 rstr lk_2257;
 rstr f_2258;
};
struct f_gparam_693fr { int dummy;
 P1026 g_691;
 rstr *name_692;
 P1026 result_;
 P1026 p_2259;
};
struct f_bind_sym_695fr { int dummy;
 P1026 p_694;
 P1036 result_;
 P1036 y_2260;
};
struct f_same_binds_698fr { int dummy;
 P1036 a_696;
 P1036 b_697;
 int result_;
 P1036 x_2261;
 P1036 y_2262;
};
struct f_same_binding_701fr { int dummy;
 P1036 a_699;
 P1036 b_700;
 int result_;
};
struct f_tt_binds_706fr { int dummy;
 P1026 gd_702;
 P1026 formals_703;
 P1026 actuals_704;
 rt_int line_705;
 P1036 result_;
 P1026 f_2263;
 P1026 a_2264;
 P1036 binds_2265;
 P1028 c_2266;
 P1032 at_2267;
 P1026 p_2268;
 P1036 b_2269;
 P1026 st_2270;
 int ok_2271;
 int ok_2272;
};
struct f_type_allowed_710fr { int dummy;
 P1032 t_707;
 P1026 items_708;
 P1036 binds_709;
 int result_;
 P1026 it_2273;
 P1032 b_2274;
 rstr w_2275;
 P1028 c_2276;
};
struct f_resolve_in_binds_714fr { int dummy;
 P1026 st_711;
 P1036 binds_712;
 P1028 *c_713;
 P1028 c_713v;
 P1032 result_;
 P1036 b_2277;
 P1032 t_2278;
 P1036 z_2279;
};
struct f_pick_operation_721fr { int dummy;
 rt_int kind_715;
 rstr *name_716;
 P1026 sig_717;
 P1026 res_718;
 P1036 binds_719;
 rt_int line_720;
 P1036 result_;
 P1036 y_2280;
 P1028 c_2281;
 rt_int want_2282;
 rt_int pass_2283;
 int ok_2287;
 P1026 s_2288;
 P1038 pm_2289;
};
struct f_kind_word_723fr { int dummy;
 rt_int kind_722;
 rstr result_;
};
struct f_need_binds_727fr { int dummy;
 P1026 gd_724;
 P1036 binds_725;
 rt_int line_726;
 P1036 result_;
 P1026 it_2290;
 P1036 r_2291;
 int found_2292;
 P1036 y_2293;
 P1036 z_2294;
};
struct f_generic_use_729fr { int dummy;
 P1026 st_728;
 int result_;
};
struct f_infer_from_734fr { int dummy;
 P1026 gd_730;
 P1026 pat_731;
 P1032 t_732;
 P1036 known_733;
 P1036 result_;
 P1036 binds_2295;
 P1026 e_2296;
 P1026 tp_2297;
 P1019 nm_2298;
 P1036 q_2299;
 int have_2300;
 P1036 g_2301;
 P1036 b_2302;
};
struct f_instantiate_type_740fr { int dummy;
 P1036 g_735;
 P1026 tt_736;
 P1026 args_737;
 P1028 *c_738;
 P1028 c_738v;
 rt_int line_739;
 P1032 result_;
 P1026 gd_2303;
 P1026 pat_2304;
 P1036 binds_2305;
 P1036 inst_2306;
 P1032 t_2307;
 P1053 saved_caps_2308;
 P1040 saved_env_2309;
 rt_int saved_gdepth_2310;
 P1036 b_2311;
 P1036 y_2312;
 P1028 yc_2313;
};
struct f_instantiate_745fr { int dummy;
 P1036 g_741;
 P1026 tt_742;
 P1026 args_743;
 rt_int line_744;
 P1036 result_;
 P1026 gd_2315;
 P1026 pat_2316;
 P1036 binds_2317;
 P1026 f_2318;
 P1026 a_2319;
 P1026 fp_2320;
 P1036 inst_2321;
 P1032 at_2322;
 P1028 c_2323;
 P1043 saved_fctx_2324;
 int saved_in_2325;
 rt_int saved_level_2326;
 P1036 saved_sym_2327;
 P1049 saved_code_2328;
 P1040 saved_env_2329;
 rt_int saved_gdepth_2330;
 rstr v_2331;
 int known_2332;
 P1036 q_2333;
 P1036 b_2334;
 rstr v_2335;
 P1036 b_2336;
};
struct f_access_of_747fr { int dummy;
 P1036 y_746;
 rstr result_;
 P1019 p_2337;
 rt_int i_2338;
};
struct f_import_of_750fr { int dummy;
 P1026 l_748;
 rstr *name_749;
 P1026 result_;
 P1026 p_2342;
};
struct f_check_import_753fr { int dummy;
 P1036 y_751;
 rt_int line_752;
 int result_;
 P1043 c_2343;
 int ro_2344;
 P1026 imp_2345;
};
struct f_c_ident_755fr { int dummy;
 rstr *s_754;
 rstr result_;
 P1019 r_2346;
 rt_int i_2347;
};
struct f_cell_deref_758fr { int dummy;
 P1032 t_756;
 rstr *p_757;
 rstr result_;
};
struct f_deref_761fr { int dummy;
 rstr *base_759;
 P1032 t_760;
 rstr result_;
};
struct f_is_lvalue_763fr { int dummy;
 P1026 e_762;
 int result_;
 P1036 y_2351;
};
struct f_lvalue_769fr { int dummy;
 P1026 e_764;
 P1019 *code_765;
 P1019 code_765v;
 P1032 *t_766;
 P1032 t_766v;
 P1028 *c_767;
 P1028 c_767v;
 int *ro_768;
 int ro_768v;
 P1019 base_2352;
 P1032 bt_2353;
 P1028 bc_2354;
 P1036 y_2355;
};
struct f_select_on_777fr { int dummy;
 rstr *base_770;
 P1032 bt_771;
 P1026 e_772;
 int *ro_773;
 P1019 *code_774;
 P1019 code_774v;
 P1032 *t_775;
 P1032 t_775v;
 P1028 *c_776;
 P1028 c_776v;
 P1026 p_2356;
 P1028 pc_2357;
 P1026 p_2358;
 P1034 f_2359;
 rt_int i_2360;
 rstr fn_2361;
 P1034 f_2362;
};
struct f_has_call_779fr { int dummy;
 rstr *s_778;
 int result_;
 rt_int i_2363;
};
struct f_need_slice_781fr { int dummy;
 P1032 t_780;
 rstr c_2367;
 rstr n_2368;
 P1030 l_2369;
};
struct f_ix_785fr { int dummy;
 rstr *i_782;
 rstr *lo_783;
 rstr *hi_784;
 rstr result_;
};
struct f_index_on_794fr { int dummy;
 rstr *base_786;
 P1032 bt_787;
 P1026 e_788;
 int *ro_789;
 int lv_790;
 P1019 *code_791;
 P1019 code_791v;
 P1032 *t_792;
 P1032 t_792v;
 P1028 *c_793;
 P1028 c_793v;
 P1026 a_2371;
 P1032 it_2372;
 rstr lo_2373;
 rstr hi_2374;
 P1019 off_2375;
 rt_int k_2376;
 P1019 b_2377;
 P1019 pre_2378;
 rstr i_2379;
 rstr l_2380;
 rstr h_2381;
 rstr lo_2382;
 rstr hi_2383;
 rstr i_2384;
};
struct f_own_attribute_796fr { int dummy;
 P1026 e_795;
 int result_;
 P1049 saved_2385;
 P1032 bt_2386;
 int ok_2387;
 rstr base_2390;
 P1026 p_2391;
 P1034 f_2392;
};
struct f_gexpr_800fr { int dummy;
 P1026 e_797;
 P1032 want_798;
 P1032 *t_799;
 P1032 t_799v;
 rstr result_;
 rt_int k_2393;
 P1019 code_2394;
 P1028 c_2395;
 int ro_2396;
 P1032 bt_2397;
 P1028 ctx_2398;
 P1019 r_2399;
 rt_int i_2400;
 rt_int pos_2404;
 rt_int i_2405;
 P1036 y_2406;
 int ro_2407;
 P1026 call_2408;
 P1026 fname_2409;
 rstr a_2410;
 rstr a_2411;
 rstr a_2412;
 P1026 nm_2413;
 P1036 y_2414;
 rstr base_2415;
 rstr base_2416;
};
struct f_resolved_803fr { int dummy;
 P1026 e_801;
 P1032 *t_802;
 P1032 t_802v;
 rstr result_;
 P1028 c_2417;
 P1032 vt_2418;
 P1036 y_2419;
 P1026 tt_2420;
 P1026 call_2421;
 P1026 f_2422;
 P1026 fname_2423;
 rstr v_2424;
};
struct f_gexpr_in_808fr { int dummy;
 P1026 e_804;
 P1032 want_805;
 P1028 c_806;
 P1032 *t_807;
 P1032 t_807v;
 rstr result_;
};
struct f_ascii_lit_810fr { int dummy;
 int ch_809;
 rstr result_;
 P1026 l_2425;
 rt_int i_2426;
};
struct f_octal_812fr { int dummy;
 rt_int n_811;
 rstr result_;
 rstr r_2430;
};
struct f_str_cat_part_814fr { int dummy;
 P1032 t_813;
 P1032 result_;
};
struct f_peek_type_816fr { int dummy;
 P1026 e_815;
 P1032 result_;
 P1049 saved_2431;
 P1032 t_2432;
 rstr v_2435;
};
struct f_set_operands_819fr { int dummy;
 P1026 e_817;
 P1032 want_818;
 P1032 result_;
 P1032 t_2436;
};
struct f_user_dot_821fr { int dummy;
 P1026 e_820;
 P1026 result_;
 P1026 arg_2437;
};
struct f_user_subscript_823fr { int dummy;
 P1026 e_822;
 P1026 result_;
 P1019 name_2438;
 P1026 args_2439;
 P1026 tail_2440;
 P1026 a_2441;
};
struct f_op_call_827fr { int dummy;
 rstr *name_824;
 P1026 args_825;
 rt_int line_826;
 P1026 result_;
 P1026 call_2442;
 P1026 f_2443;
};
struct f_derived_relation_829fr { int dummy;
 P1026 e_828;
 P1026 result_;
 P1026 l_2444;
 P1026 r_2445;
 int has_eq_2446;
 int has_lt_2447;
};
struct f_rel_node_834fr { int dummy;
 rstr *op_830;
 P1026 a_831;
 P1026 b_832;
 rt_int line_833;
 P1026 result_;
};
struct f_rel_not_837fr { int dummy;
 P1026 x_835;
 rt_int line_836;
 P1026 result_;
 P1026 n_2448;
};
struct f_copy_node_839fr { int dummy;
 P1026 e_838;
 P1026 result_;
 P1026 x_2449;
};
struct f_wrap_apply_841fr { int dummy;
 P1026 e_840;
 P1026 result_;
 P1026 x_2451;
};
struct f_c_string_843fr { int dummy;
 rstr *s_842;
 rstr result_;
 rt_int n_2452;
 rt_int i_2453;
 rstr r_2457;
 rt_int j_2458;
 rt_int i_2459;
};
struct f_enum_type_of_846fr { int dummy;
 rstr *lit_844;
 rt_int line_845;
 P1032 result_;
 P1036 y_2463;
 P1028 c_2464;
 P1026 st_2465;
};
struct f_ptr_attribute_848fr { int dummy;
 P1026 e_847;
 int result_;
 P1019 lv_2466;
 P1032 t_2467;
 P1028 c_2468;
 int ro_2469;
 P1026 p_2470;
 P1049 saved_2471;
};
struct f_attribute_851fr { int dummy;
 P1026 e_849;
 P1032 *t_850;
 P1032 t_850v;
 rstr result_;
 P1032 bt_2472;
 P1028 c_2473;
 P1019 base_2474;
 P1026 sub_2475;
 rstr name_2476;
 P1026 p_2477;
 P1026 a_2478;
 P1028 pc_2479;
 rstr v_2480;
 P1026 p_2481;
 P1026 a_2482;
 P1032 pt_2483;
 rstr v_2484;
};
struct f_subtype_compare_856fr { int dummy;
 P1026 sa_852;
 P1026 sb_853;
 rstr *op_854;
 rt_int line_855;
 rstr result_;
 P1028 ca_2485;
 P1028 cb_2486;
 P1032 ta_2487;
 P1032 tb_2488;
 P1019 r_2489;
 rstr yes_2490;
 rstr no_2491;
 rt_int k_2492;
 P1026 a_2496;
 P1026 b_2497;
 P1032 at_2498;
 P1032 bt2_2499;
 rstr x_2500;
 rstr y_2501;
};
struct f_float_prec_858fr { int dummy;
 P1028 c_857;
 rstr result_;
};
struct f_file_attribute_864fr { int dummy;
 P1026 e_859;
 P1032 bt_860;
 P1028 c_861;
 P1019 base_862;
 P1032 *t_863;
 P1032 t_863v;
 rstr result_;
};
struct f_gbinop_868fr { int dummy;
 P1026 e_865;
 P1032 want_866;
 P1032 *t_867;
 P1032 t_867v;
 rstr result_;
 P1019 op_2502;
 P1032 ta_2503;
 P1032 tb_2504;
 P1032 hint_2505;
 P1036 uy_2506;
 P1026 l_2507;
 P1026 r_2508;
 P1026 call_2509;
 P1026 fname_2510;
 rstr s_2511;
 rstr a_2512;
 rstr a_2513;
 rstr b_2514;
 rstr a_2515;
 rstr b_2516;
 P1032 at_2517;
 rstr a_2518;
 rstr b_2519;
 P1032 wa_2520;
 P1032 wb_2521;
 P1032 ws_2522;
 P1032 ce_2523;
 rstr a_2524;
 rstr b_2525;
 rstr dummy_2526;
 rstr a_2527;
 rstr b_2528;
 P1032 ct_2529;
 rstr a_2530;
 rstr b_2531;
};
struct f_constructor_873fr { int dummy;
 P1026 e_869;
 P1032 want_870;
 P1028 ctx_871;
 P1032 *t_872;
 P1032 t_872v;
 rstr result_;
 P1026 it_2532;
 P1034 f_2533;
 P1032 vt_2534;
 P1019 s_2535;
 rstr v_2536;
 rt_int i_2537;
 rstr tmp_2538;
 rstr v_2539;
 rstr tmp_2540;
 P1019 parts_2541;
 P1026 k_2542;
 P1019 shared_2543;
 rstr v_2544;
 rstr v_2545;
};
struct f_comp_value_877fr { int dummy;
 P1032 t_874;
 P1028 c_875;
 rstr *v_876;
 rstr result_;
 rstr ct_2546;
};
struct f_has_at_879fr { int dummy;
 rstr *s_878;
 int result_;
 rt_int i_2547;
};
struct f_set_elem_882fr { int dummy;
 P1032 st_880;
 rstr *v_881;
 rstr result_;
};
struct f_array_cons_887fr { int dummy;
 P1026 e_883;
 P1032 at_884;
 P1028 ctx_885;
 P1032 *t_886;
 P1032 t_886v;
 rstr result_;
 rstr tmp_2551;
 P1019 parts_2552;
 P1026 it_2553;
 int positional_2554;
 rt_int k_2555;
 P1019 lo_2559;
 P1019 hi_2560;
};
struct f_fill_items_893fr { int dummy;
 P1026 items_888;
 P1032 at_889;
 rstr *tmp_890;
 P1030 prefix_891;
 rt_int dim_892;
 rstr result_;
 P1026 it_2561;
 rt_int pos_2562;
 P1019 r_2563;
 P1032 vt_2564;
 rstr v_2565;
 P1026 k_2566;
 rt_int d_2567;
 P1030 pre_2568;
 P1019 loops_2569;
 P1019 ends_2570;
 rstr v_2571;
 rstr xv_2572;
 P1026 k_2573;
 rstr xv_2574;
 rstr v_2575;
};
struct f_e_line_895fr { int dummy;
 P1026 e_894;
 rt_int result_;
};
struct f_add_line_898fr { int dummy;
 P1030 l_896;
 rstr *s_897;
 P1030 result_;
 P1030 r_2576;
 P1030 tail_2577;
 P1030 x_2578;
 P1030 p_2579;
};
struct f_item_value_903fr { int dummy;
 P1026 e_899;
 P1032 at_900;
 rt_int line_901;
 P1032 *vt_902;
 P1032 vt_902v;
 rstr result_;
 rstr v_2582;
};
struct f_key_loop_908fr { int dummy;
 P1026 k_904;
 P1032 at_905;
 rt_int d_906;
 rstr *xv_907;
 rstr result_;
 P1032 it_2583;
 rstr lo_2584;
 rstr hi_2585;
};
struct f_store_at_913fr { int dummy;
 P1032 at_909;
 rstr *tmp_910;
 P1030 xs_911;
 rt_int n_912;
 rstr result_;
 P1019 off_2586;
 P1030 x_2587;
 rt_int k_2588;
 rstr l_2589;
 rstr h_2590;
};
struct f_fits_916fr { int dummy;
 P1036 y_914;
 P1026 args_915;
 int result_;
 P1026 a_2591;
 P1038 pm_2592;
 P1032 t_2593;
 P1049 saved_2594;
 int ok_2595;
 P1019 lv_2596;
 P1028 lc_2597;
 int ro_2598;
 rstr v_2601;
};
struct f_resolve_overload_922fr { int dummy;
 rstr *name_917;
 P1026 tt_918;
 P1026 args_919;
 int is_stmt_920;
 rt_int line_921;
 P1036 result_;
 P1036 y_2602;
 P1036 first_2603;
 rt_int n_2604;
 rt_int pass_2605;
};
struct f_tt_fits_925fr { int dummy;
 P1036 y_923;
 P1026 tt_924;
 int result_;
 P1026 f_2609;
 P1026 a_2610;
 P1049 saved_2611;
 int ok_2612;
 P1028 fc_2615;
 P1028 ac_2616;
 P1026 fst_2617;
 P1032 ft_2618;
 P1032 at_2619;
 P1026 ast_2620;
};
struct f_overload_chain_928fr { int dummy;
 rstr *name_926;
 rt_int pass_927;
 P1036 result_;
};
struct f_is_builtin_930fr { int dummy;
 rstr *n_929;
 int result_;
};
struct f_is_low_level_932fr { int dummy;
 rstr *n_931;
 int result_;
};
struct f_me_high_936fr { int dummy;
 P1026 tt_933;
 rt_int line_934;
 P1032 *t_935;
 P1032 t_935v;
 rstr result_;
 P1028 c_2621;
};
struct f_type_tag_938fr { int dummy;
 P1032 t_937;
 rstr result_;
};
struct f_lock_ref_941fr { int dummy;
 P1026 e_939;
 rstr *name_940;
 rstr result_;
 P1019 lv_2622;
 P1032 t_2623;
 P1028 c_2624;
 int ro_2625;
};
struct f_user_op_944fr { int dummy;
 rstr *op_942;
 P1026 args_943;
 P1036 result_;
 P1036 y_2626;
 rt_int pass_2627;
};
struct f_gcall_948fr { int dummy;
 P1026 e_945;
 int is_stmt_946;
 P1032 *t_947;
 P1032 t_947v;
 rstr result_;
 P1026 gd_2631;
 P1026 fn_2632;
 P1026 tt_2633;
 P1036 y_2634;
 P1019 args_2635;
 P1026 a_2636;
 P1038 pm_2637;
 P1032 lt_2638;
 P1032 vt_2639;
 P1019 lv_2640;
 P1028 lc_2641;
 int ro_2642;
 P1036 alt_2643;
 P1053 cr_2644;
 rt_int i_2645;
 rstr v_2649;
 rstr ct_2650;
 rstr v_2651;
 rstr chk_2652;
};
struct f_requires_950fr { int dummy;
 P1036 y_949;
 P1030 result_;
 P1026 imp_2653;
};
struct f_add_req_953fr { int dummy;
 P1036 y_951;
 rstr *name_952;
 P1030 l_2654;
};
struct f_require_calls_956fr { int dummy;
 P1036 y_954;
 P1026 e_955;
 P1026 x_2656;
 P1026 callee_2657;
 P1036 z_2658;
 P1030 l_2659;
};
struct f_declared_in_959fr { int dummy;
 P1026 elems_957;
 rstr *name_958;
 int result_;
 P1026 e_2660;
};
struct f_check_requires_962fr { int dummy;
 P1036 y_960;
 rt_int line_961;
 P1030 l_2661;
 P1036 z_2662;
};
struct f_act_delay_args_964fr { int dummy;
 P1026 args_963;
 rstr result_;
 P1032 at_2663;
 P1032 t1_2664;
 rstr a_2665;
 rstr v_2666;
 rstr v_2667;
};
struct f_same_subtypes_967fr { int dummy;
 P1026 gd_965;
 P1026 args_966;
 rstr result_;
 P1026 p_2668;
 P1019 r_2669;
 P1026 fp_2670;
 P1026 a_2671;
 P1019 flo_2672;
 P1019 fhi_2673;
 P1032 st_2674;
 P1028 c_2675;
 P1019 base_2676;
 P1019 lo_2677;
 P1019 hi_2678;
};
struct f_mailbox_low_972fr { int dummy;
 rstr *name_968;
 P1026 args_969;
 rt_int line_970;
 P1032 *t_971;
 P1032 t_971v;
 rstr result_;
 P1019 qv_2679;
 P1019 mv_2680;
 P1019 dv_2681;
 P1032 qt_2682;
 P1032 mt_2683;
 P1032 dt_2684;
 P1032 at_2685;
 P1028 c_2686;
 int ro_2687;
 int send_2688;
 rstr v_2689;
};
struct f_exponent_want_975fr { int dummy;
 rstr *op_973;
 P1032 ta_974;
 P1032 result_;
};
struct f_file_ref_979fr { int dummy;
 P1026 e_976;
 int text_977;
 rt_int line_978;
 rstr result_;
 P1032 t_2690;
 rstr f_2691;
};
struct f_text_file_981fr { int dummy;
 P1032 t_980;
 int result_;
};
struct f_conversion_986fr { int dummy;
 P1026 tt_982;
 P1026 args_983;
 rt_int line_984;
 P1032 *t_985;
 P1032 t_985v;
 rstr result_;
 P1028 c_2692;
 P1032 at_2693;
 P1032 target_2694;
 rstr a_2695;
 P1019 r_2696;
};
struct f_float_digits_988fr { int dummy;
 P1026 e_987;
 rstr result_;
 P1019 lv_2697;
 P1032 t_2698;
 P1028 c_2699;
 int ro_2700;
 rt_int n_2701;
 int lead_2702;
 rt_int i_2703;
 P1049 saved_2707;
};
struct f_enum_names_990fr { int dummy;
 P1032 t_989;
 rstr result_;
 P1026 l_2708;
 P1019 r_2709;
};
struct f_explicit_rep_992fr { int dummy;
 P1026 e_991;
 int result_;
 P1032 bt_2710;
};
struct f_actual_bounds_996fr { int dummy;
 P1032 ft_993;
 P1032 t_994;
 P1028 c_995;
 rstr result_;
};
struct f_builtin_1003fr { int dummy;
 rstr *name_997;
 P1026 tt_998;
 P1026 args_999;
 rt_int line_1000;
 int is_stmt_1001;
 P1032 *t_1002;
 P1032 t_1002v;
 rstr result_;
 P1032 at_2711;
 rt_int n_2712;
 rstr a_2713;
 rstr a_2714;
 rstr a_2715;
 rstr a_2716;
 rstr a_2717;
 rstr a_2718;
 rstr a_2719;
 rstr n1_2720;
 rstr m1_2721;
 rstr a_2722;
 rstr f_2723;
 rstr a_2724;
 rstr a_2725;
 P1032 ft_2726;
 rstr f_2727;
 P1019 lv_2728;
 P1028 lc_2729;
 int ro_2730;
 rstr a_2731;
 P1019 lv_2732;
 P1028 lc_2733;
 int ro_2734;
 rstr f_2735;
 P1019 lv_2736;
 P1028 lc_2737;
 int ro_2738;
 rstr f_2739;
 rstr nm_2740;
 rstr st_2741;
 rstr f_2742;
 rstr d_2743;
 rstr f_2744;
 rstr v_2745;
 rstr a_2746;
 rstr b_2747;
 P1019 lv_2748;
 P1019 dv_2749;
 P1028 lc_2750;
 int ro_2751;
 P1032 mt_2752;
 P1032 dt_2753;
 rstr v_2754;
 P1019 lv_2755;
 P1028 lc_2756;
 int ro_2757;
 P1032 mt_2758;
 P1019 lv_2759;
 P1019 dv_2760;
 P1019 bv_2761;
 P1028 lc_2762;
 int ro_2763;
 P1032 mt_2764;
 P1032 dt_2765;
 P1032 bt_2766;
 rstr v_2767;
 rstr v_2768;
 rstr v_2769;
 rstr v_2770;
 rstr a_2771;
 P1019 bv_2772;
 P1028 bc_2773;
 int ro_2774;
 P1032 bt_2775;
 rstr l_2776;
 P1019 pv_2777;
 P1028 pc_2778;
 int ro_2779;
 P1032 pt_2780;
 rstr dev_2781;
 rstr cmd_2782;
 rstr v_2783;
 P1019 dv_2784;
 P1028 dc_2785;
 int ro_2786;
 P1032 dt_2787;
};
struct f_with_library_1005fr { int dummy;
 P1026 units_1004;
 P1026 result_;
 P1026 r_2788;
 int more_2789;
 P1019 missing_2790;
 rt_int saved_2791;
 P1026 lib_2792;
 P1026 t_2793;
};
struct f_external_missing_1008fr { int dummy;
 P1026 e_1006;
 P1026 units_1007;
 P1019 result_;
 P1026 x_2794;
 P1019 r_2795;
 P1019 r_2796;
};
struct f_unit_named_1011fr { int dummy;
 P1026 units_1009;
 rstr *name_1010;
 int result_;
 P1026 u_2797;
};
struct f_tried_1013fr { int dummy;
 rstr *name_1012;
 int result_;
};
struct f_mark_tried_1015fr { int dummy;
 rstr *name_1014;
 P1030 l_2798;
};
struct f_translate_1017fr { int dummy;
 P1026 units_1016;
 P1026 u_2800;
 P1026 l_2802;
 rstr w_2803;
};
struct f_print_program_1018fr { int dummy;
};
struct Pc1020 { rt_int p_n; rstr all; };
struct Pc1024 { rt_int p_n; A1025 all; };
struct Pc1041 { rt_int p_n; A1042 all; };
static void as_R1056(R1056 *d, R1056 s);
static R1056 cp_R1056(R1056 s);
static int eq_R1056(R1056 a, R1056 b);
static void as_R1054(R1054 *d, R1054 s);
static R1054 cp_R1054(R1054 s);
static int eq_R1054(R1054 a, R1054 b);
static void as_R1052(R1052 *d, R1052 s);
static R1052 cp_R1052(R1052 s);
static int eq_R1052(R1052 a, R1052 b);
static void as_R1050(R1050 *d, R1050 s);
static R1050 cp_R1050(R1050 s);
static int eq_R1050(R1050 a, R1050 b);
static void as_R1048(R1048 *d, R1048 s);
static R1048 cp_R1048(R1048 s);
static int eq_R1048(R1048 a, R1048 b);
static void as_R1046(R1046 *d, R1046 s);
static R1046 cp_R1046(R1046 s);
static int eq_R1046(R1046 a, R1046 b);
static void as_R1044(R1044 *d, R1044 s);
static R1044 cp_R1044(R1044 s);
static int eq_R1044(R1044 a, R1044 b);
static void as_A1042(A1042 *d, A1042 s);
static A1042 cp_A1042(A1042 s);
static int eq_A1042(A1042 a, A1042 b);
static void as_R1039(R1039 *d, R1039 s);
static R1039 cp_R1039(R1039 s);
static int eq_R1039(R1039 a, R1039 b);
static void as_R1037(R1037 *d, R1037 s);
static R1037 cp_R1037(R1037 s);
static int eq_R1037(R1037 a, R1037 b);
static void as_R1035(R1035 *d, R1035 s);
static R1035 cp_R1035(R1035 s);
static int eq_R1035(R1035 a, R1035 b);
static void as_R1033(R1033 *d, R1033 s);
static R1033 cp_R1033(R1033 s);
static int eq_R1033(R1033 a, R1033 b);
static void as_R1031(R1031 *d, R1031 s);
static R1031 cp_R1031(R1031 s);
static int eq_R1031(R1031 a, R1031 b);
static void as_R1029(R1029 *d, R1029 s);
static R1029 cp_R1029(R1029 s);
static int eq_R1029(R1029 a, R1029 b);
static void as_R1027(R1027 *d, R1027 s);
static R1027 cp_R1027(R1027 s);
static int eq_R1027(R1027 a, R1027 b);
static void as_A1025(A1025 *d, A1025 s);
static A1025 cp_A1025(A1025 s);
static int eq_A1025(A1025 a, A1025 b);
static void as_R1022(R1022 *d, R1022 s);
static R1022 cp_R1022(R1022 s);
static int eq_R1022(R1022 a, R1022 b);
static P1019 f_mk_3(rstr *s_2);
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
static P1049 f_new_buffer_24(void);
static void f_put_27(P1049 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P1049 b_30);
static void f_splice_34(P1049 a_32, P1049 b_33);
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
static void f_write_library_62(P1026 u_61);
static P1026 f_nn_65(rt_int kind_63, rt_int line_64);
static void f_append_69(P1026 *head_66, P1026 *tail_67, P1026 x_68);
static rt_int f_list_len_71(P1026 l_70);
static rt_int f_cur_line_72(void);
static int f_at_kw_74(rstr *w_73);
static int f_at_op_76(rstr *w_75);
static int f_at_kind_78(rt_int k_77);
static rt_int f_kind_at_80(rt_int k_79);
static P1019 f_text_at_82(rt_int k_81);
static void f_perror_84(rstr *msg_83);
static int f_accept_kw_86(rstr *w_85);
static int f_accept_op_88(rstr *w_87);
static void f_expect_kw_90(rstr *w_89);
static void f_expect_op_92(rstr *w_91);
static P1019 f_expect_id_93(void);
static P1026 f_name_node_94(void);
static P1026 f_id_list_95(void);
static P1026 f_p_subtype_96(void);
static P1026 f_constraint_list_97(void);
static P1026 f_actual_params_98(void);
static int f_is_type_word_100(rstr *w_99);
static P1026 f_actual_tt_101(void);
static P1026 f_binop_106(P1019 op_102, P1026 l_103, P1026 r_104, rt_int line_105);
static P1026 f_expr_107(void);
static P1026 f_expr_and_108(void);
static P1026 f_expr_not_109(void);
static int f_is_rel_111(rstr *s_110);
static P1026 f_expr_rel_112(void);
static P1026 f_expr_add_113(void);
static P1026 f_expr_mul_114(void);
static P1026 f_expr_pow_115(void);
static P1026 f_expr_prefix_116(void);
static P1026 f_postfix_117(void);
static P1026 f_primary_118(void);
static P1026 f_constructor_item_119(void);
static int f_at_body_end_120(void);
static P1026 f_body_121(void);
static P1026 f_body_element_122(void);
static P1026 f_declaration_123(void);
static P1026 f_object_decl_124(void);
static P1026 f_abbrev_decl_125(void);
static P1026 f_rep_spec_126(void);
static P1026 f_rep_items_127(void);
static int f_rep_word_129(rt_int k_128);
static P1026 f_rep_item_130(void);
static P1026 f_type_decl_131(void);
static rt_int f_mode_of_133(rstr *w_132);
static P1026 f_formal_params_134(void);
static int f_imports_list_136(P1026 owner_135);
static int f_is_definable_138(rstr *w_137);
static P1019 f_definable_name_139(void);
static P1026 f_subprogram_decl_140(void);
static P1026 f_capsule_decl_141(void);
static P1026 f_formal_tt_142(void);
static P1026 f_generic_decl_143(void);
static P1026 f_type_list_144(void);
static P1026 f_task_decl_145(void);
static P1026 f_expose_decl_146(void);
static int f_is_compound_kw_148(rstr *w_147);
static P1026 f_statement_149(void);
static P1026 f_unlabeled_statement_150(void);
static P1026 f_arm_154(P1026 cond_151, P1026 b_152, rt_int line_153);
static P1026 f_if_stmt_155(void);
static P1026 f_case_stmt_156(void);
static P1026 f_repeat_stmt_157(void);
static P1026 f_guard_stmt_158(void);
static P1026 f_program_159(void);
static rt_int f_hash_161(rstr *s_160);
static P1036 f_lookup_163(rstr *name_162);
static P1036 f_lookup_decl_165(P1026 d_164);
static void f_define_168(P1036 y_166, rt_int line_167);
static int f_overloadable_170(P1036 y_169);
static int f_same_tt_173(P1026 a_171, P1026 b_172);
static int f_same_signature_176(P1038 a_174, P1038 b_175);
static void f_open_scope_177(void);
static void f_close_scope_178(void);
static P1036 f_new_sym_181(rt_int kind_179, P1019 name_180);
static P1032 f_new_typ_183(rt_int kind_182);
static P1028 f_new_cons_184(void);
static int f_scalar_kind_186(P1032 t_185);
static rstr f_bound_ctype_188(P1032 t_187);
static rstr f_cbound_191(P1028 c_189, rstr *b_190);
static rstr f_clo_193(P1028 c_192);
static rstr f_chi_195(P1028 c_194);
static rstr f_sub_lo_198(P1032 t_196, P1028 c_197);
static rstr f_sub_hi_201(P1032 t_199, P1028 c_200);
static rstr f_raw_storage_204(rstr *name_202, rstr *ct_203);
static P1028 f_copy_cons_206(P1028 c_205);
static P1028 f_freeze_209(P1028 c_207, P1032 t_208);
static rstr f_checked_213(P1032 t_210, P1028 c_211, rstr *v_212);
static int f_same_lits_216(P1026 a_214, P1026 b_215);
static P1032 f_str_elem_218(P1032 t_217);
static int f_same_221(P1032 a_219, P1032 b_220);
static P1032 f_base_of_223(P1032 t_222);
static P1028 f_base_cons_226(P1032 t_224, P1028 c_225);
static rstr f_kind_name_228(P1032 t_227);
static void f_check_type_232(P1032 got_229, P1032 want_230, rt_int line_231);
static rstr f_ctype_234(P1032 t_233);
static rstr f_struct_body_236(P1032 t_235);
static rstr f_field_decls_238(P1032 t_237);
static void f_declare_ctype_240(P1032 t_239);
static rstr f_dim_lo_242(rt_int k_241);
static rstr f_dim_hi_244(rt_int k_243);
static rstr f_more_dims_246(P1032 t_245);
static rstr f_acnt_249(P1032 t_247, rstr *base_248);
static P1019 f_cons_lo_252(P1028 c_250, rt_int k_251);
static P1019 f_cons_hi_255(P1028 c_253, rt_int k_254);
static P1032 f_idx_type_258(P1032 t_256, rt_int k_257);
static void f_init_ascii_259(void);
static P1032 f_enum2_262(rstr *a_260, rstr *b_261);
static rt_int f_lit_index_265(P1026 lits_263, rstr *name_264);
static P1032 f_resolve_subtype_268(P1026 st_266, P1028 *c_267);
static int f_float_lit_270(P1026 e_269);
static void f_tag_constraint_274(P1032 t_271, P1026 e_272, P1028 c_273);
static P1032 f_named_subtype_277(P1026 st_275, P1028 *c_276);
static P1032 f_invoke_abbrev_281(P1036 y_278, P1026 st_279, P1028 *c_280);
static void f_apply_constraint_286(P1032 t_282, P1026 args_283, P1028 c_284, rt_int line_285);
static P1032 f_value_subtype_290(P1026 e_287, P1028 *c_288, P1019 *base_289);
static P1030 f_reverse_pairs_292(P1030 l_291);
static P1032 f_inquiry_295(P1026 st_293, P1028 *c_294);
static P1026 f_as_subtype_297(P1026 e_296);
static P1026 f_tt_subtype_302(P1019 name_298, P1026 tt_299, P1026 args_300, rt_int line_301);
static int f_type_name_304(rstr *name_303);
static rstr f_empty_set_306(P1032 t_305);
static int f_opened_308(P1032 t_307);
static rstr f_replace_all_312(rstr *s_309, rstr *pat_310, rstr *r_311);
static rstr f_subst_314(rstr *s_313);
static P1032 f_new_type_318(P1036 y_315, P1026 st_316, P1028 *c_317);
static rt_int f_needed_bits_321(P1032 t_319, P1028 c_320);
static int f_has_digits_only_323(rstr *s_322);
static int f_built_in_only_325(P1032 t_324);
static void f_check_rep_332(P1026 items_326, P1032 t_327, P1028 c_328, int top_329, int indirect_330, P1026 d_331);
static int f_formal_named_335(P1026 d_333, rstr *name_334);
static int f_unchecked_free_337(P1032 t_336);
static void f_init_storage_341(rstr *lval_338, P1032 t_339, P1028 c_340);
static rstr f_init_call_344(P1036 y_342, rstr *lval_343);
static int f_needs_fin_346(P1032 t_345);
static rstr f_fin_code_349(rstr *lval_347, P1032 t_348);
static P1032 f_tparam_type_352(P1032 t_350, rstr *name_351);
static void f_make_storage_356(rstr *lval_353, P1032 t_354, P1028 c_355);
static int f_flat_358(P1032 t_357);
static rstr f_uninit_value_360(P1032 t_359);
static rstr f_init_chk_363(P1032 t_361, rstr *v_362);
static rt_int f_manifest_366(P1026 e_364, int *ok_365);
static P1045 f_mk_mval_369(rt_int kind_367, rt_int i_368);
static rt_int f_ipow_372(rt_int a_370, rt_int b_371);
static P1045 f_meval_375(P1026 e_373, int *ok_374);
static P1045 f_float_op_380(rstr *op_376, P1045 a_377, P1045 b_378, int *ok_379);
static rstr f_bool_text_382(int b_381);
static rt_int f_bool_i_384(int b_383);
static rstr f_mstr_386(P1045 v_385);
static int f_ascii_char_388(rt_int i_387);
static int f_user_defined_390(rstr *op_389);
static rstr f_mcopy_392(P1032 t_391);
static int f_composite_394(P1032 t_393);
static rstr f_user_call2_400(P1036 y_395, rstr *a_396, int lv_a_397, rstr *b_398, int lv_b_399);
static rstr f_user_arg_404(P1038 pm_401, rstr *v_402, int lv_403);
static int f_top_level_406(P1036 y_405);
static rstr f_assign_code_411(rstr *lval_407, P1032 t_408, rstr *v_409, P1028 c_410);
static rstr f_copy_code_414(P1032 t_412, rstr *v_413);
static rstr f_eq_code_418(P1032 t_415, rstr *a_416, rstr *b_417);
static rstr f_elem_assign_422(rstr *lval_419, P1032 t_420, rstr *v_421);
static int f_seen_name_425(P1030 l_423, rstr *s_424);
static void f_emit_helpers_426(void);
static void f_helper_bodies_428(P1032 t_427);
static void f_declare_body_430(P1026 elems_429);
static void f_manifest_const_432(P1026 d_431);
static int f_exported_436(P1026 d_433, rstr *name_434, int *ro_435);
static P1036 f_copy_sym_438(P1036 y_437);
static void f_gen_capsule_440(P1026 d_439);
static int f_imports_variables_442(P1026 d_441);
static void f_elaborate_pending_444(P1036 y_443);
static int f_pending_capsule_446(rstr *name_445);
static void f_capsule_params_450(P1026 d_447, P1026 args_448, rt_int line_449);
static void f_elaborate_capsule_455(P1026 d_451, P1036 y_452, P1026 args_453, P1026 owner_454);
static int f_exports_op_458(P1026 d_456, rstr *op_457);
static P1019 f_renamed_461(P1026 d_459, P1036 z_460);
static int f_cap_tt_match_464(P1026 f_462, P1026 a_463);
static P1036 f_pick_capsule_466(P1026 d_465);
static P1036 f_capsule_instance_469(P1036 g_467, P1026 d_468);
static void f_configure_471(P1036 y_470);
static void f_gen_expose_473(P1026 d_472);
static void f_finish_ptr_475(P1032 t_474);
static P1026 f_ptr_args_477(P1028 c_476);
static void f_bind_ptr_params_482(P1026 formals_478, P1026 actuals_479, rstr *cell_480, rt_int line_481);
static void f_alloc_cell_487(P1026 s_483, rstr *lv_484, P1032 t_485, P1028 c_486);
static P1028 f_freeze_args_491(P1028 c_488, P1032 t_489, rt_int line_490);
static void f_ptr_subtype_check_495(P1032 t_492, P1028 c_493, P1026 src_494);
static void f_normal_function_498(P1026 d_496, P1036 y_497);
static void f_foreign_body_501(P1026 d_499, P1036 y_500);
static void f_declare_subprogram_503(P1026 d_502);
static P1036 f_build_subprogram_505(P1026 d_504);
static int f_has_pragmat_508(P1019 pr_506, rstr *p_507);
static P1019 f_suppressing_510(P1019 pr_509);
static int f_suppressed_512(rstr *x_511);
static void f_element_514(P1026 e_513);
static void f_element1_516(P1026 e_515);
static rstr f_storage_519(rstr *name_517, P1032 t_518);
static void f_bind_522(P1036 y_520, rstr *access_521);
static void f_var_decl_524(P1026 d_523);
static void f_located_var_526(P1026 d_525);
static rstr f_rep_sync_529(P1036 y_527, int pack_528);
static rstr f_cbound_access_531(P1036 y_530);
static rstr f_rep_size_535(P1026 items_532, P1032 t_533, P1028 c_534);
static P1026 f_rep_find_538(P1026 items_536, rstr *w_537);
static P1026 f_rep_comp_541(P1026 items_539, rstr *name_540);
static rt_int f_default_bits_544(P1032 t_542, P1028 c_543);
static rstr f_rep_code_551(P1032 t_545, P1028 c_546, P1026 items_547, rstr *lval_548, rstr *addr_549, int pack_550);
static rstr f_union_part_553(P1032 t_552);
static rstr f_rep_scalar_560(P1032 t_554, P1028 c_555, rstr *lval_556, rstr *addr_557, rstr *size_558, int pack_559);
static void f_max_range_563(P1032 t_561, P1028 c_562);
static void f_var_decl2_565(P1026 d_564);
static void f_open_fin_567(rstr *fc_566);
static void f_close_fins_569(P1030 saved_568);
static void f_const_decl_571(P1026 d_570);
static void f_subprogram_573(P1026 d_572);
static void f_gen_subprogram_576(P1026 d_574, P1036 y_575);
static rstr f_waits_of_578(P1026 d_577);
static rstr f_task_waits_580(P1026 elems_579);
static void f_await_tasks_582(P1026 elems_581);
static void f_capsule_elements_584(P1026 elems_583);
static void f_declare_labels_586(P1026 elems_585);
static void f_start_labels_587(void);
static P1051 f_goto_label_589(rstr *name_588);
static int f_has_return_591(P1026 e_590);
static void f_capsule_body_593(P1026 elems_592);
static void f_body_elements_595(P1026 elems_594);
static void f_gen_body_597(P1026 elems_596);
static rstr f_open_unhandled_599(P1026 elems_598);
static void f_close_unhandled_601(rstr *xu_600);
static void f_pop_frames_603(rt_int upto_602);
static void f_push_cleanup_605(rstr *s_604);
static void f_pop_cleanup_606(void);
static void f_gen_statement_608(P1026 s_607);
static P1036 f_located_in_611(P1026 e_609, P1036 found_610);
static int f_sym_in_614(P1036 l_612, P1036 y_613);
static void f_gen_statement2_616(P1026 s_615);
static void f_st_assign_618(P1026 s_617);
static void f_st_call_620(P1026 s_619);
static void f_st_if_622(P1026 s_621);
static int f_manifest_case_624(P1026 s_623);
static void f_st_case_626(P1026 s_625);
static void f_st_case2_628(P1026 s_627);
static void f_user_for_632(P1026 s_629, P1032 t_630, P1028 c_631);
static void f_st_repeat_634(P1026 s_633);
static void f_st_exit_636(P1026 s_635);
static void f_st_return_638(P1026 s_637);
static rstr f_result_checked_642(P1032 t_639, P1028 c_640, rstr *v_641);
static rstr f_exc_id_645(rstr *name_643, rt_int line_644);
static void f_st_guard_647(P1026 s_646);
static void f_st_alloc_649(P1026 s_648);
static rstr f_act_ref_651(P1026 e_650);
static void f_st_create_653(P1026 s_652);
static void f_hidden_var_657(rstr *name_654, P1032 t_655, rstr *place_656);
static void f_user_create_663(P1026 s_658, P1036 y_659, rstr *uv_660, P1032 ut_661, rstr *nf_662);
static rstr f_wait_alt_668(P1026 inv_664, rstr *arr_665, rt_int i_666, int mixed_667);
static int f_builtin_wait_670(P1026 inv_669);
static rstr f_wait_op_675(P1026 inv_671, rstr *op_672, rstr *q_673, int is_stmt_674);
static void f_user_wait_680(P1026 s_676, rstr *arr_677, rstr *w_678, rt_int n_679);
static void f_st_wait_682(P1026 s_681);
static P1026 f_call_node_686(rstr *name_683, P1026 arg_684, rt_int line_685);
static void f_user_region_688(P1026 s_687);
static void f_st_region_690(P1026 s_689);
static P1026 f_gparam_693(P1026 g_691, rstr *name_692);
static P1036 f_bind_sym_695(P1026 p_694);
static int f_same_binds_698(P1036 a_696, P1036 b_697);
static int f_same_binding_701(P1036 a_699, P1036 b_700);
static P1036 f_tt_binds_706(P1026 gd_702, P1026 formals_703, P1026 actuals_704, rt_int line_705);
static int f_type_allowed_710(P1032 t_707, P1026 items_708, P1036 binds_709);
static P1032 f_resolve_in_binds_714(P1026 st_711, P1036 binds_712, P1028 *c_713);
static P1036 f_pick_operation_721(rt_int kind_715, rstr *name_716, P1026 sig_717, P1026 res_718, P1036 binds_719, rt_int line_720);
static rstr f_kind_word_723(rt_int kind_722);
static P1036 f_need_binds_727(P1026 gd_724, P1036 binds_725, rt_int line_726);
static int f_generic_use_729(P1026 st_728);
static P1036 f_infer_from_734(P1026 gd_730, P1026 pat_731, P1032 t_732, P1036 known_733);
static P1032 f_instantiate_type_740(P1036 g_735, P1026 tt_736, P1026 args_737, P1028 *c_738, rt_int line_739);
static P1036 f_instantiate_745(P1036 g_741, P1026 tt_742, P1026 args_743, rt_int line_744);
static rstr f_access_of_747(P1036 y_746);
static P1026 f_import_of_750(P1026 l_748, rstr *name_749);
static int f_check_import_753(P1036 y_751, rt_int line_752);
static rstr f_c_ident_755(rstr *s_754);
static rstr f_cell_deref_758(P1032 t_756, rstr *p_757);
static rstr f_deref_761(rstr *base_759, P1032 t_760);
static int f_is_lvalue_763(P1026 e_762);
static void f_lvalue_769(P1026 e_764, P1019 *code_765, P1032 *t_766, P1028 *c_767, int *ro_768);
static void f_select_on_777(rstr *base_770, P1032 bt_771, P1026 e_772, int *ro_773, P1019 *code_774, P1032 *t_775, P1028 *c_776);
static int f_has_call_779(rstr *s_778);
static void f_need_slice_781(P1032 t_780);
static rstr f_ix_785(rstr *i_782, rstr *lo_783, rstr *hi_784);
static void f_index_on_794(rstr *base_786, P1032 bt_787, P1026 e_788, int *ro_789, int lv_790, P1019 *code_791, P1032 *t_792, P1028 *c_793);
static int f_own_attribute_796(P1026 e_795);
static rstr f_gexpr_800(P1026 e_797, P1032 want_798, P1032 *t_799);
static rstr f_resolved_803(P1026 e_801, P1032 *t_802);
static rstr f_gexpr_in_808(P1026 e_804, P1032 want_805, P1028 c_806, P1032 *t_807);
static rstr f_ascii_lit_810(int ch_809);
static rstr f_octal_812(rt_int n_811);
static P1032 f_str_cat_part_814(P1032 t_813);
static P1032 f_peek_type_816(P1026 e_815);
static P1032 f_set_operands_819(P1026 e_817, P1032 want_818);
static P1026 f_user_dot_821(P1026 e_820);
static P1026 f_user_subscript_823(P1026 e_822);
static P1026 f_op_call_827(rstr *name_824, P1026 args_825, rt_int line_826);
static P1026 f_derived_relation_829(P1026 e_828);
static P1026 f_rel_node_834(rstr *op_830, P1026 a_831, P1026 b_832, rt_int line_833);
static P1026 f_rel_not_837(P1026 x_835, rt_int line_836);
static P1026 f_copy_node_839(P1026 e_838);
static P1026 f_wrap_apply_841(P1026 e_840);
static rstr f_c_string_843(rstr *s_842);
static P1032 f_enum_type_of_846(rstr *lit_844, rt_int line_845);
static int f_ptr_attribute_848(P1026 e_847);
static rstr f_attribute_851(P1026 e_849, P1032 *t_850);
static rstr f_subtype_compare_856(P1026 sa_852, P1026 sb_853, rstr *op_854, rt_int line_855);
static rstr f_float_prec_858(P1028 c_857);
static rstr f_file_attribute_864(P1026 e_859, P1032 bt_860, P1028 c_861, P1019 base_862, P1032 *t_863);
static rstr f_gbinop_868(P1026 e_865, P1032 want_866, P1032 *t_867);
static rstr f_constructor_873(P1026 e_869, P1032 want_870, P1028 ctx_871, P1032 *t_872);
static rstr f_comp_value_877(P1032 t_874, P1028 c_875, rstr *v_876);
static int f_has_at_879(rstr *s_878);
static rstr f_set_elem_882(P1032 st_880, rstr *v_881);
static rstr f_array_cons_887(P1026 e_883, P1032 at_884, P1028 ctx_885, P1032 *t_886);
static rstr f_fill_items_893(P1026 items_888, P1032 at_889, rstr *tmp_890, P1030 prefix_891, rt_int dim_892);
static rt_int f_e_line_895(P1026 e_894);
static P1030 f_add_line_898(P1030 l_896, rstr *s_897);
static rstr f_item_value_903(P1026 e_899, P1032 at_900, rt_int line_901, P1032 *vt_902);
static rstr f_key_loop_908(P1026 k_904, P1032 at_905, rt_int d_906, rstr *xv_907);
static rstr f_store_at_913(P1032 at_909, rstr *tmp_910, P1030 xs_911, rt_int n_912);
static int f_fits_916(P1036 y_914, P1026 args_915);
static P1036 f_resolve_overload_922(rstr *name_917, P1026 tt_918, P1026 args_919, int is_stmt_920, rt_int line_921);
static int f_tt_fits_925(P1036 y_923, P1026 tt_924);
static P1036 f_overload_chain_928(rstr *name_926, rt_int pass_927);
static int f_is_builtin_930(rstr *n_929);
static int f_is_low_level_932(rstr *n_931);
static rstr f_me_high_936(P1026 tt_933, rt_int line_934, P1032 *t_935);
static rstr f_type_tag_938(P1032 t_937);
static rstr f_lock_ref_941(P1026 e_939, rstr *name_940);
static P1036 f_user_op_944(rstr *op_942, P1026 args_943);
static rstr f_gcall_948(P1026 e_945, int is_stmt_946, P1032 *t_947);
static P1030 f_requires_950(P1036 y_949);
static void f_add_req_953(P1036 y_951, rstr *name_952);
static void f_require_calls_956(P1036 y_954, P1026 e_955);
static int f_declared_in_959(P1026 elems_957, rstr *name_958);
static void f_check_requires_962(P1036 y_960, rt_int line_961);
static rstr f_act_delay_args_964(P1026 args_963);
static rstr f_same_subtypes_967(P1026 gd_965, P1026 args_966);
static rstr f_mailbox_low_972(rstr *name_968, P1026 args_969, rt_int line_970, P1032 *t_971);
static P1032 f_exponent_want_975(rstr *op_973, P1032 ta_974);
static rstr f_file_ref_979(P1026 e_976, int text_977, rt_int line_978);
static int f_text_file_981(P1032 t_980);
static rstr f_conversion_986(P1026 tt_982, P1026 args_983, rt_int line_984, P1032 *t_985);
static rstr f_float_digits_988(P1026 e_987);
static rstr f_enum_names_990(P1032 t_989);
static int f_explicit_rep_992(P1026 e_991);
static rstr f_actual_bounds_996(P1032 ft_993, P1032 t_994, P1028 c_995);
static rstr f_builtin_1003(rstr *name_997, P1026 tt_998, P1026 args_999, rt_int line_1000, int is_stmt_1001, P1032 *t_1002);
static P1026 f_with_library_1005(P1026 units_1004);
static P1019 f_external_missing_1008(P1026 e_1006, P1026 units_1007);
static int f_unit_named_1011(P1026 units_1009, rstr *name_1010);
static int f_tried_1013(rstr *name_1012);
static void f_mark_tried_1015(rstr *name_1014);
static void f_translate_1017(P1026 units_1016);
static void f_print_program_1018(void);
static int ex_compile_error_1;
static P1023 g_toks_1057;
static rt_int g_ntoks_1058;
static rt_int g_tpos_1059;
static rt_int g_src_line_1060;
static P1019 g_pending_prag_1061;
static P1030 g_src_head_1062;
static P1030 g_src_tail_1063;
static rt_int g_ntoks_before_library_1064;
static P1030 g_library_tried_1065;
static P1040 g_table_1066;
static P1040 g_genv_1067;
static P1036 g_all_insts_1068;
static rt_int g_depth_1069;
static P1036 g_scope_stack_1070;
static P1032 g_all_types_1071;
static rt_int g_serial_1072;
static P1049 g_out_types_1073;
static P1049 g_out_helpers_1074;
static P1049 g_out_protos_1075;
static P1049 g_out_globals_1076;
static P1049 g_out_funcs_1077;
static P1049 g_out_init_1078;
static P1049 g_out_excs_1079;
static P1049 g_code_1080;
static P1049 g_fields_buf_1081;
static int g_in_func_1082;
static rt_int g_cur_level_1083;
static P1043 g_fctx_1084;
static P1053 g_caps_1085;
static P1055 g_cap_waits_1086;
static P1030 g_psub_1087;
static P1019 g_st_field_1088;
static P1049 g_out_frames_1089;
static P1049 g_out_roots_1090;
static int g_uses_free_1091;
static P1030 g_fins_1092;
static int g_uses_findyn_1093;
static P1036 g_func_sym_1094;
static P1028 g_func_rc_1095;
static P1019 g_cap_ret_1096;
static P1019 g_cap_rflag_1097;
static rt_int g_ret_frames_1098;
static rt_int g_gdepth_1099;
static P1019 g_suppress_1100;
static P1028 g_cons_ctx_1101;
static int g_mark_uninit_1102;
static P1051 g_exits_1103;
static P1051 g_gotos_1104;
static rt_int g_frames_1105;
static P1030 g_handlers_1106;
static P1030 g_cleanups_1107;
static rt_int g_trial_1108;
static P1030 g_mcopies_1109;
static P1032 g_ty_int_1110;
static P1032 g_ty_bool_1111;
static P1032 g_ty_float_1112;
static P1032 g_ty_ascii_1113;
static P1032 g_ty_string_1114;
static P1032 g_ty_void_1115;
static P1032 g_ty_file_1116;
static P1032 g_ty_nil_1117;
static P1032 g_ty_lock_1118;
static P1032 g_ty_latch_1119;
static P1032 g_ty_act_1120;
static P1032 g_file_mode_type_1121;
static P1032 g_ty_send_st_1122;
static P1032 g_ty_receive_st_1123;
static P1032 g_ty_text_file_1124;
static P1032 g_file_state_type_1125;
static P1032 g_file_disp_type_1126;
static P1032 g_file_access_type_1127;
static P1028 g_no_cons_1128;
static P1019 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_1129 = NULL;
{ P1019 cell1130 = rt_alloc(sizeof *cell1130);
rt_int pv1131 = ((rt_int)(((*F->s_2)).len));
cell1130->p_n = pv1131;
cell1130->all = rt_str_new(pv1131);
rt_str_assign(&cell1130->all, (*F->s_2));
F->t_1129 = cell1130;
}
F->result_ = F->t_1129;
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
F->r_1132 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_1132, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_1132;
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
F->r_1133 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_1133, (*F->s_14));
{ rt_int lo1135 = ((rt_int)1LL), hi1136 = ((rt_int)(((*F->s_14)).len));
for (rt_int it1137 = lo1135; it1137 <= hi1136; it1137++) {
F->i_1134 = it1137;
if (((65 <= rt_r_echk(rt_str_get(F->r_1133, F->i_1134))) && (rt_r_echk(rt_str_get(F->r_1133, F->i_1134)) <= 90))) {
(*rt_str_at(&F->r_1133, F->i_1134)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_r_echk(rt_str_get(F->r_1133, F->i_1134))) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_1133;
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
F->l_1138 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_1139 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_1138), rt_str(" ", 1)));
{ rt_int lo1141 = ((rt_int)1LL), hi1142 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_1139).len))), ((rt_int)1LL));
for (rt_int it1143 = lo1141; it1143 <= hi1142; it1143++) {
F->i_1140 = it1143;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_1140, rt_sub(rt_add(F->i_1140, ((rt_int)((F->w_1139).len))), ((rt_int)1LL))), F->w_1139)) {
F->result_ = rt_str_cat(F->l_1138, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_1138;
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
g_serial_1072 = rt_add(rt_r_ichk(g_serial_1072), ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(rt_r_ichk(g_serial_1072)));
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
if ((rt_r_ichk(g_trial_1108) == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P1049 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_1144 = NULL;
{ R1050 *cell1145 = rt_alloc(sizeof(R1050));
(*cell1145).head = NULL;
(*cell1145).tail = NULL;
F->b_1144 = cell1145;
}
F->result_ = F->b_1144;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P1049 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_1146 = NULL;
{ R1031 *cell1147 = rt_alloc(sizeof(R1031));
(*cell1147).s = NULL;
(*cell1147).next = NULL;
F->l_1146 = cell1147;
}
(*(P1030)rt_nil_check(F->l_1146)).s = f_mk_3(&(*F->s_26));
if (((*(P1049)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P1049)rt_nil_check(F->b_25)).head = F->l_1146;
} else {
(*(P1030)rt_nil_check((*(P1049)rt_nil_check(F->b_25)).tail)).next = F->l_1146;
}
(*(P1049)rt_nil_check(F->b_25)).tail = F->l_1146;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_1080, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P1049 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_1148 = NULL;
F->l_1148 = (*(P1049)rt_nil_check(F->b_30)).head;
while ((F->l_1148 != NULL)) {
rt_putln((((P1019)rt_nil_check((*(P1030)rt_nil_check(F->l_1148)).s))->all));
F->l_1148 = (*(P1030)rt_nil_check(F->l_1148)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P1049 a_32, P1049 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P1049)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P1049)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P1049)rt_nil_check(F->a_32)).head = (*(P1049)rt_nil_check(F->b_33)).head;
} else {
(*(P1030)rt_nil_check((*(P1049)rt_nil_check(F->a_32)).tail)).next = (*(P1049)rt_nil_check(F->b_33)).head;
}
(*(P1049)rt_nil_check(F->a_32)).tail = (*(P1049)rt_nil_check(F->b_33)).tail;
(*(P1049)rt_nil_check(F->b_33)).head = NULL;
(*(P1049)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel1149 = (*F->w_35);
if (0 || rt_str_eq(sel1149, rt_str("ABBREV", 6)) || rt_str_eq(sel1149, rt_str("ABNORMAL", 8)) || rt_str_eq(sel1149, rt_str("ALL", 3)) || rt_str_eq(sel1149, rt_str("ALLOC", 5)) || rt_str_eq(sel1149, rt_str("ASSERT", 6)) || rt_str_eq(sel1149, rt_str("BEGIN", 5)) || rt_str_eq(sel1149, rt_str("BY", 2)) || rt_str_eq(sel1149, rt_str("CAPSULE", 7)) || rt_str_eq(sel1149, rt_str("CASE", 4)) || rt_str_eq(sel1149, rt_str("CONST", 5)) || rt_str_eq(sel1149, rt_str("CREATE", 6)) || rt_str_eq(sel1149, rt_str("DO", 2)) || rt_str_eq(sel1149, rt_str("ELSE", 4)) || rt_str_eq(sel1149, rt_str("ELSEIF", 6)) || rt_str_eq(sel1149, rt_str("END", 3)) || rt_str_eq(sel1149, rt_str("EXCEPTION", 9)) || rt_str_eq(sel1149, rt_str("EXIT", 4)) || rt_str_eq(sel1149, rt_str("EXPORTS", 7)) || rt_str_eq(sel1149, rt_str("EXPOSE", 6)) || rt_str_eq(sel1149, rt_str("EXTERNAL", 8)) || rt_str_eq(sel1149, rt_str("FOR", 3)) || rt_str_eq(sel1149, rt_str("FROM", 4)) || rt_str_eq(sel1149, rt_str("FUNC", 4)) || rt_str_eq(sel1149, rt_str("GENERIC", 7)) || rt_str_eq(sel1149, rt_str("GOTO", 4)) || rt_str_eq(sel1149, rt_str("GUARD", 5)) || rt_str_eq(sel1149, rt_str("IF", 2)) || rt_str_eq(sel1149, rt_str("IMPORTS", 7)) || rt_str_eq(sel1149, rt_str("LOCATION", 8)) || rt_str_eq(sel1149, rt_str("NAMED", 5)) || rt_str_eq(sel1149, rt_str("NEEDS", 5)) || rt_str_eq(sel1149, rt_str("NEW", 3)) || rt_str_eq(sel1149, rt_str("NONE", 4)) || rt_str_eq(sel1149, rt_str("OUT", 3)) || rt_str_eq(sel1149, rt_str("OF", 2)) || rt_str_eq(sel1149, rt_str("PRAG", 4)) || rt_str_eq(sel1149, rt_str("PROC", 4)) || rt_str_eq(sel1149, rt_str("RAISE", 5)) || rt_str_eq(sel1149, rt_str("READONLY", 8)) || rt_str_eq(sel1149, rt_str("REVERSE", 7)) || rt_str_eq(sel1149, rt_str("REGION", 6)) || rt_str_eq(sel1149, rt_str("RENAMING", 8)) || rt_str_eq(sel1149, rt_str("REP", 3)) || rt_str_eq(sel1149, rt_str("REPEAT", 6)) || rt_str_eq(sel1149, rt_str("RERAISE", 7)) || rt_str_eq(sel1149, rt_str("RETURN", 6)) || rt_str_eq(sel1149, rt_str("SUBTYPE", 7)) || rt_str_eq(sel1149, rt_str("TASK", 4)) || rt_str_eq(sel1149, rt_str("THEN", 4)) || rt_str_eq(sel1149, rt_str("TO", 2)) || rt_str_eq(sel1149, rt_str("TYPE", 4)) || rt_str_eq(sel1149, rt_str("VAR", 3)) || rt_str_eq(sel1149, rt_str("WAIT", 4)) || rt_str_eq(sel1149, rt_str("WHEN", 4)) || rt_str_eq(sel1149, rt_str("WHILE", 5))) {
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
F->t_1150 = NULL;
{ R1022 *cell1151 = rt_alloc(sizeof(R1022));
(*cell1151).s = NULL;
(*cell1151).prags = NULL;
F->t_1150 = cell1151;
}
(*(P1021)rt_nil_check(F->t_1150)).kind = F->kind_39;
(*(P1021)rt_nil_check(F->t_1150)).line = rt_r_ichk(g_src_line_1060);
(*(P1021)rt_nil_check(F->t_1150)).ival = F->ival_41;
(*(P1021)rt_nil_check(F->t_1150)).s = f_mk_3(&(*F->s_40));
(*(P1021)rt_nil_check(F->t_1150)).prags = g_pending_prag_1061;
g_pending_prag_1061 = NULL;
g_ntoks_1058 = rt_add(rt_r_ichk(g_ntoks_1058), ((rt_int)1LL));
(((P1023)rt_nil_check(g_toks_1057))->all).p[(rt_index(rt_r_ichk(g_ntoks_1058), (((P1023)rt_nil_check(g_toks_1057))->all).lo, (((P1023)rt_nil_check(g_toks_1057))->all).hi) - (((P1023)rt_nil_check(g_toks_1057))->all).lo)] = F->t_1150;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_1152 = RT_R_IUNDEF;
F->j_1152 = rt_add(F->i_44, ((rt_int)1LL));
while (((rt_r_ichk(F->j_1152) <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1152)))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1152))))) || (rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1152))) == 95)))) {
if (((rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1152))) == 95) && ((rt_r_ichk(F->j_1152) == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_1152), ((rt_int)1LL))))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_1152), ((rt_int)1LL)))))))))) {
f_fail_23(rt_r_ichk(g_src_line_1060), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_1152 = rt_add(rt_r_ichk(F->j_1152), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_1152);
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
F->w_1153 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_1153, (*F->s_46));
{ rt_int lo1155 = ((rt_int)1LL), hi1156 = ((rt_int)((F->w_1153).len));
for (rt_int it1157 = lo1155; it1157 <= hi1156; it1157++) {
F->k_1154 = it1157;
(*rt_str_at(&F->w_1153, F->k_1154)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1153, F->k_1154)));
}
}
F->result_ = F->w_1153;
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
F->j_1158 = RT_R_IUNDEF;
F->j_1158 = F->i_49;
while (((rt_r_ichk(F->j_1158) <= ((rt_int)(((*F->line_48)).len))) && ((rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_1158))) == 32) || (rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_1158))) == 9)))) {
F->j_1158 = rt_add(rt_r_ichk(F->j_1158), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_1158);
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
F->j_1159 = RT_R_IUNDEF;
F->j_1159 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_1160 = NULL;
F->r_1160 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_1161 = RT_R_EUNDEF;
F->more_1161 = 1;
if (((rt_r_ichk(F->j_1159) > ((rt_int)(((*F->line_51)).len))) || (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1159))) != 40))) {
f_fail_23(rt_r_ichk(g_src_line_1060), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_1159 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
while (rt_r_echk(F->more_1161)) {
F->k_1162 = RT_R_IUNDEF;
F->j_1159 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1159));
if (((rt_r_ichk(F->j_1159) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1159))))))) {
f_fail_23(rt_r_ichk(g_src_line_1060), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_1162 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_1159));
F->r_1160 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_1160))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_1159), rt_sub(rt_r_ichk(F->k_1162), ((rt_int)1LL))); b_; }))); b_; }));
F->j_1159 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_1162));
if (((rt_r_ichk(F->j_1159) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1159))) == 40))) {
F->go_1163 = RT_R_EUNDEF;
F->go_1163 = 1;
F->r_1160 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_1160))->all), rt_str("(", 1)); b_; }));
F->j_1159 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
while (rt_r_echk(F->go_1163)) {
F->j_1159 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1159));
if (((rt_r_ichk(F->j_1159) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1159))))))) {
f_fail_23(rt_r_ichk(g_src_line_1060), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_1162 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_1159));
F->r_1160 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_1160))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_1159), rt_sub(rt_r_ichk(F->k_1162), ((rt_int)1LL))); b_; }))); b_; }));
F->j_1159 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_1162));
if (((rt_r_ichk(F->j_1159) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1159))) == 44))) {
F->r_1160 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_1160))->all), rt_str(",", 1)); b_; }));
F->j_1159 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_1159) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1159))) == 41))) {
F->j_1159 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
F->go_1163 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_1060), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_1160 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_1160))->all), rt_str(")", 1)); b_; }));
}
F->r_1160 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_1160))->all), rt_str(";", 1)); b_; }));
F->j_1159 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1159));
if (((rt_r_ichk(F->j_1159) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1159))) == 44))) {
F->j_1159 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_1159) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1159))) == 41))) {
F->j_1159 = rt_add(rt_r_ichk(F->j_1159), ((rt_int)1LL));
F->more_1161 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_1060), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P1019)rt_nil_check(F->r_1160))->all));
if ((g_pending_prag_1061 == NULL)) {
g_pending_prag_1061 = F->r_1160;
} else {
g_pending_prag_1061 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(g_pending_prag_1061))->all), (((P1019)rt_nil_check(F->r_1160))->all)); b_; }));
}
F->result_ = rt_r_ichk(F->j_1159);
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
F->i_1164 = RT_R_IUNDEF;
F->i_1164 = ((rt_int)1LL);
F->k_1165 = RT_R_IUNDEF;
while ((rt_r_ichk(F->i_1164) <= ((rt_int)(((*F->r_54)).len)))) {
F->k_1165 = rt_r_ichk(F->i_1164);
while ((rt_r_echk(rt_str_get((*F->r_54), rt_r_ichk(F->k_1165))) != 59)) {
F->k_1165 = rt_add(rt_r_ichk(F->k_1165), ((rt_int)1LL));
}
{
F->p_1166 = rt_str_copy(rt_str_slice((*F->r_54), rt_r_ichk(F->i_1164), rt_sub(rt_r_ichk(F->k_1165), ((rt_int)1LL))));
F->ok_1167 = ((((((((((rt_str_eq(F->p_1166, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_1166, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_1166, rt_str("OPEN", 4))) || rt_str_eq(F->p_1166, rt_str("CLOSED", 6))) || rt_str_eq(F->p_1166, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_1166, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_1166, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1166, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_1166, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_1166, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_1166).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_1166, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_1168 = ((((((((((rt_int)((F->p_1166).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_1166, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_1166, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_1166, rt_str("OPEN", 4))) || rt_str_eq(F->p_1166, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_1166).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_1166, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_1166, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1166, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_1166).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_1166, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_1168 && (!F->ok_1167))) {
f_fail_23(rt_r_ichk(g_src_line_1060), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_1166); b_; }));
}
}
F->i_1164 = rt_add(rt_r_ichk(F->k_1165), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_1169 = RT_R_IUNDEF;
F->i_1169 = ((rt_int)1LL);
F->j_1170 = RT_R_IUNDEF;
F->j_1170 = ((rt_int)0LL);
F->n_1171 = RT_R_IUNDEF;
F->n_1171 = ((rt_int)(((*F->line_56)).len));
F->c_1172 = RT_R_EUNDEF;
while ((rt_r_ichk(F->i_1169) <= rt_r_ichk(F->n_1171))) {
F->c_1172 = rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->i_1169)));
if (((((rt_r_echk(F->c_1172) == 32) || (rt_r_echk(F->c_1172) == 9)) || (rt_r_echk(F->c_1172) == 13)) || (rt_r_echk(F->c_1172) == 12))) {
F->i_1169 = rt_add(rt_r_ichk(F->i_1169), ((rt_int)1LL));
} else if ((rt_r_echk(F->c_1172) == 37)) {
F->i_1169 = rt_add(rt_r_ichk(F->n_1171), ((rt_int)1LL));
} else if (f_is_letter_9(rt_r_echk(F->c_1172))) {
F->j_1170 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->i_1169));
{
F->w_1173 = rt_str_new(rt_sub(rt_r_ichk(F->j_1170), rt_r_ichk(F->i_1169)));
rt_str_assign(&F->w_1173, rt_str_slice((*F->line_56), rt_r_ichk(F->i_1169), rt_sub(rt_r_ichk(F->j_1170), ((rt_int)1LL))));
{ rt_int lo1175 = ((rt_int)1LL), hi1176 = ((rt_int)((F->w_1173).len));
for (rt_int it1177 = lo1175; it1177 <= hi1176; it1177++) {
F->k_1174 = it1177;
(*rt_str_at(&F->w_1173, F->k_1174)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1173, F->k_1174)));
}
}
if (rt_str_eq(F->w_1173, rt_str("PRAGMAT", 7))) {
while (((rt_r_ichk(F->j_1170) <= rt_r_ichk(F->n_1171)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1170))) != 59))) {
F->j_1170 = rt_add(rt_r_ichk(F->j_1170), ((rt_int)1LL));
}
F->j_1170 = rt_add(rt_r_ichk(F->j_1170), ((rt_int)1LL));
} else if (rt_str_eq(F->w_1173, rt_str("PRAG", 4))) {
F->j_1170 = f_lex_prag_53(&(*F->line_56), rt_r_ichk(F->j_1170));
} else if (f_is_reserved_36(&F->w_1173)) {
f_add_token_42((((rt_int)2LL)), &F->w_1173, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_1173)) {
f_add_token_42((((rt_int)3LL)), &F->w_1173, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_1173, ((rt_int)0LL));
}
}
F->i_1169 = rt_r_ichk(F->j_1170);
} else if (f_is_digit_11(rt_r_echk(F->c_1172))) {
F->j_1170 = rt_r_ichk(F->i_1169);
while (((rt_r_ichk(F->j_1170) <= rt_r_ichk(F->n_1171)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1170)))))) {
F->j_1170 = rt_add(rt_r_ichk(F->j_1170), ((rt_int)1LL));
}
if ((((rt_r_ichk(F->j_1170) < rt_r_ichk(F->n_1171)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1170))) == 46)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_1170), ((rt_int)1LL))))))) {
F->j_1170 = rt_add(rt_r_ichk(F->j_1170), ((rt_int)1LL));
while (((rt_r_ichk(F->j_1170) <= rt_r_ichk(F->n_1171)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1170)))))) {
F->j_1170 = rt_add(rt_r_ichk(F->j_1170), ((rt_int)1LL));
}
if (((rt_r_ichk(F->j_1170) <= rt_r_ichk(F->n_1171)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1170))) == 69) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1170))) == 101)))) {
F->j_1170 = rt_add(rt_r_ichk(F->j_1170), ((rt_int)1LL));
if (((rt_r_ichk(F->j_1170) <= rt_r_ichk(F->n_1171)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1170))) == 43) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1170))) == 45)))) {
F->j_1170 = rt_add(rt_r_ichk(F->j_1170), ((rt_int)1LL));
}
while (((rt_r_ichk(F->j_1170) <= rt_r_ichk(F->n_1171)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1170)))))) {
F->j_1170 = rt_add(rt_r_ichk(F->j_1170), ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_1169), rt_sub(rt_r_ichk(F->j_1170), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_1169), rt_sub(rt_r_ichk(F->j_1170), ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), rt_r_ichk(F->i_1169), rt_sub(rt_r_ichk(F->j_1170), ((rt_int)1LL)))));
}
F->i_1169 = rt_r_ichk(F->j_1170);
} else if ((((rt_r_echk(F->c_1172) == 39) && (rt_r_ichk(F->i_1169) < rt_r_ichk(F->n_1171))) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_1169), ((rt_int)1LL)))) == 39))) {
F->j_1170 = rt_add(rt_r_ichk(F->i_1169), ((rt_int)2LL));
while (((rt_r_ichk(F->j_1170) < rt_r_ichk(F->n_1171)) && (!((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1170))) == 39) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_1170), ((rt_int)1LL)))) == 39))))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1170))) == 34)) {
f_fail_23(rt_r_ichk(g_src_line_1060), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_1170 = rt_add(rt_r_ichk(F->j_1170), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_1170) >= rt_r_ichk(F->n_1171))) {
f_fail_23(rt_r_ichk(g_src_line_1060), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1169), ((rt_int)2LL)), rt_sub(rt_r_ichk(F->j_1170), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1169 = rt_add(rt_r_ichk(F->j_1170), ((rt_int)2LL));
} else if ((rt_r_echk(F->c_1172) == 39)) {
F->j_1170 = rt_add(rt_r_ichk(F->i_1169), ((rt_int)1LL));
if (((rt_r_ichk(F->j_1170) > rt_r_ichk(F->n_1171)) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1170))))))) {
f_fail_23(rt_r_ichk(g_src_line_1060), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_1170 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->j_1170));
{
F->w_1178 = rt_str_new(rt_sub(rt_sub(rt_r_ichk(F->j_1170), rt_r_ichk(F->i_1169)), ((rt_int)1LL)));
rt_str_assign(&F->w_1178, rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1169), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_1170), ((rt_int)1LL))));
{ rt_int lo1180 = ((rt_int)1LL), hi1181 = ((rt_int)((F->w_1178).len));
for (rt_int it1182 = lo1180; it1182 <= hi1181; it1182++) {
F->k_1179 = it1182;
(*rt_str_at(&F->w_1178, F->k_1179)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1178, F->k_1179)));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_1178, ((rt_int)0LL));
}
F->i_1169 = rt_r_ichk(F->j_1170);
} else if ((rt_r_echk(F->c_1172) == 34)) {
F->j_1170 = rt_add(rt_r_ichk(F->i_1169), ((rt_int)1LL));
while (((rt_r_ichk(F->j_1170) <= rt_r_ichk(F->n_1171)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1170))) != 34))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1170))) == 39)) {
f_fail_23(rt_r_ichk(g_src_line_1060), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_1170 = rt_add(rt_r_ichk(F->j_1170), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_1170) > rt_r_ichk(F->n_1171))) {
f_fail_23(rt_r_ichk(g_src_line_1060), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1169), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_1170), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1169 = rt_add(rt_r_ichk(F->j_1170), ((rt_int)1LL));
} else {
{
F->two_1183 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_1183, rt_str("  ", 2));
(*rt_str_at(&F->two_1183, ((rt_int)1LL))) = rt_r_echk(F->c_1172);
if ((rt_r_ichk(F->i_1169) < rt_r_ichk(F->n_1171))) {
(*rt_str_at(&F->two_1183, ((rt_int)2LL))) = rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_1169), ((rt_int)1LL))));
}
if (((((((rt_str_eq(F->two_1183, rt_str(":=", 2)) || rt_str_eq(F->two_1183, rt_str("=>", 2))) || rt_str_eq(F->two_1183, rt_str("..", 2))) || rt_str_eq(F->two_1183, rt_str("**", 2))) || rt_str_eq(F->two_1183, rt_str("/=", 2))) || rt_str_eq(F->two_1183, rt_str("<=", 2))) || rt_str_eq(F->two_1183, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_1183, ((rt_int)0LL));
F->i_1169 = rt_add(rt_r_ichk(F->i_1169), ((rt_int)2LL));
} else if (((rt_str_eq(F->two_1183, rt_str("<<", 2)) || rt_str_eq(F->two_1183, rt_str(">>", 2))) || rt_str_eq(F->two_1183, rt_str("::", 2)))) {
if (rt_str_eq(F->two_1183, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_1183, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_1169 = rt_add(rt_r_ichk(F->i_1169), ((rt_int)2LL));
} else if ((((((((((((((((((rt_r_echk(F->c_1172) == 40) || (rt_r_echk(F->c_1172) == 41)) || (rt_r_echk(F->c_1172) == 91)) || (rt_r_echk(F->c_1172) == 93)) || (rt_r_echk(F->c_1172) == 44)) || (rt_r_echk(F->c_1172) == 58)) || (rt_r_echk(F->c_1172) == 59)) || (rt_r_echk(F->c_1172) == 46)) || (rt_r_echk(F->c_1172) == 35)) || (rt_r_echk(F->c_1172) == 43)) || (rt_r_echk(F->c_1172) == 45)) || (rt_r_echk(F->c_1172) == 42)) || (rt_r_echk(F->c_1172) == 47)) || (rt_r_echk(F->c_1172) == 38)) || (rt_r_echk(F->c_1172) == 61)) || (rt_r_echk(F->c_1172) == 60)) || (rt_r_echk(F->c_1172) == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(rt_r_echk(F->c_1172)); b_; }), ((rt_int)0LL));
F->i_1169 = rt_add(rt_r_ichk(F->i_1169), ((rt_int)1LL));
} else {
f_fail_23(rt_r_ichk(g_src_line_1060), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_1184 = rt_str_new(rt_sizeln());
F->l_1185 = NULL;
rt_r_readln(&F->line_1184);
g_src_line_1060 = rt_add(rt_r_ichk(g_src_line_1060), ((rt_int)1LL));
{ R1031 *cell1186 = rt_alloc(sizeof(R1031));
(*cell1186).s = NULL;
(*cell1186).next = NULL;
F->l_1185 = cell1186;
}
(*(P1030)rt_nil_check(F->l_1185)).s = f_mk_3(&F->line_1184);
if ((g_src_tail_1063 == NULL)) {
g_src_head_1062 = F->l_1185;
} else {
(*(P1030)rt_nil_check(g_src_tail_1063)).next = F->l_1185;
}
g_src_tail_1063 = F->l_1185;
f_lex_line_57(&F->line_1184);
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
F->f_1187 = rt_r_file_new(0, 0, sizeof(int), 1);
F->found_1188 = RT_R_EUNDEF;
F->found_1188 = 1;
{ rt_frame xf1189;
if (RT_TRY(xf1189)) {
rt_r_open(F->f_1187, rt_str_cat(f_lower_s_15(&(*F->name_59)), rt_str(".red", 4)), 0);
RT_POP(xf1189);
} else {
RT_POP(xf1189);
int x1190 = rt_xcur;
if (0 || x1190 == rt_exc("X_NOFILE") || x1190 == rt_exc("X_FILENAME")) {
F->found_1188 = 0;
} else {
rt_raise(x1190);
}
}
}
if ((!rt_r_echk(F->found_1188))) {
F->result_ = 0;
goto ret_;
}
while ((!rt_r_feof(F->f_1187))) {
F->line_1191 = rt_str_new(rt_r_fsizeln(F->f_1187));
rt_r_freadln(F->f_1187, &F->line_1191);
g_src_line_1060 = rt_add(rt_r_ichk(g_src_line_1060), ((rt_int)1LL));
f_lex_line_57(&F->line_1191);
}
rt_r_close(F->f_1187, 0);
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_write_library_62(P1026 u_61) {
  struct f_write_library_62fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->u_61 = u_61;
F->f_1192 = rt_r_file_new(0, 1, sizeof(int), 1);
F->l_1193 = NULL;
F->l_1193 = g_src_head_1062;
F->n_1194 = RT_R_IUNDEF;
F->n_1194 = ((rt_int)1LL);
rt_r_open(F->f_1192, rt_str_cat(f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->u_61)).name))->all)), rt_str(".red", 4)), 1);
while (((F->l_1193 != NULL) && (rt_r_ichk(F->n_1194) <= rt_r_ichk((*(P1026)rt_nil_check(F->u_61)).eline)))) {
if ((rt_r_ichk(F->n_1194) >= rt_r_ichk((*(P1026)rt_nil_check(F->u_61)).line))) {
rt_r_fwriteln(F->f_1192, (((P1019)rt_nil_check((*(P1030)rt_nil_check(F->l_1193)).s))->all));
}
F->n_1194 = rt_add(rt_r_ichk(F->n_1194), ((rt_int)1LL));
F->l_1193 = (*(P1030)rt_nil_check(F->l_1193)).next;
}
rt_r_close(F->f_1192, 0);
ret_:
  RT_FPOP();
  return;
}

static P1026 f_nn_65(rt_int kind_63, rt_int line_64) {
  struct f_nn_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_63 = kind_63;
F->line_64 = line_64;
F->x_1195 = NULL;
{ R1027 *cell1196 = rt_alloc(sizeof(R1027));
(*cell1196).name = NULL;
(*cell1196).tag = NULL;
(*cell1196).prags = NULL;
(*cell1196).labels = NULL;
(*cell1196).a = NULL;
(*cell1196).b = NULL;
(*cell1196).c = NULL;
(*cell1196).d = NULL;
(*cell1196).e = NULL;
(*cell1196).next = NULL;
F->x_1195 = cell1196;
}
(*(P1026)rt_nil_check(F->x_1195)).kind = F->kind_63;
(*(P1026)rt_nil_check(F->x_1195)).line = F->line_64;
F->result_ = F->x_1195;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_69(P1026 *head_66, P1026 *tail_67, P1026 x_68) {
  struct f_append_69fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_66 = head_66;
F->tail_67 = tail_67;
F->x_68 = x_68;
if (((*F->head_66) == NULL)) {
(*F->head_66) = F->x_68;
} else {
(*(P1026)rt_nil_check((*F->tail_67))).next = F->x_68;
}
(*F->tail_67) = F->x_68;
while (((*(P1026)rt_nil_check((*F->tail_67))).next != NULL)) {
(*F->tail_67) = (*(P1026)rt_nil_check((*F->tail_67))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_71(P1026 l_70) {
  struct f_list_len_71fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_70 = l_70;
F->n_1197 = RT_R_IUNDEF;
F->n_1197 = ((rt_int)0LL);
F->p_1198 = NULL;
F->p_1198 = F->l_70;
while ((F->p_1198 != NULL)) {
F->n_1197 = rt_add(rt_r_ichk(F->n_1197), ((rt_int)1LL));
F->p_1198 = (*(P1026)rt_nil_check(F->p_1198)).next;
}
F->result_ = rt_r_ichk(F->n_1197);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_72(void) {
  struct f_cur_line_72fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = rt_r_ichk((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).line);
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
F->result_ = ((rt_r_ichk((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)2LL))) && rt_str_eq((((P1019)rt_nil_check((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_73)));
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
F->result_ = ((rt_r_ichk((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)3LL))) && rt_str_eq((((P1019)rt_nil_check((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_75)));
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
F->result_ = (rt_r_ichk((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).kind) == F->k_77);
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
if ((rt_add(rt_r_ichk(g_tpos_1059), F->k_79) > rt_r_ichk(g_ntoks_1058))) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = rt_r_ichk((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_1059), F->k_79), b_.lo, b_.hi) - b_.lo)]; }))).kind);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1019 f_text_at_82(rt_int k_81) {
  struct f_text_at_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_81 = k_81;
if ((rt_add(rt_r_ichk(g_tpos_1059), F->k_81) > rt_r_ichk(g_ntoks_1058))) {
F->result_ = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_ntoks_1058), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_1059), F->k_81), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23(rt_r_ichk((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_83), rt_str(" (at ", 5)), (((P1019)rt_nil_check((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_86(rstr *w_85) {
  struct f_accept_kw_86fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_85 = w_85;
if (f_at_kw_74(&(*F->w_85))) {
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
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
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
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
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
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
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1019 f_expect_id_93(void) {
  struct f_expect_id_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_78((((rt_int)1LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->result_ = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_1059), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_name_node_94(void) {
  struct f_name_node_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1199 = NULL;
F->x_1199 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
(*(P1026)rt_nil_check(F->x_1199)).name = f_expect_id_93();
F->result_ = F->x_1199;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_id_list_95(void) {
  struct f_id_list_95fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1200 = NULL;
F->tail_1201 = NULL;
f_append_69(&F->head_1200, &F->tail_1201, f_name_node_94());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1200, &F->tail_1201, f_name_node_94());
}
F->result_ = F->head_1200;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_p_subtype_96(void) {
  struct f_p_subtype_96fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1202 = RT_R_IUNDEF;
F->line_1202 = f_cur_line_72();
F->x_1203 = NULL;
if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->x_1203 = f_nn_65((((rt_int)81LL)), rt_r_ichk(F->line_1202));
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1026)rt_nil_check(F->x_1203)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1203;
goto ret_;
}
if ((!f_at_kind_78((((rt_int)1LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_1204 = rt_str_copy((((P1019)rt_nil_check((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
if (rt_str_eq(F->w_1204, rt_str("ARRAY", 5))) {
F->x_1203 = f_nn_65((((rt_int)74LL)), rt_r_ichk(F->line_1202));
{
F->head_1205 = NULL;
F->tail_1206 = NULL;
f_append_69(&F->head_1205, &F->tail_1206, f_p_subtype_96());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1205, &F->tail_1206, f_p_subtype_96());
}
(*(P1026)rt_nil_check(F->x_1203)).a = F->head_1205;
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P1026)rt_nil_check(F->x_1203)).b = f_p_subtype_96();
} else if ((rt_str_eq(F->w_1204, rt_str("RECORD", 6)) || rt_str_eq(F->w_1204, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_1204, rt_str("RECORD", 6))) {
F->x_1203 = f_nn_65((((rt_int)75LL)), rt_r_ichk(F->line_1202));
} else {
F->x_1203 = f_nn_65((((rt_int)76LL)), rt_r_ichk(F->line_1202));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1207 = NULL;
F->tail_1208 = NULL;
F->more_1209 = RT_R_EUNDEF;
F->more_1209 = 1;
while (rt_r_echk(F->more_1209)) {
F->names_1210 = NULL;
F->names_1210 = f_id_list_95();
F->st_1211 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1211 = f_p_subtype_96();
while ((F->names_1210 != NULL)) {
F->cmp_1212 = NULL;
F->cmp_1212 = f_nn_65((((rt_int)63LL)), rt_r_ichk((*(P1026)rt_nil_check(F->names_1210)).line));
(*(P1026)rt_nil_check(F->cmp_1212)).name = (*(P1026)rt_nil_check(F->names_1210)).name;
(*(P1026)rt_nil_check(F->cmp_1212)).a = F->st_1211;
f_append_69(&F->head_1207, &F->tail_1208, F->cmp_1212);
F->names_1210 = (*(P1026)rt_nil_check(F->names_1210)).next;
}
F->more_1209 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1026)rt_nil_check(F->x_1203)).a = F->head_1207;
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_1204, rt_str("UNION", 5)) && f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1203)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1204, rt_str("ENUM", 4))) {
F->x_1203 = f_nn_65((((rt_int)72LL)), rt_r_ichk(F->line_1202));
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1213 = NULL;
F->tail_1214 = NULL;
F->more_1215 = RT_R_EUNDEF;
F->more_1215 = 1;
while (rt_r_echk(F->more_1215)) {
F->lit_1216 = NULL;
F->lit_1216 = f_nn_65((((rt_int)4LL)), rt_r_ichk(F->line_1202));
if ((!f_at_kind_78((((rt_int)6LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P1026)rt_nil_check(F->lit_1216)).name = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
f_append_69(&F->head_1213, &F->tail_1214, F->lit_1216);
F->more_1215 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1026)rt_nil_check(F->x_1203)).a = F->head_1213;
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1203)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1026)rt_nil_check(F->x_1203)).c = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_1204, rt_str("STRING", 6)) || rt_str_eq(F->w_1204, rt_str("SET", 3))) || rt_str_eq(F->w_1204, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_1204, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_1204, rt_str("STRING", 6))) {
F->x_1203 = f_nn_65((((rt_int)73LL)), rt_r_ichk(F->line_1202));
} else if (rt_str_eq(F->w_1204, rt_str("SET", 3))) {
F->x_1203 = f_nn_65((((rt_int)77LL)), rt_r_ichk(F->line_1202));
} else if (rt_str_eq(F->w_1204, rt_str("MAILBOX", 7))) {
F->x_1203 = f_nn_65((((rt_int)78LL)), rt_r_ichk(F->line_1202));
} else {
F->x_1203 = f_nn_65((((rt_int)79LL)), rt_r_ichk(F->line_1202));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P1026)rt_nil_check(F->x_1203)).a = f_p_subtype_96();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1203)).b = f_actual_params_98();
}
} else if (rt_str_eq(F->w_1204, rt_str("INT", 3))) {
F->x_1203 = f_nn_65((((rt_int)70LL)), rt_r_ichk(F->line_1202));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1203)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1026)rt_nil_check(F->x_1203)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1204, rt_str("FLOAT", 5))) {
F->x_1203 = f_nn_65((((rt_int)71LL)), rt_r_ichk(F->line_1202));
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1203)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1203)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1026)rt_nil_check(F->x_1203)).c = f_expr_107();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_1203 = f_nn_65((((rt_int)80LL)), rt_r_ichk(F->line_1202));
(*(P1026)rt_nil_check(F->x_1203)).name = f_mk_3(&F->w_1204);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1203)).a = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1203)).b = f_constraint_list_97();
(*(P1026)rt_nil_check(F->x_1203)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_1203;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_constraint_list_97(void) {
  struct f_constraint_list_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1217 = NULL;
F->tail_1218 = NULL;
F->more_1219 = RT_R_EUNDEF;
F->more_1219 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1219)) {
F->line_1220 = RT_R_IUNDEF;
F->line_1220 = f_cur_line_72();
F->lo_1221 = NULL;
F->lo_1221 = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1222 = NULL;
F->r_1222 = f_nn_65((((rt_int)16LL)), rt_r_ichk(F->line_1220));
(*(P1026)rt_nil_check(F->r_1222)).a = F->lo_1221;
(*(P1026)rt_nil_check(F->r_1222)).b = f_expr_107();
f_append_69(&F->head_1217, &F->tail_1218, F->r_1222);
} else {
f_append_69(&F->head_1217, &F->tail_1218, F->lo_1221);
}
F->more_1219 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1217;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_actual_params_98(void) {
  struct f_actual_params_98fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1223 = NULL;
F->tail_1224 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_69(&F->head_1223, &F->tail_1224, f_expr_107());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1223, &F->tail_1224, f_expr_107());
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1223;
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

static P1026 f_actual_tt_101(void) {
  struct f_actual_tt_101fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1225 = NULL;
F->tail_1226 = NULL;
F->more_1227 = RT_R_EUNDEF;
F->more_1227 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1227)) {
if ((f_at_kind_78((((rt_int)1LL))) && f_is_type_word_100(&(((P1019)rt_nil_check((*(P1021)rt_nil_check((((P1023)rt_nil_check(g_toks_1057))->all).p[(rt_index(rt_r_ichk(g_tpos_1059), (((P1023)rt_nil_check(g_toks_1057))->all).lo, (((P1023)rt_nil_check(g_toks_1057))->all).hi) - (((P1023)rt_nil_check(g_toks_1057))->all).lo)])).s))->all)))) {
f_append_69(&F->head_1225, &F->tail_1226, f_p_subtype_96());
} else {
f_append_69(&F->head_1225, &F->tail_1226, f_expr_107());
}
F->more_1227 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1225;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_binop_106(P1019 op_102, P1026 l_103, P1026 r_104, rt_int line_105) {
  struct f_binop_106fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_102 = op_102;
F->l_103 = l_103;
F->r_104 = r_104;
F->line_105 = line_105;
F->x_1228 = NULL;
F->x_1228 = f_nn_65((((rt_int)9LL)), F->line_105);
(*(P1026)rt_nil_check(F->x_1228)).name = F->op_102;
(*(P1026)rt_nil_check(F->x_1228)).a = F->l_103;
(*(P1026)rt_nil_check(F->x_1228)).b = F->r_104;
F->result_ = F->x_1228;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_expr_107(void) {
  struct f_expr_107fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1229 = NULL;
F->l_1229 = f_expr_and_108();
while ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_1230 = NULL;
F->op_1230 = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1231 = RT_R_IUNDEF;
F->line_1231 = f_cur_line_72();
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->l_1229 = f_binop_106(F->op_1230, F->l_1229, f_expr_and_108(), rt_r_ichk(F->line_1231));
}
F->result_ = F->l_1229;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_expr_and_108(void) {
  struct f_expr_and_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1232 = NULL;
F->l_1232 = f_expr_not_109();
while (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_1233 = RT_R_IUNDEF;
F->line_1233 = f_cur_line_72();
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->l_1232 = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_1232, f_expr_not_109(), rt_r_ichk(F->line_1233));
}
F->result_ = F->l_1232;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_expr_not_109(void) {
  struct f_expr_not_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_1234 = NULL;
F->x_1234 = f_nn_65((((rt_int)8LL)), f_cur_line_72());
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1234)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P1026)rt_nil_check(F->x_1234)).a = f_expr_not_109();
F->result_ = F->x_1234;
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

static P1026 f_expr_rel_112(void) {
  struct f_expr_rel_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1235 = NULL;
F->l_1235 = f_expr_add_113();
while ((f_at_kind_78((((rt_int)3LL))) && f_is_rel_111(&(((P1019)rt_nil_check((*(P1021)rt_nil_check((((P1023)rt_nil_check(g_toks_1057))->all).p[(rt_index(rt_r_ichk(g_tpos_1059), (((P1023)rt_nil_check(g_toks_1057))->all).lo, (((P1023)rt_nil_check(g_toks_1057))->all).hi) - (((P1023)rt_nil_check(g_toks_1057))->all).lo)])).s))->all)))) {
F->op_1236 = NULL;
F->op_1236 = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1237 = RT_R_IUNDEF;
F->line_1237 = f_cur_line_72();
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->l_1235 = f_binop_106(F->op_1236, F->l_1235, f_expr_add_113(), rt_r_ichk(F->line_1237));
}
F->result_ = F->l_1235;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_expr_add_113(void) {
  struct f_expr_add_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1238 = NULL;
F->l_1238 = f_expr_mul_114();
while ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_1239 = NULL;
F->op_1239 = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1240 = RT_R_IUNDEF;
F->line_1240 = f_cur_line_72();
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->l_1238 = f_binop_106(F->op_1239, F->l_1238, f_expr_mul_114(), rt_r_ichk(F->line_1240));
}
F->result_ = F->l_1238;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_expr_mul_114(void) {
  struct f_expr_mul_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1241 = NULL;
F->l_1241 = f_expr_pow_115();
while (((((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_1242 = NULL;
F->op_1242 = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1243 = RT_R_IUNDEF;
F->line_1243 = f_cur_line_72();
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->l_1241 = f_binop_106(F->op_1242, F->l_1241, f_expr_pow_115(), rt_r_ichk(F->line_1243));
}
F->result_ = F->l_1241;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_expr_pow_115(void) {
  struct f_expr_pow_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1244 = NULL;
F->l_1244 = f_expr_prefix_116();
while (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_1245 = RT_R_IUNDEF;
F->line_1245 = f_cur_line_72();
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->l_1244 = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_1244, f_expr_prefix_116(), rt_r_ichk(F->line_1245));
}
F->result_ = F->l_1244;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_expr_prefix_116(void) {
  struct f_expr_prefix_116fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_1246 = NULL;
F->x_1246 = f_nn_65((((rt_int)8LL)), f_cur_line_72());
(*(P1026)rt_nil_check(F->x_1246)).name = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1246)).a = f_expr_prefix_116();
F->result_ = F->x_1246;
goto ret_;
}
F->result_ = f_postfix_117();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_postfix_117(void) {
  struct f_postfix_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_1247 = NULL;
F->p_1247 = f_primary_118();
while (1) {
F->line_1248 = RT_R_IUNDEF;
F->line_1248 = f_cur_line_72();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1249 = NULL;
F->x_1249 = f_nn_65((((rt_int)10LL)), rt_r_ichk(F->line_1248));
F->head_1250 = NULL;
F->tail_1251 = NULL;
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1252 = RT_R_EUNDEF;
F->more_1252 = 1;
while (rt_r_echk(F->more_1252)) {
F->lo_1253 = NULL;
F->lo_1253 = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1254 = NULL;
F->r_1254 = f_nn_65((((rt_int)16LL)), rt_r_ichk(F->line_1248));
(*(P1026)rt_nil_check(F->r_1254)).a = F->lo_1253;
(*(P1026)rt_nil_check(F->r_1254)).b = f_expr_107();
f_append_69(&F->head_1250, &F->tail_1251, F->r_1254);
} else {
f_append_69(&F->head_1250, &F->tail_1251, F->lo_1253);
}
F->more_1252 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P1026)rt_nil_check(F->x_1249)).a = F->p_1247;
(*(P1026)rt_nil_check(F->x_1249)).b = F->head_1250;
F->p_1247 = F->x_1249;
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_80(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1255 = NULL;
F->x_1255 = f_nn_65((((rt_int)11LL)), rt_r_ichk(F->line_1248));
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1255)).a = F->p_1247;
(*(P1026)rt_nil_check(F->x_1255)).name = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->p_1247 = F->x_1255;
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && (rt_r_ichk((*(P1026)rt_nil_check(F->p_1247)).kind) == (((rt_int)7LL))))) {
F->x_1256 = NULL;
F->x_1256 = f_nn_65((((rt_int)12LL)), rt_r_ichk(F->line_1248));
(*(P1026)rt_nil_check(F->x_1256)).a = F->p_1247;
(*(P1026)rt_nil_check(F->x_1256)).b = f_actual_tt_101();
F->p_1247 = F->x_1256;
} else if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1257 = NULL;
F->x_1257 = f_nn_65((((rt_int)13LL)), rt_r_ichk(F->line_1248));
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1257)).a = F->p_1247;
(*(P1026)rt_nil_check(F->x_1257)).b = f_p_subtype_96();
F->p_1247 = F->x_1257;
} else {
F->result_ = F->p_1247;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_primary_118(void) {
  struct f_primary_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1258 = RT_R_IUNDEF;
F->line_1258 = f_cur_line_72();
F->x_1259 = NULL;
F->k_1260 = RT_R_IUNDEF;
F->k_1260 = rt_r_ichk((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).kind);
if ((rt_r_ichk(F->k_1260) == (((rt_int)4LL)))) {
F->x_1259 = f_nn_65((((rt_int)1LL)), rt_r_ichk(F->line_1258));
(*(P1026)rt_nil_check(F->x_1259)).ival = rt_r_ichk((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).ival);
(*(P1026)rt_nil_check(F->x_1259)).name = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->result_ = F->x_1259;
goto ret_;
}
if ((((rt_r_ichk(F->k_1260) == (((rt_int)5LL))) || (rt_r_ichk(F->k_1260) == (((rt_int)7LL)))) || (rt_r_ichk(F->k_1260) == (((rt_int)6LL))))) {
if ((rt_r_ichk(F->k_1260) == (((rt_int)5LL)))) {
F->x_1259 = f_nn_65((((rt_int)2LL)), rt_r_ichk(F->line_1258));
} else if ((rt_r_ichk(F->k_1260) == (((rt_int)7LL)))) {
F->x_1259 = f_nn_65((((rt_int)3LL)), rt_r_ichk(F->line_1258));
} else {
F->x_1259 = f_nn_65((((rt_int)4LL)), rt_r_ichk(F->line_1258));
}
(*(P1026)rt_nil_check(F->x_1259)).name = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->result_ = F->x_1259;
goto ret_;
}
if ((rt_r_ichk(F->k_1260) == (((rt_int)1LL)))) {
F->w_1261 = rt_str_copy((((P1019)rt_nil_check((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1261, rt_str("TRUE", 4)) || rt_str_eq(F->w_1261, rt_str("FALSE", 5)))) {
F->x_1259 = f_nn_65((((rt_int)5LL)), rt_r_ichk(F->line_1258));
if (rt_str_eq(F->w_1261, rt_str("TRUE", 4))) {
(*(P1026)rt_nil_check(F->x_1259)).ival = ((rt_int)1LL);
}
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->result_ = F->x_1259;
goto ret_;
}
if (rt_str_eq(F->w_1261, rt_str("NIL", 3))) {
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->result_ = f_nn_65((((rt_int)6LL)), rt_r_ichk(F->line_1258));
goto ret_;
}
F->result_ = f_name_node_94();
goto ret_;
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1259 = f_nn_65((((rt_int)17LL)), rt_r_ichk(F->line_1258));
(*(P1026)rt_nil_check(F->x_1259)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1259;
goto ret_;
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1262 = NULL;
F->tail_1263 = NULL;
F->x_1259 = f_nn_65((((rt_int)14LL)), rt_r_ichk(F->line_1258));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1264 = RT_R_EUNDEF;
F->more_1264 = 1;
while (rt_r_echk(F->more_1264)) {
f_append_69(&F->head_1262, &F->tail_1263, f_constructor_item_119());
F->more_1264 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P1026)rt_nil_check(F->x_1259)).a = F->head_1262;
F->result_ = F->x_1259;
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

static P1026 f_constructor_item_119(void) {
  struct f_constructor_item_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1265 = RT_R_IUNDEF;
F->line_1265 = f_cur_line_72();
F->it_1266 = NULL;
F->it_1266 = f_nn_65((((rt_int)15LL)), rt_r_ichk(F->line_1265));
F->first_1267 = NULL;
F->first_1267 = f_expr_107();
F->keys_1268 = NULL;
F->ktail_1269 = NULL;
F->lab_1270 = NULL;
F->lab_1270 = f_nn_65((((rt_int)61LL)), rt_r_ichk(F->line_1265));
(*(P1026)rt_nil_check(F->lab_1270)).a = F->first_1267;
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1026)rt_nil_check(F->lab_1270)).b = f_expr_107();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_69(&F->keys_1268, &F->ktail_1269, F->lab_1270);
} else if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1271 = RT_R_IUNDEF;
F->save_1271 = rt_r_ichk(g_tpos_1059);
F->more_1272 = NULL;
F->tail2_1273 = NULL;
F->ok_1274 = RT_R_EUNDEF;
F->ok_1274 = 0;
F->go_1275 = RT_R_EUNDEF;
F->go_1275 = 1;
while ((rt_r_echk(F->go_1275) && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1276 = NULL;
F->l2_1276 = f_nn_65((((rt_int)61LL)), rt_r_ichk(F->line_1265));
(*(P1026)rt_nil_check(F->l2_1276)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1026)rt_nil_check(F->l2_1276)).b = f_expr_107();
}
f_append_69(&F->more_1272, &F->tail2_1273, F->l2_1276);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1274 = 1;
F->go_1275 = 0;
} else if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1275 = 0;
}
}
if (rt_r_echk(F->ok_1274)) {
f_append_69(&F->keys_1268, &F->ktail_1269, F->lab_1270);
f_append_69(&F->keys_1268, &F->ktail_1269, F->more_1272);
} else {
g_tpos_1059 = rt_r_ichk(F->save_1271);
}
}
if (((F->keys_1268 == NULL) && ((*(P1026)rt_nil_check(F->lab_1270)).b != NULL))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1268 != NULL)) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P1026)rt_nil_check(F->it_1266)).a = F->keys_1268;
(*(P1026)rt_nil_check(F->it_1266)).b = f_expr_107();
} else {
(*(P1026)rt_nil_check(F->it_1266)).b = F->first_1267;
}
F->result_ = F->it_1266;
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

static P1026 f_body_121(void) {
  struct f_body_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1277 = NULL;
F->tail_1278 = NULL;
F->stmts_1279 = RT_R_EUNDEF;
F->stmts_1279 = 0;
F->after_1280 = NULL;
while ((!f_at_body_end_120())) {
F->x_1281 = NULL;
F->x_1281 = f_body_element_122();
if (((F->x_1281 != NULL) && ((((rt_r_ichk((*(P1026)rt_nil_check(F->x_1281)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->x_1281)).kind) == (((rt_int)41LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->x_1281)).kind) == (((rt_int)49LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->x_1281)).kind) == (((rt_int)48LL)))))) {
if (rt_r_echk(F->stmts_1279)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->x_1281)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1281 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->x_1281)).kind) >= (((rt_int)42LL)))) && (rt_r_ichk((*(P1026)rt_nil_check(F->x_1281)).kind) <= (((rt_int)51LL))))) {
if ((rt_r_echk(F->stmts_1279) && (F->after_1280 == NULL))) {
F->after_1280 = F->x_1281;
}
} else if (((F->x_1281 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->x_1281)).kind) != (((rt_int)33LL))))) {
if ((F->after_1280 != NULL)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->after_1280)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1279 = 1;
}
f_append_69(&F->head_1277, &F->tail_1278, F->x_1281);
}
F->result_ = F->head_1277;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_body_element_122(void) {
  struct f_body_element_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1282 = NULL;
F->pr_1283 = NULL;
F->pr_1283 = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1282 = f_declaration_123();
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1282 = f_nn_65((((rt_int)33LL)), f_cur_line_72());
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1282)).a = f_expr_107();
} else {
F->x_1282 = f_statement_149();
}
if ((F->pr_1283 != NULL)) {
F->p_1284 = NULL;
F->p_1284 = F->x_1282;
while ((F->p_1284 != NULL)) {
if (((*(P1026)rt_nil_check(F->p_1284)).prags == NULL)) {
(*(P1026)rt_nil_check(F->p_1284)).prags = F->pr_1283;
} else {
(*(P1026)rt_nil_check(F->p_1284)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->pr_1283))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1284)).prags))->all)); b_; }));
}
F->p_1284 = (*(P1026)rt_nil_check(F->p_1284)).next;
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1282;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_declaration_123(void) {
  struct f_declaration_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1285 = RT_R_IUNDEF;
F->line_1285 = f_cur_line_72();
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
F->head_1286 = NULL;
F->tail_1287 = NULL;
F->names_1288 = NULL;
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->names_1288 = f_id_list_95();
while ((F->names_1288 != NULL)) {
F->x_1289 = NULL;
F->x_1289 = f_nn_65((((rt_int)49LL)), rt_r_ichk(F->line_1285));
(*(P1026)rt_nil_check(F->x_1289)).name = (*(P1026)rt_nil_check(F->names_1288)).name;
f_append_69(&F->head_1286, &F->tail_1287, F->x_1289);
F->names_1288 = (*(P1026)rt_nil_check(F->names_1288)).next;
}
F->result_ = F->head_1286;
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

static P1026 f_object_decl_124(void) {
  struct f_object_decl_124fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1290 = RT_R_IUNDEF;
F->line_1290 = f_cur_line_72();
F->is_var_1291 = RT_R_EUNDEF;
F->is_var_1291 = f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1292 = NULL;
F->st_1293 = NULL;
F->init_1294 = NULL;
F->loc_1295 = NULL;
F->loc_kind_1296 = RT_R_IUNDEF;
F->loc_kind_1296 = ((rt_int)0LL);
F->head_1297 = NULL;
F->tail_1298 = NULL;
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->names_1292 = f_id_list_95();
if (rt_r_echk(F->is_var_1291)) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1293 = f_p_subtype_96();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1294 = f_expr_107();
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1019)rt_nil_check((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->loc_kind_1296 = ((rt_int)1LL);
} else {
F->loc_kind_1296 = ((rt_int)2LL);
}
F->loc_1295 = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (((F->init_1294 == NULL) && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; })))) {
F->init_1294 = f_expr_107();
}
} else {
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1293 = f_p_subtype_96();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1294 = f_expr_107();
}
while ((F->names_1292 != NULL)) {
F->x_1299 = NULL;
if (rt_r_echk(F->is_var_1291)) {
F->x_1299 = f_nn_65((((rt_int)40LL)), rt_r_ichk(F->line_1290));
} else {
F->x_1299 = f_nn_65((((rt_int)41LL)), rt_r_ichk(F->line_1290));
}
(*(P1026)rt_nil_check(F->x_1299)).name = (*(P1026)rt_nil_check(F->names_1292)).name;
(*(P1026)rt_nil_check(F->x_1299)).a = F->st_1293;
(*(P1026)rt_nil_check(F->x_1299)).b = F->init_1294;
(*(P1026)rt_nil_check(F->x_1299)).c = F->loc_1295;
(*(P1026)rt_nil_check(F->x_1299)).ival = rt_r_ichk(F->loc_kind_1296);
f_append_69(&F->head_1297, &F->tail_1298, F->x_1299);
F->names_1292 = (*(P1026)rt_nil_check(F->names_1292)).next;
}
F->result_ = F->head_1297;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_abbrev_decl_125(void) {
  struct f_abbrev_decl_125fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1300 = NULL;
F->x_1300 = f_nn_65((((rt_int)42LL)), f_cur_line_72());
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1300)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1300)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1300)).b = f_formal_params_134();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P1026)rt_nil_check(F->x_1300)).a = f_p_subtype_96();
F->result_ = F->x_1300;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_rep_spec_126(void) {
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

static P1026 f_rep_items_127(void) {
  struct f_rep_items_127fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1301 = NULL;
F->tail_1302 = NULL;
F->more_1303 = RT_R_EUNDEF;
F->more_1303 = 1;
while (rt_r_echk(F->more_1303)) {
f_append_69(&F->head_1301, &F->tail_1302, f_rep_item_130());
F->more_1303 = (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && f_rep_word_129(((rt_int)1LL)));
if (rt_r_echk(F->more_1303)) {
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
}
}
F->result_ = F->head_1301;
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
F->w_1304 = rt_str_copy((((P1019)rt_nil_check(f_text_at_82(F->k_128)))->all));
F->result_ = (((f_kind_at_80(F->k_128) == (((rt_int)1LL))) || (f_kind_at_80(F->k_128) == (((rt_int)2LL)))) && ((((((((rt_str_eq(F->w_1304, rt_str("SIZE", 4)) || rt_str_eq(F->w_1304, rt_str("ALIGN", 5))) || rt_str_eq(F->w_1304, rt_str("OFFSET", 6))) || rt_str_eq(F->w_1304, rt_str("RECORD", 6))) || rt_str_eq(F->w_1304, rt_str("UNION", 5))) || rt_str_eq(F->w_1304, rt_str("ARRAY", 5))) || rt_str_eq(F->w_1304, rt_str("ABSENT", 6))) || rt_str_eq(F->w_1304, rt_str("PTR", 3))) || rt_str_eq(F->w_1304, rt_str("ENUM", 4))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_rep_item_130(void) {
  struct f_rep_item_130fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1305 = NULL;
F->x_1305 = f_nn_65((((rt_int)64LL)), f_cur_line_72());
if ((!f_rep_word_129(((rt_int)0LL)))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a representational item", 32); b_; }));
}
(*(P1026)rt_nil_check(F->x_1305)).name = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
if ((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1305)).name))->all), rt_str("SIZE", 4)) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1305)).name))->all), rt_str("OFFSET", 6)))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1026)rt_nil_check(F->x_1305)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
} else if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1305)).name))->all), rt_str("ALIGN", 5))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1026)rt_nil_check(F->x_1305)).a = f_expr_107();
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }))) {
(*(P1026)rt_nil_check(F->x_1305)).b = (*(P1026)rt_nil_check(F->x_1305)).a;
(*(P1026)rt_nil_check(F->x_1305)).a = f_expr_107();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
} else if ((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1305)).name))->all), rt_str("RECORD", 6)) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1305)).name))->all), rt_str("UNION", 5)))) {
F->head_1306 = NULL;
F->tail_1307 = NULL;
F->more_1308 = RT_R_EUNDEF;
F->more_1308 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1308)) {
F->names_1309 = NULL;
F->names_1309 = f_id_list_95();
F->items_1310 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_rep_word_129(((rt_int)0LL))) {
F->items_1310 = f_rep_items_127();
}
while ((F->names_1309 != NULL)) {
F->cmp_1311 = NULL;
F->cmp_1311 = f_nn_65((((rt_int)63LL)), rt_r_ichk((*(P1026)rt_nil_check(F->names_1309)).line));
(*(P1026)rt_nil_check(F->cmp_1311)).name = (*(P1026)rt_nil_check(F->names_1309)).name;
(*(P1026)rt_nil_check(F->cmp_1311)).a = F->items_1310;
f_append_69(&F->head_1306, &F->tail_1307, F->cmp_1311);
F->names_1309 = (*(P1026)rt_nil_check(F->names_1309)).next;
}
F->more_1308 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P1026)rt_nil_check(F->x_1305)).c = F->head_1306;
} else if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1305)).name))->all), rt_str("ARRAY", 5))) {
F->head_1312 = NULL;
F->tail_1313 = NULL;
while ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; })))) {
f_append_69(&F->head_1312, &F->tail_1313, f_name_node_94());
if ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; })))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P1026)rt_nil_check(F->x_1305)).d = F->head_1312;
if (f_rep_word_129(((rt_int)0LL))) {
(*(P1026)rt_nil_check(F->x_1305)).c = f_rep_items_127();
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && f_rep_word_129(((rt_int)1LL)))) {
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1305)).c = f_rep_items_127();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->head_1314 = NULL;
F->tail_1315 = NULL;
F->dummy_1316 = RT_R_EUNDEF;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_69(&F->head_1314, &F->tail_1315, f_name_node_94());
F->dummy_1316 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P1026)rt_nil_check(F->x_1305)).d = F->head_1314;
}
F->result_ = F->x_1305;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_type_decl_131(void) {
  struct f_type_decl_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1317 = RT_R_IUNDEF;
F->line_1317 = f_cur_line_72();
F->name_1318 = NULL;
F->params_1319 = NULL;
F->x_1320 = NULL;
F->tts_1321 = NULL;
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->name_1318 = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1321 = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1319 = f_formal_params_134();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1019)rt_nil_check((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->x_1320 = f_nn_65((((rt_int)44LL)), rt_r_ichk(F->line_1317));
(*(P1026)rt_nil_check(F->x_1320)).d = F->params_1319;
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1320)).b = f_formal_params_134();
}
} else {
F->x_1320 = f_nn_65((((rt_int)43LL)), rt_r_ichk(F->line_1317));
(*(P1026)rt_nil_check(F->x_1320)).b = F->params_1319;
}
(*(P1026)rt_nil_check(F->x_1320)).name = F->name_1318;
(*(P1026)rt_nil_check(F->x_1320)).e = F->tts_1321;
(*(P1026)rt_nil_check(F->x_1320)).a = f_p_subtype_96();
(*(P1026)rt_nil_check(F->x_1320)).c = f_rep_spec_126();
F->result_ = F->x_1320;
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

static P1026 f_formal_params_134(void) {
  struct f_formal_params_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1322 = NULL;
F->tail_1323 = NULL;
F->more_1324 = RT_R_EUNDEF;
F->more_1324 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1324)) {
F->mode_1325 = RT_R_IUNDEF;
F->mode_1325 = (((rt_int)1LL));
F->names_1326 = NULL;
F->ntail_1327 = NULL;
F->st_1328 = NULL;
if ((((f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1325 = f_mode_of_133(&(((P1019)rt_nil_check((*(P1021)rt_nil_check((((P1023)rt_nil_check(g_toks_1057))->all).p[(rt_index(rt_r_ichk(g_tpos_1059), (((P1023)rt_nil_check(g_toks_1057))->all).lo, (((P1023)rt_nil_check(g_toks_1057))->all).hi) - (((P1023)rt_nil_check(g_toks_1057))->all).lo)])).s))->all));
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
}
f_append_69(&F->names_1326, &F->ntail_1327, f_name_node_94());
while ((((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_80(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P1019)rt_nil_check(f_text_at_82(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P1019)rt_nil_check(f_text_at_82(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
f_append_69(&F->names_1326, &F->ntail_1327, f_name_node_94());
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1328 = f_p_subtype_96();
while ((F->names_1326 != NULL)) {
F->p_1329 = NULL;
F->p_1329 = f_nn_65((((rt_int)52LL)), rt_r_ichk((*(P1026)rt_nil_check(F->names_1326)).line));
(*(P1026)rt_nil_check(F->p_1329)).name = (*(P1026)rt_nil_check(F->names_1326)).name;
(*(P1026)rt_nil_check(F->p_1329)).ival = rt_r_ichk(F->mode_1325);
(*(P1026)rt_nil_check(F->p_1329)).a = F->st_1328;
f_append_69(&F->head_1322, &F->tail_1323, F->p_1329);
F->names_1326 = (*(P1026)rt_nil_check(F->names_1326)).next;
}
F->more_1324 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1322;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_136(P1026 owner_135) {
  struct f_imports_list_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_135 = owner_135;
F->head_1330 = NULL;
F->tail_1331 = NULL;
F->more_1332 = RT_R_EUNDEF;
F->more_1332 = 1;
if ((!f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1026)rt_nil_check(F->owner_135)).flag = rt_add(rt_r_ichk((*(P1026)rt_nil_check(F->owner_135)).flag), ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (rt_r_echk(F->more_1332)) {
F->ro_1333 = RT_R_EUNDEF;
F->ro_1333 = f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1334 = NULL;
F->x_1334 = f_name_node_94();
if (rt_r_echk(F->ro_1333)) {
(*(P1026)rt_nil_check(F->x_1334)).ival = ((rt_int)1LL);
}
f_append_69(&F->head_1330, &F->tail_1331, F->x_1334);
F->more_1332 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1026)rt_nil_check(F->owner_135)).d = F->head_1330;
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

static P1019 f_definable_name_139(void) {
  struct f_definable_name_139fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL))))) {
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)2LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1019)rt_nil_check((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_1059), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)); b_; }));
goto ret_;
} else if (((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P1019)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("*", 1)))) {
F->r_1335 = NULL;
F->r_1335 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
while ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; }))) {
F->r_1335 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_1335))->all), rt_str("*", 1)); b_; }));
} else if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1335 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_1335))->all), rt_str("..", 2)); b_; }));
} else if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->r_1335 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_1335))->all), rt_str(",", 1)); b_; }));
} else {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a subscripting selector is made of *, .. and ,", 46); b_; }));
}
}
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_1335))->all), rt_str(")", 1)); b_; }));
goto ret_;
}
if ((f_at_kind_78((((rt_int)1LL))) || (f_at_kind_78((((rt_int)3LL))) && f_is_definable_138(&(((P1019)rt_nil_check((*(P1021)rt_nil_check((((P1023)rt_nil_check(g_toks_1057))->all).p[(rt_index(rt_r_ichk(g_tpos_1059), (((P1023)rt_nil_check(g_toks_1057))->all).lo, (((P1023)rt_nil_check(g_toks_1057))->all).hi) - (((P1023)rt_nil_check(g_toks_1057))->all).lo)])).s))->all))))) {
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->result_ = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_1059), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P1026 f_subprogram_decl_140(void) {
  struct f_subprogram_decl_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1336 = RT_R_IUNDEF;
F->line_1336 = f_cur_line_72();
F->x_1337 = NULL;
F->is_abn_1338 = RT_R_EUNDEF;
F->is_abn_1338 = f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1339 = RT_R_EUNDEF;
F->is_func_1339 = f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
F->dummy_1340 = RT_R_EUNDEF;
if (rt_r_echk(F->is_func_1339)) {
F->x_1337 = f_nn_65((((rt_int)46LL)), rt_r_ichk(F->line_1336));
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1337 = f_nn_65((((rt_int)45LL)), rt_r_ichk(F->line_1336));
} else {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
if (rt_r_echk(F->is_abn_1338)) {
(*(P1026)rt_nil_check(F->x_1337)).flag = ((rt_int)1LL);
}
(*(P1026)rt_nil_check(F->x_1337)).name = f_definable_name_139();
if ((((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1337)).name))->all), rt_str(">", 1)) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1337)).name))->all), rt_str("<=", 2))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1337)).name))->all), rt_str(">=", 2))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1337)).name))->all), rt_str("/=", 2)))) {
f_fail_23(rt_r_ichk(F->line_1336), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1337)).name))->all), rt_str(" is not a definable symbol", 26)); b_; }));
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1337)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1337)).a = f_formal_params_134();
}
if (rt_r_echk(F->is_func_1339)) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1026)rt_nil_check(F->x_1337)).b = f_p_subtype_96();
}
F->dummy_1340 = f_imports_list_136(F->x_1337);
if (((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P1026)rt_nil_check(F->x_1337)).prags == NULL)) {
(*(P1026)rt_nil_check(F->x_1337)).prags = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P1026)rt_nil_check(F->x_1337)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1337)).prags))->all), (((P1019)rt_nil_check((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1026)rt_nil_check(F->x_1337)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (rt_r_echk(F->is_func_1339)) {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P1019)rt_nil_check(f_definable_name_139()))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1337)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1337)).name))->all)); b_; }));
}
F->result_ = F->x_1337;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_capsule_decl_141(void) {
  struct f_capsule_decl_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1341 = NULL;
F->x_1341 = f_nn_65((((rt_int)47LL)), f_cur_line_72());
F->dummy_1342 = RT_R_EUNDEF;
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1341)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1341)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1341)).b = f_formal_params_134();
}
F->dummy_1342 = f_imports_list_136(F->x_1341);
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1026)rt_nil_check(F->x_1341)).ival = ((rt_int)1LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P1026)rt_nil_check(F->x_1341)).ival = ((rt_int)0LL);
} else {
F->head_1343 = NULL;
F->tail_1344 = NULL;
F->more_1345 = RT_R_EUNDEF;
F->more_1345 = 1;
while (rt_r_echk(F->more_1345)) {
F->n_1346 = NULL;
F->n_1346 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P1026)rt_nil_check(F->n_1346)).ival = ((rt_int)1LL);
}
(*(P1026)rt_nil_check(F->n_1346)).name = f_definable_name_139();
f_append_69(&F->head_1343, &F->tail_1344, F->n_1346);
F->more_1345 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1026)rt_nil_check(F->x_1341)).a = F->head_1343;
(*(P1026)rt_nil_check(F->x_1341)).ival = ((rt_int)2LL);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1026)rt_nil_check(F->x_1341)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
(*(P1026)rt_nil_check(F->x_1341)).eline = f_cur_line_72();
if ((!rt_str_eq((((P1019)rt_nil_check(f_expect_id_93()))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1341)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1341;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_formal_tt_142(void) {
  struct f_formal_tt_142fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1347 = NULL;
F->tail_1348 = NULL;
F->more_1349 = RT_R_EUNDEF;
F->more_1349 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1349)) {
f_append_69(&F->head_1347, &F->tail_1348, f_name_node_94());
F->more_1349 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1347;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_generic_decl_143(void) {
  struct f_generic_decl_143fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1350 = NULL;
F->x_1350 = f_nn_65((((rt_int)51LL)), f_cur_line_72());
F->head_1351 = NULL;
F->tail_1352 = NULL;
F->more_1353 = RT_R_EUNDEF;
F->more_1353 = 1;
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
while (rt_r_echk(F->more_1353)) {
F->names_1354 = NULL;
F->names_1354 = f_id_list_95();
F->kind_1355 = RT_R_IUNDEF;
F->kind_1355 = ((rt_int)6LL);
F->st_1356 = NULL;
F->items_1357 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1355 = ((rt_int)1LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1355 = ((rt_int)2LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1355 = ((rt_int)3LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1355 = ((rt_int)4LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1355 = ((rt_int)5LL);
} else if (((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1019)rt_nil_check((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("STRING", 6))) && (!((f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P1019)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->kind_1355 = ((rt_int)7LL);
} else if (((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1019)rt_nil_check((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("ENUM", 4))) && (!((f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P1019)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->kind_1355 = ((rt_int)8LL);
} else {
F->st_1356 = f_p_subtype_96();
}
if (((rt_r_ichk(F->kind_1355) <= ((rt_int)5LL)) && f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
F->items_1357 = f_type_list_144();
}
if (((rt_r_ichk(F->kind_1355) == ((rt_int)4LL)) && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1356 = f_p_subtype_96();
}
while ((F->names_1354 != NULL)) {
F->p_1358 = NULL;
F->p_1358 = f_nn_65((((rt_int)52LL)), rt_r_ichk((*(P1026)rt_nil_check(F->names_1354)).line));
(*(P1026)rt_nil_check(F->p_1358)).name = (*(P1026)rt_nil_check(F->names_1354)).name;
(*(P1026)rt_nil_check(F->p_1358)).ival = rt_r_ichk(F->kind_1355);
(*(P1026)rt_nil_check(F->p_1358)).a = F->st_1356;
(*(P1026)rt_nil_check(F->p_1358)).b = F->items_1357;
f_append_69(&F->head_1351, &F->tail_1352, F->p_1358);
F->names_1354 = (*(P1026)rt_nil_check(F->names_1354)).next;
}
F->more_1353 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->nhead_1359 = NULL;
F->ntail_1360 = NULL;
F->more_1353 = 1;
while (rt_r_echk(F->more_1353)) {
F->it_1361 = NULL;
F->it_1361 = f_nn_65((((rt_int)52LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
(*(P1026)rt_nil_check(F->it_1361)).ival = ((rt_int)3LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
(*(P1026)rt_nil_check(F->it_1361)).ival = ((rt_int)4LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
(*(P1026)rt_nil_check(F->it_1361)).ival = ((rt_int)5LL);
}
(*(P1026)rt_nil_check(F->it_1361)).name = f_definable_name_139();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1026)rt_nil_check(F->it_1361)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1026)rt_nil_check(F->it_1361)).b = f_type_list_144();
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
(*(P1026)rt_nil_check(F->it_1361)).a = f_p_subtype_96();
}
f_append_69(&F->nhead_1359, &F->ntail_1360, F->it_1361);
F->more_1353 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1026)rt_nil_check(F->x_1350)).d = F->nhead_1359;
}
(*(P1026)rt_nil_check(F->x_1350)).a = F->head_1351;
(*(P1026)rt_nil_check(F->x_1350)).b = f_declaration_123();
(*(P1026)rt_nil_check(F->x_1350)).name = (*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->x_1350)).b)).name;
F->result_ = F->x_1350;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_type_list_144(void) {
  struct f_type_list_144fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1362 = NULL;
F->tail_1363 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1364 = RT_R_EUNDEF;
F->more_1364 = 1;
while (rt_r_echk(F->more_1364)) {
if (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P1019)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(",", 1)) || rt_str_eq((((P1019)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(")", 1))))) {
F->n_1365 = NULL;
F->n_1365 = f_nn_65((((rt_int)80LL)), f_cur_line_72());
(*(P1026)rt_nil_check(F->n_1365)).name = f_expect_id_93();
f_append_69(&F->head_1362, &F->tail_1363, F->n_1365);
} else {
f_append_69(&F->head_1362, &F->tail_1363, f_p_subtype_96());
}
F->more_1364 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1362;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_task_decl_145(void) {
  struct f_task_decl_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1366 = NULL;
F->x_1366 = f_nn_65((((rt_int)50LL)), f_cur_line_72());
F->dummy_1367 = RT_R_EUNDEF;
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1366)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1366)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1366)).a = f_formal_params_134();
}
F->dummy_1367 = f_imports_list_136(F->x_1366);
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1026)rt_nil_check(F->x_1366)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P1019)rt_nil_check(f_expect_id_93()))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1366)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1366)).name))->all)); b_; }));
}
F->result_ = F->x_1366;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_expose_decl_146(void) {
  struct f_expose_decl_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1368 = NULL;
F->x_1368 = f_nn_65((((rt_int)48LL)), f_cur_line_72());
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1026)rt_nil_check(F->x_1368)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1369 = NULL;
F->tail_1370 = NULL;
F->more_1371 = RT_R_EUNDEF;
F->more_1371 = 1;
while (rt_r_echk(F->more_1371)) {
F->n_1372 = NULL;
F->n_1372 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P1026)rt_nil_check(F->n_1372)).ival = ((rt_int)1LL);
}
(*(P1026)rt_nil_check(F->n_1372)).name = f_definable_name_139();
f_append_69(&F->head_1369, &F->tail_1370, F->n_1372);
F->more_1371 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1026)rt_nil_check(F->x_1368)).a = F->head_1369;
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P1026)rt_nil_check(F->x_1368)).flag = ((rt_int)1LL);
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P1026)rt_nil_check(F->x_1368)).flag = rt_add(rt_r_ichk((*(P1026)rt_nil_check(F->x_1368)).flag), ((rt_int)2LL));
}
(*(P1026)rt_nil_check(F->x_1368)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1368)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1368)).b = f_actual_params_98();
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1373 = NULL;
F->tail_1374 = NULL;
F->more_1375 = RT_R_EUNDEF;
F->more_1375 = 1;
while (rt_r_echk(F->more_1375)) {
F->n_1376 = NULL;
F->n_1376 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
F->tgt_1377 = NULL;
F->tgt_1377 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
(*(P1026)rt_nil_check(F->n_1376)).name = f_definable_name_139();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P1026)rt_nil_check(F->tgt_1377)).name = f_definable_name_139();
(*(P1026)rt_nil_check(F->n_1376)).a = F->tgt_1377;
f_append_69(&F->head_1373, &F->tail_1374, F->n_1376);
F->more_1375 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1026)rt_nil_check(F->x_1368)).c = F->head_1373;
}
F->result_ = F->x_1368;
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

static P1026 f_statement_149(void) {
  struct f_statement_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1378 = NULL;
F->ltail_1379 = NULL;
F->match_1380 = NULL;
F->s_1381 = NULL;
while (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P1019)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_69(&F->labels_1378, &F->ltail_1379, f_name_node_94());
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
}
if (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_148(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1019)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all); b_; })))) {
F->match_1380 = f_expect_id_93();
}
F->s_1381 = f_unlabeled_statement_150();
if ((F->match_1380 != NULL)) {
if ((((((((rt_r_ichk((*(P1026)rt_nil_check(F->s_1381)).kind) != (((rt_int)22LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->s_1381)).kind) != (((rt_int)23LL)))) && (rt_r_ichk((*(P1026)rt_nil_check(F->s_1381)).kind) != (((rt_int)24LL)))) && (rt_r_ichk((*(P1026)rt_nil_check(F->s_1381)).kind) != (((rt_int)25LL)))) && (rt_r_ichk((*(P1026)rt_nil_check(F->s_1381)).kind) != (((rt_int)26LL)))) && (rt_r_ichk((*(P1026)rt_nil_check(F->s_1381)).kind) != (((rt_int)35LL)))) && (rt_r_ichk((*(P1026)rt_nil_check(F->s_1381)).kind) != (((rt_int)36LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_1381)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P1019)rt_nil_check(f_expect_id_93()))->all), (((P1019)rt_nil_check(F->match_1380))->all)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_1381)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P1019)rt_nil_check(F->match_1380))->all)); b_; }));
}
(*(P1026)rt_nil_check(F->s_1381)).tag = F->match_1380;
}
(*(P1026)rt_nil_check(F->s_1381)).labels = F->labels_1378;
F->result_ = F->s_1381;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_unlabeled_statement_150(void) {
  struct f_unlabeled_statement_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1382 = RT_R_IUNDEF;
F->line_1382 = f_cur_line_72();
F->x_1383 = NULL;
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
F->x_1383 = f_nn_65((((rt_int)25LL)), rt_r_ichk(F->line_1382));
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1383)).a = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1383;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_158();
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1383 = f_nn_65((((rt_int)27LL)), rt_r_ichk(F->line_1382));
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1383)).name = f_expect_id_93();
F->result_ = F->x_1383;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1383 = f_nn_65((((rt_int)28LL)), rt_r_ichk(F->line_1382));
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P1026)rt_nil_check(F->x_1383)).a = f_expr_107();
}
F->result_ = F->x_1383;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1383 = f_nn_65((((rt_int)29LL)), rt_r_ichk(F->line_1382));
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1383)).name = f_expect_id_93();
F->result_ = F->x_1383;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1383 = f_nn_65((((rt_int)30LL)), rt_r_ichk(F->line_1382));
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1383)).name = f_expect_id_93();
F->result_ = F->x_1383;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->result_ = f_nn_65((((rt_int)31LL)), rt_r_ichk(F->line_1382));
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1383 = f_nn_65((((rt_int)34LL)), rt_r_ichk(F->line_1382));
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1383)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1383)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1383)).b = f_actual_params_98();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P1026)rt_nil_check(F->x_1383)).a = f_postfix_117();
F->result_ = F->x_1383;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1384 = NULL;
F->tail_1385 = NULL;
F->x_1383 = f_nn_65((((rt_int)35LL)), rt_r_ichk(F->line_1382));
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1386 = NULL;
F->itail_1387 = NULL;
F->more_1388 = RT_R_EUNDEF;
F->more_1388 = 1;
while (rt_r_echk(F->more_1388)) {
f_append_69(&F->invs_1386, &F->itail_1387, f_postfix_117());
F->more_1388 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_69(&F->head_1384, &F->tail_1385, f_arm_154(F->invs_1386, f_body_121(), rt_r_ichk(F->line_1382)));
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P1026)rt_nil_check(F->x_1383)).a = F->head_1384;
F->result_ = F->x_1383;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1383 = f_nn_65((((rt_int)36LL)), rt_r_ichk(F->line_1382));
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1383)).a = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P1026)rt_nil_check(F->x_1383)).b = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1383;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1383 = f_nn_65((((rt_int)32LL)), rt_r_ichk(F->line_1382));
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1383)).a = f_postfix_117();
if ((!(f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1019)rt_nil_check((*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1026)rt_nil_check(F->x_1383)).b = f_actual_params_98();
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P1026)rt_nil_check(F->x_1383)).c = f_expr_107();
}
F->result_ = F->x_1383;
goto ret_;
}
{
F->target_1389 = NULL;
F->target_1389 = f_postfix_117();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1383 = f_nn_65((((rt_int)20LL)), rt_r_ichk(F->line_1382));
(*(P1026)rt_nil_check(F->x_1383)).a = F->target_1389;
(*(P1026)rt_nil_check(F->x_1383)).b = f_expr_107();
} else {
F->x_1383 = f_nn_65((((rt_int)21LL)), rt_r_ichk(F->line_1382));
(*(P1026)rt_nil_check(F->x_1383)).a = F->target_1389;
}
}
F->result_ = F->x_1383;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_arm_154(P1026 cond_151, P1026 b_152, rt_int line_153) {
  struct f_arm_154fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_151 = cond_151;
F->b_152 = b_152;
F->line_153 = line_153;
F->x_1390 = NULL;
F->x_1390 = f_nn_65((((rt_int)60LL)), F->line_153);
(*(P1026)rt_nil_check(F->x_1390)).a = F->cond_151;
(*(P1026)rt_nil_check(F->x_1390)).b = F->b_152;
F->result_ = F->x_1390;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_if_stmt_155(void) {
  struct f_if_stmt_155fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1391 = NULL;
F->x_1391 = f_nn_65((((rt_int)22LL)), f_cur_line_72());
F->head_1392 = NULL;
F->tail_1393 = NULL;
F->cond_1394 = NULL;
F->go_1395 = RT_R_EUNDEF;
F->go_1395 = 1;
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
F->cond_1394 = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_69(&F->head_1392, &F->tail_1393, f_arm_154(F->cond_1394, f_body_121(), rt_r_ichk((*(P1026)rt_nil_check(F->x_1391)).line)));
while (rt_r_echk(F->go_1395)) {
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1394 = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_69(&F->head_1392, &F->tail_1393, f_arm_154(F->cond_1394, f_body_121(), rt_r_ichk((*(P1026)rt_nil_check(F->x_1391)).line)));
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P1026)rt_nil_check(F->x_1391)).flag = ((rt_int)1LL);
(*(P1026)rt_nil_check(F->x_1391)).b = f_body_121();
} else {
F->go_1395 = 0;
}
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P1026)rt_nil_check(F->x_1391)).a = F->head_1392;
F->result_ = F->x_1391;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_case_stmt_156(void) {
  struct f_case_stmt_156fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1396 = NULL;
F->x_1396 = f_nn_65((((rt_int)23LL)), f_cur_line_72());
F->head_1397 = NULL;
F->tail_1398 = NULL;
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1396)).a = f_expr_107();
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1399 = NULL;
F->ltail_1400 = NULL;
F->more_1401 = RT_R_EUNDEF;
F->more_1401 = 1;
while (rt_r_echk(F->more_1401)) {
F->l_1402 = NULL;
F->l_1402 = f_nn_65((((rt_int)61LL)), f_cur_line_72());
(*(P1026)rt_nil_check(F->l_1402)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1026)rt_nil_check(F->l_1402)).b = f_expr_107();
}
f_append_69(&F->labs_1399, &F->ltail_1400, F->l_1402);
F->more_1401 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_69(&F->head_1397, &F->tail_1398, f_arm_154(F->labs_1399, f_body_121(), rt_r_ichk((*(P1026)rt_nil_check(F->x_1396)).line)));
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1026)rt_nil_check(F->x_1396)).flag = ((rt_int)1LL);
(*(P1026)rt_nil_check(F->x_1396)).c = f_body_121();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P1026)rt_nil_check(F->x_1396)).b = F->head_1397;
F->result_ = F->x_1396;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_repeat_stmt_157(void) {
  struct f_repeat_stmt_157fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1403 = NULL;
F->x_1403 = f_nn_65((((rt_int)24LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P1026)rt_nil_check(F->x_1403)).flag = ((rt_int)1LL);
(*(P1026)rt_nil_check(F->x_1403)).name = f_expect_id_93();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P1026)rt_nil_check(F->x_1403)).ival = ((rt_int)1LL);
}
(*(P1026)rt_nil_check(F->x_1403)).a = f_p_subtype_96();
} else {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P1026)rt_nil_check(F->x_1403)).a = f_expr_107();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P1026)rt_nil_check(F->x_1403)).b = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1403;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_guard_stmt_158(void) {
  struct f_guard_stmt_158fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1404 = NULL;
F->x_1404 = f_nn_65((((rt_int)26LL)), f_cur_line_72());
F->head_1405 = NULL;
F->tail_1406 = NULL;
g_tpos_1059 = rt_add(rt_r_ichk(g_tpos_1059), ((rt_int)1LL));
(*(P1026)rt_nil_check(F->x_1404)).a = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1407 = NULL;
F->h_1407 = f_nn_65((((rt_int)62LL)), f_cur_line_72());
(*(P1026)rt_nil_check(F->h_1407)).a = f_id_list_95();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1026)rt_nil_check(F->h_1407)).b = f_body_121();
f_append_69(&F->head_1405, &F->tail_1406, F->h_1407);
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1026)rt_nil_check(F->x_1404)).flag = ((rt_int)1LL);
(*(P1026)rt_nil_check(F->x_1404)).c = f_body_121();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P1026)rt_nil_check(F->x_1404)).b = F->head_1405;
F->result_ = F->x_1404;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_program_159(void) {
  struct f_program_159fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1408 = NULL;
F->tail_1409 = NULL;
while ((!f_at_kind_78((((rt_int)0LL))))) {
if ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1410 = NULL;
F->pr_1410 = (*(P1021)rt_nil_check(({ A1025 b_ = (((P1023)rt_nil_check(g_toks_1057))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1059), b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1411 = NULL;
F->u_1411 = f_capsule_decl_141();
(*(P1026)rt_nil_check(F->u_1411)).prags = F->pr_1410;
f_append_69(&F->head_1408, &F->tail_1409, F->u_1411);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1408;
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
F->h_1412 = RT_R_IUNDEF;
F->h_1412 = ((rt_int)0LL);
{ rt_int lo1414 = ((rt_int)1LL), hi1415 = ((rt_int)(((*F->s_160)).len));
for (rt_int it1416 = lo1414; it1416 <= hi1415; it1416++) {
F->i_1413 = it1416;
F->h_1412 = rt_mod(rt_add(rt_mul(rt_r_ichk(F->h_1412), ((rt_int)31LL)), ((rt_int)(rt_r_echk(rt_str_get((*F->s_160), F->i_1413))) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = rt_r_ichk(F->h_1412);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1036 f_lookup_163(rstr *name_162) {
  struct f_lookup_163fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_162 = name_162;
F->y_1417 = NULL;
F->y_1417 = ({ A1042 b_ = (((P1040)rt_nil_check(g_table_1066))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_1067 != NULL)) {
while ((F->y_1417 != NULL)) {
if (((rt_r_ichk((*(P1036)rt_nil_check(F->y_1417)).depth) >= rt_r_ichk(g_gdepth_1099)) && rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_1417)).name))->all), (*F->name_162)))) {
F->result_ = F->y_1417;
goto ret_;
}
F->y_1417 = (*(P1036)rt_nil_check(F->y_1417)).chain;
}
F->y_1417 = ({ A1042 b_ = (((P1040)rt_nil_check(g_genv_1067))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1417 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_1417)).name))->all), (*F->name_162))) {
F->result_ = F->y_1417;
goto ret_;
}
F->y_1417 = (*(P1036)rt_nil_check(F->y_1417)).chain;
}
F->y_1417 = ({ A1042 b_ = (((P1040)rt_nil_check(g_table_1066))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1417 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_1417)).name))->all), (*F->name_162))) {
F->result_ = F->y_1417;
goto ret_;
}
F->y_1417 = (*(P1036)rt_nil_check(F->y_1417)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1036 f_lookup_decl_165(P1026 d_164) {
  struct f_lookup_decl_165fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_164 = d_164;
F->y_1418 = NULL;
F->y_1418 = ({ A1042 b_ = (((P1040)rt_nil_check(g_table_1066))->all); b_.p[(rt_index(f_hash_161(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_164)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1418 != NULL)) {
if (((*(P1036)rt_nil_check(F->y_1418)).decl == F->d_164)) {
F->result_ = F->y_1418;
goto ret_;
}
F->y_1418 = (*(P1036)rt_nil_check(F->y_1418)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_168(P1036 y_166, rt_int line_167) {
  struct f_define_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_166 = y_166;
F->line_167 = line_167;
F->h_1419 = RT_R_IUNDEF;
F->h_1419 = f_hash_161(&(((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_166)).name))->all));
F->z_1420 = NULL;
F->z_1420 = ({ A1042 b_ = (((P1040)rt_nil_check(g_table_1066))->all); b_.p[(rt_index(rt_r_ichk(F->h_1419), b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1420 != NULL)) {
if ((((rt_r_ichk((*(P1036)rt_nil_check(F->z_1420)).depth) == rt_r_ichk(g_depth_1069)) && rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->z_1420)).name))->all), (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_166)).name))->all))) && (!(((f_overloadable_170(F->y_166) && f_overloadable_170(F->z_1420)) && (rt_r_ichk((*(P1036)rt_nil_check(F->z_1420)).kind) == rt_r_ichk((*(P1036)rt_nil_check(F->y_166)).kind))) && (!(f_same_signature_176((*(P1036)rt_nil_check(F->y_166)).params, (*(P1036)rt_nil_check(F->z_1420)).params) && f_same_tt_173((*(P1036)rt_nil_check(F->y_166)).decl, (*(P1036)rt_nil_check(F->z_1420)).decl))))))) {
f_fail_23(F->line_167, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_166)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1420 = (*(P1036)rt_nil_check(F->z_1420)).chain;
}
(*(P1036)rt_nil_check(F->y_166)).depth = rt_r_ichk(g_depth_1069);
(*(P1036)rt_nil_check(F->y_166)).chain = ({ A1042 b_ = (((P1040)rt_nil_check(g_table_1066))->all); b_.p[(rt_index(rt_r_ichk(F->h_1419), b_.lo, b_.hi) - b_.lo)]; });
(((P1040)rt_nil_check(g_table_1066))->all).p[(rt_index(rt_r_ichk(F->h_1419), (((P1040)rt_nil_check(g_table_1066))->all).lo, (((P1040)rt_nil_check(g_table_1066))->all).hi) - (((P1040)rt_nil_check(g_table_1066))->all).lo)] = F->y_166;
(*(P1036)rt_nil_check(F->y_166)).stack = g_scope_stack_1070;
g_scope_stack_1070 = F->y_166;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_170(P1036 y_169) {
  struct f_overloadable_170fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_169 = y_169;
F->result_ = ((((rt_r_ichk((*(P1036)rt_nil_check(F->y_169)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_169)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_169)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_169)).kind) == (((rt_int)8LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_173(P1026 a_171, P1026 b_172) {
  struct f_same_tt_173fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_171 = a_171;
F->b_172 = b_172;
F->x_1421 = NULL;
F->y_1422 = NULL;
if (((F->a_171 == NULL) || (F->b_172 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1421 = (*(P1026)rt_nil_check(F->a_171)).e;
F->y_1422 = (*(P1026)rt_nil_check(F->b_172)).e;
while (((F->x_1421 != NULL) && (F->y_1422 != NULL))) {
if ((!rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1421)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->y_1422)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1421 = (*(P1026)rt_nil_check(F->x_1421)).next;
F->y_1422 = (*(P1026)rt_nil_check(F->y_1422)).next;
}
F->result_ = ((F->x_1421 == NULL) && (F->y_1422 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_176(P1038 a_174, P1038 b_175) {
  struct f_same_signature_176fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_174 = a_174;
F->b_175 = b_175;
F->x_1423 = NULL;
F->x_1423 = F->a_174;
F->y_1424 = NULL;
F->y_1424 = F->b_175;
while (((F->x_1423 != NULL) && (F->y_1424 != NULL))) {
if ((!f_same_221((*(P1038)rt_nil_check(F->x_1423)).t, (*(P1038)rt_nil_check(F->y_1424)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1423 = (*(P1038)rt_nil_check(F->x_1423)).next;
F->y_1424 = (*(P1038)rt_nil_check(F->y_1424)).next;
}
F->result_ = ((F->x_1423 == NULL) && (F->y_1424 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_177(void) {
  struct f_open_scope_177fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_1069 = rt_add(rt_r_ichk(g_depth_1069), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_178(void) {
  struct f_close_scope_178fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_1070 != NULL) && (rt_r_ichk((*(P1036)rt_nil_check(g_scope_stack_1070)).depth) == rt_r_ichk(g_depth_1069)))) {
(((P1040)rt_nil_check(g_table_1066))->all).p[(rt_index(f_hash_161(&(((P1019)rt_nil_check((*(P1036)rt_nil_check(g_scope_stack_1070)).name))->all)), (((P1040)rt_nil_check(g_table_1066))->all).lo, (((P1040)rt_nil_check(g_table_1066))->all).hi) - (((P1040)rt_nil_check(g_table_1066))->all).lo)] = (*(P1036)rt_nil_check(g_scope_stack_1070)).chain;
g_scope_stack_1070 = (*(P1036)rt_nil_check(g_scope_stack_1070)).stack;
}
g_depth_1069 = rt_sub(rt_r_ichk(g_depth_1069), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1036 f_new_sym_181(rt_int kind_179, P1019 name_180) {
  struct f_new_sym_181fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_179 = kind_179;
F->name_180 = name_180;
F->y_1425 = NULL;
{ R1037 *cell1426 = rt_alloc(sizeof(R1037));
(*cell1426).name = NULL;
(*cell1426).t = NULL;
(*cell1426).c = NULL;
(*cell1426).access = NULL;
(*cell1426).cname = NULL;
(*cell1426).st = NULL;
(*cell1426).decl = NULL;
(*cell1426).params = NULL;
(*cell1426).result = NULL;
(*cell1426).members = NULL;
(*cell1426).mnext = NULL;
(*cell1426).binds = NULL;
(*cell1426).insts = NULL;
(*cell1426).env = NULL;
(*cell1426).chain = NULL;
(*cell1426).stack = NULL;
(*cell1426).owner = NULL;
(*cell1426).gctx = NULL;
(*cell1426).mv = NULL;
(*cell1426).reqs = NULL;
(*cell1426).home = NULL;
(*cell1426).capn = NULL;
(*cell1426).tbinds = NULL;
(*cell1426).loc = NULL;
(*cell1426).reqs_sym = NULL;
F->y_1425 = cell1426;
}
(*(P1036)rt_nil_check(F->y_1425)).kind = F->kind_179;
(*(P1036)rt_nil_check(F->y_1425)).name = F->name_180;
F->result_ = F->y_1425;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1032 f_new_typ_183(rt_int kind_182) {
  struct f_new_typ_183fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_182 = kind_182;
F->t_1427 = NULL;
{ R1033 *cell1428 = rt_alloc(sizeof(R1033));
(*cell1428).name = NULL;
(*cell1428).lits = NULL;
(*cell1428).elem = NULL;
(*cell1428).idx = NULL;
(*cell1428).idx2 = NULL;
(*cell1428).elemcons = NULL;
(*cell1428).elemst = NULL;
(*cell1428).under = NULL;
(*cell1428).tparams = NULL;
(*cell1428).ocap = NULL;
(*cell1428).fields = NULL;
(*cell1428).target = NULL;
(*cell1428).decl = NULL;
(*cell1428).cname = NULL;
(*cell1428).initp = NULL;
(*cell1428).finalp = NULL;
(*cell1428).tpsyms = NULL;
(*cell1428).gen = NULL;
(*cell1428).gbinds = NULL;
(*cell1428).next = NULL;
(*cell1428).idxs = NULL;
(*cell1428).assignp = NULL;
(*cell1428).eqp = NULL;
(*cell1428).ltp = NULL;
(*cell1428).repn = NULL;
F->t_1427 = cell1428;
}
(*(P1032)rt_nil_check(F->t_1427)).kind = F->kind_182;
F->result_ = F->t_1427;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1028 f_new_cons_184(void) {
  struct f_new_cons_184fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1429 = NULL;
{ R1029 *cell1430 = rt_alloc(sizeof(R1029));
(*cell1430).lo = NULL;
(*cell1430).hi = NULL;
(*cell1430).lo2 = NULL;
(*cell1430).hi2 = NULL;
(*cell1430).slen = NULL;
(*cell1430).args = NULL;
(*cell1430).prec = NULL;
(*cell1430).bnds = NULL;
F->c_1429 = cell1430;
}
F->result_ = F->c_1429;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_186(P1032 t_185) {
  struct f_scalar_kind_186fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_185 = t_185;
F->result_ = ((F->t_185 != NULL) && (((rt_r_ichk((*(P1032)rt_nil_check(F->t_185)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_185)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_185)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_188(P1032 t_187) {
  struct f_bound_ctype_188fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_187 = t_187;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_187)).kind) == (((rt_int)3LL)))) {
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

static rstr f_cbound_191(P1028 c_189, rstr *b_190) {
  struct f_cbound_191fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_189 = c_189;
F->b_190 = b_190;
F->p_1431 = NULL;
F->p_1431 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!rt_r_echk((*(P1028)rt_nil_check(F->c_189)).dyn)) || (rt_r_ichk((*(P1028)rt_nil_check(F->c_189)).lvl) <= ((rt_int)0LL)))) {
F->result_ = (*F->b_190);
goto ret_;
}
{ rt_int lo1433 = ((rt_int)1LL), hi1434 = rt_sub(rt_r_ichk(g_cur_level_1083), rt_r_ichk((*(P1028)rt_nil_check(F->c_189)).lvl));
for (rt_int it1435 = lo1433; it1435 <= hi1434; it1435++) {
F->i_1432 = it1435;
F->p_1431 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->p_1431))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->p_1431))->all), rt_str("->", 2)), (*F->b_190));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_193(P1028 c_192) {
  struct f_clo_193fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_192 = c_192;
F->result_ = f_cbound_191(F->c_192, &(((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_192)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_195(P1028 c_194) {
  struct f_chi_195fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_194 = c_194;
F->result_ = f_cbound_191(F->c_194, &(((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_194)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_198(P1032 t_196, P1028 c_197) {
  struct f_sub_lo_198fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_196 = t_196;
F->c_197 = c_197;
if (((F->c_197 != NULL) && ((*(P1028)rt_nil_check(F->c_197)).lo != NULL))) {
F->result_ = f_clo_193(F->c_197);
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_196)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_196)).kind) == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_201(P1032 t_199, P1028 c_200) {
  struct f_sub_hi_201fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_199 = t_199;
F->c_200 = c_200;
if (((F->c_200 != NULL) && ((*(P1028)rt_nil_check(F->c_200)).lo != NULL))) {
F->result_ = f_chi_195(F->c_200);
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_199)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_199)).kind) == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_71((*(P1032)rt_nil_check(F->t_199)).lits), ((rt_int)1LL)));
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
if ((!rt_r_echk(g_in_func_1082))) {
F->g_1436 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_202)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_203)), rt_str(" ", 1)), F->g_1436), rt_str(";", 1)); b_; }));
g_st_field_1088 = f_mk_3(&F->g_1436);
F->result_ = F->g_1436;
goto ret_;
}
{
F->f_1437 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_202), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_203)), rt_str(" ", 1)), F->f_1437), rt_str(";", 1)); b_; }));
g_st_field_1088 = f_mk_3(&F->f_1437);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1437);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1028 f_copy_cons_206(P1028 c_205) {
  struct f_copy_cons_206fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_205 = c_205;
F->r_1438 = NULL;
{ R1029 *cell1439 = rt_alloc(sizeof(R1029));
(*cell1439).lo = NULL;
(*cell1439).hi = NULL;
(*cell1439).lo2 = NULL;
(*cell1439).hi2 = NULL;
(*cell1439).slen = NULL;
(*cell1439).args = NULL;
(*cell1439).prec = NULL;
(*cell1439).bnds = NULL;
F->r_1438 = cell1439;
}
(*(P1028)rt_nil_check(F->r_1438)).lo = (*(P1028)rt_nil_check(F->c_205)).lo;
(*(P1028)rt_nil_check(F->r_1438)).hi = (*(P1028)rt_nil_check(F->c_205)).hi;
(*(P1028)rt_nil_check(F->r_1438)).lo2 = (*(P1028)rt_nil_check(F->c_205)).lo2;
(*(P1028)rt_nil_check(F->r_1438)).hi2 = (*(P1028)rt_nil_check(F->c_205)).hi2;
(*(P1028)rt_nil_check(F->r_1438)).slen = (*(P1028)rt_nil_check(F->c_205)).slen;
(*(P1028)rt_nil_check(F->r_1438)).mlo = rt_r_ichk((*(P1028)rt_nil_check(F->c_205)).mlo);
(*(P1028)rt_nil_check(F->r_1438)).mhi = rt_r_ichk((*(P1028)rt_nil_check(F->c_205)).mhi);
(*(P1028)rt_nil_check(F->r_1438)).hasm = rt_r_echk((*(P1028)rt_nil_check(F->c_205)).hasm);
(*(P1028)rt_nil_check(F->r_1438)).args = (*(P1028)rt_nil_check(F->c_205)).args;
(*(P1028)rt_nil_check(F->r_1438)).dyn = rt_r_echk((*(P1028)rt_nil_check(F->c_205)).dyn);
(*(P1028)rt_nil_check(F->r_1438)).lvl = rt_r_ichk((*(P1028)rt_nil_check(F->c_205)).lvl);
(*(P1028)rt_nil_check(F->r_1438)).prec = (*(P1028)rt_nil_check(F->c_205)).prec;
F->result_ = F->r_1438;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1028 f_freeze_209(P1028 c_207, P1032 t_208) {
  struct f_freeze_209fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_207 = c_207;
F->t_208 = t_208;
F->r_1440 = NULL;
F->saved_field_1441 = NULL;
F->saved_field_1441 = g_st_field_1088;
if ((((((F->c_207 == NULL) || ((*(P1028)rt_nil_check(F->c_207)).lo == NULL)) || rt_r_echk((*(P1028)rt_nil_check(F->c_207)).hasm)) || rt_r_echk((*(P1028)rt_nil_check(F->c_207)).dyn)) || (!f_scalar_kind_186(F->t_208)))) {
F->result_ = F->c_207;
goto ret_;
}
F->r_1440 = f_copy_cons_206(F->c_207);
{
F->ct_1442 = rt_str_copy(f_bound_ctype_188(F->t_208));
F->la_1443 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1442));
F->lf_1444 = rt_str_copy((((P1019)rt_nil_check(g_st_field_1088))->all));
F->ha_1445 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1442));
F->hf_1446 = rt_str_copy((((P1019)rt_nil_check(g_st_field_1088))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1443, rt_str(" = ", 3)), f_clo_193(F->c_207)), rt_str("; ", 2)), F->ha_1445), rt_str(" = ", 3)), f_chi_195(F->c_207)), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_1082)) {
(*(P1028)rt_nil_check(F->r_1440)).lo = f_mk_3(&F->lf_1444);
(*(P1028)rt_nil_check(F->r_1440)).hi = f_mk_3(&F->hf_1446);
(*(P1028)rt_nil_check(F->r_1440)).dyn = 1;
(*(P1028)rt_nil_check(F->r_1440)).lvl = rt_r_ichk(g_cur_level_1083);
} else {
(*(P1028)rt_nil_check(F->r_1440)).lo = f_mk_3(&F->la_1443);
(*(P1028)rt_nil_check(F->r_1440)).hi = f_mk_3(&F->ha_1445);
(*(P1028)rt_nil_check(F->r_1440)).dyn = 0;
}
}
g_st_field_1088 = F->saved_field_1441;
F->result_ = F->r_1440;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_213(P1032 t_210, P1028 c_211, rstr *v_212) {
  struct f_checked_213fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_210 = t_210;
F->c_211 = c_211;
F->v_212 = v_212;
if ((((F->c_211 == NULL) || (!f_scalar_kind_186(F->t_210))) || f_suppressed_512(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_212);
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_210)).kind) != (((rt_int)3LL))) && rt_r_echk((*(P1028)rt_nil_check(F->c_211)).hasm))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_212)), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P1028)rt_nil_check(F->c_211)).mlo))), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P1028)rt_nil_check(F->c_211)).mhi))), rt_str(")", 1));
goto ret_;
} else if (((*(P1028)rt_nil_check(F->c_211)).lo == NULL)) {
F->result_ = (*F->v_212);
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_210)).kind) == (((rt_int)3LL)))) {
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

static int f_same_lits_216(P1026 a_214, P1026 b_215) {
  struct f_same_lits_216fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_214 = a_214;
F->b_215 = b_215;
F->x_1447 = NULL;
F->x_1447 = F->a_214;
F->y_1448 = NULL;
F->y_1448 = F->b_215;
while (((F->x_1447 != NULL) && (F->y_1448 != NULL))) {
if ((!rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_1447)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->y_1448)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1447 = (*(P1026)rt_nil_check(F->x_1447)).next;
F->y_1448 = (*(P1026)rt_nil_check(F->y_1448)).next;
}
F->result_ = ((F->x_1447 == NULL) && (F->y_1448 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1032 f_str_elem_218(P1032 t_217) {
  struct f_str_elem_218fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_217 = t_217;
if (((*(P1032)rt_nil_check(F->t_217)).elem == NULL)) {
F->result_ = g_ty_ascii_1113;
goto ret_;
}
F->result_ = (*(P1032)rt_nil_check(F->t_217)).elem;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_221(P1032 a_219, P1032 b_220) {
  struct f_same_221fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_219 = a_219;
F->b_220 = b_220;
if ((F->a_219 == F->b_220)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_219 == NULL) || (F->b_220 == NULL)) || (rt_r_ichk((*(P1032)rt_nil_check(F->a_219)).kind) != rt_r_ichk((*(P1032)rt_nil_check(F->b_220)).kind)))) {
F->result_ = 0;
goto ret_;
}
if (((rt_r_ichk((*(P1032)rt_nil_check(F->a_219)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->a_219)).kind) == (((rt_int)10LL))))) {
F->result_ = f_same_221(f_str_elem_218(F->a_219), f_str_elem_218(F->b_220));
goto ret_;
}
if (((((rt_r_ichk((*(P1032)rt_nil_check(F->a_219)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->a_219)).kind) == (((rt_int)2LL)))) || (rt_r_ichk((*(P1032)rt_nil_check(F->a_219)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1032)rt_nil_check(F->a_219)).kind) == (((rt_int)9LL))))) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->a_219)).kind) == (((rt_int)4LL)))) {
F->result_ = f_same_lits_216((*(P1032)rt_nil_check(F->a_219)).lits, (*(P1032)rt_nil_check(F->b_220)).lits);
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->a_219)).kind) == (((rt_int)6LL)))) {
F->x_1449 = NULL;
F->x_1449 = (*(P1032)rt_nil_check(F->a_219)).idxs;
F->y_1450 = NULL;
F->y_1450 = (*(P1032)rt_nil_check(F->b_220)).idxs;
while (((F->x_1449 != NULL) && (F->y_1450 != NULL))) {
if ((!f_same_221((*(P1047)rt_nil_check(F->x_1449)).t, (*(P1047)rt_nil_check(F->y_1450)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1449 = (*(P1047)rt_nil_check(F->x_1449)).next;
F->y_1450 = (*(P1047)rt_nil_check(F->y_1450)).next;
}
F->result_ = (((F->x_1449 == NULL) && (F->y_1450 == NULL)) && f_same_221((*(P1032)rt_nil_check(F->a_219)).elem, (*(P1032)rt_nil_check(F->b_220)).elem));
goto ret_;
}
if (((rt_r_ichk((*(P1032)rt_nil_check(F->a_219)).kind) == (((rt_int)16LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->a_219)).kind) == (((rt_int)12LL))))) {
F->result_ = f_same_221((*(P1032)rt_nil_check(F->a_219)).elem, (*(P1032)rt_nil_check(F->b_220)).elem);
goto ret_;
}
if (((rt_r_ichk((*(P1032)rt_nil_check(F->a_219)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->a_219)).kind) == (((rt_int)17LL))))) {
F->f_1451 = NULL;
F->f_1451 = (*(P1032)rt_nil_check(F->a_219)).fields;
F->g_1452 = NULL;
F->g_1452 = (*(P1032)rt_nil_check(F->b_220)).fields;
while (((F->f_1451 != NULL) && (F->g_1452 != NULL))) {
if (((!rt_str_eq((((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_1451)).name))->all), (((P1019)rt_nil_check((*(P1034)rt_nil_check(F->g_1452)).name))->all))) || (!f_same_221((*(P1034)rt_nil_check(F->f_1451)).t, (*(P1034)rt_nil_check(F->g_1452)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1451 = (*(P1034)rt_nil_check(F->f_1451)).next;
F->g_1452 = (*(P1034)rt_nil_check(F->g_1452)).next;
}
F->result_ = ((F->f_1451 == NULL) && (F->g_1452 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1032 f_base_of_223(P1032 t_222) {
  struct f_base_of_223fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_222 = t_222;
if ((((F->t_222 != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->t_222)).kind) == (((rt_int)15LL)))) && ((*(P1032)rt_nil_check(F->t_222)).tparams == NULL))) {
F->result_ = f_base_of_223((*(P1032)rt_nil_check(F->t_222)).under);
goto ret_;
}
F->result_ = F->t_222;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1028 f_base_cons_226(P1032 t_224, P1028 c_225) {
  struct f_base_cons_226fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_224 = t_224;
F->c_225 = c_225;
if (((((F->t_224 != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->t_224)).kind) == (((rt_int)15LL)))) && ((*(P1032)rt_nil_check(F->t_224)).tparams == NULL)) && ((*(P1032)rt_nil_check(F->t_224)).elemcons != NULL))) {
F->result_ = f_base_cons_226((*(P1032)rt_nil_check(F->t_224)).under, (*(P1032)rt_nil_check(F->t_224)).elemcons);
goto ret_;
}
F->result_ = F->c_225;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_228(P1032 t_227) {
  struct f_kind_name_228fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_227 = t_227;
{ rt_int sel1453 = rt_r_ichk((*(P1032)rt_nil_check(F->t_227)).kind);
if (0 || (sel1453 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1453 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1453 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1453 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1453 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1453 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1453 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1453 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1453 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_227)).name))->all));
goto ret_;
} else if (0 || (sel1453 == (((rt_int)11LL)))) {
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

static void f_check_type_232(P1032 got_229, P1032 want_230, rt_int line_231) {
  struct f_check_type_232fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_229 = got_229;
F->want_230 = want_230;
F->line_231 = line_231;
if ((F->want_230 == NULL)) {
goto ret_;
}
if (((rt_r_ichk((*(P1032)rt_nil_check(F->got_229)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P1032)rt_nil_check(F->want_230)).kind) == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_221(F->got_229, F->want_230))) {
f_fail_23(F->line_231, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_228(F->got_229)), rt_str(" where ", 7)), f_kind_name_228(F->want_230)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_234(P1032 t_233) {
  struct f_ctype_234fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_233 = t_233;
{ rt_int sel1454 = rt_r_ichk((*(P1032)rt_nil_check(F->t_233)).kind);
if (0 || (sel1454 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1454 == (((rt_int)2LL))) || (sel1454 == (((rt_int)4LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1454 == (((rt_int)10LL)))) {
F->result_ = rt_str("rt_r_file *", 11);
goto ret_;
} else if (0 || (sel1454 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1454 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1454 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1454 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1454 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1454 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1454 == (((rt_int)16LL)))) {
F->result_ = rt_str("yset", 4);
goto ret_;
} else {
if (((*(P1032)rt_nil_check(F->t_233)).cname == NULL)) {
f_declare_ctype_240(F->t_233);
} else if (((((rt_r_ichk((*(P1032)rt_nil_check(F->t_233)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_233)).kind) == (((rt_int)17LL)))) && rt_r_echk((*(P1032)rt_nil_check(F->t_233)).forward)) && (!rt_r_echk((*(P1032)rt_nil_check(F->t_233)).defined)))) {
(*(P1032)rt_nil_check(F->t_233)).defined = 1;
f_put_27(g_out_types_1073, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_233)).cname))->all)), rt_str(" ", 1)), f_struct_body_236(F->t_233)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_233)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_236(P1032 t_235) {
  struct f_struct_body_236fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_235 = t_235;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_235)).kind) == (((rt_int)17LL)))) {
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

static rstr f_field_decls_238(P1032 t_237) {
  struct f_field_decls_238fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_237 = t_237;
F->f_1455 = NULL;
F->f_1455 = (*(P1032)rt_nil_check(F->t_237)).fields;
F->s_1456 = NULL;
F->s_1456 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1455 != NULL)) {
F->s_1456 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->s_1456))->all), f_ctype_234((*(P1034)rt_nil_check(F->f_1455)).t)), rt_str(" ", 1)), f_field_c_17(&(((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_1455)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1455 = (*(P1034)rt_nil_check(F->f_1455)).next;
}
F->result_ = (((P1019)rt_nil_check(F->s_1456))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_240(P1032 t_239) {
  struct f_declare_ctype_240fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_239 = t_239;
F->u_1457 = NULL;
F->u_1457 = g_all_types_1071;
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_239)).kind) == (((rt_int)8LL))) && ((*(P1032)rt_nil_check(F->t_239)).target == NULL))) {
f_finish_ptr_475(F->t_239);
if (((*(P1032)rt_nil_check(F->t_239)).cname != NULL)) {
goto ret_;
}
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_239)).kind) != (((rt_int)8LL)))) {
while ((F->u_1457 != NULL)) {
if (((rt_r_ichk((*(P1032)rt_nil_check(F->u_1457)).kind) == rt_r_ichk((*(P1032)rt_nil_check(F->t_239)).kind)) && f_same_221(F->u_1457, F->t_239))) {
(*(P1032)rt_nil_check(F->t_239)).cname = (*(P1032)rt_nil_check(F->u_1457)).cname;
goto ret_;
}
F->u_1457 = (*(P1032)rt_nil_check(F->u_1457)).next;
}
}
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_239)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->t_239)).tparams == NULL))) {
(*(P1032)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_234((*(P1032)rt_nil_check(F->t_239)).under); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_239)).kind) == (((rt_int)6LL)))) {
(*(P1032)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_239)).kind) == (((rt_int)15LL)))) {
(*(P1032)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_239)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_239)).kind) == (((rt_int)17LL))))) {
(*(P1032)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P1032)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P1032)rt_nil_check(F->t_239)).next = g_all_types_1071;
g_all_types_1071 = F->t_239;
if ((((rt_r_ichk((*(P1032)rt_nil_check(F->t_239)).kind) == (((rt_int)8LL))) && ((*(P1032)rt_nil_check(F->t_239)).decl != NULL)) && ((*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->t_239)).decl)).b != NULL))) {
F->p_1458 = NULL;
F->p_1458 = (*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->t_239)).decl)).b;
F->fs_1459 = NULL;
F->fs_1459 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1460 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1458 != NULL)) {
F->pc_1461 = NULL;
F->fs_1459 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->fs_1459))->all), rt_str(" ", 1)), f_ctype_234(f_resolve_subtype_268((*(P1026)rt_nil_check(F->p_1458)).a, &F->pc_1461))), rt_str(" p_", 3)), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1458)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1458 = (*(P1026)rt_nil_check(F->p_1458)).next;
}
f_put_27(g_out_types_1073, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1460), rt_str(" *", 2)), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_1074, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1460), rt_str(" {", 2)), (((P1019)rt_nil_check(F->fs_1459))->all)), rt_str(" ", 1)), f_ctype_234((*(P1032)rt_nil_check(F->t_239)).target)), rt_str(" all; };", 8)); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_239)).kind) == (((rt_int)8LL)))) {
F->target_1462 = NULL;
F->target_1462 = (*(P1032)rt_nil_check(F->t_239)).target;
if (((rt_r_ichk((*(P1032)rt_nil_check(F->target_1462)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->target_1462)).kind) == (((rt_int)17LL))))) {
if (((*(P1032)rt_nil_check(F->target_1462)).cname == NULL)) {
(*(P1032)rt_nil_check(F->target_1462)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P1032)rt_nil_check(F->target_1462)).next = g_all_types_1071;
g_all_types_1071 = F->target_1462;
f_put_27(g_out_types_1073, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->target_1462)).cname))->all)), rt_str(" ", 1)), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->target_1462)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P1032)rt_nil_check(F->target_1462)).forward = 1;
}
f_put_27(g_out_types_1073, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->target_1462)).cname))->all)), rt_str(" *", 2)), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_1073, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_234(F->target_1462)), rt_str(" *", 2)), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_239)).kind) == (((rt_int)6LL)))) {
f_put_27(g_out_types_1073, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_1073, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_239)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_234((*(P1032)rt_nil_check(F->t_239)).elem)), rt_str(" *p;", 4)), f_more_dims_246(F->t_239)), rt_str(" };", 3)); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_239)).kind) == (((rt_int)15LL)))) {
F->p_1463 = NULL;
F->p_1463 = (*(P1032)rt_nil_check(F->t_239)).tparams;
F->fs_1464 = NULL;
F->fs_1464 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1463 != NULL)) {
F->fs_1464 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->fs_1464))->all), f_ctype_234(f_tparam_type_352(F->t_239, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1463)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1463)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1463 = (*(P1026)rt_nil_check(F->p_1463)).next;
}
f_put_27(g_out_types_1073, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_1073, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_239)).cname))->all)), rt_str(" {", 2)), (((P1019)rt_nil_check(F->fs_1464))->all)), f_ctype_234((*(P1032)rt_nil_check(F->t_239)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_1073, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P1032)rt_nil_check(F->t_239)).defined = 1;
f_put_27(g_out_types_1073, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), f_struct_body_236(F->t_239)), rt_str(";", 1)); b_; }));
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

static rstr f_more_dims_246(P1032 t_245) {
  struct f_more_dims_246fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_245 = t_245;
F->r_1465 = NULL;
F->r_1465 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1467 = ((rt_int)3LL), hi1468 = rt_r_ichk((*(P1032)rt_nil_check(F->t_245)).ndim);
for (rt_int it1469 = lo1467; it1469 <= hi1468; it1469++) {
F->k_1466 = it1469;
F->r_1465 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_1465))->all), rt_str(" rt_int ", 8)), f_dim_lo_242(F->k_1466)), rt_str(", ", 2)), f_dim_hi_244(F->k_1466)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P1019)rt_nil_check(F->r_1465))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_249(P1032 t_247, rstr *base_248) {
  struct f_acnt_249fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_247 = t_247;
F->base_248 = base_248;
F->r_1470 = NULL;
F->r_1470 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_248)), rt_str(")", 1)); b_; }));
{ rt_int lo1472 = ((rt_int)3LL), hi1473 = rt_r_ichk((*(P1032)rt_nil_check(F->t_247)).ndim);
for (rt_int it1474 = lo1472; it1474 <= hi1473; it1474++) {
F->k_1471 = it1474;
F->r_1470 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_1470))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_248)), rt_str(".", 1)), f_dim_lo_242(F->k_1471)), rt_str(", ", 2)), (*F->base_248)), rt_str(".", 1)), f_dim_hi_244(F->k_1471)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1019)rt_nil_check(F->r_1470))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1019 f_cons_lo_252(P1028 c_250, rt_int k_251) {
  struct f_cons_lo_252fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_250 = c_250;
F->k_251 = k_251;
F->l_1475 = NULL;
if ((F->k_251 == ((rt_int)1LL))) {
F->result_ = (*(P1028)rt_nil_check(F->c_250)).lo;
goto ret_;
} else if ((F->k_251 == ((rt_int)2LL))) {
F->result_ = (*(P1028)rt_nil_check(F->c_250)).lo2;
goto ret_;
}
F->l_1475 = (*(P1028)rt_nil_check(F->c_250)).bnds;
{ rt_int lo1477 = ((rt_int)1LL), hi1478 = rt_sub(rt_add(F->k_251, F->k_251), ((rt_int)6LL));
for (rt_int it1479 = lo1477; it1479 <= hi1478; it1479++) {
F->i_1476 = it1479;
if ((F->l_1475 != NULL)) {
F->l_1475 = (*(P1030)rt_nil_check(F->l_1475)).next;
}
}
}
if ((F->l_1475 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1030)rt_nil_check(F->l_1475)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1019 f_cons_hi_255(P1028 c_253, rt_int k_254) {
  struct f_cons_hi_255fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_253 = c_253;
F->k_254 = k_254;
F->l_1480 = NULL;
if ((F->k_254 == ((rt_int)1LL))) {
F->result_ = (*(P1028)rt_nil_check(F->c_253)).hi;
goto ret_;
} else if ((F->k_254 == ((rt_int)2LL))) {
F->result_ = (*(P1028)rt_nil_check(F->c_253)).hi2;
goto ret_;
}
F->l_1480 = (*(P1028)rt_nil_check(F->c_253)).bnds;
{ rt_int lo1482 = ((rt_int)1LL), hi1483 = rt_sub(rt_add(F->k_254, F->k_254), ((rt_int)5LL));
for (rt_int it1484 = lo1482; it1484 <= hi1483; it1484++) {
F->i_1481 = it1484;
if ((F->l_1480 != NULL)) {
F->l_1480 = (*(P1030)rt_nil_check(F->l_1480)).next;
}
}
}
if ((F->l_1480 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1030)rt_nil_check(F->l_1480)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1032 f_idx_type_258(P1032 t_256, rt_int k_257) {
  struct f_idx_type_258fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_256 = t_256;
F->k_257 = k_257;
F->l_1485 = NULL;
F->l_1485 = (*(P1032)rt_nil_check(F->t_256)).idxs;
{ rt_int lo1487 = ((rt_int)2LL), hi1488 = F->k_257;
for (rt_int it1489 = lo1487; it1489 <= hi1488; it1489++) {
F->i_1486 = it1489;
F->l_1485 = (*(P1047)rt_nil_check(F->l_1485)).next;
}
}
F->result_ = (*(P1047)rt_nil_check(F->l_1485)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_259(void) {
  struct f_init_ascii_259fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1490 = NULL;
F->tail_1491 = NULL;
F->start_1492 = RT_R_IUNDEF;
F->start_1492 = ((rt_int)1LL);
{ rt_int lo1494 = ((rt_int)1LL), hi1495 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1496 = lo1494; it1496 <= hi1495; it1496++) {
F->i_1493 = it1496;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1493) == 32)) {
F->lit_1497 = NULL;
F->lit_1497 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1026)rt_nil_check(F->lit_1497)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), rt_r_ichk(F->start_1492), rt_sub(F->i_1493, ((rt_int)1LL))); b_; }));
f_append_69(&F->head_1490, &F->tail_1491, F->lit_1497);
F->start_1492 = rt_add(F->i_1493, ((rt_int)1LL));
}
}
}
g_ty_ascii_1113 = f_new_typ_183((((rt_int)4LL)));
(*(P1032)rt_nil_check(g_ty_ascii_1113)).lits = F->head_1490;
(*(P1032)rt_nil_check(g_ty_ascii_1113)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1498 = NULL;
F->t2_1499 = NULL;
F->l1_1500 = NULL;
F->l1_1500 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1501 = NULL;
F->l2_1501 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1502 = NULL;
F->l3_1502 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1026)rt_nil_check(F->l1_1500)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P1026)rt_nil_check(F->l2_1501)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P1026)rt_nil_check(F->l3_1502)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_69(&F->h2_1498, &F->t2_1499, F->l1_1500);
f_append_69(&F->h2_1498, &F->t2_1499, F->l2_1501);
f_append_69(&F->h2_1498, &F->t2_1499, F->l3_1502);
g_file_mode_type_1121 = f_new_typ_183((((rt_int)4LL)));
(*(P1032)rt_nil_check(g_file_mode_type_1121)).lits = F->h2_1498;
}
g_file_state_type_1125 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OLD", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }));
g_file_disp_type_1126 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SAVE", 4); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DELETE", 6); b_; }));
g_file_access_type_1127 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEQ", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RANDOM", 6); b_; }));
g_ty_text_file_1124 = f_new_typ_183((((rt_int)10LL)));
(*(P1032)rt_nil_check(g_ty_text_file_1124)).elem = g_ty_ascii_1113;
g_ty_send_st_1122 = f_new_typ_183((((rt_int)1LL)));
(*(P1032)rt_nil_check(g_ty_send_st_1122)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEND_ST", 7); b_; }));
g_ty_receive_st_1123 = f_new_typ_183((((rt_int)1LL)));
(*(P1032)rt_nil_check(g_ty_receive_st_1123)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RECEIVE_ST", 10); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1032 f_enum2_262(rstr *a_260, rstr *b_261) {
  struct f_enum2_262fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_260 = a_260;
F->b_261 = b_261;
F->t_1503 = NULL;
F->t_1503 = f_new_typ_183((((rt_int)4LL)));
F->l1_1504 = NULL;
F->l1_1504 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1505 = NULL;
F->l2_1505 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1026)rt_nil_check(F->l1_1504)).name = f_mk_3(&(*F->a_260));
(*(P1026)rt_nil_check(F->l2_1505)).name = f_mk_3(&(*F->b_261));
(*(P1026)rt_nil_check(F->l1_1504)).next = F->l2_1505;
(*(P1032)rt_nil_check(F->t_1503)).lits = F->l1_1504;
F->result_ = F->t_1503;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_lit_index_265(P1026 lits_263, rstr *name_264) {
  struct f_lit_index_265fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_263 = lits_263;
F->name_264 = name_264;
F->i_1506 = RT_R_IUNDEF;
F->i_1506 = ((rt_int)0LL);
F->l_1507 = NULL;
F->l_1507 = F->lits_263;
while ((F->l_1507 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->l_1507)).name))->all), (*F->name_264))) {
F->result_ = rt_r_ichk(F->i_1506);
goto ret_;
}
F->i_1506 = rt_add(rt_r_ichk(F->i_1506), ((rt_int)1LL));
F->l_1507 = (*(P1026)rt_nil_check(F->l_1507)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1032 f_resolve_subtype_268(P1026 st_266, P1028 *c_267) {
  struct f_resolve_subtype_268fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_266 = st_266;
F->c_267 = c_267;
F->c_267v = *F->c_267;
F->t_1508 = NULL;
F->ok_1509 = RT_R_EUNDEF;
F->dummy_1510 = NULL;
F->c_267v = f_new_cons_184();
{ rt_int sel1511 = rt_r_ichk((*(P1026)rt_nil_check(F->st_266)).kind);
if (0 || (sel1511 == (((rt_int)70LL)))) {
if (((*(P1026)rt_nil_check(F->st_266)).a != NULL)) {
(*(P1028)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1026)rt_nil_check(F->st_266)).a, g_ty_int_1110, &F->dummy_1510); b_; }));
(*(P1028)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1026)rt_nil_check(F->st_266)).b, g_ty_int_1110, &F->dummy_1510); b_; }));
(*(P1028)rt_nil_check(F->c_267v)).mlo = f_manifest_366((*(P1026)rt_nil_check(F->st_266)).a, &F->ok_1509);
(*(P1028)rt_nil_check(F->c_267v)).hasm = rt_r_echk(F->ok_1509);
(*(P1028)rt_nil_check(F->c_267v)).mhi = f_manifest_366((*(P1026)rt_nil_check(F->st_266)).b, &F->ok_1509);
(*(P1028)rt_nil_check(F->c_267v)).hasm = (rt_r_echk((*(P1028)rt_nil_check(F->c_267v)).hasm) && rt_r_echk(F->ok_1509));
}
F->result_ = g_ty_int_1110;
goto ret_;
} else if (0 || (sel1511 == (((rt_int)71LL)))) {
if (((*(P1026)rt_nil_check(F->st_266)).a != NULL)) {
(*(P1028)rt_nil_check(F->c_267v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1026)rt_nil_check(F->st_266)).a, g_ty_int_1110, &F->dummy_1510); b_; }));
}
if (((*(P1026)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1028)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1026)rt_nil_check(F->st_266)).b, g_ty_float_1112, &F->dummy_1510); b_; }));
(*(P1028)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1026)rt_nil_check(F->st_266)).c, g_ty_float_1112, &F->dummy_1510); b_; }));
(*(P1028)rt_nil_check(F->c_267v)).hasm = (f_float_lit_270((*(P1026)rt_nil_check(F->st_266)).b) && f_float_lit_270((*(P1026)rt_nil_check(F->st_266)).c));
}
F->result_ = g_ty_float_1112;
goto ret_;
} else if (0 || (sel1511 == (((rt_int)72LL)))) {
F->t_1508 = f_new_typ_183((((rt_int)4LL)));
(*(P1032)rt_nil_check(F->t_1508)).lits = (*(P1026)rt_nil_check(F->st_266)).a;
if (((*(P1026)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1028)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1026)rt_nil_check(F->st_266)).b, F->t_1508, &F->dummy_1510); b_; }));
(*(P1028)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1026)rt_nil_check(F->st_266)).c, F->t_1508, &F->dummy_1510); b_; }));
if (((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->st_266)).b)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->st_266)).c)).kind) == (((rt_int)4LL))))) {
(*(P1028)rt_nil_check(F->c_267v)).mlo = f_lit_index_265((*(P1032)rt_nil_check(F->t_1508)).lits, &(((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->st_266)).b)).name))->all));
(*(P1028)rt_nil_check(F->c_267v)).mhi = f_lit_index_265((*(P1032)rt_nil_check(F->t_1508)).lits, &(((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->st_266)).c)).name))->all));
(*(P1028)rt_nil_check(F->c_267v)).hasm = 1;
}
}
F->result_ = F->t_1508;
goto ret_;
} else if (0 || (sel1511 == (((rt_int)73LL)))) {
F->t_1508 = f_resolve_subtype_268((*(P1026)rt_nil_check(F->st_266)).a, &F->c_267v);
if (((*(P1032)rt_nil_check(f_base_of_223(F->t_1508))).kind != (((rt_int)4LL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component type of a string is an enumeration type", 53); b_; }));
}
if ((f_same_221(F->t_1508, g_ty_ascii_1113) && ((F->c_267v == NULL) || ((*(P1028)rt_nil_check(F->c_267v)).lo == NULL)))) {
F->t_1508 = g_ty_string_1114;
} else {
F->et_1512 = NULL;
F->et_1512 = F->t_1508;
F->t_1508 = f_new_typ_183((((rt_int)5LL)));
(*(P1032)rt_nil_check(F->t_1508)).elem = F->et_1512;
(*(P1032)rt_nil_check(F->t_1508)).elemcons = F->c_267v;
}
F->c_267v = f_new_cons_184();
if (((*(P1026)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1028)rt_nil_check(F->c_267v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1026)rt_nil_check(F->st_266)).b, g_ty_int_1110, &F->dummy_1510); b_; }));
}
F->result_ = F->t_1508;
goto ret_;
} else if (0 || (sel1511 == (((rt_int)74LL)))) {
{
F->ec_1513 = NULL;
F->et_1514 = NULL;
F->et_1514 = f_resolve_subtype_268((*(P1026)rt_nil_check(F->st_266)).b, &F->ec_1513);
F->ix_1515 = NULL;
F->ix_1515 = (*(P1026)rt_nil_check(F->st_266)).a;
F->k_1516 = RT_R_IUNDEF;
F->k_1516 = ((rt_int)0LL);
F->tail_1517 = NULL;
F->btail_1518 = NULL;
F->t_1508 = f_new_typ_183((((rt_int)6LL)));
(*(P1032)rt_nil_check(F->t_1508)).elem = F->et_1514;
(*(P1032)rt_nil_check(F->t_1508)).elemcons = F->ec_1513;
(*(P1032)rt_nil_check(F->t_1508)).elemst = (*(P1026)rt_nil_check(F->st_266)).b;
(*(P1028)rt_nil_check(F->c_267v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P1028)rt_nil_check(F->c_267v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1515 != NULL)) {
F->ic_1519 = NULL;
F->it_1520 = NULL;
F->it_1520 = f_resolve_subtype_268(F->ix_1515, &F->ic_1519);
F->lo_1521 = NULL;
F->hi_1522 = NULL;
F->tl_1523 = NULL;
if ((((*(P1032)rt_nil_check(f_base_of_223(F->it_1520))).kind != (((rt_int)1LL))) && ((*(P1032)rt_nil_check(f_base_of_223(F->it_1520))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1519 = f_base_cons_226(F->it_1520, F->ic_1519);
F->k_1516 = rt_add(rt_r_ichk(F->k_1516), ((rt_int)1LL));
{ R1048 *cell1524 = rt_alloc(sizeof(R1048));
(*cell1524).t = NULL;
(*cell1524).next = NULL;
F->tl_1523 = cell1524;
}
(*(P1047)rt_nil_check(F->tl_1523)).t = F->it_1520;
if ((F->tail_1517 == NULL)) {
(*(P1032)rt_nil_check(F->t_1508)).idxs = F->tl_1523;
} else {
(*(P1047)rt_nil_check(F->tail_1517)).next = F->tl_1523;
}
F->tail_1517 = F->tl_1523;
if (((F->ic_1519 != NULL) && ((*(P1028)rt_nil_check(F->ic_1519)).lo != NULL))) {
F->lo_1521 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_193(F->ic_1519); b_; }));
F->hi_1522 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_195(F->ic_1519); b_; }));
} else if (((*(P1032)rt_nil_check(f_base_of_223(F->it_1520))).kind == (((rt_int)4LL)))) {
F->lo_1521 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1522 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_71((*(P1032)rt_nil_check(f_base_of_223(F->it_1520))).lits), ((rt_int)1LL))); b_; }));
}
if ((rt_r_ichk(F->k_1516) == ((rt_int)1LL))) {
(*(P1032)rt_nil_check(F->t_1508)).idx = F->it_1520;
(*(P1028)rt_nil_check(F->c_267v)).lo = F->lo_1521;
(*(P1028)rt_nil_check(F->c_267v)).hi = F->hi_1522;
} else if ((rt_r_ichk(F->k_1516) == ((rt_int)2LL))) {
(*(P1032)rt_nil_check(F->t_1508)).idx2 = F->it_1520;
(*(P1028)rt_nil_check(F->c_267v)).lo2 = F->lo_1521;
(*(P1028)rt_nil_check(F->c_267v)).hi2 = F->hi_1522;
} else if ((F->lo_1521 != NULL)) {
F->l1_1525 = NULL;
F->l2_1526 = NULL;
{ R1031 *cell1527 = rt_alloc(sizeof(R1031));
(*cell1527).s = NULL;
(*cell1527).next = NULL;
F->l1_1525 = cell1527;
}
{ R1031 *cell1528 = rt_alloc(sizeof(R1031));
(*cell1528).s = NULL;
(*cell1528).next = NULL;
F->l2_1526 = cell1528;
}
(*(P1030)rt_nil_check(F->l1_1525)).s = F->lo_1521;
(*(P1030)rt_nil_check(F->l2_1526)).s = F->hi_1522;
(*(P1030)rt_nil_check(F->l1_1525)).next = F->l2_1526;
if ((F->btail_1518 == NULL)) {
(*(P1028)rt_nil_check(F->c_267v)).bnds = F->l1_1525;
} else {
(*(P1030)rt_nil_check(F->btail_1518)).next = F->l1_1525;
}
F->btail_1518 = F->l2_1526;
}
F->ix_1515 = (*(P1026)rt_nil_check(F->ix_1515)).next;
}
(*(P1032)rt_nil_check(F->t_1508)).ndim = rt_r_ichk(F->k_1516);
}
F->result_ = F->t_1508;
goto ret_;
} else if (0 || (sel1511 == (((rt_int)77LL)))) {
F->t_1508 = f_new_typ_183((((rt_int)16LL)));
{
F->ec_1529 = NULL;
(*(P1032)rt_nil_check(F->t_1508)).elem = f_resolve_subtype_268((*(P1026)rt_nil_check(F->st_266)).a, &F->ec_1529);
(*(P1032)rt_nil_check(F->t_1508)).elemcons = F->ec_1529;
if ((((*(P1032)rt_nil_check(f_base_of_223((*(P1032)rt_nil_check(F->t_1508)).elem))).kind != (((rt_int)1LL))) && ((*(P1032)rt_nil_check(f_base_of_223((*(P1032)rt_nil_check(F->t_1508)).elem))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component subtype of a set is an INT or ENUM subtype", 56); b_; }));
}
if ((((*(P1032)rt_nil_check(f_base_of_223((*(P1032)rt_nil_check(F->t_1508)).elem))).kind == (((rt_int)1LL))) && ((F->ec_1529 == NULL) || ((*(P1028)rt_nil_check(F->ec_1529)).lo == NULL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SET[INT] needs a range here: a set of every INT cannot be represented", 69); b_; }));
}
}
F->result_ = F->t_1508;
goto ret_;
} else if (0 || (sel1511 == (((rt_int)75LL))) || (sel1511 == (((rt_int)76LL)))) {
if ((rt_r_ichk((*(P1026)rt_nil_check(F->st_266)).kind) == (((rt_int)76LL)))) {
F->t_1508 = f_new_typ_183((((rt_int)17LL)));
} else {
F->t_1508 = f_new_typ_183((((rt_int)7LL)));
}
{
F->comp_1530 = NULL;
F->comp_1530 = (*(P1026)rt_nil_check(F->st_266)).a;
F->tail_1531 = NULL;
while ((F->comp_1530 != NULL)) {
F->cc_1532 = NULL;
F->f_1533 = NULL;
{ R1035 *cell1534 = rt_alloc(sizeof(R1035));
(*cell1534).name = NULL;
(*cell1534).t = NULL;
(*cell1534).c = NULL;
(*cell1534).st = NULL;
(*cell1534).next = NULL;
F->f_1533 = cell1534;
}
(*(P1034)rt_nil_check(F->f_1533)).name = (*(P1026)rt_nil_check(F->comp_1530)).name;
(*(P1034)rt_nil_check(F->f_1533)).t = f_resolve_subtype_268((*(P1026)rt_nil_check(F->comp_1530)).a, &F->cc_1532);
(*(P1034)rt_nil_check(F->f_1533)).c = F->cc_1532;
(*(P1034)rt_nil_check(F->f_1533)).st = (*(P1026)rt_nil_check(F->comp_1530)).a;
if ((F->tail_1531 == NULL)) {
(*(P1032)rt_nil_check(F->t_1508)).fields = F->f_1533;
} else {
(*(P1034)rt_nil_check(F->tail_1531)).next = F->f_1533;
}
F->tail_1531 = F->f_1533;
F->comp_1530 = (*(P1026)rt_nil_check(F->comp_1530)).next;
}
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_1508)).kind) == (((rt_int)17LL)))) {
F->lits_1535 = NULL;
F->ltail_1536 = NULL;
F->f_1537 = NULL;
F->f_1537 = (*(P1032)rt_nil_check(F->t_1508)).fields;
while ((F->f_1537 != NULL)) {
F->l_1538 = NULL;
F->l_1538 = f_nn_65((((rt_int)4LL)), rt_r_ichk((*(P1026)rt_nil_check(F->st_266)).line));
if (rt_str_eq((((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_1537)).name))->all), rt_str("TAG", 3))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P1026)rt_nil_check(F->l_1538)).name = (*(P1034)rt_nil_check(F->f_1537)).name;
f_append_69(&F->lits_1535, &F->ltail_1536, F->l_1538);
F->f_1537 = (*(P1034)rt_nil_check(F->f_1537)).next;
}
(*(P1032)rt_nil_check(F->t_1508)).elem = f_new_typ_183((((rt_int)4LL)));
(*(P1032)rt_nil_check((*(P1032)rt_nil_check(F->t_1508)).elem)).lits = F->lits_1535;
if (((*(P1026)rt_nil_check(F->st_266)).b != NULL)) {
f_tag_constraint_274(F->t_1508, (*(P1026)rt_nil_check(F->st_266)).b, F->c_267v);
}
}
F->result_ = F->t_1508;
goto ret_;
} else if (0 || (sel1511 == (((rt_int)79LL)))) {
F->t_1508 = f_new_typ_183((((rt_int)10LL)));
{
F->ec_1539 = NULL;
(*(P1032)rt_nil_check(F->t_1508)).elem = f_resolve_subtype_268((*(P1026)rt_nil_check(F->st_266)).a, &F->ec_1539);
(*(P1032)rt_nil_check(F->t_1508)).elemcons = F->ec_1539;
}
(*(P1028)rt_nil_check(F->c_267v)).args = (*(P1026)rt_nil_check(F->st_266)).b;
F->result_ = F->t_1508;
goto ret_;
} else if (0 || (sel1511 == (((rt_int)78LL)))) {
if (((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P1036)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1540 = NULL;
F->gt_1540 = f_copy_node_839((*(P1026)rt_nil_check(F->st_266)).a);
(*(P1026)rt_nil_check(F->gt_1540)).next = NULL;
F->result_ = f_instantiate_type_740(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1540, (*(P1026)rt_nil_check(F->st_266)).b, &F->c_267v, rt_r_ichk((*(P1026)rt_nil_check(F->st_266)).line));
goto ret_;
}
{
F->ec_1541 = NULL;
F->t_1508 = f_new_typ_183((((rt_int)12LL)));
(*(P1032)rt_nil_check(F->t_1508)).elem = f_resolve_subtype_268((*(P1026)rt_nil_check(F->st_266)).a, &F->ec_1541);
(*(P1032)rt_nil_check(F->t_1508)).elemcons = F->ec_1541;
if (((*(P1026)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1028)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1026)rt_nil_check(F->st_266)).b, g_ty_int_1110, &F->dummy_1510); b_; }));
}
}
F->result_ = F->t_1508;
goto ret_;
} else if (0 || (sel1511 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_277(F->st_266, &F->c_267v);
goto ret_;
} else if (0 || (sel1511 == (((rt_int)81LL)))) {
{
F->base_1542 = NULL;
F->result_ = f_value_subtype_290((*(P1026)rt_nil_check(F->st_266)).a, &F->c_267v, &F->base_1542);
goto ret_;
}
} else {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
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

static int f_float_lit_270(P1026 e_269) {
  struct f_float_lit_270fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_269 = e_269;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->e_269)).kind) == (((rt_int)8LL))) && (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_269)).name))->all), rt_str("-", 1)) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_269)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_270((*(P1026)rt_nil_check(F->e_269)).a);
goto ret_;
}
F->result_ = ((rt_r_ichk((*(P1026)rt_nil_check(F->e_269)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->e_269)).kind) == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_274(P1032 t_271, P1026 e_272, P1028 c_273) {
  struct f_tag_constraint_274fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_271 = t_271;
F->e_272 = e_272;
F->c_273 = c_273;
F->dummy_1543 = NULL;
(*(P1028)rt_nil_check(F->c_273)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800(F->e_272, (*(P1032)rt_nil_check(F->t_271)).elem, &F->dummy_1543); b_; }));
f_check_type_232(F->dummy_1543, (*(P1032)rt_nil_check(F->t_271)).elem, rt_r_ichk((*(P1026)rt_nil_check(F->e_272)).line));
(*(P1028)rt_nil_check(F->c_273)).hi = (*(P1028)rt_nil_check(F->c_273)).lo;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_272)).kind) == (((rt_int)4LL)))) {
(*(P1028)rt_nil_check(F->c_273)).mlo = f_lit_index_265((*(P1032)rt_nil_check((*(P1032)rt_nil_check(F->t_271)).elem)).lits, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_272)).name))->all));
(*(P1028)rt_nil_check(F->c_273)).mhi = rt_r_ichk((*(P1028)rt_nil_check(F->c_273)).mlo);
(*(P1028)rt_nil_check(F->c_273)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P1032 f_named_subtype_277(P1026 st_275, P1028 *c_276) {
  struct f_named_subtype_277fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_275 = st_275;
F->c_276 = c_276;
F->c_276v = *F->c_276;
F->t_1544 = NULL;
F->y_1545 = NULL;
F->y_1545 = f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->st_275)).name))->all));
F->name_1546 = rt_str_copy((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->st_275)).name))->all));
F->c_276v = f_new_cons_184();
if (((F->y_1545 == NULL) && ((rt_str_eq(F->name_1546, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1546, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1546, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_295(F->st_275, &F->c_276v);
goto ret_;
}
if ((F->y_1545 == NULL)) {
if (rt_str_eq(F->name_1546, rt_str("BOOL", 4))) {
F->t_1544 = g_ty_bool_1111;
} else if (rt_str_eq(F->name_1546, rt_str("ASCII", 5))) {
F->t_1544 = g_ty_ascii_1113;
} else if (rt_str_eq(F->name_1546, rt_str("DATA_LOCK", 9))) {
F->t_1544 = g_ty_lock_1118;
} else if (rt_str_eq(F->name_1546, rt_str("LATCH", 5))) {
F->t_1544 = g_ty_latch_1119;
} else if (rt_str_eq(F->name_1546, rt_str("ACT", 3))) {
F->t_1544 = g_ty_act_1120;
} else if (rt_str_eq(F->name_1546, rt_str("INT", 3))) {
F->t_1544 = g_ty_int_1110;
} else if (rt_str_eq(F->name_1546, rt_str("SEND_ST", 7))) {
F->t_1544 = g_ty_send_st_1122;
} else if (rt_str_eq(F->name_1546, rt_str("RECEIVE_ST", 10))) {
F->t_1544 = g_ty_receive_st_1123;
} else if (rt_str_eq(F->name_1546, rt_str("FLOAT", 5))) {
F->t_1544 = g_ty_float_1112;
} else {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->st_275)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1546); b_; }));
}
if (((*(P1026)rt_nil_check(F->st_275)).b != NULL)) {
f_apply_constraint_286(F->t_1544, (*(P1026)rt_nil_check(F->st_275)).b, F->c_276v, rt_r_ichk((*(P1026)rt_nil_check(F->st_275)).line));
}
F->result_ = F->t_1544;
goto ret_;
}
if (((rt_r_ichk((*(P1036)rt_nil_check(F->y_1545)).kind) == (((rt_int)10LL))) && ((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_1545)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_1545)).decl)).b)).kind) == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_740(F->y_1545, (*(P1026)rt_nil_check(F->st_275)).a, (*(P1026)rt_nil_check(F->st_275)).b, &F->c_276v, rt_r_ichk((*(P1026)rt_nil_check(F->st_275)).line));
goto ret_;
}
if (((rt_r_ichk((*(P1036)rt_nil_check(F->y_1545)).kind) == (((rt_int)10LL))) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_1545)).decl)).b)).kind) == (((rt_int)42LL))))) {
F->binds_1547 = NULL;
F->binds_1547 = f_tt_binds_706((*(P1036)rt_nil_check(F->y_1545)).decl, (*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_1545)).decl)).b)).e, (*(P1026)rt_nil_check(F->st_275)).a, rt_r_ichk((*(P1026)rt_nil_check(F->st_275)).line));
F->saved_env_1548 = NULL;
F->saved_env_1548 = g_genv_1067;
F->saved_gdepth_1549 = RT_R_IUNDEF;
F->saved_gdepth_1549 = rt_r_ichk(g_gdepth_1099);
f_open_scope_177();
while ((F->binds_1547 != NULL)) {
F->nb_1550 = NULL;
F->nb_1550 = (*(P1036)rt_nil_check(F->binds_1547)).mnext;
f_define_168(F->binds_1547, rt_r_ichk((*(P1026)rt_nil_check(F->st_275)).line));
F->binds_1547 = F->nb_1550;
}
g_genv_1067 = (*(P1036)rt_nil_check(F->y_1545)).env;
g_gdepth_1099 = rt_r_ichk(g_depth_1069);
F->t_1544 = f_resolve_subtype_268((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_1545)).decl)).b)).a, &F->c_276v);
g_genv_1067 = F->saved_env_1548;
g_gdepth_1099 = rt_r_ichk(F->saved_gdepth_1549);
f_close_scope_178();
if (((*(P1026)rt_nil_check(F->st_275)).b != NULL)) {
F->c_276v = f_copy_cons_206(F->c_276v);
f_apply_constraint_286(F->t_1544, (*(P1026)rt_nil_check(F->st_275)).b, F->c_276v, rt_r_ichk((*(P1026)rt_nil_check(F->st_275)).line));
}
F->result_ = F->t_1544;
goto ret_;
}
if ((((rt_r_ichk((*(P1036)rt_nil_check(F->y_1545)).kind) == (((rt_int)5LL))) && ((*(P1036)rt_nil_check(F->y_1545)).t != NULL)) && (rt_r_ichk((*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_1545)).t)).kind) == (((rt_int)15LL))))) {
F->result_ = f_new_type_318(F->y_1545, F->st_275, &F->c_276v);
goto ret_;
}
if ((((rt_r_ichk((*(P1036)rt_nil_check(F->y_1545)).kind) == (((rt_int)5LL))) && ((*(P1036)rt_nil_check(F->y_1545)).t != NULL)) && (rt_r_ichk((*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_1545)).t)).kind) == (((rt_int)8LL))))) {
(*(P1028)rt_nil_check(F->c_276v)).args = (*(P1026)rt_nil_check(F->st_275)).b;
F->result_ = (*(P1036)rt_nil_check(F->y_1545)).t;
goto ret_;
}
if ((((rt_r_ichk((*(P1036)rt_nil_check(F->y_1545)).kind) == (((rt_int)6LL))) && ((*(P1036)rt_nil_check(F->y_1545)).decl != NULL)) && ((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_1545)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_281(F->y_1545, F->st_275, &F->c_276v);
goto ret_;
}
if ((((rt_r_ichk((*(P1036)rt_nil_check(F->y_1545)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_1545)).kind) == (((rt_int)5LL)))) && ((*(P1036)rt_nil_check(F->y_1545)).t != NULL))) {
if (((*(P1036)rt_nil_check(F->y_1545)).c != NULL)) {
F->c_276v = (*(P1036)rt_nil_check(F->y_1545)).c;
}
F->t_1544 = (*(P1036)rt_nil_check(F->y_1545)).t;
} else if ((((rt_r_ichk((*(P1036)rt_nil_check(F->y_1545)).kind) == (((rt_int)5LL))) && ((*(P1036)rt_nil_check(F->y_1545)).decl != NULL)) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_1545)).decl)).kind) == (((rt_int)43LL))))) {
F->result_ = f_new_type_318(F->y_1545, F->st_275, &F->c_276v);
goto ret_;
} else if (((rt_r_ichk((*(P1036)rt_nil_check(F->y_1545)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_1545)).kind) == (((rt_int)5LL))))) {
F->t_1544 = f_resolve_subtype_268((*(P1036)rt_nil_check(F->y_1545)).st, &F->c_276v);
} else {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->st_275)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1546, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P1026)rt_nil_check(F->st_275)).b != NULL)) {
F->c_276v = f_copy_cons_206(F->c_276v);
f_apply_constraint_286(F->t_1544, (*(P1026)rt_nil_check(F->st_275)).b, F->c_276v, rt_r_ichk((*(P1026)rt_nil_check(F->st_275)).line));
}
F->result_ = F->t_1544;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_276) = F->c_276v;
  RT_FPOP();
  return F->result_;
}

static P1032 f_invoke_abbrev_281(P1036 y_278, P1026 st_279, P1028 *c_280) {
  struct f_invoke_abbrev_281fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_278 = y_278;
F->st_279 = st_279;
F->c_280 = c_280;
F->c_280v = *F->c_280;
F->p_1551 = NULL;
F->p_1551 = (*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_278)).decl)).b;
F->a_1552 = NULL;
F->a_1552 = (*(P1026)rt_nil_check(F->st_279)).b;
F->t_1553 = NULL;
if ((f_list_len_71(F->p_1551) != f_list_len_71(F->a_1552))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->st_279)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_278)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1551))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_177();
while ((F->p_1551 != NULL)) {
F->z_1554 = NULL;
F->z_1554 = f_new_sym_181((((rt_int)2LL)), (*(P1026)rt_nil_check(F->p_1551)).name);
F->pc_1555 = NULL;
F->at_1556 = NULL;
F->ok_1557 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->p_1551)).ival) != (((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->st_279)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P1036)rt_nil_check(F->z_1554)).t = f_resolve_subtype_268((*(P1026)rt_nil_check(F->p_1551)).a, &F->pc_1555);
(*(P1036)rt_nil_check(F->z_1554)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_800(F->a_1552, (*(P1036)rt_nil_check(F->z_1554)).t, &F->at_1556)), rt_str(")", 1)); b_; }));
f_check_type_232(F->at_1556, (*(P1036)rt_nil_check(F->z_1554)).t, rt_r_ichk((*(P1026)rt_nil_check(F->st_279)).line));
(*(P1036)rt_nil_check(F->z_1554)).mvalue = f_manifest_366(F->a_1552, &F->ok_1557);
(*(P1036)rt_nil_check(F->z_1554)).hasmv = rt_r_echk(F->ok_1557);
(*(P1036)rt_nil_check(F->z_1554)).mv = f_meval_375(F->a_1552, &F->ok_1557);
if ((!rt_r_echk(F->ok_1557))) {
(*(P1036)rt_nil_check(F->z_1554)).mv = NULL;
}
(*(P1036)rt_nil_check(F->z_1554)).ro_flag = 1;
f_define_168(F->z_1554, rt_r_ichk((*(P1026)rt_nil_check(F->st_279)).line));
F->p_1551 = (*(P1026)rt_nil_check(F->p_1551)).next;
F->a_1552 = (*(P1026)rt_nil_check(F->a_1552)).next;
}
F->t_1553 = f_resolve_subtype_268((*(P1036)rt_nil_check(F->y_278)).st, &F->c_280v);
f_close_scope_178();
F->result_ = F->t_1553;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_280) = F->c_280v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_286(P1032 t_282, P1026 args_283, P1028 c_284, rt_int line_285) {
  struct f_apply_constraint_286fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_282 = t_282;
F->args_283 = args_283;
F->c_284 = c_284;
F->line_285 = line_285;
F->dummy_1558 = NULL;
F->ok_1559 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_282)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_282)).kind) == (((rt_int)4LL))))) {
if (((rt_r_ichk((*(P1026)rt_nil_check(F->args_283)).kind) != (((rt_int)16LL))) || ((*(P1026)rt_nil_check(F->args_283)).next != NULL))) {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P1028)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1026)rt_nil_check(F->args_283)).a, F->t_282, &F->dummy_1558); b_; }));
f_check_type_232(F->dummy_1558, F->t_282, F->line_285);
(*(P1028)rt_nil_check(F->c_284)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1026)rt_nil_check(F->args_283)).b, F->t_282, &F->dummy_1558); b_; }));
f_check_type_232(F->dummy_1558, F->t_282, F->line_285);
(*(P1028)rt_nil_check(F->c_284)).hasm = 0;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_282)).kind) == (((rt_int)1LL)))) {
(*(P1028)rt_nil_check(F->c_284)).mlo = f_manifest_366((*(P1026)rt_nil_check(F->args_283)).a, &F->ok_1559);
(*(P1028)rt_nil_check(F->c_284)).hasm = rt_r_echk(F->ok_1559);
(*(P1028)rt_nil_check(F->c_284)).mhi = f_manifest_366((*(P1026)rt_nil_check(F->args_283)).b, &F->ok_1559);
(*(P1028)rt_nil_check(F->c_284)).hasm = (rt_r_echk((*(P1028)rt_nil_check(F->c_284)).hasm) && rt_r_echk(F->ok_1559));
} else if (((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_283)).a)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_283)).b)).kind) == (((rt_int)4LL))))) {
(*(P1028)rt_nil_check(F->c_284)).mlo = f_lit_index_265((*(P1032)rt_nil_check(f_base_of_223(F->t_282))).lits, &(((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_283)).a)).name))->all));
(*(P1028)rt_nil_check(F->c_284)).mhi = f_lit_index_265((*(P1032)rt_nil_check(f_base_of_223(F->t_282))).lits, &(((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_283)).b)).name))->all));
(*(P1028)rt_nil_check(F->c_284)).hasm = 1;
}
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_282)).kind) == (((rt_int)3LL)))) {
(*(P1028)rt_nil_check(F->c_284)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800(F->args_283, g_ty_int_1110, &F->dummy_1558); b_; }));
if (((*(P1026)rt_nil_check(F->args_283)).next != NULL)) {
if ((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_283)).next)).kind) != (((rt_int)16LL)))) {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P1028)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_283)).next)).a, g_ty_float_1112, &F->dummy_1558); b_; }));
(*(P1028)rt_nil_check(F->c_284)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_283)).next)).b, g_ty_float_1112, &F->dummy_1558); b_; }));
(*(P1028)rt_nil_check(F->c_284)).hasm = (f_float_lit_270((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_283)).next)).a) && f_float_lit_270((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_283)).next)).b));
}
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_282)).kind) == (((rt_int)5LL)))) {
(*(P1028)rt_nil_check(F->c_284)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800(F->args_283, g_ty_int_1110, &F->dummy_1558); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_282)).kind) == (((rt_int)12LL)))) {
(*(P1028)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800(F->args_283, g_ty_int_1110, &F->dummy_1558); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_282)).kind) == (((rt_int)17LL)))) {
f_tag_constraint_274(F->t_282, F->args_283, F->c_284);
} else {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P1032 f_value_subtype_290(P1026 e_287, P1028 *c_288, P1019 *base_289) {
  struct f_value_subtype_290fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_287 = e_287;
F->c_288 = c_288;
F->c_288v = *F->c_288;
F->base_289 = base_289;
F->base_289v = *F->base_289;
F->t_1560 = NULL;
F->c0_1561 = NULL;
F->ro_1562 = RT_R_EUNDEF;
if (f_is_lvalue_763(F->e_287)) {
f_lvalue_769(F->e_287, &F->base_289v, &F->t_1560, &F->c0_1561, &F->ro_1562);
} else {
F->base_289v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800(F->e_287, NULL, &F->t_1560); b_; }));
}
if ((F->c0_1561 == NULL)) {
F->c_288v = f_new_cons_184();
} else {
F->c_288v = f_copy_cons_206(F->c0_1561);
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_1560)).kind) == (((rt_int)5LL)))) {
(*(P1028)rt_nil_check(F->c_288v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1019)rt_nil_check(F->base_289v))->all)), rt_str(").len", 5)); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_1560)).kind) == (((rt_int)6LL)))) {
(*(P1028)rt_nil_check(F->c_288v)).bnds = NULL;
{ rt_int lo1564 = ((rt_int)1LL), hi1565 = rt_r_ichk((*(P1032)rt_nil_check(F->t_1560)).ndim);
for (rt_int it1566 = lo1564; it1566 <= hi1565; it1566++) {
F->k_1563 = it1566;
F->lo_1567 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1019)rt_nil_check(F->base_289v))->all)), rt_str(").", 2)), f_dim_lo_242(F->k_1563)));
F->hi_1568 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1019)rt_nil_check(F->base_289v))->all)), rt_str(").", 2)), f_dim_hi_244(F->k_1563)));
if ((F->k_1563 == ((rt_int)1LL))) {
(*(P1028)rt_nil_check(F->c_288v)).lo = f_mk_3(&F->lo_1567);
(*(P1028)rt_nil_check(F->c_288v)).hi = f_mk_3(&F->hi_1568);
} else if ((F->k_1563 == ((rt_int)2LL))) {
(*(P1028)rt_nil_check(F->c_288v)).lo2 = f_mk_3(&F->lo_1567);
(*(P1028)rt_nil_check(F->c_288v)).hi2 = f_mk_3(&F->hi_1568);
} else {
F->l1_1569 = NULL;
F->l2_1570 = NULL;
{ R1031 *cell1571 = rt_alloc(sizeof(R1031));
(*cell1571).s = NULL;
(*cell1571).next = NULL;
F->l1_1569 = cell1571;
}
{ R1031 *cell1572 = rt_alloc(sizeof(R1031));
(*cell1572).s = NULL;
(*cell1572).next = NULL;
F->l2_1570 = cell1572;
}
(*(P1030)rt_nil_check(F->l1_1569)).s = f_mk_3(&F->lo_1567);
(*(P1030)rt_nil_check(F->l2_1570)).s = f_mk_3(&F->hi_1568);
(*(P1030)rt_nil_check(F->l1_1569)).next = F->l2_1570;
(*(P1030)rt_nil_check(F->l2_1570)).next = (*(P1028)rt_nil_check(F->c_288v)).bnds;
(*(P1028)rt_nil_check(F->c_288v)).bnds = F->l1_1569;
}
}
}
(*(P1028)rt_nil_check(F->c_288v)).bnds = f_reverse_pairs_292((*(P1028)rt_nil_check(F->c_288v)).bnds);
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_1560)).kind) == (((rt_int)12LL)))) {
(*(P1028)rt_nil_check(F->c_288v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1019)rt_nil_check(F->base_289v))->all)), rt_str(")->cap", 6)); b_; }));
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_1560)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->t_1560)).tparams != NULL))) {
F->p_1573 = NULL;
F->p_1573 = (*(P1032)rt_nil_check(F->t_1560)).tparams;
F->head_1574 = NULL;
F->tail_1575 = NULL;
while ((F->p_1573 != NULL)) {
F->sel_1576 = NULL;
F->sel_1576 = f_nn_65((((rt_int)11LL)), rt_r_ichk((*(P1026)rt_nil_check(F->e_287)).line));
(*(P1026)rt_nil_check(F->sel_1576)).a = F->e_287;
(*(P1026)rt_nil_check(F->sel_1576)).name = (*(P1026)rt_nil_check(F->p_1573)).name;
f_append_69(&F->head_1574, &F->tail_1575, F->sel_1576);
F->p_1573 = (*(P1026)rt_nil_check(F->p_1573)).next;
}
(*(P1028)rt_nil_check(F->c_288v)).args = F->head_1574;
}
F->result_ = F->t_1560;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_288) = F->c_288v;  (*F->base_289) = F->base_289v;
  RT_FPOP();
  return F->result_;
}

static P1030 f_reverse_pairs_292(P1030 l_291) {
  struct f_reverse_pairs_292fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_291 = l_291;
F->r_1577 = NULL;
F->p_1578 = NULL;
F->p_1578 = F->l_291;
while ((F->p_1578 != NULL)) {
F->a_1579 = NULL;
F->a_1579 = F->p_1578;
F->b_1580 = NULL;
F->b_1580 = (*(P1030)rt_nil_check(F->p_1578)).next;
F->p_1578 = (*(P1030)rt_nil_check(F->b_1580)).next;
(*(P1030)rt_nil_check(F->b_1580)).next = F->r_1577;
F->r_1577 = F->a_1579;
}
F->result_ = F->r_1577;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1032 f_inquiry_295(P1026 st_293, P1028 *c_294) {
  struct f_inquiry_295fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_293 = st_293;
F->c_294 = c_294;
F->c_294v = *F->c_294;
F->base_1581 = NULL;
F->t_1582 = NULL;
F->name_1583 = rt_str_copy((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->st_293)).name))->all));
if (((*(P1026)rt_nil_check(F->st_293)).b == NULL)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->st_293)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1583, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1583, rt_str("TYPEOF", 6))) {
F->sub_1584 = NULL;
F->sub_1584 = f_as_subtype_297((*(P1026)rt_nil_check(F->st_293)).b);
F->c2_1585 = NULL;
if ((F->sub_1584 != NULL)) {
F->t_1582 = f_resolve_subtype_268(F->sub_1584, &F->c2_1585);
} else {
F->t_1582 = f_value_subtype_290((*(P1026)rt_nil_check(F->st_293)).b, &F->c2_1585, &F->base_1581);
}
F->c_294v = f_new_cons_184();
F->result_ = F->t_1582;
goto ret_;
}
F->t_1582 = f_value_subtype_290((*(P1026)rt_nil_check(F->st_293)).b, &F->c_294v, &F->base_1581);
if (rt_str_eq(F->name_1583, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1582;
goto ret_;
}
{
F->k_1586 = RT_R_IUNDEF;
F->k_1586 = ((rt_int)1LL);
F->ok_1587 = RT_R_EUNDEF;
F->ok_1587 = 1;
F->ac_1588 = NULL;
F->ac_1588 = F->c_294v;
if (((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->st_293)).b)).next != NULL)) {
F->k_1586 = f_manifest_366((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->st_293)).b)).next, &F->ok_1587);
}
while (((rt_r_ichk((*(P1032)rt_nil_check(F->t_1582)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->t_1582)).tparams == NULL))) {
F->t_1582 = (*(P1032)rt_nil_check(F->t_1582)).under;
}
if (((((rt_r_ichk((*(P1032)rt_nil_check(F->t_1582)).kind) != (((rt_int)6LL))) || (!rt_r_echk(F->ok_1587))) || (rt_r_ichk(F->k_1586) < ((rt_int)1LL))) || (rt_r_ichk(F->k_1586) > rt_r_ichk((*(P1032)rt_nil_check(F->t_1582)).ndim)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->st_293)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_294v = f_new_cons_184();
(*(P1028)rt_nil_check(F->c_294v)).lo = f_cons_lo_252(F->ac_1588, rt_r_ichk(F->k_1586));
(*(P1028)rt_nil_check(F->c_294v)).hi = f_cons_hi_255(F->ac_1588, rt_r_ichk(F->k_1586));
F->result_ = f_idx_type_258(F->t_1582, rt_r_ichk(F->k_1586));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_294) = F->c_294v;
  RT_FPOP();
  return F->result_;
}

static P1026 f_as_subtype_297(P1026 e_296) {
  struct f_as_subtype_297fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_296 = e_296;
F->st_1589 = NULL;
if ((F->e_296 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_296)).kind) == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_297((*(P1026)rt_nil_check(F->e_296)).a);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_296)).kind) == (((rt_int)7LL)))) {
if ((!f_type_name_304(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1589 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1026)rt_nil_check(F->e_296)).line));
(*(P1026)rt_nil_check(F->st_1589)).name = (*(P1026)rt_nil_check(F->e_296)).name;
F->result_ = F->st_1589;
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->e_296)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_302((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).a)).name, (*(P1026)rt_nil_check(F->e_296)).b, NULL, rt_r_ichk((*(P1026)rt_nil_check(F->e_296)).line));
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_296)).kind) != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).a)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).a)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_302((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).a)).a)).name, (*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).a)).b, (*(P1026)rt_nil_check(F->e_296)).b, rt_r_ichk((*(P1026)rt_nil_check(F->e_296)).line));
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).a)).kind) != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1590 = rt_str_copy((((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).a)).name))->all));
F->y_1591 = NULL;
F->y_1591 = f_lookup_163(&F->name_1590);
if ((rt_str_eq(F->name_1590, rt_str("INT", 3)) && (F->y_1591 == NULL))) {
if (((((*(P1026)rt_nil_check(F->e_296)).b == NULL) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).b)).kind) != (((rt_int)16LL)))) || ((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1589 = f_nn_65((((rt_int)70LL)), rt_r_ichk((*(P1026)rt_nil_check(F->e_296)).line));
(*(P1026)rt_nil_check(F->st_1589)).a = (*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).b)).a;
(*(P1026)rt_nil_check(F->st_1589)).b = (*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).b)).b;
F->result_ = F->st_1589;
goto ret_;
} else if ((rt_str_eq(F->name_1590, rt_str("FLOAT", 5)) && (F->y_1591 == NULL))) {
F->st_1589 = f_nn_65((((rt_int)71LL)), rt_r_ichk((*(P1026)rt_nil_check(F->e_296)).line));
(*(P1026)rt_nil_check(F->st_1589)).a = (*(P1026)rt_nil_check(F->e_296)).b;
if ((((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).b)).next != NULL) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).b)).next)).kind) == (((rt_int)16LL))))) {
(*(P1026)rt_nil_check(F->st_1589)).b = (*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).b)).next)).a;
(*(P1026)rt_nil_check(F->st_1589)).c = (*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).b)).next)).b;
}
F->result_ = F->st_1589;
goto ret_;
} else if (((!f_type_name_304(&F->name_1590)) && (!((F->y_1591 == NULL) && ((rt_str_eq(F->name_1590, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1590, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1590, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1589 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1026)rt_nil_check(F->e_296)).line));
(*(P1026)rt_nil_check(F->st_1589)).name = (*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_296)).a)).name;
(*(P1026)rt_nil_check(F->st_1589)).b = (*(P1026)rt_nil_check(F->e_296)).b;
(*(P1026)rt_nil_check(F->st_1589)).flag = ((rt_int)1LL);
F->result_ = F->st_1589;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_tt_subtype_302(P1019 name_298, P1026 tt_299, P1026 args_300, rt_int line_301) {
  struct f_tt_subtype_302fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_298 = name_298;
F->tt_299 = tt_299;
F->args_300 = args_300;
F->line_301 = line_301;
F->st_1592 = NULL;
if (rt_str_eq((((P1019)rt_nil_check(F->name_298))->all), rt_str("STRING", 6))) {
F->st_1592 = f_nn_65((((rt_int)73LL)), F->line_301);
} else if (rt_str_eq((((P1019)rt_nil_check(F->name_298))->all), rt_str("SET", 3))) {
F->st_1592 = f_nn_65((((rt_int)77LL)), F->line_301);
} else if ((rt_str_eq((((P1019)rt_nil_check(F->name_298))->all), rt_str("MAILBOX", 7)) && ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P1036)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1592 = f_nn_65((((rt_int)78LL)), F->line_301);
} else if (rt_str_eq((((P1019)rt_nil_check(F->name_298))->all), rt_str("FILE", 4))) {
F->st_1592 = f_nn_65((((rt_int)79LL)), F->line_301);
} else if (f_type_name_304(&(((P1019)rt_nil_check(F->name_298))->all))) {
F->st_1592 = f_nn_65((((rt_int)80LL)), F->line_301);
(*(P1026)rt_nil_check(F->st_1592)).name = F->name_298;
(*(P1026)rt_nil_check(F->st_1592)).a = F->tt_299;
(*(P1026)rt_nil_check(F->st_1592)).b = F->args_300;
F->result_ = F->st_1592;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P1026)rt_nil_check(F->st_1592)).a = F->tt_299;
(*(P1026)rt_nil_check(F->st_1592)).b = F->args_300;
F->result_ = F->st_1592;
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
F->y_1593 = NULL;
F->y_1593 = f_lookup_163(&(*F->name_303));
if ((F->y_1593 == NULL)) {
F->result_ = ((((((((rt_str_eq((*F->name_303), rt_str("INT", 3)) || rt_str_eq((*F->name_303), rt_str("BOOL", 4))) || rt_str_eq((*F->name_303), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_303), rt_str("ASCII", 5))) || rt_str_eq((*F->name_303), rt_str("ACT", 3))) || rt_str_eq((*F->name_303), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_303), rt_str("LATCH", 5))) || rt_str_eq((*F->name_303), rt_str("SEND_ST", 7))) || rt_str_eq((*F->name_303), rt_str("RECEIVE_ST", 10)));
goto ret_;
}
F->result_ = (((rt_r_ichk((*(P1036)rt_nil_check(F->y_1593)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_1593)).kind) == (((rt_int)6LL)))) || ((rt_r_ichk((*(P1036)rt_nil_check(F->y_1593)).kind) == (((rt_int)10LL))) && (((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_1593)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_1593)).decl)).b)).kind) == (((rt_int)44LL)))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_1593)).decl)).b)).kind) == (((rt_int)42LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_empty_set_306(P1032 t_305) {
  struct f_empty_set_306fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_305 = t_305;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_new(", 10), f_sub_lo_198(f_base_of_223((*(P1032)rt_nil_check(F->t_305)).elem), f_base_cons_226((*(P1032)rt_nil_check(F->t_305)).elem, (*(P1032)rt_nil_check(F->t_305)).elemcons))), rt_str(", ", 2)), f_sub_hi_201(f_base_of_223((*(P1032)rt_nil_check(F->t_305)).elem), f_base_cons_226((*(P1032)rt_nil_check(F->t_305)).elem, (*(P1032)rt_nil_check(F->t_305)).elemcons))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_308(P1032 t_307) {
  struct f_opened_308fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_307 = t_307;
F->c_1594 = NULL;
F->c_1594 = g_caps_1085;
if ((((rt_r_ichk((*(P1032)rt_nil_check(F->t_307)).kind) != (((rt_int)15LL))) || ((*(P1032)rt_nil_check(F->t_307)).ocap == NULL)) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->t_307)).ocap)).ival) == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1594 != NULL)) {
if (((*(P1053)rt_nil_check(F->c_1594)).d == (*(P1032)rt_nil_check(F->t_307)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1594 = (*(P1053)rt_nil_check(F->c_1594)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_replace_all_312(rstr *s_309, rstr *pat_310, rstr *r_311) {
  struct f_replace_all_312fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_309 = s_309;
F->pat_310 = pat_310;
F->r_311 = r_311;
F->i_1595 = RT_R_IUNDEF;
F->i_1595 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_310)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_309)).len)) < ((rt_int)(((*F->pat_310)).len))))) {
F->result_ = (*F->s_309);
goto ret_;
}
while ((rt_sub(rt_add(rt_r_ichk(F->i_1595), ((rt_int)(((*F->pat_310)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_309)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_309), rt_r_ichk(F->i_1595), rt_sub(rt_add(rt_r_ichk(F->i_1595), ((rt_int)(((*F->pat_310)).len))), ((rt_int)1LL))), (*F->pat_310))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_309), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1595), ((rt_int)1LL))), (*F->r_311)), f_replace_all_312(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_309), rt_add(rt_r_ichk(F->i_1595), ((rt_int)(((*F->pat_310)).len))), ((rt_int)(((*F->s_309)).len))); b_; }), &(*F->pat_310), &(*F->r_311)));
goto ret_;
}
F->i_1595 = rt_add(rt_r_ichk(F->i_1595), ((rt_int)1LL));
}
F->result_ = (*F->s_309);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_subst_314(rstr *s_313) {
  struct f_subst_314fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_313 = s_313;
F->l_1596 = NULL;
F->l_1596 = g_psub_1087;
F->r_1597 = NULL;
F->r_1597 = f_mk_3(&(*F->s_313));
while ((F->l_1596 != NULL)) {
F->r_1597 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_312(&(((P1019)rt_nil_check(F->r_1597))->all), &(((P1019)rt_nil_check((*(P1030)rt_nil_check(F->l_1596)).s))->all), &(((P1019)rt_nil_check((*(P1030)rt_nil_check((*(P1030)rt_nil_check(F->l_1596)).next)).s))->all)); b_; }));
F->l_1596 = (*(P1030)rt_nil_check((*(P1030)rt_nil_check(F->l_1596)).next)).next;
}
F->result_ = (((P1019)rt_nil_check(F->r_1597))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1032 f_new_type_318(P1036 y_315, P1026 st_316, P1028 *c_317) {
  struct f_new_type_318fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_315 = y_315;
F->st_316 = st_316;
F->c_317 = c_317;
F->c_317v = *F->c_317;
F->d_1598 = NULL;
F->d_1598 = (*(P1036)rt_nil_check(F->y_315)).decl;
F->p_1599 = NULL;
F->uc_1600 = NULL;
F->c_317v = f_new_cons_184();
if (((*(P1036)rt_nil_check(F->y_315)).t == NULL)) {
(*(P1036)rt_nil_check(F->y_315)).t = f_new_typ_183((((rt_int)15LL)));
(*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_315)).t)).name = (*(P1036)rt_nil_check(F->y_315)).name;
(*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_315)).t)).decl = F->d_1598;
(*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_315)).t)).tparams = (*(P1026)rt_nil_check(F->d_1598)).b;
if ((g_caps_1085 != NULL)) {
(*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_315)).t)).ocap = (*(P1053)rt_nil_check(g_caps_1085)).d;
}
f_open_scope_177();
F->p_1599 = (*(P1026)rt_nil_check(F->d_1598)).b;
while ((F->p_1599 != NULL)) {
F->z_1601 = NULL;
F->z_1601 = f_new_sym_181((((rt_int)2LL)), (*(P1026)rt_nil_check(F->p_1599)).name);
F->zc_1602 = NULL;
(*(P1036)rt_nil_check(F->z_1601)).t = f_resolve_subtype_268((*(P1026)rt_nil_check(F->p_1599)).a, &F->zc_1602);
(*(P1036)rt_nil_check(F->z_1601)).mnext = (*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_315)).t)).tpsyms;
(*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_315)).t)).tpsyms = F->z_1601;
(*(P1036)rt_nil_check(F->z_1601)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1599)).name))->all))), rt_str("@", 1)); b_; }));
f_define_168(F->z_1601, rt_r_ichk((*(P1026)rt_nil_check(F->d_1598)).line));
F->p_1599 = (*(P1026)rt_nil_check(F->p_1599)).next;
}
(*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_315)).t)).under = f_resolve_subtype_268((*(P1026)rt_nil_check(F->d_1598)).a, &F->uc_1600);
(*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_315)).t)).elemcons = F->uc_1600;
if (((*(P1026)rt_nil_check(F->d_1598)).c != NULL)) {
f_check_rep_332((*(P1026)rt_nil_check(F->d_1598)).c, (*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_315)).t)).under, F->uc_1600, 1, 0, F->d_1598);
(*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_315)).t)).repn = (*(P1026)rt_nil_check(F->d_1598)).c;
}
f_close_scope_178();
}
(*(P1028)rt_nil_check(F->c_317v)).args = (*(P1026)rt_nil_check(F->st_316)).b;
F->result_ = (*(P1036)rt_nil_check(F->y_315)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_317) = F->c_317v;
  RT_FPOP();
  return F->result_;
}

static rt_int f_needed_bits_321(P1032 t_319, P1028 c_320) {
  struct f_needed_bits_321fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_319 = t_319;
F->c_320 = c_320;
F->n_1603 = RT_R_IUNDEF;
F->n_1603 = ((rt_int)0LL);
F->v_1604 = RT_R_IUNDEF;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_319)).kind) == (((rt_int)2LL)))) {
F->result_ = ((rt_int)1LL);
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_319)).kind) == (((rt_int)4LL)))) {
F->v_1604 = rt_sub(f_list_len_71((*(P1032)rt_nil_check(F->t_319)).lits), ((rt_int)1LL));
if (((F->c_320 != NULL) && rt_r_echk((*(P1028)rt_nil_check(F->c_320)).hasm))) {
F->v_1604 = rt_r_ichk((*(P1028)rt_nil_check(F->c_320)).mhi);
}
} else if ((((rt_r_ichk((*(P1032)rt_nil_check(F->t_319)).kind) == (((rt_int)1LL))) && (F->c_320 != NULL)) && rt_r_echk((*(P1028)rt_nil_check(F->c_320)).hasm))) {
if ((rt_r_ichk((*(P1028)rt_nil_check(F->c_320)).mlo) < ((rt_int)0LL))) {
F->v_1604 = rt_r_ichk((*(P1028)rt_nil_check(F->c_320)).mhi);
if ((rt_sub(rt_neg(rt_r_ichk((*(P1028)rt_nil_check(F->c_320)).mlo)), ((rt_int)1LL)) > rt_r_ichk(F->v_1604))) {
F->v_1604 = rt_sub(rt_neg(rt_r_ichk((*(P1028)rt_nil_check(F->c_320)).mlo)), ((rt_int)1LL));
}
F->n_1603 = ((rt_int)1LL);
} else {
F->v_1604 = rt_r_ichk((*(P1028)rt_nil_check(F->c_320)).mhi);
}
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_319)).kind) == (((rt_int)1LL)))) {
F->result_ = ((rt_int)64LL);
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_319)).kind) == (((rt_int)3LL)))) {
if (((((F->c_320 != NULL) && ((*(P1028)rt_nil_check(F->c_320)).prec != NULL)) && f_has_digits_only_323(&(((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_320)).prec))->all))) && (rt_int_of_str((((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_320)).prec))->all)) <= ((rt_int)6LL)))) {
F->result_ = ((rt_int)32LL);
goto ret_;
}
F->result_ = ((rt_int)64LL);
goto ret_;
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
while ((rt_r_ichk(F->v_1604) > ((rt_int)0LL))) {
F->n_1603 = rt_add(rt_r_ichk(F->n_1603), ((rt_int)1LL));
F->v_1604 = rt_div(rt_r_ichk(F->v_1604), ((rt_int)2LL));
}
if ((rt_r_ichk(F->n_1603) == ((rt_int)0LL))) {
F->n_1603 = ((rt_int)1LL);
}
F->result_ = rt_r_ichk(F->n_1603);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_digits_only_323(rstr *s_322) {
  struct f_has_digits_only_323fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_322 = s_322;
if ((((rt_int)(((*F->s_322)).len)) == ((rt_int)0LL))) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1606 = ((rt_int)1LL), hi1607 = ((rt_int)(((*F->s_322)).len));
for (rt_int it1608 = lo1606; it1608 <= hi1607; it1608++) {
F->i_1605 = it1608;
if ((!f_is_digit_11(rt_r_echk(rt_str_get((*F->s_322), F->i_1605))))) {
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

static int f_built_in_only_325(P1032 t_324) {
  struct f_built_in_only_325fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_324 = t_324;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_324)).kind) == (((rt_int)15LL)))) {
F->result_ = ((*(P1032)rt_nil_check(F->t_324)).repn != NULL);
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_324)).kind) == (((rt_int)8LL)))) {
F->result_ = 0;
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_324)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_324)).kind) == (((rt_int)17LL))))) {
F->f_1609 = NULL;
F->f_1609 = (*(P1032)rt_nil_check(F->t_324)).fields;
while ((F->f_1609 != NULL)) {
if ((!f_built_in_only_325((*(P1034)rt_nil_check(F->f_1609)).t))) {
F->result_ = 0;
goto ret_;
}
F->f_1609 = (*(P1034)rt_nil_check(F->f_1609)).next;
}
} else if ((((rt_r_ichk((*(P1032)rt_nil_check(F->t_324)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_324)).kind) == (((rt_int)16LL)))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_324)).kind) == (((rt_int)5LL))))) {
F->result_ = (((*(P1032)rt_nil_check(F->t_324)).elem == NULL) || f_built_in_only_325((*(P1032)rt_nil_check(F->t_324)).elem));
goto ret_;
}
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_rep_332(P1026 items_326, P1032 t_327, P1028 c_328, int top_329, int indirect_330, P1026 d_331) {
  struct f_check_rep_332fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_326 = items_326;
F->t_327 = t_327;
F->c_328 = c_328;
F->top_329 = top_329;
F->indirect_330 = indirect_330;
F->d_331 = d_331;
F->it_1610 = NULL;
F->it_1610 = F->items_326;
F->ok_1611 = RT_R_EUNDEF;
F->at_1612 = NULL;
if (((F->top_329 && (!F->indirect_330)) && (!f_built_in_only_325(F->t_327)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_331)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only built-in types may underlie a representation", 49); b_; }));
}
while ((F->it_1610 != NULL)) {
F->w_1613 = rt_str_copy((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->it_1610)).name))->all));
if (rt_str_eq(F->w_1613, rt_str("SIZE", 4))) {
F->v_1614 = RT_R_IUNDEF;
F->v_1614 = f_manifest_366((*(P1026)rt_nil_check(F->it_1610)).a, &F->ok_1611);
F->dummy_1615 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->it_1610)).a, g_ty_int_1110, &F->at_1612));
f_check_type_232(F->at_1612, g_ty_int_1110, rt_r_ichk((*(P1026)rt_nil_check(F->it_1610)).line));
if ((rt_r_echk(F->ok_1611) && (rt_r_ichk(F->v_1614) < ((rt_int)0LL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->it_1610)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a SIZE is not negative", 22); b_; }));
} else if (((rt_r_echk(F->ok_1611) && (f_needed_bits_321(F->t_327, F->c_328) > rt_r_ichk(F->v_1614))) && (!F->indirect_330))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->it_1610)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("SIZE(", 5), f_itos_7(rt_r_ichk(F->v_1614))), rt_str(") is too small for this subtype, which needs ", 45)), f_itos_7(f_needed_bits_321(F->t_327, F->c_328))), rt_str(" bits", 5)); b_; }));
}
} else if (rt_str_eq(F->w_1613, rt_str("ALIGN", 5))) {
F->m_1616 = RT_R_IUNDEF;
F->m_1616 = f_manifest_366((*(P1026)rt_nil_check(F->it_1610)).a, &F->ok_1611);
if ((!F->top_329)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->it_1610)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALIGN is for the whole underlying subtype only", 46); b_; }));
}
if ((rt_r_echk(F->ok_1611) && (rt_r_ichk(F->m_1616) <= ((rt_int)0LL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->it_1610)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the modulus of ALIGN is greater than zero", 41); b_; }));
}
if ((rt_r_echk(F->ok_1611) && ((*(P1026)rt_nil_check(F->it_1610)).b != NULL))) {
F->ok2_1617 = RT_R_EUNDEF;
F->r_1618 = RT_R_IUNDEF;
F->r_1618 = f_manifest_366((*(P1026)rt_nil_check(F->it_1610)).b, &F->ok2_1617);
if ((rt_r_echk(F->ok2_1617) && ((rt_r_ichk(F->r_1618) < ((rt_int)0LL)) || (rt_r_ichk(F->r_1618) >= rt_r_ichk(F->m_1616))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->it_1610)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALIGN(e1 OF e2) needs e1 in 0 .. e2 - 1", 39); b_; }));
}
}
} else if (rt_str_eq(F->w_1613, rt_str("OFFSET", 6))) {
F->o_1619 = RT_R_IUNDEF;
F->o_1619 = f_manifest_366((*(P1026)rt_nil_check(F->it_1610)).a, &F->ok_1611);
if (F->top_329) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->it_1610)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET is for components of records and unions only", 51); b_; }));
} else if ((rt_r_echk(F->ok_1611) && (rt_r_ichk(F->o_1619) < ((rt_int)0LL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->it_1610)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an OFFSET is not negative", 25); b_; }));
}
} else if ((rt_str_eq(F->w_1613, rt_str("RECORD", 6)) || rt_str_eq(F->w_1613, rt_str("UNION", 5)))) {
F->comp_1620 = NULL;
F->comp_1620 = (*(P1026)rt_nil_check(F->it_1610)).c;
if (((rt_str_eq(F->w_1613, rt_str("RECORD", 6)) && (rt_r_ichk((*(P1032)rt_nil_check(F->t_327)).kind) != (((rt_int)7LL)))) || (rt_str_eq(F->w_1613, rt_str("UNION", 5)) && (rt_r_ichk((*(P1032)rt_nil_check(F->t_327)).kind) != (((rt_int)17LL)))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->it_1610)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->w_1613, rt_str(" is a representation for ", 25)), F->w_1613), rt_str(" types only", 11)); b_; }));
}
while ((F->comp_1620 != NULL)) {
F->f_1621 = NULL;
F->f_1621 = (*(P1032)rt_nil_check(F->t_327)).fields;
while (((F->f_1621 != NULL) && (!rt_str_eq((((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_1621)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->comp_1620)).name))->all))))) {
F->f_1621 = (*(P1034)rt_nil_check(F->f_1621)).next;
}
if ((F->f_1621 != NULL)) {
f_check_rep_332((*(P1026)rt_nil_check(F->comp_1620)).a, (*(P1034)rt_nil_check(F->f_1621)).t, (*(P1034)rt_nil_check(F->f_1621)).c, 0, 0, F->d_331);
} else if (((!(rt_str_eq(F->w_1613, rt_str("UNION", 5)) && rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->comp_1620)).name))->all), rt_str("TAG", 3)))) && (!(F->top_329 && f_formal_named_335(F->d_331, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->comp_1620)).name))->all)))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->comp_1620)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->comp_1620)).name))->all), rt_str(" is not a component", 19)); b_; }));
}
F->comp_1620 = (*(P1026)rt_nil_check(F->comp_1620)).next;
}
} else if (rt_str_eq(F->w_1613, rt_str("ARRAY", 5))) {
F->k_1622 = NULL;
F->k_1622 = (*(P1026)rt_nil_check(F->it_1610)).d;
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_327)).kind) != (((rt_int)6LL))) || (f_list_len_71((*(P1026)rt_nil_check(F->it_1610)).d) != rt_r_ichk((*(P1032)rt_nil_check(F->t_327)).ndim)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->it_1610)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ARRAY names NORMAL or NOBOUNDS for each index of an array", 57); b_; }));
}
while ((F->k_1622 != NULL)) {
if (((!rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->k_1622)).name))->all), rt_str("NORMAL", 6))) && (!rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->k_1622)).name))->all), rt_str("NOBOUNDS", 8))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->k_1622)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NORMAL or NOBOUNDS expected", 27); b_; }));
}
F->k_1622 = (*(P1026)rt_nil_check(F->k_1622)).next;
}
f_check_rep_332((*(P1026)rt_nil_check(F->it_1610)).c, (*(P1032)rt_nil_check(F->t_327)).elem, (*(P1032)rt_nil_check(F->t_327)).elemcons, 0, 0, F->d_331);
} else if (rt_str_eq(F->w_1613, rt_str("ENUM", 4))) {
if ((((rt_r_ichk((*(P1032)rt_nil_check(F->t_327)).kind) != (((rt_int)4LL))) || ((*(P1026)rt_nil_check(F->it_1610)).d == NULL)) || (!rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->it_1610)).d)).name))->all), rt_str("STANDARD", 8))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->it_1610)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ENUM(STANDARD) is for enumeration subtypes", 42); b_; }));
}
} else if (rt_str_eq(F->w_1613, rt_str("PTR", 3))) {
if ((((((!F->indirect_330) || (!F->top_329)) || ((*(P1026)rt_nil_check(F->it_1610)).d == NULL)) || (!rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->it_1610)).d)).name))->all), rt_str("FREE", 4)))) || (((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->it_1610)).d)).next != NULL) && (!rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->it_1610)).d)).next)).name))->all), rt_str("UNCHECKED", 9)))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->it_1610)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR(FREE) or PTR(FREE UNCHECKED) is for indirect types", 54); b_; }));
}
} else if (rt_str_eq(F->w_1613, rt_str("ABSENT", 6))) {
F->a_1623 = NULL;
F->a_1623 = (*(P1026)rt_nil_check(F->it_1610)).d;
if ((!F->top_329)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->it_1610)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABSENT is for the whole type", 28); b_; }));
}
while ((F->a_1623 != NULL)) {
if ((!f_formal_named_335(F->d_331, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->a_1623)).name))->all)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->a_1623)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->a_1623)).name))->all), rt_str(" is not a formal parameter of the type", 38)); b_; }));
}
F->a_1623 = (*(P1026)rt_nil_check(F->a_1623)).next;
}
}
F->it_1610 = (*(P1026)rt_nil_check(F->it_1610)).next;
}
ret_:
  RT_FPOP();
  return;
}

static int f_formal_named_335(P1026 d_333, rstr *name_334) {
  struct f_formal_named_335fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_333 = d_333;
F->name_334 = name_334;
F->p_1624 = NULL;
F->p_1624 = (*(P1026)rt_nil_check(F->d_333)).b;
while ((F->p_1624 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1624)).name))->all), (*F->name_334))) {
F->result_ = 1;
goto ret_;
}
F->p_1624 = (*(P1026)rt_nil_check(F->p_1624)).next;
}
F->p_1624 = (*(P1026)rt_nil_check(F->d_333)).d;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->d_333)).kind) == (((rt_int)44LL)))) {
while ((F->p_1624 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1624)).name))->all), (*F->name_334))) {
F->result_ = 1;
goto ret_;
}
F->p_1624 = (*(P1026)rt_nil_check(F->p_1624)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_unchecked_free_337(P1032 t_336) {
  struct f_unchecked_free_337fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_336 = t_336;
F->it_1625 = NULL;
if ((((*(P1032)rt_nil_check(F->t_336)).decl == NULL) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->t_336)).decl)).kind) != (((rt_int)44LL))))) {
F->result_ = 0;
goto ret_;
}
F->it_1625 = (*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->t_336)).decl)).c;
while ((F->it_1625 != NULL)) {
if (((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->it_1625)).name))->all), rt_str("PTR", 3)) && ((*(P1026)rt_nil_check(F->it_1625)).d != NULL)) && ((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->it_1625)).d)).next != NULL))) {
F->result_ = 1;
goto ret_;
}
F->it_1625 = (*(P1026)rt_nil_check(F->it_1625)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_341(rstr *lval_338, P1032 t_339, P1028 c_340) {
  struct f_init_storage_341fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_338 = lval_338;
F->t_339 = t_339;
F->c_340 = c_340;
f_make_storage_356(&(*F->lval_338), F->t_339, F->c_340);
if (((*(P1032)rt_nil_check(F->t_339)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1032)rt_nil_check(F->t_339)).initp, &(*F->lval_338)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_344(P1036 y_342, rstr *lval_343) {
  struct f_init_call_344fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_342 = y_342;
F->lval_343 = lval_343;
F->link_1626 = NULL;
F->link_1626 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P1036)rt_nil_check(F->y_342)).level) > ((rt_int)0LL))) {
F->link_1626 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1628 = ((rt_int)1LL), hi1629 = rt_sub(rt_r_ichk(g_cur_level_1083), rt_r_ichk((*(P1036)rt_nil_check(F->y_342)).level));
for (rt_int it1630 = lo1628; it1630 <= hi1629; it1630++) {
F->i_1627 = it1630;
F->link_1626 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->link_1626))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1626 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->link_1626))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_342)).cname))->all), rt_str("(", 1)), (((P1019)rt_nil_check(F->link_1626))->all)), rt_str("&", 1)), (*F->lval_343)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_346(P1032 t_345) {
  struct f_needs_fin_346fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_345 = t_345;
if ((F->t_345 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P1032)rt_nil_check(F->t_345)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_345)).kind) == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_346((*(P1032)rt_nil_check(F->t_345)).under);
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_345)).kind) == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_346((*(P1032)rt_nil_check(F->t_345)).elem);
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_345)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_345)).kind) == (((rt_int)17LL))))) {
F->f_1631 = NULL;
F->f_1631 = (*(P1032)rt_nil_check(F->t_345)).fields;
while ((F->f_1631 != NULL)) {
if (f_needs_fin_346((*(P1034)rt_nil_check(F->f_1631)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1631 = (*(P1034)rt_nil_check(F->f_1631)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_349(rstr *lval_347, P1032 t_348) {
  struct f_fin_code_349fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_347 = lval_347;
F->t_348 = t_348;
F->r_1632 = NULL;
F->r_1632 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1032)rt_nil_check(F->t_348)).finalp != NULL)) {
F->r_1632 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_344((*(P1032)rt_nil_check(F->t_348)).finalp, &(*F->lval_347)), rt_str(" ", 1)); b_; }));
}
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_348)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->t_348)).tparams == NULL))) {
F->result_ = rt_str_cat((((P1019)rt_nil_check(F->r_1632))->all), f_fin_code_349(&(*F->lval_347), (*(P1032)rt_nil_check(F->t_348)).under));
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_348)).kind) == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P1019)rt_nil_check(F->r_1632))->all), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_347), rt_str(".all", 4)); b_; }), (*(P1032)rt_nil_check(F->t_348)).under));
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_348)).kind) == (((rt_int)6LL))) && f_needs_fin_346((*(P1032)rt_nil_check(F->t_348)).elem))) {
F->i_1633 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_1632))->all), rt_str("for (rt_int ", 12)), F->i_1633), rt_str(" = 0; ", 6)), F->i_1633), rt_str(" < ", 3)), f_acnt_249(F->t_348, &(*F->lval_347))), rt_str("; ", 2)), F->i_1633), rt_str("++) { ", 6)), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_347), rt_str(".p[", 3)), F->i_1633), rt_str("]", 1)); b_; }), (*(P1032)rt_nil_check(F->t_348)).elem)), rt_str(" }", 2));
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_348)).kind) == (((rt_int)7LL)))) {
F->f_1634 = NULL;
F->f_1634 = (*(P1032)rt_nil_check(F->t_348)).fields;
while ((F->f_1634 != NULL)) {
if (f_needs_fin_346((*(P1034)rt_nil_check(F->f_1634)).t)) {
F->r_1632 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_1632))->all), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_347), rt_str(".", 1)), f_field_c_17(&(((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_1634)).name))->all))); b_; }), (*(P1034)rt_nil_check(F->f_1634)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1634 = (*(P1034)rt_nil_check(F->f_1634)).next;
}
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_348)).kind) == (((rt_int)17LL)))) {
F->f_1635 = NULL;
F->f_1635 = (*(P1032)rt_nil_check(F->t_348)).fields;
F->i_1636 = RT_R_IUNDEF;
F->i_1636 = ((rt_int)0LL);
F->r_1632 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_1632))->all), rt_str("switch (", 8)), (*F->lval_347)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1635 != NULL)) {
if (f_needs_fin_346((*(P1034)rt_nil_check(F->f_1635)).t)) {
F->r_1632 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_1632))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1636))), rt_str(": ", 2)), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_347), rt_str(".u.", 3)), f_field_c_17(&(((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_1635)).name))->all))); b_; }), (*(P1034)rt_nil_check(F->f_1635)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1636 = rt_add(rt_r_ichk(F->i_1636), ((rt_int)1LL));
F->f_1635 = (*(P1034)rt_nil_check(F->f_1635)).next;
}
F->r_1632 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_1632))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P1019)rt_nil_check(F->r_1632))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1032 f_tparam_type_352(P1032 t_350, rstr *name_351) {
  struct f_tparam_type_352fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_350 = t_350;
F->name_351 = name_351;
F->z_1637 = NULL;
F->z_1637 = (*(P1032)rt_nil_check(F->t_350)).tpsyms;
while ((F->z_1637 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->z_1637)).name))->all), (*F->name_351))) {
F->result_ = (*(P1036)rt_nil_check(F->z_1637)).t;
goto ret_;
}
F->z_1637 = (*(P1036)rt_nil_check(F->z_1637)).mnext;
}
F->result_ = g_ty_int_1110;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_356(rstr *lval_353, P1032 t_354, P1028 c_355) {
  struct f_make_storage_356fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_353 = lval_353;
F->t_354 = t_354;
F->c_355 = c_355;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_354)).kind) == (((rt_int)15LL)))) {
F->p_1638 = NULL;
F->p_1638 = (*(P1032)rt_nil_check(F->t_354)).tparams;
F->a_1639 = NULL;
F->a_1639 = (*(P1028)rt_nil_check(F->c_355)).args;
F->uc_1640 = NULL;
F->ut_1641 = NULL;
F->at_1642 = NULL;
if ((f_list_len_71(F->a_1639) != f_list_len_71(F->p_1638))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_354)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1638))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1638 != NULL)) {
F->pt_1643 = f_tparam_type_352(F->t_354, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1638)).name))->all));
F->v_1644 = rt_str_copy(f_gexpr_800(F->a_1639, F->pt_1643, &F->at_1642));
f_check_type_232(F->at_1642, F->pt_1643, rt_r_ichk((*(P1026)rt_nil_check(F->a_1639)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".p_", 3)), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1638)).name))->all))), rt_str(" = ", 3)), F->v_1644), rt_str(";", 1)); b_; }));
F->p_1638 = (*(P1026)rt_nil_check(F->p_1638)).next;
F->a_1639 = (*(P1026)rt_nil_check(F->a_1639)).next;
}
{
F->saved_1645 = NULL;
F->saved_1645 = g_psub_1087;
F->p_1638 = (*(P1032)rt_nil_check(F->t_354)).tparams;
while ((F->p_1638 != NULL)) {
F->l1_1646 = NULL;
F->l2_1647 = NULL;
{ R1031 *cell1648 = rt_alloc(sizeof(R1031));
(*cell1648).s = NULL;
(*cell1648).next = NULL;
F->l1_1646 = cell1648;
}
{ R1031 *cell1649 = rt_alloc(sizeof(R1031));
(*cell1649).s = NULL;
(*cell1649).next = NULL;
F->l2_1647 = cell1649;
}
(*(P1030)rt_nil_check(F->l1_1646)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1638)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1030)rt_nil_check(F->l2_1647)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".p_", 3)), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1638)).name))->all))); b_; }));
(*(P1030)rt_nil_check(F->l1_1646)).next = F->l2_1647;
(*(P1030)rt_nil_check(F->l2_1647)).next = g_psub_1087;
g_psub_1087 = F->l1_1646;
F->p_1638 = (*(P1026)rt_nil_check(F->p_1638)).next;
}
if (((*(P1032)rt_nil_check(F->t_354)).tparams == NULL)) {
f_init_storage_341(&(*F->lval_353), (*(P1032)rt_nil_check(F->t_354)).under, (*(P1032)rt_nil_check(F->t_354)).elemcons);
} else {
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(".all", 4)); b_; }), (*(P1032)rt_nil_check(F->t_354)).under, (*(P1032)rt_nil_check(F->t_354)).elemcons);
}
g_psub_1087 = F->saved_1645;
}
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_354)).kind) == (((rt_int)12LL)))) {
if (((*(P1028)rt_nil_check(F->c_355)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_353)), rt_str(", ", 2)), f_subst_314(&(((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_355)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_234((*(P1032)rt_nil_check(F->t_354)).elem)), rt_str("), ", 3)), f_mcopy_392((*(P1032)rt_nil_check(F->t_354)).elem)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_354)).kind) == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_353)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_354)).kind) == (((rt_int)16LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = ", 3)), f_empty_set_306(F->t_354)), rt_str(";", 1)); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_354)).kind) == (((rt_int)10LL)))) {
F->at_1650 = NULL;
if ((((F->c_355 == NULL) || ((*(P1028)rt_nil_check(F->c_355)).args == NULL)) || ((*(P1026)rt_nil_check((*(P1028)rt_nil_check(F->c_355)).args)).next == NULL))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a file variable needs its access and use: FILE[S](access, use)", 62); b_; }));
}
if (((!f_text_file_981(F->t_354)) && (!f_flat_358((*(P1032)rt_nil_check(F->t_354)).elem)))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the components of a file on the simulated machine hold no strings, arrays, sets or pointers", 91); b_; }));
}
{
F->acc_1651 = rt_str_copy(f_gexpr_800((*(P1028)rt_nil_check(F->c_355)).args, g_file_access_type_1127, &F->at_1650));
F->use_1652 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check((*(P1028)rt_nil_check(F->c_355)).args)).next, g_file_mode_type_1121, &F->at_1650));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = rt_r_file_new(", 17)), F->acc_1651), rt_str(", ", 2)), F->use_1652), rt_str(", sizeof(", 9)), f_ctype_234((*(P1032)rt_nil_check(F->t_354)).elem)), rt_str("), ", 3)), f_bool_text_382(f_text_file_981(F->t_354))), rt_str(");", 2)); b_; }));
}
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_354)).kind) == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_354)).kind) == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(" = NULL;", 8)); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_354)).kind) == (((rt_int)5LL)))) {
if (((*(P1028)rt_nil_check(F->c_355)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = rt_str_new(", 14)), f_subst_314(&(((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_355)).slen))->all))), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_354)).kind) == (((rt_int)6LL)))) {
if (((*(P1028)rt_nil_check(F->c_355)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1654 = ((rt_int)1LL), hi1655 = rt_r_ichk((*(P1032)rt_nil_check(F->t_354)).ndim);
for (rt_int it1656 = lo1654; it1656 <= hi1655; it1656++) {
F->k_1653 = it1656;
if ((f_cons_lo_252(F->c_355, F->k_1653) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".", 1)), f_dim_lo_242(F->k_1653)), rt_str(" = ", 3)), f_subst_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1019)rt_nil_check(f_cons_lo_252(F->c_355, F->k_1653)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_353)), rt_str(".", 1)), f_dim_hi_244(F->k_1653)), rt_str(" = ", 3)), f_subst_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1019)rt_nil_check(f_cons_hi_255(F->c_355, F->k_1653)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_354)).ndim) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".lo2 = ", 7)), (*F->lval_353)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_234((*(P1032)rt_nil_check(F->t_354)).elem)), rt_str(") * (size_t)", 12)), f_acnt_249(F->t_354, &(*F->lval_353))), rt_str(" + 1);", 6)); b_; }));
if (((((((((((rt_r_ichk((*(P1032)rt_nil_check((*(P1032)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1032)rt_nil_check((*(P1032)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P1032)rt_nil_check((*(P1032)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P1032)rt_nil_check((*(P1032)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)15LL)))) || (rt_r_ichk((*(P1032)rt_nil_check((*(P1032)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P1032)rt_nil_check((*(P1032)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)12LL)))) || (rt_r_ichk((*(P1032)rt_nil_check((*(P1032)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)13LL)))) || (rt_r_ichk((*(P1032)rt_nil_check((*(P1032)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P1032)rt_nil_check((*(P1032)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)17LL)))) || (rt_r_echk(g_mark_uninit_1102) && (!rt_str_eq(f_uninit_value_360((*(P1032)rt_nil_check(F->t_354)).elem), rt_str("", 0)))))) {
F->i_1657 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1657), rt_str(" = 0; ", 6)), F->i_1657), rt_str(" < ", 3)), f_acnt_249(F->t_354, &(*F->lval_353))), rt_str("; ", 2)), F->i_1657), rt_str("++) {", 5)); b_; }));
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".p[", 3)), F->i_1657), rt_str("]", 1)); b_; }), (*(P1032)rt_nil_check(F->t_354)).elem, (*(P1032)rt_nil_check(F->t_354)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_354)).kind) == (((rt_int)7LL)))) {
F->f_1658 = NULL;
F->f_1658 = (*(P1032)rt_nil_check(F->t_354)).fields;
while ((F->f_1658 != NULL)) {
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".", 1)), f_field_c_17(&(((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_1658)).name))->all))); b_; }), (*(P1034)rt_nil_check(F->f_1658)).t, (*(P1034)rt_nil_check(F->f_1658)).c);
F->f_1658 = (*(P1034)rt_nil_check(F->f_1658)).next;
}
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_354)).kind) == (((rt_int)17LL)))) {
if (((F->c_355 != NULL) && rt_r_echk((*(P1028)rt_nil_check(F->c_355)).hasm))) {
F->f_1659 = NULL;
F->f_1659 = (*(P1032)rt_nil_check(F->t_354)).fields;
{ rt_int lo1661 = ((rt_int)1LL), hi1662 = rt_r_ichk((*(P1028)rt_nil_check(F->c_355)).mlo);
for (rt_int it1663 = lo1661; it1663 <= hi1662; it1663++) {
F->i_1660 = it1663;
F->f_1659 = (*(P1034)rt_nil_check(F->f_1659)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk((*(P1028)rt_nil_check(F->c_355)).mlo))), rt_str(";", 1)); b_; }));
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".u.", 3)), f_field_c_17(&(((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_1659)).name))->all))); b_; }), (*(P1034)rt_nil_check(F->f_1659)).t, (*(P1034)rt_nil_check(F->f_1659)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(".tag = -1;", 10)); b_; }));
}
} else if ((rt_r_echk(g_mark_uninit_1102) && (!rt_str_eq(f_uninit_value_360(F->t_354), rt_str("", 0))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = ", 3)), f_uninit_value_360(F->t_354)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_flat_358(P1032 t_357) {
  struct f_flat_358fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_357 = t_357;
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_357)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->t_357)).tparams == NULL))) {
F->result_ = f_flat_358((*(P1032)rt_nil_check(F->t_357)).under);
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_357)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_357)).kind) == (((rt_int)17LL))))) {
F->f_1664 = NULL;
F->f_1664 = (*(P1032)rt_nil_check(F->t_357)).fields;
while ((F->f_1664 != NULL)) {
if ((!f_flat_358((*(P1034)rt_nil_check(F->f_1664)).t))) {
F->result_ = 0;
goto ret_;
}
F->f_1664 = (*(P1034)rt_nil_check(F->f_1664)).next;
}
F->result_ = 1;
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P1032)rt_nil_check(F->t_357)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_357)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_357)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_357)).kind) == (((rt_int)2LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_uninit_value_360(P1032 t_359) {
  struct f_uninit_value_360fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_359 = t_359;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_359)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str("RT_R_IUNDEF", 11);
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_359)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_359)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str("RT_R_EUNDEF", 11);
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_359)).kind) == (((rt_int)3LL)))) {
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

static rstr f_init_chk_363(P1032 t_361, rstr *v_362) {
  struct f_init_chk_363fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_361 = t_361;
F->v_362 = v_362;
F->b_1665 = NULL;
F->b_1665 = f_base_of_223(F->t_361);
if (f_suppressed_512(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))) {
F->result_ = (*F->v_362);
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->b_1665)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_ichk(", 10), (*F->v_362)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->b_1665)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->b_1665)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_echk(", 10), (*F->v_362)), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->b_1665)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fchk(", 10), (*F->v_362)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_362);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_manifest_366(P1026 e_364, int *ok_365) {
  struct f_manifest_366fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_364 = e_364;
F->ok_365 = ok_365;
F->ok_365v = *F->ok_365;
F->v_1666 = NULL;
F->v_1666 = f_meval_375(F->e_364, &F->ok_365v);
if ((rt_r_echk(F->ok_365v) && (rt_r_ichk((*(P1045)rt_nil_check(F->v_1666)).kind) == (((rt_int)1LL))))) {
F->result_ = rt_r_ichk((*(P1045)rt_nil_check(F->v_1666)).i);
goto ret_;
}
F->ok_365v = 0;
F->result_ = ((rt_int)0LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_365v)) (*F->ok_365) = F->ok_365v;
  RT_FPOP();
  return F->result_;
}

static P1045 f_mk_mval_369(rt_int kind_367, rt_int i_368) {
  struct f_mk_mval_369fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_367 = kind_367;
F->i_368 = i_368;
F->v_1667 = NULL;
{ R1046 *cell1668 = rt_alloc(sizeof(R1046));
(*cell1668).s = NULL;
(*cell1668).t = NULL;
F->v_1667 = cell1668;
}
(*(P1045)rt_nil_check(F->v_1667)).kind = F->kind_367;
(*(P1045)rt_nil_check(F->v_1667)).i = F->i_368;
F->result_ = F->v_1667;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_ipow_372(rt_int a_370, rt_int b_371) {
  struct f_ipow_372fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_370 = a_370;
F->b_371 = b_371;
F->r_1669 = RT_R_IUNDEF;
F->r_1669 = ((rt_int)1LL);
{ rt_int lo1671 = ((rt_int)1LL), hi1672 = F->b_371;
for (rt_int it1673 = lo1671; it1673 <= hi1672; it1673++) {
F->i_1670 = it1673;
F->r_1669 = rt_mul(rt_r_ichk(F->r_1669), F->a_370);
}
}
F->result_ = rt_r_ichk(F->r_1669);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1045 f_meval_375(P1026 e_373, int *ok_374) {
  struct f_meval_375fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_373 = e_373;
F->ok_374 = ok_374;
F->ok_374v = *F->ok_374;
F->a_1674 = NULL;
F->b_1675 = NULL;
F->ok2_1676 = RT_R_EUNDEF;
F->op_1677 = NULL;
F->ok_374v = 0;
if ((F->e_373 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_373)).kind) == (((rt_int)1LL)))) {
F->ok_374v = 1;
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_r_ichk((*(P1026)rt_nil_check(F->e_373)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_373)).kind) == (((rt_int)5LL)))) {
F->ok_374v = 1;
F->result_ = f_mk_mval_369((((rt_int)2LL)), rt_r_ichk((*(P1026)rt_nil_check(F->e_373)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_373)).kind) == (((rt_int)2LL)))) {
F->a_1674 = f_mk_mval_369((((rt_int)3LL)), ((rt_int)0LL));
{ rt_frame xf1678;
if (RT_TRY(xf1678)) {
(*(P1045)rt_nil_check(F->a_1674)).f = rt_r_float_of_str((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_373)).name))->all));
F->ok_374v = 1;
RT_POP(xf1678);
} else {
RT_POP(xf1678);
int x1679 = rt_xcur;
{
F->ok_374v = 0;
}
}
}
F->result_ = F->a_1674;
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_373)).kind) == (((rt_int)3LL)))) {
F->ok_374v = 1;
F->a_1674 = f_mk_mval_369((((rt_int)5LL)), ((rt_int)0LL));
(*(P1045)rt_nil_check(F->a_1674)).s = (*(P1026)rt_nil_check(F->e_373)).name;
F->result_ = F->a_1674;
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_373)).kind) == (((rt_int)4LL)))) {
if ((f_lit_index_265((*(P1032)rt_nil_check(g_ty_ascii_1113)).lits, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_373)).name))->all)) >= ((rt_int)0LL))) {
F->ok_374v = 1;
F->a_1674 = f_mk_mval_369((((rt_int)4LL)), f_lit_index_265((*(P1032)rt_nil_check(g_ty_ascii_1113)).lits, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_373)).name))->all)));
(*(P1045)rt_nil_check(F->a_1674)).t = g_ty_ascii_1113;
(*(P1045)rt_nil_check(F->a_1674)).s = (*(P1026)rt_nil_check(F->e_373)).name;
F->result_ = F->a_1674;
goto ret_;
}
F->a_1674 = f_mk_mval_369((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P1045)rt_nil_check(F->a_1674)).s = (*(P1026)rt_nil_check(F->e_373)).name;
F->ok_374v = 1;
F->result_ = F->a_1674;
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_373)).kind) == (((rt_int)17LL)))) {
F->result_ = f_meval_375((*(P1026)rt_nil_check(F->e_373)).a, &F->ok_374v);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_373)).kind) == (((rt_int)7LL)))) {
F->y_1680 = NULL;
F->y_1680 = f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_373)).name))->all));
if ((((F->y_1680 != NULL) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_1680)).kind) == (((rt_int)2LL)))) && ((*(P1036)rt_nil_check(F->y_1680)).mv != NULL))) {
F->ok_374v = 1;
F->result_ = (*(P1036)rt_nil_check(F->y_1680)).mv;
goto ret_;
} else if ((((F->y_1680 != NULL) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_1680)).kind) == (((rt_int)2LL)))) && rt_r_echk((*(P1036)rt_nil_check(F->y_1680)).hasmv))) {
F->ok_374v = 1;
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_r_ichk((*(P1036)rt_nil_check(F->y_1680)).mvalue));
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_373)).kind) == (((rt_int)8LL)))) {
F->a_1674 = f_meval_375((*(P1026)rt_nil_check(F->e_373)).a, &F->ok_374v);
if ((!rt_r_echk(F->ok_374v))) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_373)).name))->all), rt_str("NOT", 3)) && (rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).kind) == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), rt_sub(((rt_int)1LL), rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i)));
goto ret_;
} else if ((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_373)).name))->all), rt_str("-", 1)) && (rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).kind) == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_neg(rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i)));
goto ret_;
} else if ((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_373)).name))->all), rt_str("-", 1)) && (rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).kind) == (((rt_int)3LL))))) {
F->b_1675 = f_mk_mval_369((((rt_int)3LL)), ((rt_int)0LL));
(*(P1045)rt_nil_check(F->b_1675)).f = (-rt_r_fchk((*(P1045)rt_nil_check(F->a_1674)).f));
F->result_ = F->b_1675;
goto ret_;
} else if (((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_373)).name))->all), rt_str("+", 1)) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_373)).name))->all), rt_str("-", 1))) && ((rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).kind) == (((rt_int)3LL)))))) {
F->result_ = F->a_1674;
goto ret_;
}
F->ok_374v = 0;
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->e_373)).kind) != (((rt_int)9LL))) || f_user_defined_390(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_373)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1677 = (*(P1026)rt_nil_check(F->e_373)).name;
F->a_1674 = f_meval_375((*(P1026)rt_nil_check(F->e_373)).a, &F->ok_374v);
F->b_1675 = f_meval_375((*(P1026)rt_nil_check(F->e_373)).b, &F->ok2_1676);
F->ok_374v = (rt_r_echk(F->ok_374v) && rt_r_echk(F->ok2_1676));
if ((!rt_r_echk(F->ok_374v))) {
F->result_ = NULL;
goto ret_;
}
F->ok_374v = 0;
if (((rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).kind) == (((rt_int)1LL))) && (rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).kind) == (((rt_int)1LL))))) {
F->ok_374v = 1;
if (rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_add(rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i), rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i)));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_sub(rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i), rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i)));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_mul(rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i), rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i)));
goto ret_;
} else if ((rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("DIV", 3)) && (rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_div(rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i), rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i)));
goto ret_;
} else if ((rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("MOD", 3)) && (rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_mod(rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i), rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i)));
goto ret_;
} else if ((rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("**", 2)) && (rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i) >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), f_ipow_372(rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i), rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i)));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i) == rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i))));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i) != rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i))));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i) < rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i))));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i) <= rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i))));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i) > rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i))));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i) >= rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i))));
goto ret_;
}
} else if (((rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).kind) == (((rt_int)3LL))) && ((rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).kind) == (((rt_int)3LL))) || ((rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).kind) == (((rt_int)1LL))) && rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("**", 2)))))) {
F->result_ = f_float_op_380(&(((P1019)rt_nil_check(F->op_1677))->all), F->a_1674, F->b_1675, &F->ok_374v);
goto ret_;
} else if (((rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).kind) == (((rt_int)2LL))) && (rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).kind) == (((rt_int)2LL))))) {
F->ok_374v = 1;
if (rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), rt_mul(rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i), rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i)));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_add(rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i), rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i)) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("XOR", 3)) || rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i) != rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i))));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).i) == rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).kind) == (((rt_int)4LL)))) && (rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("=", 1)) || rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("/=", 2))))) {
F->ok_374v = 1;
if (rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384(rt_str_eq((((P1019)rt_nil_check((*(P1045)rt_nil_check(F->a_1674)).s))->all), (((P1019)rt_nil_check((*(P1045)rt_nil_check(F->b_1675)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((!rt_str_eq((((P1019)rt_nil_check((*(P1045)rt_nil_check(F->a_1674)).s))->all), (((P1019)rt_nil_check((*(P1045)rt_nil_check(F->b_1675)).s))->all)))));
goto ret_;
} else if ((((rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).kind) == (((rt_int)5LL)))) && (rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("=", 1)) || rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("/=", 2))))) {
F->ok_374v = 1;
if (rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384(rt_str_eq((((P1019)rt_nil_check((*(P1045)rt_nil_check(F->a_1674)).s))->all), (((P1019)rt_nil_check((*(P1045)rt_nil_check(F->b_1675)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((!rt_str_eq((((P1019)rt_nil_check((*(P1045)rt_nil_check(F->a_1674)).s))->all), (((P1019)rt_nil_check((*(P1045)rt_nil_check(F->b_1675)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P1019)rt_nil_check(F->op_1677))->all), rt_str("&", 1)) && ((rt_r_ichk((*(P1045)rt_nil_check(F->a_1674)).kind) == (((rt_int)5LL))) || ((*(P1045)rt_nil_check(F->a_1674)).t == g_ty_ascii_1113))) && ((rt_r_ichk((*(P1045)rt_nil_check(F->b_1675)).kind) == (((rt_int)5LL))) || ((*(P1045)rt_nil_check(F->b_1675)).t == g_ty_ascii_1113)))) {
F->r_1681 = NULL;
F->r_1681 = f_mk_mval_369((((rt_int)5LL)), ((rt_int)0LL));
F->ok_374v = 1;
(*(P1045)rt_nil_check(F->r_1681)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_386(F->a_1674), f_mstr_386(F->b_1675)); b_; }));
F->result_ = F->r_1681;
goto ret_;
}
F->ok_374v = 0;
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_374v)) (*F->ok_374) = F->ok_374v;
  RT_FPOP();
  return F->result_;
}

static P1045 f_float_op_380(rstr *op_376, P1045 a_377, P1045 b_378, int *ok_379) {
  struct f_float_op_380fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_376 = op_376;
F->a_377 = a_377;
F->b_378 = b_378;
F->ok_379 = ok_379;
F->ok_379v = *F->ok_379;
F->r_1682 = NULL;
F->r_1682 = f_mk_mval_369((((rt_int)3LL)), ((rt_int)0LL));
F->ok_379v = 1;
{ rt_frame xf1683;
if (RT_TRY(xf1683)) {
if (rt_str_eq((*F->op_376), rt_str("+", 1))) {
(*(P1045)rt_nil_check(F->r_1682)).f = rt_r_fovf(rt_r_fchk((*(P1045)rt_nil_check(F->a_377)).f) + rt_r_fchk((*(P1045)rt_nil_check(F->b_378)).f));
} else if (rt_str_eq((*F->op_376), rt_str("-", 1))) {
(*(P1045)rt_nil_check(F->r_1682)).f = rt_r_fovf(rt_r_fchk((*(P1045)rt_nil_check(F->a_377)).f) - rt_r_fchk((*(P1045)rt_nil_check(F->b_378)).f));
} else if (rt_str_eq((*F->op_376), rt_str("*", 1))) {
(*(P1045)rt_nil_check(F->r_1682)).f = rt_r_fovf(rt_r_fchk((*(P1045)rt_nil_check(F->a_377)).f) * rt_r_fchk((*(P1045)rt_nil_check(F->b_378)).f));
} else if (rt_str_eq((*F->op_376), rt_str("/", 1))) {
(*(P1045)rt_nil_check(F->r_1682)).f = rt_r_fovf(rt_fdiv(rt_r_fchk((*(P1045)rt_nil_check(F->a_377)).f), rt_r_fchk((*(P1045)rt_nil_check(F->b_378)).f)));
} else if (rt_str_eq((*F->op_376), rt_str("**", 2))) {
(*(P1045)rt_nil_check(F->r_1682)).f = rt_r_fpow(rt_r_fchk((*(P1045)rt_nil_check(F->a_377)).f), rt_r_ichk((*(P1045)rt_nil_check(F->b_378)).i));
} else {
(*(P1045)rt_nil_check(F->r_1682)).kind = (((rt_int)2LL));
if (rt_str_eq((*F->op_376), rt_str("=", 1))) {
(*(P1045)rt_nil_check(F->r_1682)).i = f_bool_i_384((rt_r_fchk((*(P1045)rt_nil_check(F->a_377)).f) == rt_r_fchk((*(P1045)rt_nil_check(F->b_378)).f)));
} else if (rt_str_eq((*F->op_376), rt_str("/=", 2))) {
(*(P1045)rt_nil_check(F->r_1682)).i = f_bool_i_384((rt_r_fchk((*(P1045)rt_nil_check(F->a_377)).f) != rt_r_fchk((*(P1045)rt_nil_check(F->b_378)).f)));
} else if (rt_str_eq((*F->op_376), rt_str("<", 1))) {
(*(P1045)rt_nil_check(F->r_1682)).i = f_bool_i_384((rt_r_fchk((*(P1045)rt_nil_check(F->a_377)).f) < rt_r_fchk((*(P1045)rt_nil_check(F->b_378)).f)));
} else if (rt_str_eq((*F->op_376), rt_str("<=", 2))) {
(*(P1045)rt_nil_check(F->r_1682)).i = f_bool_i_384((rt_r_fchk((*(P1045)rt_nil_check(F->a_377)).f) <= rt_r_fchk((*(P1045)rt_nil_check(F->b_378)).f)));
} else if (rt_str_eq((*F->op_376), rt_str(">", 1))) {
(*(P1045)rt_nil_check(F->r_1682)).i = f_bool_i_384((rt_r_fchk((*(P1045)rt_nil_check(F->a_377)).f) > rt_r_fchk((*(P1045)rt_nil_check(F->b_378)).f)));
} else if (rt_str_eq((*F->op_376), rt_str(">=", 2))) {
(*(P1045)rt_nil_check(F->r_1682)).i = f_bool_i_384((rt_r_fchk((*(P1045)rt_nil_check(F->a_377)).f) >= rt_r_fchk((*(P1045)rt_nil_check(F->b_378)).f)));
} else {
F->ok_379v = 0;
}
}
RT_POP(xf1683);
} else {
RT_POP(xf1683);
int x1684 = rt_xcur;
{
F->ok_379v = 0;
}
}
}
F->result_ = F->r_1682;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ok_379v)) (*F->ok_379) = F->ok_379v;
  RT_FPOP();
  return F->result_;
}

static rstr f_bool_text_382(int b_381) {
  struct f_bool_text_382fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_381 = b_381;
if (F->b_381) {
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

static rt_int f_bool_i_384(int b_383) {
  struct f_bool_i_384fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_383 = b_383;
if (F->b_383) {
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

static rstr f_mstr_386(P1045 v_385) {
  struct f_mstr_386fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_385 = v_385;
if ((rt_r_ichk((*(P1045)rt_nil_check(F->v_385)).kind) == (((rt_int)5LL)))) {
F->result_ = (((P1019)rt_nil_check((*(P1045)rt_nil_check(F->v_385)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_388(rt_r_ichk((*(P1045)rt_nil_check(F->v_385)).i)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ascii_char_388(rt_int i_387) {
  struct f_ascii_char_388fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_387 = i_387;
F->printable_1685 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_387 >= ((rt_int)32LL)) && (F->i_387 <= ((rt_int)126LL)))) {
F->result_ = rt_r_echk(rt_str_get(F->printable_1685, rt_sub(F->i_387, ((rt_int)31LL))));
goto ret_;
}
F->result_ = 32;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_user_defined_390(rstr *op_389) {
  struct f_user_defined_390fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_389 = op_389;
F->y_1686 = NULL;
F->y_1686 = f_lookup_163(&(*F->op_389));
F->result_ = ((F->y_1686 != NULL) && ((rt_r_ichk((*(P1036)rt_nil_check(F->y_1686)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_1686)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_392(P1032 t_391) {
  struct f_mcopy_392fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_391 = t_391;
F->ct_1687 = rt_str_copy(f_ctype_234(F->t_391));
F->name_1688 = rt_str_new(rt_add(((rt_int)((F->ct_1687).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1688, rt_str_cat(rt_str("mc_", 3), F->ct_1687));
F->l_1689 = NULL;
if ((!f_seen_name_425(g_mcopies_1109, &F->name_1688))) {
{ R1031 *cell1690 = rt_alloc(sizeof(R1031));
(*cell1690).s = NULL;
(*cell1690).next = NULL;
F->l_1689 = cell1690;
}
(*(P1030)rt_nil_check(F->l_1689)).s = f_mk_3(&F->name_1688);
(*(P1030)rt_nil_check(F->l_1689)).next = g_mcopies_1109;
g_mcopies_1109 = F->l_1689;
f_put_27(g_out_protos_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1688), rt_str("(void *d, const void *s);", 25)); b_; }));
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_391)).kind) == (((rt_int)15LL))) && f_top_level_406((*(P1032)rt_nil_check(F->t_391)).assignp))) {
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1688), rt_str("(void *d, const void *s) { ", 27)), f_user_call2_400((*(P1032)rt_nil_check(F->t_391)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(", 2), F->ct_1687), rt_str(" *)d", 4)); b_; }), 1, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1687), rt_str(" *)s", 4)); b_; }), 0)), rt_str("; }", 3)); b_; }));
} else {
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1688), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1687), rt_str(" *)d = ", 7)), f_copy_code_414(F->t_391, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1687), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
}
F->result_ = F->name_1688;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_394(P1032 t_393) {
  struct f_composite_394fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_393 = t_393;
F->result_ = ((((rt_r_ichk((*(P1032)rt_nil_check(F->t_393)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_393)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_393)).kind) == (((rt_int)17LL)))) || ((rt_r_ichk((*(P1032)rt_nil_check(F->t_393)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->t_393)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_call2_400(P1036 y_395, rstr *a_396, int lv_a_397, rstr *b_398, int lv_b_399) {
  struct f_user_call2_400fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_395 = y_395;
F->a_396 = a_396;
F->lv_a_397 = lv_a_397;
F->b_398 = b_398;
F->lv_b_399 = lv_b_399;
F->args_1691 = NULL;
F->args_1691 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P1036)rt_nil_check(F->y_395)).level) > ((rt_int)0LL))) {
F->args_1691 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1693 = ((rt_int)1LL), hi1694 = rt_sub(rt_r_ichk(g_cur_level_1083), rt_r_ichk((*(P1036)rt_nil_check(F->y_395)).level));
for (rt_int it1695 = lo1693; it1695 <= hi1694; it1695++) {
F->i_1692 = it1695;
F->args_1691 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->args_1691))->all), rt_str("->up", 4)); b_; }));
}
}
F->args_1691 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->args_1691))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_395)).cname))->all), rt_str("(", 1)), (((P1019)rt_nil_check(F->args_1691))->all)), f_user_arg_404((*(P1036)rt_nil_check(F->y_395)).params, &(*F->a_396), F->lv_a_397)), rt_str(", ", 2)), f_user_arg_404((*(P1038)rt_nil_check((*(P1036)rt_nil_check(F->y_395)).params)).next, &(*F->b_398), F->lv_b_399)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_arg_404(P1038 pm_401, rstr *v_402, int lv_403) {
  struct f_user_arg_404fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pm_401 = pm_401;
F->v_402 = v_402;
F->lv_403 = lv_403;
if ((rt_r_ichk((*(P1038)rt_nil_check(F->pm_401)).mode) == (((rt_int)1LL)))) {
F->result_ = f_copy_code_414((*(P1038)rt_nil_check(F->pm_401)).t, &(*F->v_402));
goto ret_;
} else if (F->lv_403) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("&(", 2), (*F->v_402)), rt_str(")", 1));
goto ret_;
}
{
F->ct_1696 = rt_str_copy(f_ctype_234((*(P1038)rt_nil_check(F->pm_401)).t));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1696), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1696), rt_str(")); *b_ = ", 10)), (*F->v_402)), rt_str("; b_; })", 8));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_top_level_406(P1036 y_405) {
  struct f_top_level_406fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_405 = y_405;
F->result_ = ((F->y_405 != NULL) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_405)).level) == ((rt_int)0LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_411(rstr *lval_407, P1032 t_408, rstr *v_409, P1028 c_410) {
  struct f_assign_code_411fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_407 = lval_407;
F->t_408 = t_408;
F->v_409 = v_409;
F->c_410 = c_410;
if ((((rt_r_ichk((*(P1032)rt_nil_check(F->t_408)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->t_408)).assignp != NULL)) && (rt_r_echk(g_in_func_1082) || f_top_level_406((*(P1032)rt_nil_check(F->t_408)).assignp)))) {
F->result_ = rt_str_cat(f_user_call2_400((*(P1032)rt_nil_check(F->t_408)).assignp, &(*F->lval_407), 1, &(*F->v_409), 0), rt_str(";", 1));
goto ret_;
}
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_408)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->t_408)).tparams == NULL))) {
F->result_ = f_assign_code_411(&(*F->lval_407), (*(P1032)rt_nil_check(F->t_408)).under, &(*F->v_409), F->c_410);
goto ret_;
}
if ((((rt_r_ichk((*(P1032)rt_nil_check(F->t_408)).kind) == (((rt_int)17LL))) && (F->c_410 != NULL)) && ((*(P1028)rt_nil_check(F->c_410)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->t_408)), rt_str(" u_ = ", 6)), (*F->v_409)), rt_str("; if (u_.tag != (", 17)), (((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_410)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_234(F->t_408)), rt_str("(&", 2)), (*F->lval_407)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_394(F->t_408)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_234(F->t_408)), rt_str("(&", 2)), (*F->lval_407)), rt_str(", ", 2)), (*F->v_409)), rt_str(");", 2));
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_408)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_407)), rt_str(", ", 2)), (*F->v_409)), rt_str(");", 2));
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_408)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_408)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_234(F->t_408)), rt_str("(&", 2)), (*F->lval_407)), rt_str(", ", 2)), (*F->v_409)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_407), rt_str(" = ", 3)), f_checked_213(F->t_408, F->c_410, &(*F->v_409))), rt_str(";", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_copy_code_414(P1032 t_412, rstr *v_413) {
  struct f_copy_code_414fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_412 = t_412;
F->v_413 = v_413;
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_412)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->t_412)).tparams == NULL))) {
F->result_ = f_copy_code_414((*(P1032)rt_nil_check(F->t_412)).under, &(*F->v_413));
goto ret_;
}
if (f_composite_394(F->t_412)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_234(F->t_412)), rt_str("(", 1)), (*F->v_413)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_412)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_413)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_412)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_412)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_234(F->t_412)), rt_str("(", 1)), (*F->v_413)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_413);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_eq_code_418(P1032 t_415, rstr *a_416, rstr *b_417) {
  struct f_eq_code_418fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_415 = t_415;
F->a_416 = a_416;
F->b_417 = b_417;
if ((((rt_r_ichk((*(P1032)rt_nil_check(F->t_415)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->t_415)).eqp != NULL)) && (rt_r_echk(g_in_func_1082) || f_top_level_406((*(P1032)rt_nil_check(F->t_415)).eqp)))) {
F->result_ = f_user_call2_400((*(P1032)rt_nil_check(F->t_415)).eqp, &(*F->a_416), 0, &(*F->b_417), 0);
goto ret_;
}
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_415)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->t_415)).tparams == NULL))) {
F->result_ = f_eq_code_418((*(P1032)rt_nil_check(F->t_415)).under, &(*F->a_416), &(*F->b_417));
goto ret_;
}
if (f_composite_394(F->t_415)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_234(F->t_415)), rt_str("(", 1)), (*F->a_416)), rt_str(", ", 2)), (*F->b_417)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_415)).kind) == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), (*F->a_416)), rt_str(", ", 2)), (*F->b_417)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_415)).kind) == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_416)), rt_str(" == ", 4)), (*F->b_417)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_415)).kind) == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_416)), rt_str(" == ", 4)), (*F->b_417)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_415)).kind) == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_415)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_416)), rt_str(", ", 2)), (*F->b_417)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_415)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_415)).kind) == (((rt_int)7LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_234(F->t_415)), rt_str("(", 1)), (*F->a_416)), rt_str(", ", 2)), (*F->b_417)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_416)), rt_str(" == ", 4)), (*F->b_417)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_elem_assign_422(rstr *lval_419, P1032 t_420, rstr *v_421) {
  struct f_elem_assign_422fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_419 = lval_419;
F->t_420 = t_420;
F->v_421 = v_421;
F->result_ = f_assign_code_411(&(*F->lval_419), F->t_420, &(*F->v_421), NULL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_seen_name_425(P1030 l_423, rstr *s_424) {
  struct f_seen_name_425fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_423 = l_423;
F->s_424 = s_424;
F->p_1697 = NULL;
F->p_1697 = F->l_423;
while ((F->p_1697 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1030)rt_nil_check(F->p_1697)).s))->all), (*F->s_424))) {
F->result_ = 1;
goto ret_;
}
F->p_1697 = (*(P1030)rt_nil_check(F->p_1697)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_emit_helpers_426(void) {
  struct f_emit_helpers_426fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->order_1698 = NULL;
F->t_1699 = NULL;
F->t_1699 = g_all_types_1071;
F->done_1700 = NULL;
while ((F->t_1699 != NULL)) {
if ((f_composite_394(F->t_1699) && (!f_seen_name_425(F->done_1700, &(((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_1699)).cname))->all))))) {
F->l_1701 = NULL;
F->c_1702 = rt_str_new(((rt_int)(((((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_1699)).cname))->all)).len)));
rt_str_assign(&F->c_1702, (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_1699)).cname))->all));
{ R1031 *cell1703 = rt_alloc(sizeof(R1031));
(*cell1703).s = NULL;
(*cell1703).next = NULL;
F->l_1701 = cell1703;
}
(*(P1030)rt_nil_check(F->l_1701)).s = (*(P1032)rt_nil_check(F->t_1699)).cname;
(*(P1030)rt_nil_check(F->l_1701)).next = F->done_1700;
F->done_1700 = F->l_1701;
f_put_27(g_out_helpers_1074, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1702), rt_str("(", 1)), F->c_1702), rt_str(" *d, ", 5)), F->c_1702), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_1074, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1702), rt_str(" cp_", 4)), F->c_1702), rt_str("(", 1)), F->c_1702), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_1074, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1702), rt_str("(", 1)), F->c_1702), rt_str(" a, ", 4)), F->c_1702), rt_str(" b);", 4)); b_; }));
f_helper_bodies_428(F->t_1699);
}
F->t_1699 = (*(P1032)rt_nil_check(F->t_1699)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_428(P1032 t_427) {
  struct f_helper_bodies_428fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_427 = t_427;
F->c_1704 = rt_str_new(((rt_int)(((((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_427)).cname))->all)).len)));
rt_str_assign(&F->c_1704, (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_427)).cname))->all));
F->b_1705 = NULL;
F->b_1705 = g_out_funcs_1077;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_427)).kind) == (((rt_int)6LL)))) {
F->e_1706 = NULL;
F->e_1706 = (*(P1032)rt_nil_check(F->t_427)).elem;
F->sizes_1707 = NULL;
F->sizes_1707 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1708 = NULL;
F->bounds_1708 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1710 = ((rt_int)1LL), hi1711 = rt_r_ichk((*(P1032)rt_nil_check(F->t_427)).ndim);
for (rt_int it1712 = lo1710; it1712 <= hi1711; it1712++) {
F->k_1709 = it1712;
F->l_1713 = rt_str_copy(f_dim_lo_242(F->k_1709));
F->h_1714 = rt_str_copy(f_dim_hi_244(F->k_1709));
F->sizes_1707 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->sizes_1707))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1713), rt_str(", d->", 5)), F->h_1714), rt_str(") != RT_R_EXT(s.", 16)), F->l_1713), rt_str(", s.", 4)), F->h_1714), rt_str(")", 1)); b_; }));
F->bounds_1708 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->bounds_1708))->all), rt_str(" || a.", 6)), F->l_1713), rt_str(" != b.", 6)), F->l_1713), rt_str(" || a.", 6)), F->h_1714), rt_str(" != b.", 6)), F->h_1714); b_; }));
}
}
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1704), rt_str("(", 1)), F->c_1704), rt_str(" *d, ", 5)), F->c_1704), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P1019)rt_nil_check(F->sizes_1707))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_249(F->t_427, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_422(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1706, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_422(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1706, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1704), rt_str(" cp_", 4)), F->c_1704), rt_str("(", 1)), F->c_1704), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1704), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_234(F->e_1706)), rt_str(") * (size_t)", 12)), f_acnt_249(F->t_427, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_249(F->t_427, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_414(F->e_1706, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1704), rt_str("(", 1)), F->c_1704), rt_str(" a, ", 4)), F->c_1704), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P1019)rt_nil_check(F->bounds_1708))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_249(F->t_427, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_418(F->e_1706, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_427)).kind) == (((rt_int)15LL)))) {
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1704), rt_str("(", 1)), F->c_1704), rt_str(" *d, ", 5)), F->c_1704), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_186((*(P1032)rt_nil_check(F->t_427)).under) && ((*(P1032)rt_nil_check(F->t_427)).elemcons != NULL)) && ((*(P1028)rt_nil_check((*(P1032)rt_nil_check(F->t_427)).elemcons)).lo != NULL))) {
F->saved_1715 = NULL;
F->saved_1715 = g_psub_1087;
F->p_1716 = NULL;
F->p_1716 = (*(P1032)rt_nil_check(F->t_427)).tparams;
while ((F->p_1716 != NULL)) {
F->l1_1717 = NULL;
F->l2_1718 = NULL;
{ R1031 *cell1719 = rt_alloc(sizeof(R1031));
(*cell1719).s = NULL;
(*cell1719).next = NULL;
F->l1_1717 = cell1719;
}
{ R1031 *cell1720 = rt_alloc(sizeof(R1031));
(*cell1720).s = NULL;
(*cell1720).next = NULL;
F->l2_1718 = cell1720;
}
(*(P1030)rt_nil_check(F->l1_1717)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1716)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1030)rt_nil_check(F->l2_1718)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1716)).name))->all))); b_; }));
(*(P1030)rt_nil_check(F->l1_1717)).next = F->l2_1718;
(*(P1030)rt_nil_check(F->l2_1718)).next = g_psub_1087;
g_psub_1087 = F->l1_1717;
F->p_1716 = (*(P1026)rt_nil_check(F->p_1716)).next;
}
if ((rt_r_ichk((*(P1032)rt_nil_check((*(P1032)rt_nil_check(F->t_427)).under)).kind) == (((rt_int)3LL)))) {
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_314(&(((P1019)rt_nil_check((*(P1028)rt_nil_check((*(P1032)rt_nil_check(F->t_427)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_314(&(((P1019)rt_nil_check((*(P1028)rt_nil_check((*(P1032)rt_nil_check(F->t_427)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_314(&(((P1019)rt_nil_check((*(P1028)rt_nil_check((*(P1032)rt_nil_check(F->t_427)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_314(&(((P1019)rt_nil_check((*(P1028)rt_nil_check((*(P1032)rt_nil_check(F->t_427)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_1087 = F->saved_1715;
} else {
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_422(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P1032)rt_nil_check(F->t_427)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1704), rt_str(" cp_", 4)), F->c_1704), rt_str("(", 1)), F->c_1704), rt_str(" s) { s.all = ", 14)), f_copy_code_414((*(P1032)rt_nil_check(F->t_427)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1704), rt_str("(", 1)), F->c_1704), rt_str(" a, ", 4)), F->c_1704), rt_str(" b) { return ", 13)), f_eq_code_418((*(P1032)rt_nil_check(F->t_427)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_427)).kind) == (((rt_int)17LL)))) {
F->f_1721 = NULL;
F->f_1721 = (*(P1032)rt_nil_check(F->t_427)).fields;
F->i_1722 = RT_R_IUNDEF;
F->i_1722 = ((rt_int)0LL);
F->cases_as_1723 = NULL;
F->cases_as_1723 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1724 = NULL;
F->cases_cp_1724 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1725 = NULL;
F->cases_eq_1725 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1721 != NULL)) {
F->fn_1726 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_1721)).name))->all))));
F->cases_as_1723 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->cases_as_1723))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1722))), rt_str(": d->", 5)), F->fn_1726), rt_str(" = ", 3)), f_copy_code_414((*(P1034)rt_nil_check(F->f_1721)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1726); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1724 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->cases_cp_1724))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1722))), rt_str(": d.", 4)), F->fn_1726), rt_str(" = ", 3)), f_copy_code_414((*(P1034)rt_nil_check(F->f_1721)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1726); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1725 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->cases_eq_1725))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1722))), rt_str(": return ", 9)), f_eq_code_418((*(P1034)rt_nil_check(F->f_1721)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1726); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1726); b_; }))), rt_str(";", 1)); b_; }));
F->i_1722 = rt_add(rt_r_ichk(F->i_1722), ((rt_int)1LL));
F->f_1721 = (*(P1034)rt_nil_check(F->f_1721)).next;
}
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1704), rt_str("(", 1)), F->c_1704), rt_str(" *d, ", 5)), F->c_1704), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P1019)rt_nil_check(F->cases_as_1723))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1704), rt_str(" cp_", 4)), F->c_1704), rt_str("(", 1)), F->c_1704), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1704), rt_str(" d = s; switch (s.tag) {", 24)), (((P1019)rt_nil_check(F->cases_cp_1724))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1704), rt_str("(", 1)), F->c_1704), rt_str(" a, ", 4)), F->c_1704), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P1019)rt_nil_check(F->cases_eq_1725))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1727 = NULL;
F->f_1727 = (*(P1032)rt_nil_check(F->t_427)).fields;
F->conds_1728 = NULL;
F->conds_1728 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1704), rt_str("(", 1)), F->c_1704), rt_str(" *d, ", 5)), F->c_1704), rt_str(" s) {", 5)); b_; }));
while ((F->f_1727 != NULL)) {
F->fn_1729 = rt_str_copy(f_field_c_17(&(((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_1727)).name))->all)));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_422(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1729); b_; }), (*(P1034)rt_nil_check(F->f_1727)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1729); b_; }))); b_; }));
F->f_1727 = (*(P1034)rt_nil_check(F->f_1727)).next;
}
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1704), rt_str(" cp_", 4)), F->c_1704), rt_str("(", 1)), F->c_1704), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1704), rt_str(" d = s;", 7)); b_; }));
F->f_1727 = (*(P1032)rt_nil_check(F->t_427)).fields;
while ((F->f_1727 != NULL)) {
F->fn_1730 = rt_str_copy(f_field_c_17(&(((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_1727)).name))->all)));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1730), rt_str(" = ", 3)), f_copy_code_414((*(P1034)rt_nil_check(F->f_1727)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1730); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1728 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->conds_1728))->all), rt_str(" && ", 4)), f_eq_code_418((*(P1034)rt_nil_check(F->f_1727)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1730); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1730); b_; }))); b_; }));
F->f_1727 = (*(P1034)rt_nil_check(F->f_1727)).next;
}
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1704), rt_str("(", 1)), F->c_1704), rt_str(" a, ", 4)), F->c_1704), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P1019)rt_nil_check(F->conds_1728))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_430(P1026 elems_429) {
  struct f_declare_body_430fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_429 = elems_429;
F->e_1731 = NULL;
F->e_1731 = F->elems_429;
while ((F->e_1731 != NULL)) {
if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).kind) == (((rt_int)51LL)))) {
F->g_1732 = NULL;
F->g_1732 = f_new_sym_181((((rt_int)10LL)), (*(P1026)rt_nil_check(F->e_1731)).name);
(*(P1036)rt_nil_check(F->g_1732)).decl = F->e_1731;
(*(P1036)rt_nil_check(F->g_1732)).level = rt_r_ichk(g_cur_level_1083);
(*(P1036)rt_nil_check(F->g_1732)).owner = g_func_sym_1094;
(*(P1036)rt_nil_check(F->g_1732)).gctx = g_fctx_1084;
f_define_168(F->g_1732, rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).line));
}
F->e_1731 = (*(P1026)rt_nil_check(F->e_1731)).next;
}
F->e_1731 = F->elems_429;
while ((F->e_1731 != NULL)) {
if (((rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).kind) == (((rt_int)41LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).flag) == ((rt_int)0LL)))) {
f_manifest_const_432(F->e_1731);
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).kind) == (((rt_int)47LL)))) {
f_gen_capsule_440(F->e_1731);
} else if (((((rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).kind) == (((rt_int)48LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).flag) != ((rt_int)1LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).flag) != ((rt_int)3LL))) && (!f_pending_capsule_446(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_1731)).name))->all))))) {
f_gen_expose_473(F->e_1731);
(*(P1026)rt_nil_check(F->e_1731)).eline = ((rt_int)1LL);
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).kind) == (((rt_int)49LL)))) {
F->y_1733 = NULL;
F->y_1733 = f_new_sym_181((((rt_int)7LL)), (*(P1026)rt_nil_check(F->e_1731)).name);
(*(P1036)rt_nil_check(F->y_1733)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_1731)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_168(F->y_1733, rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).line));
f_put_27(g_out_globals_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_1733)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_1079, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_1733)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_1731)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).kind) == (((rt_int)42LL)))) {
F->y_1734 = NULL;
F->y_1734 = f_new_sym_181((((rt_int)6LL)), (*(P1026)rt_nil_check(F->e_1731)).name);
(*(P1036)rt_nil_check(F->y_1734)).st = (*(P1026)rt_nil_check(F->e_1731)).a;
(*(P1036)rt_nil_check(F->y_1734)).decl = F->e_1731;
f_define_168(F->y_1734, rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).line));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).kind) == (((rt_int)44LL)))) {
F->y_1735 = NULL;
F->y_1735 = f_new_sym_181((((rt_int)5LL)), (*(P1026)rt_nil_check(F->e_1731)).name);
F->t_1736 = NULL;
F->t_1736 = f_new_typ_183((((rt_int)8LL)));
(*(P1032)rt_nil_check(F->t_1736)).name = (*(P1026)rt_nil_check(F->e_1731)).name;
(*(P1032)rt_nil_check(F->t_1736)).decl = F->e_1731;
(*(P1036)rt_nil_check(F->y_1735)).t = F->t_1736;
f_define_168(F->y_1735, rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).line));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).kind) == (((rt_int)43LL)))) {
F->y_1737 = NULL;
F->y_1737 = f_new_sym_181((((rt_int)5LL)), (*(P1026)rt_nil_check(F->e_1731)).name);
(*(P1036)rt_nil_check(F->y_1737)).st = (*(P1026)rt_nil_check(F->e_1731)).a;
(*(P1036)rt_nil_check(F->y_1737)).decl = F->e_1731;
f_define_168(F->y_1737, rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).line));
}
F->e_1731 = (*(P1026)rt_nil_check(F->e_1731)).next;
}
F->e_1731 = F->elems_429;
while ((F->e_1731 != NULL)) {
if ((((rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).kind) == (((rt_int)50LL))))) {
F->y_1738 = NULL;
f_declare_subprogram_503(F->e_1731);
F->y_1738 = f_lookup_decl_165(F->e_1731);
(*(P1036)rt_nil_check(F->y_1738)).home = F->elems_429;
f_normal_function_498(F->e_1731, F->y_1738);
}
F->e_1731 = (*(P1026)rt_nil_check(F->e_1731)).next;
}
F->e_1731 = F->elems_429;
{
F->snap_1739 = NULL;
while ((F->e_1731 != NULL)) {
if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).kind) == (((rt_int)51LL)))) {
if ((F->snap_1739 == NULL)) {
{ P1040 cell1740 = rt_alloc(sizeof *cell1740);
rt_int pv1741 = (((rt_int)4093LL));
cell1740->p_n = pv1741;
cell1740->all.lo = ((rt_int)0LL); cell1740->all.hi = pv1741;
cell1740->all.lo2 = cell1740->all.hi2 = 1;
cell1740->all.p = rt_alloc(sizeof(P1036) * (size_t)(RT_CNT(cell1740->all)) + 1);
for (rt_int i1742 = 0; i1742 < (RT_CNT(cell1740->all)); i1742++) {
cell1740->all.p[i1742] = NULL;
}
F->snap_1739 = cell1740;
}
{ rt_int lo1744 = ((rt_int)0LL), hi1745 = (((rt_int)4093LL));
for (rt_int it1746 = lo1744; it1746 <= hi1745; it1746++) {
F->i_1743 = it1746;
(((P1040)rt_nil_check(F->snap_1739))->all).p[(rt_index(F->i_1743, (((P1040)rt_nil_check(F->snap_1739))->all).lo, (((P1040)rt_nil_check(F->snap_1739))->all).hi) - (((P1040)rt_nil_check(F->snap_1739))->all).lo)] = ({ A1042 b_ = (((P1040)rt_nil_check(g_table_1066))->all); b_.p[(rt_index(F->i_1743, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1747 = NULL;
F->g_1747 = f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_1731)).name))->all));
(*(P1036)rt_nil_check(F->g_1747)).env = F->snap_1739;
}
}
F->e_1731 = (*(P1026)rt_nil_check(F->e_1731)).next;
}
}
F->e_1731 = F->elems_429;
while ((F->e_1731 != NULL)) {
if (((rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).kind) == (((rt_int)45LL))) && (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_1731)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_1731)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1748 = NULL;
F->y_1748 = f_lookup_decl_165(F->e_1731);
if (((((F->y_1748 != NULL) && ((*(P1036)rt_nil_check(F->y_1748)).params != NULL)) && ((*(P1038)rt_nil_check((*(P1036)rt_nil_check(F->y_1748)).params)).next == NULL)) && ((rt_r_ichk((*(P1032)rt_nil_check((*(P1038)rt_nil_check((*(P1036)rt_nil_check(F->y_1748)).params)).t)).kind) == (((rt_int)15LL))) || (rt_r_ichk((*(P1032)rt_nil_check((*(P1038)rt_nil_check((*(P1036)rt_nil_check(F->y_1748)).params)).t)).kind) == (((rt_int)8LL)))))) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_1731)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P1032)rt_nil_check((*(P1038)rt_nil_check((*(P1036)rt_nil_check(F->y_1748)).params)).t)).initp = F->y_1748;
} else {
(*(P1032)rt_nil_check((*(P1038)rt_nil_check((*(P1036)rt_nil_check(F->y_1748)).params)).t)).finalp = F->y_1748;
}
}
}
if ((((rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).kind) == (((rt_int)45LL))) && rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_1731)).name))->all), rt_str(":=", 2))) || ((rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).kind) == (((rt_int)46LL))) && (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_1731)).name))->all), rt_str("=", 1)) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_1731)).name))->all), rt_str("<", 1)))))) {
F->y_1749 = NULL;
F->y_1749 = f_lookup_decl_165(F->e_1731);
if (((((((F->y_1749 != NULL) && ((*(P1036)rt_nil_check(F->y_1749)).params != NULL)) && ((*(P1038)rt_nil_check((*(P1036)rt_nil_check(F->y_1749)).params)).next != NULL)) && ((*(P1038)rt_nil_check((*(P1038)rt_nil_check((*(P1036)rt_nil_check(F->y_1749)).params)).next)).next == NULL)) && (rt_r_ichk((*(P1032)rt_nil_check((*(P1038)rt_nil_check((*(P1036)rt_nil_check(F->y_1749)).params)).t)).kind) == (((rt_int)15LL)))) && f_same_221((*(P1038)rt_nil_check((*(P1036)rt_nil_check(F->y_1749)).params)).t, (*(P1038)rt_nil_check((*(P1038)rt_nil_check((*(P1036)rt_nil_check(F->y_1749)).params)).next)).t))) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_1731)).name))->all), rt_str(":=", 2))) {
if ((rt_r_ichk((*(P1038)rt_nil_check((*(P1036)rt_nil_check(F->y_1749)).params)).mode) != (((rt_int)2LL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_1731)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the first formal of := is a VAR formal (13.2)", 45); b_; }));
}
(*(P1032)rt_nil_check((*(P1038)rt_nil_check((*(P1036)rt_nil_check(F->y_1749)).params)).t)).assignp = F->y_1749;
} else if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_1731)).name))->all), rt_str("=", 1))) {
(*(P1032)rt_nil_check((*(P1038)rt_nil_check((*(P1036)rt_nil_check(F->y_1749)).params)).t)).eqp = F->y_1749;
} else {
(*(P1032)rt_nil_check((*(P1038)rt_nil_check((*(P1036)rt_nil_check(F->y_1749)).params)).t)).ltp = F->y_1749;
}
}
}
F->e_1731 = (*(P1026)rt_nil_check(F->e_1731)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_432(P1026 d_431) {
  struct f_manifest_const_432fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_431 = d_431;
F->ok_1750 = RT_R_EUNDEF;
F->v_1751 = NULL;
F->y_1752 = NULL;
F->t_1753 = NULL;
F->ctext_1754 = NULL;
if (((*(P1026)rt_nil_check(F->d_431)).a != NULL)) {
if (((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->d_431)).a)).kind) != (((rt_int)70LL))) || ((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->d_431)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1751 = f_meval_375((*(P1026)rt_nil_check(F->d_431)).b, &F->ok_1750);
if ((!rt_r_echk(F->ok_1750))) {
goto ret_;
}
{
F->saved_1755 = NULL;
F->saved_1755 = g_code_1080;
g_code_1080 = f_new_buffer_24();
g_trial_1108 = rt_add(rt_r_ichk(g_trial_1108), ((rt_int)1LL));
{ rt_frame xf1756;
if (RT_TRY(xf1756)) {
F->ctext_1754 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_800((*(P1026)rt_nil_check(F->d_431)).b, NULL, &F->t_1753)), rt_str(")", 1)); b_; }));
RT_POP(xf1756);
} else {
RT_POP(xf1756);
int x1757 = rt_xcur;
if (0 || x1757 == ex_compile_error_1) {
F->ok_1750 = 0;
} else {
rt_raise(x1757);
}
}
}
g_trial_1108 = rt_sub(rt_r_ichk(g_trial_1108), ((rt_int)1LL));
F->ok_1750 = (rt_r_echk(F->ok_1750) && ((*(P1049)rt_nil_check(g_code_1080)).head == NULL));
g_code_1080 = F->saved_1755;
}
if (((!rt_r_echk(F->ok_1750)) || (((*(P1026)rt_nil_check(F->d_431)).a != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->t_1753)).kind) != (((rt_int)1LL)))))) {
goto ret_;
}
if ((rt_r_ichk((*(P1045)rt_nil_check(F->v_1751)).kind) == (((rt_int)4LL)))) {
(*(P1045)rt_nil_check(F->v_1751)).t = F->t_1753;
(*(P1045)rt_nil_check(F->v_1751)).i = f_lit_index_265((*(P1032)rt_nil_check(f_base_of_223(F->t_1753))).lits, &(((P1019)rt_nil_check((*(P1045)rt_nil_check(F->v_1751)).s))->all));
}
(*(P1026)rt_nil_check(F->d_431)).flag = ((rt_int)1LL);
F->y_1752 = f_new_sym_181((((rt_int)2LL)), (*(P1026)rt_nil_check(F->d_431)).name);
(*(P1036)rt_nil_check(F->y_1752)).t = F->t_1753;
(*(P1036)rt_nil_check(F->y_1752)).c = f_new_cons_184();
(*(P1036)rt_nil_check(F->y_1752)).mv = F->v_1751;
if ((rt_r_ichk((*(P1045)rt_nil_check(F->v_1751)).kind) == (((rt_int)1LL)))) {
(*(P1036)rt_nil_check(F->y_1752)).mvalue = rt_r_ichk((*(P1045)rt_nil_check(F->v_1751)).i);
(*(P1036)rt_nil_check(F->y_1752)).hasmv = 1;
}
(*(P1036)rt_nil_check(F->y_1752)).ro_flag = 1;
(*(P1036)rt_nil_check(F->y_1752)).access = F->ctext_1754;
f_define_168(F->y_1752, rt_r_ichk((*(P1026)rt_nil_check(F->d_431)).line));
ret_:
  RT_FPOP();
  return;
}

static int f_exported_436(P1026 d_433, rstr *name_434, int *ro_435) {
  struct f_exported_436fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_433 = d_433;
F->name_434 = name_434;
F->ro_435 = ro_435;
F->ro_435v = *F->ro_435;
F->p_1758 = NULL;
F->p_1758 = (*(P1026)rt_nil_check(F->d_433)).a;
F->ro_435v = 0;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->d_433)).ival) == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1758 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1758)).name))->all), (*F->name_434))) {
F->ro_435v = (rt_r_ichk((*(P1026)rt_nil_check(F->p_1758)).ival) == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1758 = (*(P1026)rt_nil_check(F->p_1758)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ro_435v)) (*F->ro_435) = F->ro_435v;
  RT_FPOP();
  return F->result_;
}

static P1036 f_copy_sym_438(P1036 y_437) {
  struct f_copy_sym_438fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_437 = y_437;
F->z_1759 = NULL;
{ R1037 *cell1760 = rt_alloc(sizeof(R1037));
(*cell1760).name = NULL;
(*cell1760).t = NULL;
(*cell1760).c = NULL;
(*cell1760).access = NULL;
(*cell1760).cname = NULL;
(*cell1760).st = NULL;
(*cell1760).decl = NULL;
(*cell1760).params = NULL;
(*cell1760).result = NULL;
(*cell1760).members = NULL;
(*cell1760).mnext = NULL;
(*cell1760).binds = NULL;
(*cell1760).insts = NULL;
(*cell1760).env = NULL;
(*cell1760).chain = NULL;
(*cell1760).stack = NULL;
(*cell1760).owner = NULL;
(*cell1760).gctx = NULL;
(*cell1760).mv = NULL;
(*cell1760).reqs = NULL;
(*cell1760).home = NULL;
(*cell1760).capn = NULL;
(*cell1760).tbinds = NULL;
(*cell1760).loc = NULL;
(*cell1760).reqs_sym = NULL;
F->z_1759 = cell1760;
}
(*(P1036)rt_nil_check(F->z_1759)).kind = rt_r_ichk((*(P1036)rt_nil_check(F->y_437)).kind);
(*(P1036)rt_nil_check(F->z_1759)).name = (*(P1036)rt_nil_check(F->y_437)).name;
(*(P1036)rt_nil_check(F->z_1759)).t = (*(P1036)rt_nil_check(F->y_437)).t;
(*(P1036)rt_nil_check(F->z_1759)).c = (*(P1036)rt_nil_check(F->y_437)).c;
(*(P1036)rt_nil_check(F->z_1759)).access = (*(P1036)rt_nil_check(F->y_437)).access;
(*(P1036)rt_nil_check(F->z_1759)).cname = (*(P1036)rt_nil_check(F->y_437)).cname;
(*(P1036)rt_nil_check(F->z_1759)).ro_flag = rt_r_echk((*(P1036)rt_nil_check(F->y_437)).ro_flag);
(*(P1036)rt_nil_check(F->z_1759)).mvalue = rt_r_ichk((*(P1036)rt_nil_check(F->y_437)).mvalue);
(*(P1036)rt_nil_check(F->z_1759)).hasmv = rt_r_echk((*(P1036)rt_nil_check(F->y_437)).hasmv);
(*(P1036)rt_nil_check(F->z_1759)).st = (*(P1036)rt_nil_check(F->y_437)).st;
(*(P1036)rt_nil_check(F->z_1759)).decl = (*(P1036)rt_nil_check(F->y_437)).decl;
(*(P1036)rt_nil_check(F->z_1759)).params = (*(P1036)rt_nil_check(F->y_437)).params;
(*(P1036)rt_nil_check(F->z_1759)).result = (*(P1036)rt_nil_check(F->y_437)).result;
(*(P1036)rt_nil_check(F->z_1759)).level = rt_r_ichk((*(P1036)rt_nil_check(F->y_437)).level);
(*(P1036)rt_nil_check(F->z_1759)).byref = rt_r_echk((*(P1036)rt_nil_check(F->y_437)).byref);
(*(P1036)rt_nil_check(F->z_1759)).members = (*(P1036)rt_nil_check(F->y_437)).members;
(*(P1036)rt_nil_check(F->z_1759)).env = (*(P1036)rt_nil_check(F->y_437)).env;
F->result_ = F->z_1759;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_440(P1026 d_439) {
  struct f_gen_capsule_440fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_439 = d_439;
F->y_1761 = NULL;
F->y_1761 = f_new_sym_181((((rt_int)8LL)), (*(P1026)rt_nil_check(F->d_439)).name);
F->saved_1762 = NULL;
F->saved_1762 = g_suppress_1100;
F->p_1763 = NULL;
F->p_1763 = (*(P1026)rt_nil_check(F->d_439)).b;
F->tail_1764 = NULL;
(*(P1036)rt_nil_check(F->y_1761)).decl = F->d_439;
while ((F->p_1763 != NULL)) {
F->pm_1765 = NULL;
{ R1039 *cell1766 = rt_alloc(sizeof(R1039));
(*cell1766).name = NULL;
(*cell1766).t = NULL;
(*cell1766).c = NULL;
(*cell1766).cfield = NULL;
(*cell1766).next = NULL;
F->pm_1765 = cell1766;
}
(*(P1038)rt_nil_check(F->pm_1765)).name = (*(P1026)rt_nil_check(F->p_1763)).name;
(*(P1038)rt_nil_check(F->pm_1765)).mode = rt_r_ichk((*(P1026)rt_nil_check(F->p_1763)).ival);
(*(P1038)rt_nil_check(F->pm_1765)).t = f_resolve_subtype_268((*(P1026)rt_nil_check(F->p_1763)).a, &(*(P1038)rt_nil_check(F->pm_1765)).c);
if ((F->tail_1764 == NULL)) {
(*(P1036)rt_nil_check(F->y_1761)).params = F->pm_1765;
} else {
(*(P1038)rt_nil_check(F->tail_1764)).next = F->pm_1765;
}
F->tail_1764 = F->pm_1765;
F->p_1763 = (*(P1026)rt_nil_check(F->p_1763)).next;
}
if ((((*(P1026)rt_nil_check(F->d_439)).b == NULL) && f_imports_variables_442(F->d_439))) {
(*(P1036)rt_nil_check(F->y_1761)).pending = 1;
} else if (((*(P1026)rt_nil_check(F->d_439)).b == NULL)) {
g_suppress_1100 = f_suppressing_510((*(P1026)rt_nil_check(F->d_439)).prags);
f_elaborate_capsule_455(F->d_439, F->y_1761, NULL, F->d_439);
g_suppress_1100 = F->saved_1762;
}
f_define_168(F->y_1761, rt_r_ichk((*(P1026)rt_nil_check(F->d_439)).line));
ret_:
  RT_FPOP();
  return;
}

static int f_imports_variables_442(P1026 d_441) {
  struct f_imports_variables_442fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_441 = d_441;
F->result_ = (((*(P1026)rt_nil_check(F->d_441)).d != NULL) || (rt_r_ichk((*(P1026)rt_nil_check(F->d_441)).flag) >= ((rt_int)2LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_elaborate_pending_444(P1036 y_443) {
  struct f_elaborate_pending_444fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_443 = y_443;
F->saved_1767 = NULL;
F->saved_1767 = g_suppress_1100;
if (rt_r_echk((*(P1036)rt_nil_check(F->y_443)).pending)) {
(*(P1036)rt_nil_check(F->y_443)).pending = 0;
g_suppress_1100 = f_suppressing_510((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_443)).decl)).prags);
f_elaborate_capsule_455((*(P1036)rt_nil_check(F->y_443)).decl, F->y_443, NULL, (*(P1036)rt_nil_check(F->y_443)).decl);
g_suppress_1100 = F->saved_1767;
}
ret_:
  RT_FPOP();
  return;
}

static int f_pending_capsule_446(rstr *name_445) {
  struct f_pending_capsule_446fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_445 = name_445;
F->y_1768 = NULL;
F->y_1768 = f_lookup_163(&(*F->name_445));
F->result_ = (((F->y_1768 != NULL) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_1768)).kind) == (((rt_int)8LL)))) && rt_r_echk((*(P1036)rt_nil_check(F->y_1768)).pending));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_params_450(P1026 d_447, P1026 args_448, rt_int line_449) {
  struct f_capsule_params_450fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_447 = d_447;
F->args_448 = args_448;
F->line_449 = line_449;
F->p_1769 = NULL;
F->p_1769 = (*(P1026)rt_nil_check(F->d_447)).b;
F->a_1770 = NULL;
F->a_1770 = F->args_448;
F->t_1771 = NULL;
F->vt_1772 = NULL;
F->c_1773 = NULL;
while (((F->p_1769 != NULL) && (F->a_1770 != NULL))) {
F->t_1771 = f_resolve_subtype_268((*(P1026)rt_nil_check(F->p_1769)).a, &F->c_1773);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->p_1769)).ival) == (((rt_int)3LL)))) {
f_fail_23(F->line_449, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->p_1769)).ival) == (((rt_int)2LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->p_1769)).ival) == (((rt_int)4LL))))) {
F->lv_1774 = NULL;
F->lc_1775 = NULL;
F->ro_1776 = RT_R_EUNDEF;
F->y_1777 = NULL;
F->y_1777 = f_new_sym_181((((rt_int)1LL)), (*(P1026)rt_nil_check(F->p_1769)).name);
f_lvalue_769(F->a_1770, &F->lv_1774, &F->vt_1772, &F->lc_1775, &F->ro_1776);
f_check_type_232(F->vt_1772, F->t_1771, F->line_449);
if ((rt_r_echk(F->ro_1776) && (rt_r_ichk((*(P1026)rt_nil_check(F->p_1769)).ival) == (((rt_int)2LL))))) {
f_fail_23(F->line_449, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1769)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (rt_r_echk(g_in_func_1082)) {
F->f_1778 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1769)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234(F->t_1771)), rt_str(" *", 2)), F->f_1778), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1778), rt_str(" = &", 4)), (((P1019)rt_nil_check(F->lv_1774))->all)), rt_str(";", 1)); b_; }));
(*(P1036)rt_nil_check(F->y_1777)).level = rt_r_ichk(g_cur_level_1083);
(*(P1036)rt_nil_check(F->y_1777)).access = f_mk_3(&F->f_1778);
(*(P1036)rt_nil_check(F->y_1777)).byref = 1;
} else {
F->g_1779 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1769)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234(F->t_1771)), rt_str(" *", 2)), F->g_1779), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_1090, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1779), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1779, rt_str(" = &", 4)), (((P1019)rt_nil_check(F->lv_1774))->all)), rt_str(";", 1)); b_; }));
(*(P1036)rt_nil_check(F->y_1777)).level = ((rt_int)0LL);
(*(P1036)rt_nil_check(F->y_1777)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1779), rt_str(")", 1)); b_; }));
}
(*(P1036)rt_nil_check(F->y_1777)).t = F->t_1771;
(*(P1036)rt_nil_check(F->y_1777)).c = F->lc_1775;
(*(P1036)rt_nil_check(F->y_1777)).ro_flag = (rt_r_ichk((*(P1026)rt_nil_check(F->p_1769)).ival) == (((rt_int)4LL)));
f_define_168(F->y_1777, F->line_449);
} else {
F->y_1780 = NULL;
F->y_1780 = f_new_sym_181((((rt_int)2LL)), (*(P1026)rt_nil_check(F->p_1769)).name);
F->v_1781 = rt_str_copy(f_gexpr_800(F->a_1770, F->t_1771, &F->vt_1772));
f_check_type_232(F->vt_1772, F->t_1771, F->line_449);
{
F->access_1782 = rt_str_copy(f_storage_519(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1769)).name))->all), F->t_1771));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1782, rt_str(" = ", 3)), f_copy_code_414(F->t_1771, &F->v_1781)), rt_str(";", 1)); b_; }));
f_bind_522(F->y_1780, &F->access_1782);
}
(*(P1036)rt_nil_check(F->y_1780)).t = F->t_1771;
(*(P1036)rt_nil_check(F->y_1780)).c = F->c_1773;
(*(P1036)rt_nil_check(F->y_1780)).ro_flag = 1;
f_define_168(F->y_1780, F->line_449);
}
F->p_1769 = (*(P1026)rt_nil_check(F->p_1769)).next;
F->a_1770 = (*(P1026)rt_nil_check(F->a_1770)).next;
}
if (((F->p_1769 != NULL) || (F->a_1770 != NULL))) {
f_fail_23(F->line_449, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_447)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_455(P1026 d_451, P1036 y_452, P1026 args_453, P1026 owner_454) {
  struct f_elaborate_capsule_455fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_451 = d_451;
F->y_452 = y_452;
F->args_453 = args_453;
F->owner_454 = owner_454;
F->cr_1783 = NULL;
F->ctx_1784 = NULL;
F->saved_gotos_1785 = NULL;
F->m_1786 = NULL;
F->p_1787 = NULL;
F->p_1787 = (*(P1026)rt_nil_check(F->d_451)).a;
F->ro_1788 = RT_R_EUNDEF;
{ R1054 *cell1789 = rt_alloc(sizeof(R1054));
(*cell1789).d = NULL;
(*cell1789).next = NULL;
F->cr_1783 = cell1789;
}
(*(P1053)rt_nil_check(F->cr_1783)).d = F->d_451;
(*(P1053)rt_nil_check(F->cr_1783)).next = g_caps_1085;
g_caps_1085 = F->cr_1783;
f_open_scope_177();
(*(P1053)rt_nil_check(F->cr_1783)).depth = rt_r_ichk(g_depth_1069);
if (((*(P1026)rt_nil_check(F->d_451)).b != NULL)) {
f_capsule_params_450(F->d_451, F->args_453, rt_r_ichk((*(P1026)rt_nil_check(F->owner_454)).line));
}
{ R1044 *cell1790 = rt_alloc(sizeof(R1044));
(*cell1790).imps = NULL;
(*cell1790).next = NULL;
F->ctx_1784 = cell1790;
}
(*(P1043)rt_nil_check(F->ctx_1784)).depth = rt_r_ichk(g_depth_1069);
(*(P1043)rt_nil_check(F->ctx_1784)).imps = (*(P1026)rt_nil_check(F->d_451)).d;
(*(P1043)rt_nil_check(F->ctx_1784)).all_imp = (rt_r_ichk((*(P1026)rt_nil_check(F->d_451)).flag) >= ((rt_int)2LL));
(*(P1043)rt_nil_check(F->ctx_1784)).next = g_fctx_1084;
g_fctx_1084 = F->ctx_1784;
F->saved_gotos_1785 = g_gotos_1104;
g_gotos_1104 = NULL;
f_declare_labels_586((*(P1026)rt_nil_check(F->d_451)).c);
f_declare_body_430((*(P1026)rt_nil_check(F->d_451)).c);
f_capsule_body_593((*(P1026)rt_nil_check(F->d_451)).c);
{
F->w_1791 = NULL;
{ R1056 *cell1792 = rt_alloc(sizeof(R1056));
(*cell1792).d = NULL;
(*cell1792).w = NULL;
(*cell1792).next = NULL;
F->w_1791 = cell1792;
}
(*(P1055)rt_nil_check(F->w_1791)).d = F->owner_454;
(*(P1055)rt_nil_check(F->w_1791)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_580((*(P1026)rt_nil_check(F->d_451)).c); b_; }));
(*(P1055)rt_nil_check(F->w_1791)).next = g_cap_waits_1086;
g_cap_waits_1086 = F->w_1791;
}
g_fctx_1084 = (*(P1043)rt_nil_check(g_fctx_1084)).next;
F->m_1786 = g_scope_stack_1070;
while (((F->m_1786 != NULL) && (rt_r_ichk((*(P1036)rt_nil_check(F->m_1786)).depth) == rt_r_ichk(g_depth_1069)))) {
if (((((rt_r_ichk((*(P1036)rt_nil_check(F->m_1786)).kind) == (((rt_int)5LL))) && ((*(P1036)rt_nil_check(F->m_1786)).t == NULL)) && ((*(P1036)rt_nil_check(F->m_1786)).decl != NULL)) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->m_1786)).decl)).kind) == (((rt_int)43LL))))) {
(*(P1036)rt_nil_check(F->m_1786)).t = f_new_type_318(F->m_1786, f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1026)rt_nil_check(F->d_451)).line)), &(*(P1036)rt_nil_check(F->m_1786)).c);
} else if ((((rt_r_ichk((*(P1036)rt_nil_check(F->m_1786)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1036)rt_nil_check(F->m_1786)).kind) == (((rt_int)6LL)))) && ((*(P1036)rt_nil_check(F->m_1786)).t == NULL))) {
(*(P1036)rt_nil_check(F->m_1786)).t = f_resolve_subtype_268((*(P1036)rt_nil_check(F->m_1786)).st, &(*(P1036)rt_nil_check(F->m_1786)).c);
} else if (((rt_r_ichk((*(P1036)rt_nil_check(F->m_1786)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->m_1786)).t)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_475((*(P1036)rt_nil_check(F->m_1786)).t);
}
F->m_1786 = (*(P1036)rt_nil_check(F->m_1786)).stack;
}
F->m_1786 = g_scope_stack_1070;
while (((F->m_1786 != NULL) && (rt_r_ichk((*(P1036)rt_nil_check(F->m_1786)).depth) == rt_r_ichk(g_depth_1069)))) {
if (f_exported_436(F->d_451, &(((P1019)rt_nil_check((*(P1036)rt_nil_check(F->m_1786)).name))->all), &F->ro_1788)) {
F->z_1793 = NULL;
F->z_1793 = f_copy_sym_438(F->m_1786);
if (rt_r_echk(F->ro_1788)) {
(*(P1036)rt_nil_check(F->z_1793)).ro_flag = 1;
}
(*(P1036)rt_nil_check(F->z_1793)).mnext = (*(P1036)rt_nil_check(F->y_452)).members;
(*(P1036)rt_nil_check(F->y_452)).members = F->z_1793;
}
F->m_1786 = (*(P1036)rt_nil_check(F->m_1786)).stack;
}
while ((F->p_1787 != NULL)) {
if ((((!rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1787)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1787)).name))->all), rt_str("=", 1)))) && ((f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1787)).name))->all)) == NULL) || ((*(P1036)rt_nil_check(f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1787)).name))->all)))).depth != rt_r_ichk(g_depth_1069))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_451)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1787)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_451)).name))->all)); b_; }));
}
F->p_1787 = (*(P1026)rt_nil_check(F->p_1787)).next;
}
f_close_scope_178();
g_caps_1085 = (*(P1053)rt_nil_check(g_caps_1085)).next;
g_gotos_1104 = F->saved_gotos_1785;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_458(P1026 d_456, rstr *op_457) {
  struct f_exports_op_458fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_456 = d_456;
F->op_457 = op_457;
F->p_1794 = NULL;
if ((F->d_456 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1794 = (*(P1026)rt_nil_check(F->d_456)).a;
while ((F->p_1794 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1794)).name))->all), (*F->op_457))) {
F->result_ = 1;
goto ret_;
}
F->p_1794 = (*(P1026)rt_nil_check(F->p_1794)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1019 f_renamed_461(P1026 d_459, P1036 z_460) {
  struct f_renamed_461fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_459 = d_459;
F->z_460 = z_460;
F->r_1795 = NULL;
F->r_1795 = (*(P1026)rt_nil_check(F->d_459)).c;
while ((F->r_1795 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->r_1795)).name))->all), (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->z_460)).name))->all))) {
F->result_ = (*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->r_1795)).a)).name;
goto ret_;
}
F->r_1795 = (*(P1026)rt_nil_check(F->r_1795)).next;
}
F->result_ = (*(P1036)rt_nil_check(F->z_460)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_cap_tt_match_464(P1026 f_462, P1026 a_463) {
  struct f_cap_tt_match_464fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->f_462 = f_462;
F->a_463 = a_463;
F->x_1796 = NULL;
F->x_1796 = F->f_462;
F->y_1797 = NULL;
F->y_1797 = F->a_463;
while (((F->x_1796 != NULL) && (F->y_1797 != NULL))) {
F->ok1_1798 = RT_R_EUNDEF;
F->ok2_1799 = RT_R_EUNDEF;
F->v1_1800 = NULL;
F->v1_1800 = f_meval_375(F->x_1796, &F->ok1_1798);
F->v2_1801 = NULL;
F->v2_1801 = f_meval_375(F->y_1797, &F->ok2_1799);
if ((((!rt_r_echk(F->ok1_1798)) || (!rt_r_echk(F->ok2_1799))) || (rt_r_ichk((*(P1045)rt_nil_check(F->v1_1800)).kind) != rt_r_ichk((*(P1045)rt_nil_check(F->v2_1801)).kind)))) {
F->result_ = 0;
goto ret_;
} else if (((rt_r_ichk((*(P1045)rt_nil_check(F->v1_1800)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1045)rt_nil_check(F->v1_1800)).kind) == (((rt_int)4LL))))) {
if ((!rt_str_eq((((P1019)rt_nil_check((*(P1045)rt_nil_check(F->v1_1800)).s))->all), (((P1019)rt_nil_check((*(P1045)rt_nil_check(F->v2_1801)).s))->all)))) {
F->result_ = 0;
goto ret_;
}
} else if ((rt_r_ichk((*(P1045)rt_nil_check(F->v1_1800)).i) != rt_r_ichk((*(P1045)rt_nil_check(F->v2_1801)).i))) {
F->result_ = 0;
goto ret_;
}
F->x_1796 = (*(P1026)rt_nil_check(F->x_1796)).next;
F->y_1797 = (*(P1026)rt_nil_check(F->y_1797)).next;
}
F->result_ = ((F->x_1796 == NULL) && (F->y_1797 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1036 f_pick_capsule_466(P1026 d_465) {
  struct f_pick_capsule_466fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_465 = d_465;
F->y_1802 = NULL;
F->y_1802 = ({ A1042 b_ = (((P1040)rt_nil_check(g_table_1066))->all); b_.p[(rt_index(f_hash_161(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_465)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
F->first_1803 = NULL;
F->fit_1804 = NULL;
F->n_1805 = RT_R_IUNDEF;
F->n_1805 = ((rt_int)0LL);
while ((F->y_1802 != NULL)) {
if ((rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_1802)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_465)).name))->all)) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_1802)).kind) == (((rt_int)8LL))))) {
F->n_1805 = rt_add(rt_r_ichk(F->n_1805), ((rt_int)1LL));
if ((F->first_1803 == NULL)) {
F->first_1803 = F->y_1802;
}
if ((((F->fit_1804 == NULL) && f_fits_916(F->y_1802, (*(P1026)rt_nil_check(F->d_465)).b)) && f_cap_tt_match_464((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_1802)).decl)).e, (*(P1026)rt_nil_check(F->d_465)).e))) {
F->fit_1804 = F->y_1802;
}
}
F->y_1802 = (*(P1036)rt_nil_check(F->y_1802)).chain;
}
if ((rt_r_ichk(F->n_1805) > ((rt_int)1LL))) {
if ((F->fit_1804 == NULL)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_465)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no capsule ", 11), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_465)).name))->all)), rt_str(" has formals that fit these actual parameters", 45)); b_; }));
}
F->result_ = F->fit_1804;
goto ret_;
}
if ((F->first_1803 == NULL)) {
F->result_ = f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_465)).name))->all));
goto ret_;
}
F->result_ = F->first_1803;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1036 f_capsule_instance_469(P1036 g_467, P1026 d_468) {
  struct f_capsule_instance_469fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_467 = g_467;
F->d_468 = d_468;
F->gd_1806 = NULL;
F->gd_1806 = (*(P1036)rt_nil_check(F->g_467)).decl;
F->pat_1807 = NULL;
F->pat_1807 = (*(P1026)rt_nil_check(F->gd_1806)).b;
F->binds_1808 = NULL;
F->binds_1808 = f_need_binds_727(F->gd_1806, f_tt_binds_706(F->gd_1806, (*(P1026)rt_nil_check(F->pat_1807)).e, (*(P1026)rt_nil_check(F->d_468)).e, rt_r_ichk((*(P1026)rt_nil_check(F->d_468)).line)), rt_r_ichk((*(P1026)rt_nil_check(F->d_468)).line));
F->inst_1809 = NULL;
F->inst_1809 = (*(P1036)rt_nil_check(F->g_467)).insts;
F->saved_env_1810 = NULL;
F->saved_env_1810 = g_genv_1067;
F->saved_gdepth_1811 = RT_R_IUNDEF;
F->saved_gdepth_1811 = rt_r_ichk(g_gdepth_1099);
if (((rt_r_ichk((*(P1026)rt_nil_check(F->d_468)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P1026)rt_nil_check(F->d_468)).flag) != ((rt_int)3LL)))) {
while ((F->inst_1809 != NULL)) {
if (f_same_binds_698((*(P1036)rt_nil_check(F->inst_1809)).tbinds, F->binds_1808)) {
F->result_ = F->inst_1809;
goto ret_;
}
F->inst_1809 = (*(P1036)rt_nil_check(F->inst_1809)).insts;
}
}
F->inst_1809 = f_new_sym_181((((rt_int)8LL)), (*(P1026)rt_nil_check(F->pat_1807)).name);
(*(P1036)rt_nil_check(F->inst_1809)).decl = F->pat_1807;
(*(P1036)rt_nil_check(F->inst_1809)).tbinds = F->binds_1808;
f_open_scope_177();
{
F->b_1812 = NULL;
F->b_1812 = F->binds_1808;
while ((F->b_1812 != NULL)) {
f_define_168(F->b_1812, rt_r_ichk((*(P1026)rt_nil_check(F->d_468)).line));
F->b_1812 = (*(P1036)rt_nil_check(F->b_1812)).mnext;
}
}
g_genv_1067 = (*(P1036)rt_nil_check(F->g_467)).env;
g_gdepth_1099 = rt_r_ichk(g_depth_1069);
f_elaborate_capsule_455(F->pat_1807, F->inst_1809, (*(P1026)rt_nil_check(F->d_468)).b, F->d_468);
g_genv_1067 = F->saved_env_1810;
g_gdepth_1099 = rt_r_ichk(F->saved_gdepth_1811);
f_close_scope_178();
if (((rt_r_ichk((*(P1026)rt_nil_check(F->d_468)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P1026)rt_nil_check(F->d_468)).flag) != ((rt_int)3LL)))) {
(*(P1036)rt_nil_check(F->inst_1809)).insts = (*(P1036)rt_nil_check(F->g_467)).insts;
(*(P1036)rt_nil_check(F->g_467)).insts = F->inst_1809;
}
F->result_ = F->inst_1809;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_configure_471(P1036 y_470) {
  struct f_configure_471fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_470 = y_470;
F->m_1813 = NULL;
F->m_1813 = (*(P1036)rt_nil_check(F->y_470)).members;
while ((F->m_1813 != NULL)) {
F->n_1814 = rt_str_copy((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->m_1813)).name))->all));
if ((((rt_r_ichk((*(P1036)rt_nil_check(F->m_1813)).kind) == (((rt_int)2LL))) && rt_r_echk((*(P1036)rt_nil_check(F->m_1813)).hasmv)) && (((rt_str_eq(F->n_1814, rt_str("MILLISECONDS", 12)) || rt_str_eq(F->n_1814, rt_str("SECONDS", 7))) || rt_str_eq(F->n_1814, rt_str("MINUTES", 7))) || rt_str_eq(F->n_1814, rt_str("HOURS", 5))))) {
f_put_27(g_out_excs_1079, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  RT_", 5), F->n_1814), rt_str(" = ", 3)), f_itos_7(rt_r_ichk((*(P1036)rt_nil_check(F->m_1813)).mvalue))), rt_str(";", 1)); b_; }));
}
F->m_1813 = (*(P1036)rt_nil_check(F->m_1813)).mnext;
}
ret_:
  RT_FPOP();
  return;
}

static void f_gen_expose_473(P1026 d_472) {
  struct f_gen_expose_473fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_472 = d_472;
F->y_1815 = NULL;
F->y_1815 = f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_472)).name))->all));
F->m_1816 = NULL;
F->p_1817 = NULL;
F->p_1817 = (*(P1026)rt_nil_check(F->d_472)).a;
F->r_1818 = NULL;
F->r_1818 = (*(P1026)rt_nil_check(F->d_472)).c;
if ((((F->y_1815 != NULL) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_1815)).kind) == (((rt_int)10LL)))) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_1815)).decl)).b)).kind) == (((rt_int)47LL))))) {
F->y_1815 = f_capsule_instance_469(F->y_1815, F->d_472);
} else {
F->y_1815 = f_pick_capsule_466(F->d_472);
if (((F->y_1815 == NULL) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_1815)).kind) != (((rt_int)8LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_472)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_472)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
f_elaborate_pending_444(F->y_1815);
if ((((*(P1026)rt_nil_check(F->d_472)).e != NULL) && (((*(P1036)rt_nil_check(F->y_1815)).decl == NULL) || ((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_1815)).decl)).e == NULL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_472)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_472)).name))->all), rt_str(" has no translation time property list", 38)); b_; }));
}
}
if (rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_1815)).name))->all), rt_str("CONFIGURATION", 13))) {
f_configure_471(F->y_1815);
}
if ((((*(P1036)rt_nil_check(F->y_1815)).tbinds != NULL) || ((((*(P1036)rt_nil_check(F->y_1815)).decl != NULL) && ((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_1815)).decl)).e != NULL)) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_1815)).kind) == (((rt_int)10LL)))))) {
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->d_472)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P1026)rt_nil_check(F->d_472)).flag) == ((rt_int)3LL)))) {
F->inst_1819 = NULL;
F->inst_1819 = f_new_sym_181((((rt_int)8LL)), (*(P1036)rt_nil_check(F->y_1815)).name);
(*(P1036)rt_nil_check(F->inst_1819)).decl = (*(P1036)rt_nil_check(F->y_1815)).decl;
f_elaborate_capsule_455((*(P1036)rt_nil_check(F->y_1815)).decl, F->inst_1819, (*(P1026)rt_nil_check(F->d_472)).b, F->d_472);
F->y_1815 = F->inst_1819;
} else if ((((*(P1036)rt_nil_check(F->y_1815)).decl != NULL) && ((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_1815)).decl)).b != NULL))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_472)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_472)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P1026)rt_nil_check(F->d_472)).b != NULL)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_472)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1818 != NULL)) {
F->found_1820 = RT_R_EUNDEF;
F->found_1820 = 0;
F->m_1816 = (*(P1036)rt_nil_check(F->y_1815)).members;
while ((F->m_1816 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->m_1816)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->r_1818)).name))->all))) {
F->found_1820 = 1;
}
F->m_1816 = (*(P1036)rt_nil_check(F->m_1816)).mnext;
}
if ((!rt_r_echk(F->found_1820))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_472)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->r_1818)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_472)).name))->all)); b_; }));
}
F->r_1818 = (*(P1026)rt_nil_check(F->r_1818)).next;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->d_472)).ival) == ((rt_int)1LL))) {
F->m_1816 = (*(P1036)rt_nil_check(F->y_1815)).members;
while ((F->m_1816 != NULL)) {
F->z_1821 = NULL;
F->z_1821 = f_copy_sym_438(F->m_1816);
(*(P1036)rt_nil_check(F->z_1821)).name = f_renamed_461(F->d_472, F->m_1816);
f_define_168(F->z_1821, rt_r_ichk((*(P1026)rt_nil_check(F->d_472)).line));
F->m_1816 = (*(P1036)rt_nil_check(F->m_1816)).mnext;
}
goto ret_;
}
while ((F->p_1817 != NULL)) {
F->found_1822 = RT_R_EUNDEF;
F->found_1822 = 0;
F->m_1816 = (*(P1036)rt_nil_check(F->y_1815)).members;
while ((F->m_1816 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->m_1816)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1817)).name))->all))) {
F->z_1823 = NULL;
F->z_1823 = f_copy_sym_438(F->m_1816);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->p_1817)).ival) == ((rt_int)1LL))) {
(*(P1036)rt_nil_check(F->z_1823)).ro_flag = 1;
}
(*(P1036)rt_nil_check(F->z_1823)).name = f_renamed_461(F->d_472, F->m_1816);
f_define_168(F->z_1823, rt_r_ichk((*(P1026)rt_nil_check(F->d_472)).line));
F->found_1822 = 1;
}
F->m_1816 = (*(P1036)rt_nil_check(F->m_1816)).mnext;
}
if ((!rt_r_echk(F->found_1822))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_472)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1817)).name))->all), rt_str(" is not exported by ", 20)), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_472)).name))->all)); b_; }));
}
F->p_1817 = (*(P1026)rt_nil_check(F->p_1817)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_475(P1032 t_474) {
  struct f_finish_ptr_475fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_474 = t_474;
F->d_1824 = NULL;
F->d_1824 = (*(P1032)rt_nil_check(F->t_474)).decl;
F->p_1825 = NULL;
F->c_1826 = NULL;
F->dummy_1827 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1827, rt_str(" ", 1));
if (((*(P1032)rt_nil_check(F->t_474)).target != NULL)) {
goto ret_;
}
f_open_scope_177();
{ rt_int lo1829 = ((rt_int)1LL), hi1830 = ((rt_int)2LL);
for (rt_int it1831 = lo1829; it1831 <= hi1830; it1831++) {
F->pass_1828 = it1831;
if ((F->pass_1828 == ((rt_int)1LL))) {
F->p_1825 = (*(P1026)rt_nil_check(F->d_1824)).d;
} else {
F->p_1825 = (*(P1026)rt_nil_check(F->d_1824)).b;
}
while ((F->p_1825 != NULL)) {
F->y_1832 = NULL;
F->y_1832 = f_new_sym_181((((rt_int)2LL)), (*(P1026)rt_nil_check(F->p_1825)).name);
F->pc_1833 = NULL;
(*(P1036)rt_nil_check(F->y_1832)).t = f_resolve_subtype_268((*(P1026)rt_nil_check(F->p_1825)).a, &F->pc_1833);
(*(P1036)rt_nil_check(F->y_1832)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_168(F->y_1832, rt_r_ichk((*(P1026)rt_nil_check(F->d_1824)).line));
F->p_1825 = (*(P1026)rt_nil_check(F->p_1825)).next;
}
}
}
(*(P1032)rt_nil_check(F->t_474)).target = f_resolve_subtype_268((*(P1026)rt_nil_check(F->d_1824)).a, &F->c_1826);
if (((*(P1026)rt_nil_check(F->d_1824)).c != NULL)) {
f_check_rep_332((*(P1026)rt_nil_check(F->d_1824)).c, (*(P1032)rt_nil_check(F->t_474)).target, F->c_1826, 1, 1, F->d_1824);
(*(P1032)rt_nil_check(F->t_474)).repn = (*(P1026)rt_nil_check(F->d_1824)).c;
}
f_close_scope_178();
(*rt_str_at(&F->dummy_1827, ((rt_int)1LL))) = rt_str_get(f_ctype_234(F->t_474), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1827, ((rt_int)1LL))) = rt_str_get(f_ctype_234((*(P1032)rt_nil_check(F->t_474)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1026 f_ptr_args_477(P1028 c_476) {
  struct f_ptr_args_477fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_476 = c_476;
if ((F->c_476 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1028)rt_nil_check(F->c_476)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_482(P1026 formals_478, P1026 actuals_479, rstr *cell_480, rt_int line_481) {
  struct f_bind_ptr_params_482fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_478 = formals_478;
F->actuals_479 = actuals_479;
F->cell_480 = cell_480;
F->line_481 = line_481;
F->p_1834 = NULL;
F->p_1834 = F->formals_478;
F->a_1835 = NULL;
F->a_1835 = F->actuals_479;
F->vt_1836 = NULL;
if ((f_list_len_71(F->formals_478) != f_list_len_71(F->actuals_479))) {
f_fail_23(F->line_481, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_71(F->formals_478))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1834 != NULL)) {
F->pc_1837 = NULL;
F->y_1838 = NULL;
F->y_1838 = f_new_sym_181((((rt_int)2LL)), (*(P1026)rt_nil_check(F->p_1834)).name);
(*(P1036)rt_nil_check(F->y_1838)).t = f_resolve_subtype_268((*(P1026)rt_nil_check(F->p_1834)).a, &F->pc_1837);
{
F->v_1839 = rt_str_copy(f_gexpr_800(F->a_1835, (*(P1036)rt_nil_check(F->y_1838)).t, &F->vt_1836));
F->pv_1840 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_232(F->vt_1836, (*(P1036)rt_nil_check(F->y_1838)).t, F->line_481);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1036)rt_nil_check(F->y_1838)).t), rt_str(" ", 1)), F->pv_1840), rt_str(" = ", 3)), f_checked_213((*(P1036)rt_nil_check(F->y_1838)).t, F->pc_1837, &F->v_1839)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_480), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_480), rt_str("->p_", 4)), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1834)).name))->all))), rt_str(" = ", 3)), F->pv_1840), rt_str(";", 1)); b_; }));
}
(*(P1036)rt_nil_check(F->y_1838)).access = f_mk_3(&F->pv_1840);
}
f_define_168(F->y_1838, F->line_481);
F->p_1834 = (*(P1026)rt_nil_check(F->p_1834)).next;
F->a_1835 = (*(P1026)rt_nil_check(F->a_1835)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_487(P1026 s_483, rstr *lv_484, P1032 t_485, P1028 c_486) {
  struct f_alloc_cell_487fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_483 = s_483;
F->lv_484 = lv_484;
F->t_485 = t_485;
F->c_486 = c_486;
F->d_1841 = NULL;
F->d_1841 = (*(P1032)rt_nil_check(F->t_485)).decl;
F->tc_1842 = NULL;
F->vt_1843 = NULL;
F->pt_1844 = rt_str_copy(f_ctype_234(F->t_485));
F->cell_1845 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_346((*(P1032)rt_nil_check(F->t_485)).target)) {
F->fn_1846 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_1091 = 1;
g_uses_findyn_1093 = 1;
f_put_27(g_out_protos_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1846), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1846), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_1082)) {
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1019)rt_nil_check((*(P1036)rt_nil_check(g_func_sym_1094)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1844), rt_str(")cell_)->all)", 13)); b_; }), (*(P1032)rt_nil_check(F->t_485)).target)); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_1082)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1844), rt_str(" ", 1)), F->cell_1845), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1845), rt_str(", ", 2)), F->fn_1846), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1844), rt_str(" ", 1)), F->cell_1845), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1845), rt_str(", ", 2)), F->fn_1846), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1844), rt_str(" ", 1)), F->cell_1845), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1845), rt_str(");", 2)); b_; }));
}
f_open_scope_177();
f_bind_ptr_params_482((*(P1026)rt_nil_check(F->d_1841)).d, f_ptr_args_477(F->c_486), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P1026)rt_nil_check(F->s_483)).line));
f_bind_ptr_params_482((*(P1026)rt_nil_check(F->d_1841)).b, (*(P1026)rt_nil_check(F->s_483)).b, &F->cell_1845, rt_r_ichk((*(P1026)rt_nil_check(F->s_483)).line));
F->vt_1843 = f_resolve_subtype_268((*(P1026)rt_nil_check(F->d_1841)).a, &F->tc_1842);
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1845, rt_str("->all", 5)); b_; }), (*(P1032)rt_nil_check(F->t_485)).target, F->tc_1842);
f_close_scope_178();
if (((*(P1026)rt_nil_check(F->s_483)).c != NULL)) {
F->v_1847 = rt_str_copy(f_gexpr_in_808((*(P1026)rt_nil_check(F->s_483)).c, (*(P1032)rt_nil_check(F->t_485)).target, F->tc_1842, &F->vt_1843));
f_check_type_232(F->vt_1843, (*(P1032)rt_nil_check(F->t_485)).target, rt_r_ichk((*(P1026)rt_nil_check(F->s_483)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1845, rt_str("->all", 5)); b_; }), (*(P1032)rt_nil_check(F->t_485)).target, &F->v_1847, F->tc_1842); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_484), rt_str(" = ", 3)), F->cell_1845), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1028 f_freeze_args_491(P1028 c_488, P1032 t_489, rt_int line_490) {
  struct f_freeze_args_491fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_488 = c_488;
F->t_489 = t_489;
F->line_490 = line_490;
F->r_1848 = NULL;
F->r_1848 = f_copy_cons_206(F->c_488);
F->p_1849 = NULL;
F->p_1849 = (*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->t_489)).decl)).d;
F->a_1850 = NULL;
F->a_1850 = (*(P1028)rt_nil_check(F->c_488)).args;
F->head_1851 = NULL;
F->tail_1852 = NULL;
F->saved_1853 = NULL;
F->saved_1853 = g_st_field_1088;
if ((f_list_len_71(F->p_1849) != f_list_len_71(F->a_1850))) {
f_fail_23(F->line_490, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_489)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1849))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1850 != NULL)) {
F->pc_1854 = NULL;
F->vt_1855 = NULL;
F->pt_1856 = NULL;
F->pt_1856 = f_resolve_subtype_268((*(P1026)rt_nil_check(F->p_1849)).a, &F->pc_1854);
F->nm_1857 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1858 = NULL;
F->y_1858 = f_new_sym_181((((rt_int)2LL)), f_mk_3(&F->nm_1857));
F->n_1859 = NULL;
F->n_1859 = f_nn_65((((rt_int)7LL)), F->line_490);
F->v_1860 = rt_str_copy(f_gexpr_800(F->a_1850, F->pt_1856, &F->vt_1855));
F->access_1861 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_234(F->pt_1856); b_; })));
f_check_type_232(F->vt_1855, F->pt_1856, F->line_490);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1861, rt_str(" = ", 3)), f_checked_213(F->pt_1856, F->pc_1854, &F->v_1860)), rt_str(";", 1)); b_; }));
(*(P1036)rt_nil_check(F->y_1858)).t = F->pt_1856;
(*(P1036)rt_nil_check(F->y_1858)).ro_flag = 1;
f_bind_522(F->y_1858, &F->access_1861);
f_define_168(F->y_1858, F->line_490);
(*(P1026)rt_nil_check(F->n_1859)).name = f_mk_3(&F->nm_1857);
f_append_69(&F->head_1851, &F->tail_1852, F->n_1859);
F->a_1850 = (*(P1026)rt_nil_check(F->a_1850)).next;
F->p_1849 = (*(P1026)rt_nil_check(F->p_1849)).next;
}
(*(P1028)rt_nil_check(F->r_1848)).args = F->head_1851;
g_st_field_1088 = F->saved_1853;
F->result_ = F->r_1848;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_495(P1032 t_492, P1028 c_493, P1026 src_494) {
  struct f_ptr_subtype_check_495fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_492 = t_492;
F->c_493 = c_493;
F->src_494 = src_494;
F->lv_1862 = NULL;
F->st_1863 = NULL;
F->sc_1864 = NULL;
F->ro_1865 = RT_R_EUNDEF;
F->cond_1866 = NULL;
F->cond_1866 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1867 = NULL;
F->b_1868 = NULL;
F->at_1869 = NULL;
F->bt_1870 = NULL;
if ((((((rt_r_ichk((*(P1032)rt_nil_check(F->t_492)).kind) != (((rt_int)8LL))) || (F->c_493 == NULL)) || ((*(P1028)rt_nil_check(F->c_493)).args == NULL)) || (F->src_494 == NULL)) || (!f_is_lvalue_763(F->src_494)))) {
goto ret_;
}
f_lvalue_769(F->src_494, &F->lv_1862, &F->st_1863, &F->sc_1864, &F->ro_1865);
if (((F->sc_1864 == NULL) || ((*(P1028)rt_nil_check(F->sc_1864)).args == NULL))) {
goto ret_;
}
F->a_1867 = (*(P1028)rt_nil_check(F->c_493)).args;
F->b_1868 = (*(P1028)rt_nil_check(F->sc_1864)).args;
while (((F->a_1867 != NULL) && (F->b_1868 != NULL))) {
F->x_1871 = rt_str_copy(f_gexpr_800(F->a_1867, NULL, &F->at_1869));
F->y_1872 = rt_str_copy(f_gexpr_800(F->b_1868, F->at_1869, &F->bt_1870));
F->cond_1866 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->cond_1866))->all), rt_str(" || !", 5)), f_eq_code_418(F->at_1869, &F->x_1871, &F->y_1872)); b_; }));
F->a_1867 = (*(P1026)rt_nil_check(F->a_1867)).next;
F->b_1868 = (*(P1026)rt_nil_check(F->b_1868)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1019)rt_nil_check(F->cond_1866))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_normal_function_498(P1026 d_496, P1036 y_497) {
  struct f_normal_function_498fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_496 = d_496;
F->y_497 = y_497;
F->p_1873 = NULL;
F->p_1873 = (*(P1036)rt_nil_check(F->y_497)).params;
F->imp_1874 = NULL;
F->imp_1874 = (*(P1026)rt_nil_check(F->d_496)).d;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->d_496)).kind) != (((rt_int)46LL))) || (rt_mod(rt_r_ichk((*(P1026)rt_nil_check(F->d_496)).flag), ((rt_int)2LL)) == ((rt_int)1LL)))) {
goto ret_;
}
while ((F->p_1873 != NULL)) {
if (((rt_r_ichk((*(P1038)rt_nil_check(F->p_1873)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P1038)rt_nil_check(F->p_1873)).mode) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_496)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may have only CONST and READONLY formal parameters: ", 70), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_496)).name))->all)); b_; }));
}
F->p_1873 = (*(P1038)rt_nil_check(F->p_1873)).next;
}
if ((((*(P1026)rt_nil_check(F->d_496)).d == NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->d_496)).flag) < ((rt_int)2LL)))) {
goto ret_;
}
if (((g_caps_1085 == NULL) || (rt_r_ichk(g_depth_1069) != rt_r_ichk((*(P1053)rt_nil_check(g_caps_1085)).depth)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_496)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function with an imports list must be local to a capsule body: ", 72), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_496)).name))->all)); b_; }));
}
while ((F->imp_1874 != NULL)) {
F->ro_1875 = RT_R_EUNDEF;
F->z_1876 = NULL;
F->z_1876 = f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->imp_1874)).name))->all));
if ((((F->z_1876 != NULL) && (rt_r_ichk((*(P1036)rt_nil_check(F->z_1876)).kind) == (((rt_int)1LL)))) && (rt_r_ichk((*(P1036)rt_nil_check(F->z_1876)).depth) != rt_r_ichk((*(P1053)rt_nil_check(g_caps_1085)).depth)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_496)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function imports only variables of its capsule body: ", 62), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->imp_1874)).name))->all)); b_; }));
}
if ((f_exported_436((*(P1053)rt_nil_check(g_caps_1085)).d, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->imp_1874)).name))->all), &F->ro_1875) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1053)rt_nil_check(g_caps_1085)).d)).ival) != ((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_496)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may not import an exported variable: ", 55), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->imp_1874)).name))->all)); b_; }));
}
F->imp_1874 = (*(P1026)rt_nil_check(F->imp_1874)).next;
}
(*(P1036)rt_nil_check(F->y_497)).capn = (*(P1053)rt_nil_check(g_caps_1085)).d;
ret_:
  RT_FPOP();
  return;
}

static void f_foreign_body_501(P1026 d_499, P1036 y_500) {
  struct f_foreign_body_501fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_499 = d_499;
F->y_500 = y_500;
F->pm_1877 = NULL;
F->pm_1877 = (*(P1036)rt_nil_check(F->y_500)).params;
F->proto_1878 = NULL;
F->proto_1878 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->args_1879 = NULL;
F->args_1879 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cn_1880 = rt_str_copy(f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_499)).name))->all)));
if (((*(P1026)rt_nil_check(F->d_499)).c != NULL)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_499)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a foreign ", 10), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_499)).name))->all)), rt_str(" has an empty body", 18)); b_; }));
}
while ((F->pm_1877 != NULL)) {
if (((rt_r_ichk((*(P1038)rt_nil_check(F->pm_1877)).mode) != (((rt_int)1LL))) || (!(f_scalar_kind_186(f_base_of_223((*(P1038)rt_nil_check(F->pm_1877)).t)) || ((*(P1032)rt_nil_check(f_base_of_223((*(P1038)rt_nil_check(F->pm_1877)).t))).kind == (((rt_int)2LL))))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_499)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a foreign subprogram takes CONST INT, FLOAT, BOOL and ENUM formals", 66); b_; }));
}
if ((((rt_int)(((((P1019)rt_nil_check(F->proto_1878))->all)).len)) > ((rt_int)0LL))) {
F->proto_1878 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->proto_1878))->all), rt_str(", ", 2)); b_; }));
F->args_1879 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->args_1879))->all), rt_str(", ", 2)); b_; }));
}
F->proto_1878 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->proto_1878))->all), f_ctype_234((*(P1038)rt_nil_check(F->pm_1877)).t)); b_; }));
F->args_1879 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->args_1879))->all), rt_str("F->", 3)), (((P1019)rt_nil_check((*(P1038)rt_nil_check(F->pm_1877)).cfield))->all)); b_; }));
F->pm_1877 = (*(P1038)rt_nil_check(F->pm_1877)).next;
}
if ((((rt_int)(((((P1019)rt_nil_check(F->proto_1878))->all)).len)) == ((rt_int)0LL))) {
F->proto_1878 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((rt_r_ichk((*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_500)).result)).kind) != (((rt_int)9LL))) && (!(f_scalar_kind_186(f_base_of_223((*(P1036)rt_nil_check(F->y_500)).result)) || ((*(P1032)rt_nil_check(f_base_of_223((*(P1036)rt_nil_check(F->y_500)).result))).kind == (((rt_int)2LL))))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_499)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a foreign function returns an INT, FLOAT, BOOL or ENUM value", 60); b_; }));
}
f_put_27(g_out_protos_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("extern ", 7), f_ctype_234((*(P1036)rt_nil_check(F->y_500)).result)), rt_str(" ", 1)), F->cn_1880), rt_str("(", 1)), (((P1019)rt_nil_check(F->proto_1878))->all)), rt_str(");", 2)); b_; }));
if ((rt_r_ichk((*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_500)).result)).kind) == (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->cn_1880, rt_str("(", 1)), (((P1019)rt_nil_check(F->args_1879))->all)), rt_str(");", 2)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->cn_1880), rt_str("(", 1)), (((P1019)rt_nil_check(F->args_1879))->all)), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_503(P1026 d_502) {
  struct f_declare_subprogram_503fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_502 = d_502;
f_define_168(f_build_subprogram_505(F->d_502), rt_r_ichk((*(P1026)rt_nil_check(F->d_502)).line));
ret_:
  RT_FPOP();
  return;
}

static P1036 f_build_subprogram_505(P1026 d_504) {
  struct f_build_subprogram_505fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_504 = d_504;
F->y_1881 = NULL;
F->p_1882 = NULL;
F->p_1882 = (*(P1026)rt_nil_check(F->d_504)).a;
F->tail_1883 = NULL;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->d_504)).kind) == (((rt_int)46LL)))) {
F->y_1881 = f_new_sym_181((((rt_int)3LL)), (*(P1026)rt_nil_check(F->d_504)).name);
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->d_504)).kind) == (((rt_int)50LL)))) {
F->y_1881 = f_new_sym_181((((rt_int)9LL)), (*(P1026)rt_nil_check(F->d_504)).name);
} else {
F->y_1881 = f_new_sym_181((((rt_int)4LL)), (*(P1026)rt_nil_check(F->d_504)).name);
}
while ((F->p_1882 != NULL)) {
F->pm_1884 = NULL;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->d_504)).kind) == (((rt_int)50LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->p_1882)).ival) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_504)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a task may not have OUT formal parameters", 41); b_; }));
}
{ R1039 *cell1885 = rt_alloc(sizeof(R1039));
(*cell1885).name = NULL;
(*cell1885).t = NULL;
(*cell1885).c = NULL;
(*cell1885).cfield = NULL;
(*cell1885).next = NULL;
F->pm_1884 = cell1885;
}
(*(P1038)rt_nil_check(F->pm_1884)).name = (*(P1026)rt_nil_check(F->p_1882)).name;
(*(P1038)rt_nil_check(F->pm_1884)).mode = rt_r_ichk((*(P1026)rt_nil_check(F->p_1882)).ival);
(*(P1038)rt_nil_check(F->pm_1884)).t = f_resolve_subtype_268((*(P1026)rt_nil_check(F->p_1882)).a, &(*(P1038)rt_nil_check(F->pm_1884)).c);
(*(P1038)rt_nil_check(F->pm_1884)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1882)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1883 == NULL)) {
(*(P1036)rt_nil_check(F->y_1881)).params = F->pm_1884;
} else {
(*(P1038)rt_nil_check(F->tail_1883)).next = F->pm_1884;
}
F->tail_1883 = F->pm_1884;
F->p_1882 = (*(P1026)rt_nil_check(F->p_1882)).next;
}
(*(P1036)rt_nil_check(F->y_1881)).result = g_ty_void_1115;
if (((*(P1026)rt_nil_check(F->d_504)).b != NULL)) {
F->rc_1886 = NULL;
F->pm_1887 = NULL;
F->pm_1887 = (*(P1036)rt_nil_check(F->y_1881)).params;
F->saved_1888 = NULL;
F->saved_1888 = g_code_1080;
g_code_1080 = f_new_buffer_24();
f_open_scope_177();
while ((F->pm_1887 != NULL)) {
F->z_1889 = NULL;
F->z_1889 = f_new_sym_181((((rt_int)2LL)), (*(P1038)rt_nil_check(F->pm_1887)).name);
(*(P1036)rt_nil_check(F->z_1889)).t = (*(P1038)rt_nil_check(F->pm_1887)).t;
(*(P1036)rt_nil_check(F->z_1889)).c = (*(P1038)rt_nil_check(F->pm_1887)).c;
(*(P1036)rt_nil_check(F->z_1889)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_168(F->z_1889, rt_r_ichk((*(P1026)rt_nil_check(F->d_504)).line));
F->pm_1887 = (*(P1038)rt_nil_check(F->pm_1887)).next;
}
(*(P1036)rt_nil_check(F->y_1881)).result = f_resolve_subtype_268((*(P1026)rt_nil_check(F->d_504)).b, &F->rc_1886);
f_close_scope_178();
g_code_1080 = F->saved_1888;
}
(*(P1036)rt_nil_check(F->y_1881)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_755(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_504)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P1036)rt_nil_check(F->y_1881)).decl = F->d_504;
(*(P1036)rt_nil_check(F->y_1881)).level = rt_r_ichk(g_cur_level_1083);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->d_504)).kind) == (((rt_int)50LL)))) {
f_put_27(g_out_globals_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_1881)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1881;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_508(P1019 pr_506, rstr *p_507) {
  struct f_has_pragmat_508fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_506 = pr_506;
F->p_507 = p_507;
if ((F->pr_506 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1891 = ((rt_int)1LL), hi1892 = rt_sub(((rt_int)(((((P1019)rt_nil_check(F->pr_506))->all)).len)), ((rt_int)(((*F->p_507)).len)));
for (rt_int it1893 = lo1891; it1893 <= hi1892; it1893++) {
F->i_1890 = it1893;
if (((rt_str_eq(rt_str_slice((((P1019)rt_nil_check(F->pr_506))->all), F->i_1890, rt_sub(rt_add(F->i_1890, ((rt_int)(((*F->p_507)).len))), ((rt_int)1LL))), (*F->p_507)) && (rt_r_echk(rt_str_get((((P1019)rt_nil_check(F->pr_506))->all), rt_add(F->i_1890, ((rt_int)(((*F->p_507)).len))))) == 59)) && ((F->i_1890 == ((rt_int)1LL)) || (rt_r_echk(rt_str_get((((P1019)rt_nil_check(F->pr_506))->all), rt_sub(F->i_1890, ((rt_int)1LL)))) == 59)))) {
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

static P1019 f_suppressing_510(P1019 pr_509) {
  struct f_suppressing_510fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_509 = pr_509;
F->r_1894 = NULL;
F->r_1894 = g_suppress_1100;
F->i_1895 = RT_R_IUNDEF;
F->i_1895 = ((rt_int)1LL);
if ((F->pr_509 == NULL)) {
F->result_ = F->r_1894;
goto ret_;
}
if ((F->r_1894 == NULL)) {
F->r_1894 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(rt_r_ichk(F->i_1895), ((rt_int)9LL)) <= ((rt_int)(((((P1019)rt_nil_check(F->pr_509))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P1019)rt_nil_check(F->pr_509))->all), rt_r_ichk(F->i_1895), rt_add(rt_r_ichk(F->i_1895), ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1896 = RT_R_IUNDEF;
F->j_1896 = rt_add(rt_r_ichk(F->i_1895), ((rt_int)9LL));
F->k_1897 = RT_R_IUNDEF;
F->k_1897 = rt_r_ichk(F->j_1896);
while ((rt_r_echk(rt_str_get((((P1019)rt_nil_check(F->pr_509))->all), rt_r_ichk(F->k_1897))) != 41)) {
if ((rt_r_echk(rt_str_get((((P1019)rt_nil_check(F->pr_509))->all), rt_r_ichk(F->k_1897))) == 44)) {
F->r_1894 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_1894))->all), rt_str_slice((((P1019)rt_nil_check(F->pr_509))->all), rt_r_ichk(F->j_1896), rt_sub(rt_r_ichk(F->k_1897), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1896 = rt_add(rt_r_ichk(F->k_1897), ((rt_int)1LL));
}
F->k_1897 = rt_add(rt_r_ichk(F->k_1897), ((rt_int)1LL));
}
F->r_1894 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_1894))->all), rt_str_slice((((P1019)rt_nil_check(F->pr_509))->all), rt_r_ichk(F->j_1896), rt_sub(rt_r_ichk(F->k_1897), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1895 = rt_r_ichk(F->k_1897);
}
F->i_1895 = rt_add(rt_r_ichk(F->i_1895), ((rt_int)1LL));
}
F->result_ = F->r_1894;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_suppressed_512(rstr *x_511) {
  struct f_suppressed_512fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_511 = x_511;
F->w_1898 = rt_str_new(rt_add(((rt_int)(((*F->x_511)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1898, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_511)), rt_str(" ", 1)));
if ((g_suppress_1100 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1900 = ((rt_int)1LL), hi1901 = rt_add(rt_sub(((rt_int)(((((P1019)rt_nil_check(g_suppress_1100))->all)).len)), ((rt_int)((F->w_1898).len))), ((rt_int)1LL));
for (rt_int it1902 = lo1900; it1902 <= hi1901; it1902++) {
F->i_1899 = it1902;
if (rt_str_eq(rt_str_slice((((P1019)rt_nil_check(g_suppress_1100))->all), F->i_1899, rt_sub(rt_add(F->i_1899, ((rt_int)((F->w_1898).len))), ((rt_int)1LL))), F->w_1898)) {
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

static void f_element_514(P1026 e_513) {
  struct f_element_514fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_513 = e_513;
F->saved_1903 = NULL;
F->saved_1903 = g_suppress_1100;
g_suppress_1100 = f_suppressing_510((*(P1026)rt_nil_check(F->e_513)).prags);
f_element1_516(F->e_513);
g_suppress_1100 = F->saved_1903;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_516(P1026 e_515) {
  struct f_element1_516fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_515 = e_515;
F->k_1904 = RT_R_IUNDEF;
F->k_1904 = rt_r_ichk((*(P1026)rt_nil_check(F->e_515)).kind);
if (((rt_r_ichk(F->k_1904) == (((rt_int)47LL))) && (f_lookup_decl_165(F->e_515) != NULL))) {
f_elaborate_pending_444(f_lookup_decl_165(F->e_515));
} else if (((((rt_r_ichk(F->k_1904) == (((rt_int)48LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->e_515)).flag) != ((rt_int)1LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->e_515)).flag) != ((rt_int)3LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->e_515)).eline) == ((rt_int)0LL)))) {
f_gen_expose_473(F->e_515);
} else if (((rt_r_ichk(F->k_1904) == (((rt_int)48LL))) && ((rt_r_ichk((*(P1026)rt_nil_check(F->e_515)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P1026)rt_nil_check(F->e_515)).flag) == ((rt_int)3LL))))) {
f_gen_expose_473(F->e_515);
} else if ((((rt_r_ichk(F->k_1904) == (((rt_int)45LL))) || (rt_r_ichk(F->k_1904) == (((rt_int)46LL)))) || (rt_r_ichk(F->k_1904) == (((rt_int)50LL))))) {
f_subprogram_573(F->e_515);
} else if ((rt_r_ichk(F->k_1904) == (((rt_int)51LL)))) {
F->g_1905 = NULL;
F->g_1905 = f_lookup_decl_165(F->e_515);
if ((F->g_1905 != NULL)) {
{ P1040 cell1906 = rt_alloc(sizeof *cell1906);
rt_int pv1907 = (((rt_int)4093LL));
cell1906->p_n = pv1907;
cell1906->all.lo = ((rt_int)0LL); cell1906->all.hi = pv1907;
cell1906->all.lo2 = cell1906->all.hi2 = 1;
cell1906->all.p = rt_alloc(sizeof(P1036) * (size_t)(RT_CNT(cell1906->all)) + 1);
for (rt_int i1908 = 0; i1908 < (RT_CNT(cell1906->all)); i1908++) {
cell1906->all.p[i1908] = NULL;
}
(*(P1036)rt_nil_check(F->g_1905)).env = cell1906;
}
{ rt_int lo1910 = ((rt_int)0LL), hi1911 = (((rt_int)4093LL));
for (rt_int it1912 = lo1910; it1912 <= hi1911; it1912++) {
F->i_1909 = it1912;
(((P1040)rt_nil_check((*(P1036)rt_nil_check(F->g_1905)).env))->all).p[(rt_index(F->i_1909, (((P1040)rt_nil_check((*(P1036)rt_nil_check(F->g_1905)).env))->all).lo, (((P1040)rt_nil_check((*(P1036)rt_nil_check(F->g_1905)).env))->all).hi) - (((P1040)rt_nil_check((*(P1036)rt_nil_check(F->g_1905)).env))->all).lo)] = ({ A1042 b_ = (((P1040)rt_nil_check(g_table_1066))->all); b_.p[(rt_index(F->i_1909, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((rt_r_ichk(F->k_1904) == (((rt_int)43LL))) && ((*(P1026)rt_nil_check(F->e_515)).c != NULL)) && ((*(P1026)rt_nil_check(F->e_515)).b == NULL))) {
F->c_1913 = NULL;
F->st_1914 = NULL;
F->st_1914 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1026)rt_nil_check(F->e_515)).line));
F->t_1915 = NULL;
(*(P1026)rt_nil_check(F->st_1914)).name = (*(P1026)rt_nil_check(F->e_515)).name;
F->t_1915 = f_resolve_subtype_268(F->st_1914, &F->c_1913);
} else if ((((((rt_r_ichk(F->k_1904) == (((rt_int)49LL))) || (rt_r_ichk(F->k_1904) == (((rt_int)42LL)))) || (rt_r_ichk(F->k_1904) == (((rt_int)43LL)))) || (rt_r_ichk(F->k_1904) == (((rt_int)47LL)))) || (rt_r_ichk(F->k_1904) == (((rt_int)48LL))))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1904) == (((rt_int)44LL)))) {
f_finish_ptr_475((*(P1036)rt_nil_check(f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_515)).name))->all)))).t);
} else if ((rt_r_ichk(F->k_1904) == (((rt_int)40LL)))) {
f_var_decl_524(F->e_515);
} else if (((rt_r_ichk(F->k_1904) == (((rt_int)41LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->e_515)).flag) == ((rt_int)0LL)))) {
f_const_decl_571(F->e_515);
} else if ((rt_r_ichk(F->k_1904) == (((rt_int)41LL)))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1904) == (((rt_int)33LL)))) {
F->t_1916 = NULL;
F->c_1917 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_515)).a, g_ty_bool_1111, &F->t_1916));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1917), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_608(F->e_515);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_519(rstr *name_517, P1032 t_518) {
  struct f_storage_519fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_517 = name_517;
F->t_518 = t_518;
if ((!rt_r_echk(g_in_func_1082))) {
F->g_1918 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_517))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234(F->t_518)), rt_str(" ", 1)), F->g_1918), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_1090, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1918), rt_str(");", 2)); b_; }));
g_st_field_1088 = f_mk_3(&F->g_1918);
F->result_ = F->g_1918;
goto ret_;
}
{
F->f_1919 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_517)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234(F->t_518)), rt_str(" ", 1)), F->f_1919), rt_str(";", 1)); b_; }));
g_st_field_1088 = f_mk_3(&F->f_1919);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1919);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_522(P1036 y_520, rstr *access_521) {
  struct f_bind_522fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_520 = y_520;
F->access_521 = access_521;
if (rt_r_echk(g_in_func_1082)) {
(*(P1036)rt_nil_check(F->y_520)).level = rt_r_ichk(g_cur_level_1083);
(*(P1036)rt_nil_check(F->y_520)).access = g_st_field_1088;
} else {
(*(P1036)rt_nil_check(F->y_520)).level = ((rt_int)0LL);
(*(P1036)rt_nil_check(F->y_520)).access = f_mk_3(&(*F->access_521));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_524(P1026 d_523) {
  struct f_var_decl_524fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_523 = d_523;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->d_523)).ival) == ((rt_int)2LL))) {
f_located_var_526(F->d_523);
} else {
f_var_decl2_565(F->d_523);
}
ret_:
  RT_FPOP();
  return;
}

static void f_located_var_526(P1026 d_525) {
  struct f_located_var_526fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_525 = d_525;
F->c_1920 = NULL;
F->at_1921 = NULL;
F->t_1922 = NULL;
F->t_1922 = f_resolve_subtype_268((*(P1026)rt_nil_check(F->d_525)).a, &F->c_1920);
F->y_1923 = NULL;
F->y_1923 = f_new_sym_181((((rt_int)1LL)), (*(P1026)rt_nil_check(F->d_525)).name);
F->addr_1924 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->d_525)).c, g_ty_int_1110, &F->at_1921));
F->av_1925 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("loc", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_int", 6); b_; })));
F->af_1926 = rt_str_copy((((P1019)rt_nil_check(g_st_field_1088))->all));
f_check_type_232(F->at_1921, g_ty_int_1110, rt_r_ichk((*(P1026)rt_nil_check(F->d_525)).line));
F->c_1920 = f_freeze_209(F->c_1920, F->t_1922);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->av_1925, rt_str(" = ", 3)), F->addr_1924), rt_str(";", 1)); b_; }));
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_1922)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->t_1922)).repn != NULL))) {
F->access_1927 = rt_str_copy(f_storage_519(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_525)).name))->all), F->t_1922));
g_mark_uninit_1102 = 1;
f_init_storage_341(&F->access_1927, F->t_1922, F->c_1920);
g_mark_uninit_1102 = 0;
(*(P1036)rt_nil_check(F->y_1923)).t = F->t_1922;
(*(P1036)rt_nil_check(F->y_1923)).c = F->c_1920;
f_bind_522(F->y_1923, &F->access_1927);
if (rt_r_echk(g_in_func_1082)) {
(*(P1036)rt_nil_check(F->y_1923)).loc = f_mk_3(&F->af_1926);
} else {
(*(P1036)rt_nil_check(F->y_1923)).loc = f_mk_3(&F->av_1925);
}
f_define_168(F->y_1923, rt_r_ichk((*(P1026)rt_nil_check(F->d_525)).line));
if (((*(P1026)rt_nil_check(F->d_525)).b != NULL)) {
F->vt_1928 = NULL;
F->v_1929 = rt_str_copy(f_gexpr_in_808((*(P1026)rt_nil_check(F->d_525)).b, F->t_1922, F->c_1920, &F->vt_1928));
f_check_type_232(F->vt_1928, F->t_1922, rt_r_ichk((*(P1026)rt_nil_check(F->d_525)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(&F->access_1927, F->t_1922, &F->v_1929, F->c_1920); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_529(F->y_1923, 1); b_; }));
}
goto ret_;
}
{
F->pv_1930 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_525)).name))->all)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_ctype_234(F->t_1922), rt_str(" *", 2)); b_; })));
F->pf_1931 = rt_str_copy((((P1019)rt_nil_check(g_st_field_1088))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->pv_1930, rt_str(" = (", 4)), f_ctype_234(F->t_1922)), rt_str(" *)rt_r_mem_at(", 15)), F->av_1925), rt_str(", sizeof(", 9)), f_ctype_234(F->t_1922)), rt_str("));", 3)); b_; }));
(*(P1036)rt_nil_check(F->y_1923)).t = F->t_1922;
(*(P1036)rt_nil_check(F->y_1923)).c = F->c_1920;
if (rt_r_echk(g_in_func_1082)) {
(*(P1036)rt_nil_check(F->y_1923)).level = rt_r_ichk(g_cur_level_1083);
(*(P1036)rt_nil_check(F->y_1923)).access = f_mk_3(&F->pf_1931);
(*(P1036)rt_nil_check(F->y_1923)).byref = 1;
} else {
(*(P1036)rt_nil_check(F->y_1923)).level = ((rt_int)0LL);
(*(P1036)rt_nil_check(F->y_1923)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1930), rt_str(")", 1)); b_; }));
}
g_mark_uninit_1102 = 1;
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1930), rt_str(")", 1)); b_; }), F->t_1922, F->c_1920);
g_mark_uninit_1102 = 0;
f_define_168(F->y_1923, rt_r_ichk((*(P1026)rt_nil_check(F->d_525)).line));
if (((*(P1026)rt_nil_check(F->d_525)).b != NULL)) {
F->vt_1932 = NULL;
F->v_1933 = rt_str_copy(f_gexpr_in_808((*(P1026)rt_nil_check(F->d_525)).b, F->t_1922, F->c_1920, &F->vt_1932));
f_check_type_232(F->vt_1932, F->t_1922, rt_r_ichk((*(P1026)rt_nil_check(F->d_525)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1930), rt_str(")", 1)); b_; }), F->t_1922, &F->v_1933, F->c_1920); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_rep_sync_529(P1036 y_527, int pack_528) {
  struct f_rep_sync_529fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_527 = y_527;
F->pack_528 = pack_528;
F->lv_1934 = rt_str_copy(f_access_of_747(F->y_527));
F->base_1935 = rt_str_copy(f_cbound_access_531(F->y_527));
F->saved_1936 = NULL;
F->saved_1936 = g_psub_1087;
F->p_1937 = NULL;
F->p_1937 = (*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_527)).t)).tparams;
F->r_1938 = NULL;
F->inner_1939 = NULL;
F->inner_1939 = f_mk_3(&F->lv_1934);
if (((*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_527)).t)).tparams != NULL)) {
F->inner_1939 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->lv_1934, rt_str(".all", 4)); b_; }));
}
f_open_scope_177();
while ((F->p_1937 != NULL)) {
F->z_1940 = NULL;
F->z_1940 = f_new_sym_181((((rt_int)2LL)), (*(P1026)rt_nil_check(F->p_1937)).name);
(*(P1036)rt_nil_check(F->z_1940)).t = f_tparam_type_352((*(P1036)rt_nil_check(F->y_527)).t, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1937)).name))->all));
(*(P1036)rt_nil_check(F->z_1940)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->lv_1934), rt_str(".p_", 3)), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_1937)).name))->all))), rt_str(")", 1)); b_; }));
f_define_168(F->z_1940, rt_r_ichk((*(P1036)rt_nil_check(F->y_527)).decl_line));
F->p_1937 = (*(P1026)rt_nil_check(F->p_1937)).next;
}
F->r_1938 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_code_551((*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_527)).t)).under, (*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_527)).t)).elemcons, (*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_527)).t)).repn, &(((P1019)rt_nil_check(F->inner_1939))->all), &F->base_1935, F->pack_528); b_; }));
f_close_scope_178();
g_psub_1087 = F->saved_1936;
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ ", 2), (((P1019)rt_nil_check(F->r_1938))->all)), rt_str(" }", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cbound_access_531(P1036 y_530) {
  struct f_cbound_access_531fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_530 = y_530;
F->c_1941 = NULL;
F->c_1941 = f_new_cons_184();
(*(P1028)rt_nil_check(F->c_1941)).dyn = (rt_r_ichk((*(P1036)rt_nil_check(F->y_530)).level) > ((rt_int)0LL));
(*(P1028)rt_nil_check(F->c_1941)).lvl = rt_r_ichk((*(P1036)rt_nil_check(F->y_530)).level);
F->result_ = f_cbound_191(F->c_1941, &(((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_530)).loc))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_rep_size_535(P1026 items_532, P1032 t_533, P1028 c_534) {
  struct f_rep_size_535fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_532 = items_532;
F->t_533 = t_533;
F->c_534 = c_534;
F->it_1942 = NULL;
F->it_1942 = f_rep_find_538(F->items_532, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SIZE", 4); b_; }));
F->at_1943 = NULL;
if ((F->it_1942 != NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_800((*(P1026)rt_nil_check(F->it_1942)).a, g_ty_int_1110, &F->at_1943)), rt_str(")", 1));
goto ret_;
}
F->result_ = f_itos_7(f_default_bits_544(F->t_533, F->c_534));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_rep_find_538(P1026 items_536, rstr *w_537) {
  struct f_rep_find_538fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_536 = items_536;
F->w_537 = w_537;
F->it_1944 = NULL;
F->it_1944 = F->items_536;
while ((F->it_1944 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->it_1944)).name))->all), (*F->w_537))) {
F->result_ = F->it_1944;
goto ret_;
}
F->it_1944 = (*(P1026)rt_nil_check(F->it_1944)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_rep_comp_541(P1026 items_539, rstr *name_540) {
  struct f_rep_comp_541fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_539 = items_539;
F->name_540 = name_540;
F->r_1945 = NULL;
F->r_1945 = f_rep_find_538(F->items_539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RECORD", 6); b_; }));
F->comp_1946 = NULL;
if ((F->r_1945 == NULL)) {
F->r_1945 = f_rep_find_538(F->items_539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNION", 5); b_; }));
}
if ((F->r_1945 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->comp_1946 = (*(P1026)rt_nil_check(F->r_1945)).c;
while ((F->comp_1946 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->comp_1946)).name))->all), (*F->name_540))) {
F->result_ = (*(P1026)rt_nil_check(F->comp_1946)).a;
goto ret_;
}
F->comp_1946 = (*(P1026)rt_nil_check(F->comp_1946)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_default_bits_544(P1032 t_542, P1028 c_543) {
  struct f_default_bits_544fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_542 = t_542;
F->c_543 = c_543;
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_542)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_542)).kind) == (((rt_int)17LL))))) {
F->f_1947 = NULL;
F->f_1947 = (*(P1032)rt_nil_check(F->t_542)).fields;
F->n_1948 = RT_R_IUNDEF;
F->n_1948 = ((rt_int)0LL);
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_542)).kind) == (((rt_int)17LL)))) {
F->n_1948 = f_needed_bits_321((*(P1032)rt_nil_check(F->t_542)).elem, NULL);
}
while ((F->f_1947 != NULL)) {
F->n_1948 = rt_add(rt_r_ichk(F->n_1948), f_default_bits_544((*(P1034)rt_nil_check(F->f_1947)).t, (*(P1034)rt_nil_check(F->f_1947)).c));
F->f_1947 = (*(P1034)rt_nil_check(F->f_1947)).next;
}
F->result_ = rt_r_ichk(F->n_1948);
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_542)).kind) == (((rt_int)4LL))) && f_same_221(F->t_542, g_ty_ascii_1113))) {
F->result_ = ((rt_int)8LL);
goto ret_;
} else if ((f_needed_bits_321(F->t_542, F->c_543) > ((rt_int)0LL))) {
F->result_ = f_needed_bits_321(F->t_542, F->c_543);
goto ret_;
}
F->result_ = ((rt_int)64LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_rep_code_551(P1032 t_545, P1028 c_546, P1026 items_547, rstr *lval_548, rstr *addr_549, int pack_550) {
  struct f_rep_code_551fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_545 = t_545;
F->c_546 = c_546;
F->items_547 = items_547;
F->lval_548 = lval_548;
F->addr_549 = addr_549;
F->pack_550 = pack_550;
F->size_1949 = rt_str_copy(f_rep_size_535(F->items_547, F->t_545, F->c_546));
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_545)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_545)).kind) == (((rt_int)17LL))))) {
F->f_1950 = NULL;
F->f_1950 = (*(P1032)rt_nil_check(F->t_545)).fields;
F->r_1951 = NULL;
F->r_1951 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->off_1952 = NULL;
F->off_1952 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->i_1953 = RT_R_IUNDEF;
F->i_1953 = ((rt_int)0LL);
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_545)).kind) == (((rt_int)17LL)))) {
F->ti_1954 = NULL;
F->ti_1954 = f_rep_comp_541(F->items_547, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TAG", 3); b_; }));
F->tsize_1955 = NULL;
F->tsize_1955 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(f_needed_bits_321((*(P1032)rt_nil_check(F->t_545)).elem, NULL)); b_; }));
F->toff_1956 = NULL;
F->toff_1956 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
if (((F->ti_1954 != NULL) && (f_rep_find_538(F->ti_1954, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SIZE", 4); b_; })) != NULL))) {
F->tsize_1955 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_size_535(F->ti_1954, (*(P1032)rt_nil_check(F->t_545)).elem, NULL); b_; }));
}
if (((F->ti_1954 != NULL) && (f_rep_find_538(F->ti_1954, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })) != NULL))) {
F->at_1957 = NULL;
F->toff_1956 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_800((*(P1026)rt_nil_check(f_rep_find_538(F->ti_1954, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })))).a, g_ty_int_1110, &F->at_1957)), rt_str(")", 1)); b_; }));
}
if (F->pack_550) {
F->r_1951 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_mem_put(", 13), (*F->addr_549)), rt_str(" + ", 3)), (((P1019)rt_nil_check(F->toff_1956))->all)), rt_str(", ", 2)), (((P1019)rt_nil_check(F->tsize_1955))->all)), rt_str(", (uint64_t)", 12)), (*F->lval_548)), rt_str(".tag);", 6)); b_; }));
} else {
F->r_1951 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_548), rt_str(".tag = (int)rt_r_mem_get(", 25)), (*F->addr_549)), rt_str(" + ", 3)), (((P1019)rt_nil_check(F->toff_1956))->all)), rt_str(", ", 2)), (((P1019)rt_nil_check(F->tsize_1955))->all)), rt_str(", 0);", 5)); b_; }));
}
F->off_1952 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1019)rt_nil_check(F->toff_1956))->all)), rt_str(" + ", 3)), (((P1019)rt_nil_check(F->tsize_1955))->all)), rt_str(")", 1)); b_; }));
}
while ((F->f_1950 != NULL)) {
F->ci_1958 = NULL;
F->ci_1958 = f_rep_comp_541(F->items_547, &(((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_1950)).name))->all));
F->fo_1959 = NULL;
F->fo_1959 = F->off_1952;
F->fl_1960 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_548), rt_str(".", 1)), f_union_part_553(F->t_545)), f_field_c_17(&(((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_1950)).name))->all))));
if (((F->ci_1958 != NULL) && (f_rep_find_538(F->ci_1958, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })) != NULL))) {
F->at_1961 = NULL;
F->fo_1959 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_800((*(P1026)rt_nil_check(f_rep_find_538(F->ci_1958, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })))).a, g_ty_int_1110, &F->at_1961)), rt_str(")", 1)); b_; }));
}
{
F->part_1962 = rt_str_copy(f_rep_code_551((*(P1034)rt_nil_check(F->f_1950)).t, (*(P1034)rt_nil_check(F->f_1950)).c, F->ci_1958, &F->fl_1960, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->addr_549), rt_str(" + ", 3)), (((P1019)rt_nil_check(F->fo_1959))->all)); b_; }), F->pack_550));
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_545)).kind) == (((rt_int)17LL)))) {
F->r_1951 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_1951))->all), rt_str(" if (", 5)), (*F->lval_548)), rt_str(".tag == ", 8)), f_itos_7(rt_r_ichk(F->i_1953))), rt_str(") { ", 4)), F->part_1962), rt_str(" }", 2)); b_; }));
} else {
F->r_1951 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_1951))->all), rt_str(" ", 1)), F->part_1962); b_; }));
}
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_545)).kind) == (((rt_int)7LL)))) {
F->off_1952 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1019)rt_nil_check(F->fo_1959))->all)), rt_str(" + ", 3)), f_rep_size_535(F->ci_1958, (*(P1034)rt_nil_check(F->f_1950)).t, (*(P1034)rt_nil_check(F->f_1950)).c)), rt_str(")", 1)); b_; }));
}
F->i_1953 = rt_add(rt_r_ichk(F->i_1953), ((rt_int)1LL));
F->f_1950 = (*(P1034)rt_nil_check(F->f_1950)).next;
}
F->result_ = (((P1019)rt_nil_check(F->r_1951))->all);
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_545)).kind) == (((rt_int)6LL)))) {
F->ai_1963 = NULL;
F->ai_1963 = f_rep_find_538(F->items_547, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ARRAY", 5); b_; }));
F->ei_1964 = NULL;
if ((F->ai_1963 != NULL)) {
F->ei_1964 = (*(P1026)rt_nil_check(F->ai_1963)).c;
}
{
F->es_1965 = rt_str_copy(f_rep_size_535(F->ei_1964, (*(P1032)rt_nil_check(F->t_545)).elem, (*(P1032)rt_nil_check(F->t_545)).elemcons));
F->iv_1966 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ri", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->iv_1966), rt_str(" = 0; ", 6)), F->iv_1966), rt_str(" < ", 3)), f_acnt_249(F->t_545, &(*F->lval_548))), rt_str("; ", 2)), F->iv_1966), rt_str("++) { ", 6)), f_rep_code_551((*(P1032)rt_nil_check(F->t_545)).elem, (*(P1032)rt_nil_check(F->t_545)).elemcons, F->ei_1964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_548), rt_str(".p[", 3)), F->iv_1966), rt_str("]", 1)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->addr_549), rt_str(" + ", 3)), F->iv_1966), rt_str(" * ", 3)), F->es_1965); b_; }), F->pack_550)), rt_str(" }", 2));
goto ret_;
}
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_545)).kind) == (((rt_int)5LL)))) {
F->iv_1967 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ri", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->iv_1967), rt_str(" = 0; ", 6)), F->iv_1967), rt_str(" < ", 3)), (*F->lval_548)), rt_str(".len; ", 6)), F->iv_1967), rt_str("++) { ", 6)), f_rep_scalar_560(f_str_elem_218(F->t_545), NULL, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_548), rt_str(".p[", 3)), F->iv_1967), rt_str("]", 1)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->addr_549), rt_str(" + ", 3)), F->iv_1967), rt_str(" * 8", 4)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("8", 1); b_; }), F->pack_550)), rt_str(" }", 2));
goto ret_;
}
F->result_ = f_rep_scalar_560(F->t_545, F->c_546, &(*F->lval_548), &(*F->addr_549), &F->size_1949, F->pack_550);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_union_part_553(P1032 t_552) {
  struct f_union_part_553fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_552 = t_552;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_552)).kind) == (((rt_int)17LL)))) {
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

static rstr f_rep_scalar_560(P1032 t_554, P1028 c_555, rstr *lval_556, rstr *addr_557, rstr *size_558, int pack_559) {
  struct f_rep_scalar_560fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_554 = t_554;
F->c_555 = c_555;
F->lval_556 = lval_556;
F->addr_557 = addr_557;
F->size_558 = size_558;
F->pack_559 = pack_559;
F->signed_1968 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->signed_1968, rt_str("0", 1));
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_554)).kind) == (((rt_int)1LL))) && (!(((F->c_555 != NULL) && rt_r_echk((*(P1028)rt_nil_check(F->c_555)).hasm)) && (rt_r_ichk((*(P1028)rt_nil_check(F->c_555)).mlo) >= ((rt_int)0LL)))))) {
rt_str_assign(&F->signed_1968, rt_str("1", 1));
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_554)).kind) == (((rt_int)3LL)))) {
if (F->pack_559) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_mem_putf(", 14), (*F->addr_557)), rt_str(", ", 2)), (*F->size_558)), rt_str(", ", 2)), (*F->lval_556)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_556), rt_str(" = rt_r_mem_getf(", 17)), (*F->addr_557)), rt_str(", ", 2)), (*F->size_558)), rt_str(");", 2));
goto ret_;
} else if (F->pack_559) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (!rt_r_undef_", 16), f_kind_name_228(f_base_of_223(F->t_554))), rt_str("(", 1)), (*F->lval_556)), rt_str(")) rt_r_mem_put(", 16)), (*F->addr_557)), rt_str(", ", 2)), (*F->size_558)), rt_str(", rt_r_fits((rt_int)(", 21)), (*F->lval_556)), rt_str("), ", 3)), (*F->size_558)), rt_str(", ", 2)), F->signed_1968), rt_str("));", 3));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_556), rt_str(" = rt_r_mem_get(", 16)), (*F->addr_557)), rt_str(", ", 2)), (*F->size_558)), rt_str(", ", 2)), F->signed_1968), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_max_range_563(P1032 t_561, P1028 c_562) {
  struct f_max_range_563fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_561 = t_561;
F->c_562 = c_562;
if ((F->c_562 == NULL)) {
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_561)).kind) == (((rt_int)3LL))) && ((*(P1028)rt_nil_check(F->c_562)).prec != NULL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_maxprec(", 13), (((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_562)).prec))->all)), rt_str(");", 2)); b_; }));
}
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_561)).kind) == (((rt_int)3LL))) && ((*(P1028)rt_nil_check(F->c_562)).lo != NULL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_maxrange_f(", 16), f_clo_193(F->c_562)), rt_str(", ", 2)), f_chi_195(F->c_562)), rt_str(");", 2)); b_; }));
} else if ((((rt_r_ichk((*(P1032)rt_nil_check(F->t_561)).kind) == (((rt_int)1LL))) && ((*(P1028)rt_nil_check(F->c_562)).lo != NULL)) && (!rt_r_echk((*(P1028)rt_nil_check(F->c_562)).hasm)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_maxrange_i(", 16), f_clo_193(F->c_562)), rt_str(", ", 2)), f_chi_195(F->c_562)), rt_str(");", 2)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl2_565(P1026 d_564) {
  struct f_var_decl2_565fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_564 = d_564;
F->c_1969 = NULL;
F->t_1970 = NULL;
F->t_1970 = f_resolve_subtype_268((*(P1026)rt_nil_check(F->d_564)).a, &F->c_1969);
F->y_1971 = NULL;
F->y_1971 = f_new_sym_181((((rt_int)1LL)), (*(P1026)rt_nil_check(F->d_564)).name);
F->access_1972 = rt_str_copy(f_storage_519(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_564)).name))->all), F->t_1970));
F->c_1969 = f_freeze_209(F->c_1969, F->t_1970);
f_max_range_563(F->t_1970, F->c_1969);
if ((((rt_r_ichk((*(P1032)rt_nil_check(F->t_1970)).kind) == (((rt_int)8LL))) && (F->c_1969 != NULL)) && ((*(P1028)rt_nil_check(F->c_1969)).args != NULL))) {
F->c_1969 = f_freeze_args_491(F->c_1969, F->t_1970, rt_r_ichk((*(P1026)rt_nil_check(F->d_564)).line));
}
g_mark_uninit_1102 = 1;
f_init_storage_341(&F->access_1972, F->t_1970, F->c_1969);
g_mark_uninit_1102 = 0;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->d_564)).ival) == ((rt_int)1LL))) {
F->it_1973 = NULL;
F->n_1974 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->d_564)).c, g_ty_int_1110, &F->it_1973));
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_1970)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->d_564)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_221((*(P1032)rt_nil_check(F->t_1970)).elem, g_ty_ascii_1113)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1972), rt_str(", ", 2)), F->n_1974), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1972), rt_str(", ", 2)), F->n_1974), rt_str(", 0);", 5)); b_; }));
}
}
if (((*(P1026)rt_nil_check(F->d_564)).b != NULL)) {
F->vt_1975 = NULL;
F->v_1976 = rt_str_copy(f_gexpr_in_808((*(P1026)rt_nil_check(F->d_564)).b, F->t_1970, F->c_1969, &F->vt_1975));
f_check_type_232(F->vt_1975, F->t_1970, rt_r_ichk((*(P1026)rt_nil_check(F->d_564)).line));
f_ptr_subtype_check_495(F->t_1970, F->c_1969, (*(P1026)rt_nil_check(F->d_564)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(&F->access_1972, F->t_1970, &F->v_1976, F->c_1969); b_; }));
}
(*(P1036)rt_nil_check(F->y_1971)).t = F->t_1970;
(*(P1036)rt_nil_check(F->y_1971)).c = F->c_1969;
f_bind_522(F->y_1971, &F->access_1972);
f_define_168(F->y_1971, rt_r_ichk((*(P1026)rt_nil_check(F->d_564)).line));
if (f_needs_fin_346(F->t_1970)) {
f_open_fin_567(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_349(&F->access_1972, F->t_1970); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_567(rstr *fc_566) {
  struct f_open_fin_567fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_566 = fc_566;
F->f_1977 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1978 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1977), rt_str("; if (RT_TRY(", 13)), F->f_1977), rt_str(")) {", 4)); b_; }));
f_push_cleanup_605(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1977), rt_str("); ", 3)), (*F->fc_566)); b_; }));
{ R1031 *cell1979 = rt_alloc(sizeof(R1031));
(*cell1979).s = NULL;
(*cell1979).next = NULL;
F->l_1978 = cell1979;
}
(*(P1030)rt_nil_check(F->l_1978)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1977), rt_str("); ", 3)), (*F->fc_566)), rt_str(" } else { RT_POP(", 17)), F->f_1977), rt_str("); ", 3)), (*F->fc_566)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P1030)rt_nil_check(F->l_1978)).next = g_fins_1092;
g_fins_1092 = F->l_1978;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_569(P1030 saved_568) {
  struct f_close_fins_569fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_568 = saved_568;
while (((g_fins_1092 != F->saved_568) && (g_fins_1092 != NULL))) {
f_emit_29(&(((P1019)rt_nil_check((*(P1030)rt_nil_check(g_fins_1092)).s))->all));
f_pop_cleanup_606();
g_fins_1092 = (*(P1030)rt_nil_check(g_fins_1092)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_571(P1026 d_570) {
  struct f_const_decl_571fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_570 = d_570;
F->c_1980 = NULL;
F->c_1980 = f_new_cons_184();
F->t_1981 = NULL;
F->vt_1982 = NULL;
F->y_1983 = NULL;
F->y_1983 = f_new_sym_181((((rt_int)2LL)), (*(P1026)rt_nil_check(F->d_570)).name);
F->ok_1984 = RT_R_EUNDEF;
if (((*(P1026)rt_nil_check(F->d_570)).a != NULL)) {
F->t_1981 = f_resolve_subtype_268((*(P1026)rt_nil_check(F->d_570)).a, &F->c_1980);
}
{
F->v_1985 = rt_str_copy(f_gexpr_in_808((*(P1026)rt_nil_check(F->d_570)).b, F->t_1981, F->c_1980, &F->vt_1982));
if ((F->t_1981 != NULL)) {
f_check_type_232(F->vt_1982, F->t_1981, rt_r_ichk((*(P1026)rt_nil_check(F->d_570)).line));
} else {
F->t_1981 = F->vt_1982;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_1981)).kind) == (((rt_int)1LL)))) {
(*(P1036)rt_nil_check(F->y_1983)).mvalue = f_manifest_366((*(P1026)rt_nil_check(F->d_570)).b, &F->ok_1984);
(*(P1036)rt_nil_check(F->y_1983)).hasmv = rt_r_echk(F->ok_1984);
}
{
F->access_1986 = rt_str_copy(f_storage_519(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_570)).name))->all), F->t_1981));
if (((*(P1032)rt_nil_check(F->t_1981)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1032)rt_nil_check(F->t_1981)).initp, &F->access_1986); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1986, rt_str(" = ", 3)), f_checked_213(F->t_1981, F->c_1980, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_414(F->t_1981, &F->v_1985); b_; }))), rt_str(";", 1)); b_; }));
f_bind_522(F->y_1983, &F->access_1986);
if (f_needs_fin_346(F->t_1981)) {
f_open_fin_567(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_349(&F->access_1986, F->t_1981); b_; }));
}
}
}
(*(P1036)rt_nil_check(F->y_1983)).t = F->t_1981;
(*(P1036)rt_nil_check(F->y_1983)).c = F->c_1980;
(*(P1036)rt_nil_check(F->y_1983)).ro_flag = 1;
f_define_168(F->y_1983, rt_r_ichk((*(P1026)rt_nil_check(F->d_570)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_573(P1026 d_572) {
  struct f_subprogram_573fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_572 = d_572;
f_gen_subprogram_576(F->d_572, f_lookup_decl_165(F->d_572));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_576(P1026 d_574, P1036 y_575) {
  struct f_gen_subprogram_576fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_574 = d_574;
F->y_575 = y_575;
F->saved_code_1987 = NULL;
F->saved_code_1987 = g_code_1080;
F->saved_fields_1988 = NULL;
F->saved_fields_1988 = g_fields_buf_1081;
F->saved_in_1989 = RT_R_EUNDEF;
F->saved_in_1989 = rt_r_echk(g_in_func_1082);
F->saved_sym_1990 = NULL;
F->saved_sym_1990 = g_func_sym_1094;
F->saved_exits_1991 = NULL;
F->saved_exits_1991 = g_exits_1103;
F->saved_gotos_1992 = NULL;
F->saved_gotos_1992 = g_gotos_1104;
F->saved_frames_1993 = RT_R_IUNDEF;
F->saved_frames_1993 = rt_r_ichk(g_frames_1105);
F->args_1994 = NULL;
F->args_1994 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1995 = NULL;
F->pm_1995 = (*(P1036)rt_nil_check(F->y_575)).params;
F->saved_handlers_1996 = NULL;
F->saved_handlers_1996 = g_handlers_1106;
F->saved_cleanups_1997 = NULL;
F->saved_cleanups_1997 = g_cleanups_1107;
F->ctx_1998 = NULL;
F->head_1999 = NULL;
F->frame_2000 = NULL;
F->frame_2000 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_575)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_2001 = NULL;
F->copy_back_2002 = NULL;
F->copy_back_2002 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_2003 = NULL;
F->pfin_2003 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_2004 = NULL;
F->saved_fins_2004 = g_fins_1092;
F->saved_rc_2005 = NULL;
F->saved_rc_2005 = g_func_rc_1095;
F->saved_ret_2006 = NULL;
F->saved_ret_2006 = g_cap_ret_1096;
F->saved_rflag_2007 = NULL;
F->saved_rflag_2007 = g_cap_rflag_1097;
F->pn_2008 = NULL;
F->pn_2008 = (*(P1026)rt_nil_check(F->d_574)).a;
F->nonrec_end_2009 = NULL;
F->has_pfin_2010 = RT_R_EUNDEF;
if (rt_r_echk(g_in_func_1082)) {
F->parent_2001 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1036)rt_nil_check(g_func_sym_1094)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_1092 = NULL;
g_func_rc_1095 = NULL;
g_cap_ret_1096 = NULL;
g_cap_rflag_1097 = NULL;
g_code_1080 = f_new_buffer_24();
g_fields_buf_1081 = f_new_buffer_24();
g_in_func_1082 = 1;
g_func_sym_1094 = F->y_575;
g_exits_1103 = NULL;
g_gotos_1104 = NULL;
g_frames_1105 = ((rt_int)0LL);
g_handlers_1106 = NULL;
g_cleanups_1107 = NULL;
g_cur_level_1083 = rt_add(rt_r_ichk(g_cur_level_1083), ((rt_int)1LL));
f_open_scope_177();
{ R1044 *cell2011 = rt_alloc(sizeof(R1044));
(*cell2011).imps = NULL;
(*cell2011).next = NULL;
F->ctx_1998 = cell2011;
}
(*(P1043)rt_nil_check(F->ctx_1998)).depth = rt_r_ichk(g_depth_1069);
(*(P1043)rt_nil_check(F->ctx_1998)).imps = (*(P1026)rt_nil_check(F->d_574)).d;
(*(P1043)rt_nil_check(F->ctx_1998)).all_imp = (rt_r_ichk((*(P1026)rt_nil_check(F->d_574)).flag) >= ((rt_int)2LL));
(*(P1043)rt_nil_check(F->ctx_1998)).next = g_fctx_1084;
g_fctx_1084 = F->ctx_1998;
if ((F->parent_2001 != NULL)) {
f_put_27(g_fields_buf_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P1019)rt_nil_check(F->parent_2001))->all)), rt_str(" *up;", 5)); b_; }));
if ((rt_r_ichk((*(P1036)rt_nil_check(F->y_575)).kind) != (((rt_int)9LL)))) {
F->args_1994 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1019)rt_nil_check(F->parent_2001))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1995 != NULL)) {
F->ct_2012 = rt_str_copy(f_ctype_234((*(P1038)rt_nil_check(F->pm_1995)).t));
F->f_2013 = rt_str_copy((((P1019)rt_nil_check((*(P1038)rt_nil_check(F->pm_1995)).cfield))->all));
F->p_2014 = NULL;
F->pc_2015 = NULL;
F->pc_2015 = (*(P1038)rt_nil_check(F->pm_1995)).c;
F->ac_2016 = NULL;
if ((((rt_int)(((((P1019)rt_nil_check(F->args_1994))->all)).len)) > ((rt_int)0LL))) {
F->args_1994 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->args_1994))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_186((*(P1038)rt_nil_check(F->pm_1995)).t)) {
F->fc_2017 = NULL;
F->ft_2018 = NULL;
F->ft_2018 = f_resolve_subtype_268((*(P1026)rt_nil_check(F->pn_2008)).a, &F->fc_2017);
F->pc_2015 = f_freeze_209(F->fc_2017, (*(P1038)rt_nil_check(F->pm_1995)).t);
}
if ((rt_r_ichk((*(P1038)rt_nil_check(F->pm_1995)).mode) == (((rt_int)1LL)))) {
F->p_2014 = f_new_sym_181((((rt_int)2LL)), (*(P1038)rt_nil_check(F->pm_1995)).name);
f_put_27(g_fields_buf_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_2012), rt_str(" ", 1)), F->f_2013), rt_str(";", 1)); b_; }));
F->args_1994 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->args_1994))->all), F->ct_2012), rt_str(" ", 1)), F->f_2013); b_; }));
(*(P1036)rt_nil_check(F->p_2014)).access = f_mk_3(&F->f_2013);
if ((rt_r_ichk((*(P1036)rt_nil_check(F->y_575)).kind) != (((rt_int)9LL)))) {
if (((*(P1032)rt_nil_check((*(P1038)rt_nil_check(F->pm_1995)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1032)rt_nil_check((*(P1038)rt_nil_check(F->pm_1995)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_2013); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2013), rt_str(" = ", 3)), f_checked_213((*(P1038)rt_nil_check(F->pm_1995)).t, F->pc_2015, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_414((*(P1038)rt_nil_check(F->pm_1995)).t, &F->f_2013); b_; }))), rt_str(";", 1)); b_; }));
if ((((rt_r_ichk((*(P1032)rt_nil_check((*(P1038)rt_nil_check(F->pm_1995)).t)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check((*(P1038)rt_nil_check(F->pm_1995)).t)).assignp != NULL)) && ((*(P1032)rt_nil_check((*(P1038)rt_nil_check(F->pm_1995)).t)).assignp != F->y_575))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_user_call2_400((*(P1032)rt_nil_check((*(P1038)rt_nil_check(F->pm_1995)).t)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_2013); b_; }), 1, &F->f_2013, 0), rt_str(";", 1)); b_; }));
}
if (f_needs_fin_346((*(P1038)rt_nil_check(F->pm_1995)).t)) {
F->pfin_2003 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->pfin_2003))->all), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_2013); b_; }), (*(P1038)rt_nil_check(F->pm_1995)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_2014 = f_new_sym_181((((rt_int)1LL)), (*(P1038)rt_nil_check(F->pm_1995)).name);
f_put_27(g_fields_buf_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_2012), rt_str(" *", 2)), F->f_2013), rt_str(";", 1)); b_; }));
F->args_1994 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->args_1994))->all), F->ct_2012), rt_str(" *", 2)), F->f_2013); b_; }));
(*(P1036)rt_nil_check(F->p_2014)).access = f_mk_3(&F->f_2013);
(*(P1036)rt_nil_check(F->p_2014)).byref = 1;
if ((rt_r_ichk((*(P1036)rt_nil_check(F->y_575)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2013), rt_str(" = ", 3)), F->f_2013), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_186((*(P1038)rt_nil_check(F->pm_1995)).t)) {
F->bt_2019 = rt_str_copy(f_bound_ctype_188((*(P1038)rt_nil_check(F->pm_1995)).t));
f_put_27(g_fields_buf_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_2019), rt_str(" ", 1)), F->f_2013), rt_str("lo, ", 4)), F->f_2013), rt_str("hi;", 3)); b_; }));
F->args_1994 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->args_1994))->all), rt_str(", ", 2)), F->bt_2019), rt_str(" ", 1)), F->f_2013), rt_str("lo, ", 4)), F->bt_2019), rt_str(" ", 1)), F->f_2013), rt_str("hi", 2)); b_; }));
if ((rt_r_ichk((*(P1036)rt_nil_check(F->y_575)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2013), rt_str("lo = ", 5)), F->f_2013), rt_str("lo; F->", 7)), F->f_2013), rt_str("hi = ", 5)), F->f_2013), rt_str("hi;", 3)); b_; }));
}
F->ac_2016 = f_new_cons_184();
(*(P1028)rt_nil_check(F->ac_2016)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_2013, rt_str("lo", 2)); b_; }));
(*(P1028)rt_nil_check(F->ac_2016)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_2013, rt_str("hi", 2)); b_; }));
(*(P1028)rt_nil_check(F->ac_2016)).dyn = 1;
(*(P1028)rt_nil_check(F->ac_2016)).lvl = rt_r_ichk(g_cur_level_1083);
if (((F->pc_2015 == NULL) || ((*(P1028)rt_nil_check(F->pc_2015)).lo == NULL))) {
F->pc_2015 = F->ac_2016;
} else if ((rt_r_ichk((*(P1038)rt_nil_check(F->pm_1995)).mode) != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_2013), rt_str("lo <= F->", 9)), F->f_2013), rt_str("hi && (F->", 10)), F->f_2013), rt_str("lo != ", 6)), f_sub_lo_198((*(P1038)rt_nil_check(F->pm_1995)).t, F->pc_2015)), rt_str(" || F->", 7)), F->f_2013), rt_str("hi != ", 6)), f_sub_hi_201((*(P1038)rt_nil_check(F->pm_1995)).t, F->pc_2015)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if (((rt_r_ichk((*(P1038)rt_nil_check(F->pm_1995)).mode) == (((rt_int)3LL))) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_575)).kind) != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_2012), rt_str(" ", 1)), F->f_2013), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2013), rt_str("v = ", 4)), f_copy_code_414((*(P1038)rt_nil_check(F->pm_1995)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_2013); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P1032)rt_nil_check((*(P1038)rt_nil_check(F->pm_1995)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1032)rt_nil_check((*(P1038)rt_nil_check(F->pm_1995)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2013), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_2016 == NULL)) {
F->ac_2016 = (*(P1038)rt_nil_check(F->pm_1995)).c;
}
if ((!rt_str_eq(f_uninit_value_360(f_base_of_223((*(P1038)rt_nil_check(F->pm_1995)).t)), rt_str("", 0)))) {
F->copy_back_2002 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->copy_back_2002))->all), rt_str("  if (!rt_r_undef_", 18)), f_kind_name_228(f_base_of_223((*(P1038)rt_nil_check(F->pm_1995)).t))), rt_str("(F->", 4)), F->f_2013), rt_str("v)) ", 4)), f_assign_code_411(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_2013), rt_str(")", 1)); b_; }), (*(P1038)rt_nil_check(F->pm_1995)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2013), rt_str("v", 1)); b_; }), F->ac_2016)); b_; }));
} else {
F->copy_back_2002 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->copy_back_2002))->all), rt_str("  ", 2)), f_assign_code_411(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_2013), rt_str(")", 1)); b_; }), (*(P1038)rt_nil_check(F->pm_1995)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2013), rt_str("v", 1)); b_; }), F->ac_2016)); b_; }));
}
if (f_needs_fin_346((*(P1038)rt_nil_check(F->pm_1995)).t)) {
F->pfin_2003 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->pfin_2003))->all), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2013), rt_str("v", 1)); b_; }), (*(P1038)rt_nil_check(F->pm_1995)).t)), rt_str(" ", 1)); b_; }));
}
(*(P1036)rt_nil_check(F->p_2014)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_2013, rt_str("v", 1)); b_; }));
(*(P1036)rt_nil_check(F->p_2014)).byref = 0;
}
}
(*(P1036)rt_nil_check(F->p_2014)).t = (*(P1038)rt_nil_check(F->pm_1995)).t;
(*(P1036)rt_nil_check(F->p_2014)).c = F->pc_2015;
(*(P1036)rt_nil_check(F->p_2014)).level = rt_r_ichk(g_cur_level_1083);
(*(P1036)rt_nil_check(F->p_2014)).ro_flag = ((rt_r_ichk((*(P1038)rt_nil_check(F->pm_1995)).mode) == (((rt_int)1LL))) || (rt_r_ichk((*(P1038)rt_nil_check(F->pm_1995)).mode) == (((rt_int)4LL))));
f_define_168(F->p_2014, rt_r_ichk((*(P1026)rt_nil_check(F->d_574)).line));
F->pm_1995 = (*(P1038)rt_nil_check(F->pm_1995)).next;
F->pn_2008 = (*(P1026)rt_nil_check(F->pn_2008)).next;
}
if ((rt_r_ichk((*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_575)).result)).kind) != (((rt_int)9LL)))) {
if (((*(P1026)rt_nil_check(F->d_574)).b != NULL)) {
F->rc_2020 = NULL;
F->rt_2021 = NULL;
F->rt_2021 = f_resolve_subtype_268((*(P1026)rt_nil_check(F->d_574)).b, &F->rc_2020);
g_func_rc_1095 = f_freeze_209(F->rc_2020, (*(P1036)rt_nil_check(F->y_575)).result);
}
f_put_27(g_fields_buf_1081, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234((*(P1036)rt_nil_check(F->y_575)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_575)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_575)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_2010 = (((rt_int)(((((P1019)rt_nil_check(F->pfin_2003))->all)).len)) > ((rt_int)0LL));
if (rt_r_echk(F->has_pfin_2010)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_605(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_508((*(P1026)rt_nil_check(F->d_574)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_508((*(P1026)rt_nil_check(F->d_574)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_2022 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_2023 = NULL;
F->leave_2023 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_2022), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_2022), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_2022), rt_str(", ", 2)), f_bool_text_382(f_has_pragmat_508((*(P1026)rt_nil_check(F->d_574)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_382(f_has_pragmat_508((*(P1026)rt_nil_check(F->d_574)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->d_574)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_605(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_2002 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->copy_back_2002))->all), rt_str("  ", 2)), (((P1019)rt_nil_check(F->leave_2023))->all)); b_; }));
F->nonrec_end_2009 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P1019)rt_nil_check(F->leave_2023))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
if (f_has_pragmat_508((*(P1026)rt_nil_check(F->d_574)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOREIGN", 7); b_; }))) {
f_foreign_body_501(F->d_574, F->y_575);
}
f_declare_labels_586((*(P1026)rt_nil_check(F->d_574)).c);
f_declare_body_430((*(P1026)rt_nil_check(F->d_574)).c);
{
F->xu_2024 = rt_str_copy(f_open_unhandled_599((*(P1026)rt_nil_check(F->d_574)).c));
f_body_elements_595((*(P1026)rt_nil_check(F->d_574)).c);
f_close_fins_569(NULL);
f_close_unhandled_601(&F->xu_2024);
}
if ((F->nonrec_end_2009 != NULL)) {
f_emit_29(&(((P1019)rt_nil_check(F->nonrec_end_2009))->all));
f_pop_cleanup_606();
}
if (rt_r_echk(F->has_pfin_2010)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P1019)rt_nil_check(F->pfin_2003))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_606();
F->copy_back_2002 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->copy_back_2002))->all), rt_str("  ", 2)), (((P1019)rt_nil_check(F->pfin_2003))->all)); b_; }));
}
f_close_scope_178();
g_fctx_1084 = (*(P1043)rt_nil_check(g_fctx_1084)).next;
g_cur_level_1083 = rt_sub(rt_r_ichk(g_cur_level_1083), ((rt_int)1LL));
if (((((rt_int)(((((P1019)rt_nil_check(F->args_1994))->all)).len)) == ((rt_int)0LL)) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_575)).kind) == (((rt_int)9LL))))) {
F->args_1994 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if ((rt_r_ichk((*(P1036)rt_nil_check(F->y_575)).kind) == (((rt_int)9LL)))) {
F->args_1994 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1999 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234((*(P1036)rt_nil_check(F->y_575)).result)), rt_str(" ", 1)), (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_575)).cname))->all)), rt_str("(", 1)), (((P1019)rt_nil_check(F->args_1994))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->head_1999))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->head_1999))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_1089, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1019)rt_nil_check(F->frame_2000))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_1089, g_fields_buf_1081);
f_put_27(g_out_frames_1089, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if ((rt_r_ichk((*(P1036)rt_nil_check(F->y_575)).kind) == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1019)rt_nil_check(F->frame_2000))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1019)rt_nil_check(F->frame_2000))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_1077, g_code_1080);
if ((rt_r_ichk((*(P1032)rt_nil_check((*(P1036)rt_nil_check(F->y_575)).result)).kind) != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P1019)rt_nil_check(F->copy_back_2002))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_1077, &(((P1019)rt_nil_check(F->copy_back_2002))->all));
}
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P1019)rt_nil_check(F->copy_back_2002))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_1077, &(((P1019)rt_nil_check(F->copy_back_2002))->all));
}
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_1080 = F->saved_code_1987;
g_fields_buf_1081 = F->saved_fields_1988;
g_in_func_1082 = rt_r_echk(F->saved_in_1989);
g_func_sym_1094 = F->saved_sym_1990;
g_exits_1103 = F->saved_exits_1991;
g_gotos_1104 = F->saved_gotos_1992;
g_frames_1105 = rt_r_ichk(F->saved_frames_1993);
g_handlers_1106 = F->saved_handlers_1996;
g_cleanups_1107 = F->saved_cleanups_1997;
g_fins_1092 = F->saved_fins_2004;
g_func_rc_1095 = F->saved_rc_2005;
g_cap_ret_1096 = F->saved_ret_2006;
g_cap_rflag_1097 = F->saved_rflag_2007;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_578(P1026 d_577) {
  struct f_waits_of_578fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_577 = d_577;
F->w_2025 = NULL;
F->w_2025 = g_cap_waits_1086;
while ((F->w_2025 != NULL)) {
if (((*(P1055)rt_nil_check(F->w_2025)).d == F->d_577)) {
F->result_ = (((P1019)rt_nil_check((*(P1055)rt_nil_check(F->w_2025)).w))->all);
goto ret_;
}
F->w_2025 = (*(P1055)rt_nil_check(F->w_2025)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_580(P1026 elems_579) {
  struct f_task_waits_580fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_579 = elems_579;
F->e_2026 = NULL;
F->e_2026 = F->elems_579;
F->r_2027 = NULL;
F->r_2027 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_2026 != NULL)) {
if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_2026)).kind) == (((rt_int)50LL)))) {
F->r_2027 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_2027))->all), rt_str(" rt_await_decl(&", 16)), (((P1019)rt_nil_check((*(P1036)rt_nil_check(f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_2026)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->e_2026)).kind) == (((rt_int)47LL))) || ((rt_r_ichk((*(P1026)rt_nil_check(F->e_2026)).kind) == (((rt_int)48LL))) && ((rt_r_ichk((*(P1026)rt_nil_check(F->e_2026)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P1026)rt_nil_check(F->e_2026)).flag) == ((rt_int)3LL)))))) {
F->r_2027 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_2027))->all), f_waits_of_578(F->e_2026)); b_; }));
}
F->e_2026 = (*(P1026)rt_nil_check(F->e_2026)).next;
}
F->result_ = (((P1019)rt_nil_check(F->r_2027))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_582(P1026 elems_581) {
  struct f_await_tasks_582fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_581 = elems_581;
F->w_2028 = rt_str_copy(f_task_waits_580(F->elems_581));
if ((((rt_int)((F->w_2028).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2028);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_584(P1026 elems_583) {
  struct f_capsule_elements_584fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_583 = elems_583;
F->e_2029 = NULL;
F->e_2029 = F->elems_583;
while ((F->e_2029 != NULL)) {
if (((rt_r_ichk((*(P1026)rt_nil_check(F->e_2029)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->e_2029)).kind) <= (((rt_int)36LL))))) {
f_start_labels_587();
}
f_element_514(F->e_2029);
F->e_2029 = (*(P1026)rt_nil_check(F->e_2029)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_586(P1026 elems_585) {
  struct f_declare_labels_586fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_585 = elems_585;
F->e_2030 = NULL;
F->e_2030 = F->elems_585;
while ((F->e_2030 != NULL)) {
F->l_2031 = NULL;
F->l_2031 = (*(P1026)rt_nil_check(F->e_2030)).labels;
while ((F->l_2031 != NULL)) {
F->x_2032 = NULL;
F->x_2032 = g_gotos_1104;
while (((F->x_2032 != NULL) && (rt_r_ichk((*(P1051)rt_nil_check(F->x_2032)).depth) == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1051)rt_nil_check(F->x_2032)).match))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->l_2031)).name))->all))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->l_2031)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->l_2031)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_2032 = (*(P1051)rt_nil_check(F->x_2032)).next;
}
{ R1052 *cell2033 = rt_alloc(sizeof(R1052));
(*cell2033).match = NULL;
(*cell2033).label = NULL;
(*cell2033).next = NULL;
F->x_2032 = cell2033;
}
(*(P1051)rt_nil_check(F->x_2032)).match = (*(P1026)rt_nil_check(F->l_2031)).name;
(*(P1051)rt_nil_check(F->x_2032)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P1051)rt_nil_check(F->x_2032)).depth = rt_neg(((rt_int)1LL));
(*(P1051)rt_nil_check(F->x_2032)).next = g_gotos_1104;
g_gotos_1104 = F->x_2032;
F->l_2031 = (*(P1026)rt_nil_check(F->l_2031)).next;
}
F->e_2030 = (*(P1026)rt_nil_check(F->e_2030)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_587(void) {
  struct f_start_labels_587fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_2034 = NULL;
F->x_2034 = g_gotos_1104;
while (((F->x_2034 != NULL) && (rt_r_ichk((*(P1051)rt_nil_check(F->x_2034)).depth) == rt_neg(((rt_int)1LL))))) {
(*(P1051)rt_nil_check(F->x_2034)).depth = rt_r_ichk(g_frames_1105);
F->x_2034 = (*(P1051)rt_nil_check(F->x_2034)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P1051 f_goto_label_589(rstr *name_588) {
  struct f_goto_label_589fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_588 = name_588;
F->x_2035 = NULL;
F->x_2035 = g_gotos_1104;
while ((F->x_2035 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1051)rt_nil_check(F->x_2035)).match))->all), (*F->name_588))) {
F->result_ = F->x_2035;
goto ret_;
}
F->x_2035 = (*(P1051)rt_nil_check(F->x_2035)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_591(P1026 e_590) {
  struct f_has_return_591fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_590 = e_590;
F->x_2036 = NULL;
F->x_2036 = F->e_590;
while ((F->x_2036 != NULL)) {
if ((rt_r_ichk((*(P1026)rt_nil_check(F->x_2036)).kind) == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if ((((((rt_r_ichk((*(P1026)rt_nil_check(F->x_2036)).kind) != (((rt_int)45LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->x_2036)).kind) != (((rt_int)46LL)))) && (rt_r_ichk((*(P1026)rt_nil_check(F->x_2036)).kind) != (((rt_int)50LL)))) && (rt_r_ichk((*(P1026)rt_nil_check(F->x_2036)).kind) != (((rt_int)47LL)))) && (rt_r_ichk((*(P1026)rt_nil_check(F->x_2036)).kind) != (((rt_int)51LL))))) {
if ((((((*(P1026)rt_nil_check(F->x_2036)).a != NULL) && f_has_return_591((*(P1026)rt_nil_check(F->x_2036)).a)) || (((*(P1026)rt_nil_check(F->x_2036)).b != NULL) && f_has_return_591((*(P1026)rt_nil_check(F->x_2036)).b))) || (((*(P1026)rt_nil_check(F->x_2036)).c != NULL) && f_has_return_591((*(P1026)rt_nil_check(F->x_2036)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_2036 = (*(P1026)rt_nil_check(F->x_2036)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_593(P1026 elems_592) {
  struct f_capsule_body_593fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_592 = elems_592;
F->saved_ret_2037 = NULL;
F->saved_ret_2037 = g_cap_ret_1096;
F->saved_flag_2038 = NULL;
F->saved_flag_2038 = g_cap_rflag_1097;
F->saved_frames_2039 = RT_R_IUNDEF;
F->saved_frames_2039 = rt_r_ichk(g_ret_frames_1098);
F->e_2040 = NULL;
F->e_2040 = F->elems_592;
if ((!f_has_return_591(F->elems_592))) {
g_cap_ret_1096 = NULL;
g_cap_rflag_1097 = NULL;
f_capsule_elements_584(F->elems_592);
} else {
g_cap_rflag_1097 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(g_cap_rflag_1097))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_2040 != NULL)) {
F->stmt_2041 = RT_R_EUNDEF;
F->stmt_2041 = ((rt_r_ichk((*(P1026)rt_nil_check(F->e_2040)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->e_2040)).kind) <= (((rt_int)36LL))));
g_cap_ret_1096 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_1098 = rt_r_ichk(g_frames_1105);
if (rt_r_echk(F->stmt_2041)) {
f_start_labels_587();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P1019)rt_nil_check(g_cap_rflag_1097))->all)), rt_str(") {", 3)); b_; }));
}
f_element_514(F->e_2040);
if (rt_r_echk(F->stmt_2041)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(g_cap_ret_1096))->all), rt_str(": ;", 3)); b_; }));
F->e_2040 = (*(P1026)rt_nil_check(F->e_2040)).next;
}
}
g_cap_ret_1096 = F->saved_ret_2037;
g_cap_rflag_1097 = F->saved_flag_2038;
g_ret_frames_1098 = rt_r_ichk(F->saved_frames_2039);
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_595(P1026 elems_594) {
  struct f_body_elements_595fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_594 = elems_594;
f_capsule_elements_584(F->elems_594);
f_await_tasks_582(F->elems_594);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_597(P1026 elems_596) {
  struct f_gen_body_597fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_596 = elems_596;
F->saved_2042 = NULL;
F->saved_2042 = g_fins_1092;
F->saved_gotos_2043 = NULL;
F->saved_gotos_2043 = g_gotos_1104;
f_open_scope_177();
f_declare_labels_586(F->elems_596);
f_declare_body_430(F->elems_596);
{
F->xu_2044 = rt_str_copy(f_open_unhandled_599(F->elems_596));
f_body_elements_595(F->elems_596);
f_close_fins_569(F->saved_2042);
f_close_unhandled_601(&F->xu_2044);
}
f_close_scope_178();
g_gotos_1104 = F->saved_gotos_2043;
ret_:
  RT_FPOP();
  return;
}

static rstr f_open_unhandled_599(P1026 elems_598) {
  struct f_open_unhandled_599fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_598 = elems_598;
F->e_2045 = NULL;
F->e_2045 = F->elems_598;
F->conds_2046 = NULL;
F->conds_2046 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->e_2045 != NULL)) {
if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_2045)).kind) == (((rt_int)49LL)))) {
F->conds_2046 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->conds_2046))->all), rt_str(" || rt_xcur == ", 15)), (((P1019)rt_nil_check((*(P1036)rt_nil_check(f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_2045)).name))->all)))).cname))->all)); b_; }));
}
F->e_2045 = (*(P1026)rt_nil_check(F->e_2045)).next;
}
if ((((rt_int)(((((P1019)rt_nil_check(F->conds_2046))->all)).len)) == ((rt_int)1LL))) {
F->result_ = rt_str("", 0);
goto ret_;
}
{
F->f_2047 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xu", 2); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2047), rt_str("; if (RT_TRY(", 13)), F->f_2047), rt_str(")) {", 4)); b_; }));
f_push_cleanup_605(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2047), rt_str(");", 2)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(F->f_2047, rt_str(":", 1)), (((P1019)rt_nil_check(F->conds_2046))->all));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_close_unhandled_601(rstr *xu_600) {
  struct f_close_unhandled_601fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->xu_600 = xu_600;
F->i_2048 = RT_R_IUNDEF;
F->i_2048 = ((rt_int)1LL);
if (rt_str_eq((*F->xu_600), rt_str("", 0))) {
goto ret_;
}
while ((rt_r_echk(rt_str_get((*F->xu_600), rt_r_ichk(F->i_2048))) != 58)) {
F->i_2048 = rt_add(rt_r_ichk(F->i_2048), ((rt_int)1LL));
}
{
F->f_2049 = rt_str_copy(rt_str_slice((*F->xu_600), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_2048), ((rt_int)1LL))));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2049), rt_str("); } else { RT_POP(", 19)), F->f_2049), rt_str("); if (", 7)), rt_str_slice((*F->xu_600), rt_add(rt_r_ichk(F->i_2048), ((rt_int)1LL)), ((rt_int)(((*F->xu_600)).len)))), rt_str(") rt_raise(rt_exc(", 18)), f_q_18()), rt_str("X_UNHANDLED", 11)), f_q_18()), rt_str(")); rt_raise(rt_xcur); }", 24)); b_; }));
f_pop_cleanup_606();
}
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_603(rt_int upto_602) {
  struct f_pop_frames_603fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_602 = upto_602;
F->i_2050 = RT_R_IUNDEF;
F->i_2050 = rt_r_ichk(g_frames_1105);
F->c_2051 = NULL;
F->c_2051 = g_cleanups_1107;
while ((rt_r_ichk(F->i_2050) > F->upto_602)) {
f_emit_29(&(((P1019)rt_nil_check((*(P1030)rt_nil_check(F->c_2051)).s))->all));
F->c_2051 = (*(P1030)rt_nil_check(F->c_2051)).next;
F->i_2050 = rt_sub(rt_r_ichk(F->i_2050), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_605(rstr *s_604) {
  struct f_push_cleanup_605fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_604 = s_604;
F->c_2052 = NULL;
{ R1031 *cell2053 = rt_alloc(sizeof(R1031));
(*cell2053).s = NULL;
(*cell2053).next = NULL;
F->c_2052 = cell2053;
}
(*(P1030)rt_nil_check(F->c_2052)).s = f_mk_3(&(*F->s_604));
(*(P1030)rt_nil_check(F->c_2052)).next = g_cleanups_1107;
g_cleanups_1107 = F->c_2052;
g_frames_1105 = rt_add(rt_r_ichk(g_frames_1105), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_606(void) {
  struct f_pop_cleanup_606fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_1107 = (*(P1030)rt_nil_check(g_cleanups_1107)).next;
g_frames_1105 = rt_sub(rt_r_ichk(g_frames_1105), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_608(P1026 s_607) {
  struct f_gen_statement_608fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_607 = s_607;
F->located_2054 = NULL;
F->located_2054 = f_located_in_611(f_copy_node_839(F->s_607), NULL);
F->l_2055 = NULL;
F->l_2055 = F->located_2054;
while ((F->l_2055 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_529(F->l_2055, 0); b_; }));
F->l_2055 = (*(P1036)rt_nil_check(F->l_2055)).reqs_sym;
}
f_gen_statement2_616(F->s_607);
F->l_2055 = F->located_2054;
while ((F->l_2055 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_529(F->l_2055, 1); b_; }));
F->l_2055 = (*(P1036)rt_nil_check(F->l_2055)).reqs_sym;
}
ret_:
  RT_FPOP();
  return;
}

static P1036 f_located_in_611(P1026 e_609, P1036 found_610) {
  struct f_located_in_611fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_609 = e_609;
F->found_610 = found_610;
F->x_2056 = NULL;
F->x_2056 = F->e_609;
F->r_2057 = NULL;
F->r_2057 = F->found_610;
while ((F->x_2056 != NULL)) {
if ((rt_r_ichk((*(P1026)rt_nil_check(F->x_2056)).kind) == (((rt_int)7LL)))) {
F->y_2058 = NULL;
F->y_2058 = f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_2056)).name))->all));
if (((((F->y_2058 != NULL) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_2058)).kind) == (((rt_int)1LL)))) && ((*(P1036)rt_nil_check(F->y_2058)).loc != NULL)) && (!f_sym_in_614(F->r_2057, F->y_2058)))) {
(*(P1036)rt_nil_check(F->y_2058)).reqs_sym = F->r_2057;
F->r_2057 = F->y_2058;
}
} else if ((((((rt_r_ichk((*(P1026)rt_nil_check(F->x_2056)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->x_2056)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->x_2056)).kind) == (((rt_int)50LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->x_2056)).kind) == (((rt_int)47LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->x_2056)).kind) == (((rt_int)51LL))))) {
F->result_ = F->r_2057;
goto ret_;
}
if (((*(P1026)rt_nil_check(F->x_2056)).a != NULL)) {
F->r_2057 = f_located_in_611((*(P1026)rt_nil_check(F->x_2056)).a, F->r_2057);
}
if (((*(P1026)rt_nil_check(F->x_2056)).b != NULL)) {
F->r_2057 = f_located_in_611((*(P1026)rt_nil_check(F->x_2056)).b, F->r_2057);
}
if (((*(P1026)rt_nil_check(F->x_2056)).c != NULL)) {
F->r_2057 = f_located_in_611((*(P1026)rt_nil_check(F->x_2056)).c, F->r_2057);
}
F->x_2056 = (*(P1026)rt_nil_check(F->x_2056)).next;
}
F->result_ = F->r_2057;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_sym_in_614(P1036 l_612, P1036 y_613) {
  struct f_sym_in_614fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_612 = l_612;
F->y_613 = y_613;
F->p_2059 = NULL;
F->p_2059 = F->l_612;
while ((F->p_2059 != NULL)) {
if ((F->p_2059 == F->y_613)) {
F->result_ = 1;
goto ret_;
}
F->p_2059 = (*(P1036)rt_nil_check(F->p_2059)).reqs_sym;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_statement2_616(P1026 s_615) {
  struct f_gen_statement2_616fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_615 = s_615;
F->label_2060 = NULL;
F->gl_2061 = NULL;
F->gl_2061 = (*(P1026)rt_nil_check(F->s_615)).labels;
while ((F->gl_2061 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1051)rt_nil_check(f_goto_label_589(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->gl_2061)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_2061 = (*(P1026)rt_nil_check(F->gl_2061)).next;
}
if (((*(P1026)rt_nil_check(F->s_615)).tag != NULL)) {
F->x_2062 = NULL;
{ R1052 *cell2063 = rt_alloc(sizeof(R1052));
(*cell2063).match = NULL;
(*cell2063).label = NULL;
(*cell2063).next = NULL;
F->x_2062 = cell2063;
}
F->label_2060 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P1051)rt_nil_check(F->x_2062)).match = (*(P1026)rt_nil_check(F->s_615)).tag;
(*(P1051)rt_nil_check(F->x_2062)).label = F->label_2060;
(*(P1051)rt_nil_check(F->x_2062)).depth = rt_r_ichk(g_frames_1105);
(*(P1051)rt_nil_check(F->x_2062)).next = g_exits_1103;
g_exits_1103 = F->x_2062;
}
{ rt_int sel2064 = rt_r_ichk((*(P1026)rt_nil_check(F->s_615)).kind);
if (0 || (sel2064 == (((rt_int)20LL)))) {
f_st_assign_618(F->s_615);
} else if (0 || (sel2064 == (((rt_int)21LL)))) {
f_st_call_620(F->s_615);
} else if (0 || (sel2064 == (((rt_int)22LL)))) {
f_st_if_622(F->s_615);
} else if (0 || (sel2064 == (((rt_int)23LL)))) {
f_st_case_626(F->s_615);
} else if (0 || (sel2064 == (((rt_int)24LL)))) {
f_st_repeat_634(F->s_615);
} else if (0 || (sel2064 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_597((*(P1026)rt_nil_check(F->s_615)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel2064 == (((rt_int)27LL)))) {
f_st_exit_636(F->s_615);
} else if (0 || (sel2064 == (((rt_int)29LL)))) {
{
F->x_2065 = NULL;
F->x_2065 = f_goto_label_589(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->s_615)).name))->all));
if ((F->x_2065 == NULL)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_615)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->s_615)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_603(rt_r_ichk((*(P1051)rt_nil_check(F->x_2065)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P1019)rt_nil_check((*(P1051)rt_nil_check(F->x_2065)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel2064 == (((rt_int)28LL)))) {
f_st_return_638(F->s_615);
} else if (0 || (sel2064 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_645(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->s_615)).name))->all), rt_r_ichk((*(P1026)rt_nil_check(F->s_615)).line))), rt_str(");", 2)); b_; }));
} else if (0 || (sel2064 == (((rt_int)31LL)))) {
if ((g_handlers_1106 == NULL)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_615)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P1019)rt_nil_check((*(P1030)rt_nil_check(g_handlers_1106)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel2064 == (((rt_int)26LL)))) {
f_st_guard_647(F->s_615);
} else if (0 || (sel2064 == (((rt_int)32LL)))) {
f_st_alloc_649(F->s_615);
} else if (0 || (sel2064 == (((rt_int)34LL)))) {
f_st_create_653(F->s_615);
} else if (0 || (sel2064 == (((rt_int)35LL)))) {
f_st_wait_682(F->s_615);
} else if (0 || (sel2064 == (((rt_int)36LL)))) {
f_st_region_690(F->s_615);
} else {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_615)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P1026)rt_nil_check(F->s_615)).tag != NULL)) {
g_exits_1103 = (*(P1051)rt_nil_check(g_exits_1103)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->label_2060))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_618(P1026 s_617) {
  struct f_st_assign_618fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_617 = s_617;
F->lv_2066 = NULL;
F->t_2067 = NULL;
F->vt_2068 = NULL;
F->c_2069 = NULL;
F->ro_2070 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->s_617)).a)).kind) == (((rt_int)10LL))) && ((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->s_617)).a)).b != NULL)) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->s_617)).a)).b)).kind) == (((rt_int)16LL))))) {
f_lvalue_769((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->s_617)).a)).a, &F->lv_2066, &F->t_2067, &F->c_2069, &F->ro_2070);
while ((rt_r_ichk((*(P1032)rt_nil_check(F->t_2067)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_475(F->t_2067);
F->lv_2066 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_761(&(((P1019)rt_nil_check(F->lv_2066))->all), F->t_2067); b_; }));
F->t_2067 = (*(P1032)rt_nil_check(F->t_2067)).target;
}
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_2067)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->t_2067)).tparams == NULL))) {
F->t_2067 = (*(P1032)rt_nil_check(F->t_2067)).under;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_2067)).kind) == (((rt_int)15LL)))) {
F->lv_2066 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->lv_2066))->all), rt_str(".all", 4)); b_; }));
F->t_2067 = (*(P1032)rt_nil_check(F->t_2067)).under;
}
if ((((!rt_r_echk(F->ro_2070)) && (rt_r_ichk((*(P1032)rt_nil_check(F->t_2067)).kind) == (((rt_int)6LL)))) && (rt_r_ichk((*(P1032)rt_nil_check(F->t_2067)).ndim) == ((rt_int)1LL)))) {
F->lo_2071 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->s_617)).a)).b)).a, (*(P1032)rt_nil_check(F->t_2067)).idx, &F->vt_2068));
F->hi_2072 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->s_617)).a)).b)).b, (*(P1032)rt_nil_check(F->t_2067)).idx, &F->vt_2068));
F->v_2073 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->s_617)).b, F->t_2067, &F->vt_2068));
f_need_slice_781(F->t_2067);
f_check_type_232(F->vt_2068, F->t_2067, rt_r_ichk((*(P1026)rt_nil_check(F->s_617)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->t_2067)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_234(F->t_2067)), rt_str("(", 1)), (((P1019)rt_nil_check(F->lv_2066))->all)), rt_str(", ", 2)), F->lo_2071), rt_str(", ", 2)), F->hi_2072), rt_str("); as_", 6)), f_ctype_234(F->t_2067)), rt_str("(&sl_, ", 7)), F->v_2073), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((rt_r_echk(F->ro_2070) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_2067)).kind) != (((rt_int)5LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_617)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_2074 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->s_617)).a)).b)).a, g_ty_int_1110, &F->vt_2068));
F->hi_2075 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->s_617)).a)).b)).b, g_ty_int_1110, &F->vt_2068));
F->v_2076 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->s_617)).b, g_ty_string_1114, &F->vt_2068));
f_check_type_232(F->vt_2068, g_ty_string_1114, rt_r_ichk((*(P1026)rt_nil_check(F->s_617)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P1019)rt_nil_check(F->lv_2066))->all)), rt_str(", ", 2)), F->lo_2074), rt_str(", ", 2)), F->hi_2075), rt_str(", ", 2)), F->v_2076), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_769((*(P1026)rt_nil_check(F->s_617)).a, &F->lv_2066, &F->t_2067, &F->c_2069, &F->ro_2070);
if (rt_r_echk(F->ro_2070)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_617)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_308(F->t_2067)) && (!f_exports_op_458((*(P1032)rt_nil_check(F->t_2067)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_617)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_2067)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_2077 = rt_str_copy(f_gexpr_in_808((*(P1026)rt_nil_check(F->s_617)).b, F->t_2067, F->c_2069, &F->vt_2068));
f_check_type_232(F->vt_2068, F->t_2067, rt_r_ichk((*(P1026)rt_nil_check(F->s_617)).line));
f_ptr_subtype_check_495(F->t_2067, F->c_2069, (*(P1026)rt_nil_check(F->s_617)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(&(((P1019)rt_nil_check(F->lv_2066))->all), F->t_2067, &F->v_2077, F->c_2069); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_620(P1026 s_619) {
  struct f_st_call_620fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_619 = s_619;
F->c_2078 = NULL;
F->c_2078 = (*(P1026)rt_nil_check(F->s_619)).a;
F->t_2079 = NULL;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->c_2078)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->c_2078)).kind) == (((rt_int)12LL))))) {
F->x_2080 = NULL;
F->x_2080 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1026)rt_nil_check(F->c_2078)).line));
(*(P1026)rt_nil_check(F->x_2080)).a = F->c_2078;
F->c_2078 = F->x_2080;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->c_2078)).kind) != (((rt_int)10LL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_619)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_948(F->c_2078, 1, &F->t_2079), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_622(P1026 s_621) {
  struct f_st_if_622fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_621 = s_621;
F->a_2081 = NULL;
F->a_2081 = (*(P1026)rt_nil_check(F->s_621)).a;
F->first_2082 = RT_R_EUNDEF;
F->first_2082 = 1;
F->t_2083 = NULL;
F->taken_2084 = RT_R_EUNDEF;
F->taken_2084 = 0;
F->ok_2085 = RT_R_EUNDEF;
F->mv_2086 = NULL;
while (((F->a_2081 != NULL) && (!rt_r_echk(F->taken_2084)))) {
F->mv_2086 = f_meval_375((*(P1026)rt_nil_check(F->a_2081)).a, &F->ok_2085);
if (((rt_r_echk(F->ok_2085) && (rt_r_ichk((*(P1045)rt_nil_check(F->mv_2086)).kind) == (((rt_int)2LL)))) && (rt_r_ichk((*(P1045)rt_nil_check(F->mv_2086)).i) == ((rt_int)0LL)))) {
F->a_2081 = (*(P1026)rt_nil_check(F->a_2081)).next;
} else {
if ((rt_r_echk(F->ok_2085) && (rt_r_ichk((*(P1045)rt_nil_check(F->mv_2086)).kind) == (((rt_int)2LL))))) {
F->taken_2084 = 1;
if (rt_r_echk(F->first_2082)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_2087 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->a_2081)).a, g_ty_bool_1111, &F->t_2083));
f_check_type_232(F->t_2083, g_ty_bool_1111, rt_r_ichk((*(P1026)rt_nil_check(F->s_621)).line));
if (rt_r_echk(F->first_2082)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_2087), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_2087), rt_str(") {", 3)); b_; }));
}
}
F->first_2082 = 0;
f_gen_body_597((*(P1026)rt_nil_check(F->a_2081)).b);
F->a_2081 = (*(P1026)rt_nil_check(F->a_2081)).next;
}
}
if (((rt_r_ichk((*(P1026)rt_nil_check(F->s_621)).flag) == ((rt_int)1LL)) && (!rt_r_echk(F->taken_2084)))) {
if (rt_r_echk(F->first_2082)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_2082 = 0;
f_gen_body_597((*(P1026)rt_nil_check(F->s_621)).b);
}
if ((!rt_r_echk(F->first_2082))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_manifest_case_624(P1026 s_623) {
  struct f_manifest_case_624fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_623 = s_623;
F->ok_2088 = RT_R_EUNDEF;
F->sv_2089 = NULL;
F->sv_2089 = f_meval_375((*(P1026)rt_nil_check(F->s_623)).a, &F->ok_2088);
F->a_2090 = NULL;
F->a_2090 = (*(P1026)rt_nil_check(F->s_623)).b;
if (((!rt_r_echk(F->ok_2088)) || (((rt_r_ichk((*(P1045)rt_nil_check(F->sv_2089)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P1045)rt_nil_check(F->sv_2089)).kind) != (((rt_int)2LL)))) && (rt_r_ichk((*(P1045)rt_nil_check(F->sv_2089)).kind) != (((rt_int)4LL)))))) {
F->result_ = 0;
goto ret_;
}
while ((F->a_2090 != NULL)) {
F->lab_2091 = NULL;
F->lab_2091 = (*(P1026)rt_nil_check(F->a_2090)).a;
while ((F->lab_2091 != NULL)) {
F->lo_2092 = NULL;
F->lo_2092 = f_meval_375((*(P1026)rt_nil_check(F->lab_2091)).a, &F->ok_2088);
F->hi_2093 = NULL;
F->hi_2093 = F->lo_2092;
if (((!rt_r_echk(F->ok_2088)) || (rt_r_ichk((*(P1045)rt_nil_check(F->lo_2092)).kind) != rt_r_ichk((*(P1045)rt_nil_check(F->sv_2089)).kind)))) {
F->result_ = 0;
goto ret_;
}
if (((*(P1026)rt_nil_check(F->lab_2091)).b != NULL)) {
F->hi_2093 = f_meval_375((*(P1026)rt_nil_check(F->lab_2091)).b, &F->ok_2088);
if ((((!rt_r_echk(F->ok_2088)) || (rt_r_ichk((*(P1045)rt_nil_check(F->hi_2093)).kind) != rt_r_ichk((*(P1045)rt_nil_check(F->sv_2089)).kind))) || (rt_r_ichk((*(P1045)rt_nil_check(F->sv_2089)).kind) == (((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
}
if ((((rt_r_ichk((*(P1045)rt_nil_check(F->sv_2089)).kind) == (((rt_int)4LL))) && rt_str_eq((((P1019)rt_nil_check((*(P1045)rt_nil_check(F->sv_2089)).s))->all), (((P1019)rt_nil_check((*(P1045)rt_nil_check(F->lo_2092)).s))->all))) || (((rt_r_ichk((*(P1045)rt_nil_check(F->sv_2089)).kind) != (((rt_int)4LL))) && (rt_r_ichk((*(P1045)rt_nil_check(F->lo_2092)).i) <= rt_r_ichk((*(P1045)rt_nil_check(F->sv_2089)).i))) && (rt_r_ichk((*(P1045)rt_nil_check(F->sv_2089)).i) <= rt_r_ichk((*(P1045)rt_nil_check(F->hi_2093)).i))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_597((*(P1026)rt_nil_check(F->a_2090)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
F->result_ = 1;
goto ret_;
}
F->lab_2091 = (*(P1026)rt_nil_check(F->lab_2091)).next;
}
F->a_2090 = (*(P1026)rt_nil_check(F->a_2090)).next;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->s_623)).flag) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_597((*(P1026)rt_nil_check(F->s_623)).c);
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

static void f_st_case_626(P1026 s_625) {
  struct f_st_case_626fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_625 = s_625;
F->st_2094 = NULL;
F->vt_2095 = NULL;
F->first_2096 = RT_R_EUNDEF;
F->first_2096 = 1;
F->a_2097 = NULL;
F->a_2097 = (*(P1026)rt_nil_check(F->s_625)).b;
if (f_manifest_case_624(F->s_625)) {
goto ret_;
}
f_st_case2_628(F->s_625);
ret_:
  RT_FPOP();
  return;
}

static void f_st_case2_628(P1026 s_627) {
  struct f_st_case2_628fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_627 = s_627;
F->st_2098 = NULL;
F->vt_2099 = NULL;
F->first_2100 = RT_R_EUNDEF;
F->first_2100 = 1;
F->a_2101 = NULL;
F->a_2101 = (*(P1026)rt_nil_check(F->s_627)).b;
F->sel_2102 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->s_627)).a, NULL, &F->st_2098));
F->tmp_2103 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->st_2098)), rt_str(" ", 1)), F->tmp_2103), rt_str(" = ", 3)), F->sel_2102), rt_str(";", 1)); b_; }));
while ((F->a_2101 != NULL)) {
F->lab_2104 = NULL;
F->lab_2104 = (*(P1026)rt_nil_check(F->a_2101)).a;
F->conds_2105 = NULL;
F->conds_2105 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_2104 != NULL)) {
if (((*(P1026)rt_nil_check(F->lab_2104)).b == NULL)) {
F->v_2106 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->lab_2104)).a, F->st_2098, &F->vt_2099));
f_check_type_232(F->vt_2099, F->st_2098, rt_r_ichk((*(P1026)rt_nil_check(F->s_627)).line));
F->conds_2105 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->conds_2105))->all), rt_str(" || ", 4)), f_eq_code_418(F->st_2098, &F->tmp_2103, &F->v_2106)); b_; }));
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->st_2098)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->st_2098)).ltp != NULL))) {
F->lo_2107 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->lab_2104)).a, F->st_2098, &F->vt_2099));
F->hi_2108 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->lab_2104)).b, F->st_2098, &F->vt_2099));
F->conds_2105 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->conds_2105))->all), rt_str(" || (!", 6)), f_user_call2_400((*(P1032)rt_nil_check(F->st_2098)).ltp, &F->tmp_2103, 1, &F->lo_2107, 0)), rt_str(" && !", 5)), f_user_call2_400((*(P1032)rt_nil_check(F->st_2098)).ltp, &F->hi_2108, 0, &F->tmp_2103, 1)), rt_str(")", 1)); b_; }));
} else {
F->lo_2109 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->lab_2104)).a, F->st_2098, &F->vt_2099));
F->hi_2110 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->lab_2104)).b, F->st_2098, &F->vt_2099));
F->conds_2105 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->conds_2105))->all), rt_str(" || (", 5)), F->tmp_2103), rt_str(" >= ", 4)), F->lo_2109), rt_str(" && ", 4)), F->tmp_2103), rt_str(" <= ", 4)), F->hi_2110), rt_str(")", 1)); b_; }));
}
F->lab_2104 = (*(P1026)rt_nil_check(F->lab_2104)).next;
}
if (rt_r_echk(F->first_2100)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1019)rt_nil_check(F->conds_2105))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1019)rt_nil_check(F->conds_2105))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2100 = 0;
f_gen_body_597((*(P1026)rt_nil_check(F->a_2101)).b);
F->a_2101 = (*(P1026)rt_nil_check(F->a_2101)).next;
}
if (rt_r_echk(F->first_2100)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->s_627)).flag) == ((rt_int)1LL))) {
f_gen_body_597((*(P1026)rt_nil_check(F->s_627)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_user_for_632(P1026 s_629, P1032 t_630, P1028 c_631) {
  struct f_user_for_632fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_629 = s_629;
F->t_630 = t_630;
F->c_631 = c_631;
F->y_2111 = NULL;
F->y_2111 = f_new_sym_181((((rt_int)2LL)), (*(P1026)rt_nil_check(F->s_629)).name);
F->saved_2112 = NULL;
F->saved_2112 = g_psub_1087;
F->p_2113 = NULL;
F->p_2113 = (*(P1032)rt_nil_check(F->t_630)).tparams;
F->iv_2114 = NULL;
F->iv_2114 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1026)rt_nil_check(F->s_629)).line));
F->st_2115 = NULL;
F->access_2116 = rt_str_copy(f_storage_519(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->s_629)).name))->all), F->t_630));
F->uv_2117 = NULL;
F->uv_2117 = f_mk_3(&F->access_2116);
if (((*(P1032)rt_nil_check(F->t_630)).tparams != NULL)) {
F->uv_2117 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->access_2116, rt_str(".all", 4)); b_; }));
}
if ((((!f_scalar_kind_186(f_base_of_223((*(P1032)rt_nil_check(F->t_630)).under))) || ((*(P1032)rt_nil_check(F->t_630)).elemcons == NULL)) || ((*(P1028)rt_nil_check((*(P1032)rt_nil_check(F->t_630)).elemcons)).lo == NULL))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_629)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a FOR over ", 11), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_630)).name))->all)), rt_str(" needs an underlying subtype with a range", 41)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_init_storage_341(&F->access_2116, F->t_630, F->c_631);
while ((F->p_2113 != NULL)) {
F->l1_2118 = NULL;
F->l2_2119 = NULL;
{ R1031 *cell2120 = rt_alloc(sizeof(R1031));
(*cell2120).s = NULL;
(*cell2120).next = NULL;
F->l1_2118 = cell2120;
}
{ R1031 *cell2121 = rt_alloc(sizeof(R1031));
(*cell2121).s = NULL;
(*cell2121).next = NULL;
F->l2_2119 = cell2121;
}
(*(P1030)rt_nil_check(F->l1_2118)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2113)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1030)rt_nil_check(F->l2_2119)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(F->access_2116, rt_str(".p_", 3)), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2113)).name))->all))); b_; }));
(*(P1030)rt_nil_check(F->l1_2118)).next = F->l2_2119;
(*(P1030)rt_nil_check(F->l2_2119)).next = g_psub_1087;
g_psub_1087 = F->l1_2118;
F->p_2113 = (*(P1026)rt_nil_check(F->p_2113)).next;
}
{
F->lo_2122 = rt_str_copy(f_subst_314(&(((P1019)rt_nil_check((*(P1028)rt_nil_check((*(P1032)rt_nil_check(F->t_630)).elemcons)).lo))->all)));
F->hi_2123 = rt_str_copy(f_subst_314(&(((P1019)rt_nil_check((*(P1028)rt_nil_check((*(P1032)rt_nil_check(F->t_630)).elemcons)).hi))->all)));
g_psub_1087 = F->saved_2112;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->s_629)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->uv_2117))->all), rt_str(" = ", 3)), F->hi_2123), rt_str("; if (", 6)), F->lo_2122), rt_str(" <= ", 4)), (((P1019)rt_nil_check(F->uv_2117))->all)), rt_str(") for (;;) {", 12)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->uv_2117))->all), rt_str(" = ", 3)), F->lo_2122), rt_str("; if (", 6)), (((P1019)rt_nil_check(F->uv_2117))->all)), rt_str(" <= ", 4)), F->hi_2123), rt_str(") for (;;) {", 12)); b_; }));
}
f_open_scope_177();
(*(P1036)rt_nil_check(F->y_2111)).t = F->t_630;
(*(P1036)rt_nil_check(F->y_2111)).c = F->c_631;
f_bind_522(F->y_2111, &F->access_2116);
(*(P1036)rt_nil_check(F->y_2111)).ro_flag = 1;
f_define_168(F->y_2111, rt_r_ichk((*(P1026)rt_nil_check(F->s_629)).line));
f_gen_body_597((*(P1026)rt_nil_check(F->s_629)).b);
(*(P1026)rt_nil_check(F->iv_2114)).name = (*(P1026)rt_nil_check(F->s_629)).name;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->s_629)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1019)rt_nil_check(F->uv_2117))->all)), rt_str(" == ", 4)), F->lo_2122), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(&F->access_2116, F->t_630, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_948(f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRED", 4); b_; }), F->iv_2114, rt_r_ichk((*(P1026)rt_nil_check(F->s_629)).line)), 0, &F->st_2115); b_; }), F->c_631); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1019)rt_nil_check(F->uv_2117))->all)), rt_str(" == ", 4)), F->hi_2123), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(&F->access_2116, F->t_630, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_948(f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUCC", 4); b_; }), F->iv_2114, rt_r_ichk((*(P1026)rt_nil_check(F->s_629)).line)), 0, &F->st_2115); b_; }), F->c_631); b_; }));
}
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} }", 3); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_634(P1026 s_633) {
  struct f_st_repeat_634fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_633 = s_633;
F->t_2124 = NULL;
F->c_2125 = NULL;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->s_633)).flag) == ((rt_int)0LL))) {
F->cond_2126 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->s_633)).a, g_ty_bool_1111, &F->t_2124));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_2126), rt_str(") {", 3)); b_; }));
f_gen_body_597((*(P1026)rt_nil_check(F->s_633)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_2124 = f_resolve_subtype_268((*(P1026)rt_nil_check(F->s_633)).a, &F->c_2125);
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_2124)).kind) == (((rt_int)15LL))) && (((*(P1032)rt_nil_check(F->t_2124)).tparams != NULL) || (!f_scalar_kind_186(f_base_of_223(F->t_2124)))))) {
f_user_for_632(F->s_633, F->t_2124, F->c_2125);
goto ret_;
}
F->c_2125 = f_base_cons_226(F->t_2124, F->c_2125);
if ((((*(P1032)rt_nil_check(f_base_of_223(F->t_2124))).kind == (((rt_int)4LL))) && ((*(P1028)rt_nil_check(F->c_2125)).lo == NULL))) {
F->c_2125 = f_new_cons_184();
(*(P1028)rt_nil_check(F->c_2125)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P1028)rt_nil_check(F->c_2125)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_71((*(P1032)rt_nil_check(f_base_of_223(F->t_2124))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P1028)rt_nil_check(F->c_2125)).lo == NULL)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_633)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_2127 = rt_str_copy(f_storage_519(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->s_633)).name))->all), F->t_2124));
F->lov_2128 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_2129 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_2130 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_2131 = NULL;
F->y_2131 = f_new_sym_181((((rt_int)2LL)), (*(P1026)rt_nil_check(F->s_633)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_2128), rt_str(" = ", 3)), f_clo_193(F->c_2125)), rt_str(", ", 2)), F->hiv_2129), rt_str(" = ", 3)), f_chi_195(F->c_2125)), rt_str(";", 1)); b_; }));
if ((rt_r_ichk((*(P1026)rt_nil_check(F->s_633)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_2130), rt_str(" = ", 3)), F->hiv_2129), rt_str("; ", 2)), F->it_2130), rt_str(" >= ", 4)), F->lov_2128), rt_str("; ", 2)), F->it_2130), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_2130), rt_str(" = ", 3)), F->lov_2128), rt_str("; ", 2)), F->it_2130), rt_str(" <= ", 4)), F->hiv_2129), rt_str("; ", 2)), F->it_2130), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_2127, rt_str(" = ", 3)), F->it_2130), rt_str(";", 1)); b_; }));
f_open_scope_177();
(*(P1036)rt_nil_check(F->y_2131)).t = F->t_2124;
(*(P1036)rt_nil_check(F->y_2131)).c = F->c_2125;
f_bind_522(F->y_2131, &F->access_2127);
(*(P1036)rt_nil_check(F->y_2131)).ro_flag = 1;
f_define_168(F->y_2131, rt_r_ichk((*(P1026)rt_nil_check(F->s_633)).line));
f_gen_body_597((*(P1026)rt_nil_check(F->s_633)).b);
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_636(P1026 s_635) {
  struct f_st_exit_636fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_635 = s_635;
F->x_2132 = NULL;
F->x_2132 = g_exits_1103;
while ((F->x_2132 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1051)rt_nil_check(F->x_2132)).match))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->s_635)).name))->all))) {
f_pop_frames_603(rt_r_ichk((*(P1051)rt_nil_check(F->x_2132)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P1019)rt_nil_check((*(P1051)rt_nil_check(F->x_2132)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_2132 = (*(P1051)rt_nil_check(F->x_2132)).next;
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_635)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->s_635)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_638(P1026 s_637) {
  struct f_st_return_638fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_637 = s_637;
F->vt_2133 = NULL;
if ((g_cap_ret_1096 != NULL)) {
if (((*(P1026)rt_nil_check(F->s_637)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_637)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_603(rt_r_ichk(g_ret_frames_1098));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(g_cap_rflag_1097))->all), rt_str(" = 1; goto ", 11)), (((P1019)rt_nil_check(g_cap_ret_1096))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!rt_r_echk(g_in_func_1082))) {
f_pop_frames_603(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check((*(P1036)rt_nil_check(g_func_sym_1094)).result)).kind) == (((rt_int)9LL)))) {
if (((*(P1026)rt_nil_check(F->s_637)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_637)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_603(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P1026)rt_nil_check(F->s_637)).a == NULL)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_637)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_2134 = rt_str_copy(f_gexpr_in_808((*(P1026)rt_nil_check(F->s_637)).a, (*(P1036)rt_nil_check(g_func_sym_1094)).result, g_func_rc_1095, &F->vt_2133));
f_check_type_232(F->vt_2133, (*(P1036)rt_nil_check(g_func_sym_1094)).result, rt_r_ichk((*(P1026)rt_nil_check(F->s_637)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_642((*(P1036)rt_nil_check(g_func_sym_1094)).result, g_func_rc_1095, &F->v_2134)), rt_str(";", 1)); b_; }));
f_pop_frames_603(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_642(P1032 t_639, P1028 c_640, rstr *v_641) {
  struct f_result_checked_642fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_639 = t_639;
F->c_640 = c_640;
F->v_641 = v_641;
if ((F->c_640 == NULL)) {
F->result_ = (*F->v_641);
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_639)).kind) == (((rt_int)5LL))) && ((*(P1028)rt_nil_check(F->c_640)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_641)), rt_str(", ", 2)), (((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_640)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_639)).kind) == (((rt_int)6LL))) && ((*(P1028)rt_nil_check(F->c_640)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->t_639)), rt_str(" r_ = ", 6)), (*F->v_641)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_640)).lo))->all)), rt_str(", ", 2)), (((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_640)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_213(F->t_639, F->c_640, &(*F->v_641));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_645(rstr *name_643, rt_int line_644) {
  struct f_exc_id_645fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_643 = name_643;
F->line_644 = line_644;
F->y_2135 = NULL;
F->y_2135 = f_lookup_163(&(*F->name_643));
if (((F->y_2135 != NULL) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_2135)).kind) == (((rt_int)7LL))))) {
F->result_ = (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_2135)).cname))->all);
goto ret_;
}
if (((((rt_int)(((*F->name_643)).len)) > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_643), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_643)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_644, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_643), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_647(P1026 s_646) {
  struct f_st_guard_647fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_646 = s_646;
F->h_2136 = NULL;
F->h_2136 = (*(P1026)rt_nil_check(F->s_646)).b;
F->first_2137 = RT_R_EUNDEF;
F->first_2137 = 1;
F->hv_2138 = NULL;
{
F->f_2139 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_2140 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_605(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2139), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_2139), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2139), rt_str(")) {", 4)); b_; }));
f_gen_body_597((*(P1026)rt_nil_check(F->s_646)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2139), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_606();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2139), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_2140), rt_str(" = rt_xcur;", 11)); b_; }));
{ R1031 *cell2141 = rt_alloc(sizeof(R1031));
(*cell2141).s = NULL;
(*cell2141).next = NULL;
F->hv_2138 = cell2141;
}
(*(P1030)rt_nil_check(F->hv_2138)).s = f_mk_3(&F->x_2140);
(*(P1030)rt_nil_check(F->hv_2138)).next = g_handlers_1106;
g_handlers_1106 = F->hv_2138;
{
F->h1_2142 = NULL;
F->h1_2142 = (*(P1026)rt_nil_check(F->s_646)).b;
F->seen_2143 = NULL;
while ((F->h1_2142 != NULL)) {
F->n1_2144 = NULL;
F->n1_2144 = (*(P1026)rt_nil_check(F->h1_2142)).a;
while ((F->n1_2144 != NULL)) {
if (f_seen_name_425(F->seen_2143, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->n1_2144)).name))->all))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->n1_2144)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->n1_2144)).name))->all), rt_str(" has two handlers in one guard statement", 40)); b_; }));
}
F->seen_2143 = f_add_line_898(F->seen_2143, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->n1_2144)).name))->all));
F->n1_2144 = (*(P1026)rt_nil_check(F->n1_2144)).next;
}
F->h1_2142 = (*(P1026)rt_nil_check(F->h1_2142)).next;
}
}
while ((F->h_2136 != NULL)) {
F->n_2145 = NULL;
F->n_2145 = (*(P1026)rt_nil_check(F->h_2136)).a;
F->conds_2146 = NULL;
F->conds_2146 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_2145 != NULL)) {
F->conds_2146 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->conds_2146))->all), rt_str(" || ", 4)), F->x_2140), rt_str(" == ", 4)), f_exc_id_645(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->n_2145)).name))->all), rt_r_ichk((*(P1026)rt_nil_check(F->s_646)).line))); b_; }));
F->n_2145 = (*(P1026)rt_nil_check(F->n_2145)).next;
}
if (rt_r_echk(F->first_2137)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1019)rt_nil_check(F->conds_2146))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1019)rt_nil_check(F->conds_2146))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2137 = 0;
f_gen_body_597((*(P1026)rt_nil_check(F->h_2136)).b);
F->h_2136 = (*(P1026)rt_nil_check(F->h_2136)).next;
}
if (rt_r_echk(F->first_2137)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->s_646)).flag) == ((rt_int)1LL))) {
f_gen_body_597((*(P1026)rt_nil_check(F->s_646)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_2140), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_1106 = (*(P1030)rt_nil_check(g_handlers_1106)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_649(P1026 s_648) {
  struct f_st_alloc_649fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_648 = s_648;
F->lv_2147 = NULL;
F->t_2148 = NULL;
F->target_2149 = NULL;
F->vt_2150 = NULL;
F->c_2151 = NULL;
F->tc_2152 = NULL;
F->ro_2153 = RT_R_EUNDEF;
F->d_2154 = NULL;
F->p_2155 = NULL;
F->a_2156 = NULL;
f_lvalue_769((*(P1026)rt_nil_check(F->s_648)).a, &F->lv_2147, &F->t_2148, &F->c_2151, &F->ro_2153);
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_2148)).kind) != (((rt_int)8LL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_648)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_475(F->t_2148);
F->d_2154 = (*(P1032)rt_nil_check(F->t_2148)).decl;
F->target_2149 = (*(P1032)rt_nil_check(F->t_2148)).target;
if ((f_list_len_71((*(P1026)rt_nil_check(F->s_648)).b) != f_list_len_71((*(P1026)rt_nil_check(F->d_2154)).b))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_648)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_71((*(P1026)rt_nil_check(F->d_2154)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P1026)rt_nil_check(F->d_2154)).b != NULL)) {
f_alloc_cell_487(F->s_648, &(((P1019)rt_nil_check(F->lv_2147))->all), F->t_2148, F->c_2151);
goto ret_;
}
{
F->tcn_2157 = rt_str_copy(f_ctype_234(F->target_2149));
F->cell_2158 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_346(F->target_2149)) {
F->fn_2159 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_1091 = 1;
g_uses_findyn_1093 = 1;
f_put_27(g_out_protos_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_2159), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_2159), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_1082)) {
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1019)rt_nil_check((*(P1036)rt_nil_check(g_func_sym_1094)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_2157), rt_str(" *)cell_)", 9)); b_; }), F->target_2149)); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_1082)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_2157), rt_str(" *", 2)), F->cell_2158), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_2157), rt_str("), ", 3)), F->fn_2159), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_2157), rt_str(" *", 2)), F->cell_2158), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_2157), rt_str("), ", 3)), F->fn_2159), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_2157), rt_str(" *", 2)), F->cell_2158), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_2157), rt_str("));", 3)); b_; }));
}
f_open_scope_177();
f_bind_ptr_params_482((*(P1026)rt_nil_check(F->d_2154)).d, f_ptr_args_477(F->c_2151), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P1026)rt_nil_check(F->s_648)).line));
F->vt_2150 = f_resolve_subtype_268((*(P1026)rt_nil_check(F->d_2154)).a, &F->tc_2152);
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_2158), rt_str(")", 1)); b_; }), F->target_2149, F->tc_2152);
f_close_scope_178();
if (((*(P1026)rt_nil_check(F->s_648)).c != NULL)) {
F->v_2160 = rt_str_copy(f_gexpr_in_808((*(P1026)rt_nil_check(F->s_648)).c, F->target_2149, F->tc_2152, &F->vt_2150));
f_check_type_232(F->vt_2150, F->target_2149, rt_r_ichk((*(P1026)rt_nil_check(F->s_648)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_2158), rt_str(")", 1)); b_; }), F->target_2149, &F->v_2160, F->tc_2152); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->lv_2147))->all), rt_str(" = ", 3)), F->cell_2158), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_651(P1026 e_650) {
  struct f_act_ref_651fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_650 = e_650;
F->lv_2161 = NULL;
F->t_2162 = NULL;
F->c_2163 = NULL;
F->ro_2164 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P1026)rt_nil_check(F->e_650)).kind) == (((rt_int)7LL))) && rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_650)).name))->all), rt_str("ME", 2))) && (f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_763(F->e_650))) {
F->v_2165 = rt_str_copy(f_gexpr_800(F->e_650, g_ty_act_1120, &F->t_2162));
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_2162)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_650)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_2165;
goto ret_;
}
f_lvalue_769(F->e_650, &F->lv_2161, &F->t_2162, &F->c_2163, &F->ro_2164);
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_2162)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_650)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P1019)rt_nil_check(F->lv_2161))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_653(P1026 s_652) {
  struct f_st_create_653fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_652 = s_652;
F->y_2166 = NULL;
F->y_2166 = f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->s_652)).name))->all));
F->pm_2167 = NULL;
F->a_2168 = NULL;
F->a_2168 = (*(P1026)rt_nil_check(F->s_652)).b;
F->lv_2169 = NULL;
F->lt_2170 = NULL;
F->vt_2171 = NULL;
F->lc_2172 = NULL;
F->ro_2173 = RT_R_EUNDEF;
if (((F->y_2166 != NULL) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_2166)).kind) == (((rt_int)10LL))))) {
F->y_2166 = f_instantiate_745(F->y_2166, (*(P1026)rt_nil_check(F->s_652)).e, (*(P1026)rt_nil_check(F->s_652)).b, rt_r_ichk((*(P1026)rt_nil_check(F->s_652)).line));
}
if (((F->y_2166 == NULL) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_2166)).kind) != (((rt_int)9LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_652)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->s_652)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_2167 = (*(P1036)rt_nil_check(F->y_2166)).params;
{
F->at_2174 = NULL;
F->ac_2175 = NULL;
F->aro_2176 = RT_R_EUNDEF;
F->act_2177 = NULL;
F->nf_2178 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_769((*(P1026)rt_nil_check(F->s_652)).a, &F->lv_2169, &F->at_2174, &F->ac_2175, &F->aro_2176);
if ((rt_r_ichk((*(P1032)rt_nil_check(F->at_2174)).kind) == (((rt_int)14LL)))) {
F->act_2177 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_651((*(P1026)rt_nil_check(F->s_652)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_2166)).cname))->all)), rt_str("fr *", 4)), F->nf_2178), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_2178), rt_str(");", 2)); b_; }));
if ((rt_r_ichk((*(P1036)rt_nil_check(F->y_2166)).level) > ((rt_int)0LL))) {
F->link_2179 = NULL;
F->link_2179 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2181 = ((rt_int)1LL), hi2182 = rt_sub(rt_r_ichk(g_cur_level_1083), rt_r_ichk((*(P1036)rt_nil_check(F->y_2166)).level));
for (rt_int it2183 = lo2181; it2183 <= hi2182; it2183++) {
F->i_2180 = it2183;
F->link_2179 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->link_2179))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2178, rt_str("->up = ", 7)), (((P1019)rt_nil_check(F->link_2179))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_2168 != NULL) && (F->pm_2167 != NULL))) {
if ((rt_r_ichk((*(P1038)rt_nil_check(F->pm_2167)).mode) == (((rt_int)1LL)))) {
F->v_2184 = rt_str_copy(f_gexpr_in_808(F->a_2168, (*(P1038)rt_nil_check(F->pm_2167)).t, (*(P1038)rt_nil_check(F->pm_2167)).c, &F->vt_2171));
f_check_type_232(F->vt_2171, (*(P1038)rt_nil_check(F->pm_2167)).t, rt_r_ichk((*(P1026)rt_nil_check(F->s_652)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2178, rt_str("->", 2)), (((P1019)rt_nil_check((*(P1038)rt_nil_check(F->pm_2167)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_414((*(P1038)rt_nil_check(F->pm_2167)).t, &F->v_2184)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_769(F->a_2168, &F->lv_2169, &F->lt_2170, &F->lc_2172, &F->ro_2173);
f_check_type_232(F->lt_2170, (*(P1038)rt_nil_check(F->pm_2167)).t, rt_r_ichk((*(P1026)rt_nil_check(F->s_652)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2178, rt_str("->", 2)), (((P1019)rt_nil_check((*(P1038)rt_nil_check(F->pm_2167)).cfield))->all)), rt_str(" = &", 4)), (((P1019)rt_nil_check(F->lv_2169))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_186((*(P1038)rt_nil_check(F->pm_2167)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2178, rt_str("->", 2)), (((P1019)rt_nil_check((*(P1038)rt_nil_check(F->pm_2167)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_198(F->lt_2170, F->lc_2172)), rt_str("; ", 2)), F->nf_2178), rt_str("->", 2)), (((P1019)rt_nil_check((*(P1038)rt_nil_check(F->pm_2167)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_201(F->lt_2170, F->lc_2172)), rt_str(";", 1)); b_; }));
}
}
F->a_2168 = (*(P1026)rt_nil_check(F->a_2168)).next;
F->pm_2167 = (*(P1038)rt_nil_check(F->pm_2167)).next;
}
if (((F->a_2168 != NULL) || (F->pm_2167 != NULL))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->s_652)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->s_652)).name))->all)); b_; }));
}
if ((F->act_2177 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P1019)rt_nil_check(F->act_2177))->all)), rt_str(", &", 3)), (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_2166)).cname))->all)), rt_str("decl, ", 6)), (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_2166)).cname))->all)), rt_str(", ", 2)), F->nf_2178), rt_str("); }", 4)); b_; }));
} else {
f_user_create_663(F->s_652, F->y_2166, &(((P1019)rt_nil_check(F->lv_2169))->all), F->at_2174, &F->nf_2178);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_657(rstr *name_654, P1032 t_655, rstr *place_656) {
  struct f_hidden_var_657fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_654 = name_654;
F->t_655 = t_655;
F->place_656 = place_656;
F->y_2185 = NULL;
F->y_2185 = f_new_sym_181((((rt_int)1LL)), f_mk_3(&(*F->name_654)));
(*(P1036)rt_nil_check(F->y_2185)).t = F->t_655;
(*(P1036)rt_nil_check(F->y_2185)).level = ((rt_int)0LL);
(*(P1036)rt_nil_check(F->y_2185)).access = f_mk_3(&(*F->place_656));
f_define_168(F->y_2185, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_663(P1026 s_658, P1036 y_659, rstr *uv_660, P1032 ut_661, rstr *nf_662) {
  struct f_user_create_663fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_658 = s_658;
F->y_659 = y_659;
F->uv_660 = uv_660;
F->ut_661 = ut_661;
F->nf_662 = nf_662;
F->t_2186 = NULL;
F->saved_2187 = NULL;
F->saved_2187 = g_code_1080;
F->hook_2188 = NULL;
F->hook_2188 = f_new_buffer_24();
F->un_2189 = NULL;
F->un_2189 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1026)rt_nil_check(F->s_658)).line));
F->hn_2190 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_2191 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_2192 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_2193 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_177();
f_hidden_var_657(&F->uname_2192, F->ut_661, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->ut_661)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P1026)rt_nil_check(F->un_2189)).name = f_mk_3(&F->uname_2192);
g_code_1080 = F->hook_2188;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_948(f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_2189, rt_r_ichk((*(P1026)rt_nil_check(F->s_658)).line)), 1, &F->t_2186)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_948(f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_2189, rt_r_ichk((*(P1026)rt_nil_check(F->s_658)).line)), 1, &F->t_2186)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_948(f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_2189, rt_r_ichk((*(P1026)rt_nil_check(F->s_658)).line)), 1, &F->t_2186)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_948(f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_2189, rt_r_ichk((*(P1026)rt_nil_check(F->s_658)).line)), 1, &F->t_2186)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_1080 = F->saved_2187;
f_put_27(g_out_protos_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_2190), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_2190), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (rt_r_echk(g_in_func_1082)) {
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1019)rt_nil_check((*(P1036)rt_nil_check(g_func_sym_1094)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_1077, F->hook_2188);
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_2191), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_2191, rt_str("->hook = ", 9)), F->hn_2190), rt_str("; ", 2)), F->aa_2191), rt_str("->ua = &", 8)), (*F->uv_660)), rt_str("; ", 2)), F->aa_2191), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_938(F->ut_661)), f_q_18()), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_1082)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_2191, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_2191), rt_str(", &", 3)), (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_659)).cname))->all)), rt_str("decl, ", 6)), (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_659)).cname))->all)), rt_str(", ", 2)), (*F->nf_662)), rt_str(");", 2)); b_; }));
f_hidden_var_657(&F->aname_2193, g_ty_act_1120, &F->aa_2191);
{
F->start_2194 = NULL;
F->start_2194 = f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P1026)rt_nil_check(F->s_658)).a, rt_r_ichk((*(P1026)rt_nil_check(F->s_658)).line));
F->an_2195 = NULL;
F->an_2195 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1026)rt_nil_check(F->s_658)).line));
(*(P1026)rt_nil_check(F->an_2195)).name = f_mk_3(&F->aname_2193);
(*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->start_2194)).b)).next = F->an_2195;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_948(F->start_2194, 1, &F->t_2186), rt_str(";", 1)); b_; }));
}
f_close_scope_178();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_668(P1026 inv_664, rstr *arr_665, rt_int i_666, int mixed_667) {
  struct f_wait_alt_668fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_664 = inv_664;
F->arr_665 = arr_665;
F->i_666 = i_666;
F->mixed_667 = mixed_667;
F->lv_2196 = NULL;
F->t_2197 = NULL;
F->vt_2198 = NULL;
F->c_2199 = NULL;
F->ro_2200 = RT_R_EUNDEF;
F->fn_2201 = NULL;
F->args_2202 = NULL;
F->slot_2203 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_665), rt_str("[", 1)), f_itos_7(F->i_666)), rt_str("]", 1)));
if (((rt_r_ichk((*(P1026)rt_nil_check(F->inv_664)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->inv_664)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->inv_664)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_2201 = (*(P1026)rt_nil_check(F->inv_664)).a;
F->args_2202 = (*(P1026)rt_nil_check(F->inv_664)).b;
if ((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2201)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2201)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_769(F->args_2202, &F->lv_2196, &F->t_2197, &F->c_2199, &F->ro_2200);
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_2197)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->inv_664)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2201)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_2204 = NULL;
F->dt_2205 = NULL;
f_lvalue_769((*(P1026)rt_nil_check(F->args_2202)).next, &F->dv_2204, &F->dt_2205, &F->c_2199, &F->ro_2200);
f_check_type_232(F->dt_2205, (*(P1032)rt_nil_check(F->t_2197)).elem, rt_r_ichk((*(P1026)rt_nil_check(F->inv_664)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2203, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P1019)rt_nil_check(F->lv_2196))->all)), rt_str(", &", 3)), (((P1019)rt_nil_check(F->dv_2204))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_2206 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_2207 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->args_2202)).next, (*(P1032)rt_nil_check(F->t_2197)).elem, &F->vt_2198));
f_check_type_232(F->vt_2198, (*(P1032)rt_nil_check(F->t_2197)).elem, rt_r_ichk((*(P1026)rt_nil_check(F->inv_664)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1032)rt_nil_check(F->t_2197)).elem), rt_str(" ", 1)), F->tmp_2206), rt_str(" = ", 3)), F->v_2207), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2203, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P1019)rt_nil_check(F->lv_2196))->all)), rt_str(", &", 3)), F->tmp_2206), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2201)).name))->all), rt_str("DELAY_UNTIL", 11)) && (f_list_len_71(F->args_2202) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2203, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_r_act_deadline(", 65)), f_act_delay_args_964(F->args_2202)), rt_str(")};", 3));
goto ret_;
} else if ((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2201)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2201)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_2208 = rt_str_copy(f_gexpr_800(F->args_2202, g_ty_int_1110, &F->vt_2198));
if ((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2201)).name))->all), rt_str("DELAY", 5)) && F->mixed_667)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2203, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_2208), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2201)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2203, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_2208), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2203, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_2208), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2201)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2203, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_651(F->args_2202)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->inv_664)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2201)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_670(P1026 inv_669) {
  struct f_builtin_wait_670fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_669 = inv_669;
F->lv_2209 = NULL;
F->t_2210 = NULL;
F->c_2211 = NULL;
F->ro_2212 = RT_R_EUNDEF;
F->saved_2213 = NULL;
F->saved_2213 = g_code_1080;
F->ok_2214 = RT_R_EUNDEF;
F->ok_2214 = 0;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->inv_669)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->inv_669)).a)).kind) != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->inv_669)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->inv_669)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->inv_669)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->inv_669)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->inv_669)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_1108 = rt_add(rt_r_ichk(g_trial_1108), ((rt_int)1LL));
g_code_1080 = f_new_buffer_24();
{ rt_frame xf2215;
if (RT_TRY(xf2215)) {
f_lvalue_769((*(P1026)rt_nil_check(F->inv_669)).b, &F->lv_2209, &F->t_2210, &F->c_2211, &F->ro_2212);
F->ok_2214 = (rt_r_ichk((*(P1032)rt_nil_check(F->t_2210)).kind) == (((rt_int)12LL)));
RT_POP(xf2215);
} else {
RT_POP(xf2215);
int x2216 = rt_xcur;
if (0 || x2216 == ex_compile_error_1) {
F->ok_2214 = 0;
} else {
rt_raise(x2216);
}
}
}
g_trial_1108 = rt_sub(rt_r_ichk(g_trial_1108), ((rt_int)1LL));
g_code_1080 = F->saved_2213;
F->result_ = rt_r_echk(F->ok_2214);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_675(P1026 inv_671, rstr *op_672, rstr *q_673, int is_stmt_674) {
  struct f_wait_op_675fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_671 = inv_671;
F->op_672 = op_672;
F->q_673 = q_673;
F->is_stmt_674 = is_stmt_674;
F->x_2217 = NULL;
F->x_2217 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1026)rt_nil_check(F->inv_671)).line));
F->f_2218 = NULL;
F->f_2218 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1026)rt_nil_check(F->inv_671)).line));
F->qn_2219 = NULL;
F->qn_2219 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1026)rt_nil_check(F->inv_671)).line));
F->t_2220 = NULL;
(*(P1026)rt_nil_check(F->f_2218)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->inv_671)).a)).name))->all), rt_str("_", 1)), (*F->op_672)); b_; }));
(*(P1026)rt_nil_check(F->qn_2219)).name = f_mk_3(&(*F->q_673));
(*(P1026)rt_nil_check(F->qn_2219)).next = (*(P1026)rt_nil_check(F->inv_671)).b;
(*(P1026)rt_nil_check(F->x_2217)).a = F->f_2218;
(*(P1026)rt_nil_check(F->x_2217)).b = F->qn_2219;
{
F->r_2221 = rt_str_copy(f_gcall_948(F->x_2217, F->is_stmt_674, &F->t_2220));
if ((!F->is_stmt_674)) {
f_check_type_232(F->t_2220, g_ty_bool_1111, rt_r_ichk((*(P1026)rt_nil_check(F->inv_671)).line));
}
F->result_ = F->r_2221;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_680(P1026 s_676, rstr *arr_677, rstr *w_678, rt_int n_679) {
  struct f_user_wait_680fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_676 = s_676;
F->arr_677 = arr_677;
F->w_678 = w_678;
F->n_679 = n_679;
F->a_2222 = NULL;
F->a_2222 = (*(P1026)rt_nil_check(F->s_676)).a;
F->i_2223 = RT_R_IUNDEF;
F->i_2223 = ((rt_int)0LL);
F->tests_2224 = NULL;
F->tests_2224 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_2225 = NULL;
F->revokes_2225 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_177();
while ((F->a_2222 != NULL)) {
F->inv_2226 = NULL;
F->inv_2226 = (*(P1026)rt_nil_check(F->a_2222)).a;
while ((F->inv_2226 != NULL)) {
if (f_builtin_wait_670(F->inv_2226)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_668(F->inv_2226, &(*F->arr_677), rt_r_ichk(F->i_2223), 1); b_; }));
} else {
F->st_2227 = NULL;
F->st_2227 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1026)rt_nil_check(F->inv_2226)).line));
F->c_2228 = NULL;
F->qt_2229 = NULL;
F->qname_2230 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_2231 = NULL;
F->y_2231 = f_new_sym_181((((rt_int)1LL)), f_mk_3(&F->qname_2230));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_677), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->i_2223))), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P1026)rt_nil_check(F->st_2227)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->inv_2226)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_2229 = f_resolve_subtype_268(F->st_2227, &F->c_2228);
{
F->access_2232 = rt_str_copy(f_storage_519(&F->qname_2230, F->qt_2229));
f_init_storage_341(&F->access_2232, F->qt_2229, F->c_2228);
(*(P1036)rt_nil_check(F->y_2231)).t = F->qt_2229;
(*(P1036)rt_nil_check(F->y_2231)).c = F->c_2228;
f_bind_522(F->y_2231, &F->access_2232);
f_define_168(F->y_2231, rt_r_ichk((*(P1026)rt_nil_check(F->inv_2226)).line));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_675(F->inv_2226, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_2230, 1), rt_str(";", 1)); b_; }));
F->tests_2224 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->tests_2224))->all), rt_str("if (", 4)), f_wait_op_675(F->inv_2226, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_2230, 0)), rt_str(") { ", 4)), f_wait_op_675(F->inv_2226, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_2230, 1)), rt_str("; ", 2)), (*F->w_678)), rt_str(" = ", 3)), f_itos_7(rt_r_ichk(F->i_2223))), rt_str("; break; } ", 11)); b_; }));
F->revokes_2225 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->revokes_2225))->all), f_wait_op_675(F->inv_2226, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_2230, 1)), rt_str("; ", 2)); b_; }));
}
F->i_2223 = rt_add(rt_r_ichk(F->i_2223), ((rt_int)1LL));
F->inv_2226 = (*(P1026)rt_nil_check(F->inv_2226)).next;
}
F->a_2222 = (*(P1026)rt_nil_check(F->a_2222)).next;
}
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_678)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P1019)rt_nil_check(F->tests_2224))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_678), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_679)), rt_str(", ", 2)), (*F->arr_677)), rt_str("); if (", 7)), (*F->w_678)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_679)), rt_str(", ", 2)), (*F->arr_677)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_678)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_678)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P1019)rt_nil_check(F->revokes_2225))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_682(P1026 s_681) {
  struct f_st_wait_682fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_681 = s_681;
F->a_2233 = NULL;
F->a_2233 = (*(P1026)rt_nil_check(F->s_681)).a;
F->n_2234 = RT_R_IUNDEF;
F->n_2234 = ((rt_int)0LL);
F->first_2235 = RT_R_EUNDEF;
F->first_2235 = 1;
F->inits_2236 = NULL;
F->inits_2236 = f_new_buffer_24();
F->user_2237 = RT_R_EUNDEF;
F->user_2237 = 0;
F->arr_2238 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_2239 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_2233 != NULL)) {
F->inv_2240 = NULL;
F->inv_2240 = (*(P1026)rt_nil_check(F->a_2233)).a;
F->n_2234 = rt_add(rt_r_ichk(F->n_2234), f_list_len_71((*(P1026)rt_nil_check(F->a_2233)).a));
while ((F->inv_2240 != NULL)) {
if ((!f_builtin_wait_670(F->inv_2240))) {
F->user_2237 = 1;
}
F->inv_2240 = (*(P1026)rt_nil_check(F->inv_2240)).next;
}
F->a_2233 = (*(P1026)rt_nil_check(F->a_2233)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_2238), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->n_2234))), rt_str("];", 2)); b_; }));
if (rt_r_echk(F->user_2237)) {
f_user_wait_680(F->s_681, &F->arr_2238, &F->w_2239, rt_r_ichk(F->n_2234));
} else {
F->a_2233 = (*(P1026)rt_nil_check(F->s_681)).a;
F->n_2234 = ((rt_int)0LL);
while ((F->a_2233 != NULL)) {
F->inv_2241 = NULL;
F->inv_2241 = (*(P1026)rt_nil_check(F->a_2233)).a;
while ((F->inv_2241 != NULL)) {
f_put_27(F->inits_2236, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_668(F->inv_2241, &F->arr_2238, rt_r_ichk(F->n_2234), 0); b_; }));
F->n_2234 = rt_add(rt_r_ichk(F->n_2234), ((rt_int)1LL));
F->inv_2241 = (*(P1026)rt_nil_check(F->inv_2241)).next;
}
F->a_2233 = (*(P1026)rt_nil_check(F->a_2233)).next;
}
f_splice_34(g_code_1080, F->inits_2236);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_2239), rt_str(" = rt_wait(", 11)), f_itos_7(rt_r_ichk(F->n_2234))), rt_str(", ", 2)), F->arr_2238), rt_str(");", 2)); b_; }));
}
F->a_2233 = (*(P1026)rt_nil_check(F->s_681)).a;
F->n_2234 = ((rt_int)0LL);
while ((F->a_2233 != NULL)) {
F->conds_2242 = NULL;
F->conds_2242 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo2244 = ((rt_int)1LL), hi2245 = f_list_len_71((*(P1026)rt_nil_check(F->a_2233)).a);
for (rt_int it2246 = lo2244; it2246 <= hi2245; it2246++) {
F->i_2243 = it2246;
F->conds_2242 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->conds_2242))->all), rt_str(" || ", 4)), F->w_2239), rt_str(" == ", 4)), f_itos_7(rt_r_ichk(F->n_2234))); b_; }));
F->n_2234 = rt_add(rt_r_ichk(F->n_2234), ((rt_int)1LL));
}
}
if (rt_r_echk(F->first_2235)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1019)rt_nil_check(F->conds_2242))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1019)rt_nil_check(F->conds_2242))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2235 = 0;
f_gen_body_597((*(P1026)rt_nil_check(F->a_2233)).b);
F->a_2233 = (*(P1026)rt_nil_check(F->a_2233)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1026 f_call_node_686(rstr *name_683, P1026 arg_684, rt_int line_685) {
  struct f_call_node_686fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_683 = name_683;
F->arg_684 = arg_684;
F->line_685 = line_685;
F->x_2247 = NULL;
F->x_2247 = f_nn_65((((rt_int)10LL)), F->line_685);
F->f_2248 = NULL;
F->f_2248 = f_nn_65((((rt_int)7LL)), F->line_685);
(*(P1026)rt_nil_check(F->f_2248)).name = f_mk_3(&(*F->name_683));
(*(P1026)rt_nil_check(F->x_2247)).a = F->f_2248;
(*(P1026)rt_nil_check(F->x_2247)).b = f_copy_node_839(F->arg_684);
(*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->x_2247)).b)).next = NULL;
F->result_ = F->x_2247;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_688(P1026 s_687) {
  struct f_user_region_688fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_687 = s_687;
F->t_2249 = NULL;
F->f_2250 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_2251 = rt_str_copy(f_gcall_948(f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P1026)rt_nil_check(F->s_687)).a, rt_r_ichk((*(P1026)rt_nil_check(F->s_687)).line)), 1, &F->t_2249));
F->unlock_2252 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_948(f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P1026)rt_nil_check(F->s_687)).a, rt_r_ichk((*(P1026)rt_nil_check(F->s_687)).line)), 1, &F->t_2249)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_2251), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2250), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2250), rt_str(")) {", 4)); b_; }));
f_push_cleanup_605(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2250), rt_str("); ", 3)), F->unlock_2252); b_; }));
f_gen_body_597((*(P1026)rt_nil_check(F->s_687)).b);
f_pop_cleanup_606();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2250), rt_str("); ", 3)), F->unlock_2252); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2250), rt_str("); ", 3)), F->unlock_2252), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_690(P1026 s_689) {
  struct f_st_region_690fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_689 = s_689;
F->lv_2253 = NULL;
F->t_2254 = NULL;
F->c_2255 = NULL;
F->ro_2256 = RT_R_EUNDEF;
F->lk_2257 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_2258 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_769((*(P1026)rt_nil_check(F->s_689)).a, &F->lv_2253, &F->t_2254, &F->c_2255, &F->ro_2256);
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_2254)).kind) != (((rt_int)13LL)))) {
f_user_region_688(F->s_689);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_2257), rt_str(" = &", 4)), (((P1019)rt_nil_check(F->lv_2253))->all)), rt_str("; rt_region_enter(", 18)), F->lk_2257), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2258), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2258), rt_str(")) {", 4)); b_; }));
f_push_cleanup_605(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2258), rt_str("); rt_region_leave(", 19)), F->lk_2257), rt_str(");", 2)); b_; }));
f_gen_body_597((*(P1026)rt_nil_check(F->s_689)).b);
f_pop_cleanup_606();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2258), rt_str("); rt_region_leave(", 19)), F->lk_2257), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2258), rt_str("); rt_region_leave(", 19)), F->lk_2257), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1026 f_gparam_693(P1026 g_691, rstr *name_692) {
  struct f_gparam_693fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_691 = g_691;
F->name_692 = name_692;
F->p_2259 = NULL;
F->p_2259 = (*(P1026)rt_nil_check(F->g_691)).a;
while ((F->p_2259 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2259)).name))->all), (*F->name_692))) {
F->result_ = F->p_2259;
goto ret_;
}
F->p_2259 = (*(P1026)rt_nil_check(F->p_2259)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1036 f_bind_sym_695(P1026 p_694) {
  struct f_bind_sym_695fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_694 = p_694;
F->y_2260 = NULL;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->p_694)).ival) <= ((rt_int)2LL))) {
F->y_2260 = f_new_sym_181((((rt_int)5LL)), (*(P1026)rt_nil_check(F->p_694)).name);
} else {
F->y_2260 = f_new_sym_181((((rt_int)2LL)), (*(P1026)rt_nil_check(F->p_694)).name);
}
F->result_ = F->y_2260;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_698(P1036 a_696, P1036 b_697) {
  struct f_same_binds_698fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_696 = a_696;
F->b_697 = b_697;
F->x_2261 = NULL;
F->x_2261 = F->a_696;
F->y_2262 = NULL;
F->y_2262 = F->b_697;
while (((F->x_2261 != NULL) && (F->y_2262 != NULL))) {
if (((!rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->x_2261)).name))->all), (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_2262)).name))->all))) || (!f_same_binding_701(F->x_2261, F->y_2262)))) {
F->result_ = 0;
goto ret_;
}
F->x_2261 = (*(P1036)rt_nil_check(F->x_2261)).mnext;
F->y_2262 = (*(P1036)rt_nil_check(F->y_2262)).mnext;
}
F->result_ = ((F->x_2261 == NULL) && (F->y_2262 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_701(P1036 a_699, P1036 b_700) {
  struct f_same_binding_701fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_699 = a_699;
F->b_700 = b_700;
if ((rt_r_ichk((*(P1036)rt_nil_check(F->a_699)).kind) == (((rt_int)5LL)))) {
F->result_ = ((rt_r_ichk((*(P1036)rt_nil_check(F->b_700)).kind) == (((rt_int)5LL))) && f_same_221((*(P1036)rt_nil_check(F->a_699)).t, (*(P1036)rt_nil_check(F->b_700)).t));
goto ret_;
}
if (((rt_r_ichk((*(P1036)rt_nil_check(F->a_699)).kind) == (((rt_int)2LL))) && rt_r_echk((*(P1036)rt_nil_check(F->a_699)).hasmv))) {
F->result_ = (rt_r_echk((*(P1036)rt_nil_check(F->b_700)).hasmv) && (rt_r_ichk((*(P1036)rt_nil_check(F->a_699)).mvalue) == rt_r_ichk((*(P1036)rt_nil_check(F->b_700)).mvalue)));
goto ret_;
}
if (((rt_r_ichk((*(P1036)rt_nil_check(F->a_699)).kind) == (((rt_int)2LL))) && ((*(P1036)rt_nil_check(F->a_699)).mv != NULL))) {
if (((((*(P1036)rt_nil_check(F->b_700)).mv == NULL) || (rt_r_ichk((*(P1045)rt_nil_check((*(P1036)rt_nil_check(F->a_699)).mv)).kind) != rt_r_ichk((*(P1045)rt_nil_check((*(P1036)rt_nil_check(F->b_700)).mv)).kind))) || (!f_same_221((*(P1036)rt_nil_check(F->a_699)).t, (*(P1036)rt_nil_check(F->b_700)).t)))) {
F->result_ = 0;
goto ret_;
} else if ((rt_r_ichk((*(P1045)rt_nil_check((*(P1036)rt_nil_check(F->a_699)).mv)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_eq((((P1019)rt_nil_check((*(P1045)rt_nil_check((*(P1036)rt_nil_check(F->a_699)).mv)).s))->all), (((P1019)rt_nil_check((*(P1045)rt_nil_check((*(P1036)rt_nil_check(F->b_700)).mv)).s))->all));
goto ret_;
}
F->result_ = (rt_r_ichk((*(P1045)rt_nil_check((*(P1036)rt_nil_check(F->a_699)).mv)).i) == rt_r_ichk((*(P1045)rt_nil_check((*(P1036)rt_nil_check(F->b_700)).mv)).i));
goto ret_;
}
F->result_ = ((((*(P1036)rt_nil_check(F->a_699)).cname != NULL) && ((*(P1036)rt_nil_check(F->b_700)).cname != NULL)) && rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->a_699)).cname))->all), (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->b_700)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1036 f_tt_binds_706(P1026 gd_702, P1026 formals_703, P1026 actuals_704, rt_int line_705) {
  struct f_tt_binds_706fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_702 = gd_702;
F->formals_703 = formals_703;
F->actuals_704 = actuals_704;
F->line_705 = line_705;
F->f_2263 = NULL;
F->f_2263 = F->formals_703;
F->a_2264 = NULL;
F->a_2264 = F->actuals_704;
F->binds_2265 = NULL;
F->c_2266 = NULL;
F->at_2267 = NULL;
while (((F->f_2263 != NULL) && (F->a_2264 != NULL))) {
F->p_2268 = NULL;
F->p_2268 = f_gparam_693(F->gd_702, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->f_2263)).name))->all));
F->b_2269 = NULL;
if ((F->p_2268 == NULL)) {
f_fail_23(F->line_705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->f_2263)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_2269 = f_bind_sym_695(F->p_2268);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->p_2268)).ival) <= ((rt_int)2LL))) {
if ((rt_r_ichk((*(P1026)rt_nil_check(F->a_2264)).kind) >= (((rt_int)70LL)))) {
(*(P1036)rt_nil_check(F->b_2269)).t = f_resolve_subtype_268(F->a_2264, &F->c_2266);
} else {
F->st_2270 = NULL;
F->st_2270 = f_nn_65((((rt_int)80LL)), F->line_705);
(*(P1026)rt_nil_check(F->st_2270)).name = (*(P1026)rt_nil_check(F->a_2264)).name;
(*(P1036)rt_nil_check(F->b_2269)).t = f_resolve_subtype_268(F->st_2270, &F->c_2266);
}
(*(P1036)rt_nil_check(F->b_2269)).c = F->c_2266;
if ((((*(P1026)rt_nil_check(F->p_2268)).b != NULL) && (!f_type_allowed_710((*(P1036)rt_nil_check(F->b_2269)).t, (*(P1026)rt_nil_check(F->p_2268)).b, F->binds_2265)))) {
f_fail_23(F->line_705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2268)).name))->all)); b_; }));
}
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->p_2268)).ival) <= ((rt_int)5LL))) {
if ((rt_r_ichk((*(P1026)rt_nil_check(F->a_2264)).kind) != (((rt_int)7LL)))) {
f_fail_23(F->line_705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2268)).name))->all)); b_; }));
}
F->b_2269 = f_copy_sym_438(f_pick_operation_721(rt_r_ichk((*(P1026)rt_nil_check(F->p_2268)).ival), &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->a_2264)).name))->all), (*(P1026)rt_nil_check(F->p_2268)).b, (*(P1026)rt_nil_check(F->p_2268)).a, F->binds_2265, F->line_705));
(*(P1036)rt_nil_check(F->b_2269)).name = (*(P1026)rt_nil_check(F->p_2268)).name;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->p_2268)).ival) == ((rt_int)7LL)) || (rt_r_ichk((*(P1026)rt_nil_check(F->p_2268)).ival) == ((rt_int)8LL)))) {
F->ok_2271 = RT_R_EUNDEF;
(*(P1036)rt_nil_check(F->b_2269)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_800(F->a_2264, NULL, &F->at_2267)), rt_str(")", 1)); b_; }));
(*(P1036)rt_nil_check(F->b_2269)).t = F->at_2267;
if ((((rt_r_ichk((*(P1026)rt_nil_check(F->p_2268)).ival) == ((rt_int)7LL)) && (rt_r_ichk((*(P1032)rt_nil_check(F->at_2267)).kind) != (((rt_int)5LL)))) || ((rt_r_ichk((*(P1026)rt_nil_check(F->p_2268)).ival) == ((rt_int)8LL)) && ((*(P1032)rt_nil_check(f_base_of_223(F->at_2267))).kind != (((rt_int)4LL)))))) {
f_fail_23(F->line_705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2268)).name))->all)), rt_str(" is not of the kind its constraint requires", 43)); b_; }));
}
(*(P1036)rt_nil_check(F->b_2269)).mv = f_meval_375(F->a_2264, &F->ok_2271);
if ((!rt_r_echk(F->ok_2271))) {
f_fail_23(F->line_705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2268)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
if ((rt_r_ichk((*(P1045)rt_nil_check((*(P1036)rt_nil_check(F->b_2269)).mv)).kind) == (((rt_int)4LL)))) {
(*(P1045)rt_nil_check((*(P1036)rt_nil_check(F->b_2269)).mv)).i = f_lit_index_265((*(P1032)rt_nil_check(f_base_of_223(F->at_2267))).lits, &(((P1019)rt_nil_check((*(P1045)rt_nil_check((*(P1036)rt_nil_check(F->b_2269)).mv)).s))->all));
}
} else {
F->ok_2272 = RT_R_EUNDEF;
(*(P1036)rt_nil_check(F->b_2269)).t = f_resolve_subtype_268((*(P1026)rt_nil_check(F->p_2268)).a, &F->c_2266);
(*(P1036)rt_nil_check(F->b_2269)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_checked_213((*(P1036)rt_nil_check(F->b_2269)).t, F->c_2266, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800(F->a_2264, (*(P1036)rt_nil_check(F->b_2269)).t, &F->at_2267); b_; }))), rt_str(")", 1)); b_; }));
f_check_type_232(F->at_2267, (*(P1036)rt_nil_check(F->b_2269)).t, F->line_705);
(*(P1036)rt_nil_check(F->b_2269)).mvalue = f_manifest_366(F->a_2264, &F->ok_2272);
(*(P1036)rt_nil_check(F->b_2269)).hasmv = rt_r_echk(F->ok_2272);
(*(P1036)rt_nil_check(F->b_2269)).mv = f_meval_375(F->a_2264, &F->ok_2272);
if ((!rt_r_echk(F->ok_2272))) {
f_fail_23(F->line_705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2268)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
}
(*(P1036)rt_nil_check(F->b_2269)).mnext = F->binds_2265;
F->binds_2265 = F->b_2269;
F->f_2263 = (*(P1026)rt_nil_check(F->f_2263)).next;
F->a_2264 = (*(P1026)rt_nil_check(F->a_2264)).next;
}
F->result_ = F->binds_2265;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_allowed_710(P1032 t_707, P1026 items_708, P1036 binds_709) {
  struct f_type_allowed_710fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_707 = t_707;
F->items_708 = items_708;
F->binds_709 = binds_709;
F->it_2273 = NULL;
F->it_2273 = F->items_708;
F->b_2274 = NULL;
F->b_2274 = f_base_of_223(F->t_707);
while ((F->it_2273 != NULL)) {
if ((((rt_r_ichk((*(P1026)rt_nil_check(F->it_2273)).kind) == (((rt_int)80LL))) && ((*(P1026)rt_nil_check(F->it_2273)).b == NULL)) && (f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->it_2273)).name))->all)) == NULL))) {
F->w_2275 = rt_str_copy((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->it_2273)).name))->all));
if (((((((((((rt_str_eq(F->w_2275, rt_str("INT", 3)) && (rt_r_ichk((*(P1032)rt_nil_check(F->b_2274)).kind) == (((rt_int)1LL)))) || (rt_str_eq(F->w_2275, rt_str("FLOAT", 5)) && (rt_r_ichk((*(P1032)rt_nil_check(F->b_2274)).kind) == (((rt_int)3LL))))) || (rt_str_eq(F->w_2275, rt_str("BOOL", 4)) && (rt_r_ichk((*(P1032)rt_nil_check(F->b_2274)).kind) == (((rt_int)2LL))))) || (rt_str_eq(F->w_2275, rt_str("ENUM", 4)) && (rt_r_ichk((*(P1032)rt_nil_check(F->b_2274)).kind) == (((rt_int)4LL))))) || (rt_str_eq(F->w_2275, rt_str("STRING", 6)) && (rt_r_ichk((*(P1032)rt_nil_check(F->b_2274)).kind) == (((rt_int)5LL))))) || (rt_str_eq(F->w_2275, rt_str("ARRAY", 5)) && (rt_r_ichk((*(P1032)rt_nil_check(F->b_2274)).kind) == (((rt_int)6LL))))) || (rt_str_eq(F->w_2275, rt_str("RECORD", 6)) && (rt_r_ichk((*(P1032)rt_nil_check(F->b_2274)).kind) == (((rt_int)7LL))))) || (rt_str_eq(F->w_2275, rt_str("UNION", 5)) && (rt_r_ichk((*(P1032)rt_nil_check(F->b_2274)).kind) == (((rt_int)17LL))))) || (rt_str_eq(F->w_2275, rt_str("SET", 3)) && (rt_r_ichk((*(P1032)rt_nil_check(F->b_2274)).kind) == (((rt_int)16LL))))) || (rt_str_eq(F->w_2275, rt_str("ASCII", 5)) && f_same_221(F->t_707, g_ty_ascii_1113)))) {
F->result_ = 1;
goto ret_;
}
} else {
F->c_2276 = NULL;
if (f_same_221(f_resolve_in_binds_714(F->it_2273, F->binds_709, &F->c_2276), F->t_707)) {
F->result_ = 1;
goto ret_;
}
}
F->it_2273 = (*(P1026)rt_nil_check(F->it_2273)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1032 f_resolve_in_binds_714(P1026 st_711, P1036 binds_712, P1028 *c_713) {
  struct f_resolve_in_binds_714fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_711 = st_711;
F->binds_712 = binds_712;
F->c_713 = c_713;
F->c_713v = *F->c_713;
F->b_2277 = NULL;
F->b_2277 = F->binds_712;
F->t_2278 = NULL;
f_open_scope_177();
while ((F->b_2277 != NULL)) {
F->z_2279 = NULL;
F->z_2279 = f_copy_sym_438(F->b_2277);
f_define_168(F->z_2279, rt_r_ichk((*(P1026)rt_nil_check(F->st_711)).line));
F->b_2277 = (*(P1036)rt_nil_check(F->b_2277)).mnext;
}
F->t_2278 = f_resolve_subtype_268(F->st_711, &F->c_713v);
f_close_scope_178();
F->result_ = F->t_2278;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_713) = F->c_713v;
  RT_FPOP();
  return F->result_;
}

static P1036 f_pick_operation_721(rt_int kind_715, rstr *name_716, P1026 sig_717, P1026 res_718, P1036 binds_719, rt_int line_720) {
  struct f_pick_operation_721fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_715 = kind_715;
F->name_716 = name_716;
F->sig_717 = sig_717;
F->res_718 = res_718;
F->binds_719 = binds_719;
F->line_720 = line_720;
F->y_2280 = NULL;
F->c_2281 = NULL;
F->want_2282 = RT_R_IUNDEF;
F->want_2282 = (((rt_int)4LL));
if ((F->kind_715 == ((rt_int)4LL))) {
F->want_2282 = (((rt_int)3LL));
} else if ((F->kind_715 == ((rt_int)5LL))) {
F->want_2282 = (((rt_int)9LL));
}
{ rt_int lo2284 = ((rt_int)1LL), hi2285 = ((rt_int)3LL);
for (rt_int it2286 = lo2284; it2286 <= hi2285; it2286++) {
F->pass_2283 = it2286;
F->y_2280 = f_overload_chain_928(&(*F->name_716), F->pass_2283);
while ((F->y_2280 != NULL)) {
if (((rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_2280)).name))->all), (*F->name_716)) && ((rt_r_ichk((*(P1036)rt_nil_check(F->y_2280)).kind) == rt_r_ichk(F->want_2282)) || ((F->kind_715 == ((rt_int)0LL)) && ((rt_r_ichk((*(P1036)rt_nil_check(F->y_2280)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_2280)).kind) == (((rt_int)3LL))))))) && ((F->pass_2283 != ((rt_int)1LL)) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_2280)).depth) >= rt_r_ichk(g_gdepth_1099))))) {
F->ok_2287 = RT_R_EUNDEF;
F->ok_2287 = 1;
if (((F->sig_717 != NULL) || (F->kind_715 == ((rt_int)0LL)))) {
F->s_2288 = NULL;
F->s_2288 = F->sig_717;
F->pm_2289 = NULL;
F->pm_2289 = (*(P1036)rt_nil_check(F->y_2280)).params;
while (((rt_r_echk(F->ok_2287) && (F->s_2288 != NULL)) && (F->pm_2289 != NULL))) {
F->ok_2287 = f_same_221(f_resolve_in_binds_714(F->s_2288, F->binds_719, &F->c_2281), (*(P1038)rt_nil_check(F->pm_2289)).t);
F->s_2288 = (*(P1026)rt_nil_check(F->s_2288)).next;
F->pm_2289 = (*(P1038)rt_nil_check(F->pm_2289)).next;
}
F->ok_2287 = ((rt_r_echk(F->ok_2287) && (F->s_2288 == NULL)) && (F->pm_2289 == NULL));
}
if ((rt_r_echk(F->ok_2287) && (F->res_718 != NULL))) {
F->ok_2287 = ((rt_r_ichk((*(P1036)rt_nil_check(F->y_2280)).kind) == (((rt_int)3LL))) && f_same_221(f_resolve_in_binds_714(F->res_718, F->binds_719, &F->c_2281), (*(P1036)rt_nil_check(F->y_2280)).result));
}
if (rt_r_echk(F->ok_2287)) {
F->result_ = F->y_2280;
goto ret_;
}
}
F->y_2280 = (*(P1036)rt_nil_check(F->y_2280)).chain;
}
}
}
f_fail_23(F->line_720, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no ", 3), f_kind_word_723(F->kind_715)), (*F->name_716)), rt_str(" has the interface the generic requires", 39)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_word_723(rt_int kind_722) {
  struct f_kind_word_723fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_722 = kind_722;
if ((F->kind_722 == ((rt_int)3LL))) {
F->result_ = rt_str("procedure ", 10);
goto ret_;
} else if ((F->kind_722 == ((rt_int)4LL))) {
F->result_ = rt_str("function ", 9);
goto ret_;
} else if ((F->kind_722 == ((rt_int)5LL))) {
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

static P1036 f_need_binds_727(P1026 gd_724, P1036 binds_725, rt_int line_726) {
  struct f_need_binds_727fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_724 = gd_724;
F->binds_725 = binds_725;
F->line_726 = line_726;
F->it_2290 = NULL;
F->it_2290 = (*(P1026)rt_nil_check(F->gd_724)).d;
F->r_2291 = NULL;
F->r_2291 = F->binds_725;
while ((F->it_2290 != NULL)) {
F->found_2292 = RT_R_EUNDEF;
F->found_2292 = 0;
F->y_2293 = NULL;
F->y_2293 = ({ A1042 b_ = (((P1040)rt_nil_check(g_table_1066))->all); b_.p[(rt_index(f_hash_161(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->it_2290)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while (((F->y_2293 != NULL) && (!rt_r_echk(F->found_2292)))) {
if ((rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_2293)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->it_2290)).name))->all)) && (((rt_r_ichk((*(P1036)rt_nil_check(F->y_2293)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_2293)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_2293)).kind) == (((rt_int)9LL)))))) {
F->found_2292 = 1;
}
F->y_2293 = (*(P1036)rt_nil_check(F->y_2293)).chain;
}
if (rt_r_echk(F->found_2292)) {
F->z_2294 = NULL;
F->z_2294 = f_copy_sym_438(f_pick_operation_721(rt_r_ichk((*(P1026)rt_nil_check(F->it_2290)).ival), &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->it_2290)).name))->all), (*(P1026)rt_nil_check(F->it_2290)).b, (*(P1026)rt_nil_check(F->it_2290)).a, F->r_2291, F->line_726));
(*(P1036)rt_nil_check(F->z_2294)).mnext = F->r_2291;
F->r_2291 = F->z_2294;
} else if ((!f_is_definable_138(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->it_2290)).name))->all)))) {
f_fail_23(F->line_726, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the generic needs ", 18), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->it_2290)).name))->all)), rt_str(", which is not known where it is invoked", 40)); b_; }));
}
F->it_2290 = (*(P1026)rt_nil_check(F->it_2290)).next;
}
F->result_ = F->r_2291;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_729(P1026 st_728) {
  struct f_generic_use_729fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_728 = st_728;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->st_728)).kind) == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P1036)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P1026)rt_nil_check(F->st_728)).kind) == (((rt_int)80LL))) && ((*(P1026)rt_nil_check(F->st_728)).a != NULL)) && (f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->st_728)).name))->all)) != NULL)) && ((*(P1036)rt_nil_check(f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->st_728)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1036 f_infer_from_734(P1026 gd_730, P1026 pat_731, P1032 t_732, P1036 known_733) {
  struct f_infer_from_734fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_730 = gd_730;
F->pat_731 = pat_731;
F->t_732 = t_732;
F->known_733 = known_733;
F->binds_2295 = NULL;
F->binds_2295 = F->known_733;
F->e_2296 = NULL;
F->e_2296 = (*(P1026)rt_nil_check(F->pat_731)).a;
F->tp_2297 = NULL;
if (((F->t_732 == NULL) || ((*(P1032)rt_nil_check(F->t_732)).gen == NULL))) {
F->result_ = F->binds_2295;
goto ret_;
}
F->tp_2297 = (*(P1026)rt_nil_check((*(P1036)rt_nil_check((*(P1032)rt_nil_check(F->t_732)).gen)).decl)).a;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->pat_731)).kind) == (((rt_int)78LL)))) {
F->e_2296 = f_copy_node_839((*(P1026)rt_nil_check(F->pat_731)).a);
(*(P1026)rt_nil_check(F->e_2296)).next = NULL;
}
while (((F->e_2296 != NULL) && (F->tp_2297 != NULL))) {
F->nm_2298 = NULL;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->e_2296)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->e_2296)).kind) == (((rt_int)80LL))))) {
F->nm_2298 = (*(P1026)rt_nil_check(F->e_2296)).name;
}
if ((((F->nm_2298 != NULL) && (f_gparam_693(F->gd_730, &(((P1019)rt_nil_check(F->nm_2298))->all)) != NULL)) && ((*(P1026)rt_nil_check(f_gparam_693(F->gd_730, &(((P1019)rt_nil_check(F->nm_2298))->all)))).ival <= ((rt_int)2LL)))) {
F->q_2299 = NULL;
F->q_2299 = F->binds_2295;
F->have_2300 = RT_R_EUNDEF;
F->have_2300 = 0;
while ((F->q_2299 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->q_2299)).name))->all), (((P1019)rt_nil_check(F->nm_2298))->all))) {
F->have_2300 = 1;
}
F->q_2299 = (*(P1036)rt_nil_check(F->q_2299)).mnext;
}
if ((!rt_r_echk(F->have_2300))) {
F->g_2301 = NULL;
F->g_2301 = (*(P1032)rt_nil_check(F->t_732)).gbinds;
while ((F->g_2301 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->g_2301)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->tp_2297)).name))->all))) {
F->b_2302 = NULL;
F->b_2302 = f_bind_sym_695(f_gparam_693(F->gd_730, &(((P1019)rt_nil_check(F->nm_2298))->all)));
(*(P1036)rt_nil_check(F->b_2302)).t = (*(P1036)rt_nil_check(F->g_2301)).t;
(*(P1036)rt_nil_check(F->b_2302)).c = (*(P1036)rt_nil_check(F->g_2301)).c;
(*(P1036)rt_nil_check(F->b_2302)).mnext = F->binds_2295;
F->binds_2295 = F->b_2302;
}
F->g_2301 = (*(P1036)rt_nil_check(F->g_2301)).mnext;
}
}
}
F->e_2296 = (*(P1026)rt_nil_check(F->e_2296)).next;
F->tp_2297 = (*(P1026)rt_nil_check(F->tp_2297)).next;
}
F->result_ = F->binds_2295;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1032 f_instantiate_type_740(P1036 g_735, P1026 tt_736, P1026 args_737, P1028 *c_738, rt_int line_739) {
  struct f_instantiate_type_740fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_735 = g_735;
F->tt_736 = tt_736;
F->args_737 = args_737;
F->c_738 = c_738;
F->c_738v = *F->c_738;
F->line_739 = line_739;
F->gd_2303 = NULL;
F->gd_2303 = (*(P1036)rt_nil_check(F->g_735)).decl;
F->pat_2304 = NULL;
F->pat_2304 = (*(P1026)rt_nil_check(F->gd_2303)).b;
F->binds_2305 = NULL;
F->binds_2305 = f_tt_binds_706(F->gd_2303, (*(P1026)rt_nil_check(F->pat_2304)).e, F->tt_736, F->line_739);
F->inst_2306 = NULL;
F->inst_2306 = g_all_insts_1068;
F->t_2307 = NULL;
F->saved_caps_2308 = NULL;
F->saved_caps_2308 = g_caps_1085;
F->saved_env_2309 = NULL;
F->saved_env_2309 = g_genv_1067;
F->saved_gdepth_2310 = RT_R_IUNDEF;
F->saved_gdepth_2310 = rt_r_ichk(g_gdepth_1099);
F->c_738v = f_new_cons_184();
(*(P1028)rt_nil_check(F->c_738v)).args = F->args_737;
while ((F->inst_2306 != NULL)) {
if ((((*(P1036)rt_nil_check(F->inst_2306)).decl == F->pat_2304) && f_same_binds_698((*(P1036)rt_nil_check(F->inst_2306)).members, F->binds_2305))) {
F->result_ = (*(P1036)rt_nil_check(F->inst_2306)).t;
goto ret_;
}
F->inst_2306 = (*(P1036)rt_nil_check(F->inst_2306)).insts;
}
f_open_scope_177();
{
F->b_2311 = NULL;
F->b_2311 = F->binds_2305;
while ((F->b_2311 != NULL)) {
f_define_168(F->b_2311, F->line_739);
F->b_2311 = (*(P1036)rt_nil_check(F->b_2311)).mnext;
}
}
g_caps_1085 = NULL;
g_genv_1067 = (*(P1036)rt_nil_check(F->g_735)).env;
g_gdepth_1099 = rt_r_ichk(g_depth_1069);
{
F->y_2312 = NULL;
F->y_2312 = f_new_sym_181((((rt_int)5LL)), (*(P1026)rt_nil_check(F->pat_2304)).name);
F->yc_2313 = NULL;
(*(P1036)rt_nil_check(F->y_2312)).decl = F->pat_2304;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->pat_2304)).kind) == (((rt_int)44LL)))) {
F->t_2307 = f_new_typ_183((((rt_int)8LL)));
(*(P1032)rt_nil_check(F->t_2307)).name = (*(P1026)rt_nil_check(F->pat_2304)).name;
(*(P1032)rt_nil_check(F->t_2307)).decl = F->pat_2304;
(*(P1036)rt_nil_check(F->y_2312)).t = F->t_2307;
f_define_168(F->y_2312, F->line_739);
f_finish_ptr_475(F->t_2307);
} else {
f_define_168(F->y_2312, F->line_739);
F->t_2307 = f_new_type_318(F->y_2312, f_nn_65((((rt_int)80LL)), F->line_739), &F->yc_2313);
}
}
g_caps_1085 = F->saved_caps_2308;
g_genv_1067 = F->saved_env_2309;
g_gdepth_1099 = rt_r_ichk(F->saved_gdepth_2310);
(*(P1032)rt_nil_check(F->t_2307)).gen = F->g_735;
(*(P1032)rt_nil_check(F->t_2307)).gbinds = F->binds_2305;
f_close_scope_178();
{ R1037 *cell2314 = rt_alloc(sizeof(R1037));
(*cell2314).name = NULL;
(*cell2314).t = NULL;
(*cell2314).c = NULL;
(*cell2314).access = NULL;
(*cell2314).cname = NULL;
(*cell2314).st = NULL;
(*cell2314).decl = NULL;
(*cell2314).params = NULL;
(*cell2314).result = NULL;
(*cell2314).members = NULL;
(*cell2314).mnext = NULL;
(*cell2314).binds = NULL;
(*cell2314).insts = NULL;
(*cell2314).env = NULL;
(*cell2314).chain = NULL;
(*cell2314).stack = NULL;
(*cell2314).owner = NULL;
(*cell2314).gctx = NULL;
(*cell2314).mv = NULL;
(*cell2314).reqs = NULL;
(*cell2314).home = NULL;
(*cell2314).capn = NULL;
(*cell2314).tbinds = NULL;
(*cell2314).loc = NULL;
(*cell2314).reqs_sym = NULL;
F->inst_2306 = cell2314;
}
(*(P1036)rt_nil_check(F->inst_2306)).kind = (((rt_int)5LL));
(*(P1036)rt_nil_check(F->inst_2306)).name = (*(P1036)rt_nil_check(F->g_735)).name;
(*(P1036)rt_nil_check(F->inst_2306)).decl = F->pat_2304;
(*(P1036)rt_nil_check(F->inst_2306)).t = F->t_2307;
(*(P1036)rt_nil_check(F->inst_2306)).members = F->binds_2305;
(*(P1036)rt_nil_check(F->inst_2306)).insts = g_all_insts_1068;
g_all_insts_1068 = F->inst_2306;
F->result_ = F->t_2307;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_738) = F->c_738v;
  RT_FPOP();
  return F->result_;
}

static P1036 f_instantiate_745(P1036 g_741, P1026 tt_742, P1026 args_743, rt_int line_744) {
  struct f_instantiate_745fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_741 = g_741;
F->tt_742 = tt_742;
F->args_743 = args_743;
F->line_744 = line_744;
F->gd_2315 = NULL;
F->gd_2315 = (*(P1036)rt_nil_check(F->g_741)).decl;
F->pat_2316 = NULL;
F->pat_2316 = (*(P1026)rt_nil_check(F->gd_2315)).b;
F->binds_2317 = NULL;
F->f_2318 = NULL;
F->f_2318 = (*(P1026)rt_nil_check(F->pat_2316)).e;
F->a_2319 = NULL;
F->a_2319 = F->tt_742;
F->fp_2320 = NULL;
F->fp_2320 = (*(P1026)rt_nil_check(F->pat_2316)).a;
F->inst_2321 = NULL;
F->at_2322 = NULL;
F->c_2323 = NULL;
F->saved_fctx_2324 = NULL;
F->saved_fctx_2324 = g_fctx_1084;
F->saved_in_2325 = RT_R_EUNDEF;
F->saved_in_2325 = rt_r_echk(g_in_func_1082);
F->saved_level_2326 = RT_R_IUNDEF;
F->saved_level_2326 = rt_r_ichk(g_cur_level_1083);
F->saved_sym_2327 = NULL;
F->saved_sym_2327 = g_func_sym_1094;
F->saved_code_2328 = NULL;
F->saved_code_2328 = g_code_1080;
F->saved_env_2329 = NULL;
F->saved_env_2329 = g_genv_1067;
F->saved_gdepth_2330 = RT_R_IUNDEF;
F->saved_gdepth_2330 = rt_r_ichk(g_gdepth_1099);
F->binds_2317 = f_tt_binds_706(F->gd_2315, F->f_2318, F->a_2319, F->line_744);
F->a_2319 = F->args_743;
while (((F->fp_2320 != NULL) && (F->a_2319 != NULL))) {
if (f_generic_use_729((*(P1026)rt_nil_check(F->fp_2320)).a)) {
F->v_2331 = rt_str_copy(f_gexpr_800(F->a_2319, NULL, &F->at_2322));
F->binds_2317 = f_infer_from_734(F->gd_2315, (*(P1026)rt_nil_check(F->fp_2320)).a, F->at_2322, F->binds_2317);
} else if ((((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->fp_2320)).a)).kind) == (((rt_int)80LL))) && (f_gparam_693(F->gd_2315, &(((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->fp_2320)).a)).name))->all)) != NULL)) && ((*(P1026)rt_nil_check(f_gparam_693(F->gd_2315, &(((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->fp_2320)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_2332 = RT_R_EUNDEF;
F->known_2332 = 0;
F->q_2333 = NULL;
F->q_2333 = F->binds_2317;
while ((F->q_2333 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->q_2333)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->fp_2320)).a)).name))->all))) {
F->known_2332 = 1;
}
F->q_2333 = (*(P1036)rt_nil_check(F->q_2333)).mnext;
}
if ((!rt_r_echk(F->known_2332))) {
F->b_2334 = NULL;
F->b_2334 = f_bind_sym_695(f_gparam_693(F->gd_2315, &(((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->fp_2320)).a)).name))->all)));
F->v_2335 = rt_str_copy(f_gexpr_800(F->a_2319, NULL, &F->at_2322));
(*(P1036)rt_nil_check(F->b_2334)).t = F->at_2322;
(*(P1036)rt_nil_check(F->b_2334)).c = g_no_cons_1128;
if ((((*(P1026)rt_nil_check(f_gparam_693(F->gd_2315, &(((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->fp_2320)).a)).name))->all)))).b != NULL) && (!f_type_allowed_710(F->at_2322, (*(P1026)rt_nil_check(f_gparam_693(F->gd_2315, &(((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->fp_2320)).a)).name))->all)))).b, F->binds_2317)))) {
f_fail_23(F->line_744, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->fp_2320)).a)).name))->all)); b_; }));
}
(*(P1036)rt_nil_check(F->b_2334)).mnext = F->binds_2317;
F->binds_2317 = F->b_2334;
}
}
F->fp_2320 = (*(P1026)rt_nil_check(F->fp_2320)).next;
F->a_2319 = (*(P1026)rt_nil_check(F->a_2319)).next;
}
F->binds_2317 = f_need_binds_727(F->gd_2315, F->binds_2317, F->line_744);
F->inst_2321 = g_all_insts_1068;
while ((F->inst_2321 != NULL)) {
if ((((*(P1036)rt_nil_check(F->inst_2321)).decl == F->pat_2316) && f_same_binds_698((*(P1036)rt_nil_check(F->inst_2321)).members, F->binds_2317))) {
F->result_ = F->inst_2321;
goto ret_;
}
F->inst_2321 = (*(P1036)rt_nil_check(F->inst_2321)).insts;
}
g_fctx_1084 = (*(P1036)rt_nil_check(F->g_741)).gctx;
g_in_func_1082 = (rt_r_ichk((*(P1036)rt_nil_check(F->g_741)).level) > ((rt_int)0LL));
g_cur_level_1083 = rt_r_ichk((*(P1036)rt_nil_check(F->g_741)).level);
g_func_sym_1094 = (*(P1036)rt_nil_check(F->g_741)).owner;
g_code_1080 = f_new_buffer_24();
f_open_scope_177();
g_gdepth_1099 = rt_r_ichk(g_depth_1069);
{
F->b_2336 = NULL;
F->b_2336 = F->binds_2317;
while ((F->b_2336 != NULL)) {
f_define_168(F->b_2336, F->line_744);
F->b_2336 = (*(P1036)rt_nil_check(F->b_2336)).mnext;
}
}
g_genv_1067 = (*(P1036)rt_nil_check(F->g_741)).env;
F->inst_2321 = f_build_subprogram_505(F->pat_2316);
(*(P1036)rt_nil_check(F->inst_2321)).members = F->binds_2317;
(*(P1036)rt_nil_check(F->inst_2321)).insts = g_all_insts_1068;
g_all_insts_1068 = F->inst_2321;
f_define_168(F->inst_2321, F->line_744);
f_gen_subprogram_576(F->pat_2316, F->inst_2321);
f_close_scope_178();
g_fctx_1084 = F->saved_fctx_2324;
g_in_func_1082 = rt_r_echk(F->saved_in_2325);
g_cur_level_1083 = rt_r_ichk(F->saved_level_2326);
g_func_sym_1094 = F->saved_sym_2327;
g_code_1080 = F->saved_code_2328;
g_genv_1067 = F->saved_env_2329;
g_gdepth_1099 = rt_r_ichk(F->saved_gdepth_2330);
F->result_ = F->inst_2321;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_747(P1036 y_746) {
  struct f_access_of_747fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_746 = y_746;
F->p_2337 = NULL;
F->p_2337 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if ((rt_r_ichk((*(P1036)rt_nil_check(F->y_746)).level) <= ((rt_int)0LL))) {
F->result_ = (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_746)).access))->all);
goto ret_;
}
{ rt_int lo2339 = ((rt_int)1LL), hi2340 = rt_sub(rt_r_ichk(g_cur_level_1083), rt_r_ichk((*(P1036)rt_nil_check(F->y_746)).level));
for (rt_int it2341 = lo2339; it2341 <= hi2340; it2341++) {
F->i_2338 = it2341;
F->p_2337 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->p_2337))->all), rt_str("->up", 4)); b_; }));
}
}
if (rt_r_echk((*(P1036)rt_nil_check(F->y_746)).byref)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P1019)rt_nil_check(F->p_2337))->all)), rt_str("->", 2)), (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_746)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->p_2337))->all), rt_str("->", 2)), (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_746)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_import_of_750(P1026 l_748, rstr *name_749) {
  struct f_import_of_750fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_748 = l_748;
F->name_749 = name_749;
F->p_2342 = NULL;
F->p_2342 = F->l_748;
while ((F->p_2342 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2342)).name))->all), (*F->name_749))) {
F->result_ = F->p_2342;
goto ret_;
}
F->p_2342 = (*(P1026)rt_nil_check(F->p_2342)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_753(P1036 y_751, rt_int line_752) {
  struct f_check_import_753fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_751 = y_751;
F->line_752 = line_752;
F->c_2343 = NULL;
F->c_2343 = g_fctx_1084;
F->ro_2344 = RT_R_EUNDEF;
F->ro_2344 = 0;
while (((F->c_2343 != NULL) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_751)).depth) < rt_r_ichk((*(P1043)rt_nil_check(F->c_2343)).depth)))) {
if ((!rt_r_echk((*(P1043)rt_nil_check(F->c_2343)).all_imp))) {
F->imp_2345 = NULL;
F->imp_2345 = f_import_of_750((*(P1043)rt_nil_check(F->c_2343)).imps, &(((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_751)).name))->all));
if ((F->imp_2345 == NULL)) {
f_fail_23(F->line_752, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_751)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->imp_2345)).ival) == ((rt_int)1LL))) {
F->ro_2344 = 1;
}
}
F->c_2343 = (*(P1043)rt_nil_check(F->c_2343)).next;
}
F->result_ = rt_r_echk(F->ro_2344);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_755(rstr *s_754) {
  struct f_c_ident_755fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_754 = s_754;
if (((((rt_int)(((*F->s_754)).len)) > ((rt_int)1LL)) && (rt_r_echk(rt_str_get((*F->s_754), ((rt_int)1LL))) == 46))) {
F->result_ = rt_str_cat(rt_str("dot_", 4), f_lower_s_15(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_754), ((rt_int)2LL), ((rt_int)(((*F->s_754)).len))); b_; })));
goto ret_;
} else if (((((rt_int)(((*F->s_754)).len)) > ((rt_int)1LL)) && (rt_r_echk(rt_str_get((*F->s_754), ((rt_int)1LL))) == 40))) {
F->r_2346 = NULL;
F->r_2346 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel_", 4); b_; }));
{ rt_int lo2348 = ((rt_int)2LL), hi2349 = rt_sub(((rt_int)(((*F->s_754)).len)), ((rt_int)1LL));
for (rt_int it2350 = lo2348; it2350 <= hi2349; it2350++) {
F->i_2347 = it2350;
if ((rt_r_echk(rt_str_get((*F->s_754), F->i_2347)) == 42)) {
F->r_2346 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_2346))->all), rt_str("s", 1)); b_; }));
} else if ((rt_r_echk(rt_str_get((*F->s_754), F->i_2347)) == 44)) {
F->r_2346 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_2346))->all), rt_str("_", 1)); b_; }));
} else if ((rt_r_echk(rt_str_get((*F->s_754), F->i_2347)) == 46)) {
F->r_2346 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_2346))->all), rt_str("r", 1)); b_; }));
}
}
}
F->result_ = (((P1019)rt_nil_check(F->r_2346))->all);
goto ret_;
} else if (rt_str_eq((*F->s_754), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_754), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_754), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_754), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_754), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_754), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_754), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_754), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_754), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_754), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_754), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_754), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_754), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_754), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_754));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cell_deref_758(P1032 t_756, rstr *p_757) {
  struct f_cell_deref_758fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_756 = t_756;
F->p_757 = p_757;
if ((((*(P1032)rt_nil_check(F->t_756)).decl != NULL) && ((*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->t_756)).decl)).b != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->p_757)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*F->p_757)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_761(rstr *base_759, P1032 t_760) {
  struct f_deref_761fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_759 = base_759;
F->t_760 = t_760;
if ((((*(P1032)rt_nil_check(F->t_760)).decl != NULL) && ((*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->t_760)).decl)).b != NULL))) {
if (f_suppressed_512(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->base_759)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_234(F->t_760)), rt_str(")rt_nil_check(", 14)), (*F->base_759)), rt_str("))->all)", 8));
goto ret_;
}
if (f_suppressed_512(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->t_760)), rt_str(")(", 2)), (*F->base_759)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->t_760)), rt_str(")rt_nil_check(", 14)), (*F->base_759)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_763(P1026 e_762) {
  struct f_is_lvalue_763fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_762 = e_762;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_762)).kind) == (((rt_int)7LL)))) {
F->y_2351 = NULL;
F->y_2351 = f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_762)).name))->all));
F->result_ = ((F->y_2351 != NULL) && ((rt_r_ichk((*(P1036)rt_nil_check(F->y_2351)).kind) == (((rt_int)1LL))) || (((rt_r_ichk((*(P1036)rt_nil_check(F->y_2351)).kind) == (((rt_int)2LL))) && ((*(P1036)rt_nil_check(F->y_2351)).mv == NULL)) && (!rt_r_echk((*(P1036)rt_nil_check(F->y_2351)).hasmv)))));
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_762)).kind) == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_763((*(P1026)rt_nil_check(F->e_762)).a);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_762)).kind) == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_762)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_763((*(P1026)rt_nil_check(F->e_762)).a));
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_762)).kind) == (((rt_int)10LL)))) {
if ((((*(P1026)rt_nil_check(F->e_762)).b != NULL) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_762)).b)).kind) == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_763((*(P1026)rt_nil_check(F->e_762)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_769(P1026 e_764, P1019 *code_765, P1032 *t_766, P1028 *c_767, int *ro_768) {
  struct f_lvalue_769fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_764 = e_764;
F->code_765 = code_765;
F->code_765v = *F->code_765;
F->t_766 = t_766;
F->t_766v = *F->t_766;
F->c_767 = c_767;
F->c_767v = *F->c_767;
F->ro_768 = ro_768;
F->ro_768v = *F->ro_768;
F->base_2352 = NULL;
F->bt_2353 = NULL;
F->bc_2354 = NULL;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_764)).kind) == (((rt_int)7LL)))) {
F->y_2355 = NULL;
F->y_2355 = f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_764)).name))->all));
if ((F->y_2355 == NULL)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_764)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_764)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P1036)rt_nil_check(F->y_2355)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_2355)).kind) != (((rt_int)2LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_764)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_764)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_765v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_747(F->y_2355); b_; }));
F->t_766v = (*(P1036)rt_nil_check(F->y_2355)).t;
F->c_767v = (*(P1036)rt_nil_check(F->y_2355)).c;
F->ro_768v = rt_r_echk((*(P1036)rt_nil_check(F->y_2355)).ro_flag);
if (((rt_r_ichk((*(P1036)rt_nil_check(F->y_2355)).kind) == (((rt_int)1LL))) && f_check_import_753(F->y_2355, rt_r_ichk((*(P1026)rt_nil_check(F->e_764)).line)))) {
F->ro_768v = 1;
}
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_764)).kind) == (((rt_int)17LL)))) {
f_lvalue_769((*(P1026)rt_nil_check(F->e_764)).a, &F->code_765v, &F->t_766v, &F->c_767v, &F->ro_768v);
} else if (((((rt_r_ichk((*(P1026)rt_nil_check(F->e_764)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_764)).a)).kind) == (((rt_int)7LL)))) && rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_764)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_765v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_936((*(P1026)rt_nil_check(F->e_764)).b, rt_r_ichk((*(P1026)rt_nil_check(F->e_764)).line), &F->t_766v); b_; }));
F->c_767v = g_no_cons_1128;
F->ro_768v = 0;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_764)).kind) == (((rt_int)11LL)))) {
f_lvalue_769((*(P1026)rt_nil_check(F->e_764)).a, &F->base_2352, &F->bt_2353, &F->bc_2354, &F->ro_768v);
f_select_on_777(&(((P1019)rt_nil_check(F->base_2352))->all), F->bt_2353, F->e_764, &F->ro_768v, &F->code_765v, &F->t_766v, &F->c_767v);
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_764)).kind) == (((rt_int)10LL)))) {
f_lvalue_769((*(P1026)rt_nil_check(F->e_764)).a, &F->base_2352, &F->bt_2353, &F->bc_2354, &F->ro_768v);
f_index_on_794(&(((P1019)rt_nil_check(F->base_2352))->all), F->bt_2353, F->e_764, &F->ro_768v, 1, &F->code_765v, &F->t_766v, &F->c_767v);
} else {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_764)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_765) = F->code_765v;  (*F->t_766) = F->t_766v;  (*F->c_767) = F->c_767v;  if (!rt_r_undef_BOOL(F->ro_768v)) (*F->ro_768) = F->ro_768v;
  RT_FPOP();
  return;
}

static void f_select_on_777(rstr *base_770, P1032 bt_771, P1026 e_772, int *ro_773, P1019 *code_774, P1032 *t_775, P1028 *c_776) {
  struct f_select_on_777fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_770 = base_770;
F->bt_771 = bt_771;
F->e_772 = e_772;
F->ro_773 = ro_773;
F->code_774 = code_774;
F->code_774v = *F->code_774;
F->t_775 = t_775;
F->t_775v = *F->t_775;
F->c_776 = c_776;
F->c_776v = *F->c_776;
F->c_776v = g_no_cons_1128;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->bt_771)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_475(F->bt_771);
(*F->ro_773) = 0;
if (((*(P1032)rt_nil_check(F->bt_771)).decl != NULL)) {
F->p_2356 = NULL;
F->p_2356 = (*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->bt_771)).decl)).b;
while ((F->p_2356 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2356)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_772)).name))->all))) {
F->pc_2357 = NULL;
F->code_774v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_234(F->bt_771)), rt_str(")rt_nil_check(", 14)), (*F->base_770)), rt_str("))->p_", 6)), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2356)).name))->all))), rt_str(")", 1)); b_; }));
F->t_775v = f_resolve_subtype_268((*(P1026)rt_nil_check(F->p_2356)).a, &F->pc_2357);
(*F->ro_773) = 1;
goto ret_;
}
F->p_2356 = (*(P1026)rt_nil_check(F->p_2356)).next;
}
}
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_772)).name))->all), rt_str("ALL", 3))) {
F->code_774v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_761(&(*F->base_770), F->bt_771); b_; }));
F->t_775v = (*(P1032)rt_nil_check(F->bt_771)).target;
goto ret_;
}
f_select_on_777(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_761(&(*F->base_770), F->bt_771); b_; }), (*(P1032)rt_nil_check(F->bt_771)).target, F->e_772, &(*F->ro_773), &F->code_774v, &F->t_775v, &F->c_776v);
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->bt_771)).kind) == (((rt_int)15LL)))) {
F->p_2358 = NULL;
F->p_2358 = (*(P1032)rt_nil_check(F->bt_771)).tparams;
while ((F->p_2358 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2358)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_772)).name))->all))) {
F->code_774v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_770), rt_str(".p_", 3)), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2358)).name))->all))); b_; }));
F->t_775v = f_tparam_type_352(F->bt_771, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2358)).name))->all));
(*F->ro_773) = 1;
goto ret_;
}
F->p_2358 = (*(P1026)rt_nil_check(F->p_2358)).next;
}
F->p_2358 = (*(P1032)rt_nil_check(F->bt_771)).tparams;
if ((!f_opened_308(F->bt_771))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_772)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->bt_771)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P1032)rt_nil_check(F->bt_771)).tparams == NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_772)).name))->all), rt_str("ALL", 3))) {
F->code_774v = f_mk_3(&(*F->base_770));
F->t_775v = (*(P1032)rt_nil_check(F->bt_771)).under;
goto ret_;
}
f_select_on_777(&(*F->base_770), (*(P1032)rt_nil_check(F->bt_771)).under, F->e_772, &(*F->ro_773), &F->code_774v, &F->t_775v, &F->c_776v);
goto ret_;
}
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_772)).name))->all), rt_str("ALL", 3))) {
F->code_774v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_770), rt_str(".all", 4)); b_; }));
F->t_775v = (*(P1032)rt_nil_check(F->bt_771)).under;
goto ret_;
}
while ((F->p_2358 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2358)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_772)).name))->all))) {
F->code_774v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_770), rt_str(".p_", 3)), f_lower_s_15(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2358)).name))->all))); b_; }));
F->t_775v = f_tparam_type_352(F->bt_771, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2358)).name))->all));
(*F->ro_773) = 1;
goto ret_;
}
F->p_2358 = (*(P1026)rt_nil_check(F->p_2358)).next;
}
f_select_on_777(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_770), rt_str(".all", 4)); b_; }), (*(P1032)rt_nil_check(F->bt_771)).under, F->e_772, &(*F->ro_773), &F->code_774v, &F->t_775v, &F->c_776v);
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->bt_771)).kind) == (((rt_int)17LL)))) {
F->f_2359 = NULL;
F->f_2359 = (*(P1032)rt_nil_check(F->bt_771)).fields;
F->i_2360 = RT_R_IUNDEF;
F->i_2360 = ((rt_int)0LL);
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_772)).name))->all), rt_str("TAG", 3))) {
F->code_774v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_770)), rt_str(").tag)", 6)); b_; }));
F->t_775v = (*(P1032)rt_nil_check(F->bt_771)).elem;
(*F->ro_773) = 1;
goto ret_;
}
while ((F->f_2359 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_2359)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_772)).name))->all))) {
F->fn_2361 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_770)), rt_str(").u.", 4)), f_field_c_17(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_772)).name))->all))));
F->c_776v = (*(P1034)rt_nil_check(F->f_2359)).c;
F->code_774v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_770)), rt_str(").tag == ", 9)), f_itos_7(rt_r_ichk(F->i_2360))), rt_str(" \? &", 4)), F->fn_2361), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_2361), rt_str(")))", 3)); b_; }));
F->t_775v = (*(P1034)rt_nil_check(F->f_2359)).t;
goto ret_;
}
F->i_2360 = rt_add(rt_r_ichk(F->i_2360), ((rt_int)1LL));
F->f_2359 = (*(P1034)rt_nil_check(F->f_2359)).next;
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_772)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_772)).name))->all)); b_; }));
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->bt_771)).kind) == (((rt_int)7LL)))) {
F->f_2362 = NULL;
F->f_2362 = (*(P1032)rt_nil_check(F->bt_771)).fields;
while ((F->f_2362 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_2362)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_772)).name))->all))) {
F->c_776v = (*(P1034)rt_nil_check(F->f_2362)).c;
F->code_774v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_770), rt_str(".", 1)), f_field_c_17(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_772)).name))->all))); b_; }));
F->t_775v = (*(P1034)rt_nil_check(F->f_2362)).t;
goto ret_;
}
F->f_2362 = (*(P1034)rt_nil_check(F->f_2362)).next;
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_772)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_772)).name))->all)); b_; }));
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_772)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_772)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_774) = F->code_774v;  (*F->t_775) = F->t_775v;  (*F->c_776) = F->c_776v;
  RT_FPOP();
  return;
}

static int f_has_call_779(rstr *s_778) {
  struct f_has_call_779fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_778 = s_778;
{ rt_int lo2364 = ((rt_int)1LL), hi2365 = ((rt_int)(((*F->s_778)).len));
for (rt_int it2366 = lo2364; it2366 <= hi2365; it2366++) {
F->i_2363 = it2366;
if ((rt_r_echk(rt_str_get((*F->s_778), F->i_2363)) == 40)) {
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

static void f_need_slice_781(P1032 t_780) {
  struct f_need_slice_781fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_780 = t_780;
F->c_2367 = rt_str_copy(f_ctype_234(F->t_780));
F->n_2368 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_2367));
F->l_2369 = NULL;
if (f_seen_name_425(g_mcopies_1109, &F->n_2368)) {
goto ret_;
}
{ R1031 *cell2370 = rt_alloc(sizeof(R1031));
(*cell2370).s = NULL;
(*cell2370).next = NULL;
F->l_2369 = cell2370;
}
(*(P1030)rt_nil_check(F->l_2369)).s = f_mk_3(&F->n_2368);
(*(P1030)rt_nil_check(F->l_2369)).next = g_mcopies_1109;
g_mcopies_1109 = F->l_2369;
f_put_27(g_out_protos_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2367), rt_str(" ", 1)), F->n_2368), rt_str("(", 1)), F->c_2367), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2367), rt_str(" ", 1)), F->n_2368), rt_str("(", 1)), F->c_2367), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2367), rt_str(" rt_r_acat_", 11)), F->c_2367), rt_str("(", 1)), F->c_2367), rt_str(" a, ", 4)), F->c_2367), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2367), rt_str(" rt_r_acat_", 11)), F->c_2367), rt_str("(", 1)), F->c_2367), rt_str(" a, ", 4)), F->c_2367), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_2367), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_414((*(P1032)rt_nil_check(F->t_780)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_414((*(P1032)rt_nil_check(F->t_780)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rstr f_ix_785(rstr *i_782, rstr *lo_783, rstr *hi_784) {
  struct f_ix_785fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_782 = i_782;
F->lo_783 = lo_783;
F->hi_784 = hi_784;
if (f_suppressed_512(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_782)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_782)), rt_str(", ", 2)), (*F->lo_783)), rt_str(", ", 2)), (*F->hi_784)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_794(rstr *base_786, P1032 bt_787, P1026 e_788, int *ro_789, int lv_790, P1019 *code_791, P1032 *t_792, P1028 *c_793) {
  struct f_index_on_794fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_786 = base_786;
F->bt_787 = bt_787;
F->e_788 = e_788;
F->ro_789 = ro_789;
F->lv_790 = lv_790;
F->code_791 = code_791;
F->code_791v = *F->code_791;
F->t_792 = t_792;
F->t_792v = *F->t_792;
F->c_793 = c_793;
F->c_793v = *F->c_793;
F->a_2371 = NULL;
F->a_2371 = (*(P1026)rt_nil_check(F->e_788)).b;
F->it_2372 = NULL;
F->c_793v = g_no_cons_1128;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->bt_787)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_475(F->bt_787);
(*F->ro_789) = 0;
f_index_on_794(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_761(&(*F->base_786), F->bt_787); b_; }), (*(P1032)rt_nil_check(F->bt_787)).target, F->e_788, &(*F->ro_789), F->lv_790, &F->code_791v, &F->t_792v, &F->c_793v);
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->bt_787)).kind) == (((rt_int)15LL)))) {
if ((!f_opened_308(F->bt_787))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_788)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->bt_787)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P1032)rt_nil_check(F->bt_787)).tparams == NULL)) {
f_index_on_794(&(*F->base_786), (*(P1032)rt_nil_check(F->bt_787)).under, F->e_788, &(*F->ro_789), F->lv_790, &F->code_791v, &F->t_792v, &F->c_793v);
} else {
f_index_on_794(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_786), rt_str(".all", 4)); b_; }), (*(P1032)rt_nil_check(F->bt_787)).under, F->e_788, &(*F->ro_789), F->lv_790, &F->code_791v, &F->t_792v, &F->c_793v);
}
goto ret_;
}
if ((((rt_r_ichk((*(P1032)rt_nil_check(F->bt_787)).kind) == (((rt_int)6LL))) && (F->a_2371 != NULL)) && (rt_r_ichk((*(P1026)rt_nil_check(F->a_2371)).kind) == (((rt_int)16LL))))) {
if (((rt_r_ichk((*(P1032)rt_nil_check(F->bt_787)).ndim) != ((rt_int)1LL)) || ((*(P1026)rt_nil_check(F->a_2371)).next != NULL))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_788)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_2373 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->a_2371)).a, (*(P1032)rt_nil_check(F->bt_787)).idx, &F->it_2372));
F->hi_2374 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->a_2371)).b, (*(P1032)rt_nil_check(F->bt_787)).idx, &F->it_2372));
F->code_791v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_234(F->bt_787)), rt_str("(", 1)), (*F->base_786)), rt_str(", ", 2)), F->lo_2373), rt_str(", ", 2)), F->hi_2374), rt_str(")", 1)); b_; }));
f_need_slice_781(F->bt_787);
F->t_792v = F->bt_787;
(*F->ro_789) = 1;
}
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->bt_787)).kind) == (((rt_int)6LL)))) {
F->off_2375 = NULL;
F->k_2376 = RT_R_IUNDEF;
F->k_2376 = ((rt_int)0LL);
F->b_2377 = NULL;
F->b_2377 = f_mk_3(&(*F->base_786));
F->pre_2378 = NULL;
F->pre_2378 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_71(F->a_2371) != rt_r_ichk((*(P1032)rt_nil_check(F->bt_787)).ndim))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_788)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7(rt_r_ichk((*(P1032)rt_nil_check(F->bt_787)).ndim)), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_790) && f_has_call_779(&(*F->base_786)))) {
F->pre_2378 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->bt_787)), rt_str(" b_ = ", 6)), (*F->base_786)), rt_str("; ", 2)); b_; }));
F->b_2377 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_2371 != NULL)) {
F->k_2376 = rt_add(rt_r_ichk(F->k_2376), ((rt_int)1LL));
{
F->i_2379 = rt_str_copy(f_gexpr_800(F->a_2371, f_idx_type_258(F->bt_787, rt_r_ichk(F->k_2376)), &F->it_2372));
F->l_2380 = rt_str_copy(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->b_2377))->all), rt_str(".", 1)), f_dim_lo_242(rt_r_ichk(F->k_2376))));
F->h_2381 = rt_str_copy(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->b_2377))->all), rt_str(".", 1)), f_dim_hi_244(rt_r_ichk(F->k_2376))));
f_check_type_232(F->it_2372, f_idx_type_258(F->bt_787, rt_r_ichk(F->k_2376)), rt_r_ichk((*(P1026)rt_nil_check(F->e_788)).line));
if ((F->off_2375 == NULL)) {
F->off_2375 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_785(&F->i_2379, &F->l_2380, &F->h_2381)), rt_str(" - ", 3)), F->l_2380), rt_str(")", 1)); b_; }));
} else {
F->off_2375 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1019)rt_nil_check(F->off_2375))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2380), rt_str(", ", 2)), F->h_2381), rt_str(") + ", 4)), f_ix_785(&F->i_2379, &F->l_2380, &F->h_2381)), rt_str(" - ", 3)), F->l_2380), rt_str(")", 1)); b_; }));
}
}
F->a_2371 = (*(P1026)rt_nil_check(F->a_2371)).next;
}
if ((((rt_int)(((((P1019)rt_nil_check(F->pre_2378))->all)).len)) > ((rt_int)0LL))) {
F->code_791v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->pre_2378))->all), (((P1019)rt_nil_check(F->b_2377))->all)), rt_str(".p[", 3)), (((P1019)rt_nil_check(F->off_2375))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_791v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->b_2377))->all), rt_str(".p[", 3)), (((P1019)rt_nil_check(F->off_2375))->all)), rt_str("]", 1)); b_; }));
}
F->t_792v = (*(P1032)rt_nil_check(F->bt_787)).elem;
F->c_793v = (*(P1032)rt_nil_check(F->bt_787)).elemcons;
goto ret_;
}
if ((f_list_len_71(F->a_2371) != ((rt_int)1LL))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_788)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->bt_787)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P1026)rt_nil_check(F->a_2371)).kind) == (((rt_int)16LL)))) {
F->lo_2382 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->a_2371)).a, g_ty_int_1110, &F->it_2372));
F->hi_2383 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->a_2371)).b, g_ty_int_1110, &F->it_2372));
F->code_791v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_786)), rt_str(", ", 2)), F->lo_2382), rt_str(", ", 2)), F->hi_2383), rt_str(")", 1)); b_; }));
F->t_792v = F->bt_787;
(*F->ro_789) = 1;
goto ret_;
}
{
F->i_2384 = rt_str_copy(f_gexpr_800(F->a_2371, g_ty_int_1110, &F->it_2372));
F->t_792v = f_str_elem_218(F->bt_787);
F->c_793v = (*(P1032)rt_nil_check(F->bt_787)).elemcons;
if (F->lv_790) {
F->code_791v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_786)), rt_str(", ", 2)), F->i_2384), rt_str("))", 2)); b_; }));
} else {
F->code_791v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_786)), rt_str(", ", 2)), F->i_2384), rt_str(")", 1)); b_; }));
(*F->ro_789) = 1;
}
}
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_788)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_791) = F->code_791v;  (*F->t_792) = F->t_792v;  (*F->c_793) = F->c_793v;
  RT_FPOP();
  return;
}

static int f_own_attribute_796(P1026 e_795) {
  struct f_own_attribute_796fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_795 = e_795;
F->saved_2385 = NULL;
F->saved_2385 = g_code_1080;
F->bt_2386 = NULL;
F->ok_2387 = RT_R_EUNDEF;
F->ok_2387 = 0;
g_trial_1108 = rt_add(rt_r_ichk(g_trial_1108), ((rt_int)1LL));
g_code_1080 = f_new_buffer_24();
{ rt_frame xf2388;
if (RT_TRY(xf2388)) {
F->base_2390 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_795)).a, NULL, &F->bt_2386));
while (((F->bt_2386 != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->bt_2386)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_475(F->bt_2386);
F->bt_2386 = (*(P1032)rt_nil_check(F->bt_2386)).target;
}
while ((((F->bt_2386 != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->bt_2386)).kind) == (((rt_int)15LL)))) && ((*(P1032)rt_nil_check(F->bt_2386)).tparams == NULL))) {
F->bt_2386 = (*(P1032)rt_nil_check(F->bt_2386)).under;
}
if (((F->bt_2386 != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->bt_2386)).kind) == (((rt_int)15LL))))) {
F->p_2391 = NULL;
F->p_2391 = (*(P1032)rt_nil_check(F->bt_2386)).tparams;
while ((F->p_2391 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2391)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_795)).name))->all))) {
F->ok_2387 = 1;
}
F->p_2391 = (*(P1026)rt_nil_check(F->p_2391)).next;
}
F->bt_2386 = (*(P1032)rt_nil_check(F->bt_2386)).under;
}
if (((F->bt_2386 != NULL) && ((rt_r_ichk((*(P1032)rt_nil_check(F->bt_2386)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->bt_2386)).kind) == (((rt_int)17LL)))))) {
F->f_2392 = NULL;
F->f_2392 = (*(P1032)rt_nil_check(F->bt_2386)).fields;
while ((F->f_2392 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_2392)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_795)).name))->all))) {
F->ok_2387 = 1;
}
F->f_2392 = (*(P1034)rt_nil_check(F->f_2392)).next;
}
}
RT_POP(xf2388);
} else {
RT_POP(xf2388);
int x2389 = rt_xcur;
if (0 || x2389 == ex_compile_error_1) {
F->ok_2387 = 0;
} else {
rt_raise(x2389);
}
}
}
g_trial_1108 = rt_sub(rt_r_ichk(g_trial_1108), ((rt_int)1LL));
g_code_1080 = F->saved_2385;
F->result_ = rt_r_echk(F->ok_2387);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_800(P1026 e_797, P1032 want_798, P1032 *t_799) {
  struct f_gexpr_800fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_797 = e_797;
F->want_798 = want_798;
F->t_799 = t_799;
F->t_799v = *F->t_799;
F->k_2393 = RT_R_IUNDEF;
F->k_2393 = rt_r_ichk((*(P1026)rt_nil_check(F->e_797)).kind);
F->code_2394 = NULL;
F->c_2395 = NULL;
F->ro_2396 = RT_R_EUNDEF;
F->bt_2397 = NULL;
F->ctx_2398 = NULL;
F->ctx_2398 = g_cons_ctx_1101;
g_cons_ctx_1101 = NULL;
F->t_799v = g_ty_int_1110;
if ((rt_r_ichk(F->k_2393) == (((rt_int)1LL)))) {
if (((F->want_798 != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->want_798)).kind) == (((rt_int)3LL))))) {
F->t_799v = g_ty_float_1112;
F->result_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((rt_r_ichk(F->k_2393) == (((rt_int)2LL)))) {
F->t_799v = g_ty_float_1112;
F->result_ = (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all);
goto ret_;
} else if ((rt_r_ichk(F->k_2393) == (((rt_int)5LL)))) {
F->t_799v = g_ty_bool_1111;
F->result_ = f_itos_7(rt_r_ichk((*(P1026)rt_nil_check(F->e_797)).ival));
goto ret_;
} else if (((((rt_r_ichk(F->k_2393) == (((rt_int)3LL))) && (F->want_798 != NULL)) && (rt_r_ichk((*(P1032)rt_nil_check(F->want_798)).kind) == (((rt_int)5LL)))) && (!f_same_221(f_str_elem_218(F->want_798), g_ty_ascii_1113)))) {
F->r_2399 = NULL;
F->r_2399 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_q_18(); b_; }));
F->t_799v = F->want_798;
{ rt_int lo2401 = ((rt_int)1LL), hi2402 = ((rt_int)(((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all)).len));
for (rt_int it2403 = lo2401; it2403 <= hi2402; it2403++) {
F->i_2400 = it2403;
F->pos_2404 = RT_R_IUNDEF;
F->pos_2404 = f_lit_index_265((*(P1032)rt_nil_check(f_base_of_223(f_str_elem_218(F->want_798)))).lits, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ascii_lit_810(rt_r_echk(rt_str_get((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), F->i_2400))); b_; }));
if ((rt_r_ichk(F->pos_2404) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_797)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), f_ascii_lit_810(rt_r_echk(rt_str_get((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), F->i_2400)))), rt_str(" is not a value of the component type", 37)); b_; }));
}
F->r_2399 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_2399))->all), rt_str("\\", 1)), f_octal_812(rt_r_ichk(F->pos_2404))); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), (((P1019)rt_nil_check(F->r_2399))->all)), f_q_18()), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2393) == (((rt_int)3LL)))) {
F->t_799v = g_ty_string_1114;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_843(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2393) == (((rt_int)6LL)))) {
F->t_799v = g_ty_nil_1117;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((rt_r_ichk(F->k_2393) == (((rt_int)4LL)))) {
if (((F->want_798 != NULL) && ((*(P1032)rt_nil_check(f_base_of_223(F->want_798))).kind == (((rt_int)4LL))))) {
F->t_799v = F->want_798;
} else {
F->t_799v = f_enum_type_of_846(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_r_ichk((*(P1026)rt_nil_check(F->e_797)).line));
}
{
F->i_2405 = RT_R_IUNDEF;
F->i_2405 = f_lit_index_265((*(P1032)rt_nil_check(f_base_of_223(F->t_799v))).lits, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all));
if ((rt_r_ichk(F->i_2405) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_797)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(rt_r_ichk(F->i_2405));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2393) == (((rt_int)17LL)))) {
g_cons_ctx_1101 = F->ctx_2398;
F->result_ = f_gexpr_800((*(P1026)rt_nil_check(F->e_797)).a, F->want_798, &F->t_799v);
goto ret_;
} else if ((rt_r_ichk(F->k_2393) == (((rt_int)7LL)))) {
F->y_2406 = NULL;
F->y_2406 = f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all));
if ((F->y_2406 == NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("ME", 2))) {
F->t_799v = g_ty_act_1120;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_799v = g_ty_act_1120;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_948(f_wrap_apply_841(F->e_797), 0, &F->t_799v);
goto ret_;
}
if (((((((((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_948(f_wrap_apply_841(F->e_797), 0, &F->t_799v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_797)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P1036)rt_nil_check(F->y_2406)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_2406)).kind) == (((rt_int)2LL))))) {
F->ro_2407 = RT_R_EUNDEF;
F->t_799v = (*(P1036)rt_nil_check(F->y_2406)).t;
if ((rt_r_ichk((*(P1036)rt_nil_check(F->y_2406)).kind) == (((rt_int)1LL)))) {
F->ro_2407 = f_check_import_753(F->y_2406, rt_r_ichk((*(P1026)rt_nil_check(F->e_797)).line));
F->result_ = f_init_chk_363((*(P1036)rt_nil_check(F->y_2406)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_747(F->y_2406); b_; }));
goto ret_;
}
F->result_ = f_access_of_747(F->y_2406);
goto ret_;
}
if ((rt_r_ichk((*(P1036)rt_nil_check(F->y_2406)).kind) == (((rt_int)3LL)))) {
F->result_ = f_gcall_948(f_wrap_apply_841(F->e_797), 0, &F->t_799v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_797)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((rt_r_ichk(F->k_2393) == (((rt_int)8LL))) && (f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all)) != NULL)) && (f_user_op_944(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), f_copy_node_839((*(P1026)rt_nil_check(F->e_797)).a)) != NULL))) {
F->call_2408 = NULL;
F->call_2408 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1026)rt_nil_check(F->e_797)).line));
F->fname_2409 = NULL;
F->fname_2409 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1026)rt_nil_check(F->e_797)).line));
(*(P1026)rt_nil_check(F->fname_2409)).name = (*(P1026)rt_nil_check(F->e_797)).name;
(*(P1026)rt_nil_check(F->call_2408)).a = F->fname_2409;
(*(P1026)rt_nil_check(F->call_2408)).b = f_copy_node_839((*(P1026)rt_nil_check(F->e_797)).a);
F->result_ = f_gcall_948(F->call_2408, 0, &F->t_799v);
goto ret_;
} else if (((((rt_r_ichk(F->k_2393) == (((rt_int)8LL))) && rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("NOT", 3))) && (F->want_798 != NULL)) && (rt_r_ichk((*(P1032)rt_nil_check(F->want_798)).kind) == (((rt_int)16LL))))) {
F->a_2410 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_797)).a, F->want_798, &F->t_799v));
F->result_ = rt_str_cat(rt_str_cat(rt_str("y_set_compl(", 12), F->a_2410), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2393) == (((rt_int)8LL)))) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("NOT", 3))) {
F->a_2411 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_797)).a, g_ty_bool_1111, &F->t_799v));
f_check_type_232(F->t_799v, g_ty_bool_1111, rt_r_ichk((*(P1026)rt_nil_check(F->e_797)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_2411), rt_str(")", 1));
goto ret_;
}
{
F->a_2412 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_797)).a, F->want_798, &F->t_799v));
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_2412;
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_799v)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_2412), rt_str(")", 1));
goto ret_;
}
f_check_type_232(F->t_799v, g_ty_int_1110, rt_r_ichk((*(P1026)rt_nil_check(F->e_797)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_2412), rt_str(")", 1));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2393) == (((rt_int)9LL)))) {
F->result_ = f_gbinop_868(F->e_797, F->want_798, &F->t_799v);
goto ret_;
} else if ((rt_r_ichk(F->k_2393) == (((rt_int)10LL)))) {
if (((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).a)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).a)).kind) == (((rt_int)12LL))))) {
F->nm_2413 = NULL;
F->nm_2413 = (*(P1026)rt_nil_check(F->e_797)).a;
F->y_2414 = NULL;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->nm_2413)).kind) == (((rt_int)12LL)))) {
F->nm_2413 = (*(P1026)rt_nil_check(F->nm_2413)).a;
}
F->y_2414 = f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->nm_2413)).name))->all));
if (((((F->y_2414 == NULL) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_2414)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_2414)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_2414)).kind) == (((rt_int)10LL))))) {
F->result_ = f_gcall_948(F->e_797, 0, &F->t_799v);
goto ret_;
}
}
if ((f_user_subscript_823(F->e_797) != NULL)) {
F->result_ = f_gcall_948(f_user_subscript_823(F->e_797), 0, &F->t_799v);
goto ret_;
}
{
F->base_2415 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_797)).a, NULL, &F->bt_2397));
F->ro_2396 = 1;
f_index_on_794(&F->base_2415, F->bt_2397, F->e_797, &F->ro_2396, 0, &F->code_2394, &F->t_799v, &F->c_2395);
if ((((!f_is_lvalue_763(F->e_797)) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_799v)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P1032)rt_nil_check(F->t_799v)).kind) == (((rt_int)5LL))))) {
F->result_ = (((P1019)rt_nil_check(F->code_2394))->all);
goto ret_;
}
F->result_ = f_init_chk_363(F->t_799v, &(((P1019)rt_nil_check(F->code_2394))->all));
goto ret_;
}
} else if (((rt_r_ichk(F->k_2393) == (((rt_int)11LL))) && (f_user_dot_821(F->e_797) != NULL))) {
F->result_ = f_gcall_948(f_user_dot_821(F->e_797), 0, &F->t_799v);
goto ret_;
} else if ((rt_r_ichk(F->k_2393) == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_796(F->e_797)))) {
F->result_ = f_attribute_851(F->e_797, &F->t_799v);
goto ret_;
} else if (((f_as_subtype_297((*(P1026)rt_nil_check(F->e_797)).a) != NULL) || f_ptr_attribute_848(F->e_797))) {
F->result_ = f_attribute_851(F->e_797, &F->t_799v);
goto ret_;
}
{
F->base_2416 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_797)).a, NULL, &F->bt_2397));
F->ro_2396 = 1;
f_select_on_777(&F->base_2416, F->bt_2397, F->e_797, &F->ro_2396, &F->code_2394, &F->t_799v, &F->c_2395);
if ((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_797)).name))->all), rt_str("TAG", 3)) || (!f_is_lvalue_763(F->e_797)))) {
F->result_ = (((P1019)rt_nil_check(F->code_2394))->all);
goto ret_;
}
F->result_ = f_init_chk_363(F->t_799v, &(((P1019)rt_nil_check(F->code_2394))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2393) == (((rt_int)12LL)))) {
F->result_ = f_gcall_948(f_wrap_apply_841(F->e_797), 0, &F->t_799v);
goto ret_;
} else if ((rt_r_ichk(F->k_2393) == (((rt_int)14LL)))) {
F->result_ = f_constructor_873(F->e_797, F->want_798, F->ctx_2398, &F->t_799v);
goto ret_;
} else if ((rt_r_ichk(F->k_2393) == (((rt_int)13LL)))) {
F->result_ = f_resolved_803(F->e_797, &F->t_799v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_797)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_799) = F->t_799v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_803(P1026 e_801, P1032 *t_802) {
  struct f_resolved_803fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_801 = e_801;
F->t_802 = t_802;
F->t_802v = *F->t_802;
F->c_2417 = NULL;
F->vt_2418 = NULL;
F->y_2419 = NULL;
F->y_2419 = f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_2420 = NULL;
F->tt_2420 = f_copy_node_839((*(P1026)rt_nil_check(F->e_801)).b);
(*(P1026)rt_nil_check(F->tt_2420)).next = NULL;
if (((F->y_2419 != NULL) && ((rt_r_ichk((*(P1036)rt_nil_check(F->y_2419)).kind) == (((rt_int)10LL))) || (f_resolve_overload_922(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_2420, f_copy_node_839((*(P1026)rt_nil_check(F->e_801)).a), 0, rt_r_ichk((*(P1026)rt_nil_check(F->e_801)).line)) != NULL)))) {
F->call_2421 = NULL;
F->call_2421 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1026)rt_nil_check(F->e_801)).line));
F->f_2422 = NULL;
F->f_2422 = f_nn_65((((rt_int)12LL)), rt_r_ichk((*(P1026)rt_nil_check(F->e_801)).line));
F->fname_2423 = NULL;
F->fname_2423 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1026)rt_nil_check(F->e_801)).line));
(*(P1026)rt_nil_check(F->fname_2423)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P1026)rt_nil_check(F->f_2422)).a = F->fname_2423;
(*(P1026)rt_nil_check(F->f_2422)).b = F->tt_2420;
(*(P1026)rt_nil_check(F->call_2421)).a = F->f_2422;
(*(P1026)rt_nil_check(F->call_2421)).b = f_copy_node_839((*(P1026)rt_nil_check(F->e_801)).a);
(*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->call_2421)).b)).next = NULL;
F->result_ = f_gcall_948(F->call_2421, 0, &F->t_802v);
goto ret_;
}
F->t_802v = f_resolve_subtype_268((*(P1026)rt_nil_check(F->e_801)).b, &F->c_2417);
{
F->v_2424 = rt_str_copy(f_gexpr_in_808((*(P1026)rt_nil_check(F->e_801)).a, F->t_802v, F->c_2417, &F->vt_2418));
f_check_type_232(F->vt_2418, F->t_802v, rt_r_ichk((*(P1026)rt_nil_check(F->e_801)).line));
F->result_ = f_checked_213(F->t_802v, F->c_2417, &F->v_2424);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_802) = F->t_802v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_808(P1026 e_804, P1032 want_805, P1028 c_806, P1032 *t_807) {
  struct f_gexpr_in_808fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_804 = e_804;
F->want_805 = want_805;
F->c_806 = c_806;
F->t_807 = t_807;
F->t_807v = *F->t_807;
g_cons_ctx_1101 = F->c_806;
F->result_ = f_gexpr_800(F->e_804, F->want_805, &F->t_807v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_807) = F->t_807v;
  RT_FPOP();
  return F->result_;
}

static rstr f_ascii_lit_810(int ch_809) {
  struct f_ascii_lit_810fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ch_809 = ch_809;
F->l_2425 = NULL;
F->l_2425 = (*(P1032)rt_nil_check(g_ty_ascii_1113)).lits;
{ rt_int lo2427 = ((rt_int)1LL), hi2428 = rt_sub(((rt_int)(F->ch_809) + 1), ((rt_int)1LL));
for (rt_int it2429 = lo2427; it2429 <= hi2428; it2429++) {
F->i_2426 = it2429;
F->l_2425 = (*(P1026)rt_nil_check(F->l_2425)).next;
}
}
F->result_ = (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->l_2425)).name))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_octal_812(rt_int n_811) {
  struct f_octal_812fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_811 = n_811;
F->r_2430 = rt_str_new(((rt_int)3LL));
rt_str_assign(&F->r_2430, rt_str("000", 3));
(*rt_str_at(&F->r_2430, ((rt_int)1LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_811, ((rt_int)64LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2430, ((rt_int)2LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_811, ((rt_int)8LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2430, ((rt_int)3LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(F->n_811, ((rt_int)8LL)), ((rt_int)1LL)));
F->result_ = F->r_2430;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1032 f_str_cat_part_814(P1032 t_813) {
  struct f_str_cat_part_814fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_813 = t_813;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_813)).kind) == (((rt_int)5LL)))) {
F->result_ = f_str_elem_218(F->t_813);
goto ret_;
}
F->result_ = F->t_813;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1032 f_peek_type_816(P1026 e_815) {
  struct f_peek_type_816fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_815 = e_815;
F->saved_2431 = NULL;
F->saved_2431 = g_code_1080;
F->t_2432 = NULL;
g_trial_1108 = rt_add(rt_r_ichk(g_trial_1108), ((rt_int)1LL));
g_code_1080 = f_new_buffer_24();
{ rt_frame xf2433;
if (RT_TRY(xf2433)) {
F->v_2435 = rt_str_copy(f_gexpr_800(F->e_815, NULL, &F->t_2432));
RT_POP(xf2433);
} else {
RT_POP(xf2433);
int x2434 = rt_xcur;
if (0 || x2434 == ex_compile_error_1) {
F->t_2432 = NULL;
} else {
rt_raise(x2434);
}
}
}
g_trial_1108 = rt_sub(rt_r_ichk(g_trial_1108), ((rt_int)1LL));
g_code_1080 = F->saved_2431;
F->result_ = F->t_2432;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1032 f_set_operands_819(P1026 e_817, P1032 want_818) {
  struct f_set_operands_819fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_817 = e_817;
F->want_818 = want_818;
F->t_2436 = NULL;
if (((F->want_818 != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->want_818)).kind) == (((rt_int)16LL))))) {
F->result_ = F->want_818;
goto ret_;
} else if ((F->want_818 != NULL)) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_817)).a)).kind) != (((rt_int)14LL)))) {
F->t_2436 = f_peek_type_816((*(P1026)rt_nil_check(F->e_817)).a);
} else if ((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_817)).b)).kind) != (((rt_int)14LL)))) {
F->t_2436 = f_peek_type_816((*(P1026)rt_nil_check(F->e_817)).b);
}
if (((F->t_2436 != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->t_2436)).kind) == (((rt_int)16LL))))) {
F->result_ = F->t_2436;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_user_dot_821(P1026 e_820) {
  struct f_user_dot_821fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_820 = e_820;
F->arg_2437 = NULL;
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_820)).name))->all)); b_; })) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->arg_2437 = f_copy_node_839((*(P1026)rt_nil_check(F->e_820)).a);
if ((f_user_op_944(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_820)).name))->all)); b_; }), F->arg_2437) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_827(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_820)).name))->all)); b_; }), F->arg_2437, rt_r_ichk((*(P1026)rt_nil_check(F->e_820)).line));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_user_subscript_823(P1026 e_822) {
  struct f_user_subscript_823fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_822 = e_822;
F->name_2438 = NULL;
F->name_2438 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
F->args_2439 = NULL;
F->tail_2440 = NULL;
F->a_2441 = NULL;
F->a_2441 = (*(P1026)rt_nil_check(F->e_822)).b;
if (((((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_822)).a)).kind) == (((rt_int)7LL))) && (f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_822)).a)).name))->all)) != NULL)) && ((*(P1036)rt_nil_check(f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_822)).a)).name))->all)))).kind != (((rt_int)1LL)))) && ((*(P1036)rt_nil_check(f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_822)).a)).name))->all)))).kind != (((rt_int)2LL))))) {
F->result_ = NULL;
goto ret_;
}
f_append_69(&F->args_2439, &F->tail_2440, f_copy_node_839((*(P1026)rt_nil_check(F->e_822)).a));
while ((F->a_2441 != NULL)) {
if ((((rt_int)(((((P1019)rt_nil_check(F->name_2438))->all)).len)) > ((rt_int)1LL))) {
F->name_2438 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->name_2438))->all), rt_str(",", 1)); b_; }));
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->a_2441)).kind) == (((rt_int)16LL)))) {
F->name_2438 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->name_2438))->all), rt_str("*..*", 4)); b_; }));
f_append_69(&F->args_2439, &F->tail_2440, f_copy_node_839((*(P1026)rt_nil_check(F->a_2441)).a));
f_append_69(&F->args_2439, &F->tail_2440, f_copy_node_839((*(P1026)rt_nil_check(F->a_2441)).b));
} else {
F->name_2438 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->name_2438))->all), rt_str("*", 1)); b_; }));
f_append_69(&F->args_2439, &F->tail_2440, f_copy_node_839(F->a_2441));
}
F->a_2441 = (*(P1026)rt_nil_check(F->a_2441)).next;
}
F->name_2438 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->name_2438))->all), rt_str(")", 1)); b_; }));
if (((f_lookup_163(&(((P1019)rt_nil_check(F->name_2438))->all)) == NULL) || (f_user_op_944(&(((P1019)rt_nil_check(F->name_2438))->all), F->args_2439) == NULL))) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_827(&(((P1019)rt_nil_check(F->name_2438))->all), F->args_2439, rt_r_ichk((*(P1026)rt_nil_check(F->e_822)).line));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_op_call_827(rstr *name_824, P1026 args_825, rt_int line_826) {
  struct f_op_call_827fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_824 = name_824;
F->args_825 = args_825;
F->line_826 = line_826;
F->call_2442 = NULL;
F->call_2442 = f_nn_65((((rt_int)10LL)), F->line_826);
F->f_2443 = NULL;
F->f_2443 = f_nn_65((((rt_int)7LL)), F->line_826);
(*(P1026)rt_nil_check(F->f_2443)).name = f_mk_3(&(*F->name_824));
(*(P1026)rt_nil_check(F->call_2442)).a = F->f_2443;
(*(P1026)rt_nil_check(F->call_2442)).b = F->args_825;
F->result_ = F->call_2442;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_derived_relation_829(P1026 e_828) {
  struct f_derived_relation_829fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_828 = e_828;
F->l_2444 = NULL;
F->r_2445 = NULL;
F->has_eq_2446 = RT_R_EUNDEF;
F->has_eq_2446 = 0;
F->has_lt_2447 = RT_R_EUNDEF;
F->has_lt_2447 = 0;
F->l_2444 = f_copy_node_839((*(P1026)rt_nil_check(F->e_828)).a);
F->r_2445 = f_copy_node_839((*(P1026)rt_nil_check(F->e_828)).b);
(*(P1026)rt_nil_check(F->l_2444)).next = F->r_2445;
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; })) != NULL)) {
F->has_eq_2446 = (f_user_op_944(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), F->l_2444) != NULL);
}
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; })) != NULL)) {
F->l_2444 = f_copy_node_839((*(P1026)rt_nil_check(F->e_828)).a);
F->r_2445 = f_copy_node_839((*(P1026)rt_nil_check(F->e_828)).b);
(*(P1026)rt_nil_check(F->l_2444)).next = F->r_2445;
F->has_lt_2447 = (f_user_op_944(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), F->l_2444) != NULL);
}
if ((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_828)).name))->all), rt_str("/=", 2)) && rt_r_echk(F->has_eq_2446))) {
F->result_ = f_rel_not_837(f_rel_node_834(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1026)rt_nil_check(F->e_828)).a, (*(P1026)rt_nil_check(F->e_828)).b, rt_r_ichk((*(P1026)rt_nil_check(F->e_828)).line)), rt_r_ichk((*(P1026)rt_nil_check(F->e_828)).line));
goto ret_;
} else if ((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_828)).name))->all), rt_str(">", 1)) && rt_r_echk(F->has_lt_2447))) {
F->result_ = f_rel_node_834(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1026)rt_nil_check(F->e_828)).b, (*(P1026)rt_nil_check(F->e_828)).a, rt_r_ichk((*(P1026)rt_nil_check(F->e_828)).line));
goto ret_;
} else if (((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_828)).name))->all), rt_str("<=", 2)) && rt_r_echk(F->has_lt_2447)) && rt_r_echk(F->has_eq_2446))) {
F->result_ = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_834(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1026)rt_nil_check(F->e_828)).a, (*(P1026)rt_nil_check(F->e_828)).b, rt_r_ichk((*(P1026)rt_nil_check(F->e_828)).line)), f_rel_node_834(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1026)rt_nil_check(F->e_828)).a, (*(P1026)rt_nil_check(F->e_828)).b, rt_r_ichk((*(P1026)rt_nil_check(F->e_828)).line)), rt_r_ichk((*(P1026)rt_nil_check(F->e_828)).line));
goto ret_;
} else if (((rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_828)).name))->all), rt_str(">=", 2)) && rt_r_echk(F->has_lt_2447)) && rt_r_echk(F->has_eq_2446))) {
F->result_ = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_834(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1026)rt_nil_check(F->e_828)).b, (*(P1026)rt_nil_check(F->e_828)).a, rt_r_ichk((*(P1026)rt_nil_check(F->e_828)).line)), f_rel_node_834(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1026)rt_nil_check(F->e_828)).a, (*(P1026)rt_nil_check(F->e_828)).b, rt_r_ichk((*(P1026)rt_nil_check(F->e_828)).line)), rt_r_ichk((*(P1026)rt_nil_check(F->e_828)).line));
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_rel_node_834(rstr *op_830, P1026 a_831, P1026 b_832, rt_int line_833) {
  struct f_rel_node_834fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_830 = op_830;
F->a_831 = a_831;
F->b_832 = b_832;
F->line_833 = line_833;
F->result_ = f_binop_106(f_mk_3(&(*F->op_830)), f_copy_node_839(F->a_831), f_copy_node_839(F->b_832), F->line_833);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_rel_not_837(P1026 x_835, rt_int line_836) {
  struct f_rel_not_837fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_835 = x_835;
F->line_836 = line_836;
F->n_2448 = NULL;
F->n_2448 = f_nn_65((((rt_int)8LL)), F->line_836);
(*(P1026)rt_nil_check(F->n_2448)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P1026)rt_nil_check(F->n_2448)).a = F->x_835;
F->result_ = F->n_2448;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_copy_node_839(P1026 e_838) {
  struct f_copy_node_839fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_838 = e_838;
F->x_2449 = NULL;
{ R1027 *cell2450 = rt_alloc(sizeof(R1027));
(*cell2450).name = NULL;
(*cell2450).tag = NULL;
(*cell2450).prags = NULL;
(*cell2450).labels = NULL;
(*cell2450).a = NULL;
(*cell2450).b = NULL;
(*cell2450).c = NULL;
(*cell2450).d = NULL;
(*cell2450).e = NULL;
(*cell2450).next = NULL;
F->x_2449 = cell2450;
}
(*(P1026)rt_nil_check(F->x_2449)).kind = rt_r_ichk((*(P1026)rt_nil_check(F->e_838)).kind);
(*(P1026)rt_nil_check(F->x_2449)).line = rt_r_ichk((*(P1026)rt_nil_check(F->e_838)).line);
(*(P1026)rt_nil_check(F->x_2449)).ival = rt_r_ichk((*(P1026)rt_nil_check(F->e_838)).ival);
(*(P1026)rt_nil_check(F->x_2449)).flag = rt_r_ichk((*(P1026)rt_nil_check(F->e_838)).flag);
(*(P1026)rt_nil_check(F->x_2449)).name = (*(P1026)rt_nil_check(F->e_838)).name;
(*(P1026)rt_nil_check(F->x_2449)).tag = (*(P1026)rt_nil_check(F->e_838)).tag;
(*(P1026)rt_nil_check(F->x_2449)).a = (*(P1026)rt_nil_check(F->e_838)).a;
(*(P1026)rt_nil_check(F->x_2449)).b = (*(P1026)rt_nil_check(F->e_838)).b;
(*(P1026)rt_nil_check(F->x_2449)).c = (*(P1026)rt_nil_check(F->e_838)).c;
(*(P1026)rt_nil_check(F->x_2449)).d = (*(P1026)rt_nil_check(F->e_838)).d;
F->result_ = F->x_2449;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_wrap_apply_841(P1026 e_840) {
  struct f_wrap_apply_841fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_840 = e_840;
F->x_2451 = NULL;
F->x_2451 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1026)rt_nil_check(F->e_840)).line));
(*(P1026)rt_nil_check(F->x_2451)).a = F->e_840;
F->result_ = F->x_2451;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_843(rstr *s_842) {
  struct f_c_string_843fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_842 = s_842;
F->n_2452 = RT_R_IUNDEF;
F->n_2452 = ((rt_int)0LL);
{ rt_int lo2454 = ((rt_int)1LL), hi2455 = ((rt_int)(((*F->s_842)).len));
for (rt_int it2456 = lo2454; it2456 <= hi2455; it2456++) {
F->i_2453 = it2456;
if (((rt_r_echk(rt_str_get((*F->s_842), F->i_2453)) == 92) || (rt_r_echk(rt_str_get((*F->s_842), F->i_2453)) == 63))) {
F->n_2452 = rt_add(rt_r_ichk(F->n_2452), ((rt_int)1LL));
}
}
}
{
F->r_2457 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_842)).len)), rt_r_ichk(F->n_2452)), ((rt_int)2LL)));
F->j_2458 = RT_R_IUNDEF;
F->j_2458 = ((rt_int)1LL);
(*rt_str_at(&F->r_2457, ((rt_int)1LL))) = 34;
{ rt_int lo2460 = ((rt_int)1LL), hi2461 = ((rt_int)(((*F->s_842)).len));
for (rt_int it2462 = lo2460; it2462 <= hi2461; it2462++) {
F->i_2459 = it2462;
F->j_2458 = rt_add(rt_r_ichk(F->j_2458), ((rt_int)1LL));
if (((rt_r_echk(rt_str_get((*F->s_842), F->i_2459)) == 92) || (rt_r_echk(rt_str_get((*F->s_842), F->i_2459)) == 63))) {
(*rt_str_at(&F->r_2457, rt_r_ichk(F->j_2458))) = 92;
F->j_2458 = rt_add(rt_r_ichk(F->j_2458), ((rt_int)1LL));
}
(*rt_str_at(&F->r_2457, rt_r_ichk(F->j_2458))) = rt_r_echk(rt_str_get((*F->s_842), F->i_2459));
}
}
(*rt_str_at(&F->r_2457, rt_add(rt_r_ichk(F->j_2458), ((rt_int)1LL)))) = 34;
F->result_ = F->r_2457;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1032 f_enum_type_of_846(rstr *lit_844, rt_int line_845) {
  struct f_enum_type_of_846fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_844 = lit_844;
F->line_845 = line_845;
F->y_2463 = NULL;
F->y_2463 = g_scope_stack_1070;
F->c_2464 = NULL;
if ((f_lit_index_265((*(P1032)rt_nil_check(g_ty_ascii_1113)).lits, &(*F->lit_844)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_1113;
goto ret_;
}
while ((F->y_2463 != NULL)) {
if (((((rt_r_ichk((*(P1036)rt_nil_check(F->y_2463)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_2463)).kind) == (((rt_int)5LL)))) && ((*(P1036)rt_nil_check(F->y_2463)).st != NULL)) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_2463)).st)).kind) == (((rt_int)72LL))))) {
if ((f_lit_index_265((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_2463)).st)).a, &(*F->lit_844)) >= ((rt_int)0LL))) {
if ((rt_r_ichk((*(P1036)rt_nil_check(F->y_2463)).kind) == (((rt_int)5LL)))) {
F->st_2465 = NULL;
F->st_2465 = f_nn_65((((rt_int)80LL)), F->line_845);
(*(P1026)rt_nil_check(F->st_2465)).name = (*(P1036)rt_nil_check(F->y_2463)).name;
F->result_ = f_resolve_subtype_268(F->st_2465, &F->c_2464);
goto ret_;
}
F->result_ = f_resolve_subtype_268((*(P1036)rt_nil_check(F->y_2463)).st, &F->c_2464);
goto ret_;
}
}
F->y_2463 = (*(P1036)rt_nil_check(F->y_2463)).stack;
}
f_fail_23(F->line_845, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_844)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_848(P1026 e_847) {
  struct f_ptr_attribute_848fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_847 = e_847;
F->lv_2466 = NULL;
F->t_2467 = NULL;
F->c_2468 = NULL;
F->ro_2469 = RT_R_EUNDEF;
F->p_2470 = NULL;
F->saved_2471 = NULL;
F->saved_2471 = g_code_1080;
if ((!f_is_lvalue_763((*(P1026)rt_nil_check(F->e_847)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_1080 = f_new_buffer_24();
f_lvalue_769((*(P1026)rt_nil_check(F->e_847)).a, &F->lv_2466, &F->t_2467, &F->c_2468, &F->ro_2469);
g_code_1080 = F->saved_2471;
if (((rt_r_ichk((*(P1032)rt_nil_check(F->t_2467)).kind) != (((rt_int)8LL))) || ((*(P1032)rt_nil_check(F->t_2467)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_2470 = (*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->t_2467)).decl)).d;
while ((F->p_2470 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2470)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_847)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_2470 = (*(P1026)rt_nil_check(F->p_2470)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_851(P1026 e_849, P1032 *t_850) {
  struct f_attribute_851fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_849 = e_849;
F->t_850 = t_850;
F->t_850v = *F->t_850;
F->bt_2472 = NULL;
F->c_2473 = NULL;
F->base_2474 = NULL;
F->sub_2475 = NULL;
F->sub_2475 = f_as_subtype_297((*(P1026)rt_nil_check(F->e_849)).a);
F->name_2476 = rt_str_copy((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_849)).name))->all));
if ((F->sub_2475 != NULL)) {
F->bt_2472 = f_resolve_subtype_268(F->sub_2475, &F->c_2473);
} else {
F->bt_2472 = f_value_subtype_290((*(P1026)rt_nil_check(F->e_849)).a, &F->c_2473, &F->base_2474);
}
if (((((rt_r_ichk((*(P1032)rt_nil_check(F->bt_2472)).kind) == (((rt_int)8LL))) && (F->c_2473 != NULL)) && ((*(P1028)rt_nil_check(F->c_2473)).args != NULL)) && ((*(P1032)rt_nil_check(F->bt_2472)).decl != NULL))) {
F->p_2477 = NULL;
F->p_2477 = (*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->bt_2472)).decl)).d;
F->a_2478 = NULL;
F->a_2478 = (*(P1028)rt_nil_check(F->c_2473)).args;
while (((F->p_2477 != NULL) && (F->a_2478 != NULL))) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2477)).name))->all), F->name_2476)) {
F->pc_2479 = NULL;
F->v_2480 = rt_str_copy(f_gexpr_800(F->a_2478, f_resolve_subtype_268((*(P1026)rt_nil_check(F->p_2477)).a, &F->pc_2479), &F->t_850v));
F->result_ = F->v_2480;
goto ret_;
}
F->p_2477 = (*(P1026)rt_nil_check(F->p_2477)).next;
F->a_2478 = (*(P1026)rt_nil_check(F->a_2478)).next;
}
}
while (((rt_r_ichk((*(P1032)rt_nil_check(F->bt_2472)).kind) == (((rt_int)8LL))) && (F->base_2474 != NULL))) {
f_finish_ptr_475(F->bt_2472);
F->base_2474 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_761(&(((P1019)rt_nil_check(F->base_2474))->all), F->bt_2472); b_; }));
F->bt_2472 = (*(P1032)rt_nil_check(F->bt_2472)).target;
F->c_2473 = NULL;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->bt_2472)).kind) == (((rt_int)5LL)))) {
F->c_2473 = f_new_cons_184();
(*(P1028)rt_nil_check(F->c_2473)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1019)rt_nil_check(F->base_2474))->all)), rt_str(").len", 5)); b_; }));
}
}
if (((((rt_r_ichk((*(P1032)rt_nil_check(F->bt_2472)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->bt_2472)).tparams != NULL)) && (F->c_2473 != NULL)) && ((*(P1028)rt_nil_check(F->c_2473)).args != NULL))) {
F->p_2481 = NULL;
F->p_2481 = (*(P1032)rt_nil_check(F->bt_2472)).tparams;
F->a_2482 = NULL;
F->a_2482 = (*(P1028)rt_nil_check(F->c_2473)).args;
while (((F->p_2481 != NULL) && (F->a_2482 != NULL))) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2481)).name))->all), F->name_2476)) {
F->pt_2483 = f_tparam_type_352(F->bt_2472, &F->name_2476);
F->v_2484 = rt_str_copy(f_gexpr_800(F->a_2482, F->pt_2483, &F->t_850v));
F->result_ = F->v_2484;
goto ret_;
}
F->p_2481 = (*(P1026)rt_nil_check(F->p_2481)).next;
F->a_2482 = (*(P1026)rt_nil_check(F->a_2482)).next;
}
}
if (((rt_r_ichk((*(P1032)rt_nil_check(F->bt_2472)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->bt_2472)).tparams == NULL))) {
F->c_2473 = f_base_cons_226(F->bt_2472, F->c_2473);
F->bt_2472 = f_base_of_223(F->bt_2472);
}
F->t_850v = g_ty_int_1110;
if ((rt_str_eq(F->name_2476, rt_str("LEN", 3)) && (rt_r_ichk((*(P1032)rt_nil_check(F->bt_2472)).kind) == (((rt_int)5LL))))) {
if (((F->c_2473 != NULL) && ((*(P1028)rt_nil_check(F->c_2473)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_2473)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_849)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_2476, rt_str("LEN", 3)) && (rt_r_ichk((*(P1032)rt_nil_check(F->bt_2472)).kind) == (((rt_int)12LL))))) {
if (((F->c_2473 != NULL) && ((*(P1028)rt_nil_check(F->c_2473)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_2473)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_849)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_2476, rt_str("MIN", 3)) || rt_str_eq(F->name_2476, rt_str("MAX", 3))) && f_scalar_kind_186(F->bt_2472))) {
F->t_850v = F->bt_2472;
if (rt_str_eq(F->name_2476, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_198(F->bt_2472, F->c_2473);
goto ret_;
}
F->result_ = f_sub_hi_201(F->bt_2472, F->c_2473);
goto ret_;
} else if ((rt_str_eq(F->name_2476, rt_str("PREC", 4)) && (rt_r_ichk((*(P1032)rt_nil_check(F->bt_2472)).kind) == (((rt_int)3LL))))) {
if (((F->c_2473 != NULL) && ((*(P1028)rt_nil_check(F->c_2473)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_2473)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_2476, rt_str("ACCESS", 6)) || rt_str_eq(F->name_2476, rt_str("USE", 3))) && (rt_r_ichk((*(P1032)rt_nil_check(F->bt_2472)).kind) == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_864(F->e_849, F->bt_2472, F->c_2473, F->base_2474, &F->t_850v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_849)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_2476, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_850) = F->t_850v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_856(P1026 sa_852, P1026 sb_853, rstr *op_854, rt_int line_855) {
  struct f_subtype_compare_856fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_852 = sa_852;
F->sb_853 = sb_853;
F->op_854 = op_854;
F->line_855 = line_855;
F->ca_2485 = NULL;
F->cb_2486 = NULL;
F->ta_2487 = NULL;
F->ta_2487 = f_resolve_subtype_268(F->sa_852, &F->ca_2485);
F->tb_2488 = NULL;
F->tb_2488 = f_resolve_subtype_268(F->sb_853, &F->cb_2486);
F->r_2489 = NULL;
F->r_2489 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_2490 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_2490, rt_str("1", 1));
F->no_2491 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_2491, rt_str("0", 1));
if (rt_str_eq((*F->op_854), rt_str("/=", 2))) {
rt_str_assign(&F->yes_2490, rt_str("0", 1));
rt_str_assign(&F->no_2491, rt_str("1", 1));
}
if ((!f_same_221(F->ta_2487, F->tb_2488))) {
F->result_ = F->no_2491;
goto ret_;
} else if ((((rt_r_ichk((*(P1026)rt_nil_check(F->sa_852)).kind) == (((rt_int)80LL))) && rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->sa_852)).name))->all), rt_str("TYPEOF", 6))) || ((rt_r_ichk((*(P1026)rt_nil_check(F->sb_853)).kind) == (((rt_int)80LL))) && rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->sb_853)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_2490;
goto ret_;
}
if (f_scalar_kind_186(F->ta_2487)) {
F->r_2489 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_198(F->ta_2487, F->ca_2485)), rt_str(") == (", 6)), f_sub_lo_198(F->tb_2488, F->cb_2486)), rt_str(") && (", 6)), f_sub_hi_201(F->ta_2487, F->ca_2485)), rt_str(") == (", 6)), f_sub_hi_201(F->tb_2488, F->cb_2486)), rt_str(")", 1)); b_; }));
if ((rt_r_ichk((*(P1032)rt_nil_check(F->ta_2487)).kind) == (((rt_int)3LL)))) {
F->r_2489 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_2489))->all), rt_str(" && ", 4)), f_float_prec_858(F->ca_2485)), rt_str(" == ", 4)), f_float_prec_858(F->cb_2486)); b_; }));
}
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->ta_2487)).kind) == (((rt_int)5LL)))) {
if (((((F->ca_2485 != NULL) && (F->cb_2486 != NULL)) && ((*(P1028)rt_nil_check(F->ca_2485)).slen != NULL)) && ((*(P1028)rt_nil_check(F->cb_2486)).slen != NULL))) {
F->r_2489 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1019)rt_nil_check((*(P1028)rt_nil_check(F->ca_2485)).slen))->all)), rt_str(") == (", 6)), (((P1019)rt_nil_check((*(P1028)rt_nil_check(F->cb_2486)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_2485 == NULL) || ((*(P1028)rt_nil_check(F->ca_2485)).slen == NULL)) && ((F->cb_2486 == NULL) || ((*(P1028)rt_nil_check(F->cb_2486)).slen == NULL))))) {
F->r_2489 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->ta_2487)).kind) == (((rt_int)6LL)))) {
{ rt_int lo2493 = ((rt_int)1LL), hi2494 = rt_r_ichk((*(P1032)rt_nil_check(F->ta_2487)).ndim);
for (rt_int it2495 = lo2493; it2495 <= hi2494; it2495++) {
F->k_2492 = it2495;
if (((((F->ca_2485 != NULL) && (F->cb_2486 != NULL)) && (f_cons_lo_252(F->ca_2485, F->k_2492) != NULL)) && (f_cons_lo_252(F->cb_2486, F->k_2492) != NULL))) {
F->r_2489 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_2489))->all), rt_str(" && (", 5)), (((P1019)rt_nil_check(f_cons_lo_252(F->ca_2485, F->k_2492)))->all)), rt_str(") == (", 6)), (((P1019)rt_nil_check(f_cons_lo_252(F->cb_2486, F->k_2492)))->all)), rt_str(") && (", 6)), (((P1019)rt_nil_check(f_cons_hi_255(F->ca_2485, F->k_2492)))->all)), rt_str(") == (", 6)), (((P1019)rt_nil_check(f_cons_hi_255(F->cb_2486, F->k_2492)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if (((((rt_r_ichk((*(P1032)rt_nil_check(F->ta_2487)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->ta_2487)).tparams != NULL)) && (F->ca_2485 != NULL)) && (F->cb_2486 != NULL))) {
F->a_2496 = NULL;
F->a_2496 = (*(P1028)rt_nil_check(F->ca_2485)).args;
F->b_2497 = NULL;
F->b_2497 = (*(P1028)rt_nil_check(F->cb_2486)).args;
F->at_2498 = NULL;
F->bt2_2499 = NULL;
while (((F->a_2496 != NULL) && (F->b_2497 != NULL))) {
F->x_2500 = rt_str_copy(f_gexpr_800(F->a_2496, NULL, &F->at_2498));
F->y_2501 = rt_str_copy(f_gexpr_800(F->b_2497, F->at_2498, &F->bt2_2499));
F->r_2489 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_2489))->all), rt_str(" && ", 4)), f_eq_code_418(F->at_2498, &F->x_2500, &F->y_2501)); b_; }));
F->a_2496 = (*(P1026)rt_nil_check(F->a_2496)).next;
F->b_2497 = (*(P1026)rt_nil_check(F->b_2497)).next;
}
} else if ((((rt_r_ichk((*(P1032)rt_nil_check(F->ta_2487)).kind) == (((rt_int)17LL))) && (F->ca_2485 != NULL)) && (F->cb_2486 != NULL))) {
if ((((*(P1028)rt_nil_check(F->ca_2485)).lo != NULL) && ((*(P1028)rt_nil_check(F->cb_2486)).lo != NULL))) {
F->r_2489 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1019)rt_nil_check((*(P1028)rt_nil_check(F->ca_2485)).lo))->all)), rt_str(") == (", 6)), (((P1019)rt_nil_check((*(P1028)rt_nil_check(F->cb_2486)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P1028)rt_nil_check(F->ca_2485)).lo != NULL) || ((*(P1028)rt_nil_check(F->cb_2486)).lo != NULL))) {
F->r_2489 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_854), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P1019)rt_nil_check(F->r_2489))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1019)rt_nil_check(F->r_2489))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_858(P1028 c_857) {
  struct f_float_prec_858fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_857 = c_857;
if (((F->c_857 != NULL) && ((*(P1028)rt_nil_check(F->c_857)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_857)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_864(P1026 e_859, P1032 bt_860, P1028 c_861, P1019 base_862, P1032 *t_863) {
  struct f_file_attribute_864fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_859 = e_859;
F->bt_860 = bt_860;
F->c_861 = c_861;
F->base_862 = base_862;
F->t_863 = t_863;
F->t_863v = *F->t_863;
F->t_863v = g_file_mode_type_1121;
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_859)).name))->all), rt_str("ACCESS", 6))) {
F->t_863v = g_file_access_type_1127;
}
if ((F->base_862 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_859)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P1019)rt_nil_check(F->base_862))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P1019)rt_nil_check(F->base_862))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_861 != NULL) && ((*(P1028)rt_nil_check(F->c_861)).args != NULL))) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_859)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_800((*(P1028)rt_nil_check(F->c_861)).args, F->t_863v, &F->t_863v);
goto ret_;
} else if (((*(P1026)rt_nil_check((*(P1028)rt_nil_check(F->c_861)).args)).next != NULL)) {
F->result_ = f_gexpr_800((*(P1026)rt_nil_check((*(P1028)rt_nil_check(F->c_861)).args)).next, F->t_863v, &F->t_863v);
goto ret_;
}
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_859)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_859)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_863) = F->t_863v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_868(P1026 e_865, P1032 want_866, P1032 *t_867) {
  struct f_gbinop_868fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_865 = e_865;
F->want_866 = want_866;
F->t_867 = t_867;
F->t_867v = *F->t_867;
F->op_2502 = NULL;
F->op_2502 = (*(P1026)rt_nil_check(F->e_865)).name;
F->ta_2503 = NULL;
F->tb_2504 = NULL;
F->hint_2505 = NULL;
F->uy_2506 = NULL;
F->t_867v = g_ty_bool_1111;
if (((((rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("/=", 2)) || rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str(">", 1))) || rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("<=", 2))) || rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str(">=", 2))) && (f_derived_relation_829(F->e_865) != NULL))) {
F->result_ = f_gexpr_800(f_derived_relation_829(F->e_865), g_ty_bool_1111, &F->t_867v);
goto ret_;
}
if ((f_lookup_163(&(((P1019)rt_nil_check(F->op_2502))->all)) != NULL)) {
F->l_2507 = NULL;
F->r_2508 = NULL;
F->l_2507 = f_copy_node_839((*(P1026)rt_nil_check(F->e_865)).a);
F->r_2508 = f_copy_node_839((*(P1026)rt_nil_check(F->e_865)).b);
(*(P1026)rt_nil_check(F->l_2507)).next = F->r_2508;
F->uy_2506 = f_user_op_944(&(((P1019)rt_nil_check(F->op_2502))->all), F->l_2507);
if ((F->uy_2506 != NULL)) {
F->call_2509 = NULL;
F->call_2509 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
F->fname_2510 = NULL;
F->fname_2510 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
(*(P1026)rt_nil_check(F->fname_2510)).name = F->op_2502;
(*(P1026)rt_nil_check(F->call_2509)).a = F->fname_2510;
(*(P1026)rt_nil_check(F->call_2509)).b = F->l_2507;
F->result_ = f_gcall_948(F->call_2509, 0, &F->t_867v);
goto ret_;
}
}
if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("IN", 2))) {
F->s_2511 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_865)).b, NULL, &F->tb_2504));
if ((rt_r_ichk((*(P1032)rt_nil_check(F->tb_2504)).kind) != (((rt_int)16LL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2512 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_865)).a, (*(P1032)rt_nil_check(F->tb_2504)).elem, &F->ta_2503));
f_check_type_232(F->ta_2503, (*(P1032)rt_nil_check(F->tb_2504)).elem, rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
F->t_867v = g_ty_bool_1111;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_in(", 9), F->a_2512), rt_str(", ", 2)), F->s_2511), rt_str(")", 1));
goto ret_;
}
}
if ((((rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("AND", 3)) || rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("OR", 2))) || rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("XOR", 3))) && (f_set_operands_819(F->e_865, F->want_866) != NULL))) {
F->a_2513 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_865)).a, f_set_operands_819(F->e_865, F->want_866), &F->ta_2503));
F->b_2514 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_865)).b, F->ta_2503, &F->tb_2504));
f_check_type_232(F->tb_2504, F->ta_2503, rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
F->t_867v = F->ta_2503;
if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_inter(", 12), F->a_2513), rt_str(", ", 2)), F->b_2514), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_union(", 12), F->a_2513), rt_str(", ", 2)), F->b_2514), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_xor(", 10), F->a_2513), rt_str(", ", 2)), F->b_2514), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("AND", 3)) || rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("OR", 2))) || rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("XOR", 3)))) {
F->a_2515 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_865)).a, g_ty_bool_1111, &F->ta_2503));
F->b_2516 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_865)).b, g_ty_bool_1111, &F->tb_2504));
f_check_type_232(F->ta_2503, g_ty_bool_1111, rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
f_check_type_232(F->tb_2504, g_ty_bool_1111, rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2515), rt_str(" && ", 4)), F->b_2516), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2515), rt_str(" || ", 4)), F->b_2516), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2515), rt_str(" != ", 4)), F->b_2516), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("&", 1)) && (F->want_866 != NULL)) && ((*(P1032)rt_nil_check(f_base_of_223(F->want_866))).kind == (((rt_int)6LL))))) {
F->at_2517 = NULL;
F->at_2517 = f_base_of_223(F->want_866);
F->a_2518 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_865)).a, F->at_2517, &F->ta_2503));
F->b_2519 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_865)).b, F->at_2517, &F->tb_2504));
f_check_type_232(F->ta_2503, F->at_2517, rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
f_check_type_232(F->tb_2504, F->at_2517, rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
if (((rt_r_ichk((*(P1032)rt_nil_check(F->at_2517)).ndim) != ((rt_int)1LL)) || ((*(P1032)rt_nil_check(f_base_of_223((*(P1032)rt_nil_check(F->at_2517)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_781(F->at_2517);
F->t_867v = F->at_2517;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_234(F->at_2517)), rt_str("(", 1)), F->a_2518), rt_str(", ", 2)), F->b_2519), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("&", 1))) {
F->wa_2520 = NULL;
F->wb_2521 = NULL;
F->ws_2522 = NULL;
F->ce_2523 = NULL;
F->ce_2523 = g_ty_ascii_1113;
if (((F->want_866 != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->want_866)).kind) == (((rt_int)5LL))))) {
F->ws_2522 = F->want_866;
F->ce_2523 = f_str_elem_218(F->want_866);
}
if ((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_865)).a)).kind) == (((rt_int)4LL)))) {
F->wa_2520 = F->ce_2523;
} else {
F->wa_2520 = F->ws_2522;
}
if ((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_865)).b)).kind) == (((rt_int)4LL)))) {
F->wb_2521 = F->ce_2523;
} else {
F->wb_2521 = F->ws_2522;
}
{
F->a_2524 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_865)).a, F->wa_2520, &F->ta_2503));
F->b_2525 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_865)).b, F->wb_2521, &F->tb_2504));
F->t_867v = g_ty_string_1114;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->ta_2503)).kind) == (((rt_int)5LL)))) {
F->t_867v = F->ta_2503;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->tb_2504)).kind) == (((rt_int)5LL)))) {
F->t_867v = F->tb_2504;
} else if ((!f_same_221(F->ta_2503, g_ty_ascii_1113))) {
F->t_867v = f_new_typ_183((((rt_int)5LL)));
(*(P1032)rt_nil_check(F->t_867v)).elem = F->ta_2503;
}
if (((rt_r_ichk((*(P1032)rt_nil_check(F->ta_2503)).kind) == (((rt_int)6LL))) && (rt_r_ichk((*(P1032)rt_nil_check(F->tb_2504)).kind) == (((rt_int)6LL))))) {
f_need_slice_781(F->ta_2503);
f_check_type_232(F->tb_2504, F->ta_2503, rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
F->t_867v = F->ta_2503;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_234(F->ta_2503)), rt_str("(", 1)), F->a_2524), rt_str(", ", 2)), F->b_2525), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->ta_2503)).kind) == (((rt_int)5LL)))) {
f_check_type_232(f_str_cat_part_814(F->tb_2504), f_str_elem_218(F->ta_2503), rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->tb_2504)).kind) == (((rt_int)5LL)))) {
f_check_type_232(F->ta_2503, f_str_elem_218(F->tb_2504), rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
} else {
f_check_type_232(F->tb_2504, F->ta_2503, rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
}
if (((rt_r_ichk((*(P1032)rt_nil_check(F->ta_2503)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P1032)rt_nil_check(F->tb_2504)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2524), rt_str(", ", 2)), F->b_2525), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->ta_2503)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P1032)rt_nil_check(F->tb_2504)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2524), rt_str(", ", 2)), F->b_2525), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->ta_2503)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1032)rt_nil_check(F->tb_2504)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2524), rt_str(", ", 2)), F->b_2525), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->ta_2503)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1032)rt_nil_check(F->tb_2504)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2524), rt_str(", ", 2)), F->b_2525), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("=", 1)) || rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("/=", 2))) && (f_as_subtype_297((*(P1026)rt_nil_check(F->e_865)).a) != NULL)) && (f_as_subtype_297((*(P1026)rt_nil_check(F->e_865)).b) != NULL))) {
F->t_867v = g_ty_bool_1111;
F->result_ = f_subtype_compare_856(f_as_subtype_297((*(P1026)rt_nil_check(F->e_865)).a), f_as_subtype_297((*(P1026)rt_nil_check(F->e_865)).b), &(((P1019)rt_nil_check(F->op_2502))->all), rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
goto ret_;
}
if ((f_is_rel_111(&(((P1019)rt_nil_check(F->op_2502))->all)) && (!rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("IN", 2))))) {
if ((((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_865)).a)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_865)).a)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_865)).a)).kind) == (((rt_int)1LL))))) {
F->dummy_2526 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_865)).b, NULL, &F->hint_2505));
} else if ((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->e_865)).a)).kind) == (((rt_int)14LL)))) {
F->hint_2505 = f_peek_type_816((*(P1026)rt_nil_check(F->e_865)).b);
}
{
F->a_2527 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_865)).a, F->hint_2505, &F->ta_2503));
F->b_2528 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_865)).b, F->ta_2503, &F->tb_2504));
F->ct_2529 = NULL;
F->ct_2529 = f_base_of_223(F->ta_2503);
F->t_867v = g_ty_bool_1111;
if (((rt_r_ichk((*(P1032)rt_nil_check(F->ta_2503)).kind) != (((rt_int)11LL))) && (rt_r_ichk((*(P1032)rt_nil_check(F->tb_2504)).kind) != (((rt_int)11LL))))) {
f_check_type_232(F->tb_2504, F->ta_2503, rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->ta_2503)).kind) == (((rt_int)11LL)))) {
F->ct_2529 = f_base_of_223(F->tb_2504);
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->ct_2529)).kind) == (((rt_int)5LL)))) {
if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2527), rt_str(", ", 2)), F->b_2528), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2527), rt_str(", ", 2)), F->b_2528), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2527), rt_str(", ", 2)), F->b_2528), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2527), rt_str(", ", 2)), F->b_2528), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2528), rt_str(", ", 2)), F->a_2527), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2528), rt_str(", ", 2)), F->a_2527), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->ct_2529)).kind) == (((rt_int)16LL)))) {
if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), F->a_2527), rt_str(", ", 2)), F->b_2528), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!y_set_eq(", 11), F->a_2527), rt_str(", ", 2)), F->b_2528), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->a_2527), rt_str(", ", 2)), F->b_2528), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->b_2528), rt_str(", ", 2)), F->a_2527), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->a_2527), rt_str(", ", 2)), F->b_2528), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->b_2528), rt_str(", ", 2)), F->a_2527), rt_str(")", 1));
goto ret_;
}
if ((((((((rt_r_ichk((*(P1032)rt_nil_check(F->ct_2529)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->ct_2529)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P1032)rt_nil_check(F->ct_2529)).kind) == (((rt_int)11LL)))) || (rt_r_ichk((*(P1032)rt_nil_check(F->ct_2529)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P1032)rt_nil_check(F->ct_2529)).kind) == (((rt_int)12LL)))) && (!rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("=", 1)))) && (!rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("/=", 2))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only = and /= compare values of this type", 41); b_; }));
}
if (f_composite_394(F->ct_2529)) {
if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_418(F->ct_2529, &F->a_2527, &F->b_2528);
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_418(F->ct_2529, &F->a_2527, &F->b_2528)), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2527), rt_str(" == ", 4)), F->b_2528), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2527), rt_str(" != ", 4)), F->b_2528), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2527), rt_str(" ", 1)), (((P1019)rt_nil_check(F->op_2502))->all)), rt_str(" ", 1)), F->b_2528), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2530 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_865)).a, F->want_866, &F->ta_2503));
F->b_2531 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->e_865)).b, f_exponent_want_975(&(((P1019)rt_nil_check(F->op_2502))->all), F->ta_2503), &F->tb_2504));
if (((rt_r_ichk((*(P1032)rt_nil_check(F->ta_2503)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->tb_2504)).kind) == (((rt_int)3LL))))) {
F->t_867v = g_ty_float_1112;
if (((rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("+", 1)) || rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("-", 1))) || rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(", 10), F->a_2530), rt_str(" ", 1)), (((P1019)rt_nil_check(F->op_2502))->all)), rt_str(" ", 1)), F->b_2531), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(rt_fdiv(", 18), F->a_2530), rt_str(", ", 2)), F->b_2531), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("**", 2))) {
f_check_type_232(F->tb_2504, g_ty_int_1110, rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fpow(", 10), F->a_2530), rt_str(", ", 2)), F->b_2531), rt_str(")", 1));
goto ret_;
}
}
f_check_type_232(F->ta_2503, g_ty_int_1110, rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
f_check_type_232(F->tb_2504, g_ty_int_1110, rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line));
F->t_867v = g_ty_int_1110;
if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2530), rt_str(", ", 2)), F->b_2531), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2530), rt_str(", ", 2)), F->b_2531), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2530), rt_str(", ", 2)), F->b_2531), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2530), rt_str(", ", 2)), F->b_2531), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2530), rt_str(", ", 2)), F->b_2531), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1019)rt_nil_check(F->op_2502))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2530), rt_str(", ", 2)), F->b_2531), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_865)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P1019)rt_nil_check(F->op_2502))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_867) = F->t_867v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_873(P1026 e_869, P1032 want_870, P1028 ctx_871, P1032 *t_872) {
  struct f_constructor_873fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_869 = e_869;
F->want_870 = want_870;
F->ctx_871 = ctx_871;
F->t_872 = t_872;
F->t_872v = *F->t_872;
F->it_2532 = NULL;
F->it_2532 = (*(P1026)rt_nil_check(F->e_869)).a;
F->f_2533 = NULL;
F->vt_2534 = NULL;
if (((F->want_870 != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->want_870)).kind) == (((rt_int)16LL))))) {
F->s_2535 = NULL;
F->s_2535 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_empty_set_306(F->want_870); b_; }));
F->t_872v = F->want_870;
while ((F->it_2532 != NULL)) {
F->v_2536 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->it_2532)).b, (*(P1032)rt_nil_check(F->want_870)).elem, &F->vt_2534));
f_check_type_232(F->vt_2534, (*(P1032)rt_nil_check(F->want_870)).elem, rt_r_ichk((*(P1026)rt_nil_check(F->e_869)).line));
F->s_2535 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_add(", 10), (((P1019)rt_nil_check(F->s_2535))->all)), rt_str(", ", 2)), F->v_2536), rt_str(")", 1)); b_; }));
F->it_2532 = (*(P1026)rt_nil_check(F->it_2532)).next;
}
F->result_ = (((P1019)rt_nil_check(F->s_2535))->all);
goto ret_;
}
if (((F->want_870 != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->want_870)).kind) == (((rt_int)15LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_869)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->want_870)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_870 != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->want_870)).kind) == (((rt_int)6LL))))) {
F->result_ = f_array_cons_887(F->e_869, F->want_870, F->ctx_871, &F->t_872v);
goto ret_;
}
if (((F->want_870 != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->want_870)).kind) == (((rt_int)17LL))))) {
if ((((((F->it_2532 == NULL) || ((*(P1026)rt_nil_check(F->it_2532)).next != NULL)) || ((*(P1026)rt_nil_check(F->it_2532)).a == NULL)) || ((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->it_2532)).a)).next != NULL)) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->it_2532)).a)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_869)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2533 = (*(P1032)rt_nil_check(F->want_870)).fields;
{
F->i_2537 = RT_R_IUNDEF;
F->i_2537 = ((rt_int)0LL);
F->tmp_2538 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2533 != NULL) && (!rt_str_eq((((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_2533)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->it_2532)).a)).a)).name))->all))))) {
F->i_2537 = rt_add(rt_r_ichk(F->i_2537), ((rt_int)1LL));
F->f_2533 = (*(P1034)rt_nil_check(F->f_2533)).next;
}
if ((F->f_2533 == NULL)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_869)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->it_2532)).a)).a)).name))->all)); b_; }));
}
F->t_872v = F->want_870;
g_cons_ctx_1101 = (*(P1034)rt_nil_check(F->f_2533)).c;
{
F->v_2539 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->it_2532)).b, (*(P1034)rt_nil_check(F->f_2533)).t, &F->vt_2534));
f_check_type_232(F->vt_2534, (*(P1034)rt_nil_check(F->f_2533)).t, rt_r_ichk((*(P1026)rt_nil_check(F->e_869)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->want_870)), rt_str(" ", 1)), F->tmp_2538), rt_str("; ", 2)), F->tmp_2538), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk(F->i_2537))), rt_str("; ", 2)), F->tmp_2538), rt_str(".u.", 3)), f_field_c_17(&(((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_2533)).name))->all))), rt_str(" = ", 3)), f_comp_value_877((*(P1034)rt_nil_check(F->f_2533)).t, (*(P1034)rt_nil_check(F->f_2533)).c, &F->v_2539)), rt_str("; ", 2)), F->tmp_2538), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_870 == NULL) || (rt_r_ichk((*(P1032)rt_nil_check(F->want_870)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_869)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_872v = F->want_870;
F->f_2533 = (*(P1032)rt_nil_check(F->want_870)).fields;
{
F->tmp_2540 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2541 = NULL;
F->parts_2541 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->want_870)), rt_str(" ", 1)), F->tmp_2540), rt_str(";", 1)); b_; }));
while ((F->it_2532 != NULL)) {
F->k_2542 = NULL;
F->k_2542 = (*(P1026)rt_nil_check(F->it_2532)).a;
F->shared_2543 = NULL;
if ((F->k_2542 == NULL)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_869)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2542 != NULL)) {
if (((((F->f_2533 == NULL) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->k_2542)).a)).kind) != (((rt_int)7LL)))) || ((*(P1026)rt_nil_check(F->k_2542)).b != NULL)) || (!rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->k_2542)).a)).name))->all), (((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_2533)).name))->all))))) {
if ((F->f_2533 == NULL)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_869)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_869)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_2533)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->it_2532)).a)).next == NULL)) {
g_cons_ctx_1101 = (*(P1034)rt_nil_check(F->f_2533)).c;
{
F->v_2544 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->it_2532)).b, (*(P1034)rt_nil_check(F->f_2533)).t, &F->vt_2534));
f_check_type_232(F->vt_2534, (*(P1034)rt_nil_check(F->f_2533)).t, rt_r_ichk((*(P1026)rt_nil_check(F->e_869)).line));
F->parts_2541 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->parts_2541))->all), rt_str(" ", 1)), F->tmp_2540), rt_str(".", 1)), f_field_c_17(&(((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_2533)).name))->all))), rt_str(" = ", 3)), f_comp_value_877((*(P1034)rt_nil_check(F->f_2533)).t, (*(P1034)rt_nil_check(F->f_2533)).c, &F->v_2544)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2543 == NULL)) {
F->v_2545 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->it_2532)).b, (*(P1034)rt_nil_check(F->f_2533)).t, &F->vt_2534));
F->shared_2543 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_232(F->vt_2534, (*(P1034)rt_nil_check(F->f_2533)).t, rt_r_ichk((*(P1026)rt_nil_check(F->e_869)).line));
F->parts_2541 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->parts_2541))->all), rt_str(" ", 1)), f_ctype_234((*(P1034)rt_nil_check(F->f_2533)).t)), rt_str(" ", 1)), (((P1019)rt_nil_check(F->shared_2543))->all)), rt_str(" = ", 3)), F->v_2545), rt_str(";", 1)); b_; }));
}
f_check_type_232(F->vt_2534, (*(P1034)rt_nil_check(F->f_2533)).t, rt_r_ichk((*(P1026)rt_nil_check(F->e_869)).line));
F->parts_2541 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->parts_2541))->all), rt_str(" ", 1)), F->tmp_2540), rt_str(".", 1)), f_field_c_17(&(((P1019)rt_nil_check((*(P1034)rt_nil_check(F->f_2533)).name))->all))), rt_str(" = ", 3)), f_comp_value_877((*(P1034)rt_nil_check(F->f_2533)).t, (*(P1034)rt_nil_check(F->f_2533)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_414((*(P1034)rt_nil_check(F->f_2533)).t, &(((P1019)rt_nil_check(F->shared_2543))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2533 = (*(P1034)rt_nil_check(F->f_2533)).next;
F->k_2542 = (*(P1026)rt_nil_check(F->k_2542)).next;
}
F->it_2532 = (*(P1026)rt_nil_check(F->it_2532)).next;
}
if ((F->f_2533 != NULL)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_869)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->parts_2541))->all), rt_str(" ", 1)), F->tmp_2540), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_872) = F->t_872v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_877(P1032 t_874, P1028 c_875, rstr *v_876) {
  struct f_comp_value_877fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_874 = t_874;
F->c_875 = c_875;
F->v_876 = v_876;
if ((((rt_r_ichk((*(P1032)rt_nil_check(F->t_874)).kind) == (((rt_int)15LL))) && ((*(P1032)rt_nil_check(F->t_874)).assignp != NULL)) && (rt_r_echk(g_in_func_1082) || f_top_level_406((*(P1032)rt_nil_check(F->t_874)).assignp)))) {
F->ct_2546 = rt_str_copy(f_ctype_234(F->t_874));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_2546), rt_str(" s_ = ", 6)), (*F->v_876)), rt_str("; ", 2)), F->ct_2546), rt_str(" t_ = ", 6)), f_copy_code_414(F->t_874, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s_", 2); b_; }))), rt_str("; ", 2)), f_user_call2_400((*(P1032)rt_nil_check(F->t_874)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("t_", 2); b_; }), 1, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s_", 2); b_; }), 0)), rt_str("; t_; })", 8));
goto ret_;
} else if (((F->c_875 == NULL) || (((*(P1028)rt_nil_check(F->c_875)).lo != NULL) && f_has_at_879(&(((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_875)).lo))->all))))) {
F->result_ = f_copy_code_414(F->t_874, &(*F->v_876));
goto ret_;
} else if ((((rt_r_ichk((*(P1032)rt_nil_check(F->t_874)).kind) == (((rt_int)5LL))) && ((*(P1028)rt_nil_check(F->c_875)).slen != NULL)) && (!f_has_at_879(&(((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_875)).slen))->all))))) {
F->result_ = f_copy_code_414(F->t_874, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_876)), rt_str(", ", 2)), (((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_875)).slen))->all)), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_213(F->t_874, F->c_875, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_414(F->t_874, &(*F->v_876)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_879(rstr *s_878) {
  struct f_has_at_879fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_878 = s_878;
{ rt_int lo2548 = ((rt_int)1LL), hi2549 = ((rt_int)(((*F->s_878)).len));
for (rt_int it2550 = lo2548; it2550 <= hi2549; it2550++) {
F->i_2547 = it2550;
if ((rt_r_echk(rt_str_get((*F->s_878), F->i_2547)) == 64)) {
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

static rstr f_set_elem_882(P1032 st_880, rstr *v_881) {
  struct f_set_elem_882fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_880 = st_880;
F->v_881 = v_881;
F->result_ = (*F->v_881);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_887(P1026 e_883, P1032 at_884, P1028 ctx_885, P1032 *t_886) {
  struct f_array_cons_887fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_883 = e_883;
F->at_884 = at_884;
F->ctx_885 = ctx_885;
F->t_886 = t_886;
F->t_886v = *F->t_886;
F->tmp_2551 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2552 = NULL;
F->parts_2552 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->at_884)), rt_str(" ", 1)), F->tmp_2551), rt_str(";", 1)); b_; }));
F->it_2553 = NULL;
F->it_2553 = (*(P1026)rt_nil_check(F->e_883)).a;
F->positional_2554 = RT_R_EUNDEF;
F->positional_2554 = 1;
F->t_886v = F->at_884;
while ((F->it_2553 != NULL)) {
if (((*(P1026)rt_nil_check(F->it_2553)).a != NULL)) {
F->positional_2554 = 0;
}
F->it_2553 = (*(P1026)rt_nil_check(F->it_2553)).next;
}
{ rt_int lo2556 = ((rt_int)1LL), hi2557 = rt_r_ichk((*(P1032)rt_nil_check(F->at_884)).ndim);
for (rt_int it2558 = lo2556; it2558 <= hi2557; it2558++) {
F->k_2555 = it2558;
F->lo_2559 = NULL;
F->hi_2560 = NULL;
if ((((F->ctx_885 != NULL) && (f_cons_lo_252(F->ctx_885, F->k_2555) != NULL)) && (!f_has_at_879(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1019)rt_nil_check(f_cons_lo_252(F->ctx_885, F->k_2555)))->all); b_; }))))) {
F->lo_2559 = f_cons_lo_252(F->ctx_885, F->k_2555);
F->hi_2560 = f_cons_hi_255(F->ctx_885, F->k_2555);
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->at_884)).ndim) == ((rt_int)1LL)) && rt_r_echk(F->positional_2554))) {
if (((*(P1032)rt_nil_check(f_base_of_223((*(P1032)rt_nil_check(F->at_884)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2559 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2559 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2560 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1019)rt_nil_check(F->lo_2559))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_71((*(P1026)rt_nil_check(F->e_883)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_883)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2552 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->parts_2552))->all), rt_str(" ", 1)), F->tmp_2551), rt_str(".", 1)), f_dim_lo_242(F->k_2555)), rt_str(" = ", 3)), (((P1019)rt_nil_check(F->lo_2559))->all)), rt_str("; ", 2)), F->tmp_2551), rt_str(".", 1)), f_dim_hi_244(F->k_2555)), rt_str(" = ", 3)), (((P1019)rt_nil_check(F->hi_2560))->all)), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->at_884)).ndim) == ((rt_int)1LL))) {
F->parts_2552 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->parts_2552))->all), rt_str(" ", 1)), F->tmp_2551), rt_str(".lo2 = ", 7)), F->tmp_2551), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2552 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->parts_2552))->all), rt_str(" rt_int n_", 10)), F->tmp_2551), rt_str(" = ", 3)), f_acnt_249(F->at_884, &F->tmp_2551)), rt_str("; ", 2)), F->tmp_2551), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_234((*(P1032)rt_nil_check(F->at_884)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2551), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2551), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2551), rt_str(" + 1);", 6)); b_; }));
F->parts_2552 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->parts_2552))->all), f_fill_items_893((*(P1026)rt_nil_check(F->e_883)).a, F->at_884, &F->tmp_2551, NULL, ((rt_int)1LL))); b_; }));
F->parts_2552 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->parts_2552))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2551), rt_str("; i_++) if (seen_", 17)), F->tmp_2551), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2551), rt_str("; })", 4)); b_; }));
F->result_ = (((P1019)rt_nil_check(F->parts_2552))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_886) = F->t_886v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_893(P1026 items_888, P1032 at_889, rstr *tmp_890, P1030 prefix_891, rt_int dim_892) {
  struct f_fill_items_893fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_888 = items_888;
F->at_889 = at_889;
F->tmp_890 = tmp_890;
F->prefix_891 = prefix_891;
F->dim_892 = dim_892;
F->it_2561 = NULL;
F->it_2561 = F->items_888;
F->pos_2562 = RT_R_IUNDEF;
F->pos_2562 = ((rt_int)0LL);
F->r_2563 = NULL;
F->r_2563 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2564 = NULL;
while ((F->it_2561 != NULL)) {
if (((*(P1026)rt_nil_check(F->it_2561)).a == NULL)) {
if (((F->dim_892 < rt_r_ichk((*(P1032)rt_nil_check(F->at_889)).ndim)) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->it_2561)).b)).kind) == (((rt_int)14LL))))) {
F->r_2563 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_2563))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_892)), rt_str(" = ", 3)), (*F->tmp_890)), rt_str(".", 1)), f_dim_lo_242(F->dim_892)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2562))), rt_str("; ", 2)), f_fill_items_893((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->it_2561)).b)).a, F->at_889, &(*F->tmp_890), f_add_line_898(F->prefix_891, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_892)); b_; })), rt_add(F->dim_892, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2565 = rt_str_copy(f_item_value_903((*(P1026)rt_nil_check(F->it_2561)).b, F->at_889, f_e_line_895(F->it_2561), &F->vt_2564));
if (((F->dim_892 == ((rt_int)1LL)) && (rt_r_ichk((*(P1032)rt_nil_check(F->at_889)).ndim) > ((rt_int)1LL)))) {
F->r_2563 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_2563))->all), rt_str(" { ", 3)), F->v_2565), rt_str(" if (", 5)), f_itos_7(rt_r_ichk(F->pos_2562))), rt_str(" >= n_", 6)), (*F->tmp_890)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_890)), rt_str(".p[", 3)), f_itos_7(rt_r_ichk(F->pos_2562))), rt_str("] = ", 4)), f_copy_code_414((*(P1032)rt_nil_check(F->at_889)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_890)), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->pos_2562))), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2563 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_2563))->all), rt_str(" { ", 3)), F->v_2565), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_892)), rt_str(" = ", 3)), (*F->tmp_890)), rt_str(".", 1)), f_dim_lo_242(F->dim_892)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2562))), rt_str("; ", 2)), f_store_at_913(F->at_889, &(*F->tmp_890), f_add_line_898(F->prefix_891, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_892)); b_; })), F->dim_892)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2562 = rt_add(rt_r_ichk(F->pos_2562), ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_892, f_list_len_71((*(P1026)rt_nil_check(F->it_2561)).a)), ((rt_int)1LL)) == rt_r_ichk((*(P1032)rt_nil_check(F->at_889)).ndim))) {
F->k_2566 = NULL;
F->k_2566 = (*(P1026)rt_nil_check(F->it_2561)).a;
F->d_2567 = RT_R_IUNDEF;
F->d_2567 = F->dim_892;
F->pre_2568 = NULL;
F->pre_2568 = F->prefix_891;
F->loops_2569 = NULL;
F->loops_2569 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2570 = NULL;
F->ends_2570 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2571 = rt_str_copy(f_item_value_903((*(P1026)rt_nil_check(F->it_2561)).b, F->at_889, rt_r_ichk((*(P1026)rt_nil_check(F->it_2561)).line), &F->vt_2564));
while ((F->k_2566 != NULL)) {
F->xv_2572 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(rt_r_ichk(F->d_2567))));
F->loops_2569 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->loops_2569))->all), f_key_loop_908(F->k_2566, F->at_889, rt_r_ichk(F->d_2567), &F->xv_2572)); b_; }));
F->ends_2570 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->ends_2570))->all), rt_str(" }", 2)); b_; }));
F->pre_2568 = f_add_line_898(F->pre_2568, &F->xv_2572);
F->d_2567 = rt_add(rt_r_ichk(F->d_2567), ((rt_int)1LL));
F->k_2566 = (*(P1026)rt_nil_check(F->k_2566)).next;
}
F->r_2563 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_2563))->all), rt_str(" { ", 3)), F->v_2571), (((P1019)rt_nil_check(F->loops_2569))->all)), rt_str(" ", 1)), f_store_at_913(F->at_889, &(*F->tmp_890), F->pre_2568, rt_r_ichk((*(P1032)rt_nil_check(F->at_889)).ndim))), (((P1019)rt_nil_check(F->ends_2570))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_892 == rt_r_ichk((*(P1032)rt_nil_check(F->at_889)).ndim)) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->it_2561)).b)).kind) == (((rt_int)14LL))))) {
F->k_2573 = NULL;
F->k_2573 = (*(P1026)rt_nil_check(F->it_2561)).a;
while ((F->k_2573 != NULL)) {
F->xv_2574 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_892)));
if ((F->dim_892 < rt_r_ichk((*(P1032)rt_nil_check(F->at_889)).ndim))) {
F->r_2563 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_2563))->all), rt_str(" {", 2)), f_key_loop_908(F->k_2573, F->at_889, F->dim_892, &F->xv_2574)), rt_str(" ", 1)), f_fill_items_893((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->it_2561)).b)).a, F->at_889, &(*F->tmp_890), f_add_line_898(F->prefix_891, &F->xv_2574), rt_add(F->dim_892, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2575 = rt_str_copy(f_item_value_903((*(P1026)rt_nil_check(F->it_2561)).b, F->at_889, rt_r_ichk((*(P1026)rt_nil_check(F->it_2561)).line), &F->vt_2564));
F->r_2563 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_2563))->all), rt_str(" { ", 3)), F->v_2575), f_key_loop_908(F->k_2573, F->at_889, F->dim_892, &F->xv_2574)), rt_str(" ", 1)), f_store_at_913(F->at_889, &(*F->tmp_890), f_add_line_898(F->prefix_891, &F->xv_2574), F->dim_892)), rt_str(" } }", 4)); b_; }));
}
F->k_2573 = (*(P1026)rt_nil_check(F->k_2573)).next;
}
} else {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->it_2561)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub(rt_r_ichk((*(P1032)rt_nil_check(F->at_889)).ndim), F->dim_892), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2561 = (*(P1026)rt_nil_check(F->it_2561)).next;
}
F->result_ = (((P1019)rt_nil_check(F->r_2563))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_895(P1026 e_894) {
  struct f_e_line_895fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_894 = e_894;
F->result_ = rt_r_ichk((*(P1026)rt_nil_check(F->e_894)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1030 f_add_line_898(P1030 l_896, rstr *s_897) {
  struct f_add_line_898fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_896 = l_896;
F->s_897 = s_897;
F->r_2576 = NULL;
F->tail_2577 = NULL;
F->x_2578 = NULL;
F->p_2579 = NULL;
F->p_2579 = F->l_896;
while ((F->p_2579 != NULL)) {
{ R1031 *cell2580 = rt_alloc(sizeof(R1031));
(*cell2580).s = NULL;
(*cell2580).next = NULL;
F->x_2578 = cell2580;
}
(*(P1030)rt_nil_check(F->x_2578)).s = (*(P1030)rt_nil_check(F->p_2579)).s;
if ((F->tail_2577 == NULL)) {
F->r_2576 = F->x_2578;
} else {
(*(P1030)rt_nil_check(F->tail_2577)).next = F->x_2578;
}
F->tail_2577 = F->x_2578;
F->p_2579 = (*(P1030)rt_nil_check(F->p_2579)).next;
}
{ R1031 *cell2581 = rt_alloc(sizeof(R1031));
(*cell2581).s = NULL;
(*cell2581).next = NULL;
F->x_2578 = cell2581;
}
(*(P1030)rt_nil_check(F->x_2578)).s = f_mk_3(&(*F->s_897));
if ((F->tail_2577 == NULL)) {
F->r_2576 = F->x_2578;
} else {
(*(P1030)rt_nil_check(F->tail_2577)).next = F->x_2578;
}
F->result_ = F->r_2576;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_903(P1026 e_899, P1032 at_900, rt_int line_901, P1032 *vt_902) {
  struct f_item_value_903fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_899 = e_899;
F->at_900 = at_900;
F->line_901 = line_901;
F->vt_902 = vt_902;
F->vt_902v = *F->vt_902;
g_cons_ctx_1101 = (*(P1032)rt_nil_check(F->at_900)).elemcons;
{
F->v_2582 = rt_str_copy(f_gexpr_800(F->e_899, (*(P1032)rt_nil_check(F->at_900)).elem, &F->vt_902v));
f_check_type_232(F->vt_902v, (*(P1032)rt_nil_check(F->at_900)).elem, F->line_901);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1032)rt_nil_check(F->at_900)).elem), rt_str(" v_ = ", 6)), f_comp_value_877((*(P1032)rt_nil_check(F->at_900)).elem, (*(P1032)rt_nil_check(F->at_900)).elemcons, &F->v_2582)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_902) = F->vt_902v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_908(P1026 k_904, P1032 at_905, rt_int d_906, rstr *xv_907) {
  struct f_key_loop_908fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_904 = k_904;
F->at_905 = at_905;
F->d_906 = d_906;
F->xv_907 = xv_907;
F->it_2583 = NULL;
F->lo_2584 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->k_904)).a, f_idx_type_258(F->at_905, F->d_906), &F->it_2583));
f_check_type_232(F->it_2583, f_idx_type_258(F->at_905, F->d_906), rt_r_ichk((*(P1026)rt_nil_check(F->k_904)).line));
if (((*(P1026)rt_nil_check(F->k_904)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_907)), rt_str(" = ", 3)), F->lo_2584), rt_str(";", 1));
goto ret_;
}
{
F->hi_2585 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->k_904)).b, f_idx_type_258(F->at_905, F->d_906), &F->it_2583));
f_check_type_232(F->it_2583, f_idx_type_258(F->at_905, F->d_906), rt_r_ichk((*(P1026)rt_nil_check(F->k_904)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_907)), rt_str(" = ", 3)), F->lo_2584), rt_str(", h", 3)), (*F->xv_907)), rt_str(" = ", 3)), F->hi_2585), rt_str("; ", 2)), (*F->xv_907)), rt_str(" <= h", 5)), (*F->xv_907)), rt_str("; ", 2)), (*F->xv_907)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_913(P1032 at_909, rstr *tmp_910, P1030 xs_911, rt_int n_912) {
  struct f_store_at_913fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_909 = at_909;
F->tmp_910 = tmp_910;
F->xs_911 = xs_911;
F->n_912 = n_912;
F->off_2586 = NULL;
F->x_2587 = NULL;
F->x_2587 = F->xs_911;
F->k_2588 = RT_R_IUNDEF;
F->k_2588 = ((rt_int)0LL);
while ((F->x_2587 != NULL)) {
F->k_2588 = rt_add(rt_r_ichk(F->k_2588), ((rt_int)1LL));
{
F->l_2589 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_910), rt_str(".", 1)), f_dim_lo_242(rt_r_ichk(F->k_2588))));
F->h_2590 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_910), rt_str(".", 1)), f_dim_hi_244(rt_r_ichk(F->k_2588))));
if ((F->off_2586 == NULL)) {
F->off_2586 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P1019)rt_nil_check((*(P1030)rt_nil_check(F->x_2587)).s))->all)), rt_str(", ", 2)), F->l_2589), rt_str(", ", 2)), F->h_2590), rt_str(") - ", 4)), F->l_2589), rt_str(")", 1)); b_; }));
} else {
F->off_2586 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1019)rt_nil_check(F->off_2586))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2589), rt_str(", ", 2)), F->h_2590), rt_str(") + rt_index(", 13)), (((P1019)rt_nil_check((*(P1030)rt_nil_check(F->x_2587)).s))->all)), rt_str(", ", 2)), F->l_2589), rt_str(", ", 2)), F->h_2590), rt_str(") - ", 4)), F->l_2589), rt_str(")", 1)); b_; }));
}
}
F->x_2587 = (*(P1030)rt_nil_check(F->x_2587)).next;
}
if ((rt_r_ichk(F->k_2588) != rt_r_ichk((*(P1032)rt_nil_check(F->at_909)).ndim))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7(rt_r_ichk((*(P1032)rt_nil_check(F->at_909)).ndim))), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P1019)rt_nil_check(F->off_2586))->all)), rt_str("; ", 2)), (*F->tmp_910)), rt_str(".p[o_] = ", 9)), f_copy_code_414((*(P1032)rt_nil_check(F->at_909)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_910)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_916(P1036 y_914, P1026 args_915) {
  struct f_fits_916fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_914 = y_914;
F->args_915 = args_915;
F->a_2591 = NULL;
F->a_2591 = F->args_915;
F->pm_2592 = NULL;
F->pm_2592 = (*(P1036)rt_nil_check(F->y_914)).params;
F->t_2593 = NULL;
F->saved_2594 = NULL;
F->saved_2594 = g_code_1080;
F->ok_2595 = RT_R_EUNDEF;
F->ok_2595 = 1;
F->lv_2596 = NULL;
F->lc_2597 = NULL;
F->ro_2598 = RT_R_EUNDEF;
g_trial_1108 = rt_add(rt_r_ichk(g_trial_1108), ((rt_int)1LL));
g_code_1080 = f_new_buffer_24();
{ rt_frame xf2599;
if (RT_TRY(xf2599)) {
while (((rt_r_echk(F->ok_2595) && (F->a_2591 != NULL)) && (F->pm_2592 != NULL))) {
if (((rt_r_ichk((*(P1038)rt_nil_check(F->pm_2592)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P1038)rt_nil_check(F->pm_2592)).mode) == (((rt_int)3LL))))) {
f_lvalue_769(F->a_2591, &F->lv_2596, &F->t_2593, &F->lc_2597, &F->ro_2598);
} else {
F->v_2601 = rt_str_copy(f_gexpr_800(F->a_2591, (*(P1038)rt_nil_check(F->pm_2592)).t, &F->t_2593));
}
if ((!(f_same_221(F->t_2593, (*(P1038)rt_nil_check(F->pm_2592)).t) || ((rt_r_ichk((*(P1032)rt_nil_check(F->t_2593)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P1032)rt_nil_check((*(P1038)rt_nil_check(F->pm_2592)).t)).kind) == (((rt_int)8LL))))))) {
F->ok_2595 = 0;
}
F->a_2591 = (*(P1026)rt_nil_check(F->a_2591)).next;
F->pm_2592 = (*(P1038)rt_nil_check(F->pm_2592)).next;
}
if (((F->a_2591 != NULL) || (F->pm_2592 != NULL))) {
F->ok_2595 = 0;
}
RT_POP(xf2599);
} else {
RT_POP(xf2599);
int x2600 = rt_xcur;
if (0 || x2600 == ex_compile_error_1) {
F->ok_2595 = 0;
} else {
rt_raise(x2600);
}
}
}
g_trial_1108 = rt_sub(rt_r_ichk(g_trial_1108), ((rt_int)1LL));
g_code_1080 = F->saved_2594;
F->result_ = rt_r_echk(F->ok_2595);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1036 f_resolve_overload_922(rstr *name_917, P1026 tt_918, P1026 args_919, int is_stmt_920, rt_int line_921) {
  struct f_resolve_overload_922fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_917 = name_917;
F->tt_918 = tt_918;
F->args_919 = args_919;
F->is_stmt_920 = is_stmt_920;
F->line_921 = line_921;
F->y_2602 = NULL;
F->first_2603 = NULL;
F->n_2604 = RT_R_IUNDEF;
F->n_2604 = ((rt_int)0LL);
{ rt_int lo2606 = ((rt_int)1LL), hi2607 = ((rt_int)3LL);
for (rt_int it2608 = lo2606; it2608 <= hi2607; it2608++) {
F->pass_2605 = it2608;
F->y_2602 = f_overload_chain_928(&(*F->name_917), F->pass_2605);
while ((F->y_2602 != NULL)) {
if (((rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_2602)).name))->all), (*F->name_917)) && ((rt_r_ichk((*(P1036)rt_nil_check(F->y_2602)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_2602)).kind) == (((rt_int)4LL))))) && ((F->pass_2605 != ((rt_int)1LL)) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_2602)).depth) >= rt_r_ichk(g_gdepth_1099))))) {
F->n_2604 = rt_add(rt_r_ichk(F->n_2604), ((rt_int)1LL));
if ((F->first_2603 == NULL)) {
F->first_2603 = F->y_2602;
}
if (((((rt_r_ichk((*(P1036)rt_nil_check(F->y_2602)).kind) == (((rt_int)4LL))) == F->is_stmt_920) && f_tt_fits_925(F->y_2602, F->tt_918)) && f_fits_916(F->y_2602, F->args_919))) {
F->result_ = F->y_2602;
goto ret_;
}
}
F->y_2602 = (*(P1036)rt_nil_check(F->y_2602)).chain;
}
}
}
if (f_is_builtin_930(&(*F->name_917))) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk(F->n_2604) > ((rt_int)1LL))) {
f_fail_23(F->line_921, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_917)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2603;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_925(P1036 y_923, P1026 tt_924) {
  struct f_tt_fits_925fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_923 = y_923;
F->tt_924 = tt_924;
F->f_2609 = NULL;
F->a_2610 = NULL;
F->saved_2611 = NULL;
F->saved_2611 = g_code_1080;
F->ok_2612 = RT_R_EUNDEF;
F->ok_2612 = 1;
if ((((*(P1036)rt_nil_check(F->y_923)).decl == NULL) || ((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_923)).decl)).e == NULL))) {
F->result_ = (F->tt_924 == NULL);
goto ret_;
} else if ((F->tt_924 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2609 = (*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_923)).decl)).e;
F->a_2610 = F->tt_924;
g_trial_1108 = rt_add(rt_r_ichk(g_trial_1108), ((rt_int)1LL));
g_code_1080 = f_new_buffer_24();
{ rt_frame xf2613;
if (RT_TRY(xf2613)) {
while (((rt_r_echk(F->ok_2612) && (F->f_2609 != NULL)) && (F->a_2610 != NULL))) {
F->fc_2615 = NULL;
F->ac_2616 = NULL;
F->fst_2617 = NULL;
F->fst_2617 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1026)rt_nil_check(F->f_2609)).line));
F->ft_2618 = NULL;
F->at_2619 = NULL;
(*(P1026)rt_nil_check(F->fst_2617)).name = (*(P1026)rt_nil_check(F->f_2609)).name;
F->ft_2618 = f_resolve_subtype_268(F->fst_2617, &F->fc_2615);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->a_2610)).kind) >= (((rt_int)70LL)))) {
F->at_2619 = f_resolve_subtype_268(F->a_2610, &F->ac_2616);
} else {
F->ast_2620 = NULL;
F->ast_2620 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1026)rt_nil_check(F->a_2610)).line));
(*(P1026)rt_nil_check(F->ast_2620)).name = (*(P1026)rt_nil_check(F->a_2610)).name;
F->at_2619 = f_resolve_subtype_268(F->ast_2620, &F->ac_2616);
}
F->ok_2612 = f_same_221(F->ft_2618, F->at_2619);
F->f_2609 = (*(P1026)rt_nil_check(F->f_2609)).next;
F->a_2610 = (*(P1026)rt_nil_check(F->a_2610)).next;
}
F->ok_2612 = ((rt_r_echk(F->ok_2612) && (F->f_2609 == NULL)) && (F->a_2610 == NULL));
RT_POP(xf2613);
} else {
RT_POP(xf2613);
int x2614 = rt_xcur;
if (0 || x2614 == ex_compile_error_1) {
F->ok_2612 = 0;
} else {
rt_raise(x2614);
}
}
}
g_trial_1108 = rt_sub(rt_r_ichk(g_trial_1108), ((rt_int)1LL));
g_code_1080 = F->saved_2611;
F->result_ = rt_r_echk(F->ok_2612);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1036 f_overload_chain_928(rstr *name_926, rt_int pass_927) {
  struct f_overload_chain_928fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_926 = name_926;
F->pass_927 = pass_927;
if (((g_genv_1067 == NULL) && (F->pass_927 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_927 == ((rt_int)2LL))) {
F->result_ = ({ A1042 b_ = (((P1040)rt_nil_check(g_genv_1067))->all); b_.p[(rt_index(f_hash_161(&(*F->name_926)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A1042 b_ = (((P1040)rt_nil_check(g_table_1066))->all); b_.p[(rt_index(f_hash_161(&(*F->name_926)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_930(rstr *n_929) {
  struct f_is_builtin_930fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_929 = n_929;
F->result_ = (((((((((((((((rt_str_eq((*F->n_929), rt_str("ABS", 3)) || rt_str_eq((*F->n_929), rt_str("POS", 3))) || rt_str_eq((*F->n_929), rt_str("SUCC", 4))) || rt_str_eq((*F->n_929), rt_str("PRED", 4))) || rt_str_eq((*F->n_929), rt_str("SQRT", 4))) || rt_str_eq((*F->n_929), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_929), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_929), rt_str("WRITE", 5))) || rt_str_eq((*F->n_929), rt_str("READLN", 6))) || rt_str_eq((*F->n_929), rt_str("SEND", 4))) || rt_str_eq((*F->n_929), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_929), rt_str("DELAY", 5))) || rt_str_eq((*F->n_929), rt_str("TIME", 4))) || rt_str_eq((*F->n_929), rt_str("CNVT", 4))) || rt_str_eq((*F->n_929), rt_str("FORMAT", 6))) || f_is_low_level_932(&(*F->n_929)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_932(rstr *n_931) {
  struct f_is_low_level_932fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_931 = n_931;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_931), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_931), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_931), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_931), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_931), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_931), rt_str("LOCK", 4))) || rt_str_eq((*F->n_931), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_931), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_931), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_931), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_931), rt_str("WAITING", 7))) || rt_str_eq((*F->n_931), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_931), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_931), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_931), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_931), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_931), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_931), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_931), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_936(P1026 tt_933, rt_int line_934, P1032 *t_935) {
  struct f_me_high_936fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_933 = tt_933;
F->line_934 = line_934;
F->t_935 = t_935;
F->t_935v = *F->t_935;
F->c_2621 = NULL;
if ((F->tt_933 == NULL)) {
f_fail_23(F->line_934, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_935v = f_resolve_subtype_268(F->tt_933, &F->c_2621);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->t_935v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_938(F->t_935v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_935) = F->t_935v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_938(P1032 t_937) {
  struct f_type_tag_938fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_937 = t_937;
if (((*(P1032)rt_nil_check(F->t_937)).name != NULL)) {
F->result_ = (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_937)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_941(P1026 e_939, rstr *name_940) {
  struct f_lock_ref_941fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_939 = e_939;
F->name_940 = name_940;
F->lv_2622 = NULL;
F->t_2623 = NULL;
F->c_2624 = NULL;
F->ro_2625 = RT_R_EUNDEF;
f_lvalue_769(F->e_939, &F->lv_2622, &F->t_2623, &F->c_2624, &F->ro_2625);
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_2623)).kind) != (((rt_int)13LL)))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_939)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_940), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P1019)rt_nil_check(F->lv_2622))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1036 f_user_op_944(rstr *op_942, P1026 args_943) {
  struct f_user_op_944fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_942 = op_942;
F->args_943 = args_943;
F->y_2626 = NULL;
{ rt_int lo2628 = ((rt_int)1LL), hi2629 = ((rt_int)3LL);
for (rt_int it2630 = lo2628; it2630 <= hi2629; it2630++) {
F->pass_2627 = it2630;
F->y_2626 = f_overload_chain_928(&(*F->op_942), F->pass_2627);
while ((F->y_2626 != NULL)) {
if ((((rt_str_eq((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_2626)).name))->all), (*F->op_942)) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_2626)).kind) == (((rt_int)3LL)))) && ((F->pass_2627 != ((rt_int)1LL)) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_2626)).depth) >= rt_r_ichk(g_gdepth_1099)))) && f_fits_916(F->y_2626, F->args_943))) {
F->result_ = F->y_2626;
goto ret_;
}
F->y_2626 = (*(P1036)rt_nil_check(F->y_2626)).chain;
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

static rstr f_gcall_948(P1026 e_945, int is_stmt_946, P1032 *t_947) {
  struct f_gcall_948fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_945 = e_945;
F->is_stmt_946 = is_stmt_946;
F->t_947 = t_947;
F->t_947v = *F->t_947;
F->gd_2631 = NULL;
F->fn_2632 = NULL;
F->fn_2632 = (*(P1026)rt_nil_check(F->e_945)).a;
F->tt_2633 = NULL;
F->y_2634 = NULL;
F->args_2635 = NULL;
F->args_2635 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2636 = NULL;
F->a_2636 = (*(P1026)rt_nil_check(F->e_945)).b;
F->pm_2637 = NULL;
F->lt_2638 = NULL;
F->vt_2639 = NULL;
F->lv_2640 = NULL;
F->lc_2641 = NULL;
F->ro_2642 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->fn_2632)).kind) == (((rt_int)12LL)))) {
F->tt_2633 = (*(P1026)rt_nil_check(F->fn_2632)).b;
F->fn_2632 = (*(P1026)rt_nil_check(F->fn_2632)).a;
}
F->y_2634 = f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2632)).name))->all));
if ((F->y_2634 == NULL)) {
F->result_ = f_builtin_1003(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2632)).name))->all), F->tt_2633, (*(P1026)rt_nil_check(F->e_945)).b, rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line), F->is_stmt_946, &F->t_947v);
goto ret_;
}
if ((((rt_r_ichk((*(P1036)rt_nil_check(F->y_2634)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_2634)).kind) != (((rt_int)4LL)))) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_2634)).kind) != (((rt_int)10LL))))) {
F->alt_2643 = NULL;
F->alt_2643 = f_resolve_overload_922(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2632)).name))->all), F->tt_2633, (*(P1026)rt_nil_check(F->e_945)).b, F->is_stmt_946, rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line));
if ((F->alt_2643 != NULL)) {
F->y_2634 = F->alt_2643;
} else if (f_is_builtin_930(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2632)).name))->all))) {
F->result_ = f_builtin_1003(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2632)).name))->all), F->tt_2633, (*(P1026)rt_nil_check(F->e_945)).b, rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line), F->is_stmt_946, &F->t_947v);
goto ret_;
}
}
if ((rt_r_ichk((*(P1036)rt_nil_check(F->y_2634)).kind) == (((rt_int)10LL)))) {
F->gd_2631 = (*(P1036)rt_nil_check(F->y_2634)).decl;
F->y_2634 = f_instantiate_745(F->y_2634, F->tt_2633, (*(P1026)rt_nil_check(F->e_945)).b, rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line));
} else if (((rt_r_ichk((*(P1036)rt_nil_check(F->y_2634)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_2634)).kind) == (((rt_int)4LL))))) {
F->y_2634 = f_resolve_overload_922(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2632)).name))->all), F->tt_2633, (*(P1026)rt_nil_check(F->e_945)).b, F->is_stmt_946, rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line));
if ((F->y_2634 == NULL)) {
F->result_ = f_builtin_1003(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2632)).name))->all), F->tt_2633, (*(P1026)rt_nil_check(F->e_945)).b, rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line), F->is_stmt_946, &F->t_947v);
goto ret_;
}
}
if (((rt_r_ichk((*(P1036)rt_nil_check(F->y_2634)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_2634)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2632)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_962(F->y_2634, rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line));
if (((*(P1036)rt_nil_check(F->y_2634)).capn != NULL)) {
F->cr_2644 = NULL;
F->cr_2644 = g_caps_1085;
while ((F->cr_2644 != NULL)) {
if (((*(P1053)rt_nil_check(F->cr_2644)).d == (*(P1036)rt_nil_check(F->y_2634)).capn)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_2634)).name))->all), rt_str(" is a normal function with an imports list: it may not be invoked inside its capsule", 84)); b_; }));
}
F->cr_2644 = (*(P1053)rt_nil_check(F->cr_2644)).next;
}
}
if ((F->is_stmt_946 && (rt_r_ichk((*(P1036)rt_nil_check(F->y_2634)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2632)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_946) && (rt_r_ichk((*(P1036)rt_nil_check(F->y_2634)).kind) != (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2632)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2637 = (*(P1036)rt_nil_check(F->y_2634)).params;
if ((rt_r_ichk((*(P1036)rt_nil_check(F->y_2634)).level) > ((rt_int)0LL))) {
F->args_2635 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2646 = ((rt_int)1LL), hi2647 = rt_sub(rt_r_ichk(g_cur_level_1083), rt_r_ichk((*(P1036)rt_nil_check(F->y_2634)).level));
for (rt_int it2648 = lo2646; it2648 <= hi2647; it2648++) {
F->i_2645 = it2648;
F->args_2635 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->args_2635))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2636 != NULL) && (F->pm_2637 != NULL))) {
if ((((rt_int)(((((P1019)rt_nil_check(F->args_2635))->all)).len)) > ((rt_int)0LL))) {
F->args_2635 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->args_2635))->all), rt_str(", ", 2)); b_; }));
}
if ((((rt_r_ichk((*(P1038)rt_nil_check(F->pm_2637)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P1038)rt_nil_check(F->pm_2637)).mode) == (((rt_int)4LL)))) && f_explicit_rep_992(F->a_2636))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("data with an explicit representation may not be bound to a VAR or READONLY formal", 81); b_; }));
}
if (((rt_r_ichk((*(P1038)rt_nil_check(F->pm_2637)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P1038)rt_nil_check(F->pm_2637)).mode) == (((rt_int)3LL))))) {
f_lvalue_769(F->a_2636, &F->lv_2640, &F->lt_2638, &F->lc_2641, &F->ro_2642);
if (rt_r_echk(F->ro_2642)) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check((*(P1038)rt_nil_check(F->pm_2637)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_232(F->lt_2638, (*(P1038)rt_nil_check(F->pm_2637)).t, rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line));
F->args_2635 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->args_2635))->all), rt_str("&", 1)), (((P1019)rt_nil_check(F->lv_2640))->all)), f_actual_bounds_996((*(P1038)rt_nil_check(F->pm_2637)).t, F->lt_2638, F->lc_2641)); b_; }));
} else if (((rt_r_ichk((*(P1038)rt_nil_check(F->pm_2637)).mode) == (((rt_int)4LL))) && f_is_lvalue_763(F->a_2636))) {
f_lvalue_769(F->a_2636, &F->lv_2640, &F->lt_2638, &F->lc_2641, &F->ro_2642);
f_check_type_232(F->lt_2638, (*(P1038)rt_nil_check(F->pm_2637)).t, rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line));
F->args_2635 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->args_2635))->all), rt_str("&", 1)), (((P1019)rt_nil_check(F->lv_2640))->all)), f_actual_bounds_996((*(P1038)rt_nil_check(F->pm_2637)).t, F->lt_2638, F->lc_2641)); b_; }));
} else if ((rt_r_ichk((*(P1038)rt_nil_check(F->pm_2637)).mode) == (((rt_int)4LL)))) {
F->v_2649 = rt_str_copy(f_gexpr_in_808(F->a_2636, (*(P1038)rt_nil_check(F->pm_2637)).t, (*(P1038)rt_nil_check(F->pm_2637)).c, &F->vt_2639));
F->ct_2650 = rt_str_copy(f_ctype_234((*(P1038)rt_nil_check(F->pm_2637)).t));
f_check_type_232(F->vt_2639, (*(P1038)rt_nil_check(F->pm_2637)).t, rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line));
F->args_2635 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->args_2635))->all), rt_str("({ ", 3)), F->ct_2650), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2650), rt_str(")); *b_ = ", 10)), F->v_2649), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_186((*(P1038)rt_nil_check(F->pm_2637)).t)) {
F->args_2635 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->args_2635))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2651 = rt_str_copy(f_gexpr_in_808(F->a_2636, (*(P1038)rt_nil_check(F->pm_2637)).t, (*(P1038)rt_nil_check(F->pm_2637)).c, &F->vt_2639));
f_check_type_232(F->vt_2639, (*(P1038)rt_nil_check(F->pm_2637)).t, rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line));
F->args_2635 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->args_2635))->all), F->v_2651); b_; }));
}
F->a_2636 = (*(P1026)rt_nil_check(F->a_2636)).next;
F->pm_2637 = (*(P1038)rt_nil_check(F->pm_2637)).next;
}
if (((F->a_2636 != NULL) || (F->pm_2637 != NULL))) {
f_fail_23(rt_r_ichk((*(P1026)rt_nil_check(F->e_945)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->fn_2632)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_71((*(P1026)rt_nil_check(F->e_945)).b), f_list_len_71(F->a_2636)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_947v = (*(P1036)rt_nil_check(F->y_2634)).result;
if ((F->gd_2631 != NULL)) {
F->chk_2652 = rt_str_copy(f_same_subtypes_967(F->gd_2631, (*(P1026)rt_nil_check(F->e_945)).b));
if ((!rt_str_eq(F->chk_2652, rt_str("", 0)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), F->chk_2652), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("generic subtype", 15)), f_q_18()), rt_str("); ", 3)), (((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_2634)).cname))->all)), rt_str("(", 1)), (((P1019)rt_nil_check(F->args_2635))->all)), rt_str("); })", 5));
goto ret_;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_2634)).cname))->all), rt_str("(", 1)), (((P1019)rt_nil_check(F->args_2635))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_947) = F->t_947v;
  RT_FPOP();
  return F->result_;
}

static P1030 f_requires_950(P1036 y_949) {
  struct f_requires_950fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_949 = y_949;
if (rt_r_echk((*(P1036)rt_nil_check(F->y_949)).reqdone)) {
F->result_ = (*(P1036)rt_nil_check(F->y_949)).reqs;
goto ret_;
}
(*(P1036)rt_nil_check(F->y_949)).reqdone = 1;
if ((((*(P1036)rt_nil_check(F->y_949)).decl != NULL) && (((rt_r_ichk((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_949)).decl)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_949)).decl)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_949)).decl)).kind) == (((rt_int)50LL)))))) {
F->imp_2653 = NULL;
F->imp_2653 = (*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_949)).decl)).d;
while ((F->imp_2653 != NULL)) {
f_add_req_953(F->y_949, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->imp_2653)).name))->all));
F->imp_2653 = (*(P1026)rt_nil_check(F->imp_2653)).next;
}
f_require_calls_956(F->y_949, (*(P1026)rt_nil_check((*(P1036)rt_nil_check(F->y_949)).decl)).c);
}
F->result_ = (*(P1036)rt_nil_check(F->y_949)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_953(P1036 y_951, rstr *name_952) {
  struct f_add_req_953fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_951 = y_951;
F->name_952 = name_952;
F->l_2654 = NULL;
if ((!f_seen_name_425((*(P1036)rt_nil_check(F->y_951)).reqs, &(*F->name_952)))) {
{ R1031 *cell2655 = rt_alloc(sizeof(R1031));
(*cell2655).s = NULL;
(*cell2655).next = NULL;
F->l_2654 = cell2655;
}
(*(P1030)rt_nil_check(F->l_2654)).s = f_mk_3(&(*F->name_952));
(*(P1030)rt_nil_check(F->l_2654)).next = (*(P1036)rt_nil_check(F->y_951)).reqs;
(*(P1036)rt_nil_check(F->y_951)).reqs = F->l_2654;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_956(P1036 y_954, P1026 e_955) {
  struct f_require_calls_956fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_954 = y_954;
F->e_955 = e_955;
F->x_2656 = NULL;
F->x_2656 = F->e_955;
while ((F->x_2656 != NULL)) {
if ((((((rt_r_ichk((*(P1026)rt_nil_check(F->x_2656)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->x_2656)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->x_2656)).kind) == (((rt_int)50LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->x_2656)).kind) == (((rt_int)47LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->x_2656)).kind) == (((rt_int)51LL))))) {
F->x_2656 = (*(P1026)rt_nil_check(F->x_2656)).next;
} else {
F->callee_2657 = NULL;
if (((((rt_r_ichk((*(P1026)rt_nil_check(F->x_2656)).kind) == (((rt_int)10LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->x_2656)).kind) == (((rt_int)21LL)))) && ((*(P1026)rt_nil_check(F->x_2656)).a != NULL)) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->x_2656)).a)).kind) == (((rt_int)7LL))))) {
F->callee_2657 = (*(P1026)rt_nil_check(F->x_2656)).a;
}
if ((F->callee_2657 != NULL)) {
F->z_2658 = NULL;
F->z_2658 = f_lookup_163(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->callee_2657)).name))->all));
if ((((F->z_2658 != NULL) && (F->z_2658 != F->y_954)) && ((rt_r_ichk((*(P1036)rt_nil_check(F->z_2658)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1036)rt_nil_check(F->z_2658)).kind) == (((rt_int)3LL)))))) {
F->l_2659 = NULL;
F->l_2659 = f_requires_950(F->z_2658);
while ((F->l_2659 != NULL)) {
f_add_req_953(F->y_954, &(((P1019)rt_nil_check((*(P1030)rt_nil_check(F->l_2659)).s))->all));
F->l_2659 = (*(P1030)rt_nil_check(F->l_2659)).next;
}
}
}
if (((*(P1026)rt_nil_check(F->x_2656)).a != NULL)) {
f_require_calls_956(F->y_954, (*(P1026)rt_nil_check(F->x_2656)).a);
}
if (((*(P1026)rt_nil_check(F->x_2656)).b != NULL)) {
f_require_calls_956(F->y_954, (*(P1026)rt_nil_check(F->x_2656)).b);
}
if (((*(P1026)rt_nil_check(F->x_2656)).c != NULL)) {
f_require_calls_956(F->y_954, (*(P1026)rt_nil_check(F->x_2656)).c);
}
F->x_2656 = (*(P1026)rt_nil_check(F->x_2656)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_959(P1026 elems_957, rstr *name_958) {
  struct f_declared_in_959fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_957 = elems_957;
F->name_958 = name_958;
F->e_2660 = NULL;
F->e_2660 = F->elems_957;
while ((F->e_2660 != NULL)) {
if ((((rt_r_ichk((*(P1026)rt_nil_check(F->e_2660)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->e_2660)).kind) == (((rt_int)41LL)))) && rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_2660)).name))->all), (*F->name_958)))) {
F->result_ = 1;
goto ret_;
}
F->e_2660 = (*(P1026)rt_nil_check(F->e_2660)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_962(P1036 y_960, rt_int line_961) {
  struct f_check_requires_962fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_960 = y_960;
F->line_961 = line_961;
F->l_2661 = NULL;
F->l_2661 = f_requires_950(F->y_960);
if ((((*(P1036)rt_nil_check(F->y_960)).home == NULL) || (rt_r_ichk((*(P1036)rt_nil_check(F->y_960)).level) != rt_r_ichk(g_cur_level_1083)))) {
goto ret_;
}
while ((F->l_2661 != NULL)) {
F->z_2662 = NULL;
F->z_2662 = f_lookup_163(&(((P1019)rt_nil_check((*(P1030)rt_nil_check(F->l_2661)).s))->all));
if ((f_declared_in_959((*(P1036)rt_nil_check(F->y_960)).home, &(((P1019)rt_nil_check((*(P1030)rt_nil_check(F->l_2661)).s))->all)) && ((F->z_2662 == NULL) || (rt_r_ichk((*(P1036)rt_nil_check(F->z_2662)).depth) < rt_r_ichk((*(P1036)rt_nil_check(F->y_960)).depth))))) {
f_fail_23(F->line_961, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check((*(P1036)rt_nil_check(F->y_960)).name))->all), rt_str(" requires ", 10)), (((P1019)rt_nil_check((*(P1030)rt_nil_check(F->l_2661)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2661 = (*(P1030)rt_nil_check(F->l_2661)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_delay_args_964(P1026 args_963) {
  struct f_act_delay_args_964fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->args_963 = args_963;
F->at_2663 = NULL;
F->t1_2664 = NULL;
F->t1_2664 = f_peek_type_816(F->args_963);
if (((F->t1_2664 != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->t1_2664)).kind) == (((rt_int)14LL))))) {
F->a_2665 = rt_str_copy(f_act_ref_651(F->args_963));
F->v_2666 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->args_963)).next, g_ty_int_1110, &F->at_2663));
f_check_type_232(F->at_2663, g_ty_int_1110, rt_r_ichk((*(P1026)rt_nil_check(F->args_963)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2666, rt_str(", ", 2)), F->a_2665);
goto ret_;
}
{
F->v_2667 = rt_str_copy(f_gexpr_800(F->args_963, g_ty_int_1110, &F->at_2663));
f_check_type_232(F->at_2663, g_ty_int_1110, rt_r_ichk((*(P1026)rt_nil_check(F->args_963)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2667, rt_str(", ", 2)), f_act_ref_651((*(P1026)rt_nil_check(F->args_963)).next));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_same_subtypes_967(P1026 gd_965, P1026 args_966) {
  struct f_same_subtypes_967fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_965 = gd_965;
F->args_966 = args_966;
F->p_2668 = NULL;
F->p_2668 = (*(P1026)rt_nil_check(F->gd_965)).a;
F->r_2669 = NULL;
F->r_2669 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->p_2668 != NULL)) {
if ((rt_r_ichk((*(P1026)rt_nil_check(F->p_2668)).ival) == ((rt_int)2LL))) {
F->fp_2670 = NULL;
F->fp_2670 = (*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->gd_965)).b)).a;
F->a_2671 = NULL;
F->a_2671 = F->args_966;
F->flo_2672 = NULL;
F->fhi_2673 = NULL;
while (((F->fp_2670 != NULL) && (F->a_2671 != NULL))) {
if ((((((*(P1026)rt_nil_check(F->fp_2670)).a != NULL) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->fp_2670)).a)).kind) == (((rt_int)80LL)))) && rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->fp_2670)).a)).name))->all), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->p_2668)).name))->all))) && ((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->fp_2670)).a)).b == NULL))) {
F->st_2674 = NULL;
F->c_2675 = NULL;
F->base_2676 = NULL;
F->lo_2677 = NULL;
F->hi_2678 = NULL;
F->st_2674 = f_value_subtype_290(F->a_2671, &F->c_2675, &F->base_2676);
if (f_scalar_kind_186(F->st_2674)) {
F->lo_2677 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_lo_198(F->st_2674, F->c_2675); b_; }));
F->hi_2678 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_hi_201(F->st_2674, F->c_2675); b_; }));
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->st_2674)).kind) == (((rt_int)5LL))) && ((*(P1028)rt_nil_check(F->c_2675)).slen != NULL))) {
F->lo_2677 = (*(P1028)rt_nil_check(F->c_2675)).slen;
F->hi_2678 = (*(P1028)rt_nil_check(F->c_2675)).slen;
}
if (((F->lo_2677 != NULL) && (F->flo_2672 != NULL))) {
if ((((rt_int)(((((P1019)rt_nil_check(F->r_2669))->all)).len)) > ((rt_int)0LL))) {
F->r_2669 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_2669))->all), rt_str(" || ", 4)); b_; }));
}
F->r_2669 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_2669))->all), rt_str("(", 1)), (((P1019)rt_nil_check(F->flo_2672))->all)), rt_str(") != (", 6)), (((P1019)rt_nil_check(F->lo_2677))->all)), rt_str(") || (", 6)), (((P1019)rt_nil_check(F->fhi_2673))->all)), rt_str(") != (", 6)), (((P1019)rt_nil_check(F->hi_2678))->all)), rt_str(")", 1)); b_; }));
} else if ((F->lo_2677 != NULL)) {
F->flo_2672 = F->lo_2677;
F->fhi_2673 = F->hi_2678;
}
}
F->fp_2670 = (*(P1026)rt_nil_check(F->fp_2670)).next;
F->a_2671 = (*(P1026)rt_nil_check(F->a_2671)).next;
}
}
F->p_2668 = (*(P1026)rt_nil_check(F->p_2668)).next;
}
F->result_ = (((P1019)rt_nil_check(F->r_2669))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mailbox_low_972(rstr *name_968, P1026 args_969, rt_int line_970, P1032 *t_971) {
  struct f_mailbox_low_972fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_968 = name_968;
F->args_969 = args_969;
F->line_970 = line_970;
F->t_971 = t_971;
F->t_971v = *F->t_971;
F->qv_2679 = NULL;
F->mv_2680 = NULL;
F->dv_2681 = NULL;
F->qt_2682 = NULL;
F->mt_2683 = NULL;
F->dt_2684 = NULL;
F->at_2685 = NULL;
F->c_2686 = NULL;
F->ro_2687 = RT_R_EUNDEF;
F->send_2688 = RT_R_EUNDEF;
F->send_2688 = rt_str_eq(rt_str_slice((*F->name_968), ((rt_int)1LL), ((rt_int)4LL)), rt_str("SEND", 4));
f_lvalue_769(F->args_969, &F->qv_2679, &F->qt_2682, &F->c_2686, &F->ro_2687);
f_lvalue_769((*(P1026)rt_nil_check(F->args_969)).next, &F->mv_2680, &F->mt_2683, &F->c_2686, &F->ro_2687);
if ((rt_r_ichk((*(P1032)rt_nil_check(F->mt_2683)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_970, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_968), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_971v = g_ty_void_1115;
if (((rt_r_echk(F->send_2688) && (F->qt_2682 != g_ty_send_st_1122)) || ((!rt_r_echk(F->send_2688)) && (F->qt_2682 != g_ty_receive_st_1123)))) {
f_fail_23(F->line_970, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->name_968), rt_str(" needs a variable of subtype ", 29)), rt_str_slice((*F->name_968), ((rt_int)1LL), ((rt_int)4LL))), rt_str("_ST", 3)); b_; }));
}
if ((rt_str_eq((*F->name_968), rt_str("SEND_TEST", 9)) || rt_str_eq((*F->name_968), rt_str("RECEIVE_TEST", 12)))) {
F->t_971v = g_ty_bool_1111;
if (rt_r_echk(F->send_2688)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_send(", 14), (((P1019)rt_nil_check(F->mv_2680))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_receive(", 17), (((P1019)rt_nil_check(F->mv_2680))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_968), rt_str("SEND_COMPLETE", 13))) {
F->v_2689 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_969)).next)).next, (*(P1032)rt_nil_check(F->mt_2683)).elem, &F->at_2685));
f_check_type_232(F->at_2685, (*(P1032)rt_nil_check(F->mt_2683)).elem, F->line_970);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1032)rt_nil_check(F->mt_2683)).elem)), rt_str(" m_ = ", 6)), F->v_2689), rt_str("; if (!rt_cond_send(", 20)), (((P1019)rt_nil_check(F->mv_2680))->all)), rt_str(", &m_)) rt_raise(RT_X_EMPTY_MAILBOX); })", 40));
goto ret_;
} else if (rt_str_eq((*F->name_968), rt_str("RECEIVE_COMPLETE", 16))) {
f_lvalue_769((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_969)).next)).next, &F->dv_2681, &F->dt_2684, &F->c_2686, &F->ro_2687);
f_check_type_232(F->dt_2684, (*(P1032)rt_nil_check(F->mt_2683)).elem, F->line_970);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (!rt_cond_receive(", 24), (((P1019)rt_nil_check(F->mv_2680))->all)), rt_str(", &", 3)), (((P1019)rt_nil_check(F->dv_2681))->all)), rt_str(")) rt_raise(RT_X_EMPTY_MAILBOX); })", 35));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1019)rt_nil_check(F->qv_2679))->all)), rt_str(" = 1)", 5));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_971) = F->t_971v;
  RT_FPOP();
  return F->result_;
}

static P1032 f_exponent_want_975(rstr *op_973, P1032 ta_974) {
  struct f_exponent_want_975fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_973 = op_973;
F->ta_974 = ta_974;
if (rt_str_eq((*F->op_973), rt_str("**", 2))) {
F->result_ = g_ty_int_1110;
goto ret_;
}
F->result_ = F->ta_974;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_ref_979(P1026 e_976, int text_977, rt_int line_978) {
  struct f_file_ref_979fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_976 = e_976;
F->text_977 = text_977;
F->line_978 = line_978;
F->t_2690 = NULL;
F->f_2691 = rt_str_copy(f_gexpr_800(F->e_976, NULL, &F->t_2690));
if ((rt_r_ichk((*(P1032)rt_nil_check(F->t_2690)).kind) != (((rt_int)10LL)))) {
f_fail_23(F->line_978, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a file is required", 18); b_; }));
} else if ((F->text_977 && (!f_text_file_981(F->t_2690)))) {
f_fail_23(F->line_978, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a text file, whose components are characters, is required", 57); b_; }));
}
F->result_ = F->f_2691;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_text_file_981(P1032 t_980) {
  struct f_text_file_981fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_980 = t_980;
F->result_ = (((F->t_980 != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->t_980)).kind) == (((rt_int)10LL)))) && ((*(P1032)rt_nil_check(f_base_of_223(f_str_elem_218(F->t_980)))).kind == (((rt_int)4LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_conversion_986(P1026 tt_982, P1026 args_983, rt_int line_984, P1032 *t_985) {
  struct f_conversion_986fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_982 = tt_982;
F->args_983 = args_983;
F->line_984 = line_984;
F->t_985 = t_985;
F->t_985v = *F->t_985;
F->c_2692 = NULL;
F->at_2693 = NULL;
F->target_2694 = NULL;
F->target_2694 = f_resolve_subtype_268(F->tt_982, &F->c_2692);
F->a_2695 = rt_str_copy(f_gexpr_800(F->args_983, NULL, &F->at_2693));
F->t_985v = F->target_2694;
if (((rt_r_ichk((*(P1032)rt_nil_check(F->target_2694)).kind) == (((rt_int)5LL))) && f_same_221(f_str_elem_218(F->target_2694), g_ty_ascii_1113))) {
F->r_2696 = NULL;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->at_2693)).kind) == (((rt_int)1LL)))) {
F->r_2696 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2695), rt_str(")", 1)); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->at_2693)).kind) == (((rt_int)3LL)))) {
F->r_2696 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_str_of_float(", 18), F->a_2695), rt_str(", ", 2)), f_float_digits_988(F->args_983)), rt_str(")", 1)); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->at_2693)).kind) == (((rt_int)2LL)))) {
F->r_2696 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2695), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5)); b_; }));
} else if (((*(P1032)rt_nil_check(f_base_of_223(F->at_2693))).kind == (((rt_int)4LL)))) {
F->r_2696 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_enum_image(", 16), f_enum_names_990(f_base_of_223(F->at_2693))), rt_str(", ", 2)), F->a_2695), rt_str(")", 1)); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->at_2693)).kind) == (((rt_int)5LL)))) {
F->r_2696 = f_mk_3(&F->a_2695);
} else {
f_fail_23(F->line_984, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT converts BOOL, INT, FLOAT and ENUM values to strings", 57); b_; }));
}
if (((F->c_2692 != NULL) && ((*(P1028)rt_nil_check(F->c_2692)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_str_pad(", 13), (((P1019)rt_nil_check(F->r_2696))->all)), rt_str(", ", 2)), (((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_2692)).slen))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = (((P1019)rt_nil_check(F->r_2696))->all);
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->at_2693)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P1032)rt_nil_check(F->target_2694)).kind) == (((rt_int)1LL)))) {
F->result_ = f_checked_213(F->target_2694, F->c_2692, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2695), rt_str(")", 1)); b_; }));
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->target_2694)).kind) == (((rt_int)3LL)))) {
F->result_ = f_checked_213(F->target_2694, F->c_2692, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_float_of_str(", 18), F->a_2695), rt_str(")", 1)); b_; }));
goto ret_;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->target_2694)).kind) == (((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_bool_of_str(", 17), F->a_2695), rt_str(")", 1));
goto ret_;
} else if (((*(P1032)rt_nil_check(f_base_of_223(F->target_2694))).kind == (((rt_int)4LL)))) {
F->result_ = f_checked_213(F->target_2694, F->c_2692, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_enum_of_str(", 17), f_enum_names_990(f_base_of_223(F->target_2694))), rt_str(", ", 2)), f_itos_7(f_list_len_71((*(P1032)rt_nil_check(f_base_of_223(F->target_2694))).lits))), rt_str(", ", 2)), F->a_2695), rt_str(")", 1)); b_; }));
goto ret_;
}
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->target_2694)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P1032)rt_nil_check(F->at_2693)).kind) == (((rt_int)1LL))))) {
F->result_ = f_checked_213(F->target_2694, F->c_2692, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2695), rt_str("))", 2)); b_; }));
goto ret_;
} else if (f_same_221(F->target_2694, F->at_2693)) {
F->result_ = f_checked_213(F->target_2694, F->c_2692, &F->a_2695);
goto ret_;
}
f_fail_23(F->line_984, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT does not convert between these types", 41); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_985) = F->t_985v;
  RT_FPOP();
  return F->result_;
}

static rstr f_float_digits_988(P1026 e_987) {
  struct f_float_digits_988fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_987 = e_987;
F->lv_2697 = NULL;
F->t_2698 = NULL;
F->c_2699 = NULL;
F->ro_2700 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->e_987)).kind) == (((rt_int)8LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->e_987)).kind) == (((rt_int)17LL))))) {
F->result_ = f_float_digits_988((*(P1026)rt_nil_check(F->e_987)).a);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->e_987)).kind) == (((rt_int)2LL)))) {
F->n_2701 = RT_R_IUNDEF;
F->n_2701 = ((rt_int)0LL);
F->lead_2702 = RT_R_EUNDEF;
F->lead_2702 = 1;
{ rt_int lo2704 = ((rt_int)1LL), hi2705 = ((rt_int)(((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_987)).name))->all)).len));
for (rt_int it2706 = lo2704; it2706 <= hi2705; it2706++) {
F->i_2703 = it2706;
if (((rt_r_echk(rt_str_get((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_987)).name))->all), F->i_2703)) == 69) || (rt_r_echk(rt_str_get((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_987)).name))->all), F->i_2703)) == 101))) {
F->result_ = f_itos_7(rt_r_ichk(F->n_2701));
goto ret_;
} else if ((f_is_digit_11(rt_r_echk(rt_str_get((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_987)).name))->all), F->i_2703))) && (!(rt_r_echk(F->lead_2702) && (rt_r_echk(rt_str_get((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_987)).name))->all), F->i_2703)) == 48))))) {
F->n_2701 = rt_add(rt_r_ichk(F->n_2701), ((rt_int)1LL));
F->lead_2702 = 0;
} else if ((f_is_digit_11(rt_r_echk(rt_str_get((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->e_987)).name))->all), F->i_2703))) && (!rt_r_echk(F->lead_2702)))) {
F->n_2701 = rt_add(rt_r_ichk(F->n_2701), ((rt_int)1LL));
}
}
}
F->result_ = f_itos_7(rt_r_ichk(F->n_2701));
goto ret_;
} else if (f_is_lvalue_763(F->e_987)) {
F->saved_2707 = NULL;
F->saved_2707 = g_code_1080;
g_code_1080 = f_new_buffer_24();
f_lvalue_769(F->e_987, &F->lv_2697, &F->t_2698, &F->c_2699, &F->ro_2700);
g_code_1080 = F->saved_2707;
if (((F->c_2699 != NULL) && ((*(P1028)rt_nil_check(F->c_2699)).prec != NULL))) {
F->result_ = (((P1019)rt_nil_check((*(P1028)rt_nil_check(F->c_2699)).prec))->all);
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

static rstr f_enum_names_990(P1032 t_989) {
  struct f_enum_names_990fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_989 = t_989;
F->l_2708 = NULL;
F->l_2708 = (*(P1032)rt_nil_check(F->t_989)).lits;
F->r_2709 = NULL;
F->r_2709 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1032)rt_nil_check(F->t_989)).cname != NULL)) {
F->result_ = (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_989)).cname))->all);
goto ret_;
}
while ((F->l_2708 != NULL)) {
if ((((rt_int)(((((P1019)rt_nil_check(F->r_2709))->all)).len)) > ((rt_int)0LL))) {
F->r_2709 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1019)rt_nil_check(F->r_2709))->all), rt_str(", ", 2)); b_; }));
}
F->r_2709 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->r_2709))->all), f_q_18()), (((P1019)rt_nil_check((*(P1026)rt_nil_check(F->l_2708)).name))->all)), f_q_18()); b_; }));
F->l_2708 = (*(P1026)rt_nil_check(F->l_2708)).next;
}
(*(P1032)rt_nil_check(F->t_989)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("en_", 3); b_; })); b_; }));
f_put_27(g_out_globals_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static const char *const ", 25), (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_989)).cname))->all)), rt_str("[] = {", 6)), (((P1019)rt_nil_check(F->r_2709))->all)), rt_str("};", 2)); b_; }));
F->result_ = (((P1019)rt_nil_check((*(P1032)rt_nil_check(F->t_989)).cname))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_explicit_rep_992(P1026 e_991) {
  struct f_explicit_rep_992fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_991 = e_991;
F->bt_2710 = NULL;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->e_991)).kind) != (((rt_int)11LL))) && (!((rt_r_ichk((*(P1026)rt_nil_check(F->e_991)).kind) == (((rt_int)10LL))) && f_is_lvalue_763(F->e_991))))) {
F->result_ = 0;
goto ret_;
}
F->bt_2710 = f_peek_type_816((*(P1026)rt_nil_check(F->e_991)).a);
while ((((F->bt_2710 != NULL) && (rt_r_ichk((*(P1032)rt_nil_check(F->bt_2710)).kind) == (((rt_int)8LL)))) && ((*(P1032)rt_nil_check(F->bt_2710)).repn == NULL))) {
f_finish_ptr_475(F->bt_2710);
F->bt_2710 = (*(P1032)rt_nil_check(F->bt_2710)).target;
}
if (((F->bt_2710 != NULL) && ((*(P1032)rt_nil_check(F->bt_2710)).repn != NULL))) {
F->result_ = 1;
goto ret_;
}
F->result_ = f_explicit_rep_992((*(P1026)rt_nil_check(F->e_991)).a);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_actual_bounds_996(P1032 ft_993, P1032 t_994, P1028 c_995) {
  struct f_actual_bounds_996fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_993 = ft_993;
F->t_994 = t_994;
F->c_995 = c_995;
if ((!f_scalar_kind_186(F->ft_993))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_198(F->t_994, F->c_995)), rt_str(", ", 2)), f_sub_hi_201(F->t_994, F->c_995));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_1003(rstr *name_997, P1026 tt_998, P1026 args_999, rt_int line_1000, int is_stmt_1001, P1032 *t_1002) {
  struct f_builtin_1003fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_997 = name_997;
F->tt_998 = tt_998;
F->args_999 = args_999;
F->line_1000 = line_1000;
F->is_stmt_1001 = is_stmt_1001;
F->t_1002 = t_1002;
F->t_1002v = *F->t_1002;
F->at_2711 = NULL;
F->n_2712 = RT_R_IUNDEF;
F->n_2712 = f_list_len_71(F->args_999);
F->t_1002v = g_ty_void_1115;
if (((rt_str_eq((*F->name_997), rt_str("POS", 3)) || rt_str_eq((*F->name_997), rt_str("SUCC", 4))) || rt_str_eq((*F->name_997), rt_str("PRED", 4)))) {
F->a_2713 = rt_str_copy(f_gexpr_800(F->args_999, NULL, &F->at_2711));
if (rt_str_eq((*F->name_997), rt_str("POS", 3))) {
if (((*(P1032)rt_nil_check(f_base_of_223(F->at_2711))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_1000, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_1002v = g_ty_int_1110;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2713), rt_str(") + 1)", 6));
goto ret_;
}
F->t_1002v = F->at_2711;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->at_2711)).kind) == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_997), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2713), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2713), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_997), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2713), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_71((*(P1032)rt_nil_check(f_base_of_223(F->at_2711))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2713), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_71((*(P1032)rt_nil_check(f_base_of_223(F->at_2711))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("FLOOR", 5))) {
F->a_2714 = rt_str_copy(f_gexpr_800(F->args_999, g_ty_float_1112, &F->at_2711));
f_check_type_232(F->at_2711, g_ty_float_1112, F->line_1000);
F->t_1002v = g_ty_int_1110;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_floor(", 11), F->a_2714), rt_str(")", 1));
goto ret_;
} else if ((((rt_str_eq((*F->name_997), rt_str("ACTP", 4)) || rt_str_eq((*F->name_997), rt_str("RADIX", 5))) || rt_str_eq((*F->name_997), rt_str("EMIN", 4))) || rt_str_eq((*F->name_997), rt_str("EMAX", 4)))) {
F->a_2715 = rt_str_copy(f_gexpr_800(F->args_999, g_ty_float_1112, &F->at_2711));
f_check_type_232(F->at_2711, g_ty_float_1112, F->line_1000);
F->t_1002v = g_ty_int_1110;
if (rt_str_eq((*F->name_997), rt_str("ACTP", 4))) {
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("RADIX", 5))) {
F->result_ = rt_str("((rt_int)2)", 11);
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("EMIN", 4))) {
F->result_ = rt_str("((rt_int)-1021)", 15);
goto ret_;
}
F->result_ = rt_str("((rt_int)1024)", 14);
goto ret_;
} else if (((((rt_str_eq((*F->name_997), rt_str("SQRT", 4)) || rt_str_eq((*F->name_997), rt_str("SIN", 3))) || rt_str_eq((*F->name_997), rt_str("COS", 3))) || rt_str_eq((*F->name_997), rt_str("EXP", 3))) || rt_str_eq((*F->name_997), rt_str("LN", 2)))) {
F->a_2716 = rt_str_copy(f_gexpr_800(F->args_999, g_ty_float_1112, &F->at_2711));
F->t_1002v = g_ty_float_1112;
if (rt_str_eq((*F->name_997), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2716), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_997)), rt_str("(", 1)), F->a_2716), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("IFLOAT", 6))) {
F->a_2717 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->args_999)).next, g_ty_int_1110, &F->at_2711));
F->t_1002v = g_ty_float_1112;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2717), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("IFIX", 4))) {
F->a_2718 = rt_str_copy(f_gexpr_800(F->args_999, g_ty_float_1112, &F->at_2711));
F->t_1002v = g_ty_int_1110;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2718), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("FORMAT", 6))) {
F->a_2719 = rt_str_copy(f_gexpr_800(F->args_999, g_ty_float_1112, &F->at_2711));
F->n1_2720 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->args_999)).next, g_ty_int_1110, &F->at_2711));
F->m1_2721 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_999)).next)).next, g_ty_int_1110, &F->at_2711));
F->t_1002v = g_ty_string_1114;
if ((rt_r_ichk(F->n_2712) == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_format_e(", 14), F->a_2719), rt_str(", ", 2)), F->n1_2720), rt_str(", ", 2)), F->m1_2721), rt_str(", ", 2)), f_gexpr_800((*(P1026)rt_nil_check((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_999)).next)).next)).next, g_ty_int_1110, &F->at_2711)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_format(", 12), F->a_2719), rt_str(", ", 2)), F->n1_2720), rt_str(", ", 2)), F->m1_2721), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("ABS", 3))) {
F->a_2722 = rt_str_copy(f_gexpr_800(F->args_999, NULL, &F->at_2711));
F->t_1002v = F->at_2711;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->at_2711)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2722), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2722), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("CNVT", 4))) {
if ((F->tt_998 == NULL)) {
f_fail_23(F->line_1000, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
F->result_ = f_conversion_986(F->tt_998, F->args_999, F->line_1000, &F->t_1002v);
goto ret_;
} else if ((rt_str_eq((*F->name_997), rt_str("WRITELN", 7)) && (rt_r_ichk(F->n_2712) == ((rt_int)2LL)))) {
F->f_2723 = rt_str_copy(f_file_ref_979(F->args_999, 1, F->line_1000));
F->a_2724 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->args_999)).next, g_ty_string_1114, &F->at_2711));
f_check_type_232(F->at_2711, g_ty_string_1114, F->line_1000);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fwriteln(", 14), F->f_2723), rt_str(", ", 2)), F->a_2724), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("WRITELN", 7))) {
if ((rt_r_ichk(F->n_2712) == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->a_2725 = rt_str_copy(f_gexpr_800(F->args_999, g_ty_string_1114, &F->at_2711));
f_check_type_232(F->at_2711, g_ty_string_1114, F->line_1000);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2725), rt_str(")", 1));
goto ret_;
}
} else if ((rt_str_eq((*F->name_997), rt_str("WRITE", 5)) || rt_str_eq((*F->name_997), rt_str("READ", 4)))) {
F->ft_2726 = NULL;
F->f_2727 = rt_str_copy(f_file_ref_979(F->args_999, 0, F->line_1000));
F->ft_2726 = f_peek_type_816(F->args_999);
if (rt_str_eq((*F->name_997), rt_str("READ", 4))) {
F->lv_2728 = NULL;
F->lc_2729 = NULL;
F->ro_2730 = RT_R_EUNDEF;
f_lvalue_769((*(P1026)rt_nil_check(F->args_999)).next, &F->lv_2728, &F->at_2711, &F->lc_2729, &F->ro_2730);
if (rt_r_echk(F->ro_2730)) {
f_fail_23(F->line_1000, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READ needs a variable", 21); b_; }));
}
f_check_type_232(F->at_2711, f_str_elem_218(F->ft_2726), F->line_1000);
if (f_text_file_981(F->ft_2726)) {
F->result_ = f_assign_code_411(&(((P1019)rt_nil_check(F->lv_2728))->all), F->at_2711, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fgetc(", 11), F->f_2727), rt_str(")", 1)); b_; }), F->lc_2729);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fread(", 11), F->f_2727), rt_str(", &", 3)), (((P1019)rt_nil_check(F->lv_2728))->all)), rt_str(")", 1));
goto ret_;
}
{
F->a_2731 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->args_999)).next, f_str_elem_218(F->ft_2726), &F->at_2711));
if ((f_text_file_981(F->ft_2726) && (rt_r_ichk((*(P1032)rt_nil_check(F->at_2711)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fputs(", 11), F->f_2727), rt_str(", ", 2)), F->a_2731), rt_str(")", 1));
goto ret_;
}
f_check_type_232(F->at_2711, f_str_elem_218(F->ft_2726), F->line_1000);
if (f_text_file_981(F->ft_2726)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fputc(", 11), F->f_2727), rt_str(", ", 2)), F->a_2731), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->at_2711)), rt_str(" w_ = ", 6)), F->a_2731), rt_str("; rt_r_fwrite(", 14)), F->f_2727), rt_str(", &w_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_997), rt_str("READLN", 6)) && (rt_r_ichk(F->n_2712) == ((rt_int)2LL)))) {
F->lv_2732 = NULL;
F->lc_2733 = NULL;
F->ro_2734 = RT_R_EUNDEF;
F->f_2735 = rt_str_copy(f_file_ref_979(F->args_999, 1, F->line_1000));
f_lvalue_769((*(P1026)rt_nil_check(F->args_999)).next, &F->lv_2732, &F->at_2711, &F->lc_2733, &F->ro_2734);
f_check_type_232(F->at_2711, g_ty_string_1114, F->line_1000);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_freadln(", 13), F->f_2735), rt_str(", &", 3)), (((P1019)rt_nil_check(F->lv_2732))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("READLN", 6))) {
F->lv_2736 = NULL;
F->lc_2737 = NULL;
F->ro_2738 = RT_R_EUNDEF;
f_lvalue_769(F->args_999, &F->lv_2736, &F->at_2711, &F->lc_2737, &F->ro_2738);
f_check_type_232(F->at_2711, g_ty_string_1114, F->line_1000);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_readln(&", 13), (((P1019)rt_nil_check(F->lv_2736))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_997), rt_str("SIZELN", 6)) && (rt_r_ichk(F->n_2712) == ((rt_int)1LL)))) {
F->t_1002v = g_ty_int_1110;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fsizeln(", 13), f_file_ref_979(F->args_999, 1, F->line_1000)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("SIZELN", 6))) {
F->t_1002v = g_ty_int_1110;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if ((rt_str_eq((*F->name_997), rt_str("EOF", 3)) && (rt_r_ichk(F->n_2712) == ((rt_int)1LL)))) {
F->t_1002v = g_ty_bool_1111;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_feof(", 10), f_file_ref_979(F->args_999, 0, F->line_1000)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("EOF", 3))) {
F->t_1002v = g_ty_bool_1111;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("SYS_IN", 6))) {
F->t_1002v = g_ty_text_file_1124;
F->result_ = rt_str("rt_r_sys_in()", 13);
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("SYS_OUT", 7))) {
F->t_1002v = g_ty_text_file_1124;
F->result_ = rt_str("rt_r_sys_out()", 14);
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("OPEN", 4))) {
F->f_2739 = rt_str_copy(f_file_ref_979(F->args_999, 0, F->line_1000));
F->nm_2740 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->args_999)).next, g_ty_string_1114, &F->at_2711));
F->st_2741 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_999)).next)).next, g_file_state_type_1125, &F->at_2711));
f_check_type_232(F->at_2711, g_file_state_type_1125, F->line_1000);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_open(", 10), F->f_2739), rt_str(", ", 2)), F->nm_2740), rt_str(", ", 2)), F->st_2741), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("CLOSE", 5))) {
F->f_2742 = rt_str_copy(f_file_ref_979(F->args_999, 0, F->line_1000));
F->d_2743 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->args_999)).next, g_file_disp_type_1126, &F->at_2711));
f_check_type_232(F->at_2711, g_file_disp_type_1126, F->line_1000);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_close(", 11), F->f_2742), rt_str(", ", 2)), F->d_2743), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_997), rt_str("SIZE", 4)) || rt_str_eq((*F->name_997), rt_str("POSITION", 8)))) {
F->t_1002v = g_ty_int_1110;
if (rt_str_eq((*F->name_997), rt_str("SIZE", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fsize(", 11), f_file_ref_979(F->args_999, 0, F->line_1000)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fpos(", 10), f_file_ref_979(F->args_999, 0, F->line_1000)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("SET_POSITION", 12))) {
F->f_2744 = rt_str_copy(f_file_ref_979(F->args_999, 0, F->line_1000));
F->v_2745 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->args_999)).next, g_ty_int_1110, &F->at_2711));
f_check_type_232(F->at_2711, g_ty_int_1110, F->line_1000);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fsetpos(", 13), F->f_2744), rt_str(", ", 2)), F->v_2745), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("FILE_RENAME", 11))) {
F->a_2746 = rt_str_copy(f_gexpr_800(F->args_999, g_ty_string_1114, &F->at_2711));
F->b_2747 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->args_999)).next, g_ty_string_1114, &F->at_2711));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_rename(", 12), F->a_2746), rt_str(", ", 2)), F->b_2747), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_997), rt_str("SEND", 4)) || rt_str_eq((*F->name_997), rt_str("RECEIVE", 7)))) {
F->lv_2748 = NULL;
F->dv_2749 = NULL;
F->lc_2750 = NULL;
F->ro_2751 = RT_R_EUNDEF;
F->mt_2752 = NULL;
F->dt_2753 = NULL;
f_lvalue_769(F->args_999, &F->lv_2748, &F->mt_2752, &F->lc_2750, &F->ro_2751);
if ((rt_r_ichk((*(P1032)rt_nil_check(F->mt_2752)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_1000, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_997), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_997), rt_str("RECEIVE", 7))) {
f_lvalue_769((*(P1026)rt_nil_check(F->args_999)).next, &F->dv_2749, &F->dt_2753, &F->lc_2750, &F->ro_2751);
f_check_type_232(F->dt_2753, (*(P1032)rt_nil_check(F->mt_2752)).elem, F->line_1000);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P1019)rt_nil_check(F->lv_2748))->all)), rt_str(", &", 3)), (((P1019)rt_nil_check(F->dv_2749))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2754 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->args_999)).next, (*(P1032)rt_nil_check(F->mt_2752)).elem, &F->at_2711));
f_check_type_232(F->at_2711, (*(P1032)rt_nil_check(F->mt_2752)).elem, F->line_1000);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1032)rt_nil_check(F->mt_2752)).elem)), rt_str(" m_ = ", 6)), F->v_2754), rt_str("; rt_send(", 10)), (((P1019)rt_nil_check(F->lv_2748))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_997), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_997), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2755 = NULL;
F->lc_2756 = NULL;
F->ro_2757 = RT_R_EUNDEF;
F->mt_2758 = NULL;
f_lvalue_769(F->args_999, &F->lv_2755, &F->mt_2758, &F->lc_2756, &F->ro_2757);
if ((rt_r_ichk((*(P1032)rt_nil_check(F->mt_2758)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_1000, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_997), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_1002v = g_ty_int_1110;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_997))), rt_str("(", 1)), (((P1019)rt_nil_check(F->lv_2755))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_997), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_997), rt_str("COND_RECEIVE", 12)))) {
F->lv_2759 = NULL;
F->dv_2760 = NULL;
F->bv_2761 = NULL;
F->lc_2762 = NULL;
F->ro_2763 = RT_R_EUNDEF;
F->mt_2764 = NULL;
F->dt_2765 = NULL;
F->bt_2766 = NULL;
f_lvalue_769(F->args_999, &F->lv_2759, &F->mt_2764, &F->lc_2762, &F->ro_2763);
if ((rt_r_ichk((*(P1032)rt_nil_check(F->mt_2764)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_1000, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_997), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_769((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_999)).next)).next, &F->bv_2761, &F->bt_2766, &F->lc_2762, &F->ro_2763);
f_check_type_232(F->bt_2766, g_ty_bool_1111, F->line_1000);
if (rt_str_eq((*F->name_997), rt_str("COND_RECEIVE", 12))) {
f_lvalue_769((*(P1026)rt_nil_check(F->args_999)).next, &F->dv_2760, &F->dt_2765, &F->lc_2762, &F->ro_2763);
f_check_type_232(F->dt_2765, (*(P1032)rt_nil_check(F->mt_2764)).elem, F->line_1000);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->bv_2761))->all), rt_str(" = rt_cond_receive(", 19)), (((P1019)rt_nil_check(F->lv_2759))->all)), rt_str(", &", 3)), (((P1019)rt_nil_check(F->dv_2760))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2767 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->args_999)).next, (*(P1032)rt_nil_check(F->mt_2764)).elem, &F->at_2711));
f_check_type_232(F->at_2711, (*(P1032)rt_nil_check(F->mt_2764)).elem, F->line_1000);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1032)rt_nil_check(F->mt_2764)).elem)), rt_str(" m_ = ", 6)), F->v_2767), rt_str("; ", 2)), (((P1019)rt_nil_check(F->bv_2761))->all)), rt_str(" = rt_cond_send(", 16)), (((P1019)rt_nil_check(F->lv_2759))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_997), rt_str("PRIORITY", 8))) {
F->t_1002v = g_ty_int_1110;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_651(F->args_999)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("SET_PRIORITY", 12))) {
F->v_2768 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->args_999)).next, g_ty_int_1110, &F->at_2711));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_651(F->args_999)), rt_str(", ", 2)), F->v_2768), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_651(F->args_999)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("ACTIVE", 6))) {
F->t_1002v = g_ty_bool_1111;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_651(F->args_999)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("DELAY", 5))) {
F->v_2769 = rt_str_copy(f_gexpr_800(F->args_999, g_ty_int_1110, &F->at_2711));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2769), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_997), rt_str("DELAY_UNTIL", 11)) && (rt_r_ichk(F->n_2712) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_delay_act(", 15), f_act_delay_args_964(F->args_999)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("DELAY_UNTIL", 11))) {
F->v_2770 = rt_str_copy(f_gexpr_800(F->args_999, g_ty_int_1110, &F->at_2711));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2770), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_651(F->args_999)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_997), rt_str("TIME", 4)) && (rt_r_ichk(F->n_2712) == ((rt_int)1LL)))) {
F->t_1002v = g_ty_int_1110;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_act_time(", 14), f_act_ref_651(F->args_999)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("TIME", 4))) {
F->t_1002v = g_ty_int_1110;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_997), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_997), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_997), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_997), rt_str("HOURS", 5)))) {
F->t_1002v = g_ty_int_1110;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_997));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("HALT", 4))) {
F->a_2771 = rt_str_copy(f_gexpr_800(F->args_999, g_ty_int_1110, &F->at_2711));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2771), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_997), rt_str("ME", 2)) && (F->tt_998 != NULL))) {
F->result_ = f_me_high_936(F->tt_998, F->line_1000, &F->t_1002v);
goto ret_;
} else if ((rt_str_eq((*F->name_997), rt_str("WAITING", 7)) || rt_str_eq((*F->name_997), rt_str("SUSPENDED", 9)))) {
F->t_1002v = g_ty_bool_1111;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_997))), rt_str("(", 1)), f_act_ref_651(F->args_999)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_997), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_997), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_997), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_997), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_997), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_997), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_997))), rt_str("(", 1)), f_act_ref_651(F->args_999)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("TASK_START", 10))) {
if ((rt_r_ichk(F->n_2712) != ((rt_int)2LL))) {
f_fail_23(F->line_1000, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_651(F->args_999)), rt_str(", ", 2)), f_act_ref_651((*(P1026)rt_nil_check(F->args_999)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_997), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_997), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_997), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_997), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_997), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_997), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((rt_r_ichk(F->n_2712) != ((rt_int)0LL))) {
f_fail_23(F->line_1000, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_997), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_997))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_941(F->args_999, &(*F->name_997))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_997), rt_str("UNLOCK", 6)) && (f_peek_type_816(F->args_999) != g_ty_latch_1119))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_unlock(", 12), f_lock_ref_941(F->args_999, &(*F->name_997))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_941(F->args_999, &(*F->name_997))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("COND_LOCK", 9))) {
F->bv_2772 = NULL;
F->bc_2773 = NULL;
F->ro_2774 = RT_R_EUNDEF;
F->bt_2775 = NULL;
F->l_2776 = rt_str_copy(f_lock_ref_941(F->args_999, &(*F->name_997)));
f_lvalue_769((*(P1026)rt_nil_check(F->args_999)).next, &F->bv_2772, &F->bt_2775, &F->bc_2773, &F->ro_2774);
f_check_type_232(F->bt_2775, g_ty_bool_1111, F->line_1000);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1019)rt_nil_check(F->bv_2772))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2776), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("EXCESS_LOCKS", 12))) {
F->t_1002v = g_ty_int_1110;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_941(F->args_999, &(*F->name_997))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("OWNER", 5))) {
F->t_1002v = g_ty_act_1120;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_owner(", 11), f_lock_ref_941(F->args_999, &(*F->name_997))), rt_str(")", 1));
goto ret_;
} else if (((((((((rt_str_eq((*F->name_997), rt_str("SEND_REQUEST", 12)) || rt_str_eq((*F->name_997), rt_str("SEND_TEST", 9))) || rt_str_eq((*F->name_997), rt_str("SEND_COMPLETE", 13))) || rt_str_eq((*F->name_997), rt_str("SEND_REVOKE", 11))) || rt_str_eq((*F->name_997), rt_str("RECEIVE_REQUEST", 15))) || rt_str_eq((*F->name_997), rt_str("RECEIVE_TEST", 12))) || rt_str_eq((*F->name_997), rt_str("RECEIVE_COMPLETE", 16))) || rt_str_eq((*F->name_997), rt_str("RECEIVE_REVOKE", 14))) && (rt_r_ichk(F->n_2712) == ((rt_int)3LL)))) {
F->result_ = f_mailbox_low_972(&(*F->name_997), F->args_999, F->line_1000, &F->t_1002v);
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("FREE", 4))) {
F->pv_2777 = NULL;
F->pc_2778 = NULL;
F->ro_2779 = RT_R_EUNDEF;
F->pt_2780 = NULL;
f_lvalue_769(F->args_999, &F->pv_2777, &F->pt_2780, &F->pc_2778, &F->ro_2779);
if (((rt_r_ichk((*(P1032)rt_nil_check(F->pt_2780)).kind) != (((rt_int)8LL))) || rt_r_echk(F->ro_2779))) {
f_fail_23(F->line_1000, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_1091 = 1;
f_finish_ptr_475(F->pt_2780);
if ((f_suppressed_512(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; })) || f_unchecked_free_337(F->pt_2780))) {
if (f_needs_fin_346((*(P1032)rt_nil_check(F->pt_2780)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P1019)rt_nil_check(F->pv_2777))->all)), rt_str(") { ", 4)), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_758(F->pt_2780, &(((P1019)rt_nil_check(F->pv_2777))->all)); b_; }), (*(P1032)rt_nil_check(F->pt_2780)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P1019)rt_nil_check(F->pv_2777))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P1019)rt_nil_check(F->pv_2777))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_346((*(P1032)rt_nil_check(F->pt_2780)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P1019)rt_nil_check(F->pv_2777))->all)), rt_str("); if (", 7)), (((P1019)rt_nil_check(F->pv_2777))->all)), rt_str(") { ", 4)), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_758(F->pt_2780, &(((P1019)rt_nil_check(F->pv_2777))->all)); b_; }), (*(P1032)rt_nil_check(F->pt_2780)).target)), rt_str(" } rt_free((void **)&", 21)), (((P1019)rt_nil_check(F->pv_2777))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P1019)rt_nil_check(F->pv_2777))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_997), rt_str("LOW_IO", 6))) {
F->dev_2781 = rt_str_copy(f_gexpr_800(F->args_999, g_ty_int_1110, &F->at_2711));
F->cmd_2782 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check(F->args_999)).next, g_ty_int_1110, &F->at_2711));
if ((rt_r_ichk(F->n_2712) == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_r_low_io(", 30), F->dev_2781), rt_str(", ", 2)), F->cmd_2782), rt_str(", &d_); })", 10));
goto ret_;
} else if ((!f_is_lvalue_763((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_999)).next)).next))) {
F->v_2783 = rt_str_copy(f_gexpr_800((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_999)).next)).next, g_ty_int_1110, &F->at_2711));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = ", 15), F->v_2783), rt_str("; rt_r_low_io(", 14)), F->dev_2781), rt_str(", ", 2)), F->cmd_2782), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2784 = NULL;
F->dc_2785 = NULL;
F->ro_2786 = RT_R_EUNDEF;
F->dt_2787 = NULL;
f_lvalue_769((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->args_999)).next)).next, &F->dv_2784, &F->dt_2787, &F->dc_2785, &F->ro_2786);
f_check_type_232(F->dt_2787, g_ty_int_1110, F->line_1000);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_low_io(", 12), F->dev_2781), rt_str(", ", 2)), F->cmd_2782), rt_str(", &", 3)), (((P1019)rt_nil_check(F->dv_2784))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_1000, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_997), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_1002) = F->t_1002v;
  RT_FPOP();
  return F->result_;
}

static P1026 f_with_library_1005(P1026 units_1004) {
  struct f_with_library_1005fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_1004 = units_1004;
F->r_2788 = NULL;
F->r_2788 = F->units_1004;
F->more_2789 = RT_R_EUNDEF;
F->more_2789 = 1;
while (rt_r_echk(F->more_2789)) {
F->missing_2790 = NULL;
F->missing_2790 = f_external_missing_1008(F->r_2788, F->r_2788);
F->more_2789 = 0;
if ((F->missing_2790 != NULL)) {
F->saved_2791 = RT_R_IUNDEF;
F->saved_2791 = rt_r_ichk(g_tpos_1059);
if (f_read_library_60(&(((P1019)rt_nil_check(F->missing_2790))->all))) {
F->lib_2792 = NULL;
g_tpos_1059 = rt_r_ichk(g_ntoks_before_library_1064);
F->lib_2792 = f_program_159();
g_tpos_1059 = rt_r_ichk(F->saved_2791);
if ((F->lib_2792 != NULL)) {
F->t_2793 = NULL;
F->t_2793 = F->lib_2792;
while (((*(P1026)rt_nil_check(F->t_2793)).next != NULL)) {
F->t_2793 = (*(P1026)rt_nil_check(F->t_2793)).next;
}
(*(P1026)rt_nil_check(F->t_2793)).next = F->r_2788;
F->r_2788 = F->lib_2792;
F->more_2789 = 1;
}
}
}
g_ntoks_before_library_1064 = rt_add(rt_r_ichk(g_ntoks_1058), ((rt_int)1LL));
}
F->result_ = F->r_2788;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1019 f_external_missing_1008(P1026 e_1006, P1026 units_1007) {
  struct f_external_missing_1008fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_1006 = e_1006;
F->units_1007 = units_1007;
F->x_2794 = NULL;
F->x_2794 = F->e_1006;
while ((F->x_2794 != NULL)) {
if (((((rt_r_ichk((*(P1026)rt_nil_check(F->x_2794)).kind) == (((rt_int)48LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->x_2794)).flag) >= ((rt_int)2LL))) && (!f_unit_named_1011(F->units_1007, &(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_2794)).name))->all)))) && (!f_tried_1013(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_2794)).name))->all))))) {
f_mark_tried_1015(&(((P1019)rt_nil_check((*(P1026)rt_nil_check(F->x_2794)).name))->all));
F->result_ = (*(P1026)rt_nil_check(F->x_2794)).name;
goto ret_;
}
if ((((*(P1026)rt_nil_check(F->x_2794)).a != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->x_2794)).kind) != (((rt_int)48LL))))) {
F->r_2795 = NULL;
F->r_2795 = f_external_missing_1008((*(P1026)rt_nil_check(F->x_2794)).a, F->units_1007);
if ((F->r_2795 != NULL)) {
F->result_ = F->r_2795;
goto ret_;
}
}
if ((((*(P1026)rt_nil_check(F->x_2794)).c != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->x_2794)).kind) != (((rt_int)48LL))))) {
F->r_2796 = NULL;
F->r_2796 = f_external_missing_1008((*(P1026)rt_nil_check(F->x_2794)).c, F->units_1007);
if ((F->r_2796 != NULL)) {
F->result_ = F->r_2796;
goto ret_;
}
}
F->x_2794 = (*(P1026)rt_nil_check(F->x_2794)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_unit_named_1011(P1026 units_1009, rstr *name_1010) {
  struct f_unit_named_1011fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_1009 = units_1009;
F->name_1010 = name_1010;
F->u_2797 = NULL;
F->u_2797 = F->units_1009;
while ((F->u_2797 != NULL)) {
if (rt_str_eq((((P1019)rt_nil_check((*(P1026)rt_nil_check(F->u_2797)).name))->all), (*F->name_1010))) {
F->result_ = 1;
goto ret_;
}
F->u_2797 = (*(P1026)rt_nil_check(F->u_2797)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tried_1013(rstr *name_1012) {
  struct f_tried_1013fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_1012 = name_1012;
F->result_ = f_seen_name_425(g_library_tried_1065, &(*F->name_1012));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_mark_tried_1015(rstr *name_1014) {
  struct f_mark_tried_1015fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_1014 = name_1014;
F->l_2798 = NULL;
{ R1031 *cell2799 = rt_alloc(sizeof(R1031));
(*cell2799).s = NULL;
(*cell2799).next = NULL;
F->l_2798 = cell2799;
}
(*(P1030)rt_nil_check(F->l_2798)).s = f_mk_3(&(*F->name_1014));
(*(P1030)rt_nil_check(F->l_2798)).next = g_library_tried_1065;
g_library_tried_1065 = F->l_2798;
ret_:
  RT_FPOP();
  return;
}

static void f_translate_1017(P1026 units_1016) {
  struct f_translate_1017fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_1016 = units_1016;
F->u_2800 = NULL;
F->u_2800 = F->units_1016;
while ((F->u_2800 != NULL)) {
if (f_has_pragmat_508((*(P1026)rt_nil_check(F->u_2800)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LIBRARY", 7); b_; }))) {
f_write_library_62(F->u_2800);
}
if ((((*(P1026)rt_nil_check(F->u_2800)).next == NULL) && (!f_has_pragmat_508((*(P1026)rt_nil_check(F->u_2800)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LIBRARY", 7); b_; }))))) {
{ R1054 *cell2801 = rt_alloc(sizeof(R1054));
(*cell2801).d = NULL;
(*cell2801).next = NULL;
g_caps_1085 = cell2801;
}
(*(P1053)rt_nil_check(g_caps_1085)).d = F->u_2800;
(*(P1053)rt_nil_check(g_caps_1085)).depth = rt_r_ichk(g_depth_1069);
f_declare_labels_586((*(P1026)rt_nil_check(F->u_2800)).c);
f_declare_body_430((*(P1026)rt_nil_check(F->u_2800)).c);
f_capsule_body_593((*(P1026)rt_nil_check(F->u_2800)).c);
f_await_tasks_582((*(P1026)rt_nil_check(F->u_2800)).c);
{
F->l_2802 = NULL;
F->l_2802 = F->units_1016;
while ((F->l_2802 != F->u_2800)) {
{
F->w_2803 = rt_str_copy(f_waits_of_578(F->l_2802));
if ((((rt_int)((F->w_2803).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2803);
}
}
F->l_2802 = (*(P1026)rt_nil_check(F->l_2802)).next;
}
}
f_close_fins_569(NULL);
if (rt_r_echk(g_uses_findyn_1093)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_440(F->u_2800);
f_elaborate_pending_444(f_lookup_decl_165(F->u_2800));
}
F->u_2800 = (*(P1026)rt_nil_check(F->u_2800)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_1018(void) {
  struct f_print_program_1018fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_426();
if (rt_r_echk(g_uses_free_1091)) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_1073);
f_print_buffer_31(g_out_frames_1089);
f_print_buffer_31(g_out_helpers_1074);
f_print_buffer_31(g_out_protos_1075);
f_print_buffer_31(g_out_globals_1076);
f_print_buffer_31(g_out_funcs_1077);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_1090);
f_print_buffer_31(g_out_excs_1079);
f_print_buffer_31(g_out_init_1078);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R1056(R1056 *d, R1056 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R1056 cp_R1056(R1056 s) {
  R1056 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R1056(R1056 a, R1056 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R1054(R1054 *d, R1054 s) {
  d->d = s.d;
  d->next = s.next;
  d->depth = s.depth;
}
static R1054 cp_R1054(R1054 s) {
  R1054 d = s;
  d.d = s.d;
  d.next = s.next;
  d.depth = s.depth;
  return d;
}
static int eq_R1054(R1054 a, R1054 b) {
  return 1 && (a.d == b.d) && (a.next == b.next) && (a.depth == b.depth);
}
static void as_R1052(R1052 *d, R1052 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R1052 cp_R1052(R1052 s) {
  R1052 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R1052(R1052 a, R1052 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R1050(R1050 *d, R1050 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R1050 cp_R1050(R1050 s) {
  R1050 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R1050(R1050 a, R1050 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R1048(R1048 *d, R1048 s) {
  d->t = s.t;
  d->next = s.next;
}
static R1048 cp_R1048(R1048 s) {
  R1048 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R1048(R1048 a, R1048 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R1046(R1046 *d, R1046 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
  d->f = s.f;
}
static R1046 cp_R1046(R1046 s) {
  R1046 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  d.f = s.f;
  return d;
}
static int eq_R1046(R1046 a, R1046 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t) && (a.f == b.f);
}
static void as_R1044(R1044 *d, R1044 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R1044 cp_R1044(R1044 s) {
  R1044 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R1044(R1044 a, R1044 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A1042(A1042 *d, A1042 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A1042 cp_A1042(A1042 s) {
  A1042 d = s; d.p = rt_alloc(sizeof(P1036) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A1042(A1042 a, A1042 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R1039(R1039 *d, R1039 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R1039 cp_R1039(R1039 s) {
  R1039 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R1039(R1039 a, R1039 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R1037(R1037 *d, R1037 s) {
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
static R1037 cp_R1037(R1037 s) {
  R1037 d = s;
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
static int eq_R1037(R1037 a, R1037 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home) && (a.capn == b.capn) && (a.tbinds == b.tbinds) && (a.loc == b.loc) && (a.reqs_sym == b.reqs_sym) && (a.decl_line == b.decl_line) && (a.pending == b.pending);
}
static void as_R1035(R1035 *d, R1035 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R1035 cp_R1035(R1035 s) {
  R1035 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R1035(R1035 a, R1035 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R1033(R1033 *d, R1033 s) {
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
static R1033 cp_R1033(R1033 s) {
  R1033 d = s;
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
static int eq_R1033(R1033 a, R1033 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs) && (a.assignp == b.assignp) && (a.eqp == b.eqp) && (a.ltp == b.ltp) && (a.repn == b.repn);
}
static void as_R1031(R1031 *d, R1031 s) {
  d->s = s.s;
  d->next = s.next;
}
static R1031 cp_R1031(R1031 s) {
  R1031 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R1031(R1031 a, R1031 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R1029(R1029 *d, R1029 s) {
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
static R1029 cp_R1029(R1029 s) {
  R1029 d = s;
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
static int eq_R1029(R1029 a, R1029 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R1027(R1027 *d, R1027 s) {
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
static R1027 cp_R1027(R1027 s) {
  R1027 d = s;
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
static int eq_R1027(R1027 a, R1027 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.eline == b.eline) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A1025(A1025 *d, A1025 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A1025 cp_A1025(A1025 s) {
  A1025 d = s; d.p = rt_alloc(sizeof(P1021) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A1025(A1025 a, A1025 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R1022(R1022 *d, R1022 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R1022 cp_R1022(R1022 s) {
  R1022 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R1022(R1022 a, R1022 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_1057);
  RT_ROOT(g_ntoks_1058);
  RT_ROOT(g_tpos_1059);
  RT_ROOT(g_src_line_1060);
  RT_ROOT(g_pending_prag_1061);
  RT_ROOT(g_src_head_1062);
  RT_ROOT(g_src_tail_1063);
  RT_ROOT(g_ntoks_before_library_1064);
  RT_ROOT(g_library_tried_1065);
  RT_ROOT(g_table_1066);
  RT_ROOT(g_genv_1067);
  RT_ROOT(g_all_insts_1068);
  RT_ROOT(g_depth_1069);
  RT_ROOT(g_scope_stack_1070);
  RT_ROOT(g_all_types_1071);
  RT_ROOT(g_serial_1072);
  RT_ROOT(g_out_types_1073);
  RT_ROOT(g_out_helpers_1074);
  RT_ROOT(g_out_protos_1075);
  RT_ROOT(g_out_globals_1076);
  RT_ROOT(g_out_funcs_1077);
  RT_ROOT(g_out_init_1078);
  RT_ROOT(g_out_excs_1079);
  RT_ROOT(g_code_1080);
  RT_ROOT(g_fields_buf_1081);
  RT_ROOT(g_in_func_1082);
  RT_ROOT(g_cur_level_1083);
  RT_ROOT(g_fctx_1084);
  RT_ROOT(g_caps_1085);
  RT_ROOT(g_cap_waits_1086);
  RT_ROOT(g_psub_1087);
  RT_ROOT(g_st_field_1088);
  RT_ROOT(g_out_frames_1089);
  RT_ROOT(g_out_roots_1090);
  RT_ROOT(g_uses_free_1091);
  RT_ROOT(g_fins_1092);
  RT_ROOT(g_uses_findyn_1093);
  RT_ROOT(g_func_sym_1094);
  RT_ROOT(g_func_rc_1095);
  RT_ROOT(g_cap_ret_1096);
  RT_ROOT(g_cap_rflag_1097);
  RT_ROOT(g_ret_frames_1098);
  RT_ROOT(g_gdepth_1099);
  RT_ROOT(g_suppress_1100);
  RT_ROOT(g_cons_ctx_1101);
  RT_ROOT(g_mark_uninit_1102);
  RT_ROOT(g_exits_1103);
  RT_ROOT(g_gotos_1104);
  RT_ROOT(g_frames_1105);
  RT_ROOT(g_handlers_1106);
  RT_ROOT(g_cleanups_1107);
  RT_ROOT(g_trial_1108);
  RT_ROOT(g_mcopies_1109);
  RT_ROOT(g_ty_int_1110);
  RT_ROOT(g_ty_bool_1111);
  RT_ROOT(g_ty_float_1112);
  RT_ROOT(g_ty_ascii_1113);
  RT_ROOT(g_ty_string_1114);
  RT_ROOT(g_ty_void_1115);
  RT_ROOT(g_ty_file_1116);
  RT_ROOT(g_ty_nil_1117);
  RT_ROOT(g_ty_lock_1118);
  RT_ROOT(g_ty_latch_1119);
  RT_ROOT(g_ty_act_1120);
  RT_ROOT(g_file_mode_type_1121);
  RT_ROOT(g_ty_send_st_1122);
  RT_ROOT(g_ty_receive_st_1123);
  RT_ROOT(g_ty_text_file_1124);
  RT_ROOT(g_file_state_type_1125);
  RT_ROOT(g_file_disp_type_1126);
  RT_ROOT(g_file_access_type_1127);
  RT_ROOT(g_no_cons_1128);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_1057 = NULL;
g_ntoks_1058 = RT_R_IUNDEF;
g_ntoks_1058 = ((rt_int)0LL);
g_tpos_1059 = RT_R_IUNDEF;
g_tpos_1059 = ((rt_int)1LL);
g_src_line_1060 = RT_R_IUNDEF;
g_src_line_1060 = ((rt_int)0LL);
g_pending_prag_1061 = NULL;
g_src_head_1062 = NULL;
g_src_tail_1063 = NULL;
g_ntoks_before_library_1064 = RT_R_IUNDEF;
g_ntoks_before_library_1064 = ((rt_int)0LL);
g_library_tried_1065 = NULL;
g_table_1066 = NULL;
g_genv_1067 = NULL;
g_all_insts_1068 = NULL;
g_depth_1069 = RT_R_IUNDEF;
g_depth_1069 = ((rt_int)0LL);
g_scope_stack_1070 = NULL;
g_all_types_1071 = NULL;
g_serial_1072 = RT_R_IUNDEF;
g_serial_1072 = ((rt_int)0LL);
g_out_types_1073 = NULL;
g_out_helpers_1074 = NULL;
g_out_protos_1075 = NULL;
g_out_globals_1076 = NULL;
g_out_funcs_1077 = NULL;
g_out_init_1078 = NULL;
g_out_excs_1079 = NULL;
g_code_1080 = NULL;
g_fields_buf_1081 = NULL;
g_in_func_1082 = RT_R_EUNDEF;
g_in_func_1082 = 0;
g_cur_level_1083 = RT_R_IUNDEF;
g_cur_level_1083 = ((rt_int)0LL);
g_fctx_1084 = NULL;
g_caps_1085 = NULL;
g_cap_waits_1086 = NULL;
g_psub_1087 = NULL;
g_st_field_1088 = NULL;
g_out_frames_1089 = NULL;
g_out_roots_1090 = NULL;
g_uses_free_1091 = RT_R_EUNDEF;
g_uses_free_1091 = 0;
g_fins_1092 = NULL;
g_uses_findyn_1093 = RT_R_EUNDEF;
g_uses_findyn_1093 = 0;
g_func_sym_1094 = NULL;
g_func_rc_1095 = NULL;
g_cap_ret_1096 = NULL;
g_cap_rflag_1097 = NULL;
g_ret_frames_1098 = RT_R_IUNDEF;
g_ret_frames_1098 = ((rt_int)0LL);
g_gdepth_1099 = RT_R_IUNDEF;
g_gdepth_1099 = ((rt_int)0LL);
g_suppress_1100 = NULL;
g_cons_ctx_1101 = NULL;
g_mark_uninit_1102 = RT_R_EUNDEF;
g_mark_uninit_1102 = 0;
g_exits_1103 = NULL;
g_gotos_1104 = NULL;
g_frames_1105 = RT_R_IUNDEF;
g_frames_1105 = ((rt_int)0LL);
g_handlers_1106 = NULL;
g_cleanups_1107 = NULL;
g_trial_1108 = RT_R_IUNDEF;
g_trial_1108 = ((rt_int)0LL);
g_mcopies_1109 = NULL;
g_ty_int_1110 = NULL;
g_ty_bool_1111 = NULL;
g_ty_float_1112 = NULL;
g_ty_ascii_1113 = NULL;
g_ty_string_1114 = NULL;
g_ty_void_1115 = NULL;
g_ty_file_1116 = NULL;
g_ty_nil_1117 = NULL;
g_ty_lock_1118 = NULL;
g_ty_latch_1119 = NULL;
g_ty_act_1120 = NULL;
g_file_mode_type_1121 = NULL;
g_ty_send_st_1122 = NULL;
g_ty_receive_st_1123 = NULL;
g_ty_text_file_1124 = NULL;
g_file_state_type_1125 = NULL;
g_file_disp_type_1126 = NULL;
g_file_access_type_1127 = NULL;
g_no_cons_1128 = NULL;
{ P1023 cell2804 = rt_alloc(sizeof *cell2804);
rt_int pv2805 = ((rt_int)1000000LL);
cell2804->p_n = pv2805;
cell2804->all.lo = ((rt_int)1LL); cell2804->all.hi = pv2805;
cell2804->all.lo2 = cell2804->all.hi2 = 1;
cell2804->all.p = rt_alloc(sizeof(P1021) * (size_t)(RT_CNT(cell2804->all)) + 1);
for (rt_int i2806 = 0; i2806 < (RT_CNT(cell2804->all)); i2806++) {
cell2804->all.p[i2806] = NULL;
}
g_toks_1057 = cell2804;
}
{ P1040 cell2807 = rt_alloc(sizeof *cell2807);
rt_int pv2808 = (((rt_int)4093LL));
cell2807->p_n = pv2808;
cell2807->all.lo = ((rt_int)0LL); cell2807->all.hi = pv2808;
cell2807->all.lo2 = cell2807->all.hi2 = 1;
cell2807->all.p = rt_alloc(sizeof(P1036) * (size_t)(RT_CNT(cell2807->all)) + 1);
for (rt_int i2809 = 0; i2809 < (RT_CNT(cell2807->all)); i2809++) {
cell2807->all.p[i2809] = NULL;
}
g_table_1066 = cell2807;
}
g_out_types_1073 = f_new_buffer_24();
g_out_helpers_1074 = f_new_buffer_24();
g_out_protos_1075 = f_new_buffer_24();
g_out_globals_1076 = f_new_buffer_24();
g_out_funcs_1077 = f_new_buffer_24();
g_out_init_1078 = f_new_buffer_24();
g_out_excs_1079 = f_new_buffer_24();
g_out_frames_1089 = f_new_buffer_24();
g_out_roots_1090 = f_new_buffer_24();
g_code_1080 = g_out_init_1078;
g_no_cons_1128 = f_new_cons_184();
g_ty_int_1110 = f_new_typ_183((((rt_int)1LL)));
g_ty_bool_1111 = f_new_typ_183((((rt_int)2LL)));
g_ty_float_1112 = f_new_typ_183((((rt_int)3LL)));
g_ty_string_1114 = f_new_typ_183((((rt_int)5LL)));
g_ty_void_1115 = f_new_typ_183((((rt_int)9LL)));
g_ty_file_1116 = f_new_typ_183((((rt_int)10LL)));
g_ty_nil_1117 = f_new_typ_183((((rt_int)11LL)));
g_ty_lock_1118 = f_new_typ_183((((rt_int)13LL)));
g_ty_latch_1119 = f_new_typ_183((((rt_int)13LL)));
g_ty_act_1120 = f_new_typ_183((((rt_int)14LL)));
{ rt_frame xf2810;
if (RT_TRY(xf2810)) {
f_init_ascii_259();
f_read_source_58();
g_ntoks_before_library_1064 = rt_add(rt_r_ichk(g_ntoks_1058), ((rt_int)1LL));
f_translate_1017(f_with_library_1005(f_program_159()));
f_print_program_1018();
RT_POP(xf2810);
} else {
RT_POP(xf2810);
int x2811 = rt_xcur;
if (0 || x2811 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2811);
}
}
}
  rt_main_done();
  return 0;
}
