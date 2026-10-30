#include "paleo.h"
#include <math.h>
typedef struct Pc1023 *P1022;
typedef struct R1025 R1025;
typedef struct R1025 *P1024;
struct R1025 {  rt_int kind; rt_int line; rt_int ival; P1022 s; P1022 prags;  };
typedef struct Pc1027 *P1026;
typedef struct A1028 A1028;
struct A1028 { rt_int lo, hi, lo2, hi2; P1024 *p; };
typedef struct R1030 R1030;
typedef struct R1030 *P1029;
struct R1030 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P1022 name; P1022 tag; P1022 prags; P1029 labels; rt_int eline; P1029 a; P1029 b; P1029 c; P1029 d; P1029 e; P1029 next;  };
typedef struct R1032 R1032;
typedef struct R1032 *P1031;
typedef struct R1034 R1034;
typedef struct R1034 *P1033;
struct R1034 {  P1022 s; P1033 next;  };
struct R1032 {  P1022 lo; P1022 hi; P1022 lo2; P1022 hi2; P1022 slen; rt_int mlo; rt_int mhi; int hasm; P1029 args; int dyn; rt_int lvl; P1022 prec; P1033 bnds;  };
typedef struct R1036 R1036;
typedef struct R1036 *P1035;
typedef struct R1038 R1038;
typedef struct R1038 *P1037;
struct R1038 {  P1022 name; P1035 t; P1031 c; P1029 st; P1037 next;  };
typedef struct R1040 R1040;
typedef struct R1040 *P1039;
typedef struct R1042 R1042;
typedef struct R1042 *P1041;
struct R1042 {  P1022 name; rt_int mode; P1035 t; P1031 c; P1022 cfield; P1041 next;  };
typedef struct Pc1044 *P1043;
typedef struct A1045 A1045;
struct A1045 { rt_int lo, hi, lo2, hi2; P1039 *p; };
typedef struct R1047 R1047;
typedef struct R1047 *P1046;
struct R1047 {  rt_int depth; P1029 imps; int all_imp; P1046 next;  };
typedef struct R1049 R1049;
typedef struct R1049 *P1048;
struct R1049 {  rt_int kind; rt_int i; P1022 s; P1035 t; double f;  };
struct R1040 {  rt_int kind; P1022 name; P1035 t; P1031 c; P1022 access; P1022 cname; int ro_flag; rt_int mvalue; int hasmv; P1029 st; P1029 decl; P1041 params; P1035 result; rt_int depth; rt_int level; int byref; P1039 members; P1039 mnext; P1029 binds; P1039 insts; P1043 env; P1039 chain; P1039 stack; P1039 owner; P1046 gctx; P1048 mv; P1033 reqs; int reqdone; P1029 home; P1029 capn; P1039 tbinds; P1022 loc; P1039 reqs_sym; rt_int decl_line; int pending;  };
typedef struct R1051 R1051;
typedef struct R1051 *P1050;
struct R1051 {  P1035 t; P1050 next;  };
struct R1036 {  rt_int kind; P1022 name; P1029 lits; P1035 elem; P1035 idx; P1035 idx2; P1031 elemcons; P1029 elemst; P1035 under; P1029 tparams; P1029 ocap; P1037 fields; P1035 target; P1029 decl; P1022 cname; int forward; int defined; int helpers; P1039 initp; P1039 finalp; P1039 tpsyms; P1039 gen; P1039 gbinds; P1035 next; rt_int ndim; P1050 idxs; P1039 assignp; P1039 eqp; P1039 ltp; P1029 repn;  };
typedef struct R1053 R1053;
typedef struct R1053 *P1052;
struct R1053 {  P1033 head; P1033 tail;  };
typedef struct R1055 R1055;
typedef struct R1055 *P1054;
struct R1055 {  P1022 match; P1022 label; rt_int depth; P1054 next;  };
typedef struct R1057 R1057;
typedef struct R1057 *P1056;
struct R1057 {  P1029 d; P1056 next; rt_int depth;  };
typedef struct R1059 R1059;
typedef struct R1059 *P1058;
struct R1059 {  P1029 d; P1022 w; P1058 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P1022 result_;
 P1022 t_1133;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_1136;
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
 rstr r_1137;
 rt_int i_1138;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_1142;
 rstr w_1143;
 rt_int i_1144;
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
 P1052 result_;
 P1052 b_1148;
};
struct f_put_27fr { int dummy;
 P1052 b_25;
 rstr *s_26;
 P1033 l_1150;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P1052 b_30;
 P1033 l_1152;
};
struct f_splice_34fr { int dummy;
 P1052 a_32;
 P1052 b_33;
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
 P1024 t_1154;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_1156;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_1157;
 rt_int k_1158;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_1162;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_1163;
 P1022 r_1164;
 int more_1165;
 rt_int k_1166;
 int go_1167;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_1168;
 rt_int k_1169;
 rstr p_1170;
 int ok_1171;
 int known_1172;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_1173;
 rt_int j_1174;
 rt_int n_1175;
 int c_1176;
 rstr w_1177;
 rt_int k_1178;
 rstr w_1182;
 rt_int k_1183;
 rstr two_1187;
};
struct f_read_source_58fr { int dummy;
 rstr line_1188;
 P1033 l_1189;
};
struct f_read_library_60fr { int dummy;
 rstr *name_59;
 int result_;
 rt_r_file * f_1191;
 int found_1192;
 rstr line_1195;
};
struct f_write_library_62fr { int dummy;
 P1029 u_61;
 rt_r_file * f_1196;
 P1033 l_1197;
 rt_int n_1198;
};
struct f_nn_65fr { int dummy;
 rt_int kind_63;
 rt_int line_64;
 P1029 result_;
 P1029 x_1199;
};
struct f_append_69fr { int dummy;
 P1029 *head_66;
 P1029 *tail_67;
 P1029 x_68;
};
struct f_list_len_71fr { int dummy;
 P1029 l_70;
 rt_int result_;
 rt_int n_1201;
 P1029 p_1202;
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
 P1022 result_;
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
 P1022 result_;
};
struct f_name_node_94fr { int dummy;
 P1029 result_;
 P1029 x_1203;
};
struct f_id_list_95fr { int dummy;
 P1029 result_;
 P1029 head_1204;
 P1029 tail_1205;
};
struct f_p_subtype_96fr { int dummy;
 P1029 result_;
 rt_int line_1206;
 P1029 x_1207;
 rstr w_1208;
 P1029 head_1209;
 P1029 tail_1210;
 P1029 head_1211;
 P1029 tail_1212;
 int more_1213;
 P1029 names_1214;
 P1029 st_1215;
 P1029 cmp_1216;
 P1029 head_1217;
 P1029 tail_1218;
 int more_1219;
 P1029 lit_1220;
};
struct f_constraint_list_97fr { int dummy;
 P1029 result_;
 P1029 head_1221;
 P1029 tail_1222;
 int more_1223;
 rt_int line_1224;
 P1029 lo_1225;
 P1029 r_1226;
};
struct f_actual_params_98fr { int dummy;
 P1029 result_;
 P1029 head_1227;
 P1029 tail_1228;
};
struct f_is_type_word_100fr { int dummy;
 rstr *w_99;
 int result_;
};
struct f_actual_tt_101fr { int dummy;
 P1029 result_;
 P1029 head_1229;
 P1029 tail_1230;
 int more_1231;
};
struct f_binop_106fr { int dummy;
 P1022 op_102;
 P1029 l_103;
 P1029 r_104;
 rt_int line_105;
 P1029 result_;
 P1029 x_1232;
};
struct f_expr_107fr { int dummy;
 P1029 result_;
 P1029 l_1233;
 P1022 op_1234;
 rt_int line_1235;
};
struct f_expr_and_108fr { int dummy;
 P1029 result_;
 P1029 l_1236;
 rt_int line_1237;
};
struct f_expr_not_109fr { int dummy;
 P1029 result_;
 P1029 x_1238;
};
struct f_is_rel_111fr { int dummy;
 rstr *s_110;
 int result_;
};
struct f_expr_rel_112fr { int dummy;
 P1029 result_;
 P1029 l_1239;
 P1022 op_1240;
 rt_int line_1241;
};
struct f_expr_add_113fr { int dummy;
 P1029 result_;
 P1029 l_1242;
 P1022 op_1243;
 rt_int line_1244;
};
struct f_expr_mul_114fr { int dummy;
 P1029 result_;
 P1029 l_1245;
 P1022 op_1246;
 rt_int line_1247;
};
struct f_expr_pow_115fr { int dummy;
 P1029 result_;
 P1029 l_1248;
 rt_int line_1249;
};
struct f_expr_prefix_116fr { int dummy;
 P1029 result_;
 P1029 x_1250;
};
struct f_postfix_117fr { int dummy;
 P1029 result_;
 P1029 p_1251;
 rt_int line_1252;
 P1029 x_1253;
 P1029 head_1254;
 P1029 tail_1255;
 int more_1256;
 P1029 lo_1257;
 P1029 r_1258;
 P1029 x_1259;
 P1029 x_1260;
 P1029 x_1261;
};
struct f_primary_118fr { int dummy;
 P1029 result_;
 rt_int line_1262;
 P1029 x_1263;
 rt_int k_1264;
 rstr w_1265;
 P1029 head_1266;
 P1029 tail_1267;
 int more_1268;
};
struct f_constructor_item_119fr { int dummy;
 P1029 result_;
 rt_int line_1269;
 P1029 it_1270;
 P1029 first_1271;
 P1029 keys_1272;
 P1029 ktail_1273;
 P1029 lab_1274;
 rt_int save_1275;
 P1029 more_1276;
 P1029 tail2_1277;
 int ok_1278;
 int go_1279;
 P1029 l2_1280;
};
struct f_at_body_end_120fr { int dummy;
 int result_;
};
struct f_body_121fr { int dummy;
 P1029 result_;
 P1029 head_1281;
 P1029 tail_1282;
 int stmts_1283;
 P1029 after_1284;
 P1029 x_1285;
};
struct f_body_element_122fr { int dummy;
 P1029 result_;
 P1029 x_1286;
 P1022 pr_1287;
 P1029 p_1288;
};
struct f_declaration_123fr { int dummy;
 P1029 result_;
 rt_int line_1289;
 P1029 head_1290;
 P1029 tail_1291;
 P1029 names_1292;
 P1029 x_1293;
};
struct f_object_decl_124fr { int dummy;
 P1029 result_;
 rt_int line_1294;
 int is_var_1295;
 P1029 names_1296;
 P1029 st_1297;
 P1029 init_1298;
 P1029 loc_1299;
 rt_int loc_kind_1300;
 P1029 head_1301;
 P1029 tail_1302;
 P1029 x_1303;
};
struct f_abbrev_decl_125fr { int dummy;
 P1029 result_;
 P1029 x_1304;
};
struct f_rep_spec_126fr { int dummy;
 P1029 result_;
};
struct f_rep_items_127fr { int dummy;
 P1029 result_;
 P1029 head_1305;
 P1029 tail_1306;
 int more_1307;
};
struct f_rep_word_129fr { int dummy;
 rt_int k_128;
 int result_;
 rstr w_1308;
};
struct f_rep_item_130fr { int dummy;
 P1029 result_;
 P1029 x_1309;
 P1029 head_1310;
 P1029 tail_1311;
 int more_1312;
 P1029 names_1313;
 P1029 items_1314;
 P1029 cmp_1315;
 P1029 head_1316;
 P1029 tail_1317;
 P1029 head_1318;
 P1029 tail_1319;
 int dummy_1320;
};
struct f_type_decl_131fr { int dummy;
 P1029 result_;
 rt_int line_1321;
 P1022 name_1322;
 P1029 params_1323;
 P1029 x_1324;
 P1029 tts_1325;
};
struct f_mode_of_133fr { int dummy;
 rstr *w_132;
 rt_int result_;
};
struct f_formal_params_134fr { int dummy;
 P1029 result_;
 P1029 head_1326;
 P1029 tail_1327;
 int more_1328;
 rt_int mode_1329;
 P1029 names_1330;
 P1029 ntail_1331;
 P1029 st_1332;
 P1029 p_1333;
};
struct f_imports_list_136fr { int dummy;
 P1029 owner_135;
 int result_;
 P1029 head_1334;
 P1029 tail_1335;
 int more_1336;
 int ro_1337;
 P1029 x_1338;
};
struct f_is_definable_138fr { int dummy;
 rstr *w_137;
 int result_;
};
struct f_definable_name_139fr { int dummy;
 P1022 result_;
 P1022 r_1339;
};
struct f_subprogram_decl_140fr { int dummy;
 P1029 result_;
 rt_int line_1340;
 P1029 x_1341;
 int is_abn_1342;
 int is_func_1343;
 int dummy_1344;
};
struct f_capsule_decl_141fr { int dummy;
 P1029 result_;
 P1029 x_1345;
 int dummy_1346;
 P1029 head_1347;
 P1029 tail_1348;
 int more_1349;
 P1029 n_1350;
};
struct f_formal_tt_142fr { int dummy;
 P1029 result_;
 P1029 head_1351;
 P1029 tail_1352;
 int more_1353;
};
struct f_generic_decl_143fr { int dummy;
 P1029 result_;
 P1029 x_1354;
 P1029 head_1355;
 P1029 tail_1356;
 int more_1357;
 P1029 names_1358;
 rt_int kind_1359;
 P1029 st_1360;
 P1029 items_1361;
 P1029 p_1362;
 P1029 nhead_1363;
 P1029 ntail_1364;
 P1029 it_1365;
};
struct f_type_list_144fr { int dummy;
 P1029 result_;
 P1029 head_1366;
 P1029 tail_1367;
 int more_1368;
 P1029 n_1369;
};
struct f_task_decl_145fr { int dummy;
 P1029 result_;
 P1029 x_1370;
 int dummy_1371;
};
struct f_expose_decl_146fr { int dummy;
 P1029 result_;
 P1029 x_1372;
 P1029 head_1373;
 P1029 tail_1374;
 int more_1375;
 P1029 n_1376;
 P1029 head_1377;
 P1029 tail_1378;
 int more_1379;
 P1029 n_1380;
 P1029 tgt_1381;
};
struct f_is_compound_kw_148fr { int dummy;
 rstr *w_147;
 int result_;
};
struct f_statement_149fr { int dummy;
 P1029 result_;
 P1029 labels_1382;
 P1029 ltail_1383;
 P1022 match_1384;
 P1029 s_1385;
};
struct f_unlabeled_statement_150fr { int dummy;
 P1029 result_;
 rt_int line_1386;
 P1029 x_1387;
 P1029 head_1388;
 P1029 tail_1389;
 P1029 invs_1390;
 P1029 itail_1391;
 int more_1392;
 P1029 target_1393;
};
struct f_arm_154fr { int dummy;
 P1029 cond_151;
 P1029 b_152;
 rt_int line_153;
 P1029 result_;
 P1029 x_1394;
};
struct f_if_stmt_155fr { int dummy;
 P1029 result_;
 P1029 x_1395;
 P1029 head_1396;
 P1029 tail_1397;
 P1029 cond_1398;
 int go_1399;
};
struct f_case_stmt_156fr { int dummy;
 P1029 result_;
 P1029 x_1400;
 P1029 head_1401;
 P1029 tail_1402;
 P1029 labs_1403;
 P1029 ltail_1404;
 int more_1405;
 P1029 l_1406;
};
struct f_repeat_stmt_157fr { int dummy;
 P1029 result_;
 P1029 x_1407;
};
struct f_guard_stmt_158fr { int dummy;
 P1029 result_;
 P1029 x_1408;
 P1029 head_1409;
 P1029 tail_1410;
 P1029 h_1411;
};
struct f_program_159fr { int dummy;
 P1029 result_;
 P1029 head_1412;
 P1029 tail_1413;
 P1022 pr_1414;
 P1029 u_1415;
};
struct f_hash_161fr { int dummy;
 rstr *s_160;
 rt_int result_;
 rt_int h_1416;
 rt_int i_1417;
};
struct f_lookup_163fr { int dummy;
 rstr *name_162;
 P1039 result_;
 P1039 y_1421;
};
struct f_lookup_decl_165fr { int dummy;
 P1029 d_164;
 P1039 result_;
 P1039 y_1422;
};
struct f_define_168fr { int dummy;
 P1039 y_166;
 rt_int line_167;
 rt_int h_1423;
 P1039 z_1424;
};
struct f_overloadable_170fr { int dummy;
 P1039 y_169;
 int result_;
};
struct f_same_tt_173fr { int dummy;
 P1029 a_171;
 P1029 b_172;
 int result_;
 P1029 x_1425;
 P1029 y_1426;
};
struct f_same_signature_176fr { int dummy;
 P1041 a_174;
 P1041 b_175;
 int result_;
 P1041 x_1427;
 P1041 y_1428;
};
struct f_open_scope_177fr { int dummy;
};
struct f_close_scope_178fr { int dummy;
};
struct f_new_sym_181fr { int dummy;
 rt_int kind_179;
 P1022 name_180;
 P1039 result_;
 P1039 y_1429;
};
struct f_new_typ_183fr { int dummy;
 rt_int kind_182;
 P1035 result_;
 P1035 t_1431;
};
struct f_new_cons_184fr { int dummy;
 P1031 result_;
 P1031 c_1433;
};
struct f_scalar_kind_186fr { int dummy;
 P1035 t_185;
 int result_;
};
struct f_bound_ctype_188fr { int dummy;
 P1035 t_187;
 rstr result_;
};
struct f_cbound_191fr { int dummy;
 P1031 c_189;
 rstr *b_190;
 rstr result_;
 P1022 p_1435;
 rt_int i_1436;
};
struct f_clo_193fr { int dummy;
 P1031 c_192;
 rstr result_;
};
struct f_chi_195fr { int dummy;
 P1031 c_194;
 rstr result_;
};
struct f_sub_lo_198fr { int dummy;
 P1035 t_196;
 P1031 c_197;
 rstr result_;
};
struct f_sub_hi_201fr { int dummy;
 P1035 t_199;
 P1031 c_200;
 rstr result_;
};
struct f_raw_storage_204fr { int dummy;
 rstr *name_202;
 rstr *ct_203;
 rstr result_;
 rstr g_1440;
 rstr f_1441;
};
struct f_copy_cons_206fr { int dummy;
 P1031 c_205;
 P1031 result_;
 P1031 r_1442;
};
struct f_freeze_209fr { int dummy;
 P1031 c_207;
 P1035 t_208;
 P1031 result_;
 P1031 r_1444;
 P1022 saved_field_1445;
 rstr ct_1446;
 rstr la_1447;
 rstr lf_1448;
 rstr ha_1449;
 rstr hf_1450;
};
struct f_checked_213fr { int dummy;
 P1035 t_210;
 P1031 c_211;
 rstr *v_212;
 rstr result_;
};
struct f_same_lits_216fr { int dummy;
 P1029 a_214;
 P1029 b_215;
 int result_;
 P1029 x_1451;
 P1029 y_1452;
};
struct f_str_elem_218fr { int dummy;
 P1035 t_217;
 P1035 result_;
};
struct f_same_221fr { int dummy;
 P1035 a_219;
 P1035 b_220;
 int result_;
 P1050 x_1453;
 P1050 y_1454;
 P1037 f_1455;
 P1037 g_1456;
};
struct f_base_of_223fr { int dummy;
 P1035 t_222;
 P1035 result_;
};
struct f_base_cons_226fr { int dummy;
 P1035 t_224;
 P1031 c_225;
 P1031 result_;
};
struct f_kind_name_228fr { int dummy;
 P1035 t_227;
 rstr result_;
};
struct f_check_type_232fr { int dummy;
 P1035 got_229;
 P1035 want_230;
 rt_int line_231;
};
struct f_ctype_234fr { int dummy;
 P1035 t_233;
 rstr result_;
};
struct f_struct_body_236fr { int dummy;
 P1035 t_235;
 rstr result_;
};
struct f_field_decls_238fr { int dummy;
 P1035 t_237;
 rstr result_;
 P1037 f_1459;
 P1022 s_1460;
};
struct f_declare_ctype_240fr { int dummy;
 P1035 t_239;
 P1035 u_1461;
 P1029 p_1462;
 P1022 fs_1463;
 rstr sn_1464;
 P1031 pc_1465;
 P1035 target_1466;
 P1029 p_1467;
 P1022 fs_1468;
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
 P1035 t_245;
 rstr result_;
 P1022 r_1469;
 rt_int k_1470;
};
struct f_acnt_249fr { int dummy;
 P1035 t_247;
 rstr *base_248;
 rstr result_;
 P1022 r_1474;
 rt_int k_1475;
};
struct f_cons_lo_252fr { int dummy;
 P1031 c_250;
 rt_int k_251;
 P1022 result_;
 P1033 l_1479;
 rt_int i_1480;
};
struct f_cons_hi_255fr { int dummy;
 P1031 c_253;
 rt_int k_254;
 P1022 result_;
 P1033 l_1484;
 rt_int i_1485;
};
struct f_idx_type_258fr { int dummy;
 P1035 t_256;
 rt_int k_257;
 P1035 result_;
 P1050 l_1489;
 rt_int i_1490;
};
struct f_init_ascii_259fr { int dummy;
 P1029 head_1494;
 P1029 tail_1495;
 rt_int start_1496;
 rt_int i_1497;
 P1029 lit_1501;
 P1029 h2_1502;
 P1029 t2_1503;
 P1029 l1_1504;
 P1029 l2_1505;
 P1029 l3_1506;
};
struct f_enum2_262fr { int dummy;
 rstr *a_260;
 rstr *b_261;
 P1035 result_;
 P1035 t_1507;
 P1029 l1_1508;
 P1029 l2_1509;
};
struct f_lit_index_265fr { int dummy;
 P1029 lits_263;
 rstr *name_264;
 rt_int result_;
 rt_int i_1510;
 P1029 l_1511;
};
struct f_resolve_subtype_268fr { int dummy;
 P1029 st_266;
 P1031 *c_267;
 P1031 c_267v;
 P1035 result_;
 P1035 t_1512;
 int ok_1513;
 P1035 dummy_1514;
 P1035 et_1516;
 P1031 ec_1517;
 P1035 et_1518;
 P1029 ix_1519;
 rt_int k_1520;
 P1050 tail_1521;
 P1033 btail_1522;
 P1031 ic_1523;
 P1035 it_1524;
 P1022 lo_1525;
 P1022 hi_1526;
 P1050 tl_1527;
 P1033 l1_1529;
 P1033 l2_1530;
 P1031 ec_1533;
 P1029 comp_1534;
 P1037 tail_1535;
 P1031 cc_1536;
 P1037 f_1537;
 P1029 lits_1539;
 P1029 ltail_1540;
 P1037 f_1541;
 P1029 l_1542;
 P1031 ec_1543;
 P1029 gt_1544;
 P1031 ec_1545;
 P1022 base_1546;
};
struct f_float_lit_270fr { int dummy;
 P1029 e_269;
 int result_;
};
struct f_tag_constraint_274fr { int dummy;
 P1035 t_271;
 P1029 e_272;
 P1031 c_273;
 P1035 dummy_1547;
};
struct f_named_subtype_277fr { int dummy;
 P1029 st_275;
 P1031 *c_276;
 P1031 c_276v;
 P1035 result_;
 P1035 t_1548;
 P1039 y_1549;
 rstr name_1550;
 P1039 binds_1551;
 P1043 saved_env_1552;
 rt_int saved_gdepth_1553;
 P1039 nb_1554;
};
struct f_invoke_abbrev_281fr { int dummy;
 P1039 y_278;
 P1029 st_279;
 P1031 *c_280;
 P1031 c_280v;
 P1035 result_;
 P1029 p_1555;
 P1029 a_1556;
 P1035 t_1557;
 P1039 z_1558;
 P1031 pc_1559;
 P1035 at_1560;
 int ok_1561;
};
struct f_apply_constraint_286fr { int dummy;
 P1035 t_282;
 P1029 args_283;
 P1031 c_284;
 rt_int line_285;
 P1035 dummy_1562;
 int ok_1563;
};
struct f_value_subtype_290fr { int dummy;
 P1029 e_287;
 P1031 *c_288;
 P1031 c_288v;
 P1022 *base_289;
 P1022 base_289v;
 P1035 result_;
 P1035 t_1564;
 P1031 c0_1565;
 int ro_1566;
 rt_int k_1567;
 rstr lo_1571;
 rstr hi_1572;
 P1033 l1_1573;
 P1033 l2_1574;
 P1029 p_1577;
 P1029 head_1578;
 P1029 tail_1579;
 P1029 sel_1580;
};
struct f_reverse_pairs_292fr { int dummy;
 P1033 l_291;
 P1033 result_;
 P1033 r_1581;
 P1033 p_1582;
 P1033 a_1583;
 P1033 b_1584;
};
struct f_inquiry_295fr { int dummy;
 P1029 st_293;
 P1031 *c_294;
 P1031 c_294v;
 P1035 result_;
 P1022 base_1585;
 P1035 t_1586;
 rstr name_1587;
 P1029 sub_1588;
 P1031 c2_1589;
 rt_int k_1590;
 int ok_1591;
 P1031 ac_1592;
};
struct f_as_subtype_297fr { int dummy;
 P1029 e_296;
 P1029 result_;
 P1029 st_1593;
 rstr name_1594;
 P1039 y_1595;
};
struct f_tt_subtype_302fr { int dummy;
 P1022 name_298;
 P1029 tt_299;
 P1029 args_300;
 rt_int line_301;
 P1029 result_;
 P1029 st_1596;
};
struct f_type_name_304fr { int dummy;
 rstr *name_303;
 int result_;
 P1039 y_1597;
};
struct f_empty_set_306fr { int dummy;
 P1035 t_305;
 rstr result_;
};
struct f_opened_308fr { int dummy;
 P1035 t_307;
 int result_;
 P1056 c_1598;
};
struct f_replace_all_312fr { int dummy;
 rstr *s_309;
 rstr *pat_310;
 rstr *r_311;
 rstr result_;
 rt_int i_1599;
};
struct f_subst_314fr { int dummy;
 rstr *s_313;
 rstr result_;
 P1033 l_1600;
 P1022 r_1601;
};
struct f_new_type_318fr { int dummy;
 P1039 y_315;
 P1029 st_316;
 P1031 *c_317;
 P1031 c_317v;
 P1035 result_;
 P1029 d_1602;
 P1029 p_1603;
 P1031 uc_1604;
 P1039 z_1605;
 P1031 zc_1606;
};
struct f_needed_bits_321fr { int dummy;
 P1035 t_319;
 P1031 c_320;
 rt_int result_;
 rt_int n_1607;
 rt_int v_1608;
};
struct f_has_digits_only_323fr { int dummy;
 rstr *s_322;
 int result_;
 rt_int i_1609;
};
struct f_built_in_only_325fr { int dummy;
 P1035 t_324;
 int result_;
 P1037 f_1613;
};
struct f_check_rep_332fr { int dummy;
 P1029 items_326;
 P1035 t_327;
 P1031 c_328;
 int top_329;
 int indirect_330;
 P1029 d_331;
 P1029 it_1614;
 int ok_1615;
 P1035 at_1616;
 rstr w_1617;
 rt_int v_1618;
 rstr dummy_1619;
 rt_int m_1620;
 int ok2_1621;
 rt_int r_1622;
 rt_int o_1623;
 P1029 comp_1624;
 P1037 f_1625;
 P1029 k_1626;
 P1029 a_1627;
};
struct f_formal_named_335fr { int dummy;
 P1029 d_333;
 rstr *name_334;
 int result_;
 P1029 p_1628;
};
struct f_unchecked_free_337fr { int dummy;
 P1035 t_336;
 int result_;
 P1029 it_1629;
};
struct f_init_storage_341fr { int dummy;
 rstr *lval_338;
 P1035 t_339;
 P1031 c_340;
};
struct f_init_call_344fr { int dummy;
 P1039 y_342;
 rstr *lval_343;
 rstr result_;
 P1022 link_1630;
 rt_int i_1631;
};
struct f_needs_fin_346fr { int dummy;
 P1035 t_345;
 int result_;
 P1037 f_1635;
};
struct f_fin_code_349fr { int dummy;
 rstr *lval_347;
 P1035 t_348;
 rstr result_;
 P1022 r_1636;
 rstr i_1637;
 P1037 f_1638;
 P1037 f_1639;
 rt_int i_1640;
};
struct f_tparam_type_352fr { int dummy;
 P1035 t_350;
 rstr *name_351;
 P1035 result_;
 P1039 z_1641;
};
struct f_make_storage_356fr { int dummy;
 rstr *lval_353;
 P1035 t_354;
 P1031 c_355;
 P1029 p_1642;
 P1029 a_1643;
 P1031 uc_1644;
 P1035 ut_1645;
 P1035 at_1646;
 P1035 pt_1647;
 rstr v_1648;
 P1033 saved_1649;
 P1033 l1_1650;
 P1033 l2_1651;
 P1035 at_1654;
 rstr acc_1655;
 rstr use_1656;
 rt_int k_1657;
 rstr i_1661;
 P1037 f_1662;
 P1037 f_1663;
 rt_int i_1664;
};
struct f_flat_358fr { int dummy;
 P1035 t_357;
 int result_;
 P1037 f_1668;
};
struct f_uninit_value_360fr { int dummy;
 P1035 t_359;
 rstr result_;
};
struct f_init_chk_363fr { int dummy;
 P1035 t_361;
 rstr *v_362;
 rstr result_;
 P1035 b_1669;
};
struct f_manifest_366fr { int dummy;
 P1029 e_364;
 int *ok_365;
 int ok_365v;
 rt_int result_;
 P1048 v_1670;
};
struct f_mk_mval_369fr { int dummy;
 rt_int kind_367;
 rt_int i_368;
 P1048 result_;
 P1048 v_1671;
};
struct f_ipow_372fr { int dummy;
 rt_int a_370;
 rt_int b_371;
 rt_int result_;
 rt_int r_1673;
 rt_int i_1674;
};
struct f_meval_375fr { int dummy;
 P1029 e_373;
 int *ok_374;
 int ok_374v;
 P1048 result_;
 P1048 a_1678;
 P1048 b_1679;
 int ok2_1680;
 P1022 op_1681;
 P1039 y_1684;
 P1048 r_1685;
};
struct f_float_op_380fr { int dummy;
 rstr *op_376;
 P1048 a_377;
 P1048 b_378;
 int *ok_379;
 int ok_379v;
 P1048 result_;
 P1048 r_1686;
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
 P1048 v_385;
 rstr result_;
};
struct f_ascii_char_388fr { int dummy;
 rt_int i_387;
 int result_;
 rstr printable_1689;
};
struct f_user_defined_390fr { int dummy;
 rstr *op_389;
 int result_;
 P1039 y_1690;
};
struct f_mcopy_392fr { int dummy;
 P1035 t_391;
 rstr result_;
 rstr ct_1691;
 rstr name_1692;
 P1033 l_1693;
};
struct f_composite_394fr { int dummy;
 P1035 t_393;
 int result_;
};
struct f_user_call2_400fr { int dummy;
 P1039 y_395;
 rstr *a_396;
 int lv_a_397;
 rstr *b_398;
 int lv_b_399;
 rstr result_;
 P1022 args_1695;
 rt_int i_1696;
};
struct f_user_arg_404fr { int dummy;
 P1041 pm_401;
 rstr *v_402;
 int lv_403;
 rstr result_;
 rstr ct_1700;
};
struct f_top_level_406fr { int dummy;
 P1039 y_405;
 int result_;
};
struct f_assign_code_411fr { int dummy;
 rstr *lval_407;
 P1035 t_408;
 rstr *v_409;
 P1031 c_410;
 rstr result_;
};
struct f_copy_code_414fr { int dummy;
 P1035 t_412;
 rstr *v_413;
 rstr result_;
};
struct f_eq_code_418fr { int dummy;
 P1035 t_415;
 rstr *a_416;
 rstr *b_417;
 rstr result_;
};
struct f_elem_assign_422fr { int dummy;
 rstr *lval_419;
 P1035 t_420;
 rstr *v_421;
 rstr result_;
};
struct f_seen_name_425fr { int dummy;
 P1033 l_423;
 rstr *s_424;
 int result_;
 P1033 p_1701;
};
struct f_emit_helpers_426fr { int dummy;
 P1035 order_1702;
 P1035 t_1703;
 P1033 done_1704;
 P1033 l_1705;
 rstr c_1706;
};
struct f_helper_bodies_428fr { int dummy;
 P1035 t_427;
 rstr c_1708;
 P1052 b_1709;
 P1035 e_1710;
 P1022 sizes_1711;
 P1022 bounds_1712;
 rt_int k_1713;
 rstr l_1717;
 rstr h_1718;
 P1033 saved_1719;
 P1029 p_1720;
 P1033 l1_1721;
 P1033 l2_1722;
 P1037 f_1725;
 rt_int i_1726;
 P1022 cases_as_1727;
 P1022 cases_cp_1728;
 P1022 cases_eq_1729;
 rstr fn_1730;
 P1037 f_1731;
 P1022 conds_1732;
 rstr fn_1733;
 rstr fn_1734;
};
struct f_declare_body_430fr { int dummy;
 P1029 elems_429;
 P1029 e_1735;
 P1039 g_1736;
 P1039 y_1737;
 P1039 y_1738;
 P1039 y_1739;
 P1035 t_1740;
 P1039 y_1741;
 P1039 y_1742;
 P1043 snap_1743;
 rt_int i_1747;
 P1039 g_1751;
 P1039 y_1752;
 P1039 y_1753;
};
struct f_manifest_const_432fr { int dummy;
 P1029 d_431;
 int ok_1754;
 P1048 v_1755;
 P1039 y_1756;
 P1035 t_1757;
 P1022 ctext_1758;
 P1052 saved_1759;
};
struct f_exported_436fr { int dummy;
 P1029 d_433;
 rstr *name_434;
 int *ro_435;
 int ro_435v;
 int result_;
 P1029 p_1762;
};
struct f_copy_sym_438fr { int dummy;
 P1039 y_437;
 P1039 result_;
 P1039 z_1763;
};
struct f_gen_capsule_440fr { int dummy;
 P1029 d_439;
 P1039 y_1765;
 P1022 saved_1766;
 P1029 p_1767;
 P1041 tail_1768;
 P1041 pm_1769;
};
struct f_imports_variables_442fr { int dummy;
 P1029 d_441;
 int result_;
};
struct f_elaborate_pending_444fr { int dummy;
 P1039 y_443;
 P1022 saved_1771;
};
struct f_pending_capsule_446fr { int dummy;
 rstr *name_445;
 int result_;
 P1039 y_1772;
};
struct f_capsule_params_450fr { int dummy;
 P1029 d_447;
 P1029 args_448;
 rt_int line_449;
 P1029 p_1773;
 P1029 a_1774;
 P1035 t_1775;
 P1035 vt_1776;
 P1031 c_1777;
 P1022 lv_1778;
 P1031 lc_1779;
 int ro_1780;
 P1039 y_1781;
 rstr f_1782;
 rstr g_1783;
 P1039 y_1784;
 rstr v_1785;
 rstr access_1786;
};
struct f_elaborate_capsule_455fr { int dummy;
 P1029 d_451;
 P1039 y_452;
 P1029 args_453;
 P1029 owner_454;
 P1056 cr_1787;
 P1046 ctx_1788;
 P1054 saved_gotos_1789;
 P1039 m_1790;
 P1029 p_1791;
 int ro_1792;
 P1058 w_1795;
 P1039 z_1797;
};
struct f_exports_op_458fr { int dummy;
 P1029 d_456;
 rstr *op_457;
 int result_;
 P1029 p_1798;
};
struct f_renamed_461fr { int dummy;
 P1029 d_459;
 P1039 z_460;
 P1022 result_;
 P1029 r_1799;
};
struct f_cap_tt_match_464fr { int dummy;
 P1029 f_462;
 P1029 a_463;
 int result_;
 P1029 x_1800;
 P1029 y_1801;
 int ok1_1802;
 int ok2_1803;
 P1048 v1_1804;
 P1048 v2_1805;
};
struct f_pick_capsule_466fr { int dummy;
 P1029 d_465;
 P1039 result_;
 P1039 y_1806;
 P1039 first_1807;
 P1039 fit_1808;
 rt_int n_1809;
};
struct f_capsule_instance_469fr { int dummy;
 P1039 g_467;
 P1029 d_468;
 P1039 result_;
 P1029 gd_1810;
 P1029 pat_1811;
 P1039 binds_1812;
 P1039 inst_1813;
 P1043 saved_env_1814;
 rt_int saved_gdepth_1815;
 P1039 b_1816;
};
struct f_configure_471fr { int dummy;
 P1039 y_470;
 P1039 m_1817;
 rstr n_1818;
};
struct f_gen_expose_473fr { int dummy;
 P1029 d_472;
 P1039 y_1819;
 P1039 m_1820;
 P1029 p_1821;
 P1029 r_1822;
 P1039 inst_1823;
 int found_1824;
 P1039 z_1825;
 int found_1826;
 P1039 z_1827;
};
struct f_finish_ptr_475fr { int dummy;
 P1035 t_474;
 P1029 d_1828;
 P1029 p_1829;
 P1031 c_1830;
 rstr dummy_1831;
 rt_int pass_1832;
 P1039 y_1836;
 P1031 pc_1837;
};
struct f_ptr_args_477fr { int dummy;
 P1031 c_476;
 P1029 result_;
};
struct f_bind_ptr_params_482fr { int dummy;
 P1029 formals_478;
 P1029 actuals_479;
 rstr *cell_480;
 rt_int line_481;
 P1029 p_1838;
 P1029 a_1839;
 P1035 vt_1840;
 P1031 pc_1841;
 P1039 y_1842;
 rstr v_1843;
 rstr pv_1844;
};
struct f_alloc_cell_487fr { int dummy;
 P1029 s_483;
 rstr *lv_484;
 P1035 t_485;
 P1031 c_486;
 P1029 d_1845;
 P1031 tc_1846;
 P1035 vt_1847;
 rstr pt_1848;
 rstr cell_1849;
 rstr fn_1850;
 rstr v_1851;
};
struct f_freeze_args_491fr { int dummy;
 P1031 c_488;
 P1035 t_489;
 rt_int line_490;
 P1031 result_;
 P1031 r_1852;
 P1029 p_1853;
 P1029 a_1854;
 P1029 head_1855;
 P1029 tail_1856;
 P1022 saved_1857;
 P1031 pc_1858;
 P1035 vt_1859;
 P1035 pt_1860;
 rstr nm_1861;
 P1039 y_1862;
 P1029 n_1863;
 rstr v_1864;
 rstr access_1865;
};
struct f_ptr_subtype_check_495fr { int dummy;
 P1035 t_492;
 P1031 c_493;
 P1029 src_494;
 P1022 lv_1866;
 P1035 st_1867;
 P1031 sc_1868;
 int ro_1869;
 P1022 cond_1870;
 P1029 a_1871;
 P1029 b_1872;
 P1035 at_1873;
 P1035 bt_1874;
 rstr x_1875;
 rstr y_1876;
};
struct f_normal_function_498fr { int dummy;
 P1029 d_496;
 P1039 y_497;
 P1041 p_1877;
 P1029 imp_1878;
 int ro_1879;
 P1039 z_1880;
};
struct f_foreign_body_501fr { int dummy;
 P1029 d_499;
 P1039 y_500;
 P1041 pm_1881;
 P1022 proto_1882;
 P1022 args_1883;
 rstr cn_1884;
};
struct f_declare_subprogram_503fr { int dummy;
 P1029 d_502;
};
struct f_build_subprogram_505fr { int dummy;
 P1029 d_504;
 P1039 result_;
 P1039 y_1885;
 P1029 p_1886;
 P1041 tail_1887;
 P1041 pm_1888;
 P1031 rc_1890;
 P1041 pm_1891;
 P1052 saved_1892;
 P1039 z_1893;
};
struct f_has_pragmat_508fr { int dummy;
 P1022 pr_506;
 rstr *p_507;
 int result_;
 rt_int i_1894;
};
struct f_suppressing_510fr { int dummy;
 P1022 pr_509;
 P1022 result_;
 P1022 r_1898;
 rt_int i_1899;
 rt_int j_1900;
 rt_int k_1901;
};
struct f_suppressed_512fr { int dummy;
 rstr *x_511;
 int result_;
 rstr w_1902;
 rt_int i_1903;
};
struct f_element_514fr { int dummy;
 P1029 e_513;
 P1022 saved_1907;
};
struct f_element1_516fr { int dummy;
 P1029 e_515;
 rt_int k_1908;
 P1039 g_1909;
 rt_int i_1913;
 P1031 c_1917;
 P1029 st_1918;
 P1035 t_1919;
 P1035 t_1920;
 rstr c_1921;
};
struct f_storage_519fr { int dummy;
 rstr *name_517;
 P1035 t_518;
 rstr result_;
 rstr g_1922;
 rstr f_1923;
};
struct f_bind_522fr { int dummy;
 P1039 y_520;
 rstr *access_521;
};
struct f_var_decl_524fr { int dummy;
 P1029 d_523;
};
struct f_located_var_526fr { int dummy;
 P1029 d_525;
 P1031 c_1924;
 P1035 at_1925;
 P1035 t_1926;
 P1039 y_1927;
 rstr addr_1928;
 rstr av_1929;
 rstr af_1930;
 rstr access_1931;
 P1035 vt_1932;
 rstr v_1933;
 rstr pv_1934;
 rstr pf_1935;
 P1035 vt_1936;
 rstr v_1937;
};
struct f_rep_sync_529fr { int dummy;
 P1039 y_527;
 int pack_528;
 rstr result_;
 rstr lv_1938;
 rstr base_1939;
 P1033 saved_1940;
 P1029 p_1941;
 P1022 r_1942;
 P1022 inner_1943;
 P1039 z_1944;
};
struct f_cbound_access_531fr { int dummy;
 P1039 y_530;
 rstr result_;
 P1031 c_1945;
};
struct f_rep_size_535fr { int dummy;
 P1029 items_532;
 P1035 t_533;
 P1031 c_534;
 rstr result_;
 P1029 it_1946;
 P1035 at_1947;
};
struct f_rep_find_538fr { int dummy;
 P1029 items_536;
 rstr *w_537;
 P1029 result_;
 P1029 it_1948;
};
struct f_rep_comp_541fr { int dummy;
 P1029 items_539;
 rstr *name_540;
 P1029 result_;
 P1029 r_1949;
 P1029 comp_1950;
};
struct f_default_bits_544fr { int dummy;
 P1035 t_542;
 P1031 c_543;
 rt_int result_;
 P1037 f_1951;
 rt_int n_1952;
};
struct f_rep_code_551fr { int dummy;
 P1035 t_545;
 P1031 c_546;
 P1029 items_547;
 rstr *lval_548;
 rstr *addr_549;
 int pack_550;
 rstr result_;
 rstr size_1953;
 P1037 f_1954;
 P1022 r_1955;
 P1022 off_1956;
 rt_int i_1957;
 P1029 ti_1958;
 P1022 tsize_1959;
 P1022 toff_1960;
 P1035 at_1961;
 P1029 ci_1962;
 P1022 fo_1963;
 rstr fl_1964;
 P1035 at_1965;
 rstr part_1966;
 P1029 ai_1967;
 P1029 ei_1968;
 rstr es_1969;
 rstr iv_1970;
 rstr iv_1971;
};
struct f_union_part_553fr { int dummy;
 P1035 t_552;
 rstr result_;
};
struct f_rep_scalar_560fr { int dummy;
 P1035 t_554;
 P1031 c_555;
 rstr *lval_556;
 rstr *addr_557;
 rstr *size_558;
 int pack_559;
 rstr result_;
 rstr signed_1972;
};
struct f_max_range_563fr { int dummy;
 P1035 t_561;
 P1031 c_562;
};
struct f_var_decl2_565fr { int dummy;
 P1029 d_564;
 P1031 c_1973;
 P1035 t_1974;
 P1039 y_1975;
 rstr access_1976;
 P1035 it_1977;
 rstr n_1978;
 P1035 vt_1979;
 rstr v_1980;
};
struct f_open_fin_567fr { int dummy;
 rstr *fc_566;
 rstr f_1981;
 P1033 l_1982;
};
struct f_close_fins_569fr { int dummy;
 P1033 saved_568;
};
struct f_const_decl_571fr { int dummy;
 P1029 d_570;
 P1031 c_1984;
 P1035 t_1985;
 P1035 vt_1986;
 P1039 y_1987;
 int ok_1988;
 rstr v_1989;
 rstr access_1990;
};
struct f_subprogram_573fr { int dummy;
 P1029 d_572;
};
struct f_gen_subprogram_576fr { int dummy;
 P1029 d_574;
 P1039 y_575;
 P1052 saved_code_1991;
 P1052 saved_fields_1992;
 int saved_in_1993;
 P1039 saved_sym_1994;
 P1054 saved_exits_1995;
 P1054 saved_gotos_1996;
 rt_int saved_frames_1997;
 P1022 args_1998;
 P1041 pm_1999;
 P1033 saved_handlers_2000;
 P1033 saved_cleanups_2001;
 P1046 ctx_2002;
 P1022 head_2003;
 P1022 frame_2004;
 P1022 parent_2005;
 P1022 copy_back_2006;
 P1022 pfin_2007;
 P1033 saved_fins_2008;
 P1031 saved_rc_2009;
 P1022 saved_ret_2010;
 P1022 saved_rflag_2011;
 P1029 pn_2012;
 P1022 nonrec_end_2013;
 int has_pfin_2014;
 rstr ct_2016;
 rstr f_2017;
 P1039 p_2018;
 P1031 pc_2019;
 P1031 ac_2020;
 P1031 fc_2021;
 P1035 ft_2022;
 rstr bt_2023;
 P1031 rc_2024;
 P1035 rt_2025;
 rstr g_2026;
 P1022 leave_2027;
 rstr xu_2028;
};
struct f_waits_of_578fr { int dummy;
 P1029 d_577;
 rstr result_;
 P1058 w_2029;
};
struct f_task_waits_580fr { int dummy;
 P1029 elems_579;
 rstr result_;
 P1029 e_2030;
 P1022 r_2031;
};
struct f_await_tasks_582fr { int dummy;
 P1029 elems_581;
 rstr w_2032;
};
struct f_capsule_elements_584fr { int dummy;
 P1029 elems_583;
 P1029 e_2033;
};
struct f_declare_labels_586fr { int dummy;
 P1029 elems_585;
 P1029 e_2034;
 P1029 l_2035;
 P1054 x_2036;
};
struct f_start_labels_587fr { int dummy;
 P1054 x_2038;
};
struct f_goto_label_589fr { int dummy;
 rstr *name_588;
 P1054 result_;
 P1054 x_2039;
};
struct f_has_return_591fr { int dummy;
 P1029 e_590;
 int result_;
 P1029 x_2040;
};
struct f_capsule_body_593fr { int dummy;
 P1029 elems_592;
 P1022 saved_ret_2041;
 P1022 saved_flag_2042;
 rt_int saved_frames_2043;
 P1029 e_2044;
 int stmt_2045;
};
struct f_body_elements_595fr { int dummy;
 P1029 elems_594;
};
struct f_gen_body_597fr { int dummy;
 P1029 elems_596;
 P1033 saved_2046;
 P1054 saved_gotos_2047;
 rstr xu_2048;
};
struct f_open_unhandled_599fr { int dummy;
 P1029 elems_598;
 rstr result_;
 P1029 e_2049;
 P1022 conds_2050;
 rstr f_2051;
};
struct f_close_unhandled_601fr { int dummy;
 rstr *xu_600;
 rt_int i_2052;
 rstr f_2053;
};
struct f_pop_frames_603fr { int dummy;
 rt_int upto_602;
 rt_int i_2054;
 P1033 c_2055;
};
struct f_push_cleanup_605fr { int dummy;
 rstr *s_604;
 P1033 c_2056;
};
struct f_pop_cleanup_606fr { int dummy;
};
struct f_gen_statement_608fr { int dummy;
 P1029 s_607;
 P1039 located_2058;
 P1039 l_2059;
};
struct f_located_in_611fr { int dummy;
 P1029 e_609;
 P1039 found_610;
 P1039 result_;
 P1029 x_2060;
 P1039 r_2061;
 P1039 y_2062;
};
struct f_sym_in_614fr { int dummy;
 P1039 l_612;
 P1039 y_613;
 int result_;
 P1039 p_2063;
};
struct f_gen_statement2_616fr { int dummy;
 P1029 s_615;
 P1022 label_2064;
 P1029 gl_2065;
 P1054 x_2066;
 P1054 x_2069;
};
struct f_st_assign_618fr { int dummy;
 P1029 s_617;
 P1022 lv_2070;
 P1035 t_2071;
 P1035 vt_2072;
 P1031 c_2073;
 int ro_2074;
 rstr lo_2075;
 rstr hi_2076;
 rstr v_2077;
 rstr lo_2078;
 rstr hi_2079;
 rstr v_2080;
 rstr v_2081;
};
struct f_st_call_620fr { int dummy;
 P1029 s_619;
 P1029 c_2082;
 P1035 t_2083;
 P1029 x_2084;
};
struct f_st_if_622fr { int dummy;
 P1029 s_621;
 P1029 a_2085;
 int first_2086;
 P1035 t_2087;
 int taken_2088;
 int ok_2089;
 P1048 mv_2090;
 rstr c_2091;
};
struct f_manifest_case_624fr { int dummy;
 P1029 s_623;
 int result_;
 int ok_2092;
 P1048 sv_2093;
 P1029 a_2094;
 P1029 lab_2095;
 P1048 lo_2096;
 P1048 hi_2097;
};
struct f_st_case_626fr { int dummy;
 P1029 s_625;
 P1035 st_2098;
 P1035 vt_2099;
 int first_2100;
 P1029 a_2101;
};
struct f_st_case2_628fr { int dummy;
 P1029 s_627;
 P1035 st_2102;
 P1035 vt_2103;
 int first_2104;
 P1029 a_2105;
 rstr sel_2106;
 rstr tmp_2107;
 P1029 lab_2108;
 P1022 conds_2109;
 rstr v_2110;
 rstr lo_2111;
 rstr hi_2112;
 rstr lo_2113;
 rstr hi_2114;
};
struct f_user_for_632fr { int dummy;
 P1029 s_629;
 P1035 t_630;
 P1031 c_631;
 P1039 y_2115;
 P1033 saved_2116;
 P1029 p_2117;
 P1029 iv_2118;
 P1035 st_2119;
 rstr access_2120;
 P1022 uv_2121;
 P1033 l1_2122;
 P1033 l2_2123;
 rstr lo_2126;
 rstr hi_2127;
};
struct f_st_repeat_634fr { int dummy;
 P1029 s_633;
 P1035 t_2128;
 P1031 c_2129;
 rstr cond_2130;
 rstr access_2131;
 rstr lov_2132;
 rstr hiv_2133;
 rstr it_2134;
 P1039 y_2135;
};
struct f_st_exit_636fr { int dummy;
 P1029 s_635;
 P1054 x_2136;
};
struct f_st_return_638fr { int dummy;
 P1029 s_637;
 P1035 vt_2137;
 rstr v_2138;
};
struct f_result_checked_642fr { int dummy;
 P1035 t_639;
 P1031 c_640;
 rstr *v_641;
 rstr result_;
};
struct f_exc_id_645fr { int dummy;
 rstr *name_643;
 rt_int line_644;
 rstr result_;
 P1039 y_2139;
};
struct f_st_guard_647fr { int dummy;
 P1029 s_646;
 P1029 h_2140;
 int first_2141;
 P1033 hv_2142;
 rstr f_2143;
 rstr x_2144;
 P1029 h1_2146;
 P1033 seen_2147;
 P1029 n1_2148;
 P1029 n_2149;
 P1022 conds_2150;
};
struct f_st_alloc_649fr { int dummy;
 P1029 s_648;
 P1022 lv_2151;
 P1035 t_2152;
 P1035 target_2153;
 P1035 vt_2154;
 P1031 c_2155;
 P1031 tc_2156;
 int ro_2157;
 P1029 d_2158;
 P1029 p_2159;
 P1029 a_2160;
 rstr tcn_2161;
 rstr cell_2162;
 rstr fn_2163;
 rstr v_2164;
};
struct f_act_ref_651fr { int dummy;
 P1029 e_650;
 rstr result_;
 P1022 lv_2165;
 P1035 t_2166;
 P1031 c_2167;
 int ro_2168;
 rstr v_2169;
};
struct f_st_create_653fr { int dummy;
 P1029 s_652;
 P1039 y_2170;
 P1041 pm_2171;
 P1029 a_2172;
 P1022 lv_2173;
 P1035 lt_2174;
 P1035 vt_2175;
 P1031 lc_2176;
 int ro_2177;
 P1035 at_2178;
 P1031 ac_2179;
 int aro_2180;
 P1022 act_2181;
 rstr nf_2182;
 P1022 link_2183;
 rt_int i_2184;
 rstr v_2188;
};
struct f_hidden_var_657fr { int dummy;
 rstr *name_654;
 P1035 t_655;
 rstr *place_656;
 P1039 y_2189;
};
struct f_user_create_663fr { int dummy;
 P1029 s_658;
 P1039 y_659;
 rstr *uv_660;
 P1035 ut_661;
 rstr *nf_662;
 P1035 t_2190;
 P1052 saved_2191;
 P1052 hook_2192;
 P1029 un_2193;
 rstr hn_2194;
 rstr aa_2195;
 rstr uname_2196;
 rstr aname_2197;
 P1029 start_2198;
 P1029 an_2199;
};
struct f_wait_alt_668fr { int dummy;
 P1029 inv_664;
 rstr *arr_665;
 rt_int i_666;
 int mixed_667;
 rstr result_;
 P1022 lv_2200;
 P1035 t_2201;
 P1035 vt_2202;
 P1031 c_2203;
 int ro_2204;
 P1029 fn_2205;
 P1029 args_2206;
 rstr slot_2207;
 P1022 dv_2208;
 P1035 dt_2209;
 rstr tmp_2210;
 rstr v_2211;
 rstr v_2212;
};
struct f_builtin_wait_670fr { int dummy;
 P1029 inv_669;
 int result_;
 P1022 lv_2213;
 P1035 t_2214;
 P1031 c_2215;
 int ro_2216;
 P1052 saved_2217;
 int ok_2218;
};
struct f_wait_op_675fr { int dummy;
 P1029 inv_671;
 rstr *op_672;
 rstr *q_673;
 int is_stmt_674;
 rstr result_;
 P1029 x_2221;
 P1029 f_2222;
 P1029 qn_2223;
 P1035 t_2224;
 rstr r_2225;
};
struct f_user_wait_680fr { int dummy;
 P1029 s_676;
 rstr *arr_677;
 rstr *w_678;
 rt_int n_679;
 P1029 a_2226;
 rt_int i_2227;
 P1022 tests_2228;
 P1022 revokes_2229;
 P1029 inv_2230;
 P1029 st_2231;
 P1031 c_2232;
 P1035 qt_2233;
 rstr qname_2234;
 P1039 y_2235;
 rstr access_2236;
};
struct f_st_wait_682fr { int dummy;
 P1029 s_681;
 P1029 a_2237;
 rt_int n_2238;
 int first_2239;
 P1052 inits_2240;
 int user_2241;
 rstr arr_2242;
 rstr w_2243;
 P1029 inv_2244;
 P1029 inv_2245;
 P1022 conds_2246;
 rt_int i_2247;
};
struct f_call_node_686fr { int dummy;
 rstr *name_683;
 P1029 arg_684;
 rt_int line_685;
 P1029 result_;
 P1029 x_2251;
 P1029 f_2252;
};
struct f_user_region_688fr { int dummy;
 P1029 s_687;
 P1035 t_2253;
 rstr f_2254;
 rstr lock_2255;
 rstr unlock_2256;
};
struct f_st_region_690fr { int dummy;
 P1029 s_689;
 P1022 lv_2257;
 P1035 t_2258;
 P1031 c_2259;
 int ro_2260;
 rstr lk_2261;
 rstr f_2262;
};
struct f_gparam_693fr { int dummy;
 P1029 g_691;
 rstr *name_692;
 P1029 result_;
 P1029 p_2263;
};
struct f_bind_sym_695fr { int dummy;
 P1029 p_694;
 P1039 result_;
 P1039 y_2264;
};
struct f_same_binds_698fr { int dummy;
 P1039 a_696;
 P1039 b_697;
 int result_;
 P1039 x_2265;
 P1039 y_2266;
};
struct f_same_binding_701fr { int dummy;
 P1039 a_699;
 P1039 b_700;
 int result_;
};
struct f_tt_binds_706fr { int dummy;
 P1029 gd_702;
 P1029 formals_703;
 P1029 actuals_704;
 rt_int line_705;
 P1039 result_;
 P1029 f_2267;
 P1029 a_2268;
 P1039 binds_2269;
 P1031 c_2270;
 P1035 at_2271;
 P1029 p_2272;
 P1039 b_2273;
 P1029 st_2274;
 int ok_2275;
 int ok_2276;
};
struct f_type_allowed_710fr { int dummy;
 P1035 t_707;
 P1029 items_708;
 P1039 binds_709;
 int result_;
 P1029 it_2277;
 P1035 b_2278;
 rstr w_2279;
 P1031 c_2280;
};
struct f_resolve_in_binds_714fr { int dummy;
 P1029 st_711;
 P1039 binds_712;
 P1031 *c_713;
 P1031 c_713v;
 P1035 result_;
 P1039 b_2281;
 P1035 t_2282;
 P1039 z_2283;
};
struct f_pick_operation_721fr { int dummy;
 rt_int kind_715;
 rstr *name_716;
 P1029 sig_717;
 P1029 res_718;
 P1039 binds_719;
 rt_int line_720;
 P1039 result_;
 P1039 y_2284;
 P1031 c_2285;
 rt_int want_2286;
 rt_int pass_2287;
 int ok_2291;
 P1029 s_2292;
 P1041 pm_2293;
};
struct f_kind_word_723fr { int dummy;
 rt_int kind_722;
 rstr result_;
};
struct f_need_binds_727fr { int dummy;
 P1029 gd_724;
 P1039 binds_725;
 rt_int line_726;
 P1039 result_;
 P1029 it_2294;
 P1039 r_2295;
 int found_2296;
 P1039 y_2297;
 P1039 z_2298;
};
struct f_generic_use_729fr { int dummy;
 P1029 st_728;
 int result_;
};
struct f_infer_from_734fr { int dummy;
 P1029 gd_730;
 P1029 pat_731;
 P1035 t_732;
 P1039 known_733;
 P1039 result_;
 P1039 binds_2299;
 P1029 e_2300;
 P1029 tp_2301;
 P1022 nm_2302;
 P1039 q_2303;
 int have_2304;
 P1039 g_2305;
 P1039 b_2306;
};
struct f_instantiate_type_740fr { int dummy;
 P1039 g_735;
 P1029 tt_736;
 P1029 args_737;
 P1031 *c_738;
 P1031 c_738v;
 rt_int line_739;
 P1035 result_;
 P1029 gd_2307;
 P1029 pat_2308;
 P1039 binds_2309;
 P1039 inst_2310;
 P1035 t_2311;
 P1056 saved_caps_2312;
 P1043 saved_env_2313;
 rt_int saved_gdepth_2314;
 P1039 b_2315;
 P1039 y_2316;
 P1031 yc_2317;
};
struct f_instantiate_745fr { int dummy;
 P1039 g_741;
 P1029 tt_742;
 P1029 args_743;
 rt_int line_744;
 P1039 result_;
 P1029 gd_2319;
 P1029 pat_2320;
 P1039 binds_2321;
 P1029 f_2322;
 P1029 a_2323;
 P1029 fp_2324;
 P1039 inst_2325;
 P1035 at_2326;
 P1031 c_2327;
 P1046 saved_fctx_2328;
 int saved_in_2329;
 rt_int saved_level_2330;
 P1039 saved_sym_2331;
 P1052 saved_code_2332;
 P1043 saved_env_2333;
 rt_int saved_gdepth_2334;
 rstr v_2335;
 int known_2336;
 P1039 q_2337;
 P1039 b_2338;
 rstr v_2339;
 P1039 b_2340;
};
struct f_access_of_747fr { int dummy;
 P1039 y_746;
 rstr result_;
 P1022 p_2341;
 rt_int i_2342;
};
struct f_import_of_750fr { int dummy;
 P1029 l_748;
 rstr *name_749;
 P1029 result_;
 P1029 p_2346;
};
struct f_check_import_753fr { int dummy;
 P1039 y_751;
 rt_int line_752;
 int result_;
 P1046 c_2347;
 int ro_2348;
 P1029 imp_2349;
};
struct f_c_ident_755fr { int dummy;
 rstr *s_754;
 rstr result_;
 P1022 r_2350;
 rt_int i_2351;
};
struct f_cell_deref_758fr { int dummy;
 P1035 t_756;
 rstr *p_757;
 rstr result_;
};
struct f_deref_761fr { int dummy;
 rstr *base_759;
 P1035 t_760;
 rstr result_;
};
struct f_is_lvalue_763fr { int dummy;
 P1029 e_762;
 int result_;
 P1039 y_2355;
};
struct f_lvalue_769fr { int dummy;
 P1029 e_764;
 P1022 *code_765;
 P1022 code_765v;
 P1035 *t_766;
 P1035 t_766v;
 P1031 *c_767;
 P1031 c_767v;
 int *ro_768;
 int ro_768v;
 P1022 base_2356;
 P1035 bt_2357;
 P1031 bc_2358;
 P1039 y_2359;
};
struct f_select_on_777fr { int dummy;
 rstr *base_770;
 P1035 bt_771;
 P1029 e_772;
 int *ro_773;
 P1022 *code_774;
 P1022 code_774v;
 P1035 *t_775;
 P1035 t_775v;
 P1031 *c_776;
 P1031 c_776v;
 P1029 p_2360;
 P1031 pc_2361;
 P1029 p_2362;
 P1037 f_2363;
 rt_int i_2364;
 rstr fn_2365;
 P1037 f_2366;
};
struct f_has_call_779fr { int dummy;
 rstr *s_778;
 int result_;
 rt_int i_2367;
};
struct f_need_slice_781fr { int dummy;
 P1035 t_780;
 rstr c_2371;
 rstr n_2372;
 P1033 l_2373;
};
struct f_ix_785fr { int dummy;
 rstr *i_782;
 rstr *lo_783;
 rstr *hi_784;
 rstr result_;
};
struct f_index_on_794fr { int dummy;
 rstr *base_786;
 P1035 bt_787;
 P1029 e_788;
 int *ro_789;
 int lv_790;
 P1022 *code_791;
 P1022 code_791v;
 P1035 *t_792;
 P1035 t_792v;
 P1031 *c_793;
 P1031 c_793v;
 P1029 a_2375;
 P1035 it_2376;
 rstr lo_2377;
 rstr hi_2378;
 P1022 off_2379;
 rt_int k_2380;
 P1022 b_2381;
 P1022 pre_2382;
 rstr i_2383;
 rstr l_2384;
 rstr h_2385;
 rstr lo_2386;
 rstr hi_2387;
 rstr i_2388;
};
struct f_own_attribute_796fr { int dummy;
 P1029 e_795;
 int result_;
 P1052 saved_2389;
 P1035 bt_2390;
 int ok_2391;
 rstr base_2394;
 P1029 p_2395;
 P1037 f_2396;
};
struct f_gexpr_800fr { int dummy;
 P1029 e_797;
 P1035 want_798;
 P1035 *t_799;
 P1035 t_799v;
 rstr result_;
 rt_int k_2397;
 P1022 code_2398;
 P1031 c_2399;
 int ro_2400;
 P1035 bt_2401;
 P1031 ctx_2402;
 int whole_2403;
 P1022 r_2404;
 rt_int i_2405;
 rt_int pos_2409;
 rt_int i_2410;
 P1039 y_2411;
 int ro_2412;
 P1029 call_2413;
 P1029 fname_2414;
 rstr a_2415;
 rstr a_2416;
 rstr a_2417;
 P1029 nm_2418;
 P1039 y_2419;
 rstr base_2420;
 rstr base_2421;
};
struct f_resolved_803fr { int dummy;
 P1029 e_801;
 P1035 *t_802;
 P1035 t_802v;
 rstr result_;
 P1031 c_2422;
 P1035 vt_2423;
 P1039 y_2424;
 P1029 tt_2425;
 P1029 call_2426;
 P1029 f_2427;
 P1029 fname_2428;
 rstr v_2429;
};
struct f_gexpr_base_806fr { int dummy;
 P1029 e_804;
 P1035 *t_805;
 P1035 t_805v;
 rstr result_;
};
struct f_gexpr_in_811fr { int dummy;
 P1029 e_807;
 P1035 want_808;
 P1031 c_809;
 P1035 *t_810;
 P1035 t_810v;
 rstr result_;
};
struct f_ascii_lit_813fr { int dummy;
 int ch_812;
 rstr result_;
 P1029 l_2430;
 rt_int i_2431;
};
struct f_octal_815fr { int dummy;
 rt_int n_814;
 rstr result_;
 rstr r_2435;
};
struct f_str_cat_part_817fr { int dummy;
 P1035 t_816;
 P1035 result_;
};
struct f_peek_type_819fr { int dummy;
 P1029 e_818;
 P1035 result_;
 P1052 saved_2436;
 P1035 t_2437;
 rstr v_2440;
};
struct f_set_operands_822fr { int dummy;
 P1029 e_820;
 P1035 want_821;
 P1035 result_;
 P1035 t_2441;
};
struct f_user_dot_824fr { int dummy;
 P1029 e_823;
 P1029 result_;
 P1029 arg_2442;
};
struct f_user_subscript_826fr { int dummy;
 P1029 e_825;
 P1029 result_;
 P1022 name_2443;
 P1029 args_2444;
 P1029 tail_2445;
 P1029 a_2446;
};
struct f_op_call_830fr { int dummy;
 rstr *name_827;
 P1029 args_828;
 rt_int line_829;
 P1029 result_;
 P1029 call_2447;
 P1029 f_2448;
};
struct f_derived_relation_832fr { int dummy;
 P1029 e_831;
 P1029 result_;
 P1029 l_2449;
 P1029 r_2450;
 int has_eq_2451;
 int has_lt_2452;
};
struct f_rel_node_837fr { int dummy;
 rstr *op_833;
 P1029 a_834;
 P1029 b_835;
 rt_int line_836;
 P1029 result_;
};
struct f_rel_not_840fr { int dummy;
 P1029 x_838;
 rt_int line_839;
 P1029 result_;
 P1029 n_2453;
};
struct f_copy_node_842fr { int dummy;
 P1029 e_841;
 P1029 result_;
 P1029 x_2454;
};
struct f_wrap_apply_844fr { int dummy;
 P1029 e_843;
 P1029 result_;
 P1029 x_2456;
};
struct f_c_string_846fr { int dummy;
 rstr *s_845;
 rstr result_;
 rt_int n_2457;
 rt_int i_2458;
 rstr r_2462;
 rt_int j_2463;
 rt_int i_2464;
};
struct f_enum_type_of_849fr { int dummy;
 rstr *lit_847;
 rt_int line_848;
 P1035 result_;
 P1039 y_2468;
 P1031 c_2469;
 P1029 st_2470;
};
struct f_ptr_attribute_851fr { int dummy;
 P1029 e_850;
 int result_;
 P1022 lv_2471;
 P1035 t_2472;
 P1031 c_2473;
 int ro_2474;
 P1029 p_2475;
 P1052 saved_2476;
};
struct f_attribute_854fr { int dummy;
 P1029 e_852;
 P1035 *t_853;
 P1035 t_853v;
 rstr result_;
 P1035 bt_2477;
 P1031 c_2478;
 P1022 base_2479;
 P1029 sub_2480;
 rstr name_2481;
 P1029 p_2482;
 P1029 a_2483;
 P1031 pc_2484;
 rstr v_2485;
 P1029 p_2486;
 P1029 a_2487;
 P1035 pt_2488;
 rstr v_2489;
};
struct f_subtype_compare_859fr { int dummy;
 P1029 sa_855;
 P1029 sb_856;
 rstr *op_857;
 rt_int line_858;
 rstr result_;
 P1031 ca_2490;
 P1031 cb_2491;
 P1035 ta_2492;
 P1035 tb_2493;
 P1022 r_2494;
 rstr yes_2495;
 rstr no_2496;
 rt_int k_2497;
 P1029 a_2501;
 P1029 b_2502;
 P1035 at_2503;
 P1035 bt2_2504;
 rstr x_2505;
 rstr y_2506;
};
struct f_float_prec_861fr { int dummy;
 P1031 c_860;
 rstr result_;
};
struct f_file_attribute_867fr { int dummy;
 P1029 e_862;
 P1035 bt_863;
 P1031 c_864;
 P1022 base_865;
 P1035 *t_866;
 P1035 t_866v;
 rstr result_;
};
struct f_gbinop_871fr { int dummy;
 P1029 e_868;
 P1035 want_869;
 P1035 *t_870;
 P1035 t_870v;
 rstr result_;
 P1022 op_2507;
 P1035 ta_2508;
 P1035 tb_2509;
 P1035 hint_2510;
 P1039 uy_2511;
 P1029 l_2512;
 P1029 r_2513;
 P1029 call_2514;
 P1029 fname_2515;
 rstr s_2516;
 rstr a_2517;
 rstr a_2518;
 rstr b_2519;
 rstr a_2520;
 rstr b_2521;
 P1035 at_2522;
 rstr a_2523;
 rstr b_2524;
 P1035 wa_2525;
 P1035 wb_2526;
 P1035 ws_2527;
 P1035 ce_2528;
 rstr a_2529;
 rstr b_2530;
 rstr dummy_2531;
 rstr a_2532;
 rstr b_2533;
 P1035 ct_2534;
 rstr a_2535;
 rstr b_2536;
};
struct f_constructor_876fr { int dummy;
 P1029 e_872;
 P1035 want_873;
 P1031 ctx_874;
 P1035 *t_875;
 P1035 t_875v;
 rstr result_;
 P1029 it_2537;
 P1037 f_2538;
 P1035 vt_2539;
 P1022 s_2540;
 rstr v_2541;
 rt_int i_2542;
 rstr tmp_2543;
 rstr v_2544;
 rstr tmp_2545;
 P1022 parts_2546;
 P1029 k_2547;
 P1022 shared_2548;
 rstr v_2549;
 rstr v_2550;
};
struct f_comp_value_880fr { int dummy;
 P1035 t_877;
 P1031 c_878;
 rstr *v_879;
 rstr result_;
 rstr ct_2551;
};
struct f_has_at_882fr { int dummy;
 rstr *s_881;
 int result_;
 rt_int i_2552;
};
struct f_set_elem_885fr { int dummy;
 P1035 st_883;
 rstr *v_884;
 rstr result_;
};
struct f_array_cons_890fr { int dummy;
 P1029 e_886;
 P1035 at_887;
 P1031 ctx_888;
 P1035 *t_889;
 P1035 t_889v;
 rstr result_;
 rstr tmp_2556;
 P1022 parts_2557;
 P1029 it_2558;
 int positional_2559;
 rt_int k_2560;
 P1022 lo_2564;
 P1022 hi_2565;
};
struct f_fill_items_896fr { int dummy;
 P1029 items_891;
 P1035 at_892;
 rstr *tmp_893;
 P1033 prefix_894;
 rt_int dim_895;
 rstr result_;
 P1029 it_2566;
 rt_int pos_2567;
 P1022 r_2568;
 P1035 vt_2569;
 rstr v_2570;
 P1029 k_2571;
 rt_int d_2572;
 P1033 pre_2573;
 P1022 loops_2574;
 P1022 ends_2575;
 rstr v_2576;
 rstr xv_2577;
 P1029 k_2578;
 rstr xv_2579;
 rstr v_2580;
};
struct f_e_line_898fr { int dummy;
 P1029 e_897;
 rt_int result_;
};
struct f_add_line_901fr { int dummy;
 P1033 l_899;
 rstr *s_900;
 P1033 result_;
 P1033 r_2581;
 P1033 tail_2582;
 P1033 x_2583;
 P1033 p_2584;
};
struct f_item_value_906fr { int dummy;
 P1029 e_902;
 P1035 at_903;
 rt_int line_904;
 P1035 *vt_905;
 P1035 vt_905v;
 rstr result_;
 rstr v_2587;
};
struct f_key_loop_911fr { int dummy;
 P1029 k_907;
 P1035 at_908;
 rt_int d_909;
 rstr *xv_910;
 rstr result_;
 P1035 it_2588;
 rstr lo_2589;
 rstr hi_2590;
};
struct f_store_at_916fr { int dummy;
 P1035 at_912;
 rstr *tmp_913;
 P1033 xs_914;
 rt_int n_915;
 rstr result_;
 P1022 off_2591;
 P1033 x_2592;
 rt_int k_2593;
 rstr l_2594;
 rstr h_2595;
};
struct f_fits_919fr { int dummy;
 P1039 y_917;
 P1029 args_918;
 int result_;
 P1029 a_2596;
 P1041 pm_2597;
 P1035 t_2598;
 P1052 saved_2599;
 int ok_2600;
 P1022 lv_2601;
 P1031 lc_2602;
 int ro_2603;
 rstr v_2606;
};
struct f_resolve_overload_925fr { int dummy;
 rstr *name_920;
 P1029 tt_921;
 P1029 args_922;
 int is_stmt_923;
 rt_int line_924;
 P1039 result_;
 P1039 y_2607;
 P1039 first_2608;
 rt_int n_2609;
 rt_int pass_2610;
};
struct f_tt_fits_928fr { int dummy;
 P1039 y_926;
 P1029 tt_927;
 int result_;
 P1029 f_2614;
 P1029 a_2615;
 P1052 saved_2616;
 int ok_2617;
 P1031 fc_2620;
 P1031 ac_2621;
 P1029 fst_2622;
 P1035 ft_2623;
 P1035 at_2624;
 P1029 ast_2625;
};
struct f_overload_chain_931fr { int dummy;
 rstr *name_929;
 rt_int pass_930;
 P1039 result_;
};
struct f_is_builtin_933fr { int dummy;
 rstr *n_932;
 int result_;
};
struct f_is_low_level_935fr { int dummy;
 rstr *n_934;
 int result_;
};
struct f_me_high_939fr { int dummy;
 P1029 tt_936;
 rt_int line_937;
 P1035 *t_938;
 P1035 t_938v;
 rstr result_;
 P1031 c_2626;
};
struct f_type_tag_941fr { int dummy;
 P1035 t_940;
 rstr result_;
};
struct f_lock_ref_944fr { int dummy;
 P1029 e_942;
 rstr *name_943;
 rstr result_;
 P1022 lv_2627;
 P1035 t_2628;
 P1031 c_2629;
 int ro_2630;
};
struct f_user_op_947fr { int dummy;
 rstr *op_945;
 P1029 args_946;
 P1039 result_;
 P1039 y_2631;
 rt_int pass_2632;
};
struct f_gcall_951fr { int dummy;
 P1029 e_948;
 int is_stmt_949;
 P1035 *t_950;
 P1035 t_950v;
 rstr result_;
 P1029 gd_2636;
 P1029 fn_2637;
 P1029 tt_2638;
 P1039 y_2639;
 P1022 args_2640;
 P1029 a_2641;
 P1041 pm_2642;
 P1035 lt_2643;
 P1035 vt_2644;
 P1022 lv_2645;
 P1031 lc_2646;
 int ro_2647;
 P1039 alt_2648;
 P1056 cr_2649;
 rt_int i_2650;
 rstr v_2654;
 rstr ct_2655;
 rstr v_2656;
 rstr chk_2657;
};
struct f_requires_953fr { int dummy;
 P1039 y_952;
 P1033 result_;
 P1029 imp_2658;
};
struct f_add_req_956fr { int dummy;
 P1039 y_954;
 rstr *name_955;
 P1033 l_2659;
};
struct f_require_calls_959fr { int dummy;
 P1039 y_957;
 P1029 e_958;
 P1029 x_2661;
 P1029 callee_2662;
 P1039 z_2663;
 P1033 l_2664;
};
struct f_declared_in_962fr { int dummy;
 P1029 elems_960;
 rstr *name_961;
 int result_;
 P1029 e_2665;
};
struct f_check_requires_965fr { int dummy;
 P1039 y_963;
 rt_int line_964;
 P1033 l_2666;
 P1039 z_2667;
};
struct f_act_delay_args_967fr { int dummy;
 P1029 args_966;
 rstr result_;
 P1035 at_2668;
 P1035 t1_2669;
 rstr a_2670;
 rstr v_2671;
 rstr v_2672;
};
struct f_same_subtypes_970fr { int dummy;
 P1029 gd_968;
 P1029 args_969;
 rstr result_;
 P1029 p_2673;
 P1022 r_2674;
 P1029 fp_2675;
 P1029 a_2676;
 P1022 flo_2677;
 P1022 fhi_2678;
 P1035 st_2679;
 P1031 c_2680;
 P1022 base_2681;
 P1022 lo_2682;
 P1022 hi_2683;
};
struct f_mailbox_low_975fr { int dummy;
 rstr *name_971;
 P1029 args_972;
 rt_int line_973;
 P1035 *t_974;
 P1035 t_974v;
 rstr result_;
 P1022 qv_2684;
 P1022 mv_2685;
 P1022 dv_2686;
 P1035 qt_2687;
 P1035 mt_2688;
 P1035 dt_2689;
 P1035 at_2690;
 P1031 c_2691;
 int ro_2692;
 int send_2693;
 rstr v_2694;
};
struct f_exponent_want_978fr { int dummy;
 rstr *op_976;
 P1035 ta_977;
 P1035 result_;
};
struct f_file_ref_982fr { int dummy;
 P1029 e_979;
 int text_980;
 rt_int line_981;
 rstr result_;
 P1035 t_2695;
 rstr f_2696;
};
struct f_text_file_984fr { int dummy;
 P1035 t_983;
 int result_;
};
struct f_conversion_989fr { int dummy;
 P1029 tt_985;
 P1029 args_986;
 rt_int line_987;
 P1035 *t_988;
 P1035 t_988v;
 rstr result_;
 P1031 c_2697;
 P1035 at_2698;
 P1035 target_2699;
 rstr a_2700;
 P1022 r_2701;
};
struct f_float_digits_991fr { int dummy;
 P1029 e_990;
 rstr result_;
 P1022 lv_2702;
 P1035 t_2703;
 P1031 c_2704;
 int ro_2705;
 rt_int n_2706;
 int lead_2707;
 rt_int i_2708;
 P1052 saved_2712;
};
struct f_enum_names_993fr { int dummy;
 P1035 t_992;
 rstr result_;
 P1029 l_2713;
 P1022 r_2714;
};
struct f_explicit_rep_995fr { int dummy;
 P1029 e_994;
 int result_;
 P1035 bt_2715;
};
struct f_actual_bounds_999fr { int dummy;
 P1035 ft_996;
 P1035 t_997;
 P1031 c_998;
 rstr result_;
};
struct f_builtin_1006fr { int dummy;
 rstr *name_1000;
 P1029 tt_1001;
 P1029 args_1002;
 rt_int line_1003;
 int is_stmt_1004;
 P1035 *t_1005;
 P1035 t_1005v;
 rstr result_;
 P1035 at_2716;
 rt_int n_2717;
 rstr a_2718;
 rstr a_2719;
 rstr a_2720;
 rstr a_2721;
 rstr a_2722;
 rstr a_2723;
 rstr a_2724;
 rstr n1_2725;
 rstr m1_2726;
 rstr a_2727;
 rstr f_2728;
 rstr a_2729;
 rstr a_2730;
 P1035 ft_2731;
 rstr f_2732;
 P1022 lv_2733;
 P1031 lc_2734;
 int ro_2735;
 rstr a_2736;
 P1022 lv_2737;
 P1031 lc_2738;
 int ro_2739;
 rstr f_2740;
 P1022 lv_2741;
 P1031 lc_2742;
 int ro_2743;
 rstr f_2744;
 rstr nm_2745;
 rstr st_2746;
 rstr f_2747;
 rstr d_2748;
 rstr f_2749;
 rstr v_2750;
 rstr a_2751;
 rstr b_2752;
 P1022 lv_2753;
 P1022 dv_2754;
 P1031 lc_2755;
 int ro_2756;
 P1035 mt_2757;
 P1035 dt_2758;
 rstr v_2759;
 P1022 lv_2760;
 P1031 lc_2761;
 int ro_2762;
 P1035 mt_2763;
 P1022 lv_2764;
 P1022 dv_2765;
 P1022 bv_2766;
 P1031 lc_2767;
 int ro_2768;
 P1035 mt_2769;
 P1035 dt_2770;
 P1035 bt_2771;
 rstr v_2772;
 rstr v_2773;
 rstr v_2774;
 rstr v_2775;
 rstr a_2776;
 P1022 bv_2777;
 P1031 bc_2778;
 int ro_2779;
 P1035 bt_2780;
 rstr l_2781;
 P1022 pv_2782;
 P1031 pc_2783;
 int ro_2784;
 P1035 pt_2785;
 rstr dev_2786;
 rstr cmd_2787;
 rstr v_2788;
 P1022 dv_2789;
 P1031 dc_2790;
 int ro_2791;
 P1035 dt_2792;
};
struct f_with_library_1008fr { int dummy;
 P1029 units_1007;
 P1029 result_;
 P1029 r_2793;
 int more_2794;
 P1022 missing_2795;
 rt_int saved_2796;
 P1029 lib_2797;
 P1029 t_2798;
};
struct f_external_missing_1011fr { int dummy;
 P1029 e_1009;
 P1029 units_1010;
 P1022 result_;
 P1029 x_2799;
 P1022 r_2800;
 P1022 r_2801;
};
struct f_unit_named_1014fr { int dummy;
 P1029 units_1012;
 rstr *name_1013;
 int result_;
 P1029 u_2802;
};
struct f_tried_1016fr { int dummy;
 rstr *name_1015;
 int result_;
};
struct f_mark_tried_1018fr { int dummy;
 rstr *name_1017;
 P1033 l_2803;
};
struct f_translate_1020fr { int dummy;
 P1029 units_1019;
 P1029 u_2805;
 P1029 l_2807;
 rstr w_2808;
};
struct f_print_program_1021fr { int dummy;
};
struct Pc1023 { rt_int p_n; rstr all; };
struct Pc1027 { rt_int p_n; A1028 all; };
struct Pc1044 { rt_int p_n; A1045 all; };
static void as_R1059(R1059 *d, R1059 s);
static R1059 cp_R1059(R1059 s);
static int eq_R1059(R1059 a, R1059 b);
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
static void as_A1045(A1045 *d, A1045 s);
static A1045 cp_A1045(A1045 s);
static int eq_A1045(A1045 a, A1045 b);
static void as_R1042(R1042 *d, R1042 s);
static R1042 cp_R1042(R1042 s);
static int eq_R1042(R1042 a, R1042 b);
static void as_R1040(R1040 *d, R1040 s);
static R1040 cp_R1040(R1040 s);
static int eq_R1040(R1040 a, R1040 b);
static void as_R1038(R1038 *d, R1038 s);
static R1038 cp_R1038(R1038 s);
static int eq_R1038(R1038 a, R1038 b);
static void as_R1036(R1036 *d, R1036 s);
static R1036 cp_R1036(R1036 s);
static int eq_R1036(R1036 a, R1036 b);
static void as_R1034(R1034 *d, R1034 s);
static R1034 cp_R1034(R1034 s);
static int eq_R1034(R1034 a, R1034 b);
static void as_R1032(R1032 *d, R1032 s);
static R1032 cp_R1032(R1032 s);
static int eq_R1032(R1032 a, R1032 b);
static void as_R1030(R1030 *d, R1030 s);
static R1030 cp_R1030(R1030 s);
static int eq_R1030(R1030 a, R1030 b);
static void as_A1028(A1028 *d, A1028 s);
static A1028 cp_A1028(A1028 s);
static int eq_A1028(A1028 a, A1028 b);
static void as_R1025(R1025 *d, R1025 s);
static R1025 cp_R1025(R1025 s);
static int eq_R1025(R1025 a, R1025 b);
static P1022 f_mk_3(rstr *s_2);
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
static P1052 f_new_buffer_24(void);
static void f_put_27(P1052 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P1052 b_30);
static void f_splice_34(P1052 a_32, P1052 b_33);
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
static void f_write_library_62(P1029 u_61);
static P1029 f_nn_65(rt_int kind_63, rt_int line_64);
static void f_append_69(P1029 *head_66, P1029 *tail_67, P1029 x_68);
static rt_int f_list_len_71(P1029 l_70);
static rt_int f_cur_line_72(void);
static int f_at_kw_74(rstr *w_73);
static int f_at_op_76(rstr *w_75);
static int f_at_kind_78(rt_int k_77);
static rt_int f_kind_at_80(rt_int k_79);
static P1022 f_text_at_82(rt_int k_81);
static void f_perror_84(rstr *msg_83);
static int f_accept_kw_86(rstr *w_85);
static int f_accept_op_88(rstr *w_87);
static void f_expect_kw_90(rstr *w_89);
static void f_expect_op_92(rstr *w_91);
static P1022 f_expect_id_93(void);
static P1029 f_name_node_94(void);
static P1029 f_id_list_95(void);
static P1029 f_p_subtype_96(void);
static P1029 f_constraint_list_97(void);
static P1029 f_actual_params_98(void);
static int f_is_type_word_100(rstr *w_99);
static P1029 f_actual_tt_101(void);
static P1029 f_binop_106(P1022 op_102, P1029 l_103, P1029 r_104, rt_int line_105);
static P1029 f_expr_107(void);
static P1029 f_expr_and_108(void);
static P1029 f_expr_not_109(void);
static int f_is_rel_111(rstr *s_110);
static P1029 f_expr_rel_112(void);
static P1029 f_expr_add_113(void);
static P1029 f_expr_mul_114(void);
static P1029 f_expr_pow_115(void);
static P1029 f_expr_prefix_116(void);
static P1029 f_postfix_117(void);
static P1029 f_primary_118(void);
static P1029 f_constructor_item_119(void);
static int f_at_body_end_120(void);
static P1029 f_body_121(void);
static P1029 f_body_element_122(void);
static P1029 f_declaration_123(void);
static P1029 f_object_decl_124(void);
static P1029 f_abbrev_decl_125(void);
static P1029 f_rep_spec_126(void);
static P1029 f_rep_items_127(void);
static int f_rep_word_129(rt_int k_128);
static P1029 f_rep_item_130(void);
static P1029 f_type_decl_131(void);
static rt_int f_mode_of_133(rstr *w_132);
static P1029 f_formal_params_134(void);
static int f_imports_list_136(P1029 owner_135);
static int f_is_definable_138(rstr *w_137);
static P1022 f_definable_name_139(void);
static P1029 f_subprogram_decl_140(void);
static P1029 f_capsule_decl_141(void);
static P1029 f_formal_tt_142(void);
static P1029 f_generic_decl_143(void);
static P1029 f_type_list_144(void);
static P1029 f_task_decl_145(void);
static P1029 f_expose_decl_146(void);
static int f_is_compound_kw_148(rstr *w_147);
static P1029 f_statement_149(void);
static P1029 f_unlabeled_statement_150(void);
static P1029 f_arm_154(P1029 cond_151, P1029 b_152, rt_int line_153);
static P1029 f_if_stmt_155(void);
static P1029 f_case_stmt_156(void);
static P1029 f_repeat_stmt_157(void);
static P1029 f_guard_stmt_158(void);
static P1029 f_program_159(void);
static rt_int f_hash_161(rstr *s_160);
static P1039 f_lookup_163(rstr *name_162);
static P1039 f_lookup_decl_165(P1029 d_164);
static void f_define_168(P1039 y_166, rt_int line_167);
static int f_overloadable_170(P1039 y_169);
static int f_same_tt_173(P1029 a_171, P1029 b_172);
static int f_same_signature_176(P1041 a_174, P1041 b_175);
static void f_open_scope_177(void);
static void f_close_scope_178(void);
static P1039 f_new_sym_181(rt_int kind_179, P1022 name_180);
static P1035 f_new_typ_183(rt_int kind_182);
static P1031 f_new_cons_184(void);
static int f_scalar_kind_186(P1035 t_185);
static rstr f_bound_ctype_188(P1035 t_187);
static rstr f_cbound_191(P1031 c_189, rstr *b_190);
static rstr f_clo_193(P1031 c_192);
static rstr f_chi_195(P1031 c_194);
static rstr f_sub_lo_198(P1035 t_196, P1031 c_197);
static rstr f_sub_hi_201(P1035 t_199, P1031 c_200);
static rstr f_raw_storage_204(rstr *name_202, rstr *ct_203);
static P1031 f_copy_cons_206(P1031 c_205);
static P1031 f_freeze_209(P1031 c_207, P1035 t_208);
static rstr f_checked_213(P1035 t_210, P1031 c_211, rstr *v_212);
static int f_same_lits_216(P1029 a_214, P1029 b_215);
static P1035 f_str_elem_218(P1035 t_217);
static int f_same_221(P1035 a_219, P1035 b_220);
static P1035 f_base_of_223(P1035 t_222);
static P1031 f_base_cons_226(P1035 t_224, P1031 c_225);
static rstr f_kind_name_228(P1035 t_227);
static void f_check_type_232(P1035 got_229, P1035 want_230, rt_int line_231);
static rstr f_ctype_234(P1035 t_233);
static rstr f_struct_body_236(P1035 t_235);
static rstr f_field_decls_238(P1035 t_237);
static void f_declare_ctype_240(P1035 t_239);
static rstr f_dim_lo_242(rt_int k_241);
static rstr f_dim_hi_244(rt_int k_243);
static rstr f_more_dims_246(P1035 t_245);
static rstr f_acnt_249(P1035 t_247, rstr *base_248);
static P1022 f_cons_lo_252(P1031 c_250, rt_int k_251);
static P1022 f_cons_hi_255(P1031 c_253, rt_int k_254);
static P1035 f_idx_type_258(P1035 t_256, rt_int k_257);
static void f_init_ascii_259(void);
static P1035 f_enum2_262(rstr *a_260, rstr *b_261);
static rt_int f_lit_index_265(P1029 lits_263, rstr *name_264);
static P1035 f_resolve_subtype_268(P1029 st_266, P1031 *c_267);
static int f_float_lit_270(P1029 e_269);
static void f_tag_constraint_274(P1035 t_271, P1029 e_272, P1031 c_273);
static P1035 f_named_subtype_277(P1029 st_275, P1031 *c_276);
static P1035 f_invoke_abbrev_281(P1039 y_278, P1029 st_279, P1031 *c_280);
static void f_apply_constraint_286(P1035 t_282, P1029 args_283, P1031 c_284, rt_int line_285);
static P1035 f_value_subtype_290(P1029 e_287, P1031 *c_288, P1022 *base_289);
static P1033 f_reverse_pairs_292(P1033 l_291);
static P1035 f_inquiry_295(P1029 st_293, P1031 *c_294);
static P1029 f_as_subtype_297(P1029 e_296);
static P1029 f_tt_subtype_302(P1022 name_298, P1029 tt_299, P1029 args_300, rt_int line_301);
static int f_type_name_304(rstr *name_303);
static rstr f_empty_set_306(P1035 t_305);
static int f_opened_308(P1035 t_307);
static rstr f_replace_all_312(rstr *s_309, rstr *pat_310, rstr *r_311);
static rstr f_subst_314(rstr *s_313);
static P1035 f_new_type_318(P1039 y_315, P1029 st_316, P1031 *c_317);
static rt_int f_needed_bits_321(P1035 t_319, P1031 c_320);
static int f_has_digits_only_323(rstr *s_322);
static int f_built_in_only_325(P1035 t_324);
static void f_check_rep_332(P1029 items_326, P1035 t_327, P1031 c_328, int top_329, int indirect_330, P1029 d_331);
static int f_formal_named_335(P1029 d_333, rstr *name_334);
static int f_unchecked_free_337(P1035 t_336);
static void f_init_storage_341(rstr *lval_338, P1035 t_339, P1031 c_340);
static rstr f_init_call_344(P1039 y_342, rstr *lval_343);
static int f_needs_fin_346(P1035 t_345);
static rstr f_fin_code_349(rstr *lval_347, P1035 t_348);
static P1035 f_tparam_type_352(P1035 t_350, rstr *name_351);
static void f_make_storage_356(rstr *lval_353, P1035 t_354, P1031 c_355);
static int f_flat_358(P1035 t_357);
static rstr f_uninit_value_360(P1035 t_359);
static rstr f_init_chk_363(P1035 t_361, rstr *v_362);
static rt_int f_manifest_366(P1029 e_364, int *ok_365);
static P1048 f_mk_mval_369(rt_int kind_367, rt_int i_368);
static rt_int f_ipow_372(rt_int a_370, rt_int b_371);
static P1048 f_meval_375(P1029 e_373, int *ok_374);
static P1048 f_float_op_380(rstr *op_376, P1048 a_377, P1048 b_378, int *ok_379);
static rstr f_bool_text_382(int b_381);
static rt_int f_bool_i_384(int b_383);
static rstr f_mstr_386(P1048 v_385);
static int f_ascii_char_388(rt_int i_387);
static int f_user_defined_390(rstr *op_389);
static rstr f_mcopy_392(P1035 t_391);
static int f_composite_394(P1035 t_393);
static rstr f_user_call2_400(P1039 y_395, rstr *a_396, int lv_a_397, rstr *b_398, int lv_b_399);
static rstr f_user_arg_404(P1041 pm_401, rstr *v_402, int lv_403);
static int f_top_level_406(P1039 y_405);
static rstr f_assign_code_411(rstr *lval_407, P1035 t_408, rstr *v_409, P1031 c_410);
static rstr f_copy_code_414(P1035 t_412, rstr *v_413);
static rstr f_eq_code_418(P1035 t_415, rstr *a_416, rstr *b_417);
static rstr f_elem_assign_422(rstr *lval_419, P1035 t_420, rstr *v_421);
static int f_seen_name_425(P1033 l_423, rstr *s_424);
static void f_emit_helpers_426(void);
static void f_helper_bodies_428(P1035 t_427);
static void f_declare_body_430(P1029 elems_429);
static void f_manifest_const_432(P1029 d_431);
static int f_exported_436(P1029 d_433, rstr *name_434, int *ro_435);
static P1039 f_copy_sym_438(P1039 y_437);
static void f_gen_capsule_440(P1029 d_439);
static int f_imports_variables_442(P1029 d_441);
static void f_elaborate_pending_444(P1039 y_443);
static int f_pending_capsule_446(rstr *name_445);
static void f_capsule_params_450(P1029 d_447, P1029 args_448, rt_int line_449);
static void f_elaborate_capsule_455(P1029 d_451, P1039 y_452, P1029 args_453, P1029 owner_454);
static int f_exports_op_458(P1029 d_456, rstr *op_457);
static P1022 f_renamed_461(P1029 d_459, P1039 z_460);
static int f_cap_tt_match_464(P1029 f_462, P1029 a_463);
static P1039 f_pick_capsule_466(P1029 d_465);
static P1039 f_capsule_instance_469(P1039 g_467, P1029 d_468);
static void f_configure_471(P1039 y_470);
static void f_gen_expose_473(P1029 d_472);
static void f_finish_ptr_475(P1035 t_474);
static P1029 f_ptr_args_477(P1031 c_476);
static void f_bind_ptr_params_482(P1029 formals_478, P1029 actuals_479, rstr *cell_480, rt_int line_481);
static void f_alloc_cell_487(P1029 s_483, rstr *lv_484, P1035 t_485, P1031 c_486);
static P1031 f_freeze_args_491(P1031 c_488, P1035 t_489, rt_int line_490);
static void f_ptr_subtype_check_495(P1035 t_492, P1031 c_493, P1029 src_494);
static void f_normal_function_498(P1029 d_496, P1039 y_497);
static void f_foreign_body_501(P1029 d_499, P1039 y_500);
static void f_declare_subprogram_503(P1029 d_502);
static P1039 f_build_subprogram_505(P1029 d_504);
static int f_has_pragmat_508(P1022 pr_506, rstr *p_507);
static P1022 f_suppressing_510(P1022 pr_509);
static int f_suppressed_512(rstr *x_511);
static void f_element_514(P1029 e_513);
static void f_element1_516(P1029 e_515);
static rstr f_storage_519(rstr *name_517, P1035 t_518);
static void f_bind_522(P1039 y_520, rstr *access_521);
static void f_var_decl_524(P1029 d_523);
static void f_located_var_526(P1029 d_525);
static rstr f_rep_sync_529(P1039 y_527, int pack_528);
static rstr f_cbound_access_531(P1039 y_530);
static rstr f_rep_size_535(P1029 items_532, P1035 t_533, P1031 c_534);
static P1029 f_rep_find_538(P1029 items_536, rstr *w_537);
static P1029 f_rep_comp_541(P1029 items_539, rstr *name_540);
static rt_int f_default_bits_544(P1035 t_542, P1031 c_543);
static rstr f_rep_code_551(P1035 t_545, P1031 c_546, P1029 items_547, rstr *lval_548, rstr *addr_549, int pack_550);
static rstr f_union_part_553(P1035 t_552);
static rstr f_rep_scalar_560(P1035 t_554, P1031 c_555, rstr *lval_556, rstr *addr_557, rstr *size_558, int pack_559);
static void f_max_range_563(P1035 t_561, P1031 c_562);
static void f_var_decl2_565(P1029 d_564);
static void f_open_fin_567(rstr *fc_566);
static void f_close_fins_569(P1033 saved_568);
static void f_const_decl_571(P1029 d_570);
static void f_subprogram_573(P1029 d_572);
static void f_gen_subprogram_576(P1029 d_574, P1039 y_575);
static rstr f_waits_of_578(P1029 d_577);
static rstr f_task_waits_580(P1029 elems_579);
static void f_await_tasks_582(P1029 elems_581);
static void f_capsule_elements_584(P1029 elems_583);
static void f_declare_labels_586(P1029 elems_585);
static void f_start_labels_587(void);
static P1054 f_goto_label_589(rstr *name_588);
static int f_has_return_591(P1029 e_590);
static void f_capsule_body_593(P1029 elems_592);
static void f_body_elements_595(P1029 elems_594);
static void f_gen_body_597(P1029 elems_596);
static rstr f_open_unhandled_599(P1029 elems_598);
static void f_close_unhandled_601(rstr *xu_600);
static void f_pop_frames_603(rt_int upto_602);
static void f_push_cleanup_605(rstr *s_604);
static void f_pop_cleanup_606(void);
static void f_gen_statement_608(P1029 s_607);
static P1039 f_located_in_611(P1029 e_609, P1039 found_610);
static int f_sym_in_614(P1039 l_612, P1039 y_613);
static void f_gen_statement2_616(P1029 s_615);
static void f_st_assign_618(P1029 s_617);
static void f_st_call_620(P1029 s_619);
static void f_st_if_622(P1029 s_621);
static int f_manifest_case_624(P1029 s_623);
static void f_st_case_626(P1029 s_625);
static void f_st_case2_628(P1029 s_627);
static void f_user_for_632(P1029 s_629, P1035 t_630, P1031 c_631);
static void f_st_repeat_634(P1029 s_633);
static void f_st_exit_636(P1029 s_635);
static void f_st_return_638(P1029 s_637);
static rstr f_result_checked_642(P1035 t_639, P1031 c_640, rstr *v_641);
static rstr f_exc_id_645(rstr *name_643, rt_int line_644);
static void f_st_guard_647(P1029 s_646);
static void f_st_alloc_649(P1029 s_648);
static rstr f_act_ref_651(P1029 e_650);
static void f_st_create_653(P1029 s_652);
static void f_hidden_var_657(rstr *name_654, P1035 t_655, rstr *place_656);
static void f_user_create_663(P1029 s_658, P1039 y_659, rstr *uv_660, P1035 ut_661, rstr *nf_662);
static rstr f_wait_alt_668(P1029 inv_664, rstr *arr_665, rt_int i_666, int mixed_667);
static int f_builtin_wait_670(P1029 inv_669);
static rstr f_wait_op_675(P1029 inv_671, rstr *op_672, rstr *q_673, int is_stmt_674);
static void f_user_wait_680(P1029 s_676, rstr *arr_677, rstr *w_678, rt_int n_679);
static void f_st_wait_682(P1029 s_681);
static P1029 f_call_node_686(rstr *name_683, P1029 arg_684, rt_int line_685);
static void f_user_region_688(P1029 s_687);
static void f_st_region_690(P1029 s_689);
static P1029 f_gparam_693(P1029 g_691, rstr *name_692);
static P1039 f_bind_sym_695(P1029 p_694);
static int f_same_binds_698(P1039 a_696, P1039 b_697);
static int f_same_binding_701(P1039 a_699, P1039 b_700);
static P1039 f_tt_binds_706(P1029 gd_702, P1029 formals_703, P1029 actuals_704, rt_int line_705);
static int f_type_allowed_710(P1035 t_707, P1029 items_708, P1039 binds_709);
static P1035 f_resolve_in_binds_714(P1029 st_711, P1039 binds_712, P1031 *c_713);
static P1039 f_pick_operation_721(rt_int kind_715, rstr *name_716, P1029 sig_717, P1029 res_718, P1039 binds_719, rt_int line_720);
static rstr f_kind_word_723(rt_int kind_722);
static P1039 f_need_binds_727(P1029 gd_724, P1039 binds_725, rt_int line_726);
static int f_generic_use_729(P1029 st_728);
static P1039 f_infer_from_734(P1029 gd_730, P1029 pat_731, P1035 t_732, P1039 known_733);
static P1035 f_instantiate_type_740(P1039 g_735, P1029 tt_736, P1029 args_737, P1031 *c_738, rt_int line_739);
static P1039 f_instantiate_745(P1039 g_741, P1029 tt_742, P1029 args_743, rt_int line_744);
static rstr f_access_of_747(P1039 y_746);
static P1029 f_import_of_750(P1029 l_748, rstr *name_749);
static int f_check_import_753(P1039 y_751, rt_int line_752);
static rstr f_c_ident_755(rstr *s_754);
static rstr f_cell_deref_758(P1035 t_756, rstr *p_757);
static rstr f_deref_761(rstr *base_759, P1035 t_760);
static int f_is_lvalue_763(P1029 e_762);
static void f_lvalue_769(P1029 e_764, P1022 *code_765, P1035 *t_766, P1031 *c_767, int *ro_768);
static void f_select_on_777(rstr *base_770, P1035 bt_771, P1029 e_772, int *ro_773, P1022 *code_774, P1035 *t_775, P1031 *c_776);
static int f_has_call_779(rstr *s_778);
static void f_need_slice_781(P1035 t_780);
static rstr f_ix_785(rstr *i_782, rstr *lo_783, rstr *hi_784);
static void f_index_on_794(rstr *base_786, P1035 bt_787, P1029 e_788, int *ro_789, int lv_790, P1022 *code_791, P1035 *t_792, P1031 *c_793);
static int f_own_attribute_796(P1029 e_795);
static rstr f_gexpr_800(P1029 e_797, P1035 want_798, P1035 *t_799);
static rstr f_resolved_803(P1029 e_801, P1035 *t_802);
static rstr f_gexpr_base_806(P1029 e_804, P1035 *t_805);
static rstr f_gexpr_in_811(P1029 e_807, P1035 want_808, P1031 c_809, P1035 *t_810);
static rstr f_ascii_lit_813(int ch_812);
static rstr f_octal_815(rt_int n_814);
static P1035 f_str_cat_part_817(P1035 t_816);
static P1035 f_peek_type_819(P1029 e_818);
static P1035 f_set_operands_822(P1029 e_820, P1035 want_821);
static P1029 f_user_dot_824(P1029 e_823);
static P1029 f_user_subscript_826(P1029 e_825);
static P1029 f_op_call_830(rstr *name_827, P1029 args_828, rt_int line_829);
static P1029 f_derived_relation_832(P1029 e_831);
static P1029 f_rel_node_837(rstr *op_833, P1029 a_834, P1029 b_835, rt_int line_836);
static P1029 f_rel_not_840(P1029 x_838, rt_int line_839);
static P1029 f_copy_node_842(P1029 e_841);
static P1029 f_wrap_apply_844(P1029 e_843);
static rstr f_c_string_846(rstr *s_845);
static P1035 f_enum_type_of_849(rstr *lit_847, rt_int line_848);
static int f_ptr_attribute_851(P1029 e_850);
static rstr f_attribute_854(P1029 e_852, P1035 *t_853);
static rstr f_subtype_compare_859(P1029 sa_855, P1029 sb_856, rstr *op_857, rt_int line_858);
static rstr f_float_prec_861(P1031 c_860);
static rstr f_file_attribute_867(P1029 e_862, P1035 bt_863, P1031 c_864, P1022 base_865, P1035 *t_866);
static rstr f_gbinop_871(P1029 e_868, P1035 want_869, P1035 *t_870);
static rstr f_constructor_876(P1029 e_872, P1035 want_873, P1031 ctx_874, P1035 *t_875);
static rstr f_comp_value_880(P1035 t_877, P1031 c_878, rstr *v_879);
static int f_has_at_882(rstr *s_881);
static rstr f_set_elem_885(P1035 st_883, rstr *v_884);
static rstr f_array_cons_890(P1029 e_886, P1035 at_887, P1031 ctx_888, P1035 *t_889);
static rstr f_fill_items_896(P1029 items_891, P1035 at_892, rstr *tmp_893, P1033 prefix_894, rt_int dim_895);
static rt_int f_e_line_898(P1029 e_897);
static P1033 f_add_line_901(P1033 l_899, rstr *s_900);
static rstr f_item_value_906(P1029 e_902, P1035 at_903, rt_int line_904, P1035 *vt_905);
static rstr f_key_loop_911(P1029 k_907, P1035 at_908, rt_int d_909, rstr *xv_910);
static rstr f_store_at_916(P1035 at_912, rstr *tmp_913, P1033 xs_914, rt_int n_915);
static int f_fits_919(P1039 y_917, P1029 args_918);
static P1039 f_resolve_overload_925(rstr *name_920, P1029 tt_921, P1029 args_922, int is_stmt_923, rt_int line_924);
static int f_tt_fits_928(P1039 y_926, P1029 tt_927);
static P1039 f_overload_chain_931(rstr *name_929, rt_int pass_930);
static int f_is_builtin_933(rstr *n_932);
static int f_is_low_level_935(rstr *n_934);
static rstr f_me_high_939(P1029 tt_936, rt_int line_937, P1035 *t_938);
static rstr f_type_tag_941(P1035 t_940);
static rstr f_lock_ref_944(P1029 e_942, rstr *name_943);
static P1039 f_user_op_947(rstr *op_945, P1029 args_946);
static rstr f_gcall_951(P1029 e_948, int is_stmt_949, P1035 *t_950);
static P1033 f_requires_953(P1039 y_952);
static void f_add_req_956(P1039 y_954, rstr *name_955);
static void f_require_calls_959(P1039 y_957, P1029 e_958);
static int f_declared_in_962(P1029 elems_960, rstr *name_961);
static void f_check_requires_965(P1039 y_963, rt_int line_964);
static rstr f_act_delay_args_967(P1029 args_966);
static rstr f_same_subtypes_970(P1029 gd_968, P1029 args_969);
static rstr f_mailbox_low_975(rstr *name_971, P1029 args_972, rt_int line_973, P1035 *t_974);
static P1035 f_exponent_want_978(rstr *op_976, P1035 ta_977);
static rstr f_file_ref_982(P1029 e_979, int text_980, rt_int line_981);
static int f_text_file_984(P1035 t_983);
static rstr f_conversion_989(P1029 tt_985, P1029 args_986, rt_int line_987, P1035 *t_988);
static rstr f_float_digits_991(P1029 e_990);
static rstr f_enum_names_993(P1035 t_992);
static int f_explicit_rep_995(P1029 e_994);
static rstr f_actual_bounds_999(P1035 ft_996, P1035 t_997, P1031 c_998);
static rstr f_builtin_1006(rstr *name_1000, P1029 tt_1001, P1029 args_1002, rt_int line_1003, int is_stmt_1004, P1035 *t_1005);
static P1029 f_with_library_1008(P1029 units_1007);
static P1022 f_external_missing_1011(P1029 e_1009, P1029 units_1010);
static int f_unit_named_1014(P1029 units_1012, rstr *name_1013);
static int f_tried_1016(rstr *name_1015);
static void f_mark_tried_1018(rstr *name_1017);
static void f_translate_1020(P1029 units_1019);
static void f_print_program_1021(void);
static int ex_compile_error_1;
static P1026 g_toks_1060;
static rt_int g_ntoks_1061;
static rt_int g_tpos_1062;
static rt_int g_src_line_1063;
static P1022 g_pending_prag_1064;
static P1033 g_src_head_1065;
static P1033 g_src_tail_1066;
static rt_int g_ntoks_before_library_1067;
static P1033 g_library_tried_1068;
static P1043 g_table_1069;
static P1043 g_genv_1070;
static P1039 g_all_insts_1071;
static rt_int g_depth_1072;
static P1039 g_scope_stack_1073;
static P1035 g_all_types_1074;
static rt_int g_serial_1075;
static P1052 g_out_types_1076;
static P1052 g_out_helpers_1077;
static P1052 g_out_protos_1078;
static P1052 g_out_globals_1079;
static P1052 g_out_funcs_1080;
static P1052 g_out_init_1081;
static P1052 g_out_excs_1082;
static P1052 g_code_1083;
static P1052 g_fields_buf_1084;
static int g_in_func_1085;
static rt_int g_cur_level_1086;
static P1046 g_fctx_1087;
static P1056 g_caps_1088;
static P1058 g_cap_waits_1089;
static P1033 g_psub_1090;
static P1022 g_st_field_1091;
static P1052 g_out_frames_1092;
static P1052 g_out_roots_1093;
static int g_uses_free_1094;
static P1033 g_fins_1095;
static int g_uses_findyn_1096;
static P1039 g_func_sym_1097;
static P1031 g_func_rc_1098;
static P1022 g_cap_ret_1099;
static P1022 g_cap_rflag_1100;
static rt_int g_ret_frames_1101;
static rt_int g_gdepth_1102;
static P1022 g_suppress_1103;
static P1031 g_cons_ctx_1104;
static int g_mark_uninit_1105;
static int g_skip_chk_1106;
static P1054 g_exits_1107;
static P1054 g_gotos_1108;
static rt_int g_frames_1109;
static P1033 g_handlers_1110;
static P1033 g_cleanups_1111;
static rt_int g_trial_1112;
static P1033 g_mcopies_1113;
static P1035 g_ty_int_1114;
static P1035 g_ty_bool_1115;
static P1035 g_ty_float_1116;
static P1035 g_ty_ascii_1117;
static P1035 g_ty_string_1118;
static P1035 g_ty_void_1119;
static P1035 g_ty_file_1120;
static P1035 g_ty_nil_1121;
static P1035 g_ty_lock_1122;
static P1035 g_ty_latch_1123;
static P1035 g_ty_act_1124;
static P1035 g_file_mode_type_1125;
static P1035 g_ty_send_st_1126;
static P1035 g_ty_receive_st_1127;
static P1035 g_ty_text_file_1128;
static P1035 g_file_state_type_1129;
static P1035 g_file_disp_type_1130;
static P1035 g_file_access_type_1131;
static P1031 g_no_cons_1132;
static P1022 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_1133 = NULL;
{ P1022 cell1134 = rt_alloc(sizeof *cell1134);
rt_int pv1135 = ((rt_int)(((*F->s_2)).len));
cell1134->p_n = pv1135;
cell1134->all = rt_str_new(pv1135);
rt_str_assign(&cell1134->all, (*F->s_2));
F->t_1133 = cell1134;
}
F->result_ = F->t_1133;
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
F->r_1136 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_1136, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_1136;
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
F->r_1137 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_1137, (*F->s_14));
{ rt_int lo1139 = ((rt_int)1LL), hi1140 = ((rt_int)(((*F->s_14)).len));
for (rt_int it1141 = lo1139; it1141 <= hi1140; it1141++) {
F->i_1138 = it1141;
if (((65 <= rt_str_get(F->r_1137, F->i_1138)) && (rt_str_get(F->r_1137, F->i_1138) <= 90))) {
(*rt_str_at(&F->r_1137, F->i_1138)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_str_get(F->r_1137, F->i_1138)) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_1137;
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
F->l_1142 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_1143 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_1142), rt_str(" ", 1)));
{ rt_int lo1145 = ((rt_int)1LL), hi1146 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_1143).len))), ((rt_int)1LL));
for (rt_int it1147 = lo1145; it1147 <= hi1146; it1147++) {
F->i_1144 = it1147;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_1144, rt_sub(rt_add(F->i_1144, ((rt_int)((F->w_1143).len))), ((rt_int)1LL))), F->w_1143)) {
F->result_ = rt_str_cat(F->l_1142, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_1142;
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
g_serial_1075 = rt_add(g_serial_1075, ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(g_serial_1075));
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
if ((g_trial_1112 == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P1052 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_1148 = NULL;
{ R1053 *cell1149 = rt_alloc(sizeof(R1053));
(*cell1149).head = NULL;
(*cell1149).tail = NULL;
F->b_1148 = cell1149;
}
F->result_ = F->b_1148;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P1052 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_1150 = NULL;
{ R1034 *cell1151 = rt_alloc(sizeof(R1034));
(*cell1151).s = NULL;
(*cell1151).next = NULL;
F->l_1150 = cell1151;
}
(*(P1033)rt_nil_check(F->l_1150)).s = f_mk_3(&(*F->s_26));
if (((*(P1052)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P1052)rt_nil_check(F->b_25)).head = F->l_1150;
} else {
(*(P1033)rt_nil_check((*(P1052)rt_nil_check(F->b_25)).tail)).next = F->l_1150;
}
(*(P1052)rt_nil_check(F->b_25)).tail = F->l_1150;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_1083, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P1052 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_1152 = NULL;
F->l_1152 = (*(P1052)rt_nil_check(F->b_30)).head;
while ((F->l_1152 != NULL)) {
rt_putln((((P1022)rt_nil_check((*(P1033)rt_nil_check(F->l_1152)).s))->all));
F->l_1152 = (*(P1033)rt_nil_check(F->l_1152)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P1052 a_32, P1052 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P1052)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P1052)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P1052)rt_nil_check(F->a_32)).head = (*(P1052)rt_nil_check(F->b_33)).head;
} else {
(*(P1033)rt_nil_check((*(P1052)rt_nil_check(F->a_32)).tail)).next = (*(P1052)rt_nil_check(F->b_33)).head;
}
(*(P1052)rt_nil_check(F->a_32)).tail = (*(P1052)rt_nil_check(F->b_33)).tail;
(*(P1052)rt_nil_check(F->b_33)).head = NULL;
(*(P1052)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel1153 = (*F->w_35);
if (0 || rt_str_eq(sel1153, rt_str("ABBREV", 6)) || rt_str_eq(sel1153, rt_str("ABNORMAL", 8)) || rt_str_eq(sel1153, rt_str("ALL", 3)) || rt_str_eq(sel1153, rt_str("ALLOC", 5)) || rt_str_eq(sel1153, rt_str("ASSERT", 6)) || rt_str_eq(sel1153, rt_str("BEGIN", 5)) || rt_str_eq(sel1153, rt_str("BY", 2)) || rt_str_eq(sel1153, rt_str("CAPSULE", 7)) || rt_str_eq(sel1153, rt_str("CASE", 4)) || rt_str_eq(sel1153, rt_str("CONST", 5)) || rt_str_eq(sel1153, rt_str("CREATE", 6)) || rt_str_eq(sel1153, rt_str("DO", 2)) || rt_str_eq(sel1153, rt_str("ELSE", 4)) || rt_str_eq(sel1153, rt_str("ELSEIF", 6)) || rt_str_eq(sel1153, rt_str("END", 3)) || rt_str_eq(sel1153, rt_str("EXCEPTION", 9)) || rt_str_eq(sel1153, rt_str("EXIT", 4)) || rt_str_eq(sel1153, rt_str("EXPORTS", 7)) || rt_str_eq(sel1153, rt_str("EXPOSE", 6)) || rt_str_eq(sel1153, rt_str("EXTERNAL", 8)) || rt_str_eq(sel1153, rt_str("FOR", 3)) || rt_str_eq(sel1153, rt_str("FROM", 4)) || rt_str_eq(sel1153, rt_str("FUNC", 4)) || rt_str_eq(sel1153, rt_str("GENERIC", 7)) || rt_str_eq(sel1153, rt_str("GOTO", 4)) || rt_str_eq(sel1153, rt_str("GUARD", 5)) || rt_str_eq(sel1153, rt_str("IF", 2)) || rt_str_eq(sel1153, rt_str("IMPORTS", 7)) || rt_str_eq(sel1153, rt_str("LOCATION", 8)) || rt_str_eq(sel1153, rt_str("NAMED", 5)) || rt_str_eq(sel1153, rt_str("NEEDS", 5)) || rt_str_eq(sel1153, rt_str("NEW", 3)) || rt_str_eq(sel1153, rt_str("NONE", 4)) || rt_str_eq(sel1153, rt_str("OUT", 3)) || rt_str_eq(sel1153, rt_str("OF", 2)) || rt_str_eq(sel1153, rt_str("PRAG", 4)) || rt_str_eq(sel1153, rt_str("PROC", 4)) || rt_str_eq(sel1153, rt_str("RAISE", 5)) || rt_str_eq(sel1153, rt_str("READONLY", 8)) || rt_str_eq(sel1153, rt_str("REVERSE", 7)) || rt_str_eq(sel1153, rt_str("REGION", 6)) || rt_str_eq(sel1153, rt_str("RENAMING", 8)) || rt_str_eq(sel1153, rt_str("REP", 3)) || rt_str_eq(sel1153, rt_str("REPEAT", 6)) || rt_str_eq(sel1153, rt_str("RERAISE", 7)) || rt_str_eq(sel1153, rt_str("RETURN", 6)) || rt_str_eq(sel1153, rt_str("SUBTYPE", 7)) || rt_str_eq(sel1153, rt_str("TASK", 4)) || rt_str_eq(sel1153, rt_str("THEN", 4)) || rt_str_eq(sel1153, rt_str("TO", 2)) || rt_str_eq(sel1153, rt_str("TYPE", 4)) || rt_str_eq(sel1153, rt_str("VAR", 3)) || rt_str_eq(sel1153, rt_str("WAIT", 4)) || rt_str_eq(sel1153, rt_str("WHEN", 4)) || rt_str_eq(sel1153, rt_str("WHILE", 5))) {
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
F->t_1154 = NULL;
{ R1025 *cell1155 = rt_alloc(sizeof(R1025));
(*cell1155).s = NULL;
(*cell1155).prags = NULL;
F->t_1154 = cell1155;
}
(*(P1024)rt_nil_check(F->t_1154)).kind = F->kind_39;
(*(P1024)rt_nil_check(F->t_1154)).line = g_src_line_1063;
(*(P1024)rt_nil_check(F->t_1154)).ival = F->ival_41;
(*(P1024)rt_nil_check(F->t_1154)).s = f_mk_3(&(*F->s_40));
(*(P1024)rt_nil_check(F->t_1154)).prags = g_pending_prag_1064;
g_pending_prag_1064 = NULL;
g_ntoks_1061 = rt_add(g_ntoks_1061, ((rt_int)1LL));
(((P1026)rt_nil_check(g_toks_1060))->all).p[(rt_index(g_ntoks_1061, (((P1026)rt_nil_check(g_toks_1060))->all).lo, (((P1026)rt_nil_check(g_toks_1060))->all).hi) - (((P1026)rt_nil_check(g_toks_1060))->all).lo)] = F->t_1154;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_1156 = rt_add(F->i_44, ((rt_int)1LL));
while (((F->j_1156 <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_str_get((*F->line_43), F->j_1156)) || f_is_digit_11(rt_str_get((*F->line_43), F->j_1156))) || (rt_str_get((*F->line_43), F->j_1156) == 95)))) {
if (((rt_str_get((*F->line_43), F->j_1156) == 95) && ((F->j_1156 == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_str_get((*F->line_43), rt_add(F->j_1156, ((rt_int)1LL)))) || f_is_digit_11(rt_str_get((*F->line_43), rt_add(F->j_1156, ((rt_int)1LL))))))))) {
f_fail_23(g_src_line_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_1156 = rt_add(F->j_1156, ((rt_int)1LL));
}
F->result_ = F->j_1156;
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
F->w_1157 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_1157, (*F->s_46));
{ rt_int lo1159 = ((rt_int)1LL), hi1160 = ((rt_int)((F->w_1157).len));
for (rt_int it1161 = lo1159; it1161 <= hi1160; it1161++) {
F->k_1158 = it1161;
(*rt_str_at(&F->w_1157, F->k_1158)) = f_upper_13(rt_str_get(F->w_1157, F->k_1158));
}
}
F->result_ = F->w_1157;
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
F->j_1162 = F->i_49;
while (((F->j_1162 <= ((rt_int)(((*F->line_48)).len))) && ((rt_str_get((*F->line_48), F->j_1162) == 32) || (rt_str_get((*F->line_48), F->j_1162) == 9)))) {
F->j_1162 = rt_add(F->j_1162, ((rt_int)1LL));
}
F->result_ = F->j_1162;
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
F->j_1163 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_1164 = NULL;
F->r_1164 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_1165 = 1;
if (((F->j_1163 > ((rt_int)(((*F->line_51)).len))) || (rt_str_get((*F->line_51), F->j_1163) != 40))) {
f_fail_23(g_src_line_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_1163 = rt_add(F->j_1163, ((rt_int)1LL));
while (F->more_1165) {
F->j_1163 = f_skip_blanks_50(&(*F->line_51), F->j_1163);
if (((F->j_1163 > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_str_get((*F->line_51), F->j_1163))))) {
f_fail_23(g_src_line_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_1166 = f_ident_end_45(&(*F->line_51), F->j_1163);
F->r_1164 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_1164))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), F->j_1163, rt_sub(F->k_1166, ((rt_int)1LL))); b_; }))); b_; }));
F->j_1163 = f_skip_blanks_50(&(*F->line_51), F->k_1166);
if (((F->j_1163 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_1163) == 40))) {
F->go_1167 = 1;
F->r_1164 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_1164))->all), rt_str("(", 1)); b_; }));
F->j_1163 = rt_add(F->j_1163, ((rt_int)1LL));
while (F->go_1167) {
F->j_1163 = f_skip_blanks_50(&(*F->line_51), F->j_1163);
if (((F->j_1163 > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_str_get((*F->line_51), F->j_1163))))) {
f_fail_23(g_src_line_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_1166 = f_ident_end_45(&(*F->line_51), F->j_1163);
F->r_1164 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_1164))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), F->j_1163, rt_sub(F->k_1166, ((rt_int)1LL))); b_; }))); b_; }));
F->j_1163 = f_skip_blanks_50(&(*F->line_51), F->k_1166);
if (((F->j_1163 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_1163) == 44))) {
F->r_1164 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_1164))->all), rt_str(",", 1)); b_; }));
F->j_1163 = rt_add(F->j_1163, ((rt_int)1LL));
} else if (((F->j_1163 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_1163) == 41))) {
F->j_1163 = rt_add(F->j_1163, ((rt_int)1LL));
F->go_1167 = 0;
} else {
f_fail_23(g_src_line_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_1164 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_1164))->all), rt_str(")", 1)); b_; }));
}
F->r_1164 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_1164))->all), rt_str(";", 1)); b_; }));
F->j_1163 = f_skip_blanks_50(&(*F->line_51), F->j_1163);
if (((F->j_1163 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_1163) == 44))) {
F->j_1163 = rt_add(F->j_1163, ((rt_int)1LL));
} else if (((F->j_1163 <= ((rt_int)(((*F->line_51)).len))) && (rt_str_get((*F->line_51), F->j_1163) == 41))) {
F->j_1163 = rt_add(F->j_1163, ((rt_int)1LL));
F->more_1165 = 0;
} else {
f_fail_23(g_src_line_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P1022)rt_nil_check(F->r_1164))->all));
if ((g_pending_prag_1064 == NULL)) {
g_pending_prag_1064 = F->r_1164;
} else {
g_pending_prag_1064 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(g_pending_prag_1064))->all), (((P1022)rt_nil_check(F->r_1164))->all)); b_; }));
}
F->result_ = F->j_1163;
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
F->i_1168 = ((rt_int)1LL);
while ((F->i_1168 <= ((rt_int)(((*F->r_54)).len)))) {
F->k_1169 = F->i_1168;
while ((rt_str_get((*F->r_54), F->k_1169) != 59)) {
F->k_1169 = rt_add(F->k_1169, ((rt_int)1LL));
}
{
F->p_1170 = rt_str_copy(rt_str_slice((*F->r_54), F->i_1168, rt_sub(F->k_1169, ((rt_int)1LL))));
F->ok_1171 = ((((((((((rt_str_eq(F->p_1170, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_1170, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_1170, rt_str("OPEN", 4))) || rt_str_eq(F->p_1170, rt_str("CLOSED", 6))) || rt_str_eq(F->p_1170, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_1170, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_1170, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1170, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_1170, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_1170, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_1170).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_1170, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_1172 = ((((((((((rt_int)((F->p_1170).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_1170, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_1170, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_1170, rt_str("OPEN", 4))) || rt_str_eq(F->p_1170, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_1170).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_1170, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_1170, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1170, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_1170).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_1170, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_1172 && (!F->ok_1171))) {
f_fail_23(g_src_line_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_1170); b_; }));
}
}
F->i_1168 = rt_add(F->k_1169, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_1173 = ((rt_int)1LL);
F->j_1174 = ((rt_int)0LL);
F->n_1175 = ((rt_int)(((*F->line_56)).len));
while ((F->i_1173 <= F->n_1175)) {
F->c_1176 = rt_str_get((*F->line_56), F->i_1173);
if (((((F->c_1176 == 32) || (F->c_1176 == 9)) || (F->c_1176 == 13)) || (F->c_1176 == 12))) {
F->i_1173 = rt_add(F->i_1173, ((rt_int)1LL));
} else if ((F->c_1176 == 37)) {
F->i_1173 = rt_add(F->n_1175, ((rt_int)1LL));
} else if (f_is_letter_9(F->c_1176)) {
F->j_1174 = f_ident_end_45(&(*F->line_56), F->i_1173);
{
F->w_1177 = rt_str_new(rt_sub(F->j_1174, F->i_1173));
rt_str_assign(&F->w_1177, rt_str_slice((*F->line_56), F->i_1173, rt_sub(F->j_1174, ((rt_int)1LL))));
{ rt_int lo1179 = ((rt_int)1LL), hi1180 = ((rt_int)((F->w_1177).len));
for (rt_int it1181 = lo1179; it1181 <= hi1180; it1181++) {
F->k_1178 = it1181;
(*rt_str_at(&F->w_1177, F->k_1178)) = f_upper_13(rt_str_get(F->w_1177, F->k_1178));
}
}
if (rt_str_eq(F->w_1177, rt_str("PRAGMAT", 7))) {
while (((F->j_1174 <= F->n_1175) && (rt_str_get((*F->line_56), F->j_1174) != 59))) {
F->j_1174 = rt_add(F->j_1174, ((rt_int)1LL));
}
F->j_1174 = rt_add(F->j_1174, ((rt_int)1LL));
} else if (rt_str_eq(F->w_1177, rt_str("PRAG", 4))) {
F->j_1174 = f_lex_prag_53(&(*F->line_56), F->j_1174);
} else if (f_is_reserved_36(&F->w_1177)) {
f_add_token_42((((rt_int)2LL)), &F->w_1177, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_1177)) {
f_add_token_42((((rt_int)3LL)), &F->w_1177, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_1177, ((rt_int)0LL));
}
}
F->i_1173 = F->j_1174;
} else if (f_is_digit_11(F->c_1176)) {
F->j_1174 = F->i_1173;
while (((F->j_1174 <= F->n_1175) && f_is_digit_11(rt_str_get((*F->line_56), F->j_1174)))) {
F->j_1174 = rt_add(F->j_1174, ((rt_int)1LL));
}
if ((((F->j_1174 < F->n_1175) && (rt_str_get((*F->line_56), F->j_1174) == 46)) && f_is_digit_11(rt_str_get((*F->line_56), rt_add(F->j_1174, ((rt_int)1LL)))))) {
F->j_1174 = rt_add(F->j_1174, ((rt_int)1LL));
while (((F->j_1174 <= F->n_1175) && f_is_digit_11(rt_str_get((*F->line_56), F->j_1174)))) {
F->j_1174 = rt_add(F->j_1174, ((rt_int)1LL));
}
if (((F->j_1174 <= F->n_1175) && ((rt_str_get((*F->line_56), F->j_1174) == 69) || (rt_str_get((*F->line_56), F->j_1174) == 101)))) {
F->j_1174 = rt_add(F->j_1174, ((rt_int)1LL));
if (((F->j_1174 <= F->n_1175) && ((rt_str_get((*F->line_56), F->j_1174) == 43) || (rt_str_get((*F->line_56), F->j_1174) == 45)))) {
F->j_1174 = rt_add(F->j_1174, ((rt_int)1LL));
}
while (((F->j_1174 <= F->n_1175) && f_is_digit_11(rt_str_get((*F->line_56), F->j_1174)))) {
F->j_1174 = rt_add(F->j_1174, ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), F->i_1173, rt_sub(F->j_1174, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), F->i_1173, rt_sub(F->j_1174, ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), F->i_1173, rt_sub(F->j_1174, ((rt_int)1LL)))));
}
F->i_1173 = F->j_1174;
} else if ((((F->c_1176 == 39) && (F->i_1173 < F->n_1175)) && (rt_str_get((*F->line_56), rt_add(F->i_1173, ((rt_int)1LL))) == 39))) {
F->j_1174 = rt_add(F->i_1173, ((rt_int)2LL));
while (((F->j_1174 < F->n_1175) && (!((rt_str_get((*F->line_56), F->j_1174) == 39) && (rt_str_get((*F->line_56), rt_add(F->j_1174, ((rt_int)1LL))) == 39))))) {
if ((rt_str_get((*F->line_56), F->j_1174) == 34)) {
f_fail_23(g_src_line_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_1174 = rt_add(F->j_1174, ((rt_int)1LL));
}
if ((F->j_1174 >= F->n_1175)) {
f_fail_23(g_src_line_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(F->i_1173, ((rt_int)2LL)), rt_sub(F->j_1174, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1173 = rt_add(F->j_1174, ((rt_int)2LL));
} else if ((F->c_1176 == 39)) {
F->j_1174 = rt_add(F->i_1173, ((rt_int)1LL));
if (((F->j_1174 > F->n_1175) || (!f_is_letter_9(rt_str_get((*F->line_56), F->j_1174))))) {
f_fail_23(g_src_line_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_1174 = f_ident_end_45(&(*F->line_56), F->j_1174);
{
F->w_1182 = rt_str_new(rt_sub(rt_sub(F->j_1174, F->i_1173), ((rt_int)1LL)));
rt_str_assign(&F->w_1182, rt_str_slice((*F->line_56), rt_add(F->i_1173, ((rt_int)1LL)), rt_sub(F->j_1174, ((rt_int)1LL))));
{ rt_int lo1184 = ((rt_int)1LL), hi1185 = ((rt_int)((F->w_1182).len));
for (rt_int it1186 = lo1184; it1186 <= hi1185; it1186++) {
F->k_1183 = it1186;
(*rt_str_at(&F->w_1182, F->k_1183)) = f_upper_13(rt_str_get(F->w_1182, F->k_1183));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_1182, ((rt_int)0LL));
}
F->i_1173 = F->j_1174;
} else if ((F->c_1176 == 34)) {
F->j_1174 = rt_add(F->i_1173, ((rt_int)1LL));
while (((F->j_1174 <= F->n_1175) && (rt_str_get((*F->line_56), F->j_1174) != 34))) {
if ((rt_str_get((*F->line_56), F->j_1174) == 39)) {
f_fail_23(g_src_line_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_1174 = rt_add(F->j_1174, ((rt_int)1LL));
}
if ((F->j_1174 > F->n_1175)) {
f_fail_23(g_src_line_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(F->i_1173, ((rt_int)1LL)), rt_sub(F->j_1174, ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1173 = rt_add(F->j_1174, ((rt_int)1LL));
} else {
{
F->two_1187 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_1187, rt_str("  ", 2));
(*rt_str_at(&F->two_1187, ((rt_int)1LL))) = F->c_1176;
if ((F->i_1173 < F->n_1175)) {
(*rt_str_at(&F->two_1187, ((rt_int)2LL))) = rt_str_get((*F->line_56), rt_add(F->i_1173, ((rt_int)1LL)));
}
if (((((((rt_str_eq(F->two_1187, rt_str(":=", 2)) || rt_str_eq(F->two_1187, rt_str("=>", 2))) || rt_str_eq(F->two_1187, rt_str("..", 2))) || rt_str_eq(F->two_1187, rt_str("**", 2))) || rt_str_eq(F->two_1187, rt_str("/=", 2))) || rt_str_eq(F->two_1187, rt_str("<=", 2))) || rt_str_eq(F->two_1187, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_1187, ((rt_int)0LL));
F->i_1173 = rt_add(F->i_1173, ((rt_int)2LL));
} else if (((rt_str_eq(F->two_1187, rt_str("<<", 2)) || rt_str_eq(F->two_1187, rt_str(">>", 2))) || rt_str_eq(F->two_1187, rt_str("::", 2)))) {
if (rt_str_eq(F->two_1187, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_1187, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_1173 = rt_add(F->i_1173, ((rt_int)2LL));
} else if ((((((((((((((((((F->c_1176 == 40) || (F->c_1176 == 41)) || (F->c_1176 == 91)) || (F->c_1176 == 93)) || (F->c_1176 == 44)) || (F->c_1176 == 58)) || (F->c_1176 == 59)) || (F->c_1176 == 46)) || (F->c_1176 == 35)) || (F->c_1176 == 43)) || (F->c_1176 == 45)) || (F->c_1176 == 42)) || (F->c_1176 == 47)) || (F->c_1176 == 38)) || (F->c_1176 == 61)) || (F->c_1176 == 60)) || (F->c_1176 == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(F->c_1176); b_; }), ((rt_int)0LL));
F->i_1173 = rt_add(F->i_1173, ((rt_int)1LL));
} else {
f_fail_23(g_src_line_1063, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_1188 = rt_str_new(rt_sizeln());
F->l_1189 = NULL;
rt_r_readln(&F->line_1188);
g_src_line_1063 = rt_add(g_src_line_1063, ((rt_int)1LL));
{ R1034 *cell1190 = rt_alloc(sizeof(R1034));
(*cell1190).s = NULL;
(*cell1190).next = NULL;
F->l_1189 = cell1190;
}
(*(P1033)rt_nil_check(F->l_1189)).s = f_mk_3(&F->line_1188);
if ((g_src_tail_1066 == NULL)) {
g_src_head_1065 = F->l_1189;
} else {
(*(P1033)rt_nil_check(g_src_tail_1066)).next = F->l_1189;
}
g_src_tail_1066 = F->l_1189;
f_lex_line_57(&F->line_1188);
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
F->f_1191 = rt_r_file_new(0, 0, sizeof(int), 1);
F->found_1192 = 1;
{ rt_frame xf1193;
if (RT_TRY(xf1193)) {
rt_r_open(F->f_1191, rt_str_cat(f_lower_s_15(&(*F->name_59)), rt_str(".red", 4)), 0);
RT_POP(xf1193);
} else {
RT_POP(xf1193);
int x1194 = rt_xcur;
if (0 || x1194 == rt_exc("X_NOFILE") || x1194 == rt_exc("X_FILENAME")) {
F->found_1192 = 0;
} else {
rt_raise(x1194);
}
}
}
if ((!F->found_1192)) {
F->result_ = 0;
goto ret_;
}
while ((!rt_r_feof(F->f_1191))) {
F->line_1195 = rt_str_new(rt_r_fsizeln(F->f_1191));
rt_r_freadln(F->f_1191, &F->line_1195);
g_src_line_1063 = rt_add(g_src_line_1063, ((rt_int)1LL));
f_lex_line_57(&F->line_1195);
}
rt_r_close(F->f_1191, 0);
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_write_library_62(P1029 u_61) {
  struct f_write_library_62fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->u_61 = u_61;
F->f_1196 = rt_r_file_new(0, 1, sizeof(int), 1);
F->l_1197 = NULL;
F->l_1197 = g_src_head_1065;
F->n_1198 = ((rt_int)1LL);
rt_r_open(F->f_1196, rt_str_cat(f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->u_61)).name))->all)), rt_str(".red", 4)), 1);
while (((F->l_1197 != NULL) && (F->n_1198 <= (*(P1029)rt_nil_check(F->u_61)).eline))) {
if ((F->n_1198 >= (*(P1029)rt_nil_check(F->u_61)).line)) {
rt_r_fwriteln(F->f_1196, (((P1022)rt_nil_check((*(P1033)rt_nil_check(F->l_1197)).s))->all));
}
F->n_1198 = rt_add(F->n_1198, ((rt_int)1LL));
F->l_1197 = (*(P1033)rt_nil_check(F->l_1197)).next;
}
rt_r_close(F->f_1196, 0);
ret_:
  RT_FPOP();
  return;
}

static P1029 f_nn_65(rt_int kind_63, rt_int line_64) {
  struct f_nn_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_63 = kind_63;
F->line_64 = line_64;
F->x_1199 = NULL;
{ R1030 *cell1200 = rt_alloc(sizeof(R1030));
(*cell1200).name = NULL;
(*cell1200).tag = NULL;
(*cell1200).prags = NULL;
(*cell1200).labels = NULL;
(*cell1200).a = NULL;
(*cell1200).b = NULL;
(*cell1200).c = NULL;
(*cell1200).d = NULL;
(*cell1200).e = NULL;
(*cell1200).next = NULL;
F->x_1199 = cell1200;
}
(*(P1029)rt_nil_check(F->x_1199)).kind = F->kind_63;
(*(P1029)rt_nil_check(F->x_1199)).line = F->line_64;
F->result_ = F->x_1199;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_69(P1029 *head_66, P1029 *tail_67, P1029 x_68) {
  struct f_append_69fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_66 = head_66;
F->tail_67 = tail_67;
F->x_68 = x_68;
if (((*F->head_66) == NULL)) {
(*F->head_66) = F->x_68;
} else {
(*(P1029)rt_nil_check((*F->tail_67))).next = F->x_68;
}
(*F->tail_67) = F->x_68;
while (((*(P1029)rt_nil_check((*F->tail_67))).next != NULL)) {
(*F->tail_67) = (*(P1029)rt_nil_check((*F->tail_67))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_71(P1029 l_70) {
  struct f_list_len_71fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_70 = l_70;
F->n_1201 = ((rt_int)0LL);
F->p_1202 = NULL;
F->p_1202 = F->l_70;
while ((F->p_1202 != NULL)) {
F->n_1201 = rt_add(F->n_1201, ((rt_int)1LL));
F->p_1202 = (*(P1029)rt_nil_check(F->p_1202)).next;
}
F->result_ = F->n_1201;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_72(void) {
  struct f_cur_line_72fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).line;
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
F->result_ = (((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).kind == (((rt_int)2LL))) && rt_str_eq((((P1022)rt_nil_check((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_73)));
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
F->result_ = (((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).kind == (((rt_int)3LL))) && rt_str_eq((((P1022)rt_nil_check((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_75)));
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
F->result_ = ((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).kind == F->k_77);
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
if ((rt_add(g_tpos_1062, F->k_79) > g_ntoks_1061)) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(rt_add(g_tpos_1062, F->k_79), b_.lo, b_.hi) - b_.lo)]; }))).kind;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1022 f_text_at_82(rt_int k_81) {
  struct f_text_at_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_81 = k_81;
if ((rt_add(g_tpos_1062, F->k_81) > g_ntoks_1061)) {
F->result_ = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_ntoks_1061, b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(rt_add(g_tpos_1062, F->k_81), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_83), rt_str(" (at ", 5)), (((P1022)rt_nil_check((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_86(rstr *w_85) {
  struct f_accept_kw_86fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_85 = w_85;
if (f_at_kw_74(&(*F->w_85))) {
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
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
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
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
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
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
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1022 f_expect_id_93(void) {
  struct f_expect_id_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_78((((rt_int)1LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->result_ = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(rt_sub(g_tpos_1062, ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_name_node_94(void) {
  struct f_name_node_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1203 = NULL;
F->x_1203 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
(*(P1029)rt_nil_check(F->x_1203)).name = f_expect_id_93();
F->result_ = F->x_1203;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_id_list_95(void) {
  struct f_id_list_95fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1204 = NULL;
F->tail_1205 = NULL;
f_append_69(&F->head_1204, &F->tail_1205, f_name_node_94());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1204, &F->tail_1205, f_name_node_94());
}
F->result_ = F->head_1204;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_p_subtype_96(void) {
  struct f_p_subtype_96fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1206 = f_cur_line_72();
F->x_1207 = NULL;
if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->x_1207 = f_nn_65((((rt_int)81LL)), F->line_1206);
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1029)rt_nil_check(F->x_1207)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1207;
goto ret_;
}
if ((!f_at_kind_78((((rt_int)1LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_1208 = rt_str_copy((((P1022)rt_nil_check((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
if (rt_str_eq(F->w_1208, rt_str("ARRAY", 5))) {
F->x_1207 = f_nn_65((((rt_int)74LL)), F->line_1206);
{
F->head_1209 = NULL;
F->tail_1210 = NULL;
f_append_69(&F->head_1209, &F->tail_1210, f_p_subtype_96());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1209, &F->tail_1210, f_p_subtype_96());
}
(*(P1029)rt_nil_check(F->x_1207)).a = F->head_1209;
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P1029)rt_nil_check(F->x_1207)).b = f_p_subtype_96();
} else if ((rt_str_eq(F->w_1208, rt_str("RECORD", 6)) || rt_str_eq(F->w_1208, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_1208, rt_str("RECORD", 6))) {
F->x_1207 = f_nn_65((((rt_int)75LL)), F->line_1206);
} else {
F->x_1207 = f_nn_65((((rt_int)76LL)), F->line_1206);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1211 = NULL;
F->tail_1212 = NULL;
F->more_1213 = 1;
while (F->more_1213) {
F->names_1214 = NULL;
F->names_1214 = f_id_list_95();
F->st_1215 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1215 = f_p_subtype_96();
while ((F->names_1214 != NULL)) {
F->cmp_1216 = NULL;
F->cmp_1216 = f_nn_65((((rt_int)63LL)), (*(P1029)rt_nil_check(F->names_1214)).line);
(*(P1029)rt_nil_check(F->cmp_1216)).name = (*(P1029)rt_nil_check(F->names_1214)).name;
(*(P1029)rt_nil_check(F->cmp_1216)).a = F->st_1215;
f_append_69(&F->head_1211, &F->tail_1212, F->cmp_1216);
F->names_1214 = (*(P1029)rt_nil_check(F->names_1214)).next;
}
F->more_1213 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1029)rt_nil_check(F->x_1207)).a = F->head_1211;
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_1208, rt_str("UNION", 5)) && f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1207)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1208, rt_str("ENUM", 4))) {
F->x_1207 = f_nn_65((((rt_int)72LL)), F->line_1206);
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1217 = NULL;
F->tail_1218 = NULL;
F->more_1219 = 1;
while (F->more_1219) {
F->lit_1220 = NULL;
F->lit_1220 = f_nn_65((((rt_int)4LL)), F->line_1206);
if ((!f_at_kind_78((((rt_int)6LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P1029)rt_nil_check(F->lit_1220)).name = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
f_append_69(&F->head_1217, &F->tail_1218, F->lit_1220);
F->more_1219 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1029)rt_nil_check(F->x_1207)).a = F->head_1217;
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1207)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1029)rt_nil_check(F->x_1207)).c = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_1208, rt_str("STRING", 6)) || rt_str_eq(F->w_1208, rt_str("SET", 3))) || rt_str_eq(F->w_1208, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_1208, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_1208, rt_str("STRING", 6))) {
F->x_1207 = f_nn_65((((rt_int)73LL)), F->line_1206);
} else if (rt_str_eq(F->w_1208, rt_str("SET", 3))) {
F->x_1207 = f_nn_65((((rt_int)77LL)), F->line_1206);
} else if (rt_str_eq(F->w_1208, rt_str("MAILBOX", 7))) {
F->x_1207 = f_nn_65((((rt_int)78LL)), F->line_1206);
} else {
F->x_1207 = f_nn_65((((rt_int)79LL)), F->line_1206);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P1029)rt_nil_check(F->x_1207)).a = f_p_subtype_96();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1207)).b = f_actual_params_98();
}
} else if (rt_str_eq(F->w_1208, rt_str("INT", 3))) {
F->x_1207 = f_nn_65((((rt_int)70LL)), F->line_1206);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1207)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1029)rt_nil_check(F->x_1207)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1208, rt_str("FLOAT", 5))) {
F->x_1207 = f_nn_65((((rt_int)71LL)), F->line_1206);
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1207)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1207)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1029)rt_nil_check(F->x_1207)).c = f_expr_107();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_1207 = f_nn_65((((rt_int)80LL)), F->line_1206);
(*(P1029)rt_nil_check(F->x_1207)).name = f_mk_3(&F->w_1208);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1207)).a = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1207)).b = f_constraint_list_97();
(*(P1029)rt_nil_check(F->x_1207)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_1207;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_constraint_list_97(void) {
  struct f_constraint_list_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1221 = NULL;
F->tail_1222 = NULL;
F->more_1223 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_1223) {
F->line_1224 = f_cur_line_72();
F->lo_1225 = NULL;
F->lo_1225 = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1226 = NULL;
F->r_1226 = f_nn_65((((rt_int)16LL)), F->line_1224);
(*(P1029)rt_nil_check(F->r_1226)).a = F->lo_1225;
(*(P1029)rt_nil_check(F->r_1226)).b = f_expr_107();
f_append_69(&F->head_1221, &F->tail_1222, F->r_1226);
} else {
f_append_69(&F->head_1221, &F->tail_1222, F->lo_1225);
}
F->more_1223 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1221;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_actual_params_98(void) {
  struct f_actual_params_98fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1227 = NULL;
F->tail_1228 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_69(&F->head_1227, &F->tail_1228, f_expr_107());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1227, &F->tail_1228, f_expr_107());
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1227;
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

static P1029 f_actual_tt_101(void) {
  struct f_actual_tt_101fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1229 = NULL;
F->tail_1230 = NULL;
F->more_1231 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_1231) {
if ((f_at_kind_78((((rt_int)1LL))) && f_is_type_word_100(&(((P1022)rt_nil_check((*(P1024)rt_nil_check((((P1026)rt_nil_check(g_toks_1060))->all).p[(rt_index(g_tpos_1062, (((P1026)rt_nil_check(g_toks_1060))->all).lo, (((P1026)rt_nil_check(g_toks_1060))->all).hi) - (((P1026)rt_nil_check(g_toks_1060))->all).lo)])).s))->all)))) {
f_append_69(&F->head_1229, &F->tail_1230, f_p_subtype_96());
} else {
f_append_69(&F->head_1229, &F->tail_1230, f_expr_107());
}
F->more_1231 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1229;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_binop_106(P1022 op_102, P1029 l_103, P1029 r_104, rt_int line_105) {
  struct f_binop_106fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_102 = op_102;
F->l_103 = l_103;
F->r_104 = r_104;
F->line_105 = line_105;
F->x_1232 = NULL;
F->x_1232 = f_nn_65((((rt_int)9LL)), F->line_105);
(*(P1029)rt_nil_check(F->x_1232)).name = F->op_102;
(*(P1029)rt_nil_check(F->x_1232)).a = F->l_103;
(*(P1029)rt_nil_check(F->x_1232)).b = F->r_104;
F->result_ = F->x_1232;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_expr_107(void) {
  struct f_expr_107fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1233 = NULL;
F->l_1233 = f_expr_and_108();
while ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_1234 = NULL;
F->op_1234 = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1235 = f_cur_line_72();
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->l_1233 = f_binop_106(F->op_1234, F->l_1233, f_expr_and_108(), F->line_1235);
}
F->result_ = F->l_1233;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_expr_and_108(void) {
  struct f_expr_and_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1236 = NULL;
F->l_1236 = f_expr_not_109();
while (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_1237 = f_cur_line_72();
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->l_1236 = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_1236, f_expr_not_109(), F->line_1237);
}
F->result_ = F->l_1236;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_expr_not_109(void) {
  struct f_expr_not_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_1238 = NULL;
F->x_1238 = f_nn_65((((rt_int)8LL)), f_cur_line_72());
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1238)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P1029)rt_nil_check(F->x_1238)).a = f_expr_not_109();
F->result_ = F->x_1238;
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

static P1029 f_expr_rel_112(void) {
  struct f_expr_rel_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1239 = NULL;
F->l_1239 = f_expr_add_113();
while ((f_at_kind_78((((rt_int)3LL))) && f_is_rel_111(&(((P1022)rt_nil_check((*(P1024)rt_nil_check((((P1026)rt_nil_check(g_toks_1060))->all).p[(rt_index(g_tpos_1062, (((P1026)rt_nil_check(g_toks_1060))->all).lo, (((P1026)rt_nil_check(g_toks_1060))->all).hi) - (((P1026)rt_nil_check(g_toks_1060))->all).lo)])).s))->all)))) {
F->op_1240 = NULL;
F->op_1240 = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1241 = f_cur_line_72();
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->l_1239 = f_binop_106(F->op_1240, F->l_1239, f_expr_add_113(), F->line_1241);
}
F->result_ = F->l_1239;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_expr_add_113(void) {
  struct f_expr_add_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1242 = NULL;
F->l_1242 = f_expr_mul_114();
while ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_1243 = NULL;
F->op_1243 = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1244 = f_cur_line_72();
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->l_1242 = f_binop_106(F->op_1243, F->l_1242, f_expr_mul_114(), F->line_1244);
}
F->result_ = F->l_1242;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_expr_mul_114(void) {
  struct f_expr_mul_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1245 = NULL;
F->l_1245 = f_expr_pow_115();
while (((((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_1246 = NULL;
F->op_1246 = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1247 = f_cur_line_72();
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->l_1245 = f_binop_106(F->op_1246, F->l_1245, f_expr_pow_115(), F->line_1247);
}
F->result_ = F->l_1245;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_expr_pow_115(void) {
  struct f_expr_pow_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1248 = NULL;
F->l_1248 = f_expr_prefix_116();
while (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_1249 = f_cur_line_72();
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->l_1248 = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_1248, f_expr_prefix_116(), F->line_1249);
}
F->result_ = F->l_1248;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_expr_prefix_116(void) {
  struct f_expr_prefix_116fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_1250 = NULL;
F->x_1250 = f_nn_65((((rt_int)8LL)), f_cur_line_72());
(*(P1029)rt_nil_check(F->x_1250)).name = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1250)).a = f_expr_prefix_116();
F->result_ = F->x_1250;
goto ret_;
}
F->result_ = f_postfix_117();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_postfix_117(void) {
  struct f_postfix_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_1251 = NULL;
F->p_1251 = f_primary_118();
while (1) {
F->line_1252 = f_cur_line_72();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1253 = NULL;
F->x_1253 = f_nn_65((((rt_int)10LL)), F->line_1252);
F->head_1254 = NULL;
F->tail_1255 = NULL;
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1256 = 1;
while (F->more_1256) {
F->lo_1257 = NULL;
F->lo_1257 = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1258 = NULL;
F->r_1258 = f_nn_65((((rt_int)16LL)), F->line_1252);
(*(P1029)rt_nil_check(F->r_1258)).a = F->lo_1257;
(*(P1029)rt_nil_check(F->r_1258)).b = f_expr_107();
f_append_69(&F->head_1254, &F->tail_1255, F->r_1258);
} else {
f_append_69(&F->head_1254, &F->tail_1255, F->lo_1257);
}
F->more_1256 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P1029)rt_nil_check(F->x_1253)).a = F->p_1251;
(*(P1029)rt_nil_check(F->x_1253)).b = F->head_1254;
F->p_1251 = F->x_1253;
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_80(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1259 = NULL;
F->x_1259 = f_nn_65((((rt_int)11LL)), F->line_1252);
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1259)).a = F->p_1251;
(*(P1029)rt_nil_check(F->x_1259)).name = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->p_1251 = F->x_1259;
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && ((*(P1029)rt_nil_check(F->p_1251)).kind == (((rt_int)7LL))))) {
F->x_1260 = NULL;
F->x_1260 = f_nn_65((((rt_int)12LL)), F->line_1252);
(*(P1029)rt_nil_check(F->x_1260)).a = F->p_1251;
(*(P1029)rt_nil_check(F->x_1260)).b = f_actual_tt_101();
F->p_1251 = F->x_1260;
} else if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1261 = NULL;
F->x_1261 = f_nn_65((((rt_int)13LL)), F->line_1252);
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1261)).a = F->p_1251;
(*(P1029)rt_nil_check(F->x_1261)).b = f_p_subtype_96();
F->p_1251 = F->x_1261;
} else {
F->result_ = F->p_1251;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_primary_118(void) {
  struct f_primary_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1262 = f_cur_line_72();
F->x_1263 = NULL;
F->k_1264 = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).kind;
if ((F->k_1264 == (((rt_int)4LL)))) {
F->x_1263 = f_nn_65((((rt_int)1LL)), F->line_1262);
(*(P1029)rt_nil_check(F->x_1263)).ival = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).ival;
(*(P1029)rt_nil_check(F->x_1263)).name = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->result_ = F->x_1263;
goto ret_;
}
if ((((F->k_1264 == (((rt_int)5LL))) || (F->k_1264 == (((rt_int)7LL)))) || (F->k_1264 == (((rt_int)6LL))))) {
if ((F->k_1264 == (((rt_int)5LL)))) {
F->x_1263 = f_nn_65((((rt_int)2LL)), F->line_1262);
} else if ((F->k_1264 == (((rt_int)7LL)))) {
F->x_1263 = f_nn_65((((rt_int)3LL)), F->line_1262);
} else {
F->x_1263 = f_nn_65((((rt_int)4LL)), F->line_1262);
}
(*(P1029)rt_nil_check(F->x_1263)).name = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->result_ = F->x_1263;
goto ret_;
}
if ((F->k_1264 == (((rt_int)1LL)))) {
F->w_1265 = rt_str_copy((((P1022)rt_nil_check((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1265, rt_str("TRUE", 4)) || rt_str_eq(F->w_1265, rt_str("FALSE", 5)))) {
F->x_1263 = f_nn_65((((rt_int)5LL)), F->line_1262);
if (rt_str_eq(F->w_1265, rt_str("TRUE", 4))) {
(*(P1029)rt_nil_check(F->x_1263)).ival = ((rt_int)1LL);
}
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->result_ = F->x_1263;
goto ret_;
}
if (rt_str_eq(F->w_1265, rt_str("NIL", 3))) {
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->result_ = f_nn_65((((rt_int)6LL)), F->line_1262);
goto ret_;
}
F->result_ = f_name_node_94();
goto ret_;
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1263 = f_nn_65((((rt_int)17LL)), F->line_1262);
(*(P1029)rt_nil_check(F->x_1263)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1263;
goto ret_;
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1266 = NULL;
F->tail_1267 = NULL;
F->x_1263 = f_nn_65((((rt_int)14LL)), F->line_1262);
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1268 = 1;
while (F->more_1268) {
f_append_69(&F->head_1266, &F->tail_1267, f_constructor_item_119());
F->more_1268 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P1029)rt_nil_check(F->x_1263)).a = F->head_1266;
F->result_ = F->x_1263;
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

static P1029 f_constructor_item_119(void) {
  struct f_constructor_item_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1269 = f_cur_line_72();
F->it_1270 = NULL;
F->it_1270 = f_nn_65((((rt_int)15LL)), F->line_1269);
F->first_1271 = NULL;
F->first_1271 = f_expr_107();
F->keys_1272 = NULL;
F->ktail_1273 = NULL;
F->lab_1274 = NULL;
F->lab_1274 = f_nn_65((((rt_int)61LL)), F->line_1269);
(*(P1029)rt_nil_check(F->lab_1274)).a = F->first_1271;
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1029)rt_nil_check(F->lab_1274)).b = f_expr_107();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_69(&F->keys_1272, &F->ktail_1273, F->lab_1274);
} else if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1275 = g_tpos_1062;
F->more_1276 = NULL;
F->tail2_1277 = NULL;
F->ok_1278 = 0;
F->go_1279 = 1;
while ((F->go_1279 && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1280 = NULL;
F->l2_1280 = f_nn_65((((rt_int)61LL)), F->line_1269);
(*(P1029)rt_nil_check(F->l2_1280)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1029)rt_nil_check(F->l2_1280)).b = f_expr_107();
}
f_append_69(&F->more_1276, &F->tail2_1277, F->l2_1280);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1278 = 1;
F->go_1279 = 0;
} else if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1279 = 0;
}
}
if (F->ok_1278) {
f_append_69(&F->keys_1272, &F->ktail_1273, F->lab_1274);
f_append_69(&F->keys_1272, &F->ktail_1273, F->more_1276);
} else {
g_tpos_1062 = F->save_1275;
}
}
if (((F->keys_1272 == NULL) && ((*(P1029)rt_nil_check(F->lab_1274)).b != NULL))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1272 != NULL)) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P1029)rt_nil_check(F->it_1270)).a = F->keys_1272;
(*(P1029)rt_nil_check(F->it_1270)).b = f_expr_107();
} else {
(*(P1029)rt_nil_check(F->it_1270)).b = F->first_1271;
}
F->result_ = F->it_1270;
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

static P1029 f_body_121(void) {
  struct f_body_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1281 = NULL;
F->tail_1282 = NULL;
F->stmts_1283 = 0;
F->after_1284 = NULL;
while ((!f_at_body_end_120())) {
F->x_1285 = NULL;
F->x_1285 = f_body_element_122();
if (((F->x_1285 != NULL) && (((((*(P1029)rt_nil_check(F->x_1285)).kind == (((rt_int)40LL))) || ((*(P1029)rt_nil_check(F->x_1285)).kind == (((rt_int)41LL)))) || ((*(P1029)rt_nil_check(F->x_1285)).kind == (((rt_int)49LL)))) || ((*(P1029)rt_nil_check(F->x_1285)).kind == (((rt_int)48LL)))))) {
if (F->stmts_1283) {
f_fail_23((*(P1029)rt_nil_check(F->x_1285)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1285 != NULL) && ((*(P1029)rt_nil_check(F->x_1285)).kind >= (((rt_int)42LL)))) && ((*(P1029)rt_nil_check(F->x_1285)).kind <= (((rt_int)51LL))))) {
if ((F->stmts_1283 && (F->after_1284 == NULL))) {
F->after_1284 = F->x_1285;
}
} else if (((F->x_1285 != NULL) && ((*(P1029)rt_nil_check(F->x_1285)).kind != (((rt_int)33LL))))) {
if ((F->after_1284 != NULL)) {
f_fail_23((*(P1029)rt_nil_check(F->after_1284)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1283 = 1;
}
f_append_69(&F->head_1281, &F->tail_1282, F->x_1285);
}
F->result_ = F->head_1281;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_body_element_122(void) {
  struct f_body_element_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1286 = NULL;
F->pr_1287 = NULL;
F->pr_1287 = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1286 = f_declaration_123();
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1286 = f_nn_65((((rt_int)33LL)), f_cur_line_72());
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1286)).a = f_expr_107();
} else {
F->x_1286 = f_statement_149();
}
if ((F->pr_1287 != NULL)) {
F->p_1288 = NULL;
F->p_1288 = F->x_1286;
while ((F->p_1288 != NULL)) {
if (((*(P1029)rt_nil_check(F->p_1288)).prags == NULL)) {
(*(P1029)rt_nil_check(F->p_1288)).prags = F->pr_1287;
} else {
(*(P1029)rt_nil_check(F->p_1288)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->pr_1287))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1288)).prags))->all)); b_; }));
}
F->p_1288 = (*(P1029)rt_nil_check(F->p_1288)).next;
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1286;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_declaration_123(void) {
  struct f_declaration_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1289 = f_cur_line_72();
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
F->head_1290 = NULL;
F->tail_1291 = NULL;
F->names_1292 = NULL;
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->names_1292 = f_id_list_95();
while ((F->names_1292 != NULL)) {
F->x_1293 = NULL;
F->x_1293 = f_nn_65((((rt_int)49LL)), F->line_1289);
(*(P1029)rt_nil_check(F->x_1293)).name = (*(P1029)rt_nil_check(F->names_1292)).name;
f_append_69(&F->head_1290, &F->tail_1291, F->x_1293);
F->names_1292 = (*(P1029)rt_nil_check(F->names_1292)).next;
}
F->result_ = F->head_1290;
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

static P1029 f_object_decl_124(void) {
  struct f_object_decl_124fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1294 = f_cur_line_72();
F->is_var_1295 = f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1296 = NULL;
F->st_1297 = NULL;
F->init_1298 = NULL;
F->loc_1299 = NULL;
F->loc_kind_1300 = ((rt_int)0LL);
F->head_1301 = NULL;
F->tail_1302 = NULL;
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->names_1296 = f_id_list_95();
if (F->is_var_1295) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1297 = f_p_subtype_96();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1298 = f_expr_107();
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1022)rt_nil_check((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->loc_kind_1300 = ((rt_int)1LL);
} else {
F->loc_kind_1300 = ((rt_int)2LL);
}
F->loc_1299 = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (((F->init_1298 == NULL) && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; })))) {
F->init_1298 = f_expr_107();
}
} else {
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1297 = f_p_subtype_96();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1298 = f_expr_107();
}
while ((F->names_1296 != NULL)) {
F->x_1303 = NULL;
if (F->is_var_1295) {
F->x_1303 = f_nn_65((((rt_int)40LL)), F->line_1294);
} else {
F->x_1303 = f_nn_65((((rt_int)41LL)), F->line_1294);
}
(*(P1029)rt_nil_check(F->x_1303)).name = (*(P1029)rt_nil_check(F->names_1296)).name;
(*(P1029)rt_nil_check(F->x_1303)).a = F->st_1297;
(*(P1029)rt_nil_check(F->x_1303)).b = F->init_1298;
(*(P1029)rt_nil_check(F->x_1303)).c = F->loc_1299;
(*(P1029)rt_nil_check(F->x_1303)).ival = F->loc_kind_1300;
f_append_69(&F->head_1301, &F->tail_1302, F->x_1303);
F->names_1296 = (*(P1029)rt_nil_check(F->names_1296)).next;
}
F->result_ = F->head_1301;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_abbrev_decl_125(void) {
  struct f_abbrev_decl_125fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1304 = NULL;
F->x_1304 = f_nn_65((((rt_int)42LL)), f_cur_line_72());
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1304)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1304)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1304)).b = f_formal_params_134();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P1029)rt_nil_check(F->x_1304)).a = f_p_subtype_96();
F->result_ = F->x_1304;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_rep_spec_126(void) {
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

static P1029 f_rep_items_127(void) {
  struct f_rep_items_127fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1305 = NULL;
F->tail_1306 = NULL;
F->more_1307 = 1;
while (F->more_1307) {
f_append_69(&F->head_1305, &F->tail_1306, f_rep_item_130());
F->more_1307 = (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && f_rep_word_129(((rt_int)1LL)));
if (F->more_1307) {
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
}
}
F->result_ = F->head_1305;
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
F->w_1308 = rt_str_copy((((P1022)rt_nil_check(f_text_at_82(F->k_128)))->all));
F->result_ = (((f_kind_at_80(F->k_128) == (((rt_int)1LL))) || (f_kind_at_80(F->k_128) == (((rt_int)2LL)))) && ((((((((rt_str_eq(F->w_1308, rt_str("SIZE", 4)) || rt_str_eq(F->w_1308, rt_str("ALIGN", 5))) || rt_str_eq(F->w_1308, rt_str("OFFSET", 6))) || rt_str_eq(F->w_1308, rt_str("RECORD", 6))) || rt_str_eq(F->w_1308, rt_str("UNION", 5))) || rt_str_eq(F->w_1308, rt_str("ARRAY", 5))) || rt_str_eq(F->w_1308, rt_str("ABSENT", 6))) || rt_str_eq(F->w_1308, rt_str("PTR", 3))) || rt_str_eq(F->w_1308, rt_str("ENUM", 4))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_rep_item_130(void) {
  struct f_rep_item_130fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1309 = NULL;
F->x_1309 = f_nn_65((((rt_int)64LL)), f_cur_line_72());
if ((!f_rep_word_129(((rt_int)0LL)))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a representational item", 32); b_; }));
}
(*(P1029)rt_nil_check(F->x_1309)).name = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
if ((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1309)).name))->all), rt_str("SIZE", 4)) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1309)).name))->all), rt_str("OFFSET", 6)))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1029)rt_nil_check(F->x_1309)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
} else if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1309)).name))->all), rt_str("ALIGN", 5))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1029)rt_nil_check(F->x_1309)).a = f_expr_107();
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }))) {
(*(P1029)rt_nil_check(F->x_1309)).b = (*(P1029)rt_nil_check(F->x_1309)).a;
(*(P1029)rt_nil_check(F->x_1309)).a = f_expr_107();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
} else if ((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1309)).name))->all), rt_str("RECORD", 6)) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1309)).name))->all), rt_str("UNION", 5)))) {
F->head_1310 = NULL;
F->tail_1311 = NULL;
F->more_1312 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_1312) {
F->names_1313 = NULL;
F->names_1313 = f_id_list_95();
F->items_1314 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_rep_word_129(((rt_int)0LL))) {
F->items_1314 = f_rep_items_127();
}
while ((F->names_1313 != NULL)) {
F->cmp_1315 = NULL;
F->cmp_1315 = f_nn_65((((rt_int)63LL)), (*(P1029)rt_nil_check(F->names_1313)).line);
(*(P1029)rt_nil_check(F->cmp_1315)).name = (*(P1029)rt_nil_check(F->names_1313)).name;
(*(P1029)rt_nil_check(F->cmp_1315)).a = F->items_1314;
f_append_69(&F->head_1310, &F->tail_1311, F->cmp_1315);
F->names_1313 = (*(P1029)rt_nil_check(F->names_1313)).next;
}
F->more_1312 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P1029)rt_nil_check(F->x_1309)).c = F->head_1310;
} else if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1309)).name))->all), rt_str("ARRAY", 5))) {
F->head_1316 = NULL;
F->tail_1317 = NULL;
while ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; })))) {
f_append_69(&F->head_1316, &F->tail_1317, f_name_node_94());
if ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; })))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P1029)rt_nil_check(F->x_1309)).d = F->head_1316;
if (f_rep_word_129(((rt_int)0LL))) {
(*(P1029)rt_nil_check(F->x_1309)).c = f_rep_items_127();
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && f_rep_word_129(((rt_int)1LL)))) {
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1309)).c = f_rep_items_127();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->head_1318 = NULL;
F->tail_1319 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_69(&F->head_1318, &F->tail_1319, f_name_node_94());
F->dummy_1320 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P1029)rt_nil_check(F->x_1309)).d = F->head_1318;
}
F->result_ = F->x_1309;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_type_decl_131(void) {
  struct f_type_decl_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1321 = f_cur_line_72();
F->name_1322 = NULL;
F->params_1323 = NULL;
F->x_1324 = NULL;
F->tts_1325 = NULL;
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->name_1322 = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1325 = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1323 = f_formal_params_134();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1022)rt_nil_check((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->x_1324 = f_nn_65((((rt_int)44LL)), F->line_1321);
(*(P1029)rt_nil_check(F->x_1324)).d = F->params_1323;
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1324)).b = f_formal_params_134();
}
} else {
F->x_1324 = f_nn_65((((rt_int)43LL)), F->line_1321);
(*(P1029)rt_nil_check(F->x_1324)).b = F->params_1323;
}
(*(P1029)rt_nil_check(F->x_1324)).name = F->name_1322;
(*(P1029)rt_nil_check(F->x_1324)).e = F->tts_1325;
(*(P1029)rt_nil_check(F->x_1324)).a = f_p_subtype_96();
(*(P1029)rt_nil_check(F->x_1324)).c = f_rep_spec_126();
F->result_ = F->x_1324;
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

static P1029 f_formal_params_134(void) {
  struct f_formal_params_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1326 = NULL;
F->tail_1327 = NULL;
F->more_1328 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (F->more_1328) {
F->mode_1329 = (((rt_int)1LL));
F->names_1330 = NULL;
F->ntail_1331 = NULL;
F->st_1332 = NULL;
if ((((f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1329 = f_mode_of_133(&(((P1022)rt_nil_check((*(P1024)rt_nil_check((((P1026)rt_nil_check(g_toks_1060))->all).p[(rt_index(g_tpos_1062, (((P1026)rt_nil_check(g_toks_1060))->all).lo, (((P1026)rt_nil_check(g_toks_1060))->all).hi) - (((P1026)rt_nil_check(g_toks_1060))->all).lo)])).s))->all));
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
}
f_append_69(&F->names_1330, &F->ntail_1331, f_name_node_94());
while ((((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_80(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P1022)rt_nil_check(f_text_at_82(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P1022)rt_nil_check(f_text_at_82(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
f_append_69(&F->names_1330, &F->ntail_1331, f_name_node_94());
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1332 = f_p_subtype_96();
while ((F->names_1330 != NULL)) {
F->p_1333 = NULL;
F->p_1333 = f_nn_65((((rt_int)52LL)), (*(P1029)rt_nil_check(F->names_1330)).line);
(*(P1029)rt_nil_check(F->p_1333)).name = (*(P1029)rt_nil_check(F->names_1330)).name;
(*(P1029)rt_nil_check(F->p_1333)).ival = F->mode_1329;
(*(P1029)rt_nil_check(F->p_1333)).a = F->st_1332;
f_append_69(&F->head_1326, &F->tail_1327, F->p_1333);
F->names_1330 = (*(P1029)rt_nil_check(F->names_1330)).next;
}
F->more_1328 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1326;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_136(P1029 owner_135) {
  struct f_imports_list_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_135 = owner_135;
F->head_1334 = NULL;
F->tail_1335 = NULL;
F->more_1336 = 1;
if ((!f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1029)rt_nil_check(F->owner_135)).flag = rt_add((*(P1029)rt_nil_check(F->owner_135)).flag, ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (F->more_1336) {
F->ro_1337 = f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1338 = NULL;
F->x_1338 = f_name_node_94();
if (F->ro_1337) {
(*(P1029)rt_nil_check(F->x_1338)).ival = ((rt_int)1LL);
}
f_append_69(&F->head_1334, &F->tail_1335, F->x_1338);
F->more_1336 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1029)rt_nil_check(F->owner_135)).d = F->head_1334;
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

static P1022 f_definable_name_139(void) {
  struct f_definable_name_139fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL))))) {
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)2LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1022)rt_nil_check((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(rt_sub(g_tpos_1062, ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)); b_; }));
goto ret_;
} else if (((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P1022)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("*", 1)))) {
F->r_1339 = NULL;
F->r_1339 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
while ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; }))) {
F->r_1339 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_1339))->all), rt_str("*", 1)); b_; }));
} else if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1339 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_1339))->all), rt_str("..", 2)); b_; }));
} else if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->r_1339 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_1339))->all), rt_str(",", 1)); b_; }));
} else {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a subscripting selector is made of *, .. and ,", 46); b_; }));
}
}
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_1339))->all), rt_str(")", 1)); b_; }));
goto ret_;
}
if ((f_at_kind_78((((rt_int)1LL))) || (f_at_kind_78((((rt_int)3LL))) && f_is_definable_138(&(((P1022)rt_nil_check((*(P1024)rt_nil_check((((P1026)rt_nil_check(g_toks_1060))->all).p[(rt_index(g_tpos_1062, (((P1026)rt_nil_check(g_toks_1060))->all).lo, (((P1026)rt_nil_check(g_toks_1060))->all).hi) - (((P1026)rt_nil_check(g_toks_1060))->all).lo)])).s))->all))))) {
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->result_ = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(rt_sub(g_tpos_1062, ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P1029 f_subprogram_decl_140(void) {
  struct f_subprogram_decl_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1340 = f_cur_line_72();
F->x_1341 = NULL;
F->is_abn_1342 = f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1343 = f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
if (F->is_func_1343) {
F->x_1341 = f_nn_65((((rt_int)46LL)), F->line_1340);
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1341 = f_nn_65((((rt_int)45LL)), F->line_1340);
} else {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
if (F->is_abn_1342) {
(*(P1029)rt_nil_check(F->x_1341)).flag = ((rt_int)1LL);
}
(*(P1029)rt_nil_check(F->x_1341)).name = f_definable_name_139();
if ((((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1341)).name))->all), rt_str(">", 1)) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1341)).name))->all), rt_str("<=", 2))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1341)).name))->all), rt_str(">=", 2))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1341)).name))->all), rt_str("/=", 2)))) {
f_fail_23(F->line_1340, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1341)).name))->all), rt_str(" is not a definable symbol", 26)); b_; }));
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1341)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1341)).a = f_formal_params_134();
}
if (F->is_func_1343) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1029)rt_nil_check(F->x_1341)).b = f_p_subtype_96();
}
F->dummy_1344 = f_imports_list_136(F->x_1341);
if (((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P1029)rt_nil_check(F->x_1341)).prags == NULL)) {
(*(P1029)rt_nil_check(F->x_1341)).prags = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P1029)rt_nil_check(F->x_1341)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1341)).prags))->all), (((P1022)rt_nil_check((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1029)rt_nil_check(F->x_1341)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (F->is_func_1343) {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P1022)rt_nil_check(f_definable_name_139()))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1341)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1341)).name))->all)); b_; }));
}
F->result_ = F->x_1341;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_capsule_decl_141(void) {
  struct f_capsule_decl_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1345 = NULL;
F->x_1345 = f_nn_65((((rt_int)47LL)), f_cur_line_72());
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1345)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1345)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1345)).b = f_formal_params_134();
}
F->dummy_1346 = f_imports_list_136(F->x_1345);
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1029)rt_nil_check(F->x_1345)).ival = ((rt_int)1LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P1029)rt_nil_check(F->x_1345)).ival = ((rt_int)0LL);
} else {
F->head_1347 = NULL;
F->tail_1348 = NULL;
F->more_1349 = 1;
while (F->more_1349) {
F->n_1350 = NULL;
F->n_1350 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P1029)rt_nil_check(F->n_1350)).ival = ((rt_int)1LL);
}
(*(P1029)rt_nil_check(F->n_1350)).name = f_definable_name_139();
f_append_69(&F->head_1347, &F->tail_1348, F->n_1350);
F->more_1349 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1029)rt_nil_check(F->x_1345)).a = F->head_1347;
(*(P1029)rt_nil_check(F->x_1345)).ival = ((rt_int)2LL);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1029)rt_nil_check(F->x_1345)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
(*(P1029)rt_nil_check(F->x_1345)).eline = f_cur_line_72();
if ((!rt_str_eq((((P1022)rt_nil_check(f_expect_id_93()))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1345)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1345;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_formal_tt_142(void) {
  struct f_formal_tt_142fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1351 = NULL;
F->tail_1352 = NULL;
F->more_1353 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (F->more_1353) {
f_append_69(&F->head_1351, &F->tail_1352, f_name_node_94());
F->more_1353 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1351;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_generic_decl_143(void) {
  struct f_generic_decl_143fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1354 = NULL;
F->x_1354 = f_nn_65((((rt_int)51LL)), f_cur_line_72());
F->head_1355 = NULL;
F->tail_1356 = NULL;
F->more_1357 = 1;
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
while (F->more_1357) {
F->names_1358 = NULL;
F->names_1358 = f_id_list_95();
F->kind_1359 = ((rt_int)6LL);
F->st_1360 = NULL;
F->items_1361 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1359 = ((rt_int)1LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1359 = ((rt_int)2LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1359 = ((rt_int)3LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1359 = ((rt_int)4LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1359 = ((rt_int)5LL);
} else if (((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1022)rt_nil_check((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("STRING", 6))) && (!((f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P1022)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->kind_1359 = ((rt_int)7LL);
} else if (((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1022)rt_nil_check((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("ENUM", 4))) && (!((f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P1022)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->kind_1359 = ((rt_int)8LL);
} else {
F->st_1360 = f_p_subtype_96();
}
if (((F->kind_1359 <= ((rt_int)5LL)) && f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
F->items_1361 = f_type_list_144();
}
if (((F->kind_1359 == ((rt_int)4LL)) && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1360 = f_p_subtype_96();
}
while ((F->names_1358 != NULL)) {
F->p_1362 = NULL;
F->p_1362 = f_nn_65((((rt_int)52LL)), (*(P1029)rt_nil_check(F->names_1358)).line);
(*(P1029)rt_nil_check(F->p_1362)).name = (*(P1029)rt_nil_check(F->names_1358)).name;
(*(P1029)rt_nil_check(F->p_1362)).ival = F->kind_1359;
(*(P1029)rt_nil_check(F->p_1362)).a = F->st_1360;
(*(P1029)rt_nil_check(F->p_1362)).b = F->items_1361;
f_append_69(&F->head_1355, &F->tail_1356, F->p_1362);
F->names_1358 = (*(P1029)rt_nil_check(F->names_1358)).next;
}
F->more_1357 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->nhead_1363 = NULL;
F->ntail_1364 = NULL;
F->more_1357 = 1;
while (F->more_1357) {
F->it_1365 = NULL;
F->it_1365 = f_nn_65((((rt_int)52LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
(*(P1029)rt_nil_check(F->it_1365)).ival = ((rt_int)3LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
(*(P1029)rt_nil_check(F->it_1365)).ival = ((rt_int)4LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
(*(P1029)rt_nil_check(F->it_1365)).ival = ((rt_int)5LL);
}
(*(P1029)rt_nil_check(F->it_1365)).name = f_definable_name_139();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1029)rt_nil_check(F->it_1365)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1029)rt_nil_check(F->it_1365)).b = f_type_list_144();
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
(*(P1029)rt_nil_check(F->it_1365)).a = f_p_subtype_96();
}
f_append_69(&F->nhead_1363, &F->ntail_1364, F->it_1365);
F->more_1357 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1029)rt_nil_check(F->x_1354)).d = F->nhead_1363;
}
(*(P1029)rt_nil_check(F->x_1354)).a = F->head_1355;
(*(P1029)rt_nil_check(F->x_1354)).b = f_declaration_123();
(*(P1029)rt_nil_check(F->x_1354)).name = (*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->x_1354)).b)).name;
F->result_ = F->x_1354;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_type_list_144(void) {
  struct f_type_list_144fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1366 = NULL;
F->tail_1367 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1368 = 1;
while (F->more_1368) {
if (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P1022)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(",", 1)) || rt_str_eq((((P1022)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(")", 1))))) {
F->n_1369 = NULL;
F->n_1369 = f_nn_65((((rt_int)80LL)), f_cur_line_72());
(*(P1029)rt_nil_check(F->n_1369)).name = f_expect_id_93();
f_append_69(&F->head_1366, &F->tail_1367, F->n_1369);
} else {
f_append_69(&F->head_1366, &F->tail_1367, f_p_subtype_96());
}
F->more_1368 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1366;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_task_decl_145(void) {
  struct f_task_decl_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1370 = NULL;
F->x_1370 = f_nn_65((((rt_int)50LL)), f_cur_line_72());
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1370)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1370)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1370)).a = f_formal_params_134();
}
F->dummy_1371 = f_imports_list_136(F->x_1370);
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1029)rt_nil_check(F->x_1370)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P1022)rt_nil_check(f_expect_id_93()))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1370)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1370)).name))->all)); b_; }));
}
F->result_ = F->x_1370;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_expose_decl_146(void) {
  struct f_expose_decl_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1372 = NULL;
F->x_1372 = f_nn_65((((rt_int)48LL)), f_cur_line_72());
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1029)rt_nil_check(F->x_1372)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1373 = NULL;
F->tail_1374 = NULL;
F->more_1375 = 1;
while (F->more_1375) {
F->n_1376 = NULL;
F->n_1376 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P1029)rt_nil_check(F->n_1376)).ival = ((rt_int)1LL);
}
(*(P1029)rt_nil_check(F->n_1376)).name = f_definable_name_139();
f_append_69(&F->head_1373, &F->tail_1374, F->n_1376);
F->more_1375 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1029)rt_nil_check(F->x_1372)).a = F->head_1373;
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P1029)rt_nil_check(F->x_1372)).flag = ((rt_int)1LL);
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P1029)rt_nil_check(F->x_1372)).flag = rt_add((*(P1029)rt_nil_check(F->x_1372)).flag, ((rt_int)2LL));
}
(*(P1029)rt_nil_check(F->x_1372)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1372)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1372)).b = f_actual_params_98();
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1377 = NULL;
F->tail_1378 = NULL;
F->more_1379 = 1;
while (F->more_1379) {
F->n_1380 = NULL;
F->n_1380 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
F->tgt_1381 = NULL;
F->tgt_1381 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
(*(P1029)rt_nil_check(F->n_1380)).name = f_definable_name_139();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P1029)rt_nil_check(F->tgt_1381)).name = f_definable_name_139();
(*(P1029)rt_nil_check(F->n_1380)).a = F->tgt_1381;
f_append_69(&F->head_1377, &F->tail_1378, F->n_1380);
F->more_1379 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1029)rt_nil_check(F->x_1372)).c = F->head_1377;
}
F->result_ = F->x_1372;
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

static P1029 f_statement_149(void) {
  struct f_statement_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1382 = NULL;
F->ltail_1383 = NULL;
F->match_1384 = NULL;
F->s_1385 = NULL;
while (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P1022)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_69(&F->labels_1382, &F->ltail_1383, f_name_node_94());
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
}
if (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_148(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1022)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all); b_; })))) {
F->match_1384 = f_expect_id_93();
}
F->s_1385 = f_unlabeled_statement_150();
if ((F->match_1384 != NULL)) {
if (((((((((*(P1029)rt_nil_check(F->s_1385)).kind != (((rt_int)22LL))) && ((*(P1029)rt_nil_check(F->s_1385)).kind != (((rt_int)23LL)))) && ((*(P1029)rt_nil_check(F->s_1385)).kind != (((rt_int)24LL)))) && ((*(P1029)rt_nil_check(F->s_1385)).kind != (((rt_int)25LL)))) && ((*(P1029)rt_nil_check(F->s_1385)).kind != (((rt_int)26LL)))) && ((*(P1029)rt_nil_check(F->s_1385)).kind != (((rt_int)35LL)))) && ((*(P1029)rt_nil_check(F->s_1385)).kind != (((rt_int)36LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->s_1385)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P1022)rt_nil_check(f_expect_id_93()))->all), (((P1022)rt_nil_check(F->match_1384))->all)))) {
f_fail_23((*(P1029)rt_nil_check(F->s_1385)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P1022)rt_nil_check(F->match_1384))->all)); b_; }));
}
(*(P1029)rt_nil_check(F->s_1385)).tag = F->match_1384;
}
(*(P1029)rt_nil_check(F->s_1385)).labels = F->labels_1382;
F->result_ = F->s_1385;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_unlabeled_statement_150(void) {
  struct f_unlabeled_statement_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1386 = f_cur_line_72();
F->x_1387 = NULL;
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
F->x_1387 = f_nn_65((((rt_int)25LL)), F->line_1386);
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1387)).a = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1387;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_158();
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1387 = f_nn_65((((rt_int)27LL)), F->line_1386);
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1387)).name = f_expect_id_93();
F->result_ = F->x_1387;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1387 = f_nn_65((((rt_int)28LL)), F->line_1386);
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P1029)rt_nil_check(F->x_1387)).a = f_expr_107();
}
F->result_ = F->x_1387;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1387 = f_nn_65((((rt_int)29LL)), F->line_1386);
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1387)).name = f_expect_id_93();
F->result_ = F->x_1387;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1387 = f_nn_65((((rt_int)30LL)), F->line_1386);
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1387)).name = f_expect_id_93();
F->result_ = F->x_1387;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->result_ = f_nn_65((((rt_int)31LL)), F->line_1386);
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1387 = f_nn_65((((rt_int)34LL)), F->line_1386);
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1387)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1387)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1387)).b = f_actual_params_98();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P1029)rt_nil_check(F->x_1387)).a = f_postfix_117();
F->result_ = F->x_1387;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1388 = NULL;
F->tail_1389 = NULL;
F->x_1387 = f_nn_65((((rt_int)35LL)), F->line_1386);
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1390 = NULL;
F->itail_1391 = NULL;
F->more_1392 = 1;
while (F->more_1392) {
f_append_69(&F->invs_1390, &F->itail_1391, f_postfix_117());
F->more_1392 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_69(&F->head_1388, &F->tail_1389, f_arm_154(F->invs_1390, f_body_121(), F->line_1386));
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P1029)rt_nil_check(F->x_1387)).a = F->head_1388;
F->result_ = F->x_1387;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1387 = f_nn_65((((rt_int)36LL)), F->line_1386);
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1387)).a = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P1029)rt_nil_check(F->x_1387)).b = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1387;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1387 = f_nn_65((((rt_int)32LL)), F->line_1386);
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1387)).a = f_postfix_117();
if ((!(f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1022)rt_nil_check((*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1029)rt_nil_check(F->x_1387)).b = f_actual_params_98();
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P1029)rt_nil_check(F->x_1387)).c = f_expr_107();
}
F->result_ = F->x_1387;
goto ret_;
}
{
F->target_1393 = NULL;
F->target_1393 = f_postfix_117();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1387 = f_nn_65((((rt_int)20LL)), F->line_1386);
(*(P1029)rt_nil_check(F->x_1387)).a = F->target_1393;
(*(P1029)rt_nil_check(F->x_1387)).b = f_expr_107();
} else {
F->x_1387 = f_nn_65((((rt_int)21LL)), F->line_1386);
(*(P1029)rt_nil_check(F->x_1387)).a = F->target_1393;
}
}
F->result_ = F->x_1387;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_arm_154(P1029 cond_151, P1029 b_152, rt_int line_153) {
  struct f_arm_154fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_151 = cond_151;
F->b_152 = b_152;
F->line_153 = line_153;
F->x_1394 = NULL;
F->x_1394 = f_nn_65((((rt_int)60LL)), F->line_153);
(*(P1029)rt_nil_check(F->x_1394)).a = F->cond_151;
(*(P1029)rt_nil_check(F->x_1394)).b = F->b_152;
F->result_ = F->x_1394;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_if_stmt_155(void) {
  struct f_if_stmt_155fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1395 = NULL;
F->x_1395 = f_nn_65((((rt_int)22LL)), f_cur_line_72());
F->head_1396 = NULL;
F->tail_1397 = NULL;
F->cond_1398 = NULL;
F->go_1399 = 1;
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
F->cond_1398 = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_69(&F->head_1396, &F->tail_1397, f_arm_154(F->cond_1398, f_body_121(), (*(P1029)rt_nil_check(F->x_1395)).line));
while (F->go_1399) {
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1398 = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_69(&F->head_1396, &F->tail_1397, f_arm_154(F->cond_1398, f_body_121(), (*(P1029)rt_nil_check(F->x_1395)).line));
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P1029)rt_nil_check(F->x_1395)).flag = ((rt_int)1LL);
(*(P1029)rt_nil_check(F->x_1395)).b = f_body_121();
} else {
F->go_1399 = 0;
}
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P1029)rt_nil_check(F->x_1395)).a = F->head_1396;
F->result_ = F->x_1395;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_case_stmt_156(void) {
  struct f_case_stmt_156fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1400 = NULL;
F->x_1400 = f_nn_65((((rt_int)23LL)), f_cur_line_72());
F->head_1401 = NULL;
F->tail_1402 = NULL;
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1400)).a = f_expr_107();
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1403 = NULL;
F->ltail_1404 = NULL;
F->more_1405 = 1;
while (F->more_1405) {
F->l_1406 = NULL;
F->l_1406 = f_nn_65((((rt_int)61LL)), f_cur_line_72());
(*(P1029)rt_nil_check(F->l_1406)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1029)rt_nil_check(F->l_1406)).b = f_expr_107();
}
f_append_69(&F->labs_1403, &F->ltail_1404, F->l_1406);
F->more_1405 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_69(&F->head_1401, &F->tail_1402, f_arm_154(F->labs_1403, f_body_121(), (*(P1029)rt_nil_check(F->x_1400)).line));
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1029)rt_nil_check(F->x_1400)).flag = ((rt_int)1LL);
(*(P1029)rt_nil_check(F->x_1400)).c = f_body_121();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P1029)rt_nil_check(F->x_1400)).b = F->head_1401;
F->result_ = F->x_1400;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_repeat_stmt_157(void) {
  struct f_repeat_stmt_157fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1407 = NULL;
F->x_1407 = f_nn_65((((rt_int)24LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P1029)rt_nil_check(F->x_1407)).flag = ((rt_int)1LL);
(*(P1029)rt_nil_check(F->x_1407)).name = f_expect_id_93();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P1029)rt_nil_check(F->x_1407)).ival = ((rt_int)1LL);
}
(*(P1029)rt_nil_check(F->x_1407)).a = f_p_subtype_96();
} else {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P1029)rt_nil_check(F->x_1407)).a = f_expr_107();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P1029)rt_nil_check(F->x_1407)).b = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1407;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_guard_stmt_158(void) {
  struct f_guard_stmt_158fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1408 = NULL;
F->x_1408 = f_nn_65((((rt_int)26LL)), f_cur_line_72());
F->head_1409 = NULL;
F->tail_1410 = NULL;
g_tpos_1062 = rt_add(g_tpos_1062, ((rt_int)1LL));
(*(P1029)rt_nil_check(F->x_1408)).a = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1411 = NULL;
F->h_1411 = f_nn_65((((rt_int)62LL)), f_cur_line_72());
(*(P1029)rt_nil_check(F->h_1411)).a = f_id_list_95();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1029)rt_nil_check(F->h_1411)).b = f_body_121();
f_append_69(&F->head_1409, &F->tail_1410, F->h_1411);
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1029)rt_nil_check(F->x_1408)).flag = ((rt_int)1LL);
(*(P1029)rt_nil_check(F->x_1408)).c = f_body_121();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P1029)rt_nil_check(F->x_1408)).b = F->head_1409;
F->result_ = F->x_1408;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_program_159(void) {
  struct f_program_159fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1412 = NULL;
F->tail_1413 = NULL;
while ((!f_at_kind_78((((rt_int)0LL))))) {
if ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1414 = NULL;
F->pr_1414 = (*(P1024)rt_nil_check(({ A1028 b_ = (((P1026)rt_nil_check(g_toks_1060))->all); b_.p[(rt_index(g_tpos_1062, b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1415 = NULL;
F->u_1415 = f_capsule_decl_141();
(*(P1029)rt_nil_check(F->u_1415)).prags = F->pr_1414;
f_append_69(&F->head_1412, &F->tail_1413, F->u_1415);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1412;
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
F->h_1416 = ((rt_int)0LL);
{ rt_int lo1418 = ((rt_int)1LL), hi1419 = ((rt_int)(((*F->s_160)).len));
for (rt_int it1420 = lo1418; it1420 <= hi1419; it1420++) {
F->i_1417 = it1420;
F->h_1416 = rt_mod(rt_add(rt_mul(F->h_1416, ((rt_int)31LL)), ((rt_int)(rt_str_get((*F->s_160), F->i_1417)) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = F->h_1416;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1039 f_lookup_163(rstr *name_162) {
  struct f_lookup_163fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_162 = name_162;
F->y_1421 = NULL;
F->y_1421 = ({ A1045 b_ = (((P1043)rt_nil_check(g_table_1069))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_1070 != NULL)) {
while ((F->y_1421 != NULL)) {
if ((((*(P1039)rt_nil_check(F->y_1421)).depth >= g_gdepth_1102) && rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_1421)).name))->all), (*F->name_162)))) {
F->result_ = F->y_1421;
goto ret_;
}
F->y_1421 = (*(P1039)rt_nil_check(F->y_1421)).chain;
}
F->y_1421 = ({ A1045 b_ = (((P1043)rt_nil_check(g_genv_1070))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1421 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_1421)).name))->all), (*F->name_162))) {
F->result_ = F->y_1421;
goto ret_;
}
F->y_1421 = (*(P1039)rt_nil_check(F->y_1421)).chain;
}
F->y_1421 = ({ A1045 b_ = (((P1043)rt_nil_check(g_table_1069))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1421 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_1421)).name))->all), (*F->name_162))) {
F->result_ = F->y_1421;
goto ret_;
}
F->y_1421 = (*(P1039)rt_nil_check(F->y_1421)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1039 f_lookup_decl_165(P1029 d_164) {
  struct f_lookup_decl_165fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_164 = d_164;
F->y_1422 = NULL;
F->y_1422 = ({ A1045 b_ = (((P1043)rt_nil_check(g_table_1069))->all); b_.p[(rt_index(f_hash_161(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_164)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1422 != NULL)) {
if (((*(P1039)rt_nil_check(F->y_1422)).decl == F->d_164)) {
F->result_ = F->y_1422;
goto ret_;
}
F->y_1422 = (*(P1039)rt_nil_check(F->y_1422)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_168(P1039 y_166, rt_int line_167) {
  struct f_define_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_166 = y_166;
F->line_167 = line_167;
F->h_1423 = f_hash_161(&(((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_166)).name))->all));
F->z_1424 = NULL;
F->z_1424 = ({ A1045 b_ = (((P1043)rt_nil_check(g_table_1069))->all); b_.p[(rt_index(F->h_1423, b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1424 != NULL)) {
if (((((*(P1039)rt_nil_check(F->z_1424)).depth == g_depth_1072) && rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->z_1424)).name))->all), (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_166)).name))->all))) && (!(((f_overloadable_170(F->y_166) && f_overloadable_170(F->z_1424)) && ((*(P1039)rt_nil_check(F->z_1424)).kind == (*(P1039)rt_nil_check(F->y_166)).kind)) && (!(f_same_signature_176((*(P1039)rt_nil_check(F->y_166)).params, (*(P1039)rt_nil_check(F->z_1424)).params) && f_same_tt_173((*(P1039)rt_nil_check(F->y_166)).decl, (*(P1039)rt_nil_check(F->z_1424)).decl))))))) {
f_fail_23(F->line_167, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_166)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1424 = (*(P1039)rt_nil_check(F->z_1424)).chain;
}
(*(P1039)rt_nil_check(F->y_166)).depth = g_depth_1072;
(*(P1039)rt_nil_check(F->y_166)).chain = ({ A1045 b_ = (((P1043)rt_nil_check(g_table_1069))->all); b_.p[(rt_index(F->h_1423, b_.lo, b_.hi) - b_.lo)]; });
(((P1043)rt_nil_check(g_table_1069))->all).p[(rt_index(F->h_1423, (((P1043)rt_nil_check(g_table_1069))->all).lo, (((P1043)rt_nil_check(g_table_1069))->all).hi) - (((P1043)rt_nil_check(g_table_1069))->all).lo)] = F->y_166;
(*(P1039)rt_nil_check(F->y_166)).stack = g_scope_stack_1073;
g_scope_stack_1073 = F->y_166;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_170(P1039 y_169) {
  struct f_overloadable_170fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_169 = y_169;
F->result_ = (((((*(P1039)rt_nil_check(F->y_169)).kind == (((rt_int)3LL))) || ((*(P1039)rt_nil_check(F->y_169)).kind == (((rt_int)4LL)))) || ((*(P1039)rt_nil_check(F->y_169)).kind == (((rt_int)9LL)))) || ((*(P1039)rt_nil_check(F->y_169)).kind == (((rt_int)8LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_173(P1029 a_171, P1029 b_172) {
  struct f_same_tt_173fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_171 = a_171;
F->b_172 = b_172;
F->x_1425 = NULL;
F->y_1426 = NULL;
if (((F->a_171 == NULL) || (F->b_172 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1425 = (*(P1029)rt_nil_check(F->a_171)).e;
F->y_1426 = (*(P1029)rt_nil_check(F->b_172)).e;
while (((F->x_1425 != NULL) && (F->y_1426 != NULL))) {
if ((!rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1425)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->y_1426)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1425 = (*(P1029)rt_nil_check(F->x_1425)).next;
F->y_1426 = (*(P1029)rt_nil_check(F->y_1426)).next;
}
F->result_ = ((F->x_1425 == NULL) && (F->y_1426 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_176(P1041 a_174, P1041 b_175) {
  struct f_same_signature_176fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_174 = a_174;
F->b_175 = b_175;
F->x_1427 = NULL;
F->x_1427 = F->a_174;
F->y_1428 = NULL;
F->y_1428 = F->b_175;
while (((F->x_1427 != NULL) && (F->y_1428 != NULL))) {
if ((!f_same_221((*(P1041)rt_nil_check(F->x_1427)).t, (*(P1041)rt_nil_check(F->y_1428)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1427 = (*(P1041)rt_nil_check(F->x_1427)).next;
F->y_1428 = (*(P1041)rt_nil_check(F->y_1428)).next;
}
F->result_ = ((F->x_1427 == NULL) && (F->y_1428 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_177(void) {
  struct f_open_scope_177fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_1072 = rt_add(g_depth_1072, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_178(void) {
  struct f_close_scope_178fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_1073 != NULL) && ((*(P1039)rt_nil_check(g_scope_stack_1073)).depth == g_depth_1072))) {
(((P1043)rt_nil_check(g_table_1069))->all).p[(rt_index(f_hash_161(&(((P1022)rt_nil_check((*(P1039)rt_nil_check(g_scope_stack_1073)).name))->all)), (((P1043)rt_nil_check(g_table_1069))->all).lo, (((P1043)rt_nil_check(g_table_1069))->all).hi) - (((P1043)rt_nil_check(g_table_1069))->all).lo)] = (*(P1039)rt_nil_check(g_scope_stack_1073)).chain;
g_scope_stack_1073 = (*(P1039)rt_nil_check(g_scope_stack_1073)).stack;
}
g_depth_1072 = rt_sub(g_depth_1072, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1039 f_new_sym_181(rt_int kind_179, P1022 name_180) {
  struct f_new_sym_181fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_179 = kind_179;
F->name_180 = name_180;
F->y_1429 = NULL;
{ R1040 *cell1430 = rt_alloc(sizeof(R1040));
(*cell1430).name = NULL;
(*cell1430).t = NULL;
(*cell1430).c = NULL;
(*cell1430).access = NULL;
(*cell1430).cname = NULL;
(*cell1430).st = NULL;
(*cell1430).decl = NULL;
(*cell1430).params = NULL;
(*cell1430).result = NULL;
(*cell1430).members = NULL;
(*cell1430).mnext = NULL;
(*cell1430).binds = NULL;
(*cell1430).insts = NULL;
(*cell1430).env = NULL;
(*cell1430).chain = NULL;
(*cell1430).stack = NULL;
(*cell1430).owner = NULL;
(*cell1430).gctx = NULL;
(*cell1430).mv = NULL;
(*cell1430).reqs = NULL;
(*cell1430).home = NULL;
(*cell1430).capn = NULL;
(*cell1430).tbinds = NULL;
(*cell1430).loc = NULL;
(*cell1430).reqs_sym = NULL;
F->y_1429 = cell1430;
}
(*(P1039)rt_nil_check(F->y_1429)).kind = F->kind_179;
(*(P1039)rt_nil_check(F->y_1429)).name = F->name_180;
F->result_ = F->y_1429;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1035 f_new_typ_183(rt_int kind_182) {
  struct f_new_typ_183fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_182 = kind_182;
F->t_1431 = NULL;
{ R1036 *cell1432 = rt_alloc(sizeof(R1036));
(*cell1432).name = NULL;
(*cell1432).lits = NULL;
(*cell1432).elem = NULL;
(*cell1432).idx = NULL;
(*cell1432).idx2 = NULL;
(*cell1432).elemcons = NULL;
(*cell1432).elemst = NULL;
(*cell1432).under = NULL;
(*cell1432).tparams = NULL;
(*cell1432).ocap = NULL;
(*cell1432).fields = NULL;
(*cell1432).target = NULL;
(*cell1432).decl = NULL;
(*cell1432).cname = NULL;
(*cell1432).initp = NULL;
(*cell1432).finalp = NULL;
(*cell1432).tpsyms = NULL;
(*cell1432).gen = NULL;
(*cell1432).gbinds = NULL;
(*cell1432).next = NULL;
(*cell1432).idxs = NULL;
(*cell1432).assignp = NULL;
(*cell1432).eqp = NULL;
(*cell1432).ltp = NULL;
(*cell1432).repn = NULL;
F->t_1431 = cell1432;
}
(*(P1035)rt_nil_check(F->t_1431)).kind = F->kind_182;
F->result_ = F->t_1431;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1031 f_new_cons_184(void) {
  struct f_new_cons_184fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1433 = NULL;
{ R1032 *cell1434 = rt_alloc(sizeof(R1032));
(*cell1434).lo = NULL;
(*cell1434).hi = NULL;
(*cell1434).lo2 = NULL;
(*cell1434).hi2 = NULL;
(*cell1434).slen = NULL;
(*cell1434).args = NULL;
(*cell1434).prec = NULL;
(*cell1434).bnds = NULL;
F->c_1433 = cell1434;
}
F->result_ = F->c_1433;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_186(P1035 t_185) {
  struct f_scalar_kind_186fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_185 = t_185;
F->result_ = ((F->t_185 != NULL) && ((((*(P1035)rt_nil_check(F->t_185)).kind == (((rt_int)1LL))) || ((*(P1035)rt_nil_check(F->t_185)).kind == (((rt_int)3LL)))) || ((*(P1035)rt_nil_check(F->t_185)).kind == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_188(P1035 t_187) {
  struct f_bound_ctype_188fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_187 = t_187;
if (((*(P1035)rt_nil_check(F->t_187)).kind == (((rt_int)3LL)))) {
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

static rstr f_cbound_191(P1031 c_189, rstr *b_190) {
  struct f_cbound_191fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_189 = c_189;
F->b_190 = b_190;
F->p_1435 = NULL;
F->p_1435 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!(*(P1031)rt_nil_check(F->c_189)).dyn) || ((*(P1031)rt_nil_check(F->c_189)).lvl <= ((rt_int)0LL)))) {
F->result_ = (*F->b_190);
goto ret_;
}
{ rt_int lo1437 = ((rt_int)1LL), hi1438 = rt_sub(g_cur_level_1086, (*(P1031)rt_nil_check(F->c_189)).lvl);
for (rt_int it1439 = lo1437; it1439 <= hi1438; it1439++) {
F->i_1436 = it1439;
F->p_1435 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->p_1435))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->p_1435))->all), rt_str("->", 2)), (*F->b_190));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_193(P1031 c_192) {
  struct f_clo_193fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_192 = c_192;
F->result_ = f_cbound_191(F->c_192, &(((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_192)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_195(P1031 c_194) {
  struct f_chi_195fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_194 = c_194;
F->result_ = f_cbound_191(F->c_194, &(((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_194)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_198(P1035 t_196, P1031 c_197) {
  struct f_sub_lo_198fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_196 = t_196;
F->c_197 = c_197;
if (((F->c_197 != NULL) && ((*(P1031)rt_nil_check(F->c_197)).lo != NULL))) {
F->result_ = f_clo_193(F->c_197);
goto ret_;
} else if (((*(P1035)rt_nil_check(F->t_196)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if (((*(P1035)rt_nil_check(F->t_196)).kind == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_201(P1035 t_199, P1031 c_200) {
  struct f_sub_hi_201fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_199 = t_199;
F->c_200 = c_200;
if (((F->c_200 != NULL) && ((*(P1031)rt_nil_check(F->c_200)).lo != NULL))) {
F->result_ = f_chi_195(F->c_200);
goto ret_;
} else if (((*(P1035)rt_nil_check(F->t_199)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if (((*(P1035)rt_nil_check(F->t_199)).kind == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_71((*(P1035)rt_nil_check(F->t_199)).lits), ((rt_int)1LL)));
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
if ((!g_in_func_1085)) {
F->g_1440 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_202)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1079, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_203)), rt_str(" ", 1)), F->g_1440), rt_str(";", 1)); b_; }));
g_st_field_1091 = f_mk_3(&F->g_1440);
F->result_ = F->g_1440;
goto ret_;
}
{
F->f_1441 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_202), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_203)), rt_str(" ", 1)), F->f_1441), rt_str(";", 1)); b_; }));
g_st_field_1091 = f_mk_3(&F->f_1441);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1441);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1031 f_copy_cons_206(P1031 c_205) {
  struct f_copy_cons_206fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_205 = c_205;
F->r_1442 = NULL;
{ R1032 *cell1443 = rt_alloc(sizeof(R1032));
(*cell1443).lo = NULL;
(*cell1443).hi = NULL;
(*cell1443).lo2 = NULL;
(*cell1443).hi2 = NULL;
(*cell1443).slen = NULL;
(*cell1443).args = NULL;
(*cell1443).prec = NULL;
(*cell1443).bnds = NULL;
F->r_1442 = cell1443;
}
(*(P1031)rt_nil_check(F->r_1442)).lo = (*(P1031)rt_nil_check(F->c_205)).lo;
(*(P1031)rt_nil_check(F->r_1442)).hi = (*(P1031)rt_nil_check(F->c_205)).hi;
(*(P1031)rt_nil_check(F->r_1442)).lo2 = (*(P1031)rt_nil_check(F->c_205)).lo2;
(*(P1031)rt_nil_check(F->r_1442)).hi2 = (*(P1031)rt_nil_check(F->c_205)).hi2;
(*(P1031)rt_nil_check(F->r_1442)).slen = (*(P1031)rt_nil_check(F->c_205)).slen;
(*(P1031)rt_nil_check(F->r_1442)).mlo = (*(P1031)rt_nil_check(F->c_205)).mlo;
(*(P1031)rt_nil_check(F->r_1442)).mhi = (*(P1031)rt_nil_check(F->c_205)).mhi;
(*(P1031)rt_nil_check(F->r_1442)).hasm = (*(P1031)rt_nil_check(F->c_205)).hasm;
(*(P1031)rt_nil_check(F->r_1442)).args = (*(P1031)rt_nil_check(F->c_205)).args;
(*(P1031)rt_nil_check(F->r_1442)).dyn = (*(P1031)rt_nil_check(F->c_205)).dyn;
(*(P1031)rt_nil_check(F->r_1442)).lvl = (*(P1031)rt_nil_check(F->c_205)).lvl;
(*(P1031)rt_nil_check(F->r_1442)).prec = (*(P1031)rt_nil_check(F->c_205)).prec;
F->result_ = F->r_1442;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1031 f_freeze_209(P1031 c_207, P1035 t_208) {
  struct f_freeze_209fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_207 = c_207;
F->t_208 = t_208;
F->r_1444 = NULL;
F->saved_field_1445 = NULL;
F->saved_field_1445 = g_st_field_1091;
if ((((((F->c_207 == NULL) || ((*(P1031)rt_nil_check(F->c_207)).lo == NULL)) || (*(P1031)rt_nil_check(F->c_207)).hasm) || (*(P1031)rt_nil_check(F->c_207)).dyn) || (!f_scalar_kind_186(F->t_208)))) {
F->result_ = F->c_207;
goto ret_;
}
F->r_1444 = f_copy_cons_206(F->c_207);
{
F->ct_1446 = rt_str_copy(f_bound_ctype_188(F->t_208));
F->la_1447 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1446));
F->lf_1448 = rt_str_copy((((P1022)rt_nil_check(g_st_field_1091))->all));
F->ha_1449 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1446));
F->hf_1450 = rt_str_copy((((P1022)rt_nil_check(g_st_field_1091))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1447, rt_str(" = ", 3)), f_clo_193(F->c_207)), rt_str("; ", 2)), F->ha_1449), rt_str(" = ", 3)), f_chi_195(F->c_207)), rt_str(";", 1)); b_; }));
if (g_in_func_1085) {
(*(P1031)rt_nil_check(F->r_1444)).lo = f_mk_3(&F->lf_1448);
(*(P1031)rt_nil_check(F->r_1444)).hi = f_mk_3(&F->hf_1450);
(*(P1031)rt_nil_check(F->r_1444)).dyn = 1;
(*(P1031)rt_nil_check(F->r_1444)).lvl = g_cur_level_1086;
} else {
(*(P1031)rt_nil_check(F->r_1444)).lo = f_mk_3(&F->la_1447);
(*(P1031)rt_nil_check(F->r_1444)).hi = f_mk_3(&F->ha_1449);
(*(P1031)rt_nil_check(F->r_1444)).dyn = 0;
}
}
g_st_field_1091 = F->saved_field_1445;
F->result_ = F->r_1444;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_213(P1035 t_210, P1031 c_211, rstr *v_212) {
  struct f_checked_213fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_210 = t_210;
F->c_211 = c_211;
F->v_212 = v_212;
if ((((F->c_211 == NULL) || (!f_scalar_kind_186(F->t_210))) || f_suppressed_512(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_212);
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->t_210)).kind != (((rt_int)3LL))) && (*(P1031)rt_nil_check(F->c_211)).hasm)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_212)), rt_str(", ", 2)), f_itos_7((*(P1031)rt_nil_check(F->c_211)).mlo)), rt_str(", ", 2)), f_itos_7((*(P1031)rt_nil_check(F->c_211)).mhi)), rt_str(")", 1));
goto ret_;
} else if (((*(P1031)rt_nil_check(F->c_211)).lo == NULL)) {
F->result_ = (*F->v_212);
goto ret_;
} else if (((*(P1035)rt_nil_check(F->t_210)).kind == (((rt_int)3LL)))) {
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

static int f_same_lits_216(P1029 a_214, P1029 b_215) {
  struct f_same_lits_216fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_214 = a_214;
F->b_215 = b_215;
F->x_1451 = NULL;
F->x_1451 = F->a_214;
F->y_1452 = NULL;
F->y_1452 = F->b_215;
while (((F->x_1451 != NULL) && (F->y_1452 != NULL))) {
if ((!rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_1451)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->y_1452)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1451 = (*(P1029)rt_nil_check(F->x_1451)).next;
F->y_1452 = (*(P1029)rt_nil_check(F->y_1452)).next;
}
F->result_ = ((F->x_1451 == NULL) && (F->y_1452 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1035 f_str_elem_218(P1035 t_217) {
  struct f_str_elem_218fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_217 = t_217;
if (((*(P1035)rt_nil_check(F->t_217)).elem == NULL)) {
F->result_ = g_ty_ascii_1117;
goto ret_;
}
F->result_ = (*(P1035)rt_nil_check(F->t_217)).elem;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_221(P1035 a_219, P1035 b_220) {
  struct f_same_221fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_219 = a_219;
F->b_220 = b_220;
if ((F->a_219 == F->b_220)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_219 == NULL) || (F->b_220 == NULL)) || ((*(P1035)rt_nil_check(F->a_219)).kind != (*(P1035)rt_nil_check(F->b_220)).kind))) {
F->result_ = 0;
goto ret_;
}
if ((((*(P1035)rt_nil_check(F->a_219)).kind == (((rt_int)5LL))) || ((*(P1035)rt_nil_check(F->a_219)).kind == (((rt_int)10LL))))) {
F->result_ = f_same_221(f_str_elem_218(F->a_219), f_str_elem_218(F->b_220));
goto ret_;
}
if ((((((*(P1035)rt_nil_check(F->a_219)).kind == (((rt_int)1LL))) || ((*(P1035)rt_nil_check(F->a_219)).kind == (((rt_int)2LL)))) || ((*(P1035)rt_nil_check(F->a_219)).kind == (((rt_int)3LL)))) || ((*(P1035)rt_nil_check(F->a_219)).kind == (((rt_int)9LL))))) {
F->result_ = 1;
goto ret_;
}
if (((*(P1035)rt_nil_check(F->a_219)).kind == (((rt_int)4LL)))) {
F->result_ = f_same_lits_216((*(P1035)rt_nil_check(F->a_219)).lits, (*(P1035)rt_nil_check(F->b_220)).lits);
goto ret_;
}
if (((*(P1035)rt_nil_check(F->a_219)).kind == (((rt_int)6LL)))) {
F->x_1453 = NULL;
F->x_1453 = (*(P1035)rt_nil_check(F->a_219)).idxs;
F->y_1454 = NULL;
F->y_1454 = (*(P1035)rt_nil_check(F->b_220)).idxs;
while (((F->x_1453 != NULL) && (F->y_1454 != NULL))) {
if ((!f_same_221((*(P1050)rt_nil_check(F->x_1453)).t, (*(P1050)rt_nil_check(F->y_1454)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1453 = (*(P1050)rt_nil_check(F->x_1453)).next;
F->y_1454 = (*(P1050)rt_nil_check(F->y_1454)).next;
}
F->result_ = (((F->x_1453 == NULL) && (F->y_1454 == NULL)) && f_same_221((*(P1035)rt_nil_check(F->a_219)).elem, (*(P1035)rt_nil_check(F->b_220)).elem));
goto ret_;
}
if ((((*(P1035)rt_nil_check(F->a_219)).kind == (((rt_int)16LL))) || ((*(P1035)rt_nil_check(F->a_219)).kind == (((rt_int)12LL))))) {
F->result_ = f_same_221((*(P1035)rt_nil_check(F->a_219)).elem, (*(P1035)rt_nil_check(F->b_220)).elem);
goto ret_;
}
if ((((*(P1035)rt_nil_check(F->a_219)).kind == (((rt_int)7LL))) || ((*(P1035)rt_nil_check(F->a_219)).kind == (((rt_int)17LL))))) {
F->f_1455 = NULL;
F->f_1455 = (*(P1035)rt_nil_check(F->a_219)).fields;
F->g_1456 = NULL;
F->g_1456 = (*(P1035)rt_nil_check(F->b_220)).fields;
while (((F->f_1455 != NULL) && (F->g_1456 != NULL))) {
if (((!rt_str_eq((((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_1455)).name))->all), (((P1022)rt_nil_check((*(P1037)rt_nil_check(F->g_1456)).name))->all))) || (!f_same_221((*(P1037)rt_nil_check(F->f_1455)).t, (*(P1037)rt_nil_check(F->g_1456)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1455 = (*(P1037)rt_nil_check(F->f_1455)).next;
F->g_1456 = (*(P1037)rt_nil_check(F->g_1456)).next;
}
F->result_ = ((F->f_1455 == NULL) && (F->g_1456 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1035 f_base_of_223(P1035 t_222) {
  struct f_base_of_223fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_222 = t_222;
if ((((F->t_222 != NULL) && ((*(P1035)rt_nil_check(F->t_222)).kind == (((rt_int)15LL)))) && ((*(P1035)rt_nil_check(F->t_222)).tparams == NULL))) {
F->result_ = f_base_of_223((*(P1035)rt_nil_check(F->t_222)).under);
goto ret_;
}
F->result_ = F->t_222;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1031 f_base_cons_226(P1035 t_224, P1031 c_225) {
  struct f_base_cons_226fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_224 = t_224;
F->c_225 = c_225;
if (((((F->t_224 != NULL) && ((*(P1035)rt_nil_check(F->t_224)).kind == (((rt_int)15LL)))) && ((*(P1035)rt_nil_check(F->t_224)).tparams == NULL)) && ((*(P1035)rt_nil_check(F->t_224)).elemcons != NULL))) {
F->result_ = f_base_cons_226((*(P1035)rt_nil_check(F->t_224)).under, (*(P1035)rt_nil_check(F->t_224)).elemcons);
goto ret_;
}
F->result_ = F->c_225;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_228(P1035 t_227) {
  struct f_kind_name_228fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_227 = t_227;
{ rt_int sel1457 = (*(P1035)rt_nil_check(F->t_227)).kind;
if (0 || (sel1457 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1457 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1457 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1457 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1457 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1457 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1457 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1457 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1457 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_227)).name))->all));
goto ret_;
} else if (0 || (sel1457 == (((rt_int)11LL)))) {
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

static void f_check_type_232(P1035 got_229, P1035 want_230, rt_int line_231) {
  struct f_check_type_232fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_229 = got_229;
F->want_230 = want_230;
F->line_231 = line_231;
if ((F->want_230 == NULL)) {
goto ret_;
}
if ((((*(P1035)rt_nil_check(F->got_229)).kind == (((rt_int)11LL))) && ((*(P1035)rt_nil_check(F->want_230)).kind == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_221(F->got_229, F->want_230))) {
f_fail_23(F->line_231, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_228(F->got_229)), rt_str(" where ", 7)), f_kind_name_228(F->want_230)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_234(P1035 t_233) {
  struct f_ctype_234fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_233 = t_233;
{ rt_int sel1458 = (*(P1035)rt_nil_check(F->t_233)).kind;
if (0 || (sel1458 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1458 == (((rt_int)2LL))) || (sel1458 == (((rt_int)4LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1458 == (((rt_int)10LL)))) {
F->result_ = rt_str("rt_r_file *", 11);
goto ret_;
} else if (0 || (sel1458 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1458 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1458 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1458 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1458 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1458 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1458 == (((rt_int)16LL)))) {
F->result_ = rt_str("yset", 4);
goto ret_;
} else {
if (((*(P1035)rt_nil_check(F->t_233)).cname == NULL)) {
f_declare_ctype_240(F->t_233);
} else if ((((((*(P1035)rt_nil_check(F->t_233)).kind == (((rt_int)7LL))) || ((*(P1035)rt_nil_check(F->t_233)).kind == (((rt_int)17LL)))) && (*(P1035)rt_nil_check(F->t_233)).forward) && (!(*(P1035)rt_nil_check(F->t_233)).defined))) {
(*(P1035)rt_nil_check(F->t_233)).defined = 1;
f_put_27(g_out_types_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_233)).cname))->all)), rt_str(" ", 1)), f_struct_body_236(F->t_233)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_233)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_236(P1035 t_235) {
  struct f_struct_body_236fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_235 = t_235;
if (((*(P1035)rt_nil_check(F->t_235)).kind == (((rt_int)17LL)))) {
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

static rstr f_field_decls_238(P1035 t_237) {
  struct f_field_decls_238fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_237 = t_237;
F->f_1459 = NULL;
F->f_1459 = (*(P1035)rt_nil_check(F->t_237)).fields;
F->s_1460 = NULL;
F->s_1460 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1459 != NULL)) {
F->s_1460 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->s_1460))->all), f_ctype_234((*(P1037)rt_nil_check(F->f_1459)).t)), rt_str(" ", 1)), f_field_c_17(&(((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_1459)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1459 = (*(P1037)rt_nil_check(F->f_1459)).next;
}
F->result_ = (((P1022)rt_nil_check(F->s_1460))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_240(P1035 t_239) {
  struct f_declare_ctype_240fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_239 = t_239;
F->u_1461 = NULL;
F->u_1461 = g_all_types_1074;
if ((((*(P1035)rt_nil_check(F->t_239)).kind == (((rt_int)8LL))) && ((*(P1035)rt_nil_check(F->t_239)).target == NULL))) {
f_finish_ptr_475(F->t_239);
if (((*(P1035)rt_nil_check(F->t_239)).cname != NULL)) {
goto ret_;
}
}
if (((*(P1035)rt_nil_check(F->t_239)).kind != (((rt_int)8LL)))) {
while ((F->u_1461 != NULL)) {
if ((((*(P1035)rt_nil_check(F->u_1461)).kind == (*(P1035)rt_nil_check(F->t_239)).kind) && f_same_221(F->u_1461, F->t_239))) {
(*(P1035)rt_nil_check(F->t_239)).cname = (*(P1035)rt_nil_check(F->u_1461)).cname;
goto ret_;
}
F->u_1461 = (*(P1035)rt_nil_check(F->u_1461)).next;
}
}
if ((((*(P1035)rt_nil_check(F->t_239)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->t_239)).tparams == NULL))) {
(*(P1035)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_234((*(P1035)rt_nil_check(F->t_239)).under); b_; }));
goto ret_;
}
if (((*(P1035)rt_nil_check(F->t_239)).kind == (((rt_int)6LL)))) {
(*(P1035)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if (((*(P1035)rt_nil_check(F->t_239)).kind == (((rt_int)15LL)))) {
(*(P1035)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if ((((*(P1035)rt_nil_check(F->t_239)).kind == (((rt_int)7LL))) || ((*(P1035)rt_nil_check(F->t_239)).kind == (((rt_int)17LL))))) {
(*(P1035)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P1035)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P1035)rt_nil_check(F->t_239)).next = g_all_types_1074;
g_all_types_1074 = F->t_239;
if (((((*(P1035)rt_nil_check(F->t_239)).kind == (((rt_int)8LL))) && ((*(P1035)rt_nil_check(F->t_239)).decl != NULL)) && ((*(P1029)rt_nil_check((*(P1035)rt_nil_check(F->t_239)).decl)).b != NULL))) {
F->p_1462 = NULL;
F->p_1462 = (*(P1029)rt_nil_check((*(P1035)rt_nil_check(F->t_239)).decl)).b;
F->fs_1463 = NULL;
F->fs_1463 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1464 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1462 != NULL)) {
F->pc_1465 = NULL;
F->fs_1463 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->fs_1463))->all), rt_str(" ", 1)), f_ctype_234(f_resolve_subtype_268((*(P1029)rt_nil_check(F->p_1462)).a, &F->pc_1465))), rt_str(" p_", 3)), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1462)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1462 = (*(P1029)rt_nil_check(F->p_1462)).next;
}
f_put_27(g_out_types_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1464), rt_str(" *", 2)), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1464), rt_str(" {", 2)), (((P1022)rt_nil_check(F->fs_1463))->all)), rt_str(" ", 1)), f_ctype_234((*(P1035)rt_nil_check(F->t_239)).target)), rt_str(" all; };", 8)); b_; }));
} else if (((*(P1035)rt_nil_check(F->t_239)).kind == (((rt_int)8LL)))) {
F->target_1466 = NULL;
F->target_1466 = (*(P1035)rt_nil_check(F->t_239)).target;
if ((((*(P1035)rt_nil_check(F->target_1466)).kind == (((rt_int)7LL))) || ((*(P1035)rt_nil_check(F->target_1466)).kind == (((rt_int)17LL))))) {
if (((*(P1035)rt_nil_check(F->target_1466)).cname == NULL)) {
(*(P1035)rt_nil_check(F->target_1466)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P1035)rt_nil_check(F->target_1466)).next = g_all_types_1074;
g_all_types_1074 = F->target_1466;
f_put_27(g_out_types_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->target_1466)).cname))->all)), rt_str(" ", 1)), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->target_1466)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P1035)rt_nil_check(F->target_1466)).forward = 1;
}
f_put_27(g_out_types_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->target_1466)).cname))->all)), rt_str(" *", 2)), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_234(F->target_1466)), rt_str(" *", 2)), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if (((*(P1035)rt_nil_check(F->t_239)).kind == (((rt_int)6LL)))) {
f_put_27(g_out_types_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_239)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_234((*(P1035)rt_nil_check(F->t_239)).elem)), rt_str(" *p;", 4)), f_more_dims_246(F->t_239)), rt_str(" };", 3)); b_; }));
} else if (((*(P1035)rt_nil_check(F->t_239)).kind == (((rt_int)15LL)))) {
F->p_1467 = NULL;
F->p_1467 = (*(P1035)rt_nil_check(F->t_239)).tparams;
F->fs_1468 = NULL;
F->fs_1468 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1467 != NULL)) {
F->fs_1468 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->fs_1468))->all), f_ctype_234(f_tparam_type_352(F->t_239, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1467)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1467)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1467 = (*(P1029)rt_nil_check(F->p_1467)).next;
}
f_put_27(g_out_types_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_239)).cname))->all)), rt_str(" {", 2)), (((P1022)rt_nil_check(F->fs_1468))->all)), f_ctype_234((*(P1035)rt_nil_check(F->t_239)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P1035)rt_nil_check(F->t_239)).defined = 1;
f_put_27(g_out_types_1076, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), f_struct_body_236(F->t_239)), rt_str(";", 1)); b_; }));
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

static rstr f_more_dims_246(P1035 t_245) {
  struct f_more_dims_246fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_245 = t_245;
F->r_1469 = NULL;
F->r_1469 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1471 = ((rt_int)3LL), hi1472 = (*(P1035)rt_nil_check(F->t_245)).ndim;
for (rt_int it1473 = lo1471; it1473 <= hi1472; it1473++) {
F->k_1470 = it1473;
F->r_1469 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_1469))->all), rt_str(" rt_int ", 8)), f_dim_lo_242(F->k_1470)), rt_str(", ", 2)), f_dim_hi_244(F->k_1470)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P1022)rt_nil_check(F->r_1469))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_249(P1035 t_247, rstr *base_248) {
  struct f_acnt_249fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_247 = t_247;
F->base_248 = base_248;
F->r_1474 = NULL;
F->r_1474 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_248)), rt_str(")", 1)); b_; }));
{ rt_int lo1476 = ((rt_int)3LL), hi1477 = (*(P1035)rt_nil_check(F->t_247)).ndim;
for (rt_int it1478 = lo1476; it1478 <= hi1477; it1478++) {
F->k_1475 = it1478;
F->r_1474 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_1474))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_248)), rt_str(".", 1)), f_dim_lo_242(F->k_1475)), rt_str(", ", 2)), (*F->base_248)), rt_str(".", 1)), f_dim_hi_244(F->k_1475)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1022)rt_nil_check(F->r_1474))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1022 f_cons_lo_252(P1031 c_250, rt_int k_251) {
  struct f_cons_lo_252fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_250 = c_250;
F->k_251 = k_251;
F->l_1479 = NULL;
if ((F->k_251 == ((rt_int)1LL))) {
F->result_ = (*(P1031)rt_nil_check(F->c_250)).lo;
goto ret_;
} else if ((F->k_251 == ((rt_int)2LL))) {
F->result_ = (*(P1031)rt_nil_check(F->c_250)).lo2;
goto ret_;
}
F->l_1479 = (*(P1031)rt_nil_check(F->c_250)).bnds;
{ rt_int lo1481 = ((rt_int)1LL), hi1482 = rt_sub(rt_add(F->k_251, F->k_251), ((rt_int)6LL));
for (rt_int it1483 = lo1481; it1483 <= hi1482; it1483++) {
F->i_1480 = it1483;
if ((F->l_1479 != NULL)) {
F->l_1479 = (*(P1033)rt_nil_check(F->l_1479)).next;
}
}
}
if ((F->l_1479 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1033)rt_nil_check(F->l_1479)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1022 f_cons_hi_255(P1031 c_253, rt_int k_254) {
  struct f_cons_hi_255fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_253 = c_253;
F->k_254 = k_254;
F->l_1484 = NULL;
if ((F->k_254 == ((rt_int)1LL))) {
F->result_ = (*(P1031)rt_nil_check(F->c_253)).hi;
goto ret_;
} else if ((F->k_254 == ((rt_int)2LL))) {
F->result_ = (*(P1031)rt_nil_check(F->c_253)).hi2;
goto ret_;
}
F->l_1484 = (*(P1031)rt_nil_check(F->c_253)).bnds;
{ rt_int lo1486 = ((rt_int)1LL), hi1487 = rt_sub(rt_add(F->k_254, F->k_254), ((rt_int)5LL));
for (rt_int it1488 = lo1486; it1488 <= hi1487; it1488++) {
F->i_1485 = it1488;
if ((F->l_1484 != NULL)) {
F->l_1484 = (*(P1033)rt_nil_check(F->l_1484)).next;
}
}
}
if ((F->l_1484 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1033)rt_nil_check(F->l_1484)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1035 f_idx_type_258(P1035 t_256, rt_int k_257) {
  struct f_idx_type_258fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_256 = t_256;
F->k_257 = k_257;
F->l_1489 = NULL;
F->l_1489 = (*(P1035)rt_nil_check(F->t_256)).idxs;
{ rt_int lo1491 = ((rt_int)2LL), hi1492 = F->k_257;
for (rt_int it1493 = lo1491; it1493 <= hi1492; it1493++) {
F->i_1490 = it1493;
F->l_1489 = (*(P1050)rt_nil_check(F->l_1489)).next;
}
}
F->result_ = (*(P1050)rt_nil_check(F->l_1489)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_259(void) {
  struct f_init_ascii_259fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1494 = NULL;
F->tail_1495 = NULL;
F->start_1496 = ((rt_int)1LL);
{ rt_int lo1498 = ((rt_int)1LL), hi1499 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1500 = lo1498; it1500 <= hi1499; it1500++) {
F->i_1497 = it1500;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1497) == 32)) {
F->lit_1501 = NULL;
F->lit_1501 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1029)rt_nil_check(F->lit_1501)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->start_1496, rt_sub(F->i_1497, ((rt_int)1LL))); b_; }));
f_append_69(&F->head_1494, &F->tail_1495, F->lit_1501);
F->start_1496 = rt_add(F->i_1497, ((rt_int)1LL));
}
}
}
g_ty_ascii_1117 = f_new_typ_183((((rt_int)4LL)));
(*(P1035)rt_nil_check(g_ty_ascii_1117)).lits = F->head_1494;
(*(P1035)rt_nil_check(g_ty_ascii_1117)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1502 = NULL;
F->t2_1503 = NULL;
F->l1_1504 = NULL;
F->l1_1504 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1505 = NULL;
F->l2_1505 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1506 = NULL;
F->l3_1506 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1029)rt_nil_check(F->l1_1504)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P1029)rt_nil_check(F->l2_1505)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P1029)rt_nil_check(F->l3_1506)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_69(&F->h2_1502, &F->t2_1503, F->l1_1504);
f_append_69(&F->h2_1502, &F->t2_1503, F->l2_1505);
f_append_69(&F->h2_1502, &F->t2_1503, F->l3_1506);
g_file_mode_type_1125 = f_new_typ_183((((rt_int)4LL)));
(*(P1035)rt_nil_check(g_file_mode_type_1125)).lits = F->h2_1502;
}
g_file_state_type_1129 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OLD", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }));
g_file_disp_type_1130 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SAVE", 4); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DELETE", 6); b_; }));
g_file_access_type_1131 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEQ", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RANDOM", 6); b_; }));
g_ty_text_file_1128 = f_new_typ_183((((rt_int)10LL)));
(*(P1035)rt_nil_check(g_ty_text_file_1128)).elem = g_ty_ascii_1117;
g_ty_send_st_1126 = f_new_typ_183((((rt_int)1LL)));
(*(P1035)rt_nil_check(g_ty_send_st_1126)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEND_ST", 7); b_; }));
g_ty_receive_st_1127 = f_new_typ_183((((rt_int)1LL)));
(*(P1035)rt_nil_check(g_ty_receive_st_1127)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RECEIVE_ST", 10); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1035 f_enum2_262(rstr *a_260, rstr *b_261) {
  struct f_enum2_262fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_260 = a_260;
F->b_261 = b_261;
F->t_1507 = NULL;
F->t_1507 = f_new_typ_183((((rt_int)4LL)));
F->l1_1508 = NULL;
F->l1_1508 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1509 = NULL;
F->l2_1509 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1029)rt_nil_check(F->l1_1508)).name = f_mk_3(&(*F->a_260));
(*(P1029)rt_nil_check(F->l2_1509)).name = f_mk_3(&(*F->b_261));
(*(P1029)rt_nil_check(F->l1_1508)).next = F->l2_1509;
(*(P1035)rt_nil_check(F->t_1507)).lits = F->l1_1508;
F->result_ = F->t_1507;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_lit_index_265(P1029 lits_263, rstr *name_264) {
  struct f_lit_index_265fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_263 = lits_263;
F->name_264 = name_264;
F->i_1510 = ((rt_int)0LL);
F->l_1511 = NULL;
F->l_1511 = F->lits_263;
while ((F->l_1511 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->l_1511)).name))->all), (*F->name_264))) {
F->result_ = F->i_1510;
goto ret_;
}
F->i_1510 = rt_add(F->i_1510, ((rt_int)1LL));
F->l_1511 = (*(P1029)rt_nil_check(F->l_1511)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1035 f_resolve_subtype_268(P1029 st_266, P1031 *c_267) {
  struct f_resolve_subtype_268fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_266 = st_266;
F->c_267 = c_267;
F->c_267v = *F->c_267;
F->t_1512 = NULL;
F->dummy_1514 = NULL;
F->c_267v = f_new_cons_184();
{ rt_int sel1515 = (*(P1029)rt_nil_check(F->st_266)).kind;
if (0 || (sel1515 == (((rt_int)70LL)))) {
if (((*(P1029)rt_nil_check(F->st_266)).a != NULL)) {
(*(P1031)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1029)rt_nil_check(F->st_266)).a, g_ty_int_1114, &F->dummy_1514); b_; }));
(*(P1031)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1029)rt_nil_check(F->st_266)).b, g_ty_int_1114, &F->dummy_1514); b_; }));
(*(P1031)rt_nil_check(F->c_267v)).mlo = f_manifest_366((*(P1029)rt_nil_check(F->st_266)).a, &F->ok_1513);
(*(P1031)rt_nil_check(F->c_267v)).hasm = F->ok_1513;
(*(P1031)rt_nil_check(F->c_267v)).mhi = f_manifest_366((*(P1029)rt_nil_check(F->st_266)).b, &F->ok_1513);
(*(P1031)rt_nil_check(F->c_267v)).hasm = ((*(P1031)rt_nil_check(F->c_267v)).hasm && F->ok_1513);
}
F->result_ = g_ty_int_1114;
goto ret_;
} else if (0 || (sel1515 == (((rt_int)71LL)))) {
if (((*(P1029)rt_nil_check(F->st_266)).a != NULL)) {
(*(P1031)rt_nil_check(F->c_267v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1029)rt_nil_check(F->st_266)).a, g_ty_int_1114, &F->dummy_1514); b_; }));
}
if (((*(P1029)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1031)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1029)rt_nil_check(F->st_266)).b, g_ty_float_1116, &F->dummy_1514); b_; }));
(*(P1031)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1029)rt_nil_check(F->st_266)).c, g_ty_float_1116, &F->dummy_1514); b_; }));
(*(P1031)rt_nil_check(F->c_267v)).hasm = (f_float_lit_270((*(P1029)rt_nil_check(F->st_266)).b) && f_float_lit_270((*(P1029)rt_nil_check(F->st_266)).c));
}
F->result_ = g_ty_float_1116;
goto ret_;
} else if (0 || (sel1515 == (((rt_int)72LL)))) {
F->t_1512 = f_new_typ_183((((rt_int)4LL)));
(*(P1035)rt_nil_check(F->t_1512)).lits = (*(P1029)rt_nil_check(F->st_266)).a;
if (((*(P1029)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1031)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1029)rt_nil_check(F->st_266)).b, F->t_1512, &F->dummy_1514); b_; }));
(*(P1031)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1029)rt_nil_check(F->st_266)).c, F->t_1512, &F->dummy_1514); b_; }));
if ((((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->st_266)).b)).kind == (((rt_int)4LL))) && ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->st_266)).c)).kind == (((rt_int)4LL))))) {
(*(P1031)rt_nil_check(F->c_267v)).mlo = f_lit_index_265((*(P1035)rt_nil_check(F->t_1512)).lits, &(((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->st_266)).b)).name))->all));
(*(P1031)rt_nil_check(F->c_267v)).mhi = f_lit_index_265((*(P1035)rt_nil_check(F->t_1512)).lits, &(((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->st_266)).c)).name))->all));
(*(P1031)rt_nil_check(F->c_267v)).hasm = 1;
}
}
F->result_ = F->t_1512;
goto ret_;
} else if (0 || (sel1515 == (((rt_int)73LL)))) {
F->t_1512 = f_resolve_subtype_268((*(P1029)rt_nil_check(F->st_266)).a, &F->c_267v);
if (((*(P1035)rt_nil_check(f_base_of_223(F->t_1512))).kind != (((rt_int)4LL)))) {
f_fail_23((*(P1029)rt_nil_check(F->st_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component type of a string is an enumeration type", 53); b_; }));
}
if ((f_same_221(F->t_1512, g_ty_ascii_1117) && ((F->c_267v == NULL) || ((*(P1031)rt_nil_check(F->c_267v)).lo == NULL)))) {
F->t_1512 = g_ty_string_1118;
} else {
F->et_1516 = NULL;
F->et_1516 = F->t_1512;
F->t_1512 = f_new_typ_183((((rt_int)5LL)));
(*(P1035)rt_nil_check(F->t_1512)).elem = F->et_1516;
(*(P1035)rt_nil_check(F->t_1512)).elemcons = F->c_267v;
}
F->c_267v = f_new_cons_184();
if (((*(P1029)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1031)rt_nil_check(F->c_267v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1029)rt_nil_check(F->st_266)).b, g_ty_int_1114, &F->dummy_1514); b_; }));
}
F->result_ = F->t_1512;
goto ret_;
} else if (0 || (sel1515 == (((rt_int)74LL)))) {
{
F->ec_1517 = NULL;
F->et_1518 = NULL;
F->et_1518 = f_resolve_subtype_268((*(P1029)rt_nil_check(F->st_266)).b, &F->ec_1517);
F->ix_1519 = NULL;
F->ix_1519 = (*(P1029)rt_nil_check(F->st_266)).a;
F->k_1520 = ((rt_int)0LL);
F->tail_1521 = NULL;
F->btail_1522 = NULL;
F->t_1512 = f_new_typ_183((((rt_int)6LL)));
(*(P1035)rt_nil_check(F->t_1512)).elem = F->et_1518;
(*(P1035)rt_nil_check(F->t_1512)).elemcons = F->ec_1517;
(*(P1035)rt_nil_check(F->t_1512)).elemst = (*(P1029)rt_nil_check(F->st_266)).b;
(*(P1031)rt_nil_check(F->c_267v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P1031)rt_nil_check(F->c_267v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1519 != NULL)) {
F->ic_1523 = NULL;
F->it_1524 = NULL;
F->it_1524 = f_resolve_subtype_268(F->ix_1519, &F->ic_1523);
F->lo_1525 = NULL;
F->hi_1526 = NULL;
F->tl_1527 = NULL;
if ((((*(P1035)rt_nil_check(f_base_of_223(F->it_1524))).kind != (((rt_int)1LL))) && ((*(P1035)rt_nil_check(f_base_of_223(F->it_1524))).kind != (((rt_int)4LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->st_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1523 = f_base_cons_226(F->it_1524, F->ic_1523);
F->k_1520 = rt_add(F->k_1520, ((rt_int)1LL));
{ R1051 *cell1528 = rt_alloc(sizeof(R1051));
(*cell1528).t = NULL;
(*cell1528).next = NULL;
F->tl_1527 = cell1528;
}
(*(P1050)rt_nil_check(F->tl_1527)).t = F->it_1524;
if ((F->tail_1521 == NULL)) {
(*(P1035)rt_nil_check(F->t_1512)).idxs = F->tl_1527;
} else {
(*(P1050)rt_nil_check(F->tail_1521)).next = F->tl_1527;
}
F->tail_1521 = F->tl_1527;
if (((F->ic_1523 != NULL) && ((*(P1031)rt_nil_check(F->ic_1523)).lo != NULL))) {
F->lo_1525 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_193(F->ic_1523); b_; }));
F->hi_1526 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_195(F->ic_1523); b_; }));
} else if (((*(P1035)rt_nil_check(f_base_of_223(F->it_1524))).kind == (((rt_int)4LL)))) {
F->lo_1525 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1526 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_71((*(P1035)rt_nil_check(f_base_of_223(F->it_1524))).lits), ((rt_int)1LL))); b_; }));
}
if ((F->k_1520 == ((rt_int)1LL))) {
(*(P1035)rt_nil_check(F->t_1512)).idx = F->it_1524;
(*(P1031)rt_nil_check(F->c_267v)).lo = F->lo_1525;
(*(P1031)rt_nil_check(F->c_267v)).hi = F->hi_1526;
} else if ((F->k_1520 == ((rt_int)2LL))) {
(*(P1035)rt_nil_check(F->t_1512)).idx2 = F->it_1524;
(*(P1031)rt_nil_check(F->c_267v)).lo2 = F->lo_1525;
(*(P1031)rt_nil_check(F->c_267v)).hi2 = F->hi_1526;
} else if ((F->lo_1525 != NULL)) {
F->l1_1529 = NULL;
F->l2_1530 = NULL;
{ R1034 *cell1531 = rt_alloc(sizeof(R1034));
(*cell1531).s = NULL;
(*cell1531).next = NULL;
F->l1_1529 = cell1531;
}
{ R1034 *cell1532 = rt_alloc(sizeof(R1034));
(*cell1532).s = NULL;
(*cell1532).next = NULL;
F->l2_1530 = cell1532;
}
(*(P1033)rt_nil_check(F->l1_1529)).s = F->lo_1525;
(*(P1033)rt_nil_check(F->l2_1530)).s = F->hi_1526;
(*(P1033)rt_nil_check(F->l1_1529)).next = F->l2_1530;
if ((F->btail_1522 == NULL)) {
(*(P1031)rt_nil_check(F->c_267v)).bnds = F->l1_1529;
} else {
(*(P1033)rt_nil_check(F->btail_1522)).next = F->l1_1529;
}
F->btail_1522 = F->l2_1530;
}
F->ix_1519 = (*(P1029)rt_nil_check(F->ix_1519)).next;
}
(*(P1035)rt_nil_check(F->t_1512)).ndim = F->k_1520;
}
F->result_ = F->t_1512;
goto ret_;
} else if (0 || (sel1515 == (((rt_int)77LL)))) {
F->t_1512 = f_new_typ_183((((rt_int)16LL)));
{
F->ec_1533 = NULL;
(*(P1035)rt_nil_check(F->t_1512)).elem = f_resolve_subtype_268((*(P1029)rt_nil_check(F->st_266)).a, &F->ec_1533);
(*(P1035)rt_nil_check(F->t_1512)).elemcons = F->ec_1533;
if ((((*(P1035)rt_nil_check(f_base_of_223((*(P1035)rt_nil_check(F->t_1512)).elem))).kind != (((rt_int)1LL))) && ((*(P1035)rt_nil_check(f_base_of_223((*(P1035)rt_nil_check(F->t_1512)).elem))).kind != (((rt_int)4LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->st_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component subtype of a set is an INT or ENUM subtype", 56); b_; }));
}
if ((((*(P1035)rt_nil_check(f_base_of_223((*(P1035)rt_nil_check(F->t_1512)).elem))).kind == (((rt_int)1LL))) && ((F->ec_1533 == NULL) || ((*(P1031)rt_nil_check(F->ec_1533)).lo == NULL)))) {
f_fail_23((*(P1029)rt_nil_check(F->st_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SET[INT] needs a range here: a set of every INT cannot be represented", 69); b_; }));
}
}
F->result_ = F->t_1512;
goto ret_;
} else if (0 || (sel1515 == (((rt_int)75LL))) || (sel1515 == (((rt_int)76LL)))) {
if (((*(P1029)rt_nil_check(F->st_266)).kind == (((rt_int)76LL)))) {
F->t_1512 = f_new_typ_183((((rt_int)17LL)));
} else {
F->t_1512 = f_new_typ_183((((rt_int)7LL)));
}
{
F->comp_1534 = NULL;
F->comp_1534 = (*(P1029)rt_nil_check(F->st_266)).a;
F->tail_1535 = NULL;
while ((F->comp_1534 != NULL)) {
F->cc_1536 = NULL;
F->f_1537 = NULL;
{ R1038 *cell1538 = rt_alloc(sizeof(R1038));
(*cell1538).name = NULL;
(*cell1538).t = NULL;
(*cell1538).c = NULL;
(*cell1538).st = NULL;
(*cell1538).next = NULL;
F->f_1537 = cell1538;
}
(*(P1037)rt_nil_check(F->f_1537)).name = (*(P1029)rt_nil_check(F->comp_1534)).name;
(*(P1037)rt_nil_check(F->f_1537)).t = f_resolve_subtype_268((*(P1029)rt_nil_check(F->comp_1534)).a, &F->cc_1536);
(*(P1037)rt_nil_check(F->f_1537)).c = F->cc_1536;
(*(P1037)rt_nil_check(F->f_1537)).st = (*(P1029)rt_nil_check(F->comp_1534)).a;
if ((F->tail_1535 == NULL)) {
(*(P1035)rt_nil_check(F->t_1512)).fields = F->f_1537;
} else {
(*(P1037)rt_nil_check(F->tail_1535)).next = F->f_1537;
}
F->tail_1535 = F->f_1537;
F->comp_1534 = (*(P1029)rt_nil_check(F->comp_1534)).next;
}
}
if (((*(P1035)rt_nil_check(F->t_1512)).kind == (((rt_int)17LL)))) {
F->lits_1539 = NULL;
F->ltail_1540 = NULL;
F->f_1541 = NULL;
F->f_1541 = (*(P1035)rt_nil_check(F->t_1512)).fields;
while ((F->f_1541 != NULL)) {
F->l_1542 = NULL;
F->l_1542 = f_nn_65((((rt_int)4LL)), (*(P1029)rt_nil_check(F->st_266)).line);
if (rt_str_eq((((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_1541)).name))->all), rt_str("TAG", 3))) {
f_fail_23((*(P1029)rt_nil_check(F->st_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P1029)rt_nil_check(F->l_1542)).name = (*(P1037)rt_nil_check(F->f_1541)).name;
f_append_69(&F->lits_1539, &F->ltail_1540, F->l_1542);
F->f_1541 = (*(P1037)rt_nil_check(F->f_1541)).next;
}
(*(P1035)rt_nil_check(F->t_1512)).elem = f_new_typ_183((((rt_int)4LL)));
(*(P1035)rt_nil_check((*(P1035)rt_nil_check(F->t_1512)).elem)).lits = F->lits_1539;
if (((*(P1029)rt_nil_check(F->st_266)).b != NULL)) {
f_tag_constraint_274(F->t_1512, (*(P1029)rt_nil_check(F->st_266)).b, F->c_267v);
}
}
F->result_ = F->t_1512;
goto ret_;
} else if (0 || (sel1515 == (((rt_int)79LL)))) {
F->t_1512 = f_new_typ_183((((rt_int)10LL)));
{
F->ec_1543 = NULL;
(*(P1035)rt_nil_check(F->t_1512)).elem = f_resolve_subtype_268((*(P1029)rt_nil_check(F->st_266)).a, &F->ec_1543);
(*(P1035)rt_nil_check(F->t_1512)).elemcons = F->ec_1543;
}
(*(P1031)rt_nil_check(F->c_267v)).args = (*(P1029)rt_nil_check(F->st_266)).b;
F->result_ = F->t_1512;
goto ret_;
} else if (0 || (sel1515 == (((rt_int)78LL)))) {
if (((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P1039)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1544 = NULL;
F->gt_1544 = f_copy_node_842((*(P1029)rt_nil_check(F->st_266)).a);
(*(P1029)rt_nil_check(F->gt_1544)).next = NULL;
F->result_ = f_instantiate_type_740(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1544, (*(P1029)rt_nil_check(F->st_266)).b, &F->c_267v, (*(P1029)rt_nil_check(F->st_266)).line);
goto ret_;
}
{
F->ec_1545 = NULL;
F->t_1512 = f_new_typ_183((((rt_int)12LL)));
(*(P1035)rt_nil_check(F->t_1512)).elem = f_resolve_subtype_268((*(P1029)rt_nil_check(F->st_266)).a, &F->ec_1545);
(*(P1035)rt_nil_check(F->t_1512)).elemcons = F->ec_1545;
if (((*(P1029)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1031)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1029)rt_nil_check(F->st_266)).b, g_ty_int_1114, &F->dummy_1514); b_; }));
}
}
F->result_ = F->t_1512;
goto ret_;
} else if (0 || (sel1515 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_277(F->st_266, &F->c_267v);
goto ret_;
} else if (0 || (sel1515 == (((rt_int)81LL)))) {
{
F->base_1546 = NULL;
F->result_ = f_value_subtype_290((*(P1029)rt_nil_check(F->st_266)).a, &F->c_267v, &F->base_1546);
goto ret_;
}
} else {
f_fail_23((*(P1029)rt_nil_check(F->st_266)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
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

static int f_float_lit_270(P1029 e_269) {
  struct f_float_lit_270fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_269 = e_269;
if ((((*(P1029)rt_nil_check(F->e_269)).kind == (((rt_int)8LL))) && (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_269)).name))->all), rt_str("-", 1)) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_269)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_270((*(P1029)rt_nil_check(F->e_269)).a);
goto ret_;
}
F->result_ = (((*(P1029)rt_nil_check(F->e_269)).kind == (((rt_int)2LL))) || ((*(P1029)rt_nil_check(F->e_269)).kind == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_274(P1035 t_271, P1029 e_272, P1031 c_273) {
  struct f_tag_constraint_274fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_271 = t_271;
F->e_272 = e_272;
F->c_273 = c_273;
F->dummy_1547 = NULL;
(*(P1031)rt_nil_check(F->c_273)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800(F->e_272, (*(P1035)rt_nil_check(F->t_271)).elem, &F->dummy_1547); b_; }));
f_check_type_232(F->dummy_1547, (*(P1035)rt_nil_check(F->t_271)).elem, (*(P1029)rt_nil_check(F->e_272)).line);
(*(P1031)rt_nil_check(F->c_273)).hi = (*(P1031)rt_nil_check(F->c_273)).lo;
if (((*(P1029)rt_nil_check(F->e_272)).kind == (((rt_int)4LL)))) {
(*(P1031)rt_nil_check(F->c_273)).mlo = f_lit_index_265((*(P1035)rt_nil_check((*(P1035)rt_nil_check(F->t_271)).elem)).lits, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_272)).name))->all));
(*(P1031)rt_nil_check(F->c_273)).mhi = (*(P1031)rt_nil_check(F->c_273)).mlo;
(*(P1031)rt_nil_check(F->c_273)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P1035 f_named_subtype_277(P1029 st_275, P1031 *c_276) {
  struct f_named_subtype_277fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_275 = st_275;
F->c_276 = c_276;
F->c_276v = *F->c_276;
F->t_1548 = NULL;
F->y_1549 = NULL;
F->y_1549 = f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->st_275)).name))->all));
F->name_1550 = rt_str_copy((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->st_275)).name))->all));
F->c_276v = f_new_cons_184();
if (((F->y_1549 == NULL) && ((rt_str_eq(F->name_1550, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1550, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1550, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_295(F->st_275, &F->c_276v);
goto ret_;
}
if ((F->y_1549 == NULL)) {
if (rt_str_eq(F->name_1550, rt_str("BOOL", 4))) {
F->t_1548 = g_ty_bool_1115;
} else if (rt_str_eq(F->name_1550, rt_str("ASCII", 5))) {
F->t_1548 = g_ty_ascii_1117;
} else if (rt_str_eq(F->name_1550, rt_str("DATA_LOCK", 9))) {
F->t_1548 = g_ty_lock_1122;
} else if (rt_str_eq(F->name_1550, rt_str("LATCH", 5))) {
F->t_1548 = g_ty_latch_1123;
} else if (rt_str_eq(F->name_1550, rt_str("ACT", 3))) {
F->t_1548 = g_ty_act_1124;
} else if (rt_str_eq(F->name_1550, rt_str("INT", 3))) {
F->t_1548 = g_ty_int_1114;
} else if (rt_str_eq(F->name_1550, rt_str("SEND_ST", 7))) {
F->t_1548 = g_ty_send_st_1126;
} else if (rt_str_eq(F->name_1550, rt_str("RECEIVE_ST", 10))) {
F->t_1548 = g_ty_receive_st_1127;
} else if (rt_str_eq(F->name_1550, rt_str("FLOAT", 5))) {
F->t_1548 = g_ty_float_1116;
} else {
f_fail_23((*(P1029)rt_nil_check(F->st_275)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1550); b_; }));
}
if (((*(P1029)rt_nil_check(F->st_275)).b != NULL)) {
f_apply_constraint_286(F->t_1548, (*(P1029)rt_nil_check(F->st_275)).b, F->c_276v, (*(P1029)rt_nil_check(F->st_275)).line);
}
F->result_ = F->t_1548;
goto ret_;
}
if ((((*(P1039)rt_nil_check(F->y_1549)).kind == (((rt_int)10LL))) && (((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_1549)).decl)).b)).kind == (((rt_int)43LL))) || ((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_1549)).decl)).b)).kind == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_740(F->y_1549, (*(P1029)rt_nil_check(F->st_275)).a, (*(P1029)rt_nil_check(F->st_275)).b, &F->c_276v, (*(P1029)rt_nil_check(F->st_275)).line);
goto ret_;
}
if ((((*(P1039)rt_nil_check(F->y_1549)).kind == (((rt_int)10LL))) && ((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_1549)).decl)).b)).kind == (((rt_int)42LL))))) {
F->binds_1551 = NULL;
F->binds_1551 = f_tt_binds_706((*(P1039)rt_nil_check(F->y_1549)).decl, (*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_1549)).decl)).b)).e, (*(P1029)rt_nil_check(F->st_275)).a, (*(P1029)rt_nil_check(F->st_275)).line);
F->saved_env_1552 = NULL;
F->saved_env_1552 = g_genv_1070;
F->saved_gdepth_1553 = g_gdepth_1102;
f_open_scope_177();
while ((F->binds_1551 != NULL)) {
F->nb_1554 = NULL;
F->nb_1554 = (*(P1039)rt_nil_check(F->binds_1551)).mnext;
f_define_168(F->binds_1551, (*(P1029)rt_nil_check(F->st_275)).line);
F->binds_1551 = F->nb_1554;
}
g_genv_1070 = (*(P1039)rt_nil_check(F->y_1549)).env;
g_gdepth_1102 = g_depth_1072;
F->t_1548 = f_resolve_subtype_268((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_1549)).decl)).b)).a, &F->c_276v);
g_genv_1070 = F->saved_env_1552;
g_gdepth_1102 = F->saved_gdepth_1553;
f_close_scope_178();
if (((*(P1029)rt_nil_check(F->st_275)).b != NULL)) {
F->c_276v = f_copy_cons_206(F->c_276v);
f_apply_constraint_286(F->t_1548, (*(P1029)rt_nil_check(F->st_275)).b, F->c_276v, (*(P1029)rt_nil_check(F->st_275)).line);
}
F->result_ = F->t_1548;
goto ret_;
}
if (((((*(P1039)rt_nil_check(F->y_1549)).kind == (((rt_int)5LL))) && ((*(P1039)rt_nil_check(F->y_1549)).t != NULL)) && ((*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_1549)).t)).kind == (((rt_int)15LL))))) {
F->result_ = f_new_type_318(F->y_1549, F->st_275, &F->c_276v);
goto ret_;
}
if (((((*(P1039)rt_nil_check(F->y_1549)).kind == (((rt_int)5LL))) && ((*(P1039)rt_nil_check(F->y_1549)).t != NULL)) && ((*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_1549)).t)).kind == (((rt_int)8LL))))) {
(*(P1031)rt_nil_check(F->c_276v)).args = (*(P1029)rt_nil_check(F->st_275)).b;
F->result_ = (*(P1039)rt_nil_check(F->y_1549)).t;
goto ret_;
}
if (((((*(P1039)rt_nil_check(F->y_1549)).kind == (((rt_int)6LL))) && ((*(P1039)rt_nil_check(F->y_1549)).decl != NULL)) && ((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_1549)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_281(F->y_1549, F->st_275, &F->c_276v);
goto ret_;
}
if (((((*(P1039)rt_nil_check(F->y_1549)).kind == (((rt_int)6LL))) || ((*(P1039)rt_nil_check(F->y_1549)).kind == (((rt_int)5LL)))) && ((*(P1039)rt_nil_check(F->y_1549)).t != NULL))) {
if (((*(P1039)rt_nil_check(F->y_1549)).c != NULL)) {
F->c_276v = (*(P1039)rt_nil_check(F->y_1549)).c;
}
F->t_1548 = (*(P1039)rt_nil_check(F->y_1549)).t;
} else if (((((*(P1039)rt_nil_check(F->y_1549)).kind == (((rt_int)5LL))) && ((*(P1039)rt_nil_check(F->y_1549)).decl != NULL)) && ((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_1549)).decl)).kind == (((rt_int)43LL))))) {
F->result_ = f_new_type_318(F->y_1549, F->st_275, &F->c_276v);
goto ret_;
} else if ((((*(P1039)rt_nil_check(F->y_1549)).kind == (((rt_int)6LL))) || ((*(P1039)rt_nil_check(F->y_1549)).kind == (((rt_int)5LL))))) {
F->t_1548 = f_resolve_subtype_268((*(P1039)rt_nil_check(F->y_1549)).st, &F->c_276v);
} else {
f_fail_23((*(P1029)rt_nil_check(F->st_275)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1550, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P1029)rt_nil_check(F->st_275)).b != NULL)) {
F->c_276v = f_copy_cons_206(F->c_276v);
f_apply_constraint_286(F->t_1548, (*(P1029)rt_nil_check(F->st_275)).b, F->c_276v, (*(P1029)rt_nil_check(F->st_275)).line);
}
F->result_ = F->t_1548;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_276) = F->c_276v;
  RT_FPOP();
  return F->result_;
}

static P1035 f_invoke_abbrev_281(P1039 y_278, P1029 st_279, P1031 *c_280) {
  struct f_invoke_abbrev_281fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_278 = y_278;
F->st_279 = st_279;
F->c_280 = c_280;
F->c_280v = *F->c_280;
F->p_1555 = NULL;
F->p_1555 = (*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_278)).decl)).b;
F->a_1556 = NULL;
F->a_1556 = (*(P1029)rt_nil_check(F->st_279)).b;
F->t_1557 = NULL;
if ((f_list_len_71(F->p_1555) != f_list_len_71(F->a_1556))) {
f_fail_23((*(P1029)rt_nil_check(F->st_279)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_278)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1555))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_177();
while ((F->p_1555 != NULL)) {
F->z_1558 = NULL;
F->z_1558 = f_new_sym_181((((rt_int)2LL)), (*(P1029)rt_nil_check(F->p_1555)).name);
F->pc_1559 = NULL;
F->at_1560 = NULL;
if (((*(P1029)rt_nil_check(F->p_1555)).ival != (((rt_int)1LL)))) {
f_fail_23((*(P1029)rt_nil_check(F->st_279)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P1039)rt_nil_check(F->z_1558)).t = f_resolve_subtype_268((*(P1029)rt_nil_check(F->p_1555)).a, &F->pc_1559);
(*(P1039)rt_nil_check(F->z_1558)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_800(F->a_1556, (*(P1039)rt_nil_check(F->z_1558)).t, &F->at_1560)), rt_str(")", 1)); b_; }));
f_check_type_232(F->at_1560, (*(P1039)rt_nil_check(F->z_1558)).t, (*(P1029)rt_nil_check(F->st_279)).line);
(*(P1039)rt_nil_check(F->z_1558)).mvalue = f_manifest_366(F->a_1556, &F->ok_1561);
(*(P1039)rt_nil_check(F->z_1558)).hasmv = F->ok_1561;
(*(P1039)rt_nil_check(F->z_1558)).mv = f_meval_375(F->a_1556, &F->ok_1561);
if ((!F->ok_1561)) {
(*(P1039)rt_nil_check(F->z_1558)).mv = NULL;
}
(*(P1039)rt_nil_check(F->z_1558)).ro_flag = 1;
f_define_168(F->z_1558, (*(P1029)rt_nil_check(F->st_279)).line);
F->p_1555 = (*(P1029)rt_nil_check(F->p_1555)).next;
F->a_1556 = (*(P1029)rt_nil_check(F->a_1556)).next;
}
F->t_1557 = f_resolve_subtype_268((*(P1039)rt_nil_check(F->y_278)).st, &F->c_280v);
f_close_scope_178();
F->result_ = F->t_1557;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_280) = F->c_280v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_286(P1035 t_282, P1029 args_283, P1031 c_284, rt_int line_285) {
  struct f_apply_constraint_286fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_282 = t_282;
F->args_283 = args_283;
F->c_284 = c_284;
F->line_285 = line_285;
F->dummy_1562 = NULL;
if ((((*(P1035)rt_nil_check(F->t_282)).kind == (((rt_int)1LL))) || ((*(P1035)rt_nil_check(F->t_282)).kind == (((rt_int)4LL))))) {
if ((((*(P1029)rt_nil_check(F->args_283)).kind != (((rt_int)16LL))) || ((*(P1029)rt_nil_check(F->args_283)).next != NULL))) {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P1031)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1029)rt_nil_check(F->args_283)).a, F->t_282, &F->dummy_1562); b_; }));
f_check_type_232(F->dummy_1562, F->t_282, F->line_285);
(*(P1031)rt_nil_check(F->c_284)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1029)rt_nil_check(F->args_283)).b, F->t_282, &F->dummy_1562); b_; }));
f_check_type_232(F->dummy_1562, F->t_282, F->line_285);
(*(P1031)rt_nil_check(F->c_284)).hasm = 0;
if (((*(P1035)rt_nil_check(F->t_282)).kind == (((rt_int)1LL)))) {
(*(P1031)rt_nil_check(F->c_284)).mlo = f_manifest_366((*(P1029)rt_nil_check(F->args_283)).a, &F->ok_1563);
(*(P1031)rt_nil_check(F->c_284)).hasm = F->ok_1563;
(*(P1031)rt_nil_check(F->c_284)).mhi = f_manifest_366((*(P1029)rt_nil_check(F->args_283)).b, &F->ok_1563);
(*(P1031)rt_nil_check(F->c_284)).hasm = ((*(P1031)rt_nil_check(F->c_284)).hasm && F->ok_1563);
} else if ((((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_283)).a)).kind == (((rt_int)4LL))) && ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_283)).b)).kind == (((rt_int)4LL))))) {
(*(P1031)rt_nil_check(F->c_284)).mlo = f_lit_index_265((*(P1035)rt_nil_check(f_base_of_223(F->t_282))).lits, &(((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_283)).a)).name))->all));
(*(P1031)rt_nil_check(F->c_284)).mhi = f_lit_index_265((*(P1035)rt_nil_check(f_base_of_223(F->t_282))).lits, &(((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_283)).b)).name))->all));
(*(P1031)rt_nil_check(F->c_284)).hasm = 1;
}
} else if (((*(P1035)rt_nil_check(F->t_282)).kind == (((rt_int)3LL)))) {
(*(P1031)rt_nil_check(F->c_284)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800(F->args_283, g_ty_int_1114, &F->dummy_1562); b_; }));
if (((*(P1029)rt_nil_check(F->args_283)).next != NULL)) {
if (((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_283)).next)).kind != (((rt_int)16LL)))) {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P1031)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_283)).next)).a, g_ty_float_1116, &F->dummy_1562); b_; }));
(*(P1031)rt_nil_check(F->c_284)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_283)).next)).b, g_ty_float_1116, &F->dummy_1562); b_; }));
(*(P1031)rt_nil_check(F->c_284)).hasm = (f_float_lit_270((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_283)).next)).a) && f_float_lit_270((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_283)).next)).b));
}
} else if (((*(P1035)rt_nil_check(F->t_282)).kind == (((rt_int)5LL)))) {
(*(P1031)rt_nil_check(F->c_284)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800(F->args_283, g_ty_int_1114, &F->dummy_1562); b_; }));
} else if (((*(P1035)rt_nil_check(F->t_282)).kind == (((rt_int)12LL)))) {
(*(P1031)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800(F->args_283, g_ty_int_1114, &F->dummy_1562); b_; }));
} else if (((*(P1035)rt_nil_check(F->t_282)).kind == (((rt_int)17LL)))) {
f_tag_constraint_274(F->t_282, F->args_283, F->c_284);
} else {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P1035 f_value_subtype_290(P1029 e_287, P1031 *c_288, P1022 *base_289) {
  struct f_value_subtype_290fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_287 = e_287;
F->c_288 = c_288;
F->c_288v = *F->c_288;
F->base_289 = base_289;
F->base_289v = *F->base_289;
F->t_1564 = NULL;
F->c0_1565 = NULL;
if (f_is_lvalue_763(F->e_287)) {
f_lvalue_769(F->e_287, &F->base_289v, &F->t_1564, &F->c0_1565, &F->ro_1566);
} else {
F->base_289v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800(F->e_287, NULL, &F->t_1564); b_; }));
}
if ((F->c0_1565 == NULL)) {
F->c_288v = f_new_cons_184();
} else {
F->c_288v = f_copy_cons_206(F->c0_1565);
}
if (((*(P1035)rt_nil_check(F->t_1564)).kind == (((rt_int)5LL)))) {
(*(P1031)rt_nil_check(F->c_288v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1022)rt_nil_check(F->base_289v))->all)), rt_str(").len", 5)); b_; }));
} else if (((*(P1035)rt_nil_check(F->t_1564)).kind == (((rt_int)6LL)))) {
(*(P1031)rt_nil_check(F->c_288v)).bnds = NULL;
{ rt_int lo1568 = ((rt_int)1LL), hi1569 = (*(P1035)rt_nil_check(F->t_1564)).ndim;
for (rt_int it1570 = lo1568; it1570 <= hi1569; it1570++) {
F->k_1567 = it1570;
F->lo_1571 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1022)rt_nil_check(F->base_289v))->all)), rt_str(").", 2)), f_dim_lo_242(F->k_1567)));
F->hi_1572 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1022)rt_nil_check(F->base_289v))->all)), rt_str(").", 2)), f_dim_hi_244(F->k_1567)));
if ((F->k_1567 == ((rt_int)1LL))) {
(*(P1031)rt_nil_check(F->c_288v)).lo = f_mk_3(&F->lo_1571);
(*(P1031)rt_nil_check(F->c_288v)).hi = f_mk_3(&F->hi_1572);
} else if ((F->k_1567 == ((rt_int)2LL))) {
(*(P1031)rt_nil_check(F->c_288v)).lo2 = f_mk_3(&F->lo_1571);
(*(P1031)rt_nil_check(F->c_288v)).hi2 = f_mk_3(&F->hi_1572);
} else {
F->l1_1573 = NULL;
F->l2_1574 = NULL;
{ R1034 *cell1575 = rt_alloc(sizeof(R1034));
(*cell1575).s = NULL;
(*cell1575).next = NULL;
F->l1_1573 = cell1575;
}
{ R1034 *cell1576 = rt_alloc(sizeof(R1034));
(*cell1576).s = NULL;
(*cell1576).next = NULL;
F->l2_1574 = cell1576;
}
(*(P1033)rt_nil_check(F->l1_1573)).s = f_mk_3(&F->lo_1571);
(*(P1033)rt_nil_check(F->l2_1574)).s = f_mk_3(&F->hi_1572);
(*(P1033)rt_nil_check(F->l1_1573)).next = F->l2_1574;
(*(P1033)rt_nil_check(F->l2_1574)).next = (*(P1031)rt_nil_check(F->c_288v)).bnds;
(*(P1031)rt_nil_check(F->c_288v)).bnds = F->l1_1573;
}
}
}
(*(P1031)rt_nil_check(F->c_288v)).bnds = f_reverse_pairs_292((*(P1031)rt_nil_check(F->c_288v)).bnds);
} else if (((*(P1035)rt_nil_check(F->t_1564)).kind == (((rt_int)12LL)))) {
(*(P1031)rt_nil_check(F->c_288v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1022)rt_nil_check(F->base_289v))->all)), rt_str(")->cap", 6)); b_; }));
} else if ((((*(P1035)rt_nil_check(F->t_1564)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->t_1564)).tparams != NULL))) {
F->p_1577 = NULL;
F->p_1577 = (*(P1035)rt_nil_check(F->t_1564)).tparams;
F->head_1578 = NULL;
F->tail_1579 = NULL;
while ((F->p_1577 != NULL)) {
F->sel_1580 = NULL;
F->sel_1580 = f_nn_65((((rt_int)11LL)), (*(P1029)rt_nil_check(F->e_287)).line);
(*(P1029)rt_nil_check(F->sel_1580)).a = F->e_287;
(*(P1029)rt_nil_check(F->sel_1580)).name = (*(P1029)rt_nil_check(F->p_1577)).name;
f_append_69(&F->head_1578, &F->tail_1579, F->sel_1580);
F->p_1577 = (*(P1029)rt_nil_check(F->p_1577)).next;
}
(*(P1031)rt_nil_check(F->c_288v)).args = F->head_1578;
}
F->result_ = F->t_1564;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_288) = F->c_288v;  (*F->base_289) = F->base_289v;
  RT_FPOP();
  return F->result_;
}

static P1033 f_reverse_pairs_292(P1033 l_291) {
  struct f_reverse_pairs_292fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_291 = l_291;
F->r_1581 = NULL;
F->p_1582 = NULL;
F->p_1582 = F->l_291;
while ((F->p_1582 != NULL)) {
F->a_1583 = NULL;
F->a_1583 = F->p_1582;
F->b_1584 = NULL;
F->b_1584 = (*(P1033)rt_nil_check(F->p_1582)).next;
F->p_1582 = (*(P1033)rt_nil_check(F->b_1584)).next;
(*(P1033)rt_nil_check(F->b_1584)).next = F->r_1581;
F->r_1581 = F->a_1583;
}
F->result_ = F->r_1581;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1035 f_inquiry_295(P1029 st_293, P1031 *c_294) {
  struct f_inquiry_295fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_293 = st_293;
F->c_294 = c_294;
F->c_294v = *F->c_294;
F->base_1585 = NULL;
F->t_1586 = NULL;
F->name_1587 = rt_str_copy((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->st_293)).name))->all));
if (((*(P1029)rt_nil_check(F->st_293)).b == NULL)) {
f_fail_23((*(P1029)rt_nil_check(F->st_293)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1587, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1587, rt_str("TYPEOF", 6))) {
F->sub_1588 = NULL;
F->sub_1588 = f_as_subtype_297((*(P1029)rt_nil_check(F->st_293)).b);
F->c2_1589 = NULL;
if ((F->sub_1588 != NULL)) {
F->t_1586 = f_resolve_subtype_268(F->sub_1588, &F->c2_1589);
} else {
F->t_1586 = f_value_subtype_290((*(P1029)rt_nil_check(F->st_293)).b, &F->c2_1589, &F->base_1585);
}
F->c_294v = f_new_cons_184();
F->result_ = F->t_1586;
goto ret_;
}
F->t_1586 = f_value_subtype_290((*(P1029)rt_nil_check(F->st_293)).b, &F->c_294v, &F->base_1585);
if (rt_str_eq(F->name_1587, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1586;
goto ret_;
}
{
F->k_1590 = ((rt_int)1LL);
F->ok_1591 = 1;
F->ac_1592 = NULL;
F->ac_1592 = F->c_294v;
if (((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->st_293)).b)).next != NULL)) {
F->k_1590 = f_manifest_366((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->st_293)).b)).next, &F->ok_1591);
}
while ((((*(P1035)rt_nil_check(F->t_1586)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->t_1586)).tparams == NULL))) {
F->t_1586 = (*(P1035)rt_nil_check(F->t_1586)).under;
}
if ((((((*(P1035)rt_nil_check(F->t_1586)).kind != (((rt_int)6LL))) || (!F->ok_1591)) || (F->k_1590 < ((rt_int)1LL))) || (F->k_1590 > (*(P1035)rt_nil_check(F->t_1586)).ndim))) {
f_fail_23((*(P1029)rt_nil_check(F->st_293)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_294v = f_new_cons_184();
(*(P1031)rt_nil_check(F->c_294v)).lo = f_cons_lo_252(F->ac_1592, F->k_1590);
(*(P1031)rt_nil_check(F->c_294v)).hi = f_cons_hi_255(F->ac_1592, F->k_1590);
F->result_ = f_idx_type_258(F->t_1586, F->k_1590);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_294) = F->c_294v;
  RT_FPOP();
  return F->result_;
}

static P1029 f_as_subtype_297(P1029 e_296) {
  struct f_as_subtype_297fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_296 = e_296;
F->st_1593 = NULL;
if ((F->e_296 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((*(P1029)rt_nil_check(F->e_296)).kind == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_297((*(P1029)rt_nil_check(F->e_296)).a);
goto ret_;
} else if (((*(P1029)rt_nil_check(F->e_296)).kind == (((rt_int)7LL)))) {
if ((!f_type_name_304(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1593 = f_nn_65((((rt_int)80LL)), (*(P1029)rt_nil_check(F->e_296)).line);
(*(P1029)rt_nil_check(F->st_1593)).name = (*(P1029)rt_nil_check(F->e_296)).name;
F->result_ = F->st_1593;
goto ret_;
} else if ((((*(P1029)rt_nil_check(F->e_296)).kind == (((rt_int)12LL))) && ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).a)).kind == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_302((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).a)).name, (*(P1029)rt_nil_check(F->e_296)).b, NULL, (*(P1029)rt_nil_check(F->e_296)).line);
goto ret_;
} else if (((*(P1029)rt_nil_check(F->e_296)).kind != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).a)).kind == (((rt_int)12LL))) && ((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).a)).a)).kind == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_302((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).a)).a)).name, (*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).a)).b, (*(P1029)rt_nil_check(F->e_296)).b, (*(P1029)rt_nil_check(F->e_296)).line);
goto ret_;
} else if (((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).a)).kind != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1594 = rt_str_copy((((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).a)).name))->all));
F->y_1595 = NULL;
F->y_1595 = f_lookup_163(&F->name_1594);
if ((rt_str_eq(F->name_1594, rt_str("INT", 3)) && (F->y_1595 == NULL))) {
if (((((*(P1029)rt_nil_check(F->e_296)).b == NULL) || ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).b)).kind != (((rt_int)16LL)))) || ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1593 = f_nn_65((((rt_int)70LL)), (*(P1029)rt_nil_check(F->e_296)).line);
(*(P1029)rt_nil_check(F->st_1593)).a = (*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).b)).a;
(*(P1029)rt_nil_check(F->st_1593)).b = (*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).b)).b;
F->result_ = F->st_1593;
goto ret_;
} else if ((rt_str_eq(F->name_1594, rt_str("FLOAT", 5)) && (F->y_1595 == NULL))) {
F->st_1593 = f_nn_65((((rt_int)71LL)), (*(P1029)rt_nil_check(F->e_296)).line);
(*(P1029)rt_nil_check(F->st_1593)).a = (*(P1029)rt_nil_check(F->e_296)).b;
if ((((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).b)).next != NULL) && ((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).b)).next)).kind == (((rt_int)16LL))))) {
(*(P1029)rt_nil_check(F->st_1593)).b = (*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).b)).next)).a;
(*(P1029)rt_nil_check(F->st_1593)).c = (*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).b)).next)).b;
}
F->result_ = F->st_1593;
goto ret_;
} else if (((!f_type_name_304(&F->name_1594)) && (!((F->y_1595 == NULL) && ((rt_str_eq(F->name_1594, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1594, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1594, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1593 = f_nn_65((((rt_int)80LL)), (*(P1029)rt_nil_check(F->e_296)).line);
(*(P1029)rt_nil_check(F->st_1593)).name = (*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_296)).a)).name;
(*(P1029)rt_nil_check(F->st_1593)).b = (*(P1029)rt_nil_check(F->e_296)).b;
(*(P1029)rt_nil_check(F->st_1593)).flag = ((rt_int)1LL);
F->result_ = F->st_1593;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_tt_subtype_302(P1022 name_298, P1029 tt_299, P1029 args_300, rt_int line_301) {
  struct f_tt_subtype_302fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_298 = name_298;
F->tt_299 = tt_299;
F->args_300 = args_300;
F->line_301 = line_301;
F->st_1596 = NULL;
if (rt_str_eq((((P1022)rt_nil_check(F->name_298))->all), rt_str("STRING", 6))) {
F->st_1596 = f_nn_65((((rt_int)73LL)), F->line_301);
} else if (rt_str_eq((((P1022)rt_nil_check(F->name_298))->all), rt_str("SET", 3))) {
F->st_1596 = f_nn_65((((rt_int)77LL)), F->line_301);
} else if ((rt_str_eq((((P1022)rt_nil_check(F->name_298))->all), rt_str("MAILBOX", 7)) && ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P1039)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1596 = f_nn_65((((rt_int)78LL)), F->line_301);
} else if (rt_str_eq((((P1022)rt_nil_check(F->name_298))->all), rt_str("FILE", 4))) {
F->st_1596 = f_nn_65((((rt_int)79LL)), F->line_301);
} else if (f_type_name_304(&(((P1022)rt_nil_check(F->name_298))->all))) {
F->st_1596 = f_nn_65((((rt_int)80LL)), F->line_301);
(*(P1029)rt_nil_check(F->st_1596)).name = F->name_298;
(*(P1029)rt_nil_check(F->st_1596)).a = F->tt_299;
(*(P1029)rt_nil_check(F->st_1596)).b = F->args_300;
F->result_ = F->st_1596;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P1029)rt_nil_check(F->st_1596)).a = F->tt_299;
(*(P1029)rt_nil_check(F->st_1596)).b = F->args_300;
F->result_ = F->st_1596;
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
F->y_1597 = NULL;
F->y_1597 = f_lookup_163(&(*F->name_303));
if ((F->y_1597 == NULL)) {
F->result_ = ((((((((rt_str_eq((*F->name_303), rt_str("INT", 3)) || rt_str_eq((*F->name_303), rt_str("BOOL", 4))) || rt_str_eq((*F->name_303), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_303), rt_str("ASCII", 5))) || rt_str_eq((*F->name_303), rt_str("ACT", 3))) || rt_str_eq((*F->name_303), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_303), rt_str("LATCH", 5))) || rt_str_eq((*F->name_303), rt_str("SEND_ST", 7))) || rt_str_eq((*F->name_303), rt_str("RECEIVE_ST", 10)));
goto ret_;
}
F->result_ = ((((*(P1039)rt_nil_check(F->y_1597)).kind == (((rt_int)5LL))) || ((*(P1039)rt_nil_check(F->y_1597)).kind == (((rt_int)6LL)))) || (((*(P1039)rt_nil_check(F->y_1597)).kind == (((rt_int)10LL))) && ((((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_1597)).decl)).b)).kind == (((rt_int)43LL))) || ((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_1597)).decl)).b)).kind == (((rt_int)44LL)))) || ((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_1597)).decl)).b)).kind == (((rt_int)42LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_empty_set_306(P1035 t_305) {
  struct f_empty_set_306fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_305 = t_305;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_new(", 10), f_sub_lo_198(f_base_of_223((*(P1035)rt_nil_check(F->t_305)).elem), f_base_cons_226((*(P1035)rt_nil_check(F->t_305)).elem, (*(P1035)rt_nil_check(F->t_305)).elemcons))), rt_str(", ", 2)), f_sub_hi_201(f_base_of_223((*(P1035)rt_nil_check(F->t_305)).elem), f_base_cons_226((*(P1035)rt_nil_check(F->t_305)).elem, (*(P1035)rt_nil_check(F->t_305)).elemcons))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_308(P1035 t_307) {
  struct f_opened_308fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_307 = t_307;
F->c_1598 = NULL;
F->c_1598 = g_caps_1088;
if (((((*(P1035)rt_nil_check(F->t_307)).kind != (((rt_int)15LL))) || ((*(P1035)rt_nil_check(F->t_307)).ocap == NULL)) || ((*(P1029)rt_nil_check((*(P1035)rt_nil_check(F->t_307)).ocap)).ival == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1598 != NULL)) {
if (((*(P1056)rt_nil_check(F->c_1598)).d == (*(P1035)rt_nil_check(F->t_307)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1598 = (*(P1056)rt_nil_check(F->c_1598)).next;
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
F->i_1599 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_310)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_309)).len)) < ((rt_int)(((*F->pat_310)).len))))) {
F->result_ = (*F->s_309);
goto ret_;
}
while ((rt_sub(rt_add(F->i_1599, ((rt_int)(((*F->pat_310)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_309)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_309), F->i_1599, rt_sub(rt_add(F->i_1599, ((rt_int)(((*F->pat_310)).len))), ((rt_int)1LL))), (*F->pat_310))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_309), ((rt_int)1LL), rt_sub(F->i_1599, ((rt_int)1LL))), (*F->r_311)), f_replace_all_312(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_309), rt_add(F->i_1599, ((rt_int)(((*F->pat_310)).len))), ((rt_int)(((*F->s_309)).len))); b_; }), &(*F->pat_310), &(*F->r_311)));
goto ret_;
}
F->i_1599 = rt_add(F->i_1599, ((rt_int)1LL));
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
F->l_1600 = NULL;
F->l_1600 = g_psub_1090;
F->r_1601 = NULL;
F->r_1601 = f_mk_3(&(*F->s_313));
while ((F->l_1600 != NULL)) {
F->r_1601 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_312(&(((P1022)rt_nil_check(F->r_1601))->all), &(((P1022)rt_nil_check((*(P1033)rt_nil_check(F->l_1600)).s))->all), &(((P1022)rt_nil_check((*(P1033)rt_nil_check((*(P1033)rt_nil_check(F->l_1600)).next)).s))->all)); b_; }));
F->l_1600 = (*(P1033)rt_nil_check((*(P1033)rt_nil_check(F->l_1600)).next)).next;
}
F->result_ = (((P1022)rt_nil_check(F->r_1601))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1035 f_new_type_318(P1039 y_315, P1029 st_316, P1031 *c_317) {
  struct f_new_type_318fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_315 = y_315;
F->st_316 = st_316;
F->c_317 = c_317;
F->c_317v = *F->c_317;
F->d_1602 = NULL;
F->d_1602 = (*(P1039)rt_nil_check(F->y_315)).decl;
F->p_1603 = NULL;
F->uc_1604 = NULL;
F->c_317v = f_new_cons_184();
if (((*(P1039)rt_nil_check(F->y_315)).t == NULL)) {
(*(P1039)rt_nil_check(F->y_315)).t = f_new_typ_183((((rt_int)15LL)));
(*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_315)).t)).name = (*(P1039)rt_nil_check(F->y_315)).name;
(*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_315)).t)).decl = F->d_1602;
(*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_315)).t)).tparams = (*(P1029)rt_nil_check(F->d_1602)).b;
if ((g_caps_1088 != NULL)) {
(*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_315)).t)).ocap = (*(P1056)rt_nil_check(g_caps_1088)).d;
}
f_open_scope_177();
F->p_1603 = (*(P1029)rt_nil_check(F->d_1602)).b;
while ((F->p_1603 != NULL)) {
F->z_1605 = NULL;
F->z_1605 = f_new_sym_181((((rt_int)2LL)), (*(P1029)rt_nil_check(F->p_1603)).name);
F->zc_1606 = NULL;
(*(P1039)rt_nil_check(F->z_1605)).t = f_resolve_subtype_268((*(P1029)rt_nil_check(F->p_1603)).a, &F->zc_1606);
(*(P1039)rt_nil_check(F->z_1605)).mnext = (*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_315)).t)).tpsyms;
(*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_315)).t)).tpsyms = F->z_1605;
(*(P1039)rt_nil_check(F->z_1605)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1603)).name))->all))), rt_str("@", 1)); b_; }));
f_define_168(F->z_1605, (*(P1029)rt_nil_check(F->d_1602)).line);
F->p_1603 = (*(P1029)rt_nil_check(F->p_1603)).next;
}
(*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_315)).t)).under = f_resolve_subtype_268((*(P1029)rt_nil_check(F->d_1602)).a, &F->uc_1604);
(*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_315)).t)).elemcons = F->uc_1604;
if (((*(P1029)rt_nil_check(F->d_1602)).c != NULL)) {
f_check_rep_332((*(P1029)rt_nil_check(F->d_1602)).c, (*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_315)).t)).under, F->uc_1604, 1, 0, F->d_1602);
(*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_315)).t)).repn = (*(P1029)rt_nil_check(F->d_1602)).c;
}
f_close_scope_178();
}
(*(P1031)rt_nil_check(F->c_317v)).args = (*(P1029)rt_nil_check(F->st_316)).b;
F->result_ = (*(P1039)rt_nil_check(F->y_315)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_317) = F->c_317v;
  RT_FPOP();
  return F->result_;
}

static rt_int f_needed_bits_321(P1035 t_319, P1031 c_320) {
  struct f_needed_bits_321fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_319 = t_319;
F->c_320 = c_320;
F->n_1607 = ((rt_int)0LL);
if (((*(P1035)rt_nil_check(F->t_319)).kind == (((rt_int)2LL)))) {
F->result_ = ((rt_int)1LL);
goto ret_;
} else if (((*(P1035)rt_nil_check(F->t_319)).kind == (((rt_int)4LL)))) {
F->v_1608 = rt_sub(f_list_len_71((*(P1035)rt_nil_check(F->t_319)).lits), ((rt_int)1LL));
if (((F->c_320 != NULL) && (*(P1031)rt_nil_check(F->c_320)).hasm)) {
F->v_1608 = (*(P1031)rt_nil_check(F->c_320)).mhi;
}
} else if (((((*(P1035)rt_nil_check(F->t_319)).kind == (((rt_int)1LL))) && (F->c_320 != NULL)) && (*(P1031)rt_nil_check(F->c_320)).hasm)) {
if (((*(P1031)rt_nil_check(F->c_320)).mlo < ((rt_int)0LL))) {
F->v_1608 = (*(P1031)rt_nil_check(F->c_320)).mhi;
if ((rt_sub(rt_neg((*(P1031)rt_nil_check(F->c_320)).mlo), ((rt_int)1LL)) > F->v_1608)) {
F->v_1608 = rt_sub(rt_neg((*(P1031)rt_nil_check(F->c_320)).mlo), ((rt_int)1LL));
}
F->n_1607 = ((rt_int)1LL);
} else {
F->v_1608 = (*(P1031)rt_nil_check(F->c_320)).mhi;
}
} else if (((*(P1035)rt_nil_check(F->t_319)).kind == (((rt_int)1LL)))) {
F->result_ = ((rt_int)64LL);
goto ret_;
} else if (((*(P1035)rt_nil_check(F->t_319)).kind == (((rt_int)3LL)))) {
if (((((F->c_320 != NULL) && ((*(P1031)rt_nil_check(F->c_320)).prec != NULL)) && f_has_digits_only_323(&(((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_320)).prec))->all))) && (rt_int_of_str((((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_320)).prec))->all)) <= ((rt_int)6LL)))) {
F->result_ = ((rt_int)32LL);
goto ret_;
}
F->result_ = ((rt_int)64LL);
goto ret_;
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
while ((F->v_1608 > ((rt_int)0LL))) {
F->n_1607 = rt_add(F->n_1607, ((rt_int)1LL));
F->v_1608 = rt_div(F->v_1608, ((rt_int)2LL));
}
if ((F->n_1607 == ((rt_int)0LL))) {
F->n_1607 = ((rt_int)1LL);
}
F->result_ = F->n_1607;
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
{ rt_int lo1610 = ((rt_int)1LL), hi1611 = ((rt_int)(((*F->s_322)).len));
for (rt_int it1612 = lo1610; it1612 <= hi1611; it1612++) {
F->i_1609 = it1612;
if ((!f_is_digit_11(rt_str_get((*F->s_322), F->i_1609)))) {
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

static int f_built_in_only_325(P1035 t_324) {
  struct f_built_in_only_325fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_324 = t_324;
if (((*(P1035)rt_nil_check(F->t_324)).kind == (((rt_int)15LL)))) {
F->result_ = ((*(P1035)rt_nil_check(F->t_324)).repn != NULL);
goto ret_;
} else if (((*(P1035)rt_nil_check(F->t_324)).kind == (((rt_int)8LL)))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->t_324)).kind == (((rt_int)7LL))) || ((*(P1035)rt_nil_check(F->t_324)).kind == (((rt_int)17LL))))) {
F->f_1613 = NULL;
F->f_1613 = (*(P1035)rt_nil_check(F->t_324)).fields;
while ((F->f_1613 != NULL)) {
if ((!f_built_in_only_325((*(P1037)rt_nil_check(F->f_1613)).t))) {
F->result_ = 0;
goto ret_;
}
F->f_1613 = (*(P1037)rt_nil_check(F->f_1613)).next;
}
} else if (((((*(P1035)rt_nil_check(F->t_324)).kind == (((rt_int)6LL))) || ((*(P1035)rt_nil_check(F->t_324)).kind == (((rt_int)16LL)))) || ((*(P1035)rt_nil_check(F->t_324)).kind == (((rt_int)5LL))))) {
F->result_ = (((*(P1035)rt_nil_check(F->t_324)).elem == NULL) || f_built_in_only_325((*(P1035)rt_nil_check(F->t_324)).elem));
goto ret_;
}
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_rep_332(P1029 items_326, P1035 t_327, P1031 c_328, int top_329, int indirect_330, P1029 d_331) {
  struct f_check_rep_332fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_326 = items_326;
F->t_327 = t_327;
F->c_328 = c_328;
F->top_329 = top_329;
F->indirect_330 = indirect_330;
F->d_331 = d_331;
F->it_1614 = NULL;
F->it_1614 = F->items_326;
F->at_1616 = NULL;
if (((F->top_329 && (!F->indirect_330)) && (!f_built_in_only_325(F->t_327)))) {
f_fail_23((*(P1029)rt_nil_check(F->d_331)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only built-in types may underlie a representation", 49); b_; }));
}
while ((F->it_1614 != NULL)) {
F->w_1617 = rt_str_copy((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->it_1614)).name))->all));
if (rt_str_eq(F->w_1617, rt_str("SIZE", 4))) {
F->v_1618 = f_manifest_366((*(P1029)rt_nil_check(F->it_1614)).a, &F->ok_1615);
F->dummy_1619 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->it_1614)).a, g_ty_int_1114, &F->at_1616));
f_check_type_232(F->at_1616, g_ty_int_1114, (*(P1029)rt_nil_check(F->it_1614)).line);
if ((F->ok_1615 && (F->v_1618 < ((rt_int)0LL)))) {
f_fail_23((*(P1029)rt_nil_check(F->it_1614)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a SIZE is not negative", 22); b_; }));
} else if (((F->ok_1615 && (f_needed_bits_321(F->t_327, F->c_328) > F->v_1618)) && (!F->indirect_330))) {
f_fail_23((*(P1029)rt_nil_check(F->it_1614)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("SIZE(", 5), f_itos_7(F->v_1618)), rt_str(") is too small for this subtype, which needs ", 45)), f_itos_7(f_needed_bits_321(F->t_327, F->c_328))), rt_str(" bits", 5)); b_; }));
}
} else if (rt_str_eq(F->w_1617, rt_str("ALIGN", 5))) {
F->m_1620 = f_manifest_366((*(P1029)rt_nil_check(F->it_1614)).a, &F->ok_1615);
if ((!F->top_329)) {
f_fail_23((*(P1029)rt_nil_check(F->it_1614)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALIGN is for the whole underlying subtype only", 46); b_; }));
}
if ((F->ok_1615 && (F->m_1620 <= ((rt_int)0LL)))) {
f_fail_23((*(P1029)rt_nil_check(F->it_1614)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the modulus of ALIGN is greater than zero", 41); b_; }));
}
if ((F->ok_1615 && ((*(P1029)rt_nil_check(F->it_1614)).b != NULL))) {
F->r_1622 = f_manifest_366((*(P1029)rt_nil_check(F->it_1614)).b, &F->ok2_1621);
if ((F->ok2_1621 && ((F->r_1622 < ((rt_int)0LL)) || (F->r_1622 >= F->m_1620)))) {
f_fail_23((*(P1029)rt_nil_check(F->it_1614)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALIGN(e1 OF e2) needs e1 in 0 .. e2 - 1", 39); b_; }));
}
}
} else if (rt_str_eq(F->w_1617, rt_str("OFFSET", 6))) {
F->o_1623 = f_manifest_366((*(P1029)rt_nil_check(F->it_1614)).a, &F->ok_1615);
if (F->top_329) {
f_fail_23((*(P1029)rt_nil_check(F->it_1614)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET is for components of records and unions only", 51); b_; }));
} else if ((F->ok_1615 && (F->o_1623 < ((rt_int)0LL)))) {
f_fail_23((*(P1029)rt_nil_check(F->it_1614)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an OFFSET is not negative", 25); b_; }));
}
} else if ((rt_str_eq(F->w_1617, rt_str("RECORD", 6)) || rt_str_eq(F->w_1617, rt_str("UNION", 5)))) {
F->comp_1624 = NULL;
F->comp_1624 = (*(P1029)rt_nil_check(F->it_1614)).c;
if (((rt_str_eq(F->w_1617, rt_str("RECORD", 6)) && ((*(P1035)rt_nil_check(F->t_327)).kind != (((rt_int)7LL)))) || (rt_str_eq(F->w_1617, rt_str("UNION", 5)) && ((*(P1035)rt_nil_check(F->t_327)).kind != (((rt_int)17LL)))))) {
f_fail_23((*(P1029)rt_nil_check(F->it_1614)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->w_1617, rt_str(" is a representation for ", 25)), F->w_1617), rt_str(" types only", 11)); b_; }));
}
while ((F->comp_1624 != NULL)) {
F->f_1625 = NULL;
F->f_1625 = (*(P1035)rt_nil_check(F->t_327)).fields;
while (((F->f_1625 != NULL) && (!rt_str_eq((((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_1625)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->comp_1624)).name))->all))))) {
F->f_1625 = (*(P1037)rt_nil_check(F->f_1625)).next;
}
if ((F->f_1625 != NULL)) {
f_check_rep_332((*(P1029)rt_nil_check(F->comp_1624)).a, (*(P1037)rt_nil_check(F->f_1625)).t, (*(P1037)rt_nil_check(F->f_1625)).c, 0, 0, F->d_331);
} else if (((!(rt_str_eq(F->w_1617, rt_str("UNION", 5)) && rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->comp_1624)).name))->all), rt_str("TAG", 3)))) && (!(F->top_329 && f_formal_named_335(F->d_331, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->comp_1624)).name))->all)))))) {
f_fail_23((*(P1029)rt_nil_check(F->comp_1624)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->comp_1624)).name))->all), rt_str(" is not a component", 19)); b_; }));
}
F->comp_1624 = (*(P1029)rt_nil_check(F->comp_1624)).next;
}
} else if (rt_str_eq(F->w_1617, rt_str("ARRAY", 5))) {
F->k_1626 = NULL;
F->k_1626 = (*(P1029)rt_nil_check(F->it_1614)).d;
if ((((*(P1035)rt_nil_check(F->t_327)).kind != (((rt_int)6LL))) || (f_list_len_71((*(P1029)rt_nil_check(F->it_1614)).d) != (*(P1035)rt_nil_check(F->t_327)).ndim))) {
f_fail_23((*(P1029)rt_nil_check(F->it_1614)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ARRAY names NORMAL or NOBOUNDS for each index of an array", 57); b_; }));
}
while ((F->k_1626 != NULL)) {
if (((!rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->k_1626)).name))->all), rt_str("NORMAL", 6))) && (!rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->k_1626)).name))->all), rt_str("NOBOUNDS", 8))))) {
f_fail_23((*(P1029)rt_nil_check(F->k_1626)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NORMAL or NOBOUNDS expected", 27); b_; }));
}
F->k_1626 = (*(P1029)rt_nil_check(F->k_1626)).next;
}
f_check_rep_332((*(P1029)rt_nil_check(F->it_1614)).c, (*(P1035)rt_nil_check(F->t_327)).elem, (*(P1035)rt_nil_check(F->t_327)).elemcons, 0, 0, F->d_331);
} else if (rt_str_eq(F->w_1617, rt_str("ENUM", 4))) {
if (((((*(P1035)rt_nil_check(F->t_327)).kind != (((rt_int)4LL))) || ((*(P1029)rt_nil_check(F->it_1614)).d == NULL)) || (!rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->it_1614)).d)).name))->all), rt_str("STANDARD", 8))))) {
f_fail_23((*(P1029)rt_nil_check(F->it_1614)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ENUM(STANDARD) is for enumeration subtypes", 42); b_; }));
}
} else if (rt_str_eq(F->w_1617, rt_str("PTR", 3))) {
if ((((((!F->indirect_330) || (!F->top_329)) || ((*(P1029)rt_nil_check(F->it_1614)).d == NULL)) || (!rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->it_1614)).d)).name))->all), rt_str("FREE", 4)))) || (((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->it_1614)).d)).next != NULL) && (!rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->it_1614)).d)).next)).name))->all), rt_str("UNCHECKED", 9)))))) {
f_fail_23((*(P1029)rt_nil_check(F->it_1614)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR(FREE) or PTR(FREE UNCHECKED) is for indirect types", 54); b_; }));
}
} else if (rt_str_eq(F->w_1617, rt_str("ABSENT", 6))) {
F->a_1627 = NULL;
F->a_1627 = (*(P1029)rt_nil_check(F->it_1614)).d;
if ((!F->top_329)) {
f_fail_23((*(P1029)rt_nil_check(F->it_1614)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABSENT is for the whole type", 28); b_; }));
}
while ((F->a_1627 != NULL)) {
if ((!f_formal_named_335(F->d_331, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->a_1627)).name))->all)))) {
f_fail_23((*(P1029)rt_nil_check(F->a_1627)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->a_1627)).name))->all), rt_str(" is not a formal parameter of the type", 38)); b_; }));
}
F->a_1627 = (*(P1029)rt_nil_check(F->a_1627)).next;
}
}
F->it_1614 = (*(P1029)rt_nil_check(F->it_1614)).next;
}
ret_:
  RT_FPOP();
  return;
}

static int f_formal_named_335(P1029 d_333, rstr *name_334) {
  struct f_formal_named_335fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_333 = d_333;
F->name_334 = name_334;
F->p_1628 = NULL;
F->p_1628 = (*(P1029)rt_nil_check(F->d_333)).b;
while ((F->p_1628 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1628)).name))->all), (*F->name_334))) {
F->result_ = 1;
goto ret_;
}
F->p_1628 = (*(P1029)rt_nil_check(F->p_1628)).next;
}
F->p_1628 = (*(P1029)rt_nil_check(F->d_333)).d;
if (((*(P1029)rt_nil_check(F->d_333)).kind == (((rt_int)44LL)))) {
while ((F->p_1628 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1628)).name))->all), (*F->name_334))) {
F->result_ = 1;
goto ret_;
}
F->p_1628 = (*(P1029)rt_nil_check(F->p_1628)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_unchecked_free_337(P1035 t_336) {
  struct f_unchecked_free_337fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_336 = t_336;
F->it_1629 = NULL;
if ((((*(P1035)rt_nil_check(F->t_336)).decl == NULL) || ((*(P1029)rt_nil_check((*(P1035)rt_nil_check(F->t_336)).decl)).kind != (((rt_int)44LL))))) {
F->result_ = 0;
goto ret_;
}
F->it_1629 = (*(P1029)rt_nil_check((*(P1035)rt_nil_check(F->t_336)).decl)).c;
while ((F->it_1629 != NULL)) {
if (((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->it_1629)).name))->all), rt_str("PTR", 3)) && ((*(P1029)rt_nil_check(F->it_1629)).d != NULL)) && ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->it_1629)).d)).next != NULL))) {
F->result_ = 1;
goto ret_;
}
F->it_1629 = (*(P1029)rt_nil_check(F->it_1629)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_341(rstr *lval_338, P1035 t_339, P1031 c_340) {
  struct f_init_storage_341fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_338 = lval_338;
F->t_339 = t_339;
F->c_340 = c_340;
f_make_storage_356(&(*F->lval_338), F->t_339, F->c_340);
if (((*(P1035)rt_nil_check(F->t_339)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1035)rt_nil_check(F->t_339)).initp, &(*F->lval_338)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_344(P1039 y_342, rstr *lval_343) {
  struct f_init_call_344fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_342 = y_342;
F->lval_343 = lval_343;
F->link_1630 = NULL;
F->link_1630 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1039)rt_nil_check(F->y_342)).level > ((rt_int)0LL))) {
F->link_1630 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1632 = ((rt_int)1LL), hi1633 = rt_sub(g_cur_level_1086, (*(P1039)rt_nil_check(F->y_342)).level);
for (rt_int it1634 = lo1632; it1634 <= hi1633; it1634++) {
F->i_1631 = it1634;
F->link_1630 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->link_1630))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1630 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->link_1630))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_342)).cname))->all), rt_str("(", 1)), (((P1022)rt_nil_check(F->link_1630))->all)), rt_str("&", 1)), (*F->lval_343)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_346(P1035 t_345) {
  struct f_needs_fin_346fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_345 = t_345;
if ((F->t_345 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P1035)rt_nil_check(F->t_345)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if (((*(P1035)rt_nil_check(F->t_345)).kind == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_346((*(P1035)rt_nil_check(F->t_345)).under);
goto ret_;
} else if (((*(P1035)rt_nil_check(F->t_345)).kind == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_346((*(P1035)rt_nil_check(F->t_345)).elem);
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->t_345)).kind == (((rt_int)7LL))) || ((*(P1035)rt_nil_check(F->t_345)).kind == (((rt_int)17LL))))) {
F->f_1635 = NULL;
F->f_1635 = (*(P1035)rt_nil_check(F->t_345)).fields;
while ((F->f_1635 != NULL)) {
if (f_needs_fin_346((*(P1037)rt_nil_check(F->f_1635)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1635 = (*(P1037)rt_nil_check(F->f_1635)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_349(rstr *lval_347, P1035 t_348) {
  struct f_fin_code_349fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_347 = lval_347;
F->t_348 = t_348;
F->r_1636 = NULL;
F->r_1636 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1035)rt_nil_check(F->t_348)).finalp != NULL)) {
F->r_1636 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_344((*(P1035)rt_nil_check(F->t_348)).finalp, &(*F->lval_347)), rt_str(" ", 1)); b_; }));
}
if ((((*(P1035)rt_nil_check(F->t_348)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->t_348)).tparams == NULL))) {
F->result_ = rt_str_cat((((P1022)rt_nil_check(F->r_1636))->all), f_fin_code_349(&(*F->lval_347), (*(P1035)rt_nil_check(F->t_348)).under));
goto ret_;
} else if (((*(P1035)rt_nil_check(F->t_348)).kind == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P1022)rt_nil_check(F->r_1636))->all), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_347), rt_str(".all", 4)); b_; }), (*(P1035)rt_nil_check(F->t_348)).under));
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->t_348)).kind == (((rt_int)6LL))) && f_needs_fin_346((*(P1035)rt_nil_check(F->t_348)).elem))) {
F->i_1637 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_1636))->all), rt_str("for (rt_int ", 12)), F->i_1637), rt_str(" = 0; ", 6)), F->i_1637), rt_str(" < ", 3)), f_acnt_249(F->t_348, &(*F->lval_347))), rt_str("; ", 2)), F->i_1637), rt_str("++) { ", 6)), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_347), rt_str(".p[", 3)), F->i_1637), rt_str("]", 1)); b_; }), (*(P1035)rt_nil_check(F->t_348)).elem)), rt_str(" }", 2));
goto ret_;
} else if (((*(P1035)rt_nil_check(F->t_348)).kind == (((rt_int)7LL)))) {
F->f_1638 = NULL;
F->f_1638 = (*(P1035)rt_nil_check(F->t_348)).fields;
while ((F->f_1638 != NULL)) {
if (f_needs_fin_346((*(P1037)rt_nil_check(F->f_1638)).t)) {
F->r_1636 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_1636))->all), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_347), rt_str(".", 1)), f_field_c_17(&(((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_1638)).name))->all))); b_; }), (*(P1037)rt_nil_check(F->f_1638)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1638 = (*(P1037)rt_nil_check(F->f_1638)).next;
}
} else if (((*(P1035)rt_nil_check(F->t_348)).kind == (((rt_int)17LL)))) {
F->f_1639 = NULL;
F->f_1639 = (*(P1035)rt_nil_check(F->t_348)).fields;
F->i_1640 = ((rt_int)0LL);
F->r_1636 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_1636))->all), rt_str("switch (", 8)), (*F->lval_347)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1639 != NULL)) {
if (f_needs_fin_346((*(P1037)rt_nil_check(F->f_1639)).t)) {
F->r_1636 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_1636))->all), rt_str(" case ", 6)), f_itos_7(F->i_1640)), rt_str(": ", 2)), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_347), rt_str(".u.", 3)), f_field_c_17(&(((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_1639)).name))->all))); b_; }), (*(P1037)rt_nil_check(F->f_1639)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1640 = rt_add(F->i_1640, ((rt_int)1LL));
F->f_1639 = (*(P1037)rt_nil_check(F->f_1639)).next;
}
F->r_1636 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_1636))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P1022)rt_nil_check(F->r_1636))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1035 f_tparam_type_352(P1035 t_350, rstr *name_351) {
  struct f_tparam_type_352fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_350 = t_350;
F->name_351 = name_351;
F->z_1641 = NULL;
F->z_1641 = (*(P1035)rt_nil_check(F->t_350)).tpsyms;
while ((F->z_1641 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->z_1641)).name))->all), (*F->name_351))) {
F->result_ = (*(P1039)rt_nil_check(F->z_1641)).t;
goto ret_;
}
F->z_1641 = (*(P1039)rt_nil_check(F->z_1641)).mnext;
}
F->result_ = g_ty_int_1114;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_356(rstr *lval_353, P1035 t_354, P1031 c_355) {
  struct f_make_storage_356fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_353 = lval_353;
F->t_354 = t_354;
F->c_355 = c_355;
if (((*(P1035)rt_nil_check(F->t_354)).kind == (((rt_int)15LL)))) {
F->p_1642 = NULL;
F->p_1642 = (*(P1035)rt_nil_check(F->t_354)).tparams;
F->a_1643 = NULL;
F->a_1643 = (*(P1031)rt_nil_check(F->c_355)).args;
F->uc_1644 = NULL;
F->ut_1645 = NULL;
F->at_1646 = NULL;
if ((f_list_len_71(F->a_1643) != f_list_len_71(F->p_1642))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_354)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1642))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1642 != NULL)) {
F->pt_1647 = f_tparam_type_352(F->t_354, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1642)).name))->all));
F->v_1648 = rt_str_copy(f_gexpr_800(F->a_1643, F->pt_1647, &F->at_1646));
f_check_type_232(F->at_1646, F->pt_1647, (*(P1029)rt_nil_check(F->a_1643)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".p_", 3)), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1642)).name))->all))), rt_str(" = ", 3)), F->v_1648), rt_str(";", 1)); b_; }));
F->p_1642 = (*(P1029)rt_nil_check(F->p_1642)).next;
F->a_1643 = (*(P1029)rt_nil_check(F->a_1643)).next;
}
{
F->saved_1649 = NULL;
F->saved_1649 = g_psub_1090;
F->p_1642 = (*(P1035)rt_nil_check(F->t_354)).tparams;
while ((F->p_1642 != NULL)) {
F->l1_1650 = NULL;
F->l2_1651 = NULL;
{ R1034 *cell1652 = rt_alloc(sizeof(R1034));
(*cell1652).s = NULL;
(*cell1652).next = NULL;
F->l1_1650 = cell1652;
}
{ R1034 *cell1653 = rt_alloc(sizeof(R1034));
(*cell1653).s = NULL;
(*cell1653).next = NULL;
F->l2_1651 = cell1653;
}
(*(P1033)rt_nil_check(F->l1_1650)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1642)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1033)rt_nil_check(F->l2_1651)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".p_", 3)), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1642)).name))->all))); b_; }));
(*(P1033)rt_nil_check(F->l1_1650)).next = F->l2_1651;
(*(P1033)rt_nil_check(F->l2_1651)).next = g_psub_1090;
g_psub_1090 = F->l1_1650;
F->p_1642 = (*(P1029)rt_nil_check(F->p_1642)).next;
}
if (((*(P1035)rt_nil_check(F->t_354)).tparams == NULL)) {
f_init_storage_341(&(*F->lval_353), (*(P1035)rt_nil_check(F->t_354)).under, (*(P1035)rt_nil_check(F->t_354)).elemcons);
} else {
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(".all", 4)); b_; }), (*(P1035)rt_nil_check(F->t_354)).under, (*(P1035)rt_nil_check(F->t_354)).elemcons);
}
g_psub_1090 = F->saved_1649;
}
} else if (((*(P1035)rt_nil_check(F->t_354)).kind == (((rt_int)12LL)))) {
if (((*(P1031)rt_nil_check(F->c_355)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_353)), rt_str(", ", 2)), f_subst_314(&(((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_355)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_234((*(P1035)rt_nil_check(F->t_354)).elem)), rt_str("), ", 3)), f_mcopy_392((*(P1035)rt_nil_check(F->t_354)).elem)), rt_str(");", 2)); b_; }));
} else if (((*(P1035)rt_nil_check(F->t_354)).kind == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_353)), rt_str(");", 2)); b_; }));
} else if (((*(P1035)rt_nil_check(F->t_354)).kind == (((rt_int)16LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = ", 3)), f_empty_set_306(F->t_354)), rt_str(";", 1)); b_; }));
} else if (((*(P1035)rt_nil_check(F->t_354)).kind == (((rt_int)10LL)))) {
F->at_1654 = NULL;
if ((((F->c_355 == NULL) || ((*(P1031)rt_nil_check(F->c_355)).args == NULL)) || ((*(P1029)rt_nil_check((*(P1031)rt_nil_check(F->c_355)).args)).next == NULL))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a file variable needs its access and use: FILE[S](access, use)", 62); b_; }));
}
if (((!f_text_file_984(F->t_354)) && (!f_flat_358((*(P1035)rt_nil_check(F->t_354)).elem)))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the components of a file on the simulated machine hold no strings, arrays, sets or pointers", 91); b_; }));
}
{
F->acc_1655 = rt_str_copy(f_gexpr_800((*(P1031)rt_nil_check(F->c_355)).args, g_file_access_type_1131, &F->at_1654));
F->use_1656 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check((*(P1031)rt_nil_check(F->c_355)).args)).next, g_file_mode_type_1125, &F->at_1654));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = rt_r_file_new(", 17)), F->acc_1655), rt_str(", ", 2)), F->use_1656), rt_str(", sizeof(", 9)), f_ctype_234((*(P1035)rt_nil_check(F->t_354)).elem)), rt_str("), ", 3)), f_bool_text_382(f_text_file_984(F->t_354))), rt_str(");", 2)); b_; }));
}
} else if (((*(P1035)rt_nil_check(F->t_354)).kind == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if (((*(P1035)rt_nil_check(F->t_354)).kind == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(" = NULL;", 8)); b_; }));
} else if (((*(P1035)rt_nil_check(F->t_354)).kind == (((rt_int)5LL)))) {
if (((*(P1031)rt_nil_check(F->c_355)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
if ((g_mark_uninit_1105 && (f_list_len_71((*(P1035)rt_nil_check(f_base_of_223(f_str_elem_218(F->t_354)))).lits) < ((rt_int)256LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = rt_r_str_undef(", 18)), f_subst_314(&(((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_355)).slen))->all))), rt_str(");", 2)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = rt_str_new(", 14)), f_subst_314(&(((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_355)).slen))->all))), rt_str(");", 2)); b_; }));
}
} else if (((*(P1035)rt_nil_check(F->t_354)).kind == (((rt_int)6LL)))) {
if (((*(P1031)rt_nil_check(F->c_355)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1658 = ((rt_int)1LL), hi1659 = (*(P1035)rt_nil_check(F->t_354)).ndim;
for (rt_int it1660 = lo1658; it1660 <= hi1659; it1660++) {
F->k_1657 = it1660;
if ((f_cons_lo_252(F->c_355, F->k_1657) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".", 1)), f_dim_lo_242(F->k_1657)), rt_str(" = ", 3)), f_subst_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1022)rt_nil_check(f_cons_lo_252(F->c_355, F->k_1657)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_353)), rt_str(".", 1)), f_dim_hi_244(F->k_1657)), rt_str(" = ", 3)), f_subst_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1022)rt_nil_check(f_cons_hi_255(F->c_355, F->k_1657)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if (((*(P1035)rt_nil_check(F->t_354)).ndim == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".lo2 = ", 7)), (*F->lval_353)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_234((*(P1035)rt_nil_check(F->t_354)).elem)), rt_str(") * (size_t)", 12)), f_acnt_249(F->t_354, &(*F->lval_353))), rt_str(" + 1);", 6)); b_; }));
if ((((((((((((*(P1035)rt_nil_check((*(P1035)rt_nil_check(F->t_354)).elem)).kind == (((rt_int)5LL))) || ((*(P1035)rt_nil_check((*(P1035)rt_nil_check(F->t_354)).elem)).kind == (((rt_int)6LL)))) || ((*(P1035)rt_nil_check((*(P1035)rt_nil_check(F->t_354)).elem)).kind == (((rt_int)7LL)))) || ((*(P1035)rt_nil_check((*(P1035)rt_nil_check(F->t_354)).elem)).kind == (((rt_int)15LL)))) || ((*(P1035)rt_nil_check((*(P1035)rt_nil_check(F->t_354)).elem)).kind == (((rt_int)8LL)))) || ((*(P1035)rt_nil_check((*(P1035)rt_nil_check(F->t_354)).elem)).kind == (((rt_int)12LL)))) || ((*(P1035)rt_nil_check((*(P1035)rt_nil_check(F->t_354)).elem)).kind == (((rt_int)13LL)))) || ((*(P1035)rt_nil_check((*(P1035)rt_nil_check(F->t_354)).elem)).kind == (((rt_int)14LL)))) || ((*(P1035)rt_nil_check((*(P1035)rt_nil_check(F->t_354)).elem)).kind == (((rt_int)17LL)))) || (g_mark_uninit_1105 && (!rt_str_eq(f_uninit_value_360((*(P1035)rt_nil_check(F->t_354)).elem), rt_str("", 0)))))) {
F->i_1661 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1661), rt_str(" = 0; ", 6)), F->i_1661), rt_str(" < ", 3)), f_acnt_249(F->t_354, &(*F->lval_353))), rt_str("; ", 2)), F->i_1661), rt_str("++) {", 5)); b_; }));
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".p[", 3)), F->i_1661), rt_str("]", 1)); b_; }), (*(P1035)rt_nil_check(F->t_354)).elem, (*(P1035)rt_nil_check(F->t_354)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if (((*(P1035)rt_nil_check(F->t_354)).kind == (((rt_int)7LL)))) {
F->f_1662 = NULL;
F->f_1662 = (*(P1035)rt_nil_check(F->t_354)).fields;
while ((F->f_1662 != NULL)) {
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".", 1)), f_field_c_17(&(((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_1662)).name))->all))); b_; }), (*(P1037)rt_nil_check(F->f_1662)).t, (*(P1037)rt_nil_check(F->f_1662)).c);
F->f_1662 = (*(P1037)rt_nil_check(F->f_1662)).next;
}
} else if (((*(P1035)rt_nil_check(F->t_354)).kind == (((rt_int)17LL)))) {
if (((F->c_355 != NULL) && (*(P1031)rt_nil_check(F->c_355)).hasm)) {
F->f_1663 = NULL;
F->f_1663 = (*(P1035)rt_nil_check(F->t_354)).fields;
{ rt_int lo1665 = ((rt_int)1LL), hi1666 = (*(P1031)rt_nil_check(F->c_355)).mlo;
for (rt_int it1667 = lo1665; it1667 <= hi1666; it1667++) {
F->i_1664 = it1667;
F->f_1663 = (*(P1037)rt_nil_check(F->f_1663)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".tag = ", 7)), f_itos_7((*(P1031)rt_nil_check(F->c_355)).mlo)), rt_str(";", 1)); b_; }));
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".u.", 3)), f_field_c_17(&(((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_1663)).name))->all))); b_; }), (*(P1037)rt_nil_check(F->f_1663)).t, (*(P1037)rt_nil_check(F->f_1663)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(".tag = -1;", 10)); b_; }));
}
} else if ((g_mark_uninit_1105 && (!rt_str_eq(f_uninit_value_360(F->t_354), rt_str("", 0))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = ", 3)), f_uninit_value_360(F->t_354)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_flat_358(P1035 t_357) {
  struct f_flat_358fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_357 = t_357;
if ((((*(P1035)rt_nil_check(F->t_357)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->t_357)).tparams == NULL))) {
F->result_ = f_flat_358((*(P1035)rt_nil_check(F->t_357)).under);
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->t_357)).kind == (((rt_int)7LL))) || ((*(P1035)rt_nil_check(F->t_357)).kind == (((rt_int)17LL))))) {
F->f_1668 = NULL;
F->f_1668 = (*(P1035)rt_nil_check(F->t_357)).fields;
while ((F->f_1668 != NULL)) {
if ((!f_flat_358((*(P1037)rt_nil_check(F->f_1668)).t))) {
F->result_ = 0;
goto ret_;
}
F->f_1668 = (*(P1037)rt_nil_check(F->f_1668)).next;
}
F->result_ = 1;
goto ret_;
}
F->result_ = (((((*(P1035)rt_nil_check(F->t_357)).kind == (((rt_int)1LL))) || ((*(P1035)rt_nil_check(F->t_357)).kind == (((rt_int)3LL)))) || ((*(P1035)rt_nil_check(F->t_357)).kind == (((rt_int)4LL)))) || ((*(P1035)rt_nil_check(F->t_357)).kind == (((rt_int)2LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_uninit_value_360(P1035 t_359) {
  struct f_uninit_value_360fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_359 = t_359;
if (((*(P1035)rt_nil_check(F->t_359)).kind == (((rt_int)1LL)))) {
F->result_ = rt_str("RT_R_IUNDEF", 11);
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->t_359)).kind == (((rt_int)4LL))) || ((*(P1035)rt_nil_check(F->t_359)).kind == (((rt_int)2LL))))) {
F->result_ = rt_str("RT_R_EUNDEF", 11);
goto ret_;
} else if (((*(P1035)rt_nil_check(F->t_359)).kind == (((rt_int)3LL)))) {
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

static rstr f_init_chk_363(P1035 t_361, rstr *v_362) {
  struct f_init_chk_363fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_361 = t_361;
F->v_362 = v_362;
F->b_1669 = NULL;
F->b_1669 = f_base_of_223(F->t_361);
if (f_suppressed_512(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))) {
F->result_ = (*F->v_362);
goto ret_;
} else if (((*(P1035)rt_nil_check(F->b_1669)).kind == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_ichk(", 10), (*F->v_362)), rt_str(")", 1));
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->b_1669)).kind == (((rt_int)4LL))) || ((*(P1035)rt_nil_check(F->b_1669)).kind == (((rt_int)2LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_echk(", 10), (*F->v_362)), rt_str(")", 1));
goto ret_;
} else if (((*(P1035)rt_nil_check(F->b_1669)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fchk(", 10), (*F->v_362)), rt_str(")", 1));
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->b_1669)).kind == (((rt_int)5LL))) && (f_list_len_71((*(P1035)rt_nil_check(f_base_of_223(f_str_elem_218(F->b_1669)))).lits) < ((rt_int)256LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_schk(", 10), (*F->v_362)), rt_str(")", 1));
goto ret_;
}
F->result_ = (*F->v_362);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_manifest_366(P1029 e_364, int *ok_365) {
  struct f_manifest_366fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_364 = e_364;
F->ok_365 = ok_365;
F->ok_365v = *F->ok_365;
F->v_1670 = NULL;
F->v_1670 = f_meval_375(F->e_364, &F->ok_365v);
if ((F->ok_365v && ((*(P1048)rt_nil_check(F->v_1670)).kind == (((rt_int)1LL))))) {
F->result_ = (*(P1048)rt_nil_check(F->v_1670)).i;
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

static P1048 f_mk_mval_369(rt_int kind_367, rt_int i_368) {
  struct f_mk_mval_369fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_367 = kind_367;
F->i_368 = i_368;
F->v_1671 = NULL;
{ R1049 *cell1672 = rt_alloc(sizeof(R1049));
(*cell1672).s = NULL;
(*cell1672).t = NULL;
F->v_1671 = cell1672;
}
(*(P1048)rt_nil_check(F->v_1671)).kind = F->kind_367;
(*(P1048)rt_nil_check(F->v_1671)).i = F->i_368;
F->result_ = F->v_1671;
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
F->r_1673 = ((rt_int)1LL);
{ rt_int lo1675 = ((rt_int)1LL), hi1676 = F->b_371;
for (rt_int it1677 = lo1675; it1677 <= hi1676; it1677++) {
F->i_1674 = it1677;
F->r_1673 = rt_mul(F->r_1673, F->a_370);
}
}
F->result_ = F->r_1673;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1048 f_meval_375(P1029 e_373, int *ok_374) {
  struct f_meval_375fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_373 = e_373;
F->ok_374 = ok_374;
F->ok_374v = *F->ok_374;
F->a_1678 = NULL;
F->b_1679 = NULL;
F->op_1681 = NULL;
F->ok_374v = 0;
if ((F->e_373 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if (((*(P1029)rt_nil_check(F->e_373)).kind == (((rt_int)1LL)))) {
F->ok_374v = 1;
F->result_ = f_mk_mval_369((((rt_int)1LL)), (*(P1029)rt_nil_check(F->e_373)).ival);
goto ret_;
} else if (((*(P1029)rt_nil_check(F->e_373)).kind == (((rt_int)5LL)))) {
F->ok_374v = 1;
F->result_ = f_mk_mval_369((((rt_int)2LL)), (*(P1029)rt_nil_check(F->e_373)).ival);
goto ret_;
} else if (((*(P1029)rt_nil_check(F->e_373)).kind == (((rt_int)2LL)))) {
F->a_1678 = f_mk_mval_369((((rt_int)3LL)), ((rt_int)0LL));
{ rt_frame xf1682;
if (RT_TRY(xf1682)) {
(*(P1048)rt_nil_check(F->a_1678)).f = rt_r_float_of_str((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_373)).name))->all));
F->ok_374v = 1;
RT_POP(xf1682);
} else {
RT_POP(xf1682);
int x1683 = rt_xcur;
{
F->ok_374v = 0;
}
}
}
F->result_ = F->a_1678;
goto ret_;
} else if (((*(P1029)rt_nil_check(F->e_373)).kind == (((rt_int)3LL)))) {
F->ok_374v = 1;
F->a_1678 = f_mk_mval_369((((rt_int)5LL)), ((rt_int)0LL));
(*(P1048)rt_nil_check(F->a_1678)).s = (*(P1029)rt_nil_check(F->e_373)).name;
F->result_ = F->a_1678;
goto ret_;
} else if (((*(P1029)rt_nil_check(F->e_373)).kind == (((rt_int)4LL)))) {
if ((f_lit_index_265((*(P1035)rt_nil_check(g_ty_ascii_1117)).lits, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_373)).name))->all)) >= ((rt_int)0LL))) {
F->ok_374v = 1;
F->a_1678 = f_mk_mval_369((((rt_int)4LL)), f_lit_index_265((*(P1035)rt_nil_check(g_ty_ascii_1117)).lits, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_373)).name))->all)));
(*(P1048)rt_nil_check(F->a_1678)).t = g_ty_ascii_1117;
(*(P1048)rt_nil_check(F->a_1678)).s = (*(P1029)rt_nil_check(F->e_373)).name;
F->result_ = F->a_1678;
goto ret_;
}
F->a_1678 = f_mk_mval_369((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P1048)rt_nil_check(F->a_1678)).s = (*(P1029)rt_nil_check(F->e_373)).name;
F->ok_374v = 1;
F->result_ = F->a_1678;
goto ret_;
} else if (((*(P1029)rt_nil_check(F->e_373)).kind == (((rt_int)17LL)))) {
F->result_ = f_meval_375((*(P1029)rt_nil_check(F->e_373)).a, &F->ok_374v);
goto ret_;
} else if (((*(P1029)rt_nil_check(F->e_373)).kind == (((rt_int)7LL)))) {
F->y_1684 = NULL;
F->y_1684 = f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_373)).name))->all));
if ((((F->y_1684 != NULL) && ((*(P1039)rt_nil_check(F->y_1684)).kind == (((rt_int)2LL)))) && ((*(P1039)rt_nil_check(F->y_1684)).mv != NULL))) {
F->ok_374v = 1;
F->result_ = (*(P1039)rt_nil_check(F->y_1684)).mv;
goto ret_;
} else if ((((F->y_1684 != NULL) && ((*(P1039)rt_nil_check(F->y_1684)).kind == (((rt_int)2LL)))) && (*(P1039)rt_nil_check(F->y_1684)).hasmv)) {
F->ok_374v = 1;
F->result_ = f_mk_mval_369((((rt_int)1LL)), (*(P1039)rt_nil_check(F->y_1684)).mvalue);
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if (((*(P1029)rt_nil_check(F->e_373)).kind == (((rt_int)8LL)))) {
F->a_1678 = f_meval_375((*(P1029)rt_nil_check(F->e_373)).a, &F->ok_374v);
if ((!F->ok_374v)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_373)).name))->all), rt_str("NOT", 3)) && ((*(P1048)rt_nil_check(F->a_1678)).kind == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), rt_sub(((rt_int)1LL), (*(P1048)rt_nil_check(F->a_1678)).i));
goto ret_;
} else if ((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_373)).name))->all), rt_str("-", 1)) && ((*(P1048)rt_nil_check(F->a_1678)).kind == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_neg((*(P1048)rt_nil_check(F->a_1678)).i));
goto ret_;
} else if ((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_373)).name))->all), rt_str("-", 1)) && ((*(P1048)rt_nil_check(F->a_1678)).kind == (((rt_int)3LL))))) {
F->b_1679 = f_mk_mval_369((((rt_int)3LL)), ((rt_int)0LL));
(*(P1048)rt_nil_check(F->b_1679)).f = (-(*(P1048)rt_nil_check(F->a_1678)).f);
F->result_ = F->b_1679;
goto ret_;
} else if (((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_373)).name))->all), rt_str("+", 1)) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_373)).name))->all), rt_str("-", 1))) && (((*(P1048)rt_nil_check(F->a_1678)).kind == (((rt_int)1LL))) || ((*(P1048)rt_nil_check(F->a_1678)).kind == (((rt_int)3LL)))))) {
F->result_ = F->a_1678;
goto ret_;
}
F->ok_374v = 0;
F->result_ = NULL;
goto ret_;
} else if ((((*(P1029)rt_nil_check(F->e_373)).kind != (((rt_int)9LL))) || f_user_defined_390(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_373)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1681 = (*(P1029)rt_nil_check(F->e_373)).name;
F->a_1678 = f_meval_375((*(P1029)rt_nil_check(F->e_373)).a, &F->ok_374v);
F->b_1679 = f_meval_375((*(P1029)rt_nil_check(F->e_373)).b, &F->ok2_1680);
F->ok_374v = (F->ok_374v && F->ok2_1680);
if ((!F->ok_374v)) {
F->result_ = NULL;
goto ret_;
}
F->ok_374v = 0;
if ((((*(P1048)rt_nil_check(F->a_1678)).kind == (((rt_int)1LL))) && ((*(P1048)rt_nil_check(F->b_1679)).kind == (((rt_int)1LL))))) {
F->ok_374v = 1;
if (rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_add((*(P1048)rt_nil_check(F->a_1678)).i, (*(P1048)rt_nil_check(F->b_1679)).i));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_sub((*(P1048)rt_nil_check(F->a_1678)).i, (*(P1048)rt_nil_check(F->b_1679)).i));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_mul((*(P1048)rt_nil_check(F->a_1678)).i, (*(P1048)rt_nil_check(F->b_1679)).i));
goto ret_;
} else if ((rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("DIV", 3)) && ((*(P1048)rt_nil_check(F->b_1679)).i != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_div((*(P1048)rt_nil_check(F->a_1678)).i, (*(P1048)rt_nil_check(F->b_1679)).i));
goto ret_;
} else if ((rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("MOD", 3)) && ((*(P1048)rt_nil_check(F->b_1679)).i != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_mod((*(P1048)rt_nil_check(F->a_1678)).i, (*(P1048)rt_nil_check(F->b_1679)).i));
goto ret_;
} else if ((rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("**", 2)) && ((*(P1048)rt_nil_check(F->b_1679)).i >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), f_ipow_372((*(P1048)rt_nil_check(F->a_1678)).i, (*(P1048)rt_nil_check(F->b_1679)).i));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384(((*(P1048)rt_nil_check(F->a_1678)).i == (*(P1048)rt_nil_check(F->b_1679)).i)));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384(((*(P1048)rt_nil_check(F->a_1678)).i != (*(P1048)rt_nil_check(F->b_1679)).i)));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384(((*(P1048)rt_nil_check(F->a_1678)).i < (*(P1048)rt_nil_check(F->b_1679)).i)));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384(((*(P1048)rt_nil_check(F->a_1678)).i <= (*(P1048)rt_nil_check(F->b_1679)).i)));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384(((*(P1048)rt_nil_check(F->a_1678)).i > (*(P1048)rt_nil_check(F->b_1679)).i)));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384(((*(P1048)rt_nil_check(F->a_1678)).i >= (*(P1048)rt_nil_check(F->b_1679)).i)));
goto ret_;
}
} else if ((((*(P1048)rt_nil_check(F->a_1678)).kind == (((rt_int)3LL))) && (((*(P1048)rt_nil_check(F->b_1679)).kind == (((rt_int)3LL))) || (((*(P1048)rt_nil_check(F->b_1679)).kind == (((rt_int)1LL))) && rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("**", 2)))))) {
F->result_ = f_float_op_380(&(((P1022)rt_nil_check(F->op_1681))->all), F->a_1678, F->b_1679, &F->ok_374v);
goto ret_;
} else if ((((*(P1048)rt_nil_check(F->a_1678)).kind == (((rt_int)2LL))) && ((*(P1048)rt_nil_check(F->b_1679)).kind == (((rt_int)2LL))))) {
F->ok_374v = 1;
if (rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), rt_mul((*(P1048)rt_nil_check(F->a_1678)).i, (*(P1048)rt_nil_check(F->b_1679)).i));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_add((*(P1048)rt_nil_check(F->a_1678)).i, (*(P1048)rt_nil_check(F->b_1679)).i) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("XOR", 3)) || rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384(((*(P1048)rt_nil_check(F->a_1678)).i != (*(P1048)rt_nil_check(F->b_1679)).i)));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384(((*(P1048)rt_nil_check(F->a_1678)).i == (*(P1048)rt_nil_check(F->b_1679)).i)));
goto ret_;
}
} else if (((((*(P1048)rt_nil_check(F->a_1678)).kind == (((rt_int)4LL))) && ((*(P1048)rt_nil_check(F->b_1679)).kind == (((rt_int)4LL)))) && (rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("=", 1)) || rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("/=", 2))))) {
F->ok_374v = 1;
if (rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384(rt_str_eq((((P1022)rt_nil_check((*(P1048)rt_nil_check(F->a_1678)).s))->all), (((P1022)rt_nil_check((*(P1048)rt_nil_check(F->b_1679)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((!rt_str_eq((((P1022)rt_nil_check((*(P1048)rt_nil_check(F->a_1678)).s))->all), (((P1022)rt_nil_check((*(P1048)rt_nil_check(F->b_1679)).s))->all)))));
goto ret_;
} else if (((((*(P1048)rt_nil_check(F->a_1678)).kind == (((rt_int)5LL))) && ((*(P1048)rt_nil_check(F->b_1679)).kind == (((rt_int)5LL)))) && (rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("=", 1)) || rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("/=", 2))))) {
F->ok_374v = 1;
if (rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384(rt_str_eq((((P1022)rt_nil_check((*(P1048)rt_nil_check(F->a_1678)).s))->all), (((P1022)rt_nil_check((*(P1048)rt_nil_check(F->b_1679)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((!rt_str_eq((((P1022)rt_nil_check((*(P1048)rt_nil_check(F->a_1678)).s))->all), (((P1022)rt_nil_check((*(P1048)rt_nil_check(F->b_1679)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P1022)rt_nil_check(F->op_1681))->all), rt_str("&", 1)) && (((*(P1048)rt_nil_check(F->a_1678)).kind == (((rt_int)5LL))) || ((*(P1048)rt_nil_check(F->a_1678)).t == g_ty_ascii_1117))) && (((*(P1048)rt_nil_check(F->b_1679)).kind == (((rt_int)5LL))) || ((*(P1048)rt_nil_check(F->b_1679)).t == g_ty_ascii_1117)))) {
F->r_1685 = NULL;
F->r_1685 = f_mk_mval_369((((rt_int)5LL)), ((rt_int)0LL));
F->ok_374v = 1;
(*(P1048)rt_nil_check(F->r_1685)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_386(F->a_1678), f_mstr_386(F->b_1679)); b_; }));
F->result_ = F->r_1685;
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

static P1048 f_float_op_380(rstr *op_376, P1048 a_377, P1048 b_378, int *ok_379) {
  struct f_float_op_380fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_376 = op_376;
F->a_377 = a_377;
F->b_378 = b_378;
F->ok_379 = ok_379;
F->ok_379v = *F->ok_379;
F->r_1686 = NULL;
F->r_1686 = f_mk_mval_369((((rt_int)3LL)), ((rt_int)0LL));
F->ok_379v = 1;
{ rt_frame xf1687;
if (RT_TRY(xf1687)) {
if (rt_str_eq((*F->op_376), rt_str("+", 1))) {
(*(P1048)rt_nil_check(F->r_1686)).f = rt_r_fovf((*(P1048)rt_nil_check(F->a_377)).f + (*(P1048)rt_nil_check(F->b_378)).f);
} else if (rt_str_eq((*F->op_376), rt_str("-", 1))) {
(*(P1048)rt_nil_check(F->r_1686)).f = rt_r_fovf((*(P1048)rt_nil_check(F->a_377)).f - (*(P1048)rt_nil_check(F->b_378)).f);
} else if (rt_str_eq((*F->op_376), rt_str("*", 1))) {
(*(P1048)rt_nil_check(F->r_1686)).f = rt_r_fovf((*(P1048)rt_nil_check(F->a_377)).f * (*(P1048)rt_nil_check(F->b_378)).f);
} else if (rt_str_eq((*F->op_376), rt_str("/", 1))) {
(*(P1048)rt_nil_check(F->r_1686)).f = rt_r_fovf(rt_fdiv((*(P1048)rt_nil_check(F->a_377)).f, (*(P1048)rt_nil_check(F->b_378)).f));
} else if (rt_str_eq((*F->op_376), rt_str("**", 2))) {
(*(P1048)rt_nil_check(F->r_1686)).f = rt_r_fpow((*(P1048)rt_nil_check(F->a_377)).f, (*(P1048)rt_nil_check(F->b_378)).i);
} else {
(*(P1048)rt_nil_check(F->r_1686)).kind = (((rt_int)2LL));
if (rt_str_eq((*F->op_376), rt_str("=", 1))) {
(*(P1048)rt_nil_check(F->r_1686)).i = f_bool_i_384(((*(P1048)rt_nil_check(F->a_377)).f == (*(P1048)rt_nil_check(F->b_378)).f));
} else if (rt_str_eq((*F->op_376), rt_str("/=", 2))) {
(*(P1048)rt_nil_check(F->r_1686)).i = f_bool_i_384(((*(P1048)rt_nil_check(F->a_377)).f != (*(P1048)rt_nil_check(F->b_378)).f));
} else if (rt_str_eq((*F->op_376), rt_str("<", 1))) {
(*(P1048)rt_nil_check(F->r_1686)).i = f_bool_i_384(((*(P1048)rt_nil_check(F->a_377)).f < (*(P1048)rt_nil_check(F->b_378)).f));
} else if (rt_str_eq((*F->op_376), rt_str("<=", 2))) {
(*(P1048)rt_nil_check(F->r_1686)).i = f_bool_i_384(((*(P1048)rt_nil_check(F->a_377)).f <= (*(P1048)rt_nil_check(F->b_378)).f));
} else if (rt_str_eq((*F->op_376), rt_str(">", 1))) {
(*(P1048)rt_nil_check(F->r_1686)).i = f_bool_i_384(((*(P1048)rt_nil_check(F->a_377)).f > (*(P1048)rt_nil_check(F->b_378)).f));
} else if (rt_str_eq((*F->op_376), rt_str(">=", 2))) {
(*(P1048)rt_nil_check(F->r_1686)).i = f_bool_i_384(((*(P1048)rt_nil_check(F->a_377)).f >= (*(P1048)rt_nil_check(F->b_378)).f));
} else {
F->ok_379v = 0;
}
}
RT_POP(xf1687);
} else {
RT_POP(xf1687);
int x1688 = rt_xcur;
{
F->ok_379v = 0;
}
}
}
F->result_ = F->r_1686;
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

static rstr f_mstr_386(P1048 v_385) {
  struct f_mstr_386fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_385 = v_385;
if (((*(P1048)rt_nil_check(F->v_385)).kind == (((rt_int)5LL)))) {
F->result_ = (((P1022)rt_nil_check((*(P1048)rt_nil_check(F->v_385)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_388((*(P1048)rt_nil_check(F->v_385)).i));
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
F->printable_1689 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_387 >= ((rt_int)32LL)) && (F->i_387 <= ((rt_int)126LL)))) {
F->result_ = rt_str_get(F->printable_1689, rt_sub(F->i_387, ((rt_int)31LL)));
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
F->y_1690 = NULL;
F->y_1690 = f_lookup_163(&(*F->op_389));
F->result_ = ((F->y_1690 != NULL) && (((*(P1039)rt_nil_check(F->y_1690)).kind == (((rt_int)3LL))) || ((*(P1039)rt_nil_check(F->y_1690)).kind == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_392(P1035 t_391) {
  struct f_mcopy_392fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_391 = t_391;
F->ct_1691 = rt_str_copy(f_ctype_234(F->t_391));
F->name_1692 = rt_str_new(rt_add(((rt_int)((F->ct_1691).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1692, rt_str_cat(rt_str("mc_", 3), F->ct_1691));
F->l_1693 = NULL;
if ((!f_seen_name_425(g_mcopies_1113, &F->name_1692))) {
{ R1034 *cell1694 = rt_alloc(sizeof(R1034));
(*cell1694).s = NULL;
(*cell1694).next = NULL;
F->l_1693 = cell1694;
}
(*(P1033)rt_nil_check(F->l_1693)).s = f_mk_3(&F->name_1692);
(*(P1033)rt_nil_check(F->l_1693)).next = g_mcopies_1113;
g_mcopies_1113 = F->l_1693;
f_put_27(g_out_protos_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1692), rt_str("(void *d, const void *s);", 25)); b_; }));
if ((((*(P1035)rt_nil_check(F->t_391)).kind == (((rt_int)15LL))) && f_top_level_406((*(P1035)rt_nil_check(F->t_391)).assignp))) {
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1692), rt_str("(void *d, const void *s) { ", 27)), f_user_call2_400((*(P1035)rt_nil_check(F->t_391)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(", 2), F->ct_1691), rt_str(" *)d", 4)); b_; }), 1, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1691), rt_str(" *)s", 4)); b_; }), 0)), rt_str("; }", 3)); b_; }));
} else {
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1692), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1691), rt_str(" *)d = ", 7)), f_copy_code_414(F->t_391, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1691), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
}
F->result_ = F->name_1692;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_394(P1035 t_393) {
  struct f_composite_394fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_393 = t_393;
F->result_ = (((((*(P1035)rt_nil_check(F->t_393)).kind == (((rt_int)6LL))) || ((*(P1035)rt_nil_check(F->t_393)).kind == (((rt_int)7LL)))) || ((*(P1035)rt_nil_check(F->t_393)).kind == (((rt_int)17LL)))) || (((*(P1035)rt_nil_check(F->t_393)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->t_393)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_call2_400(P1039 y_395, rstr *a_396, int lv_a_397, rstr *b_398, int lv_b_399) {
  struct f_user_call2_400fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_395 = y_395;
F->a_396 = a_396;
F->lv_a_397 = lv_a_397;
F->b_398 = b_398;
F->lv_b_399 = lv_b_399;
F->args_1695 = NULL;
F->args_1695 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1039)rt_nil_check(F->y_395)).level > ((rt_int)0LL))) {
F->args_1695 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1697 = ((rt_int)1LL), hi1698 = rt_sub(g_cur_level_1086, (*(P1039)rt_nil_check(F->y_395)).level);
for (rt_int it1699 = lo1697; it1699 <= hi1698; it1699++) {
F->i_1696 = it1699;
F->args_1695 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->args_1695))->all), rt_str("->up", 4)); b_; }));
}
}
F->args_1695 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->args_1695))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_395)).cname))->all), rt_str("(", 1)), (((P1022)rt_nil_check(F->args_1695))->all)), f_user_arg_404((*(P1039)rt_nil_check(F->y_395)).params, &(*F->a_396), F->lv_a_397)), rt_str(", ", 2)), f_user_arg_404((*(P1041)rt_nil_check((*(P1039)rt_nil_check(F->y_395)).params)).next, &(*F->b_398), F->lv_b_399)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_arg_404(P1041 pm_401, rstr *v_402, int lv_403) {
  struct f_user_arg_404fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pm_401 = pm_401;
F->v_402 = v_402;
F->lv_403 = lv_403;
if (((*(P1041)rt_nil_check(F->pm_401)).mode == (((rt_int)1LL)))) {
F->result_ = f_copy_code_414((*(P1041)rt_nil_check(F->pm_401)).t, &(*F->v_402));
goto ret_;
} else if (F->lv_403) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("&(", 2), (*F->v_402)), rt_str(")", 1));
goto ret_;
}
{
F->ct_1700 = rt_str_copy(f_ctype_234((*(P1041)rt_nil_check(F->pm_401)).t));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1700), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1700), rt_str(")); *b_ = ", 10)), (*F->v_402)), rt_str("; b_; })", 8));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_top_level_406(P1039 y_405) {
  struct f_top_level_406fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_405 = y_405;
F->result_ = ((F->y_405 != NULL) && ((*(P1039)rt_nil_check(F->y_405)).level == ((rt_int)0LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_411(rstr *lval_407, P1035 t_408, rstr *v_409, P1031 c_410) {
  struct f_assign_code_411fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_407 = lval_407;
F->t_408 = t_408;
F->v_409 = v_409;
F->c_410 = c_410;
if (((((*(P1035)rt_nil_check(F->t_408)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->t_408)).assignp != NULL)) && (g_in_func_1085 || f_top_level_406((*(P1035)rt_nil_check(F->t_408)).assignp)))) {
F->result_ = rt_str_cat(f_user_call2_400((*(P1035)rt_nil_check(F->t_408)).assignp, &(*F->lval_407), 1, &(*F->v_409), 0), rt_str(";", 1));
goto ret_;
}
if ((((*(P1035)rt_nil_check(F->t_408)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->t_408)).tparams == NULL))) {
F->result_ = f_assign_code_411(&(*F->lval_407), (*(P1035)rt_nil_check(F->t_408)).under, &(*F->v_409), F->c_410);
goto ret_;
}
if (((((*(P1035)rt_nil_check(F->t_408)).kind == (((rt_int)17LL))) && (F->c_410 != NULL)) && ((*(P1031)rt_nil_check(F->c_410)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->t_408)), rt_str(" u_ = ", 6)), (*F->v_409)), rt_str("; if (u_.tag != (", 17)), (((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_410)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_234(F->t_408)), rt_str("(&", 2)), (*F->lval_407)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_394(F->t_408)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_234(F->t_408)), rt_str("(&", 2)), (*F->lval_407)), rt_str(", ", 2)), (*F->v_409)), rt_str(");", 2));
goto ret_;
}
if (((*(P1035)rt_nil_check(F->t_408)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_407)), rt_str(", ", 2)), (*F->v_409)), rt_str(");", 2));
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->t_408)).kind == (((rt_int)6LL))) || ((*(P1035)rt_nil_check(F->t_408)).kind == (((rt_int)7LL))))) {
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

static rstr f_copy_code_414(P1035 t_412, rstr *v_413) {
  struct f_copy_code_414fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_412 = t_412;
F->v_413 = v_413;
if ((((*(P1035)rt_nil_check(F->t_412)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->t_412)).tparams == NULL))) {
F->result_ = f_copy_code_414((*(P1035)rt_nil_check(F->t_412)).under, &(*F->v_413));
goto ret_;
}
if (f_composite_394(F->t_412)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_234(F->t_412)), rt_str("(", 1)), (*F->v_413)), rt_str(")", 1));
goto ret_;
}
if (((*(P1035)rt_nil_check(F->t_412)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_413)), rt_str(")", 1));
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->t_412)).kind == (((rt_int)6LL))) || ((*(P1035)rt_nil_check(F->t_412)).kind == (((rt_int)7LL))))) {
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

static rstr f_eq_code_418(P1035 t_415, rstr *a_416, rstr *b_417) {
  struct f_eq_code_418fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_415 = t_415;
F->a_416 = a_416;
F->b_417 = b_417;
if (((((*(P1035)rt_nil_check(F->t_415)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->t_415)).eqp != NULL)) && (g_in_func_1085 || f_top_level_406((*(P1035)rt_nil_check(F->t_415)).eqp)))) {
F->result_ = f_user_call2_400((*(P1035)rt_nil_check(F->t_415)).eqp, &(*F->a_416), 0, &(*F->b_417), 0);
goto ret_;
}
if ((((*(P1035)rt_nil_check(F->t_415)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->t_415)).tparams == NULL))) {
F->result_ = f_eq_code_418((*(P1035)rt_nil_check(F->t_415)).under, &(*F->a_416), &(*F->b_417));
goto ret_;
}
if (f_composite_394(F->t_415)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_234(F->t_415)), rt_str("(", 1)), (*F->a_416)), rt_str(", ", 2)), (*F->b_417)), rt_str(")", 1));
goto ret_;
}
if (((*(P1035)rt_nil_check(F->t_415)).kind == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), (*F->a_416)), rt_str(", ", 2)), (*F->b_417)), rt_str(")", 1));
goto ret_;
}
if (((*(P1035)rt_nil_check(F->t_415)).kind == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_416)), rt_str(" == ", 4)), (*F->b_417)), rt_str(")", 1));
goto ret_;
}
if (((*(P1035)rt_nil_check(F->t_415)).kind == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_416)), rt_str(" == ", 4)), (*F->b_417)), rt_str(")", 1));
goto ret_;
}
if (((*(P1035)rt_nil_check(F->t_415)).kind == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if (((*(P1035)rt_nil_check(F->t_415)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_416)), rt_str(", ", 2)), (*F->b_417)), rt_str(")", 1));
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->t_415)).kind == (((rt_int)6LL))) || ((*(P1035)rt_nil_check(F->t_415)).kind == (((rt_int)7LL))))) {
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

static rstr f_elem_assign_422(rstr *lval_419, P1035 t_420, rstr *v_421) {
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

static int f_seen_name_425(P1033 l_423, rstr *s_424) {
  struct f_seen_name_425fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_423 = l_423;
F->s_424 = s_424;
F->p_1701 = NULL;
F->p_1701 = F->l_423;
while ((F->p_1701 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1033)rt_nil_check(F->p_1701)).s))->all), (*F->s_424))) {
F->result_ = 1;
goto ret_;
}
F->p_1701 = (*(P1033)rt_nil_check(F->p_1701)).next;
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
F->order_1702 = NULL;
F->t_1703 = NULL;
F->t_1703 = g_all_types_1074;
F->done_1704 = NULL;
while ((F->t_1703 != NULL)) {
if ((f_composite_394(F->t_1703) && (!f_seen_name_425(F->done_1704, &(((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_1703)).cname))->all))))) {
F->l_1705 = NULL;
F->c_1706 = rt_str_new(((rt_int)(((((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_1703)).cname))->all)).len)));
rt_str_assign(&F->c_1706, (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_1703)).cname))->all));
{ R1034 *cell1707 = rt_alloc(sizeof(R1034));
(*cell1707).s = NULL;
(*cell1707).next = NULL;
F->l_1705 = cell1707;
}
(*(P1033)rt_nil_check(F->l_1705)).s = (*(P1035)rt_nil_check(F->t_1703)).cname;
(*(P1033)rt_nil_check(F->l_1705)).next = F->done_1704;
F->done_1704 = F->l_1705;
f_put_27(g_out_helpers_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1706), rt_str("(", 1)), F->c_1706), rt_str(" *d, ", 5)), F->c_1706), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1706), rt_str(" cp_", 4)), F->c_1706), rt_str("(", 1)), F->c_1706), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_1077, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1706), rt_str("(", 1)), F->c_1706), rt_str(" a, ", 4)), F->c_1706), rt_str(" b);", 4)); b_; }));
f_helper_bodies_428(F->t_1703);
}
F->t_1703 = (*(P1035)rt_nil_check(F->t_1703)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_428(P1035 t_427) {
  struct f_helper_bodies_428fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_427 = t_427;
F->c_1708 = rt_str_new(((rt_int)(((((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_427)).cname))->all)).len)));
rt_str_assign(&F->c_1708, (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_427)).cname))->all));
F->b_1709 = NULL;
F->b_1709 = g_out_funcs_1080;
if (((*(P1035)rt_nil_check(F->t_427)).kind == (((rt_int)6LL)))) {
F->e_1710 = NULL;
F->e_1710 = (*(P1035)rt_nil_check(F->t_427)).elem;
F->sizes_1711 = NULL;
F->sizes_1711 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1712 = NULL;
F->bounds_1712 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1714 = ((rt_int)1LL), hi1715 = (*(P1035)rt_nil_check(F->t_427)).ndim;
for (rt_int it1716 = lo1714; it1716 <= hi1715; it1716++) {
F->k_1713 = it1716;
F->l_1717 = rt_str_copy(f_dim_lo_242(F->k_1713));
F->h_1718 = rt_str_copy(f_dim_hi_244(F->k_1713));
F->sizes_1711 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->sizes_1711))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1717), rt_str(", d->", 5)), F->h_1718), rt_str(") != RT_R_EXT(s.", 16)), F->l_1717), rt_str(", s.", 4)), F->h_1718), rt_str(")", 1)); b_; }));
F->bounds_1712 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->bounds_1712))->all), rt_str(" || a.", 6)), F->l_1717), rt_str(" != b.", 6)), F->l_1717), rt_str(" || a.", 6)), F->h_1718), rt_str(" != b.", 6)), F->h_1718); b_; }));
}
}
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1708), rt_str("(", 1)), F->c_1708), rt_str(" *d, ", 5)), F->c_1708), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P1022)rt_nil_check(F->sizes_1711))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_249(F->t_427, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_422(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1710, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_422(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1710, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1708), rt_str(" cp_", 4)), F->c_1708), rt_str("(", 1)), F->c_1708), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1708), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_234(F->e_1710)), rt_str(") * (size_t)", 12)), f_acnt_249(F->t_427, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_249(F->t_427, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_414(F->e_1710, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1708), rt_str("(", 1)), F->c_1708), rt_str(" a, ", 4)), F->c_1708), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P1022)rt_nil_check(F->bounds_1712))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_249(F->t_427, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_418(F->e_1710, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (((*(P1035)rt_nil_check(F->t_427)).kind == (((rt_int)15LL)))) {
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1708), rt_str("(", 1)), F->c_1708), rt_str(" *d, ", 5)), F->c_1708), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_186((*(P1035)rt_nil_check(F->t_427)).under) && ((*(P1035)rt_nil_check(F->t_427)).elemcons != NULL)) && ((*(P1031)rt_nil_check((*(P1035)rt_nil_check(F->t_427)).elemcons)).lo != NULL))) {
F->saved_1719 = NULL;
F->saved_1719 = g_psub_1090;
F->p_1720 = NULL;
F->p_1720 = (*(P1035)rt_nil_check(F->t_427)).tparams;
while ((F->p_1720 != NULL)) {
F->l1_1721 = NULL;
F->l2_1722 = NULL;
{ R1034 *cell1723 = rt_alloc(sizeof(R1034));
(*cell1723).s = NULL;
(*cell1723).next = NULL;
F->l1_1721 = cell1723;
}
{ R1034 *cell1724 = rt_alloc(sizeof(R1034));
(*cell1724).s = NULL;
(*cell1724).next = NULL;
F->l2_1722 = cell1724;
}
(*(P1033)rt_nil_check(F->l1_1721)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1720)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1033)rt_nil_check(F->l2_1722)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1720)).name))->all))); b_; }));
(*(P1033)rt_nil_check(F->l1_1721)).next = F->l2_1722;
(*(P1033)rt_nil_check(F->l2_1722)).next = g_psub_1090;
g_psub_1090 = F->l1_1721;
F->p_1720 = (*(P1029)rt_nil_check(F->p_1720)).next;
}
if (((*(P1035)rt_nil_check((*(P1035)rt_nil_check(F->t_427)).under)).kind == (((rt_int)3LL)))) {
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_314(&(((P1022)rt_nil_check((*(P1031)rt_nil_check((*(P1035)rt_nil_check(F->t_427)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_314(&(((P1022)rt_nil_check((*(P1031)rt_nil_check((*(P1035)rt_nil_check(F->t_427)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_314(&(((P1022)rt_nil_check((*(P1031)rt_nil_check((*(P1035)rt_nil_check(F->t_427)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_314(&(((P1022)rt_nil_check((*(P1031)rt_nil_check((*(P1035)rt_nil_check(F->t_427)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_1090 = F->saved_1719;
} else {
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_422(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P1035)rt_nil_check(F->t_427)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1708), rt_str(" cp_", 4)), F->c_1708), rt_str("(", 1)), F->c_1708), rt_str(" s) { s.all = ", 14)), f_copy_code_414((*(P1035)rt_nil_check(F->t_427)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1708), rt_str("(", 1)), F->c_1708), rt_str(" a, ", 4)), F->c_1708), rt_str(" b) { return ", 13)), f_eq_code_418((*(P1035)rt_nil_check(F->t_427)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if (((*(P1035)rt_nil_check(F->t_427)).kind == (((rt_int)17LL)))) {
F->f_1725 = NULL;
F->f_1725 = (*(P1035)rt_nil_check(F->t_427)).fields;
F->i_1726 = ((rt_int)0LL);
F->cases_as_1727 = NULL;
F->cases_as_1727 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1728 = NULL;
F->cases_cp_1728 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1729 = NULL;
F->cases_eq_1729 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1725 != NULL)) {
F->fn_1730 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_1725)).name))->all))));
F->cases_as_1727 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->cases_as_1727))->all), rt_str(" case ", 6)), f_itos_7(F->i_1726)), rt_str(": d->", 5)), F->fn_1730), rt_str(" = ", 3)), f_copy_code_414((*(P1037)rt_nil_check(F->f_1725)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1730); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1728 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->cases_cp_1728))->all), rt_str(" case ", 6)), f_itos_7(F->i_1726)), rt_str(": d.", 4)), F->fn_1730), rt_str(" = ", 3)), f_copy_code_414((*(P1037)rt_nil_check(F->f_1725)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1730); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1729 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->cases_eq_1729))->all), rt_str(" case ", 6)), f_itos_7(F->i_1726)), rt_str(": return ", 9)), f_eq_code_418((*(P1037)rt_nil_check(F->f_1725)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1730); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1730); b_; }))), rt_str(";", 1)); b_; }));
F->i_1726 = rt_add(F->i_1726, ((rt_int)1LL));
F->f_1725 = (*(P1037)rt_nil_check(F->f_1725)).next;
}
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1708), rt_str("(", 1)), F->c_1708), rt_str(" *d, ", 5)), F->c_1708), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P1022)rt_nil_check(F->cases_as_1727))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1708), rt_str(" cp_", 4)), F->c_1708), rt_str("(", 1)), F->c_1708), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1708), rt_str(" d = s; switch (s.tag) {", 24)), (((P1022)rt_nil_check(F->cases_cp_1728))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1708), rt_str("(", 1)), F->c_1708), rt_str(" a, ", 4)), F->c_1708), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P1022)rt_nil_check(F->cases_eq_1729))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1731 = NULL;
F->f_1731 = (*(P1035)rt_nil_check(F->t_427)).fields;
F->conds_1732 = NULL;
F->conds_1732 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1708), rt_str("(", 1)), F->c_1708), rt_str(" *d, ", 5)), F->c_1708), rt_str(" s) {", 5)); b_; }));
while ((F->f_1731 != NULL)) {
F->fn_1733 = rt_str_copy(f_field_c_17(&(((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_1731)).name))->all)));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_422(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1733); b_; }), (*(P1037)rt_nil_check(F->f_1731)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1733); b_; }))); b_; }));
F->f_1731 = (*(P1037)rt_nil_check(F->f_1731)).next;
}
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1708), rt_str(" cp_", 4)), F->c_1708), rt_str("(", 1)), F->c_1708), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1708), rt_str(" d = s;", 7)); b_; }));
F->f_1731 = (*(P1035)rt_nil_check(F->t_427)).fields;
while ((F->f_1731 != NULL)) {
F->fn_1734 = rt_str_copy(f_field_c_17(&(((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_1731)).name))->all)));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1734), rt_str(" = ", 3)), f_copy_code_414((*(P1037)rt_nil_check(F->f_1731)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1734); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1732 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->conds_1732))->all), rt_str(" && ", 4)), f_eq_code_418((*(P1037)rt_nil_check(F->f_1731)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1734); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1734); b_; }))); b_; }));
F->f_1731 = (*(P1037)rt_nil_check(F->f_1731)).next;
}
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1708), rt_str("(", 1)), F->c_1708), rt_str(" a, ", 4)), F->c_1708), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P1022)rt_nil_check(F->conds_1732))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1709, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_430(P1029 elems_429) {
  struct f_declare_body_430fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_429 = elems_429;
F->e_1735 = NULL;
F->e_1735 = F->elems_429;
while ((F->e_1735 != NULL)) {
if (((*(P1029)rt_nil_check(F->e_1735)).kind == (((rt_int)51LL)))) {
F->g_1736 = NULL;
F->g_1736 = f_new_sym_181((((rt_int)10LL)), (*(P1029)rt_nil_check(F->e_1735)).name);
(*(P1039)rt_nil_check(F->g_1736)).decl = F->e_1735;
(*(P1039)rt_nil_check(F->g_1736)).level = g_cur_level_1086;
(*(P1039)rt_nil_check(F->g_1736)).owner = g_func_sym_1097;
(*(P1039)rt_nil_check(F->g_1736)).gctx = g_fctx_1087;
f_define_168(F->g_1736, (*(P1029)rt_nil_check(F->e_1735)).line);
}
F->e_1735 = (*(P1029)rt_nil_check(F->e_1735)).next;
}
F->e_1735 = F->elems_429;
while ((F->e_1735 != NULL)) {
if ((((*(P1029)rt_nil_check(F->e_1735)).kind == (((rt_int)41LL))) && ((*(P1029)rt_nil_check(F->e_1735)).flag == ((rt_int)0LL)))) {
f_manifest_const_432(F->e_1735);
} else if (((*(P1029)rt_nil_check(F->e_1735)).kind == (((rt_int)47LL)))) {
f_gen_capsule_440(F->e_1735);
} else if ((((((*(P1029)rt_nil_check(F->e_1735)).kind == (((rt_int)48LL))) && ((*(P1029)rt_nil_check(F->e_1735)).flag != ((rt_int)1LL))) && ((*(P1029)rt_nil_check(F->e_1735)).flag != ((rt_int)3LL))) && (!f_pending_capsule_446(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_1735)).name))->all))))) {
f_gen_expose_473(F->e_1735);
(*(P1029)rt_nil_check(F->e_1735)).eline = ((rt_int)1LL);
} else if (((*(P1029)rt_nil_check(F->e_1735)).kind == (((rt_int)49LL)))) {
F->y_1737 = NULL;
F->y_1737 = f_new_sym_181((((rt_int)7LL)), (*(P1029)rt_nil_check(F->e_1735)).name);
(*(P1039)rt_nil_check(F->y_1737)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_1735)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_168(F->y_1737, (*(P1029)rt_nil_check(F->e_1735)).line);
f_put_27(g_out_globals_1079, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_1737)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_1082, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_1737)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_1735)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if (((*(P1029)rt_nil_check(F->e_1735)).kind == (((rt_int)42LL)))) {
F->y_1738 = NULL;
F->y_1738 = f_new_sym_181((((rt_int)6LL)), (*(P1029)rt_nil_check(F->e_1735)).name);
(*(P1039)rt_nil_check(F->y_1738)).st = (*(P1029)rt_nil_check(F->e_1735)).a;
(*(P1039)rt_nil_check(F->y_1738)).decl = F->e_1735;
f_define_168(F->y_1738, (*(P1029)rt_nil_check(F->e_1735)).line);
} else if (((*(P1029)rt_nil_check(F->e_1735)).kind == (((rt_int)44LL)))) {
F->y_1739 = NULL;
F->y_1739 = f_new_sym_181((((rt_int)5LL)), (*(P1029)rt_nil_check(F->e_1735)).name);
F->t_1740 = NULL;
F->t_1740 = f_new_typ_183((((rt_int)8LL)));
(*(P1035)rt_nil_check(F->t_1740)).name = (*(P1029)rt_nil_check(F->e_1735)).name;
(*(P1035)rt_nil_check(F->t_1740)).decl = F->e_1735;
(*(P1039)rt_nil_check(F->y_1739)).t = F->t_1740;
f_define_168(F->y_1739, (*(P1029)rt_nil_check(F->e_1735)).line);
} else if (((*(P1029)rt_nil_check(F->e_1735)).kind == (((rt_int)43LL)))) {
F->y_1741 = NULL;
F->y_1741 = f_new_sym_181((((rt_int)5LL)), (*(P1029)rt_nil_check(F->e_1735)).name);
(*(P1039)rt_nil_check(F->y_1741)).st = (*(P1029)rt_nil_check(F->e_1735)).a;
(*(P1039)rt_nil_check(F->y_1741)).decl = F->e_1735;
f_define_168(F->y_1741, (*(P1029)rt_nil_check(F->e_1735)).line);
}
F->e_1735 = (*(P1029)rt_nil_check(F->e_1735)).next;
}
F->e_1735 = F->elems_429;
while ((F->e_1735 != NULL)) {
if (((((*(P1029)rt_nil_check(F->e_1735)).kind == (((rt_int)45LL))) || ((*(P1029)rt_nil_check(F->e_1735)).kind == (((rt_int)46LL)))) || ((*(P1029)rt_nil_check(F->e_1735)).kind == (((rt_int)50LL))))) {
F->y_1742 = NULL;
f_declare_subprogram_503(F->e_1735);
F->y_1742 = f_lookup_decl_165(F->e_1735);
(*(P1039)rt_nil_check(F->y_1742)).home = F->elems_429;
f_normal_function_498(F->e_1735, F->y_1742);
}
F->e_1735 = (*(P1029)rt_nil_check(F->e_1735)).next;
}
F->e_1735 = F->elems_429;
{
F->snap_1743 = NULL;
while ((F->e_1735 != NULL)) {
if (((*(P1029)rt_nil_check(F->e_1735)).kind == (((rt_int)51LL)))) {
if ((F->snap_1743 == NULL)) {
{ P1043 cell1744 = rt_alloc(sizeof *cell1744);
rt_int pv1745 = (((rt_int)4093LL));
cell1744->p_n = pv1745;
cell1744->all.lo = ((rt_int)0LL); cell1744->all.hi = pv1745;
cell1744->all.lo2 = cell1744->all.hi2 = 1;
cell1744->all.p = rt_alloc(sizeof(P1039) * (size_t)(RT_CNT(cell1744->all)) + 1);
for (rt_int i1746 = 0; i1746 < (RT_CNT(cell1744->all)); i1746++) {
cell1744->all.p[i1746] = NULL;
}
F->snap_1743 = cell1744;
}
{ rt_int lo1748 = ((rt_int)0LL), hi1749 = (((rt_int)4093LL));
for (rt_int it1750 = lo1748; it1750 <= hi1749; it1750++) {
F->i_1747 = it1750;
(((P1043)rt_nil_check(F->snap_1743))->all).p[(rt_index(F->i_1747, (((P1043)rt_nil_check(F->snap_1743))->all).lo, (((P1043)rt_nil_check(F->snap_1743))->all).hi) - (((P1043)rt_nil_check(F->snap_1743))->all).lo)] = ({ A1045 b_ = (((P1043)rt_nil_check(g_table_1069))->all); b_.p[(rt_index(F->i_1747, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1751 = NULL;
F->g_1751 = f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_1735)).name))->all));
(*(P1039)rt_nil_check(F->g_1751)).env = F->snap_1743;
}
}
F->e_1735 = (*(P1029)rt_nil_check(F->e_1735)).next;
}
}
F->e_1735 = F->elems_429;
while ((F->e_1735 != NULL)) {
if ((((*(P1029)rt_nil_check(F->e_1735)).kind == (((rt_int)45LL))) && (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_1735)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_1735)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1752 = NULL;
F->y_1752 = f_lookup_decl_165(F->e_1735);
if (((((F->y_1752 != NULL) && ((*(P1039)rt_nil_check(F->y_1752)).params != NULL)) && ((*(P1041)rt_nil_check((*(P1039)rt_nil_check(F->y_1752)).params)).next == NULL)) && (((*(P1035)rt_nil_check((*(P1041)rt_nil_check((*(P1039)rt_nil_check(F->y_1752)).params)).t)).kind == (((rt_int)15LL))) || ((*(P1035)rt_nil_check((*(P1041)rt_nil_check((*(P1039)rt_nil_check(F->y_1752)).params)).t)).kind == (((rt_int)8LL)))))) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_1735)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P1035)rt_nil_check((*(P1041)rt_nil_check((*(P1039)rt_nil_check(F->y_1752)).params)).t)).initp = F->y_1752;
} else {
(*(P1035)rt_nil_check((*(P1041)rt_nil_check((*(P1039)rt_nil_check(F->y_1752)).params)).t)).finalp = F->y_1752;
}
}
}
if (((((*(P1029)rt_nil_check(F->e_1735)).kind == (((rt_int)45LL))) && rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_1735)).name))->all), rt_str(":=", 2))) || (((*(P1029)rt_nil_check(F->e_1735)).kind == (((rt_int)46LL))) && (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_1735)).name))->all), rt_str("=", 1)) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_1735)).name))->all), rt_str("<", 1)))))) {
F->y_1753 = NULL;
F->y_1753 = f_lookup_decl_165(F->e_1735);
if (((((((F->y_1753 != NULL) && ((*(P1039)rt_nil_check(F->y_1753)).params != NULL)) && ((*(P1041)rt_nil_check((*(P1039)rt_nil_check(F->y_1753)).params)).next != NULL)) && ((*(P1041)rt_nil_check((*(P1041)rt_nil_check((*(P1039)rt_nil_check(F->y_1753)).params)).next)).next == NULL)) && ((*(P1035)rt_nil_check((*(P1041)rt_nil_check((*(P1039)rt_nil_check(F->y_1753)).params)).t)).kind == (((rt_int)15LL)))) && f_same_221((*(P1041)rt_nil_check((*(P1039)rt_nil_check(F->y_1753)).params)).t, (*(P1041)rt_nil_check((*(P1041)rt_nil_check((*(P1039)rt_nil_check(F->y_1753)).params)).next)).t))) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_1735)).name))->all), rt_str(":=", 2))) {
if (((*(P1041)rt_nil_check((*(P1039)rt_nil_check(F->y_1753)).params)).mode != (((rt_int)2LL)))) {
f_fail_23((*(P1029)rt_nil_check(F->e_1735)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the first formal of := is a VAR formal (13.2)", 45); b_; }));
}
(*(P1035)rt_nil_check((*(P1041)rt_nil_check((*(P1039)rt_nil_check(F->y_1753)).params)).t)).assignp = F->y_1753;
} else if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_1735)).name))->all), rt_str("=", 1))) {
(*(P1035)rt_nil_check((*(P1041)rt_nil_check((*(P1039)rt_nil_check(F->y_1753)).params)).t)).eqp = F->y_1753;
} else {
(*(P1035)rt_nil_check((*(P1041)rt_nil_check((*(P1039)rt_nil_check(F->y_1753)).params)).t)).ltp = F->y_1753;
}
}
}
F->e_1735 = (*(P1029)rt_nil_check(F->e_1735)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_432(P1029 d_431) {
  struct f_manifest_const_432fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_431 = d_431;
F->v_1755 = NULL;
F->y_1756 = NULL;
F->t_1757 = NULL;
F->ctext_1758 = NULL;
if (((*(P1029)rt_nil_check(F->d_431)).a != NULL)) {
if ((((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->d_431)).a)).kind != (((rt_int)70LL))) || ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->d_431)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1755 = f_meval_375((*(P1029)rt_nil_check(F->d_431)).b, &F->ok_1754);
if ((!F->ok_1754)) {
goto ret_;
}
{
F->saved_1759 = NULL;
F->saved_1759 = g_code_1083;
g_code_1083 = f_new_buffer_24();
g_trial_1112 = rt_add(g_trial_1112, ((rt_int)1LL));
{ rt_frame xf1760;
if (RT_TRY(xf1760)) {
F->ctext_1758 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_800((*(P1029)rt_nil_check(F->d_431)).b, NULL, &F->t_1757)), rt_str(")", 1)); b_; }));
RT_POP(xf1760);
} else {
RT_POP(xf1760);
int x1761 = rt_xcur;
if (0 || x1761 == ex_compile_error_1) {
F->ok_1754 = 0;
} else {
rt_raise(x1761);
}
}
}
g_trial_1112 = rt_sub(g_trial_1112, ((rt_int)1LL));
F->ok_1754 = (F->ok_1754 && ((*(P1052)rt_nil_check(g_code_1083)).head == NULL));
g_code_1083 = F->saved_1759;
}
if (((!F->ok_1754) || (((*(P1029)rt_nil_check(F->d_431)).a != NULL) && ((*(P1035)rt_nil_check(F->t_1757)).kind != (((rt_int)1LL)))))) {
goto ret_;
}
if (((*(P1048)rt_nil_check(F->v_1755)).kind == (((rt_int)4LL)))) {
(*(P1048)rt_nil_check(F->v_1755)).t = F->t_1757;
(*(P1048)rt_nil_check(F->v_1755)).i = f_lit_index_265((*(P1035)rt_nil_check(f_base_of_223(F->t_1757))).lits, &(((P1022)rt_nil_check((*(P1048)rt_nil_check(F->v_1755)).s))->all));
}
(*(P1029)rt_nil_check(F->d_431)).flag = ((rt_int)1LL);
F->y_1756 = f_new_sym_181((((rt_int)2LL)), (*(P1029)rt_nil_check(F->d_431)).name);
(*(P1039)rt_nil_check(F->y_1756)).t = F->t_1757;
(*(P1039)rt_nil_check(F->y_1756)).c = f_new_cons_184();
(*(P1039)rt_nil_check(F->y_1756)).mv = F->v_1755;
if (((*(P1048)rt_nil_check(F->v_1755)).kind == (((rt_int)1LL)))) {
(*(P1039)rt_nil_check(F->y_1756)).mvalue = (*(P1048)rt_nil_check(F->v_1755)).i;
(*(P1039)rt_nil_check(F->y_1756)).hasmv = 1;
}
(*(P1039)rt_nil_check(F->y_1756)).ro_flag = 1;
(*(P1039)rt_nil_check(F->y_1756)).access = F->ctext_1758;
f_define_168(F->y_1756, (*(P1029)rt_nil_check(F->d_431)).line);
ret_:
  RT_FPOP();
  return;
}

static int f_exported_436(P1029 d_433, rstr *name_434, int *ro_435) {
  struct f_exported_436fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_433 = d_433;
F->name_434 = name_434;
F->ro_435 = ro_435;
F->ro_435v = *F->ro_435;
F->p_1762 = NULL;
F->p_1762 = (*(P1029)rt_nil_check(F->d_433)).a;
F->ro_435v = 0;
if (((*(P1029)rt_nil_check(F->d_433)).ival == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1762 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1762)).name))->all), (*F->name_434))) {
F->ro_435v = ((*(P1029)rt_nil_check(F->p_1762)).ival == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1762 = (*(P1029)rt_nil_check(F->p_1762)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ro_435v)) (*F->ro_435) = F->ro_435v;
  RT_FPOP();
  return F->result_;
}

static P1039 f_copy_sym_438(P1039 y_437) {
  struct f_copy_sym_438fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_437 = y_437;
F->z_1763 = NULL;
{ R1040 *cell1764 = rt_alloc(sizeof(R1040));
(*cell1764).name = NULL;
(*cell1764).t = NULL;
(*cell1764).c = NULL;
(*cell1764).access = NULL;
(*cell1764).cname = NULL;
(*cell1764).st = NULL;
(*cell1764).decl = NULL;
(*cell1764).params = NULL;
(*cell1764).result = NULL;
(*cell1764).members = NULL;
(*cell1764).mnext = NULL;
(*cell1764).binds = NULL;
(*cell1764).insts = NULL;
(*cell1764).env = NULL;
(*cell1764).chain = NULL;
(*cell1764).stack = NULL;
(*cell1764).owner = NULL;
(*cell1764).gctx = NULL;
(*cell1764).mv = NULL;
(*cell1764).reqs = NULL;
(*cell1764).home = NULL;
(*cell1764).capn = NULL;
(*cell1764).tbinds = NULL;
(*cell1764).loc = NULL;
(*cell1764).reqs_sym = NULL;
F->z_1763 = cell1764;
}
(*(P1039)rt_nil_check(F->z_1763)).kind = (*(P1039)rt_nil_check(F->y_437)).kind;
(*(P1039)rt_nil_check(F->z_1763)).name = (*(P1039)rt_nil_check(F->y_437)).name;
(*(P1039)rt_nil_check(F->z_1763)).t = (*(P1039)rt_nil_check(F->y_437)).t;
(*(P1039)rt_nil_check(F->z_1763)).c = (*(P1039)rt_nil_check(F->y_437)).c;
(*(P1039)rt_nil_check(F->z_1763)).access = (*(P1039)rt_nil_check(F->y_437)).access;
(*(P1039)rt_nil_check(F->z_1763)).cname = (*(P1039)rt_nil_check(F->y_437)).cname;
(*(P1039)rt_nil_check(F->z_1763)).ro_flag = (*(P1039)rt_nil_check(F->y_437)).ro_flag;
(*(P1039)rt_nil_check(F->z_1763)).mvalue = (*(P1039)rt_nil_check(F->y_437)).mvalue;
(*(P1039)rt_nil_check(F->z_1763)).hasmv = (*(P1039)rt_nil_check(F->y_437)).hasmv;
(*(P1039)rt_nil_check(F->z_1763)).st = (*(P1039)rt_nil_check(F->y_437)).st;
(*(P1039)rt_nil_check(F->z_1763)).decl = (*(P1039)rt_nil_check(F->y_437)).decl;
(*(P1039)rt_nil_check(F->z_1763)).params = (*(P1039)rt_nil_check(F->y_437)).params;
(*(P1039)rt_nil_check(F->z_1763)).result = (*(P1039)rt_nil_check(F->y_437)).result;
(*(P1039)rt_nil_check(F->z_1763)).level = (*(P1039)rt_nil_check(F->y_437)).level;
(*(P1039)rt_nil_check(F->z_1763)).byref = (*(P1039)rt_nil_check(F->y_437)).byref;
(*(P1039)rt_nil_check(F->z_1763)).members = (*(P1039)rt_nil_check(F->y_437)).members;
(*(P1039)rt_nil_check(F->z_1763)).env = (*(P1039)rt_nil_check(F->y_437)).env;
F->result_ = F->z_1763;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_440(P1029 d_439) {
  struct f_gen_capsule_440fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_439 = d_439;
F->y_1765 = NULL;
F->y_1765 = f_new_sym_181((((rt_int)8LL)), (*(P1029)rt_nil_check(F->d_439)).name);
F->saved_1766 = NULL;
F->saved_1766 = g_suppress_1103;
F->p_1767 = NULL;
F->p_1767 = (*(P1029)rt_nil_check(F->d_439)).b;
F->tail_1768 = NULL;
(*(P1039)rt_nil_check(F->y_1765)).decl = F->d_439;
while ((F->p_1767 != NULL)) {
F->pm_1769 = NULL;
{ R1042 *cell1770 = rt_alloc(sizeof(R1042));
(*cell1770).name = NULL;
(*cell1770).t = NULL;
(*cell1770).c = NULL;
(*cell1770).cfield = NULL;
(*cell1770).next = NULL;
F->pm_1769 = cell1770;
}
(*(P1041)rt_nil_check(F->pm_1769)).name = (*(P1029)rt_nil_check(F->p_1767)).name;
(*(P1041)rt_nil_check(F->pm_1769)).mode = (*(P1029)rt_nil_check(F->p_1767)).ival;
(*(P1041)rt_nil_check(F->pm_1769)).t = f_resolve_subtype_268((*(P1029)rt_nil_check(F->p_1767)).a, &(*(P1041)rt_nil_check(F->pm_1769)).c);
if ((F->tail_1768 == NULL)) {
(*(P1039)rt_nil_check(F->y_1765)).params = F->pm_1769;
} else {
(*(P1041)rt_nil_check(F->tail_1768)).next = F->pm_1769;
}
F->tail_1768 = F->pm_1769;
F->p_1767 = (*(P1029)rt_nil_check(F->p_1767)).next;
}
if ((((*(P1029)rt_nil_check(F->d_439)).b == NULL) && f_imports_variables_442(F->d_439))) {
(*(P1039)rt_nil_check(F->y_1765)).pending = 1;
} else if (((*(P1029)rt_nil_check(F->d_439)).b == NULL)) {
g_suppress_1103 = f_suppressing_510((*(P1029)rt_nil_check(F->d_439)).prags);
f_elaborate_capsule_455(F->d_439, F->y_1765, NULL, F->d_439);
g_suppress_1103 = F->saved_1766;
}
f_define_168(F->y_1765, (*(P1029)rt_nil_check(F->d_439)).line);
ret_:
  RT_FPOP();
  return;
}

static int f_imports_variables_442(P1029 d_441) {
  struct f_imports_variables_442fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_441 = d_441;
F->result_ = (((*(P1029)rt_nil_check(F->d_441)).d != NULL) || ((*(P1029)rt_nil_check(F->d_441)).flag >= ((rt_int)2LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_elaborate_pending_444(P1039 y_443) {
  struct f_elaborate_pending_444fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_443 = y_443;
F->saved_1771 = NULL;
F->saved_1771 = g_suppress_1103;
if ((*(P1039)rt_nil_check(F->y_443)).pending) {
(*(P1039)rt_nil_check(F->y_443)).pending = 0;
g_suppress_1103 = f_suppressing_510((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_443)).decl)).prags);
f_elaborate_capsule_455((*(P1039)rt_nil_check(F->y_443)).decl, F->y_443, NULL, (*(P1039)rt_nil_check(F->y_443)).decl);
g_suppress_1103 = F->saved_1771;
}
ret_:
  RT_FPOP();
  return;
}

static int f_pending_capsule_446(rstr *name_445) {
  struct f_pending_capsule_446fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_445 = name_445;
F->y_1772 = NULL;
F->y_1772 = f_lookup_163(&(*F->name_445));
F->result_ = (((F->y_1772 != NULL) && ((*(P1039)rt_nil_check(F->y_1772)).kind == (((rt_int)8LL)))) && (*(P1039)rt_nil_check(F->y_1772)).pending);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_params_450(P1029 d_447, P1029 args_448, rt_int line_449) {
  struct f_capsule_params_450fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_447 = d_447;
F->args_448 = args_448;
F->line_449 = line_449;
F->p_1773 = NULL;
F->p_1773 = (*(P1029)rt_nil_check(F->d_447)).b;
F->a_1774 = NULL;
F->a_1774 = F->args_448;
F->t_1775 = NULL;
F->vt_1776 = NULL;
F->c_1777 = NULL;
while (((F->p_1773 != NULL) && (F->a_1774 != NULL))) {
F->t_1775 = f_resolve_subtype_268((*(P1029)rt_nil_check(F->p_1773)).a, &F->c_1777);
if (((*(P1029)rt_nil_check(F->p_1773)).ival == (((rt_int)3LL)))) {
f_fail_23(F->line_449, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if ((((*(P1029)rt_nil_check(F->p_1773)).ival == (((rt_int)2LL))) || ((*(P1029)rt_nil_check(F->p_1773)).ival == (((rt_int)4LL))))) {
F->lv_1778 = NULL;
F->lc_1779 = NULL;
F->y_1781 = NULL;
F->y_1781 = f_new_sym_181((((rt_int)1LL)), (*(P1029)rt_nil_check(F->p_1773)).name);
f_lvalue_769(F->a_1774, &F->lv_1778, &F->vt_1776, &F->lc_1779, &F->ro_1780);
f_check_type_232(F->vt_1776, F->t_1775, F->line_449);
if ((F->ro_1780 && ((*(P1029)rt_nil_check(F->p_1773)).ival == (((rt_int)2LL))))) {
f_fail_23(F->line_449, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1773)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (g_in_func_1085) {
F->f_1782 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1773)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234(F->t_1775)), rt_str(" *", 2)), F->f_1782), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1782), rt_str(" = &", 4)), (((P1022)rt_nil_check(F->lv_1778))->all)), rt_str(";", 1)); b_; }));
(*(P1039)rt_nil_check(F->y_1781)).level = g_cur_level_1086;
(*(P1039)rt_nil_check(F->y_1781)).access = f_mk_3(&F->f_1782);
(*(P1039)rt_nil_check(F->y_1781)).byref = 1;
} else {
F->g_1783 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1773)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1079, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234(F->t_1775)), rt_str(" *", 2)), F->g_1783), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_1093, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1783), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1783, rt_str(" = &", 4)), (((P1022)rt_nil_check(F->lv_1778))->all)), rt_str(";", 1)); b_; }));
(*(P1039)rt_nil_check(F->y_1781)).level = ((rt_int)0LL);
(*(P1039)rt_nil_check(F->y_1781)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1783), rt_str(")", 1)); b_; }));
}
(*(P1039)rt_nil_check(F->y_1781)).t = F->t_1775;
(*(P1039)rt_nil_check(F->y_1781)).c = F->lc_1779;
(*(P1039)rt_nil_check(F->y_1781)).ro_flag = ((*(P1029)rt_nil_check(F->p_1773)).ival == (((rt_int)4LL)));
f_define_168(F->y_1781, F->line_449);
} else {
F->y_1784 = NULL;
F->y_1784 = f_new_sym_181((((rt_int)2LL)), (*(P1029)rt_nil_check(F->p_1773)).name);
F->v_1785 = rt_str_copy(f_gexpr_800(F->a_1774, F->t_1775, &F->vt_1776));
f_check_type_232(F->vt_1776, F->t_1775, F->line_449);
{
F->access_1786 = rt_str_copy(f_storage_519(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1773)).name))->all), F->t_1775));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1786, rt_str(" = ", 3)), f_copy_code_414(F->t_1775, &F->v_1785)), rt_str(";", 1)); b_; }));
f_bind_522(F->y_1784, &F->access_1786);
}
(*(P1039)rt_nil_check(F->y_1784)).t = F->t_1775;
(*(P1039)rt_nil_check(F->y_1784)).c = F->c_1777;
(*(P1039)rt_nil_check(F->y_1784)).ro_flag = 1;
f_define_168(F->y_1784, F->line_449);
}
F->p_1773 = (*(P1029)rt_nil_check(F->p_1773)).next;
F->a_1774 = (*(P1029)rt_nil_check(F->a_1774)).next;
}
if (((F->p_1773 != NULL) || (F->a_1774 != NULL))) {
f_fail_23(F->line_449, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_447)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_455(P1029 d_451, P1039 y_452, P1029 args_453, P1029 owner_454) {
  struct f_elaborate_capsule_455fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_451 = d_451;
F->y_452 = y_452;
F->args_453 = args_453;
F->owner_454 = owner_454;
F->cr_1787 = NULL;
F->ctx_1788 = NULL;
F->saved_gotos_1789 = NULL;
F->m_1790 = NULL;
F->p_1791 = NULL;
F->p_1791 = (*(P1029)rt_nil_check(F->d_451)).a;
{ R1057 *cell1793 = rt_alloc(sizeof(R1057));
(*cell1793).d = NULL;
(*cell1793).next = NULL;
F->cr_1787 = cell1793;
}
(*(P1056)rt_nil_check(F->cr_1787)).d = F->d_451;
(*(P1056)rt_nil_check(F->cr_1787)).next = g_caps_1088;
g_caps_1088 = F->cr_1787;
f_open_scope_177();
(*(P1056)rt_nil_check(F->cr_1787)).depth = g_depth_1072;
if (((*(P1029)rt_nil_check(F->d_451)).b != NULL)) {
f_capsule_params_450(F->d_451, F->args_453, (*(P1029)rt_nil_check(F->owner_454)).line);
}
{ R1047 *cell1794 = rt_alloc(sizeof(R1047));
(*cell1794).imps = NULL;
(*cell1794).next = NULL;
F->ctx_1788 = cell1794;
}
(*(P1046)rt_nil_check(F->ctx_1788)).depth = g_depth_1072;
(*(P1046)rt_nil_check(F->ctx_1788)).imps = (*(P1029)rt_nil_check(F->d_451)).d;
(*(P1046)rt_nil_check(F->ctx_1788)).all_imp = ((*(P1029)rt_nil_check(F->d_451)).flag >= ((rt_int)2LL));
(*(P1046)rt_nil_check(F->ctx_1788)).next = g_fctx_1087;
g_fctx_1087 = F->ctx_1788;
F->saved_gotos_1789 = g_gotos_1108;
g_gotos_1108 = NULL;
f_declare_labels_586((*(P1029)rt_nil_check(F->d_451)).c);
f_declare_body_430((*(P1029)rt_nil_check(F->d_451)).c);
f_capsule_body_593((*(P1029)rt_nil_check(F->d_451)).c);
{
F->w_1795 = NULL;
{ R1059 *cell1796 = rt_alloc(sizeof(R1059));
(*cell1796).d = NULL;
(*cell1796).w = NULL;
(*cell1796).next = NULL;
F->w_1795 = cell1796;
}
(*(P1058)rt_nil_check(F->w_1795)).d = F->owner_454;
(*(P1058)rt_nil_check(F->w_1795)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_580((*(P1029)rt_nil_check(F->d_451)).c); b_; }));
(*(P1058)rt_nil_check(F->w_1795)).next = g_cap_waits_1089;
g_cap_waits_1089 = F->w_1795;
}
g_fctx_1087 = (*(P1046)rt_nil_check(g_fctx_1087)).next;
F->m_1790 = g_scope_stack_1073;
while (((F->m_1790 != NULL) && ((*(P1039)rt_nil_check(F->m_1790)).depth == g_depth_1072))) {
if ((((((*(P1039)rt_nil_check(F->m_1790)).kind == (((rt_int)5LL))) && ((*(P1039)rt_nil_check(F->m_1790)).t == NULL)) && ((*(P1039)rt_nil_check(F->m_1790)).decl != NULL)) && ((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->m_1790)).decl)).kind == (((rt_int)43LL))))) {
(*(P1039)rt_nil_check(F->m_1790)).t = f_new_type_318(F->m_1790, f_nn_65((((rt_int)80LL)), (*(P1029)rt_nil_check(F->d_451)).line), &(*(P1039)rt_nil_check(F->m_1790)).c);
} else if (((((*(P1039)rt_nil_check(F->m_1790)).kind == (((rt_int)5LL))) || ((*(P1039)rt_nil_check(F->m_1790)).kind == (((rt_int)6LL)))) && ((*(P1039)rt_nil_check(F->m_1790)).t == NULL))) {
(*(P1039)rt_nil_check(F->m_1790)).t = f_resolve_subtype_268((*(P1039)rt_nil_check(F->m_1790)).st, &(*(P1039)rt_nil_check(F->m_1790)).c);
} else if ((((*(P1039)rt_nil_check(F->m_1790)).kind == (((rt_int)5LL))) && ((*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->m_1790)).t)).kind == (((rt_int)8LL))))) {
f_finish_ptr_475((*(P1039)rt_nil_check(F->m_1790)).t);
}
F->m_1790 = (*(P1039)rt_nil_check(F->m_1790)).stack;
}
F->m_1790 = g_scope_stack_1073;
while (((F->m_1790 != NULL) && ((*(P1039)rt_nil_check(F->m_1790)).depth == g_depth_1072))) {
if (f_exported_436(F->d_451, &(((P1022)rt_nil_check((*(P1039)rt_nil_check(F->m_1790)).name))->all), &F->ro_1792)) {
F->z_1797 = NULL;
F->z_1797 = f_copy_sym_438(F->m_1790);
if (F->ro_1792) {
(*(P1039)rt_nil_check(F->z_1797)).ro_flag = 1;
}
(*(P1039)rt_nil_check(F->z_1797)).mnext = (*(P1039)rt_nil_check(F->y_452)).members;
(*(P1039)rt_nil_check(F->y_452)).members = F->z_1797;
}
F->m_1790 = (*(P1039)rt_nil_check(F->m_1790)).stack;
}
while ((F->p_1791 != NULL)) {
if ((((!rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1791)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1791)).name))->all), rt_str("=", 1)))) && ((f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1791)).name))->all)) == NULL) || ((*(P1039)rt_nil_check(f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1791)).name))->all)))).depth != g_depth_1072)))) {
f_fail_23((*(P1029)rt_nil_check(F->d_451)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1791)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_451)).name))->all)); b_; }));
}
F->p_1791 = (*(P1029)rt_nil_check(F->p_1791)).next;
}
f_close_scope_178();
g_caps_1088 = (*(P1056)rt_nil_check(g_caps_1088)).next;
g_gotos_1108 = F->saved_gotos_1789;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_458(P1029 d_456, rstr *op_457) {
  struct f_exports_op_458fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_456 = d_456;
F->op_457 = op_457;
F->p_1798 = NULL;
if ((F->d_456 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1798 = (*(P1029)rt_nil_check(F->d_456)).a;
while ((F->p_1798 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1798)).name))->all), (*F->op_457))) {
F->result_ = 1;
goto ret_;
}
F->p_1798 = (*(P1029)rt_nil_check(F->p_1798)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1022 f_renamed_461(P1029 d_459, P1039 z_460) {
  struct f_renamed_461fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_459 = d_459;
F->z_460 = z_460;
F->r_1799 = NULL;
F->r_1799 = (*(P1029)rt_nil_check(F->d_459)).c;
while ((F->r_1799 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->r_1799)).name))->all), (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->z_460)).name))->all))) {
F->result_ = (*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->r_1799)).a)).name;
goto ret_;
}
F->r_1799 = (*(P1029)rt_nil_check(F->r_1799)).next;
}
F->result_ = (*(P1039)rt_nil_check(F->z_460)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_cap_tt_match_464(P1029 f_462, P1029 a_463) {
  struct f_cap_tt_match_464fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->f_462 = f_462;
F->a_463 = a_463;
F->x_1800 = NULL;
F->x_1800 = F->f_462;
F->y_1801 = NULL;
F->y_1801 = F->a_463;
while (((F->x_1800 != NULL) && (F->y_1801 != NULL))) {
F->v1_1804 = NULL;
F->v1_1804 = f_meval_375(F->x_1800, &F->ok1_1802);
F->v2_1805 = NULL;
F->v2_1805 = f_meval_375(F->y_1801, &F->ok2_1803);
if ((((!F->ok1_1802) || (!F->ok2_1803)) || ((*(P1048)rt_nil_check(F->v1_1804)).kind != (*(P1048)rt_nil_check(F->v2_1805)).kind))) {
F->result_ = 0;
goto ret_;
} else if ((((*(P1048)rt_nil_check(F->v1_1804)).kind == (((rt_int)5LL))) || ((*(P1048)rt_nil_check(F->v1_1804)).kind == (((rt_int)4LL))))) {
if ((!rt_str_eq((((P1022)rt_nil_check((*(P1048)rt_nil_check(F->v1_1804)).s))->all), (((P1022)rt_nil_check((*(P1048)rt_nil_check(F->v2_1805)).s))->all)))) {
F->result_ = 0;
goto ret_;
}
} else if (((*(P1048)rt_nil_check(F->v1_1804)).i != (*(P1048)rt_nil_check(F->v2_1805)).i)) {
F->result_ = 0;
goto ret_;
}
F->x_1800 = (*(P1029)rt_nil_check(F->x_1800)).next;
F->y_1801 = (*(P1029)rt_nil_check(F->y_1801)).next;
}
F->result_ = ((F->x_1800 == NULL) && (F->y_1801 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1039 f_pick_capsule_466(P1029 d_465) {
  struct f_pick_capsule_466fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_465 = d_465;
F->y_1806 = NULL;
F->y_1806 = ({ A1045 b_ = (((P1043)rt_nil_check(g_table_1069))->all); b_.p[(rt_index(f_hash_161(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_465)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
F->first_1807 = NULL;
F->fit_1808 = NULL;
F->n_1809 = ((rt_int)0LL);
while ((F->y_1806 != NULL)) {
if ((rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_1806)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_465)).name))->all)) && ((*(P1039)rt_nil_check(F->y_1806)).kind == (((rt_int)8LL))))) {
F->n_1809 = rt_add(F->n_1809, ((rt_int)1LL));
if ((F->first_1807 == NULL)) {
F->first_1807 = F->y_1806;
}
if ((((F->fit_1808 == NULL) && f_fits_919(F->y_1806, (*(P1029)rt_nil_check(F->d_465)).b)) && f_cap_tt_match_464((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_1806)).decl)).e, (*(P1029)rt_nil_check(F->d_465)).e))) {
F->fit_1808 = F->y_1806;
}
}
F->y_1806 = (*(P1039)rt_nil_check(F->y_1806)).chain;
}
if ((F->n_1809 > ((rt_int)1LL))) {
if ((F->fit_1808 == NULL)) {
f_fail_23((*(P1029)rt_nil_check(F->d_465)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no capsule ", 11), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_465)).name))->all)), rt_str(" has formals that fit these actual parameters", 45)); b_; }));
}
F->result_ = F->fit_1808;
goto ret_;
}
if ((F->first_1807 == NULL)) {
F->result_ = f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_465)).name))->all));
goto ret_;
}
F->result_ = F->first_1807;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1039 f_capsule_instance_469(P1039 g_467, P1029 d_468) {
  struct f_capsule_instance_469fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_467 = g_467;
F->d_468 = d_468;
F->gd_1810 = NULL;
F->gd_1810 = (*(P1039)rt_nil_check(F->g_467)).decl;
F->pat_1811 = NULL;
F->pat_1811 = (*(P1029)rt_nil_check(F->gd_1810)).b;
F->binds_1812 = NULL;
F->binds_1812 = f_need_binds_727(F->gd_1810, f_tt_binds_706(F->gd_1810, (*(P1029)rt_nil_check(F->pat_1811)).e, (*(P1029)rt_nil_check(F->d_468)).e, (*(P1029)rt_nil_check(F->d_468)).line), (*(P1029)rt_nil_check(F->d_468)).line);
F->inst_1813 = NULL;
F->inst_1813 = (*(P1039)rt_nil_check(F->g_467)).insts;
F->saved_env_1814 = NULL;
F->saved_env_1814 = g_genv_1070;
F->saved_gdepth_1815 = g_gdepth_1102;
if ((((*(P1029)rt_nil_check(F->d_468)).flag != ((rt_int)1LL)) && ((*(P1029)rt_nil_check(F->d_468)).flag != ((rt_int)3LL)))) {
while ((F->inst_1813 != NULL)) {
if (f_same_binds_698((*(P1039)rt_nil_check(F->inst_1813)).tbinds, F->binds_1812)) {
F->result_ = F->inst_1813;
goto ret_;
}
F->inst_1813 = (*(P1039)rt_nil_check(F->inst_1813)).insts;
}
}
F->inst_1813 = f_new_sym_181((((rt_int)8LL)), (*(P1029)rt_nil_check(F->pat_1811)).name);
(*(P1039)rt_nil_check(F->inst_1813)).decl = F->pat_1811;
(*(P1039)rt_nil_check(F->inst_1813)).tbinds = F->binds_1812;
f_open_scope_177();
{
F->b_1816 = NULL;
F->b_1816 = F->binds_1812;
while ((F->b_1816 != NULL)) {
f_define_168(F->b_1816, (*(P1029)rt_nil_check(F->d_468)).line);
F->b_1816 = (*(P1039)rt_nil_check(F->b_1816)).mnext;
}
}
g_genv_1070 = (*(P1039)rt_nil_check(F->g_467)).env;
g_gdepth_1102 = g_depth_1072;
f_elaborate_capsule_455(F->pat_1811, F->inst_1813, (*(P1029)rt_nil_check(F->d_468)).b, F->d_468);
g_genv_1070 = F->saved_env_1814;
g_gdepth_1102 = F->saved_gdepth_1815;
f_close_scope_178();
if ((((*(P1029)rt_nil_check(F->d_468)).flag != ((rt_int)1LL)) && ((*(P1029)rt_nil_check(F->d_468)).flag != ((rt_int)3LL)))) {
(*(P1039)rt_nil_check(F->inst_1813)).insts = (*(P1039)rt_nil_check(F->g_467)).insts;
(*(P1039)rt_nil_check(F->g_467)).insts = F->inst_1813;
}
F->result_ = F->inst_1813;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_configure_471(P1039 y_470) {
  struct f_configure_471fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_470 = y_470;
F->m_1817 = NULL;
F->m_1817 = (*(P1039)rt_nil_check(F->y_470)).members;
while ((F->m_1817 != NULL)) {
F->n_1818 = rt_str_copy((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->m_1817)).name))->all));
if (((((*(P1039)rt_nil_check(F->m_1817)).kind == (((rt_int)2LL))) && (*(P1039)rt_nil_check(F->m_1817)).hasmv) && (((rt_str_eq(F->n_1818, rt_str("MILLISECONDS", 12)) || rt_str_eq(F->n_1818, rt_str("SECONDS", 7))) || rt_str_eq(F->n_1818, rt_str("MINUTES", 7))) || rt_str_eq(F->n_1818, rt_str("HOURS", 5))))) {
f_put_27(g_out_excs_1082, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  RT_", 5), F->n_1818), rt_str(" = ", 3)), f_itos_7((*(P1039)rt_nil_check(F->m_1817)).mvalue)), rt_str(";", 1)); b_; }));
}
F->m_1817 = (*(P1039)rt_nil_check(F->m_1817)).mnext;
}
ret_:
  RT_FPOP();
  return;
}

static void f_gen_expose_473(P1029 d_472) {
  struct f_gen_expose_473fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_472 = d_472;
F->y_1819 = NULL;
F->y_1819 = f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_472)).name))->all));
F->m_1820 = NULL;
F->p_1821 = NULL;
F->p_1821 = (*(P1029)rt_nil_check(F->d_472)).a;
F->r_1822 = NULL;
F->r_1822 = (*(P1029)rt_nil_check(F->d_472)).c;
if ((((F->y_1819 != NULL) && ((*(P1039)rt_nil_check(F->y_1819)).kind == (((rt_int)10LL)))) && ((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_1819)).decl)).b)).kind == (((rt_int)47LL))))) {
F->y_1819 = f_capsule_instance_469(F->y_1819, F->d_472);
} else {
F->y_1819 = f_pick_capsule_466(F->d_472);
if (((F->y_1819 == NULL) || ((*(P1039)rt_nil_check(F->y_1819)).kind != (((rt_int)8LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->d_472)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_472)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
f_elaborate_pending_444(F->y_1819);
if ((((*(P1029)rt_nil_check(F->d_472)).e != NULL) && (((*(P1039)rt_nil_check(F->y_1819)).decl == NULL) || ((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_1819)).decl)).e == NULL)))) {
f_fail_23((*(P1029)rt_nil_check(F->d_472)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_472)).name))->all), rt_str(" has no translation time property list", 38)); b_; }));
}
}
if (rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_1819)).name))->all), rt_str("CONFIGURATION", 13))) {
f_configure_471(F->y_1819);
}
if ((((*(P1039)rt_nil_check(F->y_1819)).tbinds != NULL) || ((((*(P1039)rt_nil_check(F->y_1819)).decl != NULL) && ((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_1819)).decl)).e != NULL)) && ((*(P1039)rt_nil_check(F->y_1819)).kind == (((rt_int)10LL)))))) {
} else if ((((*(P1029)rt_nil_check(F->d_472)).flag == ((rt_int)1LL)) || ((*(P1029)rt_nil_check(F->d_472)).flag == ((rt_int)3LL)))) {
F->inst_1823 = NULL;
F->inst_1823 = f_new_sym_181((((rt_int)8LL)), (*(P1039)rt_nil_check(F->y_1819)).name);
(*(P1039)rt_nil_check(F->inst_1823)).decl = (*(P1039)rt_nil_check(F->y_1819)).decl;
f_elaborate_capsule_455((*(P1039)rt_nil_check(F->y_1819)).decl, F->inst_1823, (*(P1029)rt_nil_check(F->d_472)).b, F->d_472);
F->y_1819 = F->inst_1823;
} else if ((((*(P1039)rt_nil_check(F->y_1819)).decl != NULL) && ((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_1819)).decl)).b != NULL))) {
f_fail_23((*(P1029)rt_nil_check(F->d_472)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_472)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P1029)rt_nil_check(F->d_472)).b != NULL)) {
f_fail_23((*(P1029)rt_nil_check(F->d_472)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1822 != NULL)) {
F->found_1824 = 0;
F->m_1820 = (*(P1039)rt_nil_check(F->y_1819)).members;
while ((F->m_1820 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->m_1820)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->r_1822)).name))->all))) {
F->found_1824 = 1;
}
F->m_1820 = (*(P1039)rt_nil_check(F->m_1820)).mnext;
}
if ((!F->found_1824)) {
f_fail_23((*(P1029)rt_nil_check(F->d_472)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->r_1822)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_472)).name))->all)); b_; }));
}
F->r_1822 = (*(P1029)rt_nil_check(F->r_1822)).next;
}
if (((*(P1029)rt_nil_check(F->d_472)).ival == ((rt_int)1LL))) {
F->m_1820 = (*(P1039)rt_nil_check(F->y_1819)).members;
while ((F->m_1820 != NULL)) {
F->z_1825 = NULL;
F->z_1825 = f_copy_sym_438(F->m_1820);
(*(P1039)rt_nil_check(F->z_1825)).name = f_renamed_461(F->d_472, F->m_1820);
f_define_168(F->z_1825, (*(P1029)rt_nil_check(F->d_472)).line);
F->m_1820 = (*(P1039)rt_nil_check(F->m_1820)).mnext;
}
goto ret_;
}
while ((F->p_1821 != NULL)) {
F->found_1826 = 0;
F->m_1820 = (*(P1039)rt_nil_check(F->y_1819)).members;
while ((F->m_1820 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->m_1820)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1821)).name))->all))) {
F->z_1827 = NULL;
F->z_1827 = f_copy_sym_438(F->m_1820);
if (((*(P1029)rt_nil_check(F->p_1821)).ival == ((rt_int)1LL))) {
(*(P1039)rt_nil_check(F->z_1827)).ro_flag = 1;
}
(*(P1039)rt_nil_check(F->z_1827)).name = f_renamed_461(F->d_472, F->m_1820);
f_define_168(F->z_1827, (*(P1029)rt_nil_check(F->d_472)).line);
F->found_1826 = 1;
}
F->m_1820 = (*(P1039)rt_nil_check(F->m_1820)).mnext;
}
if ((!F->found_1826)) {
f_fail_23((*(P1029)rt_nil_check(F->d_472)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1821)).name))->all), rt_str(" is not exported by ", 20)), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_472)).name))->all)); b_; }));
}
F->p_1821 = (*(P1029)rt_nil_check(F->p_1821)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_475(P1035 t_474) {
  struct f_finish_ptr_475fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_474 = t_474;
F->d_1828 = NULL;
F->d_1828 = (*(P1035)rt_nil_check(F->t_474)).decl;
F->p_1829 = NULL;
F->c_1830 = NULL;
F->dummy_1831 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1831, rt_str(" ", 1));
if (((*(P1035)rt_nil_check(F->t_474)).target != NULL)) {
goto ret_;
}
f_open_scope_177();
{ rt_int lo1833 = ((rt_int)1LL), hi1834 = ((rt_int)2LL);
for (rt_int it1835 = lo1833; it1835 <= hi1834; it1835++) {
F->pass_1832 = it1835;
if ((F->pass_1832 == ((rt_int)1LL))) {
F->p_1829 = (*(P1029)rt_nil_check(F->d_1828)).d;
} else {
F->p_1829 = (*(P1029)rt_nil_check(F->d_1828)).b;
}
while ((F->p_1829 != NULL)) {
F->y_1836 = NULL;
F->y_1836 = f_new_sym_181((((rt_int)2LL)), (*(P1029)rt_nil_check(F->p_1829)).name);
F->pc_1837 = NULL;
(*(P1039)rt_nil_check(F->y_1836)).t = f_resolve_subtype_268((*(P1029)rt_nil_check(F->p_1829)).a, &F->pc_1837);
(*(P1039)rt_nil_check(F->y_1836)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_168(F->y_1836, (*(P1029)rt_nil_check(F->d_1828)).line);
F->p_1829 = (*(P1029)rt_nil_check(F->p_1829)).next;
}
}
}
(*(P1035)rt_nil_check(F->t_474)).target = f_resolve_subtype_268((*(P1029)rt_nil_check(F->d_1828)).a, &F->c_1830);
if (((*(P1029)rt_nil_check(F->d_1828)).c != NULL)) {
f_check_rep_332((*(P1029)rt_nil_check(F->d_1828)).c, (*(P1035)rt_nil_check(F->t_474)).target, F->c_1830, 1, 1, F->d_1828);
(*(P1035)rt_nil_check(F->t_474)).repn = (*(P1029)rt_nil_check(F->d_1828)).c;
}
f_close_scope_178();
(*rt_str_at(&F->dummy_1831, ((rt_int)1LL))) = rt_str_get(f_ctype_234(F->t_474), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1831, ((rt_int)1LL))) = rt_str_get(f_ctype_234((*(P1035)rt_nil_check(F->t_474)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1029 f_ptr_args_477(P1031 c_476) {
  struct f_ptr_args_477fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_476 = c_476;
if ((F->c_476 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1031)rt_nil_check(F->c_476)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_482(P1029 formals_478, P1029 actuals_479, rstr *cell_480, rt_int line_481) {
  struct f_bind_ptr_params_482fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_478 = formals_478;
F->actuals_479 = actuals_479;
F->cell_480 = cell_480;
F->line_481 = line_481;
F->p_1838 = NULL;
F->p_1838 = F->formals_478;
F->a_1839 = NULL;
F->a_1839 = F->actuals_479;
F->vt_1840 = NULL;
if ((f_list_len_71(F->formals_478) != f_list_len_71(F->actuals_479))) {
f_fail_23(F->line_481, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_71(F->formals_478))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1838 != NULL)) {
F->pc_1841 = NULL;
F->y_1842 = NULL;
F->y_1842 = f_new_sym_181((((rt_int)2LL)), (*(P1029)rt_nil_check(F->p_1838)).name);
(*(P1039)rt_nil_check(F->y_1842)).t = f_resolve_subtype_268((*(P1029)rt_nil_check(F->p_1838)).a, &F->pc_1841);
{
F->v_1843 = rt_str_copy(f_gexpr_800(F->a_1839, (*(P1039)rt_nil_check(F->y_1842)).t, &F->vt_1840));
F->pv_1844 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_232(F->vt_1840, (*(P1039)rt_nil_check(F->y_1842)).t, F->line_481);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1039)rt_nil_check(F->y_1842)).t), rt_str(" ", 1)), F->pv_1844), rt_str(" = ", 3)), f_checked_213((*(P1039)rt_nil_check(F->y_1842)).t, F->pc_1841, &F->v_1843)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_480), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_480), rt_str("->p_", 4)), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1838)).name))->all))), rt_str(" = ", 3)), F->pv_1844), rt_str(";", 1)); b_; }));
}
(*(P1039)rt_nil_check(F->y_1842)).access = f_mk_3(&F->pv_1844);
}
f_define_168(F->y_1842, F->line_481);
F->p_1838 = (*(P1029)rt_nil_check(F->p_1838)).next;
F->a_1839 = (*(P1029)rt_nil_check(F->a_1839)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_487(P1029 s_483, rstr *lv_484, P1035 t_485, P1031 c_486) {
  struct f_alloc_cell_487fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_483 = s_483;
F->lv_484 = lv_484;
F->t_485 = t_485;
F->c_486 = c_486;
F->d_1845 = NULL;
F->d_1845 = (*(P1035)rt_nil_check(F->t_485)).decl;
F->tc_1846 = NULL;
F->vt_1847 = NULL;
F->pt_1848 = rt_str_copy(f_ctype_234(F->t_485));
F->cell_1849 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_346((*(P1035)rt_nil_check(F->t_485)).target)) {
F->fn_1850 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_1094 = 1;
g_uses_findyn_1096 = 1;
f_put_27(g_out_protos_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1850), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1850), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (g_in_func_1085) {
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1022)rt_nil_check((*(P1039)rt_nil_check(g_func_sym_1097)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1848), rt_str(")cell_)->all)", 13)); b_; }), (*(P1035)rt_nil_check(F->t_485)).target)); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (g_in_func_1085) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1848), rt_str(" ", 1)), F->cell_1849), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1849), rt_str(", ", 2)), F->fn_1850), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1848), rt_str(" ", 1)), F->cell_1849), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1849), rt_str(", ", 2)), F->fn_1850), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1848), rt_str(" ", 1)), F->cell_1849), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1849), rt_str(");", 2)); b_; }));
}
f_open_scope_177();
f_bind_ptr_params_482((*(P1029)rt_nil_check(F->d_1845)).d, f_ptr_args_477(F->c_486), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), (*(P1029)rt_nil_check(F->s_483)).line);
f_bind_ptr_params_482((*(P1029)rt_nil_check(F->d_1845)).b, (*(P1029)rt_nil_check(F->s_483)).b, &F->cell_1849, (*(P1029)rt_nil_check(F->s_483)).line);
F->vt_1847 = f_resolve_subtype_268((*(P1029)rt_nil_check(F->d_1845)).a, &F->tc_1846);
g_mark_uninit_1105 = (!f_suppressed_512(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; })));
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1849, rt_str("->all", 5)); b_; }), (*(P1035)rt_nil_check(F->t_485)).target, F->tc_1846);
g_mark_uninit_1105 = 0;
f_close_scope_178();
if (((*(P1029)rt_nil_check(F->s_483)).c != NULL)) {
F->v_1851 = rt_str_copy(f_gexpr_in_811((*(P1029)rt_nil_check(F->s_483)).c, (*(P1035)rt_nil_check(F->t_485)).target, F->tc_1846, &F->vt_1847));
f_check_type_232(F->vt_1847, (*(P1035)rt_nil_check(F->t_485)).target, (*(P1029)rt_nil_check(F->s_483)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1849, rt_str("->all", 5)); b_; }), (*(P1035)rt_nil_check(F->t_485)).target, &F->v_1851, F->tc_1846); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_484), rt_str(" = ", 3)), F->cell_1849), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1031 f_freeze_args_491(P1031 c_488, P1035 t_489, rt_int line_490) {
  struct f_freeze_args_491fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_488 = c_488;
F->t_489 = t_489;
F->line_490 = line_490;
F->r_1852 = NULL;
F->r_1852 = f_copy_cons_206(F->c_488);
F->p_1853 = NULL;
F->p_1853 = (*(P1029)rt_nil_check((*(P1035)rt_nil_check(F->t_489)).decl)).d;
F->a_1854 = NULL;
F->a_1854 = (*(P1031)rt_nil_check(F->c_488)).args;
F->head_1855 = NULL;
F->tail_1856 = NULL;
F->saved_1857 = NULL;
F->saved_1857 = g_st_field_1091;
if ((f_list_len_71(F->p_1853) != f_list_len_71(F->a_1854))) {
f_fail_23(F->line_490, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_489)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1853))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1854 != NULL)) {
F->pc_1858 = NULL;
F->vt_1859 = NULL;
F->pt_1860 = NULL;
F->pt_1860 = f_resolve_subtype_268((*(P1029)rt_nil_check(F->p_1853)).a, &F->pc_1858);
F->nm_1861 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1862 = NULL;
F->y_1862 = f_new_sym_181((((rt_int)2LL)), f_mk_3(&F->nm_1861));
F->n_1863 = NULL;
F->n_1863 = f_nn_65((((rt_int)7LL)), F->line_490);
F->v_1864 = rt_str_copy(f_gexpr_800(F->a_1854, F->pt_1860, &F->vt_1859));
F->access_1865 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_234(F->pt_1860); b_; })));
f_check_type_232(F->vt_1859, F->pt_1860, F->line_490);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1865, rt_str(" = ", 3)), f_checked_213(F->pt_1860, F->pc_1858, &F->v_1864)), rt_str(";", 1)); b_; }));
(*(P1039)rt_nil_check(F->y_1862)).t = F->pt_1860;
(*(P1039)rt_nil_check(F->y_1862)).ro_flag = 1;
f_bind_522(F->y_1862, &F->access_1865);
f_define_168(F->y_1862, F->line_490);
(*(P1029)rt_nil_check(F->n_1863)).name = f_mk_3(&F->nm_1861);
f_append_69(&F->head_1855, &F->tail_1856, F->n_1863);
F->a_1854 = (*(P1029)rt_nil_check(F->a_1854)).next;
F->p_1853 = (*(P1029)rt_nil_check(F->p_1853)).next;
}
(*(P1031)rt_nil_check(F->r_1852)).args = F->head_1855;
g_st_field_1091 = F->saved_1857;
F->result_ = F->r_1852;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_495(P1035 t_492, P1031 c_493, P1029 src_494) {
  struct f_ptr_subtype_check_495fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_492 = t_492;
F->c_493 = c_493;
F->src_494 = src_494;
F->lv_1866 = NULL;
F->st_1867 = NULL;
F->sc_1868 = NULL;
F->cond_1870 = NULL;
F->cond_1870 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1871 = NULL;
F->b_1872 = NULL;
F->at_1873 = NULL;
F->bt_1874 = NULL;
if (((((((*(P1035)rt_nil_check(F->t_492)).kind != (((rt_int)8LL))) || (F->c_493 == NULL)) || ((*(P1031)rt_nil_check(F->c_493)).args == NULL)) || (F->src_494 == NULL)) || (!f_is_lvalue_763(F->src_494)))) {
goto ret_;
}
f_lvalue_769(F->src_494, &F->lv_1866, &F->st_1867, &F->sc_1868, &F->ro_1869);
if (((F->sc_1868 == NULL) || ((*(P1031)rt_nil_check(F->sc_1868)).args == NULL))) {
goto ret_;
}
F->a_1871 = (*(P1031)rt_nil_check(F->c_493)).args;
F->b_1872 = (*(P1031)rt_nil_check(F->sc_1868)).args;
while (((F->a_1871 != NULL) && (F->b_1872 != NULL))) {
F->x_1875 = rt_str_copy(f_gexpr_800(F->a_1871, NULL, &F->at_1873));
F->y_1876 = rt_str_copy(f_gexpr_800(F->b_1872, F->at_1873, &F->bt_1874));
F->cond_1870 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->cond_1870))->all), rt_str(" || !", 5)), f_eq_code_418(F->at_1873, &F->x_1875, &F->y_1876)); b_; }));
F->a_1871 = (*(P1029)rt_nil_check(F->a_1871)).next;
F->b_1872 = (*(P1029)rt_nil_check(F->b_1872)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1022)rt_nil_check(F->cond_1870))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_normal_function_498(P1029 d_496, P1039 y_497) {
  struct f_normal_function_498fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_496 = d_496;
F->y_497 = y_497;
F->p_1877 = NULL;
F->p_1877 = (*(P1039)rt_nil_check(F->y_497)).params;
F->imp_1878 = NULL;
F->imp_1878 = (*(P1029)rt_nil_check(F->d_496)).d;
if ((((*(P1029)rt_nil_check(F->d_496)).kind != (((rt_int)46LL))) || (rt_mod((*(P1029)rt_nil_check(F->d_496)).flag, ((rt_int)2LL)) == ((rt_int)1LL)))) {
goto ret_;
}
while ((F->p_1877 != NULL)) {
if ((((*(P1041)rt_nil_check(F->p_1877)).mode == (((rt_int)2LL))) || ((*(P1041)rt_nil_check(F->p_1877)).mode == (((rt_int)3LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->d_496)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may have only CONST and READONLY formal parameters: ", 70), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_496)).name))->all)); b_; }));
}
F->p_1877 = (*(P1041)rt_nil_check(F->p_1877)).next;
}
if ((((*(P1029)rt_nil_check(F->d_496)).d == NULL) && ((*(P1029)rt_nil_check(F->d_496)).flag < ((rt_int)2LL)))) {
goto ret_;
}
if (((g_caps_1088 == NULL) || (g_depth_1072 != (*(P1056)rt_nil_check(g_caps_1088)).depth))) {
f_fail_23((*(P1029)rt_nil_check(F->d_496)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function with an imports list must be local to a capsule body: ", 72), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_496)).name))->all)); b_; }));
}
while ((F->imp_1878 != NULL)) {
F->z_1880 = NULL;
F->z_1880 = f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->imp_1878)).name))->all));
if ((((F->z_1880 != NULL) && ((*(P1039)rt_nil_check(F->z_1880)).kind == (((rt_int)1LL)))) && ((*(P1039)rt_nil_check(F->z_1880)).depth != (*(P1056)rt_nil_check(g_caps_1088)).depth))) {
f_fail_23((*(P1029)rt_nil_check(F->d_496)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function imports only variables of its capsule body: ", 62), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->imp_1878)).name))->all)); b_; }));
}
if ((f_exported_436((*(P1056)rt_nil_check(g_caps_1088)).d, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->imp_1878)).name))->all), &F->ro_1879) && ((*(P1029)rt_nil_check((*(P1056)rt_nil_check(g_caps_1088)).d)).ival != ((rt_int)1LL)))) {
f_fail_23((*(P1029)rt_nil_check(F->d_496)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may not import an exported variable: ", 55), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->imp_1878)).name))->all)); b_; }));
}
F->imp_1878 = (*(P1029)rt_nil_check(F->imp_1878)).next;
}
(*(P1039)rt_nil_check(F->y_497)).capn = (*(P1056)rt_nil_check(g_caps_1088)).d;
ret_:
  RT_FPOP();
  return;
}

static void f_foreign_body_501(P1029 d_499, P1039 y_500) {
  struct f_foreign_body_501fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_499 = d_499;
F->y_500 = y_500;
F->pm_1881 = NULL;
F->pm_1881 = (*(P1039)rt_nil_check(F->y_500)).params;
F->proto_1882 = NULL;
F->proto_1882 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->args_1883 = NULL;
F->args_1883 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cn_1884 = rt_str_copy(f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_499)).name))->all)));
if (((*(P1029)rt_nil_check(F->d_499)).c != NULL)) {
f_fail_23((*(P1029)rt_nil_check(F->d_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a foreign ", 10), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_499)).name))->all)), rt_str(" has an empty body", 18)); b_; }));
}
while ((F->pm_1881 != NULL)) {
if ((((*(P1041)rt_nil_check(F->pm_1881)).mode != (((rt_int)1LL))) || (!(f_scalar_kind_186(f_base_of_223((*(P1041)rt_nil_check(F->pm_1881)).t)) || ((*(P1035)rt_nil_check(f_base_of_223((*(P1041)rt_nil_check(F->pm_1881)).t))).kind == (((rt_int)2LL))))))) {
f_fail_23((*(P1029)rt_nil_check(F->d_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a foreign subprogram takes CONST INT, FLOAT, BOOL and ENUM formals", 66); b_; }));
}
if ((((rt_int)(((((P1022)rt_nil_check(F->proto_1882))->all)).len)) > ((rt_int)0LL))) {
F->proto_1882 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->proto_1882))->all), rt_str(", ", 2)); b_; }));
F->args_1883 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->args_1883))->all), rt_str(", ", 2)); b_; }));
}
F->proto_1882 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->proto_1882))->all), f_ctype_234((*(P1041)rt_nil_check(F->pm_1881)).t)); b_; }));
F->args_1883 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->args_1883))->all), rt_str("F->", 3)), (((P1022)rt_nil_check((*(P1041)rt_nil_check(F->pm_1881)).cfield))->all)); b_; }));
F->pm_1881 = (*(P1041)rt_nil_check(F->pm_1881)).next;
}
if ((((rt_int)(((((P1022)rt_nil_check(F->proto_1882))->all)).len)) == ((rt_int)0LL))) {
F->proto_1882 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if ((((*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_500)).result)).kind != (((rt_int)9LL))) && (!(f_scalar_kind_186(f_base_of_223((*(P1039)rt_nil_check(F->y_500)).result)) || ((*(P1035)rt_nil_check(f_base_of_223((*(P1039)rt_nil_check(F->y_500)).result))).kind == (((rt_int)2LL))))))) {
f_fail_23((*(P1029)rt_nil_check(F->d_499)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a foreign function returns an INT, FLOAT, BOOL or ENUM value", 60); b_; }));
}
f_put_27(g_out_protos_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("extern ", 7), f_ctype_234((*(P1039)rt_nil_check(F->y_500)).result)), rt_str(" ", 1)), F->cn_1884), rt_str("(", 1)), (((P1022)rt_nil_check(F->proto_1882))->all)), rt_str(");", 2)); b_; }));
if (((*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_500)).result)).kind == (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->cn_1884, rt_str("(", 1)), (((P1022)rt_nil_check(F->args_1883))->all)), rt_str(");", 2)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->cn_1884), rt_str("(", 1)), (((P1022)rt_nil_check(F->args_1883))->all)), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_503(P1029 d_502) {
  struct f_declare_subprogram_503fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_502 = d_502;
f_define_168(f_build_subprogram_505(F->d_502), (*(P1029)rt_nil_check(F->d_502)).line);
ret_:
  RT_FPOP();
  return;
}

static P1039 f_build_subprogram_505(P1029 d_504) {
  struct f_build_subprogram_505fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_504 = d_504;
F->y_1885 = NULL;
F->p_1886 = NULL;
F->p_1886 = (*(P1029)rt_nil_check(F->d_504)).a;
F->tail_1887 = NULL;
if (((*(P1029)rt_nil_check(F->d_504)).kind == (((rt_int)46LL)))) {
F->y_1885 = f_new_sym_181((((rt_int)3LL)), (*(P1029)rt_nil_check(F->d_504)).name);
} else if (((*(P1029)rt_nil_check(F->d_504)).kind == (((rt_int)50LL)))) {
F->y_1885 = f_new_sym_181((((rt_int)9LL)), (*(P1029)rt_nil_check(F->d_504)).name);
} else {
F->y_1885 = f_new_sym_181((((rt_int)4LL)), (*(P1029)rt_nil_check(F->d_504)).name);
}
while ((F->p_1886 != NULL)) {
F->pm_1888 = NULL;
if ((((*(P1029)rt_nil_check(F->d_504)).kind == (((rt_int)50LL))) && ((*(P1029)rt_nil_check(F->p_1886)).ival == (((rt_int)3LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->d_504)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a task may not have OUT formal parameters", 41); b_; }));
}
{ R1042 *cell1889 = rt_alloc(sizeof(R1042));
(*cell1889).name = NULL;
(*cell1889).t = NULL;
(*cell1889).c = NULL;
(*cell1889).cfield = NULL;
(*cell1889).next = NULL;
F->pm_1888 = cell1889;
}
(*(P1041)rt_nil_check(F->pm_1888)).name = (*(P1029)rt_nil_check(F->p_1886)).name;
(*(P1041)rt_nil_check(F->pm_1888)).mode = (*(P1029)rt_nil_check(F->p_1886)).ival;
(*(P1041)rt_nil_check(F->pm_1888)).t = f_resolve_subtype_268((*(P1029)rt_nil_check(F->p_1886)).a, &(*(P1041)rt_nil_check(F->pm_1888)).c);
(*(P1041)rt_nil_check(F->pm_1888)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1886)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1887 == NULL)) {
(*(P1039)rt_nil_check(F->y_1885)).params = F->pm_1888;
} else {
(*(P1041)rt_nil_check(F->tail_1887)).next = F->pm_1888;
}
F->tail_1887 = F->pm_1888;
F->p_1886 = (*(P1029)rt_nil_check(F->p_1886)).next;
}
(*(P1039)rt_nil_check(F->y_1885)).result = g_ty_void_1119;
if (((*(P1029)rt_nil_check(F->d_504)).b != NULL)) {
F->rc_1890 = NULL;
F->pm_1891 = NULL;
F->pm_1891 = (*(P1039)rt_nil_check(F->y_1885)).params;
F->saved_1892 = NULL;
F->saved_1892 = g_code_1083;
g_code_1083 = f_new_buffer_24();
f_open_scope_177();
while ((F->pm_1891 != NULL)) {
F->z_1893 = NULL;
F->z_1893 = f_new_sym_181((((rt_int)2LL)), (*(P1041)rt_nil_check(F->pm_1891)).name);
(*(P1039)rt_nil_check(F->z_1893)).t = (*(P1041)rt_nil_check(F->pm_1891)).t;
(*(P1039)rt_nil_check(F->z_1893)).c = (*(P1041)rt_nil_check(F->pm_1891)).c;
(*(P1039)rt_nil_check(F->z_1893)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_168(F->z_1893, (*(P1029)rt_nil_check(F->d_504)).line);
F->pm_1891 = (*(P1041)rt_nil_check(F->pm_1891)).next;
}
(*(P1039)rt_nil_check(F->y_1885)).result = f_resolve_subtype_268((*(P1029)rt_nil_check(F->d_504)).b, &F->rc_1890);
f_close_scope_178();
g_code_1083 = F->saved_1892;
}
(*(P1039)rt_nil_check(F->y_1885)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_755(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_504)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P1039)rt_nil_check(F->y_1885)).decl = F->d_504;
(*(P1039)rt_nil_check(F->y_1885)).level = g_cur_level_1086;
if (((*(P1029)rt_nil_check(F->d_504)).kind == (((rt_int)50LL)))) {
f_put_27(g_out_globals_1079, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_1885)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1885;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_508(P1022 pr_506, rstr *p_507) {
  struct f_has_pragmat_508fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_506 = pr_506;
F->p_507 = p_507;
if ((F->pr_506 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1895 = ((rt_int)1LL), hi1896 = rt_sub(((rt_int)(((((P1022)rt_nil_check(F->pr_506))->all)).len)), ((rt_int)(((*F->p_507)).len)));
for (rt_int it1897 = lo1895; it1897 <= hi1896; it1897++) {
F->i_1894 = it1897;
if (((rt_str_eq(rt_str_slice((((P1022)rt_nil_check(F->pr_506))->all), F->i_1894, rt_sub(rt_add(F->i_1894, ((rt_int)(((*F->p_507)).len))), ((rt_int)1LL))), (*F->p_507)) && (rt_str_get((((P1022)rt_nil_check(F->pr_506))->all), rt_add(F->i_1894, ((rt_int)(((*F->p_507)).len)))) == 59)) && ((F->i_1894 == ((rt_int)1LL)) || (rt_str_get((((P1022)rt_nil_check(F->pr_506))->all), rt_sub(F->i_1894, ((rt_int)1LL))) == 59)))) {
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

static P1022 f_suppressing_510(P1022 pr_509) {
  struct f_suppressing_510fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_509 = pr_509;
F->r_1898 = NULL;
F->r_1898 = g_suppress_1103;
F->i_1899 = ((rt_int)1LL);
if ((F->pr_509 == NULL)) {
F->result_ = F->r_1898;
goto ret_;
}
if ((F->r_1898 == NULL)) {
F->r_1898 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(F->i_1899, ((rt_int)9LL)) <= ((rt_int)(((((P1022)rt_nil_check(F->pr_509))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P1022)rt_nil_check(F->pr_509))->all), F->i_1899, rt_add(F->i_1899, ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1900 = rt_add(F->i_1899, ((rt_int)9LL));
F->k_1901 = F->j_1900;
while ((rt_str_get((((P1022)rt_nil_check(F->pr_509))->all), F->k_1901) != 41)) {
if ((rt_str_get((((P1022)rt_nil_check(F->pr_509))->all), F->k_1901) == 44)) {
F->r_1898 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_1898))->all), rt_str_slice((((P1022)rt_nil_check(F->pr_509))->all), F->j_1900, rt_sub(F->k_1901, ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1900 = rt_add(F->k_1901, ((rt_int)1LL));
}
F->k_1901 = rt_add(F->k_1901, ((rt_int)1LL));
}
F->r_1898 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_1898))->all), rt_str_slice((((P1022)rt_nil_check(F->pr_509))->all), F->j_1900, rt_sub(F->k_1901, ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1899 = F->k_1901;
}
F->i_1899 = rt_add(F->i_1899, ((rt_int)1LL));
}
F->result_ = F->r_1898;
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
F->w_1902 = rt_str_new(rt_add(((rt_int)(((*F->x_511)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1902, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_511)), rt_str(" ", 1)));
if ((g_suppress_1103 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1904 = ((rt_int)1LL), hi1905 = rt_add(rt_sub(((rt_int)(((((P1022)rt_nil_check(g_suppress_1103))->all)).len)), ((rt_int)((F->w_1902).len))), ((rt_int)1LL));
for (rt_int it1906 = lo1904; it1906 <= hi1905; it1906++) {
F->i_1903 = it1906;
if (rt_str_eq(rt_str_slice((((P1022)rt_nil_check(g_suppress_1103))->all), F->i_1903, rt_sub(rt_add(F->i_1903, ((rt_int)((F->w_1902).len))), ((rt_int)1LL))), F->w_1902)) {
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

static void f_element_514(P1029 e_513) {
  struct f_element_514fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_513 = e_513;
F->saved_1907 = NULL;
F->saved_1907 = g_suppress_1103;
g_suppress_1103 = f_suppressing_510((*(P1029)rt_nil_check(F->e_513)).prags);
f_element1_516(F->e_513);
g_suppress_1103 = F->saved_1907;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_516(P1029 e_515) {
  struct f_element1_516fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_515 = e_515;
F->k_1908 = (*(P1029)rt_nil_check(F->e_515)).kind;
if (((F->k_1908 == (((rt_int)47LL))) && (f_lookup_decl_165(F->e_515) != NULL))) {
f_elaborate_pending_444(f_lookup_decl_165(F->e_515));
} else if (((((F->k_1908 == (((rt_int)48LL))) && ((*(P1029)rt_nil_check(F->e_515)).flag != ((rt_int)1LL))) && ((*(P1029)rt_nil_check(F->e_515)).flag != ((rt_int)3LL))) && ((*(P1029)rt_nil_check(F->e_515)).eline == ((rt_int)0LL)))) {
f_gen_expose_473(F->e_515);
} else if (((F->k_1908 == (((rt_int)48LL))) && (((*(P1029)rt_nil_check(F->e_515)).flag == ((rt_int)1LL)) || ((*(P1029)rt_nil_check(F->e_515)).flag == ((rt_int)3LL))))) {
f_gen_expose_473(F->e_515);
} else if ((((F->k_1908 == (((rt_int)45LL))) || (F->k_1908 == (((rt_int)46LL)))) || (F->k_1908 == (((rt_int)50LL))))) {
f_subprogram_573(F->e_515);
} else if ((F->k_1908 == (((rt_int)51LL)))) {
F->g_1909 = NULL;
F->g_1909 = f_lookup_decl_165(F->e_515);
if ((F->g_1909 != NULL)) {
{ P1043 cell1910 = rt_alloc(sizeof *cell1910);
rt_int pv1911 = (((rt_int)4093LL));
cell1910->p_n = pv1911;
cell1910->all.lo = ((rt_int)0LL); cell1910->all.hi = pv1911;
cell1910->all.lo2 = cell1910->all.hi2 = 1;
cell1910->all.p = rt_alloc(sizeof(P1039) * (size_t)(RT_CNT(cell1910->all)) + 1);
for (rt_int i1912 = 0; i1912 < (RT_CNT(cell1910->all)); i1912++) {
cell1910->all.p[i1912] = NULL;
}
(*(P1039)rt_nil_check(F->g_1909)).env = cell1910;
}
{ rt_int lo1914 = ((rt_int)0LL), hi1915 = (((rt_int)4093LL));
for (rt_int it1916 = lo1914; it1916 <= hi1915; it1916++) {
F->i_1913 = it1916;
(((P1043)rt_nil_check((*(P1039)rt_nil_check(F->g_1909)).env))->all).p[(rt_index(F->i_1913, (((P1043)rt_nil_check((*(P1039)rt_nil_check(F->g_1909)).env))->all).lo, (((P1043)rt_nil_check((*(P1039)rt_nil_check(F->g_1909)).env))->all).hi) - (((P1043)rt_nil_check((*(P1039)rt_nil_check(F->g_1909)).env))->all).lo)] = ({ A1045 b_ = (((P1043)rt_nil_check(g_table_1069))->all); b_.p[(rt_index(F->i_1913, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((F->k_1908 == (((rt_int)43LL))) && ((*(P1029)rt_nil_check(F->e_515)).c != NULL)) && ((*(P1029)rt_nil_check(F->e_515)).b == NULL))) {
F->c_1917 = NULL;
F->st_1918 = NULL;
F->st_1918 = f_nn_65((((rt_int)80LL)), (*(P1029)rt_nil_check(F->e_515)).line);
F->t_1919 = NULL;
(*(P1029)rt_nil_check(F->st_1918)).name = (*(P1029)rt_nil_check(F->e_515)).name;
F->t_1919 = f_resolve_subtype_268(F->st_1918, &F->c_1917);
} else if ((((((F->k_1908 == (((rt_int)49LL))) || (F->k_1908 == (((rt_int)42LL)))) || (F->k_1908 == (((rt_int)43LL)))) || (F->k_1908 == (((rt_int)47LL)))) || (F->k_1908 == (((rt_int)48LL))))) {
goto ret_;
} else if ((F->k_1908 == (((rt_int)44LL)))) {
f_finish_ptr_475((*(P1039)rt_nil_check(f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_515)).name))->all)))).t);
} else if ((F->k_1908 == (((rt_int)40LL)))) {
f_var_decl_524(F->e_515);
} else if (((F->k_1908 == (((rt_int)41LL))) && ((*(P1029)rt_nil_check(F->e_515)).flag == ((rt_int)0LL)))) {
f_const_decl_571(F->e_515);
} else if ((F->k_1908 == (((rt_int)41LL)))) {
goto ret_;
} else if ((F->k_1908 == (((rt_int)33LL)))) {
F->t_1920 = NULL;
F->c_1921 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_515)).a, g_ty_bool_1115, &F->t_1920));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1921), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_608(F->e_515);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_519(rstr *name_517, P1035 t_518) {
  struct f_storage_519fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_517 = name_517;
F->t_518 = t_518;
if ((!g_in_func_1085)) {
F->g_1922 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_517))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1079, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234(F->t_518)), rt_str(" ", 1)), F->g_1922), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_1093, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1922), rt_str(");", 2)); b_; }));
g_st_field_1091 = f_mk_3(&F->g_1922);
F->result_ = F->g_1922;
goto ret_;
}
{
F->f_1923 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_517)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234(F->t_518)), rt_str(" ", 1)), F->f_1923), rt_str(";", 1)); b_; }));
g_st_field_1091 = f_mk_3(&F->f_1923);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1923);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_522(P1039 y_520, rstr *access_521) {
  struct f_bind_522fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_520 = y_520;
F->access_521 = access_521;
if (g_in_func_1085) {
(*(P1039)rt_nil_check(F->y_520)).level = g_cur_level_1086;
(*(P1039)rt_nil_check(F->y_520)).access = g_st_field_1091;
} else {
(*(P1039)rt_nil_check(F->y_520)).level = ((rt_int)0LL);
(*(P1039)rt_nil_check(F->y_520)).access = f_mk_3(&(*F->access_521));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_524(P1029 d_523) {
  struct f_var_decl_524fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_523 = d_523;
if (((*(P1029)rt_nil_check(F->d_523)).ival == ((rt_int)2LL))) {
f_located_var_526(F->d_523);
} else {
f_var_decl2_565(F->d_523);
}
ret_:
  RT_FPOP();
  return;
}

static void f_located_var_526(P1029 d_525) {
  struct f_located_var_526fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_525 = d_525;
F->c_1924 = NULL;
F->at_1925 = NULL;
F->t_1926 = NULL;
F->t_1926 = f_resolve_subtype_268((*(P1029)rt_nil_check(F->d_525)).a, &F->c_1924);
F->y_1927 = NULL;
F->y_1927 = f_new_sym_181((((rt_int)1LL)), (*(P1029)rt_nil_check(F->d_525)).name);
F->addr_1928 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->d_525)).c, g_ty_int_1114, &F->at_1925));
F->av_1929 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("loc", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_int", 6); b_; })));
F->af_1930 = rt_str_copy((((P1022)rt_nil_check(g_st_field_1091))->all));
f_check_type_232(F->at_1925, g_ty_int_1114, (*(P1029)rt_nil_check(F->d_525)).line);
F->c_1924 = f_freeze_209(F->c_1924, F->t_1926);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->av_1929, rt_str(" = ", 3)), F->addr_1928), rt_str(";", 1)); b_; }));
if ((((*(P1035)rt_nil_check(F->t_1926)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->t_1926)).repn != NULL))) {
F->access_1931 = rt_str_copy(f_storage_519(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_525)).name))->all), F->t_1926));
g_mark_uninit_1105 = (!f_suppressed_512(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; })));
f_init_storage_341(&F->access_1931, F->t_1926, F->c_1924);
g_mark_uninit_1105 = 0;
(*(P1039)rt_nil_check(F->y_1927)).t = F->t_1926;
(*(P1039)rt_nil_check(F->y_1927)).c = F->c_1924;
f_bind_522(F->y_1927, &F->access_1931);
if (g_in_func_1085) {
(*(P1039)rt_nil_check(F->y_1927)).loc = f_mk_3(&F->af_1930);
} else {
(*(P1039)rt_nil_check(F->y_1927)).loc = f_mk_3(&F->av_1929);
}
f_define_168(F->y_1927, (*(P1029)rt_nil_check(F->d_525)).line);
if (((*(P1029)rt_nil_check(F->d_525)).b != NULL)) {
F->vt_1932 = NULL;
F->v_1933 = rt_str_copy(f_gexpr_in_811((*(P1029)rt_nil_check(F->d_525)).b, F->t_1926, F->c_1924, &F->vt_1932));
f_check_type_232(F->vt_1932, F->t_1926, (*(P1029)rt_nil_check(F->d_525)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(&F->access_1931, F->t_1926, &F->v_1933, F->c_1924); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_529(F->y_1927, 1); b_; }));
}
goto ret_;
}
{
F->pv_1934 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_525)).name))->all)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_ctype_234(F->t_1926), rt_str(" *", 2)); b_; })));
F->pf_1935 = rt_str_copy((((P1022)rt_nil_check(g_st_field_1091))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->pv_1934, rt_str(" = (", 4)), f_ctype_234(F->t_1926)), rt_str(" *)rt_r_mem_at(", 15)), F->av_1929), rt_str(", sizeof(", 9)), f_ctype_234(F->t_1926)), rt_str("));", 3)); b_; }));
(*(P1039)rt_nil_check(F->y_1927)).t = F->t_1926;
(*(P1039)rt_nil_check(F->y_1927)).c = F->c_1924;
if (g_in_func_1085) {
(*(P1039)rt_nil_check(F->y_1927)).level = g_cur_level_1086;
(*(P1039)rt_nil_check(F->y_1927)).access = f_mk_3(&F->pf_1935);
(*(P1039)rt_nil_check(F->y_1927)).byref = 1;
} else {
(*(P1039)rt_nil_check(F->y_1927)).level = ((rt_int)0LL);
(*(P1039)rt_nil_check(F->y_1927)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1934), rt_str(")", 1)); b_; }));
}
g_mark_uninit_1105 = (!f_suppressed_512(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; })));
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1934), rt_str(")", 1)); b_; }), F->t_1926, F->c_1924);
g_mark_uninit_1105 = 0;
f_define_168(F->y_1927, (*(P1029)rt_nil_check(F->d_525)).line);
if (((*(P1029)rt_nil_check(F->d_525)).b != NULL)) {
F->vt_1936 = NULL;
F->v_1937 = rt_str_copy(f_gexpr_in_811((*(P1029)rt_nil_check(F->d_525)).b, F->t_1926, F->c_1924, &F->vt_1936));
f_check_type_232(F->vt_1936, F->t_1926, (*(P1029)rt_nil_check(F->d_525)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1934), rt_str(")", 1)); b_; }), F->t_1926, &F->v_1937, F->c_1924); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_rep_sync_529(P1039 y_527, int pack_528) {
  struct f_rep_sync_529fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_527 = y_527;
F->pack_528 = pack_528;
F->lv_1938 = rt_str_copy(f_access_of_747(F->y_527));
F->base_1939 = rt_str_copy(f_cbound_access_531(F->y_527));
F->saved_1940 = NULL;
F->saved_1940 = g_psub_1090;
F->p_1941 = NULL;
F->p_1941 = (*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_527)).t)).tparams;
F->r_1942 = NULL;
F->inner_1943 = NULL;
F->inner_1943 = f_mk_3(&F->lv_1938);
if (((*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_527)).t)).tparams != NULL)) {
F->inner_1943 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->lv_1938, rt_str(".all", 4)); b_; }));
}
f_open_scope_177();
while ((F->p_1941 != NULL)) {
F->z_1944 = NULL;
F->z_1944 = f_new_sym_181((((rt_int)2LL)), (*(P1029)rt_nil_check(F->p_1941)).name);
(*(P1039)rt_nil_check(F->z_1944)).t = f_tparam_type_352((*(P1039)rt_nil_check(F->y_527)).t, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1941)).name))->all));
(*(P1039)rt_nil_check(F->z_1944)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->lv_1938), rt_str(".p_", 3)), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_1941)).name))->all))), rt_str(")", 1)); b_; }));
f_define_168(F->z_1944, (*(P1039)rt_nil_check(F->y_527)).decl_line);
F->p_1941 = (*(P1029)rt_nil_check(F->p_1941)).next;
}
F->r_1942 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_code_551((*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_527)).t)).under, (*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_527)).t)).elemcons, (*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_527)).t)).repn, &(((P1022)rt_nil_check(F->inner_1943))->all), &F->base_1939, F->pack_528); b_; }));
f_close_scope_178();
g_psub_1090 = F->saved_1940;
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ ", 2), (((P1022)rt_nil_check(F->r_1942))->all)), rt_str(" }", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cbound_access_531(P1039 y_530) {
  struct f_cbound_access_531fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_530 = y_530;
F->c_1945 = NULL;
F->c_1945 = f_new_cons_184();
(*(P1031)rt_nil_check(F->c_1945)).dyn = ((*(P1039)rt_nil_check(F->y_530)).level > ((rt_int)0LL));
(*(P1031)rt_nil_check(F->c_1945)).lvl = (*(P1039)rt_nil_check(F->y_530)).level;
F->result_ = f_cbound_191(F->c_1945, &(((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_530)).loc))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_rep_size_535(P1029 items_532, P1035 t_533, P1031 c_534) {
  struct f_rep_size_535fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_532 = items_532;
F->t_533 = t_533;
F->c_534 = c_534;
F->it_1946 = NULL;
F->it_1946 = f_rep_find_538(F->items_532, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SIZE", 4); b_; }));
F->at_1947 = NULL;
if ((F->it_1946 != NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_800((*(P1029)rt_nil_check(F->it_1946)).a, g_ty_int_1114, &F->at_1947)), rt_str(")", 1));
goto ret_;
}
F->result_ = f_itos_7(f_default_bits_544(F->t_533, F->c_534));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_rep_find_538(P1029 items_536, rstr *w_537) {
  struct f_rep_find_538fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_536 = items_536;
F->w_537 = w_537;
F->it_1948 = NULL;
F->it_1948 = F->items_536;
while ((F->it_1948 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->it_1948)).name))->all), (*F->w_537))) {
F->result_ = F->it_1948;
goto ret_;
}
F->it_1948 = (*(P1029)rt_nil_check(F->it_1948)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_rep_comp_541(P1029 items_539, rstr *name_540) {
  struct f_rep_comp_541fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_539 = items_539;
F->name_540 = name_540;
F->r_1949 = NULL;
F->r_1949 = f_rep_find_538(F->items_539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RECORD", 6); b_; }));
F->comp_1950 = NULL;
if ((F->r_1949 == NULL)) {
F->r_1949 = f_rep_find_538(F->items_539, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNION", 5); b_; }));
}
if ((F->r_1949 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->comp_1950 = (*(P1029)rt_nil_check(F->r_1949)).c;
while ((F->comp_1950 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->comp_1950)).name))->all), (*F->name_540))) {
F->result_ = (*(P1029)rt_nil_check(F->comp_1950)).a;
goto ret_;
}
F->comp_1950 = (*(P1029)rt_nil_check(F->comp_1950)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_default_bits_544(P1035 t_542, P1031 c_543) {
  struct f_default_bits_544fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_542 = t_542;
F->c_543 = c_543;
if ((((*(P1035)rt_nil_check(F->t_542)).kind == (((rt_int)7LL))) || ((*(P1035)rt_nil_check(F->t_542)).kind == (((rt_int)17LL))))) {
F->f_1951 = NULL;
F->f_1951 = (*(P1035)rt_nil_check(F->t_542)).fields;
F->n_1952 = ((rt_int)0LL);
if (((*(P1035)rt_nil_check(F->t_542)).kind == (((rt_int)17LL)))) {
F->n_1952 = f_needed_bits_321((*(P1035)rt_nil_check(F->t_542)).elem, NULL);
}
while ((F->f_1951 != NULL)) {
F->n_1952 = rt_add(F->n_1952, f_default_bits_544((*(P1037)rt_nil_check(F->f_1951)).t, (*(P1037)rt_nil_check(F->f_1951)).c));
F->f_1951 = (*(P1037)rt_nil_check(F->f_1951)).next;
}
F->result_ = F->n_1952;
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->t_542)).kind == (((rt_int)4LL))) && f_same_221(F->t_542, g_ty_ascii_1117))) {
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

static rstr f_rep_code_551(P1035 t_545, P1031 c_546, P1029 items_547, rstr *lval_548, rstr *addr_549, int pack_550) {
  struct f_rep_code_551fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_545 = t_545;
F->c_546 = c_546;
F->items_547 = items_547;
F->lval_548 = lval_548;
F->addr_549 = addr_549;
F->pack_550 = pack_550;
F->size_1953 = rt_str_copy(f_rep_size_535(F->items_547, F->t_545, F->c_546));
if ((((*(P1035)rt_nil_check(F->t_545)).kind == (((rt_int)7LL))) || ((*(P1035)rt_nil_check(F->t_545)).kind == (((rt_int)17LL))))) {
F->f_1954 = NULL;
F->f_1954 = (*(P1035)rt_nil_check(F->t_545)).fields;
F->r_1955 = NULL;
F->r_1955 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->off_1956 = NULL;
F->off_1956 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->i_1957 = ((rt_int)0LL);
if (((*(P1035)rt_nil_check(F->t_545)).kind == (((rt_int)17LL)))) {
F->ti_1958 = NULL;
F->ti_1958 = f_rep_comp_541(F->items_547, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TAG", 3); b_; }));
F->tsize_1959 = NULL;
F->tsize_1959 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(f_needed_bits_321((*(P1035)rt_nil_check(F->t_545)).elem, NULL)); b_; }));
F->toff_1960 = NULL;
F->toff_1960 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
if (((F->ti_1958 != NULL) && (f_rep_find_538(F->ti_1958, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SIZE", 4); b_; })) != NULL))) {
F->tsize_1959 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_size_535(F->ti_1958, (*(P1035)rt_nil_check(F->t_545)).elem, NULL); b_; }));
}
if (((F->ti_1958 != NULL) && (f_rep_find_538(F->ti_1958, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })) != NULL))) {
F->at_1961 = NULL;
F->toff_1960 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_800((*(P1029)rt_nil_check(f_rep_find_538(F->ti_1958, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })))).a, g_ty_int_1114, &F->at_1961)), rt_str(")", 1)); b_; }));
}
if (F->pack_550) {
F->r_1955 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_mem_put(", 13), (*F->addr_549)), rt_str(" + ", 3)), (((P1022)rt_nil_check(F->toff_1960))->all)), rt_str(", ", 2)), (((P1022)rt_nil_check(F->tsize_1959))->all)), rt_str(", (uint64_t)", 12)), (*F->lval_548)), rt_str(".tag);", 6)); b_; }));
} else {
F->r_1955 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_548), rt_str(".tag = (int)rt_r_mem_get(", 25)), (*F->addr_549)), rt_str(" + ", 3)), (((P1022)rt_nil_check(F->toff_1960))->all)), rt_str(", ", 2)), (((P1022)rt_nil_check(F->tsize_1959))->all)), rt_str(", 0);", 5)); b_; }));
}
F->off_1956 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1022)rt_nil_check(F->toff_1960))->all)), rt_str(" + ", 3)), (((P1022)rt_nil_check(F->tsize_1959))->all)), rt_str(")", 1)); b_; }));
}
while ((F->f_1954 != NULL)) {
F->ci_1962 = NULL;
F->ci_1962 = f_rep_comp_541(F->items_547, &(((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_1954)).name))->all));
F->fo_1963 = NULL;
F->fo_1963 = F->off_1956;
F->fl_1964 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_548), rt_str(".", 1)), f_union_part_553(F->t_545)), f_field_c_17(&(((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_1954)).name))->all))));
if (((F->ci_1962 != NULL) && (f_rep_find_538(F->ci_1962, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })) != NULL))) {
F->at_1965 = NULL;
F->fo_1963 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_800((*(P1029)rt_nil_check(f_rep_find_538(F->ci_1962, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })))).a, g_ty_int_1114, &F->at_1965)), rt_str(")", 1)); b_; }));
}
{
F->part_1966 = rt_str_copy(f_rep_code_551((*(P1037)rt_nil_check(F->f_1954)).t, (*(P1037)rt_nil_check(F->f_1954)).c, F->ci_1962, &F->fl_1964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->addr_549), rt_str(" + ", 3)), (((P1022)rt_nil_check(F->fo_1963))->all)); b_; }), F->pack_550));
if (((*(P1035)rt_nil_check(F->t_545)).kind == (((rt_int)17LL)))) {
F->r_1955 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_1955))->all), rt_str(" if (", 5)), (*F->lval_548)), rt_str(".tag == ", 8)), f_itos_7(F->i_1957)), rt_str(") { ", 4)), F->part_1966), rt_str(" }", 2)); b_; }));
} else {
F->r_1955 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_1955))->all), rt_str(" ", 1)), F->part_1966); b_; }));
}
}
if (((*(P1035)rt_nil_check(F->t_545)).kind == (((rt_int)7LL)))) {
F->off_1956 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1022)rt_nil_check(F->fo_1963))->all)), rt_str(" + ", 3)), f_rep_size_535(F->ci_1962, (*(P1037)rt_nil_check(F->f_1954)).t, (*(P1037)rt_nil_check(F->f_1954)).c)), rt_str(")", 1)); b_; }));
}
F->i_1957 = rt_add(F->i_1957, ((rt_int)1LL));
F->f_1954 = (*(P1037)rt_nil_check(F->f_1954)).next;
}
F->result_ = (((P1022)rt_nil_check(F->r_1955))->all);
goto ret_;
} else if (((*(P1035)rt_nil_check(F->t_545)).kind == (((rt_int)6LL)))) {
F->ai_1967 = NULL;
F->ai_1967 = f_rep_find_538(F->items_547, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ARRAY", 5); b_; }));
F->ei_1968 = NULL;
if ((F->ai_1967 != NULL)) {
F->ei_1968 = (*(P1029)rt_nil_check(F->ai_1967)).c;
}
{
F->es_1969 = rt_str_copy(f_rep_size_535(F->ei_1968, (*(P1035)rt_nil_check(F->t_545)).elem, (*(P1035)rt_nil_check(F->t_545)).elemcons));
F->iv_1970 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ri", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->iv_1970), rt_str(" = 0; ", 6)), F->iv_1970), rt_str(" < ", 3)), f_acnt_249(F->t_545, &(*F->lval_548))), rt_str("; ", 2)), F->iv_1970), rt_str("++) { ", 6)), f_rep_code_551((*(P1035)rt_nil_check(F->t_545)).elem, (*(P1035)rt_nil_check(F->t_545)).elemcons, F->ei_1968, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_548), rt_str(".p[", 3)), F->iv_1970), rt_str("]", 1)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->addr_549), rt_str(" + ", 3)), F->iv_1970), rt_str(" * ", 3)), F->es_1969); b_; }), F->pack_550)), rt_str(" }", 2));
goto ret_;
}
} else if (((*(P1035)rt_nil_check(F->t_545)).kind == (((rt_int)5LL)))) {
F->iv_1971 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ri", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->iv_1971), rt_str(" = 0; ", 6)), F->iv_1971), rt_str(" < ", 3)), (*F->lval_548)), rt_str(".len; ", 6)), F->iv_1971), rt_str("++) { ", 6)), f_rep_scalar_560(f_str_elem_218(F->t_545), NULL, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_548), rt_str(".p[", 3)), F->iv_1971), rt_str("]", 1)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->addr_549), rt_str(" + ", 3)), F->iv_1971), rt_str(" * 8", 4)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("8", 1); b_; }), F->pack_550)), rt_str(" }", 2));
goto ret_;
}
F->result_ = f_rep_scalar_560(F->t_545, F->c_546, &(*F->lval_548), &(*F->addr_549), &F->size_1953, F->pack_550);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_union_part_553(P1035 t_552) {
  struct f_union_part_553fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_552 = t_552;
if (((*(P1035)rt_nil_check(F->t_552)).kind == (((rt_int)17LL)))) {
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

static rstr f_rep_scalar_560(P1035 t_554, P1031 c_555, rstr *lval_556, rstr *addr_557, rstr *size_558, int pack_559) {
  struct f_rep_scalar_560fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_554 = t_554;
F->c_555 = c_555;
F->lval_556 = lval_556;
F->addr_557 = addr_557;
F->size_558 = size_558;
F->pack_559 = pack_559;
F->signed_1972 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->signed_1972, rt_str("0", 1));
if ((((*(P1035)rt_nil_check(F->t_554)).kind == (((rt_int)1LL))) && (!(((F->c_555 != NULL) && (*(P1031)rt_nil_check(F->c_555)).hasm) && ((*(P1031)rt_nil_check(F->c_555)).mlo >= ((rt_int)0LL)))))) {
rt_str_assign(&F->signed_1972, rt_str("1", 1));
}
if (((*(P1035)rt_nil_check(F->t_554)).kind == (((rt_int)3LL)))) {
if (F->pack_559) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_mem_putf(", 14), (*F->addr_557)), rt_str(", ", 2)), (*F->size_558)), rt_str(", ", 2)), (*F->lval_556)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_556), rt_str(" = rt_r_mem_getf(", 17)), (*F->addr_557)), rt_str(", ", 2)), (*F->size_558)), rt_str(");", 2));
goto ret_;
} else if (F->pack_559) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (!rt_r_undef_", 16), f_kind_name_228(f_base_of_223(F->t_554))), rt_str("(", 1)), (*F->lval_556)), rt_str(")) rt_r_mem_put(", 16)), (*F->addr_557)), rt_str(", ", 2)), (*F->size_558)), rt_str(", rt_r_fits((rt_int)(", 21)), (*F->lval_556)), rt_str("), ", 3)), (*F->size_558)), rt_str(", ", 2)), F->signed_1972), rt_str("));", 3));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_556), rt_str(" = rt_r_mem_get(", 16)), (*F->addr_557)), rt_str(", ", 2)), (*F->size_558)), rt_str(", ", 2)), F->signed_1972), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_max_range_563(P1035 t_561, P1031 c_562) {
  struct f_max_range_563fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_561 = t_561;
F->c_562 = c_562;
if ((F->c_562 == NULL)) {
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->t_561)).kind == (((rt_int)3LL))) && ((*(P1031)rt_nil_check(F->c_562)).prec != NULL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_maxprec(", 13), (((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_562)).prec))->all)), rt_str(");", 2)); b_; }));
}
if ((((*(P1035)rt_nil_check(F->t_561)).kind == (((rt_int)3LL))) && ((*(P1031)rt_nil_check(F->c_562)).lo != NULL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_maxrange_f(", 16), f_clo_193(F->c_562)), rt_str(", ", 2)), f_chi_195(F->c_562)), rt_str(");", 2)); b_; }));
} else if (((((*(P1035)rt_nil_check(F->t_561)).kind == (((rt_int)1LL))) && ((*(P1031)rt_nil_check(F->c_562)).lo != NULL)) && (!(*(P1031)rt_nil_check(F->c_562)).hasm))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_maxrange_i(", 16), f_clo_193(F->c_562)), rt_str(", ", 2)), f_chi_195(F->c_562)), rt_str(");", 2)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl2_565(P1029 d_564) {
  struct f_var_decl2_565fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_564 = d_564;
F->c_1973 = NULL;
F->t_1974 = NULL;
F->t_1974 = f_resolve_subtype_268((*(P1029)rt_nil_check(F->d_564)).a, &F->c_1973);
F->y_1975 = NULL;
F->y_1975 = f_new_sym_181((((rt_int)1LL)), (*(P1029)rt_nil_check(F->d_564)).name);
F->access_1976 = rt_str_copy(f_storage_519(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_564)).name))->all), F->t_1974));
F->c_1973 = f_freeze_209(F->c_1973, F->t_1974);
f_max_range_563(F->t_1974, F->c_1973);
if (((((*(P1035)rt_nil_check(F->t_1974)).kind == (((rt_int)8LL))) && (F->c_1973 != NULL)) && ((*(P1031)rt_nil_check(F->c_1973)).args != NULL))) {
F->c_1973 = f_freeze_args_491(F->c_1973, F->t_1974, (*(P1029)rt_nil_check(F->d_564)).line);
}
g_mark_uninit_1105 = (!f_suppressed_512(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; })));
f_init_storage_341(&F->access_1976, F->t_1974, F->c_1973);
g_mark_uninit_1105 = 0;
if (((*(P1029)rt_nil_check(F->d_564)).ival == ((rt_int)1LL))) {
F->it_1977 = NULL;
F->n_1978 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->d_564)).c, g_ty_int_1114, &F->it_1977));
if (((*(P1035)rt_nil_check(F->t_1974)).kind != (((rt_int)12LL)))) {
f_fail_23((*(P1029)rt_nil_check(F->d_564)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_221((*(P1035)rt_nil_check(F->t_1974)).elem, g_ty_ascii_1117)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1976), rt_str(", ", 2)), F->n_1978), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1976), rt_str(", ", 2)), F->n_1978), rt_str(", 0);", 5)); b_; }));
}
}
if (((*(P1029)rt_nil_check(F->d_564)).b != NULL)) {
F->vt_1979 = NULL;
F->v_1980 = rt_str_copy(f_gexpr_in_811((*(P1029)rt_nil_check(F->d_564)).b, F->t_1974, F->c_1973, &F->vt_1979));
f_check_type_232(F->vt_1979, F->t_1974, (*(P1029)rt_nil_check(F->d_564)).line);
f_ptr_subtype_check_495(F->t_1974, F->c_1973, (*(P1029)rt_nil_check(F->d_564)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(&F->access_1976, F->t_1974, &F->v_1980, F->c_1973); b_; }));
}
(*(P1039)rt_nil_check(F->y_1975)).t = F->t_1974;
(*(P1039)rt_nil_check(F->y_1975)).c = F->c_1973;
f_bind_522(F->y_1975, &F->access_1976);
f_define_168(F->y_1975, (*(P1029)rt_nil_check(F->d_564)).line);
if (f_needs_fin_346(F->t_1974)) {
f_open_fin_567(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_349(&F->access_1976, F->t_1974); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_567(rstr *fc_566) {
  struct f_open_fin_567fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_566 = fc_566;
F->f_1981 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1982 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1981), rt_str("; if (RT_TRY(", 13)), F->f_1981), rt_str(")) {", 4)); b_; }));
f_push_cleanup_605(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1981), rt_str("); ", 3)), (*F->fc_566)); b_; }));
{ R1034 *cell1983 = rt_alloc(sizeof(R1034));
(*cell1983).s = NULL;
(*cell1983).next = NULL;
F->l_1982 = cell1983;
}
(*(P1033)rt_nil_check(F->l_1982)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1981), rt_str("); ", 3)), (*F->fc_566)), rt_str(" } else { RT_POP(", 17)), F->f_1981), rt_str("); ", 3)), (*F->fc_566)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P1033)rt_nil_check(F->l_1982)).next = g_fins_1095;
g_fins_1095 = F->l_1982;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_569(P1033 saved_568) {
  struct f_close_fins_569fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_568 = saved_568;
while (((g_fins_1095 != F->saved_568) && (g_fins_1095 != NULL))) {
f_emit_29(&(((P1022)rt_nil_check((*(P1033)rt_nil_check(g_fins_1095)).s))->all));
f_pop_cleanup_606();
g_fins_1095 = (*(P1033)rt_nil_check(g_fins_1095)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_571(P1029 d_570) {
  struct f_const_decl_571fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_570 = d_570;
F->c_1984 = NULL;
F->c_1984 = f_new_cons_184();
F->t_1985 = NULL;
F->vt_1986 = NULL;
F->y_1987 = NULL;
F->y_1987 = f_new_sym_181((((rt_int)2LL)), (*(P1029)rt_nil_check(F->d_570)).name);
if (((*(P1029)rt_nil_check(F->d_570)).a != NULL)) {
F->t_1985 = f_resolve_subtype_268((*(P1029)rt_nil_check(F->d_570)).a, &F->c_1984);
}
{
F->v_1989 = rt_str_copy(f_gexpr_in_811((*(P1029)rt_nil_check(F->d_570)).b, F->t_1985, F->c_1984, &F->vt_1986));
if ((F->t_1985 != NULL)) {
f_check_type_232(F->vt_1986, F->t_1985, (*(P1029)rt_nil_check(F->d_570)).line);
} else {
F->t_1985 = F->vt_1986;
}
if (((*(P1035)rt_nil_check(F->t_1985)).kind == (((rt_int)1LL)))) {
(*(P1039)rt_nil_check(F->y_1987)).mvalue = f_manifest_366((*(P1029)rt_nil_check(F->d_570)).b, &F->ok_1988);
(*(P1039)rt_nil_check(F->y_1987)).hasmv = F->ok_1988;
}
{
F->access_1990 = rt_str_copy(f_storage_519(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_570)).name))->all), F->t_1985));
if (((*(P1035)rt_nil_check(F->t_1985)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1035)rt_nil_check(F->t_1985)).initp, &F->access_1990); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1990, rt_str(" = ", 3)), f_checked_213(F->t_1985, F->c_1984, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_414(F->t_1985, &F->v_1989); b_; }))), rt_str(";", 1)); b_; }));
f_bind_522(F->y_1987, &F->access_1990);
if (f_needs_fin_346(F->t_1985)) {
f_open_fin_567(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_349(&F->access_1990, F->t_1985); b_; }));
}
}
}
(*(P1039)rt_nil_check(F->y_1987)).t = F->t_1985;
(*(P1039)rt_nil_check(F->y_1987)).c = F->c_1984;
(*(P1039)rt_nil_check(F->y_1987)).ro_flag = 1;
f_define_168(F->y_1987, (*(P1029)rt_nil_check(F->d_570)).line);
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_573(P1029 d_572) {
  struct f_subprogram_573fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_572 = d_572;
f_gen_subprogram_576(F->d_572, f_lookup_decl_165(F->d_572));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_576(P1029 d_574, P1039 y_575) {
  struct f_gen_subprogram_576fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_574 = d_574;
F->y_575 = y_575;
F->saved_code_1991 = NULL;
F->saved_code_1991 = g_code_1083;
F->saved_fields_1992 = NULL;
F->saved_fields_1992 = g_fields_buf_1084;
F->saved_in_1993 = g_in_func_1085;
F->saved_sym_1994 = NULL;
F->saved_sym_1994 = g_func_sym_1097;
F->saved_exits_1995 = NULL;
F->saved_exits_1995 = g_exits_1107;
F->saved_gotos_1996 = NULL;
F->saved_gotos_1996 = g_gotos_1108;
F->saved_frames_1997 = g_frames_1109;
F->args_1998 = NULL;
F->args_1998 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1999 = NULL;
F->pm_1999 = (*(P1039)rt_nil_check(F->y_575)).params;
F->saved_handlers_2000 = NULL;
F->saved_handlers_2000 = g_handlers_1110;
F->saved_cleanups_2001 = NULL;
F->saved_cleanups_2001 = g_cleanups_1111;
F->ctx_2002 = NULL;
F->head_2003 = NULL;
F->frame_2004 = NULL;
F->frame_2004 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_575)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_2005 = NULL;
F->copy_back_2006 = NULL;
F->copy_back_2006 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_2007 = NULL;
F->pfin_2007 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_2008 = NULL;
F->saved_fins_2008 = g_fins_1095;
F->saved_rc_2009 = NULL;
F->saved_rc_2009 = g_func_rc_1098;
F->saved_ret_2010 = NULL;
F->saved_ret_2010 = g_cap_ret_1099;
F->saved_rflag_2011 = NULL;
F->saved_rflag_2011 = g_cap_rflag_1100;
F->pn_2012 = NULL;
F->pn_2012 = (*(P1029)rt_nil_check(F->d_574)).a;
F->nonrec_end_2013 = NULL;
if (g_in_func_1085) {
F->parent_2005 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1039)rt_nil_check(g_func_sym_1097)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_1095 = NULL;
g_func_rc_1098 = NULL;
g_cap_ret_1099 = NULL;
g_cap_rflag_1100 = NULL;
g_code_1083 = f_new_buffer_24();
g_fields_buf_1084 = f_new_buffer_24();
g_in_func_1085 = 1;
g_func_sym_1097 = F->y_575;
g_exits_1107 = NULL;
g_gotos_1108 = NULL;
g_frames_1109 = ((rt_int)0LL);
g_handlers_1110 = NULL;
g_cleanups_1111 = NULL;
g_cur_level_1086 = rt_add(g_cur_level_1086, ((rt_int)1LL));
f_open_scope_177();
{ R1047 *cell2015 = rt_alloc(sizeof(R1047));
(*cell2015).imps = NULL;
(*cell2015).next = NULL;
F->ctx_2002 = cell2015;
}
(*(P1046)rt_nil_check(F->ctx_2002)).depth = g_depth_1072;
(*(P1046)rt_nil_check(F->ctx_2002)).imps = (*(P1029)rt_nil_check(F->d_574)).d;
(*(P1046)rt_nil_check(F->ctx_2002)).all_imp = ((*(P1029)rt_nil_check(F->d_574)).flag >= ((rt_int)2LL));
(*(P1046)rt_nil_check(F->ctx_2002)).next = g_fctx_1087;
g_fctx_1087 = F->ctx_2002;
if ((F->parent_2005 != NULL)) {
f_put_27(g_fields_buf_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P1022)rt_nil_check(F->parent_2005))->all)), rt_str(" *up;", 5)); b_; }));
if (((*(P1039)rt_nil_check(F->y_575)).kind != (((rt_int)9LL)))) {
F->args_1998 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1022)rt_nil_check(F->parent_2005))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1999 != NULL)) {
F->ct_2016 = rt_str_copy(f_ctype_234((*(P1041)rt_nil_check(F->pm_1999)).t));
F->f_2017 = rt_str_copy((((P1022)rt_nil_check((*(P1041)rt_nil_check(F->pm_1999)).cfield))->all));
F->p_2018 = NULL;
F->pc_2019 = NULL;
F->pc_2019 = (*(P1041)rt_nil_check(F->pm_1999)).c;
F->ac_2020 = NULL;
if ((((rt_int)(((((P1022)rt_nil_check(F->args_1998))->all)).len)) > ((rt_int)0LL))) {
F->args_1998 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->args_1998))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_186((*(P1041)rt_nil_check(F->pm_1999)).t)) {
F->fc_2021 = NULL;
F->ft_2022 = NULL;
F->ft_2022 = f_resolve_subtype_268((*(P1029)rt_nil_check(F->pn_2012)).a, &F->fc_2021);
F->pc_2019 = f_freeze_209(F->fc_2021, (*(P1041)rt_nil_check(F->pm_1999)).t);
}
if (((*(P1041)rt_nil_check(F->pm_1999)).mode == (((rt_int)1LL)))) {
F->p_2018 = f_new_sym_181((((rt_int)2LL)), (*(P1041)rt_nil_check(F->pm_1999)).name);
f_put_27(g_fields_buf_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_2016), rt_str(" ", 1)), F->f_2017), rt_str(";", 1)); b_; }));
F->args_1998 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->args_1998))->all), F->ct_2016), rt_str(" ", 1)), F->f_2017); b_; }));
(*(P1039)rt_nil_check(F->p_2018)).access = f_mk_3(&F->f_2017);
if (((*(P1039)rt_nil_check(F->y_575)).kind != (((rt_int)9LL)))) {
if (((*(P1035)rt_nil_check((*(P1041)rt_nil_check(F->pm_1999)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1035)rt_nil_check((*(P1041)rt_nil_check(F->pm_1999)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_2017); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2017), rt_str(" = ", 3)), f_checked_213((*(P1041)rt_nil_check(F->pm_1999)).t, F->pc_2019, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_414((*(P1041)rt_nil_check(F->pm_1999)).t, &F->f_2017); b_; }))), rt_str(";", 1)); b_; }));
if (((((*(P1035)rt_nil_check((*(P1041)rt_nil_check(F->pm_1999)).t)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check((*(P1041)rt_nil_check(F->pm_1999)).t)).assignp != NULL)) && ((*(P1035)rt_nil_check((*(P1041)rt_nil_check(F->pm_1999)).t)).assignp != F->y_575))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_user_call2_400((*(P1035)rt_nil_check((*(P1041)rt_nil_check(F->pm_1999)).t)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_2017); b_; }), 1, &F->f_2017, 0), rt_str(";", 1)); b_; }));
}
if (f_needs_fin_346((*(P1041)rt_nil_check(F->pm_1999)).t)) {
F->pfin_2007 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->pfin_2007))->all), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_2017); b_; }), (*(P1041)rt_nil_check(F->pm_1999)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_2018 = f_new_sym_181((((rt_int)1LL)), (*(P1041)rt_nil_check(F->pm_1999)).name);
f_put_27(g_fields_buf_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_2016), rt_str(" *", 2)), F->f_2017), rt_str(";", 1)); b_; }));
F->args_1998 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->args_1998))->all), F->ct_2016), rt_str(" *", 2)), F->f_2017); b_; }));
(*(P1039)rt_nil_check(F->p_2018)).access = f_mk_3(&F->f_2017);
(*(P1039)rt_nil_check(F->p_2018)).byref = 1;
if (((*(P1039)rt_nil_check(F->y_575)).kind != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2017), rt_str(" = ", 3)), F->f_2017), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_186((*(P1041)rt_nil_check(F->pm_1999)).t)) {
F->bt_2023 = rt_str_copy(f_bound_ctype_188((*(P1041)rt_nil_check(F->pm_1999)).t));
f_put_27(g_fields_buf_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_2023), rt_str(" ", 1)), F->f_2017), rt_str("lo, ", 4)), F->f_2017), rt_str("hi;", 3)); b_; }));
F->args_1998 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->args_1998))->all), rt_str(", ", 2)), F->bt_2023), rt_str(" ", 1)), F->f_2017), rt_str("lo, ", 4)), F->bt_2023), rt_str(" ", 1)), F->f_2017), rt_str("hi", 2)); b_; }));
if (((*(P1039)rt_nil_check(F->y_575)).kind != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2017), rt_str("lo = ", 5)), F->f_2017), rt_str("lo; F->", 7)), F->f_2017), rt_str("hi = ", 5)), F->f_2017), rt_str("hi;", 3)); b_; }));
}
F->ac_2020 = f_new_cons_184();
(*(P1031)rt_nil_check(F->ac_2020)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_2017, rt_str("lo", 2)); b_; }));
(*(P1031)rt_nil_check(F->ac_2020)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_2017, rt_str("hi", 2)); b_; }));
(*(P1031)rt_nil_check(F->ac_2020)).dyn = 1;
(*(P1031)rt_nil_check(F->ac_2020)).lvl = g_cur_level_1086;
if (((F->pc_2019 == NULL) || ((*(P1031)rt_nil_check(F->pc_2019)).lo == NULL))) {
F->pc_2019 = F->ac_2020;
} else if (((*(P1041)rt_nil_check(F->pm_1999)).mode != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_2017), rt_str("lo <= F->", 9)), F->f_2017), rt_str("hi && (F->", 10)), F->f_2017), rt_str("lo != ", 6)), f_sub_lo_198((*(P1041)rt_nil_check(F->pm_1999)).t, F->pc_2019)), rt_str(" || F->", 7)), F->f_2017), rt_str("hi != ", 6)), f_sub_hi_201((*(P1041)rt_nil_check(F->pm_1999)).t, F->pc_2019)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if ((((*(P1041)rt_nil_check(F->pm_1999)).mode == (((rt_int)3LL))) && ((*(P1039)rt_nil_check(F->y_575)).kind != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_2016), rt_str(" ", 1)), F->f_2017), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2017), rt_str("v = ", 4)), f_copy_code_414((*(P1041)rt_nil_check(F->pm_1999)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_2017); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P1035)rt_nil_check((*(P1041)rt_nil_check(F->pm_1999)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1035)rt_nil_check((*(P1041)rt_nil_check(F->pm_1999)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2017), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_2020 == NULL)) {
F->ac_2020 = (*(P1041)rt_nil_check(F->pm_1999)).c;
}
if ((!rt_str_eq(f_uninit_value_360(f_base_of_223((*(P1041)rt_nil_check(F->pm_1999)).t)), rt_str("", 0)))) {
F->copy_back_2006 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->copy_back_2006))->all), rt_str("  if (!rt_r_undef_", 18)), f_kind_name_228(f_base_of_223((*(P1041)rt_nil_check(F->pm_1999)).t))), rt_str("(F->", 4)), F->f_2017), rt_str("v)) ", 4)), f_assign_code_411(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_2017), rt_str(")", 1)); b_; }), (*(P1041)rt_nil_check(F->pm_1999)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2017), rt_str("v", 1)); b_; }), F->ac_2020)); b_; }));
} else {
F->copy_back_2006 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->copy_back_2006))->all), rt_str("  ", 2)), f_assign_code_411(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_2017), rt_str(")", 1)); b_; }), (*(P1041)rt_nil_check(F->pm_1999)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2017), rt_str("v", 1)); b_; }), F->ac_2020)); b_; }));
}
if (f_needs_fin_346((*(P1041)rt_nil_check(F->pm_1999)).t)) {
F->pfin_2007 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->pfin_2007))->all), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2017), rt_str("v", 1)); b_; }), (*(P1041)rt_nil_check(F->pm_1999)).t)), rt_str(" ", 1)); b_; }));
}
(*(P1039)rt_nil_check(F->p_2018)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_2017, rt_str("v", 1)); b_; }));
(*(P1039)rt_nil_check(F->p_2018)).byref = 0;
}
}
(*(P1039)rt_nil_check(F->p_2018)).t = (*(P1041)rt_nil_check(F->pm_1999)).t;
(*(P1039)rt_nil_check(F->p_2018)).c = F->pc_2019;
(*(P1039)rt_nil_check(F->p_2018)).level = g_cur_level_1086;
(*(P1039)rt_nil_check(F->p_2018)).ro_flag = (((*(P1041)rt_nil_check(F->pm_1999)).mode == (((rt_int)1LL))) || ((*(P1041)rt_nil_check(F->pm_1999)).mode == (((rt_int)4LL))));
f_define_168(F->p_2018, (*(P1029)rt_nil_check(F->d_574)).line);
F->pm_1999 = (*(P1041)rt_nil_check(F->pm_1999)).next;
F->pn_2012 = (*(P1029)rt_nil_check(F->pn_2012)).next;
}
if (((*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_575)).result)).kind != (((rt_int)9LL)))) {
if (((*(P1029)rt_nil_check(F->d_574)).b != NULL)) {
F->rc_2024 = NULL;
F->rt_2025 = NULL;
F->rt_2025 = f_resolve_subtype_268((*(P1029)rt_nil_check(F->d_574)).b, &F->rc_2024);
g_func_rc_1098 = f_freeze_209(F->rc_2024, (*(P1039)rt_nil_check(F->y_575)).result);
}
f_put_27(g_fields_buf_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234((*(P1039)rt_nil_check(F->y_575)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_575)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_575)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_2014 = (((rt_int)(((((P1022)rt_nil_check(F->pfin_2007))->all)).len)) > ((rt_int)0LL));
if (F->has_pfin_2014) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_605(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_508((*(P1029)rt_nil_check(F->d_574)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_508((*(P1029)rt_nil_check(F->d_574)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_2026 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_2027 = NULL;
F->leave_2027 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_2026), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_1079, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_2026), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_2026), rt_str(", ", 2)), f_bool_text_382(f_has_pragmat_508((*(P1029)rt_nil_check(F->d_574)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_382(f_has_pragmat_508((*(P1029)rt_nil_check(F->d_574)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->d_574)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_605(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_2006 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->copy_back_2006))->all), rt_str("  ", 2)), (((P1022)rt_nil_check(F->leave_2027))->all)); b_; }));
F->nonrec_end_2013 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P1022)rt_nil_check(F->leave_2027))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
if (f_has_pragmat_508((*(P1029)rt_nil_check(F->d_574)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOREIGN", 7); b_; }))) {
f_foreign_body_501(F->d_574, F->y_575);
}
f_declare_labels_586((*(P1029)rt_nil_check(F->d_574)).c);
f_declare_body_430((*(P1029)rt_nil_check(F->d_574)).c);
{
F->xu_2028 = rt_str_copy(f_open_unhandled_599((*(P1029)rt_nil_check(F->d_574)).c));
f_body_elements_595((*(P1029)rt_nil_check(F->d_574)).c);
f_close_fins_569(NULL);
f_close_unhandled_601(&F->xu_2028);
}
if ((F->nonrec_end_2013 != NULL)) {
f_emit_29(&(((P1022)rt_nil_check(F->nonrec_end_2013))->all));
f_pop_cleanup_606();
}
if (F->has_pfin_2014) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P1022)rt_nil_check(F->pfin_2007))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_606();
F->copy_back_2006 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->copy_back_2006))->all), rt_str("  ", 2)), (((P1022)rt_nil_check(F->pfin_2007))->all)); b_; }));
}
f_close_scope_178();
g_fctx_1087 = (*(P1046)rt_nil_check(g_fctx_1087)).next;
g_cur_level_1086 = rt_sub(g_cur_level_1086, ((rt_int)1LL));
if (((((rt_int)(((((P1022)rt_nil_check(F->args_1998))->all)).len)) == ((rt_int)0LL)) || ((*(P1039)rt_nil_check(F->y_575)).kind == (((rt_int)9LL))))) {
F->args_1998 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((*(P1039)rt_nil_check(F->y_575)).kind == (((rt_int)9LL)))) {
F->args_1998 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_2003 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234((*(P1039)rt_nil_check(F->y_575)).result)), rt_str(" ", 1)), (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_575)).cname))->all)), rt_str("(", 1)), (((P1022)rt_nil_check(F->args_1998))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->head_2003))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->head_2003))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_1092, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1022)rt_nil_check(F->frame_2004))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_1092, g_fields_buf_1084);
f_put_27(g_out_frames_1092, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if (((*(P1039)rt_nil_check(F->y_575)).kind == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1022)rt_nil_check(F->frame_2004))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1022)rt_nil_check(F->frame_2004))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_1080, g_code_1083);
if (((*(P1035)rt_nil_check((*(P1039)rt_nil_check(F->y_575)).result)).kind != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P1022)rt_nil_check(F->copy_back_2006))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_1080, &(((P1022)rt_nil_check(F->copy_back_2006))->all));
}
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P1022)rt_nil_check(F->copy_back_2006))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_1080, &(((P1022)rt_nil_check(F->copy_back_2006))->all));
}
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_1083 = F->saved_code_1991;
g_fields_buf_1084 = F->saved_fields_1992;
g_in_func_1085 = F->saved_in_1993;
g_func_sym_1097 = F->saved_sym_1994;
g_exits_1107 = F->saved_exits_1995;
g_gotos_1108 = F->saved_gotos_1996;
g_frames_1109 = F->saved_frames_1997;
g_handlers_1110 = F->saved_handlers_2000;
g_cleanups_1111 = F->saved_cleanups_2001;
g_fins_1095 = F->saved_fins_2008;
g_func_rc_1098 = F->saved_rc_2009;
g_cap_ret_1099 = F->saved_ret_2010;
g_cap_rflag_1100 = F->saved_rflag_2011;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_578(P1029 d_577) {
  struct f_waits_of_578fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_577 = d_577;
F->w_2029 = NULL;
F->w_2029 = g_cap_waits_1089;
while ((F->w_2029 != NULL)) {
if (((*(P1058)rt_nil_check(F->w_2029)).d == F->d_577)) {
F->result_ = (((P1022)rt_nil_check((*(P1058)rt_nil_check(F->w_2029)).w))->all);
goto ret_;
}
F->w_2029 = (*(P1058)rt_nil_check(F->w_2029)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_580(P1029 elems_579) {
  struct f_task_waits_580fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_579 = elems_579;
F->e_2030 = NULL;
F->e_2030 = F->elems_579;
F->r_2031 = NULL;
F->r_2031 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_2030 != NULL)) {
if (((*(P1029)rt_nil_check(F->e_2030)).kind == (((rt_int)50LL)))) {
F->r_2031 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_2031))->all), rt_str(" rt_await_decl(&", 16)), (((P1022)rt_nil_check((*(P1039)rt_nil_check(f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_2030)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if ((((*(P1029)rt_nil_check(F->e_2030)).kind == (((rt_int)47LL))) || (((*(P1029)rt_nil_check(F->e_2030)).kind == (((rt_int)48LL))) && (((*(P1029)rt_nil_check(F->e_2030)).flag == ((rt_int)1LL)) || ((*(P1029)rt_nil_check(F->e_2030)).flag == ((rt_int)3LL)))))) {
F->r_2031 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_2031))->all), f_waits_of_578(F->e_2030)); b_; }));
}
F->e_2030 = (*(P1029)rt_nil_check(F->e_2030)).next;
}
F->result_ = (((P1022)rt_nil_check(F->r_2031))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_582(P1029 elems_581) {
  struct f_await_tasks_582fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_581 = elems_581;
F->w_2032 = rt_str_copy(f_task_waits_580(F->elems_581));
if ((((rt_int)((F->w_2032).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2032);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_584(P1029 elems_583) {
  struct f_capsule_elements_584fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_583 = elems_583;
F->e_2033 = NULL;
F->e_2033 = F->elems_583;
while ((F->e_2033 != NULL)) {
if ((((*(P1029)rt_nil_check(F->e_2033)).kind >= (((rt_int)20LL))) && ((*(P1029)rt_nil_check(F->e_2033)).kind <= (((rt_int)36LL))))) {
f_start_labels_587();
}
f_element_514(F->e_2033);
F->e_2033 = (*(P1029)rt_nil_check(F->e_2033)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_586(P1029 elems_585) {
  struct f_declare_labels_586fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_585 = elems_585;
F->e_2034 = NULL;
F->e_2034 = F->elems_585;
while ((F->e_2034 != NULL)) {
F->l_2035 = NULL;
F->l_2035 = (*(P1029)rt_nil_check(F->e_2034)).labels;
while ((F->l_2035 != NULL)) {
F->x_2036 = NULL;
F->x_2036 = g_gotos_1108;
while (((F->x_2036 != NULL) && ((*(P1054)rt_nil_check(F->x_2036)).depth == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1054)rt_nil_check(F->x_2036)).match))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->l_2035)).name))->all))) {
f_fail_23((*(P1029)rt_nil_check(F->l_2035)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->l_2035)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_2036 = (*(P1054)rt_nil_check(F->x_2036)).next;
}
{ R1055 *cell2037 = rt_alloc(sizeof(R1055));
(*cell2037).match = NULL;
(*cell2037).label = NULL;
(*cell2037).next = NULL;
F->x_2036 = cell2037;
}
(*(P1054)rt_nil_check(F->x_2036)).match = (*(P1029)rt_nil_check(F->l_2035)).name;
(*(P1054)rt_nil_check(F->x_2036)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P1054)rt_nil_check(F->x_2036)).depth = rt_neg(((rt_int)1LL));
(*(P1054)rt_nil_check(F->x_2036)).next = g_gotos_1108;
g_gotos_1108 = F->x_2036;
F->l_2035 = (*(P1029)rt_nil_check(F->l_2035)).next;
}
F->e_2034 = (*(P1029)rt_nil_check(F->e_2034)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_587(void) {
  struct f_start_labels_587fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_2038 = NULL;
F->x_2038 = g_gotos_1108;
while (((F->x_2038 != NULL) && ((*(P1054)rt_nil_check(F->x_2038)).depth == rt_neg(((rt_int)1LL))))) {
(*(P1054)rt_nil_check(F->x_2038)).depth = g_frames_1109;
F->x_2038 = (*(P1054)rt_nil_check(F->x_2038)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P1054 f_goto_label_589(rstr *name_588) {
  struct f_goto_label_589fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_588 = name_588;
F->x_2039 = NULL;
F->x_2039 = g_gotos_1108;
while ((F->x_2039 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1054)rt_nil_check(F->x_2039)).match))->all), (*F->name_588))) {
F->result_ = F->x_2039;
goto ret_;
}
F->x_2039 = (*(P1054)rt_nil_check(F->x_2039)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_591(P1029 e_590) {
  struct f_has_return_591fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_590 = e_590;
F->x_2040 = NULL;
F->x_2040 = F->e_590;
while ((F->x_2040 != NULL)) {
if (((*(P1029)rt_nil_check(F->x_2040)).kind == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if (((((((*(P1029)rt_nil_check(F->x_2040)).kind != (((rt_int)45LL))) && ((*(P1029)rt_nil_check(F->x_2040)).kind != (((rt_int)46LL)))) && ((*(P1029)rt_nil_check(F->x_2040)).kind != (((rt_int)50LL)))) && ((*(P1029)rt_nil_check(F->x_2040)).kind != (((rt_int)47LL)))) && ((*(P1029)rt_nil_check(F->x_2040)).kind != (((rt_int)51LL))))) {
if ((((((*(P1029)rt_nil_check(F->x_2040)).a != NULL) && f_has_return_591((*(P1029)rt_nil_check(F->x_2040)).a)) || (((*(P1029)rt_nil_check(F->x_2040)).b != NULL) && f_has_return_591((*(P1029)rt_nil_check(F->x_2040)).b))) || (((*(P1029)rt_nil_check(F->x_2040)).c != NULL) && f_has_return_591((*(P1029)rt_nil_check(F->x_2040)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_2040 = (*(P1029)rt_nil_check(F->x_2040)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_593(P1029 elems_592) {
  struct f_capsule_body_593fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_592 = elems_592;
F->saved_ret_2041 = NULL;
F->saved_ret_2041 = g_cap_ret_1099;
F->saved_flag_2042 = NULL;
F->saved_flag_2042 = g_cap_rflag_1100;
F->saved_frames_2043 = g_ret_frames_1101;
F->e_2044 = NULL;
F->e_2044 = F->elems_592;
if ((!f_has_return_591(F->elems_592))) {
g_cap_ret_1099 = NULL;
g_cap_rflag_1100 = NULL;
f_capsule_elements_584(F->elems_592);
} else {
g_cap_rflag_1100 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(g_cap_rflag_1100))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_2044 != NULL)) {
F->stmt_2045 = (((*(P1029)rt_nil_check(F->e_2044)).kind >= (((rt_int)20LL))) && ((*(P1029)rt_nil_check(F->e_2044)).kind <= (((rt_int)36LL))));
g_cap_ret_1099 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_1101 = g_frames_1109;
if (F->stmt_2045) {
f_start_labels_587();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P1022)rt_nil_check(g_cap_rflag_1100))->all)), rt_str(") {", 3)); b_; }));
}
f_element_514(F->e_2044);
if (F->stmt_2045) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(g_cap_ret_1099))->all), rt_str(": ;", 3)); b_; }));
F->e_2044 = (*(P1029)rt_nil_check(F->e_2044)).next;
}
}
g_cap_ret_1099 = F->saved_ret_2041;
g_cap_rflag_1100 = F->saved_flag_2042;
g_ret_frames_1101 = F->saved_frames_2043;
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_595(P1029 elems_594) {
  struct f_body_elements_595fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_594 = elems_594;
f_capsule_elements_584(F->elems_594);
f_await_tasks_582(F->elems_594);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_597(P1029 elems_596) {
  struct f_gen_body_597fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_596 = elems_596;
F->saved_2046 = NULL;
F->saved_2046 = g_fins_1095;
F->saved_gotos_2047 = NULL;
F->saved_gotos_2047 = g_gotos_1108;
f_open_scope_177();
f_declare_labels_586(F->elems_596);
f_declare_body_430(F->elems_596);
{
F->xu_2048 = rt_str_copy(f_open_unhandled_599(F->elems_596));
f_body_elements_595(F->elems_596);
f_close_fins_569(F->saved_2046);
f_close_unhandled_601(&F->xu_2048);
}
f_close_scope_178();
g_gotos_1108 = F->saved_gotos_2047;
ret_:
  RT_FPOP();
  return;
}

static rstr f_open_unhandled_599(P1029 elems_598) {
  struct f_open_unhandled_599fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_598 = elems_598;
F->e_2049 = NULL;
F->e_2049 = F->elems_598;
F->conds_2050 = NULL;
F->conds_2050 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->e_2049 != NULL)) {
if (((*(P1029)rt_nil_check(F->e_2049)).kind == (((rt_int)49LL)))) {
F->conds_2050 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->conds_2050))->all), rt_str(" || rt_xcur == ", 15)), (((P1022)rt_nil_check((*(P1039)rt_nil_check(f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_2049)).name))->all)))).cname))->all)); b_; }));
}
F->e_2049 = (*(P1029)rt_nil_check(F->e_2049)).next;
}
if ((((rt_int)(((((P1022)rt_nil_check(F->conds_2050))->all)).len)) == ((rt_int)1LL))) {
F->result_ = rt_str("", 0);
goto ret_;
}
{
F->f_2051 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xu", 2); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2051), rt_str("; if (RT_TRY(", 13)), F->f_2051), rt_str(")) {", 4)); b_; }));
f_push_cleanup_605(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2051), rt_str(");", 2)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(F->f_2051, rt_str(":", 1)), (((P1022)rt_nil_check(F->conds_2050))->all));
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
F->i_2052 = ((rt_int)1LL);
if (rt_str_eq((*F->xu_600), rt_str("", 0))) {
goto ret_;
}
while ((rt_str_get((*F->xu_600), F->i_2052) != 58)) {
F->i_2052 = rt_add(F->i_2052, ((rt_int)1LL));
}
{
F->f_2053 = rt_str_copy(rt_str_slice((*F->xu_600), ((rt_int)1LL), rt_sub(F->i_2052, ((rt_int)1LL))));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2053), rt_str("); } else { RT_POP(", 19)), F->f_2053), rt_str("); if (", 7)), rt_str_slice((*F->xu_600), rt_add(F->i_2052, ((rt_int)1LL)), ((rt_int)(((*F->xu_600)).len)))), rt_str(") rt_raise(rt_exc(", 18)), f_q_18()), rt_str("X_UNHANDLED", 11)), f_q_18()), rt_str(")); rt_raise(rt_xcur); }", 24)); b_; }));
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
F->i_2054 = g_frames_1109;
F->c_2055 = NULL;
F->c_2055 = g_cleanups_1111;
while ((F->i_2054 > F->upto_602)) {
f_emit_29(&(((P1022)rt_nil_check((*(P1033)rt_nil_check(F->c_2055)).s))->all));
F->c_2055 = (*(P1033)rt_nil_check(F->c_2055)).next;
F->i_2054 = rt_sub(F->i_2054, ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_605(rstr *s_604) {
  struct f_push_cleanup_605fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_604 = s_604;
F->c_2056 = NULL;
{ R1034 *cell2057 = rt_alloc(sizeof(R1034));
(*cell2057).s = NULL;
(*cell2057).next = NULL;
F->c_2056 = cell2057;
}
(*(P1033)rt_nil_check(F->c_2056)).s = f_mk_3(&(*F->s_604));
(*(P1033)rt_nil_check(F->c_2056)).next = g_cleanups_1111;
g_cleanups_1111 = F->c_2056;
g_frames_1109 = rt_add(g_frames_1109, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_606(void) {
  struct f_pop_cleanup_606fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_1111 = (*(P1033)rt_nil_check(g_cleanups_1111)).next;
g_frames_1109 = rt_sub(g_frames_1109, ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_608(P1029 s_607) {
  struct f_gen_statement_608fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_607 = s_607;
F->located_2058 = NULL;
F->located_2058 = f_located_in_611(f_copy_node_842(F->s_607), NULL);
F->l_2059 = NULL;
F->l_2059 = F->located_2058;
while ((F->l_2059 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_529(F->l_2059, 0); b_; }));
F->l_2059 = (*(P1039)rt_nil_check(F->l_2059)).reqs_sym;
}
f_gen_statement2_616(F->s_607);
F->l_2059 = F->located_2058;
while ((F->l_2059 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_529(F->l_2059, 1); b_; }));
F->l_2059 = (*(P1039)rt_nil_check(F->l_2059)).reqs_sym;
}
ret_:
  RT_FPOP();
  return;
}

static P1039 f_located_in_611(P1029 e_609, P1039 found_610) {
  struct f_located_in_611fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_609 = e_609;
F->found_610 = found_610;
F->x_2060 = NULL;
F->x_2060 = F->e_609;
F->r_2061 = NULL;
F->r_2061 = F->found_610;
while ((F->x_2060 != NULL)) {
if (((*(P1029)rt_nil_check(F->x_2060)).kind == (((rt_int)7LL)))) {
F->y_2062 = NULL;
F->y_2062 = f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_2060)).name))->all));
if (((((F->y_2062 != NULL) && ((*(P1039)rt_nil_check(F->y_2062)).kind == (((rt_int)1LL)))) && ((*(P1039)rt_nil_check(F->y_2062)).loc != NULL)) && (!f_sym_in_614(F->r_2061, F->y_2062)))) {
(*(P1039)rt_nil_check(F->y_2062)).reqs_sym = F->r_2061;
F->r_2061 = F->y_2062;
}
} else if (((((((*(P1029)rt_nil_check(F->x_2060)).kind == (((rt_int)45LL))) || ((*(P1029)rt_nil_check(F->x_2060)).kind == (((rt_int)46LL)))) || ((*(P1029)rt_nil_check(F->x_2060)).kind == (((rt_int)50LL)))) || ((*(P1029)rt_nil_check(F->x_2060)).kind == (((rt_int)47LL)))) || ((*(P1029)rt_nil_check(F->x_2060)).kind == (((rt_int)51LL))))) {
F->result_ = F->r_2061;
goto ret_;
}
if (((*(P1029)rt_nil_check(F->x_2060)).a != NULL)) {
F->r_2061 = f_located_in_611((*(P1029)rt_nil_check(F->x_2060)).a, F->r_2061);
}
if (((*(P1029)rt_nil_check(F->x_2060)).b != NULL)) {
F->r_2061 = f_located_in_611((*(P1029)rt_nil_check(F->x_2060)).b, F->r_2061);
}
if (((*(P1029)rt_nil_check(F->x_2060)).c != NULL)) {
F->r_2061 = f_located_in_611((*(P1029)rt_nil_check(F->x_2060)).c, F->r_2061);
}
F->x_2060 = (*(P1029)rt_nil_check(F->x_2060)).next;
}
F->result_ = F->r_2061;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_sym_in_614(P1039 l_612, P1039 y_613) {
  struct f_sym_in_614fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_612 = l_612;
F->y_613 = y_613;
F->p_2063 = NULL;
F->p_2063 = F->l_612;
while ((F->p_2063 != NULL)) {
if ((F->p_2063 == F->y_613)) {
F->result_ = 1;
goto ret_;
}
F->p_2063 = (*(P1039)rt_nil_check(F->p_2063)).reqs_sym;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_statement2_616(P1029 s_615) {
  struct f_gen_statement2_616fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_615 = s_615;
F->label_2064 = NULL;
F->gl_2065 = NULL;
F->gl_2065 = (*(P1029)rt_nil_check(F->s_615)).labels;
while ((F->gl_2065 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1054)rt_nil_check(f_goto_label_589(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->gl_2065)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_2065 = (*(P1029)rt_nil_check(F->gl_2065)).next;
}
if (((*(P1029)rt_nil_check(F->s_615)).tag != NULL)) {
F->x_2066 = NULL;
{ R1055 *cell2067 = rt_alloc(sizeof(R1055));
(*cell2067).match = NULL;
(*cell2067).label = NULL;
(*cell2067).next = NULL;
F->x_2066 = cell2067;
}
F->label_2064 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P1054)rt_nil_check(F->x_2066)).match = (*(P1029)rt_nil_check(F->s_615)).tag;
(*(P1054)rt_nil_check(F->x_2066)).label = F->label_2064;
(*(P1054)rt_nil_check(F->x_2066)).depth = g_frames_1109;
(*(P1054)rt_nil_check(F->x_2066)).next = g_exits_1107;
g_exits_1107 = F->x_2066;
}
{ rt_int sel2068 = (*(P1029)rt_nil_check(F->s_615)).kind;
if (0 || (sel2068 == (((rt_int)20LL)))) {
f_st_assign_618(F->s_615);
} else if (0 || (sel2068 == (((rt_int)21LL)))) {
f_st_call_620(F->s_615);
} else if (0 || (sel2068 == (((rt_int)22LL)))) {
f_st_if_622(F->s_615);
} else if (0 || (sel2068 == (((rt_int)23LL)))) {
f_st_case_626(F->s_615);
} else if (0 || (sel2068 == (((rt_int)24LL)))) {
f_st_repeat_634(F->s_615);
} else if (0 || (sel2068 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_597((*(P1029)rt_nil_check(F->s_615)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel2068 == (((rt_int)27LL)))) {
f_st_exit_636(F->s_615);
} else if (0 || (sel2068 == (((rt_int)29LL)))) {
{
F->x_2069 = NULL;
F->x_2069 = f_goto_label_589(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->s_615)).name))->all));
if ((F->x_2069 == NULL)) {
f_fail_23((*(P1029)rt_nil_check(F->s_615)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->s_615)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_603((*(P1054)rt_nil_check(F->x_2069)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P1022)rt_nil_check((*(P1054)rt_nil_check(F->x_2069)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel2068 == (((rt_int)28LL)))) {
f_st_return_638(F->s_615);
} else if (0 || (sel2068 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_645(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->s_615)).name))->all), (*(P1029)rt_nil_check(F->s_615)).line)), rt_str(");", 2)); b_; }));
} else if (0 || (sel2068 == (((rt_int)31LL)))) {
if ((g_handlers_1110 == NULL)) {
f_fail_23((*(P1029)rt_nil_check(F->s_615)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P1022)rt_nil_check((*(P1033)rt_nil_check(g_handlers_1110)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel2068 == (((rt_int)26LL)))) {
f_st_guard_647(F->s_615);
} else if (0 || (sel2068 == (((rt_int)32LL)))) {
f_st_alloc_649(F->s_615);
} else if (0 || (sel2068 == (((rt_int)34LL)))) {
f_st_create_653(F->s_615);
} else if (0 || (sel2068 == (((rt_int)35LL)))) {
f_st_wait_682(F->s_615);
} else if (0 || (sel2068 == (((rt_int)36LL)))) {
f_st_region_690(F->s_615);
} else {
f_fail_23((*(P1029)rt_nil_check(F->s_615)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P1029)rt_nil_check(F->s_615)).tag != NULL)) {
g_exits_1107 = (*(P1054)rt_nil_check(g_exits_1107)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->label_2064))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_618(P1029 s_617) {
  struct f_st_assign_618fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_617 = s_617;
F->lv_2070 = NULL;
F->t_2071 = NULL;
F->vt_2072 = NULL;
F->c_2073 = NULL;
if (((((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->s_617)).a)).kind == (((rt_int)10LL))) && ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->s_617)).a)).b != NULL)) && ((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->s_617)).a)).b)).kind == (((rt_int)16LL))))) {
f_lvalue_769((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->s_617)).a)).a, &F->lv_2070, &F->t_2071, &F->c_2073, &F->ro_2074);
while (((*(P1035)rt_nil_check(F->t_2071)).kind == (((rt_int)8LL)))) {
f_finish_ptr_475(F->t_2071);
F->lv_2070 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_761(&(((P1022)rt_nil_check(F->lv_2070))->all), F->t_2071); b_; }));
F->t_2071 = (*(P1035)rt_nil_check(F->t_2071)).target;
}
if ((((*(P1035)rt_nil_check(F->t_2071)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->t_2071)).tparams == NULL))) {
F->t_2071 = (*(P1035)rt_nil_check(F->t_2071)).under;
} else if (((*(P1035)rt_nil_check(F->t_2071)).kind == (((rt_int)15LL)))) {
F->lv_2070 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->lv_2070))->all), rt_str(".all", 4)); b_; }));
F->t_2071 = (*(P1035)rt_nil_check(F->t_2071)).under;
}
if ((((!F->ro_2074) && ((*(P1035)rt_nil_check(F->t_2071)).kind == (((rt_int)6LL)))) && ((*(P1035)rt_nil_check(F->t_2071)).ndim == ((rt_int)1LL)))) {
F->lo_2075 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->s_617)).a)).b)).a, (*(P1035)rt_nil_check(F->t_2071)).idx, &F->vt_2072));
F->hi_2076 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->s_617)).a)).b)).b, (*(P1035)rt_nil_check(F->t_2071)).idx, &F->vt_2072));
F->v_2077 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->s_617)).b, F->t_2071, &F->vt_2072));
f_need_slice_781(F->t_2071);
f_check_type_232(F->vt_2072, F->t_2071, (*(P1029)rt_nil_check(F->s_617)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->t_2071)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_234(F->t_2071)), rt_str("(", 1)), (((P1022)rt_nil_check(F->lv_2070))->all)), rt_str(", ", 2)), F->lo_2075), rt_str(", ", 2)), F->hi_2076), rt_str("); as_", 6)), f_ctype_234(F->t_2071)), rt_str("(&sl_, ", 7)), F->v_2077), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((F->ro_2074 || ((*(P1035)rt_nil_check(F->t_2071)).kind != (((rt_int)5LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->s_617)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_2078 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->s_617)).a)).b)).a, g_ty_int_1114, &F->vt_2072));
F->hi_2079 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->s_617)).a)).b)).b, g_ty_int_1114, &F->vt_2072));
F->v_2080 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->s_617)).b, g_ty_string_1118, &F->vt_2072));
f_check_type_232(F->vt_2072, g_ty_string_1118, (*(P1029)rt_nil_check(F->s_617)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P1022)rt_nil_check(F->lv_2070))->all)), rt_str(", ", 2)), F->lo_2078), rt_str(", ", 2)), F->hi_2079), rt_str(", ", 2)), F->v_2080), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_769((*(P1029)rt_nil_check(F->s_617)).a, &F->lv_2070, &F->t_2071, &F->c_2073, &F->ro_2074);
if (F->ro_2074) {
f_fail_23((*(P1029)rt_nil_check(F->s_617)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_308(F->t_2071)) && (!f_exports_op_458((*(P1035)rt_nil_check(F->t_2071)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23((*(P1029)rt_nil_check(F->s_617)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_2071)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_2081 = rt_str_copy(f_gexpr_in_811((*(P1029)rt_nil_check(F->s_617)).b, F->t_2071, F->c_2073, &F->vt_2072));
f_check_type_232(F->vt_2072, F->t_2071, (*(P1029)rt_nil_check(F->s_617)).line);
f_ptr_subtype_check_495(F->t_2071, F->c_2073, (*(P1029)rt_nil_check(F->s_617)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(&(((P1022)rt_nil_check(F->lv_2070))->all), F->t_2071, &F->v_2081, F->c_2073); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_620(P1029 s_619) {
  struct f_st_call_620fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_619 = s_619;
F->c_2082 = NULL;
F->c_2082 = (*(P1029)rt_nil_check(F->s_619)).a;
F->t_2083 = NULL;
if ((((*(P1029)rt_nil_check(F->c_2082)).kind == (((rt_int)7LL))) || ((*(P1029)rt_nil_check(F->c_2082)).kind == (((rt_int)12LL))))) {
F->x_2084 = NULL;
F->x_2084 = f_nn_65((((rt_int)10LL)), (*(P1029)rt_nil_check(F->c_2082)).line);
(*(P1029)rt_nil_check(F->x_2084)).a = F->c_2082;
F->c_2082 = F->x_2084;
}
if (((*(P1029)rt_nil_check(F->c_2082)).kind != (((rt_int)10LL)))) {
f_fail_23((*(P1029)rt_nil_check(F->s_619)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_951(F->c_2082, 1, &F->t_2083), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_622(P1029 s_621) {
  struct f_st_if_622fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_621 = s_621;
F->a_2085 = NULL;
F->a_2085 = (*(P1029)rt_nil_check(F->s_621)).a;
F->first_2086 = 1;
F->t_2087 = NULL;
F->taken_2088 = 0;
F->mv_2090 = NULL;
while (((F->a_2085 != NULL) && (!F->taken_2088))) {
F->mv_2090 = f_meval_375((*(P1029)rt_nil_check(F->a_2085)).a, &F->ok_2089);
if (((F->ok_2089 && ((*(P1048)rt_nil_check(F->mv_2090)).kind == (((rt_int)2LL)))) && ((*(P1048)rt_nil_check(F->mv_2090)).i == ((rt_int)0LL)))) {
F->a_2085 = (*(P1029)rt_nil_check(F->a_2085)).next;
} else {
if ((F->ok_2089 && ((*(P1048)rt_nil_check(F->mv_2090)).kind == (((rt_int)2LL))))) {
F->taken_2088 = 1;
if (F->first_2086) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_2091 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->a_2085)).a, g_ty_bool_1115, &F->t_2087));
f_check_type_232(F->t_2087, g_ty_bool_1115, (*(P1029)rt_nil_check(F->s_621)).line);
if (F->first_2086) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_2091), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_2091), rt_str(") {", 3)); b_; }));
}
}
F->first_2086 = 0;
f_gen_body_597((*(P1029)rt_nil_check(F->a_2085)).b);
F->a_2085 = (*(P1029)rt_nil_check(F->a_2085)).next;
}
}
if ((((*(P1029)rt_nil_check(F->s_621)).flag == ((rt_int)1LL)) && (!F->taken_2088))) {
if (F->first_2086) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_2086 = 0;
f_gen_body_597((*(P1029)rt_nil_check(F->s_621)).b);
}
if ((!F->first_2086)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_manifest_case_624(P1029 s_623) {
  struct f_manifest_case_624fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_623 = s_623;
F->sv_2093 = NULL;
F->sv_2093 = f_meval_375((*(P1029)rt_nil_check(F->s_623)).a, &F->ok_2092);
F->a_2094 = NULL;
F->a_2094 = (*(P1029)rt_nil_check(F->s_623)).b;
if (((!F->ok_2092) || ((((*(P1048)rt_nil_check(F->sv_2093)).kind != (((rt_int)1LL))) && ((*(P1048)rt_nil_check(F->sv_2093)).kind != (((rt_int)2LL)))) && ((*(P1048)rt_nil_check(F->sv_2093)).kind != (((rt_int)4LL)))))) {
F->result_ = 0;
goto ret_;
}
while ((F->a_2094 != NULL)) {
F->lab_2095 = NULL;
F->lab_2095 = (*(P1029)rt_nil_check(F->a_2094)).a;
while ((F->lab_2095 != NULL)) {
F->lo_2096 = NULL;
F->lo_2096 = f_meval_375((*(P1029)rt_nil_check(F->lab_2095)).a, &F->ok_2092);
F->hi_2097 = NULL;
F->hi_2097 = F->lo_2096;
if (((!F->ok_2092) || ((*(P1048)rt_nil_check(F->lo_2096)).kind != (*(P1048)rt_nil_check(F->sv_2093)).kind))) {
F->result_ = 0;
goto ret_;
}
if (((*(P1029)rt_nil_check(F->lab_2095)).b != NULL)) {
F->hi_2097 = f_meval_375((*(P1029)rt_nil_check(F->lab_2095)).b, &F->ok_2092);
if ((((!F->ok_2092) || ((*(P1048)rt_nil_check(F->hi_2097)).kind != (*(P1048)rt_nil_check(F->sv_2093)).kind)) || ((*(P1048)rt_nil_check(F->sv_2093)).kind == (((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
}
if (((((*(P1048)rt_nil_check(F->sv_2093)).kind == (((rt_int)4LL))) && rt_str_eq((((P1022)rt_nil_check((*(P1048)rt_nil_check(F->sv_2093)).s))->all), (((P1022)rt_nil_check((*(P1048)rt_nil_check(F->lo_2096)).s))->all))) || ((((*(P1048)rt_nil_check(F->sv_2093)).kind != (((rt_int)4LL))) && ((*(P1048)rt_nil_check(F->lo_2096)).i <= (*(P1048)rt_nil_check(F->sv_2093)).i)) && ((*(P1048)rt_nil_check(F->sv_2093)).i <= (*(P1048)rt_nil_check(F->hi_2097)).i)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_597((*(P1029)rt_nil_check(F->a_2094)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
F->result_ = 1;
goto ret_;
}
F->lab_2095 = (*(P1029)rt_nil_check(F->lab_2095)).next;
}
F->a_2094 = (*(P1029)rt_nil_check(F->a_2094)).next;
}
if (((*(P1029)rt_nil_check(F->s_623)).flag == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_597((*(P1029)rt_nil_check(F->s_623)).c);
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

static void f_st_case_626(P1029 s_625) {
  struct f_st_case_626fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_625 = s_625;
F->st_2098 = NULL;
F->vt_2099 = NULL;
F->first_2100 = 1;
F->a_2101 = NULL;
F->a_2101 = (*(P1029)rt_nil_check(F->s_625)).b;
if (f_manifest_case_624(F->s_625)) {
goto ret_;
}
f_st_case2_628(F->s_625);
ret_:
  RT_FPOP();
  return;
}

static void f_st_case2_628(P1029 s_627) {
  struct f_st_case2_628fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_627 = s_627;
F->st_2102 = NULL;
F->vt_2103 = NULL;
F->first_2104 = 1;
F->a_2105 = NULL;
F->a_2105 = (*(P1029)rt_nil_check(F->s_627)).b;
F->sel_2106 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->s_627)).a, NULL, &F->st_2102));
F->tmp_2107 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->st_2102)), rt_str(" ", 1)), F->tmp_2107), rt_str(" = ", 3)), F->sel_2106), rt_str(";", 1)); b_; }));
while ((F->a_2105 != NULL)) {
F->lab_2108 = NULL;
F->lab_2108 = (*(P1029)rt_nil_check(F->a_2105)).a;
F->conds_2109 = NULL;
F->conds_2109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_2108 != NULL)) {
if (((*(P1029)rt_nil_check(F->lab_2108)).b == NULL)) {
F->v_2110 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->lab_2108)).a, F->st_2102, &F->vt_2103));
f_check_type_232(F->vt_2103, F->st_2102, (*(P1029)rt_nil_check(F->s_627)).line);
F->conds_2109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->conds_2109))->all), rt_str(" || ", 4)), f_eq_code_418(F->st_2102, &F->tmp_2107, &F->v_2110)); b_; }));
} else if ((((*(P1035)rt_nil_check(F->st_2102)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->st_2102)).ltp != NULL))) {
F->lo_2111 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->lab_2108)).a, F->st_2102, &F->vt_2103));
F->hi_2112 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->lab_2108)).b, F->st_2102, &F->vt_2103));
F->conds_2109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->conds_2109))->all), rt_str(" || (!", 6)), f_user_call2_400((*(P1035)rt_nil_check(F->st_2102)).ltp, &F->tmp_2107, 1, &F->lo_2111, 0)), rt_str(" && !", 5)), f_user_call2_400((*(P1035)rt_nil_check(F->st_2102)).ltp, &F->hi_2112, 0, &F->tmp_2107, 1)), rt_str(")", 1)); b_; }));
} else {
F->lo_2113 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->lab_2108)).a, F->st_2102, &F->vt_2103));
F->hi_2114 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->lab_2108)).b, F->st_2102, &F->vt_2103));
F->conds_2109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->conds_2109))->all), rt_str(" || (", 5)), F->tmp_2107), rt_str(" >= ", 4)), F->lo_2113), rt_str(" && ", 4)), F->tmp_2107), rt_str(" <= ", 4)), F->hi_2114), rt_str(")", 1)); b_; }));
}
F->lab_2108 = (*(P1029)rt_nil_check(F->lab_2108)).next;
}
if (F->first_2104) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1022)rt_nil_check(F->conds_2109))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1022)rt_nil_check(F->conds_2109))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2104 = 0;
f_gen_body_597((*(P1029)rt_nil_check(F->a_2105)).b);
F->a_2105 = (*(P1029)rt_nil_check(F->a_2105)).next;
}
if (F->first_2104) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P1029)rt_nil_check(F->s_627)).flag == ((rt_int)1LL))) {
f_gen_body_597((*(P1029)rt_nil_check(F->s_627)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_user_for_632(P1029 s_629, P1035 t_630, P1031 c_631) {
  struct f_user_for_632fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_629 = s_629;
F->t_630 = t_630;
F->c_631 = c_631;
F->y_2115 = NULL;
F->y_2115 = f_new_sym_181((((rt_int)2LL)), (*(P1029)rt_nil_check(F->s_629)).name);
F->saved_2116 = NULL;
F->saved_2116 = g_psub_1090;
F->p_2117 = NULL;
F->p_2117 = (*(P1035)rt_nil_check(F->t_630)).tparams;
F->iv_2118 = NULL;
F->iv_2118 = f_nn_65((((rt_int)7LL)), (*(P1029)rt_nil_check(F->s_629)).line);
F->st_2119 = NULL;
F->access_2120 = rt_str_copy(f_storage_519(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->s_629)).name))->all), F->t_630));
F->uv_2121 = NULL;
F->uv_2121 = f_mk_3(&F->access_2120);
if (((*(P1035)rt_nil_check(F->t_630)).tparams != NULL)) {
F->uv_2121 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->access_2120, rt_str(".all", 4)); b_; }));
}
if ((((!f_scalar_kind_186(f_base_of_223((*(P1035)rt_nil_check(F->t_630)).under))) || ((*(P1035)rt_nil_check(F->t_630)).elemcons == NULL)) || ((*(P1031)rt_nil_check((*(P1035)rt_nil_check(F->t_630)).elemcons)).lo == NULL))) {
f_fail_23((*(P1029)rt_nil_check(F->s_629)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a FOR over ", 11), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_630)).name))->all)), rt_str(" needs an underlying subtype with a range", 41)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_init_storage_341(&F->access_2120, F->t_630, F->c_631);
while ((F->p_2117 != NULL)) {
F->l1_2122 = NULL;
F->l2_2123 = NULL;
{ R1034 *cell2124 = rt_alloc(sizeof(R1034));
(*cell2124).s = NULL;
(*cell2124).next = NULL;
F->l1_2122 = cell2124;
}
{ R1034 *cell2125 = rt_alloc(sizeof(R1034));
(*cell2125).s = NULL;
(*cell2125).next = NULL;
F->l2_2123 = cell2125;
}
(*(P1033)rt_nil_check(F->l1_2122)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2117)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1033)rt_nil_check(F->l2_2123)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(F->access_2120, rt_str(".p_", 3)), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2117)).name))->all))); b_; }));
(*(P1033)rt_nil_check(F->l1_2122)).next = F->l2_2123;
(*(P1033)rt_nil_check(F->l2_2123)).next = g_psub_1090;
g_psub_1090 = F->l1_2122;
F->p_2117 = (*(P1029)rt_nil_check(F->p_2117)).next;
}
{
F->lo_2126 = rt_str_copy(f_subst_314(&(((P1022)rt_nil_check((*(P1031)rt_nil_check((*(P1035)rt_nil_check(F->t_630)).elemcons)).lo))->all)));
F->hi_2127 = rt_str_copy(f_subst_314(&(((P1022)rt_nil_check((*(P1031)rt_nil_check((*(P1035)rt_nil_check(F->t_630)).elemcons)).hi))->all)));
g_psub_1090 = F->saved_2116;
if (((*(P1029)rt_nil_check(F->s_629)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->uv_2121))->all), rt_str(" = ", 3)), F->hi_2127), rt_str("; if (", 6)), F->lo_2126), rt_str(" <= ", 4)), (((P1022)rt_nil_check(F->uv_2121))->all)), rt_str(") for (;;) {", 12)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->uv_2121))->all), rt_str(" = ", 3)), F->lo_2126), rt_str("; if (", 6)), (((P1022)rt_nil_check(F->uv_2121))->all)), rt_str(" <= ", 4)), F->hi_2127), rt_str(") for (;;) {", 12)); b_; }));
}
f_open_scope_177();
(*(P1039)rt_nil_check(F->y_2115)).t = F->t_630;
(*(P1039)rt_nil_check(F->y_2115)).c = F->c_631;
f_bind_522(F->y_2115, &F->access_2120);
(*(P1039)rt_nil_check(F->y_2115)).ro_flag = 1;
f_define_168(F->y_2115, (*(P1029)rt_nil_check(F->s_629)).line);
f_gen_body_597((*(P1029)rt_nil_check(F->s_629)).b);
(*(P1029)rt_nil_check(F->iv_2118)).name = (*(P1029)rt_nil_check(F->s_629)).name;
if (((*(P1029)rt_nil_check(F->s_629)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1022)rt_nil_check(F->uv_2121))->all)), rt_str(" == ", 4)), F->lo_2126), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(&F->access_2120, F->t_630, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_951(f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRED", 4); b_; }), F->iv_2118, (*(P1029)rt_nil_check(F->s_629)).line), 0, &F->st_2119); b_; }), F->c_631); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1022)rt_nil_check(F->uv_2121))->all)), rt_str(" == ", 4)), F->hi_2127), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(&F->access_2120, F->t_630, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_951(f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUCC", 4); b_; }), F->iv_2118, (*(P1029)rt_nil_check(F->s_629)).line), 0, &F->st_2119); b_; }), F->c_631); b_; }));
}
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} }", 3); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_634(P1029 s_633) {
  struct f_st_repeat_634fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_633 = s_633;
F->t_2128 = NULL;
F->c_2129 = NULL;
if (((*(P1029)rt_nil_check(F->s_633)).flag == ((rt_int)0LL))) {
F->cond_2130 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->s_633)).a, g_ty_bool_1115, &F->t_2128));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_2130), rt_str(") {", 3)); b_; }));
f_gen_body_597((*(P1029)rt_nil_check(F->s_633)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_2128 = f_resolve_subtype_268((*(P1029)rt_nil_check(F->s_633)).a, &F->c_2129);
if ((((*(P1035)rt_nil_check(F->t_2128)).kind == (((rt_int)15LL))) && (((*(P1035)rt_nil_check(F->t_2128)).tparams != NULL) || (!f_scalar_kind_186(f_base_of_223(F->t_2128)))))) {
f_user_for_632(F->s_633, F->t_2128, F->c_2129);
goto ret_;
}
F->c_2129 = f_base_cons_226(F->t_2128, F->c_2129);
if ((((*(P1035)rt_nil_check(f_base_of_223(F->t_2128))).kind == (((rt_int)4LL))) && ((*(P1031)rt_nil_check(F->c_2129)).lo == NULL))) {
F->c_2129 = f_new_cons_184();
(*(P1031)rt_nil_check(F->c_2129)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P1031)rt_nil_check(F->c_2129)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_71((*(P1035)rt_nil_check(f_base_of_223(F->t_2128))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P1031)rt_nil_check(F->c_2129)).lo == NULL)) {
f_fail_23((*(P1029)rt_nil_check(F->s_633)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_2131 = rt_str_copy(f_storage_519(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->s_633)).name))->all), F->t_2128));
F->lov_2132 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_2133 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_2134 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_2135 = NULL;
F->y_2135 = f_new_sym_181((((rt_int)2LL)), (*(P1029)rt_nil_check(F->s_633)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_2132), rt_str(" = ", 3)), f_clo_193(F->c_2129)), rt_str(", ", 2)), F->hiv_2133), rt_str(" = ", 3)), f_chi_195(F->c_2129)), rt_str(";", 1)); b_; }));
if (((*(P1029)rt_nil_check(F->s_633)).ival == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_2134), rt_str(" = ", 3)), F->hiv_2133), rt_str("; ", 2)), F->it_2134), rt_str(" >= ", 4)), F->lov_2132), rt_str("; ", 2)), F->it_2134), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_2134), rt_str(" = ", 3)), F->lov_2132), rt_str("; ", 2)), F->it_2134), rt_str(" <= ", 4)), F->hiv_2133), rt_str("; ", 2)), F->it_2134), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_2131, rt_str(" = ", 3)), F->it_2134), rt_str(";", 1)); b_; }));
f_open_scope_177();
(*(P1039)rt_nil_check(F->y_2135)).t = F->t_2128;
(*(P1039)rt_nil_check(F->y_2135)).c = F->c_2129;
f_bind_522(F->y_2135, &F->access_2131);
(*(P1039)rt_nil_check(F->y_2135)).ro_flag = 1;
f_define_168(F->y_2135, (*(P1029)rt_nil_check(F->s_633)).line);
f_gen_body_597((*(P1029)rt_nil_check(F->s_633)).b);
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_636(P1029 s_635) {
  struct f_st_exit_636fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_635 = s_635;
F->x_2136 = NULL;
F->x_2136 = g_exits_1107;
while ((F->x_2136 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1054)rt_nil_check(F->x_2136)).match))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->s_635)).name))->all))) {
f_pop_frames_603((*(P1054)rt_nil_check(F->x_2136)).depth);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P1022)rt_nil_check((*(P1054)rt_nil_check(F->x_2136)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_2136 = (*(P1054)rt_nil_check(F->x_2136)).next;
}
f_fail_23((*(P1029)rt_nil_check(F->s_635)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->s_635)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_638(P1029 s_637) {
  struct f_st_return_638fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_637 = s_637;
F->vt_2137 = NULL;
if ((g_cap_ret_1099 != NULL)) {
if (((*(P1029)rt_nil_check(F->s_637)).a != NULL)) {
f_fail_23((*(P1029)rt_nil_check(F->s_637)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_603(g_ret_frames_1101);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(g_cap_rflag_1100))->all), rt_str(" = 1; goto ", 11)), (((P1022)rt_nil_check(g_cap_ret_1099))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!g_in_func_1085)) {
f_pop_frames_603(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if (((*(P1035)rt_nil_check((*(P1039)rt_nil_check(g_func_sym_1097)).result)).kind == (((rt_int)9LL)))) {
if (((*(P1029)rt_nil_check(F->s_637)).a != NULL)) {
f_fail_23((*(P1029)rt_nil_check(F->s_637)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_603(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P1029)rt_nil_check(F->s_637)).a == NULL)) {
f_fail_23((*(P1029)rt_nil_check(F->s_637)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_2138 = rt_str_copy(f_gexpr_in_811((*(P1029)rt_nil_check(F->s_637)).a, (*(P1039)rt_nil_check(g_func_sym_1097)).result, g_func_rc_1098, &F->vt_2137));
f_check_type_232(F->vt_2137, (*(P1039)rt_nil_check(g_func_sym_1097)).result, (*(P1029)rt_nil_check(F->s_637)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_642((*(P1039)rt_nil_check(g_func_sym_1097)).result, g_func_rc_1098, &F->v_2138)), rt_str(";", 1)); b_; }));
f_pop_frames_603(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_642(P1035 t_639, P1031 c_640, rstr *v_641) {
  struct f_result_checked_642fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_639 = t_639;
F->c_640 = c_640;
F->v_641 = v_641;
if ((F->c_640 == NULL)) {
F->result_ = (*F->v_641);
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->t_639)).kind == (((rt_int)5LL))) && ((*(P1031)rt_nil_check(F->c_640)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_641)), rt_str(", ", 2)), (((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_640)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->t_639)).kind == (((rt_int)6LL))) && ((*(P1031)rt_nil_check(F->c_640)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->t_639)), rt_str(" r_ = ", 6)), (*F->v_641)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_640)).lo))->all)), rt_str(", ", 2)), (((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_640)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
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
F->y_2139 = NULL;
F->y_2139 = f_lookup_163(&(*F->name_643));
if (((F->y_2139 != NULL) && ((*(P1039)rt_nil_check(F->y_2139)).kind == (((rt_int)7LL))))) {
F->result_ = (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_2139)).cname))->all);
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

static void f_st_guard_647(P1029 s_646) {
  struct f_st_guard_647fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_646 = s_646;
F->h_2140 = NULL;
F->h_2140 = (*(P1029)rt_nil_check(F->s_646)).b;
F->first_2141 = 1;
F->hv_2142 = NULL;
{
F->f_2143 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_2144 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_605(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2143), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_2143), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2143), rt_str(")) {", 4)); b_; }));
f_gen_body_597((*(P1029)rt_nil_check(F->s_646)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2143), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_606();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2143), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_2144), rt_str(" = rt_xcur;", 11)); b_; }));
{ R1034 *cell2145 = rt_alloc(sizeof(R1034));
(*cell2145).s = NULL;
(*cell2145).next = NULL;
F->hv_2142 = cell2145;
}
(*(P1033)rt_nil_check(F->hv_2142)).s = f_mk_3(&F->x_2144);
(*(P1033)rt_nil_check(F->hv_2142)).next = g_handlers_1110;
g_handlers_1110 = F->hv_2142;
{
F->h1_2146 = NULL;
F->h1_2146 = (*(P1029)rt_nil_check(F->s_646)).b;
F->seen_2147 = NULL;
while ((F->h1_2146 != NULL)) {
F->n1_2148 = NULL;
F->n1_2148 = (*(P1029)rt_nil_check(F->h1_2146)).a;
while ((F->n1_2148 != NULL)) {
if (f_seen_name_425(F->seen_2147, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->n1_2148)).name))->all))) {
f_fail_23((*(P1029)rt_nil_check(F->n1_2148)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->n1_2148)).name))->all), rt_str(" has two handlers in one guard statement", 40)); b_; }));
}
F->seen_2147 = f_add_line_901(F->seen_2147, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->n1_2148)).name))->all));
F->n1_2148 = (*(P1029)rt_nil_check(F->n1_2148)).next;
}
F->h1_2146 = (*(P1029)rt_nil_check(F->h1_2146)).next;
}
}
while ((F->h_2140 != NULL)) {
F->n_2149 = NULL;
F->n_2149 = (*(P1029)rt_nil_check(F->h_2140)).a;
F->conds_2150 = NULL;
F->conds_2150 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_2149 != NULL)) {
F->conds_2150 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->conds_2150))->all), rt_str(" || ", 4)), F->x_2144), rt_str(" == ", 4)), f_exc_id_645(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->n_2149)).name))->all), (*(P1029)rt_nil_check(F->s_646)).line)); b_; }));
F->n_2149 = (*(P1029)rt_nil_check(F->n_2149)).next;
}
if (F->first_2141) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1022)rt_nil_check(F->conds_2150))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1022)rt_nil_check(F->conds_2150))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2141 = 0;
f_gen_body_597((*(P1029)rt_nil_check(F->h_2140)).b);
F->h_2140 = (*(P1029)rt_nil_check(F->h_2140)).next;
}
if (F->first_2141) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if (((*(P1029)rt_nil_check(F->s_646)).flag == ((rt_int)1LL))) {
f_gen_body_597((*(P1029)rt_nil_check(F->s_646)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_2144), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_1110 = (*(P1033)rt_nil_check(g_handlers_1110)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_649(P1029 s_648) {
  struct f_st_alloc_649fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_648 = s_648;
F->lv_2151 = NULL;
F->t_2152 = NULL;
F->target_2153 = NULL;
F->vt_2154 = NULL;
F->c_2155 = NULL;
F->tc_2156 = NULL;
F->d_2158 = NULL;
F->p_2159 = NULL;
F->a_2160 = NULL;
f_lvalue_769((*(P1029)rt_nil_check(F->s_648)).a, &F->lv_2151, &F->t_2152, &F->c_2155, &F->ro_2157);
if (((*(P1035)rt_nil_check(F->t_2152)).kind != (((rt_int)8LL)))) {
f_fail_23((*(P1029)rt_nil_check(F->s_648)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_475(F->t_2152);
F->d_2158 = (*(P1035)rt_nil_check(F->t_2152)).decl;
F->target_2153 = (*(P1035)rt_nil_check(F->t_2152)).target;
if ((f_list_len_71((*(P1029)rt_nil_check(F->s_648)).b) != f_list_len_71((*(P1029)rt_nil_check(F->d_2158)).b))) {
f_fail_23((*(P1029)rt_nil_check(F->s_648)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_71((*(P1029)rt_nil_check(F->d_2158)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P1029)rt_nil_check(F->d_2158)).b != NULL)) {
f_alloc_cell_487(F->s_648, &(((P1022)rt_nil_check(F->lv_2151))->all), F->t_2152, F->c_2155);
goto ret_;
}
{
F->tcn_2161 = rt_str_copy(f_ctype_234(F->target_2153));
F->cell_2162 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_346(F->target_2153)) {
F->fn_2163 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_1094 = 1;
g_uses_findyn_1096 = 1;
f_put_27(g_out_protos_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_2163), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_2163), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (g_in_func_1085) {
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1022)rt_nil_check((*(P1039)rt_nil_check(g_func_sym_1097)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_2161), rt_str(" *)cell_)", 9)); b_; }), F->target_2153)); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (g_in_func_1085) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_2161), rt_str(" *", 2)), F->cell_2162), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_2161), rt_str("), ", 3)), F->fn_2163), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_2161), rt_str(" *", 2)), F->cell_2162), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_2161), rt_str("), ", 3)), F->fn_2163), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_2161), rt_str(" *", 2)), F->cell_2162), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_2161), rt_str("));", 3)); b_; }));
}
f_open_scope_177();
f_bind_ptr_params_482((*(P1029)rt_nil_check(F->d_2158)).d, f_ptr_args_477(F->c_2155), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), (*(P1029)rt_nil_check(F->s_648)).line);
F->vt_2154 = f_resolve_subtype_268((*(P1029)rt_nil_check(F->d_2158)).a, &F->tc_2156);
g_mark_uninit_1105 = (!f_suppressed_512(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; })));
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_2162), rt_str(")", 1)); b_; }), F->target_2153, F->tc_2156);
g_mark_uninit_1105 = 0;
f_close_scope_178();
if (((*(P1029)rt_nil_check(F->s_648)).c != NULL)) {
F->v_2164 = rt_str_copy(f_gexpr_in_811((*(P1029)rt_nil_check(F->s_648)).c, F->target_2153, F->tc_2156, &F->vt_2154));
f_check_type_232(F->vt_2154, F->target_2153, (*(P1029)rt_nil_check(F->s_648)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_2162), rt_str(")", 1)); b_; }), F->target_2153, &F->v_2164, F->tc_2156); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->lv_2151))->all), rt_str(" = ", 3)), F->cell_2162), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_651(P1029 e_650) {
  struct f_act_ref_651fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_650 = e_650;
F->lv_2165 = NULL;
F->t_2166 = NULL;
F->c_2167 = NULL;
if (((((*(P1029)rt_nil_check(F->e_650)).kind == (((rt_int)7LL))) && rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_650)).name))->all), rt_str("ME", 2))) && (f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_763(F->e_650))) {
F->v_2169 = rt_str_copy(f_gexpr_800(F->e_650, g_ty_act_1124, &F->t_2166));
if (((*(P1035)rt_nil_check(F->t_2166)).kind != (((rt_int)14LL)))) {
f_fail_23((*(P1029)rt_nil_check(F->e_650)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_2169;
goto ret_;
}
f_lvalue_769(F->e_650, &F->lv_2165, &F->t_2166, &F->c_2167, &F->ro_2168);
if (((*(P1035)rt_nil_check(F->t_2166)).kind != (((rt_int)14LL)))) {
f_fail_23((*(P1029)rt_nil_check(F->e_650)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P1022)rt_nil_check(F->lv_2165))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_653(P1029 s_652) {
  struct f_st_create_653fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_652 = s_652;
F->y_2170 = NULL;
F->y_2170 = f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->s_652)).name))->all));
F->pm_2171 = NULL;
F->a_2172 = NULL;
F->a_2172 = (*(P1029)rt_nil_check(F->s_652)).b;
F->lv_2173 = NULL;
F->lt_2174 = NULL;
F->vt_2175 = NULL;
F->lc_2176 = NULL;
if (((F->y_2170 != NULL) && ((*(P1039)rt_nil_check(F->y_2170)).kind == (((rt_int)10LL))))) {
F->y_2170 = f_instantiate_745(F->y_2170, (*(P1029)rt_nil_check(F->s_652)).e, (*(P1029)rt_nil_check(F->s_652)).b, (*(P1029)rt_nil_check(F->s_652)).line);
}
if (((F->y_2170 == NULL) || ((*(P1039)rt_nil_check(F->y_2170)).kind != (((rt_int)9LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->s_652)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->s_652)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_2171 = (*(P1039)rt_nil_check(F->y_2170)).params;
{
F->at_2178 = NULL;
F->ac_2179 = NULL;
F->act_2181 = NULL;
F->nf_2182 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_769((*(P1029)rt_nil_check(F->s_652)).a, &F->lv_2173, &F->at_2178, &F->ac_2179, &F->aro_2180);
if (((*(P1035)rt_nil_check(F->at_2178)).kind == (((rt_int)14LL)))) {
F->act_2181 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_651((*(P1029)rt_nil_check(F->s_652)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_2170)).cname))->all)), rt_str("fr *", 4)), F->nf_2182), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_2182), rt_str(");", 2)); b_; }));
if (((*(P1039)rt_nil_check(F->y_2170)).level > ((rt_int)0LL))) {
F->link_2183 = NULL;
F->link_2183 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2185 = ((rt_int)1LL), hi2186 = rt_sub(g_cur_level_1086, (*(P1039)rt_nil_check(F->y_2170)).level);
for (rt_int it2187 = lo2185; it2187 <= hi2186; it2187++) {
F->i_2184 = it2187;
F->link_2183 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->link_2183))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2182, rt_str("->up = ", 7)), (((P1022)rt_nil_check(F->link_2183))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_2172 != NULL) && (F->pm_2171 != NULL))) {
if (((*(P1041)rt_nil_check(F->pm_2171)).mode == (((rt_int)1LL)))) {
F->v_2188 = rt_str_copy(f_gexpr_in_811(F->a_2172, (*(P1041)rt_nil_check(F->pm_2171)).t, (*(P1041)rt_nil_check(F->pm_2171)).c, &F->vt_2175));
f_check_type_232(F->vt_2175, (*(P1041)rt_nil_check(F->pm_2171)).t, (*(P1029)rt_nil_check(F->s_652)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2182, rt_str("->", 2)), (((P1022)rt_nil_check((*(P1041)rt_nil_check(F->pm_2171)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_414((*(P1041)rt_nil_check(F->pm_2171)).t, &F->v_2188)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_769(F->a_2172, &F->lv_2173, &F->lt_2174, &F->lc_2176, &F->ro_2177);
f_check_type_232(F->lt_2174, (*(P1041)rt_nil_check(F->pm_2171)).t, (*(P1029)rt_nil_check(F->s_652)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2182, rt_str("->", 2)), (((P1022)rt_nil_check((*(P1041)rt_nil_check(F->pm_2171)).cfield))->all)), rt_str(" = &", 4)), (((P1022)rt_nil_check(F->lv_2173))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_186((*(P1041)rt_nil_check(F->pm_2171)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2182, rt_str("->", 2)), (((P1022)rt_nil_check((*(P1041)rt_nil_check(F->pm_2171)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_198(F->lt_2174, F->lc_2176)), rt_str("; ", 2)), F->nf_2182), rt_str("->", 2)), (((P1022)rt_nil_check((*(P1041)rt_nil_check(F->pm_2171)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_201(F->lt_2174, F->lc_2176)), rt_str(";", 1)); b_; }));
}
}
F->a_2172 = (*(P1029)rt_nil_check(F->a_2172)).next;
F->pm_2171 = (*(P1041)rt_nil_check(F->pm_2171)).next;
}
if (((F->a_2172 != NULL) || (F->pm_2171 != NULL))) {
f_fail_23((*(P1029)rt_nil_check(F->s_652)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->s_652)).name))->all)); b_; }));
}
if ((F->act_2181 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P1022)rt_nil_check(F->act_2181))->all)), rt_str(", &", 3)), (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_2170)).cname))->all)), rt_str("decl, ", 6)), (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_2170)).cname))->all)), rt_str(", ", 2)), F->nf_2182), rt_str("); }", 4)); b_; }));
} else {
f_user_create_663(F->s_652, F->y_2170, &(((P1022)rt_nil_check(F->lv_2173))->all), F->at_2178, &F->nf_2182);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_657(rstr *name_654, P1035 t_655, rstr *place_656) {
  struct f_hidden_var_657fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_654 = name_654;
F->t_655 = t_655;
F->place_656 = place_656;
F->y_2189 = NULL;
F->y_2189 = f_new_sym_181((((rt_int)1LL)), f_mk_3(&(*F->name_654)));
(*(P1039)rt_nil_check(F->y_2189)).t = F->t_655;
(*(P1039)rt_nil_check(F->y_2189)).level = ((rt_int)0LL);
(*(P1039)rt_nil_check(F->y_2189)).access = f_mk_3(&(*F->place_656));
f_define_168(F->y_2189, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_663(P1029 s_658, P1039 y_659, rstr *uv_660, P1035 ut_661, rstr *nf_662) {
  struct f_user_create_663fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_658 = s_658;
F->y_659 = y_659;
F->uv_660 = uv_660;
F->ut_661 = ut_661;
F->nf_662 = nf_662;
F->t_2190 = NULL;
F->saved_2191 = NULL;
F->saved_2191 = g_code_1083;
F->hook_2192 = NULL;
F->hook_2192 = f_new_buffer_24();
F->un_2193 = NULL;
F->un_2193 = f_nn_65((((rt_int)7LL)), (*(P1029)rt_nil_check(F->s_658)).line);
F->hn_2194 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_2195 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_2196 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_2197 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_177();
f_hidden_var_657(&F->uname_2196, F->ut_661, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->ut_661)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P1029)rt_nil_check(F->un_2193)).name = f_mk_3(&F->uname_2196);
g_code_1083 = F->hook_2192;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_951(f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_2193, (*(P1029)rt_nil_check(F->s_658)).line), 1, &F->t_2190)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_951(f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_2193, (*(P1029)rt_nil_check(F->s_658)).line), 1, &F->t_2190)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_951(f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_2193, (*(P1029)rt_nil_check(F->s_658)).line), 1, &F->t_2190)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_951(f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_2193, (*(P1029)rt_nil_check(F->s_658)).line), 1, &F->t_2190)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_1083 = F->saved_2191;
f_put_27(g_out_protos_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_2194), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_2194), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (g_in_func_1085) {
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1022)rt_nil_check((*(P1039)rt_nil_check(g_func_sym_1097)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_1080, F->hook_2192);
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_2195), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_2195, rt_str("->hook = ", 9)), F->hn_2194), rt_str("; ", 2)), F->aa_2195), rt_str("->ua = &", 8)), (*F->uv_660)), rt_str("; ", 2)), F->aa_2195), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_941(F->ut_661)), f_q_18()), rt_str(";", 1)); b_; }));
if (g_in_func_1085) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_2195, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_2195), rt_str(", &", 3)), (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_659)).cname))->all)), rt_str("decl, ", 6)), (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_659)).cname))->all)), rt_str(", ", 2)), (*F->nf_662)), rt_str(");", 2)); b_; }));
f_hidden_var_657(&F->aname_2197, g_ty_act_1124, &F->aa_2195);
{
F->start_2198 = NULL;
F->start_2198 = f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P1029)rt_nil_check(F->s_658)).a, (*(P1029)rt_nil_check(F->s_658)).line);
F->an_2199 = NULL;
F->an_2199 = f_nn_65((((rt_int)7LL)), (*(P1029)rt_nil_check(F->s_658)).line);
(*(P1029)rt_nil_check(F->an_2199)).name = f_mk_3(&F->aname_2197);
(*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->start_2198)).b)).next = F->an_2199;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_951(F->start_2198, 1, &F->t_2190), rt_str(";", 1)); b_; }));
}
f_close_scope_178();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_668(P1029 inv_664, rstr *arr_665, rt_int i_666, int mixed_667) {
  struct f_wait_alt_668fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_664 = inv_664;
F->arr_665 = arr_665;
F->i_666 = i_666;
F->mixed_667 = mixed_667;
F->lv_2200 = NULL;
F->t_2201 = NULL;
F->vt_2202 = NULL;
F->c_2203 = NULL;
F->fn_2205 = NULL;
F->args_2206 = NULL;
F->slot_2207 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_665), rt_str("[", 1)), f_itos_7(F->i_666)), rt_str("]", 1)));
if ((((*(P1029)rt_nil_check(F->inv_664)).kind != (((rt_int)10LL))) || ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->inv_664)).a)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->inv_664)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_2205 = (*(P1029)rt_nil_check(F->inv_664)).a;
F->args_2206 = (*(P1029)rt_nil_check(F->inv_664)).b;
if ((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2205)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2205)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_769(F->args_2206, &F->lv_2200, &F->t_2201, &F->c_2203, &F->ro_2204);
if (((*(P1035)rt_nil_check(F->t_2201)).kind != (((rt_int)12LL)))) {
f_fail_23((*(P1029)rt_nil_check(F->inv_664)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2205)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_2208 = NULL;
F->dt_2209 = NULL;
f_lvalue_769((*(P1029)rt_nil_check(F->args_2206)).next, &F->dv_2208, &F->dt_2209, &F->c_2203, &F->ro_2204);
f_check_type_232(F->dt_2209, (*(P1035)rt_nil_check(F->t_2201)).elem, (*(P1029)rt_nil_check(F->inv_664)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2207, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P1022)rt_nil_check(F->lv_2200))->all)), rt_str(", &", 3)), (((P1022)rt_nil_check(F->dv_2208))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_2210 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_2211 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->args_2206)).next, (*(P1035)rt_nil_check(F->t_2201)).elem, &F->vt_2202));
f_check_type_232(F->vt_2202, (*(P1035)rt_nil_check(F->t_2201)).elem, (*(P1029)rt_nil_check(F->inv_664)).line);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1035)rt_nil_check(F->t_2201)).elem), rt_str(" ", 1)), F->tmp_2210), rt_str(" = ", 3)), F->v_2211), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2207, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P1022)rt_nil_check(F->lv_2200))->all)), rt_str(", &", 3)), F->tmp_2210), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2205)).name))->all), rt_str("DELAY_UNTIL", 11)) && (f_list_len_71(F->args_2206) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2207, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_r_act_deadline(", 65)), f_act_delay_args_967(F->args_2206)), rt_str(")};", 3));
goto ret_;
} else if ((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2205)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2205)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_2212 = rt_str_copy(f_gexpr_800(F->args_2206, g_ty_int_1114, &F->vt_2202));
if ((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2205)).name))->all), rt_str("DELAY", 5)) && F->mixed_667)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2207, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_2212), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2205)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2207, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_2212), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2207, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_2212), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2205)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2207, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_651(F->args_2206)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23((*(P1029)rt_nil_check(F->inv_664)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2205)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_670(P1029 inv_669) {
  struct f_builtin_wait_670fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_669 = inv_669;
F->lv_2213 = NULL;
F->t_2214 = NULL;
F->c_2215 = NULL;
F->saved_2217 = NULL;
F->saved_2217 = g_code_1083;
F->ok_2218 = 0;
if ((((*(P1029)rt_nil_check(F->inv_669)).kind != (((rt_int)10LL))) || ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->inv_669)).a)).kind != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->inv_669)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->inv_669)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->inv_669)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->inv_669)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->inv_669)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_1112 = rt_add(g_trial_1112, ((rt_int)1LL));
g_code_1083 = f_new_buffer_24();
{ rt_frame xf2219;
if (RT_TRY(xf2219)) {
f_lvalue_769((*(P1029)rt_nil_check(F->inv_669)).b, &F->lv_2213, &F->t_2214, &F->c_2215, &F->ro_2216);
F->ok_2218 = ((*(P1035)rt_nil_check(F->t_2214)).kind == (((rt_int)12LL)));
RT_POP(xf2219);
} else {
RT_POP(xf2219);
int x2220 = rt_xcur;
if (0 || x2220 == ex_compile_error_1) {
F->ok_2218 = 0;
} else {
rt_raise(x2220);
}
}
}
g_trial_1112 = rt_sub(g_trial_1112, ((rt_int)1LL));
g_code_1083 = F->saved_2217;
F->result_ = F->ok_2218;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_675(P1029 inv_671, rstr *op_672, rstr *q_673, int is_stmt_674) {
  struct f_wait_op_675fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_671 = inv_671;
F->op_672 = op_672;
F->q_673 = q_673;
F->is_stmt_674 = is_stmt_674;
F->x_2221 = NULL;
F->x_2221 = f_nn_65((((rt_int)10LL)), (*(P1029)rt_nil_check(F->inv_671)).line);
F->f_2222 = NULL;
F->f_2222 = f_nn_65((((rt_int)7LL)), (*(P1029)rt_nil_check(F->inv_671)).line);
F->qn_2223 = NULL;
F->qn_2223 = f_nn_65((((rt_int)7LL)), (*(P1029)rt_nil_check(F->inv_671)).line);
F->t_2224 = NULL;
(*(P1029)rt_nil_check(F->f_2222)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->inv_671)).a)).name))->all), rt_str("_", 1)), (*F->op_672)); b_; }));
(*(P1029)rt_nil_check(F->qn_2223)).name = f_mk_3(&(*F->q_673));
(*(P1029)rt_nil_check(F->qn_2223)).next = (*(P1029)rt_nil_check(F->inv_671)).b;
(*(P1029)rt_nil_check(F->x_2221)).a = F->f_2222;
(*(P1029)rt_nil_check(F->x_2221)).b = F->qn_2223;
{
F->r_2225 = rt_str_copy(f_gcall_951(F->x_2221, F->is_stmt_674, &F->t_2224));
if ((!F->is_stmt_674)) {
f_check_type_232(F->t_2224, g_ty_bool_1115, (*(P1029)rt_nil_check(F->inv_671)).line);
}
F->result_ = F->r_2225;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_680(P1029 s_676, rstr *arr_677, rstr *w_678, rt_int n_679) {
  struct f_user_wait_680fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_676 = s_676;
F->arr_677 = arr_677;
F->w_678 = w_678;
F->n_679 = n_679;
F->a_2226 = NULL;
F->a_2226 = (*(P1029)rt_nil_check(F->s_676)).a;
F->i_2227 = ((rt_int)0LL);
F->tests_2228 = NULL;
F->tests_2228 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_2229 = NULL;
F->revokes_2229 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_177();
while ((F->a_2226 != NULL)) {
F->inv_2230 = NULL;
F->inv_2230 = (*(P1029)rt_nil_check(F->a_2226)).a;
while ((F->inv_2230 != NULL)) {
if (f_builtin_wait_670(F->inv_2230)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_668(F->inv_2230, &(*F->arr_677), F->i_2227, 1); b_; }));
} else {
F->st_2231 = NULL;
F->st_2231 = f_nn_65((((rt_int)80LL)), (*(P1029)rt_nil_check(F->inv_2230)).line);
F->c_2232 = NULL;
F->qt_2233 = NULL;
F->qname_2234 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_2235 = NULL;
F->y_2235 = f_new_sym_181((((rt_int)1LL)), f_mk_3(&F->qname_2234));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_677), rt_str("[", 1)), f_itos_7(F->i_2227)), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P1029)rt_nil_check(F->st_2231)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->inv_2230)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_2233 = f_resolve_subtype_268(F->st_2231, &F->c_2232);
{
F->access_2236 = rt_str_copy(f_storage_519(&F->qname_2234, F->qt_2233));
f_init_storage_341(&F->access_2236, F->qt_2233, F->c_2232);
(*(P1039)rt_nil_check(F->y_2235)).t = F->qt_2233;
(*(P1039)rt_nil_check(F->y_2235)).c = F->c_2232;
f_bind_522(F->y_2235, &F->access_2236);
f_define_168(F->y_2235, (*(P1029)rt_nil_check(F->inv_2230)).line);
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_675(F->inv_2230, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_2234, 1), rt_str(";", 1)); b_; }));
F->tests_2228 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->tests_2228))->all), rt_str("if (", 4)), f_wait_op_675(F->inv_2230, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_2234, 0)), rt_str(") { ", 4)), f_wait_op_675(F->inv_2230, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_2234, 1)), rt_str("; ", 2)), (*F->w_678)), rt_str(" = ", 3)), f_itos_7(F->i_2227)), rt_str("; break; } ", 11)); b_; }));
F->revokes_2229 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->revokes_2229))->all), f_wait_op_675(F->inv_2230, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_2234, 1)), rt_str("; ", 2)); b_; }));
}
F->i_2227 = rt_add(F->i_2227, ((rt_int)1LL));
F->inv_2230 = (*(P1029)rt_nil_check(F->inv_2230)).next;
}
F->a_2226 = (*(P1029)rt_nil_check(F->a_2226)).next;
}
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_678)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P1022)rt_nil_check(F->tests_2228))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_678), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_679)), rt_str(", ", 2)), (*F->arr_677)), rt_str("); if (", 7)), (*F->w_678)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_679)), rt_str(", ", 2)), (*F->arr_677)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_678)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_678)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P1022)rt_nil_check(F->revokes_2229))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_682(P1029 s_681) {
  struct f_st_wait_682fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_681 = s_681;
F->a_2237 = NULL;
F->a_2237 = (*(P1029)rt_nil_check(F->s_681)).a;
F->n_2238 = ((rt_int)0LL);
F->first_2239 = 1;
F->inits_2240 = NULL;
F->inits_2240 = f_new_buffer_24();
F->user_2241 = 0;
F->arr_2242 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_2243 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_2237 != NULL)) {
F->inv_2244 = NULL;
F->inv_2244 = (*(P1029)rt_nil_check(F->a_2237)).a;
F->n_2238 = rt_add(F->n_2238, f_list_len_71((*(P1029)rt_nil_check(F->a_2237)).a));
while ((F->inv_2244 != NULL)) {
if ((!f_builtin_wait_670(F->inv_2244))) {
F->user_2241 = 1;
}
F->inv_2244 = (*(P1029)rt_nil_check(F->inv_2244)).next;
}
F->a_2237 = (*(P1029)rt_nil_check(F->a_2237)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_2242), rt_str("[", 1)), f_itos_7(F->n_2238)), rt_str("];", 2)); b_; }));
if (F->user_2241) {
f_user_wait_680(F->s_681, &F->arr_2242, &F->w_2243, F->n_2238);
} else {
F->a_2237 = (*(P1029)rt_nil_check(F->s_681)).a;
F->n_2238 = ((rt_int)0LL);
while ((F->a_2237 != NULL)) {
F->inv_2245 = NULL;
F->inv_2245 = (*(P1029)rt_nil_check(F->a_2237)).a;
while ((F->inv_2245 != NULL)) {
f_put_27(F->inits_2240, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_668(F->inv_2245, &F->arr_2242, F->n_2238, 0); b_; }));
F->n_2238 = rt_add(F->n_2238, ((rt_int)1LL));
F->inv_2245 = (*(P1029)rt_nil_check(F->inv_2245)).next;
}
F->a_2237 = (*(P1029)rt_nil_check(F->a_2237)).next;
}
f_splice_34(g_code_1083, F->inits_2240);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_2243), rt_str(" = rt_wait(", 11)), f_itos_7(F->n_2238)), rt_str(", ", 2)), F->arr_2242), rt_str(");", 2)); b_; }));
}
F->a_2237 = (*(P1029)rt_nil_check(F->s_681)).a;
F->n_2238 = ((rt_int)0LL);
while ((F->a_2237 != NULL)) {
F->conds_2246 = NULL;
F->conds_2246 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo2248 = ((rt_int)1LL), hi2249 = f_list_len_71((*(P1029)rt_nil_check(F->a_2237)).a);
for (rt_int it2250 = lo2248; it2250 <= hi2249; it2250++) {
F->i_2247 = it2250;
F->conds_2246 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->conds_2246))->all), rt_str(" || ", 4)), F->w_2243), rt_str(" == ", 4)), f_itos_7(F->n_2238)); b_; }));
F->n_2238 = rt_add(F->n_2238, ((rt_int)1LL));
}
}
if (F->first_2239) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1022)rt_nil_check(F->conds_2246))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1022)rt_nil_check(F->conds_2246))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2239 = 0;
f_gen_body_597((*(P1029)rt_nil_check(F->a_2237)).b);
F->a_2237 = (*(P1029)rt_nil_check(F->a_2237)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1029 f_call_node_686(rstr *name_683, P1029 arg_684, rt_int line_685) {
  struct f_call_node_686fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_683 = name_683;
F->arg_684 = arg_684;
F->line_685 = line_685;
F->x_2251 = NULL;
F->x_2251 = f_nn_65((((rt_int)10LL)), F->line_685);
F->f_2252 = NULL;
F->f_2252 = f_nn_65((((rt_int)7LL)), F->line_685);
(*(P1029)rt_nil_check(F->f_2252)).name = f_mk_3(&(*F->name_683));
(*(P1029)rt_nil_check(F->x_2251)).a = F->f_2252;
(*(P1029)rt_nil_check(F->x_2251)).b = f_copy_node_842(F->arg_684);
(*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->x_2251)).b)).next = NULL;
F->result_ = F->x_2251;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_688(P1029 s_687) {
  struct f_user_region_688fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_687 = s_687;
F->t_2253 = NULL;
F->f_2254 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_2255 = rt_str_copy(f_gcall_951(f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P1029)rt_nil_check(F->s_687)).a, (*(P1029)rt_nil_check(F->s_687)).line), 1, &F->t_2253));
F->unlock_2256 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_951(f_call_node_686(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P1029)rt_nil_check(F->s_687)).a, (*(P1029)rt_nil_check(F->s_687)).line), 1, &F->t_2253)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_2255), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2254), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2254), rt_str(")) {", 4)); b_; }));
f_push_cleanup_605(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2254), rt_str("); ", 3)), F->unlock_2256); b_; }));
f_gen_body_597((*(P1029)rt_nil_check(F->s_687)).b);
f_pop_cleanup_606();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2254), rt_str("); ", 3)), F->unlock_2256); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2254), rt_str("); ", 3)), F->unlock_2256), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_690(P1029 s_689) {
  struct f_st_region_690fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_689 = s_689;
F->lv_2257 = NULL;
F->t_2258 = NULL;
F->c_2259 = NULL;
F->lk_2261 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_2262 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_769((*(P1029)rt_nil_check(F->s_689)).a, &F->lv_2257, &F->t_2258, &F->c_2259, &F->ro_2260);
if (((*(P1035)rt_nil_check(F->t_2258)).kind != (((rt_int)13LL)))) {
f_user_region_688(F->s_689);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_2261), rt_str(" = &", 4)), (((P1022)rt_nil_check(F->lv_2257))->all)), rt_str("; rt_region_enter(", 18)), F->lk_2261), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2262), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2262), rt_str(")) {", 4)); b_; }));
f_push_cleanup_605(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2262), rt_str("); rt_region_leave(", 19)), F->lk_2261), rt_str(");", 2)); b_; }));
f_gen_body_597((*(P1029)rt_nil_check(F->s_689)).b);
f_pop_cleanup_606();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2262), rt_str("); rt_region_leave(", 19)), F->lk_2261), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2262), rt_str("); rt_region_leave(", 19)), F->lk_2261), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1029 f_gparam_693(P1029 g_691, rstr *name_692) {
  struct f_gparam_693fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_691 = g_691;
F->name_692 = name_692;
F->p_2263 = NULL;
F->p_2263 = (*(P1029)rt_nil_check(F->g_691)).a;
while ((F->p_2263 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2263)).name))->all), (*F->name_692))) {
F->result_ = F->p_2263;
goto ret_;
}
F->p_2263 = (*(P1029)rt_nil_check(F->p_2263)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1039 f_bind_sym_695(P1029 p_694) {
  struct f_bind_sym_695fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_694 = p_694;
F->y_2264 = NULL;
if (((*(P1029)rt_nil_check(F->p_694)).ival <= ((rt_int)2LL))) {
F->y_2264 = f_new_sym_181((((rt_int)5LL)), (*(P1029)rt_nil_check(F->p_694)).name);
} else {
F->y_2264 = f_new_sym_181((((rt_int)2LL)), (*(P1029)rt_nil_check(F->p_694)).name);
}
F->result_ = F->y_2264;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_698(P1039 a_696, P1039 b_697) {
  struct f_same_binds_698fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_696 = a_696;
F->b_697 = b_697;
F->x_2265 = NULL;
F->x_2265 = F->a_696;
F->y_2266 = NULL;
F->y_2266 = F->b_697;
while (((F->x_2265 != NULL) && (F->y_2266 != NULL))) {
if (((!rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->x_2265)).name))->all), (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_2266)).name))->all))) || (!f_same_binding_701(F->x_2265, F->y_2266)))) {
F->result_ = 0;
goto ret_;
}
F->x_2265 = (*(P1039)rt_nil_check(F->x_2265)).mnext;
F->y_2266 = (*(P1039)rt_nil_check(F->y_2266)).mnext;
}
F->result_ = ((F->x_2265 == NULL) && (F->y_2266 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_701(P1039 a_699, P1039 b_700) {
  struct f_same_binding_701fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_699 = a_699;
F->b_700 = b_700;
if (((*(P1039)rt_nil_check(F->a_699)).kind == (((rt_int)5LL)))) {
F->result_ = (((*(P1039)rt_nil_check(F->b_700)).kind == (((rt_int)5LL))) && f_same_221((*(P1039)rt_nil_check(F->a_699)).t, (*(P1039)rt_nil_check(F->b_700)).t));
goto ret_;
}
if ((((*(P1039)rt_nil_check(F->a_699)).kind == (((rt_int)2LL))) && (*(P1039)rt_nil_check(F->a_699)).hasmv)) {
F->result_ = ((*(P1039)rt_nil_check(F->b_700)).hasmv && ((*(P1039)rt_nil_check(F->a_699)).mvalue == (*(P1039)rt_nil_check(F->b_700)).mvalue));
goto ret_;
}
if ((((*(P1039)rt_nil_check(F->a_699)).kind == (((rt_int)2LL))) && ((*(P1039)rt_nil_check(F->a_699)).mv != NULL))) {
if (((((*(P1039)rt_nil_check(F->b_700)).mv == NULL) || ((*(P1048)rt_nil_check((*(P1039)rt_nil_check(F->a_699)).mv)).kind != (*(P1048)rt_nil_check((*(P1039)rt_nil_check(F->b_700)).mv)).kind)) || (!f_same_221((*(P1039)rt_nil_check(F->a_699)).t, (*(P1039)rt_nil_check(F->b_700)).t)))) {
F->result_ = 0;
goto ret_;
} else if (((*(P1048)rt_nil_check((*(P1039)rt_nil_check(F->a_699)).mv)).kind == (((rt_int)5LL)))) {
F->result_ = rt_str_eq((((P1022)rt_nil_check((*(P1048)rt_nil_check((*(P1039)rt_nil_check(F->a_699)).mv)).s))->all), (((P1022)rt_nil_check((*(P1048)rt_nil_check((*(P1039)rt_nil_check(F->b_700)).mv)).s))->all));
goto ret_;
}
F->result_ = ((*(P1048)rt_nil_check((*(P1039)rt_nil_check(F->a_699)).mv)).i == (*(P1048)rt_nil_check((*(P1039)rt_nil_check(F->b_700)).mv)).i);
goto ret_;
}
F->result_ = ((((*(P1039)rt_nil_check(F->a_699)).cname != NULL) && ((*(P1039)rt_nil_check(F->b_700)).cname != NULL)) && rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->a_699)).cname))->all), (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->b_700)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1039 f_tt_binds_706(P1029 gd_702, P1029 formals_703, P1029 actuals_704, rt_int line_705) {
  struct f_tt_binds_706fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_702 = gd_702;
F->formals_703 = formals_703;
F->actuals_704 = actuals_704;
F->line_705 = line_705;
F->f_2267 = NULL;
F->f_2267 = F->formals_703;
F->a_2268 = NULL;
F->a_2268 = F->actuals_704;
F->binds_2269 = NULL;
F->c_2270 = NULL;
F->at_2271 = NULL;
while (((F->f_2267 != NULL) && (F->a_2268 != NULL))) {
F->p_2272 = NULL;
F->p_2272 = f_gparam_693(F->gd_702, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->f_2267)).name))->all));
F->b_2273 = NULL;
if ((F->p_2272 == NULL)) {
f_fail_23(F->line_705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->f_2267)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_2273 = f_bind_sym_695(F->p_2272);
if (((*(P1029)rt_nil_check(F->p_2272)).ival <= ((rt_int)2LL))) {
if (((*(P1029)rt_nil_check(F->a_2268)).kind >= (((rt_int)70LL)))) {
(*(P1039)rt_nil_check(F->b_2273)).t = f_resolve_subtype_268(F->a_2268, &F->c_2270);
} else {
F->st_2274 = NULL;
F->st_2274 = f_nn_65((((rt_int)80LL)), F->line_705);
(*(P1029)rt_nil_check(F->st_2274)).name = (*(P1029)rt_nil_check(F->a_2268)).name;
(*(P1039)rt_nil_check(F->b_2273)).t = f_resolve_subtype_268(F->st_2274, &F->c_2270);
}
(*(P1039)rt_nil_check(F->b_2273)).c = F->c_2270;
if ((((*(P1029)rt_nil_check(F->p_2272)).b != NULL) && (!f_type_allowed_710((*(P1039)rt_nil_check(F->b_2273)).t, (*(P1029)rt_nil_check(F->p_2272)).b, F->binds_2269)))) {
f_fail_23(F->line_705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2272)).name))->all)); b_; }));
}
} else if (((*(P1029)rt_nil_check(F->p_2272)).ival <= ((rt_int)5LL))) {
if (((*(P1029)rt_nil_check(F->a_2268)).kind != (((rt_int)7LL)))) {
f_fail_23(F->line_705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2272)).name))->all)); b_; }));
}
F->b_2273 = f_copy_sym_438(f_pick_operation_721((*(P1029)rt_nil_check(F->p_2272)).ival, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->a_2268)).name))->all), (*(P1029)rt_nil_check(F->p_2272)).b, (*(P1029)rt_nil_check(F->p_2272)).a, F->binds_2269, F->line_705));
(*(P1039)rt_nil_check(F->b_2273)).name = (*(P1029)rt_nil_check(F->p_2272)).name;
} else if ((((*(P1029)rt_nil_check(F->p_2272)).ival == ((rt_int)7LL)) || ((*(P1029)rt_nil_check(F->p_2272)).ival == ((rt_int)8LL)))) {
(*(P1039)rt_nil_check(F->b_2273)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_800(F->a_2268, NULL, &F->at_2271)), rt_str(")", 1)); b_; }));
(*(P1039)rt_nil_check(F->b_2273)).t = F->at_2271;
if (((((*(P1029)rt_nil_check(F->p_2272)).ival == ((rt_int)7LL)) && ((*(P1035)rt_nil_check(F->at_2271)).kind != (((rt_int)5LL)))) || (((*(P1029)rt_nil_check(F->p_2272)).ival == ((rt_int)8LL)) && ((*(P1035)rt_nil_check(f_base_of_223(F->at_2271))).kind != (((rt_int)4LL)))))) {
f_fail_23(F->line_705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2272)).name))->all)), rt_str(" is not of the kind its constraint requires", 43)); b_; }));
}
(*(P1039)rt_nil_check(F->b_2273)).mv = f_meval_375(F->a_2268, &F->ok_2275);
if ((!F->ok_2275)) {
f_fail_23(F->line_705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2272)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
if (((*(P1048)rt_nil_check((*(P1039)rt_nil_check(F->b_2273)).mv)).kind == (((rt_int)4LL)))) {
(*(P1048)rt_nil_check((*(P1039)rt_nil_check(F->b_2273)).mv)).i = f_lit_index_265((*(P1035)rt_nil_check(f_base_of_223(F->at_2271))).lits, &(((P1022)rt_nil_check((*(P1048)rt_nil_check((*(P1039)rt_nil_check(F->b_2273)).mv)).s))->all));
}
} else {
(*(P1039)rt_nil_check(F->b_2273)).t = f_resolve_subtype_268((*(P1029)rt_nil_check(F->p_2272)).a, &F->c_2270);
(*(P1039)rt_nil_check(F->b_2273)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_checked_213((*(P1039)rt_nil_check(F->b_2273)).t, F->c_2270, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_800(F->a_2268, (*(P1039)rt_nil_check(F->b_2273)).t, &F->at_2271); b_; }))), rt_str(")", 1)); b_; }));
f_check_type_232(F->at_2271, (*(P1039)rt_nil_check(F->b_2273)).t, F->line_705);
(*(P1039)rt_nil_check(F->b_2273)).mvalue = f_manifest_366(F->a_2268, &F->ok_2276);
(*(P1039)rt_nil_check(F->b_2273)).hasmv = F->ok_2276;
(*(P1039)rt_nil_check(F->b_2273)).mv = f_meval_375(F->a_2268, &F->ok_2276);
if ((!F->ok_2276)) {
f_fail_23(F->line_705, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2272)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
}
(*(P1039)rt_nil_check(F->b_2273)).mnext = F->binds_2269;
F->binds_2269 = F->b_2273;
F->f_2267 = (*(P1029)rt_nil_check(F->f_2267)).next;
F->a_2268 = (*(P1029)rt_nil_check(F->a_2268)).next;
}
F->result_ = F->binds_2269;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_allowed_710(P1035 t_707, P1029 items_708, P1039 binds_709) {
  struct f_type_allowed_710fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_707 = t_707;
F->items_708 = items_708;
F->binds_709 = binds_709;
F->it_2277 = NULL;
F->it_2277 = F->items_708;
F->b_2278 = NULL;
F->b_2278 = f_base_of_223(F->t_707);
while ((F->it_2277 != NULL)) {
if (((((*(P1029)rt_nil_check(F->it_2277)).kind == (((rt_int)80LL))) && ((*(P1029)rt_nil_check(F->it_2277)).b == NULL)) && (f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->it_2277)).name))->all)) == NULL))) {
F->w_2279 = rt_str_copy((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->it_2277)).name))->all));
if (((((((((((rt_str_eq(F->w_2279, rt_str("INT", 3)) && ((*(P1035)rt_nil_check(F->b_2278)).kind == (((rt_int)1LL)))) || (rt_str_eq(F->w_2279, rt_str("FLOAT", 5)) && ((*(P1035)rt_nil_check(F->b_2278)).kind == (((rt_int)3LL))))) || (rt_str_eq(F->w_2279, rt_str("BOOL", 4)) && ((*(P1035)rt_nil_check(F->b_2278)).kind == (((rt_int)2LL))))) || (rt_str_eq(F->w_2279, rt_str("ENUM", 4)) && ((*(P1035)rt_nil_check(F->b_2278)).kind == (((rt_int)4LL))))) || (rt_str_eq(F->w_2279, rt_str("STRING", 6)) && ((*(P1035)rt_nil_check(F->b_2278)).kind == (((rt_int)5LL))))) || (rt_str_eq(F->w_2279, rt_str("ARRAY", 5)) && ((*(P1035)rt_nil_check(F->b_2278)).kind == (((rt_int)6LL))))) || (rt_str_eq(F->w_2279, rt_str("RECORD", 6)) && ((*(P1035)rt_nil_check(F->b_2278)).kind == (((rt_int)7LL))))) || (rt_str_eq(F->w_2279, rt_str("UNION", 5)) && ((*(P1035)rt_nil_check(F->b_2278)).kind == (((rt_int)17LL))))) || (rt_str_eq(F->w_2279, rt_str("SET", 3)) && ((*(P1035)rt_nil_check(F->b_2278)).kind == (((rt_int)16LL))))) || (rt_str_eq(F->w_2279, rt_str("ASCII", 5)) && f_same_221(F->t_707, g_ty_ascii_1117)))) {
F->result_ = 1;
goto ret_;
}
} else {
F->c_2280 = NULL;
if (f_same_221(f_resolve_in_binds_714(F->it_2277, F->binds_709, &F->c_2280), F->t_707)) {
F->result_ = 1;
goto ret_;
}
}
F->it_2277 = (*(P1029)rt_nil_check(F->it_2277)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1035 f_resolve_in_binds_714(P1029 st_711, P1039 binds_712, P1031 *c_713) {
  struct f_resolve_in_binds_714fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_711 = st_711;
F->binds_712 = binds_712;
F->c_713 = c_713;
F->c_713v = *F->c_713;
F->b_2281 = NULL;
F->b_2281 = F->binds_712;
F->t_2282 = NULL;
f_open_scope_177();
while ((F->b_2281 != NULL)) {
F->z_2283 = NULL;
F->z_2283 = f_copy_sym_438(F->b_2281);
f_define_168(F->z_2283, (*(P1029)rt_nil_check(F->st_711)).line);
F->b_2281 = (*(P1039)rt_nil_check(F->b_2281)).mnext;
}
F->t_2282 = f_resolve_subtype_268(F->st_711, &F->c_713v);
f_close_scope_178();
F->result_ = F->t_2282;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_713) = F->c_713v;
  RT_FPOP();
  return F->result_;
}

static P1039 f_pick_operation_721(rt_int kind_715, rstr *name_716, P1029 sig_717, P1029 res_718, P1039 binds_719, rt_int line_720) {
  struct f_pick_operation_721fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_715 = kind_715;
F->name_716 = name_716;
F->sig_717 = sig_717;
F->res_718 = res_718;
F->binds_719 = binds_719;
F->line_720 = line_720;
F->y_2284 = NULL;
F->c_2285 = NULL;
F->want_2286 = (((rt_int)4LL));
if ((F->kind_715 == ((rt_int)4LL))) {
F->want_2286 = (((rt_int)3LL));
} else if ((F->kind_715 == ((rt_int)5LL))) {
F->want_2286 = (((rt_int)9LL));
}
{ rt_int lo2288 = ((rt_int)1LL), hi2289 = ((rt_int)3LL);
for (rt_int it2290 = lo2288; it2290 <= hi2289; it2290++) {
F->pass_2287 = it2290;
F->y_2284 = f_overload_chain_931(&(*F->name_716), F->pass_2287);
while ((F->y_2284 != NULL)) {
if (((rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_2284)).name))->all), (*F->name_716)) && (((*(P1039)rt_nil_check(F->y_2284)).kind == F->want_2286) || ((F->kind_715 == ((rt_int)0LL)) && (((*(P1039)rt_nil_check(F->y_2284)).kind == (((rt_int)4LL))) || ((*(P1039)rt_nil_check(F->y_2284)).kind == (((rt_int)3LL))))))) && ((F->pass_2287 != ((rt_int)1LL)) || ((*(P1039)rt_nil_check(F->y_2284)).depth >= g_gdepth_1102)))) {
F->ok_2291 = 1;
if (((F->sig_717 != NULL) || (F->kind_715 == ((rt_int)0LL)))) {
F->s_2292 = NULL;
F->s_2292 = F->sig_717;
F->pm_2293 = NULL;
F->pm_2293 = (*(P1039)rt_nil_check(F->y_2284)).params;
while (((F->ok_2291 && (F->s_2292 != NULL)) && (F->pm_2293 != NULL))) {
F->ok_2291 = f_same_221(f_resolve_in_binds_714(F->s_2292, F->binds_719, &F->c_2285), (*(P1041)rt_nil_check(F->pm_2293)).t);
F->s_2292 = (*(P1029)rt_nil_check(F->s_2292)).next;
F->pm_2293 = (*(P1041)rt_nil_check(F->pm_2293)).next;
}
F->ok_2291 = ((F->ok_2291 && (F->s_2292 == NULL)) && (F->pm_2293 == NULL));
}
if ((F->ok_2291 && (F->res_718 != NULL))) {
F->ok_2291 = (((*(P1039)rt_nil_check(F->y_2284)).kind == (((rt_int)3LL))) && f_same_221(f_resolve_in_binds_714(F->res_718, F->binds_719, &F->c_2285), (*(P1039)rt_nil_check(F->y_2284)).result));
}
if (F->ok_2291) {
F->result_ = F->y_2284;
goto ret_;
}
}
F->y_2284 = (*(P1039)rt_nil_check(F->y_2284)).chain;
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

static P1039 f_need_binds_727(P1029 gd_724, P1039 binds_725, rt_int line_726) {
  struct f_need_binds_727fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_724 = gd_724;
F->binds_725 = binds_725;
F->line_726 = line_726;
F->it_2294 = NULL;
F->it_2294 = (*(P1029)rt_nil_check(F->gd_724)).d;
F->r_2295 = NULL;
F->r_2295 = F->binds_725;
while ((F->it_2294 != NULL)) {
F->found_2296 = 0;
F->y_2297 = NULL;
F->y_2297 = ({ A1045 b_ = (((P1043)rt_nil_check(g_table_1069))->all); b_.p[(rt_index(f_hash_161(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->it_2294)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while (((F->y_2297 != NULL) && (!F->found_2296))) {
if ((rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_2297)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->it_2294)).name))->all)) && ((((*(P1039)rt_nil_check(F->y_2297)).kind == (((rt_int)4LL))) || ((*(P1039)rt_nil_check(F->y_2297)).kind == (((rt_int)3LL)))) || ((*(P1039)rt_nil_check(F->y_2297)).kind == (((rt_int)9LL)))))) {
F->found_2296 = 1;
}
F->y_2297 = (*(P1039)rt_nil_check(F->y_2297)).chain;
}
if (F->found_2296) {
F->z_2298 = NULL;
F->z_2298 = f_copy_sym_438(f_pick_operation_721((*(P1029)rt_nil_check(F->it_2294)).ival, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->it_2294)).name))->all), (*(P1029)rt_nil_check(F->it_2294)).b, (*(P1029)rt_nil_check(F->it_2294)).a, F->r_2295, F->line_726));
(*(P1039)rt_nil_check(F->z_2298)).mnext = F->r_2295;
F->r_2295 = F->z_2298;
} else if ((!f_is_definable_138(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->it_2294)).name))->all)))) {
f_fail_23(F->line_726, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the generic needs ", 18), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->it_2294)).name))->all)), rt_str(", which is not known where it is invoked", 40)); b_; }));
}
F->it_2294 = (*(P1029)rt_nil_check(F->it_2294)).next;
}
F->result_ = F->r_2295;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_729(P1029 st_728) {
  struct f_generic_use_729fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_728 = st_728;
if (((*(P1029)rt_nil_check(F->st_728)).kind == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P1039)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = (((((*(P1029)rt_nil_check(F->st_728)).kind == (((rt_int)80LL))) && ((*(P1029)rt_nil_check(F->st_728)).a != NULL)) && (f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->st_728)).name))->all)) != NULL)) && ((*(P1039)rt_nil_check(f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->st_728)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1039 f_infer_from_734(P1029 gd_730, P1029 pat_731, P1035 t_732, P1039 known_733) {
  struct f_infer_from_734fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_730 = gd_730;
F->pat_731 = pat_731;
F->t_732 = t_732;
F->known_733 = known_733;
F->binds_2299 = NULL;
F->binds_2299 = F->known_733;
F->e_2300 = NULL;
F->e_2300 = (*(P1029)rt_nil_check(F->pat_731)).a;
F->tp_2301 = NULL;
if (((F->t_732 == NULL) || ((*(P1035)rt_nil_check(F->t_732)).gen == NULL))) {
F->result_ = F->binds_2299;
goto ret_;
}
F->tp_2301 = (*(P1029)rt_nil_check((*(P1039)rt_nil_check((*(P1035)rt_nil_check(F->t_732)).gen)).decl)).a;
if (((*(P1029)rt_nil_check(F->pat_731)).kind == (((rt_int)78LL)))) {
F->e_2300 = f_copy_node_842((*(P1029)rt_nil_check(F->pat_731)).a);
(*(P1029)rt_nil_check(F->e_2300)).next = NULL;
}
while (((F->e_2300 != NULL) && (F->tp_2301 != NULL))) {
F->nm_2302 = NULL;
if ((((*(P1029)rt_nil_check(F->e_2300)).kind == (((rt_int)7LL))) || ((*(P1029)rt_nil_check(F->e_2300)).kind == (((rt_int)80LL))))) {
F->nm_2302 = (*(P1029)rt_nil_check(F->e_2300)).name;
}
if ((((F->nm_2302 != NULL) && (f_gparam_693(F->gd_730, &(((P1022)rt_nil_check(F->nm_2302))->all)) != NULL)) && ((*(P1029)rt_nil_check(f_gparam_693(F->gd_730, &(((P1022)rt_nil_check(F->nm_2302))->all)))).ival <= ((rt_int)2LL)))) {
F->q_2303 = NULL;
F->q_2303 = F->binds_2299;
F->have_2304 = 0;
while ((F->q_2303 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->q_2303)).name))->all), (((P1022)rt_nil_check(F->nm_2302))->all))) {
F->have_2304 = 1;
}
F->q_2303 = (*(P1039)rt_nil_check(F->q_2303)).mnext;
}
if ((!F->have_2304)) {
F->g_2305 = NULL;
F->g_2305 = (*(P1035)rt_nil_check(F->t_732)).gbinds;
while ((F->g_2305 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->g_2305)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->tp_2301)).name))->all))) {
F->b_2306 = NULL;
F->b_2306 = f_bind_sym_695(f_gparam_693(F->gd_730, &(((P1022)rt_nil_check(F->nm_2302))->all)));
(*(P1039)rt_nil_check(F->b_2306)).t = (*(P1039)rt_nil_check(F->g_2305)).t;
(*(P1039)rt_nil_check(F->b_2306)).c = (*(P1039)rt_nil_check(F->g_2305)).c;
(*(P1039)rt_nil_check(F->b_2306)).mnext = F->binds_2299;
F->binds_2299 = F->b_2306;
}
F->g_2305 = (*(P1039)rt_nil_check(F->g_2305)).mnext;
}
}
}
F->e_2300 = (*(P1029)rt_nil_check(F->e_2300)).next;
F->tp_2301 = (*(P1029)rt_nil_check(F->tp_2301)).next;
}
F->result_ = F->binds_2299;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1035 f_instantiate_type_740(P1039 g_735, P1029 tt_736, P1029 args_737, P1031 *c_738, rt_int line_739) {
  struct f_instantiate_type_740fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_735 = g_735;
F->tt_736 = tt_736;
F->args_737 = args_737;
F->c_738 = c_738;
F->c_738v = *F->c_738;
F->line_739 = line_739;
F->gd_2307 = NULL;
F->gd_2307 = (*(P1039)rt_nil_check(F->g_735)).decl;
F->pat_2308 = NULL;
F->pat_2308 = (*(P1029)rt_nil_check(F->gd_2307)).b;
F->binds_2309 = NULL;
F->binds_2309 = f_tt_binds_706(F->gd_2307, (*(P1029)rt_nil_check(F->pat_2308)).e, F->tt_736, F->line_739);
F->inst_2310 = NULL;
F->inst_2310 = g_all_insts_1071;
F->t_2311 = NULL;
F->saved_caps_2312 = NULL;
F->saved_caps_2312 = g_caps_1088;
F->saved_env_2313 = NULL;
F->saved_env_2313 = g_genv_1070;
F->saved_gdepth_2314 = g_gdepth_1102;
F->c_738v = f_new_cons_184();
(*(P1031)rt_nil_check(F->c_738v)).args = F->args_737;
while ((F->inst_2310 != NULL)) {
if ((((*(P1039)rt_nil_check(F->inst_2310)).decl == F->pat_2308) && f_same_binds_698((*(P1039)rt_nil_check(F->inst_2310)).members, F->binds_2309))) {
F->result_ = (*(P1039)rt_nil_check(F->inst_2310)).t;
goto ret_;
}
F->inst_2310 = (*(P1039)rt_nil_check(F->inst_2310)).insts;
}
f_open_scope_177();
{
F->b_2315 = NULL;
F->b_2315 = F->binds_2309;
while ((F->b_2315 != NULL)) {
f_define_168(F->b_2315, F->line_739);
F->b_2315 = (*(P1039)rt_nil_check(F->b_2315)).mnext;
}
}
g_caps_1088 = NULL;
g_genv_1070 = (*(P1039)rt_nil_check(F->g_735)).env;
g_gdepth_1102 = g_depth_1072;
{
F->y_2316 = NULL;
F->y_2316 = f_new_sym_181((((rt_int)5LL)), (*(P1029)rt_nil_check(F->pat_2308)).name);
F->yc_2317 = NULL;
(*(P1039)rt_nil_check(F->y_2316)).decl = F->pat_2308;
if (((*(P1029)rt_nil_check(F->pat_2308)).kind == (((rt_int)44LL)))) {
F->t_2311 = f_new_typ_183((((rt_int)8LL)));
(*(P1035)rt_nil_check(F->t_2311)).name = (*(P1029)rt_nil_check(F->pat_2308)).name;
(*(P1035)rt_nil_check(F->t_2311)).decl = F->pat_2308;
(*(P1039)rt_nil_check(F->y_2316)).t = F->t_2311;
f_define_168(F->y_2316, F->line_739);
f_finish_ptr_475(F->t_2311);
} else {
f_define_168(F->y_2316, F->line_739);
F->t_2311 = f_new_type_318(F->y_2316, f_nn_65((((rt_int)80LL)), F->line_739), &F->yc_2317);
}
}
g_caps_1088 = F->saved_caps_2312;
g_genv_1070 = F->saved_env_2313;
g_gdepth_1102 = F->saved_gdepth_2314;
(*(P1035)rt_nil_check(F->t_2311)).gen = F->g_735;
(*(P1035)rt_nil_check(F->t_2311)).gbinds = F->binds_2309;
f_close_scope_178();
{ R1040 *cell2318 = rt_alloc(sizeof(R1040));
(*cell2318).name = NULL;
(*cell2318).t = NULL;
(*cell2318).c = NULL;
(*cell2318).access = NULL;
(*cell2318).cname = NULL;
(*cell2318).st = NULL;
(*cell2318).decl = NULL;
(*cell2318).params = NULL;
(*cell2318).result = NULL;
(*cell2318).members = NULL;
(*cell2318).mnext = NULL;
(*cell2318).binds = NULL;
(*cell2318).insts = NULL;
(*cell2318).env = NULL;
(*cell2318).chain = NULL;
(*cell2318).stack = NULL;
(*cell2318).owner = NULL;
(*cell2318).gctx = NULL;
(*cell2318).mv = NULL;
(*cell2318).reqs = NULL;
(*cell2318).home = NULL;
(*cell2318).capn = NULL;
(*cell2318).tbinds = NULL;
(*cell2318).loc = NULL;
(*cell2318).reqs_sym = NULL;
F->inst_2310 = cell2318;
}
(*(P1039)rt_nil_check(F->inst_2310)).kind = (((rt_int)5LL));
(*(P1039)rt_nil_check(F->inst_2310)).name = (*(P1039)rt_nil_check(F->g_735)).name;
(*(P1039)rt_nil_check(F->inst_2310)).decl = F->pat_2308;
(*(P1039)rt_nil_check(F->inst_2310)).t = F->t_2311;
(*(P1039)rt_nil_check(F->inst_2310)).members = F->binds_2309;
(*(P1039)rt_nil_check(F->inst_2310)).insts = g_all_insts_1071;
g_all_insts_1071 = F->inst_2310;
F->result_ = F->t_2311;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_738) = F->c_738v;
  RT_FPOP();
  return F->result_;
}

static P1039 f_instantiate_745(P1039 g_741, P1029 tt_742, P1029 args_743, rt_int line_744) {
  struct f_instantiate_745fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_741 = g_741;
F->tt_742 = tt_742;
F->args_743 = args_743;
F->line_744 = line_744;
F->gd_2319 = NULL;
F->gd_2319 = (*(P1039)rt_nil_check(F->g_741)).decl;
F->pat_2320 = NULL;
F->pat_2320 = (*(P1029)rt_nil_check(F->gd_2319)).b;
F->binds_2321 = NULL;
F->f_2322 = NULL;
F->f_2322 = (*(P1029)rt_nil_check(F->pat_2320)).e;
F->a_2323 = NULL;
F->a_2323 = F->tt_742;
F->fp_2324 = NULL;
F->fp_2324 = (*(P1029)rt_nil_check(F->pat_2320)).a;
F->inst_2325 = NULL;
F->at_2326 = NULL;
F->c_2327 = NULL;
F->saved_fctx_2328 = NULL;
F->saved_fctx_2328 = g_fctx_1087;
F->saved_in_2329 = g_in_func_1085;
F->saved_level_2330 = g_cur_level_1086;
F->saved_sym_2331 = NULL;
F->saved_sym_2331 = g_func_sym_1097;
F->saved_code_2332 = NULL;
F->saved_code_2332 = g_code_1083;
F->saved_env_2333 = NULL;
F->saved_env_2333 = g_genv_1070;
F->saved_gdepth_2334 = g_gdepth_1102;
F->binds_2321 = f_tt_binds_706(F->gd_2319, F->f_2322, F->a_2323, F->line_744);
F->a_2323 = F->args_743;
while (((F->fp_2324 != NULL) && (F->a_2323 != NULL))) {
if (f_generic_use_729((*(P1029)rt_nil_check(F->fp_2324)).a)) {
F->v_2335 = rt_str_copy(f_gexpr_800(F->a_2323, NULL, &F->at_2326));
F->binds_2321 = f_infer_from_734(F->gd_2319, (*(P1029)rt_nil_check(F->fp_2324)).a, F->at_2326, F->binds_2321);
} else if (((((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->fp_2324)).a)).kind == (((rt_int)80LL))) && (f_gparam_693(F->gd_2319, &(((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->fp_2324)).a)).name))->all)) != NULL)) && ((*(P1029)rt_nil_check(f_gparam_693(F->gd_2319, &(((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->fp_2324)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_2336 = 0;
F->q_2337 = NULL;
F->q_2337 = F->binds_2321;
while ((F->q_2337 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->q_2337)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->fp_2324)).a)).name))->all))) {
F->known_2336 = 1;
}
F->q_2337 = (*(P1039)rt_nil_check(F->q_2337)).mnext;
}
if ((!F->known_2336)) {
F->b_2338 = NULL;
F->b_2338 = f_bind_sym_695(f_gparam_693(F->gd_2319, &(((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->fp_2324)).a)).name))->all)));
F->v_2339 = rt_str_copy(f_gexpr_800(F->a_2323, NULL, &F->at_2326));
(*(P1039)rt_nil_check(F->b_2338)).t = F->at_2326;
(*(P1039)rt_nil_check(F->b_2338)).c = g_no_cons_1132;
if ((((*(P1029)rt_nil_check(f_gparam_693(F->gd_2319, &(((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->fp_2324)).a)).name))->all)))).b != NULL) && (!f_type_allowed_710(F->at_2326, (*(P1029)rt_nil_check(f_gparam_693(F->gd_2319, &(((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->fp_2324)).a)).name))->all)))).b, F->binds_2321)))) {
f_fail_23(F->line_744, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->fp_2324)).a)).name))->all)); b_; }));
}
(*(P1039)rt_nil_check(F->b_2338)).mnext = F->binds_2321;
F->binds_2321 = F->b_2338;
}
}
F->fp_2324 = (*(P1029)rt_nil_check(F->fp_2324)).next;
F->a_2323 = (*(P1029)rt_nil_check(F->a_2323)).next;
}
F->binds_2321 = f_need_binds_727(F->gd_2319, F->binds_2321, F->line_744);
F->inst_2325 = g_all_insts_1071;
while ((F->inst_2325 != NULL)) {
if ((((*(P1039)rt_nil_check(F->inst_2325)).decl == F->pat_2320) && f_same_binds_698((*(P1039)rt_nil_check(F->inst_2325)).members, F->binds_2321))) {
F->result_ = F->inst_2325;
goto ret_;
}
F->inst_2325 = (*(P1039)rt_nil_check(F->inst_2325)).insts;
}
g_fctx_1087 = (*(P1039)rt_nil_check(F->g_741)).gctx;
g_in_func_1085 = ((*(P1039)rt_nil_check(F->g_741)).level > ((rt_int)0LL));
g_cur_level_1086 = (*(P1039)rt_nil_check(F->g_741)).level;
g_func_sym_1097 = (*(P1039)rt_nil_check(F->g_741)).owner;
g_code_1083 = f_new_buffer_24();
f_open_scope_177();
g_gdepth_1102 = g_depth_1072;
{
F->b_2340 = NULL;
F->b_2340 = F->binds_2321;
while ((F->b_2340 != NULL)) {
f_define_168(F->b_2340, F->line_744);
F->b_2340 = (*(P1039)rt_nil_check(F->b_2340)).mnext;
}
}
g_genv_1070 = (*(P1039)rt_nil_check(F->g_741)).env;
F->inst_2325 = f_build_subprogram_505(F->pat_2320);
(*(P1039)rt_nil_check(F->inst_2325)).members = F->binds_2321;
(*(P1039)rt_nil_check(F->inst_2325)).insts = g_all_insts_1071;
g_all_insts_1071 = F->inst_2325;
f_define_168(F->inst_2325, F->line_744);
f_gen_subprogram_576(F->pat_2320, F->inst_2325);
f_close_scope_178();
g_fctx_1087 = F->saved_fctx_2328;
g_in_func_1085 = F->saved_in_2329;
g_cur_level_1086 = F->saved_level_2330;
g_func_sym_1097 = F->saved_sym_2331;
g_code_1083 = F->saved_code_2332;
g_genv_1070 = F->saved_env_2333;
g_gdepth_1102 = F->saved_gdepth_2334;
F->result_ = F->inst_2325;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_747(P1039 y_746) {
  struct f_access_of_747fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_746 = y_746;
F->p_2341 = NULL;
F->p_2341 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((*(P1039)rt_nil_check(F->y_746)).level <= ((rt_int)0LL))) {
F->result_ = (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_746)).access))->all);
goto ret_;
}
{ rt_int lo2343 = ((rt_int)1LL), hi2344 = rt_sub(g_cur_level_1086, (*(P1039)rt_nil_check(F->y_746)).level);
for (rt_int it2345 = lo2343; it2345 <= hi2344; it2345++) {
F->i_2342 = it2345;
F->p_2341 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->p_2341))->all), rt_str("->up", 4)); b_; }));
}
}
if ((*(P1039)rt_nil_check(F->y_746)).byref) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P1022)rt_nil_check(F->p_2341))->all)), rt_str("->", 2)), (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_746)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->p_2341))->all), rt_str("->", 2)), (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_746)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_import_of_750(P1029 l_748, rstr *name_749) {
  struct f_import_of_750fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_748 = l_748;
F->name_749 = name_749;
F->p_2346 = NULL;
F->p_2346 = F->l_748;
while ((F->p_2346 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2346)).name))->all), (*F->name_749))) {
F->result_ = F->p_2346;
goto ret_;
}
F->p_2346 = (*(P1029)rt_nil_check(F->p_2346)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_753(P1039 y_751, rt_int line_752) {
  struct f_check_import_753fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_751 = y_751;
F->line_752 = line_752;
F->c_2347 = NULL;
F->c_2347 = g_fctx_1087;
F->ro_2348 = 0;
while (((F->c_2347 != NULL) && ((*(P1039)rt_nil_check(F->y_751)).depth < (*(P1046)rt_nil_check(F->c_2347)).depth))) {
if ((!(*(P1046)rt_nil_check(F->c_2347)).all_imp)) {
F->imp_2349 = NULL;
F->imp_2349 = f_import_of_750((*(P1046)rt_nil_check(F->c_2347)).imps, &(((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_751)).name))->all));
if ((F->imp_2349 == NULL)) {
f_fail_23(F->line_752, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_751)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if (((*(P1029)rt_nil_check(F->imp_2349)).ival == ((rt_int)1LL))) {
F->ro_2348 = 1;
}
}
F->c_2347 = (*(P1046)rt_nil_check(F->c_2347)).next;
}
F->result_ = F->ro_2348;
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
if (((((rt_int)(((*F->s_754)).len)) > ((rt_int)1LL)) && (rt_str_get((*F->s_754), ((rt_int)1LL)) == 46))) {
F->result_ = rt_str_cat(rt_str("dot_", 4), f_lower_s_15(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_754), ((rt_int)2LL), ((rt_int)(((*F->s_754)).len))); b_; })));
goto ret_;
} else if (((((rt_int)(((*F->s_754)).len)) > ((rt_int)1LL)) && (rt_str_get((*F->s_754), ((rt_int)1LL)) == 40))) {
F->r_2350 = NULL;
F->r_2350 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel_", 4); b_; }));
{ rt_int lo2352 = ((rt_int)2LL), hi2353 = rt_sub(((rt_int)(((*F->s_754)).len)), ((rt_int)1LL));
for (rt_int it2354 = lo2352; it2354 <= hi2353; it2354++) {
F->i_2351 = it2354;
if ((rt_str_get((*F->s_754), F->i_2351) == 42)) {
F->r_2350 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_2350))->all), rt_str("s", 1)); b_; }));
} else if ((rt_str_get((*F->s_754), F->i_2351) == 44)) {
F->r_2350 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_2350))->all), rt_str("_", 1)); b_; }));
} else if ((rt_str_get((*F->s_754), F->i_2351) == 46)) {
F->r_2350 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_2350))->all), rt_str("r", 1)); b_; }));
}
}
}
F->result_ = (((P1022)rt_nil_check(F->r_2350))->all);
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

static rstr f_cell_deref_758(P1035 t_756, rstr *p_757) {
  struct f_cell_deref_758fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_756 = t_756;
F->p_757 = p_757;
if ((((*(P1035)rt_nil_check(F->t_756)).decl != NULL) && ((*(P1029)rt_nil_check((*(P1035)rt_nil_check(F->t_756)).decl)).b != NULL))) {
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

static rstr f_deref_761(rstr *base_759, P1035 t_760) {
  struct f_deref_761fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_759 = base_759;
F->t_760 = t_760;
if ((((*(P1035)rt_nil_check(F->t_760)).decl != NULL) && ((*(P1029)rt_nil_check((*(P1035)rt_nil_check(F->t_760)).decl)).b != NULL))) {
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

static int f_is_lvalue_763(P1029 e_762) {
  struct f_is_lvalue_763fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_762 = e_762;
if (((*(P1029)rt_nil_check(F->e_762)).kind == (((rt_int)7LL)))) {
F->y_2355 = NULL;
F->y_2355 = f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_762)).name))->all));
F->result_ = ((F->y_2355 != NULL) && (((*(P1039)rt_nil_check(F->y_2355)).kind == (((rt_int)1LL))) || ((((*(P1039)rt_nil_check(F->y_2355)).kind == (((rt_int)2LL))) && ((*(P1039)rt_nil_check(F->y_2355)).mv == NULL)) && (!(*(P1039)rt_nil_check(F->y_2355)).hasmv))));
goto ret_;
} else if (((*(P1029)rt_nil_check(F->e_762)).kind == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_763((*(P1029)rt_nil_check(F->e_762)).a);
goto ret_;
} else if (((*(P1029)rt_nil_check(F->e_762)).kind == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_762)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_763((*(P1029)rt_nil_check(F->e_762)).a));
goto ret_;
} else if (((*(P1029)rt_nil_check(F->e_762)).kind == (((rt_int)10LL)))) {
if ((((*(P1029)rt_nil_check(F->e_762)).b != NULL) && ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_762)).b)).kind == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_763((*(P1029)rt_nil_check(F->e_762)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_769(P1029 e_764, P1022 *code_765, P1035 *t_766, P1031 *c_767, int *ro_768) {
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
F->base_2356 = NULL;
F->bt_2357 = NULL;
F->bc_2358 = NULL;
if (((*(P1029)rt_nil_check(F->e_764)).kind == (((rt_int)7LL)))) {
F->y_2359 = NULL;
F->y_2359 = f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_764)).name))->all));
if ((F->y_2359 == NULL)) {
f_fail_23((*(P1029)rt_nil_check(F->e_764)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_764)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P1039)rt_nil_check(F->y_2359)).kind != (((rt_int)1LL))) && ((*(P1039)rt_nil_check(F->y_2359)).kind != (((rt_int)2LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->e_764)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_764)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_765v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_747(F->y_2359); b_; }));
F->t_766v = (*(P1039)rt_nil_check(F->y_2359)).t;
F->c_767v = (*(P1039)rt_nil_check(F->y_2359)).c;
F->ro_768v = (*(P1039)rt_nil_check(F->y_2359)).ro_flag;
if ((((*(P1039)rt_nil_check(F->y_2359)).kind == (((rt_int)1LL))) && f_check_import_753(F->y_2359, (*(P1029)rt_nil_check(F->e_764)).line))) {
F->ro_768v = 1;
}
} else if (((*(P1029)rt_nil_check(F->e_764)).kind == (((rt_int)17LL)))) {
f_lvalue_769((*(P1029)rt_nil_check(F->e_764)).a, &F->code_765v, &F->t_766v, &F->c_767v, &F->ro_768v);
} else if ((((((*(P1029)rt_nil_check(F->e_764)).kind == (((rt_int)12LL))) && ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_764)).a)).kind == (((rt_int)7LL)))) && rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_764)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_765v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_939((*(P1029)rt_nil_check(F->e_764)).b, (*(P1029)rt_nil_check(F->e_764)).line, &F->t_766v); b_; }));
F->c_767v = g_no_cons_1132;
F->ro_768v = 0;
} else if (((*(P1029)rt_nil_check(F->e_764)).kind == (((rt_int)11LL)))) {
f_lvalue_769((*(P1029)rt_nil_check(F->e_764)).a, &F->base_2356, &F->bt_2357, &F->bc_2358, &F->ro_768v);
f_select_on_777(&(((P1022)rt_nil_check(F->base_2356))->all), F->bt_2357, F->e_764, &F->ro_768v, &F->code_765v, &F->t_766v, &F->c_767v);
} else if (((*(P1029)rt_nil_check(F->e_764)).kind == (((rt_int)10LL)))) {
f_lvalue_769((*(P1029)rt_nil_check(F->e_764)).a, &F->base_2356, &F->bt_2357, &F->bc_2358, &F->ro_768v);
f_index_on_794(&(((P1022)rt_nil_check(F->base_2356))->all), F->bt_2357, F->e_764, &F->ro_768v, 1, &F->code_765v, &F->t_766v, &F->c_767v);
} else {
f_fail_23((*(P1029)rt_nil_check(F->e_764)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_765) = F->code_765v;  (*F->t_766) = F->t_766v;  (*F->c_767) = F->c_767v;  if (!rt_r_undef_BOOL(F->ro_768v)) (*F->ro_768) = F->ro_768v;
  RT_FPOP();
  return;
}

static void f_select_on_777(rstr *base_770, P1035 bt_771, P1029 e_772, int *ro_773, P1022 *code_774, P1035 *t_775, P1031 *c_776) {
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
F->c_776v = g_no_cons_1132;
if (((*(P1035)rt_nil_check(F->bt_771)).kind == (((rt_int)8LL)))) {
f_finish_ptr_475(F->bt_771);
(*F->ro_773) = 0;
if (((*(P1035)rt_nil_check(F->bt_771)).decl != NULL)) {
F->p_2360 = NULL;
F->p_2360 = (*(P1029)rt_nil_check((*(P1035)rt_nil_check(F->bt_771)).decl)).b;
while ((F->p_2360 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2360)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_772)).name))->all))) {
F->pc_2361 = NULL;
F->code_774v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_234(F->bt_771)), rt_str(")rt_nil_check(", 14)), (*F->base_770)), rt_str("))->p_", 6)), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2360)).name))->all))), rt_str(")", 1)); b_; }));
F->t_775v = f_resolve_subtype_268((*(P1029)rt_nil_check(F->p_2360)).a, &F->pc_2361);
(*F->ro_773) = 1;
goto ret_;
}
F->p_2360 = (*(P1029)rt_nil_check(F->p_2360)).next;
}
}
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_772)).name))->all), rt_str("ALL", 3))) {
F->code_774v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_761(&(*F->base_770), F->bt_771); b_; }));
F->t_775v = (*(P1035)rt_nil_check(F->bt_771)).target;
goto ret_;
}
f_select_on_777(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_761(&(*F->base_770), F->bt_771); b_; }), (*(P1035)rt_nil_check(F->bt_771)).target, F->e_772, &(*F->ro_773), &F->code_774v, &F->t_775v, &F->c_776v);
goto ret_;
}
if (((*(P1035)rt_nil_check(F->bt_771)).kind == (((rt_int)15LL)))) {
F->p_2362 = NULL;
F->p_2362 = (*(P1035)rt_nil_check(F->bt_771)).tparams;
while ((F->p_2362 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2362)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_772)).name))->all))) {
F->code_774v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_770), rt_str(".p_", 3)), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2362)).name))->all))); b_; }));
F->t_775v = f_tparam_type_352(F->bt_771, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2362)).name))->all));
(*F->ro_773) = 1;
goto ret_;
}
F->p_2362 = (*(P1029)rt_nil_check(F->p_2362)).next;
}
F->p_2362 = (*(P1035)rt_nil_check(F->bt_771)).tparams;
if ((!f_opened_308(F->bt_771))) {
f_fail_23((*(P1029)rt_nil_check(F->e_772)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->bt_771)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P1035)rt_nil_check(F->bt_771)).tparams == NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_772)).name))->all), rt_str("ALL", 3))) {
F->code_774v = f_mk_3(&(*F->base_770));
F->t_775v = (*(P1035)rt_nil_check(F->bt_771)).under;
goto ret_;
}
f_select_on_777(&(*F->base_770), (*(P1035)rt_nil_check(F->bt_771)).under, F->e_772, &(*F->ro_773), &F->code_774v, &F->t_775v, &F->c_776v);
goto ret_;
}
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_772)).name))->all), rt_str("ALL", 3))) {
F->code_774v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_770), rt_str(".all", 4)); b_; }));
F->t_775v = (*(P1035)rt_nil_check(F->bt_771)).under;
goto ret_;
}
while ((F->p_2362 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2362)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_772)).name))->all))) {
F->code_774v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_770), rt_str(".p_", 3)), f_lower_s_15(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2362)).name))->all))); b_; }));
F->t_775v = f_tparam_type_352(F->bt_771, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2362)).name))->all));
(*F->ro_773) = 1;
goto ret_;
}
F->p_2362 = (*(P1029)rt_nil_check(F->p_2362)).next;
}
f_select_on_777(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_770), rt_str(".all", 4)); b_; }), (*(P1035)rt_nil_check(F->bt_771)).under, F->e_772, &(*F->ro_773), &F->code_774v, &F->t_775v, &F->c_776v);
goto ret_;
}
if (((*(P1035)rt_nil_check(F->bt_771)).kind == (((rt_int)17LL)))) {
F->f_2363 = NULL;
F->f_2363 = (*(P1035)rt_nil_check(F->bt_771)).fields;
F->i_2364 = ((rt_int)0LL);
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_772)).name))->all), rt_str("TAG", 3))) {
F->code_774v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_770)), rt_str(").tag)", 6)); b_; }));
F->t_775v = (*(P1035)rt_nil_check(F->bt_771)).elem;
(*F->ro_773) = 1;
goto ret_;
}
while ((F->f_2363 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_2363)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_772)).name))->all))) {
F->fn_2365 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_770)), rt_str(").u.", 4)), f_field_c_17(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_772)).name))->all))));
F->c_776v = (*(P1037)rt_nil_check(F->f_2363)).c;
F->code_774v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_770)), rt_str(").tag == ", 9)), f_itos_7(F->i_2364)), rt_str(" \? &", 4)), F->fn_2365), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_2365), rt_str(")))", 3)); b_; }));
F->t_775v = (*(P1037)rt_nil_check(F->f_2363)).t;
goto ret_;
}
F->i_2364 = rt_add(F->i_2364, ((rt_int)1LL));
F->f_2363 = (*(P1037)rt_nil_check(F->f_2363)).next;
}
f_fail_23((*(P1029)rt_nil_check(F->e_772)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_772)).name))->all)); b_; }));
}
if (((*(P1035)rt_nil_check(F->bt_771)).kind == (((rt_int)7LL)))) {
F->f_2366 = NULL;
F->f_2366 = (*(P1035)rt_nil_check(F->bt_771)).fields;
while ((F->f_2366 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_2366)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_772)).name))->all))) {
F->c_776v = (*(P1037)rt_nil_check(F->f_2366)).c;
F->code_774v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_770), rt_str(".", 1)), f_field_c_17(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_772)).name))->all))); b_; }));
F->t_775v = (*(P1037)rt_nil_check(F->f_2366)).t;
goto ret_;
}
F->f_2366 = (*(P1037)rt_nil_check(F->f_2366)).next;
}
f_fail_23((*(P1029)rt_nil_check(F->e_772)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_772)).name))->all)); b_; }));
}
f_fail_23((*(P1029)rt_nil_check(F->e_772)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_772)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_774) = F->code_774v;  (*F->t_775) = F->t_775v;  (*F->c_776) = F->c_776v;
  RT_FPOP();
  return;
}

static int f_has_call_779(rstr *s_778) {
  struct f_has_call_779fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_778 = s_778;
{ rt_int lo2368 = ((rt_int)1LL), hi2369 = ((rt_int)(((*F->s_778)).len));
for (rt_int it2370 = lo2368; it2370 <= hi2369; it2370++) {
F->i_2367 = it2370;
if ((rt_str_get((*F->s_778), F->i_2367) == 40)) {
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

static void f_need_slice_781(P1035 t_780) {
  struct f_need_slice_781fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_780 = t_780;
F->c_2371 = rt_str_copy(f_ctype_234(F->t_780));
F->n_2372 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_2371));
F->l_2373 = NULL;
if (f_seen_name_425(g_mcopies_1113, &F->n_2372)) {
goto ret_;
}
{ R1034 *cell2374 = rt_alloc(sizeof(R1034));
(*cell2374).s = NULL;
(*cell2374).next = NULL;
F->l_2373 = cell2374;
}
(*(P1033)rt_nil_check(F->l_2373)).s = f_mk_3(&F->n_2372);
(*(P1033)rt_nil_check(F->l_2373)).next = g_mcopies_1113;
g_mcopies_1113 = F->l_2373;
f_put_27(g_out_protos_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2371), rt_str(" ", 1)), F->n_2372), rt_str("(", 1)), F->c_2371), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2371), rt_str(" ", 1)), F->n_2372), rt_str("(", 1)), F->c_2371), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_1078, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2371), rt_str(" rt_r_acat_", 11)), F->c_2371), rt_str("(", 1)), F->c_2371), rt_str(" a, ", 4)), F->c_2371), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2371), rt_str(" rt_r_acat_", 11)), F->c_2371), rt_str("(", 1)), F->c_2371), rt_str(" a, ", 4)), F->c_2371), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_2371), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_414((*(P1035)rt_nil_check(F->t_780)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_414((*(P1035)rt_nil_check(F->t_780)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_1080, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
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

static void f_index_on_794(rstr *base_786, P1035 bt_787, P1029 e_788, int *ro_789, int lv_790, P1022 *code_791, P1035 *t_792, P1031 *c_793) {
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
F->a_2375 = NULL;
F->a_2375 = (*(P1029)rt_nil_check(F->e_788)).b;
F->it_2376 = NULL;
F->c_793v = g_no_cons_1132;
if (((*(P1035)rt_nil_check(F->bt_787)).kind == (((rt_int)8LL)))) {
f_finish_ptr_475(F->bt_787);
(*F->ro_789) = 0;
f_index_on_794(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_761(&(*F->base_786), F->bt_787); b_; }), (*(P1035)rt_nil_check(F->bt_787)).target, F->e_788, &(*F->ro_789), F->lv_790, &F->code_791v, &F->t_792v, &F->c_793v);
goto ret_;
}
if (((*(P1035)rt_nil_check(F->bt_787)).kind == (((rt_int)15LL)))) {
if ((!f_opened_308(F->bt_787))) {
f_fail_23((*(P1029)rt_nil_check(F->e_788)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->bt_787)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P1035)rt_nil_check(F->bt_787)).tparams == NULL)) {
f_index_on_794(&(*F->base_786), (*(P1035)rt_nil_check(F->bt_787)).under, F->e_788, &(*F->ro_789), F->lv_790, &F->code_791v, &F->t_792v, &F->c_793v);
} else {
f_index_on_794(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_786), rt_str(".all", 4)); b_; }), (*(P1035)rt_nil_check(F->bt_787)).under, F->e_788, &(*F->ro_789), F->lv_790, &F->code_791v, &F->t_792v, &F->c_793v);
}
goto ret_;
}
if (((((*(P1035)rt_nil_check(F->bt_787)).kind == (((rt_int)6LL))) && (F->a_2375 != NULL)) && ((*(P1029)rt_nil_check(F->a_2375)).kind == (((rt_int)16LL))))) {
if ((((*(P1035)rt_nil_check(F->bt_787)).ndim != ((rt_int)1LL)) || ((*(P1029)rt_nil_check(F->a_2375)).next != NULL))) {
f_fail_23((*(P1029)rt_nil_check(F->e_788)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_2377 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->a_2375)).a, (*(P1035)rt_nil_check(F->bt_787)).idx, &F->it_2376));
F->hi_2378 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->a_2375)).b, (*(P1035)rt_nil_check(F->bt_787)).idx, &F->it_2376));
F->code_791v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_234(F->bt_787)), rt_str("(", 1)), (*F->base_786)), rt_str(", ", 2)), F->lo_2377), rt_str(", ", 2)), F->hi_2378), rt_str(")", 1)); b_; }));
f_need_slice_781(F->bt_787);
F->t_792v = F->bt_787;
(*F->ro_789) = 1;
}
goto ret_;
}
if (((*(P1035)rt_nil_check(F->bt_787)).kind == (((rt_int)6LL)))) {
F->off_2379 = NULL;
F->k_2380 = ((rt_int)0LL);
F->b_2381 = NULL;
F->b_2381 = f_mk_3(&(*F->base_786));
F->pre_2382 = NULL;
F->pre_2382 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_71(F->a_2375) != (*(P1035)rt_nil_check(F->bt_787)).ndim)) {
f_fail_23((*(P1029)rt_nil_check(F->e_788)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7((*(P1035)rt_nil_check(F->bt_787)).ndim), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_790) && f_has_call_779(&(*F->base_786)))) {
F->pre_2382 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->bt_787)), rt_str(" b_ = ", 6)), (*F->base_786)), rt_str("; ", 2)); b_; }));
F->b_2381 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_2375 != NULL)) {
F->k_2380 = rt_add(F->k_2380, ((rt_int)1LL));
{
F->i_2383 = rt_str_copy(f_gexpr_800(F->a_2375, f_idx_type_258(F->bt_787, F->k_2380), &F->it_2376));
F->l_2384 = rt_str_copy(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->b_2381))->all), rt_str(".", 1)), f_dim_lo_242(F->k_2380)));
F->h_2385 = rt_str_copy(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->b_2381))->all), rt_str(".", 1)), f_dim_hi_244(F->k_2380)));
f_check_type_232(F->it_2376, f_idx_type_258(F->bt_787, F->k_2380), (*(P1029)rt_nil_check(F->e_788)).line);
if ((F->off_2379 == NULL)) {
F->off_2379 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_785(&F->i_2383, &F->l_2384, &F->h_2385)), rt_str(" - ", 3)), F->l_2384), rt_str(")", 1)); b_; }));
} else {
F->off_2379 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1022)rt_nil_check(F->off_2379))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2384), rt_str(", ", 2)), F->h_2385), rt_str(") + ", 4)), f_ix_785(&F->i_2383, &F->l_2384, &F->h_2385)), rt_str(" - ", 3)), F->l_2384), rt_str(")", 1)); b_; }));
}
}
F->a_2375 = (*(P1029)rt_nil_check(F->a_2375)).next;
}
if ((((rt_int)(((((P1022)rt_nil_check(F->pre_2382))->all)).len)) > ((rt_int)0LL))) {
F->code_791v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->pre_2382))->all), (((P1022)rt_nil_check(F->b_2381))->all)), rt_str(".p[", 3)), (((P1022)rt_nil_check(F->off_2379))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_791v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->b_2381))->all), rt_str(".p[", 3)), (((P1022)rt_nil_check(F->off_2379))->all)), rt_str("]", 1)); b_; }));
}
F->t_792v = (*(P1035)rt_nil_check(F->bt_787)).elem;
F->c_793v = (*(P1035)rt_nil_check(F->bt_787)).elemcons;
goto ret_;
}
if ((f_list_len_71(F->a_2375) != ((rt_int)1LL))) {
f_fail_23((*(P1029)rt_nil_check(F->e_788)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if (((*(P1035)rt_nil_check(F->bt_787)).kind == (((rt_int)5LL)))) {
if (((*(P1029)rt_nil_check(F->a_2375)).kind == (((rt_int)16LL)))) {
F->lo_2386 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->a_2375)).a, g_ty_int_1114, &F->it_2376));
F->hi_2387 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->a_2375)).b, g_ty_int_1114, &F->it_2376));
F->code_791v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_786)), rt_str(", ", 2)), F->lo_2386), rt_str(", ", 2)), F->hi_2387), rt_str(")", 1)); b_; }));
F->t_792v = F->bt_787;
(*F->ro_789) = 1;
goto ret_;
}
{
F->i_2388 = rt_str_copy(f_gexpr_800(F->a_2375, g_ty_int_1114, &F->it_2376));
F->t_792v = f_str_elem_218(F->bt_787);
F->c_793v = (*(P1035)rt_nil_check(F->bt_787)).elemcons;
if (F->lv_790) {
F->code_791v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_786)), rt_str(", ", 2)), F->i_2388), rt_str("))", 2)); b_; }));
} else {
if (((f_list_len_71((*(P1035)rt_nil_check(f_base_of_223(f_str_elem_218(F->bt_787)))).lits) < ((rt_int)256LL)) && (!f_suppressed_512(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))))) {
F->code_791v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_cchk(rt_str_get(", 21), (*F->base_786)), rt_str(", ", 2)), F->i_2388), rt_str("))", 2)); b_; }));
} else {
F->code_791v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_786)), rt_str(", ", 2)), F->i_2388), rt_str(")", 1)); b_; }));
}
(*F->ro_789) = 1;
}
}
goto ret_;
}
f_fail_23((*(P1029)rt_nil_check(F->e_788)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_791) = F->code_791v;  (*F->t_792) = F->t_792v;  (*F->c_793) = F->c_793v;
  RT_FPOP();
  return;
}

static int f_own_attribute_796(P1029 e_795) {
  struct f_own_attribute_796fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_795 = e_795;
F->saved_2389 = NULL;
F->saved_2389 = g_code_1083;
F->bt_2390 = NULL;
F->ok_2391 = 0;
g_trial_1112 = rt_add(g_trial_1112, ((rt_int)1LL));
g_code_1083 = f_new_buffer_24();
{ rt_frame xf2392;
if (RT_TRY(xf2392)) {
F->base_2394 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_795)).a, NULL, &F->bt_2390));
while (((F->bt_2390 != NULL) && ((*(P1035)rt_nil_check(F->bt_2390)).kind == (((rt_int)8LL))))) {
f_finish_ptr_475(F->bt_2390);
F->bt_2390 = (*(P1035)rt_nil_check(F->bt_2390)).target;
}
while ((((F->bt_2390 != NULL) && ((*(P1035)rt_nil_check(F->bt_2390)).kind == (((rt_int)15LL)))) && ((*(P1035)rt_nil_check(F->bt_2390)).tparams == NULL))) {
F->bt_2390 = (*(P1035)rt_nil_check(F->bt_2390)).under;
}
if (((F->bt_2390 != NULL) && ((*(P1035)rt_nil_check(F->bt_2390)).kind == (((rt_int)15LL))))) {
F->p_2395 = NULL;
F->p_2395 = (*(P1035)rt_nil_check(F->bt_2390)).tparams;
while ((F->p_2395 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2395)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_795)).name))->all))) {
F->ok_2391 = 1;
}
F->p_2395 = (*(P1029)rt_nil_check(F->p_2395)).next;
}
F->bt_2390 = (*(P1035)rt_nil_check(F->bt_2390)).under;
}
if (((F->bt_2390 != NULL) && (((*(P1035)rt_nil_check(F->bt_2390)).kind == (((rt_int)7LL))) || ((*(P1035)rt_nil_check(F->bt_2390)).kind == (((rt_int)17LL)))))) {
F->f_2396 = NULL;
F->f_2396 = (*(P1035)rt_nil_check(F->bt_2390)).fields;
while ((F->f_2396 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_2396)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_795)).name))->all))) {
F->ok_2391 = 1;
}
F->f_2396 = (*(P1037)rt_nil_check(F->f_2396)).next;
}
}
RT_POP(xf2392);
} else {
RT_POP(xf2392);
int x2393 = rt_xcur;
if (0 || x2393 == ex_compile_error_1) {
F->ok_2391 = 0;
} else {
rt_raise(x2393);
}
}
}
g_trial_1112 = rt_sub(g_trial_1112, ((rt_int)1LL));
g_code_1083 = F->saved_2389;
F->result_ = F->ok_2391;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_800(P1029 e_797, P1035 want_798, P1035 *t_799) {
  struct f_gexpr_800fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_797 = e_797;
F->want_798 = want_798;
F->t_799 = t_799;
F->t_799v = *F->t_799;
F->k_2397 = (*(P1029)rt_nil_check(F->e_797)).kind;
F->code_2398 = NULL;
F->c_2399 = NULL;
F->bt_2401 = NULL;
F->ctx_2402 = NULL;
F->ctx_2402 = g_cons_ctx_1104;
F->whole_2403 = (!g_skip_chk_1106);
g_cons_ctx_1104 = NULL;
g_skip_chk_1106 = 0;
F->t_799v = g_ty_int_1114;
if ((F->k_2397 == (((rt_int)1LL)))) {
if (((F->want_798 != NULL) && ((*(P1035)rt_nil_check(F->want_798)).kind == (((rt_int)3LL))))) {
F->t_799v = g_ty_float_1116;
F->result_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((F->k_2397 == (((rt_int)2LL)))) {
F->t_799v = g_ty_float_1116;
F->result_ = (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all);
goto ret_;
} else if ((F->k_2397 == (((rt_int)5LL)))) {
F->t_799v = g_ty_bool_1115;
F->result_ = f_itos_7((*(P1029)rt_nil_check(F->e_797)).ival);
goto ret_;
} else if (((((F->k_2397 == (((rt_int)3LL))) && (F->want_798 != NULL)) && ((*(P1035)rt_nil_check(F->want_798)).kind == (((rt_int)5LL)))) && (!f_same_221(f_str_elem_218(F->want_798), g_ty_ascii_1117)))) {
F->r_2404 = NULL;
F->r_2404 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_q_18(); b_; }));
F->t_799v = F->want_798;
{ rt_int lo2406 = ((rt_int)1LL), hi2407 = ((rt_int)(((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all)).len));
for (rt_int it2408 = lo2406; it2408 <= hi2407; it2408++) {
F->i_2405 = it2408;
F->pos_2409 = f_lit_index_265((*(P1035)rt_nil_check(f_base_of_223(f_str_elem_218(F->want_798)))).lits, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ascii_lit_813(rt_str_get((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), F->i_2405)); b_; }));
if ((F->pos_2409 < ((rt_int)0LL))) {
f_fail_23((*(P1029)rt_nil_check(F->e_797)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), f_ascii_lit_813(rt_str_get((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), F->i_2405))), rt_str(" is not a value of the component type", 37)); b_; }));
}
F->r_2404 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_2404))->all), rt_str("\\", 1)), f_octal_815(F->pos_2409)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), (((P1022)rt_nil_check(F->r_2404))->all)), f_q_18()), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_2397 == (((rt_int)3LL)))) {
F->t_799v = g_ty_string_1118;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_846(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((F->k_2397 == (((rt_int)6LL)))) {
F->t_799v = g_ty_nil_1121;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((F->k_2397 == (((rt_int)4LL)))) {
if (((F->want_798 != NULL) && ((*(P1035)rt_nil_check(f_base_of_223(F->want_798))).kind == (((rt_int)4LL))))) {
F->t_799v = F->want_798;
} else {
F->t_799v = f_enum_type_of_849(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), (*(P1029)rt_nil_check(F->e_797)).line);
}
{
F->i_2410 = f_lit_index_265((*(P1035)rt_nil_check(f_base_of_223(F->t_799v))).lits, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all));
if ((F->i_2410 < ((rt_int)0LL))) {
f_fail_23((*(P1029)rt_nil_check(F->e_797)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(F->i_2410);
goto ret_;
}
} else if ((F->k_2397 == (((rt_int)17LL)))) {
g_cons_ctx_1104 = F->ctx_2402;
F->result_ = f_gexpr_800((*(P1029)rt_nil_check(F->e_797)).a, F->want_798, &F->t_799v);
goto ret_;
} else if ((F->k_2397 == (((rt_int)7LL)))) {
F->y_2411 = NULL;
F->y_2411 = f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all));
if ((F->y_2411 == NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("ME", 2))) {
F->t_799v = g_ty_act_1124;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_799v = g_ty_act_1124;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_951(f_wrap_apply_844(F->e_797), 0, &F->t_799v);
goto ret_;
}
if (((((((((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_951(f_wrap_apply_844(F->e_797), 0, &F->t_799v);
goto ret_;
}
f_fail_23((*(P1029)rt_nil_check(F->e_797)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if ((((*(P1039)rt_nil_check(F->y_2411)).kind == (((rt_int)1LL))) || ((*(P1039)rt_nil_check(F->y_2411)).kind == (((rt_int)2LL))))) {
F->t_799v = (*(P1039)rt_nil_check(F->y_2411)).t;
if (((*(P1039)rt_nil_check(F->y_2411)).kind == (((rt_int)1LL)))) {
F->ro_2412 = f_check_import_753(F->y_2411, (*(P1029)rt_nil_check(F->e_797)).line);
if ((!F->whole_2403)) {
F->result_ = f_access_of_747(F->y_2411);
goto ret_;
}
F->result_ = f_init_chk_363((*(P1039)rt_nil_check(F->y_2411)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_747(F->y_2411); b_; }));
goto ret_;
}
F->result_ = f_access_of_747(F->y_2411);
goto ret_;
}
if (((*(P1039)rt_nil_check(F->y_2411)).kind == (((rt_int)3LL)))) {
F->result_ = f_gcall_951(f_wrap_apply_844(F->e_797), 0, &F->t_799v);
goto ret_;
}
f_fail_23((*(P1029)rt_nil_check(F->e_797)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((F->k_2397 == (((rt_int)8LL))) && (f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all)) != NULL)) && (f_user_op_947(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), f_copy_node_842((*(P1029)rt_nil_check(F->e_797)).a)) != NULL))) {
F->call_2413 = NULL;
F->call_2413 = f_nn_65((((rt_int)10LL)), (*(P1029)rt_nil_check(F->e_797)).line);
F->fname_2414 = NULL;
F->fname_2414 = f_nn_65((((rt_int)7LL)), (*(P1029)rt_nil_check(F->e_797)).line);
(*(P1029)rt_nil_check(F->fname_2414)).name = (*(P1029)rt_nil_check(F->e_797)).name;
(*(P1029)rt_nil_check(F->call_2413)).a = F->fname_2414;
(*(P1029)rt_nil_check(F->call_2413)).b = f_copy_node_842((*(P1029)rt_nil_check(F->e_797)).a);
F->result_ = f_gcall_951(F->call_2413, 0, &F->t_799v);
goto ret_;
} else if (((((F->k_2397 == (((rt_int)8LL))) && rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("NOT", 3))) && (F->want_798 != NULL)) && ((*(P1035)rt_nil_check(F->want_798)).kind == (((rt_int)16LL))))) {
F->a_2415 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_797)).a, F->want_798, &F->t_799v));
F->result_ = rt_str_cat(rt_str_cat(rt_str("y_set_compl(", 12), F->a_2415), rt_str(")", 1));
goto ret_;
} else if ((F->k_2397 == (((rt_int)8LL)))) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("NOT", 3))) {
F->a_2416 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_797)).a, g_ty_bool_1115, &F->t_799v));
f_check_type_232(F->t_799v, g_ty_bool_1115, (*(P1029)rt_nil_check(F->e_797)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_2416), rt_str(")", 1));
goto ret_;
}
{
F->a_2417 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_797)).a, F->want_798, &F->t_799v));
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_2417;
goto ret_;
} else if (((*(P1035)rt_nil_check(F->t_799v)).kind == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_2417), rt_str(")", 1));
goto ret_;
}
f_check_type_232(F->t_799v, g_ty_int_1114, (*(P1029)rt_nil_check(F->e_797)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_2417), rt_str(")", 1));
goto ret_;
}
} else if ((F->k_2397 == (((rt_int)9LL)))) {
F->result_ = f_gbinop_871(F->e_797, F->want_798, &F->t_799v);
goto ret_;
} else if ((F->k_2397 == (((rt_int)10LL)))) {
if ((((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).a)).kind == (((rt_int)7LL))) || ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).a)).kind == (((rt_int)12LL))))) {
F->nm_2418 = NULL;
F->nm_2418 = (*(P1029)rt_nil_check(F->e_797)).a;
F->y_2419 = NULL;
if (((*(P1029)rt_nil_check(F->nm_2418)).kind == (((rt_int)12LL)))) {
F->nm_2418 = (*(P1029)rt_nil_check(F->nm_2418)).a;
}
F->y_2419 = f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->nm_2418)).name))->all));
if (((((F->y_2419 == NULL) || ((*(P1039)rt_nil_check(F->y_2419)).kind == (((rt_int)3LL)))) || ((*(P1039)rt_nil_check(F->y_2419)).kind == (((rt_int)4LL)))) || ((*(P1039)rt_nil_check(F->y_2419)).kind == (((rt_int)10LL))))) {
F->result_ = f_gcall_951(F->e_797, 0, &F->t_799v);
goto ret_;
}
}
if ((f_user_subscript_826(F->e_797) != NULL)) {
F->result_ = f_gcall_951(f_user_subscript_826(F->e_797), 0, &F->t_799v);
goto ret_;
}
{
F->base_2420 = rt_str_copy(f_gexpr_base_806((*(P1029)rt_nil_check(F->e_797)).a, &F->bt_2401));
F->ro_2400 = 1;
f_index_on_794(&F->base_2420, F->bt_2401, F->e_797, &F->ro_2400, 0, &F->code_2398, &F->t_799v, &F->c_2399);
if ((((!f_is_lvalue_763(F->e_797)) || ((*(P1035)rt_nil_check(F->t_799v)).kind == (((rt_int)6LL)))) || ((*(P1035)rt_nil_check(F->t_799v)).kind == (((rt_int)5LL))))) {
F->result_ = (((P1022)rt_nil_check(F->code_2398))->all);
goto ret_;
}
F->result_ = f_init_chk_363(F->t_799v, &(((P1022)rt_nil_check(F->code_2398))->all));
goto ret_;
}
} else if (((F->k_2397 == (((rt_int)11LL))) && (f_user_dot_824(F->e_797) != NULL))) {
F->result_ = f_gcall_951(f_user_dot_824(F->e_797), 0, &F->t_799v);
goto ret_;
} else if ((F->k_2397 == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_796(F->e_797)))) {
F->result_ = f_attribute_854(F->e_797, &F->t_799v);
goto ret_;
} else if (((f_as_subtype_297((*(P1029)rt_nil_check(F->e_797)).a) != NULL) || f_ptr_attribute_851(F->e_797))) {
F->result_ = f_attribute_854(F->e_797, &F->t_799v);
goto ret_;
}
{
F->base_2421 = rt_str_copy(f_gexpr_base_806((*(P1029)rt_nil_check(F->e_797)).a, &F->bt_2401));
F->ro_2400 = 1;
f_select_on_777(&F->base_2421, F->bt_2401, F->e_797, &F->ro_2400, &F->code_2398, &F->t_799v, &F->c_2399);
if ((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_797)).name))->all), rt_str("TAG", 3)) || (!f_is_lvalue_763(F->e_797)))) {
F->result_ = (((P1022)rt_nil_check(F->code_2398))->all);
goto ret_;
}
F->result_ = f_init_chk_363(F->t_799v, &(((P1022)rt_nil_check(F->code_2398))->all));
goto ret_;
}
} else if ((F->k_2397 == (((rt_int)12LL)))) {
F->result_ = f_gcall_951(f_wrap_apply_844(F->e_797), 0, &F->t_799v);
goto ret_;
} else if ((F->k_2397 == (((rt_int)14LL)))) {
F->result_ = f_constructor_876(F->e_797, F->want_798, F->ctx_2402, &F->t_799v);
goto ret_;
} else if ((F->k_2397 == (((rt_int)13LL)))) {
F->result_ = f_resolved_803(F->e_797, &F->t_799v);
goto ret_;
}
f_fail_23((*(P1029)rt_nil_check(F->e_797)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_799) = F->t_799v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_803(P1029 e_801, P1035 *t_802) {
  struct f_resolved_803fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_801 = e_801;
F->t_802 = t_802;
F->t_802v = *F->t_802;
F->c_2422 = NULL;
F->vt_2423 = NULL;
F->y_2424 = NULL;
F->y_2424 = f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_2425 = NULL;
F->tt_2425 = f_copy_node_842((*(P1029)rt_nil_check(F->e_801)).b);
(*(P1029)rt_nil_check(F->tt_2425)).next = NULL;
if (((F->y_2424 != NULL) && (((*(P1039)rt_nil_check(F->y_2424)).kind == (((rt_int)10LL))) || (f_resolve_overload_925(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_2425, f_copy_node_842((*(P1029)rt_nil_check(F->e_801)).a), 0, (*(P1029)rt_nil_check(F->e_801)).line) != NULL)))) {
F->call_2426 = NULL;
F->call_2426 = f_nn_65((((rt_int)10LL)), (*(P1029)rt_nil_check(F->e_801)).line);
F->f_2427 = NULL;
F->f_2427 = f_nn_65((((rt_int)12LL)), (*(P1029)rt_nil_check(F->e_801)).line);
F->fname_2428 = NULL;
F->fname_2428 = f_nn_65((((rt_int)7LL)), (*(P1029)rt_nil_check(F->e_801)).line);
(*(P1029)rt_nil_check(F->fname_2428)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P1029)rt_nil_check(F->f_2427)).a = F->fname_2428;
(*(P1029)rt_nil_check(F->f_2427)).b = F->tt_2425;
(*(P1029)rt_nil_check(F->call_2426)).a = F->f_2427;
(*(P1029)rt_nil_check(F->call_2426)).b = f_copy_node_842((*(P1029)rt_nil_check(F->e_801)).a);
(*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->call_2426)).b)).next = NULL;
F->result_ = f_gcall_951(F->call_2426, 0, &F->t_802v);
goto ret_;
}
F->t_802v = f_resolve_subtype_268((*(P1029)rt_nil_check(F->e_801)).b, &F->c_2422);
{
F->v_2429 = rt_str_copy(f_gexpr_in_811((*(P1029)rt_nil_check(F->e_801)).a, F->t_802v, F->c_2422, &F->vt_2423));
f_check_type_232(F->vt_2423, F->t_802v, (*(P1029)rt_nil_check(F->e_801)).line);
F->result_ = f_checked_213(F->t_802v, F->c_2422, &F->v_2429);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_802) = F->t_802v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_base_806(P1029 e_804, P1035 *t_805) {
  struct f_gexpr_base_806fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_804 = e_804;
F->t_805 = t_805;
F->t_805v = *F->t_805;
g_skip_chk_1106 = 1;
F->result_ = f_gexpr_800(F->e_804, NULL, &F->t_805v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_805) = F->t_805v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_811(P1029 e_807, P1035 want_808, P1031 c_809, P1035 *t_810) {
  struct f_gexpr_in_811fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_807 = e_807;
F->want_808 = want_808;
F->c_809 = c_809;
F->t_810 = t_810;
F->t_810v = *F->t_810;
g_cons_ctx_1104 = F->c_809;
F->result_ = f_gexpr_800(F->e_807, F->want_808, &F->t_810v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_810) = F->t_810v;
  RT_FPOP();
  return F->result_;
}

static rstr f_ascii_lit_813(int ch_812) {
  struct f_ascii_lit_813fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ch_812 = ch_812;
F->l_2430 = NULL;
F->l_2430 = (*(P1035)rt_nil_check(g_ty_ascii_1117)).lits;
{ rt_int lo2432 = ((rt_int)1LL), hi2433 = rt_sub(((rt_int)(F->ch_812) + 1), ((rt_int)1LL));
for (rt_int it2434 = lo2432; it2434 <= hi2433; it2434++) {
F->i_2431 = it2434;
F->l_2430 = (*(P1029)rt_nil_check(F->l_2430)).next;
}
}
F->result_ = (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->l_2430)).name))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_octal_815(rt_int n_814) {
  struct f_octal_815fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_814 = n_814;
F->r_2435 = rt_str_new(((rt_int)3LL));
rt_str_assign(&F->r_2435, rt_str("000", 3));
(*rt_str_at(&F->r_2435, ((rt_int)1LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_814, ((rt_int)64LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2435, ((rt_int)2LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_814, ((rt_int)8LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2435, ((rt_int)3LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(F->n_814, ((rt_int)8LL)), ((rt_int)1LL)));
F->result_ = F->r_2435;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1035 f_str_cat_part_817(P1035 t_816) {
  struct f_str_cat_part_817fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_816 = t_816;
if (((*(P1035)rt_nil_check(F->t_816)).kind == (((rt_int)5LL)))) {
F->result_ = f_str_elem_218(F->t_816);
goto ret_;
}
F->result_ = F->t_816;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1035 f_peek_type_819(P1029 e_818) {
  struct f_peek_type_819fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_818 = e_818;
F->saved_2436 = NULL;
F->saved_2436 = g_code_1083;
F->t_2437 = NULL;
g_trial_1112 = rt_add(g_trial_1112, ((rt_int)1LL));
g_code_1083 = f_new_buffer_24();
{ rt_frame xf2438;
if (RT_TRY(xf2438)) {
F->v_2440 = rt_str_copy(f_gexpr_800(F->e_818, NULL, &F->t_2437));
RT_POP(xf2438);
} else {
RT_POP(xf2438);
int x2439 = rt_xcur;
if (0 || x2439 == ex_compile_error_1) {
F->t_2437 = NULL;
} else {
rt_raise(x2439);
}
}
}
g_trial_1112 = rt_sub(g_trial_1112, ((rt_int)1LL));
g_code_1083 = F->saved_2436;
F->result_ = F->t_2437;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1035 f_set_operands_822(P1029 e_820, P1035 want_821) {
  struct f_set_operands_822fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_820 = e_820;
F->want_821 = want_821;
F->t_2441 = NULL;
if (((F->want_821 != NULL) && ((*(P1035)rt_nil_check(F->want_821)).kind == (((rt_int)16LL))))) {
F->result_ = F->want_821;
goto ret_;
} else if ((F->want_821 != NULL)) {
F->result_ = NULL;
goto ret_;
}
if (((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_820)).a)).kind != (((rt_int)14LL)))) {
F->t_2441 = f_peek_type_819((*(P1029)rt_nil_check(F->e_820)).a);
} else if (((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_820)).b)).kind != (((rt_int)14LL)))) {
F->t_2441 = f_peek_type_819((*(P1029)rt_nil_check(F->e_820)).b);
}
if (((F->t_2441 != NULL) && ((*(P1035)rt_nil_check(F->t_2441)).kind == (((rt_int)16LL))))) {
F->result_ = F->t_2441;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_user_dot_824(P1029 e_823) {
  struct f_user_dot_824fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_823 = e_823;
F->arg_2442 = NULL;
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_823)).name))->all)); b_; })) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->arg_2442 = f_copy_node_842((*(P1029)rt_nil_check(F->e_823)).a);
if ((f_user_op_947(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_823)).name))->all)); b_; }), F->arg_2442) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_830(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_823)).name))->all)); b_; }), F->arg_2442, (*(P1029)rt_nil_check(F->e_823)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_user_subscript_826(P1029 e_825) {
  struct f_user_subscript_826fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_825 = e_825;
F->name_2443 = NULL;
F->name_2443 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
F->args_2444 = NULL;
F->tail_2445 = NULL;
F->a_2446 = NULL;
F->a_2446 = (*(P1029)rt_nil_check(F->e_825)).b;
if ((((((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_825)).a)).kind == (((rt_int)7LL))) && (f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_825)).a)).name))->all)) != NULL)) && ((*(P1039)rt_nil_check(f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_825)).a)).name))->all)))).kind != (((rt_int)1LL)))) && ((*(P1039)rt_nil_check(f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_825)).a)).name))->all)))).kind != (((rt_int)2LL))))) {
F->result_ = NULL;
goto ret_;
}
f_append_69(&F->args_2444, &F->tail_2445, f_copy_node_842((*(P1029)rt_nil_check(F->e_825)).a));
while ((F->a_2446 != NULL)) {
if ((((rt_int)(((((P1022)rt_nil_check(F->name_2443))->all)).len)) > ((rt_int)1LL))) {
F->name_2443 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->name_2443))->all), rt_str(",", 1)); b_; }));
}
if (((*(P1029)rt_nil_check(F->a_2446)).kind == (((rt_int)16LL)))) {
F->name_2443 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->name_2443))->all), rt_str("*..*", 4)); b_; }));
f_append_69(&F->args_2444, &F->tail_2445, f_copy_node_842((*(P1029)rt_nil_check(F->a_2446)).a));
f_append_69(&F->args_2444, &F->tail_2445, f_copy_node_842((*(P1029)rt_nil_check(F->a_2446)).b));
} else {
F->name_2443 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->name_2443))->all), rt_str("*", 1)); b_; }));
f_append_69(&F->args_2444, &F->tail_2445, f_copy_node_842(F->a_2446));
}
F->a_2446 = (*(P1029)rt_nil_check(F->a_2446)).next;
}
F->name_2443 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->name_2443))->all), rt_str(")", 1)); b_; }));
if (((f_lookup_163(&(((P1022)rt_nil_check(F->name_2443))->all)) == NULL) || (f_user_op_947(&(((P1022)rt_nil_check(F->name_2443))->all), F->args_2444) == NULL))) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_830(&(((P1022)rt_nil_check(F->name_2443))->all), F->args_2444, (*(P1029)rt_nil_check(F->e_825)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_op_call_830(rstr *name_827, P1029 args_828, rt_int line_829) {
  struct f_op_call_830fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_827 = name_827;
F->args_828 = args_828;
F->line_829 = line_829;
F->call_2447 = NULL;
F->call_2447 = f_nn_65((((rt_int)10LL)), F->line_829);
F->f_2448 = NULL;
F->f_2448 = f_nn_65((((rt_int)7LL)), F->line_829);
(*(P1029)rt_nil_check(F->f_2448)).name = f_mk_3(&(*F->name_827));
(*(P1029)rt_nil_check(F->call_2447)).a = F->f_2448;
(*(P1029)rt_nil_check(F->call_2447)).b = F->args_828;
F->result_ = F->call_2447;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_derived_relation_832(P1029 e_831) {
  struct f_derived_relation_832fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_831 = e_831;
F->l_2449 = NULL;
F->r_2450 = NULL;
F->has_eq_2451 = 0;
F->has_lt_2452 = 0;
F->l_2449 = f_copy_node_842((*(P1029)rt_nil_check(F->e_831)).a);
F->r_2450 = f_copy_node_842((*(P1029)rt_nil_check(F->e_831)).b);
(*(P1029)rt_nil_check(F->l_2449)).next = F->r_2450;
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; })) != NULL)) {
F->has_eq_2451 = (f_user_op_947(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), F->l_2449) != NULL);
}
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; })) != NULL)) {
F->l_2449 = f_copy_node_842((*(P1029)rt_nil_check(F->e_831)).a);
F->r_2450 = f_copy_node_842((*(P1029)rt_nil_check(F->e_831)).b);
(*(P1029)rt_nil_check(F->l_2449)).next = F->r_2450;
F->has_lt_2452 = (f_user_op_947(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), F->l_2449) != NULL);
}
if ((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_831)).name))->all), rt_str("/=", 2)) && F->has_eq_2451)) {
F->result_ = f_rel_not_840(f_rel_node_837(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1029)rt_nil_check(F->e_831)).a, (*(P1029)rt_nil_check(F->e_831)).b, (*(P1029)rt_nil_check(F->e_831)).line), (*(P1029)rt_nil_check(F->e_831)).line);
goto ret_;
} else if ((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_831)).name))->all), rt_str(">", 1)) && F->has_lt_2452)) {
F->result_ = f_rel_node_837(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1029)rt_nil_check(F->e_831)).b, (*(P1029)rt_nil_check(F->e_831)).a, (*(P1029)rt_nil_check(F->e_831)).line);
goto ret_;
} else if (((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_831)).name))->all), rt_str("<=", 2)) && F->has_lt_2452) && F->has_eq_2451)) {
F->result_ = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_837(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1029)rt_nil_check(F->e_831)).a, (*(P1029)rt_nil_check(F->e_831)).b, (*(P1029)rt_nil_check(F->e_831)).line), f_rel_node_837(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1029)rt_nil_check(F->e_831)).a, (*(P1029)rt_nil_check(F->e_831)).b, (*(P1029)rt_nil_check(F->e_831)).line), (*(P1029)rt_nil_check(F->e_831)).line);
goto ret_;
} else if (((rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_831)).name))->all), rt_str(">=", 2)) && F->has_lt_2452) && F->has_eq_2451)) {
F->result_ = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_837(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1029)rt_nil_check(F->e_831)).b, (*(P1029)rt_nil_check(F->e_831)).a, (*(P1029)rt_nil_check(F->e_831)).line), f_rel_node_837(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1029)rt_nil_check(F->e_831)).a, (*(P1029)rt_nil_check(F->e_831)).b, (*(P1029)rt_nil_check(F->e_831)).line), (*(P1029)rt_nil_check(F->e_831)).line);
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_rel_node_837(rstr *op_833, P1029 a_834, P1029 b_835, rt_int line_836) {
  struct f_rel_node_837fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_833 = op_833;
F->a_834 = a_834;
F->b_835 = b_835;
F->line_836 = line_836;
F->result_ = f_binop_106(f_mk_3(&(*F->op_833)), f_copy_node_842(F->a_834), f_copy_node_842(F->b_835), F->line_836);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_rel_not_840(P1029 x_838, rt_int line_839) {
  struct f_rel_not_840fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_838 = x_838;
F->line_839 = line_839;
F->n_2453 = NULL;
F->n_2453 = f_nn_65((((rt_int)8LL)), F->line_839);
(*(P1029)rt_nil_check(F->n_2453)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P1029)rt_nil_check(F->n_2453)).a = F->x_838;
F->result_ = F->n_2453;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_copy_node_842(P1029 e_841) {
  struct f_copy_node_842fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_841 = e_841;
F->x_2454 = NULL;
{ R1030 *cell2455 = rt_alloc(sizeof(R1030));
(*cell2455).name = NULL;
(*cell2455).tag = NULL;
(*cell2455).prags = NULL;
(*cell2455).labels = NULL;
(*cell2455).a = NULL;
(*cell2455).b = NULL;
(*cell2455).c = NULL;
(*cell2455).d = NULL;
(*cell2455).e = NULL;
(*cell2455).next = NULL;
F->x_2454 = cell2455;
}
(*(P1029)rt_nil_check(F->x_2454)).kind = (*(P1029)rt_nil_check(F->e_841)).kind;
(*(P1029)rt_nil_check(F->x_2454)).line = (*(P1029)rt_nil_check(F->e_841)).line;
(*(P1029)rt_nil_check(F->x_2454)).ival = (*(P1029)rt_nil_check(F->e_841)).ival;
(*(P1029)rt_nil_check(F->x_2454)).flag = (*(P1029)rt_nil_check(F->e_841)).flag;
(*(P1029)rt_nil_check(F->x_2454)).name = (*(P1029)rt_nil_check(F->e_841)).name;
(*(P1029)rt_nil_check(F->x_2454)).tag = (*(P1029)rt_nil_check(F->e_841)).tag;
(*(P1029)rt_nil_check(F->x_2454)).a = (*(P1029)rt_nil_check(F->e_841)).a;
(*(P1029)rt_nil_check(F->x_2454)).b = (*(P1029)rt_nil_check(F->e_841)).b;
(*(P1029)rt_nil_check(F->x_2454)).c = (*(P1029)rt_nil_check(F->e_841)).c;
(*(P1029)rt_nil_check(F->x_2454)).d = (*(P1029)rt_nil_check(F->e_841)).d;
F->result_ = F->x_2454;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1029 f_wrap_apply_844(P1029 e_843) {
  struct f_wrap_apply_844fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_843 = e_843;
F->x_2456 = NULL;
F->x_2456 = f_nn_65((((rt_int)10LL)), (*(P1029)rt_nil_check(F->e_843)).line);
(*(P1029)rt_nil_check(F->x_2456)).a = F->e_843;
F->result_ = F->x_2456;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_846(rstr *s_845) {
  struct f_c_string_846fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_845 = s_845;
F->n_2457 = ((rt_int)0LL);
{ rt_int lo2459 = ((rt_int)1LL), hi2460 = ((rt_int)(((*F->s_845)).len));
for (rt_int it2461 = lo2459; it2461 <= hi2460; it2461++) {
F->i_2458 = it2461;
if (((rt_str_get((*F->s_845), F->i_2458) == 92) || (rt_str_get((*F->s_845), F->i_2458) == 63))) {
F->n_2457 = rt_add(F->n_2457, ((rt_int)1LL));
}
}
}
{
F->r_2462 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_845)).len)), F->n_2457), ((rt_int)2LL)));
F->j_2463 = ((rt_int)1LL);
(*rt_str_at(&F->r_2462, ((rt_int)1LL))) = 34;
{ rt_int lo2465 = ((rt_int)1LL), hi2466 = ((rt_int)(((*F->s_845)).len));
for (rt_int it2467 = lo2465; it2467 <= hi2466; it2467++) {
F->i_2464 = it2467;
F->j_2463 = rt_add(F->j_2463, ((rt_int)1LL));
if (((rt_str_get((*F->s_845), F->i_2464) == 92) || (rt_str_get((*F->s_845), F->i_2464) == 63))) {
(*rt_str_at(&F->r_2462, F->j_2463)) = 92;
F->j_2463 = rt_add(F->j_2463, ((rt_int)1LL));
}
(*rt_str_at(&F->r_2462, F->j_2463)) = rt_str_get((*F->s_845), F->i_2464);
}
}
(*rt_str_at(&F->r_2462, rt_add(F->j_2463, ((rt_int)1LL)))) = 34;
F->result_ = F->r_2462;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1035 f_enum_type_of_849(rstr *lit_847, rt_int line_848) {
  struct f_enum_type_of_849fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_847 = lit_847;
F->line_848 = line_848;
F->y_2468 = NULL;
F->y_2468 = g_scope_stack_1073;
F->c_2469 = NULL;
if ((f_lit_index_265((*(P1035)rt_nil_check(g_ty_ascii_1117)).lits, &(*F->lit_847)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_1117;
goto ret_;
}
while ((F->y_2468 != NULL)) {
if ((((((*(P1039)rt_nil_check(F->y_2468)).kind == (((rt_int)6LL))) || ((*(P1039)rt_nil_check(F->y_2468)).kind == (((rt_int)5LL)))) && ((*(P1039)rt_nil_check(F->y_2468)).st != NULL)) && ((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_2468)).st)).kind == (((rt_int)72LL))))) {
if ((f_lit_index_265((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_2468)).st)).a, &(*F->lit_847)) >= ((rt_int)0LL))) {
if (((*(P1039)rt_nil_check(F->y_2468)).kind == (((rt_int)5LL)))) {
F->st_2470 = NULL;
F->st_2470 = f_nn_65((((rt_int)80LL)), F->line_848);
(*(P1029)rt_nil_check(F->st_2470)).name = (*(P1039)rt_nil_check(F->y_2468)).name;
F->result_ = f_resolve_subtype_268(F->st_2470, &F->c_2469);
goto ret_;
}
F->result_ = f_resolve_subtype_268((*(P1039)rt_nil_check(F->y_2468)).st, &F->c_2469);
goto ret_;
}
}
F->y_2468 = (*(P1039)rt_nil_check(F->y_2468)).stack;
}
f_fail_23(F->line_848, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_847)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_851(P1029 e_850) {
  struct f_ptr_attribute_851fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_850 = e_850;
F->lv_2471 = NULL;
F->t_2472 = NULL;
F->c_2473 = NULL;
F->p_2475 = NULL;
F->saved_2476 = NULL;
F->saved_2476 = g_code_1083;
if ((!f_is_lvalue_763((*(P1029)rt_nil_check(F->e_850)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_1083 = f_new_buffer_24();
f_lvalue_769((*(P1029)rt_nil_check(F->e_850)).a, &F->lv_2471, &F->t_2472, &F->c_2473, &F->ro_2474);
g_code_1083 = F->saved_2476;
if ((((*(P1035)rt_nil_check(F->t_2472)).kind != (((rt_int)8LL))) || ((*(P1035)rt_nil_check(F->t_2472)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_2475 = (*(P1029)rt_nil_check((*(P1035)rt_nil_check(F->t_2472)).decl)).d;
while ((F->p_2475 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2475)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_850)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_2475 = (*(P1029)rt_nil_check(F->p_2475)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_854(P1029 e_852, P1035 *t_853) {
  struct f_attribute_854fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_852 = e_852;
F->t_853 = t_853;
F->t_853v = *F->t_853;
F->bt_2477 = NULL;
F->c_2478 = NULL;
F->base_2479 = NULL;
F->sub_2480 = NULL;
F->sub_2480 = f_as_subtype_297((*(P1029)rt_nil_check(F->e_852)).a);
F->name_2481 = rt_str_copy((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_852)).name))->all));
if ((F->sub_2480 != NULL)) {
F->bt_2477 = f_resolve_subtype_268(F->sub_2480, &F->c_2478);
} else {
F->bt_2477 = f_value_subtype_290((*(P1029)rt_nil_check(F->e_852)).a, &F->c_2478, &F->base_2479);
}
if ((((((*(P1035)rt_nil_check(F->bt_2477)).kind == (((rt_int)8LL))) && (F->c_2478 != NULL)) && ((*(P1031)rt_nil_check(F->c_2478)).args != NULL)) && ((*(P1035)rt_nil_check(F->bt_2477)).decl != NULL))) {
F->p_2482 = NULL;
F->p_2482 = (*(P1029)rt_nil_check((*(P1035)rt_nil_check(F->bt_2477)).decl)).d;
F->a_2483 = NULL;
F->a_2483 = (*(P1031)rt_nil_check(F->c_2478)).args;
while (((F->p_2482 != NULL) && (F->a_2483 != NULL))) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2482)).name))->all), F->name_2481)) {
F->pc_2484 = NULL;
F->v_2485 = rt_str_copy(f_gexpr_800(F->a_2483, f_resolve_subtype_268((*(P1029)rt_nil_check(F->p_2482)).a, &F->pc_2484), &F->t_853v));
F->result_ = F->v_2485;
goto ret_;
}
F->p_2482 = (*(P1029)rt_nil_check(F->p_2482)).next;
F->a_2483 = (*(P1029)rt_nil_check(F->a_2483)).next;
}
}
while ((((*(P1035)rt_nil_check(F->bt_2477)).kind == (((rt_int)8LL))) && (F->base_2479 != NULL))) {
f_finish_ptr_475(F->bt_2477);
F->base_2479 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_761(&(((P1022)rt_nil_check(F->base_2479))->all), F->bt_2477); b_; }));
F->bt_2477 = (*(P1035)rt_nil_check(F->bt_2477)).target;
F->c_2478 = NULL;
if (((*(P1035)rt_nil_check(F->bt_2477)).kind == (((rt_int)5LL)))) {
F->c_2478 = f_new_cons_184();
(*(P1031)rt_nil_check(F->c_2478)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1022)rt_nil_check(F->base_2479))->all)), rt_str(").len", 5)); b_; }));
}
}
if ((((((*(P1035)rt_nil_check(F->bt_2477)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->bt_2477)).tparams != NULL)) && (F->c_2478 != NULL)) && ((*(P1031)rt_nil_check(F->c_2478)).args != NULL))) {
F->p_2486 = NULL;
F->p_2486 = (*(P1035)rt_nil_check(F->bt_2477)).tparams;
F->a_2487 = NULL;
F->a_2487 = (*(P1031)rt_nil_check(F->c_2478)).args;
while (((F->p_2486 != NULL) && (F->a_2487 != NULL))) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2486)).name))->all), F->name_2481)) {
F->pt_2488 = f_tparam_type_352(F->bt_2477, &F->name_2481);
F->v_2489 = rt_str_copy(f_gexpr_800(F->a_2487, F->pt_2488, &F->t_853v));
F->result_ = F->v_2489;
goto ret_;
}
F->p_2486 = (*(P1029)rt_nil_check(F->p_2486)).next;
F->a_2487 = (*(P1029)rt_nil_check(F->a_2487)).next;
}
}
if ((((*(P1035)rt_nil_check(F->bt_2477)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->bt_2477)).tparams == NULL))) {
F->c_2478 = f_base_cons_226(F->bt_2477, F->c_2478);
F->bt_2477 = f_base_of_223(F->bt_2477);
}
F->t_853v = g_ty_int_1114;
if ((rt_str_eq(F->name_2481, rt_str("LEN", 3)) && ((*(P1035)rt_nil_check(F->bt_2477)).kind == (((rt_int)5LL))))) {
if (((F->c_2478 != NULL) && ((*(P1031)rt_nil_check(F->c_2478)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_2478)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23((*(P1029)rt_nil_check(F->e_852)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_2481, rt_str("LEN", 3)) && ((*(P1035)rt_nil_check(F->bt_2477)).kind == (((rt_int)12LL))))) {
if (((F->c_2478 != NULL) && ((*(P1031)rt_nil_check(F->c_2478)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_2478)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23((*(P1029)rt_nil_check(F->e_852)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_2481, rt_str("MIN", 3)) || rt_str_eq(F->name_2481, rt_str("MAX", 3))) && f_scalar_kind_186(F->bt_2477))) {
F->t_853v = F->bt_2477;
if (rt_str_eq(F->name_2481, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_198(F->bt_2477, F->c_2478);
goto ret_;
}
F->result_ = f_sub_hi_201(F->bt_2477, F->c_2478);
goto ret_;
} else if ((rt_str_eq(F->name_2481, rt_str("PREC", 4)) && ((*(P1035)rt_nil_check(F->bt_2477)).kind == (((rt_int)3LL))))) {
if (((F->c_2478 != NULL) && ((*(P1031)rt_nil_check(F->c_2478)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_2478)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_2481, rt_str("ACCESS", 6)) || rt_str_eq(F->name_2481, rt_str("USE", 3))) && ((*(P1035)rt_nil_check(F->bt_2477)).kind == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_867(F->e_852, F->bt_2477, F->c_2478, F->base_2479, &F->t_853v);
goto ret_;
}
f_fail_23((*(P1029)rt_nil_check(F->e_852)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_2481, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_853) = F->t_853v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_859(P1029 sa_855, P1029 sb_856, rstr *op_857, rt_int line_858) {
  struct f_subtype_compare_859fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_855 = sa_855;
F->sb_856 = sb_856;
F->op_857 = op_857;
F->line_858 = line_858;
F->ca_2490 = NULL;
F->cb_2491 = NULL;
F->ta_2492 = NULL;
F->ta_2492 = f_resolve_subtype_268(F->sa_855, &F->ca_2490);
F->tb_2493 = NULL;
F->tb_2493 = f_resolve_subtype_268(F->sb_856, &F->cb_2491);
F->r_2494 = NULL;
F->r_2494 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_2495 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_2495, rt_str("1", 1));
F->no_2496 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_2496, rt_str("0", 1));
if (rt_str_eq((*F->op_857), rt_str("/=", 2))) {
rt_str_assign(&F->yes_2495, rt_str("0", 1));
rt_str_assign(&F->no_2496, rt_str("1", 1));
}
if ((!f_same_221(F->ta_2492, F->tb_2493))) {
F->result_ = F->no_2496;
goto ret_;
} else if (((((*(P1029)rt_nil_check(F->sa_855)).kind == (((rt_int)80LL))) && rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->sa_855)).name))->all), rt_str("TYPEOF", 6))) || (((*(P1029)rt_nil_check(F->sb_856)).kind == (((rt_int)80LL))) && rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->sb_856)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_2495;
goto ret_;
}
if (f_scalar_kind_186(F->ta_2492)) {
F->r_2494 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_198(F->ta_2492, F->ca_2490)), rt_str(") == (", 6)), f_sub_lo_198(F->tb_2493, F->cb_2491)), rt_str(") && (", 6)), f_sub_hi_201(F->ta_2492, F->ca_2490)), rt_str(") == (", 6)), f_sub_hi_201(F->tb_2493, F->cb_2491)), rt_str(")", 1)); b_; }));
if (((*(P1035)rt_nil_check(F->ta_2492)).kind == (((rt_int)3LL)))) {
F->r_2494 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_2494))->all), rt_str(" && ", 4)), f_float_prec_861(F->ca_2490)), rt_str(" == ", 4)), f_float_prec_861(F->cb_2491)); b_; }));
}
} else if (((*(P1035)rt_nil_check(F->ta_2492)).kind == (((rt_int)5LL)))) {
if (((((F->ca_2490 != NULL) && (F->cb_2491 != NULL)) && ((*(P1031)rt_nil_check(F->ca_2490)).slen != NULL)) && ((*(P1031)rt_nil_check(F->cb_2491)).slen != NULL))) {
F->r_2494 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1022)rt_nil_check((*(P1031)rt_nil_check(F->ca_2490)).slen))->all)), rt_str(") == (", 6)), (((P1022)rt_nil_check((*(P1031)rt_nil_check(F->cb_2491)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_2490 == NULL) || ((*(P1031)rt_nil_check(F->ca_2490)).slen == NULL)) && ((F->cb_2491 == NULL) || ((*(P1031)rt_nil_check(F->cb_2491)).slen == NULL))))) {
F->r_2494 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if (((*(P1035)rt_nil_check(F->ta_2492)).kind == (((rt_int)6LL)))) {
{ rt_int lo2498 = ((rt_int)1LL), hi2499 = (*(P1035)rt_nil_check(F->ta_2492)).ndim;
for (rt_int it2500 = lo2498; it2500 <= hi2499; it2500++) {
F->k_2497 = it2500;
if (((((F->ca_2490 != NULL) && (F->cb_2491 != NULL)) && (f_cons_lo_252(F->ca_2490, F->k_2497) != NULL)) && (f_cons_lo_252(F->cb_2491, F->k_2497) != NULL))) {
F->r_2494 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_2494))->all), rt_str(" && (", 5)), (((P1022)rt_nil_check(f_cons_lo_252(F->ca_2490, F->k_2497)))->all)), rt_str(") == (", 6)), (((P1022)rt_nil_check(f_cons_lo_252(F->cb_2491, F->k_2497)))->all)), rt_str(") && (", 6)), (((P1022)rt_nil_check(f_cons_hi_255(F->ca_2490, F->k_2497)))->all)), rt_str(") == (", 6)), (((P1022)rt_nil_check(f_cons_hi_255(F->cb_2491, F->k_2497)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if ((((((*(P1035)rt_nil_check(F->ta_2492)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->ta_2492)).tparams != NULL)) && (F->ca_2490 != NULL)) && (F->cb_2491 != NULL))) {
F->a_2501 = NULL;
F->a_2501 = (*(P1031)rt_nil_check(F->ca_2490)).args;
F->b_2502 = NULL;
F->b_2502 = (*(P1031)rt_nil_check(F->cb_2491)).args;
F->at_2503 = NULL;
F->bt2_2504 = NULL;
while (((F->a_2501 != NULL) && (F->b_2502 != NULL))) {
F->x_2505 = rt_str_copy(f_gexpr_800(F->a_2501, NULL, &F->at_2503));
F->y_2506 = rt_str_copy(f_gexpr_800(F->b_2502, F->at_2503, &F->bt2_2504));
F->r_2494 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_2494))->all), rt_str(" && ", 4)), f_eq_code_418(F->at_2503, &F->x_2505, &F->y_2506)); b_; }));
F->a_2501 = (*(P1029)rt_nil_check(F->a_2501)).next;
F->b_2502 = (*(P1029)rt_nil_check(F->b_2502)).next;
}
} else if (((((*(P1035)rt_nil_check(F->ta_2492)).kind == (((rt_int)17LL))) && (F->ca_2490 != NULL)) && (F->cb_2491 != NULL))) {
if ((((*(P1031)rt_nil_check(F->ca_2490)).lo != NULL) && ((*(P1031)rt_nil_check(F->cb_2491)).lo != NULL))) {
F->r_2494 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1022)rt_nil_check((*(P1031)rt_nil_check(F->ca_2490)).lo))->all)), rt_str(") == (", 6)), (((P1022)rt_nil_check((*(P1031)rt_nil_check(F->cb_2491)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P1031)rt_nil_check(F->ca_2490)).lo != NULL) || ((*(P1031)rt_nil_check(F->cb_2491)).lo != NULL))) {
F->r_2494 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_857), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P1022)rt_nil_check(F->r_2494))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1022)rt_nil_check(F->r_2494))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_861(P1031 c_860) {
  struct f_float_prec_861fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_860 = c_860;
if (((F->c_860 != NULL) && ((*(P1031)rt_nil_check(F->c_860)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_860)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_867(P1029 e_862, P1035 bt_863, P1031 c_864, P1022 base_865, P1035 *t_866) {
  struct f_file_attribute_867fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_862 = e_862;
F->bt_863 = bt_863;
F->c_864 = c_864;
F->base_865 = base_865;
F->t_866 = t_866;
F->t_866v = *F->t_866;
F->t_866v = g_file_mode_type_1125;
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_862)).name))->all), rt_str("ACCESS", 6))) {
F->t_866v = g_file_access_type_1131;
}
if ((F->base_865 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_862)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P1022)rt_nil_check(F->base_865))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P1022)rt_nil_check(F->base_865))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_864 != NULL) && ((*(P1031)rt_nil_check(F->c_864)).args != NULL))) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_862)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_800((*(P1031)rt_nil_check(F->c_864)).args, F->t_866v, &F->t_866v);
goto ret_;
} else if (((*(P1029)rt_nil_check((*(P1031)rt_nil_check(F->c_864)).args)).next != NULL)) {
F->result_ = f_gexpr_800((*(P1029)rt_nil_check((*(P1031)rt_nil_check(F->c_864)).args)).next, F->t_866v, &F->t_866v);
goto ret_;
}
}
f_fail_23((*(P1029)rt_nil_check(F->e_862)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_862)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_866) = F->t_866v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_871(P1029 e_868, P1035 want_869, P1035 *t_870) {
  struct f_gbinop_871fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_868 = e_868;
F->want_869 = want_869;
F->t_870 = t_870;
F->t_870v = *F->t_870;
F->op_2507 = NULL;
F->op_2507 = (*(P1029)rt_nil_check(F->e_868)).name;
F->ta_2508 = NULL;
F->tb_2509 = NULL;
F->hint_2510 = NULL;
F->uy_2511 = NULL;
F->t_870v = g_ty_bool_1115;
if (((((rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("/=", 2)) || rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str(">", 1))) || rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("<=", 2))) || rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str(">=", 2))) && (f_derived_relation_832(F->e_868) != NULL))) {
F->result_ = f_gexpr_800(f_derived_relation_832(F->e_868), g_ty_bool_1115, &F->t_870v);
goto ret_;
}
if ((f_lookup_163(&(((P1022)rt_nil_check(F->op_2507))->all)) != NULL)) {
F->l_2512 = NULL;
F->r_2513 = NULL;
F->l_2512 = f_copy_node_842((*(P1029)rt_nil_check(F->e_868)).a);
F->r_2513 = f_copy_node_842((*(P1029)rt_nil_check(F->e_868)).b);
(*(P1029)rt_nil_check(F->l_2512)).next = F->r_2513;
F->uy_2511 = f_user_op_947(&(((P1022)rt_nil_check(F->op_2507))->all), F->l_2512);
if ((F->uy_2511 != NULL)) {
F->call_2514 = NULL;
F->call_2514 = f_nn_65((((rt_int)10LL)), (*(P1029)rt_nil_check(F->e_868)).line);
F->fname_2515 = NULL;
F->fname_2515 = f_nn_65((((rt_int)7LL)), (*(P1029)rt_nil_check(F->e_868)).line);
(*(P1029)rt_nil_check(F->fname_2515)).name = F->op_2507;
(*(P1029)rt_nil_check(F->call_2514)).a = F->fname_2515;
(*(P1029)rt_nil_check(F->call_2514)).b = F->l_2512;
F->result_ = f_gcall_951(F->call_2514, 0, &F->t_870v);
goto ret_;
}
}
if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("IN", 2))) {
F->s_2516 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_868)).b, NULL, &F->tb_2509));
if (((*(P1035)rt_nil_check(F->tb_2509)).kind != (((rt_int)16LL)))) {
f_fail_23((*(P1029)rt_nil_check(F->e_868)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2517 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_868)).a, (*(P1035)rt_nil_check(F->tb_2509)).elem, &F->ta_2508));
f_check_type_232(F->ta_2508, (*(P1035)rt_nil_check(F->tb_2509)).elem, (*(P1029)rt_nil_check(F->e_868)).line);
F->t_870v = g_ty_bool_1115;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_in(", 9), F->a_2517), rt_str(", ", 2)), F->s_2516), rt_str(")", 1));
goto ret_;
}
}
if ((((rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("AND", 3)) || rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("OR", 2))) || rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("XOR", 3))) && (f_set_operands_822(F->e_868, F->want_869) != NULL))) {
F->a_2518 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_868)).a, f_set_operands_822(F->e_868, F->want_869), &F->ta_2508));
F->b_2519 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_868)).b, F->ta_2508, &F->tb_2509));
f_check_type_232(F->tb_2509, F->ta_2508, (*(P1029)rt_nil_check(F->e_868)).line);
F->t_870v = F->ta_2508;
if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_inter(", 12), F->a_2518), rt_str(", ", 2)), F->b_2519), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_union(", 12), F->a_2518), rt_str(", ", 2)), F->b_2519), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_xor(", 10), F->a_2518), rt_str(", ", 2)), F->b_2519), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("AND", 3)) || rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("OR", 2))) || rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("XOR", 3)))) {
F->a_2520 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_868)).a, g_ty_bool_1115, &F->ta_2508));
F->b_2521 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_868)).b, g_ty_bool_1115, &F->tb_2509));
f_check_type_232(F->ta_2508, g_ty_bool_1115, (*(P1029)rt_nil_check(F->e_868)).line);
f_check_type_232(F->tb_2509, g_ty_bool_1115, (*(P1029)rt_nil_check(F->e_868)).line);
if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2520), rt_str(" && ", 4)), F->b_2521), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2520), rt_str(" || ", 4)), F->b_2521), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2520), rt_str(" != ", 4)), F->b_2521), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("&", 1)) && (F->want_869 != NULL)) && ((*(P1035)rt_nil_check(f_base_of_223(F->want_869))).kind == (((rt_int)6LL))))) {
F->at_2522 = NULL;
F->at_2522 = f_base_of_223(F->want_869);
F->a_2523 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_868)).a, F->at_2522, &F->ta_2508));
F->b_2524 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_868)).b, F->at_2522, &F->tb_2509));
f_check_type_232(F->ta_2508, F->at_2522, (*(P1029)rt_nil_check(F->e_868)).line);
f_check_type_232(F->tb_2509, F->at_2522, (*(P1029)rt_nil_check(F->e_868)).line);
if ((((*(P1035)rt_nil_check(F->at_2522)).ndim != ((rt_int)1LL)) || ((*(P1035)rt_nil_check(f_base_of_223((*(P1035)rt_nil_check(F->at_2522)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->e_868)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_781(F->at_2522);
F->t_870v = F->at_2522;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_234(F->at_2522)), rt_str("(", 1)), F->a_2523), rt_str(", ", 2)), F->b_2524), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("&", 1))) {
F->wa_2525 = NULL;
F->wb_2526 = NULL;
F->ws_2527 = NULL;
F->ce_2528 = NULL;
F->ce_2528 = g_ty_ascii_1117;
if (((F->want_869 != NULL) && ((*(P1035)rt_nil_check(F->want_869)).kind == (((rt_int)5LL))))) {
F->ws_2527 = F->want_869;
F->ce_2528 = f_str_elem_218(F->want_869);
}
if (((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_868)).a)).kind == (((rt_int)4LL)))) {
F->wa_2525 = F->ce_2528;
} else {
F->wa_2525 = F->ws_2527;
}
if (((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_868)).b)).kind == (((rt_int)4LL)))) {
F->wb_2526 = F->ce_2528;
} else {
F->wb_2526 = F->ws_2527;
}
{
F->a_2529 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_868)).a, F->wa_2525, &F->ta_2508));
F->b_2530 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_868)).b, F->wb_2526, &F->tb_2509));
F->t_870v = g_ty_string_1118;
if (((*(P1035)rt_nil_check(F->ta_2508)).kind == (((rt_int)5LL)))) {
F->t_870v = F->ta_2508;
} else if (((*(P1035)rt_nil_check(F->tb_2509)).kind == (((rt_int)5LL)))) {
F->t_870v = F->tb_2509;
} else if ((!f_same_221(F->ta_2508, g_ty_ascii_1117))) {
F->t_870v = f_new_typ_183((((rt_int)5LL)));
(*(P1035)rt_nil_check(F->t_870v)).elem = F->ta_2508;
}
if ((((*(P1035)rt_nil_check(F->ta_2508)).kind == (((rt_int)6LL))) && ((*(P1035)rt_nil_check(F->tb_2509)).kind == (((rt_int)6LL))))) {
f_need_slice_781(F->ta_2508);
f_check_type_232(F->tb_2509, F->ta_2508, (*(P1029)rt_nil_check(F->e_868)).line);
F->t_870v = F->ta_2508;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_234(F->ta_2508)), rt_str("(", 1)), F->a_2529), rt_str(", ", 2)), F->b_2530), rt_str(")", 1));
goto ret_;
}
if (((*(P1035)rt_nil_check(F->ta_2508)).kind == (((rt_int)5LL)))) {
f_check_type_232(f_str_cat_part_817(F->tb_2509), f_str_elem_218(F->ta_2508), (*(P1029)rt_nil_check(F->e_868)).line);
} else if (((*(P1035)rt_nil_check(F->tb_2509)).kind == (((rt_int)5LL)))) {
f_check_type_232(F->ta_2508, f_str_elem_218(F->tb_2509), (*(P1029)rt_nil_check(F->e_868)).line);
} else {
f_check_type_232(F->tb_2509, F->ta_2508, (*(P1029)rt_nil_check(F->e_868)).line);
}
if ((((*(P1035)rt_nil_check(F->ta_2508)).kind == (((rt_int)5LL))) && ((*(P1035)rt_nil_check(F->tb_2509)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2529), rt_str(", ", 2)), F->b_2530), rt_str(")", 1));
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->ta_2508)).kind == (((rt_int)5LL))) && ((*(P1035)rt_nil_check(F->tb_2509)).kind == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2529), rt_str(", ", 2)), F->b_2530), rt_str(")", 1));
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->ta_2508)).kind == (((rt_int)4LL))) && ((*(P1035)rt_nil_check(F->tb_2509)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2529), rt_str(", ", 2)), F->b_2530), rt_str(")", 1));
goto ret_;
} else if ((((*(P1035)rt_nil_check(F->ta_2508)).kind == (((rt_int)4LL))) && ((*(P1035)rt_nil_check(F->tb_2509)).kind == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2529), rt_str(", ", 2)), F->b_2530), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P1029)rt_nil_check(F->e_868)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("=", 1)) || rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("/=", 2))) && (f_as_subtype_297((*(P1029)rt_nil_check(F->e_868)).a) != NULL)) && (f_as_subtype_297((*(P1029)rt_nil_check(F->e_868)).b) != NULL))) {
F->t_870v = g_ty_bool_1115;
F->result_ = f_subtype_compare_859(f_as_subtype_297((*(P1029)rt_nil_check(F->e_868)).a), f_as_subtype_297((*(P1029)rt_nil_check(F->e_868)).b), &(((P1022)rt_nil_check(F->op_2507))->all), (*(P1029)rt_nil_check(F->e_868)).line);
goto ret_;
}
if ((f_is_rel_111(&(((P1022)rt_nil_check(F->op_2507))->all)) && (!rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("IN", 2))))) {
if (((((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_868)).a)).kind == (((rt_int)4LL))) || ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_868)).a)).kind == (((rt_int)6LL)))) || ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_868)).a)).kind == (((rt_int)1LL))))) {
F->dummy_2531 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_868)).b, NULL, &F->hint_2510));
} else if (((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->e_868)).a)).kind == (((rt_int)14LL)))) {
F->hint_2510 = f_peek_type_819((*(P1029)rt_nil_check(F->e_868)).b);
}
{
F->a_2532 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_868)).a, F->hint_2510, &F->ta_2508));
F->b_2533 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_868)).b, F->ta_2508, &F->tb_2509));
F->ct_2534 = NULL;
F->ct_2534 = f_base_of_223(F->ta_2508);
F->t_870v = g_ty_bool_1115;
if ((((*(P1035)rt_nil_check(F->ta_2508)).kind != (((rt_int)11LL))) && ((*(P1035)rt_nil_check(F->tb_2509)).kind != (((rt_int)11LL))))) {
f_check_type_232(F->tb_2509, F->ta_2508, (*(P1029)rt_nil_check(F->e_868)).line);
}
if (((*(P1035)rt_nil_check(F->ta_2508)).kind == (((rt_int)11LL)))) {
F->ct_2534 = f_base_of_223(F->tb_2509);
}
if (((*(P1035)rt_nil_check(F->ct_2534)).kind == (((rt_int)5LL)))) {
if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2532), rt_str(", ", 2)), F->b_2533), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2532), rt_str(", ", 2)), F->b_2533), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2532), rt_str(", ", 2)), F->b_2533), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2532), rt_str(", ", 2)), F->b_2533), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2533), rt_str(", ", 2)), F->a_2532), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2533), rt_str(", ", 2)), F->a_2532), rt_str(")", 1));
goto ret_;
}
if (((*(P1035)rt_nil_check(F->ct_2534)).kind == (((rt_int)16LL)))) {
if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), F->a_2532), rt_str(", ", 2)), F->b_2533), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!y_set_eq(", 11), F->a_2532), rt_str(", ", 2)), F->b_2533), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->a_2532), rt_str(", ", 2)), F->b_2533), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->b_2533), rt_str(", ", 2)), F->a_2532), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->a_2532), rt_str(", ", 2)), F->b_2533), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->b_2533), rt_str(", ", 2)), F->a_2532), rt_str(")", 1));
goto ret_;
}
if (((((((((*(P1035)rt_nil_check(F->ct_2534)).kind == (((rt_int)2LL))) || ((*(P1035)rt_nil_check(F->ct_2534)).kind == (((rt_int)8LL)))) || ((*(P1035)rt_nil_check(F->ct_2534)).kind == (((rt_int)11LL)))) || ((*(P1035)rt_nil_check(F->ct_2534)).kind == (((rt_int)14LL)))) || ((*(P1035)rt_nil_check(F->ct_2534)).kind == (((rt_int)12LL)))) && (!rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("=", 1)))) && (!rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("/=", 2))))) {
f_fail_23((*(P1029)rt_nil_check(F->e_868)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only = and /= compare values of this type", 41); b_; }));
}
if (f_composite_394(F->ct_2534)) {
if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_418(F->ct_2534, &F->a_2532, &F->b_2533);
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_418(F->ct_2534, &F->a_2532, &F->b_2533)), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P1029)rt_nil_check(F->e_868)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2532), rt_str(" == ", 4)), F->b_2533), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2532), rt_str(" != ", 4)), F->b_2533), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2532), rt_str(" ", 1)), (((P1022)rt_nil_check(F->op_2507))->all)), rt_str(" ", 1)), F->b_2533), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2535 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_868)).a, F->want_869, &F->ta_2508));
F->b_2536 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->e_868)).b, f_exponent_want_978(&(((P1022)rt_nil_check(F->op_2507))->all), F->ta_2508), &F->tb_2509));
if ((((*(P1035)rt_nil_check(F->ta_2508)).kind == (((rt_int)3LL))) || ((*(P1035)rt_nil_check(F->tb_2509)).kind == (((rt_int)3LL))))) {
F->t_870v = g_ty_float_1116;
if (((rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("+", 1)) || rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("-", 1))) || rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(", 10), F->a_2535), rt_str(" ", 1)), (((P1022)rt_nil_check(F->op_2507))->all)), rt_str(" ", 1)), F->b_2536), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(rt_fdiv(", 18), F->a_2535), rt_str(", ", 2)), F->b_2536), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("**", 2))) {
f_check_type_232(F->tb_2509, g_ty_int_1114, (*(P1029)rt_nil_check(F->e_868)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fpow(", 10), F->a_2535), rt_str(", ", 2)), F->b_2536), rt_str(")", 1));
goto ret_;
}
}
f_check_type_232(F->ta_2508, g_ty_int_1114, (*(P1029)rt_nil_check(F->e_868)).line);
f_check_type_232(F->tb_2509, g_ty_int_1114, (*(P1029)rt_nil_check(F->e_868)).line);
F->t_870v = g_ty_int_1114;
if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2535), rt_str(", ", 2)), F->b_2536), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2535), rt_str(", ", 2)), F->b_2536), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2535), rt_str(", ", 2)), F->b_2536), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2535), rt_str(", ", 2)), F->b_2536), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2535), rt_str(", ", 2)), F->b_2536), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1022)rt_nil_check(F->op_2507))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2535), rt_str(", ", 2)), F->b_2536), rt_str(")", 1));
goto ret_;
}
f_fail_23((*(P1029)rt_nil_check(F->e_868)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P1022)rt_nil_check(F->op_2507))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_870) = F->t_870v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_876(P1029 e_872, P1035 want_873, P1031 ctx_874, P1035 *t_875) {
  struct f_constructor_876fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_872 = e_872;
F->want_873 = want_873;
F->ctx_874 = ctx_874;
F->t_875 = t_875;
F->t_875v = *F->t_875;
F->it_2537 = NULL;
F->it_2537 = (*(P1029)rt_nil_check(F->e_872)).a;
F->f_2538 = NULL;
F->vt_2539 = NULL;
if (((F->want_873 != NULL) && ((*(P1035)rt_nil_check(F->want_873)).kind == (((rt_int)16LL))))) {
F->s_2540 = NULL;
F->s_2540 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_empty_set_306(F->want_873); b_; }));
F->t_875v = F->want_873;
while ((F->it_2537 != NULL)) {
F->v_2541 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->it_2537)).b, (*(P1035)rt_nil_check(F->want_873)).elem, &F->vt_2539));
f_check_type_232(F->vt_2539, (*(P1035)rt_nil_check(F->want_873)).elem, (*(P1029)rt_nil_check(F->e_872)).line);
F->s_2540 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_add(", 10), (((P1022)rt_nil_check(F->s_2540))->all)), rt_str(", ", 2)), F->v_2541), rt_str(")", 1)); b_; }));
F->it_2537 = (*(P1029)rt_nil_check(F->it_2537)).next;
}
F->result_ = (((P1022)rt_nil_check(F->s_2540))->all);
goto ret_;
}
if (((F->want_873 != NULL) && ((*(P1035)rt_nil_check(F->want_873)).kind == (((rt_int)15LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->e_872)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->want_873)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_873 != NULL) && ((*(P1035)rt_nil_check(F->want_873)).kind == (((rt_int)6LL))))) {
F->result_ = f_array_cons_890(F->e_872, F->want_873, F->ctx_874, &F->t_875v);
goto ret_;
}
if (((F->want_873 != NULL) && ((*(P1035)rt_nil_check(F->want_873)).kind == (((rt_int)17LL))))) {
if ((((((F->it_2537 == NULL) || ((*(P1029)rt_nil_check(F->it_2537)).next != NULL)) || ((*(P1029)rt_nil_check(F->it_2537)).a == NULL)) || ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->it_2537)).a)).next != NULL)) || ((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->it_2537)).a)).a)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->e_872)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2538 = (*(P1035)rt_nil_check(F->want_873)).fields;
{
F->i_2542 = ((rt_int)0LL);
F->tmp_2543 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2538 != NULL) && (!rt_str_eq((((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_2538)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->it_2537)).a)).a)).name))->all))))) {
F->i_2542 = rt_add(F->i_2542, ((rt_int)1LL));
F->f_2538 = (*(P1037)rt_nil_check(F->f_2538)).next;
}
if ((F->f_2538 == NULL)) {
f_fail_23((*(P1029)rt_nil_check(F->e_872)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->it_2537)).a)).a)).name))->all)); b_; }));
}
F->t_875v = F->want_873;
g_cons_ctx_1104 = (*(P1037)rt_nil_check(F->f_2538)).c;
{
F->v_2544 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->it_2537)).b, (*(P1037)rt_nil_check(F->f_2538)).t, &F->vt_2539));
f_check_type_232(F->vt_2539, (*(P1037)rt_nil_check(F->f_2538)).t, (*(P1029)rt_nil_check(F->e_872)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->want_873)), rt_str(" ", 1)), F->tmp_2543), rt_str("; ", 2)), F->tmp_2543), rt_str(".tag = ", 7)), f_itos_7(F->i_2542)), rt_str("; ", 2)), F->tmp_2543), rt_str(".u.", 3)), f_field_c_17(&(((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_2538)).name))->all))), rt_str(" = ", 3)), f_comp_value_880((*(P1037)rt_nil_check(F->f_2538)).t, (*(P1037)rt_nil_check(F->f_2538)).c, &F->v_2544)), rt_str("; ", 2)), F->tmp_2543), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_873 == NULL) || ((*(P1035)rt_nil_check(F->want_873)).kind != (((rt_int)7LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->e_872)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_875v = F->want_873;
F->f_2538 = (*(P1035)rt_nil_check(F->want_873)).fields;
{
F->tmp_2545 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2546 = NULL;
F->parts_2546 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->want_873)), rt_str(" ", 1)), F->tmp_2545), rt_str(";", 1)); b_; }));
while ((F->it_2537 != NULL)) {
F->k_2547 = NULL;
F->k_2547 = (*(P1029)rt_nil_check(F->it_2537)).a;
F->shared_2548 = NULL;
if ((F->k_2547 == NULL)) {
f_fail_23((*(P1029)rt_nil_check(F->e_872)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2547 != NULL)) {
if (((((F->f_2538 == NULL) || ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->k_2547)).a)).kind != (((rt_int)7LL)))) || ((*(P1029)rt_nil_check(F->k_2547)).b != NULL)) || (!rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->k_2547)).a)).name))->all), (((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_2538)).name))->all))))) {
if ((F->f_2538 == NULL)) {
f_fail_23((*(P1029)rt_nil_check(F->e_872)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23((*(P1029)rt_nil_check(F->e_872)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_2538)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->it_2537)).a)).next == NULL)) {
g_cons_ctx_1104 = (*(P1037)rt_nil_check(F->f_2538)).c;
{
F->v_2549 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->it_2537)).b, (*(P1037)rt_nil_check(F->f_2538)).t, &F->vt_2539));
f_check_type_232(F->vt_2539, (*(P1037)rt_nil_check(F->f_2538)).t, (*(P1029)rt_nil_check(F->e_872)).line);
F->parts_2546 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->parts_2546))->all), rt_str(" ", 1)), F->tmp_2545), rt_str(".", 1)), f_field_c_17(&(((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_2538)).name))->all))), rt_str(" = ", 3)), f_comp_value_880((*(P1037)rt_nil_check(F->f_2538)).t, (*(P1037)rt_nil_check(F->f_2538)).c, &F->v_2549)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2548 == NULL)) {
F->v_2550 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->it_2537)).b, (*(P1037)rt_nil_check(F->f_2538)).t, &F->vt_2539));
F->shared_2548 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_232(F->vt_2539, (*(P1037)rt_nil_check(F->f_2538)).t, (*(P1029)rt_nil_check(F->e_872)).line);
F->parts_2546 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->parts_2546))->all), rt_str(" ", 1)), f_ctype_234((*(P1037)rt_nil_check(F->f_2538)).t)), rt_str(" ", 1)), (((P1022)rt_nil_check(F->shared_2548))->all)), rt_str(" = ", 3)), F->v_2550), rt_str(";", 1)); b_; }));
}
f_check_type_232(F->vt_2539, (*(P1037)rt_nil_check(F->f_2538)).t, (*(P1029)rt_nil_check(F->e_872)).line);
F->parts_2546 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->parts_2546))->all), rt_str(" ", 1)), F->tmp_2545), rt_str(".", 1)), f_field_c_17(&(((P1022)rt_nil_check((*(P1037)rt_nil_check(F->f_2538)).name))->all))), rt_str(" = ", 3)), f_comp_value_880((*(P1037)rt_nil_check(F->f_2538)).t, (*(P1037)rt_nil_check(F->f_2538)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_414((*(P1037)rt_nil_check(F->f_2538)).t, &(((P1022)rt_nil_check(F->shared_2548))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2538 = (*(P1037)rt_nil_check(F->f_2538)).next;
F->k_2547 = (*(P1029)rt_nil_check(F->k_2547)).next;
}
F->it_2537 = (*(P1029)rt_nil_check(F->it_2537)).next;
}
if ((F->f_2538 != NULL)) {
f_fail_23((*(P1029)rt_nil_check(F->e_872)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->parts_2546))->all), rt_str(" ", 1)), F->tmp_2545), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_875) = F->t_875v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_880(P1035 t_877, P1031 c_878, rstr *v_879) {
  struct f_comp_value_880fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_877 = t_877;
F->c_878 = c_878;
F->v_879 = v_879;
if (((((*(P1035)rt_nil_check(F->t_877)).kind == (((rt_int)15LL))) && ((*(P1035)rt_nil_check(F->t_877)).assignp != NULL)) && (g_in_func_1085 || f_top_level_406((*(P1035)rt_nil_check(F->t_877)).assignp)))) {
F->ct_2551 = rt_str_copy(f_ctype_234(F->t_877));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_2551), rt_str(" s_ = ", 6)), (*F->v_879)), rt_str("; ", 2)), F->ct_2551), rt_str(" t_ = ", 6)), f_copy_code_414(F->t_877, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s_", 2); b_; }))), rt_str("; ", 2)), f_user_call2_400((*(P1035)rt_nil_check(F->t_877)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("t_", 2); b_; }), 1, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s_", 2); b_; }), 0)), rt_str("; t_; })", 8));
goto ret_;
} else if (((F->c_878 == NULL) || (((*(P1031)rt_nil_check(F->c_878)).lo != NULL) && f_has_at_882(&(((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_878)).lo))->all))))) {
F->result_ = f_copy_code_414(F->t_877, &(*F->v_879));
goto ret_;
} else if (((((*(P1035)rt_nil_check(F->t_877)).kind == (((rt_int)5LL))) && ((*(P1031)rt_nil_check(F->c_878)).slen != NULL)) && (!f_has_at_882(&(((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_878)).slen))->all))))) {
F->result_ = f_copy_code_414(F->t_877, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_879)), rt_str(", ", 2)), (((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_878)).slen))->all)), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_213(F->t_877, F->c_878, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_414(F->t_877, &(*F->v_879)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_882(rstr *s_881) {
  struct f_has_at_882fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_881 = s_881;
{ rt_int lo2553 = ((rt_int)1LL), hi2554 = ((rt_int)(((*F->s_881)).len));
for (rt_int it2555 = lo2553; it2555 <= hi2554; it2555++) {
F->i_2552 = it2555;
if ((rt_str_get((*F->s_881), F->i_2552) == 64)) {
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

static rstr f_set_elem_885(P1035 st_883, rstr *v_884) {
  struct f_set_elem_885fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_883 = st_883;
F->v_884 = v_884;
F->result_ = (*F->v_884);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_890(P1029 e_886, P1035 at_887, P1031 ctx_888, P1035 *t_889) {
  struct f_array_cons_890fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_886 = e_886;
F->at_887 = at_887;
F->ctx_888 = ctx_888;
F->t_889 = t_889;
F->t_889v = *F->t_889;
F->tmp_2556 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2557 = NULL;
F->parts_2557 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->at_887)), rt_str(" ", 1)), F->tmp_2556), rt_str(";", 1)); b_; }));
F->it_2558 = NULL;
F->it_2558 = (*(P1029)rt_nil_check(F->e_886)).a;
F->positional_2559 = 1;
F->t_889v = F->at_887;
while ((F->it_2558 != NULL)) {
if (((*(P1029)rt_nil_check(F->it_2558)).a != NULL)) {
F->positional_2559 = 0;
}
F->it_2558 = (*(P1029)rt_nil_check(F->it_2558)).next;
}
{ rt_int lo2561 = ((rt_int)1LL), hi2562 = (*(P1035)rt_nil_check(F->at_887)).ndim;
for (rt_int it2563 = lo2561; it2563 <= hi2562; it2563++) {
F->k_2560 = it2563;
F->lo_2564 = NULL;
F->hi_2565 = NULL;
if ((((F->ctx_888 != NULL) && (f_cons_lo_252(F->ctx_888, F->k_2560) != NULL)) && (!f_has_at_882(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1022)rt_nil_check(f_cons_lo_252(F->ctx_888, F->k_2560)))->all); b_; }))))) {
F->lo_2564 = f_cons_lo_252(F->ctx_888, F->k_2560);
F->hi_2565 = f_cons_hi_255(F->ctx_888, F->k_2560);
} else if ((((*(P1035)rt_nil_check(F->at_887)).ndim == ((rt_int)1LL)) && F->positional_2559)) {
if (((*(P1035)rt_nil_check(f_base_of_223((*(P1035)rt_nil_check(F->at_887)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2564 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2564 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2565 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1022)rt_nil_check(F->lo_2564))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_71((*(P1029)rt_nil_check(F->e_886)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23((*(P1029)rt_nil_check(F->e_886)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2557 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->parts_2557))->all), rt_str(" ", 1)), F->tmp_2556), rt_str(".", 1)), f_dim_lo_242(F->k_2560)), rt_str(" = ", 3)), (((P1022)rt_nil_check(F->lo_2564))->all)), rt_str("; ", 2)), F->tmp_2556), rt_str(".", 1)), f_dim_hi_244(F->k_2560)), rt_str(" = ", 3)), (((P1022)rt_nil_check(F->hi_2565))->all)), rt_str(";", 1)); b_; }));
}
}
if (((*(P1035)rt_nil_check(F->at_887)).ndim == ((rt_int)1LL))) {
F->parts_2557 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->parts_2557))->all), rt_str(" ", 1)), F->tmp_2556), rt_str(".lo2 = ", 7)), F->tmp_2556), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2557 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->parts_2557))->all), rt_str(" rt_int n_", 10)), F->tmp_2556), rt_str(" = ", 3)), f_acnt_249(F->at_887, &F->tmp_2556)), rt_str("; ", 2)), F->tmp_2556), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_234((*(P1035)rt_nil_check(F->at_887)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2556), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2556), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2556), rt_str(" + 1);", 6)); b_; }));
F->parts_2557 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->parts_2557))->all), f_fill_items_896((*(P1029)rt_nil_check(F->e_886)).a, F->at_887, &F->tmp_2556, NULL, ((rt_int)1LL))); b_; }));
F->parts_2557 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->parts_2557))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2556), rt_str("; i_++) if (seen_", 17)), F->tmp_2556), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2556), rt_str("; })", 4)); b_; }));
F->result_ = (((P1022)rt_nil_check(F->parts_2557))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_889) = F->t_889v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_896(P1029 items_891, P1035 at_892, rstr *tmp_893, P1033 prefix_894, rt_int dim_895) {
  struct f_fill_items_896fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_891 = items_891;
F->at_892 = at_892;
F->tmp_893 = tmp_893;
F->prefix_894 = prefix_894;
F->dim_895 = dim_895;
F->it_2566 = NULL;
F->it_2566 = F->items_891;
F->pos_2567 = ((rt_int)0LL);
F->r_2568 = NULL;
F->r_2568 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2569 = NULL;
while ((F->it_2566 != NULL)) {
if (((*(P1029)rt_nil_check(F->it_2566)).a == NULL)) {
if (((F->dim_895 < (*(P1035)rt_nil_check(F->at_892)).ndim) && ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->it_2566)).b)).kind == (((rt_int)14LL))))) {
F->r_2568 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_2568))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_895)), rt_str(" = ", 3)), (*F->tmp_893)), rt_str(".", 1)), f_dim_lo_242(F->dim_895)), rt_str(" + ", 3)), f_itos_7(F->pos_2567)), rt_str("; ", 2)), f_fill_items_896((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->it_2566)).b)).a, F->at_892, &(*F->tmp_893), f_add_line_901(F->prefix_894, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_895)); b_; })), rt_add(F->dim_895, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2570 = rt_str_copy(f_item_value_906((*(P1029)rt_nil_check(F->it_2566)).b, F->at_892, f_e_line_898(F->it_2566), &F->vt_2569));
if (((F->dim_895 == ((rt_int)1LL)) && ((*(P1035)rt_nil_check(F->at_892)).ndim > ((rt_int)1LL)))) {
F->r_2568 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_2568))->all), rt_str(" { ", 3)), F->v_2570), rt_str(" if (", 5)), f_itos_7(F->pos_2567)), rt_str(" >= n_", 6)), (*F->tmp_893)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_893)), rt_str(".p[", 3)), f_itos_7(F->pos_2567)), rt_str("] = ", 4)), f_copy_code_414((*(P1035)rt_nil_check(F->at_892)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_893)), rt_str("[", 1)), f_itos_7(F->pos_2567)), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2568 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_2568))->all), rt_str(" { ", 3)), F->v_2570), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_895)), rt_str(" = ", 3)), (*F->tmp_893)), rt_str(".", 1)), f_dim_lo_242(F->dim_895)), rt_str(" + ", 3)), f_itos_7(F->pos_2567)), rt_str("; ", 2)), f_store_at_916(F->at_892, &(*F->tmp_893), f_add_line_901(F->prefix_894, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_895)); b_; })), F->dim_895)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2567 = rt_add(F->pos_2567, ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_895, f_list_len_71((*(P1029)rt_nil_check(F->it_2566)).a)), ((rt_int)1LL)) == (*(P1035)rt_nil_check(F->at_892)).ndim)) {
F->k_2571 = NULL;
F->k_2571 = (*(P1029)rt_nil_check(F->it_2566)).a;
F->d_2572 = F->dim_895;
F->pre_2573 = NULL;
F->pre_2573 = F->prefix_894;
F->loops_2574 = NULL;
F->loops_2574 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2575 = NULL;
F->ends_2575 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2576 = rt_str_copy(f_item_value_906((*(P1029)rt_nil_check(F->it_2566)).b, F->at_892, (*(P1029)rt_nil_check(F->it_2566)).line, &F->vt_2569));
while ((F->k_2571 != NULL)) {
F->xv_2577 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->d_2572)));
F->loops_2574 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->loops_2574))->all), f_key_loop_911(F->k_2571, F->at_892, F->d_2572, &F->xv_2577)); b_; }));
F->ends_2575 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->ends_2575))->all), rt_str(" }", 2)); b_; }));
F->pre_2573 = f_add_line_901(F->pre_2573, &F->xv_2577);
F->d_2572 = rt_add(F->d_2572, ((rt_int)1LL));
F->k_2571 = (*(P1029)rt_nil_check(F->k_2571)).next;
}
F->r_2568 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_2568))->all), rt_str(" { ", 3)), F->v_2576), (((P1022)rt_nil_check(F->loops_2574))->all)), rt_str(" ", 1)), f_store_at_916(F->at_892, &(*F->tmp_893), F->pre_2573, (*(P1035)rt_nil_check(F->at_892)).ndim)), (((P1022)rt_nil_check(F->ends_2575))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_895 == (*(P1035)rt_nil_check(F->at_892)).ndim) || ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->it_2566)).b)).kind == (((rt_int)14LL))))) {
F->k_2578 = NULL;
F->k_2578 = (*(P1029)rt_nil_check(F->it_2566)).a;
while ((F->k_2578 != NULL)) {
F->xv_2579 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_895)));
if ((F->dim_895 < (*(P1035)rt_nil_check(F->at_892)).ndim)) {
F->r_2568 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_2568))->all), rt_str(" {", 2)), f_key_loop_911(F->k_2578, F->at_892, F->dim_895, &F->xv_2579)), rt_str(" ", 1)), f_fill_items_896((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->it_2566)).b)).a, F->at_892, &(*F->tmp_893), f_add_line_901(F->prefix_894, &F->xv_2579), rt_add(F->dim_895, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2580 = rt_str_copy(f_item_value_906((*(P1029)rt_nil_check(F->it_2566)).b, F->at_892, (*(P1029)rt_nil_check(F->it_2566)).line, &F->vt_2569));
F->r_2568 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_2568))->all), rt_str(" { ", 3)), F->v_2580), f_key_loop_911(F->k_2578, F->at_892, F->dim_895, &F->xv_2579)), rt_str(" ", 1)), f_store_at_916(F->at_892, &(*F->tmp_893), f_add_line_901(F->prefix_894, &F->xv_2579), F->dim_895)), rt_str(" } }", 4)); b_; }));
}
F->k_2578 = (*(P1029)rt_nil_check(F->k_2578)).next;
}
} else {
f_fail_23((*(P1029)rt_nil_check(F->it_2566)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub((*(P1035)rt_nil_check(F->at_892)).ndim, F->dim_895), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2566 = (*(P1029)rt_nil_check(F->it_2566)).next;
}
F->result_ = (((P1022)rt_nil_check(F->r_2568))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_898(P1029 e_897) {
  struct f_e_line_898fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_897 = e_897;
F->result_ = (*(P1029)rt_nil_check(F->e_897)).line;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1033 f_add_line_901(P1033 l_899, rstr *s_900) {
  struct f_add_line_901fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_899 = l_899;
F->s_900 = s_900;
F->r_2581 = NULL;
F->tail_2582 = NULL;
F->x_2583 = NULL;
F->p_2584 = NULL;
F->p_2584 = F->l_899;
while ((F->p_2584 != NULL)) {
{ R1034 *cell2585 = rt_alloc(sizeof(R1034));
(*cell2585).s = NULL;
(*cell2585).next = NULL;
F->x_2583 = cell2585;
}
(*(P1033)rt_nil_check(F->x_2583)).s = (*(P1033)rt_nil_check(F->p_2584)).s;
if ((F->tail_2582 == NULL)) {
F->r_2581 = F->x_2583;
} else {
(*(P1033)rt_nil_check(F->tail_2582)).next = F->x_2583;
}
F->tail_2582 = F->x_2583;
F->p_2584 = (*(P1033)rt_nil_check(F->p_2584)).next;
}
{ R1034 *cell2586 = rt_alloc(sizeof(R1034));
(*cell2586).s = NULL;
(*cell2586).next = NULL;
F->x_2583 = cell2586;
}
(*(P1033)rt_nil_check(F->x_2583)).s = f_mk_3(&(*F->s_900));
if ((F->tail_2582 == NULL)) {
F->r_2581 = F->x_2583;
} else {
(*(P1033)rt_nil_check(F->tail_2582)).next = F->x_2583;
}
F->result_ = F->r_2581;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_906(P1029 e_902, P1035 at_903, rt_int line_904, P1035 *vt_905) {
  struct f_item_value_906fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_902 = e_902;
F->at_903 = at_903;
F->line_904 = line_904;
F->vt_905 = vt_905;
F->vt_905v = *F->vt_905;
g_cons_ctx_1104 = (*(P1035)rt_nil_check(F->at_903)).elemcons;
{
F->v_2587 = rt_str_copy(f_gexpr_800(F->e_902, (*(P1035)rt_nil_check(F->at_903)).elem, &F->vt_905v));
f_check_type_232(F->vt_905v, (*(P1035)rt_nil_check(F->at_903)).elem, F->line_904);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1035)rt_nil_check(F->at_903)).elem), rt_str(" v_ = ", 6)), f_comp_value_880((*(P1035)rt_nil_check(F->at_903)).elem, (*(P1035)rt_nil_check(F->at_903)).elemcons, &F->v_2587)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_905) = F->vt_905v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_911(P1029 k_907, P1035 at_908, rt_int d_909, rstr *xv_910) {
  struct f_key_loop_911fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_907 = k_907;
F->at_908 = at_908;
F->d_909 = d_909;
F->xv_910 = xv_910;
F->it_2588 = NULL;
F->lo_2589 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->k_907)).a, f_idx_type_258(F->at_908, F->d_909), &F->it_2588));
f_check_type_232(F->it_2588, f_idx_type_258(F->at_908, F->d_909), (*(P1029)rt_nil_check(F->k_907)).line);
if (((*(P1029)rt_nil_check(F->k_907)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_910)), rt_str(" = ", 3)), F->lo_2589), rt_str(";", 1));
goto ret_;
}
{
F->hi_2590 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->k_907)).b, f_idx_type_258(F->at_908, F->d_909), &F->it_2588));
f_check_type_232(F->it_2588, f_idx_type_258(F->at_908, F->d_909), (*(P1029)rt_nil_check(F->k_907)).line);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_910)), rt_str(" = ", 3)), F->lo_2589), rt_str(", h", 3)), (*F->xv_910)), rt_str(" = ", 3)), F->hi_2590), rt_str("; ", 2)), (*F->xv_910)), rt_str(" <= h", 5)), (*F->xv_910)), rt_str("; ", 2)), (*F->xv_910)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_916(P1035 at_912, rstr *tmp_913, P1033 xs_914, rt_int n_915) {
  struct f_store_at_916fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_912 = at_912;
F->tmp_913 = tmp_913;
F->xs_914 = xs_914;
F->n_915 = n_915;
F->off_2591 = NULL;
F->x_2592 = NULL;
F->x_2592 = F->xs_914;
F->k_2593 = ((rt_int)0LL);
while ((F->x_2592 != NULL)) {
F->k_2593 = rt_add(F->k_2593, ((rt_int)1LL));
{
F->l_2594 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_913), rt_str(".", 1)), f_dim_lo_242(F->k_2593)));
F->h_2595 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_913), rt_str(".", 1)), f_dim_hi_244(F->k_2593)));
if ((F->off_2591 == NULL)) {
F->off_2591 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P1022)rt_nil_check((*(P1033)rt_nil_check(F->x_2592)).s))->all)), rt_str(", ", 2)), F->l_2594), rt_str(", ", 2)), F->h_2595), rt_str(") - ", 4)), F->l_2594), rt_str(")", 1)); b_; }));
} else {
F->off_2591 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1022)rt_nil_check(F->off_2591))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2594), rt_str(", ", 2)), F->h_2595), rt_str(") + rt_index(", 13)), (((P1022)rt_nil_check((*(P1033)rt_nil_check(F->x_2592)).s))->all)), rt_str(", ", 2)), F->l_2594), rt_str(", ", 2)), F->h_2595), rt_str(") - ", 4)), F->l_2594), rt_str(")", 1)); b_; }));
}
}
F->x_2592 = (*(P1033)rt_nil_check(F->x_2592)).next;
}
if ((F->k_2593 != (*(P1035)rt_nil_check(F->at_912)).ndim)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7((*(P1035)rt_nil_check(F->at_912)).ndim)), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P1022)rt_nil_check(F->off_2591))->all)), rt_str("; ", 2)), (*F->tmp_913)), rt_str(".p[o_] = ", 9)), f_copy_code_414((*(P1035)rt_nil_check(F->at_912)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_913)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_919(P1039 y_917, P1029 args_918) {
  struct f_fits_919fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_917 = y_917;
F->args_918 = args_918;
F->a_2596 = NULL;
F->a_2596 = F->args_918;
F->pm_2597 = NULL;
F->pm_2597 = (*(P1039)rt_nil_check(F->y_917)).params;
F->t_2598 = NULL;
F->saved_2599 = NULL;
F->saved_2599 = g_code_1083;
F->ok_2600 = 1;
F->lv_2601 = NULL;
F->lc_2602 = NULL;
g_trial_1112 = rt_add(g_trial_1112, ((rt_int)1LL));
g_code_1083 = f_new_buffer_24();
{ rt_frame xf2604;
if (RT_TRY(xf2604)) {
while (((F->ok_2600 && (F->a_2596 != NULL)) && (F->pm_2597 != NULL))) {
if ((((*(P1041)rt_nil_check(F->pm_2597)).mode == (((rt_int)2LL))) || ((*(P1041)rt_nil_check(F->pm_2597)).mode == (((rt_int)3LL))))) {
f_lvalue_769(F->a_2596, &F->lv_2601, &F->t_2598, &F->lc_2602, &F->ro_2603);
} else {
F->v_2606 = rt_str_copy(f_gexpr_800(F->a_2596, (*(P1041)rt_nil_check(F->pm_2597)).t, &F->t_2598));
}
if ((!(f_same_221(F->t_2598, (*(P1041)rt_nil_check(F->pm_2597)).t) || (((*(P1035)rt_nil_check(F->t_2598)).kind == (((rt_int)11LL))) && ((*(P1035)rt_nil_check((*(P1041)rt_nil_check(F->pm_2597)).t)).kind == (((rt_int)8LL))))))) {
F->ok_2600 = 0;
}
F->a_2596 = (*(P1029)rt_nil_check(F->a_2596)).next;
F->pm_2597 = (*(P1041)rt_nil_check(F->pm_2597)).next;
}
if (((F->a_2596 != NULL) || (F->pm_2597 != NULL))) {
F->ok_2600 = 0;
}
RT_POP(xf2604);
} else {
RT_POP(xf2604);
int x2605 = rt_xcur;
if (0 || x2605 == ex_compile_error_1) {
F->ok_2600 = 0;
} else {
rt_raise(x2605);
}
}
}
g_trial_1112 = rt_sub(g_trial_1112, ((rt_int)1LL));
g_code_1083 = F->saved_2599;
F->result_ = F->ok_2600;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1039 f_resolve_overload_925(rstr *name_920, P1029 tt_921, P1029 args_922, int is_stmt_923, rt_int line_924) {
  struct f_resolve_overload_925fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_920 = name_920;
F->tt_921 = tt_921;
F->args_922 = args_922;
F->is_stmt_923 = is_stmt_923;
F->line_924 = line_924;
F->y_2607 = NULL;
F->first_2608 = NULL;
F->n_2609 = ((rt_int)0LL);
{ rt_int lo2611 = ((rt_int)1LL), hi2612 = ((rt_int)3LL);
for (rt_int it2613 = lo2611; it2613 <= hi2612; it2613++) {
F->pass_2610 = it2613;
F->y_2607 = f_overload_chain_931(&(*F->name_920), F->pass_2610);
while ((F->y_2607 != NULL)) {
if (((rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_2607)).name))->all), (*F->name_920)) && (((*(P1039)rt_nil_check(F->y_2607)).kind == (((rt_int)3LL))) || ((*(P1039)rt_nil_check(F->y_2607)).kind == (((rt_int)4LL))))) && ((F->pass_2610 != ((rt_int)1LL)) || ((*(P1039)rt_nil_check(F->y_2607)).depth >= g_gdepth_1102)))) {
F->n_2609 = rt_add(F->n_2609, ((rt_int)1LL));
if ((F->first_2608 == NULL)) {
F->first_2608 = F->y_2607;
}
if ((((((*(P1039)rt_nil_check(F->y_2607)).kind == (((rt_int)4LL))) == F->is_stmt_923) && f_tt_fits_928(F->y_2607, F->tt_921)) && f_fits_919(F->y_2607, F->args_922))) {
F->result_ = F->y_2607;
goto ret_;
}
}
F->y_2607 = (*(P1039)rt_nil_check(F->y_2607)).chain;
}
}
}
if (f_is_builtin_933(&(*F->name_920))) {
F->result_ = NULL;
goto ret_;
}
if ((F->n_2609 > ((rt_int)1LL))) {
f_fail_23(F->line_924, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_920)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2608;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_928(P1039 y_926, P1029 tt_927) {
  struct f_tt_fits_928fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_926 = y_926;
F->tt_927 = tt_927;
F->f_2614 = NULL;
F->a_2615 = NULL;
F->saved_2616 = NULL;
F->saved_2616 = g_code_1083;
F->ok_2617 = 1;
if ((((*(P1039)rt_nil_check(F->y_926)).decl == NULL) || ((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_926)).decl)).e == NULL))) {
F->result_ = (F->tt_927 == NULL);
goto ret_;
} else if ((F->tt_927 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2614 = (*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_926)).decl)).e;
F->a_2615 = F->tt_927;
g_trial_1112 = rt_add(g_trial_1112, ((rt_int)1LL));
g_code_1083 = f_new_buffer_24();
{ rt_frame xf2618;
if (RT_TRY(xf2618)) {
while (((F->ok_2617 && (F->f_2614 != NULL)) && (F->a_2615 != NULL))) {
F->fc_2620 = NULL;
F->ac_2621 = NULL;
F->fst_2622 = NULL;
F->fst_2622 = f_nn_65((((rt_int)80LL)), (*(P1029)rt_nil_check(F->f_2614)).line);
F->ft_2623 = NULL;
F->at_2624 = NULL;
(*(P1029)rt_nil_check(F->fst_2622)).name = (*(P1029)rt_nil_check(F->f_2614)).name;
F->ft_2623 = f_resolve_subtype_268(F->fst_2622, &F->fc_2620);
if (((*(P1029)rt_nil_check(F->a_2615)).kind >= (((rt_int)70LL)))) {
F->at_2624 = f_resolve_subtype_268(F->a_2615, &F->ac_2621);
} else {
F->ast_2625 = NULL;
F->ast_2625 = f_nn_65((((rt_int)80LL)), (*(P1029)rt_nil_check(F->a_2615)).line);
(*(P1029)rt_nil_check(F->ast_2625)).name = (*(P1029)rt_nil_check(F->a_2615)).name;
F->at_2624 = f_resolve_subtype_268(F->ast_2625, &F->ac_2621);
}
F->ok_2617 = f_same_221(F->ft_2623, F->at_2624);
F->f_2614 = (*(P1029)rt_nil_check(F->f_2614)).next;
F->a_2615 = (*(P1029)rt_nil_check(F->a_2615)).next;
}
F->ok_2617 = ((F->ok_2617 && (F->f_2614 == NULL)) && (F->a_2615 == NULL));
RT_POP(xf2618);
} else {
RT_POP(xf2618);
int x2619 = rt_xcur;
if (0 || x2619 == ex_compile_error_1) {
F->ok_2617 = 0;
} else {
rt_raise(x2619);
}
}
}
g_trial_1112 = rt_sub(g_trial_1112, ((rt_int)1LL));
g_code_1083 = F->saved_2616;
F->result_ = F->ok_2617;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1039 f_overload_chain_931(rstr *name_929, rt_int pass_930) {
  struct f_overload_chain_931fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_929 = name_929;
F->pass_930 = pass_930;
if (((g_genv_1070 == NULL) && (F->pass_930 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_930 == ((rt_int)2LL))) {
F->result_ = ({ A1045 b_ = (((P1043)rt_nil_check(g_genv_1070))->all); b_.p[(rt_index(f_hash_161(&(*F->name_929)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A1045 b_ = (((P1043)rt_nil_check(g_table_1069))->all); b_.p[(rt_index(f_hash_161(&(*F->name_929)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_933(rstr *n_932) {
  struct f_is_builtin_933fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_932 = n_932;
F->result_ = (((((((((((((((rt_str_eq((*F->n_932), rt_str("ABS", 3)) || rt_str_eq((*F->n_932), rt_str("POS", 3))) || rt_str_eq((*F->n_932), rt_str("SUCC", 4))) || rt_str_eq((*F->n_932), rt_str("PRED", 4))) || rt_str_eq((*F->n_932), rt_str("SQRT", 4))) || rt_str_eq((*F->n_932), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_932), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_932), rt_str("WRITE", 5))) || rt_str_eq((*F->n_932), rt_str("READLN", 6))) || rt_str_eq((*F->n_932), rt_str("SEND", 4))) || rt_str_eq((*F->n_932), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_932), rt_str("DELAY", 5))) || rt_str_eq((*F->n_932), rt_str("TIME", 4))) || rt_str_eq((*F->n_932), rt_str("CNVT", 4))) || rt_str_eq((*F->n_932), rt_str("FORMAT", 6))) || f_is_low_level_935(&(*F->n_932)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_935(rstr *n_934) {
  struct f_is_low_level_935fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_934 = n_934;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_934), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_934), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_934), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_934), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_934), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_934), rt_str("LOCK", 4))) || rt_str_eq((*F->n_934), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_934), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_934), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_934), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_934), rt_str("WAITING", 7))) || rt_str_eq((*F->n_934), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_934), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_934), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_934), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_934), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_934), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_934), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_934), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_939(P1029 tt_936, rt_int line_937, P1035 *t_938) {
  struct f_me_high_939fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_936 = tt_936;
F->line_937 = line_937;
F->t_938 = t_938;
F->t_938v = *F->t_938;
F->c_2626 = NULL;
if ((F->tt_936 == NULL)) {
f_fail_23(F->line_937, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_938v = f_resolve_subtype_268(F->tt_936, &F->c_2626);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->t_938v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_941(F->t_938v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_938) = F->t_938v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_941(P1035 t_940) {
  struct f_type_tag_941fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_940 = t_940;
if (((*(P1035)rt_nil_check(F->t_940)).name != NULL)) {
F->result_ = (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_940)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_944(P1029 e_942, rstr *name_943) {
  struct f_lock_ref_944fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_942 = e_942;
F->name_943 = name_943;
F->lv_2627 = NULL;
F->t_2628 = NULL;
F->c_2629 = NULL;
f_lvalue_769(F->e_942, &F->lv_2627, &F->t_2628, &F->c_2629, &F->ro_2630);
if (((*(P1035)rt_nil_check(F->t_2628)).kind != (((rt_int)13LL)))) {
f_fail_23((*(P1029)rt_nil_check(F->e_942)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_943), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P1022)rt_nil_check(F->lv_2627))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1039 f_user_op_947(rstr *op_945, P1029 args_946) {
  struct f_user_op_947fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_945 = op_945;
F->args_946 = args_946;
F->y_2631 = NULL;
{ rt_int lo2633 = ((rt_int)1LL), hi2634 = ((rt_int)3LL);
for (rt_int it2635 = lo2633; it2635 <= hi2634; it2635++) {
F->pass_2632 = it2635;
F->y_2631 = f_overload_chain_931(&(*F->op_945), F->pass_2632);
while ((F->y_2631 != NULL)) {
if ((((rt_str_eq((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_2631)).name))->all), (*F->op_945)) && ((*(P1039)rt_nil_check(F->y_2631)).kind == (((rt_int)3LL)))) && ((F->pass_2632 != ((rt_int)1LL)) || ((*(P1039)rt_nil_check(F->y_2631)).depth >= g_gdepth_1102))) && f_fits_919(F->y_2631, F->args_946))) {
F->result_ = F->y_2631;
goto ret_;
}
F->y_2631 = (*(P1039)rt_nil_check(F->y_2631)).chain;
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

static rstr f_gcall_951(P1029 e_948, int is_stmt_949, P1035 *t_950) {
  struct f_gcall_951fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_948 = e_948;
F->is_stmt_949 = is_stmt_949;
F->t_950 = t_950;
F->t_950v = *F->t_950;
F->gd_2636 = NULL;
F->fn_2637 = NULL;
F->fn_2637 = (*(P1029)rt_nil_check(F->e_948)).a;
F->tt_2638 = NULL;
F->y_2639 = NULL;
F->args_2640 = NULL;
F->args_2640 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2641 = NULL;
F->a_2641 = (*(P1029)rt_nil_check(F->e_948)).b;
F->pm_2642 = NULL;
F->lt_2643 = NULL;
F->vt_2644 = NULL;
F->lv_2645 = NULL;
F->lc_2646 = NULL;
if (((*(P1029)rt_nil_check(F->fn_2637)).kind == (((rt_int)12LL)))) {
F->tt_2638 = (*(P1029)rt_nil_check(F->fn_2637)).b;
F->fn_2637 = (*(P1029)rt_nil_check(F->fn_2637)).a;
}
F->y_2639 = f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2637)).name))->all));
if ((F->y_2639 == NULL)) {
F->result_ = f_builtin_1006(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2637)).name))->all), F->tt_2638, (*(P1029)rt_nil_check(F->e_948)).b, (*(P1029)rt_nil_check(F->e_948)).line, F->is_stmt_949, &F->t_950v);
goto ret_;
}
if (((((*(P1039)rt_nil_check(F->y_2639)).kind != (((rt_int)3LL))) && ((*(P1039)rt_nil_check(F->y_2639)).kind != (((rt_int)4LL)))) && ((*(P1039)rt_nil_check(F->y_2639)).kind != (((rt_int)10LL))))) {
F->alt_2648 = NULL;
F->alt_2648 = f_resolve_overload_925(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2637)).name))->all), F->tt_2638, (*(P1029)rt_nil_check(F->e_948)).b, F->is_stmt_949, (*(P1029)rt_nil_check(F->e_948)).line);
if ((F->alt_2648 != NULL)) {
F->y_2639 = F->alt_2648;
} else if (f_is_builtin_933(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2637)).name))->all))) {
F->result_ = f_builtin_1006(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2637)).name))->all), F->tt_2638, (*(P1029)rt_nil_check(F->e_948)).b, (*(P1029)rt_nil_check(F->e_948)).line, F->is_stmt_949, &F->t_950v);
goto ret_;
}
}
if (((*(P1039)rt_nil_check(F->y_2639)).kind == (((rt_int)10LL)))) {
F->gd_2636 = (*(P1039)rt_nil_check(F->y_2639)).decl;
F->y_2639 = f_instantiate_745(F->y_2639, F->tt_2638, (*(P1029)rt_nil_check(F->e_948)).b, (*(P1029)rt_nil_check(F->e_948)).line);
} else if ((((*(P1039)rt_nil_check(F->y_2639)).kind == (((rt_int)3LL))) || ((*(P1039)rt_nil_check(F->y_2639)).kind == (((rt_int)4LL))))) {
F->y_2639 = f_resolve_overload_925(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2637)).name))->all), F->tt_2638, (*(P1029)rt_nil_check(F->e_948)).b, F->is_stmt_949, (*(P1029)rt_nil_check(F->e_948)).line);
if ((F->y_2639 == NULL)) {
F->result_ = f_builtin_1006(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2637)).name))->all), F->tt_2638, (*(P1029)rt_nil_check(F->e_948)).b, (*(P1029)rt_nil_check(F->e_948)).line, F->is_stmt_949, &F->t_950v);
goto ret_;
}
}
if ((((*(P1039)rt_nil_check(F->y_2639)).kind != (((rt_int)3LL))) && ((*(P1039)rt_nil_check(F->y_2639)).kind != (((rt_int)4LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->e_948)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2637)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_965(F->y_2639, (*(P1029)rt_nil_check(F->e_948)).line);
if (((*(P1039)rt_nil_check(F->y_2639)).capn != NULL)) {
F->cr_2649 = NULL;
F->cr_2649 = g_caps_1088;
while ((F->cr_2649 != NULL)) {
if (((*(P1056)rt_nil_check(F->cr_2649)).d == (*(P1039)rt_nil_check(F->y_2639)).capn)) {
f_fail_23((*(P1029)rt_nil_check(F->e_948)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_2639)).name))->all), rt_str(" is a normal function with an imports list: it may not be invoked inside its capsule", 84)); b_; }));
}
F->cr_2649 = (*(P1056)rt_nil_check(F->cr_2649)).next;
}
}
if ((F->is_stmt_949 && ((*(P1039)rt_nil_check(F->y_2639)).kind != (((rt_int)4LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->e_948)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2637)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_949) && ((*(P1039)rt_nil_check(F->y_2639)).kind != (((rt_int)3LL))))) {
f_fail_23((*(P1029)rt_nil_check(F->e_948)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2637)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2642 = (*(P1039)rt_nil_check(F->y_2639)).params;
if (((*(P1039)rt_nil_check(F->y_2639)).level > ((rt_int)0LL))) {
F->args_2640 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2651 = ((rt_int)1LL), hi2652 = rt_sub(g_cur_level_1086, (*(P1039)rt_nil_check(F->y_2639)).level);
for (rt_int it2653 = lo2651; it2653 <= hi2652; it2653++) {
F->i_2650 = it2653;
F->args_2640 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->args_2640))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2641 != NULL) && (F->pm_2642 != NULL))) {
if ((((rt_int)(((((P1022)rt_nil_check(F->args_2640))->all)).len)) > ((rt_int)0LL))) {
F->args_2640 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->args_2640))->all), rt_str(", ", 2)); b_; }));
}
if (((((*(P1041)rt_nil_check(F->pm_2642)).mode == (((rt_int)2LL))) || ((*(P1041)rt_nil_check(F->pm_2642)).mode == (((rt_int)4LL)))) && f_explicit_rep_995(F->a_2641))) {
f_fail_23((*(P1029)rt_nil_check(F->e_948)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("data with an explicit representation may not be bound to a VAR or READONLY formal", 81); b_; }));
}
if ((((*(P1041)rt_nil_check(F->pm_2642)).mode == (((rt_int)2LL))) || ((*(P1041)rt_nil_check(F->pm_2642)).mode == (((rt_int)3LL))))) {
f_lvalue_769(F->a_2641, &F->lv_2645, &F->lt_2643, &F->lc_2646, &F->ro_2647);
if (F->ro_2647) {
f_fail_23((*(P1029)rt_nil_check(F->e_948)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check((*(P1041)rt_nil_check(F->pm_2642)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_232(F->lt_2643, (*(P1041)rt_nil_check(F->pm_2642)).t, (*(P1029)rt_nil_check(F->e_948)).line);
F->args_2640 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->args_2640))->all), rt_str("&", 1)), (((P1022)rt_nil_check(F->lv_2645))->all)), f_actual_bounds_999((*(P1041)rt_nil_check(F->pm_2642)).t, F->lt_2643, F->lc_2646)); b_; }));
} else if ((((*(P1041)rt_nil_check(F->pm_2642)).mode == (((rt_int)4LL))) && f_is_lvalue_763(F->a_2641))) {
f_lvalue_769(F->a_2641, &F->lv_2645, &F->lt_2643, &F->lc_2646, &F->ro_2647);
f_check_type_232(F->lt_2643, (*(P1041)rt_nil_check(F->pm_2642)).t, (*(P1029)rt_nil_check(F->e_948)).line);
F->args_2640 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->args_2640))->all), rt_str("&", 1)), (((P1022)rt_nil_check(F->lv_2645))->all)), f_actual_bounds_999((*(P1041)rt_nil_check(F->pm_2642)).t, F->lt_2643, F->lc_2646)); b_; }));
} else if (((*(P1041)rt_nil_check(F->pm_2642)).mode == (((rt_int)4LL)))) {
F->v_2654 = rt_str_copy(f_gexpr_in_811(F->a_2641, (*(P1041)rt_nil_check(F->pm_2642)).t, (*(P1041)rt_nil_check(F->pm_2642)).c, &F->vt_2644));
F->ct_2655 = rt_str_copy(f_ctype_234((*(P1041)rt_nil_check(F->pm_2642)).t));
f_check_type_232(F->vt_2644, (*(P1041)rt_nil_check(F->pm_2642)).t, (*(P1029)rt_nil_check(F->e_948)).line);
F->args_2640 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->args_2640))->all), rt_str("({ ", 3)), F->ct_2655), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2655), rt_str(")); *b_ = ", 10)), F->v_2654), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_186((*(P1041)rt_nil_check(F->pm_2642)).t)) {
F->args_2640 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->args_2640))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2656 = rt_str_copy(f_gexpr_in_811(F->a_2641, (*(P1041)rt_nil_check(F->pm_2642)).t, (*(P1041)rt_nil_check(F->pm_2642)).c, &F->vt_2644));
f_check_type_232(F->vt_2644, (*(P1041)rt_nil_check(F->pm_2642)).t, (*(P1029)rt_nil_check(F->e_948)).line);
F->args_2640 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->args_2640))->all), F->v_2656); b_; }));
}
F->a_2641 = (*(P1029)rt_nil_check(F->a_2641)).next;
F->pm_2642 = (*(P1041)rt_nil_check(F->pm_2642)).next;
}
if (((F->a_2641 != NULL) || (F->pm_2642 != NULL))) {
f_fail_23((*(P1029)rt_nil_check(F->e_948)).line, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->fn_2637)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_71((*(P1029)rt_nil_check(F->e_948)).b), f_list_len_71(F->a_2641)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_950v = (*(P1039)rt_nil_check(F->y_2639)).result;
if ((F->gd_2636 != NULL)) {
F->chk_2657 = rt_str_copy(f_same_subtypes_970(F->gd_2636, (*(P1029)rt_nil_check(F->e_948)).b));
if ((!rt_str_eq(F->chk_2657, rt_str("", 0)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), F->chk_2657), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("generic subtype", 15)), f_q_18()), rt_str("); ", 3)), (((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_2639)).cname))->all)), rt_str("(", 1)), (((P1022)rt_nil_check(F->args_2640))->all)), rt_str("); })", 5));
goto ret_;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_2639)).cname))->all), rt_str("(", 1)), (((P1022)rt_nil_check(F->args_2640))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_950) = F->t_950v;
  RT_FPOP();
  return F->result_;
}

static P1033 f_requires_953(P1039 y_952) {
  struct f_requires_953fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_952 = y_952;
if ((*(P1039)rt_nil_check(F->y_952)).reqdone) {
F->result_ = (*(P1039)rt_nil_check(F->y_952)).reqs;
goto ret_;
}
(*(P1039)rt_nil_check(F->y_952)).reqdone = 1;
if ((((*(P1039)rt_nil_check(F->y_952)).decl != NULL) && ((((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_952)).decl)).kind == (((rt_int)45LL))) || ((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_952)).decl)).kind == (((rt_int)46LL)))) || ((*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_952)).decl)).kind == (((rt_int)50LL)))))) {
F->imp_2658 = NULL;
F->imp_2658 = (*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_952)).decl)).d;
while ((F->imp_2658 != NULL)) {
f_add_req_956(F->y_952, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->imp_2658)).name))->all));
F->imp_2658 = (*(P1029)rt_nil_check(F->imp_2658)).next;
}
f_require_calls_959(F->y_952, (*(P1029)rt_nil_check((*(P1039)rt_nil_check(F->y_952)).decl)).c);
}
F->result_ = (*(P1039)rt_nil_check(F->y_952)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_956(P1039 y_954, rstr *name_955) {
  struct f_add_req_956fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_954 = y_954;
F->name_955 = name_955;
F->l_2659 = NULL;
if ((!f_seen_name_425((*(P1039)rt_nil_check(F->y_954)).reqs, &(*F->name_955)))) {
{ R1034 *cell2660 = rt_alloc(sizeof(R1034));
(*cell2660).s = NULL;
(*cell2660).next = NULL;
F->l_2659 = cell2660;
}
(*(P1033)rt_nil_check(F->l_2659)).s = f_mk_3(&(*F->name_955));
(*(P1033)rt_nil_check(F->l_2659)).next = (*(P1039)rt_nil_check(F->y_954)).reqs;
(*(P1039)rt_nil_check(F->y_954)).reqs = F->l_2659;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_959(P1039 y_957, P1029 e_958) {
  struct f_require_calls_959fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_957 = y_957;
F->e_958 = e_958;
F->x_2661 = NULL;
F->x_2661 = F->e_958;
while ((F->x_2661 != NULL)) {
if (((((((*(P1029)rt_nil_check(F->x_2661)).kind == (((rt_int)45LL))) || ((*(P1029)rt_nil_check(F->x_2661)).kind == (((rt_int)46LL)))) || ((*(P1029)rt_nil_check(F->x_2661)).kind == (((rt_int)50LL)))) || ((*(P1029)rt_nil_check(F->x_2661)).kind == (((rt_int)47LL)))) || ((*(P1029)rt_nil_check(F->x_2661)).kind == (((rt_int)51LL))))) {
F->x_2661 = (*(P1029)rt_nil_check(F->x_2661)).next;
} else {
F->callee_2662 = NULL;
if ((((((*(P1029)rt_nil_check(F->x_2661)).kind == (((rt_int)10LL))) || ((*(P1029)rt_nil_check(F->x_2661)).kind == (((rt_int)21LL)))) && ((*(P1029)rt_nil_check(F->x_2661)).a != NULL)) && ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->x_2661)).a)).kind == (((rt_int)7LL))))) {
F->callee_2662 = (*(P1029)rt_nil_check(F->x_2661)).a;
}
if ((F->callee_2662 != NULL)) {
F->z_2663 = NULL;
F->z_2663 = f_lookup_163(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->callee_2662)).name))->all));
if ((((F->z_2663 != NULL) && (F->z_2663 != F->y_957)) && (((*(P1039)rt_nil_check(F->z_2663)).kind == (((rt_int)4LL))) || ((*(P1039)rt_nil_check(F->z_2663)).kind == (((rt_int)3LL)))))) {
F->l_2664 = NULL;
F->l_2664 = f_requires_953(F->z_2663);
while ((F->l_2664 != NULL)) {
f_add_req_956(F->y_957, &(((P1022)rt_nil_check((*(P1033)rt_nil_check(F->l_2664)).s))->all));
F->l_2664 = (*(P1033)rt_nil_check(F->l_2664)).next;
}
}
}
if (((*(P1029)rt_nil_check(F->x_2661)).a != NULL)) {
f_require_calls_959(F->y_957, (*(P1029)rt_nil_check(F->x_2661)).a);
}
if (((*(P1029)rt_nil_check(F->x_2661)).b != NULL)) {
f_require_calls_959(F->y_957, (*(P1029)rt_nil_check(F->x_2661)).b);
}
if (((*(P1029)rt_nil_check(F->x_2661)).c != NULL)) {
f_require_calls_959(F->y_957, (*(P1029)rt_nil_check(F->x_2661)).c);
}
F->x_2661 = (*(P1029)rt_nil_check(F->x_2661)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_962(P1029 elems_960, rstr *name_961) {
  struct f_declared_in_962fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_960 = elems_960;
F->name_961 = name_961;
F->e_2665 = NULL;
F->e_2665 = F->elems_960;
while ((F->e_2665 != NULL)) {
if (((((*(P1029)rt_nil_check(F->e_2665)).kind == (((rt_int)40LL))) || ((*(P1029)rt_nil_check(F->e_2665)).kind == (((rt_int)41LL)))) && rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_2665)).name))->all), (*F->name_961)))) {
F->result_ = 1;
goto ret_;
}
F->e_2665 = (*(P1029)rt_nil_check(F->e_2665)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_965(P1039 y_963, rt_int line_964) {
  struct f_check_requires_965fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_963 = y_963;
F->line_964 = line_964;
F->l_2666 = NULL;
F->l_2666 = f_requires_953(F->y_963);
if ((((*(P1039)rt_nil_check(F->y_963)).home == NULL) || ((*(P1039)rt_nil_check(F->y_963)).level != g_cur_level_1086))) {
goto ret_;
}
while ((F->l_2666 != NULL)) {
F->z_2667 = NULL;
F->z_2667 = f_lookup_163(&(((P1022)rt_nil_check((*(P1033)rt_nil_check(F->l_2666)).s))->all));
if ((f_declared_in_962((*(P1039)rt_nil_check(F->y_963)).home, &(((P1022)rt_nil_check((*(P1033)rt_nil_check(F->l_2666)).s))->all)) && ((F->z_2667 == NULL) || ((*(P1039)rt_nil_check(F->z_2667)).depth < (*(P1039)rt_nil_check(F->y_963)).depth)))) {
f_fail_23(F->line_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check((*(P1039)rt_nil_check(F->y_963)).name))->all), rt_str(" requires ", 10)), (((P1022)rt_nil_check((*(P1033)rt_nil_check(F->l_2666)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2666 = (*(P1033)rt_nil_check(F->l_2666)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_delay_args_967(P1029 args_966) {
  struct f_act_delay_args_967fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->args_966 = args_966;
F->at_2668 = NULL;
F->t1_2669 = NULL;
F->t1_2669 = f_peek_type_819(F->args_966);
if (((F->t1_2669 != NULL) && ((*(P1035)rt_nil_check(F->t1_2669)).kind == (((rt_int)14LL))))) {
F->a_2670 = rt_str_copy(f_act_ref_651(F->args_966));
F->v_2671 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->args_966)).next, g_ty_int_1114, &F->at_2668));
f_check_type_232(F->at_2668, g_ty_int_1114, (*(P1029)rt_nil_check(F->args_966)).line);
F->result_ = rt_str_cat(rt_str_cat(F->v_2671, rt_str(", ", 2)), F->a_2670);
goto ret_;
}
{
F->v_2672 = rt_str_copy(f_gexpr_800(F->args_966, g_ty_int_1114, &F->at_2668));
f_check_type_232(F->at_2668, g_ty_int_1114, (*(P1029)rt_nil_check(F->args_966)).line);
F->result_ = rt_str_cat(rt_str_cat(F->v_2672, rt_str(", ", 2)), f_act_ref_651((*(P1029)rt_nil_check(F->args_966)).next));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_same_subtypes_970(P1029 gd_968, P1029 args_969) {
  struct f_same_subtypes_970fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_968 = gd_968;
F->args_969 = args_969;
F->p_2673 = NULL;
F->p_2673 = (*(P1029)rt_nil_check(F->gd_968)).a;
F->r_2674 = NULL;
F->r_2674 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->p_2673 != NULL)) {
if (((*(P1029)rt_nil_check(F->p_2673)).ival == ((rt_int)2LL))) {
F->fp_2675 = NULL;
F->fp_2675 = (*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->gd_968)).b)).a;
F->a_2676 = NULL;
F->a_2676 = F->args_969;
F->flo_2677 = NULL;
F->fhi_2678 = NULL;
while (((F->fp_2675 != NULL) && (F->a_2676 != NULL))) {
if ((((((*(P1029)rt_nil_check(F->fp_2675)).a != NULL) && ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->fp_2675)).a)).kind == (((rt_int)80LL)))) && rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->fp_2675)).a)).name))->all), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->p_2673)).name))->all))) && ((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->fp_2675)).a)).b == NULL))) {
F->st_2679 = NULL;
F->c_2680 = NULL;
F->base_2681 = NULL;
F->lo_2682 = NULL;
F->hi_2683 = NULL;
F->st_2679 = f_value_subtype_290(F->a_2676, &F->c_2680, &F->base_2681);
if (f_scalar_kind_186(F->st_2679)) {
F->lo_2682 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_lo_198(F->st_2679, F->c_2680); b_; }));
F->hi_2683 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_hi_201(F->st_2679, F->c_2680); b_; }));
} else if ((((*(P1035)rt_nil_check(F->st_2679)).kind == (((rt_int)5LL))) && ((*(P1031)rt_nil_check(F->c_2680)).slen != NULL))) {
F->lo_2682 = (*(P1031)rt_nil_check(F->c_2680)).slen;
F->hi_2683 = (*(P1031)rt_nil_check(F->c_2680)).slen;
}
if (((F->lo_2682 != NULL) && (F->flo_2677 != NULL))) {
if ((((rt_int)(((((P1022)rt_nil_check(F->r_2674))->all)).len)) > ((rt_int)0LL))) {
F->r_2674 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_2674))->all), rt_str(" || ", 4)); b_; }));
}
F->r_2674 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_2674))->all), rt_str("(", 1)), (((P1022)rt_nil_check(F->flo_2677))->all)), rt_str(") != (", 6)), (((P1022)rt_nil_check(F->lo_2682))->all)), rt_str(") || (", 6)), (((P1022)rt_nil_check(F->fhi_2678))->all)), rt_str(") != (", 6)), (((P1022)rt_nil_check(F->hi_2683))->all)), rt_str(")", 1)); b_; }));
} else if ((F->lo_2682 != NULL)) {
F->flo_2677 = F->lo_2682;
F->fhi_2678 = F->hi_2683;
}
}
F->fp_2675 = (*(P1029)rt_nil_check(F->fp_2675)).next;
F->a_2676 = (*(P1029)rt_nil_check(F->a_2676)).next;
}
}
F->p_2673 = (*(P1029)rt_nil_check(F->p_2673)).next;
}
F->result_ = (((P1022)rt_nil_check(F->r_2674))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mailbox_low_975(rstr *name_971, P1029 args_972, rt_int line_973, P1035 *t_974) {
  struct f_mailbox_low_975fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_971 = name_971;
F->args_972 = args_972;
F->line_973 = line_973;
F->t_974 = t_974;
F->t_974v = *F->t_974;
F->qv_2684 = NULL;
F->mv_2685 = NULL;
F->dv_2686 = NULL;
F->qt_2687 = NULL;
F->mt_2688 = NULL;
F->dt_2689 = NULL;
F->at_2690 = NULL;
F->c_2691 = NULL;
F->send_2693 = rt_str_eq(rt_str_slice((*F->name_971), ((rt_int)1LL), ((rt_int)4LL)), rt_str("SEND", 4));
f_lvalue_769(F->args_972, &F->qv_2684, &F->qt_2687, &F->c_2691, &F->ro_2692);
f_lvalue_769((*(P1029)rt_nil_check(F->args_972)).next, &F->mv_2685, &F->mt_2688, &F->c_2691, &F->ro_2692);
if (((*(P1035)rt_nil_check(F->mt_2688)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_973, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_971), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_974v = g_ty_void_1119;
if (((F->send_2693 && (F->qt_2687 != g_ty_send_st_1126)) || ((!F->send_2693) && (F->qt_2687 != g_ty_receive_st_1127)))) {
f_fail_23(F->line_973, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->name_971), rt_str(" needs a variable of subtype ", 29)), rt_str_slice((*F->name_971), ((rt_int)1LL), ((rt_int)4LL))), rt_str("_ST", 3)); b_; }));
}
if ((rt_str_eq((*F->name_971), rt_str("SEND_TEST", 9)) || rt_str_eq((*F->name_971), rt_str("RECEIVE_TEST", 12)))) {
F->t_974v = g_ty_bool_1115;
if (F->send_2693) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_send(", 14), (((P1022)rt_nil_check(F->mv_2685))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_receive(", 17), (((P1022)rt_nil_check(F->mv_2685))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_971), rt_str("SEND_COMPLETE", 13))) {
F->v_2694 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_972)).next)).next, (*(P1035)rt_nil_check(F->mt_2688)).elem, &F->at_2690));
f_check_type_232(F->at_2690, (*(P1035)rt_nil_check(F->mt_2688)).elem, F->line_973);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1035)rt_nil_check(F->mt_2688)).elem)), rt_str(" m_ = ", 6)), F->v_2694), rt_str("; if (!rt_cond_send(", 20)), (((P1022)rt_nil_check(F->mv_2685))->all)), rt_str(", &m_)) rt_raise(RT_X_EMPTY_MAILBOX); })", 40));
goto ret_;
} else if (rt_str_eq((*F->name_971), rt_str("RECEIVE_COMPLETE", 16))) {
f_lvalue_769((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_972)).next)).next, &F->dv_2686, &F->dt_2689, &F->c_2691, &F->ro_2692);
f_check_type_232(F->dt_2689, (*(P1035)rt_nil_check(F->mt_2688)).elem, F->line_973);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (!rt_cond_receive(", 24), (((P1022)rt_nil_check(F->mv_2685))->all)), rt_str(", &", 3)), (((P1022)rt_nil_check(F->dv_2686))->all)), rt_str(")) rt_raise(RT_X_EMPTY_MAILBOX); })", 35));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1022)rt_nil_check(F->qv_2684))->all)), rt_str(" = 1)", 5));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_974) = F->t_974v;
  RT_FPOP();
  return F->result_;
}

static P1035 f_exponent_want_978(rstr *op_976, P1035 ta_977) {
  struct f_exponent_want_978fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_976 = op_976;
F->ta_977 = ta_977;
if (rt_str_eq((*F->op_976), rt_str("**", 2))) {
F->result_ = g_ty_int_1114;
goto ret_;
}
F->result_ = F->ta_977;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_ref_982(P1029 e_979, int text_980, rt_int line_981) {
  struct f_file_ref_982fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_979 = e_979;
F->text_980 = text_980;
F->line_981 = line_981;
F->t_2695 = NULL;
F->f_2696 = rt_str_copy(f_gexpr_800(F->e_979, NULL, &F->t_2695));
if (((*(P1035)rt_nil_check(F->t_2695)).kind != (((rt_int)10LL)))) {
f_fail_23(F->line_981, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a file is required", 18); b_; }));
} else if ((F->text_980 && (!f_text_file_984(F->t_2695)))) {
f_fail_23(F->line_981, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a text file, whose components are characters, is required", 57); b_; }));
}
F->result_ = F->f_2696;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_text_file_984(P1035 t_983) {
  struct f_text_file_984fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_983 = t_983;
F->result_ = (((F->t_983 != NULL) && ((*(P1035)rt_nil_check(F->t_983)).kind == (((rt_int)10LL)))) && ((*(P1035)rt_nil_check(f_base_of_223(f_str_elem_218(F->t_983)))).kind == (((rt_int)4LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_conversion_989(P1029 tt_985, P1029 args_986, rt_int line_987, P1035 *t_988) {
  struct f_conversion_989fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_985 = tt_985;
F->args_986 = args_986;
F->line_987 = line_987;
F->t_988 = t_988;
F->t_988v = *F->t_988;
F->c_2697 = NULL;
F->at_2698 = NULL;
F->target_2699 = NULL;
F->target_2699 = f_resolve_subtype_268(F->tt_985, &F->c_2697);
F->a_2700 = rt_str_copy(f_gexpr_800(F->args_986, NULL, &F->at_2698));
F->t_988v = F->target_2699;
if ((((*(P1035)rt_nil_check(F->target_2699)).kind == (((rt_int)5LL))) && f_same_221(f_str_elem_218(F->target_2699), g_ty_ascii_1117))) {
F->r_2701 = NULL;
if (((*(P1035)rt_nil_check(F->at_2698)).kind == (((rt_int)1LL)))) {
F->r_2701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2700), rt_str(")", 1)); b_; }));
} else if (((*(P1035)rt_nil_check(F->at_2698)).kind == (((rt_int)3LL)))) {
F->r_2701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_str_of_float(", 18), F->a_2700), rt_str(", ", 2)), f_float_digits_991(F->args_986)), rt_str(")", 1)); b_; }));
} else if (((*(P1035)rt_nil_check(F->at_2698)).kind == (((rt_int)2LL)))) {
F->r_2701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2700), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5)); b_; }));
} else if (((*(P1035)rt_nil_check(f_base_of_223(F->at_2698))).kind == (((rt_int)4LL)))) {
F->r_2701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_enum_image(", 16), f_enum_names_993(f_base_of_223(F->at_2698))), rt_str(", ", 2)), F->a_2700), rt_str(")", 1)); b_; }));
} else if (((*(P1035)rt_nil_check(F->at_2698)).kind == (((rt_int)5LL)))) {
F->r_2701 = f_mk_3(&F->a_2700);
} else {
f_fail_23(F->line_987, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT converts BOOL, INT, FLOAT and ENUM values to strings", 57); b_; }));
}
if (((F->c_2697 != NULL) && ((*(P1031)rt_nil_check(F->c_2697)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_str_pad(", 13), (((P1022)rt_nil_check(F->r_2701))->all)), rt_str(", ", 2)), (((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_2697)).slen))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = (((P1022)rt_nil_check(F->r_2701))->all);
goto ret_;
} else if (((*(P1035)rt_nil_check(F->at_2698)).kind == (((rt_int)5LL)))) {
if (((*(P1035)rt_nil_check(F->target_2699)).kind == (((rt_int)1LL)))) {
F->result_ = f_checked_213(F->target_2699, F->c_2697, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2700), rt_str(")", 1)); b_; }));
goto ret_;
} else if (((*(P1035)rt_nil_check(F->target_2699)).kind == (((rt_int)3LL)))) {
F->result_ = f_checked_213(F->target_2699, F->c_2697, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_float_of_str(", 18), F->a_2700), rt_str(")", 1)); b_; }));
goto ret_;
} else if (((*(P1035)rt_nil_check(F->target_2699)).kind == (((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_bool_of_str(", 17), F->a_2700), rt_str(")", 1));
goto ret_;
} else if (((*(P1035)rt_nil_check(f_base_of_223(F->target_2699))).kind == (((rt_int)4LL)))) {
F->result_ = f_checked_213(F->target_2699, F->c_2697, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_enum_of_str(", 17), f_enum_names_993(f_base_of_223(F->target_2699))), rt_str(", ", 2)), f_itos_7(f_list_len_71((*(P1035)rt_nil_check(f_base_of_223(F->target_2699))).lits))), rt_str(", ", 2)), F->a_2700), rt_str(")", 1)); b_; }));
goto ret_;
}
} else if ((((*(P1035)rt_nil_check(F->target_2699)).kind == (((rt_int)3LL))) && ((*(P1035)rt_nil_check(F->at_2698)).kind == (((rt_int)1LL))))) {
F->result_ = f_checked_213(F->target_2699, F->c_2697, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2700), rt_str("))", 2)); b_; }));
goto ret_;
} else if (f_same_221(F->target_2699, F->at_2698)) {
F->result_ = f_checked_213(F->target_2699, F->c_2697, &F->a_2700);
goto ret_;
}
f_fail_23(F->line_987, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT does not convert between these types", 41); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_988) = F->t_988v;
  RT_FPOP();
  return F->result_;
}

static rstr f_float_digits_991(P1029 e_990) {
  struct f_float_digits_991fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_990 = e_990;
F->lv_2702 = NULL;
F->t_2703 = NULL;
F->c_2704 = NULL;
if ((((*(P1029)rt_nil_check(F->e_990)).kind == (((rt_int)8LL))) || ((*(P1029)rt_nil_check(F->e_990)).kind == (((rt_int)17LL))))) {
F->result_ = f_float_digits_991((*(P1029)rt_nil_check(F->e_990)).a);
goto ret_;
} else if (((*(P1029)rt_nil_check(F->e_990)).kind == (((rt_int)2LL)))) {
F->n_2706 = ((rt_int)0LL);
F->lead_2707 = 1;
{ rt_int lo2709 = ((rt_int)1LL), hi2710 = ((rt_int)(((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_990)).name))->all)).len));
for (rt_int it2711 = lo2709; it2711 <= hi2710; it2711++) {
F->i_2708 = it2711;
if (((rt_str_get((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_990)).name))->all), F->i_2708) == 69) || (rt_str_get((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_990)).name))->all), F->i_2708) == 101))) {
F->result_ = f_itos_7(F->n_2706);
goto ret_;
} else if ((f_is_digit_11(rt_str_get((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_990)).name))->all), F->i_2708)) && (!(F->lead_2707 && (rt_str_get((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_990)).name))->all), F->i_2708) == 48))))) {
F->n_2706 = rt_add(F->n_2706, ((rt_int)1LL));
F->lead_2707 = 0;
} else if ((f_is_digit_11(rt_str_get((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->e_990)).name))->all), F->i_2708)) && (!F->lead_2707))) {
F->n_2706 = rt_add(F->n_2706, ((rt_int)1LL));
}
}
}
F->result_ = f_itos_7(F->n_2706);
goto ret_;
} else if (f_is_lvalue_763(F->e_990)) {
F->saved_2712 = NULL;
F->saved_2712 = g_code_1083;
g_code_1083 = f_new_buffer_24();
f_lvalue_769(F->e_990, &F->lv_2702, &F->t_2703, &F->c_2704, &F->ro_2705);
g_code_1083 = F->saved_2712;
if (((F->c_2704 != NULL) && ((*(P1031)rt_nil_check(F->c_2704)).prec != NULL))) {
F->result_ = (((P1022)rt_nil_check((*(P1031)rt_nil_check(F->c_2704)).prec))->all);
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

static rstr f_enum_names_993(P1035 t_992) {
  struct f_enum_names_993fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_992 = t_992;
F->l_2713 = NULL;
F->l_2713 = (*(P1035)rt_nil_check(F->t_992)).lits;
F->r_2714 = NULL;
F->r_2714 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1035)rt_nil_check(F->t_992)).cname != NULL)) {
F->result_ = (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_992)).cname))->all);
goto ret_;
}
while ((F->l_2713 != NULL)) {
if ((((rt_int)(((((P1022)rt_nil_check(F->r_2714))->all)).len)) > ((rt_int)0LL))) {
F->r_2714 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1022)rt_nil_check(F->r_2714))->all), rt_str(", ", 2)); b_; }));
}
F->r_2714 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->r_2714))->all), f_q_18()), (((P1022)rt_nil_check((*(P1029)rt_nil_check(F->l_2713)).name))->all)), f_q_18()); b_; }));
F->l_2713 = (*(P1029)rt_nil_check(F->l_2713)).next;
}
(*(P1035)rt_nil_check(F->t_992)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("en_", 3); b_; })); b_; }));
f_put_27(g_out_globals_1079, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static const char *const ", 25), (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_992)).cname))->all)), rt_str("[] = {", 6)), (((P1022)rt_nil_check(F->r_2714))->all)), rt_str("};", 2)); b_; }));
F->result_ = (((P1022)rt_nil_check((*(P1035)rt_nil_check(F->t_992)).cname))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_explicit_rep_995(P1029 e_994) {
  struct f_explicit_rep_995fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_994 = e_994;
F->bt_2715 = NULL;
if ((((*(P1029)rt_nil_check(F->e_994)).kind != (((rt_int)11LL))) && (!(((*(P1029)rt_nil_check(F->e_994)).kind == (((rt_int)10LL))) && f_is_lvalue_763(F->e_994))))) {
F->result_ = 0;
goto ret_;
}
F->bt_2715 = f_peek_type_819((*(P1029)rt_nil_check(F->e_994)).a);
while ((((F->bt_2715 != NULL) && ((*(P1035)rt_nil_check(F->bt_2715)).kind == (((rt_int)8LL)))) && ((*(P1035)rt_nil_check(F->bt_2715)).repn == NULL))) {
f_finish_ptr_475(F->bt_2715);
F->bt_2715 = (*(P1035)rt_nil_check(F->bt_2715)).target;
}
if (((F->bt_2715 != NULL) && ((*(P1035)rt_nil_check(F->bt_2715)).repn != NULL))) {
F->result_ = 1;
goto ret_;
}
F->result_ = f_explicit_rep_995((*(P1029)rt_nil_check(F->e_994)).a);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_actual_bounds_999(P1035 ft_996, P1035 t_997, P1031 c_998) {
  struct f_actual_bounds_999fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_996 = ft_996;
F->t_997 = t_997;
F->c_998 = c_998;
if ((!f_scalar_kind_186(F->ft_996))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_198(F->t_997, F->c_998)), rt_str(", ", 2)), f_sub_hi_201(F->t_997, F->c_998));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_1006(rstr *name_1000, P1029 tt_1001, P1029 args_1002, rt_int line_1003, int is_stmt_1004, P1035 *t_1005) {
  struct f_builtin_1006fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_1000 = name_1000;
F->tt_1001 = tt_1001;
F->args_1002 = args_1002;
F->line_1003 = line_1003;
F->is_stmt_1004 = is_stmt_1004;
F->t_1005 = t_1005;
F->t_1005v = *F->t_1005;
F->at_2716 = NULL;
F->n_2717 = f_list_len_71(F->args_1002);
F->t_1005v = g_ty_void_1119;
if (((rt_str_eq((*F->name_1000), rt_str("POS", 3)) || rt_str_eq((*F->name_1000), rt_str("SUCC", 4))) || rt_str_eq((*F->name_1000), rt_str("PRED", 4)))) {
F->a_2718 = rt_str_copy(f_gexpr_800(F->args_1002, NULL, &F->at_2716));
if (rt_str_eq((*F->name_1000), rt_str("POS", 3))) {
if (((*(P1035)rt_nil_check(f_base_of_223(F->at_2716))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_1003, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_1005v = g_ty_int_1114;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2718), rt_str(") + 1)", 6));
goto ret_;
}
F->t_1005v = F->at_2716;
if (((*(P1035)rt_nil_check(F->at_2716)).kind == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_1000), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2718), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2718), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_1000), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2718), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_71((*(P1035)rt_nil_check(f_base_of_223(F->at_2716))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2718), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_71((*(P1035)rt_nil_check(f_base_of_223(F->at_2716))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("FLOOR", 5))) {
F->a_2719 = rt_str_copy(f_gexpr_800(F->args_1002, g_ty_float_1116, &F->at_2716));
f_check_type_232(F->at_2716, g_ty_float_1116, F->line_1003);
F->t_1005v = g_ty_int_1114;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_floor(", 11), F->a_2719), rt_str(")", 1));
goto ret_;
} else if ((((rt_str_eq((*F->name_1000), rt_str("ACTP", 4)) || rt_str_eq((*F->name_1000), rt_str("RADIX", 5))) || rt_str_eq((*F->name_1000), rt_str("EMIN", 4))) || rt_str_eq((*F->name_1000), rt_str("EMAX", 4)))) {
F->a_2720 = rt_str_copy(f_gexpr_800(F->args_1002, g_ty_float_1116, &F->at_2716));
f_check_type_232(F->at_2716, g_ty_float_1116, F->line_1003);
F->t_1005v = g_ty_int_1114;
if (rt_str_eq((*F->name_1000), rt_str("ACTP", 4))) {
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("RADIX", 5))) {
F->result_ = rt_str("((rt_int)2)", 11);
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("EMIN", 4))) {
F->result_ = rt_str("((rt_int)-1021)", 15);
goto ret_;
}
F->result_ = rt_str("((rt_int)1024)", 14);
goto ret_;
} else if (((((rt_str_eq((*F->name_1000), rt_str("SQRT", 4)) || rt_str_eq((*F->name_1000), rt_str("SIN", 3))) || rt_str_eq((*F->name_1000), rt_str("COS", 3))) || rt_str_eq((*F->name_1000), rt_str("EXP", 3))) || rt_str_eq((*F->name_1000), rt_str("LN", 2)))) {
F->a_2721 = rt_str_copy(f_gexpr_800(F->args_1002, g_ty_float_1116, &F->at_2716));
F->t_1005v = g_ty_float_1116;
if (rt_str_eq((*F->name_1000), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2721), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_1000)), rt_str("(", 1)), F->a_2721), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("IFLOAT", 6))) {
F->a_2722 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->args_1002)).next, g_ty_int_1114, &F->at_2716));
F->t_1005v = g_ty_float_1116;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2722), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("IFIX", 4))) {
F->a_2723 = rt_str_copy(f_gexpr_800(F->args_1002, g_ty_float_1116, &F->at_2716));
F->t_1005v = g_ty_int_1114;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2723), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("FORMAT", 6))) {
F->a_2724 = rt_str_copy(f_gexpr_800(F->args_1002, g_ty_float_1116, &F->at_2716));
F->n1_2725 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->args_1002)).next, g_ty_int_1114, &F->at_2716));
F->m1_2726 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_1002)).next)).next, g_ty_int_1114, &F->at_2716));
F->t_1005v = g_ty_string_1118;
if ((F->n_2717 == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_format_e(", 14), F->a_2724), rt_str(", ", 2)), F->n1_2725), rt_str(", ", 2)), F->m1_2726), rt_str(", ", 2)), f_gexpr_800((*(P1029)rt_nil_check((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_1002)).next)).next)).next, g_ty_int_1114, &F->at_2716)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_format(", 12), F->a_2724), rt_str(", ", 2)), F->n1_2725), rt_str(", ", 2)), F->m1_2726), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("ABS", 3))) {
F->a_2727 = rt_str_copy(f_gexpr_800(F->args_1002, NULL, &F->at_2716));
F->t_1005v = F->at_2716;
if (((*(P1035)rt_nil_check(F->at_2716)).kind == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2727), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2727), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("CNVT", 4))) {
if ((F->tt_1001 == NULL)) {
f_fail_23(F->line_1003, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
F->result_ = f_conversion_989(F->tt_1001, F->args_1002, F->line_1003, &F->t_1005v);
goto ret_;
} else if ((rt_str_eq((*F->name_1000), rt_str("WRITELN", 7)) && (F->n_2717 == ((rt_int)2LL)))) {
F->f_2728 = rt_str_copy(f_file_ref_982(F->args_1002, 1, F->line_1003));
F->a_2729 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->args_1002)).next, g_ty_string_1118, &F->at_2716));
f_check_type_232(F->at_2716, g_ty_string_1118, F->line_1003);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fwriteln(", 14), F->f_2728), rt_str(", ", 2)), F->a_2729), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("WRITELN", 7))) {
if ((F->n_2717 == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->a_2730 = rt_str_copy(f_gexpr_800(F->args_1002, g_ty_string_1118, &F->at_2716));
f_check_type_232(F->at_2716, g_ty_string_1118, F->line_1003);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2730), rt_str(")", 1));
goto ret_;
}
} else if ((rt_str_eq((*F->name_1000), rt_str("WRITE", 5)) || rt_str_eq((*F->name_1000), rt_str("READ", 4)))) {
F->ft_2731 = NULL;
F->f_2732 = rt_str_copy(f_file_ref_982(F->args_1002, 0, F->line_1003));
F->ft_2731 = f_peek_type_819(F->args_1002);
if (rt_str_eq((*F->name_1000), rt_str("READ", 4))) {
F->lv_2733 = NULL;
F->lc_2734 = NULL;
f_lvalue_769((*(P1029)rt_nil_check(F->args_1002)).next, &F->lv_2733, &F->at_2716, &F->lc_2734, &F->ro_2735);
if (F->ro_2735) {
f_fail_23(F->line_1003, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READ needs a variable", 21); b_; }));
}
f_check_type_232(F->at_2716, f_str_elem_218(F->ft_2731), F->line_1003);
if (f_text_file_984(F->ft_2731)) {
F->result_ = f_assign_code_411(&(((P1022)rt_nil_check(F->lv_2733))->all), F->at_2716, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fgetc(", 11), F->f_2732), rt_str(")", 1)); b_; }), F->lc_2734);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fread(", 11), F->f_2732), rt_str(", &", 3)), (((P1022)rt_nil_check(F->lv_2733))->all)), rt_str(")", 1));
goto ret_;
}
{
F->a_2736 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->args_1002)).next, f_str_elem_218(F->ft_2731), &F->at_2716));
if ((f_text_file_984(F->ft_2731) && ((*(P1035)rt_nil_check(F->at_2716)).kind == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fputs(", 11), F->f_2732), rt_str(", ", 2)), F->a_2736), rt_str(")", 1));
goto ret_;
}
f_check_type_232(F->at_2716, f_str_elem_218(F->ft_2731), F->line_1003);
if (f_text_file_984(F->ft_2731)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fputc(", 11), F->f_2732), rt_str(", ", 2)), F->a_2736), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->at_2716)), rt_str(" w_ = ", 6)), F->a_2736), rt_str("; rt_r_fwrite(", 14)), F->f_2732), rt_str(", &w_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_1000), rt_str("READLN", 6)) && (F->n_2717 == ((rt_int)2LL)))) {
F->lv_2737 = NULL;
F->lc_2738 = NULL;
F->f_2740 = rt_str_copy(f_file_ref_982(F->args_1002, 1, F->line_1003));
f_lvalue_769((*(P1029)rt_nil_check(F->args_1002)).next, &F->lv_2737, &F->at_2716, &F->lc_2738, &F->ro_2739);
f_check_type_232(F->at_2716, g_ty_string_1118, F->line_1003);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_freadln(", 13), F->f_2740), rt_str(", &", 3)), (((P1022)rt_nil_check(F->lv_2737))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("READLN", 6))) {
F->lv_2741 = NULL;
F->lc_2742 = NULL;
f_lvalue_769(F->args_1002, &F->lv_2741, &F->at_2716, &F->lc_2742, &F->ro_2743);
f_check_type_232(F->at_2716, g_ty_string_1118, F->line_1003);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_readln(&", 13), (((P1022)rt_nil_check(F->lv_2741))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1000), rt_str("SIZELN", 6)) && (F->n_2717 == ((rt_int)1LL)))) {
F->t_1005v = g_ty_int_1114;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fsizeln(", 13), f_file_ref_982(F->args_1002, 1, F->line_1003)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("SIZELN", 6))) {
F->t_1005v = g_ty_int_1114;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if ((rt_str_eq((*F->name_1000), rt_str("EOF", 3)) && (F->n_2717 == ((rt_int)1LL)))) {
F->t_1005v = g_ty_bool_1115;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_feof(", 10), f_file_ref_982(F->args_1002, 0, F->line_1003)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("EOF", 3))) {
F->t_1005v = g_ty_bool_1115;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("SYS_IN", 6))) {
F->t_1005v = g_ty_text_file_1128;
F->result_ = rt_str("rt_r_sys_in()", 13);
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("SYS_OUT", 7))) {
F->t_1005v = g_ty_text_file_1128;
F->result_ = rt_str("rt_r_sys_out()", 14);
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("OPEN", 4))) {
F->f_2744 = rt_str_copy(f_file_ref_982(F->args_1002, 0, F->line_1003));
F->nm_2745 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->args_1002)).next, g_ty_string_1118, &F->at_2716));
F->st_2746 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_1002)).next)).next, g_file_state_type_1129, &F->at_2716));
f_check_type_232(F->at_2716, g_file_state_type_1129, F->line_1003);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_open(", 10), F->f_2744), rt_str(", ", 2)), F->nm_2745), rt_str(", ", 2)), F->st_2746), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("CLOSE", 5))) {
F->f_2747 = rt_str_copy(f_file_ref_982(F->args_1002, 0, F->line_1003));
F->d_2748 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->args_1002)).next, g_file_disp_type_1130, &F->at_2716));
f_check_type_232(F->at_2716, g_file_disp_type_1130, F->line_1003);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_close(", 11), F->f_2747), rt_str(", ", 2)), F->d_2748), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1000), rt_str("SIZE", 4)) || rt_str_eq((*F->name_1000), rt_str("POSITION", 8)))) {
F->t_1005v = g_ty_int_1114;
if (rt_str_eq((*F->name_1000), rt_str("SIZE", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fsize(", 11), f_file_ref_982(F->args_1002, 0, F->line_1003)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fpos(", 10), f_file_ref_982(F->args_1002, 0, F->line_1003)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("SET_POSITION", 12))) {
F->f_2749 = rt_str_copy(f_file_ref_982(F->args_1002, 0, F->line_1003));
F->v_2750 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->args_1002)).next, g_ty_int_1114, &F->at_2716));
f_check_type_232(F->at_2716, g_ty_int_1114, F->line_1003);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fsetpos(", 13), F->f_2749), rt_str(", ", 2)), F->v_2750), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("FILE_RENAME", 11))) {
F->a_2751 = rt_str_copy(f_gexpr_800(F->args_1002, g_ty_string_1118, &F->at_2716));
F->b_2752 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->args_1002)).next, g_ty_string_1118, &F->at_2716));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_rename(", 12), F->a_2751), rt_str(", ", 2)), F->b_2752), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1000), rt_str("SEND", 4)) || rt_str_eq((*F->name_1000), rt_str("RECEIVE", 7)))) {
F->lv_2753 = NULL;
F->dv_2754 = NULL;
F->lc_2755 = NULL;
F->mt_2757 = NULL;
F->dt_2758 = NULL;
f_lvalue_769(F->args_1002, &F->lv_2753, &F->mt_2757, &F->lc_2755, &F->ro_2756);
if (((*(P1035)rt_nil_check(F->mt_2757)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_1003, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_1000), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_1000), rt_str("RECEIVE", 7))) {
f_lvalue_769((*(P1029)rt_nil_check(F->args_1002)).next, &F->dv_2754, &F->dt_2758, &F->lc_2755, &F->ro_2756);
f_check_type_232(F->dt_2758, (*(P1035)rt_nil_check(F->mt_2757)).elem, F->line_1003);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P1022)rt_nil_check(F->lv_2753))->all)), rt_str(", &", 3)), (((P1022)rt_nil_check(F->dv_2754))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2759 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->args_1002)).next, (*(P1035)rt_nil_check(F->mt_2757)).elem, &F->at_2716));
f_check_type_232(F->at_2716, (*(P1035)rt_nil_check(F->mt_2757)).elem, F->line_1003);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1035)rt_nil_check(F->mt_2757)).elem)), rt_str(" m_ = ", 6)), F->v_2759), rt_str("; rt_send(", 10)), (((P1022)rt_nil_check(F->lv_2753))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_1000), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_1000), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2760 = NULL;
F->lc_2761 = NULL;
F->mt_2763 = NULL;
f_lvalue_769(F->args_1002, &F->lv_2760, &F->mt_2763, &F->lc_2761, &F->ro_2762);
if (((*(P1035)rt_nil_check(F->mt_2763)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_1003, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_1000), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_1005v = g_ty_int_1114;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_1000))), rt_str("(", 1)), (((P1022)rt_nil_check(F->lv_2760))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1000), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_1000), rt_str("COND_RECEIVE", 12)))) {
F->lv_2764 = NULL;
F->dv_2765 = NULL;
F->bv_2766 = NULL;
F->lc_2767 = NULL;
F->mt_2769 = NULL;
F->dt_2770 = NULL;
F->bt_2771 = NULL;
f_lvalue_769(F->args_1002, &F->lv_2764, &F->mt_2769, &F->lc_2767, &F->ro_2768);
if (((*(P1035)rt_nil_check(F->mt_2769)).kind != (((rt_int)12LL)))) {
f_fail_23(F->line_1003, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_1000), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_769((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_1002)).next)).next, &F->bv_2766, &F->bt_2771, &F->lc_2767, &F->ro_2768);
f_check_type_232(F->bt_2771, g_ty_bool_1115, F->line_1003);
if (rt_str_eq((*F->name_1000), rt_str("COND_RECEIVE", 12))) {
f_lvalue_769((*(P1029)rt_nil_check(F->args_1002)).next, &F->dv_2765, &F->dt_2770, &F->lc_2767, &F->ro_2768);
f_check_type_232(F->dt_2770, (*(P1035)rt_nil_check(F->mt_2769)).elem, F->line_1003);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->bv_2766))->all), rt_str(" = rt_cond_receive(", 19)), (((P1022)rt_nil_check(F->lv_2764))->all)), rt_str(", &", 3)), (((P1022)rt_nil_check(F->dv_2765))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2772 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->args_1002)).next, (*(P1035)rt_nil_check(F->mt_2769)).elem, &F->at_2716));
f_check_type_232(F->at_2716, (*(P1035)rt_nil_check(F->mt_2769)).elem, F->line_1003);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1035)rt_nil_check(F->mt_2769)).elem)), rt_str(" m_ = ", 6)), F->v_2772), rt_str("; ", 2)), (((P1022)rt_nil_check(F->bv_2766))->all)), rt_str(" = rt_cond_send(", 16)), (((P1022)rt_nil_check(F->lv_2764))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_1000), rt_str("PRIORITY", 8))) {
F->t_1005v = g_ty_int_1114;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_651(F->args_1002)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("SET_PRIORITY", 12))) {
F->v_2773 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->args_1002)).next, g_ty_int_1114, &F->at_2716));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_651(F->args_1002)), rt_str(", ", 2)), F->v_2773), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_651(F->args_1002)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("ACTIVE", 6))) {
F->t_1005v = g_ty_bool_1115;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_651(F->args_1002)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("DELAY", 5))) {
F->v_2774 = rt_str_copy(f_gexpr_800(F->args_1002, g_ty_int_1114, &F->at_2716));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2774), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1000), rt_str("DELAY_UNTIL", 11)) && (F->n_2717 == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_delay_act(", 15), f_act_delay_args_967(F->args_1002)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("DELAY_UNTIL", 11))) {
F->v_2775 = rt_str_copy(f_gexpr_800(F->args_1002, g_ty_int_1114, &F->at_2716));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2775), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_651(F->args_1002)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1000), rt_str("TIME", 4)) && (F->n_2717 == ((rt_int)1LL)))) {
F->t_1005v = g_ty_int_1114;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_act_time(", 14), f_act_ref_651(F->args_1002)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("TIME", 4))) {
F->t_1005v = g_ty_int_1114;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_1000), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_1000), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_1000), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_1000), rt_str("HOURS", 5)))) {
F->t_1005v = g_ty_int_1114;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_1000));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("HALT", 4))) {
F->a_2776 = rt_str_copy(f_gexpr_800(F->args_1002, g_ty_int_1114, &F->at_2716));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2776), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1000), rt_str("ME", 2)) && (F->tt_1001 != NULL))) {
F->result_ = f_me_high_939(F->tt_1001, F->line_1003, &F->t_1005v);
goto ret_;
} else if ((rt_str_eq((*F->name_1000), rt_str("WAITING", 7)) || rt_str_eq((*F->name_1000), rt_str("SUSPENDED", 9)))) {
F->t_1005v = g_ty_bool_1115;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_1000))), rt_str("(", 1)), f_act_ref_651(F->args_1002)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_1000), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_1000), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_1000), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_1000), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_1000), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_1000), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_1000))), rt_str("(", 1)), f_act_ref_651(F->args_1002)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("TASK_START", 10))) {
if ((F->n_2717 != ((rt_int)2LL))) {
f_fail_23(F->line_1003, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_651(F->args_1002)), rt_str(", ", 2)), f_act_ref_651((*(P1029)rt_nil_check(F->args_1002)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_1000), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_1000), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_1000), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_1000), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_1000), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_1000), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((F->n_2717 != ((rt_int)0LL))) {
f_fail_23(F->line_1003, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_1000), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_1000))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_944(F->args_1002, &(*F->name_1000))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_1000), rt_str("UNLOCK", 6)) && (f_peek_type_819(F->args_1002) != g_ty_latch_1123))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_unlock(", 12), f_lock_ref_944(F->args_1002, &(*F->name_1000))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_944(F->args_1002, &(*F->name_1000))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("COND_LOCK", 9))) {
F->bv_2777 = NULL;
F->bc_2778 = NULL;
F->bt_2780 = NULL;
F->l_2781 = rt_str_copy(f_lock_ref_944(F->args_1002, &(*F->name_1000)));
f_lvalue_769((*(P1029)rt_nil_check(F->args_1002)).next, &F->bv_2777, &F->bt_2780, &F->bc_2778, &F->ro_2779);
f_check_type_232(F->bt_2780, g_ty_bool_1115, F->line_1003);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1022)rt_nil_check(F->bv_2777))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2781), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("EXCESS_LOCKS", 12))) {
F->t_1005v = g_ty_int_1114;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_944(F->args_1002, &(*F->name_1000))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("OWNER", 5))) {
F->t_1005v = g_ty_act_1124;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_owner(", 11), f_lock_ref_944(F->args_1002, &(*F->name_1000))), rt_str(")", 1));
goto ret_;
} else if (((((((((rt_str_eq((*F->name_1000), rt_str("SEND_REQUEST", 12)) || rt_str_eq((*F->name_1000), rt_str("SEND_TEST", 9))) || rt_str_eq((*F->name_1000), rt_str("SEND_COMPLETE", 13))) || rt_str_eq((*F->name_1000), rt_str("SEND_REVOKE", 11))) || rt_str_eq((*F->name_1000), rt_str("RECEIVE_REQUEST", 15))) || rt_str_eq((*F->name_1000), rt_str("RECEIVE_TEST", 12))) || rt_str_eq((*F->name_1000), rt_str("RECEIVE_COMPLETE", 16))) || rt_str_eq((*F->name_1000), rt_str("RECEIVE_REVOKE", 14))) && (F->n_2717 == ((rt_int)3LL)))) {
F->result_ = f_mailbox_low_975(&(*F->name_1000), F->args_1002, F->line_1003, &F->t_1005v);
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("FREE", 4))) {
F->pv_2782 = NULL;
F->pc_2783 = NULL;
F->pt_2785 = NULL;
f_lvalue_769(F->args_1002, &F->pv_2782, &F->pt_2785, &F->pc_2783, &F->ro_2784);
if ((((*(P1035)rt_nil_check(F->pt_2785)).kind != (((rt_int)8LL))) || F->ro_2784)) {
f_fail_23(F->line_1003, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_1094 = 1;
f_finish_ptr_475(F->pt_2785);
if ((f_suppressed_512(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; })) || f_unchecked_free_337(F->pt_2785))) {
if (f_needs_fin_346((*(P1035)rt_nil_check(F->pt_2785)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P1022)rt_nil_check(F->pv_2782))->all)), rt_str(") { ", 4)), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_758(F->pt_2785, &(((P1022)rt_nil_check(F->pv_2782))->all)); b_; }), (*(P1035)rt_nil_check(F->pt_2785)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P1022)rt_nil_check(F->pv_2782))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P1022)rt_nil_check(F->pv_2782))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_346((*(P1035)rt_nil_check(F->pt_2785)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P1022)rt_nil_check(F->pv_2782))->all)), rt_str("); if (", 7)), (((P1022)rt_nil_check(F->pv_2782))->all)), rt_str(") { ", 4)), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_758(F->pt_2785, &(((P1022)rt_nil_check(F->pv_2782))->all)); b_; }), (*(P1035)rt_nil_check(F->pt_2785)).target)), rt_str(" } rt_free((void **)&", 21)), (((P1022)rt_nil_check(F->pv_2782))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P1022)rt_nil_check(F->pv_2782))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_1000), rt_str("LOW_IO", 6))) {
F->dev_2786 = rt_str_copy(f_gexpr_800(F->args_1002, g_ty_int_1114, &F->at_2716));
F->cmd_2787 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check(F->args_1002)).next, g_ty_int_1114, &F->at_2716));
if ((F->n_2717 == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_r_low_io(", 30), F->dev_2786), rt_str(", ", 2)), F->cmd_2787), rt_str(", &d_); })", 10));
goto ret_;
} else if ((!f_is_lvalue_763((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_1002)).next)).next))) {
F->v_2788 = rt_str_copy(f_gexpr_800((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_1002)).next)).next, g_ty_int_1114, &F->at_2716));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = ", 15), F->v_2788), rt_str("; rt_r_low_io(", 14)), F->dev_2786), rt_str(", ", 2)), F->cmd_2787), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2789 = NULL;
F->dc_2790 = NULL;
F->dt_2792 = NULL;
f_lvalue_769((*(P1029)rt_nil_check((*(P1029)rt_nil_check(F->args_1002)).next)).next, &F->dv_2789, &F->dt_2792, &F->dc_2790, &F->ro_2791);
f_check_type_232(F->dt_2792, g_ty_int_1114, F->line_1003);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_low_io(", 12), F->dev_2786), rt_str(", ", 2)), F->cmd_2787), rt_str(", &", 3)), (((P1022)rt_nil_check(F->dv_2789))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_1003, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_1000), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_1005) = F->t_1005v;
  RT_FPOP();
  return F->result_;
}

static P1029 f_with_library_1008(P1029 units_1007) {
  struct f_with_library_1008fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_1007 = units_1007;
F->r_2793 = NULL;
F->r_2793 = F->units_1007;
F->more_2794 = 1;
while (F->more_2794) {
F->missing_2795 = NULL;
F->missing_2795 = f_external_missing_1011(F->r_2793, F->r_2793);
F->more_2794 = 0;
if ((F->missing_2795 != NULL)) {
F->saved_2796 = g_tpos_1062;
if (f_read_library_60(&(((P1022)rt_nil_check(F->missing_2795))->all))) {
F->lib_2797 = NULL;
g_tpos_1062 = g_ntoks_before_library_1067;
F->lib_2797 = f_program_159();
g_tpos_1062 = F->saved_2796;
if ((F->lib_2797 != NULL)) {
F->t_2798 = NULL;
F->t_2798 = F->lib_2797;
while (((*(P1029)rt_nil_check(F->t_2798)).next != NULL)) {
F->t_2798 = (*(P1029)rt_nil_check(F->t_2798)).next;
}
(*(P1029)rt_nil_check(F->t_2798)).next = F->r_2793;
F->r_2793 = F->lib_2797;
F->more_2794 = 1;
}
}
}
g_ntoks_before_library_1067 = rt_add(g_ntoks_1061, ((rt_int)1LL));
}
F->result_ = F->r_2793;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1022 f_external_missing_1011(P1029 e_1009, P1029 units_1010) {
  struct f_external_missing_1011fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_1009 = e_1009;
F->units_1010 = units_1010;
F->x_2799 = NULL;
F->x_2799 = F->e_1009;
while ((F->x_2799 != NULL)) {
if ((((((*(P1029)rt_nil_check(F->x_2799)).kind == (((rt_int)48LL))) && ((*(P1029)rt_nil_check(F->x_2799)).flag >= ((rt_int)2LL))) && (!f_unit_named_1014(F->units_1010, &(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_2799)).name))->all)))) && (!f_tried_1016(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_2799)).name))->all))))) {
f_mark_tried_1018(&(((P1022)rt_nil_check((*(P1029)rt_nil_check(F->x_2799)).name))->all));
F->result_ = (*(P1029)rt_nil_check(F->x_2799)).name;
goto ret_;
}
if ((((*(P1029)rt_nil_check(F->x_2799)).a != NULL) && ((*(P1029)rt_nil_check(F->x_2799)).kind != (((rt_int)48LL))))) {
F->r_2800 = NULL;
F->r_2800 = f_external_missing_1011((*(P1029)rt_nil_check(F->x_2799)).a, F->units_1010);
if ((F->r_2800 != NULL)) {
F->result_ = F->r_2800;
goto ret_;
}
}
if ((((*(P1029)rt_nil_check(F->x_2799)).c != NULL) && ((*(P1029)rt_nil_check(F->x_2799)).kind != (((rt_int)48LL))))) {
F->r_2801 = NULL;
F->r_2801 = f_external_missing_1011((*(P1029)rt_nil_check(F->x_2799)).c, F->units_1010);
if ((F->r_2801 != NULL)) {
F->result_ = F->r_2801;
goto ret_;
}
}
F->x_2799 = (*(P1029)rt_nil_check(F->x_2799)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_unit_named_1014(P1029 units_1012, rstr *name_1013) {
  struct f_unit_named_1014fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_1012 = units_1012;
F->name_1013 = name_1013;
F->u_2802 = NULL;
F->u_2802 = F->units_1012;
while ((F->u_2802 != NULL)) {
if (rt_str_eq((((P1022)rt_nil_check((*(P1029)rt_nil_check(F->u_2802)).name))->all), (*F->name_1013))) {
F->result_ = 1;
goto ret_;
}
F->u_2802 = (*(P1029)rt_nil_check(F->u_2802)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tried_1016(rstr *name_1015) {
  struct f_tried_1016fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_1015 = name_1015;
F->result_ = f_seen_name_425(g_library_tried_1068, &(*F->name_1015));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_mark_tried_1018(rstr *name_1017) {
  struct f_mark_tried_1018fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_1017 = name_1017;
F->l_2803 = NULL;
{ R1034 *cell2804 = rt_alloc(sizeof(R1034));
(*cell2804).s = NULL;
(*cell2804).next = NULL;
F->l_2803 = cell2804;
}
(*(P1033)rt_nil_check(F->l_2803)).s = f_mk_3(&(*F->name_1017));
(*(P1033)rt_nil_check(F->l_2803)).next = g_library_tried_1068;
g_library_tried_1068 = F->l_2803;
ret_:
  RT_FPOP();
  return;
}

static void f_translate_1020(P1029 units_1019) {
  struct f_translate_1020fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_1019 = units_1019;
F->u_2805 = NULL;
F->u_2805 = F->units_1019;
while ((F->u_2805 != NULL)) {
if (f_has_pragmat_508((*(P1029)rt_nil_check(F->u_2805)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LIBRARY", 7); b_; }))) {
f_write_library_62(F->u_2805);
}
if ((((*(P1029)rt_nil_check(F->u_2805)).next == NULL) && (!f_has_pragmat_508((*(P1029)rt_nil_check(F->u_2805)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LIBRARY", 7); b_; }))))) {
{ R1057 *cell2806 = rt_alloc(sizeof(R1057));
(*cell2806).d = NULL;
(*cell2806).next = NULL;
g_caps_1088 = cell2806;
}
(*(P1056)rt_nil_check(g_caps_1088)).d = F->u_2805;
g_suppress_1103 = f_suppressing_510((*(P1029)rt_nil_check(F->u_2805)).prags);
(*(P1056)rt_nil_check(g_caps_1088)).depth = g_depth_1072;
f_declare_labels_586((*(P1029)rt_nil_check(F->u_2805)).c);
f_declare_body_430((*(P1029)rt_nil_check(F->u_2805)).c);
f_capsule_body_593((*(P1029)rt_nil_check(F->u_2805)).c);
f_await_tasks_582((*(P1029)rt_nil_check(F->u_2805)).c);
{
F->l_2807 = NULL;
F->l_2807 = F->units_1019;
while ((F->l_2807 != F->u_2805)) {
{
F->w_2808 = rt_str_copy(f_waits_of_578(F->l_2807));
if ((((rt_int)((F->w_2808).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2808);
}
}
F->l_2807 = (*(P1029)rt_nil_check(F->l_2807)).next;
}
}
f_close_fins_569(NULL);
if (g_uses_findyn_1096) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_440(F->u_2805);
f_elaborate_pending_444(f_lookup_decl_165(F->u_2805));
}
F->u_2805 = (*(P1029)rt_nil_check(F->u_2805)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_1021(void) {
  struct f_print_program_1021fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_426();
if (g_uses_free_1094) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_1076);
f_print_buffer_31(g_out_frames_1092);
f_print_buffer_31(g_out_helpers_1077);
f_print_buffer_31(g_out_protos_1078);
f_print_buffer_31(g_out_globals_1079);
f_print_buffer_31(g_out_funcs_1080);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_1093);
f_print_buffer_31(g_out_excs_1082);
f_print_buffer_31(g_out_init_1081);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R1059(R1059 *d, R1059 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R1059 cp_R1059(R1059 s) {
  R1059 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R1059(R1059 a, R1059 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R1057(R1057 *d, R1057 s) {
  d->d = s.d;
  d->next = s.next;
  d->depth = s.depth;
}
static R1057 cp_R1057(R1057 s) {
  R1057 d = s;
  d.d = s.d;
  d.next = s.next;
  d.depth = s.depth;
  return d;
}
static int eq_R1057(R1057 a, R1057 b) {
  return 1 && (a.d == b.d) && (a.next == b.next) && (a.depth == b.depth);
}
static void as_R1055(R1055 *d, R1055 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R1055 cp_R1055(R1055 s) {
  R1055 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R1055(R1055 a, R1055 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R1053(R1053 *d, R1053 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R1053 cp_R1053(R1053 s) {
  R1053 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R1053(R1053 a, R1053 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R1051(R1051 *d, R1051 s) {
  d->t = s.t;
  d->next = s.next;
}
static R1051 cp_R1051(R1051 s) {
  R1051 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R1051(R1051 a, R1051 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R1049(R1049 *d, R1049 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
  d->f = s.f;
}
static R1049 cp_R1049(R1049 s) {
  R1049 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  d.f = s.f;
  return d;
}
static int eq_R1049(R1049 a, R1049 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t) && (a.f == b.f);
}
static void as_R1047(R1047 *d, R1047 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R1047 cp_R1047(R1047 s) {
  R1047 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R1047(R1047 a, R1047 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A1045(A1045 *d, A1045 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A1045 cp_A1045(A1045 s) {
  A1045 d = s; d.p = rt_alloc(sizeof(P1039) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A1045(A1045 a, A1045 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R1042(R1042 *d, R1042 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R1042 cp_R1042(R1042 s) {
  R1042 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R1042(R1042 a, R1042 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R1040(R1040 *d, R1040 s) {
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
static R1040 cp_R1040(R1040 s) {
  R1040 d = s;
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
static int eq_R1040(R1040 a, R1040 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home) && (a.capn == b.capn) && (a.tbinds == b.tbinds) && (a.loc == b.loc) && (a.reqs_sym == b.reqs_sym) && (a.decl_line == b.decl_line) && (a.pending == b.pending);
}
static void as_R1038(R1038 *d, R1038 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R1038 cp_R1038(R1038 s) {
  R1038 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R1038(R1038 a, R1038 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R1036(R1036 *d, R1036 s) {
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
static R1036 cp_R1036(R1036 s) {
  R1036 d = s;
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
static int eq_R1036(R1036 a, R1036 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs) && (a.assignp == b.assignp) && (a.eqp == b.eqp) && (a.ltp == b.ltp) && (a.repn == b.repn);
}
static void as_R1034(R1034 *d, R1034 s) {
  d->s = s.s;
  d->next = s.next;
}
static R1034 cp_R1034(R1034 s) {
  R1034 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R1034(R1034 a, R1034 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R1032(R1032 *d, R1032 s) {
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
static R1032 cp_R1032(R1032 s) {
  R1032 d = s;
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
static int eq_R1032(R1032 a, R1032 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R1030(R1030 *d, R1030 s) {
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
static R1030 cp_R1030(R1030 s) {
  R1030 d = s;
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
static int eq_R1030(R1030 a, R1030 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.eline == b.eline) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A1028(A1028 *d, A1028 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A1028 cp_A1028(A1028 s) {
  A1028 d = s; d.p = rt_alloc(sizeof(P1024) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A1028(A1028 a, A1028 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R1025(R1025 *d, R1025 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R1025 cp_R1025(R1025 s) {
  R1025 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R1025(R1025 a, R1025 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_1060);
  RT_ROOT(g_ntoks_1061);
  RT_ROOT(g_tpos_1062);
  RT_ROOT(g_src_line_1063);
  RT_ROOT(g_pending_prag_1064);
  RT_ROOT(g_src_head_1065);
  RT_ROOT(g_src_tail_1066);
  RT_ROOT(g_ntoks_before_library_1067);
  RT_ROOT(g_library_tried_1068);
  RT_ROOT(g_table_1069);
  RT_ROOT(g_genv_1070);
  RT_ROOT(g_all_insts_1071);
  RT_ROOT(g_depth_1072);
  RT_ROOT(g_scope_stack_1073);
  RT_ROOT(g_all_types_1074);
  RT_ROOT(g_serial_1075);
  RT_ROOT(g_out_types_1076);
  RT_ROOT(g_out_helpers_1077);
  RT_ROOT(g_out_protos_1078);
  RT_ROOT(g_out_globals_1079);
  RT_ROOT(g_out_funcs_1080);
  RT_ROOT(g_out_init_1081);
  RT_ROOT(g_out_excs_1082);
  RT_ROOT(g_code_1083);
  RT_ROOT(g_fields_buf_1084);
  RT_ROOT(g_in_func_1085);
  RT_ROOT(g_cur_level_1086);
  RT_ROOT(g_fctx_1087);
  RT_ROOT(g_caps_1088);
  RT_ROOT(g_cap_waits_1089);
  RT_ROOT(g_psub_1090);
  RT_ROOT(g_st_field_1091);
  RT_ROOT(g_out_frames_1092);
  RT_ROOT(g_out_roots_1093);
  RT_ROOT(g_uses_free_1094);
  RT_ROOT(g_fins_1095);
  RT_ROOT(g_uses_findyn_1096);
  RT_ROOT(g_func_sym_1097);
  RT_ROOT(g_func_rc_1098);
  RT_ROOT(g_cap_ret_1099);
  RT_ROOT(g_cap_rflag_1100);
  RT_ROOT(g_ret_frames_1101);
  RT_ROOT(g_gdepth_1102);
  RT_ROOT(g_suppress_1103);
  RT_ROOT(g_cons_ctx_1104);
  RT_ROOT(g_mark_uninit_1105);
  RT_ROOT(g_skip_chk_1106);
  RT_ROOT(g_exits_1107);
  RT_ROOT(g_gotos_1108);
  RT_ROOT(g_frames_1109);
  RT_ROOT(g_handlers_1110);
  RT_ROOT(g_cleanups_1111);
  RT_ROOT(g_trial_1112);
  RT_ROOT(g_mcopies_1113);
  RT_ROOT(g_ty_int_1114);
  RT_ROOT(g_ty_bool_1115);
  RT_ROOT(g_ty_float_1116);
  RT_ROOT(g_ty_ascii_1117);
  RT_ROOT(g_ty_string_1118);
  RT_ROOT(g_ty_void_1119);
  RT_ROOT(g_ty_file_1120);
  RT_ROOT(g_ty_nil_1121);
  RT_ROOT(g_ty_lock_1122);
  RT_ROOT(g_ty_latch_1123);
  RT_ROOT(g_ty_act_1124);
  RT_ROOT(g_file_mode_type_1125);
  RT_ROOT(g_ty_send_st_1126);
  RT_ROOT(g_ty_receive_st_1127);
  RT_ROOT(g_ty_text_file_1128);
  RT_ROOT(g_file_state_type_1129);
  RT_ROOT(g_file_disp_type_1130);
  RT_ROOT(g_file_access_type_1131);
  RT_ROOT(g_no_cons_1132);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_1060 = NULL;
g_ntoks_1061 = ((rt_int)0LL);
g_tpos_1062 = ((rt_int)1LL);
g_src_line_1063 = ((rt_int)0LL);
g_pending_prag_1064 = NULL;
g_src_head_1065 = NULL;
g_src_tail_1066 = NULL;
g_ntoks_before_library_1067 = ((rt_int)0LL);
g_library_tried_1068 = NULL;
g_table_1069 = NULL;
g_genv_1070 = NULL;
g_all_insts_1071 = NULL;
g_depth_1072 = ((rt_int)0LL);
g_scope_stack_1073 = NULL;
g_all_types_1074 = NULL;
g_serial_1075 = ((rt_int)0LL);
g_out_types_1076 = NULL;
g_out_helpers_1077 = NULL;
g_out_protos_1078 = NULL;
g_out_globals_1079 = NULL;
g_out_funcs_1080 = NULL;
g_out_init_1081 = NULL;
g_out_excs_1082 = NULL;
g_code_1083 = NULL;
g_fields_buf_1084 = NULL;
g_in_func_1085 = 0;
g_cur_level_1086 = ((rt_int)0LL);
g_fctx_1087 = NULL;
g_caps_1088 = NULL;
g_cap_waits_1089 = NULL;
g_psub_1090 = NULL;
g_st_field_1091 = NULL;
g_out_frames_1092 = NULL;
g_out_roots_1093 = NULL;
g_uses_free_1094 = 0;
g_fins_1095 = NULL;
g_uses_findyn_1096 = 0;
g_func_sym_1097 = NULL;
g_func_rc_1098 = NULL;
g_cap_ret_1099 = NULL;
g_cap_rflag_1100 = NULL;
g_ret_frames_1101 = ((rt_int)0LL);
g_gdepth_1102 = ((rt_int)0LL);
g_suppress_1103 = NULL;
g_cons_ctx_1104 = NULL;
g_mark_uninit_1105 = 0;
g_skip_chk_1106 = 0;
g_exits_1107 = NULL;
g_gotos_1108 = NULL;
g_frames_1109 = ((rt_int)0LL);
g_handlers_1110 = NULL;
g_cleanups_1111 = NULL;
g_trial_1112 = ((rt_int)0LL);
g_mcopies_1113 = NULL;
g_ty_int_1114 = NULL;
g_ty_bool_1115 = NULL;
g_ty_float_1116 = NULL;
g_ty_ascii_1117 = NULL;
g_ty_string_1118 = NULL;
g_ty_void_1119 = NULL;
g_ty_file_1120 = NULL;
g_ty_nil_1121 = NULL;
g_ty_lock_1122 = NULL;
g_ty_latch_1123 = NULL;
g_ty_act_1124 = NULL;
g_file_mode_type_1125 = NULL;
g_ty_send_st_1126 = NULL;
g_ty_receive_st_1127 = NULL;
g_ty_text_file_1128 = NULL;
g_file_state_type_1129 = NULL;
g_file_disp_type_1130 = NULL;
g_file_access_type_1131 = NULL;
g_no_cons_1132 = NULL;
{ P1026 cell2809 = rt_alloc(sizeof *cell2809);
rt_int pv2810 = ((rt_int)1000000LL);
cell2809->p_n = pv2810;
cell2809->all.lo = ((rt_int)1LL); cell2809->all.hi = pv2810;
cell2809->all.lo2 = cell2809->all.hi2 = 1;
cell2809->all.p = rt_alloc(sizeof(P1024) * (size_t)(RT_CNT(cell2809->all)) + 1);
for (rt_int i2811 = 0; i2811 < (RT_CNT(cell2809->all)); i2811++) {
cell2809->all.p[i2811] = NULL;
}
g_toks_1060 = cell2809;
}
{ P1043 cell2812 = rt_alloc(sizeof *cell2812);
rt_int pv2813 = (((rt_int)4093LL));
cell2812->p_n = pv2813;
cell2812->all.lo = ((rt_int)0LL); cell2812->all.hi = pv2813;
cell2812->all.lo2 = cell2812->all.hi2 = 1;
cell2812->all.p = rt_alloc(sizeof(P1039) * (size_t)(RT_CNT(cell2812->all)) + 1);
for (rt_int i2814 = 0; i2814 < (RT_CNT(cell2812->all)); i2814++) {
cell2812->all.p[i2814] = NULL;
}
g_table_1069 = cell2812;
}
g_out_types_1076 = f_new_buffer_24();
g_out_helpers_1077 = f_new_buffer_24();
g_out_protos_1078 = f_new_buffer_24();
g_out_globals_1079 = f_new_buffer_24();
g_out_funcs_1080 = f_new_buffer_24();
g_out_init_1081 = f_new_buffer_24();
g_out_excs_1082 = f_new_buffer_24();
g_out_frames_1092 = f_new_buffer_24();
g_out_roots_1093 = f_new_buffer_24();
g_code_1083 = g_out_init_1081;
g_no_cons_1132 = f_new_cons_184();
g_ty_int_1114 = f_new_typ_183((((rt_int)1LL)));
g_ty_bool_1115 = f_new_typ_183((((rt_int)2LL)));
g_ty_float_1116 = f_new_typ_183((((rt_int)3LL)));
g_ty_string_1118 = f_new_typ_183((((rt_int)5LL)));
g_ty_void_1119 = f_new_typ_183((((rt_int)9LL)));
g_ty_file_1120 = f_new_typ_183((((rt_int)10LL)));
g_ty_nil_1121 = f_new_typ_183((((rt_int)11LL)));
g_ty_lock_1122 = f_new_typ_183((((rt_int)13LL)));
g_ty_latch_1123 = f_new_typ_183((((rt_int)13LL)));
g_ty_act_1124 = f_new_typ_183((((rt_int)14LL)));
{ rt_frame xf2815;
if (RT_TRY(xf2815)) {
f_init_ascii_259();
f_read_source_58();
g_ntoks_before_library_1067 = rt_add(g_ntoks_1061, ((rt_int)1LL));
f_translate_1020(f_with_library_1008(f_program_159()));
f_print_program_1021();
RT_POP(xf2815);
} else {
RT_POP(xf2815);
int x2816 = rt_xcur;
if (0 || x2816 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2816);
}
}
}
  rt_main_done();
  return 0;
}
