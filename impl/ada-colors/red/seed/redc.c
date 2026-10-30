#include "paleo.h"
#include <math.h>
typedef struct Pc1014 *P1013;
typedef struct R1016 R1016;
typedef struct R1016 *P1015;
struct R1016 {  rt_int kind; rt_int line; rt_int ival; P1013 s; P1013 prags;  };
typedef struct Pc1018 *P1017;
typedef struct A1019 A1019;
struct A1019 { rt_int lo, hi, lo2, hi2; P1015 *p; };
typedef struct R1021 R1021;
typedef struct R1021 *P1020;
struct R1021 {  rt_int kind; rt_int line; rt_int ival; rt_int flag; P1013 name; P1013 tag; P1013 prags; P1020 labels; rt_int eline; P1020 a; P1020 b; P1020 c; P1020 d; P1020 e; P1020 next;  };
typedef struct R1023 R1023;
typedef struct R1023 *P1022;
typedef struct R1025 R1025;
typedef struct R1025 *P1024;
struct R1025 {  P1013 s; P1024 next;  };
struct R1023 {  P1013 lo; P1013 hi; P1013 lo2; P1013 hi2; P1013 slen; rt_int mlo; rt_int mhi; int hasm; P1020 args; int dyn; rt_int lvl; P1013 prec; P1024 bnds;  };
typedef struct R1027 R1027;
typedef struct R1027 *P1026;
typedef struct R1029 R1029;
typedef struct R1029 *P1028;
struct R1029 {  P1013 name; P1026 t; P1022 c; P1020 st; P1028 next;  };
typedef struct R1031 R1031;
typedef struct R1031 *P1030;
typedef struct R1033 R1033;
typedef struct R1033 *P1032;
struct R1033 {  P1013 name; rt_int mode; P1026 t; P1022 c; P1013 cfield; P1032 next;  };
typedef struct Pc1035 *P1034;
typedef struct A1036 A1036;
struct A1036 { rt_int lo, hi, lo2, hi2; P1030 *p; };
typedef struct R1038 R1038;
typedef struct R1038 *P1037;
struct R1038 {  rt_int depth; P1020 imps; int all_imp; P1037 next;  };
typedef struct R1040 R1040;
typedef struct R1040 *P1039;
struct R1040 {  rt_int kind; rt_int i; P1013 s; P1026 t; double f;  };
struct R1031 {  rt_int kind; P1013 name; P1026 t; P1022 c; P1013 access; P1013 cname; int ro_flag; rt_int mvalue; int hasmv; P1020 st; P1020 decl; P1032 params; P1026 result; rt_int depth; rt_int level; int byref; P1030 members; P1030 mnext; P1020 binds; P1030 insts; P1034 env; P1030 chain; P1030 stack; P1030 owner; P1037 gctx; P1039 mv; P1024 reqs; int reqdone; P1020 home; P1020 capn; P1030 tbinds; P1013 loc; P1030 reqs_sym; rt_int decl_line;  };
typedef struct R1042 R1042;
typedef struct R1042 *P1041;
struct R1042 {  P1026 t; P1041 next;  };
struct R1027 {  rt_int kind; P1013 name; P1020 lits; P1026 elem; P1026 idx; P1026 idx2; P1022 elemcons; P1020 elemst; P1026 under; P1020 tparams; P1020 ocap; P1028 fields; P1026 target; P1020 decl; P1013 cname; int forward; int defined; int helpers; P1030 initp; P1030 finalp; P1030 tpsyms; P1030 gen; P1030 gbinds; P1026 next; rt_int ndim; P1041 idxs; P1030 assignp; P1030 eqp; P1030 ltp; P1020 repn;  };
typedef struct R1044 R1044;
typedef struct R1044 *P1043;
struct R1044 {  P1024 head; P1024 tail;  };
typedef struct R1046 R1046;
typedef struct R1046 *P1045;
struct R1046 {  P1013 match; P1013 label; rt_int depth; P1045 next;  };
typedef struct R1048 R1048;
typedef struct R1048 *P1047;
struct R1048 {  P1020 d; P1047 next; rt_int depth;  };
typedef struct R1050 R1050;
typedef struct R1050 *P1049;
struct R1050 {  P1020 d; P1013 w; P1049 next;  };
struct f_mk_3fr { int dummy;
 rstr *s_2;
 P1013 result_;
 P1013 t_1123;
};
struct f_chs_5fr { int dummy;
 int c_4;
 rstr result_;
 rstr r_1126;
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
 rstr r_1127;
 rt_int i_1128;
};
struct f_field_c_17fr { int dummy;
 rstr *s_16;
 rstr result_;
 rstr l_1132;
 rstr w_1133;
 rt_int i_1134;
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
 P1043 result_;
 P1043 b_1138;
};
struct f_put_27fr { int dummy;
 P1043 b_25;
 rstr *s_26;
 P1024 l_1140;
};
struct f_emit_29fr { int dummy;
 rstr *s_28;
};
struct f_print_buffer_31fr { int dummy;
 P1043 b_30;
 P1024 l_1142;
};
struct f_splice_34fr { int dummy;
 P1043 a_32;
 P1043 b_33;
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
 P1015 t_1144;
};
struct f_ident_end_45fr { int dummy;
 rstr *line_43;
 rt_int i_44;
 rt_int result_;
 rt_int j_1146;
};
struct f_upper_s_47fr { int dummy;
 rstr *s_46;
 rstr result_;
 rstr w_1147;
 rt_int k_1148;
};
struct f_skip_blanks_50fr { int dummy;
 rstr *line_48;
 rt_int i_49;
 rt_int result_;
 rt_int j_1152;
};
struct f_lex_prag_53fr { int dummy;
 rstr *line_51;
 rt_int at_52;
 rt_int result_;
 rt_int j_1153;
 P1013 r_1154;
 int more_1155;
 rt_int k_1156;
 int go_1157;
};
struct f_check_pragmats_55fr { int dummy;
 rstr *r_54;
 rt_int i_1158;
 rt_int k_1159;
 rstr p_1160;
 int ok_1161;
 int known_1162;
};
struct f_lex_line_57fr { int dummy;
 rstr *line_56;
 rt_int i_1163;
 rt_int j_1164;
 rt_int n_1165;
 int c_1166;
 rstr w_1167;
 rt_int k_1168;
 rstr w_1172;
 rt_int k_1173;
 rstr two_1177;
};
struct f_read_source_58fr { int dummy;
 rstr line_1178;
 P1024 l_1179;
};
struct f_read_library_60fr { int dummy;
 rstr *name_59;
 int result_;
 rt_r_file * f_1181;
 int found_1182;
 rstr line_1185;
};
struct f_write_library_62fr { int dummy;
 P1020 u_61;
 rt_r_file * f_1186;
 P1024 l_1187;
 rt_int n_1188;
};
struct f_nn_65fr { int dummy;
 rt_int kind_63;
 rt_int line_64;
 P1020 result_;
 P1020 x_1189;
};
struct f_append_69fr { int dummy;
 P1020 *head_66;
 P1020 *tail_67;
 P1020 x_68;
};
struct f_list_len_71fr { int dummy;
 P1020 l_70;
 rt_int result_;
 rt_int n_1191;
 P1020 p_1192;
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
 P1013 result_;
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
 P1013 result_;
};
struct f_name_node_94fr { int dummy;
 P1020 result_;
 P1020 x_1193;
};
struct f_id_list_95fr { int dummy;
 P1020 result_;
 P1020 head_1194;
 P1020 tail_1195;
};
struct f_p_subtype_96fr { int dummy;
 P1020 result_;
 rt_int line_1196;
 P1020 x_1197;
 rstr w_1198;
 P1020 head_1199;
 P1020 tail_1200;
 P1020 head_1201;
 P1020 tail_1202;
 int more_1203;
 P1020 names_1204;
 P1020 st_1205;
 P1020 cmp_1206;
 P1020 head_1207;
 P1020 tail_1208;
 int more_1209;
 P1020 lit_1210;
};
struct f_constraint_list_97fr { int dummy;
 P1020 result_;
 P1020 head_1211;
 P1020 tail_1212;
 int more_1213;
 rt_int line_1214;
 P1020 lo_1215;
 P1020 r_1216;
};
struct f_actual_params_98fr { int dummy;
 P1020 result_;
 P1020 head_1217;
 P1020 tail_1218;
};
struct f_is_type_word_100fr { int dummy;
 rstr *w_99;
 int result_;
};
struct f_actual_tt_101fr { int dummy;
 P1020 result_;
 P1020 head_1219;
 P1020 tail_1220;
 int more_1221;
};
struct f_binop_106fr { int dummy;
 P1013 op_102;
 P1020 l_103;
 P1020 r_104;
 rt_int line_105;
 P1020 result_;
 P1020 x_1222;
};
struct f_expr_107fr { int dummy;
 P1020 result_;
 P1020 l_1223;
 P1013 op_1224;
 rt_int line_1225;
};
struct f_expr_and_108fr { int dummy;
 P1020 result_;
 P1020 l_1226;
 rt_int line_1227;
};
struct f_expr_not_109fr { int dummy;
 P1020 result_;
 P1020 x_1228;
};
struct f_is_rel_111fr { int dummy;
 rstr *s_110;
 int result_;
};
struct f_expr_rel_112fr { int dummy;
 P1020 result_;
 P1020 l_1229;
 P1013 op_1230;
 rt_int line_1231;
};
struct f_expr_add_113fr { int dummy;
 P1020 result_;
 P1020 l_1232;
 P1013 op_1233;
 rt_int line_1234;
};
struct f_expr_mul_114fr { int dummy;
 P1020 result_;
 P1020 l_1235;
 P1013 op_1236;
 rt_int line_1237;
};
struct f_expr_pow_115fr { int dummy;
 P1020 result_;
 P1020 l_1238;
 rt_int line_1239;
};
struct f_expr_prefix_116fr { int dummy;
 P1020 result_;
 P1020 x_1240;
};
struct f_postfix_117fr { int dummy;
 P1020 result_;
 P1020 p_1241;
 rt_int line_1242;
 P1020 x_1243;
 P1020 head_1244;
 P1020 tail_1245;
 int more_1246;
 P1020 lo_1247;
 P1020 r_1248;
 P1020 x_1249;
 P1020 x_1250;
 P1020 x_1251;
};
struct f_primary_118fr { int dummy;
 P1020 result_;
 rt_int line_1252;
 P1020 x_1253;
 rt_int k_1254;
 rstr w_1255;
 P1020 head_1256;
 P1020 tail_1257;
 int more_1258;
};
struct f_constructor_item_119fr { int dummy;
 P1020 result_;
 rt_int line_1259;
 P1020 it_1260;
 P1020 first_1261;
 P1020 keys_1262;
 P1020 ktail_1263;
 P1020 lab_1264;
 rt_int save_1265;
 P1020 more_1266;
 P1020 tail2_1267;
 int ok_1268;
 int go_1269;
 P1020 l2_1270;
};
struct f_at_body_end_120fr { int dummy;
 int result_;
};
struct f_body_121fr { int dummy;
 P1020 result_;
 P1020 head_1271;
 P1020 tail_1272;
 int stmts_1273;
 P1020 after_1274;
 P1020 x_1275;
};
struct f_body_element_122fr { int dummy;
 P1020 result_;
 P1020 x_1276;
 P1013 pr_1277;
 P1020 p_1278;
};
struct f_declaration_123fr { int dummy;
 P1020 result_;
 rt_int line_1279;
 P1020 head_1280;
 P1020 tail_1281;
 P1020 names_1282;
 P1020 x_1283;
};
struct f_object_decl_124fr { int dummy;
 P1020 result_;
 rt_int line_1284;
 int is_var_1285;
 P1020 names_1286;
 P1020 st_1287;
 P1020 init_1288;
 P1020 loc_1289;
 rt_int loc_kind_1290;
 P1020 head_1291;
 P1020 tail_1292;
 P1020 x_1293;
};
struct f_abbrev_decl_125fr { int dummy;
 P1020 result_;
 P1020 x_1294;
};
struct f_rep_spec_126fr { int dummy;
 P1020 result_;
};
struct f_rep_items_127fr { int dummy;
 P1020 result_;
 P1020 head_1295;
 P1020 tail_1296;
 int more_1297;
};
struct f_rep_word_129fr { int dummy;
 rt_int k_128;
 int result_;
 rstr w_1298;
};
struct f_rep_item_130fr { int dummy;
 P1020 result_;
 P1020 x_1299;
 P1020 head_1300;
 P1020 tail_1301;
 int more_1302;
 P1020 names_1303;
 P1020 items_1304;
 P1020 cmp_1305;
 P1020 head_1306;
 P1020 tail_1307;
 P1020 head_1308;
 P1020 tail_1309;
 int dummy_1310;
};
struct f_type_decl_131fr { int dummy;
 P1020 result_;
 rt_int line_1311;
 P1013 name_1312;
 P1020 params_1313;
 P1020 x_1314;
 P1020 tts_1315;
};
struct f_mode_of_133fr { int dummy;
 rstr *w_132;
 rt_int result_;
};
struct f_formal_params_134fr { int dummy;
 P1020 result_;
 P1020 head_1316;
 P1020 tail_1317;
 int more_1318;
 rt_int mode_1319;
 P1020 names_1320;
 P1020 ntail_1321;
 P1020 st_1322;
 P1020 p_1323;
};
struct f_imports_list_136fr { int dummy;
 P1020 owner_135;
 int result_;
 P1020 head_1324;
 P1020 tail_1325;
 int more_1326;
 int ro_1327;
 P1020 x_1328;
};
struct f_is_definable_138fr { int dummy;
 rstr *w_137;
 int result_;
};
struct f_definable_name_139fr { int dummy;
 P1013 result_;
 P1013 r_1329;
};
struct f_subprogram_decl_140fr { int dummy;
 P1020 result_;
 rt_int line_1330;
 P1020 x_1331;
 int is_abn_1332;
 int is_func_1333;
 int dummy_1334;
};
struct f_capsule_decl_141fr { int dummy;
 P1020 result_;
 P1020 x_1335;
 int dummy_1336;
 P1020 head_1337;
 P1020 tail_1338;
 int more_1339;
 P1020 n_1340;
};
struct f_formal_tt_142fr { int dummy;
 P1020 result_;
 P1020 head_1341;
 P1020 tail_1342;
 int more_1343;
};
struct f_generic_decl_143fr { int dummy;
 P1020 result_;
 P1020 x_1344;
 P1020 head_1345;
 P1020 tail_1346;
 int more_1347;
 P1020 names_1348;
 rt_int kind_1349;
 P1020 st_1350;
 P1020 items_1351;
 P1020 p_1352;
 P1020 nhead_1353;
 P1020 ntail_1354;
 P1020 it_1355;
};
struct f_type_list_144fr { int dummy;
 P1020 result_;
 P1020 head_1356;
 P1020 tail_1357;
 int more_1358;
 P1020 n_1359;
};
struct f_task_decl_145fr { int dummy;
 P1020 result_;
 P1020 x_1360;
 int dummy_1361;
};
struct f_expose_decl_146fr { int dummy;
 P1020 result_;
 P1020 x_1362;
 P1020 head_1363;
 P1020 tail_1364;
 int more_1365;
 P1020 n_1366;
 P1020 head_1367;
 P1020 tail_1368;
 int more_1369;
 P1020 n_1370;
 P1020 tgt_1371;
};
struct f_is_compound_kw_148fr { int dummy;
 rstr *w_147;
 int result_;
};
struct f_statement_149fr { int dummy;
 P1020 result_;
 P1020 labels_1372;
 P1020 ltail_1373;
 P1013 match_1374;
 P1020 s_1375;
};
struct f_unlabeled_statement_150fr { int dummy;
 P1020 result_;
 rt_int line_1376;
 P1020 x_1377;
 P1020 head_1378;
 P1020 tail_1379;
 P1020 invs_1380;
 P1020 itail_1381;
 int more_1382;
 P1020 target_1383;
};
struct f_arm_154fr { int dummy;
 P1020 cond_151;
 P1020 b_152;
 rt_int line_153;
 P1020 result_;
 P1020 x_1384;
};
struct f_if_stmt_155fr { int dummy;
 P1020 result_;
 P1020 x_1385;
 P1020 head_1386;
 P1020 tail_1387;
 P1020 cond_1388;
 int go_1389;
};
struct f_case_stmt_156fr { int dummy;
 P1020 result_;
 P1020 x_1390;
 P1020 head_1391;
 P1020 tail_1392;
 P1020 labs_1393;
 P1020 ltail_1394;
 int more_1395;
 P1020 l_1396;
};
struct f_repeat_stmt_157fr { int dummy;
 P1020 result_;
 P1020 x_1397;
};
struct f_guard_stmt_158fr { int dummy;
 P1020 result_;
 P1020 x_1398;
 P1020 head_1399;
 P1020 tail_1400;
 P1020 h_1401;
};
struct f_program_159fr { int dummy;
 P1020 result_;
 P1020 head_1402;
 P1020 tail_1403;
 P1013 pr_1404;
 P1020 u_1405;
};
struct f_hash_161fr { int dummy;
 rstr *s_160;
 rt_int result_;
 rt_int h_1406;
 rt_int i_1407;
};
struct f_lookup_163fr { int dummy;
 rstr *name_162;
 P1030 result_;
 P1030 y_1411;
};
struct f_lookup_decl_165fr { int dummy;
 P1020 d_164;
 P1030 result_;
 P1030 y_1412;
};
struct f_define_168fr { int dummy;
 P1030 y_166;
 rt_int line_167;
 rt_int h_1413;
 P1030 z_1414;
};
struct f_overloadable_170fr { int dummy;
 P1030 y_169;
 int result_;
};
struct f_same_tt_173fr { int dummy;
 P1020 a_171;
 P1020 b_172;
 int result_;
 P1020 x_1415;
 P1020 y_1416;
};
struct f_same_signature_176fr { int dummy;
 P1032 a_174;
 P1032 b_175;
 int result_;
 P1032 x_1417;
 P1032 y_1418;
};
struct f_open_scope_177fr { int dummy;
};
struct f_close_scope_178fr { int dummy;
};
struct f_new_sym_181fr { int dummy;
 rt_int kind_179;
 P1013 name_180;
 P1030 result_;
 P1030 y_1419;
};
struct f_new_typ_183fr { int dummy;
 rt_int kind_182;
 P1026 result_;
 P1026 t_1421;
};
struct f_new_cons_184fr { int dummy;
 P1022 result_;
 P1022 c_1423;
};
struct f_scalar_kind_186fr { int dummy;
 P1026 t_185;
 int result_;
};
struct f_bound_ctype_188fr { int dummy;
 P1026 t_187;
 rstr result_;
};
struct f_cbound_191fr { int dummy;
 P1022 c_189;
 rstr *b_190;
 rstr result_;
 P1013 p_1425;
 rt_int i_1426;
};
struct f_clo_193fr { int dummy;
 P1022 c_192;
 rstr result_;
};
struct f_chi_195fr { int dummy;
 P1022 c_194;
 rstr result_;
};
struct f_sub_lo_198fr { int dummy;
 P1026 t_196;
 P1022 c_197;
 rstr result_;
};
struct f_sub_hi_201fr { int dummy;
 P1026 t_199;
 P1022 c_200;
 rstr result_;
};
struct f_raw_storage_204fr { int dummy;
 rstr *name_202;
 rstr *ct_203;
 rstr result_;
 rstr g_1430;
 rstr f_1431;
};
struct f_copy_cons_206fr { int dummy;
 P1022 c_205;
 P1022 result_;
 P1022 r_1432;
};
struct f_freeze_209fr { int dummy;
 P1022 c_207;
 P1026 t_208;
 P1022 result_;
 P1022 r_1434;
 P1013 saved_field_1435;
 rstr ct_1436;
 rstr la_1437;
 rstr lf_1438;
 rstr ha_1439;
 rstr hf_1440;
};
struct f_checked_213fr { int dummy;
 P1026 t_210;
 P1022 c_211;
 rstr *v_212;
 rstr result_;
};
struct f_same_lits_216fr { int dummy;
 P1020 a_214;
 P1020 b_215;
 int result_;
 P1020 x_1441;
 P1020 y_1442;
};
struct f_str_elem_218fr { int dummy;
 P1026 t_217;
 P1026 result_;
};
struct f_same_221fr { int dummy;
 P1026 a_219;
 P1026 b_220;
 int result_;
 P1041 x_1443;
 P1041 y_1444;
 P1028 f_1445;
 P1028 g_1446;
};
struct f_base_of_223fr { int dummy;
 P1026 t_222;
 P1026 result_;
};
struct f_base_cons_226fr { int dummy;
 P1026 t_224;
 P1022 c_225;
 P1022 result_;
};
struct f_kind_name_228fr { int dummy;
 P1026 t_227;
 rstr result_;
};
struct f_check_type_232fr { int dummy;
 P1026 got_229;
 P1026 want_230;
 rt_int line_231;
};
struct f_ctype_234fr { int dummy;
 P1026 t_233;
 rstr result_;
};
struct f_struct_body_236fr { int dummy;
 P1026 t_235;
 rstr result_;
};
struct f_field_decls_238fr { int dummy;
 P1026 t_237;
 rstr result_;
 P1028 f_1449;
 P1013 s_1450;
};
struct f_declare_ctype_240fr { int dummy;
 P1026 t_239;
 P1026 u_1451;
 P1020 p_1452;
 P1013 fs_1453;
 rstr sn_1454;
 P1022 pc_1455;
 P1026 target_1456;
 P1020 p_1457;
 P1013 fs_1458;
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
 P1026 t_245;
 rstr result_;
 P1013 r_1459;
 rt_int k_1460;
};
struct f_acnt_249fr { int dummy;
 P1026 t_247;
 rstr *base_248;
 rstr result_;
 P1013 r_1464;
 rt_int k_1465;
};
struct f_cons_lo_252fr { int dummy;
 P1022 c_250;
 rt_int k_251;
 P1013 result_;
 P1024 l_1469;
 rt_int i_1470;
};
struct f_cons_hi_255fr { int dummy;
 P1022 c_253;
 rt_int k_254;
 P1013 result_;
 P1024 l_1474;
 rt_int i_1475;
};
struct f_idx_type_258fr { int dummy;
 P1026 t_256;
 rt_int k_257;
 P1026 result_;
 P1041 l_1479;
 rt_int i_1480;
};
struct f_init_ascii_259fr { int dummy;
 P1020 head_1484;
 P1020 tail_1485;
 rt_int start_1486;
 rt_int i_1487;
 P1020 lit_1491;
 P1020 h2_1492;
 P1020 t2_1493;
 P1020 l1_1494;
 P1020 l2_1495;
 P1020 l3_1496;
};
struct f_enum2_262fr { int dummy;
 rstr *a_260;
 rstr *b_261;
 P1026 result_;
 P1026 t_1497;
 P1020 l1_1498;
 P1020 l2_1499;
};
struct f_lit_index_265fr { int dummy;
 P1020 lits_263;
 rstr *name_264;
 rt_int result_;
 rt_int i_1500;
 P1020 l_1501;
};
struct f_resolve_subtype_268fr { int dummy;
 P1020 st_266;
 P1022 *c_267;
 P1022 c_267v;
 P1026 result_;
 P1026 t_1502;
 int ok_1503;
 P1026 dummy_1504;
 P1026 et_1506;
 P1022 ec_1507;
 P1026 et_1508;
 P1020 ix_1509;
 rt_int k_1510;
 P1041 tail_1511;
 P1024 btail_1512;
 P1022 ic_1513;
 P1026 it_1514;
 P1013 lo_1515;
 P1013 hi_1516;
 P1041 tl_1517;
 P1024 l1_1519;
 P1024 l2_1520;
 P1022 ec_1523;
 P1020 comp_1524;
 P1028 tail_1525;
 P1022 cc_1526;
 P1028 f_1527;
 P1020 lits_1529;
 P1020 ltail_1530;
 P1028 f_1531;
 P1020 l_1532;
 P1022 ec_1533;
 P1020 gt_1534;
 P1022 ec_1535;
 P1013 base_1536;
};
struct f_float_lit_270fr { int dummy;
 P1020 e_269;
 int result_;
};
struct f_tag_constraint_274fr { int dummy;
 P1026 t_271;
 P1020 e_272;
 P1022 c_273;
 P1026 dummy_1537;
};
struct f_named_subtype_277fr { int dummy;
 P1020 st_275;
 P1022 *c_276;
 P1022 c_276v;
 P1026 result_;
 P1026 t_1538;
 P1030 y_1539;
 rstr name_1540;
 P1030 binds_1541;
 P1034 saved_env_1542;
 rt_int saved_gdepth_1543;
 P1030 nb_1544;
};
struct f_invoke_abbrev_281fr { int dummy;
 P1030 y_278;
 P1020 st_279;
 P1022 *c_280;
 P1022 c_280v;
 P1026 result_;
 P1020 p_1545;
 P1020 a_1546;
 P1026 t_1547;
 P1030 z_1548;
 P1022 pc_1549;
 P1026 at_1550;
 int ok_1551;
};
struct f_apply_constraint_286fr { int dummy;
 P1026 t_282;
 P1020 args_283;
 P1022 c_284;
 rt_int line_285;
 P1026 dummy_1552;
 int ok_1553;
};
struct f_value_subtype_290fr { int dummy;
 P1020 e_287;
 P1022 *c_288;
 P1022 c_288v;
 P1013 *base_289;
 P1013 base_289v;
 P1026 result_;
 P1026 t_1554;
 P1022 c0_1555;
 int ro_1556;
 rt_int k_1557;
 rstr lo_1561;
 rstr hi_1562;
 P1024 l1_1563;
 P1024 l2_1564;
 P1020 p_1567;
 P1020 head_1568;
 P1020 tail_1569;
 P1020 sel_1570;
};
struct f_reverse_pairs_292fr { int dummy;
 P1024 l_291;
 P1024 result_;
 P1024 r_1571;
 P1024 p_1572;
 P1024 a_1573;
 P1024 b_1574;
};
struct f_inquiry_295fr { int dummy;
 P1020 st_293;
 P1022 *c_294;
 P1022 c_294v;
 P1026 result_;
 P1013 base_1575;
 P1026 t_1576;
 rstr name_1577;
 P1020 sub_1578;
 P1022 c2_1579;
 rt_int k_1580;
 int ok_1581;
 P1022 ac_1582;
};
struct f_as_subtype_297fr { int dummy;
 P1020 e_296;
 P1020 result_;
 P1020 st_1583;
 rstr name_1584;
 P1030 y_1585;
};
struct f_tt_subtype_302fr { int dummy;
 P1013 name_298;
 P1020 tt_299;
 P1020 args_300;
 rt_int line_301;
 P1020 result_;
 P1020 st_1586;
};
struct f_type_name_304fr { int dummy;
 rstr *name_303;
 int result_;
 P1030 y_1587;
};
struct f_empty_set_306fr { int dummy;
 P1026 t_305;
 rstr result_;
};
struct f_opened_308fr { int dummy;
 P1026 t_307;
 int result_;
 P1047 c_1588;
};
struct f_replace_all_312fr { int dummy;
 rstr *s_309;
 rstr *pat_310;
 rstr *r_311;
 rstr result_;
 rt_int i_1589;
};
struct f_subst_314fr { int dummy;
 rstr *s_313;
 rstr result_;
 P1024 l_1590;
 P1013 r_1591;
};
struct f_new_type_318fr { int dummy;
 P1030 y_315;
 P1020 st_316;
 P1022 *c_317;
 P1022 c_317v;
 P1026 result_;
 P1020 d_1592;
 P1020 p_1593;
 P1022 uc_1594;
 P1030 z_1595;
 P1022 zc_1596;
};
struct f_needed_bits_321fr { int dummy;
 P1026 t_319;
 P1022 c_320;
 rt_int result_;
 rt_int n_1597;
 rt_int v_1598;
};
struct f_has_digits_only_323fr { int dummy;
 rstr *s_322;
 int result_;
 rt_int i_1599;
};
struct f_built_in_only_325fr { int dummy;
 P1026 t_324;
 int result_;
 P1028 f_1603;
};
struct f_check_rep_332fr { int dummy;
 P1020 items_326;
 P1026 t_327;
 P1022 c_328;
 int top_329;
 int indirect_330;
 P1020 d_331;
 P1020 it_1604;
 int ok_1605;
 P1026 at_1606;
 rstr w_1607;
 rt_int v_1608;
 rstr dummy_1609;
 rt_int m_1610;
 int ok2_1611;
 rt_int r_1612;
 rt_int o_1613;
 P1020 comp_1614;
 P1028 f_1615;
 P1020 k_1616;
 P1020 a_1617;
};
struct f_formal_named_335fr { int dummy;
 P1020 d_333;
 rstr *name_334;
 int result_;
 P1020 p_1618;
};
struct f_unchecked_free_337fr { int dummy;
 P1026 t_336;
 int result_;
 P1020 it_1619;
};
struct f_init_storage_341fr { int dummy;
 rstr *lval_338;
 P1026 t_339;
 P1022 c_340;
};
struct f_init_call_344fr { int dummy;
 P1030 y_342;
 rstr *lval_343;
 rstr result_;
 P1013 link_1620;
 rt_int i_1621;
};
struct f_needs_fin_346fr { int dummy;
 P1026 t_345;
 int result_;
 P1028 f_1625;
};
struct f_fin_code_349fr { int dummy;
 rstr *lval_347;
 P1026 t_348;
 rstr result_;
 P1013 r_1626;
 rstr i_1627;
 P1028 f_1628;
 P1028 f_1629;
 rt_int i_1630;
};
struct f_tparam_type_352fr { int dummy;
 P1026 t_350;
 rstr *name_351;
 P1026 result_;
 P1030 z_1631;
};
struct f_make_storage_356fr { int dummy;
 rstr *lval_353;
 P1026 t_354;
 P1022 c_355;
 P1020 p_1632;
 P1020 a_1633;
 P1022 uc_1634;
 P1026 ut_1635;
 P1026 at_1636;
 P1026 pt_1637;
 rstr v_1638;
 P1024 saved_1639;
 P1024 l1_1640;
 P1024 l2_1641;
 P1026 at_1644;
 rstr acc_1645;
 rstr use_1646;
 rt_int k_1647;
 rstr i_1651;
 P1028 f_1652;
 P1028 f_1653;
 rt_int i_1654;
};
struct f_flat_358fr { int dummy;
 P1026 t_357;
 int result_;
 P1028 f_1658;
};
struct f_uninit_value_360fr { int dummy;
 P1026 t_359;
 rstr result_;
};
struct f_init_chk_363fr { int dummy;
 P1026 t_361;
 rstr *v_362;
 rstr result_;
 P1026 b_1659;
};
struct f_manifest_366fr { int dummy;
 P1020 e_364;
 int *ok_365;
 int ok_365v;
 rt_int result_;
 P1039 v_1660;
};
struct f_mk_mval_369fr { int dummy;
 rt_int kind_367;
 rt_int i_368;
 P1039 result_;
 P1039 v_1661;
};
struct f_ipow_372fr { int dummy;
 rt_int a_370;
 rt_int b_371;
 rt_int result_;
 rt_int r_1663;
 rt_int i_1664;
};
struct f_meval_375fr { int dummy;
 P1020 e_373;
 int *ok_374;
 int ok_374v;
 P1039 result_;
 P1039 a_1668;
 P1039 b_1669;
 int ok2_1670;
 P1013 op_1671;
 P1030 y_1674;
 P1039 r_1675;
};
struct f_float_op_380fr { int dummy;
 rstr *op_376;
 P1039 a_377;
 P1039 b_378;
 int *ok_379;
 int ok_379v;
 P1039 result_;
 P1039 r_1676;
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
 P1039 v_385;
 rstr result_;
};
struct f_ascii_char_388fr { int dummy;
 rt_int i_387;
 int result_;
 rstr printable_1679;
};
struct f_user_defined_390fr { int dummy;
 rstr *op_389;
 int result_;
 P1030 y_1680;
};
struct f_mcopy_392fr { int dummy;
 P1026 t_391;
 rstr result_;
 rstr ct_1681;
 rstr name_1682;
 P1024 l_1683;
};
struct f_composite_394fr { int dummy;
 P1026 t_393;
 int result_;
};
struct f_user_call2_400fr { int dummy;
 P1030 y_395;
 rstr *a_396;
 int lv_a_397;
 rstr *b_398;
 int lv_b_399;
 rstr result_;
 P1013 args_1685;
 rt_int i_1686;
};
struct f_user_arg_404fr { int dummy;
 P1032 pm_401;
 rstr *v_402;
 int lv_403;
 rstr result_;
 rstr ct_1690;
};
struct f_top_level_406fr { int dummy;
 P1030 y_405;
 int result_;
};
struct f_assign_code_411fr { int dummy;
 rstr *lval_407;
 P1026 t_408;
 rstr *v_409;
 P1022 c_410;
 rstr result_;
};
struct f_copy_code_414fr { int dummy;
 P1026 t_412;
 rstr *v_413;
 rstr result_;
};
struct f_eq_code_418fr { int dummy;
 P1026 t_415;
 rstr *a_416;
 rstr *b_417;
 rstr result_;
};
struct f_elem_assign_422fr { int dummy;
 rstr *lval_419;
 P1026 t_420;
 rstr *v_421;
 rstr result_;
};
struct f_seen_name_425fr { int dummy;
 P1024 l_423;
 rstr *s_424;
 int result_;
 P1024 p_1691;
};
struct f_emit_helpers_426fr { int dummy;
 P1026 order_1692;
 P1026 t_1693;
 P1024 done_1694;
 P1024 l_1695;
 rstr c_1696;
};
struct f_helper_bodies_428fr { int dummy;
 P1026 t_427;
 rstr c_1698;
 P1043 b_1699;
 P1026 e_1700;
 P1013 sizes_1701;
 P1013 bounds_1702;
 rt_int k_1703;
 rstr l_1707;
 rstr h_1708;
 P1024 saved_1709;
 P1020 p_1710;
 P1024 l1_1711;
 P1024 l2_1712;
 P1028 f_1715;
 rt_int i_1716;
 P1013 cases_as_1717;
 P1013 cases_cp_1718;
 P1013 cases_eq_1719;
 rstr fn_1720;
 P1028 f_1721;
 P1013 conds_1722;
 rstr fn_1723;
 rstr fn_1724;
};
struct f_declare_body_430fr { int dummy;
 P1020 elems_429;
 P1020 e_1725;
 P1030 g_1726;
 P1030 y_1727;
 P1030 y_1728;
 P1030 y_1729;
 P1026 t_1730;
 P1030 y_1731;
 P1030 y_1732;
 P1034 snap_1733;
 rt_int i_1737;
 P1030 g_1741;
 P1030 y_1742;
 P1030 y_1743;
};
struct f_manifest_const_432fr { int dummy;
 P1020 d_431;
 int ok_1744;
 P1039 v_1745;
 P1030 y_1746;
 P1026 t_1747;
 P1013 ctext_1748;
 P1043 saved_1749;
};
struct f_exported_436fr { int dummy;
 P1020 d_433;
 rstr *name_434;
 int *ro_435;
 int ro_435v;
 int result_;
 P1020 p_1752;
};
struct f_copy_sym_438fr { int dummy;
 P1030 y_437;
 P1030 result_;
 P1030 z_1753;
};
struct f_gen_capsule_440fr { int dummy;
 P1020 d_439;
 P1030 y_1755;
 P1013 saved_1756;
 P1020 p_1757;
 P1032 tail_1758;
 P1032 pm_1759;
};
struct f_capsule_params_444fr { int dummy;
 P1020 d_441;
 P1020 args_442;
 rt_int line_443;
 P1020 p_1761;
 P1020 a_1762;
 P1026 t_1763;
 P1026 vt_1764;
 P1022 c_1765;
 P1013 lv_1766;
 P1022 lc_1767;
 int ro_1768;
 P1030 y_1769;
 rstr f_1770;
 rstr g_1771;
 P1030 y_1772;
 rstr v_1773;
 rstr access_1774;
};
struct f_elaborate_capsule_449fr { int dummy;
 P1020 d_445;
 P1030 y_446;
 P1020 args_447;
 P1020 owner_448;
 P1047 cr_1775;
 P1037 ctx_1776;
 P1045 saved_gotos_1777;
 P1030 m_1778;
 P1020 p_1779;
 int ro_1780;
 P1049 w_1783;
 P1030 z_1785;
};
struct f_exports_op_452fr { int dummy;
 P1020 d_450;
 rstr *op_451;
 int result_;
 P1020 p_1786;
};
struct f_renamed_455fr { int dummy;
 P1020 d_453;
 P1030 z_454;
 P1013 result_;
 P1020 r_1787;
};
struct f_cap_tt_match_458fr { int dummy;
 P1020 f_456;
 P1020 a_457;
 int result_;
 P1020 x_1788;
 P1020 y_1789;
 int ok1_1790;
 int ok2_1791;
 P1039 v1_1792;
 P1039 v2_1793;
};
struct f_pick_capsule_460fr { int dummy;
 P1020 d_459;
 P1030 result_;
 P1030 y_1794;
 P1030 first_1795;
 P1030 fit_1796;
 rt_int n_1797;
};
struct f_capsule_instance_463fr { int dummy;
 P1030 g_461;
 P1020 d_462;
 P1030 result_;
 P1020 gd_1798;
 P1020 pat_1799;
 P1030 binds_1800;
 P1030 inst_1801;
 P1034 saved_env_1802;
 rt_int saved_gdepth_1803;
 P1030 b_1804;
};
struct f_configure_465fr { int dummy;
 P1030 y_464;
 P1030 m_1805;
 rstr n_1806;
};
struct f_gen_expose_467fr { int dummy;
 P1020 d_466;
 P1030 y_1807;
 P1030 m_1808;
 P1020 p_1809;
 P1020 r_1810;
 P1030 inst_1811;
 int found_1812;
 P1030 z_1813;
 int found_1814;
 P1030 z_1815;
};
struct f_finish_ptr_469fr { int dummy;
 P1026 t_468;
 P1020 d_1816;
 P1020 p_1817;
 P1022 c_1818;
 rstr dummy_1819;
 rt_int pass_1820;
 P1030 y_1824;
 P1022 pc_1825;
};
struct f_ptr_args_471fr { int dummy;
 P1022 c_470;
 P1020 result_;
};
struct f_bind_ptr_params_476fr { int dummy;
 P1020 formals_472;
 P1020 actuals_473;
 rstr *cell_474;
 rt_int line_475;
 P1020 p_1826;
 P1020 a_1827;
 P1026 vt_1828;
 P1022 pc_1829;
 P1030 y_1830;
 rstr v_1831;
 rstr pv_1832;
};
struct f_alloc_cell_481fr { int dummy;
 P1020 s_477;
 rstr *lv_478;
 P1026 t_479;
 P1022 c_480;
 P1020 d_1833;
 P1022 tc_1834;
 P1026 vt_1835;
 rstr pt_1836;
 rstr cell_1837;
 rstr fn_1838;
 rstr v_1839;
};
struct f_freeze_args_485fr { int dummy;
 P1022 c_482;
 P1026 t_483;
 rt_int line_484;
 P1022 result_;
 P1022 r_1840;
 P1020 p_1841;
 P1020 a_1842;
 P1020 head_1843;
 P1020 tail_1844;
 P1013 saved_1845;
 P1022 pc_1846;
 P1026 vt_1847;
 P1026 pt_1848;
 rstr nm_1849;
 P1030 y_1850;
 P1020 n_1851;
 rstr v_1852;
 rstr access_1853;
};
struct f_ptr_subtype_check_489fr { int dummy;
 P1026 t_486;
 P1022 c_487;
 P1020 src_488;
 P1013 lv_1854;
 P1026 st_1855;
 P1022 sc_1856;
 int ro_1857;
 P1013 cond_1858;
 P1020 a_1859;
 P1020 b_1860;
 P1026 at_1861;
 P1026 bt_1862;
 rstr x_1863;
 rstr y_1864;
};
struct f_normal_function_492fr { int dummy;
 P1020 d_490;
 P1030 y_491;
 P1032 p_1865;
 P1020 imp_1866;
 int ro_1867;
 P1030 z_1868;
};
struct f_foreign_body_495fr { int dummy;
 P1020 d_493;
 P1030 y_494;
 P1032 pm_1869;
 P1013 proto_1870;
 P1013 args_1871;
 rstr cn_1872;
};
struct f_declare_subprogram_497fr { int dummy;
 P1020 d_496;
};
struct f_build_subprogram_499fr { int dummy;
 P1020 d_498;
 P1030 result_;
 P1030 y_1873;
 P1020 p_1874;
 P1032 tail_1875;
 P1032 pm_1876;
 P1022 rc_1878;
 P1032 pm_1879;
 P1043 saved_1880;
 P1030 z_1881;
};
struct f_has_pragmat_502fr { int dummy;
 P1013 pr_500;
 rstr *p_501;
 int result_;
 rt_int i_1882;
};
struct f_suppressing_504fr { int dummy;
 P1013 pr_503;
 P1013 result_;
 P1013 r_1886;
 rt_int i_1887;
 rt_int j_1888;
 rt_int k_1889;
};
struct f_suppressed_506fr { int dummy;
 rstr *x_505;
 int result_;
 rstr w_1890;
 rt_int i_1891;
};
struct f_element_508fr { int dummy;
 P1020 e_507;
 P1013 saved_1895;
};
struct f_element1_510fr { int dummy;
 P1020 e_509;
 rt_int k_1896;
 P1030 g_1897;
 rt_int i_1901;
 P1022 c_1905;
 P1020 st_1906;
 P1026 t_1907;
 P1026 t_1908;
 rstr c_1909;
};
struct f_storage_513fr { int dummy;
 rstr *name_511;
 P1026 t_512;
 rstr result_;
 rstr g_1910;
 rstr f_1911;
};
struct f_bind_516fr { int dummy;
 P1030 y_514;
 rstr *access_515;
};
struct f_var_decl_518fr { int dummy;
 P1020 d_517;
};
struct f_located_var_520fr { int dummy;
 P1020 d_519;
 P1022 c_1912;
 P1026 at_1913;
 P1026 t_1914;
 P1030 y_1915;
 rstr addr_1916;
 rstr av_1917;
 rstr af_1918;
 rstr access_1919;
 P1026 vt_1920;
 rstr v_1921;
 rstr pv_1922;
 rstr pf_1923;
 P1026 vt_1924;
 rstr v_1925;
};
struct f_rep_sync_523fr { int dummy;
 P1030 y_521;
 int pack_522;
 rstr result_;
 rstr lv_1926;
 rstr base_1927;
 P1024 saved_1928;
 P1020 p_1929;
 P1013 r_1930;
 P1013 inner_1931;
 P1030 z_1932;
};
struct f_cbound_access_525fr { int dummy;
 P1030 y_524;
 rstr result_;
 P1022 c_1933;
};
struct f_rep_size_529fr { int dummy;
 P1020 items_526;
 P1026 t_527;
 P1022 c_528;
 rstr result_;
 P1020 it_1934;
 P1026 at_1935;
};
struct f_rep_find_532fr { int dummy;
 P1020 items_530;
 rstr *w_531;
 P1020 result_;
 P1020 it_1936;
};
struct f_rep_comp_535fr { int dummy;
 P1020 items_533;
 rstr *name_534;
 P1020 result_;
 P1020 r_1937;
 P1020 comp_1938;
};
struct f_default_bits_538fr { int dummy;
 P1026 t_536;
 P1022 c_537;
 rt_int result_;
 P1028 f_1939;
 rt_int n_1940;
};
struct f_rep_code_545fr { int dummy;
 P1026 t_539;
 P1022 c_540;
 P1020 items_541;
 rstr *lval_542;
 rstr *addr_543;
 int pack_544;
 rstr result_;
 rstr size_1941;
 P1028 f_1942;
 P1013 r_1943;
 P1013 off_1944;
 rt_int i_1945;
 P1020 ti_1946;
 P1013 tsize_1947;
 P1013 toff_1948;
 P1026 at_1949;
 P1020 ci_1950;
 P1013 fo_1951;
 rstr fl_1952;
 P1026 at_1953;
 rstr part_1954;
 P1020 ai_1955;
 P1020 ei_1956;
 rstr es_1957;
 rstr iv_1958;
 rstr iv_1959;
};
struct f_union_part_547fr { int dummy;
 P1026 t_546;
 rstr result_;
};
struct f_rep_scalar_554fr { int dummy;
 P1026 t_548;
 P1022 c_549;
 rstr *lval_550;
 rstr *addr_551;
 rstr *size_552;
 int pack_553;
 rstr result_;
 rstr signed_1960;
};
struct f_max_range_557fr { int dummy;
 P1026 t_555;
 P1022 c_556;
};
struct f_var_decl2_559fr { int dummy;
 P1020 d_558;
 P1022 c_1961;
 P1026 t_1962;
 P1030 y_1963;
 rstr access_1964;
 P1026 it_1965;
 rstr n_1966;
 P1026 vt_1967;
 rstr v_1968;
};
struct f_open_fin_561fr { int dummy;
 rstr *fc_560;
 rstr f_1969;
 P1024 l_1970;
};
struct f_close_fins_563fr { int dummy;
 P1024 saved_562;
};
struct f_const_decl_565fr { int dummy;
 P1020 d_564;
 P1022 c_1972;
 P1026 t_1973;
 P1026 vt_1974;
 P1030 y_1975;
 int ok_1976;
 rstr v_1977;
 rstr access_1978;
};
struct f_subprogram_567fr { int dummy;
 P1020 d_566;
};
struct f_gen_subprogram_570fr { int dummy;
 P1020 d_568;
 P1030 y_569;
 P1043 saved_code_1979;
 P1043 saved_fields_1980;
 int saved_in_1981;
 P1030 saved_sym_1982;
 P1045 saved_exits_1983;
 P1045 saved_gotos_1984;
 rt_int saved_frames_1985;
 P1013 args_1986;
 P1032 pm_1987;
 P1024 saved_handlers_1988;
 P1024 saved_cleanups_1989;
 P1037 ctx_1990;
 P1013 head_1991;
 P1013 frame_1992;
 P1013 parent_1993;
 P1013 copy_back_1994;
 P1013 pfin_1995;
 P1024 saved_fins_1996;
 P1022 saved_rc_1997;
 P1013 saved_ret_1998;
 P1013 saved_rflag_1999;
 P1020 pn_2000;
 P1013 nonrec_end_2001;
 int has_pfin_2002;
 rstr ct_2004;
 rstr f_2005;
 P1030 p_2006;
 P1022 pc_2007;
 P1022 ac_2008;
 P1022 fc_2009;
 P1026 ft_2010;
 rstr bt_2011;
 P1022 rc_2012;
 P1026 rt_2013;
 rstr g_2014;
 P1013 leave_2015;
 rstr xu_2016;
};
struct f_waits_of_572fr { int dummy;
 P1020 d_571;
 rstr result_;
 P1049 w_2017;
};
struct f_task_waits_574fr { int dummy;
 P1020 elems_573;
 rstr result_;
 P1020 e_2018;
 P1013 r_2019;
};
struct f_await_tasks_576fr { int dummy;
 P1020 elems_575;
 rstr w_2020;
};
struct f_capsule_elements_578fr { int dummy;
 P1020 elems_577;
 P1020 e_2021;
};
struct f_declare_labels_580fr { int dummy;
 P1020 elems_579;
 P1020 e_2022;
 P1020 l_2023;
 P1045 x_2024;
};
struct f_start_labels_581fr { int dummy;
 P1045 x_2026;
};
struct f_goto_label_583fr { int dummy;
 rstr *name_582;
 P1045 result_;
 P1045 x_2027;
};
struct f_has_return_585fr { int dummy;
 P1020 e_584;
 int result_;
 P1020 x_2028;
};
struct f_capsule_body_587fr { int dummy;
 P1020 elems_586;
 P1013 saved_ret_2029;
 P1013 saved_flag_2030;
 rt_int saved_frames_2031;
 P1020 e_2032;
 int stmt_2033;
};
struct f_body_elements_589fr { int dummy;
 P1020 elems_588;
};
struct f_gen_body_591fr { int dummy;
 P1020 elems_590;
 P1024 saved_2034;
 P1045 saved_gotos_2035;
 rstr xu_2036;
};
struct f_open_unhandled_593fr { int dummy;
 P1020 elems_592;
 rstr result_;
 P1020 e_2037;
 P1013 conds_2038;
 rstr f_2039;
};
struct f_close_unhandled_595fr { int dummy;
 rstr *xu_594;
 rt_int i_2040;
 rstr f_2041;
};
struct f_pop_frames_597fr { int dummy;
 rt_int upto_596;
 rt_int i_2042;
 P1024 c_2043;
};
struct f_push_cleanup_599fr { int dummy;
 rstr *s_598;
 P1024 c_2044;
};
struct f_pop_cleanup_600fr { int dummy;
};
struct f_gen_statement_602fr { int dummy;
 P1020 s_601;
 P1030 located_2046;
 P1030 l_2047;
};
struct f_located_in_605fr { int dummy;
 P1020 e_603;
 P1030 found_604;
 P1030 result_;
 P1020 x_2048;
 P1030 r_2049;
 P1030 y_2050;
};
struct f_sym_in_608fr { int dummy;
 P1030 l_606;
 P1030 y_607;
 int result_;
 P1030 p_2051;
};
struct f_gen_statement2_610fr { int dummy;
 P1020 s_609;
 P1013 label_2052;
 P1020 gl_2053;
 P1045 x_2054;
 P1045 x_2057;
};
struct f_st_assign_612fr { int dummy;
 P1020 s_611;
 P1013 lv_2058;
 P1026 t_2059;
 P1026 vt_2060;
 P1022 c_2061;
 int ro_2062;
 rstr lo_2063;
 rstr hi_2064;
 rstr v_2065;
 rstr lo_2066;
 rstr hi_2067;
 rstr v_2068;
 rstr v_2069;
};
struct f_st_call_614fr { int dummy;
 P1020 s_613;
 P1020 c_2070;
 P1026 t_2071;
 P1020 x_2072;
};
struct f_st_if_616fr { int dummy;
 P1020 s_615;
 P1020 a_2073;
 int first_2074;
 P1026 t_2075;
 int taken_2076;
 int ok_2077;
 P1039 mv_2078;
 rstr c_2079;
};
struct f_manifest_case_618fr { int dummy;
 P1020 s_617;
 int result_;
 int ok_2080;
 P1039 sv_2081;
 P1020 a_2082;
 P1020 lab_2083;
 P1039 lo_2084;
 P1039 hi_2085;
};
struct f_st_case_620fr { int dummy;
 P1020 s_619;
 P1026 st_2086;
 P1026 vt_2087;
 int first_2088;
 P1020 a_2089;
};
struct f_st_case2_622fr { int dummy;
 P1020 s_621;
 P1026 st_2090;
 P1026 vt_2091;
 int first_2092;
 P1020 a_2093;
 rstr sel_2094;
 rstr tmp_2095;
 P1020 lab_2096;
 P1013 conds_2097;
 rstr v_2098;
 rstr lo_2099;
 rstr hi_2100;
 rstr lo_2101;
 rstr hi_2102;
};
struct f_user_for_626fr { int dummy;
 P1020 s_623;
 P1026 t_624;
 P1022 c_625;
 P1030 y_2103;
 P1024 saved_2104;
 P1020 p_2105;
 P1020 iv_2106;
 P1026 st_2107;
 rstr access_2108;
 P1013 uv_2109;
 P1024 l1_2110;
 P1024 l2_2111;
 rstr lo_2114;
 rstr hi_2115;
};
struct f_st_repeat_628fr { int dummy;
 P1020 s_627;
 P1026 t_2116;
 P1022 c_2117;
 rstr cond_2118;
 rstr access_2119;
 rstr lov_2120;
 rstr hiv_2121;
 rstr it_2122;
 P1030 y_2123;
};
struct f_st_exit_630fr { int dummy;
 P1020 s_629;
 P1045 x_2124;
};
struct f_st_return_632fr { int dummy;
 P1020 s_631;
 P1026 vt_2125;
 rstr v_2126;
};
struct f_result_checked_636fr { int dummy;
 P1026 t_633;
 P1022 c_634;
 rstr *v_635;
 rstr result_;
};
struct f_exc_id_639fr { int dummy;
 rstr *name_637;
 rt_int line_638;
 rstr result_;
 P1030 y_2127;
};
struct f_st_guard_641fr { int dummy;
 P1020 s_640;
 P1020 h_2128;
 int first_2129;
 P1024 hv_2130;
 rstr f_2131;
 rstr x_2132;
 P1020 h1_2134;
 P1024 seen_2135;
 P1020 n1_2136;
 P1020 n_2137;
 P1013 conds_2138;
};
struct f_st_alloc_643fr { int dummy;
 P1020 s_642;
 P1013 lv_2139;
 P1026 t_2140;
 P1026 target_2141;
 P1026 vt_2142;
 P1022 c_2143;
 P1022 tc_2144;
 int ro_2145;
 P1020 d_2146;
 P1020 p_2147;
 P1020 a_2148;
 rstr tcn_2149;
 rstr cell_2150;
 rstr fn_2151;
 rstr v_2152;
};
struct f_act_ref_645fr { int dummy;
 P1020 e_644;
 rstr result_;
 P1013 lv_2153;
 P1026 t_2154;
 P1022 c_2155;
 int ro_2156;
 rstr v_2157;
};
struct f_st_create_647fr { int dummy;
 P1020 s_646;
 P1030 y_2158;
 P1032 pm_2159;
 P1020 a_2160;
 P1013 lv_2161;
 P1026 lt_2162;
 P1026 vt_2163;
 P1022 lc_2164;
 int ro_2165;
 P1026 at_2166;
 P1022 ac_2167;
 int aro_2168;
 P1013 act_2169;
 rstr nf_2170;
 P1013 link_2171;
 rt_int i_2172;
 rstr v_2176;
};
struct f_hidden_var_651fr { int dummy;
 rstr *name_648;
 P1026 t_649;
 rstr *place_650;
 P1030 y_2177;
};
struct f_user_create_657fr { int dummy;
 P1020 s_652;
 P1030 y_653;
 rstr *uv_654;
 P1026 ut_655;
 rstr *nf_656;
 P1026 t_2178;
 P1043 saved_2179;
 P1043 hook_2180;
 P1020 un_2181;
 rstr hn_2182;
 rstr aa_2183;
 rstr uname_2184;
 rstr aname_2185;
 P1020 start_2186;
 P1020 an_2187;
};
struct f_wait_alt_662fr { int dummy;
 P1020 inv_658;
 rstr *arr_659;
 rt_int i_660;
 int mixed_661;
 rstr result_;
 P1013 lv_2188;
 P1026 t_2189;
 P1026 vt_2190;
 P1022 c_2191;
 int ro_2192;
 P1020 fn_2193;
 P1020 args_2194;
 rstr slot_2195;
 P1013 dv_2196;
 P1026 dt_2197;
 rstr tmp_2198;
 rstr v_2199;
 rstr v_2200;
};
struct f_builtin_wait_664fr { int dummy;
 P1020 inv_663;
 int result_;
 P1013 lv_2201;
 P1026 t_2202;
 P1022 c_2203;
 int ro_2204;
 P1043 saved_2205;
 int ok_2206;
};
struct f_wait_op_669fr { int dummy;
 P1020 inv_665;
 rstr *op_666;
 rstr *q_667;
 int is_stmt_668;
 rstr result_;
 P1020 x_2209;
 P1020 f_2210;
 P1020 qn_2211;
 P1026 t_2212;
 rstr r_2213;
};
struct f_user_wait_674fr { int dummy;
 P1020 s_670;
 rstr *arr_671;
 rstr *w_672;
 rt_int n_673;
 P1020 a_2214;
 rt_int i_2215;
 P1013 tests_2216;
 P1013 revokes_2217;
 P1020 inv_2218;
 P1020 st_2219;
 P1022 c_2220;
 P1026 qt_2221;
 rstr qname_2222;
 P1030 y_2223;
 rstr access_2224;
};
struct f_st_wait_676fr { int dummy;
 P1020 s_675;
 P1020 a_2225;
 rt_int n_2226;
 int first_2227;
 P1043 inits_2228;
 int user_2229;
 rstr arr_2230;
 rstr w_2231;
 P1020 inv_2232;
 P1020 inv_2233;
 P1013 conds_2234;
 rt_int i_2235;
};
struct f_call_node_680fr { int dummy;
 rstr *name_677;
 P1020 arg_678;
 rt_int line_679;
 P1020 result_;
 P1020 x_2239;
 P1020 f_2240;
};
struct f_user_region_682fr { int dummy;
 P1020 s_681;
 P1026 t_2241;
 rstr f_2242;
 rstr lock_2243;
 rstr unlock_2244;
};
struct f_st_region_684fr { int dummy;
 P1020 s_683;
 P1013 lv_2245;
 P1026 t_2246;
 P1022 c_2247;
 int ro_2248;
 rstr lk_2249;
 rstr f_2250;
};
struct f_gparam_687fr { int dummy;
 P1020 g_685;
 rstr *name_686;
 P1020 result_;
 P1020 p_2251;
};
struct f_bind_sym_689fr { int dummy;
 P1020 p_688;
 P1030 result_;
 P1030 y_2252;
};
struct f_same_binds_692fr { int dummy;
 P1030 a_690;
 P1030 b_691;
 int result_;
 P1030 x_2253;
 P1030 y_2254;
};
struct f_same_binding_695fr { int dummy;
 P1030 a_693;
 P1030 b_694;
 int result_;
};
struct f_tt_binds_700fr { int dummy;
 P1020 gd_696;
 P1020 formals_697;
 P1020 actuals_698;
 rt_int line_699;
 P1030 result_;
 P1020 f_2255;
 P1020 a_2256;
 P1030 binds_2257;
 P1022 c_2258;
 P1026 at_2259;
 P1020 p_2260;
 P1030 b_2261;
 P1020 st_2262;
 int ok_2263;
 int ok_2264;
};
struct f_type_allowed_704fr { int dummy;
 P1026 t_701;
 P1020 items_702;
 P1030 binds_703;
 int result_;
 P1020 it_2265;
 P1026 b_2266;
 rstr w_2267;
 P1022 c_2268;
};
struct f_resolve_in_binds_708fr { int dummy;
 P1020 st_705;
 P1030 binds_706;
 P1022 *c_707;
 P1022 c_707v;
 P1026 result_;
 P1030 b_2269;
 P1026 t_2270;
 P1030 z_2271;
};
struct f_pick_operation_715fr { int dummy;
 rt_int kind_709;
 rstr *name_710;
 P1020 sig_711;
 P1020 res_712;
 P1030 binds_713;
 rt_int line_714;
 P1030 result_;
 P1030 y_2272;
 P1022 c_2273;
 rt_int want_2274;
 rt_int pass_2275;
 int ok_2279;
 P1020 s_2280;
 P1032 pm_2281;
};
struct f_kind_word_717fr { int dummy;
 rt_int kind_716;
 rstr result_;
};
struct f_need_binds_721fr { int dummy;
 P1020 gd_718;
 P1030 binds_719;
 rt_int line_720;
 P1030 result_;
 P1020 it_2282;
 P1030 r_2283;
 int found_2284;
 P1030 y_2285;
 P1030 z_2286;
};
struct f_generic_use_723fr { int dummy;
 P1020 st_722;
 int result_;
};
struct f_infer_from_728fr { int dummy;
 P1020 gd_724;
 P1020 pat_725;
 P1026 t_726;
 P1030 known_727;
 P1030 result_;
 P1030 binds_2287;
 P1020 e_2288;
 P1020 tp_2289;
 P1013 nm_2290;
 P1030 q_2291;
 int have_2292;
 P1030 g_2293;
 P1030 b_2294;
};
struct f_instantiate_type_734fr { int dummy;
 P1030 g_729;
 P1020 tt_730;
 P1020 args_731;
 P1022 *c_732;
 P1022 c_732v;
 rt_int line_733;
 P1026 result_;
 P1020 gd_2295;
 P1020 pat_2296;
 P1030 binds_2297;
 P1030 inst_2298;
 P1026 t_2299;
 P1047 saved_caps_2300;
 P1034 saved_env_2301;
 rt_int saved_gdepth_2302;
 P1030 b_2303;
 P1030 y_2304;
 P1022 yc_2305;
};
struct f_instantiate_739fr { int dummy;
 P1030 g_735;
 P1020 tt_736;
 P1020 args_737;
 rt_int line_738;
 P1030 result_;
 P1020 gd_2307;
 P1020 pat_2308;
 P1030 binds_2309;
 P1020 f_2310;
 P1020 a_2311;
 P1020 fp_2312;
 P1030 inst_2313;
 P1026 at_2314;
 P1022 c_2315;
 P1037 saved_fctx_2316;
 int saved_in_2317;
 rt_int saved_level_2318;
 P1030 saved_sym_2319;
 P1043 saved_code_2320;
 P1034 saved_env_2321;
 rt_int saved_gdepth_2322;
 rstr v_2323;
 int known_2324;
 P1030 q_2325;
 P1030 b_2326;
 rstr v_2327;
 P1030 b_2328;
};
struct f_access_of_741fr { int dummy;
 P1030 y_740;
 rstr result_;
 P1013 p_2329;
 rt_int i_2330;
};
struct f_import_of_744fr { int dummy;
 P1020 l_742;
 rstr *name_743;
 P1020 result_;
 P1020 p_2334;
};
struct f_check_import_747fr { int dummy;
 P1030 y_745;
 rt_int line_746;
 int result_;
 P1037 c_2335;
 int ro_2336;
 P1020 imp_2337;
};
struct f_c_ident_749fr { int dummy;
 rstr *s_748;
 rstr result_;
 P1013 r_2338;
 rt_int i_2339;
};
struct f_cell_deref_752fr { int dummy;
 P1026 t_750;
 rstr *p_751;
 rstr result_;
};
struct f_deref_755fr { int dummy;
 rstr *base_753;
 P1026 t_754;
 rstr result_;
};
struct f_is_lvalue_757fr { int dummy;
 P1020 e_756;
 int result_;
 P1030 y_2343;
};
struct f_lvalue_763fr { int dummy;
 P1020 e_758;
 P1013 *code_759;
 P1013 code_759v;
 P1026 *t_760;
 P1026 t_760v;
 P1022 *c_761;
 P1022 c_761v;
 int *ro_762;
 int ro_762v;
 P1013 base_2344;
 P1026 bt_2345;
 P1022 bc_2346;
 P1030 y_2347;
};
struct f_select_on_771fr { int dummy;
 rstr *base_764;
 P1026 bt_765;
 P1020 e_766;
 int *ro_767;
 P1013 *code_768;
 P1013 code_768v;
 P1026 *t_769;
 P1026 t_769v;
 P1022 *c_770;
 P1022 c_770v;
 P1020 p_2348;
 P1022 pc_2349;
 P1020 p_2350;
 P1028 f_2351;
 rt_int i_2352;
 rstr fn_2353;
 P1028 f_2354;
};
struct f_has_call_773fr { int dummy;
 rstr *s_772;
 int result_;
 rt_int i_2355;
};
struct f_need_slice_775fr { int dummy;
 P1026 t_774;
 rstr c_2359;
 rstr n_2360;
 P1024 l_2361;
};
struct f_ix_779fr { int dummy;
 rstr *i_776;
 rstr *lo_777;
 rstr *hi_778;
 rstr result_;
};
struct f_index_on_788fr { int dummy;
 rstr *base_780;
 P1026 bt_781;
 P1020 e_782;
 int *ro_783;
 int lv_784;
 P1013 *code_785;
 P1013 code_785v;
 P1026 *t_786;
 P1026 t_786v;
 P1022 *c_787;
 P1022 c_787v;
 P1020 a_2363;
 P1026 it_2364;
 rstr lo_2365;
 rstr hi_2366;
 P1013 off_2367;
 rt_int k_2368;
 P1013 b_2369;
 P1013 pre_2370;
 rstr i_2371;
 rstr l_2372;
 rstr h_2373;
 rstr lo_2374;
 rstr hi_2375;
 rstr i_2376;
};
struct f_own_attribute_790fr { int dummy;
 P1020 e_789;
 int result_;
 P1043 saved_2377;
 P1026 bt_2378;
 int ok_2379;
 rstr base_2382;
 P1020 p_2383;
 P1028 f_2384;
};
struct f_gexpr_794fr { int dummy;
 P1020 e_791;
 P1026 want_792;
 P1026 *t_793;
 P1026 t_793v;
 rstr result_;
 rt_int k_2385;
 P1013 code_2386;
 P1022 c_2387;
 int ro_2388;
 P1026 bt_2389;
 P1022 ctx_2390;
 P1013 r_2391;
 rt_int i_2392;
 rt_int pos_2396;
 rt_int i_2397;
 P1030 y_2398;
 int ro_2399;
 P1020 call_2400;
 P1020 fname_2401;
 rstr a_2402;
 rstr a_2403;
 rstr a_2404;
 P1020 nm_2405;
 P1030 y_2406;
 rstr base_2407;
 rstr base_2408;
};
struct f_resolved_797fr { int dummy;
 P1020 e_795;
 P1026 *t_796;
 P1026 t_796v;
 rstr result_;
 P1022 c_2409;
 P1026 vt_2410;
 P1030 y_2411;
 P1020 tt_2412;
 P1020 call_2413;
 P1020 f_2414;
 P1020 fname_2415;
 rstr v_2416;
};
struct f_gexpr_in_802fr { int dummy;
 P1020 e_798;
 P1026 want_799;
 P1022 c_800;
 P1026 *t_801;
 P1026 t_801v;
 rstr result_;
};
struct f_ascii_lit_804fr { int dummy;
 int ch_803;
 rstr result_;
 P1020 l_2417;
 rt_int i_2418;
};
struct f_octal_806fr { int dummy;
 rt_int n_805;
 rstr result_;
 rstr r_2422;
};
struct f_str_cat_part_808fr { int dummy;
 P1026 t_807;
 P1026 result_;
};
struct f_peek_type_810fr { int dummy;
 P1020 e_809;
 P1026 result_;
 P1043 saved_2423;
 P1026 t_2424;
 rstr v_2427;
};
struct f_set_operands_813fr { int dummy;
 P1020 e_811;
 P1026 want_812;
 P1026 result_;
 P1026 t_2428;
};
struct f_user_dot_815fr { int dummy;
 P1020 e_814;
 P1020 result_;
 P1020 arg_2429;
};
struct f_user_subscript_817fr { int dummy;
 P1020 e_816;
 P1020 result_;
 P1013 name_2430;
 P1020 args_2431;
 P1020 tail_2432;
 P1020 a_2433;
};
struct f_op_call_821fr { int dummy;
 rstr *name_818;
 P1020 args_819;
 rt_int line_820;
 P1020 result_;
 P1020 call_2434;
 P1020 f_2435;
};
struct f_derived_relation_823fr { int dummy;
 P1020 e_822;
 P1020 result_;
 P1020 l_2436;
 P1020 r_2437;
 int has_eq_2438;
 int has_lt_2439;
};
struct f_rel_node_828fr { int dummy;
 rstr *op_824;
 P1020 a_825;
 P1020 b_826;
 rt_int line_827;
 P1020 result_;
};
struct f_rel_not_831fr { int dummy;
 P1020 x_829;
 rt_int line_830;
 P1020 result_;
 P1020 n_2440;
};
struct f_copy_node_833fr { int dummy;
 P1020 e_832;
 P1020 result_;
 P1020 x_2441;
};
struct f_wrap_apply_835fr { int dummy;
 P1020 e_834;
 P1020 result_;
 P1020 x_2443;
};
struct f_c_string_837fr { int dummy;
 rstr *s_836;
 rstr result_;
 rt_int n_2444;
 rt_int i_2445;
 rstr r_2449;
 rt_int j_2450;
 rt_int i_2451;
};
struct f_enum_type_of_840fr { int dummy;
 rstr *lit_838;
 rt_int line_839;
 P1026 result_;
 P1030 y_2455;
 P1022 c_2456;
 P1020 st_2457;
};
struct f_ptr_attribute_842fr { int dummy;
 P1020 e_841;
 int result_;
 P1013 lv_2458;
 P1026 t_2459;
 P1022 c_2460;
 int ro_2461;
 P1020 p_2462;
 P1043 saved_2463;
};
struct f_attribute_845fr { int dummy;
 P1020 e_843;
 P1026 *t_844;
 P1026 t_844v;
 rstr result_;
 P1026 bt_2464;
 P1022 c_2465;
 P1013 base_2466;
 P1020 sub_2467;
 rstr name_2468;
 P1020 p_2469;
 P1020 a_2470;
 P1022 pc_2471;
 rstr v_2472;
 P1020 p_2473;
 P1020 a_2474;
 P1026 pt_2475;
 rstr v_2476;
};
struct f_subtype_compare_850fr { int dummy;
 P1020 sa_846;
 P1020 sb_847;
 rstr *op_848;
 rt_int line_849;
 rstr result_;
 P1022 ca_2477;
 P1022 cb_2478;
 P1026 ta_2479;
 P1026 tb_2480;
 P1013 r_2481;
 rstr yes_2482;
 rstr no_2483;
 rt_int k_2484;
 P1020 a_2488;
 P1020 b_2489;
 P1026 at_2490;
 P1026 bt2_2491;
 rstr x_2492;
 rstr y_2493;
};
struct f_float_prec_852fr { int dummy;
 P1022 c_851;
 rstr result_;
};
struct f_file_attribute_858fr { int dummy;
 P1020 e_853;
 P1026 bt_854;
 P1022 c_855;
 P1013 base_856;
 P1026 *t_857;
 P1026 t_857v;
 rstr result_;
};
struct f_gbinop_862fr { int dummy;
 P1020 e_859;
 P1026 want_860;
 P1026 *t_861;
 P1026 t_861v;
 rstr result_;
 P1013 op_2494;
 P1026 ta_2495;
 P1026 tb_2496;
 P1026 hint_2497;
 P1030 uy_2498;
 P1020 l_2499;
 P1020 r_2500;
 P1020 call_2501;
 P1020 fname_2502;
 rstr s_2503;
 rstr a_2504;
 rstr a_2505;
 rstr b_2506;
 rstr a_2507;
 rstr b_2508;
 P1026 at_2509;
 rstr a_2510;
 rstr b_2511;
 P1026 wa_2512;
 P1026 wb_2513;
 P1026 ws_2514;
 P1026 ce_2515;
 rstr a_2516;
 rstr b_2517;
 rstr dummy_2518;
 rstr a_2519;
 rstr b_2520;
 P1026 ct_2521;
 rstr a_2522;
 rstr b_2523;
};
struct f_constructor_867fr { int dummy;
 P1020 e_863;
 P1026 want_864;
 P1022 ctx_865;
 P1026 *t_866;
 P1026 t_866v;
 rstr result_;
 P1020 it_2524;
 P1028 f_2525;
 P1026 vt_2526;
 P1013 s_2527;
 rstr v_2528;
 rt_int i_2529;
 rstr tmp_2530;
 rstr v_2531;
 rstr tmp_2532;
 P1013 parts_2533;
 P1020 k_2534;
 P1013 shared_2535;
 rstr v_2536;
 rstr v_2537;
};
struct f_comp_value_871fr { int dummy;
 P1026 t_868;
 P1022 c_869;
 rstr *v_870;
 rstr result_;
 rstr ct_2538;
};
struct f_has_at_873fr { int dummy;
 rstr *s_872;
 int result_;
 rt_int i_2539;
};
struct f_set_elem_876fr { int dummy;
 P1026 st_874;
 rstr *v_875;
 rstr result_;
};
struct f_array_cons_881fr { int dummy;
 P1020 e_877;
 P1026 at_878;
 P1022 ctx_879;
 P1026 *t_880;
 P1026 t_880v;
 rstr result_;
 rstr tmp_2543;
 P1013 parts_2544;
 P1020 it_2545;
 int positional_2546;
 rt_int k_2547;
 P1013 lo_2551;
 P1013 hi_2552;
};
struct f_fill_items_887fr { int dummy;
 P1020 items_882;
 P1026 at_883;
 rstr *tmp_884;
 P1024 prefix_885;
 rt_int dim_886;
 rstr result_;
 P1020 it_2553;
 rt_int pos_2554;
 P1013 r_2555;
 P1026 vt_2556;
 rstr v_2557;
 P1020 k_2558;
 rt_int d_2559;
 P1024 pre_2560;
 P1013 loops_2561;
 P1013 ends_2562;
 rstr v_2563;
 rstr xv_2564;
 P1020 k_2565;
 rstr xv_2566;
 rstr v_2567;
};
struct f_e_line_889fr { int dummy;
 P1020 e_888;
 rt_int result_;
};
struct f_add_line_892fr { int dummy;
 P1024 l_890;
 rstr *s_891;
 P1024 result_;
 P1024 r_2568;
 P1024 tail_2569;
 P1024 x_2570;
 P1024 p_2571;
};
struct f_item_value_897fr { int dummy;
 P1020 e_893;
 P1026 at_894;
 rt_int line_895;
 P1026 *vt_896;
 P1026 vt_896v;
 rstr result_;
 rstr v_2574;
};
struct f_key_loop_902fr { int dummy;
 P1020 k_898;
 P1026 at_899;
 rt_int d_900;
 rstr *xv_901;
 rstr result_;
 P1026 it_2575;
 rstr lo_2576;
 rstr hi_2577;
};
struct f_store_at_907fr { int dummy;
 P1026 at_903;
 rstr *tmp_904;
 P1024 xs_905;
 rt_int n_906;
 rstr result_;
 P1013 off_2578;
 P1024 x_2579;
 rt_int k_2580;
 rstr l_2581;
 rstr h_2582;
};
struct f_fits_910fr { int dummy;
 P1030 y_908;
 P1020 args_909;
 int result_;
 P1020 a_2583;
 P1032 pm_2584;
 P1026 t_2585;
 P1043 saved_2586;
 int ok_2587;
 P1013 lv_2588;
 P1022 lc_2589;
 int ro_2590;
 rstr v_2593;
};
struct f_resolve_overload_916fr { int dummy;
 rstr *name_911;
 P1020 tt_912;
 P1020 args_913;
 int is_stmt_914;
 rt_int line_915;
 P1030 result_;
 P1030 y_2594;
 P1030 first_2595;
 rt_int n_2596;
 rt_int pass_2597;
};
struct f_tt_fits_919fr { int dummy;
 P1030 y_917;
 P1020 tt_918;
 int result_;
 P1020 f_2601;
 P1020 a_2602;
 P1043 saved_2603;
 int ok_2604;
 P1022 fc_2607;
 P1022 ac_2608;
 P1020 fst_2609;
 P1026 ft_2610;
 P1026 at_2611;
 P1020 ast_2612;
};
struct f_overload_chain_922fr { int dummy;
 rstr *name_920;
 rt_int pass_921;
 P1030 result_;
};
struct f_is_builtin_924fr { int dummy;
 rstr *n_923;
 int result_;
};
struct f_is_low_level_926fr { int dummy;
 rstr *n_925;
 int result_;
};
struct f_me_high_930fr { int dummy;
 P1020 tt_927;
 rt_int line_928;
 P1026 *t_929;
 P1026 t_929v;
 rstr result_;
 P1022 c_2613;
};
struct f_type_tag_932fr { int dummy;
 P1026 t_931;
 rstr result_;
};
struct f_lock_ref_935fr { int dummy;
 P1020 e_933;
 rstr *name_934;
 rstr result_;
 P1013 lv_2614;
 P1026 t_2615;
 P1022 c_2616;
 int ro_2617;
};
struct f_user_op_938fr { int dummy;
 rstr *op_936;
 P1020 args_937;
 P1030 result_;
 P1030 y_2618;
 rt_int pass_2619;
};
struct f_gcall_942fr { int dummy;
 P1020 e_939;
 int is_stmt_940;
 P1026 *t_941;
 P1026 t_941v;
 rstr result_;
 P1020 gd_2623;
 P1020 fn_2624;
 P1020 tt_2625;
 P1030 y_2626;
 P1013 args_2627;
 P1020 a_2628;
 P1032 pm_2629;
 P1026 lt_2630;
 P1026 vt_2631;
 P1013 lv_2632;
 P1022 lc_2633;
 int ro_2634;
 P1030 alt_2635;
 P1047 cr_2636;
 rt_int i_2637;
 rstr v_2641;
 rstr ct_2642;
 rstr v_2643;
 rstr chk_2644;
};
struct f_requires_944fr { int dummy;
 P1030 y_943;
 P1024 result_;
 P1020 imp_2645;
};
struct f_add_req_947fr { int dummy;
 P1030 y_945;
 rstr *name_946;
 P1024 l_2646;
};
struct f_require_calls_950fr { int dummy;
 P1030 y_948;
 P1020 e_949;
 P1020 x_2648;
 P1020 callee_2649;
 P1030 z_2650;
 P1024 l_2651;
};
struct f_declared_in_953fr { int dummy;
 P1020 elems_951;
 rstr *name_952;
 int result_;
 P1020 e_2652;
};
struct f_check_requires_956fr { int dummy;
 P1030 y_954;
 rt_int line_955;
 P1024 l_2653;
 P1030 z_2654;
};
struct f_act_delay_args_958fr { int dummy;
 P1020 args_957;
 rstr result_;
 P1026 at_2655;
 P1026 t1_2656;
 rstr a_2657;
 rstr v_2658;
 rstr v_2659;
};
struct f_same_subtypes_961fr { int dummy;
 P1020 gd_959;
 P1020 args_960;
 rstr result_;
 P1020 p_2660;
 P1013 r_2661;
 P1020 fp_2662;
 P1020 a_2663;
 P1013 flo_2664;
 P1013 fhi_2665;
 P1026 st_2666;
 P1022 c_2667;
 P1013 base_2668;
 P1013 lo_2669;
 P1013 hi_2670;
};
struct f_mailbox_low_966fr { int dummy;
 rstr *name_962;
 P1020 args_963;
 rt_int line_964;
 P1026 *t_965;
 P1026 t_965v;
 rstr result_;
 P1013 qv_2671;
 P1013 mv_2672;
 P1013 dv_2673;
 P1026 qt_2674;
 P1026 mt_2675;
 P1026 dt_2676;
 P1026 at_2677;
 P1022 c_2678;
 int ro_2679;
 int send_2680;
 rstr v_2681;
};
struct f_exponent_want_969fr { int dummy;
 rstr *op_967;
 P1026 ta_968;
 P1026 result_;
};
struct f_file_ref_973fr { int dummy;
 P1020 e_970;
 int text_971;
 rt_int line_972;
 rstr result_;
 P1026 t_2682;
 rstr f_2683;
};
struct f_text_file_975fr { int dummy;
 P1026 t_974;
 int result_;
};
struct f_conversion_980fr { int dummy;
 P1020 tt_976;
 P1020 args_977;
 rt_int line_978;
 P1026 *t_979;
 P1026 t_979v;
 rstr result_;
 P1022 c_2684;
 P1026 at_2685;
 P1026 target_2686;
 rstr a_2687;
 P1013 r_2688;
};
struct f_float_digits_982fr { int dummy;
 P1020 e_981;
 rstr result_;
 P1013 lv_2689;
 P1026 t_2690;
 P1022 c_2691;
 int ro_2692;
 rt_int n_2693;
 int lead_2694;
 rt_int i_2695;
 P1043 saved_2699;
};
struct f_enum_names_984fr { int dummy;
 P1026 t_983;
 rstr result_;
 P1020 l_2700;
 P1013 r_2701;
};
struct f_explicit_rep_986fr { int dummy;
 P1020 e_985;
 int result_;
 P1026 bt_2702;
};
struct f_actual_bounds_990fr { int dummy;
 P1026 ft_987;
 P1026 t_988;
 P1022 c_989;
 rstr result_;
};
struct f_builtin_997fr { int dummy;
 rstr *name_991;
 P1020 tt_992;
 P1020 args_993;
 rt_int line_994;
 int is_stmt_995;
 P1026 *t_996;
 P1026 t_996v;
 rstr result_;
 P1026 at_2703;
 rt_int n_2704;
 rstr a_2705;
 rstr a_2706;
 rstr a_2707;
 rstr a_2708;
 rstr a_2709;
 rstr a_2710;
 rstr a_2711;
 rstr n1_2712;
 rstr m1_2713;
 rstr a_2714;
 rstr f_2715;
 rstr a_2716;
 rstr a_2717;
 P1026 ft_2718;
 rstr f_2719;
 P1013 lv_2720;
 P1022 lc_2721;
 int ro_2722;
 rstr a_2723;
 P1013 lv_2724;
 P1022 lc_2725;
 int ro_2726;
 rstr f_2727;
 P1013 lv_2728;
 P1022 lc_2729;
 int ro_2730;
 rstr f_2731;
 rstr nm_2732;
 rstr st_2733;
 rstr f_2734;
 rstr d_2735;
 rstr f_2736;
 rstr v_2737;
 rstr a_2738;
 rstr b_2739;
 P1013 lv_2740;
 P1013 dv_2741;
 P1022 lc_2742;
 int ro_2743;
 P1026 mt_2744;
 P1026 dt_2745;
 rstr v_2746;
 P1013 lv_2747;
 P1022 lc_2748;
 int ro_2749;
 P1026 mt_2750;
 P1013 lv_2751;
 P1013 dv_2752;
 P1013 bv_2753;
 P1022 lc_2754;
 int ro_2755;
 P1026 mt_2756;
 P1026 dt_2757;
 P1026 bt_2758;
 rstr v_2759;
 rstr v_2760;
 rstr v_2761;
 rstr v_2762;
 rstr a_2763;
 P1013 bv_2764;
 P1022 bc_2765;
 int ro_2766;
 P1026 bt_2767;
 rstr l_2768;
 P1013 pv_2769;
 P1022 pc_2770;
 int ro_2771;
 P1026 pt_2772;
 rstr dev_2773;
 rstr cmd_2774;
 rstr v_2775;
 P1013 dv_2776;
 P1022 dc_2777;
 int ro_2778;
 P1026 dt_2779;
};
struct f_with_library_999fr { int dummy;
 P1020 units_998;
 P1020 result_;
 P1020 r_2780;
 int more_2781;
 P1013 missing_2782;
 rt_int saved_2783;
 P1020 lib_2784;
 P1020 t_2785;
};
struct f_external_missing_1002fr { int dummy;
 P1020 e_1000;
 P1020 units_1001;
 P1013 result_;
 P1020 x_2786;
 P1013 r_2787;
 P1013 r_2788;
};
struct f_unit_named_1005fr { int dummy;
 P1020 units_1003;
 rstr *name_1004;
 int result_;
 P1020 u_2789;
};
struct f_tried_1007fr { int dummy;
 rstr *name_1006;
 int result_;
};
struct f_mark_tried_1009fr { int dummy;
 rstr *name_1008;
 P1024 l_2790;
};
struct f_translate_1011fr { int dummy;
 P1020 units_1010;
 P1020 u_2792;
 P1020 l_2794;
 rstr w_2795;
};
struct f_print_program_1012fr { int dummy;
};
struct Pc1014 { rt_int p_n; rstr all; };
struct Pc1018 { rt_int p_n; A1019 all; };
struct Pc1035 { rt_int p_n; A1036 all; };
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
static void as_R1042(R1042 *d, R1042 s);
static R1042 cp_R1042(R1042 s);
static int eq_R1042(R1042 a, R1042 b);
static void as_R1040(R1040 *d, R1040 s);
static R1040 cp_R1040(R1040 s);
static int eq_R1040(R1040 a, R1040 b);
static void as_R1038(R1038 *d, R1038 s);
static R1038 cp_R1038(R1038 s);
static int eq_R1038(R1038 a, R1038 b);
static void as_A1036(A1036 *d, A1036 s);
static A1036 cp_A1036(A1036 s);
static int eq_A1036(A1036 a, A1036 b);
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
static void as_R1025(R1025 *d, R1025 s);
static R1025 cp_R1025(R1025 s);
static int eq_R1025(R1025 a, R1025 b);
static void as_R1023(R1023 *d, R1023 s);
static R1023 cp_R1023(R1023 s);
static int eq_R1023(R1023 a, R1023 b);
static void as_R1021(R1021 *d, R1021 s);
static R1021 cp_R1021(R1021 s);
static int eq_R1021(R1021 a, R1021 b);
static void as_A1019(A1019 *d, A1019 s);
static A1019 cp_A1019(A1019 s);
static int eq_A1019(A1019 a, A1019 b);
static void as_R1016(R1016 *d, R1016 s);
static R1016 cp_R1016(R1016 s);
static int eq_R1016(R1016 a, R1016 b);
static P1013 f_mk_3(rstr *s_2);
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
static P1043 f_new_buffer_24(void);
static void f_put_27(P1043 b_25, rstr *s_26);
static void f_emit_29(rstr *s_28);
static void f_print_buffer_31(P1043 b_30);
static void f_splice_34(P1043 a_32, P1043 b_33);
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
static void f_write_library_62(P1020 u_61);
static P1020 f_nn_65(rt_int kind_63, rt_int line_64);
static void f_append_69(P1020 *head_66, P1020 *tail_67, P1020 x_68);
static rt_int f_list_len_71(P1020 l_70);
static rt_int f_cur_line_72(void);
static int f_at_kw_74(rstr *w_73);
static int f_at_op_76(rstr *w_75);
static int f_at_kind_78(rt_int k_77);
static rt_int f_kind_at_80(rt_int k_79);
static P1013 f_text_at_82(rt_int k_81);
static void f_perror_84(rstr *msg_83);
static int f_accept_kw_86(rstr *w_85);
static int f_accept_op_88(rstr *w_87);
static void f_expect_kw_90(rstr *w_89);
static void f_expect_op_92(rstr *w_91);
static P1013 f_expect_id_93(void);
static P1020 f_name_node_94(void);
static P1020 f_id_list_95(void);
static P1020 f_p_subtype_96(void);
static P1020 f_constraint_list_97(void);
static P1020 f_actual_params_98(void);
static int f_is_type_word_100(rstr *w_99);
static P1020 f_actual_tt_101(void);
static P1020 f_binop_106(P1013 op_102, P1020 l_103, P1020 r_104, rt_int line_105);
static P1020 f_expr_107(void);
static P1020 f_expr_and_108(void);
static P1020 f_expr_not_109(void);
static int f_is_rel_111(rstr *s_110);
static P1020 f_expr_rel_112(void);
static P1020 f_expr_add_113(void);
static P1020 f_expr_mul_114(void);
static P1020 f_expr_pow_115(void);
static P1020 f_expr_prefix_116(void);
static P1020 f_postfix_117(void);
static P1020 f_primary_118(void);
static P1020 f_constructor_item_119(void);
static int f_at_body_end_120(void);
static P1020 f_body_121(void);
static P1020 f_body_element_122(void);
static P1020 f_declaration_123(void);
static P1020 f_object_decl_124(void);
static P1020 f_abbrev_decl_125(void);
static P1020 f_rep_spec_126(void);
static P1020 f_rep_items_127(void);
static int f_rep_word_129(rt_int k_128);
static P1020 f_rep_item_130(void);
static P1020 f_type_decl_131(void);
static rt_int f_mode_of_133(rstr *w_132);
static P1020 f_formal_params_134(void);
static int f_imports_list_136(P1020 owner_135);
static int f_is_definable_138(rstr *w_137);
static P1013 f_definable_name_139(void);
static P1020 f_subprogram_decl_140(void);
static P1020 f_capsule_decl_141(void);
static P1020 f_formal_tt_142(void);
static P1020 f_generic_decl_143(void);
static P1020 f_type_list_144(void);
static P1020 f_task_decl_145(void);
static P1020 f_expose_decl_146(void);
static int f_is_compound_kw_148(rstr *w_147);
static P1020 f_statement_149(void);
static P1020 f_unlabeled_statement_150(void);
static P1020 f_arm_154(P1020 cond_151, P1020 b_152, rt_int line_153);
static P1020 f_if_stmt_155(void);
static P1020 f_case_stmt_156(void);
static P1020 f_repeat_stmt_157(void);
static P1020 f_guard_stmt_158(void);
static P1020 f_program_159(void);
static rt_int f_hash_161(rstr *s_160);
static P1030 f_lookup_163(rstr *name_162);
static P1030 f_lookup_decl_165(P1020 d_164);
static void f_define_168(P1030 y_166, rt_int line_167);
static int f_overloadable_170(P1030 y_169);
static int f_same_tt_173(P1020 a_171, P1020 b_172);
static int f_same_signature_176(P1032 a_174, P1032 b_175);
static void f_open_scope_177(void);
static void f_close_scope_178(void);
static P1030 f_new_sym_181(rt_int kind_179, P1013 name_180);
static P1026 f_new_typ_183(rt_int kind_182);
static P1022 f_new_cons_184(void);
static int f_scalar_kind_186(P1026 t_185);
static rstr f_bound_ctype_188(P1026 t_187);
static rstr f_cbound_191(P1022 c_189, rstr *b_190);
static rstr f_clo_193(P1022 c_192);
static rstr f_chi_195(P1022 c_194);
static rstr f_sub_lo_198(P1026 t_196, P1022 c_197);
static rstr f_sub_hi_201(P1026 t_199, P1022 c_200);
static rstr f_raw_storage_204(rstr *name_202, rstr *ct_203);
static P1022 f_copy_cons_206(P1022 c_205);
static P1022 f_freeze_209(P1022 c_207, P1026 t_208);
static rstr f_checked_213(P1026 t_210, P1022 c_211, rstr *v_212);
static int f_same_lits_216(P1020 a_214, P1020 b_215);
static P1026 f_str_elem_218(P1026 t_217);
static int f_same_221(P1026 a_219, P1026 b_220);
static P1026 f_base_of_223(P1026 t_222);
static P1022 f_base_cons_226(P1026 t_224, P1022 c_225);
static rstr f_kind_name_228(P1026 t_227);
static void f_check_type_232(P1026 got_229, P1026 want_230, rt_int line_231);
static rstr f_ctype_234(P1026 t_233);
static rstr f_struct_body_236(P1026 t_235);
static rstr f_field_decls_238(P1026 t_237);
static void f_declare_ctype_240(P1026 t_239);
static rstr f_dim_lo_242(rt_int k_241);
static rstr f_dim_hi_244(rt_int k_243);
static rstr f_more_dims_246(P1026 t_245);
static rstr f_acnt_249(P1026 t_247, rstr *base_248);
static P1013 f_cons_lo_252(P1022 c_250, rt_int k_251);
static P1013 f_cons_hi_255(P1022 c_253, rt_int k_254);
static P1026 f_idx_type_258(P1026 t_256, rt_int k_257);
static void f_init_ascii_259(void);
static P1026 f_enum2_262(rstr *a_260, rstr *b_261);
static rt_int f_lit_index_265(P1020 lits_263, rstr *name_264);
static P1026 f_resolve_subtype_268(P1020 st_266, P1022 *c_267);
static int f_float_lit_270(P1020 e_269);
static void f_tag_constraint_274(P1026 t_271, P1020 e_272, P1022 c_273);
static P1026 f_named_subtype_277(P1020 st_275, P1022 *c_276);
static P1026 f_invoke_abbrev_281(P1030 y_278, P1020 st_279, P1022 *c_280);
static void f_apply_constraint_286(P1026 t_282, P1020 args_283, P1022 c_284, rt_int line_285);
static P1026 f_value_subtype_290(P1020 e_287, P1022 *c_288, P1013 *base_289);
static P1024 f_reverse_pairs_292(P1024 l_291);
static P1026 f_inquiry_295(P1020 st_293, P1022 *c_294);
static P1020 f_as_subtype_297(P1020 e_296);
static P1020 f_tt_subtype_302(P1013 name_298, P1020 tt_299, P1020 args_300, rt_int line_301);
static int f_type_name_304(rstr *name_303);
static rstr f_empty_set_306(P1026 t_305);
static int f_opened_308(P1026 t_307);
static rstr f_replace_all_312(rstr *s_309, rstr *pat_310, rstr *r_311);
static rstr f_subst_314(rstr *s_313);
static P1026 f_new_type_318(P1030 y_315, P1020 st_316, P1022 *c_317);
static rt_int f_needed_bits_321(P1026 t_319, P1022 c_320);
static int f_has_digits_only_323(rstr *s_322);
static int f_built_in_only_325(P1026 t_324);
static void f_check_rep_332(P1020 items_326, P1026 t_327, P1022 c_328, int top_329, int indirect_330, P1020 d_331);
static int f_formal_named_335(P1020 d_333, rstr *name_334);
static int f_unchecked_free_337(P1026 t_336);
static void f_init_storage_341(rstr *lval_338, P1026 t_339, P1022 c_340);
static rstr f_init_call_344(P1030 y_342, rstr *lval_343);
static int f_needs_fin_346(P1026 t_345);
static rstr f_fin_code_349(rstr *lval_347, P1026 t_348);
static P1026 f_tparam_type_352(P1026 t_350, rstr *name_351);
static void f_make_storage_356(rstr *lval_353, P1026 t_354, P1022 c_355);
static int f_flat_358(P1026 t_357);
static rstr f_uninit_value_360(P1026 t_359);
static rstr f_init_chk_363(P1026 t_361, rstr *v_362);
static rt_int f_manifest_366(P1020 e_364, int *ok_365);
static P1039 f_mk_mval_369(rt_int kind_367, rt_int i_368);
static rt_int f_ipow_372(rt_int a_370, rt_int b_371);
static P1039 f_meval_375(P1020 e_373, int *ok_374);
static P1039 f_float_op_380(rstr *op_376, P1039 a_377, P1039 b_378, int *ok_379);
static rstr f_bool_text_382(int b_381);
static rt_int f_bool_i_384(int b_383);
static rstr f_mstr_386(P1039 v_385);
static int f_ascii_char_388(rt_int i_387);
static int f_user_defined_390(rstr *op_389);
static rstr f_mcopy_392(P1026 t_391);
static int f_composite_394(P1026 t_393);
static rstr f_user_call2_400(P1030 y_395, rstr *a_396, int lv_a_397, rstr *b_398, int lv_b_399);
static rstr f_user_arg_404(P1032 pm_401, rstr *v_402, int lv_403);
static int f_top_level_406(P1030 y_405);
static rstr f_assign_code_411(rstr *lval_407, P1026 t_408, rstr *v_409, P1022 c_410);
static rstr f_copy_code_414(P1026 t_412, rstr *v_413);
static rstr f_eq_code_418(P1026 t_415, rstr *a_416, rstr *b_417);
static rstr f_elem_assign_422(rstr *lval_419, P1026 t_420, rstr *v_421);
static int f_seen_name_425(P1024 l_423, rstr *s_424);
static void f_emit_helpers_426(void);
static void f_helper_bodies_428(P1026 t_427);
static void f_declare_body_430(P1020 elems_429);
static void f_manifest_const_432(P1020 d_431);
static int f_exported_436(P1020 d_433, rstr *name_434, int *ro_435);
static P1030 f_copy_sym_438(P1030 y_437);
static void f_gen_capsule_440(P1020 d_439);
static void f_capsule_params_444(P1020 d_441, P1020 args_442, rt_int line_443);
static void f_elaborate_capsule_449(P1020 d_445, P1030 y_446, P1020 args_447, P1020 owner_448);
static int f_exports_op_452(P1020 d_450, rstr *op_451);
static P1013 f_renamed_455(P1020 d_453, P1030 z_454);
static int f_cap_tt_match_458(P1020 f_456, P1020 a_457);
static P1030 f_pick_capsule_460(P1020 d_459);
static P1030 f_capsule_instance_463(P1030 g_461, P1020 d_462);
static void f_configure_465(P1030 y_464);
static void f_gen_expose_467(P1020 d_466);
static void f_finish_ptr_469(P1026 t_468);
static P1020 f_ptr_args_471(P1022 c_470);
static void f_bind_ptr_params_476(P1020 formals_472, P1020 actuals_473, rstr *cell_474, rt_int line_475);
static void f_alloc_cell_481(P1020 s_477, rstr *lv_478, P1026 t_479, P1022 c_480);
static P1022 f_freeze_args_485(P1022 c_482, P1026 t_483, rt_int line_484);
static void f_ptr_subtype_check_489(P1026 t_486, P1022 c_487, P1020 src_488);
static void f_normal_function_492(P1020 d_490, P1030 y_491);
static void f_foreign_body_495(P1020 d_493, P1030 y_494);
static void f_declare_subprogram_497(P1020 d_496);
static P1030 f_build_subprogram_499(P1020 d_498);
static int f_has_pragmat_502(P1013 pr_500, rstr *p_501);
static P1013 f_suppressing_504(P1013 pr_503);
static int f_suppressed_506(rstr *x_505);
static void f_element_508(P1020 e_507);
static void f_element1_510(P1020 e_509);
static rstr f_storage_513(rstr *name_511, P1026 t_512);
static void f_bind_516(P1030 y_514, rstr *access_515);
static void f_var_decl_518(P1020 d_517);
static void f_located_var_520(P1020 d_519);
static rstr f_rep_sync_523(P1030 y_521, int pack_522);
static rstr f_cbound_access_525(P1030 y_524);
static rstr f_rep_size_529(P1020 items_526, P1026 t_527, P1022 c_528);
static P1020 f_rep_find_532(P1020 items_530, rstr *w_531);
static P1020 f_rep_comp_535(P1020 items_533, rstr *name_534);
static rt_int f_default_bits_538(P1026 t_536, P1022 c_537);
static rstr f_rep_code_545(P1026 t_539, P1022 c_540, P1020 items_541, rstr *lval_542, rstr *addr_543, int pack_544);
static rstr f_union_part_547(P1026 t_546);
static rstr f_rep_scalar_554(P1026 t_548, P1022 c_549, rstr *lval_550, rstr *addr_551, rstr *size_552, int pack_553);
static void f_max_range_557(P1026 t_555, P1022 c_556);
static void f_var_decl2_559(P1020 d_558);
static void f_open_fin_561(rstr *fc_560);
static void f_close_fins_563(P1024 saved_562);
static void f_const_decl_565(P1020 d_564);
static void f_subprogram_567(P1020 d_566);
static void f_gen_subprogram_570(P1020 d_568, P1030 y_569);
static rstr f_waits_of_572(P1020 d_571);
static rstr f_task_waits_574(P1020 elems_573);
static void f_await_tasks_576(P1020 elems_575);
static void f_capsule_elements_578(P1020 elems_577);
static void f_declare_labels_580(P1020 elems_579);
static void f_start_labels_581(void);
static P1045 f_goto_label_583(rstr *name_582);
static int f_has_return_585(P1020 e_584);
static void f_capsule_body_587(P1020 elems_586);
static void f_body_elements_589(P1020 elems_588);
static void f_gen_body_591(P1020 elems_590);
static rstr f_open_unhandled_593(P1020 elems_592);
static void f_close_unhandled_595(rstr *xu_594);
static void f_pop_frames_597(rt_int upto_596);
static void f_push_cleanup_599(rstr *s_598);
static void f_pop_cleanup_600(void);
static void f_gen_statement_602(P1020 s_601);
static P1030 f_located_in_605(P1020 e_603, P1030 found_604);
static int f_sym_in_608(P1030 l_606, P1030 y_607);
static void f_gen_statement2_610(P1020 s_609);
static void f_st_assign_612(P1020 s_611);
static void f_st_call_614(P1020 s_613);
static void f_st_if_616(P1020 s_615);
static int f_manifest_case_618(P1020 s_617);
static void f_st_case_620(P1020 s_619);
static void f_st_case2_622(P1020 s_621);
static void f_user_for_626(P1020 s_623, P1026 t_624, P1022 c_625);
static void f_st_repeat_628(P1020 s_627);
static void f_st_exit_630(P1020 s_629);
static void f_st_return_632(P1020 s_631);
static rstr f_result_checked_636(P1026 t_633, P1022 c_634, rstr *v_635);
static rstr f_exc_id_639(rstr *name_637, rt_int line_638);
static void f_st_guard_641(P1020 s_640);
static void f_st_alloc_643(P1020 s_642);
static rstr f_act_ref_645(P1020 e_644);
static void f_st_create_647(P1020 s_646);
static void f_hidden_var_651(rstr *name_648, P1026 t_649, rstr *place_650);
static void f_user_create_657(P1020 s_652, P1030 y_653, rstr *uv_654, P1026 ut_655, rstr *nf_656);
static rstr f_wait_alt_662(P1020 inv_658, rstr *arr_659, rt_int i_660, int mixed_661);
static int f_builtin_wait_664(P1020 inv_663);
static rstr f_wait_op_669(P1020 inv_665, rstr *op_666, rstr *q_667, int is_stmt_668);
static void f_user_wait_674(P1020 s_670, rstr *arr_671, rstr *w_672, rt_int n_673);
static void f_st_wait_676(P1020 s_675);
static P1020 f_call_node_680(rstr *name_677, P1020 arg_678, rt_int line_679);
static void f_user_region_682(P1020 s_681);
static void f_st_region_684(P1020 s_683);
static P1020 f_gparam_687(P1020 g_685, rstr *name_686);
static P1030 f_bind_sym_689(P1020 p_688);
static int f_same_binds_692(P1030 a_690, P1030 b_691);
static int f_same_binding_695(P1030 a_693, P1030 b_694);
static P1030 f_tt_binds_700(P1020 gd_696, P1020 formals_697, P1020 actuals_698, rt_int line_699);
static int f_type_allowed_704(P1026 t_701, P1020 items_702, P1030 binds_703);
static P1026 f_resolve_in_binds_708(P1020 st_705, P1030 binds_706, P1022 *c_707);
static P1030 f_pick_operation_715(rt_int kind_709, rstr *name_710, P1020 sig_711, P1020 res_712, P1030 binds_713, rt_int line_714);
static rstr f_kind_word_717(rt_int kind_716);
static P1030 f_need_binds_721(P1020 gd_718, P1030 binds_719, rt_int line_720);
static int f_generic_use_723(P1020 st_722);
static P1030 f_infer_from_728(P1020 gd_724, P1020 pat_725, P1026 t_726, P1030 known_727);
static P1026 f_instantiate_type_734(P1030 g_729, P1020 tt_730, P1020 args_731, P1022 *c_732, rt_int line_733);
static P1030 f_instantiate_739(P1030 g_735, P1020 tt_736, P1020 args_737, rt_int line_738);
static rstr f_access_of_741(P1030 y_740);
static P1020 f_import_of_744(P1020 l_742, rstr *name_743);
static int f_check_import_747(P1030 y_745, rt_int line_746);
static rstr f_c_ident_749(rstr *s_748);
static rstr f_cell_deref_752(P1026 t_750, rstr *p_751);
static rstr f_deref_755(rstr *base_753, P1026 t_754);
static int f_is_lvalue_757(P1020 e_756);
static void f_lvalue_763(P1020 e_758, P1013 *code_759, P1026 *t_760, P1022 *c_761, int *ro_762);
static void f_select_on_771(rstr *base_764, P1026 bt_765, P1020 e_766, int *ro_767, P1013 *code_768, P1026 *t_769, P1022 *c_770);
static int f_has_call_773(rstr *s_772);
static void f_need_slice_775(P1026 t_774);
static rstr f_ix_779(rstr *i_776, rstr *lo_777, rstr *hi_778);
static void f_index_on_788(rstr *base_780, P1026 bt_781, P1020 e_782, int *ro_783, int lv_784, P1013 *code_785, P1026 *t_786, P1022 *c_787);
static int f_own_attribute_790(P1020 e_789);
static rstr f_gexpr_794(P1020 e_791, P1026 want_792, P1026 *t_793);
static rstr f_resolved_797(P1020 e_795, P1026 *t_796);
static rstr f_gexpr_in_802(P1020 e_798, P1026 want_799, P1022 c_800, P1026 *t_801);
static rstr f_ascii_lit_804(int ch_803);
static rstr f_octal_806(rt_int n_805);
static P1026 f_str_cat_part_808(P1026 t_807);
static P1026 f_peek_type_810(P1020 e_809);
static P1026 f_set_operands_813(P1020 e_811, P1026 want_812);
static P1020 f_user_dot_815(P1020 e_814);
static P1020 f_user_subscript_817(P1020 e_816);
static P1020 f_op_call_821(rstr *name_818, P1020 args_819, rt_int line_820);
static P1020 f_derived_relation_823(P1020 e_822);
static P1020 f_rel_node_828(rstr *op_824, P1020 a_825, P1020 b_826, rt_int line_827);
static P1020 f_rel_not_831(P1020 x_829, rt_int line_830);
static P1020 f_copy_node_833(P1020 e_832);
static P1020 f_wrap_apply_835(P1020 e_834);
static rstr f_c_string_837(rstr *s_836);
static P1026 f_enum_type_of_840(rstr *lit_838, rt_int line_839);
static int f_ptr_attribute_842(P1020 e_841);
static rstr f_attribute_845(P1020 e_843, P1026 *t_844);
static rstr f_subtype_compare_850(P1020 sa_846, P1020 sb_847, rstr *op_848, rt_int line_849);
static rstr f_float_prec_852(P1022 c_851);
static rstr f_file_attribute_858(P1020 e_853, P1026 bt_854, P1022 c_855, P1013 base_856, P1026 *t_857);
static rstr f_gbinop_862(P1020 e_859, P1026 want_860, P1026 *t_861);
static rstr f_constructor_867(P1020 e_863, P1026 want_864, P1022 ctx_865, P1026 *t_866);
static rstr f_comp_value_871(P1026 t_868, P1022 c_869, rstr *v_870);
static int f_has_at_873(rstr *s_872);
static rstr f_set_elem_876(P1026 st_874, rstr *v_875);
static rstr f_array_cons_881(P1020 e_877, P1026 at_878, P1022 ctx_879, P1026 *t_880);
static rstr f_fill_items_887(P1020 items_882, P1026 at_883, rstr *tmp_884, P1024 prefix_885, rt_int dim_886);
static rt_int f_e_line_889(P1020 e_888);
static P1024 f_add_line_892(P1024 l_890, rstr *s_891);
static rstr f_item_value_897(P1020 e_893, P1026 at_894, rt_int line_895, P1026 *vt_896);
static rstr f_key_loop_902(P1020 k_898, P1026 at_899, rt_int d_900, rstr *xv_901);
static rstr f_store_at_907(P1026 at_903, rstr *tmp_904, P1024 xs_905, rt_int n_906);
static int f_fits_910(P1030 y_908, P1020 args_909);
static P1030 f_resolve_overload_916(rstr *name_911, P1020 tt_912, P1020 args_913, int is_stmt_914, rt_int line_915);
static int f_tt_fits_919(P1030 y_917, P1020 tt_918);
static P1030 f_overload_chain_922(rstr *name_920, rt_int pass_921);
static int f_is_builtin_924(rstr *n_923);
static int f_is_low_level_926(rstr *n_925);
static rstr f_me_high_930(P1020 tt_927, rt_int line_928, P1026 *t_929);
static rstr f_type_tag_932(P1026 t_931);
static rstr f_lock_ref_935(P1020 e_933, rstr *name_934);
static P1030 f_user_op_938(rstr *op_936, P1020 args_937);
static rstr f_gcall_942(P1020 e_939, int is_stmt_940, P1026 *t_941);
static P1024 f_requires_944(P1030 y_943);
static void f_add_req_947(P1030 y_945, rstr *name_946);
static void f_require_calls_950(P1030 y_948, P1020 e_949);
static int f_declared_in_953(P1020 elems_951, rstr *name_952);
static void f_check_requires_956(P1030 y_954, rt_int line_955);
static rstr f_act_delay_args_958(P1020 args_957);
static rstr f_same_subtypes_961(P1020 gd_959, P1020 args_960);
static rstr f_mailbox_low_966(rstr *name_962, P1020 args_963, rt_int line_964, P1026 *t_965);
static P1026 f_exponent_want_969(rstr *op_967, P1026 ta_968);
static rstr f_file_ref_973(P1020 e_970, int text_971, rt_int line_972);
static int f_text_file_975(P1026 t_974);
static rstr f_conversion_980(P1020 tt_976, P1020 args_977, rt_int line_978, P1026 *t_979);
static rstr f_float_digits_982(P1020 e_981);
static rstr f_enum_names_984(P1026 t_983);
static int f_explicit_rep_986(P1020 e_985);
static rstr f_actual_bounds_990(P1026 ft_987, P1026 t_988, P1022 c_989);
static rstr f_builtin_997(rstr *name_991, P1020 tt_992, P1020 args_993, rt_int line_994, int is_stmt_995, P1026 *t_996);
static P1020 f_with_library_999(P1020 units_998);
static P1013 f_external_missing_1002(P1020 e_1000, P1020 units_1001);
static int f_unit_named_1005(P1020 units_1003, rstr *name_1004);
static int f_tried_1007(rstr *name_1006);
static void f_mark_tried_1009(rstr *name_1008);
static void f_translate_1011(P1020 units_1010);
static void f_print_program_1012(void);
static int ex_compile_error_1;
static P1017 g_toks_1051;
static rt_int g_ntoks_1052;
static rt_int g_tpos_1053;
static rt_int g_src_line_1054;
static P1013 g_pending_prag_1055;
static P1024 g_src_head_1056;
static P1024 g_src_tail_1057;
static rt_int g_ntoks_before_library_1058;
static P1024 g_library_tried_1059;
static P1034 g_table_1060;
static P1034 g_genv_1061;
static P1030 g_all_insts_1062;
static rt_int g_depth_1063;
static P1030 g_scope_stack_1064;
static P1026 g_all_types_1065;
static rt_int g_serial_1066;
static P1043 g_out_types_1067;
static P1043 g_out_helpers_1068;
static P1043 g_out_protos_1069;
static P1043 g_out_globals_1070;
static P1043 g_out_funcs_1071;
static P1043 g_out_init_1072;
static P1043 g_out_excs_1073;
static P1043 g_code_1074;
static P1043 g_fields_buf_1075;
static int g_in_func_1076;
static rt_int g_cur_level_1077;
static P1037 g_fctx_1078;
static P1047 g_caps_1079;
static P1049 g_cap_waits_1080;
static P1024 g_psub_1081;
static P1013 g_st_field_1082;
static P1043 g_out_frames_1083;
static P1043 g_out_roots_1084;
static int g_uses_free_1085;
static P1024 g_fins_1086;
static int g_uses_findyn_1087;
static P1030 g_func_sym_1088;
static P1022 g_func_rc_1089;
static P1013 g_cap_ret_1090;
static P1013 g_cap_rflag_1091;
static rt_int g_ret_frames_1092;
static rt_int g_gdepth_1093;
static P1013 g_suppress_1094;
static P1022 g_cons_ctx_1095;
static int g_mark_uninit_1096;
static P1045 g_exits_1097;
static P1045 g_gotos_1098;
static rt_int g_frames_1099;
static P1024 g_handlers_1100;
static P1024 g_cleanups_1101;
static rt_int g_trial_1102;
static P1024 g_mcopies_1103;
static P1026 g_ty_int_1104;
static P1026 g_ty_bool_1105;
static P1026 g_ty_float_1106;
static P1026 g_ty_ascii_1107;
static P1026 g_ty_string_1108;
static P1026 g_ty_void_1109;
static P1026 g_ty_file_1110;
static P1026 g_ty_nil_1111;
static P1026 g_ty_lock_1112;
static P1026 g_ty_latch_1113;
static P1026 g_ty_act_1114;
static P1026 g_file_mode_type_1115;
static P1026 g_ty_send_st_1116;
static P1026 g_ty_receive_st_1117;
static P1026 g_ty_text_file_1118;
static P1026 g_file_state_type_1119;
static P1026 g_file_disp_type_1120;
static P1026 g_file_access_type_1121;
static P1022 g_no_cons_1122;
static P1013 f_mk_3(rstr *s_2) {
  struct f_mk_3fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_2 = s_2;
F->t_1123 = NULL;
{ P1013 cell1124 = rt_alloc(sizeof *cell1124);
rt_int pv1125 = ((rt_int)(((*F->s_2)).len));
cell1124->p_n = pv1125;
cell1124->all = rt_str_new(pv1125);
rt_str_assign(&cell1124->all, (*F->s_2));
F->t_1123 = cell1124;
}
F->result_ = F->t_1123;
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
F->r_1126 = rt_str_new(((rt_int)1LL));
(*rt_str_at(&F->r_1126, ((rt_int)1LL))) = F->c_4;
F->result_ = F->r_1126;
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
F->r_1127 = rt_str_new(((rt_int)(((*F->s_14)).len)));
rt_str_assign(&F->r_1127, (*F->s_14));
{ rt_int lo1129 = ((rt_int)1LL), hi1130 = ((rt_int)(((*F->s_14)).len));
for (rt_int it1131 = lo1129; it1131 <= hi1130; it1131++) {
F->i_1128 = it1131;
if (((65 <= rt_r_echk(rt_str_get(F->r_1127, F->i_1128))) && (rt_r_echk(rt_str_get(F->r_1127, F->i_1128)) <= 90))) {
(*rt_str_at(&F->r_1127, F->i_1128)) = rt_str_get((rt_str("abcdefghijklmnopqrstuvwxyz", 26)), rt_add(rt_sub(((rt_int)(rt_r_echk(rt_str_get(F->r_1127, F->i_1128))) + 1), ((rt_int)(65) + 1)), ((rt_int)1LL)));
}
}
}
F->result_ = F->r_1127;
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
F->l_1132 = rt_str_copy(f_lower_s_15(&(*F->s_16)));
F->w_1133 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->l_1132), rt_str(" ", 1)));
{ rt_int lo1135 = ((rt_int)1LL), hi1136 = rt_add(rt_sub(((rt_int)(((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43)))).len)), ((rt_int)((F->w_1133).len))), ((rt_int)1LL));
for (rt_int it1137 = lo1135; it1137 <= hi1136; it1137++) {
F->i_1134 = it1137;
if (rt_str_eq(rt_str_slice((rt_str_cat(rt_str_cat(rt_str(" auto break case char const continue default do double else enum extern float for goto ", 87), rt_str("if inline int long register restrict return short signed sizeof static struct switch ", 85)), rt_str("typedef union unsigned void volatile while ", 43))), F->i_1134, rt_sub(rt_add(F->i_1134, ((rt_int)((F->w_1133).len))), ((rt_int)1LL))), F->w_1133)) {
F->result_ = rt_str_cat(F->l_1132, rt_str("_", 1));
goto ret_;
}
}
}
F->result_ = F->l_1132;
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
g_serial_1066 = rt_add(rt_r_ichk(g_serial_1066), ((rt_int)1LL));
F->result_ = rt_str_cat((*F->base_19), f_itos_7(rt_r_ichk(g_serial_1066)));
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
if ((rt_r_ichk(g_trial_1102) == ((rt_int)0LL))) {
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("redc: line ", 11), f_itos_7(F->line_21)), rt_str(": ", 2)), (*F->msg_22)));
}
rt_raise(ex_compile_error_1);
ret_:
  RT_FPOP();
  return;
}

static P1043 f_new_buffer_24(void) {
  struct f_new_buffer_24fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_1138 = NULL;
{ R1044 *cell1139 = rt_alloc(sizeof(R1044));
(*cell1139).head = NULL;
(*cell1139).tail = NULL;
F->b_1138 = cell1139;
}
F->result_ = F->b_1138;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_put_27(P1043 b_25, rstr *s_26) {
  struct f_put_27fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_25 = b_25;
F->s_26 = s_26;
F->l_1140 = NULL;
{ R1025 *cell1141 = rt_alloc(sizeof(R1025));
(*cell1141).s = NULL;
(*cell1141).next = NULL;
F->l_1140 = cell1141;
}
(*(P1024)rt_nil_check(F->l_1140)).s = f_mk_3(&(*F->s_26));
if (((*(P1043)rt_nil_check(F->b_25)).tail == NULL)) {
(*(P1043)rt_nil_check(F->b_25)).head = F->l_1140;
} else {
(*(P1024)rt_nil_check((*(P1043)rt_nil_check(F->b_25)).tail)).next = F->l_1140;
}
(*(P1043)rt_nil_check(F->b_25)).tail = F->l_1140;
ret_:
  RT_FPOP();
  return;
}

static void f_emit_29(rstr *s_28) {
  struct f_emit_29fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_28 = s_28;
f_put_27(g_code_1074, &(*F->s_28));
ret_:
  RT_FPOP();
  return;
}

static void f_print_buffer_31(P1043 b_30) {
  struct f_print_buffer_31fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->b_30 = b_30;
F->l_1142 = NULL;
F->l_1142 = (*(P1043)rt_nil_check(F->b_30)).head;
while ((F->l_1142 != NULL)) {
rt_putln((((P1013)rt_nil_check((*(P1024)rt_nil_check(F->l_1142)).s))->all));
F->l_1142 = (*(P1024)rt_nil_check(F->l_1142)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_splice_34(P1043 a_32, P1043 b_33) {
  struct f_splice_34fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_32 = a_32;
F->b_33 = b_33;
if (((*(P1043)rt_nil_check(F->b_33)).head == NULL)) {
goto ret_;
}
if (((*(P1043)rt_nil_check(F->a_32)).tail == NULL)) {
(*(P1043)rt_nil_check(F->a_32)).head = (*(P1043)rt_nil_check(F->b_33)).head;
} else {
(*(P1024)rt_nil_check((*(P1043)rt_nil_check(F->a_32)).tail)).next = (*(P1043)rt_nil_check(F->b_33)).head;
}
(*(P1043)rt_nil_check(F->a_32)).tail = (*(P1043)rt_nil_check(F->b_33)).tail;
(*(P1043)rt_nil_check(F->b_33)).head = NULL;
(*(P1043)rt_nil_check(F->b_33)).tail = NULL;
ret_:
  RT_FPOP();
  return;
}

static int f_is_reserved_36(rstr *w_35) {
  struct f_is_reserved_36fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_35 = w_35;
{ rstr sel1143 = (*F->w_35);
if (0 || rt_str_eq(sel1143, rt_str("ABBREV", 6)) || rt_str_eq(sel1143, rt_str("ABNORMAL", 8)) || rt_str_eq(sel1143, rt_str("ALL", 3)) || rt_str_eq(sel1143, rt_str("ALLOC", 5)) || rt_str_eq(sel1143, rt_str("ASSERT", 6)) || rt_str_eq(sel1143, rt_str("BEGIN", 5)) || rt_str_eq(sel1143, rt_str("BY", 2)) || rt_str_eq(sel1143, rt_str("CAPSULE", 7)) || rt_str_eq(sel1143, rt_str("CASE", 4)) || rt_str_eq(sel1143, rt_str("CONST", 5)) || rt_str_eq(sel1143, rt_str("CREATE", 6)) || rt_str_eq(sel1143, rt_str("DO", 2)) || rt_str_eq(sel1143, rt_str("ELSE", 4)) || rt_str_eq(sel1143, rt_str("ELSEIF", 6)) || rt_str_eq(sel1143, rt_str("END", 3)) || rt_str_eq(sel1143, rt_str("EXCEPTION", 9)) || rt_str_eq(sel1143, rt_str("EXIT", 4)) || rt_str_eq(sel1143, rt_str("EXPORTS", 7)) || rt_str_eq(sel1143, rt_str("EXPOSE", 6)) || rt_str_eq(sel1143, rt_str("EXTERNAL", 8)) || rt_str_eq(sel1143, rt_str("FOR", 3)) || rt_str_eq(sel1143, rt_str("FROM", 4)) || rt_str_eq(sel1143, rt_str("FUNC", 4)) || rt_str_eq(sel1143, rt_str("GENERIC", 7)) || rt_str_eq(sel1143, rt_str("GOTO", 4)) || rt_str_eq(sel1143, rt_str("GUARD", 5)) || rt_str_eq(sel1143, rt_str("IF", 2)) || rt_str_eq(sel1143, rt_str("IMPORTS", 7)) || rt_str_eq(sel1143, rt_str("LOCATION", 8)) || rt_str_eq(sel1143, rt_str("NAMED", 5)) || rt_str_eq(sel1143, rt_str("NEEDS", 5)) || rt_str_eq(sel1143, rt_str("NEW", 3)) || rt_str_eq(sel1143, rt_str("NONE", 4)) || rt_str_eq(sel1143, rt_str("OUT", 3)) || rt_str_eq(sel1143, rt_str("OF", 2)) || rt_str_eq(sel1143, rt_str("PRAG", 4)) || rt_str_eq(sel1143, rt_str("PROC", 4)) || rt_str_eq(sel1143, rt_str("RAISE", 5)) || rt_str_eq(sel1143, rt_str("READONLY", 8)) || rt_str_eq(sel1143, rt_str("REVERSE", 7)) || rt_str_eq(sel1143, rt_str("REGION", 6)) || rt_str_eq(sel1143, rt_str("RENAMING", 8)) || rt_str_eq(sel1143, rt_str("REP", 3)) || rt_str_eq(sel1143, rt_str("REPEAT", 6)) || rt_str_eq(sel1143, rt_str("RERAISE", 7)) || rt_str_eq(sel1143, rt_str("RETURN", 6)) || rt_str_eq(sel1143, rt_str("SUBTYPE", 7)) || rt_str_eq(sel1143, rt_str("TASK", 4)) || rt_str_eq(sel1143, rt_str("THEN", 4)) || rt_str_eq(sel1143, rt_str("TO", 2)) || rt_str_eq(sel1143, rt_str("TYPE", 4)) || rt_str_eq(sel1143, rt_str("VAR", 3)) || rt_str_eq(sel1143, rt_str("WAIT", 4)) || rt_str_eq(sel1143, rt_str("WHEN", 4)) || rt_str_eq(sel1143, rt_str("WHILE", 5))) {
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
F->t_1144 = NULL;
{ R1016 *cell1145 = rt_alloc(sizeof(R1016));
(*cell1145).s = NULL;
(*cell1145).prags = NULL;
F->t_1144 = cell1145;
}
(*(P1015)rt_nil_check(F->t_1144)).kind = F->kind_39;
(*(P1015)rt_nil_check(F->t_1144)).line = rt_r_ichk(g_src_line_1054);
(*(P1015)rt_nil_check(F->t_1144)).ival = F->ival_41;
(*(P1015)rt_nil_check(F->t_1144)).s = f_mk_3(&(*F->s_40));
(*(P1015)rt_nil_check(F->t_1144)).prags = g_pending_prag_1055;
g_pending_prag_1055 = NULL;
g_ntoks_1052 = rt_add(rt_r_ichk(g_ntoks_1052), ((rt_int)1LL));
(((P1017)rt_nil_check(g_toks_1051))->all).p[(rt_index(rt_r_ichk(g_ntoks_1052), (((P1017)rt_nil_check(g_toks_1051))->all).lo, (((P1017)rt_nil_check(g_toks_1051))->all).hi) - (((P1017)rt_nil_check(g_toks_1051))->all).lo)] = F->t_1144;
ret_:
  RT_FPOP();
  return;
}

static rt_int f_ident_end_45(rstr *line_43, rt_int i_44) {
  struct f_ident_end_45fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_43 = line_43;
F->i_44 = i_44;
F->j_1146 = RT_R_IUNDEF;
F->j_1146 = rt_add(F->i_44, ((rt_int)1LL));
while (((rt_r_ichk(F->j_1146) <= ((rt_int)(((*F->line_43)).len))) && ((f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1146)))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1146))))) || (rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1146))) == 95)))) {
if (((rt_r_echk(rt_str_get((*F->line_43), rt_r_ichk(F->j_1146))) == 95) && ((rt_r_ichk(F->j_1146) == ((rt_int)(((*F->line_43)).len))) || (!(f_is_letter_9(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_1146), ((rt_int)1LL))))) || f_is_digit_11(rt_r_echk(rt_str_get((*F->line_43), rt_add(rt_r_ichk(F->j_1146), ((rt_int)1LL)))))))))) {
f_fail_23(rt_r_ichk(g_src_line_1054), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an underscore in an identifier must stand between letters or digits", 67); b_; }));
}
F->j_1146 = rt_add(rt_r_ichk(F->j_1146), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_1146);
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
F->w_1147 = rt_str_new(((rt_int)(((*F->s_46)).len)));
rt_str_assign(&F->w_1147, (*F->s_46));
{ rt_int lo1149 = ((rt_int)1LL), hi1150 = ((rt_int)((F->w_1147).len));
for (rt_int it1151 = lo1149; it1151 <= hi1150; it1151++) {
F->k_1148 = it1151;
(*rt_str_at(&F->w_1147, F->k_1148)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1147, F->k_1148)));
}
}
F->result_ = F->w_1147;
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
F->j_1152 = RT_R_IUNDEF;
F->j_1152 = F->i_49;
while (((rt_r_ichk(F->j_1152) <= ((rt_int)(((*F->line_48)).len))) && ((rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_1152))) == 32) || (rt_r_echk(rt_str_get((*F->line_48), rt_r_ichk(F->j_1152))) == 9)))) {
F->j_1152 = rt_add(rt_r_ichk(F->j_1152), ((rt_int)1LL));
}
F->result_ = rt_r_ichk(F->j_1152);
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
F->j_1153 = RT_R_IUNDEF;
F->j_1153 = f_skip_blanks_50(&(*F->line_51), F->at_52);
F->r_1154 = NULL;
F->r_1154 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->more_1155 = RT_R_EUNDEF;
F->more_1155 = 1;
if (((rt_r_ichk(F->j_1153) > ((rt_int)(((*F->line_51)).len))) || (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1153))) != 40))) {
f_fail_23(rt_r_ichk(g_src_line_1054), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG needs ( pragmat, ... )", 27); b_; }));
}
F->j_1153 = rt_add(rt_r_ichk(F->j_1153), ((rt_int)1LL));
while (rt_r_echk(F->more_1155)) {
F->k_1156 = RT_R_IUNDEF;
F->j_1153 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1153));
if (((rt_r_ichk(F->j_1153) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1153))))))) {
f_fail_23(rt_r_ichk(g_src_line_1054), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat is an identifier", 26); b_; }));
}
F->k_1156 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_1153));
F->r_1154 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_1154))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_1153), rt_sub(rt_r_ichk(F->k_1156), ((rt_int)1LL))); b_; }))); b_; }));
F->j_1153 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_1156));
if (((rt_r_ichk(F->j_1153) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1153))) == 40))) {
F->go_1157 = RT_R_EUNDEF;
F->go_1157 = 1;
F->r_1154 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_1154))->all), rt_str("(", 1)); b_; }));
F->j_1153 = rt_add(rt_r_ichk(F->j_1153), ((rt_int)1LL));
while (rt_r_echk(F->go_1157)) {
F->j_1153 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1153));
if (((rt_r_ichk(F->j_1153) > ((rt_int)(((*F->line_51)).len))) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1153))))))) {
f_fail_23(rt_r_ichk(g_src_line_1054), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat argument is an identifier", 35); b_; }));
}
F->k_1156 = f_ident_end_45(&(*F->line_51), rt_r_ichk(F->j_1153));
F->r_1154 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_1154))->all), f_upper_s_47(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_51), rt_r_ichk(F->j_1153), rt_sub(rt_r_ichk(F->k_1156), ((rt_int)1LL))); b_; }))); b_; }));
F->j_1153 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->k_1156));
if (((rt_r_ichk(F->j_1153) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1153))) == 44))) {
F->r_1154 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_1154))->all), rt_str(",", 1)); b_; }));
F->j_1153 = rt_add(rt_r_ichk(F->j_1153), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_1153) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1153))) == 41))) {
F->j_1153 = rt_add(rt_r_ichk(F->j_1153), ((rt_int)1LL));
F->go_1157 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_1054), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a pragmat ends with )", 21); b_; }));
}
}
F->r_1154 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_1154))->all), rt_str(")", 1)); b_; }));
}
F->r_1154 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_1154))->all), rt_str(";", 1)); b_; }));
F->j_1153 = f_skip_blanks_50(&(*F->line_51), rt_r_ichk(F->j_1153));
if (((rt_r_ichk(F->j_1153) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1153))) == 44))) {
F->j_1153 = rt_add(rt_r_ichk(F->j_1153), ((rt_int)1LL));
} else if (((rt_r_ichk(F->j_1153) <= ((rt_int)(((*F->line_51)).len))) && (rt_r_echk(rt_str_get((*F->line_51), rt_r_ichk(F->j_1153))) == 41))) {
F->j_1153 = rt_add(rt_r_ichk(F->j_1153), ((rt_int)1LL));
F->more_1155 = 0;
} else {
f_fail_23(rt_r_ichk(g_src_line_1054), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRAG ( ... ) is not closed", 26); b_; }));
}
}
f_check_pragmats_55(&(((P1013)rt_nil_check(F->r_1154))->all));
if ((g_pending_prag_1055 == NULL)) {
g_pending_prag_1055 = F->r_1154;
} else {
g_pending_prag_1055 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(g_pending_prag_1055))->all), (((P1013)rt_nil_check(F->r_1154))->all)); b_; }));
}
F->result_ = rt_r_ichk(F->j_1153);
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
F->i_1158 = RT_R_IUNDEF;
F->i_1158 = ((rt_int)1LL);
F->k_1159 = RT_R_IUNDEF;
while ((rt_r_ichk(F->i_1158) <= ((rt_int)(((*F->r_54)).len)))) {
F->k_1159 = rt_r_ichk(F->i_1158);
while ((rt_r_echk(rt_str_get((*F->r_54), rt_r_ichk(F->k_1159))) != 59)) {
F->k_1159 = rt_add(rt_r_ichk(F->k_1159), ((rt_int)1LL));
}
{
F->p_1160 = rt_str_copy(rt_str_slice((*F->r_54), rt_r_ichk(F->i_1158), rt_sub(rt_r_ichk(F->k_1159), ((rt_int)1LL))));
F->ok_1161 = ((((((((((rt_str_eq(F->p_1160, rt_str("OPTIMIZE(SPACE)", 15)) || rt_str_eq(F->p_1160, rt_str("OPTIMIZE(TIME)", 14))) || rt_str_eq(F->p_1160, rt_str("OPEN", 4))) || rt_str_eq(F->p_1160, rt_str("CLOSED", 6))) || rt_str_eq(F->p_1160, rt_str("LIST(ON)", 8))) || rt_str_eq(F->p_1160, rt_str("LIST(OFF)", 9))) || rt_str_eq(F->p_1160, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1160, rt_str("NONREENTRANT", 12))) || rt_str_eq(F->p_1160, rt_str("OK(ALIAS)", 9))) || rt_str_eq(F->p_1160, rt_str("OK(SHARE)", 9))) || ((((rt_int)((F->p_1160).len)) > ((rt_int)10LL)) && rt_str_eq(rt_str_slice(F->p_1160, ((rt_int)1LL), ((rt_int)9LL)), rt_str("SUPPRESS(", 9))));
F->known_1162 = ((((((((((rt_int)((F->p_1160).len)) >= ((rt_int)8LL)) && (rt_str_eq(rt_str_slice(F->p_1160, ((rt_int)1LL), ((rt_int)8LL)), rt_str("OPTIMIZE", 8)) || rt_str_eq(rt_str_slice(F->p_1160, ((rt_int)1LL), ((rt_int)8LL)), rt_str("SUPPRESS", 8)))) || rt_str_eq(F->p_1160, rt_str("OPEN", 4))) || rt_str_eq(F->p_1160, rt_str("CLOSED", 6))) || ((((rt_int)((F->p_1160).len)) >= ((rt_int)4LL)) && rt_str_eq(rt_str_slice(F->p_1160, ((rt_int)1LL), ((rt_int)4LL)), rt_str("LIST", 4)))) || rt_str_eq(F->p_1160, rt_str("NONRECURSIVE", 12))) || rt_str_eq(F->p_1160, rt_str("NONREENTRANT", 12))) || ((((rt_int)((F->p_1160).len)) >= ((rt_int)2LL)) && rt_str_eq(rt_str_slice(F->p_1160, ((rt_int)1LL), ((rt_int)2LL)), rt_str("OK", 2))));
if ((F->known_1162 && (!F->ok_1161))) {
f_fail_23(rt_r_ichk(g_src_line_1054), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("malformed pragmat ", 18), F->p_1160); b_; }));
}
}
F->i_1158 = rt_add(rt_r_ichk(F->k_1159), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_lex_line_57(rstr *line_56) {
  struct f_lex_line_57fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_56 = line_56;
F->i_1163 = RT_R_IUNDEF;
F->i_1163 = ((rt_int)1LL);
F->j_1164 = RT_R_IUNDEF;
F->j_1164 = ((rt_int)0LL);
F->n_1165 = RT_R_IUNDEF;
F->n_1165 = ((rt_int)(((*F->line_56)).len));
F->c_1166 = RT_R_EUNDEF;
while ((rt_r_ichk(F->i_1163) <= rt_r_ichk(F->n_1165))) {
F->c_1166 = rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->i_1163)));
if (((((rt_r_echk(F->c_1166) == 32) || (rt_r_echk(F->c_1166) == 9)) || (rt_r_echk(F->c_1166) == 13)) || (rt_r_echk(F->c_1166) == 12))) {
F->i_1163 = rt_add(rt_r_ichk(F->i_1163), ((rt_int)1LL));
} else if ((rt_r_echk(F->c_1166) == 37)) {
F->i_1163 = rt_add(rt_r_ichk(F->n_1165), ((rt_int)1LL));
} else if (f_is_letter_9(rt_r_echk(F->c_1166))) {
F->j_1164 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->i_1163));
{
F->w_1167 = rt_str_new(rt_sub(rt_r_ichk(F->j_1164), rt_r_ichk(F->i_1163)));
rt_str_assign(&F->w_1167, rt_str_slice((*F->line_56), rt_r_ichk(F->i_1163), rt_sub(rt_r_ichk(F->j_1164), ((rt_int)1LL))));
{ rt_int lo1169 = ((rt_int)1LL), hi1170 = ((rt_int)((F->w_1167).len));
for (rt_int it1171 = lo1169; it1171 <= hi1170; it1171++) {
F->k_1168 = it1171;
(*rt_str_at(&F->w_1167, F->k_1168)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1167, F->k_1168)));
}
}
if (rt_str_eq(F->w_1167, rt_str("PRAGMAT", 7))) {
while (((rt_r_ichk(F->j_1164) <= rt_r_ichk(F->n_1165)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1164))) != 59))) {
F->j_1164 = rt_add(rt_r_ichk(F->j_1164), ((rt_int)1LL));
}
F->j_1164 = rt_add(rt_r_ichk(F->j_1164), ((rt_int)1LL));
} else if (rt_str_eq(F->w_1167, rt_str("PRAG", 4))) {
F->j_1164 = f_lex_prag_53(&(*F->line_56), rt_r_ichk(F->j_1164));
} else if (f_is_reserved_36(&F->w_1167)) {
f_add_token_42((((rt_int)2LL)), &F->w_1167, ((rt_int)0LL));
} else if (f_is_word_op_38(&F->w_1167)) {
f_add_token_42((((rt_int)3LL)), &F->w_1167, ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)1LL)), &F->w_1167, ((rt_int)0LL));
}
}
F->i_1163 = rt_r_ichk(F->j_1164);
} else if (f_is_digit_11(rt_r_echk(F->c_1166))) {
F->j_1164 = rt_r_ichk(F->i_1163);
while (((rt_r_ichk(F->j_1164) <= rt_r_ichk(F->n_1165)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1164)))))) {
F->j_1164 = rt_add(rt_r_ichk(F->j_1164), ((rt_int)1LL));
}
if ((((rt_r_ichk(F->j_1164) < rt_r_ichk(F->n_1165)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1164))) == 46)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_1164), ((rt_int)1LL))))))) {
F->j_1164 = rt_add(rt_r_ichk(F->j_1164), ((rt_int)1LL));
while (((rt_r_ichk(F->j_1164) <= rt_r_ichk(F->n_1165)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1164)))))) {
F->j_1164 = rt_add(rt_r_ichk(F->j_1164), ((rt_int)1LL));
}
if (((rt_r_ichk(F->j_1164) <= rt_r_ichk(F->n_1165)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1164))) == 69) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1164))) == 101)))) {
F->j_1164 = rt_add(rt_r_ichk(F->j_1164), ((rt_int)1LL));
if (((rt_r_ichk(F->j_1164) <= rt_r_ichk(F->n_1165)) && ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1164))) == 43) || (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1164))) == 45)))) {
F->j_1164 = rt_add(rt_r_ichk(F->j_1164), ((rt_int)1LL));
}
while (((rt_r_ichk(F->j_1164) <= rt_r_ichk(F->n_1165)) && f_is_digit_11(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1164)))))) {
F->j_1164 = rt_add(rt_r_ichk(F->j_1164), ((rt_int)1LL));
}
}
f_add_token_42((((rt_int)5LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_1163), rt_sub(rt_r_ichk(F->j_1164), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)4LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_r_ichk(F->i_1163), rt_sub(rt_r_ichk(F->j_1164), ((rt_int)1LL))); b_; }), rt_int_of_str(rt_str_slice((*F->line_56), rt_r_ichk(F->i_1163), rt_sub(rt_r_ichk(F->j_1164), ((rt_int)1LL)))));
}
F->i_1163 = rt_r_ichk(F->j_1164);
} else if ((((rt_r_echk(F->c_1166) == 39) && (rt_r_ichk(F->i_1163) < rt_r_ichk(F->n_1165))) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_1163), ((rt_int)1LL)))) == 39))) {
F->j_1164 = rt_add(rt_r_ichk(F->i_1163), ((rt_int)2LL));
while (((rt_r_ichk(F->j_1164) < rt_r_ichk(F->n_1165)) && (!((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1164))) == 39) && (rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->j_1164), ((rt_int)1LL)))) == 39))))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1164))) == 34)) {
f_fail_23(rt_r_ichk(g_src_line_1054), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain a quote", 40); b_; }));
}
F->j_1164 = rt_add(rt_r_ichk(F->j_1164), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_1164) >= rt_r_ichk(F->n_1165))) {
f_fail_23(rt_r_ichk(g_src_line_1054), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1163), ((rt_int)2LL)), rt_sub(rt_r_ichk(F->j_1164), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1163 = rt_add(rt_r_ichk(F->j_1164), ((rt_int)2LL));
} else if ((rt_r_echk(F->c_1166) == 39)) {
F->j_1164 = rt_add(rt_r_ichk(F->i_1163), ((rt_int)1LL));
if (((rt_r_ichk(F->j_1164) > rt_r_ichk(F->n_1165)) || (!f_is_letter_9(rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1164))))))) {
f_fail_23(rt_r_ichk(g_src_line_1054), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bad enumeration literal", 23); b_; }));
}
F->j_1164 = f_ident_end_45(&(*F->line_56), rt_r_ichk(F->j_1164));
{
F->w_1172 = rt_str_new(rt_sub(rt_sub(rt_r_ichk(F->j_1164), rt_r_ichk(F->i_1163)), ((rt_int)1LL)));
rt_str_assign(&F->w_1172, rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1163), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_1164), ((rt_int)1LL))));
{ rt_int lo1174 = ((rt_int)1LL), hi1175 = ((rt_int)((F->w_1172).len));
for (rt_int it1176 = lo1174; it1176 <= hi1175; it1176++) {
F->k_1173 = it1176;
(*rt_str_at(&F->w_1172, F->k_1173)) = f_upper_13(rt_r_echk(rt_str_get(F->w_1172, F->k_1173)));
}
}
f_add_token_42((((rt_int)6LL)), &F->w_1172, ((rt_int)0LL));
}
F->i_1163 = rt_r_ichk(F->j_1164);
} else if ((rt_r_echk(F->c_1166) == 34)) {
F->j_1164 = rt_add(rt_r_ichk(F->i_1163), ((rt_int)1LL));
while (((rt_r_ichk(F->j_1164) <= rt_r_ichk(F->n_1165)) && (rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1164))) != 34))) {
if ((rt_r_echk(rt_str_get((*F->line_56), rt_r_ichk(F->j_1164))) == 39)) {
f_fail_23(rt_r_ichk(g_src_line_1054), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string literal may not contain an apostrophe", 46); b_; }));
}
F->j_1164 = rt_add(rt_r_ichk(F->j_1164), ((rt_int)1LL));
}
if ((rt_r_ichk(F->j_1164) > rt_r_ichk(F->n_1165))) {
f_fail_23(rt_r_ichk(g_src_line_1054), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unterminated string literal", 27); b_; }));
}
f_add_token_42((((rt_int)7LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->line_56), rt_add(rt_r_ichk(F->i_1163), ((rt_int)1LL)), rt_sub(rt_r_ichk(F->j_1164), ((rt_int)1LL))); b_; }), ((rt_int)0LL));
F->i_1163 = rt_add(rt_r_ichk(F->j_1164), ((rt_int)1LL));
} else {
{
F->two_1177 = rt_str_new(((rt_int)2LL));
rt_str_assign(&F->two_1177, rt_str("  ", 2));
(*rt_str_at(&F->two_1177, ((rt_int)1LL))) = rt_r_echk(F->c_1166);
if ((rt_r_ichk(F->i_1163) < rt_r_ichk(F->n_1165))) {
(*rt_str_at(&F->two_1177, ((rt_int)2LL))) = rt_r_echk(rt_str_get((*F->line_56), rt_add(rt_r_ichk(F->i_1163), ((rt_int)1LL))));
}
if (((((((rt_str_eq(F->two_1177, rt_str(":=", 2)) || rt_str_eq(F->two_1177, rt_str("=>", 2))) || rt_str_eq(F->two_1177, rt_str("..", 2))) || rt_str_eq(F->two_1177, rt_str("**", 2))) || rt_str_eq(F->two_1177, rt_str("/=", 2))) || rt_str_eq(F->two_1177, rt_str("<=", 2))) || rt_str_eq(F->two_1177, rt_str(">=", 2)))) {
f_add_token_42((((rt_int)3LL)), &F->two_1177, ((rt_int)0LL));
F->i_1163 = rt_add(rt_r_ichk(F->i_1163), ((rt_int)2LL));
} else if (((rt_str_eq(F->two_1177, rt_str("<<", 2)) || rt_str_eq(F->two_1177, rt_str(">>", 2))) || rt_str_eq(F->two_1177, rt_str("::", 2)))) {
if (rt_str_eq(F->two_1177, rt_str("<<", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }), ((rt_int)0LL));
} else if (rt_str_eq(F->two_1177, rt_str(">>", 2))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }), ((rt_int)0LL));
} else {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), ((rt_int)0LL));
}
F->i_1163 = rt_add(rt_r_ichk(F->i_1163), ((rt_int)2LL));
} else if ((((((((((((((((((rt_r_echk(F->c_1166) == 40) || (rt_r_echk(F->c_1166) == 41)) || (rt_r_echk(F->c_1166) == 91)) || (rt_r_echk(F->c_1166) == 93)) || (rt_r_echk(F->c_1166) == 44)) || (rt_r_echk(F->c_1166) == 58)) || (rt_r_echk(F->c_1166) == 59)) || (rt_r_echk(F->c_1166) == 46)) || (rt_r_echk(F->c_1166) == 35)) || (rt_r_echk(F->c_1166) == 43)) || (rt_r_echk(F->c_1166) == 45)) || (rt_r_echk(F->c_1166) == 42)) || (rt_r_echk(F->c_1166) == 47)) || (rt_r_echk(F->c_1166) == 38)) || (rt_r_echk(F->c_1166) == 61)) || (rt_r_echk(F->c_1166) == 60)) || (rt_r_echk(F->c_1166) == 62))) {
f_add_token_42((((rt_int)3LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chs_5(rt_r_echk(F->c_1166)); b_; }), ((rt_int)0LL));
F->i_1163 = rt_add(rt_r_ichk(F->i_1163), ((rt_int)1LL));
} else {
f_fail_23(rt_r_ichk(g_src_line_1054), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("unexpected character", 20); b_; }));
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
F->line_1178 = rt_str_new(rt_sizeln());
F->l_1179 = NULL;
rt_r_readln(&F->line_1178);
g_src_line_1054 = rt_add(rt_r_ichk(g_src_line_1054), ((rt_int)1LL));
{ R1025 *cell1180 = rt_alloc(sizeof(R1025));
(*cell1180).s = NULL;
(*cell1180).next = NULL;
F->l_1179 = cell1180;
}
(*(P1024)rt_nil_check(F->l_1179)).s = f_mk_3(&F->line_1178);
if ((g_src_tail_1057 == NULL)) {
g_src_head_1056 = F->l_1179;
} else {
(*(P1024)rt_nil_check(g_src_tail_1057)).next = F->l_1179;
}
g_src_tail_1057 = F->l_1179;
f_lex_line_57(&F->line_1178);
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
F->f_1181 = rt_r_file_new(0, 0, sizeof(int), 1);
F->found_1182 = RT_R_EUNDEF;
F->found_1182 = 1;
{ rt_frame xf1183;
if (RT_TRY(xf1183)) {
rt_r_open(F->f_1181, rt_str_cat(f_lower_s_15(&(*F->name_59)), rt_str(".red", 4)), 0);
RT_POP(xf1183);
} else {
RT_POP(xf1183);
int x1184 = rt_xcur;
if (0 || x1184 == rt_exc("X_NOFILE") || x1184 == rt_exc("X_FILENAME")) {
F->found_1182 = 0;
} else {
rt_raise(x1184);
}
}
}
if ((!rt_r_echk(F->found_1182))) {
F->result_ = 0;
goto ret_;
}
while ((!rt_r_feof(F->f_1181))) {
F->line_1185 = rt_str_new(rt_r_fsizeln(F->f_1181));
rt_r_freadln(F->f_1181, &F->line_1185);
g_src_line_1054 = rt_add(rt_r_ichk(g_src_line_1054), ((rt_int)1LL));
f_lex_line_57(&F->line_1185);
}
rt_r_close(F->f_1181, 0);
f_add_token_42((((rt_int)0LL)), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<end>", 5); b_; }), ((rt_int)0LL));
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_write_library_62(P1020 u_61) {
  struct f_write_library_62fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->u_61 = u_61;
F->f_1186 = rt_r_file_new(0, 1, sizeof(int), 1);
F->l_1187 = NULL;
F->l_1187 = g_src_head_1056;
F->n_1188 = RT_R_IUNDEF;
F->n_1188 = ((rt_int)1LL);
rt_r_open(F->f_1186, rt_str_cat(f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->u_61)).name))->all)), rt_str(".red", 4)), 1);
while (((F->l_1187 != NULL) && (rt_r_ichk(F->n_1188) <= rt_r_ichk((*(P1020)rt_nil_check(F->u_61)).eline)))) {
if ((rt_r_ichk(F->n_1188) >= rt_r_ichk((*(P1020)rt_nil_check(F->u_61)).line))) {
rt_r_fwriteln(F->f_1186, (((P1013)rt_nil_check((*(P1024)rt_nil_check(F->l_1187)).s))->all));
}
F->n_1188 = rt_add(rt_r_ichk(F->n_1188), ((rt_int)1LL));
F->l_1187 = (*(P1024)rt_nil_check(F->l_1187)).next;
}
rt_r_close(F->f_1186, 0);
ret_:
  RT_FPOP();
  return;
}

static P1020 f_nn_65(rt_int kind_63, rt_int line_64) {
  struct f_nn_65fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_63 = kind_63;
F->line_64 = line_64;
F->x_1189 = NULL;
{ R1021 *cell1190 = rt_alloc(sizeof(R1021));
(*cell1190).name = NULL;
(*cell1190).tag = NULL;
(*cell1190).prags = NULL;
(*cell1190).labels = NULL;
(*cell1190).a = NULL;
(*cell1190).b = NULL;
(*cell1190).c = NULL;
(*cell1190).d = NULL;
(*cell1190).e = NULL;
(*cell1190).next = NULL;
F->x_1189 = cell1190;
}
(*(P1020)rt_nil_check(F->x_1189)).kind = F->kind_63;
(*(P1020)rt_nil_check(F->x_1189)).line = F->line_64;
F->result_ = F->x_1189;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_append_69(P1020 *head_66, P1020 *tail_67, P1020 x_68) {
  struct f_append_69fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_66 = head_66;
F->tail_67 = tail_67;
F->x_68 = x_68;
if (((*F->head_66) == NULL)) {
(*F->head_66) = F->x_68;
} else {
(*(P1020)rt_nil_check((*F->tail_67))).next = F->x_68;
}
(*F->tail_67) = F->x_68;
while (((*(P1020)rt_nil_check((*F->tail_67))).next != NULL)) {
(*F->tail_67) = (*(P1020)rt_nil_check((*F->tail_67))).next;
}
ret_:
  RT_FPOP();
  return;
}

static rt_int f_list_len_71(P1020 l_70) {
  struct f_list_len_71fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_70 = l_70;
F->n_1191 = RT_R_IUNDEF;
F->n_1191 = ((rt_int)0LL);
F->p_1192 = NULL;
F->p_1192 = F->l_70;
while ((F->p_1192 != NULL)) {
F->n_1191 = rt_add(rt_r_ichk(F->n_1191), ((rt_int)1LL));
F->p_1192 = (*(P1020)rt_nil_check(F->p_1192)).next;
}
F->result_ = rt_r_ichk(F->n_1191);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_cur_line_72(void) {
  struct f_cur_line_72fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->result_ = rt_r_ichk((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).line);
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
F->result_ = ((rt_r_ichk((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)2LL))) && rt_str_eq((((P1013)rt_nil_check((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_73)));
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
F->result_ = ((rt_r_ichk((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).kind) == (((rt_int)3LL))) && rt_str_eq((((P1013)rt_nil_check((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), (*F->w_75)));
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
F->result_ = (rt_r_ichk((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).kind) == F->k_77);
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
if ((rt_add(rt_r_ichk(g_tpos_1053), F->k_79) > rt_r_ichk(g_ntoks_1052))) {
F->result_ = (((rt_int)0LL));
goto ret_;
}
F->result_ = rt_r_ichk((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_1053), F->k_79), b_.lo, b_.hi) - b_.lo)]; }))).kind);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1013 f_text_at_82(rt_int k_81) {
  struct f_text_at_82fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_81 = k_81;
if ((rt_add(rt_r_ichk(g_tpos_1053), F->k_81) > rt_r_ichk(g_ntoks_1052))) {
F->result_ = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_ntoks_1052), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
}
F->result_ = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_add(rt_r_ichk(g_tpos_1053), F->k_81), b_.lo, b_.hi) - b_.lo)]; }))).s;
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
f_fail_23(rt_r_ichk((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->msg_83), rt_str(" (at ", 5)), (((P1013)rt_nil_check((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)), rt_str(")", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static int f_accept_kw_86(rstr *w_85) {
  struct f_accept_kw_86fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->w_85 = w_85;
if (f_at_kw_74(&(*F->w_85))) {
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
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
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
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
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
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
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1013 f_expect_id_93(void) {
  struct f_expect_id_93fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((!f_at_kind_78((((rt_int)1LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an identifier", 22); b_; }));
}
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->result_ = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_1053), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_name_node_94(void) {
  struct f_name_node_94fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1193 = NULL;
F->x_1193 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
(*(P1020)rt_nil_check(F->x_1193)).name = f_expect_id_93();
F->result_ = F->x_1193;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_id_list_95(void) {
  struct f_id_list_95fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1194 = NULL;
F->tail_1195 = NULL;
f_append_69(&F->head_1194, &F->tail_1195, f_name_node_94());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1194, &F->tail_1195, f_name_node_94());
}
F->result_ = F->head_1194;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_p_subtype_96(void) {
  struct f_p_subtype_96fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1196 = RT_R_IUNDEF;
F->line_1196 = f_cur_line_72();
F->x_1197 = NULL;
if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->x_1197 = f_nn_65((((rt_int)81LL)), rt_r_ichk(F->line_1196));
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1020)rt_nil_check(F->x_1197)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1197;
goto ret_;
}
if ((!f_at_kind_78((((rt_int)1LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a type or p_subtype", 28); b_; }));
}
{
F->w_1198 = rt_str_copy((((P1013)rt_nil_check((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
if (rt_str_eq(F->w_1198, rt_str("ARRAY", 5))) {
F->x_1197 = f_nn_65((((rt_int)74LL)), rt_r_ichk(F->line_1196));
{
F->head_1199 = NULL;
F->tail_1200 = NULL;
f_append_69(&F->head_1199, &F->tail_1200, f_p_subtype_96());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1199, &F->tail_1200, f_p_subtype_96());
}
(*(P1020)rt_nil_check(F->x_1197)).a = F->head_1199;
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P1020)rt_nil_check(F->x_1197)).b = f_p_subtype_96();
} else if ((rt_str_eq(F->w_1198, rt_str("RECORD", 6)) || rt_str_eq(F->w_1198, rt_str("UNION", 5)))) {
if (rt_str_eq(F->w_1198, rt_str("RECORD", 6))) {
F->x_1197 = f_nn_65((((rt_int)75LL)), rt_r_ichk(F->line_1196));
} else {
F->x_1197 = f_nn_65((((rt_int)76LL)), rt_r_ichk(F->line_1196));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1201 = NULL;
F->tail_1202 = NULL;
F->more_1203 = RT_R_EUNDEF;
F->more_1203 = 1;
while (rt_r_echk(F->more_1203)) {
F->names_1204 = NULL;
F->names_1204 = f_id_list_95();
F->st_1205 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1205 = f_p_subtype_96();
while ((F->names_1204 != NULL)) {
F->cmp_1206 = NULL;
F->cmp_1206 = f_nn_65((((rt_int)63LL)), rt_r_ichk((*(P1020)rt_nil_check(F->names_1204)).line));
(*(P1020)rt_nil_check(F->cmp_1206)).name = (*(P1020)rt_nil_check(F->names_1204)).name;
(*(P1020)rt_nil_check(F->cmp_1206)).a = F->st_1205;
f_append_69(&F->head_1201, &F->tail_1202, F->cmp_1206);
F->names_1204 = (*(P1020)rt_nil_check(F->names_1204)).next;
}
F->more_1203 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1020)rt_nil_check(F->x_1197)).a = F->head_1201;
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if ((rt_str_eq(F->w_1198, rt_str("UNION", 5)) && f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1197)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1198, rt_str("ENUM", 4))) {
F->x_1197 = f_nn_65((((rt_int)72LL)), rt_r_ichk(F->line_1196));
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
{
F->head_1207 = NULL;
F->tail_1208 = NULL;
F->more_1209 = RT_R_EUNDEF;
F->more_1209 = 1;
while (rt_r_echk(F->more_1209)) {
F->lit_1210 = NULL;
F->lit_1210 = f_nn_65((((rt_int)4LL)), rt_r_ichk(F->line_1196));
if ((!f_at_kind_78((((rt_int)6LL))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected an enumeration literal", 31); b_; }));
}
(*(P1020)rt_nil_check(F->lit_1210)).name = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
f_append_69(&F->head_1207, &F->tail_1208, F->lit_1210);
F->more_1209 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1020)rt_nil_check(F->x_1197)).a = F->head_1207;
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1197)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1020)rt_nil_check(F->x_1197)).c = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if ((((rt_str_eq(F->w_1198, rt_str("STRING", 6)) || rt_str_eq(F->w_1198, rt_str("SET", 3))) || rt_str_eq(F->w_1198, rt_str("MAILBOX", 7))) || rt_str_eq(F->w_1198, rt_str("FILE", 4)))) {
if (rt_str_eq(F->w_1198, rt_str("STRING", 6))) {
F->x_1197 = f_nn_65((((rt_int)73LL)), rt_r_ichk(F->line_1196));
} else if (rt_str_eq(F->w_1198, rt_str("SET", 3))) {
F->x_1197 = f_nn_65((((rt_int)77LL)), rt_r_ichk(F->line_1196));
} else if (rt_str_eq(F->w_1198, rt_str("MAILBOX", 7))) {
F->x_1197 = f_nn_65((((rt_int)78LL)), rt_r_ichk(F->line_1196));
} else {
F->x_1197 = f_nn_65((((rt_int)79LL)), rt_r_ichk(F->line_1196));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
(*(P1020)rt_nil_check(F->x_1197)).a = f_p_subtype_96();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1197)).b = f_actual_params_98();
}
} else if (rt_str_eq(F->w_1198, rt_str("INT", 3))) {
F->x_1197 = f_nn_65((((rt_int)70LL)), rt_r_ichk(F->line_1196));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1197)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1020)rt_nil_check(F->x_1197)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else if (rt_str_eq(F->w_1198, rt_str("FLOAT", 5))) {
F->x_1197 = f_nn_65((((rt_int)71LL)), rt_r_ichk(F->line_1196));
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1197)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1197)).b = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }));
(*(P1020)rt_nil_check(F->x_1197)).c = f_expr_107();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->x_1197 = f_nn_65((((rt_int)80LL)), rt_r_ichk(F->line_1196));
(*(P1020)rt_nil_check(F->x_1197)).name = f_mk_3(&F->w_1198);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1197)).a = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1197)).b = f_constraint_list_97();
(*(P1020)rt_nil_check(F->x_1197)).flag = ((rt_int)1LL);
}
}
}
F->result_ = F->x_1197;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_constraint_list_97(void) {
  struct f_constraint_list_97fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1211 = NULL;
F->tail_1212 = NULL;
F->more_1213 = RT_R_EUNDEF;
F->more_1213 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1213)) {
F->line_1214 = RT_R_IUNDEF;
F->line_1214 = f_cur_line_72();
F->lo_1215 = NULL;
F->lo_1215 = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1216 = NULL;
F->r_1216 = f_nn_65((((rt_int)16LL)), rt_r_ichk(F->line_1214));
(*(P1020)rt_nil_check(F->r_1216)).a = F->lo_1215;
(*(P1020)rt_nil_check(F->r_1216)).b = f_expr_107();
f_append_69(&F->head_1211, &F->tail_1212, F->r_1216);
} else {
f_append_69(&F->head_1211, &F->tail_1212, F->lo_1215);
}
F->more_1213 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1211;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_actual_params_98(void) {
  struct f_actual_params_98fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1217 = NULL;
F->tail_1218 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_69(&F->head_1217, &F->tail_1218, f_expr_107());
while (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
f_append_69(&F->head_1217, &F->tail_1218, f_expr_107());
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1217;
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

static P1020 f_actual_tt_101(void) {
  struct f_actual_tt_101fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1219 = NULL;
F->tail_1220 = NULL;
F->more_1221 = RT_R_EUNDEF;
F->more_1221 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1221)) {
if ((f_at_kind_78((((rt_int)1LL))) && f_is_type_word_100(&(((P1013)rt_nil_check((*(P1015)rt_nil_check((((P1017)rt_nil_check(g_toks_1051))->all).p[(rt_index(rt_r_ichk(g_tpos_1053), (((P1017)rt_nil_check(g_toks_1051))->all).lo, (((P1017)rt_nil_check(g_toks_1051))->all).hi) - (((P1017)rt_nil_check(g_toks_1051))->all).lo)])).s))->all)))) {
f_append_69(&F->head_1219, &F->tail_1220, f_p_subtype_96());
} else {
f_append_69(&F->head_1219, &F->tail_1220, f_expr_107());
}
F->more_1221 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1219;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_binop_106(P1013 op_102, P1020 l_103, P1020 r_104, rt_int line_105) {
  struct f_binop_106fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_102 = op_102;
F->l_103 = l_103;
F->r_104 = r_104;
F->line_105 = line_105;
F->x_1222 = NULL;
F->x_1222 = f_nn_65((((rt_int)9LL)), F->line_105);
(*(P1020)rt_nil_check(F->x_1222)).name = F->op_102;
(*(P1020)rt_nil_check(F->x_1222)).a = F->l_103;
(*(P1020)rt_nil_check(F->x_1222)).b = F->r_104;
F->result_ = F->x_1222;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_expr_107(void) {
  struct f_expr_107fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1223 = NULL;
F->l_1223 = f_expr_and_108();
while ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("XOR", 3); b_; })))) {
F->op_1224 = NULL;
F->op_1224 = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1225 = RT_R_IUNDEF;
F->line_1225 = f_cur_line_72();
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->l_1223 = f_binop_106(F->op_1224, F->l_1223, f_expr_and_108(), rt_r_ichk(F->line_1225));
}
F->result_ = F->l_1223;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_expr_and_108(void) {
  struct f_expr_and_108fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1226 = NULL;
F->l_1226 = f_expr_not_109();
while (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; }))) {
F->line_1227 = RT_R_IUNDEF;
F->line_1227 = f_cur_line_72();
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->l_1226 = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("AND", 3); b_; })), F->l_1226, f_expr_not_109(), rt_r_ichk(F->line_1227));
}
F->result_ = F->l_1226;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_expr_not_109(void) {
  struct f_expr_not_109fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }))) {
F->x_1228 = NULL;
F->x_1228 = f_nn_65((((rt_int)8LL)), f_cur_line_72());
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1228)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P1020)rt_nil_check(F->x_1228)).a = f_expr_not_109();
F->result_ = F->x_1228;
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

static P1020 f_expr_rel_112(void) {
  struct f_expr_rel_112fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1229 = NULL;
F->l_1229 = f_expr_add_113();
while ((f_at_kind_78((((rt_int)3LL))) && f_is_rel_111(&(((P1013)rt_nil_check((*(P1015)rt_nil_check((((P1017)rt_nil_check(g_toks_1051))->all).p[(rt_index(rt_r_ichk(g_tpos_1053), (((P1017)rt_nil_check(g_toks_1051))->all).lo, (((P1017)rt_nil_check(g_toks_1051))->all).hi) - (((P1017)rt_nil_check(g_toks_1051))->all).lo)])).s))->all)))) {
F->op_1230 = NULL;
F->op_1230 = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1231 = RT_R_IUNDEF;
F->line_1231 = f_cur_line_72();
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->l_1229 = f_binop_106(F->op_1230, F->l_1229, f_expr_add_113(), rt_r_ichk(F->line_1231));
}
F->result_ = F->l_1229;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_expr_add_113(void) {
  struct f_expr_add_113fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1232 = NULL;
F->l_1232 = f_expr_mul_114();
while ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->op_1233 = NULL;
F->op_1233 = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1234 = RT_R_IUNDEF;
F->line_1234 = f_cur_line_72();
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->l_1232 = f_binop_106(F->op_1233, F->l_1232, f_expr_mul_114(), rt_r_ichk(F->line_1234));
}
F->result_ = F->l_1232;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_expr_mul_114(void) {
  struct f_expr_mul_114fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1235 = NULL;
F->l_1235 = f_expr_pow_115();
while (((((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("/", 1); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MOD", 3); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DIV", 3); b_; }))) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("&", 1); b_; })))) {
F->op_1236 = NULL;
F->op_1236 = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s;
F->line_1237 = RT_R_IUNDEF;
F->line_1237 = f_cur_line_72();
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->l_1235 = f_binop_106(F->op_1236, F->l_1235, f_expr_pow_115(), rt_r_ichk(F->line_1237));
}
F->result_ = F->l_1235;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_expr_pow_115(void) {
  struct f_expr_pow_115fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_1238 = NULL;
F->l_1238 = f_expr_prefix_116();
while (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; }))) {
F->line_1239 = RT_R_IUNDEF;
F->line_1239 = f_cur_line_72();
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->l_1238 = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("**", 2); b_; })), F->l_1238, f_expr_prefix_116(), rt_r_ichk(F->line_1239));
}
F->result_ = F->l_1238;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_expr_prefix_116(void) {
  struct f_expr_prefix_116fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("+", 1); b_; })) || f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("-", 1); b_; })))) {
F->x_1240 = NULL;
F->x_1240 = f_nn_65((((rt_int)8LL)), f_cur_line_72());
(*(P1020)rt_nil_check(F->x_1240)).name = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1240)).a = f_expr_prefix_116();
F->result_ = F->x_1240;
goto ret_;
}
F->result_ = f_postfix_117();
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_postfix_117(void) {
  struct f_postfix_117fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_1241 = NULL;
F->p_1241 = f_primary_118();
while (1) {
F->line_1242 = RT_R_IUNDEF;
F->line_1242 = f_cur_line_72();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1243 = NULL;
F->x_1243 = f_nn_65((((rt_int)10LL)), rt_r_ichk(F->line_1242));
F->head_1244 = NULL;
F->tail_1245 = NULL;
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1246 = RT_R_EUNDEF;
F->more_1246 = 1;
while (rt_r_echk(F->more_1246)) {
F->lo_1247 = NULL;
F->lo_1247 = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1248 = NULL;
F->r_1248 = f_nn_65((((rt_int)16LL)), rt_r_ichk(F->line_1242));
(*(P1020)rt_nil_check(F->r_1248)).a = F->lo_1247;
(*(P1020)rt_nil_check(F->r_1248)).b = f_expr_107();
f_append_69(&F->head_1244, &F->tail_1245, F->r_1248);
} else {
f_append_69(&F->head_1244, &F->tail_1245, F->lo_1247);
}
F->more_1246 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P1020)rt_nil_check(F->x_1243)).a = F->p_1241;
(*(P1020)rt_nil_check(F->x_1243)).b = F->head_1244;
F->p_1241 = F->x_1243;
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && ((f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL))) || (f_kind_at_80(((rt_int)1LL)) == (((rt_int)2LL)))))) {
F->x_1249 = NULL;
F->x_1249 = f_nn_65((((rt_int)11LL)), rt_r_ichk(F->line_1242));
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1249)).a = F->p_1241;
(*(P1020)rt_nil_check(F->x_1249)).name = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->p_1241 = F->x_1249;
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; })) && (rt_r_ichk((*(P1020)rt_nil_check(F->p_1241)).kind) == (((rt_int)7LL))))) {
F->x_1250 = NULL;
F->x_1250 = f_nn_65((((rt_int)12LL)), rt_r_ichk(F->line_1242));
(*(P1020)rt_nil_check(F->x_1250)).a = F->p_1241;
(*(P1020)rt_nil_check(F->x_1250)).b = f_actual_tt_101();
F->p_1241 = F->x_1250;
} else if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }))) {
F->x_1251 = NULL;
F->x_1251 = f_nn_65((((rt_int)13LL)), rt_r_ichk(F->line_1242));
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1251)).a = F->p_1241;
(*(P1020)rt_nil_check(F->x_1251)).b = f_p_subtype_96();
F->p_1241 = F->x_1251;
} else {
F->result_ = F->p_1241;
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_primary_118(void) {
  struct f_primary_118fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1252 = RT_R_IUNDEF;
F->line_1252 = f_cur_line_72();
F->x_1253 = NULL;
F->k_1254 = RT_R_IUNDEF;
F->k_1254 = rt_r_ichk((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).kind);
if ((rt_r_ichk(F->k_1254) == (((rt_int)4LL)))) {
F->x_1253 = f_nn_65((((rt_int)1LL)), rt_r_ichk(F->line_1252));
(*(P1020)rt_nil_check(F->x_1253)).ival = rt_r_ichk((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).ival);
(*(P1020)rt_nil_check(F->x_1253)).name = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->result_ = F->x_1253;
goto ret_;
}
if ((((rt_r_ichk(F->k_1254) == (((rt_int)5LL))) || (rt_r_ichk(F->k_1254) == (((rt_int)7LL)))) || (rt_r_ichk(F->k_1254) == (((rt_int)6LL))))) {
if ((rt_r_ichk(F->k_1254) == (((rt_int)5LL)))) {
F->x_1253 = f_nn_65((((rt_int)2LL)), rt_r_ichk(F->line_1252));
} else if ((rt_r_ichk(F->k_1254) == (((rt_int)7LL)))) {
F->x_1253 = f_nn_65((((rt_int)3LL)), rt_r_ichk(F->line_1252));
} else {
F->x_1253 = f_nn_65((((rt_int)4LL)), rt_r_ichk(F->line_1252));
}
(*(P1020)rt_nil_check(F->x_1253)).name = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->result_ = F->x_1253;
goto ret_;
}
if ((rt_r_ichk(F->k_1254) == (((rt_int)1LL)))) {
F->w_1255 = rt_str_copy((((P1013)rt_nil_check((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s))->all));
if ((rt_str_eq(F->w_1255, rt_str("TRUE", 4)) || rt_str_eq(F->w_1255, rt_str("FALSE", 5)))) {
F->x_1253 = f_nn_65((((rt_int)5LL)), rt_r_ichk(F->line_1252));
if (rt_str_eq(F->w_1255, rt_str("TRUE", 4))) {
(*(P1020)rt_nil_check(F->x_1253)).ival = ((rt_int)1LL);
}
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->result_ = F->x_1253;
goto ret_;
}
if (rt_str_eq(F->w_1255, rt_str("NIL", 3))) {
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->result_ = f_nn_65((((rt_int)6LL)), rt_r_ichk(F->line_1252));
goto ret_;
}
F->result_ = f_name_node_94();
goto ret_;
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->x_1253 = f_nn_65((((rt_int)17LL)), rt_r_ichk(F->line_1252));
(*(P1020)rt_nil_check(F->x_1253)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->x_1253;
goto ret_;
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->head_1256 = NULL;
F->tail_1257 = NULL;
F->x_1253 = f_nn_65((((rt_int)14LL)), rt_r_ichk(F->line_1252));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; })))) {
F->more_1258 = RT_R_EUNDEF;
F->more_1258 = 1;
while (rt_r_echk(F->more_1258)) {
f_append_69(&F->head_1256, &F->tail_1257, f_constructor_item_119());
F->more_1258 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P1020)rt_nil_check(F->x_1253)).a = F->head_1256;
F->result_ = F->x_1253;
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

static P1020 f_constructor_item_119(void) {
  struct f_constructor_item_119fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1259 = RT_R_IUNDEF;
F->line_1259 = f_cur_line_72();
F->it_1260 = NULL;
F->it_1260 = f_nn_65((((rt_int)15LL)), rt_r_ichk(F->line_1259));
F->first_1261 = NULL;
F->first_1261 = f_expr_107();
F->keys_1262 = NULL;
F->ktail_1263 = NULL;
F->lab_1264 = NULL;
F->lab_1264 = f_nn_65((((rt_int)61LL)), rt_r_ichk(F->line_1259));
(*(P1020)rt_nil_check(F->lab_1264)).a = F->first_1261;
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1020)rt_nil_check(F->lab_1264)).b = f_expr_107();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
f_append_69(&F->keys_1262, &F->ktail_1263, F->lab_1264);
} else if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->save_1265 = RT_R_IUNDEF;
F->save_1265 = rt_r_ichk(g_tpos_1053);
F->more_1266 = NULL;
F->tail2_1267 = NULL;
F->ok_1268 = RT_R_EUNDEF;
F->ok_1268 = 0;
F->go_1269 = RT_R_EUNDEF;
F->go_1269 = 1;
while ((rt_r_echk(F->go_1269) && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->l2_1270 = NULL;
F->l2_1270 = f_nn_65((((rt_int)61LL)), rt_r_ichk(F->line_1259));
(*(P1020)rt_nil_check(F->l2_1270)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1020)rt_nil_check(F->l2_1270)).b = f_expr_107();
}
f_append_69(&F->more_1266, &F->tail2_1267, F->l2_1270);
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->ok_1268 = 1;
F->go_1269 = 0;
} else if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })))) {
F->go_1269 = 0;
}
}
if (rt_r_echk(F->ok_1268)) {
f_append_69(&F->keys_1262, &F->ktail_1263, F->lab_1264);
f_append_69(&F->keys_1262, &F->ktail_1263, F->more_1266);
} else {
g_tpos_1053 = rt_r_ichk(F->save_1265);
}
}
if (((F->keys_1262 == NULL) && ((*(P1020)rt_nil_check(F->lab_1264)).b != NULL))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a range in a constructor is followed by :", 41); b_; }));
}
if ((F->keys_1262 != NULL)) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P1020)rt_nil_check(F->it_1260)).a = F->keys_1262;
(*(P1020)rt_nil_check(F->it_1260)).b = f_expr_107();
} else {
(*(P1020)rt_nil_check(F->it_1260)).b = F->first_1261;
}
F->result_ = F->it_1260;
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

static P1020 f_body_121(void) {
  struct f_body_121fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1271 = NULL;
F->tail_1272 = NULL;
F->stmts_1273 = RT_R_EUNDEF;
F->stmts_1273 = 0;
F->after_1274 = NULL;
while ((!f_at_body_end_120())) {
F->x_1275 = NULL;
F->x_1275 = f_body_element_122();
if (((F->x_1275 != NULL) && ((((rt_r_ichk((*(P1020)rt_nil_check(F->x_1275)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P1020)rt_nil_check(F->x_1275)).kind) == (((rt_int)41LL)))) || (rt_r_ichk((*(P1020)rt_nil_check(F->x_1275)).kind) == (((rt_int)49LL)))) || (rt_r_ichk((*(P1020)rt_nil_check(F->x_1275)).kind) == (((rt_int)48LL)))))) {
if (rt_r_echk(F->stmts_1273)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->x_1275)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an immediate declaration must precede the statements of its body", 64); b_; }));
}
} else if ((((F->x_1275 != NULL) && (rt_r_ichk((*(P1020)rt_nil_check(F->x_1275)).kind) >= (((rt_int)42LL)))) && (rt_r_ichk((*(P1020)rt_nil_check(F->x_1275)).kind) <= (((rt_int)51LL))))) {
if ((rt_r_echk(F->stmts_1273) && (F->after_1274 == NULL))) {
F->after_1274 = F->x_1275;
}
} else if (((F->x_1275 != NULL) && (rt_r_ichk((*(P1020)rt_nil_check(F->x_1275)).kind) != (((rt_int)33LL))))) {
if ((F->after_1274 != NULL)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->after_1274)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a deferred declaration must precede or follow all the statements of its body", 76); b_; }));
}
F->stmts_1273 = 1;
}
f_append_69(&F->head_1271, &F->tail_1272, F->x_1275);
}
F->result_ = F->head_1271;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_body_element_122(void) {
  struct f_body_element_122fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1276 = NULL;
F->pr_1277 = NULL;
F->pr_1277 = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).prags;
if ((((((((((((f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; })) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABBREV", 6); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPOSE", 6); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXCEPTION", 9); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GENERIC", 7); b_; })))) {
F->x_1276 = f_declaration_123();
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASSERT", 6); b_; }))) {
F->x_1276 = f_nn_65((((rt_int)33LL)), f_cur_line_72());
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1276)).a = f_expr_107();
} else {
F->x_1276 = f_statement_149();
}
if ((F->pr_1277 != NULL)) {
F->p_1278 = NULL;
F->p_1278 = F->x_1276;
while ((F->p_1278 != NULL)) {
if (((*(P1020)rt_nil_check(F->p_1278)).prags == NULL)) {
(*(P1020)rt_nil_check(F->p_1278)).prags = F->pr_1277;
} else {
(*(P1020)rt_nil_check(F->p_1278)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->pr_1277))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1278)).prags))->all)); b_; }));
}
F->p_1278 = (*(P1020)rt_nil_check(F->p_1278)).next;
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
F->result_ = F->x_1276;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_declaration_123(void) {
  struct f_declaration_123fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1279 = RT_R_IUNDEF;
F->line_1279 = f_cur_line_72();
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
F->head_1280 = NULL;
F->tail_1281 = NULL;
F->names_1282 = NULL;
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->names_1282 = f_id_list_95();
while ((F->names_1282 != NULL)) {
F->x_1283 = NULL;
F->x_1283 = f_nn_65((((rt_int)49LL)), rt_r_ichk(F->line_1279));
(*(P1020)rt_nil_check(F->x_1283)).name = (*(P1020)rt_nil_check(F->names_1282)).name;
f_append_69(&F->head_1280, &F->tail_1281, F->x_1283);
F->names_1282 = (*(P1020)rt_nil_check(F->names_1282)).next;
}
F->result_ = F->head_1280;
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

static P1020 f_object_decl_124(void) {
  struct f_object_decl_124fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1284 = RT_R_IUNDEF;
F->line_1284 = f_cur_line_72();
F->is_var_1285 = RT_R_EUNDEF;
F->is_var_1285 = f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }));
F->names_1286 = NULL;
F->st_1287 = NULL;
F->init_1288 = NULL;
F->loc_1289 = NULL;
F->loc_kind_1290 = RT_R_IUNDEF;
F->loc_kind_1290 = ((rt_int)0LL);
F->head_1291 = NULL;
F->tail_1292 = NULL;
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->names_1286 = f_id_list_95();
if (rt_r_echk(F->is_var_1285)) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1287 = f_p_subtype_96();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->init_1288 = f_expr_107();
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCATION", 8); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1013)rt_nil_check((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("INTERRUPT", 9)))) {
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->loc_kind_1290 = ((rt_int)1LL);
} else {
F->loc_kind_1290 = ((rt_int)2LL);
}
F->loc_1289 = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
if (((F->init_1288 == NULL) && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; })))) {
F->init_1288 = f_expr_107();
}
} else {
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }))) {
F->st_1287 = f_p_subtype_96();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }));
F->init_1288 = f_expr_107();
}
while ((F->names_1286 != NULL)) {
F->x_1293 = NULL;
if (rt_r_echk(F->is_var_1285)) {
F->x_1293 = f_nn_65((((rt_int)40LL)), rt_r_ichk(F->line_1284));
} else {
F->x_1293 = f_nn_65((((rt_int)41LL)), rt_r_ichk(F->line_1284));
}
(*(P1020)rt_nil_check(F->x_1293)).name = (*(P1020)rt_nil_check(F->names_1286)).name;
(*(P1020)rt_nil_check(F->x_1293)).a = F->st_1287;
(*(P1020)rt_nil_check(F->x_1293)).b = F->init_1288;
(*(P1020)rt_nil_check(F->x_1293)).c = F->loc_1289;
(*(P1020)rt_nil_check(F->x_1293)).ival = rt_r_ichk(F->loc_kind_1290);
f_append_69(&F->head_1291, &F->tail_1292, F->x_1293);
F->names_1286 = (*(P1020)rt_nil_check(F->names_1286)).next;
}
F->result_ = F->head_1291;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_abbrev_decl_125(void) {
  struct f_abbrev_decl_125fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1294 = NULL;
F->x_1294 = f_nn_65((((rt_int)42LL)), f_cur_line_72());
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1294)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1294)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1294)).b = f_formal_params_134();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
(*(P1020)rt_nil_check(F->x_1294)).a = f_p_subtype_96();
F->result_ = F->x_1294;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_rep_spec_126(void) {
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

static P1020 f_rep_items_127(void) {
  struct f_rep_items_127fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1295 = NULL;
F->tail_1296 = NULL;
F->more_1297 = RT_R_EUNDEF;
F->more_1297 = 1;
while (rt_r_echk(F->more_1297)) {
f_append_69(&F->head_1295, &F->tail_1296, f_rep_item_130());
F->more_1297 = (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && f_rep_word_129(((rt_int)1LL)));
if (rt_r_echk(F->more_1297)) {
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
}
}
F->result_ = F->head_1295;
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
F->w_1298 = rt_str_copy((((P1013)rt_nil_check(f_text_at_82(F->k_128)))->all));
F->result_ = (((f_kind_at_80(F->k_128) == (((rt_int)1LL))) || (f_kind_at_80(F->k_128) == (((rt_int)2LL)))) && ((((((((rt_str_eq(F->w_1298, rt_str("SIZE", 4)) || rt_str_eq(F->w_1298, rt_str("ALIGN", 5))) || rt_str_eq(F->w_1298, rt_str("OFFSET", 6))) || rt_str_eq(F->w_1298, rt_str("RECORD", 6))) || rt_str_eq(F->w_1298, rt_str("UNION", 5))) || rt_str_eq(F->w_1298, rt_str("ARRAY", 5))) || rt_str_eq(F->w_1298, rt_str("ABSENT", 6))) || rt_str_eq(F->w_1298, rt_str("PTR", 3))) || rt_str_eq(F->w_1298, rt_str("ENUM", 4))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_rep_item_130(void) {
  struct f_rep_item_130fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1299 = NULL;
F->x_1299 = f_nn_65((((rt_int)64LL)), f_cur_line_72());
if ((!f_rep_word_129(((rt_int)0LL)))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected a representational item", 32); b_; }));
}
(*(P1020)rt_nil_check(F->x_1299)).name = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s;
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
if ((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1299)).name))->all), rt_str("SIZE", 4)) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1299)).name))->all), rt_str("OFFSET", 6)))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1020)rt_nil_check(F->x_1299)).a = f_expr_107();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
} else if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1299)).name))->all), rt_str("ALIGN", 5))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
(*(P1020)rt_nil_check(F->x_1299)).a = f_expr_107();
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }))) {
(*(P1020)rt_nil_check(F->x_1299)).b = (*(P1020)rt_nil_check(F->x_1299)).a;
(*(P1020)rt_nil_check(F->x_1299)).a = f_expr_107();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
} else if ((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1299)).name))->all), rt_str("RECORD", 6)) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1299)).name))->all), rt_str("UNION", 5)))) {
F->head_1300 = NULL;
F->tail_1301 = NULL;
F->more_1302 = RT_R_EUNDEF;
F->more_1302 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1302)) {
F->names_1303 = NULL;
F->names_1303 = f_id_list_95();
F->items_1304 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_rep_word_129(((rt_int)0LL))) {
F->items_1304 = f_rep_items_127();
}
while ((F->names_1303 != NULL)) {
F->cmp_1305 = NULL;
F->cmp_1305 = f_nn_65((((rt_int)63LL)), rt_r_ichk((*(P1020)rt_nil_check(F->names_1303)).line));
(*(P1020)rt_nil_check(F->cmp_1305)).name = (*(P1020)rt_nil_check(F->names_1303)).name;
(*(P1020)rt_nil_check(F->cmp_1305)).a = F->items_1304;
f_append_69(&F->head_1300, &F->tail_1301, F->cmp_1305);
F->names_1303 = (*(P1020)rt_nil_check(F->names_1303)).next;
}
F->more_1302 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
(*(P1020)rt_nil_check(F->x_1299)).c = F->head_1300;
} else if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1299)).name))->all), rt_str("ARRAY", 5))) {
F->head_1306 = NULL;
F->tail_1307 = NULL;
while ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; })))) {
f_append_69(&F->head_1306, &F->tail_1307, f_name_node_94());
if ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; })))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OF", 2); b_; }));
(*(P1020)rt_nil_check(F->x_1299)).d = F->head_1306;
if (f_rep_word_129(((rt_int)0LL))) {
(*(P1020)rt_nil_check(F->x_1299)).c = f_rep_items_127();
} else if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && f_rep_word_129(((rt_int)1LL)))) {
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1299)).c = f_rep_items_127();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
}
} else {
F->head_1308 = NULL;
F->tail_1309 = NULL;
F->dummy_1310 = RT_R_EUNDEF;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
f_append_69(&F->head_1308, &F->tail_1309, f_name_node_94());
F->dummy_1310 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
(*(P1020)rt_nil_check(F->x_1299)).d = F->head_1308;
}
F->result_ = F->x_1299;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_type_decl_131(void) {
  struct f_type_decl_131fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1311 = RT_R_IUNDEF;
F->line_1311 = f_cur_line_72();
F->name_1312 = NULL;
F->params_1313 = NULL;
F->x_1314 = NULL;
F->tts_1315 = NULL;
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->name_1312 = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
F->tts_1315 = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
F->params_1313 = f_formal_params_134();
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if ((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1013)rt_nil_check((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3)))) {
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->x_1314 = f_nn_65((((rt_int)44LL)), rt_r_ichk(F->line_1311));
(*(P1020)rt_nil_check(F->x_1314)).d = F->params_1313;
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1314)).b = f_formal_params_134();
}
} else {
F->x_1314 = f_nn_65((((rt_int)43LL)), rt_r_ichk(F->line_1311));
(*(P1020)rt_nil_check(F->x_1314)).b = F->params_1313;
}
(*(P1020)rt_nil_check(F->x_1314)).name = F->name_1312;
(*(P1020)rt_nil_check(F->x_1314)).e = F->tts_1315;
(*(P1020)rt_nil_check(F->x_1314)).a = f_p_subtype_96();
(*(P1020)rt_nil_check(F->x_1314)).c = f_rep_spec_126();
F->result_ = F->x_1314;
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

static P1020 f_formal_params_134(void) {
  struct f_formal_params_134fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1316 = NULL;
F->tail_1317 = NULL;
F->more_1318 = RT_R_EUNDEF;
F->more_1318 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
while (rt_r_echk(F->more_1318)) {
F->mode_1319 = RT_R_IUNDEF;
F->mode_1319 = (((rt_int)1LL));
F->names_1320 = NULL;
F->ntail_1321 = NULL;
F->st_1322 = NULL;
if ((((f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CONST", 5); b_; })) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("VAR", 3); b_; }))) || f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUT", 3); b_; })))) {
F->mode_1319 = f_mode_of_133(&(((P1013)rt_nil_check((*(P1015)rt_nil_check((((P1017)rt_nil_check(g_toks_1051))->all).p[(rt_index(rt_r_ichk(g_tpos_1053), (((P1017)rt_nil_check(g_toks_1051))->all).lo, (((P1017)rt_nil_check(g_toks_1051))->all).hi) - (((P1017)rt_nil_check(g_toks_1051))->all).lo)])).s))->all));
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
}
f_append_69(&F->names_1320, &F->ntail_1321, f_name_node_94());
while ((((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL)))) && (f_kind_at_80(((rt_int)2LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P1013)rt_nil_check(f_text_at_82(((rt_int)2LL))))->all), rt_str(",", 1)) || rt_str_eq((((P1013)rt_nil_check(f_text_at_82(((rt_int)2LL))))->all), rt_str(":", 1))))) {
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
f_append_69(&F->names_1320, &F->ntail_1321, f_name_node_94());
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
F->st_1322 = f_p_subtype_96();
while ((F->names_1320 != NULL)) {
F->p_1323 = NULL;
F->p_1323 = f_nn_65((((rt_int)52LL)), rt_r_ichk((*(P1020)rt_nil_check(F->names_1320)).line));
(*(P1020)rt_nil_check(F->p_1323)).name = (*(P1020)rt_nil_check(F->names_1320)).name;
(*(P1020)rt_nil_check(F->p_1323)).ival = rt_r_ichk(F->mode_1319);
(*(P1020)rt_nil_check(F->p_1323)).a = F->st_1322;
f_append_69(&F->head_1316, &F->tail_1317, F->p_1323);
F->names_1320 = (*(P1020)rt_nil_check(F->names_1320)).next;
}
F->more_1318 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1316;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_imports_list_136(P1020 owner_135) {
  struct f_imports_list_136fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->owner_135 = owner_135;
F->head_1324 = NULL;
F->tail_1325 = NULL;
F->more_1326 = RT_R_EUNDEF;
F->more_1326 = 1;
if ((!f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IMPORTS", 7); b_; })))) {
F->result_ = 0;
goto ret_;
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1020)rt_nil_check(F->owner_135)).flag = rt_add(rt_r_ichk((*(P1020)rt_nil_check(F->owner_135)).flag), ((rt_int)2LL));
F->result_ = 1;
goto ret_;
}
while (rt_r_echk(F->more_1326)) {
F->ro_1327 = RT_R_EUNDEF;
F->ro_1327 = f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }));
F->x_1328 = NULL;
F->x_1328 = f_name_node_94();
if (rt_r_echk(F->ro_1327)) {
(*(P1020)rt_nil_check(F->x_1328)).ival = ((rt_int)1LL);
}
f_append_69(&F->head_1324, &F->tail_1325, F->x_1328);
F->more_1326 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1020)rt_nil_check(F->owner_135)).d = F->head_1324;
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

static P1013 f_definable_name_139(void) {
  struct f_definable_name_139fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
if ((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(".", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)1LL))))) {
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)2LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1013)rt_nil_check((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_1053), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s))->all)); b_; }));
goto ret_;
} else if (((f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P1013)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("*", 1)))) {
F->r_1329 = NULL;
F->r_1329 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
while ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("*", 1); b_; }))) {
F->r_1329 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_1329))->all), rt_str("*", 1)); b_; }));
} else if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
F->r_1329 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_1329))->all), rt_str("..", 2)); b_; }));
} else if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }))) {
F->r_1329 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_1329))->all), rt_str(",", 1)); b_; }));
} else {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a subscripting selector is made of *, .. and ,", 46); b_; }));
}
}
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->result_ = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_1329))->all), rt_str(")", 1)); b_; }));
goto ret_;
}
if ((f_at_kind_78((((rt_int)1LL))) || (f_at_kind_78((((rt_int)3LL))) && f_is_definable_138(&(((P1013)rt_nil_check((*(P1015)rt_nil_check((((P1017)rt_nil_check(g_toks_1051))->all).p[(rt_index(rt_r_ichk(g_tpos_1053), (((P1017)rt_nil_check(g_toks_1051))->all).lo, (((P1017)rt_nil_check(g_toks_1051))->all).hi) - (((P1017)rt_nil_check(g_toks_1051))->all).lo)])).s))->all))))) {
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->result_ = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_sub(rt_r_ichk(g_tpos_1053), ((rt_int)1LL)), b_.lo, b_.hi) - b_.lo)]; }))).s;
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

static P1020 f_subprogram_decl_140(void) {
  struct f_subprogram_decl_140fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1330 = RT_R_IUNDEF;
F->line_1330 = f_cur_line_72();
F->x_1331 = NULL;
F->is_abn_1332 = RT_R_EUNDEF;
F->is_abn_1332 = f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABNORMAL", 8); b_; }));
F->is_func_1333 = RT_R_EUNDEF;
F->is_func_1333 = f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
F->dummy_1334 = RT_R_EUNDEF;
if (rt_r_echk(F->is_func_1333)) {
F->x_1331 = f_nn_65((((rt_int)46LL)), rt_r_ichk(F->line_1330));
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->x_1331 = f_nn_65((((rt_int)45LL)), rt_r_ichk(F->line_1330));
} else {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PROC or FUNC", 21); b_; }));
}
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
if (rt_r_echk(F->is_abn_1332)) {
(*(P1020)rt_nil_check(F->x_1331)).flag = ((rt_int)1LL);
}
(*(P1020)rt_nil_check(F->x_1331)).name = f_definable_name_139();
if ((((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1331)).name))->all), rt_str(">", 1)) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1331)).name))->all), rt_str("<=", 2))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1331)).name))->all), rt_str(">=", 2))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1331)).name))->all), rt_str("/=", 2)))) {
f_fail_23(rt_r_ichk(F->line_1330), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1331)).name))->all), rt_str(" is not a definable symbol", 26)); b_; }));
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1331)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1331)).a = f_formal_params_134();
}
if (rt_r_echk(F->is_func_1333)) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1020)rt_nil_check(F->x_1331)).b = f_p_subtype_96();
}
F->dummy_1334 = f_imports_list_136(F->x_1331);
if (((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).prags != NULL)) {
if (((*(P1020)rt_nil_check(F->x_1331)).prags == NULL)) {
(*(P1020)rt_nil_check(F->x_1331)).prags = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).prags;
} else {
(*(P1020)rt_nil_check(F->x_1331)).prags = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1331)).prags))->all), (((P1013)rt_nil_check((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).prags))->all)); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1020)rt_nil_check(F->x_1331)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
if (rt_r_echk(F->is_func_1333)) {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }));
} else {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }));
}
if ((!rt_str_eq((((P1013)rt_nil_check(f_definable_name_139()))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1331)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END name does not match ", 24), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1331)).name))->all)); b_; }));
}
F->result_ = F->x_1331;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_capsule_decl_141(void) {
  struct f_capsule_decl_141fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1335 = NULL;
F->x_1335 = f_nn_65((((rt_int)47LL)), f_cur_line_72());
F->dummy_1336 = RT_R_EUNDEF;
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1335)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1335)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1335)).b = f_formal_params_134();
}
F->dummy_1336 = f_imports_list_136(F->x_1335);
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXPORTS", 7); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1020)rt_nil_check(F->x_1335)).ival = ((rt_int)1LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; }))) {
(*(P1020)rt_nil_check(F->x_1335)).ival = ((rt_int)0LL);
} else {
F->head_1337 = NULL;
F->tail_1338 = NULL;
F->more_1339 = RT_R_EUNDEF;
F->more_1339 = 1;
while (rt_r_echk(F->more_1339)) {
F->n_1340 = NULL;
F->n_1340 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P1020)rt_nil_check(F->n_1340)).ival = ((rt_int)1LL);
}
(*(P1020)rt_nil_check(F->n_1340)).name = f_definable_name_139();
f_append_69(&F->head_1337, &F->tail_1338, F->n_1340);
F->more_1339 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1020)rt_nil_check(F->x_1335)).a = F->head_1337;
(*(P1020)rt_nil_check(F->x_1335)).ival = ((rt_int)2LL);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1020)rt_nil_check(F->x_1335)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; }));
(*(P1020)rt_nil_check(F->x_1335)).eline = f_cur_line_72();
if ((!rt_str_eq((((P1013)rt_nil_check(f_expect_id_93()))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1335)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END CAPSULE name does not match", 31); b_; }));
}
F->result_ = F->x_1335;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_formal_tt_142(void) {
  struct f_formal_tt_142fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1341 = NULL;
F->tail_1342 = NULL;
F->more_1343 = RT_R_EUNDEF;
F->more_1343 = 1;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }));
while (rt_r_echk(F->more_1343)) {
f_append_69(&F->head_1341, &F->tail_1342, f_name_node_94());
F->more_1343 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("]", 1); b_; }));
F->result_ = F->head_1341;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_generic_decl_143(void) {
  struct f_generic_decl_143fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1344 = NULL;
F->x_1344 = f_nn_65((((rt_int)51LL)), f_cur_line_72());
F->head_1345 = NULL;
F->tail_1346 = NULL;
F->more_1347 = RT_R_EUNDEF;
F->more_1347 = 1;
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
while (rt_r_echk(F->more_1347)) {
F->names_1348 = NULL;
F->names_1348 = f_id_list_95();
F->kind_1349 = RT_R_IUNDEF;
F->kind_1349 = ((rt_int)6LL);
F->st_1350 = NULL;
F->items_1351 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TYPE", 4); b_; }))) {
F->kind_1349 = ((rt_int)1LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUBTYPE", 7); b_; }))) {
F->kind_1349 = ((rt_int)2LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
F->kind_1349 = ((rt_int)3LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
F->kind_1349 = ((rt_int)4LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
F->kind_1349 = ((rt_int)5LL);
} else if (((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1013)rt_nil_check((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("STRING", 6))) && (!((f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P1013)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->kind_1349 = ((rt_int)7LL);
} else if (((f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1013)rt_nil_check((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("ENUM", 4))) && (!((f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL))) && rt_str_eq((((P1013)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str("[", 1)))))) {
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->kind_1349 = ((rt_int)8LL);
} else {
F->st_1350 = f_p_subtype_96();
}
if (((rt_r_ichk(F->kind_1349) <= ((rt_int)5LL)) && f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; })))) {
F->items_1351 = f_type_list_144();
}
if (((rt_r_ichk(F->kind_1349) == ((rt_int)4LL)) && f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; })))) {
F->st_1350 = f_p_subtype_96();
}
while ((F->names_1348 != NULL)) {
F->p_1352 = NULL;
F->p_1352 = f_nn_65((((rt_int)52LL)), rt_r_ichk((*(P1020)rt_nil_check(F->names_1348)).line));
(*(P1020)rt_nil_check(F->p_1352)).name = (*(P1020)rt_nil_check(F->names_1348)).name;
(*(P1020)rt_nil_check(F->p_1352)).ival = rt_r_ichk(F->kind_1349);
(*(P1020)rt_nil_check(F->p_1352)).a = F->st_1350;
(*(P1020)rt_nil_check(F->p_1352)).b = F->items_1351;
f_append_69(&F->head_1345, &F->tail_1346, F->p_1352);
F->names_1348 = (*(P1020)rt_nil_check(F->names_1348)).next;
}
F->more_1347 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEEDS", 5); b_; }))) {
F->nhead_1353 = NULL;
F->ntail_1354 = NULL;
F->more_1347 = 1;
while (rt_r_echk(F->more_1347)) {
F->it_1355 = NULL;
F->it_1355 = f_nn_65((((rt_int)52LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PROC", 4); b_; }))) {
(*(P1020)rt_nil_check(F->it_1355)).ival = ((rt_int)3LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FUNC", 4); b_; }))) {
(*(P1020)rt_nil_check(F->it_1355)).ival = ((rt_int)4LL);
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }))) {
(*(P1020)rt_nil_check(F->it_1355)).ival = ((rt_int)5LL);
}
(*(P1020)rt_nil_check(F->it_1355)).name = f_definable_name_139();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1020)rt_nil_check(F->it_1355)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1020)rt_nil_check(F->it_1355)).b = f_type_list_144();
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }))) {
(*(P1020)rt_nil_check(F->it_1355)).a = f_p_subtype_96();
}
f_append_69(&F->nhead_1353, &F->ntail_1354, F->it_1355);
F->more_1347 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1020)rt_nil_check(F->x_1344)).d = F->nhead_1353;
}
(*(P1020)rt_nil_check(F->x_1344)).a = F->head_1345;
(*(P1020)rt_nil_check(F->x_1344)).b = f_declaration_123();
(*(P1020)rt_nil_check(F->x_1344)).name = (*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->x_1344)).b)).name;
F->result_ = F->x_1344;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_type_list_144(void) {
  struct f_type_list_144fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1356 = NULL;
F->tail_1357 = NULL;
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; })))) {
F->more_1358 = RT_R_EUNDEF;
F->more_1358 = 1;
while (rt_r_echk(F->more_1358)) {
if (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && (rt_str_eq((((P1013)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(",", 1)) || rt_str_eq((((P1013)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(")", 1))))) {
F->n_1359 = NULL;
F->n_1359 = f_nn_65((((rt_int)80LL)), f_cur_line_72());
(*(P1020)rt_nil_check(F->n_1359)).name = f_expect_id_93();
f_append_69(&F->head_1356, &F->tail_1357, F->n_1359);
} else {
f_append_69(&F->head_1356, &F->tail_1357, f_p_subtype_96());
}
F->more_1358 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(")", 1); b_; }));
F->result_ = F->head_1356;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_task_decl_145(void) {
  struct f_task_decl_145fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1360 = NULL;
F->x_1360 = f_nn_65((((rt_int)50LL)), f_cur_line_72());
F->dummy_1361 = RT_R_EUNDEF;
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1360)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1360)).e = f_formal_tt_142();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1360)).a = f_formal_params_134();
}
F->dummy_1361 = f_imports_list_136(F->x_1360);
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
(*(P1020)rt_nil_check(F->x_1360)).c = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK", 4); b_; }));
if ((!rt_str_eq((((P1013)rt_nil_check(f_expect_id_93()))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1360)).name))->all)))) {
f_fail_23(f_cur_line_72(), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("END TASK name does not match ", 29), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1360)).name))->all)); b_; }));
}
F->result_ = F->x_1360;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_expose_decl_146(void) {
  struct f_expose_decl_146fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1362 = NULL;
F->x_1362 = f_nn_65((((rt_int)48LL)), f_cur_line_72());
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALL", 3); b_; }))) {
(*(P1020)rt_nil_check(F->x_1362)).ival = ((rt_int)1LL);
} else if ((!f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONE", 4); b_; })))) {
F->head_1363 = NULL;
F->tail_1364 = NULL;
F->more_1365 = RT_R_EUNDEF;
F->more_1365 = 1;
while (rt_r_echk(F->more_1365)) {
F->n_1366 = NULL;
F->n_1366 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READONLY", 8); b_; }))) {
(*(P1020)rt_nil_check(F->n_1366)).ival = ((rt_int)1LL);
}
(*(P1020)rt_nil_check(F->n_1366)).name = f_definable_name_139();
f_append_69(&F->head_1363, &F->tail_1364, F->n_1366);
F->more_1365 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1020)rt_nil_check(F->x_1362)).a = F->head_1363;
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FROM", 4); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }))) {
(*(P1020)rt_nil_check(F->x_1362)).flag = ((rt_int)1LL);
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXTERNAL", 8); b_; }))) {
(*(P1020)rt_nil_check(F->x_1362)).flag = rt_add(rt_r_ichk((*(P1020)rt_nil_check(F->x_1362)).flag), ((rt_int)2LL));
}
(*(P1020)rt_nil_check(F->x_1362)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1362)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1362)).b = f_actual_params_98();
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RENAMING", 8); b_; }))) {
F->head_1367 = NULL;
F->tail_1368 = NULL;
F->more_1369 = RT_R_EUNDEF;
F->more_1369 = 1;
while (rt_r_echk(F->more_1369)) {
F->n_1370 = NULL;
F->n_1370 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
F->tgt_1371 = NULL;
F->tgt_1371 = f_nn_65((((rt_int)7LL)), f_cur_line_72());
(*(P1020)rt_nil_check(F->n_1370)).name = f_definable_name_139();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TO", 2); b_; }));
(*(P1020)rt_nil_check(F->tgt_1371)).name = f_definable_name_139();
(*(P1020)rt_nil_check(F->n_1370)).a = F->tgt_1371;
f_append_69(&F->head_1367, &F->tail_1368, F->n_1370);
F->more_1369 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
(*(P1020)rt_nil_check(F->x_1362)).c = F->head_1367;
}
F->result_ = F->x_1362;
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

static P1020 f_statement_149(void) {
  struct f_statement_149fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->labels_1372 = NULL;
F->ltail_1373 = NULL;
F->match_1374 = NULL;
F->s_1375 = NULL;
while (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)3LL)))) && rt_str_eq((((P1013)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all), rt_str(":", 1)))) {
f_append_69(&F->labels_1372, &F->ltail_1373, f_name_node_94());
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
}
if (((f_at_kind_78((((rt_int)1LL))) && (f_kind_at_80(((rt_int)1LL)) == (((rt_int)2LL)))) && f_is_compound_kw_148(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1013)rt_nil_check(f_text_at_82(((rt_int)1LL))))->all); b_; })))) {
F->match_1374 = f_expect_id_93();
}
F->s_1375 = f_unlabeled_statement_150();
if ((F->match_1374 != NULL)) {
if ((((((((rt_r_ichk((*(P1020)rt_nil_check(F->s_1375)).kind) != (((rt_int)22LL))) && (rt_r_ichk((*(P1020)rt_nil_check(F->s_1375)).kind) != (((rt_int)23LL)))) && (rt_r_ichk((*(P1020)rt_nil_check(F->s_1375)).kind) != (((rt_int)24LL)))) && (rt_r_ichk((*(P1020)rt_nil_check(F->s_1375)).kind) != (((rt_int)25LL)))) && (rt_r_ichk((*(P1020)rt_nil_check(F->s_1375)).kind) != (((rt_int)26LL)))) && (rt_r_ichk((*(P1020)rt_nil_check(F->s_1375)).kind) != (((rt_int)35LL)))) && (rt_r_ichk((*(P1020)rt_nil_check(F->s_1375)).kind) != (((rt_int)36LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_1375)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a matching identifier must bracket a compound statement", 55); b_; }));
}
if ((!rt_str_eq((((P1013)rt_nil_check(f_expect_id_93()))->all), (((P1013)rt_nil_check(F->match_1374))->all)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_1375)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("matching identifier does not match ", 35), (((P1013)rt_nil_check(F->match_1374))->all)); b_; }));
}
(*(P1020)rt_nil_check(F->s_1375)).tag = F->match_1374;
}
(*(P1020)rt_nil_check(F->s_1375)).labels = F->labels_1372;
F->result_ = F->s_1375;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_unlabeled_statement_150(void) {
  struct f_unlabeled_statement_150fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->line_1376 = RT_R_IUNDEF;
F->line_1376 = f_cur_line_72();
F->x_1377 = NULL;
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
F->x_1377 = f_nn_65((((rt_int)25LL)), rt_r_ichk(F->line_1376));
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1377)).a = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
F->result_ = F->x_1377;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }))) {
F->result_ = f_guard_stmt_158();
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("EXIT", 4); b_; }))) {
F->x_1377 = f_nn_65((((rt_int)27LL)), rt_r_ichk(F->line_1376));
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1377)).name = f_expect_id_93();
F->result_ = F->x_1377;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN", 6); b_; }))) {
F->x_1377 = f_nn_65((((rt_int)28LL)), rt_r_ichk(F->line_1376));
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
if ((!f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; })))) {
(*(P1020)rt_nil_check(F->x_1377)).a = f_expr_107();
}
F->result_ = F->x_1377;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GOTO", 4); b_; }))) {
F->x_1377 = f_nn_65((((rt_int)29LL)), rt_r_ichk(F->line_1376));
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1377)).name = f_expect_id_93();
F->result_ = F->x_1377;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RAISE", 5); b_; }))) {
F->x_1377 = f_nn_65((((rt_int)30LL)), rt_r_ichk(F->line_1376));
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1377)).name = f_expect_id_93();
F->result_ = F->x_1377;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE", 7); b_; }))) {
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->result_ = f_nn_65((((rt_int)31LL)), rt_r_ichk(F->line_1376));
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CREATE", 6); b_; }))) {
F->x_1377 = f_nn_65((((rt_int)34LL)), rt_r_ichk(F->line_1376));
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1377)).name = f_expect_id_93();
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("[", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1377)).e = f_actual_tt_101();
}
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1377)).b = f_actual_params_98();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NAMED", 5); b_; }));
(*(P1020)rt_nil_check(F->x_1377)).a = f_postfix_117();
F->result_ = F->x_1377;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }))) {
F->head_1378 = NULL;
F->tail_1379 = NULL;
F->x_1377 = f_nn_65((((rt_int)35LL)), rt_r_ichk(F->line_1376));
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->invs_1380 = NULL;
F->itail_1381 = NULL;
F->more_1382 = RT_R_EUNDEF;
F->more_1382 = 1;
while (rt_r_echk(F->more_1382)) {
f_append_69(&F->invs_1380, &F->itail_1381, f_postfix_117());
F->more_1382 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_69(&F->head_1378, &F->tail_1379, f_arm_154(F->invs_1380, f_body_121(), rt_r_ichk(F->line_1376)));
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT", 4); b_; }));
(*(P1020)rt_nil_check(F->x_1377)).a = F->head_1378;
F->result_ = F->x_1377;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }))) {
F->x_1377 = f_nn_65((((rt_int)36LL)), rt_r_ichk(F->line_1376));
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1377)).a = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DO", 2); b_; }));
(*(P1020)rt_nil_check(F->x_1377)).b = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REGION", 6); b_; }));
F->result_ = F->x_1377;
goto ret_;
} else if (f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC", 5); b_; }))) {
F->x_1377 = f_nn_65((((rt_int)32LL)), rt_r_ichk(F->line_1376));
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1377)).a = f_postfix_117();
if ((!(f_at_kind_78((((rt_int)1LL))) && rt_str_eq((((P1013)rt_nil_check((*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).s))->all), rt_str("PTR", 3))))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("expected PTR", 12); b_; }));
}
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
if (f_at_op_76(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }))) {
(*(P1020)rt_nil_check(F->x_1377)).b = f_actual_params_98();
}
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
(*(P1020)rt_nil_check(F->x_1377)).c = f_expr_107();
}
F->result_ = F->x_1377;
goto ret_;
}
{
F->target_1383 = NULL;
F->target_1383 = f_postfix_117();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))) {
F->x_1377 = f_nn_65((((rt_int)20LL)), rt_r_ichk(F->line_1376));
(*(P1020)rt_nil_check(F->x_1377)).a = F->target_1383;
(*(P1020)rt_nil_check(F->x_1377)).b = f_expr_107();
} else {
F->x_1377 = f_nn_65((((rt_int)21LL)), rt_r_ichk(F->line_1376));
(*(P1020)rt_nil_check(F->x_1377)).a = F->target_1383;
}
}
F->result_ = F->x_1377;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_arm_154(P1020 cond_151, P1020 b_152, rt_int line_153) {
  struct f_arm_154fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->cond_151 = cond_151;
F->b_152 = b_152;
F->line_153 = line_153;
F->x_1384 = NULL;
F->x_1384 = f_nn_65((((rt_int)60LL)), F->line_153);
(*(P1020)rt_nil_check(F->x_1384)).a = F->cond_151;
(*(P1020)rt_nil_check(F->x_1384)).b = F->b_152;
F->result_ = F->x_1384;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_if_stmt_155(void) {
  struct f_if_stmt_155fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1385 = NULL;
F->x_1385 = f_nn_65((((rt_int)22LL)), f_cur_line_72());
F->head_1386 = NULL;
F->tail_1387 = NULL;
F->cond_1388 = NULL;
F->go_1389 = RT_R_EUNDEF;
F->go_1389 = 1;
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
F->cond_1388 = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_69(&F->head_1386, &F->tail_1387, f_arm_154(F->cond_1388, f_body_121(), rt_r_ichk((*(P1020)rt_nil_check(F->x_1385)).line)));
while (rt_r_echk(F->go_1389)) {
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSEIF", 6); b_; }))) {
F->cond_1388 = f_expr_107();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("THEN", 4); b_; }));
f_append_69(&F->head_1386, &F->tail_1387, f_arm_154(F->cond_1388, f_body_121(), rt_r_ichk((*(P1020)rt_nil_check(F->x_1385)).line)));
} else if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
(*(P1020)rt_nil_check(F->x_1385)).flag = ((rt_int)1LL);
(*(P1020)rt_nil_check(F->x_1385)).b = f_body_121();
} else {
F->go_1389 = 0;
}
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IF", 2); b_; }));
(*(P1020)rt_nil_check(F->x_1385)).a = F->head_1386;
F->result_ = F->x_1385;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_case_stmt_156(void) {
  struct f_case_stmt_156fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1390 = NULL;
F->x_1390 = f_nn_65((((rt_int)23LL)), f_cur_line_72());
F->head_1391 = NULL;
F->tail_1392 = NULL;
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1390)).a = f_expr_107();
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->labs_1393 = NULL;
F->ltail_1394 = NULL;
F->more_1395 = RT_R_EUNDEF;
F->more_1395 = 1;
while (rt_r_echk(F->more_1395)) {
F->l_1396 = NULL;
F->l_1396 = f_nn_65((((rt_int)61LL)), f_cur_line_72());
(*(P1020)rt_nil_check(F->l_1396)).a = f_expr_107();
if (f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("..", 2); b_; }))) {
(*(P1020)rt_nil_check(F->l_1396)).b = f_expr_107();
}
f_append_69(&F->labs_1393, &F->ltail_1394, F->l_1396);
F->more_1395 = f_accept_op_88(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(",", 1); b_; }));
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
f_append_69(&F->head_1391, &F->tail_1392, f_arm_154(F->labs_1393, f_body_121(), rt_r_ichk((*(P1020)rt_nil_check(F->x_1390)).line)));
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1020)rt_nil_check(F->x_1390)).flag = ((rt_int)1LL);
(*(P1020)rt_nil_check(F->x_1390)).c = f_body_121();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CASE", 4); b_; }));
(*(P1020)rt_nil_check(F->x_1390)).b = F->head_1391;
F->result_ = F->x_1390;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_repeat_stmt_157(void) {
  struct f_repeat_stmt_157fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1397 = NULL;
F->x_1397 = f_nn_65((((rt_int)24LL)), f_cur_line_72());
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOR", 3); b_; }))) {
(*(P1020)rt_nil_check(F->x_1397)).flag = ((rt_int)1LL);
(*(P1020)rt_nil_check(F->x_1397)).name = f_expect_id_93();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":", 1); b_; }));
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVERSE", 7); b_; }))) {
(*(P1020)rt_nil_check(F->x_1397)).ival = ((rt_int)1LL);
}
(*(P1020)rt_nil_check(F->x_1397)).a = f_p_subtype_96();
} else {
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHILE", 5); b_; }));
(*(P1020)rt_nil_check(F->x_1397)).a = f_expr_107();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
(*(P1020)rt_nil_check(F->x_1397)).b = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REPEAT", 6); b_; }));
F->result_ = F->x_1397;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_guard_stmt_158(void) {
  struct f_guard_stmt_158fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_1398 = NULL;
F->x_1398 = f_nn_65((((rt_int)26LL)), f_cur_line_72());
F->head_1399 = NULL;
F->tail_1400 = NULL;
g_tpos_1053 = rt_add(rt_r_ichk(g_tpos_1053), ((rt_int)1LL));
(*(P1020)rt_nil_check(F->x_1398)).a = f_body_121();
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("BY", 2); b_; }));
while (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WHEN", 4); b_; }))) {
F->h_1401 = NULL;
F->h_1401 = f_nn_65((((rt_int)62LL)), f_cur_line_72());
(*(P1020)rt_nil_check(F->h_1401)).a = f_id_list_95();
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1020)rt_nil_check(F->h_1401)).b = f_body_121();
f_append_69(&F->head_1399, &F->tail_1400, F->h_1401);
}
if (f_accept_kw_86(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ELSE", 4); b_; }))) {
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=>", 2); b_; }));
(*(P1020)rt_nil_check(F->x_1398)).flag = ((rt_int)1LL);
(*(P1020)rt_nil_check(F->x_1398)).c = f_body_121();
}
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("END", 3); b_; }));
f_expect_kw_90(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("GUARD", 5); b_; }));
(*(P1020)rt_nil_check(F->x_1398)).b = F->head_1399;
F->result_ = F->x_1398;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_program_159(void) {
  struct f_program_159fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1402 = NULL;
F->tail_1403 = NULL;
while ((!f_at_kind_78((((rt_int)0LL))))) {
if ((!f_at_kw_74(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CAPSULE", 7); b_; })))) {
f_perror_84(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a translation unit is a capsule declaration", 43); b_; }));
}
{
F->pr_1404 = NULL;
F->pr_1404 = (*(P1015)rt_nil_check(({ A1019 b_ = (((P1017)rt_nil_check(g_toks_1051))->all); b_.p[(rt_index(rt_r_ichk(g_tpos_1053), b_.lo, b_.hi) - b_.lo)]; }))).prags;
F->u_1405 = NULL;
F->u_1405 = f_capsule_decl_141();
(*(P1020)rt_nil_check(F->u_1405)).prags = F->pr_1404;
f_append_69(&F->head_1402, &F->tail_1403, F->u_1405);
}
f_expect_op_92(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(";", 1); b_; }));
}
F->result_ = F->head_1402;
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
F->h_1406 = RT_R_IUNDEF;
F->h_1406 = ((rt_int)0LL);
{ rt_int lo1408 = ((rt_int)1LL), hi1409 = ((rt_int)(((*F->s_160)).len));
for (rt_int it1410 = lo1408; it1410 <= hi1409; it1410++) {
F->i_1407 = it1410;
F->h_1406 = rt_mod(rt_add(rt_mul(rt_r_ichk(F->h_1406), ((rt_int)31LL)), ((rt_int)(rt_r_echk(rt_str_get((*F->s_160), F->i_1407))) + 1)), (((rt_int)4093LL)));
}
}
F->result_ = rt_r_ichk(F->h_1406);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1030 f_lookup_163(rstr *name_162) {
  struct f_lookup_163fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_162 = name_162;
F->y_1411 = NULL;
F->y_1411 = ({ A1036 b_ = (((P1034)rt_nil_check(g_table_1060))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
if ((g_genv_1061 != NULL)) {
while ((F->y_1411 != NULL)) {
if (((rt_r_ichk((*(P1030)rt_nil_check(F->y_1411)).depth) >= rt_r_ichk(g_gdepth_1093)) && rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_1411)).name))->all), (*F->name_162)))) {
F->result_ = F->y_1411;
goto ret_;
}
F->y_1411 = (*(P1030)rt_nil_check(F->y_1411)).chain;
}
F->y_1411 = ({ A1036 b_ = (((P1034)rt_nil_check(g_genv_1061))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1411 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_1411)).name))->all), (*F->name_162))) {
F->result_ = F->y_1411;
goto ret_;
}
F->y_1411 = (*(P1030)rt_nil_check(F->y_1411)).chain;
}
F->y_1411 = ({ A1036 b_ = (((P1034)rt_nil_check(g_table_1060))->all); b_.p[(rt_index(f_hash_161(&(*F->name_162)), b_.lo, b_.hi) - b_.lo)]; });
}
while ((F->y_1411 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_1411)).name))->all), (*F->name_162))) {
F->result_ = F->y_1411;
goto ret_;
}
F->y_1411 = (*(P1030)rt_nil_check(F->y_1411)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1030 f_lookup_decl_165(P1020 d_164) {
  struct f_lookup_decl_165fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_164 = d_164;
F->y_1412 = NULL;
F->y_1412 = ({ A1036 b_ = (((P1034)rt_nil_check(g_table_1060))->all); b_.p[(rt_index(f_hash_161(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_164)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while ((F->y_1412 != NULL)) {
if (((*(P1030)rt_nil_check(F->y_1412)).decl == F->d_164)) {
F->result_ = F->y_1412;
goto ret_;
}
F->y_1412 = (*(P1030)rt_nil_check(F->y_1412)).chain;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_define_168(P1030 y_166, rt_int line_167) {
  struct f_define_168fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_166 = y_166;
F->line_167 = line_167;
F->h_1413 = RT_R_IUNDEF;
F->h_1413 = f_hash_161(&(((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_166)).name))->all));
F->z_1414 = NULL;
F->z_1414 = ({ A1036 b_ = (((P1034)rt_nil_check(g_table_1060))->all); b_.p[(rt_index(rt_r_ichk(F->h_1413), b_.lo, b_.hi) - b_.lo)]; });
while ((F->z_1414 != NULL)) {
if ((((rt_r_ichk((*(P1030)rt_nil_check(F->z_1414)).depth) == rt_r_ichk(g_depth_1063)) && rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->z_1414)).name))->all), (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_166)).name))->all))) && (!(((f_overloadable_170(F->y_166) && f_overloadable_170(F->z_1414)) && (rt_r_ichk((*(P1030)rt_nil_check(F->z_1414)).kind) == rt_r_ichk((*(P1030)rt_nil_check(F->y_166)).kind))) && (!(f_same_signature_176((*(P1030)rt_nil_check(F->y_166)).params, (*(P1030)rt_nil_check(F->z_1414)).params) && f_same_tt_173((*(P1030)rt_nil_check(F->y_166)).decl, (*(P1030)rt_nil_check(F->z_1414)).decl))))))) {
f_fail_23(F->line_167, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_166)).name))->all), rt_str(" is already defined in this scope", 33)); b_; }));
}
F->z_1414 = (*(P1030)rt_nil_check(F->z_1414)).chain;
}
(*(P1030)rt_nil_check(F->y_166)).depth = rt_r_ichk(g_depth_1063);
(*(P1030)rt_nil_check(F->y_166)).chain = ({ A1036 b_ = (((P1034)rt_nil_check(g_table_1060))->all); b_.p[(rt_index(rt_r_ichk(F->h_1413), b_.lo, b_.hi) - b_.lo)]; });
(((P1034)rt_nil_check(g_table_1060))->all).p[(rt_index(rt_r_ichk(F->h_1413), (((P1034)rt_nil_check(g_table_1060))->all).lo, (((P1034)rt_nil_check(g_table_1060))->all).hi) - (((P1034)rt_nil_check(g_table_1060))->all).lo)] = F->y_166;
(*(P1030)rt_nil_check(F->y_166)).stack = g_scope_stack_1064;
g_scope_stack_1064 = F->y_166;
ret_:
  RT_FPOP();
  return;
}

static int f_overloadable_170(P1030 y_169) {
  struct f_overloadable_170fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_169 = y_169;
F->result_ = ((((rt_r_ichk((*(P1030)rt_nil_check(F->y_169)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_169)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_169)).kind) == (((rt_int)9LL)))) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_169)).kind) == (((rt_int)8LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_tt_173(P1020 a_171, P1020 b_172) {
  struct f_same_tt_173fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_171 = a_171;
F->b_172 = b_172;
F->x_1415 = NULL;
F->y_1416 = NULL;
if (((F->a_171 == NULL) || (F->b_172 == NULL))) {
F->result_ = 1;
goto ret_;
}
F->x_1415 = (*(P1020)rt_nil_check(F->a_171)).e;
F->y_1416 = (*(P1020)rt_nil_check(F->b_172)).e;
while (((F->x_1415 != NULL) && (F->y_1416 != NULL))) {
if ((!rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1415)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->y_1416)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1415 = (*(P1020)rt_nil_check(F->x_1415)).next;
F->y_1416 = (*(P1020)rt_nil_check(F->y_1416)).next;
}
F->result_ = ((F->x_1415 == NULL) && (F->y_1416 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_signature_176(P1032 a_174, P1032 b_175) {
  struct f_same_signature_176fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_174 = a_174;
F->b_175 = b_175;
F->x_1417 = NULL;
F->x_1417 = F->a_174;
F->y_1418 = NULL;
F->y_1418 = F->b_175;
while (((F->x_1417 != NULL) && (F->y_1418 != NULL))) {
if ((!f_same_221((*(P1032)rt_nil_check(F->x_1417)).t, (*(P1032)rt_nil_check(F->y_1418)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1417 = (*(P1032)rt_nil_check(F->x_1417)).next;
F->y_1418 = (*(P1032)rt_nil_check(F->y_1418)).next;
}
F->result_ = ((F->x_1417 == NULL) && (F->y_1418 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_open_scope_177(void) {
  struct f_open_scope_177fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_depth_1063 = rt_add(rt_r_ichk(g_depth_1063), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_close_scope_178(void) {
  struct f_close_scope_178fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
while (((g_scope_stack_1064 != NULL) && (rt_r_ichk((*(P1030)rt_nil_check(g_scope_stack_1064)).depth) == rt_r_ichk(g_depth_1063)))) {
(((P1034)rt_nil_check(g_table_1060))->all).p[(rt_index(f_hash_161(&(((P1013)rt_nil_check((*(P1030)rt_nil_check(g_scope_stack_1064)).name))->all)), (((P1034)rt_nil_check(g_table_1060))->all).lo, (((P1034)rt_nil_check(g_table_1060))->all).hi) - (((P1034)rt_nil_check(g_table_1060))->all).lo)] = (*(P1030)rt_nil_check(g_scope_stack_1064)).chain;
g_scope_stack_1064 = (*(P1030)rt_nil_check(g_scope_stack_1064)).stack;
}
g_depth_1063 = rt_sub(rt_r_ichk(g_depth_1063), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1030 f_new_sym_181(rt_int kind_179, P1013 name_180) {
  struct f_new_sym_181fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_179 = kind_179;
F->name_180 = name_180;
F->y_1419 = NULL;
{ R1031 *cell1420 = rt_alloc(sizeof(R1031));
(*cell1420).name = NULL;
(*cell1420).t = NULL;
(*cell1420).c = NULL;
(*cell1420).access = NULL;
(*cell1420).cname = NULL;
(*cell1420).st = NULL;
(*cell1420).decl = NULL;
(*cell1420).params = NULL;
(*cell1420).result = NULL;
(*cell1420).members = NULL;
(*cell1420).mnext = NULL;
(*cell1420).binds = NULL;
(*cell1420).insts = NULL;
(*cell1420).env = NULL;
(*cell1420).chain = NULL;
(*cell1420).stack = NULL;
(*cell1420).owner = NULL;
(*cell1420).gctx = NULL;
(*cell1420).mv = NULL;
(*cell1420).reqs = NULL;
(*cell1420).home = NULL;
(*cell1420).capn = NULL;
(*cell1420).tbinds = NULL;
(*cell1420).loc = NULL;
(*cell1420).reqs_sym = NULL;
F->y_1419 = cell1420;
}
(*(P1030)rt_nil_check(F->y_1419)).kind = F->kind_179;
(*(P1030)rt_nil_check(F->y_1419)).name = F->name_180;
F->result_ = F->y_1419;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_new_typ_183(rt_int kind_182) {
  struct f_new_typ_183fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_182 = kind_182;
F->t_1421 = NULL;
{ R1027 *cell1422 = rt_alloc(sizeof(R1027));
(*cell1422).name = NULL;
(*cell1422).lits = NULL;
(*cell1422).elem = NULL;
(*cell1422).idx = NULL;
(*cell1422).idx2 = NULL;
(*cell1422).elemcons = NULL;
(*cell1422).elemst = NULL;
(*cell1422).under = NULL;
(*cell1422).tparams = NULL;
(*cell1422).ocap = NULL;
(*cell1422).fields = NULL;
(*cell1422).target = NULL;
(*cell1422).decl = NULL;
(*cell1422).cname = NULL;
(*cell1422).initp = NULL;
(*cell1422).finalp = NULL;
(*cell1422).tpsyms = NULL;
(*cell1422).gen = NULL;
(*cell1422).gbinds = NULL;
(*cell1422).next = NULL;
(*cell1422).idxs = NULL;
(*cell1422).assignp = NULL;
(*cell1422).eqp = NULL;
(*cell1422).ltp = NULL;
(*cell1422).repn = NULL;
F->t_1421 = cell1422;
}
(*(P1026)rt_nil_check(F->t_1421)).kind = F->kind_182;
F->result_ = F->t_1421;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1022 f_new_cons_184(void) {
  struct f_new_cons_184fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_1423 = NULL;
{ R1023 *cell1424 = rt_alloc(sizeof(R1023));
(*cell1424).lo = NULL;
(*cell1424).hi = NULL;
(*cell1424).lo2 = NULL;
(*cell1424).hi2 = NULL;
(*cell1424).slen = NULL;
(*cell1424).args = NULL;
(*cell1424).prec = NULL;
(*cell1424).bnds = NULL;
F->c_1423 = cell1424;
}
F->result_ = F->c_1423;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_scalar_kind_186(P1026 t_185) {
  struct f_scalar_kind_186fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_185 = t_185;
F->result_ = ((F->t_185 != NULL) && (((rt_r_ichk((*(P1026)rt_nil_check(F->t_185)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_185)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_185)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_bound_ctype_188(P1026 t_187) {
  struct f_bound_ctype_188fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_187 = t_187;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_187)).kind) == (((rt_int)3LL)))) {
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

static rstr f_cbound_191(P1022 c_189, rstr *b_190) {
  struct f_cbound_191fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_189 = c_189;
F->b_190 = b_190;
F->p_1425 = NULL;
F->p_1425 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if (((!rt_r_echk((*(P1022)rt_nil_check(F->c_189)).dyn)) || (rt_r_ichk((*(P1022)rt_nil_check(F->c_189)).lvl) <= ((rt_int)0LL)))) {
F->result_ = (*F->b_190);
goto ret_;
}
{ rt_int lo1427 = ((rt_int)1LL), hi1428 = rt_sub(rt_r_ichk(g_cur_level_1077), rt_r_ichk((*(P1022)rt_nil_check(F->c_189)).lvl));
for (rt_int it1429 = lo1427; it1429 <= hi1428; it1429++) {
F->i_1426 = it1429;
F->p_1425 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->p_1425))->all), rt_str("->up", 4)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->p_1425))->all), rt_str("->", 2)), (*F->b_190));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_clo_193(P1022 c_192) {
  struct f_clo_193fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_192 = c_192;
F->result_ = f_cbound_191(F->c_192, &(((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_192)).lo))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_chi_195(P1022 c_194) {
  struct f_chi_195fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_194 = c_194;
F->result_ = f_cbound_191(F->c_194, &(((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_194)).hi))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_sub_lo_198(P1026 t_196, P1022 c_197) {
  struct f_sub_lo_198fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_196 = t_196;
F->c_197 = c_197;
if (((F->c_197 != NULL) && ((*(P1022)rt_nil_check(F->c_197)).lo != NULL))) {
F->result_ = f_clo_193(F->c_197);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_196)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("(-RT_FMAX)", 10);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_196)).kind) == (((rt_int)4LL)))) {
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

static rstr f_sub_hi_201(P1026 t_199, P1022 c_200) {
  struct f_sub_hi_201fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_199 = t_199;
F->c_200 = c_200;
if (((F->c_200 != NULL) && ((*(P1022)rt_nil_check(F->c_200)).lo != NULL))) {
F->result_ = f_chi_195(F->c_200);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_199)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str("RT_FMAX", 7);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_199)).kind) == (((rt_int)4LL)))) {
F->result_ = f_itos_7(rt_sub(f_list_len_71((*(P1026)rt_nil_check(F->t_199)).lits), ((rt_int)1LL)));
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
if ((!rt_r_echk(g_in_func_1076))) {
F->g_1430 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), (*F->name_202)), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1070, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), (*F->ct_203)), rt_str(" ", 1)), F->g_1430), rt_str(";", 1)); b_; }));
g_st_field_1082 = f_mk_3(&F->g_1430);
F->result_ = F->g_1430;
goto ret_;
}
{
F->f_1431 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_202), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->ct_203)), rt_str(" ", 1)), F->f_1431), rt_str(";", 1)); b_; }));
g_st_field_1082 = f_mk_3(&F->f_1431);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1431);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1022 f_copy_cons_206(P1022 c_205) {
  struct f_copy_cons_206fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_205 = c_205;
F->r_1432 = NULL;
{ R1023 *cell1433 = rt_alloc(sizeof(R1023));
(*cell1433).lo = NULL;
(*cell1433).hi = NULL;
(*cell1433).lo2 = NULL;
(*cell1433).hi2 = NULL;
(*cell1433).slen = NULL;
(*cell1433).args = NULL;
(*cell1433).prec = NULL;
(*cell1433).bnds = NULL;
F->r_1432 = cell1433;
}
(*(P1022)rt_nil_check(F->r_1432)).lo = (*(P1022)rt_nil_check(F->c_205)).lo;
(*(P1022)rt_nil_check(F->r_1432)).hi = (*(P1022)rt_nil_check(F->c_205)).hi;
(*(P1022)rt_nil_check(F->r_1432)).lo2 = (*(P1022)rt_nil_check(F->c_205)).lo2;
(*(P1022)rt_nil_check(F->r_1432)).hi2 = (*(P1022)rt_nil_check(F->c_205)).hi2;
(*(P1022)rt_nil_check(F->r_1432)).slen = (*(P1022)rt_nil_check(F->c_205)).slen;
(*(P1022)rt_nil_check(F->r_1432)).mlo = rt_r_ichk((*(P1022)rt_nil_check(F->c_205)).mlo);
(*(P1022)rt_nil_check(F->r_1432)).mhi = rt_r_ichk((*(P1022)rt_nil_check(F->c_205)).mhi);
(*(P1022)rt_nil_check(F->r_1432)).hasm = rt_r_echk((*(P1022)rt_nil_check(F->c_205)).hasm);
(*(P1022)rt_nil_check(F->r_1432)).args = (*(P1022)rt_nil_check(F->c_205)).args;
(*(P1022)rt_nil_check(F->r_1432)).dyn = rt_r_echk((*(P1022)rt_nil_check(F->c_205)).dyn);
(*(P1022)rt_nil_check(F->r_1432)).lvl = rt_r_ichk((*(P1022)rt_nil_check(F->c_205)).lvl);
(*(P1022)rt_nil_check(F->r_1432)).prec = (*(P1022)rt_nil_check(F->c_205)).prec;
F->result_ = F->r_1432;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1022 f_freeze_209(P1022 c_207, P1026 t_208) {
  struct f_freeze_209fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_207 = c_207;
F->t_208 = t_208;
F->r_1434 = NULL;
F->saved_field_1435 = NULL;
F->saved_field_1435 = g_st_field_1082;
if ((((((F->c_207 == NULL) || ((*(P1022)rt_nil_check(F->c_207)).lo == NULL)) || rt_r_echk((*(P1022)rt_nil_check(F->c_207)).hasm)) || rt_r_echk((*(P1022)rt_nil_check(F->c_207)).dyn)) || (!f_scalar_kind_186(F->t_208)))) {
F->result_ = F->c_207;
goto ret_;
}
F->r_1434 = f_copy_cons_206(F->c_207);
{
F->ct_1436 = rt_str_copy(f_bound_ctype_188(F->t_208));
F->la_1437 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("blo", 3); b_; }), &F->ct_1436));
F->lf_1438 = rt_str_copy((((P1013)rt_nil_check(g_st_field_1082))->all));
F->ha_1439 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("bhi", 3); b_; }), &F->ct_1436));
F->hf_1440 = rt_str_copy((((P1013)rt_nil_check(g_st_field_1082))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->la_1437, rt_str(" = ", 3)), f_clo_193(F->c_207)), rt_str("; ", 2)), F->ha_1439), rt_str(" = ", 3)), f_chi_195(F->c_207)), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_1076)) {
(*(P1022)rt_nil_check(F->r_1434)).lo = f_mk_3(&F->lf_1438);
(*(P1022)rt_nil_check(F->r_1434)).hi = f_mk_3(&F->hf_1440);
(*(P1022)rt_nil_check(F->r_1434)).dyn = 1;
(*(P1022)rt_nil_check(F->r_1434)).lvl = rt_r_ichk(g_cur_level_1077);
} else {
(*(P1022)rt_nil_check(F->r_1434)).lo = f_mk_3(&F->la_1437);
(*(P1022)rt_nil_check(F->r_1434)).hi = f_mk_3(&F->ha_1439);
(*(P1022)rt_nil_check(F->r_1434)).dyn = 0;
}
}
g_st_field_1082 = F->saved_field_1435;
F->result_ = F->r_1434;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_checked_213(P1026 t_210, P1022 c_211, rstr *v_212) {
  struct f_checked_213fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_210 = t_210;
F->c_211 = c_211;
F->v_212 = v_212;
if ((((F->c_211 == NULL) || (!f_scalar_kind_186(F->t_210))) || f_suppressed_506(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_RANGE", 7); b_; })))) {
F->result_ = (*F->v_212);
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_210)).kind) != (((rt_int)3LL))) && rt_r_echk((*(P1022)rt_nil_check(F->c_211)).hasm))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), (*F->v_212)), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P1022)rt_nil_check(F->c_211)).mlo))), rt_str(", ", 2)), f_itos_7(rt_r_ichk((*(P1022)rt_nil_check(F->c_211)).mhi))), rt_str(")", 1));
goto ret_;
} else if (((*(P1022)rt_nil_check(F->c_211)).lo == NULL)) {
F->result_ = (*F->v_212);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_210)).kind) == (((rt_int)3LL)))) {
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

static int f_same_lits_216(P1020 a_214, P1020 b_215) {
  struct f_same_lits_216fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_214 = a_214;
F->b_215 = b_215;
F->x_1441 = NULL;
F->x_1441 = F->a_214;
F->y_1442 = NULL;
F->y_1442 = F->b_215;
while (((F->x_1441 != NULL) && (F->y_1442 != NULL))) {
if ((!rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_1441)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->y_1442)).name))->all)))) {
F->result_ = 0;
goto ret_;
}
F->x_1441 = (*(P1020)rt_nil_check(F->x_1441)).next;
F->y_1442 = (*(P1020)rt_nil_check(F->y_1442)).next;
}
F->result_ = ((F->x_1441 == NULL) && (F->y_1442 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_str_elem_218(P1026 t_217) {
  struct f_str_elem_218fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_217 = t_217;
if (((*(P1026)rt_nil_check(F->t_217)).elem == NULL)) {
F->result_ = g_ty_ascii_1107;
goto ret_;
}
F->result_ = (*(P1026)rt_nil_check(F->t_217)).elem;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_221(P1026 a_219, P1026 b_220) {
  struct f_same_221fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_219 = a_219;
F->b_220 = b_220;
if ((F->a_219 == F->b_220)) {
F->result_ = 1;
goto ret_;
}
if ((((F->a_219 == NULL) || (F->b_220 == NULL)) || (rt_r_ichk((*(P1026)rt_nil_check(F->a_219)).kind) != rt_r_ichk((*(P1026)rt_nil_check(F->b_220)).kind)))) {
F->result_ = 0;
goto ret_;
}
if (((rt_r_ichk((*(P1026)rt_nil_check(F->a_219)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->a_219)).kind) == (((rt_int)10LL))))) {
F->result_ = f_same_221(f_str_elem_218(F->a_219), f_str_elem_218(F->b_220));
goto ret_;
}
if (((((rt_r_ichk((*(P1026)rt_nil_check(F->a_219)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->a_219)).kind) == (((rt_int)2LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->a_219)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->a_219)).kind) == (((rt_int)9LL))))) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->a_219)).kind) == (((rt_int)4LL)))) {
F->result_ = f_same_lits_216((*(P1026)rt_nil_check(F->a_219)).lits, (*(P1026)rt_nil_check(F->b_220)).lits);
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->a_219)).kind) == (((rt_int)6LL)))) {
F->x_1443 = NULL;
F->x_1443 = (*(P1026)rt_nil_check(F->a_219)).idxs;
F->y_1444 = NULL;
F->y_1444 = (*(P1026)rt_nil_check(F->b_220)).idxs;
while (((F->x_1443 != NULL) && (F->y_1444 != NULL))) {
if ((!f_same_221((*(P1041)rt_nil_check(F->x_1443)).t, (*(P1041)rt_nil_check(F->y_1444)).t))) {
F->result_ = 0;
goto ret_;
}
F->x_1443 = (*(P1041)rt_nil_check(F->x_1443)).next;
F->y_1444 = (*(P1041)rt_nil_check(F->y_1444)).next;
}
F->result_ = (((F->x_1443 == NULL) && (F->y_1444 == NULL)) && f_same_221((*(P1026)rt_nil_check(F->a_219)).elem, (*(P1026)rt_nil_check(F->b_220)).elem));
goto ret_;
}
if (((rt_r_ichk((*(P1026)rt_nil_check(F->a_219)).kind) == (((rt_int)16LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->a_219)).kind) == (((rt_int)12LL))))) {
F->result_ = f_same_221((*(P1026)rt_nil_check(F->a_219)).elem, (*(P1026)rt_nil_check(F->b_220)).elem);
goto ret_;
}
if (((rt_r_ichk((*(P1026)rt_nil_check(F->a_219)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->a_219)).kind) == (((rt_int)17LL))))) {
F->f_1445 = NULL;
F->f_1445 = (*(P1026)rt_nil_check(F->a_219)).fields;
F->g_1446 = NULL;
F->g_1446 = (*(P1026)rt_nil_check(F->b_220)).fields;
while (((F->f_1445 != NULL) && (F->g_1446 != NULL))) {
if (((!rt_str_eq((((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_1445)).name))->all), (((P1013)rt_nil_check((*(P1028)rt_nil_check(F->g_1446)).name))->all))) || (!f_same_221((*(P1028)rt_nil_check(F->f_1445)).t, (*(P1028)rt_nil_check(F->g_1446)).t)))) {
F->result_ = 0;
goto ret_;
}
F->f_1445 = (*(P1028)rt_nil_check(F->f_1445)).next;
F->g_1446 = (*(P1028)rt_nil_check(F->g_1446)).next;
}
F->result_ = ((F->f_1445 == NULL) && (F->g_1446 == NULL));
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_base_of_223(P1026 t_222) {
  struct f_base_of_223fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_222 = t_222;
if ((((F->t_222 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->t_222)).kind) == (((rt_int)15LL)))) && ((*(P1026)rt_nil_check(F->t_222)).tparams == NULL))) {
F->result_ = f_base_of_223((*(P1026)rt_nil_check(F->t_222)).under);
goto ret_;
}
F->result_ = F->t_222;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1022 f_base_cons_226(P1026 t_224, P1022 c_225) {
  struct f_base_cons_226fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_224 = t_224;
F->c_225 = c_225;
if (((((F->t_224 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->t_224)).kind) == (((rt_int)15LL)))) && ((*(P1026)rt_nil_check(F->t_224)).tparams == NULL)) && ((*(P1026)rt_nil_check(F->t_224)).elemcons != NULL))) {
F->result_ = f_base_cons_226((*(P1026)rt_nil_check(F->t_224)).under, (*(P1026)rt_nil_check(F->t_224)).elemcons);
goto ret_;
}
F->result_ = F->c_225;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_name_228(P1026 t_227) {
  struct f_kind_name_228fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_227 = t_227;
{ rt_int sel1447 = rt_r_ichk((*(P1026)rt_nil_check(F->t_227)).kind);
if (0 || (sel1447 == (((rt_int)1LL)))) {
F->result_ = rt_str("INT", 3);
goto ret_;
} else if (0 || (sel1447 == (((rt_int)2LL)))) {
F->result_ = rt_str("BOOL", 4);
goto ret_;
} else if (0 || (sel1447 == (((rt_int)3LL)))) {
F->result_ = rt_str("FLOAT", 5);
goto ret_;
} else if (0 || (sel1447 == (((rt_int)4LL)))) {
F->result_ = rt_str("ENUM", 4);
goto ret_;
} else if (0 || (sel1447 == (((rt_int)5LL)))) {
F->result_ = rt_str("STRING", 6);
goto ret_;
} else if (0 || (sel1447 == (((rt_int)6LL)))) {
F->result_ = rt_str("ARRAY", 5);
goto ret_;
} else if (0 || (sel1447 == (((rt_int)7LL)))) {
F->result_ = rt_str("RECORD", 6);
goto ret_;
} else if (0 || (sel1447 == (((rt_int)17LL)))) {
F->result_ = rt_str("UNION", 5);
goto ret_;
} else if (0 || (sel1447 == (((rt_int)8LL)))) {
F->result_ = rt_str_cat(rt_str("indirect type ", 14), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_227)).name))->all));
goto ret_;
} else if (0 || (sel1447 == (((rt_int)11LL)))) {
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

static void f_check_type_232(P1026 got_229, P1026 want_230, rt_int line_231) {
  struct f_check_type_232fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->got_229 = got_229;
F->want_230 = want_230;
F->line_231 = line_231;
if ((F->want_230 == NULL)) {
goto ret_;
}
if (((rt_r_ichk((*(P1026)rt_nil_check(F->got_229)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->want_230)).kind) == (((rt_int)8LL))))) {
goto ret_;
}
if ((!f_same_221(F->got_229, F->want_230))) {
f_fail_23(F->line_231, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("type mismatch: ", 15), f_kind_name_228(F->got_229)), rt_str(" where ", 7)), f_kind_name_228(F->want_230)), rt_str(" is required", 12)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_ctype_234(P1026 t_233) {
  struct f_ctype_234fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_233 = t_233;
{ rt_int sel1448 = rt_r_ichk((*(P1026)rt_nil_check(F->t_233)).kind);
if (0 || (sel1448 == (((rt_int)1LL)))) {
F->result_ = rt_str("rt_int", 6);
goto ret_;
} else if (0 || (sel1448 == (((rt_int)2LL))) || (sel1448 == (((rt_int)4LL)))) {
F->result_ = rt_str("int", 3);
goto ret_;
} else if (0 || (sel1448 == (((rt_int)10LL)))) {
F->result_ = rt_str("rt_r_file *", 11);
goto ret_;
} else if (0 || (sel1448 == (((rt_int)3LL)))) {
F->result_ = rt_str("double", 6);
goto ret_;
} else if (0 || (sel1448 == (((rt_int)5LL)))) {
F->result_ = rt_str("rstr", 4);
goto ret_;
} else if (0 || (sel1448 == (((rt_int)9LL)))) {
F->result_ = rt_str("void", 4);
goto ret_;
} else if (0 || (sel1448 == (((rt_int)12LL)))) {
F->result_ = rt_str("rt_mbox *", 9);
goto ret_;
} else if (0 || (sel1448 == (((rt_int)13LL)))) {
F->result_ = rt_str("rt_lock", 7);
goto ret_;
} else if (0 || (sel1448 == (((rt_int)14LL)))) {
F->result_ = rt_str("rt_act *", 8);
goto ret_;
} else if (0 || (sel1448 == (((rt_int)16LL)))) {
F->result_ = rt_str("yset", 4);
goto ret_;
} else {
if (((*(P1026)rt_nil_check(F->t_233)).cname == NULL)) {
f_declare_ctype_240(F->t_233);
} else if (((((rt_r_ichk((*(P1026)rt_nil_check(F->t_233)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_233)).kind) == (((rt_int)17LL)))) && rt_r_echk((*(P1026)rt_nil_check(F->t_233)).forward)) && (!rt_r_echk((*(P1026)rt_nil_check(F->t_233)).defined)))) {
(*(P1026)rt_nil_check(F->t_233)).defined = 1;
f_put_27(g_out_types_1067, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_233)).cname))->all)), rt_str(" ", 1)), f_struct_body_236(F->t_233)), rt_str(";", 1)); b_; }));
}
F->result_ = (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_233)).cname))->all);
goto ret_;
}
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_struct_body_236(P1026 t_235) {
  struct f_struct_body_236fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_235 = t_235;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_235)).kind) == (((rt_int)17LL)))) {
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

static rstr f_field_decls_238(P1026 t_237) {
  struct f_field_decls_238fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_237 = t_237;
F->f_1449 = NULL;
F->f_1449 = (*(P1026)rt_nil_check(F->t_237)).fields;
F->s_1450 = NULL;
F->s_1450 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->f_1449 != NULL)) {
F->s_1450 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->s_1450))->all), f_ctype_234((*(P1028)rt_nil_check(F->f_1449)).t)), rt_str(" ", 1)), f_field_c_17(&(((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_1449)).name))->all))), rt_str("; ", 2)); b_; }));
F->f_1449 = (*(P1028)rt_nil_check(F->f_1449)).next;
}
F->result_ = (((P1013)rt_nil_check(F->s_1450))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_declare_ctype_240(P1026 t_239) {
  struct f_declare_ctype_240fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_239 = t_239;
F->u_1451 = NULL;
F->u_1451 = g_all_types_1065;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_239)).kind) == (((rt_int)8LL))) && ((*(P1026)rt_nil_check(F->t_239)).target == NULL))) {
f_finish_ptr_469(F->t_239);
if (((*(P1026)rt_nil_check(F->t_239)).cname != NULL)) {
goto ret_;
}
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_239)).kind) != (((rt_int)8LL)))) {
while ((F->u_1451 != NULL)) {
if (((rt_r_ichk((*(P1026)rt_nil_check(F->u_1451)).kind) == rt_r_ichk((*(P1026)rt_nil_check(F->t_239)).kind)) && f_same_221(F->u_1451, F->t_239))) {
(*(P1026)rt_nil_check(F->t_239)).cname = (*(P1026)rt_nil_check(F->u_1451)).cname;
goto ret_;
}
F->u_1451 = (*(P1026)rt_nil_check(F->u_1451)).next;
}
}
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_239)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->t_239)).tparams == NULL))) {
(*(P1026)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_234((*(P1026)rt_nil_check(F->t_239)).under); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_239)).kind) == (((rt_int)6LL)))) {
(*(P1026)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("A", 1); b_; })); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_239)).kind) == (((rt_int)15LL)))) {
(*(P1026)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("N", 1); b_; })); b_; }));
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_239)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_239)).kind) == (((rt_int)17LL))))) {
(*(P1026)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
} else {
(*(P1026)rt_nil_check(F->t_239)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("P", 1); b_; })); b_; }));
}
(*(P1026)rt_nil_check(F->t_239)).next = g_all_types_1065;
g_all_types_1065 = F->t_239;
if ((((rt_r_ichk((*(P1026)rt_nil_check(F->t_239)).kind) == (((rt_int)8LL))) && ((*(P1026)rt_nil_check(F->t_239)).decl != NULL)) && ((*(P1020)rt_nil_check((*(P1026)rt_nil_check(F->t_239)).decl)).b != NULL))) {
F->p_1452 = NULL;
F->p_1452 = (*(P1020)rt_nil_check((*(P1026)rt_nil_check(F->t_239)).decl)).b;
F->fs_1453 = NULL;
F->fs_1453 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->sn_1454 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("Pc", 2); b_; })));
while ((F->p_1452 != NULL)) {
F->pc_1455 = NULL;
F->fs_1453 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->fs_1453))->all), rt_str(" ", 1)), f_ctype_234(f_resolve_subtype_268((*(P1020)rt_nil_check(F->p_1452)).a, &F->pc_1455))), rt_str(" p_", 3)), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1452)).name))->all))), rt_str(";", 1)); b_; }));
F->p_1452 = (*(P1020)rt_nil_check(F->p_1452)).next;
}
f_put_27(g_out_types_1067, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), F->sn_1454), rt_str(" *", 2)), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_helpers_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), F->sn_1454), rt_str(" {", 2)), (((P1013)rt_nil_check(F->fs_1453))->all)), rt_str(" ", 1)), f_ctype_234((*(P1026)rt_nil_check(F->t_239)).target)), rt_str(" all; };", 8)); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_239)).kind) == (((rt_int)8LL)))) {
F->target_1456 = NULL;
F->target_1456 = (*(P1026)rt_nil_check(F->t_239)).target;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->target_1456)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->target_1456)).kind) == (((rt_int)17LL))))) {
if (((*(P1026)rt_nil_check(F->target_1456)).cname == NULL)) {
(*(P1026)rt_nil_check(F->target_1456)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("R", 1); b_; })); b_; }));
(*(P1026)rt_nil_check(F->target_1456)).next = g_all_types_1065;
g_all_types_1065 = F->target_1456;
f_put_27(g_out_types_1067, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->target_1456)).cname))->all)), rt_str(" ", 1)), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->target_1456)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P1026)rt_nil_check(F->target_1456)).forward = 1;
}
f_put_27(g_out_types_1067, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->target_1456)).cname))->all)), rt_str(" *", 2)), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
} else {
f_put_27(g_out_types_1067, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef ", 8), f_ctype_234(F->target_1456)), rt_str(" *", 2)), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
}
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_239)).kind) == (((rt_int)6LL)))) {
f_put_27(g_out_types_1067, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_1067, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_239)).cname))->all)), rt_str(" { rt_int lo, hi, lo2, hi2; ", 28)), f_ctype_234((*(P1026)rt_nil_check(F->t_239)).elem)), rt_str(" *p;", 4)), f_more_dims_246(F->t_239)), rt_str(" };", 3)); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_239)).kind) == (((rt_int)15LL)))) {
F->p_1457 = NULL;
F->p_1457 = (*(P1026)rt_nil_check(F->t_239)).tparams;
F->fs_1458 = NULL;
F->fs_1458 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
while ((F->p_1457 != NULL)) {
F->fs_1458 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->fs_1458))->all), f_ctype_234(f_tparam_type_352(F->t_239, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1457)).name))->all)))), rt_str(" p_", 3)), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1457)).name))->all))), rt_str("; ", 2)); b_; }));
F->p_1457 = (*(P1020)rt_nil_check(F->p_1457)).next;
}
f_put_27(g_out_types_1067, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_types_1067, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_239)).cname))->all)), rt_str(" {", 2)), (((P1013)rt_nil_check(F->fs_1458))->all)), f_ctype_234((*(P1026)rt_nil_check(F->t_239)).under)), rt_str(" all; };", 8)); b_; }));
} else {
f_put_27(g_out_types_1067, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("typedef struct ", 15), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_239)).cname))->all)), rt_str(";", 1)); b_; }));
(*(P1026)rt_nil_check(F->t_239)).defined = 1;
f_put_27(g_out_types_1067, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_239)).cname))->all)), rt_str(" ", 1)), f_struct_body_236(F->t_239)), rt_str(";", 1)); b_; }));
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

static rstr f_more_dims_246(P1026 t_245) {
  struct f_more_dims_246fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_245 = t_245;
F->r_1459 = NULL;
F->r_1459 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
{ rt_int lo1461 = ((rt_int)3LL), hi1462 = rt_r_ichk((*(P1026)rt_nil_check(F->t_245)).ndim);
for (rt_int it1463 = lo1461; it1463 <= hi1462; it1463++) {
F->k_1460 = it1463;
F->r_1459 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_1459))->all), rt_str(" rt_int ", 8)), f_dim_lo_242(F->k_1460)), rt_str(", ", 2)), f_dim_hi_244(F->k_1460)), rt_str(";", 1)); b_; }));
}
}
F->result_ = (((P1013)rt_nil_check(F->r_1459))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_acnt_249(P1026 t_247, rstr *base_248) {
  struct f_acnt_249fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_247 = t_247;
F->base_248 = base_248;
F->r_1464 = NULL;
F->r_1464 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_CNT(", 7), (*F->base_248)), rt_str(")", 1)); b_; }));
{ rt_int lo1466 = ((rt_int)3LL), hi1467 = rt_r_ichk((*(P1026)rt_nil_check(F->t_247)).ndim);
for (rt_int it1468 = lo1466; it1468 <= hi1467; it1468++) {
F->k_1465 = it1468;
F->r_1464 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_1464))->all), rt_str(" * RT_R_EXT(", 12)), (*F->base_248)), rt_str(".", 1)), f_dim_lo_242(F->k_1465)), rt_str(", ", 2)), (*F->base_248)), rt_str(".", 1)), f_dim_hi_244(F->k_1465)), rt_str(")", 1)); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1013)rt_nil_check(F->r_1464))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1013 f_cons_lo_252(P1022 c_250, rt_int k_251) {
  struct f_cons_lo_252fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_250 = c_250;
F->k_251 = k_251;
F->l_1469 = NULL;
if ((F->k_251 == ((rt_int)1LL))) {
F->result_ = (*(P1022)rt_nil_check(F->c_250)).lo;
goto ret_;
} else if ((F->k_251 == ((rt_int)2LL))) {
F->result_ = (*(P1022)rt_nil_check(F->c_250)).lo2;
goto ret_;
}
F->l_1469 = (*(P1022)rt_nil_check(F->c_250)).bnds;
{ rt_int lo1471 = ((rt_int)1LL), hi1472 = rt_sub(rt_add(F->k_251, F->k_251), ((rt_int)6LL));
for (rt_int it1473 = lo1471; it1473 <= hi1472; it1473++) {
F->i_1470 = it1473;
if ((F->l_1469 != NULL)) {
F->l_1469 = (*(P1024)rt_nil_check(F->l_1469)).next;
}
}
}
if ((F->l_1469 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1024)rt_nil_check(F->l_1469)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1013 f_cons_hi_255(P1022 c_253, rt_int k_254) {
  struct f_cons_hi_255fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_253 = c_253;
F->k_254 = k_254;
F->l_1474 = NULL;
if ((F->k_254 == ((rt_int)1LL))) {
F->result_ = (*(P1022)rt_nil_check(F->c_253)).hi;
goto ret_;
} else if ((F->k_254 == ((rt_int)2LL))) {
F->result_ = (*(P1022)rt_nil_check(F->c_253)).hi2;
goto ret_;
}
F->l_1474 = (*(P1022)rt_nil_check(F->c_253)).bnds;
{ rt_int lo1476 = ((rt_int)1LL), hi1477 = rt_sub(rt_add(F->k_254, F->k_254), ((rt_int)5LL));
for (rt_int it1478 = lo1476; it1478 <= hi1477; it1478++) {
F->i_1475 = it1478;
if ((F->l_1474 != NULL)) {
F->l_1474 = (*(P1024)rt_nil_check(F->l_1474)).next;
}
}
}
if ((F->l_1474 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1024)rt_nil_check(F->l_1474)).s;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_idx_type_258(P1026 t_256, rt_int k_257) {
  struct f_idx_type_258fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_256 = t_256;
F->k_257 = k_257;
F->l_1479 = NULL;
F->l_1479 = (*(P1026)rt_nil_check(F->t_256)).idxs;
{ rt_int lo1481 = ((rt_int)2LL), hi1482 = F->k_257;
for (rt_int it1483 = lo1481; it1483 <= hi1482; it1483++) {
F->i_1480 = it1483;
F->l_1479 = (*(P1041)rt_nil_check(F->l_1479)).next;
}
}
F->result_ = (*(P1041)rt_nil_check(F->l_1479)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_ascii_259(void) {
  struct f_init_ascii_259fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->head_1484 = NULL;
F->tail_1485 = NULL;
F->start_1486 = RT_R_IUNDEF;
F->start_1486 = ((rt_int)1LL);
{ rt_int lo1488 = ((rt_int)1LL), hi1489 = ((rt_int)(((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56)))).len));
for (rt_int it1490 = lo1488; it1490 <= hi1489; it1490++) {
F->i_1487 = it1490;
if ((rt_str_get((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), F->i_1487) == 32)) {
F->lit_1491 = NULL;
F->lit_1491 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1020)rt_nil_check(F->lit_1491)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("NUL SOH STX ETX EOT ENQ ACK BEL BS HT LF VT FF CR SO SI DLE DC1 ", 64), rt_str("DC2 DC3 DC4 NAK SYN ETB CAN EM SUB ESC FS GS RS US SP EXCLAIM QUOTE ", 68)), rt_str("NUMBER DOLLAR PERCENT AMPERSAND APOS LPAREN RPAREN STAR PLUS COMMA ", 67)), rt_str("MINUS PERIOD SLASH N_0 N_1 N_2 N_3 N_4 N_5 N_6 N_7 N_8 N_9 COLON SEMI ", 70)), rt_str("LESS EQUAL GREATER QUESTION AT A B C D E F G H I J K L M N O P Q R S T ", 71)), rt_str("U V W X Y Z LBRACKET BSLASH RBRACKET CIRCUMFLEX UNDERSCORE GRAVE L_A ", 69)), rt_str("L_B L_C L_D L_E L_F L_G L_H L_I L_J L_K L_L L_M L_N L_O L_P L_Q L_R L_S ", 72)), rt_str("L_T L_U L_V L_W L_X L_Y L_Z LBRACE BAR RBRACE TILDE DEL ", 56))), rt_r_ichk(F->start_1486), rt_sub(F->i_1487, ((rt_int)1LL))); b_; }));
f_append_69(&F->head_1484, &F->tail_1485, F->lit_1491);
F->start_1486 = rt_add(F->i_1487, ((rt_int)1LL));
}
}
}
g_ty_ascii_1107 = f_new_typ_183((((rt_int)4LL)));
(*(P1026)rt_nil_check(g_ty_ascii_1107)).lits = F->head_1484;
(*(P1026)rt_nil_check(g_ty_ascii_1107)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ASCII", 5); b_; }));
{
F->h2_1492 = NULL;
F->t2_1493 = NULL;
F->l1_1494 = NULL;
F->l1_1494 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1495 = NULL;
F->l2_1495 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l3_1496 = NULL;
F->l3_1496 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1020)rt_nil_check(F->l1_1494)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INPUT", 5); b_; }));
(*(P1020)rt_nil_check(F->l2_1495)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OUTPUT", 6); b_; }));
(*(P1020)rt_nil_check(F->l3_1496)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UPDATE", 6); b_; }));
f_append_69(&F->h2_1492, &F->t2_1493, F->l1_1494);
f_append_69(&F->h2_1492, &F->t2_1493, F->l2_1495);
f_append_69(&F->h2_1492, &F->t2_1493, F->l3_1496);
g_file_mode_type_1115 = f_new_typ_183((((rt_int)4LL)));
(*(P1026)rt_nil_check(g_file_mode_type_1115)).lits = F->h2_1492;
}
g_file_state_type_1119 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OLD", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NEW", 3); b_; }));
g_file_disp_type_1120 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SAVE", 4); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("DELETE", 6); b_; }));
g_file_access_type_1121 = f_enum2_262(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEQ", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RANDOM", 6); b_; }));
g_ty_text_file_1118 = f_new_typ_183((((rt_int)10LL)));
(*(P1026)rt_nil_check(g_ty_text_file_1118)).elem = g_ty_ascii_1107;
g_ty_send_st_1116 = f_new_typ_183((((rt_int)1LL)));
(*(P1026)rt_nil_check(g_ty_send_st_1116)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SEND_ST", 7); b_; }));
g_ty_receive_st_1117 = f_new_typ_183((((rt_int)1LL)));
(*(P1026)rt_nil_check(g_ty_receive_st_1117)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RECEIVE_ST", 10); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1026 f_enum2_262(rstr *a_260, rstr *b_261) {
  struct f_enum2_262fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_260 = a_260;
F->b_261 = b_261;
F->t_1497 = NULL;
F->t_1497 = f_new_typ_183((((rt_int)4LL)));
F->l1_1498 = NULL;
F->l1_1498 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
F->l2_1499 = NULL;
F->l2_1499 = f_nn_65((((rt_int)4LL)), ((rt_int)0LL));
(*(P1020)rt_nil_check(F->l1_1498)).name = f_mk_3(&(*F->a_260));
(*(P1020)rt_nil_check(F->l2_1499)).name = f_mk_3(&(*F->b_261));
(*(P1020)rt_nil_check(F->l1_1498)).next = F->l2_1499;
(*(P1026)rt_nil_check(F->t_1497)).lits = F->l1_1498;
F->result_ = F->t_1497;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_lit_index_265(P1020 lits_263, rstr *name_264) {
  struct f_lit_index_265fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lits_263 = lits_263;
F->name_264 = name_264;
F->i_1500 = RT_R_IUNDEF;
F->i_1500 = ((rt_int)0LL);
F->l_1501 = NULL;
F->l_1501 = F->lits_263;
while ((F->l_1501 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->l_1501)).name))->all), (*F->name_264))) {
F->result_ = rt_r_ichk(F->i_1500);
goto ret_;
}
F->i_1500 = rt_add(rt_r_ichk(F->i_1500), ((rt_int)1LL));
F->l_1501 = (*(P1020)rt_nil_check(F->l_1501)).next;
}
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_resolve_subtype_268(P1020 st_266, P1022 *c_267) {
  struct f_resolve_subtype_268fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_266 = st_266;
F->c_267 = c_267;
F->c_267v = *F->c_267;
F->t_1502 = NULL;
F->ok_1503 = RT_R_EUNDEF;
F->dummy_1504 = NULL;
F->c_267v = f_new_cons_184();
{ rt_int sel1505 = rt_r_ichk((*(P1020)rt_nil_check(F->st_266)).kind);
if (0 || (sel1505 == (((rt_int)70LL)))) {
if (((*(P1020)rt_nil_check(F->st_266)).a != NULL)) {
(*(P1022)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794((*(P1020)rt_nil_check(F->st_266)).a, g_ty_int_1104, &F->dummy_1504); b_; }));
(*(P1022)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794((*(P1020)rt_nil_check(F->st_266)).b, g_ty_int_1104, &F->dummy_1504); b_; }));
(*(P1022)rt_nil_check(F->c_267v)).mlo = f_manifest_366((*(P1020)rt_nil_check(F->st_266)).a, &F->ok_1503);
(*(P1022)rt_nil_check(F->c_267v)).hasm = rt_r_echk(F->ok_1503);
(*(P1022)rt_nil_check(F->c_267v)).mhi = f_manifest_366((*(P1020)rt_nil_check(F->st_266)).b, &F->ok_1503);
(*(P1022)rt_nil_check(F->c_267v)).hasm = (rt_r_echk((*(P1022)rt_nil_check(F->c_267v)).hasm) && rt_r_echk(F->ok_1503));
}
F->result_ = g_ty_int_1104;
goto ret_;
} else if (0 || (sel1505 == (((rt_int)71LL)))) {
if (((*(P1020)rt_nil_check(F->st_266)).a != NULL)) {
(*(P1022)rt_nil_check(F->c_267v)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794((*(P1020)rt_nil_check(F->st_266)).a, g_ty_int_1104, &F->dummy_1504); b_; }));
}
if (((*(P1020)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1022)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794((*(P1020)rt_nil_check(F->st_266)).b, g_ty_float_1106, &F->dummy_1504); b_; }));
(*(P1022)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794((*(P1020)rt_nil_check(F->st_266)).c, g_ty_float_1106, &F->dummy_1504); b_; }));
(*(P1022)rt_nil_check(F->c_267v)).hasm = (f_float_lit_270((*(P1020)rt_nil_check(F->st_266)).b) && f_float_lit_270((*(P1020)rt_nil_check(F->st_266)).c));
}
F->result_ = g_ty_float_1106;
goto ret_;
} else if (0 || (sel1505 == (((rt_int)72LL)))) {
F->t_1502 = f_new_typ_183((((rt_int)4LL)));
(*(P1026)rt_nil_check(F->t_1502)).lits = (*(P1020)rt_nil_check(F->st_266)).a;
if (((*(P1020)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1022)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794((*(P1020)rt_nil_check(F->st_266)).b, F->t_1502, &F->dummy_1504); b_; }));
(*(P1022)rt_nil_check(F->c_267v)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794((*(P1020)rt_nil_check(F->st_266)).c, F->t_1502, &F->dummy_1504); b_; }));
if (((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->st_266)).b)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->st_266)).c)).kind) == (((rt_int)4LL))))) {
(*(P1022)rt_nil_check(F->c_267v)).mlo = f_lit_index_265((*(P1026)rt_nil_check(F->t_1502)).lits, &(((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->st_266)).b)).name))->all));
(*(P1022)rt_nil_check(F->c_267v)).mhi = f_lit_index_265((*(P1026)rt_nil_check(F->t_1502)).lits, &(((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->st_266)).c)).name))->all));
(*(P1022)rt_nil_check(F->c_267v)).hasm = 1;
}
}
F->result_ = F->t_1502;
goto ret_;
} else if (0 || (sel1505 == (((rt_int)73LL)))) {
F->t_1502 = f_resolve_subtype_268((*(P1020)rt_nil_check(F->st_266)).a, &F->c_267v);
if (((*(P1026)rt_nil_check(f_base_of_223(F->t_1502))).kind != (((rt_int)4LL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component type of a string is an enumeration type", 53); b_; }));
}
if ((f_same_221(F->t_1502, g_ty_ascii_1107) && ((F->c_267v == NULL) || ((*(P1022)rt_nil_check(F->c_267v)).lo == NULL)))) {
F->t_1502 = g_ty_string_1108;
} else {
F->et_1506 = NULL;
F->et_1506 = F->t_1502;
F->t_1502 = f_new_typ_183((((rt_int)5LL)));
(*(P1026)rt_nil_check(F->t_1502)).elem = F->et_1506;
(*(P1026)rt_nil_check(F->t_1502)).elemcons = F->c_267v;
}
F->c_267v = f_new_cons_184();
if (((*(P1020)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1022)rt_nil_check(F->c_267v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794((*(P1020)rt_nil_check(F->st_266)).b, g_ty_int_1104, &F->dummy_1504); b_; }));
}
F->result_ = F->t_1502;
goto ret_;
} else if (0 || (sel1505 == (((rt_int)74LL)))) {
{
F->ec_1507 = NULL;
F->et_1508 = NULL;
F->et_1508 = f_resolve_subtype_268((*(P1020)rt_nil_check(F->st_266)).b, &F->ec_1507);
F->ix_1509 = NULL;
F->ix_1509 = (*(P1020)rt_nil_check(F->st_266)).a;
F->k_1510 = RT_R_IUNDEF;
F->k_1510 = ((rt_int)0LL);
F->tail_1511 = NULL;
F->btail_1512 = NULL;
F->t_1502 = f_new_typ_183((((rt_int)6LL)));
(*(P1026)rt_nil_check(F->t_1502)).elem = F->et_1508;
(*(P1026)rt_nil_check(F->t_1502)).elemcons = F->ec_1507;
(*(P1026)rt_nil_check(F->t_1502)).elemst = (*(P1020)rt_nil_check(F->st_266)).b;
(*(P1022)rt_nil_check(F->c_267v)).lo2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
(*(P1022)rt_nil_check(F->c_267v)).hi2 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
while ((F->ix_1509 != NULL)) {
F->ic_1513 = NULL;
F->it_1514 = NULL;
F->it_1514 = f_resolve_subtype_268(F->ix_1509, &F->ic_1513);
F->lo_1515 = NULL;
F->hi_1516 = NULL;
F->tl_1517 = NULL;
if ((((*(P1026)rt_nil_check(f_base_of_223(F->it_1514))).kind != (((rt_int)1LL))) && ((*(P1026)rt_nil_check(f_base_of_223(F->it_1514))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an index subtype is an INT or ENUM subtype", 42); b_; }));
}
F->ic_1513 = f_base_cons_226(F->it_1514, F->ic_1513);
F->k_1510 = rt_add(rt_r_ichk(F->k_1510), ((rt_int)1LL));
{ R1042 *cell1518 = rt_alloc(sizeof(R1042));
(*cell1518).t = NULL;
(*cell1518).next = NULL;
F->tl_1517 = cell1518;
}
(*(P1041)rt_nil_check(F->tl_1517)).t = F->it_1514;
if ((F->tail_1511 == NULL)) {
(*(P1026)rt_nil_check(F->t_1502)).idxs = F->tl_1517;
} else {
(*(P1041)rt_nil_check(F->tail_1511)).next = F->tl_1517;
}
F->tail_1511 = F->tl_1517;
if (((F->ic_1513 != NULL) && ((*(P1022)rt_nil_check(F->ic_1513)).lo != NULL))) {
F->lo_1515 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_clo_193(F->ic_1513); b_; }));
F->hi_1516 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_chi_195(F->ic_1513); b_; }));
} else if (((*(P1026)rt_nil_check(f_base_of_223(F->it_1514))).kind == (((rt_int)4LL)))) {
F->lo_1515 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->hi_1516 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_71((*(P1026)rt_nil_check(f_base_of_223(F->it_1514))).lits), ((rt_int)1LL))); b_; }));
}
if ((rt_r_ichk(F->k_1510) == ((rt_int)1LL))) {
(*(P1026)rt_nil_check(F->t_1502)).idx = F->it_1514;
(*(P1022)rt_nil_check(F->c_267v)).lo = F->lo_1515;
(*(P1022)rt_nil_check(F->c_267v)).hi = F->hi_1516;
} else if ((rt_r_ichk(F->k_1510) == ((rt_int)2LL))) {
(*(P1026)rt_nil_check(F->t_1502)).idx2 = F->it_1514;
(*(P1022)rt_nil_check(F->c_267v)).lo2 = F->lo_1515;
(*(P1022)rt_nil_check(F->c_267v)).hi2 = F->hi_1516;
} else if ((F->lo_1515 != NULL)) {
F->l1_1519 = NULL;
F->l2_1520 = NULL;
{ R1025 *cell1521 = rt_alloc(sizeof(R1025));
(*cell1521).s = NULL;
(*cell1521).next = NULL;
F->l1_1519 = cell1521;
}
{ R1025 *cell1522 = rt_alloc(sizeof(R1025));
(*cell1522).s = NULL;
(*cell1522).next = NULL;
F->l2_1520 = cell1522;
}
(*(P1024)rt_nil_check(F->l1_1519)).s = F->lo_1515;
(*(P1024)rt_nil_check(F->l2_1520)).s = F->hi_1516;
(*(P1024)rt_nil_check(F->l1_1519)).next = F->l2_1520;
if ((F->btail_1512 == NULL)) {
(*(P1022)rt_nil_check(F->c_267v)).bnds = F->l1_1519;
} else {
(*(P1024)rt_nil_check(F->btail_1512)).next = F->l1_1519;
}
F->btail_1512 = F->l2_1520;
}
F->ix_1509 = (*(P1020)rt_nil_check(F->ix_1509)).next;
}
(*(P1026)rt_nil_check(F->t_1502)).ndim = rt_r_ichk(F->k_1510);
}
F->result_ = F->t_1502;
goto ret_;
} else if (0 || (sel1505 == (((rt_int)77LL)))) {
F->t_1502 = f_new_typ_183((((rt_int)16LL)));
{
F->ec_1523 = NULL;
(*(P1026)rt_nil_check(F->t_1502)).elem = f_resolve_subtype_268((*(P1020)rt_nil_check(F->st_266)).a, &F->ec_1523);
(*(P1026)rt_nil_check(F->t_1502)).elemcons = F->ec_1523;
if ((((*(P1026)rt_nil_check(f_base_of_223((*(P1026)rt_nil_check(F->t_1502)).elem))).kind != (((rt_int)1LL))) && ((*(P1026)rt_nil_check(f_base_of_223((*(P1026)rt_nil_check(F->t_1502)).elem))).kind != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the component subtype of a set is an INT or ENUM subtype", 56); b_; }));
}
if ((((*(P1026)rt_nil_check(f_base_of_223((*(P1026)rt_nil_check(F->t_1502)).elem))).kind == (((rt_int)1LL))) && ((F->ec_1523 == NULL) || ((*(P1022)rt_nil_check(F->ec_1523)).lo == NULL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SET[INT] needs a range here: a set of every INT cannot be represented", 69); b_; }));
}
}
F->result_ = F->t_1502;
goto ret_;
} else if (0 || (sel1505 == (((rt_int)75LL))) || (sel1505 == (((rt_int)76LL)))) {
if ((rt_r_ichk((*(P1020)rt_nil_check(F->st_266)).kind) == (((rt_int)76LL)))) {
F->t_1502 = f_new_typ_183((((rt_int)17LL)));
} else {
F->t_1502 = f_new_typ_183((((rt_int)7LL)));
}
{
F->comp_1524 = NULL;
F->comp_1524 = (*(P1020)rt_nil_check(F->st_266)).a;
F->tail_1525 = NULL;
while ((F->comp_1524 != NULL)) {
F->cc_1526 = NULL;
F->f_1527 = NULL;
{ R1029 *cell1528 = rt_alloc(sizeof(R1029));
(*cell1528).name = NULL;
(*cell1528).t = NULL;
(*cell1528).c = NULL;
(*cell1528).st = NULL;
(*cell1528).next = NULL;
F->f_1527 = cell1528;
}
(*(P1028)rt_nil_check(F->f_1527)).name = (*(P1020)rt_nil_check(F->comp_1524)).name;
(*(P1028)rt_nil_check(F->f_1527)).t = f_resolve_subtype_268((*(P1020)rt_nil_check(F->comp_1524)).a, &F->cc_1526);
(*(P1028)rt_nil_check(F->f_1527)).c = F->cc_1526;
(*(P1028)rt_nil_check(F->f_1527)).st = (*(P1020)rt_nil_check(F->comp_1524)).a;
if ((F->tail_1525 == NULL)) {
(*(P1026)rt_nil_check(F->t_1502)).fields = F->f_1527;
} else {
(*(P1028)rt_nil_check(F->tail_1525)).next = F->f_1527;
}
F->tail_1525 = F->f_1527;
F->comp_1524 = (*(P1020)rt_nil_check(F->comp_1524)).next;
}
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_1502)).kind) == (((rt_int)17LL)))) {
F->lits_1529 = NULL;
F->ltail_1530 = NULL;
F->f_1531 = NULL;
F->f_1531 = (*(P1026)rt_nil_check(F->t_1502)).fields;
while ((F->f_1531 != NULL)) {
F->l_1532 = NULL;
F->l_1532 = f_nn_65((((rt_int)4LL)), rt_r_ichk((*(P1020)rt_nil_check(F->st_266)).line));
if (rt_str_eq((((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_1531)).name))->all), rt_str("TAG", 3))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no component of a union may be named TAG", 40); b_; }));
}
(*(P1020)rt_nil_check(F->l_1532)).name = (*(P1028)rt_nil_check(F->f_1531)).name;
f_append_69(&F->lits_1529, &F->ltail_1530, F->l_1532);
F->f_1531 = (*(P1028)rt_nil_check(F->f_1531)).next;
}
(*(P1026)rt_nil_check(F->t_1502)).elem = f_new_typ_183((((rt_int)4LL)));
(*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->t_1502)).elem)).lits = F->lits_1529;
if (((*(P1020)rt_nil_check(F->st_266)).b != NULL)) {
f_tag_constraint_274(F->t_1502, (*(P1020)rt_nil_check(F->st_266)).b, F->c_267v);
}
}
F->result_ = F->t_1502;
goto ret_;
} else if (0 || (sel1505 == (((rt_int)79LL)))) {
F->t_1502 = f_new_typ_183((((rt_int)10LL)));
{
F->ec_1533 = NULL;
(*(P1026)rt_nil_check(F->t_1502)).elem = f_resolve_subtype_268((*(P1020)rt_nil_check(F->st_266)).a, &F->ec_1533);
(*(P1026)rt_nil_check(F->t_1502)).elemcons = F->ec_1533;
}
(*(P1022)rt_nil_check(F->c_267v)).args = (*(P1020)rt_nil_check(F->st_266)).b;
F->result_ = F->t_1502;
goto ret_;
} else if (0 || (sel1505 == (((rt_int)78LL)))) {
if (((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P1030)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))))) {
F->gt_1534 = NULL;
F->gt_1534 = f_copy_node_833((*(P1020)rt_nil_check(F->st_266)).a);
(*(P1020)rt_nil_check(F->gt_1534)).next = NULL;
F->result_ = f_instantiate_type_734(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })), F->gt_1534, (*(P1020)rt_nil_check(F->st_266)).b, &F->c_267v, rt_r_ichk((*(P1020)rt_nil_check(F->st_266)).line));
goto ret_;
}
{
F->ec_1535 = NULL;
F->t_1502 = f_new_typ_183((((rt_int)12LL)));
(*(P1026)rt_nil_check(F->t_1502)).elem = f_resolve_subtype_268((*(P1020)rt_nil_check(F->st_266)).a, &F->ec_1535);
(*(P1026)rt_nil_check(F->t_1502)).elemcons = F->ec_1535;
if (((*(P1020)rt_nil_check(F->st_266)).b != NULL)) {
(*(P1022)rt_nil_check(F->c_267v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794((*(P1020)rt_nil_check(F->st_266)).b, g_ty_int_1104, &F->dummy_1504); b_; }));
}
}
F->result_ = F->t_1502;
goto ret_;
} else if (0 || (sel1505 == (((rt_int)80LL)))) {
F->result_ = f_named_subtype_277(F->st_266, &F->c_267v);
goto ret_;
} else if (0 || (sel1505 == (((rt_int)81LL)))) {
{
F->base_1536 = NULL;
F->result_ = f_value_subtype_290((*(P1020)rt_nil_check(F->st_266)).a, &F->c_267v, &F->base_1536);
goto ret_;
}
} else {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->st_266)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype form is not handled yet", 36); b_; }));
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

static int f_float_lit_270(P1020 e_269) {
  struct f_float_lit_270fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_269 = e_269;
if (((rt_r_ichk((*(P1020)rt_nil_check(F->e_269)).kind) == (((rt_int)8LL))) && (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_269)).name))->all), rt_str("-", 1)) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_269)).name))->all), rt_str("+", 1))))) {
F->result_ = f_float_lit_270((*(P1020)rt_nil_check(F->e_269)).a);
goto ret_;
}
F->result_ = ((rt_r_ichk((*(P1020)rt_nil_check(F->e_269)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P1020)rt_nil_check(F->e_269)).kind) == (((rt_int)1LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_tag_constraint_274(P1026 t_271, P1020 e_272, P1022 c_273) {
  struct f_tag_constraint_274fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_271 = t_271;
F->e_272 = e_272;
F->c_273 = c_273;
F->dummy_1537 = NULL;
(*(P1022)rt_nil_check(F->c_273)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794(F->e_272, (*(P1026)rt_nil_check(F->t_271)).elem, &F->dummy_1537); b_; }));
f_check_type_232(F->dummy_1537, (*(P1026)rt_nil_check(F->t_271)).elem, rt_r_ichk((*(P1020)rt_nil_check(F->e_272)).line));
(*(P1022)rt_nil_check(F->c_273)).hi = (*(P1022)rt_nil_check(F->c_273)).lo;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_272)).kind) == (((rt_int)4LL)))) {
(*(P1022)rt_nil_check(F->c_273)).mlo = f_lit_index_265((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->t_271)).elem)).lits, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_272)).name))->all));
(*(P1022)rt_nil_check(F->c_273)).mhi = rt_r_ichk((*(P1022)rt_nil_check(F->c_273)).mlo);
(*(P1022)rt_nil_check(F->c_273)).hasm = 1;
}
ret_:
  RT_FPOP();
  return;
}

static P1026 f_named_subtype_277(P1020 st_275, P1022 *c_276) {
  struct f_named_subtype_277fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_275 = st_275;
F->c_276 = c_276;
F->c_276v = *F->c_276;
F->t_1538 = NULL;
F->y_1539 = NULL;
F->y_1539 = f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->st_275)).name))->all));
F->name_1540 = rt_str_copy((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->st_275)).name))->all));
F->c_276v = f_new_cons_184();
if (((F->y_1539 == NULL) && ((rt_str_eq(F->name_1540, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1540, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1540, rt_str("TYPEOF", 6))))) {
F->result_ = f_inquiry_295(F->st_275, &F->c_276v);
goto ret_;
}
if ((F->y_1539 == NULL)) {
if (rt_str_eq(F->name_1540, rt_str("BOOL", 4))) {
F->t_1538 = g_ty_bool_1105;
} else if (rt_str_eq(F->name_1540, rt_str("ASCII", 5))) {
F->t_1538 = g_ty_ascii_1107;
} else if (rt_str_eq(F->name_1540, rt_str("DATA_LOCK", 9))) {
F->t_1538 = g_ty_lock_1112;
} else if (rt_str_eq(F->name_1540, rt_str("LATCH", 5))) {
F->t_1538 = g_ty_latch_1113;
} else if (rt_str_eq(F->name_1540, rt_str("ACT", 3))) {
F->t_1538 = g_ty_act_1114;
} else if (rt_str_eq(F->name_1540, rt_str("INT", 3))) {
F->t_1538 = g_ty_int_1104;
} else if (rt_str_eq(F->name_1540, rt_str("SEND_ST", 7))) {
F->t_1538 = g_ty_send_st_1116;
} else if (rt_str_eq(F->name_1540, rt_str("RECEIVE_ST", 10))) {
F->t_1538 = g_ty_receive_st_1117;
} else if (rt_str_eq(F->name_1540, rt_str("FLOAT", 5))) {
F->t_1538 = g_ty_float_1106;
} else {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->st_275)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("unknown type ", 13), F->name_1540); b_; }));
}
if (((*(P1020)rt_nil_check(F->st_275)).b != NULL)) {
f_apply_constraint_286(F->t_1538, (*(P1020)rt_nil_check(F->st_275)).b, F->c_276v, rt_r_ichk((*(P1020)rt_nil_check(F->st_275)).line));
}
F->result_ = F->t_1538;
goto ret_;
}
if (((rt_r_ichk((*(P1030)rt_nil_check(F->y_1539)).kind) == (((rt_int)10LL))) && ((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_1539)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_1539)).decl)).b)).kind) == (((rt_int)44LL)))))) {
F->result_ = f_instantiate_type_734(F->y_1539, (*(P1020)rt_nil_check(F->st_275)).a, (*(P1020)rt_nil_check(F->st_275)).b, &F->c_276v, rt_r_ichk((*(P1020)rt_nil_check(F->st_275)).line));
goto ret_;
}
if (((rt_r_ichk((*(P1030)rt_nil_check(F->y_1539)).kind) == (((rt_int)10LL))) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_1539)).decl)).b)).kind) == (((rt_int)42LL))))) {
F->binds_1541 = NULL;
F->binds_1541 = f_tt_binds_700((*(P1030)rt_nil_check(F->y_1539)).decl, (*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_1539)).decl)).b)).e, (*(P1020)rt_nil_check(F->st_275)).a, rt_r_ichk((*(P1020)rt_nil_check(F->st_275)).line));
F->saved_env_1542 = NULL;
F->saved_env_1542 = g_genv_1061;
F->saved_gdepth_1543 = RT_R_IUNDEF;
F->saved_gdepth_1543 = rt_r_ichk(g_gdepth_1093);
f_open_scope_177();
while ((F->binds_1541 != NULL)) {
F->nb_1544 = NULL;
F->nb_1544 = (*(P1030)rt_nil_check(F->binds_1541)).mnext;
f_define_168(F->binds_1541, rt_r_ichk((*(P1020)rt_nil_check(F->st_275)).line));
F->binds_1541 = F->nb_1544;
}
g_genv_1061 = (*(P1030)rt_nil_check(F->y_1539)).env;
g_gdepth_1093 = rt_r_ichk(g_depth_1063);
F->t_1538 = f_resolve_subtype_268((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_1539)).decl)).b)).a, &F->c_276v);
g_genv_1061 = F->saved_env_1542;
g_gdepth_1093 = rt_r_ichk(F->saved_gdepth_1543);
f_close_scope_178();
if (((*(P1020)rt_nil_check(F->st_275)).b != NULL)) {
F->c_276v = f_copy_cons_206(F->c_276v);
f_apply_constraint_286(F->t_1538, (*(P1020)rt_nil_check(F->st_275)).b, F->c_276v, rt_r_ichk((*(P1020)rt_nil_check(F->st_275)).line));
}
F->result_ = F->t_1538;
goto ret_;
}
if ((((rt_r_ichk((*(P1030)rt_nil_check(F->y_1539)).kind) == (((rt_int)5LL))) && ((*(P1030)rt_nil_check(F->y_1539)).t != NULL)) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_1539)).t)).kind) == (((rt_int)15LL))))) {
F->result_ = f_new_type_318(F->y_1539, F->st_275, &F->c_276v);
goto ret_;
}
if ((((rt_r_ichk((*(P1030)rt_nil_check(F->y_1539)).kind) == (((rt_int)5LL))) && ((*(P1030)rt_nil_check(F->y_1539)).t != NULL)) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_1539)).t)).kind) == (((rt_int)8LL))))) {
(*(P1022)rt_nil_check(F->c_276v)).args = (*(P1020)rt_nil_check(F->st_275)).b;
F->result_ = (*(P1030)rt_nil_check(F->y_1539)).t;
goto ret_;
}
if ((((rt_r_ichk((*(P1030)rt_nil_check(F->y_1539)).kind) == (((rt_int)6LL))) && ((*(P1030)rt_nil_check(F->y_1539)).decl != NULL)) && ((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_1539)).decl)).b != NULL))) {
F->result_ = f_invoke_abbrev_281(F->y_1539, F->st_275, &F->c_276v);
goto ret_;
}
if ((((rt_r_ichk((*(P1030)rt_nil_check(F->y_1539)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_1539)).kind) == (((rt_int)5LL)))) && ((*(P1030)rt_nil_check(F->y_1539)).t != NULL))) {
if (((*(P1030)rt_nil_check(F->y_1539)).c != NULL)) {
F->c_276v = (*(P1030)rt_nil_check(F->y_1539)).c;
}
F->t_1538 = (*(P1030)rt_nil_check(F->y_1539)).t;
} else if ((((rt_r_ichk((*(P1030)rt_nil_check(F->y_1539)).kind) == (((rt_int)5LL))) && ((*(P1030)rt_nil_check(F->y_1539)).decl != NULL)) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_1539)).decl)).kind) == (((rt_int)43LL))))) {
F->result_ = f_new_type_318(F->y_1539, F->st_275, &F->c_276v);
goto ret_;
} else if (((rt_r_ichk((*(P1030)rt_nil_check(F->y_1539)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_1539)).kind) == (((rt_int)5LL))))) {
F->t_1538 = f_resolve_subtype_268((*(P1030)rt_nil_check(F->y_1539)).st, &F->c_276v);
} else {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->st_275)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1540, rt_str(" is not a type", 14)); b_; }));
}
if (((*(P1020)rt_nil_check(F->st_275)).b != NULL)) {
F->c_276v = f_copy_cons_206(F->c_276v);
f_apply_constraint_286(F->t_1538, (*(P1020)rt_nil_check(F->st_275)).b, F->c_276v, rt_r_ichk((*(P1020)rt_nil_check(F->st_275)).line));
}
F->result_ = F->t_1538;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_276) = F->c_276v;
  RT_FPOP();
  return F->result_;
}

static P1026 f_invoke_abbrev_281(P1030 y_278, P1020 st_279, P1022 *c_280) {
  struct f_invoke_abbrev_281fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_278 = y_278;
F->st_279 = st_279;
F->c_280 = c_280;
F->c_280v = *F->c_280;
F->p_1545 = NULL;
F->p_1545 = (*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_278)).decl)).b;
F->a_1546 = NULL;
F->a_1546 = (*(P1020)rt_nil_check(F->st_279)).b;
F->t_1547 = NULL;
if ((f_list_len_71(F->p_1545) != f_list_len_71(F->a_1546))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->st_279)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_278)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1545))), rt_str(" actual parameters", 18)); b_; }));
}
f_open_scope_177();
while ((F->p_1545 != NULL)) {
F->z_1548 = NULL;
F->z_1548 = f_new_sym_181((((rt_int)2LL)), (*(P1020)rt_nil_check(F->p_1545)).name);
F->pc_1549 = NULL;
F->at_1550 = NULL;
F->ok_1551 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->p_1545)).ival) != (((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->st_279)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an abbreviation has only CONST formal parameters", 48); b_; }));
}
(*(P1030)rt_nil_check(F->z_1548)).t = f_resolve_subtype_268((*(P1020)rt_nil_check(F->p_1545)).a, &F->pc_1549);
(*(P1030)rt_nil_check(F->z_1548)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_794(F->a_1546, (*(P1030)rt_nil_check(F->z_1548)).t, &F->at_1550)), rt_str(")", 1)); b_; }));
f_check_type_232(F->at_1550, (*(P1030)rt_nil_check(F->z_1548)).t, rt_r_ichk((*(P1020)rt_nil_check(F->st_279)).line));
(*(P1030)rt_nil_check(F->z_1548)).mvalue = f_manifest_366(F->a_1546, &F->ok_1551);
(*(P1030)rt_nil_check(F->z_1548)).hasmv = rt_r_echk(F->ok_1551);
(*(P1030)rt_nil_check(F->z_1548)).mv = f_meval_375(F->a_1546, &F->ok_1551);
if ((!rt_r_echk(F->ok_1551))) {
(*(P1030)rt_nil_check(F->z_1548)).mv = NULL;
}
(*(P1030)rt_nil_check(F->z_1548)).ro_flag = 1;
f_define_168(F->z_1548, rt_r_ichk((*(P1020)rt_nil_check(F->st_279)).line));
F->p_1545 = (*(P1020)rt_nil_check(F->p_1545)).next;
F->a_1546 = (*(P1020)rt_nil_check(F->a_1546)).next;
}
F->t_1547 = f_resolve_subtype_268((*(P1030)rt_nil_check(F->y_278)).st, &F->c_280v);
f_close_scope_178();
F->result_ = F->t_1547;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_280) = F->c_280v;
  RT_FPOP();
  return F->result_;
}

static void f_apply_constraint_286(P1026 t_282, P1020 args_283, P1022 c_284, rt_int line_285) {
  struct f_apply_constraint_286fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_282 = t_282;
F->args_283 = args_283;
F->c_284 = c_284;
F->line_285 = line_285;
F->dummy_1552 = NULL;
F->ok_1553 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_282)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_282)).kind) == (((rt_int)4LL))))) {
if (((rt_r_ichk((*(P1020)rt_nil_check(F->args_283)).kind) != (((rt_int)16LL))) || ((*(P1020)rt_nil_check(F->args_283)).next != NULL))) {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes a range", 26); b_; }));
}
(*(P1022)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794((*(P1020)rt_nil_check(F->args_283)).a, F->t_282, &F->dummy_1552); b_; }));
f_check_type_232(F->dummy_1552, F->t_282, F->line_285);
(*(P1022)rt_nil_check(F->c_284)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794((*(P1020)rt_nil_check(F->args_283)).b, F->t_282, &F->dummy_1552); b_; }));
f_check_type_232(F->dummy_1552, F->t_282, F->line_285);
(*(P1022)rt_nil_check(F->c_284)).hasm = 0;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_282)).kind) == (((rt_int)1LL)))) {
(*(P1022)rt_nil_check(F->c_284)).mlo = f_manifest_366((*(P1020)rt_nil_check(F->args_283)).a, &F->ok_1553);
(*(P1022)rt_nil_check(F->c_284)).hasm = rt_r_echk(F->ok_1553);
(*(P1022)rt_nil_check(F->c_284)).mhi = f_manifest_366((*(P1020)rt_nil_check(F->args_283)).b, &F->ok_1553);
(*(P1022)rt_nil_check(F->c_284)).hasm = (rt_r_echk((*(P1022)rt_nil_check(F->c_284)).hasm) && rt_r_echk(F->ok_1553));
} else if (((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_283)).a)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_283)).b)).kind) == (((rt_int)4LL))))) {
(*(P1022)rt_nil_check(F->c_284)).mlo = f_lit_index_265((*(P1026)rt_nil_check(f_base_of_223(F->t_282))).lits, &(((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_283)).a)).name))->all));
(*(P1022)rt_nil_check(F->c_284)).mhi = f_lit_index_265((*(P1026)rt_nil_check(f_base_of_223(F->t_282))).lits, &(((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_283)).b)).name))->all));
(*(P1022)rt_nil_check(F->c_284)).hasm = 1;
}
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_282)).kind) == (((rt_int)3LL)))) {
(*(P1022)rt_nil_check(F->c_284)).prec = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794(F->args_283, g_ty_int_1104, &F->dummy_1552); b_; }));
if (((*(P1020)rt_nil_check(F->args_283)).next != NULL)) {
if ((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_283)).next)).kind) != (((rt_int)16LL)))) {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FLOAT takes (precision, min .. max)", 35); b_; }));
}
(*(P1022)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_283)).next)).a, g_ty_float_1106, &F->dummy_1552); b_; }));
(*(P1022)rt_nil_check(F->c_284)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_283)).next)).b, g_ty_float_1106, &F->dummy_1552); b_; }));
(*(P1022)rt_nil_check(F->c_284)).hasm = (f_float_lit_270((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_283)).next)).a) && f_float_lit_270((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_283)).next)).b));
}
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_282)).kind) == (((rt_int)5LL)))) {
(*(P1022)rt_nil_check(F->c_284)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794(F->args_283, g_ty_int_1104, &F->dummy_1552); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_282)).kind) == (((rt_int)12LL)))) {
(*(P1022)rt_nil_check(F->c_284)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794(F->args_283, g_ty_int_1104, &F->dummy_1552); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_282)).kind) == (((rt_int)17LL)))) {
f_tag_constraint_274(F->t_282, F->args_283, F->c_284);
} else {
f_fail_23(F->line_285, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this subtype takes no constraint list", 37); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static P1026 f_value_subtype_290(P1020 e_287, P1022 *c_288, P1013 *base_289) {
  struct f_value_subtype_290fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_287 = e_287;
F->c_288 = c_288;
F->c_288v = *F->c_288;
F->base_289 = base_289;
F->base_289v = *F->base_289;
F->t_1554 = NULL;
F->c0_1555 = NULL;
F->ro_1556 = RT_R_EUNDEF;
if (f_is_lvalue_757(F->e_287)) {
f_lvalue_763(F->e_287, &F->base_289v, &F->t_1554, &F->c0_1555, &F->ro_1556);
} else {
F->base_289v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794(F->e_287, NULL, &F->t_1554); b_; }));
}
if ((F->c0_1555 == NULL)) {
F->c_288v = f_new_cons_184();
} else {
F->c_288v = f_copy_cons_206(F->c0_1555);
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_1554)).kind) == (((rt_int)5LL)))) {
(*(P1022)rt_nil_check(F->c_288v)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1013)rt_nil_check(F->base_289v))->all)), rt_str(").len", 5)); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_1554)).kind) == (((rt_int)6LL)))) {
(*(P1022)rt_nil_check(F->c_288v)).bnds = NULL;
{ rt_int lo1558 = ((rt_int)1LL), hi1559 = rt_r_ichk((*(P1026)rt_nil_check(F->t_1554)).ndim);
for (rt_int it1560 = lo1558; it1560 <= hi1559; it1560++) {
F->k_1557 = it1560;
F->lo_1561 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1013)rt_nil_check(F->base_289v))->all)), rt_str(").", 2)), f_dim_lo_242(F->k_1557)));
F->hi_1562 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1013)rt_nil_check(F->base_289v))->all)), rt_str(").", 2)), f_dim_hi_244(F->k_1557)));
if ((F->k_1557 == ((rt_int)1LL))) {
(*(P1022)rt_nil_check(F->c_288v)).lo = f_mk_3(&F->lo_1561);
(*(P1022)rt_nil_check(F->c_288v)).hi = f_mk_3(&F->hi_1562);
} else if ((F->k_1557 == ((rt_int)2LL))) {
(*(P1022)rt_nil_check(F->c_288v)).lo2 = f_mk_3(&F->lo_1561);
(*(P1022)rt_nil_check(F->c_288v)).hi2 = f_mk_3(&F->hi_1562);
} else {
F->l1_1563 = NULL;
F->l2_1564 = NULL;
{ R1025 *cell1565 = rt_alloc(sizeof(R1025));
(*cell1565).s = NULL;
(*cell1565).next = NULL;
F->l1_1563 = cell1565;
}
{ R1025 *cell1566 = rt_alloc(sizeof(R1025));
(*cell1566).s = NULL;
(*cell1566).next = NULL;
F->l2_1564 = cell1566;
}
(*(P1024)rt_nil_check(F->l1_1563)).s = f_mk_3(&F->lo_1561);
(*(P1024)rt_nil_check(F->l2_1564)).s = f_mk_3(&F->hi_1562);
(*(P1024)rt_nil_check(F->l1_1563)).next = F->l2_1564;
(*(P1024)rt_nil_check(F->l2_1564)).next = (*(P1022)rt_nil_check(F->c_288v)).bnds;
(*(P1022)rt_nil_check(F->c_288v)).bnds = F->l1_1563;
}
}
}
(*(P1022)rt_nil_check(F->c_288v)).bnds = f_reverse_pairs_292((*(P1022)rt_nil_check(F->c_288v)).bnds);
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_1554)).kind) == (((rt_int)12LL)))) {
(*(P1022)rt_nil_check(F->c_288v)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1013)rt_nil_check(F->base_289v))->all)), rt_str(")->cap", 6)); b_; }));
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_1554)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->t_1554)).tparams != NULL))) {
F->p_1567 = NULL;
F->p_1567 = (*(P1026)rt_nil_check(F->t_1554)).tparams;
F->head_1568 = NULL;
F->tail_1569 = NULL;
while ((F->p_1567 != NULL)) {
F->sel_1570 = NULL;
F->sel_1570 = f_nn_65((((rt_int)11LL)), rt_r_ichk((*(P1020)rt_nil_check(F->e_287)).line));
(*(P1020)rt_nil_check(F->sel_1570)).a = F->e_287;
(*(P1020)rt_nil_check(F->sel_1570)).name = (*(P1020)rt_nil_check(F->p_1567)).name;
f_append_69(&F->head_1568, &F->tail_1569, F->sel_1570);
F->p_1567 = (*(P1020)rt_nil_check(F->p_1567)).next;
}
(*(P1022)rt_nil_check(F->c_288v)).args = F->head_1568;
}
F->result_ = F->t_1554;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_288) = F->c_288v;  (*F->base_289) = F->base_289v;
  RT_FPOP();
  return F->result_;
}

static P1024 f_reverse_pairs_292(P1024 l_291) {
  struct f_reverse_pairs_292fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_291 = l_291;
F->r_1571 = NULL;
F->p_1572 = NULL;
F->p_1572 = F->l_291;
while ((F->p_1572 != NULL)) {
F->a_1573 = NULL;
F->a_1573 = F->p_1572;
F->b_1574 = NULL;
F->b_1574 = (*(P1024)rt_nil_check(F->p_1572)).next;
F->p_1572 = (*(P1024)rt_nil_check(F->b_1574)).next;
(*(P1024)rt_nil_check(F->b_1574)).next = F->r_1571;
F->r_1571 = F->a_1573;
}
F->result_ = F->r_1571;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_inquiry_295(P1020 st_293, P1022 *c_294) {
  struct f_inquiry_295fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_293 = st_293;
F->c_294 = c_294;
F->c_294v = *F->c_294;
F->base_1575 = NULL;
F->t_1576 = NULL;
F->name_1577 = rt_str_copy((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->st_293)).name))->all));
if (((*(P1020)rt_nil_check(F->st_293)).b == NULL)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->st_293)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_1577, rt_str(" needs an expression", 20)); b_; }));
}
if (rt_str_eq(F->name_1577, rt_str("TYPEOF", 6))) {
F->sub_1578 = NULL;
F->sub_1578 = f_as_subtype_297((*(P1020)rt_nil_check(F->st_293)).b);
F->c2_1579 = NULL;
if ((F->sub_1578 != NULL)) {
F->t_1576 = f_resolve_subtype_268(F->sub_1578, &F->c2_1579);
} else {
F->t_1576 = f_value_subtype_290((*(P1020)rt_nil_check(F->st_293)).b, &F->c2_1579, &F->base_1575);
}
F->c_294v = f_new_cons_184();
F->result_ = F->t_1576;
goto ret_;
}
F->t_1576 = f_value_subtype_290((*(P1020)rt_nil_check(F->st_293)).b, &F->c_294v, &F->base_1575);
if (rt_str_eq(F->name_1577, rt_str("SUBTYPEOF", 9))) {
F->result_ = F->t_1576;
goto ret_;
}
{
F->k_1580 = RT_R_IUNDEF;
F->k_1580 = ((rt_int)1LL);
F->ok_1581 = RT_R_EUNDEF;
F->ok_1581 = 1;
F->ac_1582 = NULL;
F->ac_1582 = F->c_294v;
if (((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->st_293)).b)).next != NULL)) {
F->k_1580 = f_manifest_366((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->st_293)).b)).next, &F->ok_1581);
}
while (((rt_r_ichk((*(P1026)rt_nil_check(F->t_1576)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->t_1576)).tparams == NULL))) {
F->t_1576 = (*(P1026)rt_nil_check(F->t_1576)).under;
}
if (((((rt_r_ichk((*(P1026)rt_nil_check(F->t_1576)).kind) != (((rt_int)6LL))) || (!rt_r_echk(F->ok_1581))) || (rt_r_ichk(F->k_1580) < ((rt_int)1LL))) || (rt_r_ichk(F->k_1580) > rt_r_ichk((*(P1026)rt_nil_check(F->t_1576)).ndim)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->st_293)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("INDEXOF needs an array and the manifest number of one of its dimensions", 71); b_; }));
}
F->c_294v = f_new_cons_184();
(*(P1022)rt_nil_check(F->c_294v)).lo = f_cons_lo_252(F->ac_1582, rt_r_ichk(F->k_1580));
(*(P1022)rt_nil_check(F->c_294v)).hi = f_cons_hi_255(F->ac_1582, rt_r_ichk(F->k_1580));
F->result_ = f_idx_type_258(F->t_1576, rt_r_ichk(F->k_1580));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_294) = F->c_294v;
  RT_FPOP();
  return F->result_;
}

static P1020 f_as_subtype_297(P1020 e_296) {
  struct f_as_subtype_297fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_296 = e_296;
F->st_1583 = NULL;
if ((F->e_296 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_296)).kind) == (((rt_int)17LL)))) {
F->result_ = f_as_subtype_297((*(P1020)rt_nil_check(F->e_296)).a);
goto ret_;
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_296)).kind) == (((rt_int)7LL)))) {
if ((!f_type_name_304(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->st_1583 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1020)rt_nil_check(F->e_296)).line));
(*(P1020)rt_nil_check(F->st_1583)).name = (*(P1020)rt_nil_check(F->e_296)).name;
F->result_ = F->st_1583;
goto ret_;
} else if (((rt_r_ichk((*(P1020)rt_nil_check(F->e_296)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_302((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).a)).name, (*(P1020)rt_nil_check(F->e_296)).b, NULL, rt_r_ichk((*(P1020)rt_nil_check(F->e_296)).line));
goto ret_;
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_296)).kind) != (((rt_int)10LL)))) {
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).a)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).a)).a)).kind) == (((rt_int)7LL))))) {
F->result_ = f_tt_subtype_302((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).a)).a)).name, (*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).a)).b, (*(P1020)rt_nil_check(F->e_296)).b, rt_r_ichk((*(P1020)rt_nil_check(F->e_296)).line));
goto ret_;
} else if ((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).a)).kind) != (((rt_int)7LL)))) {
F->result_ = NULL;
goto ret_;
}
{
F->name_1584 = rt_str_copy((((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).a)).name))->all));
F->y_1585 = NULL;
F->y_1585 = f_lookup_163(&F->name_1584);
if ((rt_str_eq(F->name_1584, rt_str("INT", 3)) && (F->y_1585 == NULL))) {
if (((((*(P1020)rt_nil_check(F->e_296)).b == NULL) || (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).b)).kind) != (((rt_int)16LL)))) || ((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).b)).next != NULL))) {
F->result_ = NULL;
goto ret_;
}
F->st_1583 = f_nn_65((((rt_int)70LL)), rt_r_ichk((*(P1020)rt_nil_check(F->e_296)).line));
(*(P1020)rt_nil_check(F->st_1583)).a = (*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).b)).a;
(*(P1020)rt_nil_check(F->st_1583)).b = (*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).b)).b;
F->result_ = F->st_1583;
goto ret_;
} else if ((rt_str_eq(F->name_1584, rt_str("FLOAT", 5)) && (F->y_1585 == NULL))) {
F->st_1583 = f_nn_65((((rt_int)71LL)), rt_r_ichk((*(P1020)rt_nil_check(F->e_296)).line));
(*(P1020)rt_nil_check(F->st_1583)).a = (*(P1020)rt_nil_check(F->e_296)).b;
if ((((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).b)).next != NULL) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).b)).next)).kind) == (((rt_int)16LL))))) {
(*(P1020)rt_nil_check(F->st_1583)).b = (*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).b)).next)).a;
(*(P1020)rt_nil_check(F->st_1583)).c = (*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).b)).next)).b;
}
F->result_ = F->st_1583;
goto ret_;
} else if (((!f_type_name_304(&F->name_1584)) && (!((F->y_1585 == NULL) && ((rt_str_eq(F->name_1584, rt_str("SUBTYPEOF", 9)) || rt_str_eq(F->name_1584, rt_str("INDEXOF", 7))) || rt_str_eq(F->name_1584, rt_str("TYPEOF", 6))))))) {
F->result_ = NULL;
goto ret_;
}
F->st_1583 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1020)rt_nil_check(F->e_296)).line));
(*(P1020)rt_nil_check(F->st_1583)).name = (*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_296)).a)).name;
(*(P1020)rt_nil_check(F->st_1583)).b = (*(P1020)rt_nil_check(F->e_296)).b;
(*(P1020)rt_nil_check(F->st_1583)).flag = ((rt_int)1LL);
F->result_ = F->st_1583;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_tt_subtype_302(P1013 name_298, P1020 tt_299, P1020 args_300, rt_int line_301) {
  struct f_tt_subtype_302fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_298 = name_298;
F->tt_299 = tt_299;
F->args_300 = args_300;
F->line_301 = line_301;
F->st_1586 = NULL;
if (rt_str_eq((((P1013)rt_nil_check(F->name_298))->all), rt_str("STRING", 6))) {
F->st_1586 = f_nn_65((((rt_int)73LL)), F->line_301);
} else if (rt_str_eq((((P1013)rt_nil_check(F->name_298))->all), rt_str("SET", 3))) {
F->st_1586 = f_nn_65((((rt_int)77LL)), F->line_301);
} else if ((rt_str_eq((((P1013)rt_nil_check(F->name_298))->all), rt_str("MAILBOX", 7)) && ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) == NULL) || ((*(P1030)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind != (((rt_int)10LL)))))) {
F->st_1586 = f_nn_65((((rt_int)78LL)), F->line_301);
} else if (rt_str_eq((((P1013)rt_nil_check(F->name_298))->all), rt_str("FILE", 4))) {
F->st_1586 = f_nn_65((((rt_int)79LL)), F->line_301);
} else if (f_type_name_304(&(((P1013)rt_nil_check(F->name_298))->all))) {
F->st_1586 = f_nn_65((((rt_int)80LL)), F->line_301);
(*(P1020)rt_nil_check(F->st_1586)).name = F->name_298;
(*(P1020)rt_nil_check(F->st_1586)).a = F->tt_299;
(*(P1020)rt_nil_check(F->st_1586)).b = F->args_300;
F->result_ = F->st_1586;
goto ret_;
} else {
F->result_ = NULL;
goto ret_;
}
(*(P1020)rt_nil_check(F->st_1586)).a = F->tt_299;
(*(P1020)rt_nil_check(F->st_1586)).b = F->args_300;
F->result_ = F->st_1586;
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
F->y_1587 = NULL;
F->y_1587 = f_lookup_163(&(*F->name_303));
if ((F->y_1587 == NULL)) {
F->result_ = ((((((((rt_str_eq((*F->name_303), rt_str("INT", 3)) || rt_str_eq((*F->name_303), rt_str("BOOL", 4))) || rt_str_eq((*F->name_303), rt_str("FLOAT", 5))) || rt_str_eq((*F->name_303), rt_str("ASCII", 5))) || rt_str_eq((*F->name_303), rt_str("ACT", 3))) || rt_str_eq((*F->name_303), rt_str("DATA_LOCK", 9))) || rt_str_eq((*F->name_303), rt_str("LATCH", 5))) || rt_str_eq((*F->name_303), rt_str("SEND_ST", 7))) || rt_str_eq((*F->name_303), rt_str("RECEIVE_ST", 10)));
goto ret_;
}
F->result_ = (((rt_r_ichk((*(P1030)rt_nil_check(F->y_1587)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_1587)).kind) == (((rt_int)6LL)))) || ((rt_r_ichk((*(P1030)rt_nil_check(F->y_1587)).kind) == (((rt_int)10LL))) && (((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_1587)).decl)).b)).kind) == (((rt_int)43LL))) || (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_1587)).decl)).b)).kind) == (((rt_int)44LL)))) || (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_1587)).decl)).b)).kind) == (((rt_int)42LL))))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_empty_set_306(P1026 t_305) {
  struct f_empty_set_306fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_305 = t_305;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_new(", 10), f_sub_lo_198(f_base_of_223((*(P1026)rt_nil_check(F->t_305)).elem), f_base_cons_226((*(P1026)rt_nil_check(F->t_305)).elem, (*(P1026)rt_nil_check(F->t_305)).elemcons))), rt_str(", ", 2)), f_sub_hi_201(f_base_of_223((*(P1026)rt_nil_check(F->t_305)).elem), f_base_cons_226((*(P1026)rt_nil_check(F->t_305)).elem, (*(P1026)rt_nil_check(F->t_305)).elemcons))), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_opened_308(P1026 t_307) {
  struct f_opened_308fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_307 = t_307;
F->c_1588 = NULL;
F->c_1588 = g_caps_1079;
if ((((rt_r_ichk((*(P1026)rt_nil_check(F->t_307)).kind) != (((rt_int)15LL))) || ((*(P1026)rt_nil_check(F->t_307)).ocap == NULL)) || (rt_r_ichk((*(P1020)rt_nil_check((*(P1026)rt_nil_check(F->t_307)).ocap)).ival) == ((rt_int)1LL)))) {
F->result_ = 1;
goto ret_;
}
while ((F->c_1588 != NULL)) {
if (((*(P1047)rt_nil_check(F->c_1588)).d == (*(P1026)rt_nil_check(F->t_307)).ocap)) {
F->result_ = 1;
goto ret_;
}
F->c_1588 = (*(P1047)rt_nil_check(F->c_1588)).next;
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
F->i_1589 = RT_R_IUNDEF;
F->i_1589 = ((rt_int)1LL);
if (((((rt_int)(((*F->pat_310)).len)) == ((rt_int)0LL)) || (((rt_int)(((*F->s_309)).len)) < ((rt_int)(((*F->pat_310)).len))))) {
F->result_ = (*F->s_309);
goto ret_;
}
while ((rt_sub(rt_add(rt_r_ichk(F->i_1589), ((rt_int)(((*F->pat_310)).len))), ((rt_int)1LL)) <= ((rt_int)(((*F->s_309)).len)))) {
if (rt_str_eq(rt_str_slice((*F->s_309), rt_r_ichk(F->i_1589), rt_sub(rt_add(rt_r_ichk(F->i_1589), ((rt_int)(((*F->pat_310)).len))), ((rt_int)1LL))), (*F->pat_310))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_slice((*F->s_309), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_1589), ((rt_int)1LL))), (*F->r_311)), f_replace_all_312(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_309), rt_add(rt_r_ichk(F->i_1589), ((rt_int)(((*F->pat_310)).len))), ((rt_int)(((*F->s_309)).len))); b_; }), &(*F->pat_310), &(*F->r_311)));
goto ret_;
}
F->i_1589 = rt_add(rt_r_ichk(F->i_1589), ((rt_int)1LL));
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
F->l_1590 = NULL;
F->l_1590 = g_psub_1081;
F->r_1591 = NULL;
F->r_1591 = f_mk_3(&(*F->s_313));
while ((F->l_1590 != NULL)) {
F->r_1591 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_replace_all_312(&(((P1013)rt_nil_check(F->r_1591))->all), &(((P1013)rt_nil_check((*(P1024)rt_nil_check(F->l_1590)).s))->all), &(((P1013)rt_nil_check((*(P1024)rt_nil_check((*(P1024)rt_nil_check(F->l_1590)).next)).s))->all)); b_; }));
F->l_1590 = (*(P1024)rt_nil_check((*(P1024)rt_nil_check(F->l_1590)).next)).next;
}
F->result_ = (((P1013)rt_nil_check(F->r_1591))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_new_type_318(P1030 y_315, P1020 st_316, P1022 *c_317) {
  struct f_new_type_318fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_315 = y_315;
F->st_316 = st_316;
F->c_317 = c_317;
F->c_317v = *F->c_317;
F->d_1592 = NULL;
F->d_1592 = (*(P1030)rt_nil_check(F->y_315)).decl;
F->p_1593 = NULL;
F->uc_1594 = NULL;
F->c_317v = f_new_cons_184();
if (((*(P1030)rt_nil_check(F->y_315)).t == NULL)) {
(*(P1030)rt_nil_check(F->y_315)).t = f_new_typ_183((((rt_int)15LL)));
(*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_315)).t)).name = (*(P1030)rt_nil_check(F->y_315)).name;
(*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_315)).t)).decl = F->d_1592;
(*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_315)).t)).tparams = (*(P1020)rt_nil_check(F->d_1592)).b;
if ((g_caps_1079 != NULL)) {
(*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_315)).t)).ocap = (*(P1047)rt_nil_check(g_caps_1079)).d;
}
f_open_scope_177();
F->p_1593 = (*(P1020)rt_nil_check(F->d_1592)).b;
while ((F->p_1593 != NULL)) {
F->z_1595 = NULL;
F->z_1595 = f_new_sym_181((((rt_int)2LL)), (*(P1020)rt_nil_check(F->p_1593)).name);
F->zc_1596 = NULL;
(*(P1030)rt_nil_check(F->z_1595)).t = f_resolve_subtype_268((*(P1020)rt_nil_check(F->p_1593)).a, &F->zc_1596);
(*(P1030)rt_nil_check(F->z_1595)).mnext = (*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_315)).t)).tpsyms;
(*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_315)).t)).tpsyms = F->z_1595;
(*(P1030)rt_nil_check(F->z_1595)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1593)).name))->all))), rt_str("@", 1)); b_; }));
f_define_168(F->z_1595, rt_r_ichk((*(P1020)rt_nil_check(F->d_1592)).line));
F->p_1593 = (*(P1020)rt_nil_check(F->p_1593)).next;
}
(*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_315)).t)).under = f_resolve_subtype_268((*(P1020)rt_nil_check(F->d_1592)).a, &F->uc_1594);
(*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_315)).t)).elemcons = F->uc_1594;
if (((*(P1020)rt_nil_check(F->d_1592)).c != NULL)) {
f_check_rep_332((*(P1020)rt_nil_check(F->d_1592)).c, (*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_315)).t)).under, F->uc_1594, 1, 0, F->d_1592);
(*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_315)).t)).repn = (*(P1020)rt_nil_check(F->d_1592)).c;
}
f_close_scope_178();
}
(*(P1022)rt_nil_check(F->c_317v)).args = (*(P1020)rt_nil_check(F->st_316)).b;
F->result_ = (*(P1030)rt_nil_check(F->y_315)).t;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_317) = F->c_317v;
  RT_FPOP();
  return F->result_;
}

static rt_int f_needed_bits_321(P1026 t_319, P1022 c_320) {
  struct f_needed_bits_321fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_319 = t_319;
F->c_320 = c_320;
F->n_1597 = RT_R_IUNDEF;
F->n_1597 = ((rt_int)0LL);
F->v_1598 = RT_R_IUNDEF;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_319)).kind) == (((rt_int)2LL)))) {
F->result_ = ((rt_int)1LL);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_319)).kind) == (((rt_int)4LL)))) {
F->v_1598 = rt_sub(f_list_len_71((*(P1026)rt_nil_check(F->t_319)).lits), ((rt_int)1LL));
if (((F->c_320 != NULL) && rt_r_echk((*(P1022)rt_nil_check(F->c_320)).hasm))) {
F->v_1598 = rt_r_ichk((*(P1022)rt_nil_check(F->c_320)).mhi);
}
} else if ((((rt_r_ichk((*(P1026)rt_nil_check(F->t_319)).kind) == (((rt_int)1LL))) && (F->c_320 != NULL)) && rt_r_echk((*(P1022)rt_nil_check(F->c_320)).hasm))) {
if ((rt_r_ichk((*(P1022)rt_nil_check(F->c_320)).mlo) < ((rt_int)0LL))) {
F->v_1598 = rt_r_ichk((*(P1022)rt_nil_check(F->c_320)).mhi);
if ((rt_sub(rt_neg(rt_r_ichk((*(P1022)rt_nil_check(F->c_320)).mlo)), ((rt_int)1LL)) > rt_r_ichk(F->v_1598))) {
F->v_1598 = rt_sub(rt_neg(rt_r_ichk((*(P1022)rt_nil_check(F->c_320)).mlo)), ((rt_int)1LL));
}
F->n_1597 = ((rt_int)1LL);
} else {
F->v_1598 = rt_r_ichk((*(P1022)rt_nil_check(F->c_320)).mhi);
}
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_319)).kind) == (((rt_int)1LL)))) {
F->result_ = ((rt_int)64LL);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_319)).kind) == (((rt_int)3LL)))) {
if (((((F->c_320 != NULL) && ((*(P1022)rt_nil_check(F->c_320)).prec != NULL)) && f_has_digits_only_323(&(((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_320)).prec))->all))) && (rt_int_of_str((((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_320)).prec))->all)) <= ((rt_int)6LL)))) {
F->result_ = ((rt_int)32LL);
goto ret_;
}
F->result_ = ((rt_int)64LL);
goto ret_;
} else {
F->result_ = rt_neg(((rt_int)1LL));
goto ret_;
}
while ((rt_r_ichk(F->v_1598) > ((rt_int)0LL))) {
F->n_1597 = rt_add(rt_r_ichk(F->n_1597), ((rt_int)1LL));
F->v_1598 = rt_div(rt_r_ichk(F->v_1598), ((rt_int)2LL));
}
if ((rt_r_ichk(F->n_1597) == ((rt_int)0LL))) {
F->n_1597 = ((rt_int)1LL);
}
F->result_ = rt_r_ichk(F->n_1597);
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
{ rt_int lo1600 = ((rt_int)1LL), hi1601 = ((rt_int)(((*F->s_322)).len));
for (rt_int it1602 = lo1600; it1602 <= hi1601; it1602++) {
F->i_1599 = it1602;
if ((!f_is_digit_11(rt_r_echk(rt_str_get((*F->s_322), F->i_1599))))) {
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

static int f_built_in_only_325(P1026 t_324) {
  struct f_built_in_only_325fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_324 = t_324;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_324)).kind) == (((rt_int)15LL)))) {
F->result_ = ((*(P1026)rt_nil_check(F->t_324)).repn != NULL);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_324)).kind) == (((rt_int)8LL)))) {
F->result_ = 0;
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_324)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_324)).kind) == (((rt_int)17LL))))) {
F->f_1603 = NULL;
F->f_1603 = (*(P1026)rt_nil_check(F->t_324)).fields;
while ((F->f_1603 != NULL)) {
if ((!f_built_in_only_325((*(P1028)rt_nil_check(F->f_1603)).t))) {
F->result_ = 0;
goto ret_;
}
F->f_1603 = (*(P1028)rt_nil_check(F->f_1603)).next;
}
} else if ((((rt_r_ichk((*(P1026)rt_nil_check(F->t_324)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_324)).kind) == (((rt_int)16LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_324)).kind) == (((rt_int)5LL))))) {
F->result_ = (((*(P1026)rt_nil_check(F->t_324)).elem == NULL) || f_built_in_only_325((*(P1026)rt_nil_check(F->t_324)).elem));
goto ret_;
}
F->result_ = 1;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_rep_332(P1020 items_326, P1026 t_327, P1022 c_328, int top_329, int indirect_330, P1020 d_331) {
  struct f_check_rep_332fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_326 = items_326;
F->t_327 = t_327;
F->c_328 = c_328;
F->top_329 = top_329;
F->indirect_330 = indirect_330;
F->d_331 = d_331;
F->it_1604 = NULL;
F->it_1604 = F->items_326;
F->ok_1605 = RT_R_EUNDEF;
F->at_1606 = NULL;
if (((F->top_329 && (!F->indirect_330)) && (!f_built_in_only_325(F->t_327)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_331)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only built-in types may underlie a representation", 49); b_; }));
}
while ((F->it_1604 != NULL)) {
F->w_1607 = rt_str_copy((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->it_1604)).name))->all));
if (rt_str_eq(F->w_1607, rt_str("SIZE", 4))) {
F->v_1608 = RT_R_IUNDEF;
F->v_1608 = f_manifest_366((*(P1020)rt_nil_check(F->it_1604)).a, &F->ok_1605);
F->dummy_1609 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->it_1604)).a, g_ty_int_1104, &F->at_1606));
f_check_type_232(F->at_1606, g_ty_int_1104, rt_r_ichk((*(P1020)rt_nil_check(F->it_1604)).line));
if ((rt_r_echk(F->ok_1605) && (rt_r_ichk(F->v_1608) < ((rt_int)0LL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->it_1604)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a SIZE is not negative", 22); b_; }));
} else if (((rt_r_echk(F->ok_1605) && (f_needed_bits_321(F->t_327, F->c_328) > rt_r_ichk(F->v_1608))) && (!F->indirect_330))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->it_1604)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("SIZE(", 5), f_itos_7(rt_r_ichk(F->v_1608))), rt_str(") is too small for this subtype, which needs ", 45)), f_itos_7(f_needed_bits_321(F->t_327, F->c_328))), rt_str(" bits", 5)); b_; }));
}
} else if (rt_str_eq(F->w_1607, rt_str("ALIGN", 5))) {
F->m_1610 = RT_R_IUNDEF;
F->m_1610 = f_manifest_366((*(P1020)rt_nil_check(F->it_1604)).a, &F->ok_1605);
if ((!F->top_329)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->it_1604)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALIGN is for the whole underlying subtype only", 46); b_; }));
}
if ((rt_r_echk(F->ok_1605) && (rt_r_ichk(F->m_1610) <= ((rt_int)0LL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->it_1604)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the modulus of ALIGN is greater than zero", 41); b_; }));
}
if ((rt_r_echk(F->ok_1605) && ((*(P1020)rt_nil_check(F->it_1604)).b != NULL))) {
F->ok2_1611 = RT_R_EUNDEF;
F->r_1612 = RT_R_IUNDEF;
F->r_1612 = f_manifest_366((*(P1020)rt_nil_check(F->it_1604)).b, &F->ok2_1611);
if ((rt_r_echk(F->ok2_1611) && ((rt_r_ichk(F->r_1612) < ((rt_int)0LL)) || (rt_r_ichk(F->r_1612) >= rt_r_ichk(F->m_1610))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->it_1604)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALIGN(e1 OF e2) needs e1 in 0 .. e2 - 1", 39); b_; }));
}
}
} else if (rt_str_eq(F->w_1607, rt_str("OFFSET", 6))) {
F->o_1613 = RT_R_IUNDEF;
F->o_1613 = f_manifest_366((*(P1020)rt_nil_check(F->it_1604)).a, &F->ok_1605);
if (F->top_329) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->it_1604)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET is for components of records and unions only", 51); b_; }));
} else if ((rt_r_echk(F->ok_1605) && (rt_r_ichk(F->o_1613) < ((rt_int)0LL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->it_1604)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an OFFSET is not negative", 25); b_; }));
}
} else if ((rt_str_eq(F->w_1607, rt_str("RECORD", 6)) || rt_str_eq(F->w_1607, rt_str("UNION", 5)))) {
F->comp_1614 = NULL;
F->comp_1614 = (*(P1020)rt_nil_check(F->it_1604)).c;
if (((rt_str_eq(F->w_1607, rt_str("RECORD", 6)) && (rt_r_ichk((*(P1026)rt_nil_check(F->t_327)).kind) != (((rt_int)7LL)))) || (rt_str_eq(F->w_1607, rt_str("UNION", 5)) && (rt_r_ichk((*(P1026)rt_nil_check(F->t_327)).kind) != (((rt_int)17LL)))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->it_1604)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->w_1607, rt_str(" is a representation for ", 25)), F->w_1607), rt_str(" types only", 11)); b_; }));
}
while ((F->comp_1614 != NULL)) {
F->f_1615 = NULL;
F->f_1615 = (*(P1026)rt_nil_check(F->t_327)).fields;
while (((F->f_1615 != NULL) && (!rt_str_eq((((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_1615)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->comp_1614)).name))->all))))) {
F->f_1615 = (*(P1028)rt_nil_check(F->f_1615)).next;
}
if ((F->f_1615 != NULL)) {
f_check_rep_332((*(P1020)rt_nil_check(F->comp_1614)).a, (*(P1028)rt_nil_check(F->f_1615)).t, (*(P1028)rt_nil_check(F->f_1615)).c, 0, 0, F->d_331);
} else if (((!(rt_str_eq(F->w_1607, rt_str("UNION", 5)) && rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->comp_1614)).name))->all), rt_str("TAG", 3)))) && (!(F->top_329 && f_formal_named_335(F->d_331, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->comp_1614)).name))->all)))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->comp_1614)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->comp_1614)).name))->all), rt_str(" is not a component", 19)); b_; }));
}
F->comp_1614 = (*(P1020)rt_nil_check(F->comp_1614)).next;
}
} else if (rt_str_eq(F->w_1607, rt_str("ARRAY", 5))) {
F->k_1616 = NULL;
F->k_1616 = (*(P1020)rt_nil_check(F->it_1604)).d;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_327)).kind) != (((rt_int)6LL))) || (f_list_len_71((*(P1020)rt_nil_check(F->it_1604)).d) != rt_r_ichk((*(P1026)rt_nil_check(F->t_327)).ndim)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->it_1604)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ARRAY names NORMAL or NOBOUNDS for each index of an array", 57); b_; }));
}
while ((F->k_1616 != NULL)) {
if (((!rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->k_1616)).name))->all), rt_str("NORMAL", 6))) && (!rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->k_1616)).name))->all), rt_str("NOBOUNDS", 8))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->k_1616)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NORMAL or NOBOUNDS expected", 27); b_; }));
}
F->k_1616 = (*(P1020)rt_nil_check(F->k_1616)).next;
}
f_check_rep_332((*(P1020)rt_nil_check(F->it_1604)).c, (*(P1026)rt_nil_check(F->t_327)).elem, (*(P1026)rt_nil_check(F->t_327)).elemcons, 0, 0, F->d_331);
} else if (rt_str_eq(F->w_1607, rt_str("ENUM", 4))) {
if ((((rt_r_ichk((*(P1026)rt_nil_check(F->t_327)).kind) != (((rt_int)4LL))) || ((*(P1020)rt_nil_check(F->it_1604)).d == NULL)) || (!rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->it_1604)).d)).name))->all), rt_str("STANDARD", 8))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->it_1604)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ENUM(STANDARD) is for enumeration subtypes", 42); b_; }));
}
} else if (rt_str_eq(F->w_1607, rt_str("PTR", 3))) {
if ((((((!F->indirect_330) || (!F->top_329)) || ((*(P1020)rt_nil_check(F->it_1604)).d == NULL)) || (!rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->it_1604)).d)).name))->all), rt_str("FREE", 4)))) || (((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->it_1604)).d)).next != NULL) && (!rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->it_1604)).d)).next)).name))->all), rt_str("UNCHECKED", 9)))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->it_1604)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR(FREE) or PTR(FREE UNCHECKED) is for indirect types", 54); b_; }));
}
} else if (rt_str_eq(F->w_1607, rt_str("ABSENT", 6))) {
F->a_1617 = NULL;
F->a_1617 = (*(P1020)rt_nil_check(F->it_1604)).d;
if ((!F->top_329)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->it_1604)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ABSENT is for the whole type", 28); b_; }));
}
while ((F->a_1617 != NULL)) {
if ((!f_formal_named_335(F->d_331, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->a_1617)).name))->all)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->a_1617)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->a_1617)).name))->all), rt_str(" is not a formal parameter of the type", 38)); b_; }));
}
F->a_1617 = (*(P1020)rt_nil_check(F->a_1617)).next;
}
}
F->it_1604 = (*(P1020)rt_nil_check(F->it_1604)).next;
}
ret_:
  RT_FPOP();
  return;
}

static int f_formal_named_335(P1020 d_333, rstr *name_334) {
  struct f_formal_named_335fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_333 = d_333;
F->name_334 = name_334;
F->p_1618 = NULL;
F->p_1618 = (*(P1020)rt_nil_check(F->d_333)).b;
while ((F->p_1618 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1618)).name))->all), (*F->name_334))) {
F->result_ = 1;
goto ret_;
}
F->p_1618 = (*(P1020)rt_nil_check(F->p_1618)).next;
}
F->p_1618 = (*(P1020)rt_nil_check(F->d_333)).d;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->d_333)).kind) == (((rt_int)44LL)))) {
while ((F->p_1618 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1618)).name))->all), (*F->name_334))) {
F->result_ = 1;
goto ret_;
}
F->p_1618 = (*(P1020)rt_nil_check(F->p_1618)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_unchecked_free_337(P1026 t_336) {
  struct f_unchecked_free_337fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_336 = t_336;
F->it_1619 = NULL;
if ((((*(P1026)rt_nil_check(F->t_336)).decl == NULL) || (rt_r_ichk((*(P1020)rt_nil_check((*(P1026)rt_nil_check(F->t_336)).decl)).kind) != (((rt_int)44LL))))) {
F->result_ = 0;
goto ret_;
}
F->it_1619 = (*(P1020)rt_nil_check((*(P1026)rt_nil_check(F->t_336)).decl)).c;
while ((F->it_1619 != NULL)) {
if (((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->it_1619)).name))->all), rt_str("PTR", 3)) && ((*(P1020)rt_nil_check(F->it_1619)).d != NULL)) && ((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->it_1619)).d)).next != NULL))) {
F->result_ = 1;
goto ret_;
}
F->it_1619 = (*(P1020)rt_nil_check(F->it_1619)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_init_storage_341(rstr *lval_338, P1026 t_339, P1022 c_340) {
  struct f_init_storage_341fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_338 = lval_338;
F->t_339 = t_339;
F->c_340 = c_340;
f_make_storage_356(&(*F->lval_338), F->t_339, F->c_340);
if (((*(P1026)rt_nil_check(F->t_339)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1026)rt_nil_check(F->t_339)).initp, &(*F->lval_338)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_init_call_344(P1030 y_342, rstr *lval_343) {
  struct f_init_call_344fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_342 = y_342;
F->lval_343 = lval_343;
F->link_1620 = NULL;
F->link_1620 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P1030)rt_nil_check(F->y_342)).level) > ((rt_int)0LL))) {
F->link_1620 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1622 = ((rt_int)1LL), hi1623 = rt_sub(rt_r_ichk(g_cur_level_1077), rt_r_ichk((*(P1030)rt_nil_check(F->y_342)).level));
for (rt_int it1624 = lo1622; it1624 <= hi1623; it1624++) {
F->i_1621 = it1624;
F->link_1620 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->link_1620))->all), rt_str("->up", 4)); b_; }));
}
}
F->link_1620 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->link_1620))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_342)).cname))->all), rt_str("(", 1)), (((P1013)rt_nil_check(F->link_1620))->all)), rt_str("&", 1)), (*F->lval_343)), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_needs_fin_346(P1026 t_345) {
  struct f_needs_fin_346fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_345 = t_345;
if ((F->t_345 == NULL)) {
F->result_ = 0;
goto ret_;
}
if (((*(P1026)rt_nil_check(F->t_345)).finalp != NULL)) {
F->result_ = 1;
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_345)).kind) == (((rt_int)15LL)))) {
F->result_ = f_needs_fin_346((*(P1026)rt_nil_check(F->t_345)).under);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_345)).kind) == (((rt_int)6LL)))) {
F->result_ = f_needs_fin_346((*(P1026)rt_nil_check(F->t_345)).elem);
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_345)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_345)).kind) == (((rt_int)17LL))))) {
F->f_1625 = NULL;
F->f_1625 = (*(P1026)rt_nil_check(F->t_345)).fields;
while ((F->f_1625 != NULL)) {
if (f_needs_fin_346((*(P1028)rt_nil_check(F->f_1625)).t)) {
F->result_ = 1;
goto ret_;
}
F->f_1625 = (*(P1028)rt_nil_check(F->f_1625)).next;
}
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_fin_code_349(rstr *lval_347, P1026 t_348) {
  struct f_fin_code_349fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_347 = lval_347;
F->t_348 = t_348;
F->r_1626 = NULL;
F->r_1626 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1026)rt_nil_check(F->t_348)).finalp != NULL)) {
F->r_1626 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_init_call_344((*(P1026)rt_nil_check(F->t_348)).finalp, &(*F->lval_347)), rt_str(" ", 1)); b_; }));
}
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_348)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->t_348)).tparams == NULL))) {
F->result_ = rt_str_cat((((P1013)rt_nil_check(F->r_1626))->all), f_fin_code_349(&(*F->lval_347), (*(P1026)rt_nil_check(F->t_348)).under));
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_348)).kind) == (((rt_int)15LL)))) {
F->result_ = rt_str_cat((((P1013)rt_nil_check(F->r_1626))->all), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_347), rt_str(".all", 4)); b_; }), (*(P1026)rt_nil_check(F->t_348)).under));
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_348)).kind) == (((rt_int)6LL))) && f_needs_fin_346((*(P1026)rt_nil_check(F->t_348)).elem))) {
F->i_1627 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fi", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_1626))->all), rt_str("for (rt_int ", 12)), F->i_1627), rt_str(" = 0; ", 6)), F->i_1627), rt_str(" < ", 3)), f_acnt_249(F->t_348, &(*F->lval_347))), rt_str("; ", 2)), F->i_1627), rt_str("++) { ", 6)), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_347), rt_str(".p[", 3)), F->i_1627), rt_str("]", 1)); b_; }), (*(P1026)rt_nil_check(F->t_348)).elem)), rt_str(" }", 2));
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_348)).kind) == (((rt_int)7LL)))) {
F->f_1628 = NULL;
F->f_1628 = (*(P1026)rt_nil_check(F->t_348)).fields;
while ((F->f_1628 != NULL)) {
if (f_needs_fin_346((*(P1028)rt_nil_check(F->f_1628)).t)) {
F->r_1626 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_1626))->all), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_347), rt_str(".", 1)), f_field_c_17(&(((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_1628)).name))->all))); b_; }), (*(P1028)rt_nil_check(F->f_1628)).t)), rt_str(" ", 1)); b_; }));
}
F->f_1628 = (*(P1028)rt_nil_check(F->f_1628)).next;
}
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_348)).kind) == (((rt_int)17LL)))) {
F->f_1629 = NULL;
F->f_1629 = (*(P1026)rt_nil_check(F->t_348)).fields;
F->i_1630 = RT_R_IUNDEF;
F->i_1630 = ((rt_int)0LL);
F->r_1626 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_1626))->all), rt_str("switch (", 8)), (*F->lval_347)), rt_str(".tag) {", 7)); b_; }));
while ((F->f_1629 != NULL)) {
if (f_needs_fin_346((*(P1028)rt_nil_check(F->f_1629)).t)) {
F->r_1626 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_1626))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1630))), rt_str(": ", 2)), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_347), rt_str(".u.", 3)), f_field_c_17(&(((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_1629)).name))->all))); b_; }), (*(P1028)rt_nil_check(F->f_1629)).t)), rt_str(" break;", 7)); b_; }));
}
F->i_1630 = rt_add(rt_r_ichk(F->i_1630), ((rt_int)1LL));
F->f_1629 = (*(P1028)rt_nil_check(F->f_1629)).next;
}
F->r_1626 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_1626))->all), rt_str(" }", 2)); b_; }));
}
F->result_ = (((P1013)rt_nil_check(F->r_1626))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_tparam_type_352(P1026 t_350, rstr *name_351) {
  struct f_tparam_type_352fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_350 = t_350;
F->name_351 = name_351;
F->z_1631 = NULL;
F->z_1631 = (*(P1026)rt_nil_check(F->t_350)).tpsyms;
while ((F->z_1631 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->z_1631)).name))->all), (*F->name_351))) {
F->result_ = (*(P1030)rt_nil_check(F->z_1631)).t;
goto ret_;
}
F->z_1631 = (*(P1030)rt_nil_check(F->z_1631)).mnext;
}
F->result_ = g_ty_int_1104;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_make_storage_356(rstr *lval_353, P1026 t_354, P1022 c_355) {
  struct f_make_storage_356fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_353 = lval_353;
F->t_354 = t_354;
F->c_355 = c_355;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_354)).kind) == (((rt_int)15LL)))) {
F->p_1632 = NULL;
F->p_1632 = (*(P1026)rt_nil_check(F->t_354)).tparams;
F->a_1633 = NULL;
F->a_1633 = (*(P1022)rt_nil_check(F->c_355)).args;
F->uc_1634 = NULL;
F->ut_1635 = NULL;
F->at_1636 = NULL;
if ((f_list_len_71(F->a_1633) != f_list_len_71(F->p_1632))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("a variable of type ", 19), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_354)).name))->all)), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1632))), rt_str(" constraint values", 18)); b_; }));
}
while ((F->p_1632 != NULL)) {
F->pt_1637 = f_tparam_type_352(F->t_354, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1632)).name))->all));
F->v_1638 = rt_str_copy(f_gexpr_794(F->a_1633, F->pt_1637, &F->at_1636));
f_check_type_232(F->at_1636, F->pt_1637, rt_r_ichk((*(P1020)rt_nil_check(F->a_1633)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".p_", 3)), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1632)).name))->all))), rt_str(" = ", 3)), F->v_1638), rt_str(";", 1)); b_; }));
F->p_1632 = (*(P1020)rt_nil_check(F->p_1632)).next;
F->a_1633 = (*(P1020)rt_nil_check(F->a_1633)).next;
}
{
F->saved_1639 = NULL;
F->saved_1639 = g_psub_1081;
F->p_1632 = (*(P1026)rt_nil_check(F->t_354)).tparams;
while ((F->p_1632 != NULL)) {
F->l1_1640 = NULL;
F->l2_1641 = NULL;
{ R1025 *cell1642 = rt_alloc(sizeof(R1025));
(*cell1642).s = NULL;
(*cell1642).next = NULL;
F->l1_1640 = cell1642;
}
{ R1025 *cell1643 = rt_alloc(sizeof(R1025));
(*cell1643).s = NULL;
(*cell1643).next = NULL;
F->l2_1641 = cell1643;
}
(*(P1024)rt_nil_check(F->l1_1640)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1632)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1024)rt_nil_check(F->l2_1641)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".p_", 3)), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1632)).name))->all))); b_; }));
(*(P1024)rt_nil_check(F->l1_1640)).next = F->l2_1641;
(*(P1024)rt_nil_check(F->l2_1641)).next = g_psub_1081;
g_psub_1081 = F->l1_1640;
F->p_1632 = (*(P1020)rt_nil_check(F->p_1632)).next;
}
if (((*(P1026)rt_nil_check(F->t_354)).tparams == NULL)) {
f_init_storage_341(&(*F->lval_353), (*(P1026)rt_nil_check(F->t_354)).under, (*(P1026)rt_nil_check(F->t_354)).elemcons);
} else {
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(".all", 4)); b_; }), (*(P1026)rt_nil_check(F->t_354)).under, (*(P1026)rt_nil_check(F->t_354)).elemcons);
}
g_psub_1081 = F->saved_1639;
}
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_354)).kind) == (((rt_int)12LL)))) {
if (((*(P1022)rt_nil_check(F->c_355)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox variable needs a size", 31); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(" = rt_alloc(sizeof(rt_mbox));", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mbox_init(", 13), (*F->lval_353)), rt_str(", ", 2)), f_subst_314(&(((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_355)).lo))->all))), rt_str(", sizeof(", 9)), f_ctype_234((*(P1026)rt_nil_check(F->t_354)).elem)), rt_str("), ", 3)), f_mcopy_392((*(P1026)rt_nil_check(F->t_354)).elem)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_354)).kind) == (((rt_int)13LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_lock_init(&", 14), (*F->lval_353)), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_354)).kind) == (((rt_int)16LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = ", 3)), f_empty_set_306(F->t_354)), rt_str(";", 1)); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_354)).kind) == (((rt_int)10LL)))) {
F->at_1644 = NULL;
if ((((F->c_355 == NULL) || ((*(P1022)rt_nil_check(F->c_355)).args == NULL)) || ((*(P1020)rt_nil_check((*(P1022)rt_nil_check(F->c_355)).args)).next == NULL))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a file variable needs its access and use: FILE[S](access, use)", 62); b_; }));
}
if (((!f_text_file_975(F->t_354)) && (!f_flat_358((*(P1026)rt_nil_check(F->t_354)).elem)))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the components of a file on the simulated machine hold no strings, arrays, sets or pointers", 91); b_; }));
}
{
F->acc_1645 = rt_str_copy(f_gexpr_794((*(P1022)rt_nil_check(F->c_355)).args, g_file_access_type_1121, &F->at_1644));
F->use_1646 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check((*(P1022)rt_nil_check(F->c_355)).args)).next, g_file_mode_type_1115, &F->at_1644));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = rt_r_file_new(", 17)), F->acc_1645), rt_str(", ", 2)), F->use_1646), rt_str(", sizeof(", 9)), f_ctype_234((*(P1026)rt_nil_check(F->t_354)).elem)), rt_str("), ", 3)), f_bool_text_382(f_text_file_975(F->t_354))), rt_str(");", 2)); b_; }));
}
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_354)).kind) == (((rt_int)14LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_354)).kind) == (((rt_int)8LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(" = NULL;", 8)); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_354)).kind) == (((rt_int)5LL)))) {
if (((*(P1022)rt_nil_check(F->c_355)).slen == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a string variable needs a length", 32); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = rt_str_new(", 14)), f_subst_314(&(((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_355)).slen))->all))), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_354)).kind) == (((rt_int)6LL)))) {
if (((*(P1022)rt_nil_check(F->c_355)).lo == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
{ rt_int lo1648 = ((rt_int)1LL), hi1649 = rt_r_ichk((*(P1026)rt_nil_check(F->t_354)).ndim);
for (rt_int it1650 = lo1648; it1650 <= hi1649; it1650++) {
F->k_1647 = it1650;
if ((f_cons_lo_252(F->c_355, F->k_1647) == NULL)) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an array variable needs index bounds", 36); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".", 1)), f_dim_lo_242(F->k_1647)), rt_str(" = ", 3)), f_subst_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1013)rt_nil_check(f_cons_lo_252(F->c_355, F->k_1647)))->all); b_; }))), rt_str("; ", 2)), (*F->lval_353)), rt_str(".", 1)), f_dim_hi_244(F->k_1647)), rt_str(" = ", 3)), f_subst_314(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1013)rt_nil_check(f_cons_hi_255(F->c_355, F->k_1647)))->all); b_; }))), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_354)).ndim) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".lo2 = ", 7)), (*F->lval_353)), rt_str(".hi2 = 1;", 9)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_234((*(P1026)rt_nil_check(F->t_354)).elem)), rt_str(") * (size_t)", 12)), f_acnt_249(F->t_354, &(*F->lval_353))), rt_str(" + 1);", 6)); b_; }));
if (((((((((((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)15LL)))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)12LL)))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)13LL)))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->t_354)).elem)).kind) == (((rt_int)17LL)))) || (rt_r_echk(g_mark_uninit_1096) && (!rt_str_eq(f_uninit_value_360((*(P1026)rt_nil_check(F->t_354)).elem), rt_str("", 0)))))) {
F->i_1651 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("i", 1); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->i_1651), rt_str(" = 0; ", 6)), F->i_1651), rt_str(" < ", 3)), f_acnt_249(F->t_354, &(*F->lval_353))), rt_str("; ", 2)), F->i_1651), rt_str("++) {", 5)); b_; }));
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".p[", 3)), F->i_1651), rt_str("]", 1)); b_; }), (*(P1026)rt_nil_check(F->t_354)).elem, (*(P1026)rt_nil_check(F->t_354)).elemcons);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_354)).kind) == (((rt_int)7LL)))) {
F->f_1652 = NULL;
F->f_1652 = (*(P1026)rt_nil_check(F->t_354)).fields;
while ((F->f_1652 != NULL)) {
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".", 1)), f_field_c_17(&(((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_1652)).name))->all))); b_; }), (*(P1028)rt_nil_check(F->f_1652)).t, (*(P1028)rt_nil_check(F->f_1652)).c);
F->f_1652 = (*(P1028)rt_nil_check(F->f_1652)).next;
}
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_354)).kind) == (((rt_int)17LL)))) {
if (((F->c_355 != NULL) && rt_r_echk((*(P1022)rt_nil_check(F->c_355)).hasm))) {
F->f_1653 = NULL;
F->f_1653 = (*(P1026)rt_nil_check(F->t_354)).fields;
{ rt_int lo1655 = ((rt_int)1LL), hi1656 = rt_r_ichk((*(P1022)rt_nil_check(F->c_355)).mlo);
for (rt_int it1657 = lo1655; it1657 <= hi1656; it1657++) {
F->i_1654 = it1657;
F->f_1653 = (*(P1028)rt_nil_check(F->f_1653)).next;
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk((*(P1022)rt_nil_check(F->c_355)).mlo))), rt_str(";", 1)); b_; }));
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->lval_353), rt_str(".u.", 3)), f_field_c_17(&(((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_1653)).name))->all))); b_; }), (*(P1028)rt_nil_check(F->f_1653)).t, (*(P1028)rt_nil_check(F->f_1653)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->lval_353), rt_str(".tag = -1;", 10)); b_; }));
}
} else if ((rt_r_echk(g_mark_uninit_1096) && (!rt_str_eq(f_uninit_value_360(F->t_354), rt_str("", 0))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_353), rt_str(" = ", 3)), f_uninit_value_360(F->t_354)), rt_str(";", 1)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_flat_358(P1026 t_357) {
  struct f_flat_358fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_357 = t_357;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_357)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->t_357)).tparams == NULL))) {
F->result_ = f_flat_358((*(P1026)rt_nil_check(F->t_357)).under);
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_357)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_357)).kind) == (((rt_int)17LL))))) {
F->f_1658 = NULL;
F->f_1658 = (*(P1026)rt_nil_check(F->t_357)).fields;
while ((F->f_1658 != NULL)) {
if ((!f_flat_358((*(P1028)rt_nil_check(F->f_1658)).t))) {
F->result_ = 0;
goto ret_;
}
F->f_1658 = (*(P1028)rt_nil_check(F->f_1658)).next;
}
F->result_ = 1;
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P1026)rt_nil_check(F->t_357)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_357)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_357)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_357)).kind) == (((rt_int)2LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_uninit_value_360(P1026 t_359) {
  struct f_uninit_value_360fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_359 = t_359;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_359)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str("RT_R_IUNDEF", 11);
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_359)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_359)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str("RT_R_EUNDEF", 11);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_359)).kind) == (((rt_int)3LL)))) {
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

static rstr f_init_chk_363(P1026 t_361, rstr *v_362) {
  struct f_init_chk_363fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_361 = t_361;
F->v_362 = v_362;
F->b_1659 = NULL;
F->b_1659 = f_base_of_223(F->t_361);
if (f_suppressed_506(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_INIT", 6); b_; }))) {
F->result_ = (*F->v_362);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->b_1659)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_ichk(", 10), (*F->v_362)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->b_1659)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->b_1659)).kind) == (((rt_int)2LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_echk(", 10), (*F->v_362)), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->b_1659)).kind) == (((rt_int)3LL)))) {
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

static rt_int f_manifest_366(P1020 e_364, int *ok_365) {
  struct f_manifest_366fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_364 = e_364;
F->ok_365 = ok_365;
F->ok_365v = *F->ok_365;
F->v_1660 = NULL;
F->v_1660 = f_meval_375(F->e_364, &F->ok_365v);
if ((rt_r_echk(F->ok_365v) && (rt_r_ichk((*(P1039)rt_nil_check(F->v_1660)).kind) == (((rt_int)1LL))))) {
F->result_ = rt_r_ichk((*(P1039)rt_nil_check(F->v_1660)).i);
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

static P1039 f_mk_mval_369(rt_int kind_367, rt_int i_368) {
  struct f_mk_mval_369fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_367 = kind_367;
F->i_368 = i_368;
F->v_1661 = NULL;
{ R1040 *cell1662 = rt_alloc(sizeof(R1040));
(*cell1662).s = NULL;
(*cell1662).t = NULL;
F->v_1661 = cell1662;
}
(*(P1039)rt_nil_check(F->v_1661)).kind = F->kind_367;
(*(P1039)rt_nil_check(F->v_1661)).i = F->i_368;
F->result_ = F->v_1661;
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
F->r_1663 = RT_R_IUNDEF;
F->r_1663 = ((rt_int)1LL);
{ rt_int lo1665 = ((rt_int)1LL), hi1666 = F->b_371;
for (rt_int it1667 = lo1665; it1667 <= hi1666; it1667++) {
F->i_1664 = it1667;
F->r_1663 = rt_mul(rt_r_ichk(F->r_1663), F->a_370);
}
}
F->result_ = rt_r_ichk(F->r_1663);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1039 f_meval_375(P1020 e_373, int *ok_374) {
  struct f_meval_375fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_373 = e_373;
F->ok_374 = ok_374;
F->ok_374v = *F->ok_374;
F->a_1668 = NULL;
F->b_1669 = NULL;
F->ok2_1670 = RT_R_EUNDEF;
F->op_1671 = NULL;
F->ok_374v = 0;
if ((F->e_373 == NULL)) {
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_373)).kind) == (((rt_int)1LL)))) {
F->ok_374v = 1;
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_r_ichk((*(P1020)rt_nil_check(F->e_373)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_373)).kind) == (((rt_int)5LL)))) {
F->ok_374v = 1;
F->result_ = f_mk_mval_369((((rt_int)2LL)), rt_r_ichk((*(P1020)rt_nil_check(F->e_373)).ival));
goto ret_;
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_373)).kind) == (((rt_int)2LL)))) {
F->a_1668 = f_mk_mval_369((((rt_int)3LL)), ((rt_int)0LL));
{ rt_frame xf1672;
if (RT_TRY(xf1672)) {
(*(P1039)rt_nil_check(F->a_1668)).f = rt_r_float_of_str((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_373)).name))->all));
F->ok_374v = 1;
RT_POP(xf1672);
} else {
RT_POP(xf1672);
int x1673 = rt_xcur;
{
F->ok_374v = 0;
}
}
}
F->result_ = F->a_1668;
goto ret_;
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_373)).kind) == (((rt_int)3LL)))) {
F->ok_374v = 1;
F->a_1668 = f_mk_mval_369((((rt_int)5LL)), ((rt_int)0LL));
(*(P1039)rt_nil_check(F->a_1668)).s = (*(P1020)rt_nil_check(F->e_373)).name;
F->result_ = F->a_1668;
goto ret_;
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_373)).kind) == (((rt_int)4LL)))) {
if ((f_lit_index_265((*(P1026)rt_nil_check(g_ty_ascii_1107)).lits, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_373)).name))->all)) >= ((rt_int)0LL))) {
F->ok_374v = 1;
F->a_1668 = f_mk_mval_369((((rt_int)4LL)), f_lit_index_265((*(P1026)rt_nil_check(g_ty_ascii_1107)).lits, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_373)).name))->all)));
(*(P1039)rt_nil_check(F->a_1668)).t = g_ty_ascii_1107;
(*(P1039)rt_nil_check(F->a_1668)).s = (*(P1020)rt_nil_check(F->e_373)).name;
F->result_ = F->a_1668;
goto ret_;
}
F->a_1668 = f_mk_mval_369((((rt_int)4LL)), rt_neg(((rt_int)1LL)));
(*(P1039)rt_nil_check(F->a_1668)).s = (*(P1020)rt_nil_check(F->e_373)).name;
F->ok_374v = 1;
F->result_ = F->a_1668;
goto ret_;
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_373)).kind) == (((rt_int)17LL)))) {
F->result_ = f_meval_375((*(P1020)rt_nil_check(F->e_373)).a, &F->ok_374v);
goto ret_;
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_373)).kind) == (((rt_int)7LL)))) {
F->y_1674 = NULL;
F->y_1674 = f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_373)).name))->all));
if ((((F->y_1674 != NULL) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_1674)).kind) == (((rt_int)2LL)))) && ((*(P1030)rt_nil_check(F->y_1674)).mv != NULL))) {
F->ok_374v = 1;
F->result_ = (*(P1030)rt_nil_check(F->y_1674)).mv;
goto ret_;
} else if ((((F->y_1674 != NULL) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_1674)).kind) == (((rt_int)2LL)))) && rt_r_echk((*(P1030)rt_nil_check(F->y_1674)).hasmv))) {
F->ok_374v = 1;
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_r_ichk((*(P1030)rt_nil_check(F->y_1674)).mvalue));
goto ret_;
}
F->result_ = NULL;
goto ret_;
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_373)).kind) == (((rt_int)8LL)))) {
F->a_1668 = f_meval_375((*(P1020)rt_nil_check(F->e_373)).a, &F->ok_374v);
if ((!rt_r_echk(F->ok_374v))) {
F->result_ = NULL;
goto ret_;
} else if ((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_373)).name))->all), rt_str("NOT", 3)) && (rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).kind) == (((rt_int)2LL))))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), rt_sub(((rt_int)1LL), rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i)));
goto ret_;
} else if ((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_373)).name))->all), rt_str("-", 1)) && (rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).kind) == (((rt_int)1LL))))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_neg(rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i)));
goto ret_;
} else if ((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_373)).name))->all), rt_str("-", 1)) && (rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).kind) == (((rt_int)3LL))))) {
F->b_1669 = f_mk_mval_369((((rt_int)3LL)), ((rt_int)0LL));
(*(P1039)rt_nil_check(F->b_1669)).f = (-rt_r_fchk((*(P1039)rt_nil_check(F->a_1668)).f));
F->result_ = F->b_1669;
goto ret_;
} else if (((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_373)).name))->all), rt_str("+", 1)) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_373)).name))->all), rt_str("-", 1))) && ((rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).kind) == (((rt_int)3LL)))))) {
F->result_ = F->a_1668;
goto ret_;
}
F->ok_374v = 0;
F->result_ = NULL;
goto ret_;
} else if (((rt_r_ichk((*(P1020)rt_nil_check(F->e_373)).kind) != (((rt_int)9LL))) || f_user_defined_390(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_373)).name))->all)))) {
F->result_ = NULL;
goto ret_;
}
F->op_1671 = (*(P1020)rt_nil_check(F->e_373)).name;
F->a_1668 = f_meval_375((*(P1020)rt_nil_check(F->e_373)).a, &F->ok_374v);
F->b_1669 = f_meval_375((*(P1020)rt_nil_check(F->e_373)).b, &F->ok2_1670);
F->ok_374v = (rt_r_echk(F->ok_374v) && rt_r_echk(F->ok2_1670));
if ((!rt_r_echk(F->ok_374v))) {
F->result_ = NULL;
goto ret_;
}
F->ok_374v = 0;
if (((rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).kind) == (((rt_int)1LL))) && (rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).kind) == (((rt_int)1LL))))) {
F->ok_374v = 1;
if (rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("+", 1))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_add(rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i), rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i)));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("-", 1))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_sub(rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i), rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i)));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("*", 1))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_mul(rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i), rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i)));
goto ret_;
} else if ((rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("DIV", 3)) && (rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_div(rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i), rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i)));
goto ret_;
} else if ((rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("MOD", 3)) && (rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i) != ((rt_int)0LL)))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), rt_mod(rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i), rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i)));
goto ret_;
} else if ((rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("**", 2)) && (rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i) >= ((rt_int)0LL)))) {
F->result_ = f_mk_mval_369((((rt_int)1LL)), f_ipow_372(rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i), rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i)));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i) == rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i))));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("/=", 2))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i) != rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i))));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("<", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i) < rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i))));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("<=", 2))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i) <= rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i))));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str(">", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i) > rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i))));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str(">=", 2))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i) >= rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i))));
goto ret_;
}
} else if (((rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).kind) == (((rt_int)3LL))) && ((rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).kind) == (((rt_int)3LL))) || ((rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).kind) == (((rt_int)1LL))) && rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("**", 2)))))) {
F->result_ = f_float_op_380(&(((P1013)rt_nil_check(F->op_1671))->all), F->a_1668, F->b_1669, &F->ok_374v);
goto ret_;
} else if (((rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).kind) == (((rt_int)2LL))) && (rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).kind) == (((rt_int)2LL))))) {
F->ok_374v = 1;
if (rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("AND", 3))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), rt_mul(rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i), rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i)));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("OR", 2))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_add(rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i), rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i)) > ((rt_int)0LL))));
goto ret_;
} else if ((rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("XOR", 3)) || rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("/=", 2)))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i) != rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i))));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).i) == rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).i))));
goto ret_;
}
} else if ((((rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).kind) == (((rt_int)4LL)))) && (rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("=", 1)) || rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("/=", 2))))) {
F->ok_374v = 1;
if (rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384(rt_str_eq((((P1013)rt_nil_check((*(P1039)rt_nil_check(F->a_1668)).s))->all), (((P1013)rt_nil_check((*(P1039)rt_nil_check(F->b_1669)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((!rt_str_eq((((P1013)rt_nil_check((*(P1039)rt_nil_check(F->a_1668)).s))->all), (((P1013)rt_nil_check((*(P1039)rt_nil_check(F->b_1669)).s))->all)))));
goto ret_;
} else if ((((rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).kind) == (((rt_int)5LL)))) && (rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("=", 1)) || rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("/=", 2))))) {
F->ok_374v = 1;
if (rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("=", 1))) {
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384(rt_str_eq((((P1013)rt_nil_check((*(P1039)rt_nil_check(F->a_1668)).s))->all), (((P1013)rt_nil_check((*(P1039)rt_nil_check(F->b_1669)).s))->all))));
goto ret_;
}
F->result_ = f_mk_mval_369((((rt_int)2LL)), f_bool_i_384((!rt_str_eq((((P1013)rt_nil_check((*(P1039)rt_nil_check(F->a_1668)).s))->all), (((P1013)rt_nil_check((*(P1039)rt_nil_check(F->b_1669)).s))->all)))));
goto ret_;
} else if (((rt_str_eq((((P1013)rt_nil_check(F->op_1671))->all), rt_str("&", 1)) && ((rt_r_ichk((*(P1039)rt_nil_check(F->a_1668)).kind) == (((rt_int)5LL))) || ((*(P1039)rt_nil_check(F->a_1668)).t == g_ty_ascii_1107))) && ((rt_r_ichk((*(P1039)rt_nil_check(F->b_1669)).kind) == (((rt_int)5LL))) || ((*(P1039)rt_nil_check(F->b_1669)).t == g_ty_ascii_1107)))) {
F->r_1675 = NULL;
F->r_1675 = f_mk_mval_369((((rt_int)5LL)), ((rt_int)0LL));
F->ok_374v = 1;
(*(P1039)rt_nil_check(F->r_1675)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_mstr_386(F->a_1668), f_mstr_386(F->b_1669)); b_; }));
F->result_ = F->r_1675;
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

static P1039 f_float_op_380(rstr *op_376, P1039 a_377, P1039 b_378, int *ok_379) {
  struct f_float_op_380fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_376 = op_376;
F->a_377 = a_377;
F->b_378 = b_378;
F->ok_379 = ok_379;
F->ok_379v = *F->ok_379;
F->r_1676 = NULL;
F->r_1676 = f_mk_mval_369((((rt_int)3LL)), ((rt_int)0LL));
F->ok_379v = 1;
{ rt_frame xf1677;
if (RT_TRY(xf1677)) {
if (rt_str_eq((*F->op_376), rt_str("+", 1))) {
(*(P1039)rt_nil_check(F->r_1676)).f = rt_r_fovf(rt_r_fchk((*(P1039)rt_nil_check(F->a_377)).f) + rt_r_fchk((*(P1039)rt_nil_check(F->b_378)).f));
} else if (rt_str_eq((*F->op_376), rt_str("-", 1))) {
(*(P1039)rt_nil_check(F->r_1676)).f = rt_r_fovf(rt_r_fchk((*(P1039)rt_nil_check(F->a_377)).f) - rt_r_fchk((*(P1039)rt_nil_check(F->b_378)).f));
} else if (rt_str_eq((*F->op_376), rt_str("*", 1))) {
(*(P1039)rt_nil_check(F->r_1676)).f = rt_r_fovf(rt_r_fchk((*(P1039)rt_nil_check(F->a_377)).f) * rt_r_fchk((*(P1039)rt_nil_check(F->b_378)).f));
} else if (rt_str_eq((*F->op_376), rt_str("/", 1))) {
(*(P1039)rt_nil_check(F->r_1676)).f = rt_r_fovf(rt_fdiv(rt_r_fchk((*(P1039)rt_nil_check(F->a_377)).f), rt_r_fchk((*(P1039)rt_nil_check(F->b_378)).f)));
} else if (rt_str_eq((*F->op_376), rt_str("**", 2))) {
(*(P1039)rt_nil_check(F->r_1676)).f = rt_r_fpow(rt_r_fchk((*(P1039)rt_nil_check(F->a_377)).f), rt_r_ichk((*(P1039)rt_nil_check(F->b_378)).i));
} else {
(*(P1039)rt_nil_check(F->r_1676)).kind = (((rt_int)2LL));
if (rt_str_eq((*F->op_376), rt_str("=", 1))) {
(*(P1039)rt_nil_check(F->r_1676)).i = f_bool_i_384((rt_r_fchk((*(P1039)rt_nil_check(F->a_377)).f) == rt_r_fchk((*(P1039)rt_nil_check(F->b_378)).f)));
} else if (rt_str_eq((*F->op_376), rt_str("/=", 2))) {
(*(P1039)rt_nil_check(F->r_1676)).i = f_bool_i_384((rt_r_fchk((*(P1039)rt_nil_check(F->a_377)).f) != rt_r_fchk((*(P1039)rt_nil_check(F->b_378)).f)));
} else if (rt_str_eq((*F->op_376), rt_str("<", 1))) {
(*(P1039)rt_nil_check(F->r_1676)).i = f_bool_i_384((rt_r_fchk((*(P1039)rt_nil_check(F->a_377)).f) < rt_r_fchk((*(P1039)rt_nil_check(F->b_378)).f)));
} else if (rt_str_eq((*F->op_376), rt_str("<=", 2))) {
(*(P1039)rt_nil_check(F->r_1676)).i = f_bool_i_384((rt_r_fchk((*(P1039)rt_nil_check(F->a_377)).f) <= rt_r_fchk((*(P1039)rt_nil_check(F->b_378)).f)));
} else if (rt_str_eq((*F->op_376), rt_str(">", 1))) {
(*(P1039)rt_nil_check(F->r_1676)).i = f_bool_i_384((rt_r_fchk((*(P1039)rt_nil_check(F->a_377)).f) > rt_r_fchk((*(P1039)rt_nil_check(F->b_378)).f)));
} else if (rt_str_eq((*F->op_376), rt_str(">=", 2))) {
(*(P1039)rt_nil_check(F->r_1676)).i = f_bool_i_384((rt_r_fchk((*(P1039)rt_nil_check(F->a_377)).f) >= rt_r_fchk((*(P1039)rt_nil_check(F->b_378)).f)));
} else {
F->ok_379v = 0;
}
}
RT_POP(xf1677);
} else {
RT_POP(xf1677);
int x1678 = rt_xcur;
{
F->ok_379v = 0;
}
}
}
F->result_ = F->r_1676;
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

static rstr f_mstr_386(P1039 v_385) {
  struct f_mstr_386fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->v_385 = v_385;
if ((rt_r_ichk((*(P1039)rt_nil_check(F->v_385)).kind) == (((rt_int)5LL)))) {
F->result_ = (((P1013)rt_nil_check((*(P1039)rt_nil_check(F->v_385)).s))->all);
goto ret_;
}
F->result_ = f_chs_5(f_ascii_char_388(rt_r_ichk((*(P1039)rt_nil_check(F->v_385)).i)));
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
F->printable_1679 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" !", 2), f_chs_5(34)), rt_str("#$%&", 4)), f_chs_5(39)), rt_str("()*+,-./0123456789:;<=>\?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 87)));
if (((F->i_387 >= ((rt_int)32LL)) && (F->i_387 <= ((rt_int)126LL)))) {
F->result_ = rt_r_echk(rt_str_get(F->printable_1679, rt_sub(F->i_387, ((rt_int)31LL))));
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
F->y_1680 = NULL;
F->y_1680 = f_lookup_163(&(*F->op_389));
F->result_ = ((F->y_1680 != NULL) && ((rt_r_ichk((*(P1030)rt_nil_check(F->y_1680)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_1680)).kind) == (((rt_int)4LL)))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mcopy_392(P1026 t_391) {
  struct f_mcopy_392fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_391 = t_391;
F->ct_1681 = rt_str_copy(f_ctype_234(F->t_391));
F->name_1682 = rt_str_new(rt_add(((rt_int)((F->ct_1681).len)), ((rt_int)3LL)));
rt_str_assign(&F->name_1682, rt_str_cat(rt_str("mc_", 3), F->ct_1681));
F->l_1683 = NULL;
if ((!f_seen_name_425(g_mcopies_1103, &F->name_1682))) {
{ R1025 *cell1684 = rt_alloc(sizeof(R1025));
(*cell1684).s = NULL;
(*cell1684).next = NULL;
F->l_1683 = cell1684;
}
(*(P1024)rt_nil_check(F->l_1683)).s = f_mk_3(&F->name_1682);
(*(P1024)rt_nil_check(F->l_1683)).next = g_mcopies_1103;
g_mcopies_1103 = F->l_1683;
f_put_27(g_out_protos_1069, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1682), rt_str("(void *d, const void *s);", 25)); b_; }));
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_391)).kind) == (((rt_int)15LL))) && f_top_level_406((*(P1026)rt_nil_check(F->t_391)).assignp))) {
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1682), rt_str("(void *d, const void *s) { ", 27)), f_user_call2_400((*(P1026)rt_nil_check(F->t_391)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(", 2), F->ct_1681), rt_str(" *)d", 4)); b_; }), 1, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1681), rt_str(" *)s", 4)); b_; }), 0)), rt_str("; }", 3)); b_; }));
} else {
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->name_1682), rt_str("(void *d, const void *s) { *(", 29)), F->ct_1681), rt_str(" *)d = ", 7)), f_copy_code_414(F->t_391, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("*(const ", 8), F->ct_1681), rt_str(" *)s", 4)); b_; }))), rt_str("; }", 3)); b_; }));
}
}
F->result_ = F->name_1682;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_composite_394(P1026 t_393) {
  struct f_composite_394fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_393 = t_393;
F->result_ = ((((rt_r_ichk((*(P1026)rt_nil_check(F->t_393)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_393)).kind) == (((rt_int)7LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_393)).kind) == (((rt_int)17LL)))) || ((rt_r_ichk((*(P1026)rt_nil_check(F->t_393)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->t_393)).tparams != NULL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_call2_400(P1030 y_395, rstr *a_396, int lv_a_397, rstr *b_398, int lv_b_399) {
  struct f_user_call2_400fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_395 = y_395;
F->a_396 = a_396;
F->lv_a_397 = lv_a_397;
F->b_398 = b_398;
F->lv_b_399 = lv_b_399;
F->args_1685 = NULL;
F->args_1685 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((rt_r_ichk((*(P1030)rt_nil_check(F->y_395)).level) > ((rt_int)0LL))) {
F->args_1685 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo1687 = ((rt_int)1LL), hi1688 = rt_sub(rt_r_ichk(g_cur_level_1077), rt_r_ichk((*(P1030)rt_nil_check(F->y_395)).level));
for (rt_int it1689 = lo1687; it1689 <= hi1688; it1689++) {
F->i_1686 = it1689;
F->args_1685 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->args_1685))->all), rt_str("->up", 4)); b_; }));
}
}
F->args_1685 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->args_1685))->all), rt_str(", ", 2)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_395)).cname))->all), rt_str("(", 1)), (((P1013)rt_nil_check(F->args_1685))->all)), f_user_arg_404((*(P1030)rt_nil_check(F->y_395)).params, &(*F->a_396), F->lv_a_397)), rt_str(", ", 2)), f_user_arg_404((*(P1032)rt_nil_check((*(P1030)rt_nil_check(F->y_395)).params)).next, &(*F->b_398), F->lv_b_399)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_user_arg_404(P1032 pm_401, rstr *v_402, int lv_403) {
  struct f_user_arg_404fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pm_401 = pm_401;
F->v_402 = v_402;
F->lv_403 = lv_403;
if ((rt_r_ichk((*(P1032)rt_nil_check(F->pm_401)).mode) == (((rt_int)1LL)))) {
F->result_ = f_copy_code_414((*(P1032)rt_nil_check(F->pm_401)).t, &(*F->v_402));
goto ret_;
} else if (F->lv_403) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("&(", 2), (*F->v_402)), rt_str(")", 1));
goto ret_;
}
{
F->ct_1690 = rt_str_copy(f_ctype_234((*(P1032)rt_nil_check(F->pm_401)).t));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_1690), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_1690), rt_str(")); *b_ = ", 10)), (*F->v_402)), rt_str("; b_; })", 8));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_top_level_406(P1030 y_405) {
  struct f_top_level_406fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_405 = y_405;
F->result_ = ((F->y_405 != NULL) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_405)).level) == ((rt_int)0LL)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_assign_code_411(rstr *lval_407, P1026 t_408, rstr *v_409, P1022 c_410) {
  struct f_assign_code_411fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lval_407 = lval_407;
F->t_408 = t_408;
F->v_409 = v_409;
F->c_410 = c_410;
if ((((rt_r_ichk((*(P1026)rt_nil_check(F->t_408)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->t_408)).assignp != NULL)) && (rt_r_echk(g_in_func_1076) || f_top_level_406((*(P1026)rt_nil_check(F->t_408)).assignp)))) {
F->result_ = rt_str_cat(f_user_call2_400((*(P1026)rt_nil_check(F->t_408)).assignp, &(*F->lval_407), 1, &(*F->v_409), 0), rt_str(";", 1));
goto ret_;
}
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_408)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->t_408)).tparams == NULL))) {
F->result_ = f_assign_code_411(&(*F->lval_407), (*(P1026)rt_nil_check(F->t_408)).under, &(*F->v_409), F->c_410);
goto ret_;
}
if ((((rt_r_ichk((*(P1026)rt_nil_check(F->t_408)).kind) == (((rt_int)17LL))) && (F->c_410 != NULL)) && ((*(P1022)rt_nil_check(F->c_410)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->t_408)), rt_str(" u_ = ", 6)), (*F->v_409)), rt_str("; if (u_.tag != (", 17)), (((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_410)).lo))->all)), rt_str(")) rt_raise(RT_X_RANGE); as_", 28)), f_ctype_234(F->t_408)), rt_str("(&", 2)), (*F->lval_407)), rt_str(", u_); }", 8));
goto ret_;
}
if (f_composite_394(F->t_408)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("as_", 3), f_ctype_234(F->t_408)), rt_str("(&", 2)), (*F->lval_407)), rt_str(", ", 2)), (*F->v_409)), rt_str(");", 2));
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_408)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_assign(&", 15), (*F->lval_407)), rt_str(", ", 2)), (*F->v_409)), rt_str(");", 2));
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_408)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_408)).kind) == (((rt_int)7LL))))) {
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

static rstr f_copy_code_414(P1026 t_412, rstr *v_413) {
  struct f_copy_code_414fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_412 = t_412;
F->v_413 = v_413;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_412)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->t_412)).tparams == NULL))) {
F->result_ = f_copy_code_414((*(P1026)rt_nil_check(F->t_412)).under, &(*F->v_413));
goto ret_;
}
if (f_composite_394(F->t_412)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("cp_", 3), f_ctype_234(F->t_412)), rt_str("(", 1)), (*F->v_413)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_412)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_str_copy(", 12), (*F->v_413)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_412)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_412)).kind) == (((rt_int)7LL))))) {
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

static rstr f_eq_code_418(P1026 t_415, rstr *a_416, rstr *b_417) {
  struct f_eq_code_418fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_415 = t_415;
F->a_416 = a_416;
F->b_417 = b_417;
if ((((rt_r_ichk((*(P1026)rt_nil_check(F->t_415)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->t_415)).eqp != NULL)) && (rt_r_echk(g_in_func_1076) || f_top_level_406((*(P1026)rt_nil_check(F->t_415)).eqp)))) {
F->result_ = f_user_call2_400((*(P1026)rt_nil_check(F->t_415)).eqp, &(*F->a_416), 0, &(*F->b_417), 0);
goto ret_;
}
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_415)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->t_415)).tparams == NULL))) {
F->result_ = f_eq_code_418((*(P1026)rt_nil_check(F->t_415)).under, &(*F->a_416), &(*F->b_417));
goto ret_;
}
if (f_composite_394(F->t_415)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("eq_", 3), f_ctype_234(F->t_415)), rt_str("(", 1)), (*F->a_416)), rt_str(", ", 2)), (*F->b_417)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_415)).kind) == (((rt_int)16LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), (*F->a_416)), rt_str(", ", 2)), (*F->b_417)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_415)).kind) == (((rt_int)14LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_416)), rt_str(" == ", 4)), (*F->b_417)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_415)).kind) == (((rt_int)12LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->a_416)), rt_str(" == ", 4)), (*F->b_417)), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_415)).kind) == (((rt_int)13LL)))) {
F->result_ = rt_str("0", 1);
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_415)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), (*F->a_416)), rt_str(", ", 2)), (*F->b_417)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_415)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_415)).kind) == (((rt_int)7LL))))) {
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

static rstr f_elem_assign_422(rstr *lval_419, P1026 t_420, rstr *v_421) {
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

static int f_seen_name_425(P1024 l_423, rstr *s_424) {
  struct f_seen_name_425fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_423 = l_423;
F->s_424 = s_424;
F->p_1691 = NULL;
F->p_1691 = F->l_423;
while ((F->p_1691 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1024)rt_nil_check(F->p_1691)).s))->all), (*F->s_424))) {
F->result_ = 1;
goto ret_;
}
F->p_1691 = (*(P1024)rt_nil_check(F->p_1691)).next;
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
F->order_1692 = NULL;
F->t_1693 = NULL;
F->t_1693 = g_all_types_1065;
F->done_1694 = NULL;
while ((F->t_1693 != NULL)) {
if ((f_composite_394(F->t_1693) && (!f_seen_name_425(F->done_1694, &(((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_1693)).cname))->all))))) {
F->l_1695 = NULL;
F->c_1696 = rt_str_new(((rt_int)(((((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_1693)).cname))->all)).len)));
rt_str_assign(&F->c_1696, (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_1693)).cname))->all));
{ R1025 *cell1697 = rt_alloc(sizeof(R1025));
(*cell1697).s = NULL;
(*cell1697).next = NULL;
F->l_1695 = cell1697;
}
(*(P1024)rt_nil_check(F->l_1695)).s = (*(P1026)rt_nil_check(F->t_1693)).cname;
(*(P1024)rt_nil_check(F->l_1695)).next = F->done_1694;
F->done_1694 = F->l_1695;
f_put_27(g_out_helpers_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1696), rt_str("(", 1)), F->c_1696), rt_str(" *d, ", 5)), F->c_1696), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1696), rt_str(" cp_", 4)), F->c_1696), rt_str("(", 1)), F->c_1696), rt_str(" s);", 4)); b_; }));
f_put_27(g_out_helpers_1068, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1696), rt_str("(", 1)), F->c_1696), rt_str(" a, ", 4)), F->c_1696), rt_str(" b);", 4)); b_; }));
f_helper_bodies_428(F->t_1693);
}
F->t_1693 = (*(P1026)rt_nil_check(F->t_1693)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_helper_bodies_428(P1026 t_427) {
  struct f_helper_bodies_428fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_427 = t_427;
F->c_1698 = rt_str_new(((rt_int)(((((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_427)).cname))->all)).len)));
rt_str_assign(&F->c_1698, (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_427)).cname))->all));
F->b_1699 = NULL;
F->b_1699 = g_out_funcs_1071;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_427)).kind) == (((rt_int)6LL)))) {
F->e_1700 = NULL;
F->e_1700 = (*(P1026)rt_nil_check(F->t_427)).elem;
F->sizes_1701 = NULL;
F->sizes_1701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->bounds_1702 = NULL;
F->bounds_1702 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo1704 = ((rt_int)1LL), hi1705 = rt_r_ichk((*(P1026)rt_nil_check(F->t_427)).ndim);
for (rt_int it1706 = lo1704; it1706 <= hi1705; it1706++) {
F->k_1703 = it1706;
F->l_1707 = rt_str_copy(f_dim_lo_242(F->k_1703));
F->h_1708 = rt_str_copy(f_dim_hi_244(F->k_1703));
F->sizes_1701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->sizes_1701))->all), rt_str(" || RT_R_EXT(d->", 16)), F->l_1707), rt_str(", d->", 5)), F->h_1708), rt_str(") != RT_R_EXT(s.", 16)), F->l_1707), rt_str(", s.", 4)), F->h_1708), rt_str(")", 1)); b_; }));
F->bounds_1702 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->bounds_1702))->all), rt_str(" || a.", 6)), F->l_1707), rt_str(" != b.", 6)), F->l_1707), rt_str(" || a.", 6)), F->h_1708), rt_str(" != b.", 6)), F->h_1708); b_; }));
}
}
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1698), rt_str("(", 1)), F->c_1698), rt_str(" *d, ", 5)), F->c_1698), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P1013)rt_nil_check(F->sizes_1701))->all)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int n_ = ", 14), f_acnt_249(F->t_427, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { ", 78), f_elem_assign_422(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1700, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" } return; }", 12)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n_; i++) { ", 36), f_elem_assign_422(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->p[i]", 7); b_; }), F->e_1700, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1698), rt_str(" cp_", 4)), F->c_1698), rt_str("(", 1)), F->c_1698), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1698), rt_str(" d = s; d.p = rt_alloc(sizeof(", 30)), f_ctype_234(F->e_1700)), rt_str(") * (size_t)", 12)), f_acnt_249(F->t_427, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str(" + 1);", 6)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_249(F->t_427, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s", 1); b_; }))), rt_str("; i++) d.p[i] = ", 16)), f_copy_code_414(F->e_1700, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1698), rt_str("(", 1)), F->c_1698), rt_str(" a, ", 4)), F->c_1698), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (", 6), (((P1013)rt_nil_check(F->bounds_1702))->all)), rt_str(") return 0;", 11)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < ", 25), f_acnt_249(F->t_427, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a", 1); b_; }))), rt_str("; i++) if (!(", 13)), f_eq_code_418(F->e_1700, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(")) return 0;", 12)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return 1;", 11); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_427)).kind) == (((rt_int)15LL)))) {
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1698), rt_str("(", 1)), F->c_1698), rt_str(" *d, ", 5)), F->c_1698), rt_str(" s) {", 5)); b_; }));
if (((f_scalar_kind_186((*(P1026)rt_nil_check(F->t_427)).under) && ((*(P1026)rt_nil_check(F->t_427)).elemcons != NULL)) && ((*(P1022)rt_nil_check((*(P1026)rt_nil_check(F->t_427)).elemcons)).lo != NULL))) {
F->saved_1709 = NULL;
F->saved_1709 = g_psub_1081;
F->p_1710 = NULL;
F->p_1710 = (*(P1026)rt_nil_check(F->t_427)).tparams;
while ((F->p_1710 != NULL)) {
F->l1_1711 = NULL;
F->l2_1712 = NULL;
{ R1025 *cell1713 = rt_alloc(sizeof(R1025));
(*cell1713).s = NULL;
(*cell1713).next = NULL;
F->l1_1711 = cell1713;
}
{ R1025 *cell1714 = rt_alloc(sizeof(R1025));
(*cell1714).s = NULL;
(*cell1714).next = NULL;
F->l2_1712 = cell1714;
}
(*(P1024)rt_nil_check(F->l1_1711)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1710)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1024)rt_nil_check(F->l2_1712)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->p_", 5), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1710)).name))->all))); b_; }));
(*(P1024)rt_nil_check(F->l1_1711)).next = F->l2_1712;
(*(P1024)rt_nil_check(F->l2_1712)).next = g_psub_1081;
g_psub_1081 = F->l1_1711;
F->p_1710 = (*(P1020)rt_nil_check(F->p_1710)).next;
}
if ((rt_r_ichk((*(P1026)rt_nil_check((*(P1026)rt_nil_check(F->t_427)).under)).kind) == (((rt_int)3LL)))) {
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_frange(s.all, ", 28), f_subst_314(&(((P1013)rt_nil_check((*(P1022)rt_nil_check((*(P1026)rt_nil_check(F->t_427)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_314(&(((P1013)rt_nil_check((*(P1022)rt_nil_check((*(P1026)rt_nil_check(F->t_427)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
} else {
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d->all = rt_range(s.all, ", 27), f_subst_314(&(((P1013)rt_nil_check((*(P1022)rt_nil_check((*(P1026)rt_nil_check(F->t_427)).elemcons)).lo))->all))), rt_str(", ", 2)), f_subst_314(&(((P1013)rt_nil_check((*(P1022)rt_nil_check((*(P1026)rt_nil_check(F->t_427)).elemcons)).hi))->all))), rt_str(");", 2)); b_; }));
}
g_psub_1081 = F->saved_1709;
} else {
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_422(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("d->all", 6); b_; }), (*(P1026)rt_nil_check(F->t_427)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))); b_; }));
}
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1698), rt_str(" cp_", 4)), F->c_1698), rt_str("(", 1)), F->c_1698), rt_str(" s) { s.all = ", 14)), f_copy_code_414((*(P1026)rt_nil_check(F->t_427)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s.all", 5); b_; }))), rt_str("; return s; }", 13)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1698), rt_str("(", 1)), F->c_1698), rt_str(" a, ", 4)), F->c_1698), rt_str(" b) { return ", 13)), f_eq_code_418((*(P1026)rt_nil_check(F->t_427)).under, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.all", 5); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.all", 5); b_; }))), rt_str("; }", 3)); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_427)).kind) == (((rt_int)17LL)))) {
F->f_1715 = NULL;
F->f_1715 = (*(P1026)rt_nil_check(F->t_427)).fields;
F->i_1716 = RT_R_IUNDEF;
F->i_1716 = ((rt_int)0LL);
F->cases_as_1717 = NULL;
F->cases_as_1717 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_cp_1718 = NULL;
F->cases_cp_1718 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cases_eq_1719 = NULL;
F->cases_eq_1719 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->f_1715 != NULL)) {
F->fn_1720 = rt_str_copy(rt_str_cat(rt_str("u.", 2), f_field_c_17(&(((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_1715)).name))->all))));
F->cases_as_1717 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->cases_as_1717))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1716))), rt_str(": d->", 5)), F->fn_1720), rt_str(" = ", 3)), f_copy_code_414((*(P1028)rt_nil_check(F->f_1715)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1720); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_cp_1718 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->cases_cp_1718))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1716))), rt_str(": d.", 4)), F->fn_1720), rt_str(" = ", 3)), f_copy_code_414((*(P1028)rt_nil_check(F->f_1715)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1720); b_; }))), rt_str("; break;", 8)); b_; }));
F->cases_eq_1719 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->cases_eq_1719))->all), rt_str(" case ", 6)), f_itos_7(rt_r_ichk(F->i_1716))), rt_str(": return ", 9)), f_eq_code_418((*(P1028)rt_nil_check(F->f_1715)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1720); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1720); b_; }))), rt_str(";", 1)); b_; }));
F->i_1716 = rt_add(rt_r_ichk(F->i_1716), ((rt_int)1LL));
F->f_1715 = (*(P1028)rt_nil_check(F->f_1715)).next;
}
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1698), rt_str("(", 1)), F->c_1698), rt_str(" *d, ", 5)), F->c_1698), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (s.tag < 0) rt_raise(RT_X_INIT);", 37); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  d->tag = s.tag; switch (s.tag) {", 34), (((P1013)rt_nil_check(F->cases_as_1717))->all)), rt_str(" }", 2)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1698), rt_str(" cp_", 4)), F->c_1698), rt_str("(", 1)), F->c_1698), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1698), rt_str(" d = s; switch (s.tag) {", 24)), (((P1013)rt_nil_check(F->cases_cp_1718))->all)), rt_str(" } return d;", 12)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1698), rt_str("(", 1)), F->c_1698), rt_str(" a, ", 4)), F->c_1698), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  if (a.tag != b.tag) return 0; switch (a.tag) {", 48), (((P1013)rt_nil_check(F->cases_eq_1719))->all)), rt_str(" } return 1;", 12)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else {
F->f_1721 = NULL;
F->f_1721 = (*(P1026)rt_nil_check(F->t_427)).fields;
F->conds_1722 = NULL;
F->conds_1722 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static void as_", 15), F->c_1698), rt_str("(", 1)), F->c_1698), rt_str(" *d, ", 5)), F->c_1698), rt_str(" s) {", 5)); b_; }));
while ((F->f_1721 != NULL)) {
F->fn_1723 = rt_str_copy(f_field_c_17(&(((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_1721)).name))->all)));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_elem_assign_422(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("d->", 3), F->fn_1723); b_; }), (*(P1028)rt_nil_check(F->f_1721)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1723); b_; }))); b_; }));
F->f_1721 = (*(P1028)rt_nil_check(F->f_1721)).next;
}
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_1698), rt_str(" cp_", 4)), F->c_1698), rt_str("(", 1)), F->c_1698), rt_str(" s) {", 5)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  ", 2), F->c_1698), rt_str(" d = s;", 7)); b_; }));
F->f_1721 = (*(P1026)rt_nil_check(F->t_427)).fields;
while ((F->f_1721 != NULL)) {
F->fn_1724 = rt_str_copy(f_field_c_17(&(((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_1721)).name))->all)));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  d.", 4), F->fn_1724), rt_str(" = ", 3)), f_copy_code_414((*(P1028)rt_nil_check(F->f_1721)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("s.", 2), F->fn_1724); b_; }))), rt_str(";", 1)); b_; }));
F->conds_1722 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->conds_1722))->all), rt_str(" && ", 4)), f_eq_code_418((*(P1028)rt_nil_check(F->f_1721)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a.", 2), F->fn_1724); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("b.", 2), F->fn_1724); b_; }))); b_; }));
F->f_1721 = (*(P1028)rt_nil_check(F->f_1721)).next;
}
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return d;", 11); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static int eq_", 14), F->c_1698), rt_str("(", 1)), F->c_1698), rt_str(" a, ", 4)), F->c_1698), rt_str(" b) {", 5)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  return ", 9), (((P1013)rt_nil_check(F->conds_1722))->all)), rt_str(";", 1)); b_; }));
f_put_27(F->b_1699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_body_430(P1020 elems_429) {
  struct f_declare_body_430fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_429 = elems_429;
F->e_1725 = NULL;
F->e_1725 = F->elems_429;
while ((F->e_1725 != NULL)) {
if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).kind) == (((rt_int)51LL)))) {
F->g_1726 = NULL;
F->g_1726 = f_new_sym_181((((rt_int)10LL)), (*(P1020)rt_nil_check(F->e_1725)).name);
(*(P1030)rt_nil_check(F->g_1726)).decl = F->e_1725;
(*(P1030)rt_nil_check(F->g_1726)).level = rt_r_ichk(g_cur_level_1077);
(*(P1030)rt_nil_check(F->g_1726)).owner = g_func_sym_1088;
(*(P1030)rt_nil_check(F->g_1726)).gctx = g_fctx_1078;
f_define_168(F->g_1726, rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).line));
}
F->e_1725 = (*(P1020)rt_nil_check(F->e_1725)).next;
}
F->e_1725 = F->elems_429;
while ((F->e_1725 != NULL)) {
if (((rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).kind) == (((rt_int)41LL))) && (rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).flag) == ((rt_int)0LL)))) {
f_manifest_const_432(F->e_1725);
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).kind) == (((rt_int)47LL)))) {
f_gen_capsule_440(F->e_1725);
} else if ((((rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).kind) == (((rt_int)48LL))) && (rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).flag) != ((rt_int)1LL))) && (rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).flag) != ((rt_int)3LL)))) {
f_gen_expose_467(F->e_1725);
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).kind) == (((rt_int)49LL)))) {
F->y_1727 = NULL;
F->y_1727 = f_new_sym_181((((rt_int)7LL)), (*(P1020)rt_nil_check(F->e_1725)).name);
(*(P1030)rt_nil_check(F->y_1727)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ex_", 3), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_1725)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
f_define_168(F->y_1727, rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).line));
f_put_27(g_out_globals_1070, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static int ", 11), (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_1727)).cname))->all)), rt_str(";", 1)); b_; }));
f_put_27(g_out_excs_1073, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  ", 2), (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_1727)).cname))->all)), rt_str(" = rt_exc(", 10)), f_q_18()), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_1725)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).kind) == (((rt_int)42LL)))) {
F->y_1728 = NULL;
F->y_1728 = f_new_sym_181((((rt_int)6LL)), (*(P1020)rt_nil_check(F->e_1725)).name);
(*(P1030)rt_nil_check(F->y_1728)).st = (*(P1020)rt_nil_check(F->e_1725)).a;
(*(P1030)rt_nil_check(F->y_1728)).decl = F->e_1725;
f_define_168(F->y_1728, rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).line));
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).kind) == (((rt_int)44LL)))) {
F->y_1729 = NULL;
F->y_1729 = f_new_sym_181((((rt_int)5LL)), (*(P1020)rt_nil_check(F->e_1725)).name);
F->t_1730 = NULL;
F->t_1730 = f_new_typ_183((((rt_int)8LL)));
(*(P1026)rt_nil_check(F->t_1730)).name = (*(P1020)rt_nil_check(F->e_1725)).name;
(*(P1026)rt_nil_check(F->t_1730)).decl = F->e_1725;
(*(P1030)rt_nil_check(F->y_1729)).t = F->t_1730;
f_define_168(F->y_1729, rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).line));
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).kind) == (((rt_int)43LL)))) {
F->y_1731 = NULL;
F->y_1731 = f_new_sym_181((((rt_int)5LL)), (*(P1020)rt_nil_check(F->e_1725)).name);
(*(P1030)rt_nil_check(F->y_1731)).st = (*(P1020)rt_nil_check(F->e_1725)).a;
(*(P1030)rt_nil_check(F->y_1731)).decl = F->e_1725;
f_define_168(F->y_1731, rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).line));
}
F->e_1725 = (*(P1020)rt_nil_check(F->e_1725)).next;
}
F->e_1725 = F->elems_429;
while ((F->e_1725 != NULL)) {
if ((((rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).kind) == (((rt_int)50LL))))) {
F->y_1732 = NULL;
f_declare_subprogram_497(F->e_1725);
F->y_1732 = f_lookup_decl_165(F->e_1725);
(*(P1030)rt_nil_check(F->y_1732)).home = F->elems_429;
f_normal_function_492(F->e_1725, F->y_1732);
}
F->e_1725 = (*(P1020)rt_nil_check(F->e_1725)).next;
}
F->e_1725 = F->elems_429;
{
F->snap_1733 = NULL;
while ((F->e_1725 != NULL)) {
if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).kind) == (((rt_int)51LL)))) {
if ((F->snap_1733 == NULL)) {
{ P1034 cell1734 = rt_alloc(sizeof *cell1734);
rt_int pv1735 = (((rt_int)4093LL));
cell1734->p_n = pv1735;
cell1734->all.lo = ((rt_int)0LL); cell1734->all.hi = pv1735;
cell1734->all.lo2 = cell1734->all.hi2 = 1;
cell1734->all.p = rt_alloc(sizeof(P1030) * (size_t)(RT_CNT(cell1734->all)) + 1);
for (rt_int i1736 = 0; i1736 < (RT_CNT(cell1734->all)); i1736++) {
cell1734->all.p[i1736] = NULL;
}
F->snap_1733 = cell1734;
}
{ rt_int lo1738 = ((rt_int)0LL), hi1739 = (((rt_int)4093LL));
for (rt_int it1740 = lo1738; it1740 <= hi1739; it1740++) {
F->i_1737 = it1740;
(((P1034)rt_nil_check(F->snap_1733))->all).p[(rt_index(F->i_1737, (((P1034)rt_nil_check(F->snap_1733))->all).lo, (((P1034)rt_nil_check(F->snap_1733))->all).hi) - (((P1034)rt_nil_check(F->snap_1733))->all).lo)] = ({ A1036 b_ = (((P1034)rt_nil_check(g_table_1060))->all); b_.p[(rt_index(F->i_1737, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
{
F->g_1741 = NULL;
F->g_1741 = f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_1725)).name))->all));
(*(P1030)rt_nil_check(F->g_1741)).env = F->snap_1733;
}
}
F->e_1725 = (*(P1020)rt_nil_check(F->e_1725)).next;
}
}
F->e_1725 = F->elems_429;
while ((F->e_1725 != NULL)) {
if (((rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).kind) == (((rt_int)45LL))) && (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_1725)).name))->all), rt_str("INITIALIZE", 10)) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_1725)).name))->all), rt_str("FINALIZE", 8))))) {
F->y_1742 = NULL;
F->y_1742 = f_lookup_decl_165(F->e_1725);
if (((((F->y_1742 != NULL) && ((*(P1030)rt_nil_check(F->y_1742)).params != NULL)) && ((*(P1032)rt_nil_check((*(P1030)rt_nil_check(F->y_1742)).params)).next == NULL)) && ((rt_r_ichk((*(P1026)rt_nil_check((*(P1032)rt_nil_check((*(P1030)rt_nil_check(F->y_1742)).params)).t)).kind) == (((rt_int)15LL))) || (rt_r_ichk((*(P1026)rt_nil_check((*(P1032)rt_nil_check((*(P1030)rt_nil_check(F->y_1742)).params)).t)).kind) == (((rt_int)8LL)))))) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_1725)).name))->all), rt_str("INITIALIZE", 10))) {
(*(P1026)rt_nil_check((*(P1032)rt_nil_check((*(P1030)rt_nil_check(F->y_1742)).params)).t)).initp = F->y_1742;
} else {
(*(P1026)rt_nil_check((*(P1032)rt_nil_check((*(P1030)rt_nil_check(F->y_1742)).params)).t)).finalp = F->y_1742;
}
}
}
if ((((rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).kind) == (((rt_int)45LL))) && rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_1725)).name))->all), rt_str(":=", 2))) || ((rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).kind) == (((rt_int)46LL))) && (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_1725)).name))->all), rt_str("=", 1)) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_1725)).name))->all), rt_str("<", 1)))))) {
F->y_1743 = NULL;
F->y_1743 = f_lookup_decl_165(F->e_1725);
if (((((((F->y_1743 != NULL) && ((*(P1030)rt_nil_check(F->y_1743)).params != NULL)) && ((*(P1032)rt_nil_check((*(P1030)rt_nil_check(F->y_1743)).params)).next != NULL)) && ((*(P1032)rt_nil_check((*(P1032)rt_nil_check((*(P1030)rt_nil_check(F->y_1743)).params)).next)).next == NULL)) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1032)rt_nil_check((*(P1030)rt_nil_check(F->y_1743)).params)).t)).kind) == (((rt_int)15LL)))) && f_same_221((*(P1032)rt_nil_check((*(P1030)rt_nil_check(F->y_1743)).params)).t, (*(P1032)rt_nil_check((*(P1032)rt_nil_check((*(P1030)rt_nil_check(F->y_1743)).params)).next)).t))) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_1725)).name))->all), rt_str(":=", 2))) {
if ((rt_r_ichk((*(P1032)rt_nil_check((*(P1030)rt_nil_check(F->y_1743)).params)).mode) != (((rt_int)2LL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_1725)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the first formal of := is a VAR formal (13.2)", 45); b_; }));
}
(*(P1026)rt_nil_check((*(P1032)rt_nil_check((*(P1030)rt_nil_check(F->y_1743)).params)).t)).assignp = F->y_1743;
} else if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_1725)).name))->all), rt_str("=", 1))) {
(*(P1026)rt_nil_check((*(P1032)rt_nil_check((*(P1030)rt_nil_check(F->y_1743)).params)).t)).eqp = F->y_1743;
} else {
(*(P1026)rt_nil_check((*(P1032)rt_nil_check((*(P1030)rt_nil_check(F->y_1743)).params)).t)).ltp = F->y_1743;
}
}
}
F->e_1725 = (*(P1020)rt_nil_check(F->e_1725)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_manifest_const_432(P1020 d_431) {
  struct f_manifest_const_432fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_431 = d_431;
F->ok_1744 = RT_R_EUNDEF;
F->v_1745 = NULL;
F->y_1746 = NULL;
F->t_1747 = NULL;
F->ctext_1748 = NULL;
if (((*(P1020)rt_nil_check(F->d_431)).a != NULL)) {
if (((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->d_431)).a)).kind) != (((rt_int)70LL))) || ((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->d_431)).a)).a != NULL))) {
goto ret_;
}
}
F->v_1745 = f_meval_375((*(P1020)rt_nil_check(F->d_431)).b, &F->ok_1744);
if ((!rt_r_echk(F->ok_1744))) {
goto ret_;
}
{
F->saved_1749 = NULL;
F->saved_1749 = g_code_1074;
g_code_1074 = f_new_buffer_24();
g_trial_1102 = rt_add(rt_r_ichk(g_trial_1102), ((rt_int)1LL));
{ rt_frame xf1750;
if (RT_TRY(xf1750)) {
F->ctext_1748 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_794((*(P1020)rt_nil_check(F->d_431)).b, NULL, &F->t_1747)), rt_str(")", 1)); b_; }));
RT_POP(xf1750);
} else {
RT_POP(xf1750);
int x1751 = rt_xcur;
if (0 || x1751 == ex_compile_error_1) {
F->ok_1744 = 0;
} else {
rt_raise(x1751);
}
}
}
g_trial_1102 = rt_sub(rt_r_ichk(g_trial_1102), ((rt_int)1LL));
F->ok_1744 = (rt_r_echk(F->ok_1744) && ((*(P1043)rt_nil_check(g_code_1074)).head == NULL));
g_code_1074 = F->saved_1749;
}
if (((!rt_r_echk(F->ok_1744)) || (((*(P1020)rt_nil_check(F->d_431)).a != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->t_1747)).kind) != (((rt_int)1LL)))))) {
goto ret_;
}
if ((rt_r_ichk((*(P1039)rt_nil_check(F->v_1745)).kind) == (((rt_int)4LL)))) {
(*(P1039)rt_nil_check(F->v_1745)).t = F->t_1747;
(*(P1039)rt_nil_check(F->v_1745)).i = f_lit_index_265((*(P1026)rt_nil_check(f_base_of_223(F->t_1747))).lits, &(((P1013)rt_nil_check((*(P1039)rt_nil_check(F->v_1745)).s))->all));
}
(*(P1020)rt_nil_check(F->d_431)).flag = ((rt_int)1LL);
F->y_1746 = f_new_sym_181((((rt_int)2LL)), (*(P1020)rt_nil_check(F->d_431)).name);
(*(P1030)rt_nil_check(F->y_1746)).t = F->t_1747;
(*(P1030)rt_nil_check(F->y_1746)).c = f_new_cons_184();
(*(P1030)rt_nil_check(F->y_1746)).mv = F->v_1745;
if ((rt_r_ichk((*(P1039)rt_nil_check(F->v_1745)).kind) == (((rt_int)1LL)))) {
(*(P1030)rt_nil_check(F->y_1746)).mvalue = rt_r_ichk((*(P1039)rt_nil_check(F->v_1745)).i);
(*(P1030)rt_nil_check(F->y_1746)).hasmv = 1;
}
(*(P1030)rt_nil_check(F->y_1746)).ro_flag = 1;
(*(P1030)rt_nil_check(F->y_1746)).access = F->ctext_1748;
f_define_168(F->y_1746, rt_r_ichk((*(P1020)rt_nil_check(F->d_431)).line));
ret_:
  RT_FPOP();
  return;
}

static int f_exported_436(P1020 d_433, rstr *name_434, int *ro_435) {
  struct f_exported_436fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_433 = d_433;
F->name_434 = name_434;
F->ro_435 = ro_435;
F->ro_435v = *F->ro_435;
F->p_1752 = NULL;
F->p_1752 = (*(P1020)rt_nil_check(F->d_433)).a;
F->ro_435v = 0;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->d_433)).ival) == ((rt_int)1LL))) {
F->result_ = 1;
goto ret_;
}
while ((F->p_1752 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1752)).name))->all), (*F->name_434))) {
F->ro_435v = (rt_r_ichk((*(P1020)rt_nil_check(F->p_1752)).ival) == ((rt_int)1LL));
F->result_ = 1;
goto ret_;
}
F->p_1752 = (*(P1020)rt_nil_check(F->p_1752)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  if (!rt_r_undef_BOOL(F->ro_435v)) (*F->ro_435) = F->ro_435v;
  RT_FPOP();
  return F->result_;
}

static P1030 f_copy_sym_438(P1030 y_437) {
  struct f_copy_sym_438fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_437 = y_437;
F->z_1753 = NULL;
{ R1031 *cell1754 = rt_alloc(sizeof(R1031));
(*cell1754).name = NULL;
(*cell1754).t = NULL;
(*cell1754).c = NULL;
(*cell1754).access = NULL;
(*cell1754).cname = NULL;
(*cell1754).st = NULL;
(*cell1754).decl = NULL;
(*cell1754).params = NULL;
(*cell1754).result = NULL;
(*cell1754).members = NULL;
(*cell1754).mnext = NULL;
(*cell1754).binds = NULL;
(*cell1754).insts = NULL;
(*cell1754).env = NULL;
(*cell1754).chain = NULL;
(*cell1754).stack = NULL;
(*cell1754).owner = NULL;
(*cell1754).gctx = NULL;
(*cell1754).mv = NULL;
(*cell1754).reqs = NULL;
(*cell1754).home = NULL;
(*cell1754).capn = NULL;
(*cell1754).tbinds = NULL;
(*cell1754).loc = NULL;
(*cell1754).reqs_sym = NULL;
F->z_1753 = cell1754;
}
(*(P1030)rt_nil_check(F->z_1753)).kind = rt_r_ichk((*(P1030)rt_nil_check(F->y_437)).kind);
(*(P1030)rt_nil_check(F->z_1753)).name = (*(P1030)rt_nil_check(F->y_437)).name;
(*(P1030)rt_nil_check(F->z_1753)).t = (*(P1030)rt_nil_check(F->y_437)).t;
(*(P1030)rt_nil_check(F->z_1753)).c = (*(P1030)rt_nil_check(F->y_437)).c;
(*(P1030)rt_nil_check(F->z_1753)).access = (*(P1030)rt_nil_check(F->y_437)).access;
(*(P1030)rt_nil_check(F->z_1753)).cname = (*(P1030)rt_nil_check(F->y_437)).cname;
(*(P1030)rt_nil_check(F->z_1753)).ro_flag = rt_r_echk((*(P1030)rt_nil_check(F->y_437)).ro_flag);
(*(P1030)rt_nil_check(F->z_1753)).mvalue = rt_r_ichk((*(P1030)rt_nil_check(F->y_437)).mvalue);
(*(P1030)rt_nil_check(F->z_1753)).hasmv = rt_r_echk((*(P1030)rt_nil_check(F->y_437)).hasmv);
(*(P1030)rt_nil_check(F->z_1753)).st = (*(P1030)rt_nil_check(F->y_437)).st;
(*(P1030)rt_nil_check(F->z_1753)).decl = (*(P1030)rt_nil_check(F->y_437)).decl;
(*(P1030)rt_nil_check(F->z_1753)).params = (*(P1030)rt_nil_check(F->y_437)).params;
(*(P1030)rt_nil_check(F->z_1753)).result = (*(P1030)rt_nil_check(F->y_437)).result;
(*(P1030)rt_nil_check(F->z_1753)).level = rt_r_ichk((*(P1030)rt_nil_check(F->y_437)).level);
(*(P1030)rt_nil_check(F->z_1753)).byref = rt_r_echk((*(P1030)rt_nil_check(F->y_437)).byref);
(*(P1030)rt_nil_check(F->z_1753)).members = (*(P1030)rt_nil_check(F->y_437)).members;
(*(P1030)rt_nil_check(F->z_1753)).env = (*(P1030)rt_nil_check(F->y_437)).env;
F->result_ = F->z_1753;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_capsule_440(P1020 d_439) {
  struct f_gen_capsule_440fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_439 = d_439;
F->y_1755 = NULL;
F->y_1755 = f_new_sym_181((((rt_int)8LL)), (*(P1020)rt_nil_check(F->d_439)).name);
F->saved_1756 = NULL;
F->saved_1756 = g_suppress_1094;
F->p_1757 = NULL;
F->p_1757 = (*(P1020)rt_nil_check(F->d_439)).b;
F->tail_1758 = NULL;
(*(P1030)rt_nil_check(F->y_1755)).decl = F->d_439;
while ((F->p_1757 != NULL)) {
F->pm_1759 = NULL;
{ R1033 *cell1760 = rt_alloc(sizeof(R1033));
(*cell1760).name = NULL;
(*cell1760).t = NULL;
(*cell1760).c = NULL;
(*cell1760).cfield = NULL;
(*cell1760).next = NULL;
F->pm_1759 = cell1760;
}
(*(P1032)rt_nil_check(F->pm_1759)).name = (*(P1020)rt_nil_check(F->p_1757)).name;
(*(P1032)rt_nil_check(F->pm_1759)).mode = rt_r_ichk((*(P1020)rt_nil_check(F->p_1757)).ival);
(*(P1032)rt_nil_check(F->pm_1759)).t = f_resolve_subtype_268((*(P1020)rt_nil_check(F->p_1757)).a, &(*(P1032)rt_nil_check(F->pm_1759)).c);
if ((F->tail_1758 == NULL)) {
(*(P1030)rt_nil_check(F->y_1755)).params = F->pm_1759;
} else {
(*(P1032)rt_nil_check(F->tail_1758)).next = F->pm_1759;
}
F->tail_1758 = F->pm_1759;
F->p_1757 = (*(P1020)rt_nil_check(F->p_1757)).next;
}
if (((*(P1020)rt_nil_check(F->d_439)).b == NULL)) {
g_suppress_1094 = f_suppressing_504((*(P1020)rt_nil_check(F->d_439)).prags);
f_elaborate_capsule_449(F->d_439, F->y_1755, NULL, F->d_439);
g_suppress_1094 = F->saved_1756;
}
f_define_168(F->y_1755, rt_r_ichk((*(P1020)rt_nil_check(F->d_439)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_params_444(P1020 d_441, P1020 args_442, rt_int line_443) {
  struct f_capsule_params_444fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_441 = d_441;
F->args_442 = args_442;
F->line_443 = line_443;
F->p_1761 = NULL;
F->p_1761 = (*(P1020)rt_nil_check(F->d_441)).b;
F->a_1762 = NULL;
F->a_1762 = F->args_442;
F->t_1763 = NULL;
F->vt_1764 = NULL;
F->c_1765 = NULL;
while (((F->p_1761 != NULL) && (F->a_1762 != NULL))) {
F->t_1763 = f_resolve_subtype_268((*(P1020)rt_nil_check(F->p_1761)).a, &F->c_1765);
if ((rt_r_ichk((*(P1020)rt_nil_check(F->p_1761)).ival) == (((rt_int)3LL)))) {
f_fail_23(F->line_443, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a capsule may not have OUT formal parameters", 44); b_; }));
} else if (((rt_r_ichk((*(P1020)rt_nil_check(F->p_1761)).ival) == (((rt_int)2LL))) || (rt_r_ichk((*(P1020)rt_nil_check(F->p_1761)).ival) == (((rt_int)4LL))))) {
F->lv_1766 = NULL;
F->lc_1767 = NULL;
F->ro_1768 = RT_R_EUNDEF;
F->y_1769 = NULL;
F->y_1769 = f_new_sym_181((((rt_int)1LL)), (*(P1020)rt_nil_check(F->p_1761)).name);
f_lvalue_763(F->a_1762, &F->lv_1766, &F->vt_1764, &F->lc_1767, &F->ro_1768);
f_check_type_232(F->vt_1764, F->t_1763, F->line_443);
if ((rt_r_echk(F->ro_1768) && (rt_r_ichk((*(P1020)rt_nil_check(F->p_1761)).ival) == (((rt_int)2LL))))) {
f_fail_23(F->line_443, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1761)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
if (rt_r_echk(g_in_func_1076)) {
F->f_1770 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1761)).name))->all)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234(F->t_1763)), rt_str(" *", 2)), F->f_1770), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_1770), rt_str(" = &", 4)), (((P1013)rt_nil_check(F->lv_1766))->all)), rt_str(";", 1)); b_; }));
(*(P1030)rt_nil_check(F->y_1769)).level = rt_r_ichk(g_cur_level_1077);
(*(P1030)rt_nil_check(F->y_1769)).access = f_mk_3(&F->f_1770);
(*(P1030)rt_nil_check(F->y_1769)).byref = 1;
} else {
F->g_1771 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1761)).name))->all))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1070, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234(F->t_1763)), rt_str(" *", 2)), F->g_1771), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1771), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->g_1771, rt_str(" = &", 4)), (((P1013)rt_nil_check(F->lv_1766))->all)), rt_str(";", 1)); b_; }));
(*(P1030)rt_nil_check(F->y_1769)).level = ((rt_int)0LL);
(*(P1030)rt_nil_check(F->y_1769)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->g_1771), rt_str(")", 1)); b_; }));
}
(*(P1030)rt_nil_check(F->y_1769)).t = F->t_1763;
(*(P1030)rt_nil_check(F->y_1769)).c = F->lc_1767;
(*(P1030)rt_nil_check(F->y_1769)).ro_flag = (rt_r_ichk((*(P1020)rt_nil_check(F->p_1761)).ival) == (((rt_int)4LL)));
f_define_168(F->y_1769, F->line_443);
} else {
F->y_1772 = NULL;
F->y_1772 = f_new_sym_181((((rt_int)2LL)), (*(P1020)rt_nil_check(F->p_1761)).name);
F->v_1773 = rt_str_copy(f_gexpr_794(F->a_1762, F->t_1763, &F->vt_1764));
f_check_type_232(F->vt_1764, F->t_1763, F->line_443);
{
F->access_1774 = rt_str_copy(f_storage_513(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1761)).name))->all), F->t_1763));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1774, rt_str(" = ", 3)), f_copy_code_414(F->t_1763, &F->v_1773)), rt_str(";", 1)); b_; }));
f_bind_516(F->y_1772, &F->access_1774);
}
(*(P1030)rt_nil_check(F->y_1772)).t = F->t_1763;
(*(P1030)rt_nil_check(F->y_1772)).c = F->c_1765;
(*(P1030)rt_nil_check(F->y_1772)).ro_flag = 1;
f_define_168(F->y_1772, F->line_443);
}
F->p_1761 = (*(P1020)rt_nil_check(F->p_1761)).next;
F->a_1762 = (*(P1020)rt_nil_check(F->a_1762)).next;
}
if (((F->p_1761 != NULL) || (F->a_1762 != NULL))) {
f_fail_23(F->line_443, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for capsule ", 46), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_441)).name))->all)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_elaborate_capsule_449(P1020 d_445, P1030 y_446, P1020 args_447, P1020 owner_448) {
  struct f_elaborate_capsule_449fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_445 = d_445;
F->y_446 = y_446;
F->args_447 = args_447;
F->owner_448 = owner_448;
F->cr_1775 = NULL;
F->ctx_1776 = NULL;
F->saved_gotos_1777 = NULL;
F->m_1778 = NULL;
F->p_1779 = NULL;
F->p_1779 = (*(P1020)rt_nil_check(F->d_445)).a;
F->ro_1780 = RT_R_EUNDEF;
{ R1048 *cell1781 = rt_alloc(sizeof(R1048));
(*cell1781).d = NULL;
(*cell1781).next = NULL;
F->cr_1775 = cell1781;
}
(*(P1047)rt_nil_check(F->cr_1775)).d = F->d_445;
(*(P1047)rt_nil_check(F->cr_1775)).next = g_caps_1079;
g_caps_1079 = F->cr_1775;
f_open_scope_177();
(*(P1047)rt_nil_check(F->cr_1775)).depth = rt_r_ichk(g_depth_1063);
if (((*(P1020)rt_nil_check(F->d_445)).b != NULL)) {
f_capsule_params_444(F->d_445, F->args_447, rt_r_ichk((*(P1020)rt_nil_check(F->owner_448)).line));
}
{ R1038 *cell1782 = rt_alloc(sizeof(R1038));
(*cell1782).imps = NULL;
(*cell1782).next = NULL;
F->ctx_1776 = cell1782;
}
(*(P1037)rt_nil_check(F->ctx_1776)).depth = rt_r_ichk(g_depth_1063);
(*(P1037)rt_nil_check(F->ctx_1776)).imps = (*(P1020)rt_nil_check(F->d_445)).d;
(*(P1037)rt_nil_check(F->ctx_1776)).all_imp = (rt_r_ichk((*(P1020)rt_nil_check(F->d_445)).flag) >= ((rt_int)2LL));
(*(P1037)rt_nil_check(F->ctx_1776)).next = g_fctx_1078;
g_fctx_1078 = F->ctx_1776;
F->saved_gotos_1777 = g_gotos_1098;
g_gotos_1098 = NULL;
f_declare_labels_580((*(P1020)rt_nil_check(F->d_445)).c);
f_declare_body_430((*(P1020)rt_nil_check(F->d_445)).c);
f_capsule_body_587((*(P1020)rt_nil_check(F->d_445)).c);
{
F->w_1783 = NULL;
{ R1050 *cell1784 = rt_alloc(sizeof(R1050));
(*cell1784).d = NULL;
(*cell1784).w = NULL;
(*cell1784).next = NULL;
F->w_1783 = cell1784;
}
(*(P1049)rt_nil_check(F->w_1783)).d = F->owner_448;
(*(P1049)rt_nil_check(F->w_1783)).w = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_task_waits_574((*(P1020)rt_nil_check(F->d_445)).c); b_; }));
(*(P1049)rt_nil_check(F->w_1783)).next = g_cap_waits_1080;
g_cap_waits_1080 = F->w_1783;
}
g_fctx_1078 = (*(P1037)rt_nil_check(g_fctx_1078)).next;
F->m_1778 = g_scope_stack_1064;
while (((F->m_1778 != NULL) && (rt_r_ichk((*(P1030)rt_nil_check(F->m_1778)).depth) == rt_r_ichk(g_depth_1063)))) {
if (((((rt_r_ichk((*(P1030)rt_nil_check(F->m_1778)).kind) == (((rt_int)5LL))) && ((*(P1030)rt_nil_check(F->m_1778)).t == NULL)) && ((*(P1030)rt_nil_check(F->m_1778)).decl != NULL)) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->m_1778)).decl)).kind) == (((rt_int)43LL))))) {
(*(P1030)rt_nil_check(F->m_1778)).t = f_new_type_318(F->m_1778, f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1020)rt_nil_check(F->d_445)).line)), &(*(P1030)rt_nil_check(F->m_1778)).c);
} else if ((((rt_r_ichk((*(P1030)rt_nil_check(F->m_1778)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1030)rt_nil_check(F->m_1778)).kind) == (((rt_int)6LL)))) && ((*(P1030)rt_nil_check(F->m_1778)).t == NULL))) {
(*(P1030)rt_nil_check(F->m_1778)).t = f_resolve_subtype_268((*(P1030)rt_nil_check(F->m_1778)).st, &(*(P1030)rt_nil_check(F->m_1778)).c);
} else if (((rt_r_ichk((*(P1030)rt_nil_check(F->m_1778)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->m_1778)).t)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_469((*(P1030)rt_nil_check(F->m_1778)).t);
}
F->m_1778 = (*(P1030)rt_nil_check(F->m_1778)).stack;
}
F->m_1778 = g_scope_stack_1064;
while (((F->m_1778 != NULL) && (rt_r_ichk((*(P1030)rt_nil_check(F->m_1778)).depth) == rt_r_ichk(g_depth_1063)))) {
if (f_exported_436(F->d_445, &(((P1013)rt_nil_check((*(P1030)rt_nil_check(F->m_1778)).name))->all), &F->ro_1780)) {
F->z_1785 = NULL;
F->z_1785 = f_copy_sym_438(F->m_1778);
if (rt_r_echk(F->ro_1780)) {
(*(P1030)rt_nil_check(F->z_1785)).ro_flag = 1;
}
(*(P1030)rt_nil_check(F->z_1785)).mnext = (*(P1030)rt_nil_check(F->y_446)).members;
(*(P1030)rt_nil_check(F->y_446)).members = F->z_1785;
}
F->m_1778 = (*(P1030)rt_nil_check(F->m_1778)).stack;
}
while ((F->p_1779 != NULL)) {
if ((((!rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1779)).name))->all), rt_str(":=", 2))) && (!rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1779)).name))->all), rt_str("=", 1)))) && ((f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1779)).name))->all)) == NULL) || ((*(P1030)rt_nil_check(f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1779)).name))->all)))).depth != rt_r_ichk(g_depth_1063))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_445)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1779)).name))->all), rt_str(" is exported but not defined in capsule ", 40)), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_445)).name))->all)); b_; }));
}
F->p_1779 = (*(P1020)rt_nil_check(F->p_1779)).next;
}
f_close_scope_178();
g_caps_1079 = (*(P1047)rt_nil_check(g_caps_1079)).next;
g_gotos_1098 = F->saved_gotos_1777;
ret_:
  RT_FPOP();
  return;
}

static int f_exports_op_452(P1020 d_450, rstr *op_451) {
  struct f_exports_op_452fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_450 = d_450;
F->op_451 = op_451;
F->p_1786 = NULL;
if ((F->d_450 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->p_1786 = (*(P1020)rt_nil_check(F->d_450)).a;
while ((F->p_1786 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1786)).name))->all), (*F->op_451))) {
F->result_ = 1;
goto ret_;
}
F->p_1786 = (*(P1020)rt_nil_check(F->p_1786)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1013 f_renamed_455(P1020 d_453, P1030 z_454) {
  struct f_renamed_455fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_453 = d_453;
F->z_454 = z_454;
F->r_1787 = NULL;
F->r_1787 = (*(P1020)rt_nil_check(F->d_453)).c;
while ((F->r_1787 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->r_1787)).name))->all), (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->z_454)).name))->all))) {
F->result_ = (*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->r_1787)).a)).name;
goto ret_;
}
F->r_1787 = (*(P1020)rt_nil_check(F->r_1787)).next;
}
F->result_ = (*(P1030)rt_nil_check(F->z_454)).name;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_cap_tt_match_458(P1020 f_456, P1020 a_457) {
  struct f_cap_tt_match_458fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->f_456 = f_456;
F->a_457 = a_457;
F->x_1788 = NULL;
F->x_1788 = F->f_456;
F->y_1789 = NULL;
F->y_1789 = F->a_457;
while (((F->x_1788 != NULL) && (F->y_1789 != NULL))) {
F->ok1_1790 = RT_R_EUNDEF;
F->ok2_1791 = RT_R_EUNDEF;
F->v1_1792 = NULL;
F->v1_1792 = f_meval_375(F->x_1788, &F->ok1_1790);
F->v2_1793 = NULL;
F->v2_1793 = f_meval_375(F->y_1789, &F->ok2_1791);
if ((((!rt_r_echk(F->ok1_1790)) || (!rt_r_echk(F->ok2_1791))) || (rt_r_ichk((*(P1039)rt_nil_check(F->v1_1792)).kind) != rt_r_ichk((*(P1039)rt_nil_check(F->v2_1793)).kind)))) {
F->result_ = 0;
goto ret_;
} else if (((rt_r_ichk((*(P1039)rt_nil_check(F->v1_1792)).kind) == (((rt_int)5LL))) || (rt_r_ichk((*(P1039)rt_nil_check(F->v1_1792)).kind) == (((rt_int)4LL))))) {
if ((!rt_str_eq((((P1013)rt_nil_check((*(P1039)rt_nil_check(F->v1_1792)).s))->all), (((P1013)rt_nil_check((*(P1039)rt_nil_check(F->v2_1793)).s))->all)))) {
F->result_ = 0;
goto ret_;
}
} else if ((rt_r_ichk((*(P1039)rt_nil_check(F->v1_1792)).i) != rt_r_ichk((*(P1039)rt_nil_check(F->v2_1793)).i))) {
F->result_ = 0;
goto ret_;
}
F->x_1788 = (*(P1020)rt_nil_check(F->x_1788)).next;
F->y_1789 = (*(P1020)rt_nil_check(F->y_1789)).next;
}
F->result_ = ((F->x_1788 == NULL) && (F->y_1789 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1030 f_pick_capsule_460(P1020 d_459) {
  struct f_pick_capsule_460fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_459 = d_459;
F->y_1794 = NULL;
F->y_1794 = ({ A1036 b_ = (((P1034)rt_nil_check(g_table_1060))->all); b_.p[(rt_index(f_hash_161(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_459)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
F->first_1795 = NULL;
F->fit_1796 = NULL;
F->n_1797 = RT_R_IUNDEF;
F->n_1797 = ((rt_int)0LL);
while ((F->y_1794 != NULL)) {
if ((rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_1794)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_459)).name))->all)) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_1794)).kind) == (((rt_int)8LL))))) {
F->n_1797 = rt_add(rt_r_ichk(F->n_1797), ((rt_int)1LL));
if ((F->first_1795 == NULL)) {
F->first_1795 = F->y_1794;
}
if ((((F->fit_1796 == NULL) && f_fits_910(F->y_1794, (*(P1020)rt_nil_check(F->d_459)).b)) && f_cap_tt_match_458((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_1794)).decl)).e, (*(P1020)rt_nil_check(F->d_459)).e))) {
F->fit_1796 = F->y_1794;
}
}
F->y_1794 = (*(P1030)rt_nil_check(F->y_1794)).chain;
}
if ((rt_r_ichk(F->n_1797) > ((rt_int)1LL))) {
if ((F->fit_1796 == NULL)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_459)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no capsule ", 11), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_459)).name))->all)), rt_str(" has formals that fit these actual parameters", 45)); b_; }));
}
F->result_ = F->fit_1796;
goto ret_;
}
if ((F->first_1795 == NULL)) {
F->result_ = f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_459)).name))->all));
goto ret_;
}
F->result_ = F->first_1795;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1030 f_capsule_instance_463(P1030 g_461, P1020 d_462) {
  struct f_capsule_instance_463fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_461 = g_461;
F->d_462 = d_462;
F->gd_1798 = NULL;
F->gd_1798 = (*(P1030)rt_nil_check(F->g_461)).decl;
F->pat_1799 = NULL;
F->pat_1799 = (*(P1020)rt_nil_check(F->gd_1798)).b;
F->binds_1800 = NULL;
F->binds_1800 = f_need_binds_721(F->gd_1798, f_tt_binds_700(F->gd_1798, (*(P1020)rt_nil_check(F->pat_1799)).e, (*(P1020)rt_nil_check(F->d_462)).e, rt_r_ichk((*(P1020)rt_nil_check(F->d_462)).line)), rt_r_ichk((*(P1020)rt_nil_check(F->d_462)).line));
F->inst_1801 = NULL;
F->inst_1801 = (*(P1030)rt_nil_check(F->g_461)).insts;
F->saved_env_1802 = NULL;
F->saved_env_1802 = g_genv_1061;
F->saved_gdepth_1803 = RT_R_IUNDEF;
F->saved_gdepth_1803 = rt_r_ichk(g_gdepth_1093);
if (((rt_r_ichk((*(P1020)rt_nil_check(F->d_462)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P1020)rt_nil_check(F->d_462)).flag) != ((rt_int)3LL)))) {
while ((F->inst_1801 != NULL)) {
if (f_same_binds_692((*(P1030)rt_nil_check(F->inst_1801)).tbinds, F->binds_1800)) {
F->result_ = F->inst_1801;
goto ret_;
}
F->inst_1801 = (*(P1030)rt_nil_check(F->inst_1801)).insts;
}
}
F->inst_1801 = f_new_sym_181((((rt_int)8LL)), (*(P1020)rt_nil_check(F->pat_1799)).name);
(*(P1030)rt_nil_check(F->inst_1801)).decl = F->pat_1799;
(*(P1030)rt_nil_check(F->inst_1801)).tbinds = F->binds_1800;
f_open_scope_177();
{
F->b_1804 = NULL;
F->b_1804 = F->binds_1800;
while ((F->b_1804 != NULL)) {
f_define_168(F->b_1804, rt_r_ichk((*(P1020)rt_nil_check(F->d_462)).line));
F->b_1804 = (*(P1030)rt_nil_check(F->b_1804)).mnext;
}
}
g_genv_1061 = (*(P1030)rt_nil_check(F->g_461)).env;
g_gdepth_1093 = rt_r_ichk(g_depth_1063);
f_elaborate_capsule_449(F->pat_1799, F->inst_1801, (*(P1020)rt_nil_check(F->d_462)).b, F->d_462);
g_genv_1061 = F->saved_env_1802;
g_gdepth_1093 = rt_r_ichk(F->saved_gdepth_1803);
f_close_scope_178();
if (((rt_r_ichk((*(P1020)rt_nil_check(F->d_462)).flag) != ((rt_int)1LL)) && (rt_r_ichk((*(P1020)rt_nil_check(F->d_462)).flag) != ((rt_int)3LL)))) {
(*(P1030)rt_nil_check(F->inst_1801)).insts = (*(P1030)rt_nil_check(F->g_461)).insts;
(*(P1030)rt_nil_check(F->g_461)).insts = F->inst_1801;
}
F->result_ = F->inst_1801;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_configure_465(P1030 y_464) {
  struct f_configure_465fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_464 = y_464;
F->m_1805 = NULL;
F->m_1805 = (*(P1030)rt_nil_check(F->y_464)).members;
while ((F->m_1805 != NULL)) {
F->n_1806 = rt_str_copy((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->m_1805)).name))->all));
if ((((rt_r_ichk((*(P1030)rt_nil_check(F->m_1805)).kind) == (((rt_int)2LL))) && rt_r_echk((*(P1030)rt_nil_check(F->m_1805)).hasmv)) && (((rt_str_eq(F->n_1806, rt_str("MILLISECONDS", 12)) || rt_str_eq(F->n_1806, rt_str("SECONDS", 7))) || rt_str_eq(F->n_1806, rt_str("MINUTES", 7))) || rt_str_eq(F->n_1806, rt_str("HOURS", 5))))) {
f_put_27(g_out_excs_1073, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  RT_", 5), F->n_1806), rt_str(" = ", 3)), f_itos_7(rt_r_ichk((*(P1030)rt_nil_check(F->m_1805)).mvalue))), rt_str(";", 1)); b_; }));
}
F->m_1805 = (*(P1030)rt_nil_check(F->m_1805)).mnext;
}
ret_:
  RT_FPOP();
  return;
}

static void f_gen_expose_467(P1020 d_466) {
  struct f_gen_expose_467fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_466 = d_466;
F->y_1807 = NULL;
F->y_1807 = f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_466)).name))->all));
F->m_1808 = NULL;
F->p_1809 = NULL;
F->p_1809 = (*(P1020)rt_nil_check(F->d_466)).a;
F->r_1810 = NULL;
F->r_1810 = (*(P1020)rt_nil_check(F->d_466)).c;
if ((((F->y_1807 != NULL) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_1807)).kind) == (((rt_int)10LL)))) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_1807)).decl)).b)).kind) == (((rt_int)47LL))))) {
F->y_1807 = f_capsule_instance_463(F->y_1807, F->d_466);
} else {
F->y_1807 = f_pick_capsule_460(F->d_466);
if (((F->y_1807 == NULL) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_1807)).kind) != (((rt_int)8LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_466)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_466)).name))->all), rt_str(" is not a capsule", 17)); b_; }));
}
if ((((*(P1020)rt_nil_check(F->d_466)).e != NULL) && (((*(P1030)rt_nil_check(F->y_1807)).decl == NULL) || ((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_1807)).decl)).e == NULL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_466)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_466)).name))->all), rt_str(" has no translation time property list", 38)); b_; }));
}
}
if (rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_1807)).name))->all), rt_str("CONFIGURATION", 13))) {
f_configure_465(F->y_1807);
}
if ((((*(P1030)rt_nil_check(F->y_1807)).tbinds != NULL) || ((((*(P1030)rt_nil_check(F->y_1807)).decl != NULL) && ((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_1807)).decl)).e != NULL)) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_1807)).kind) == (((rt_int)10LL)))))) {
} else if (((rt_r_ichk((*(P1020)rt_nil_check(F->d_466)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P1020)rt_nil_check(F->d_466)).flag) == ((rt_int)3LL)))) {
F->inst_1811 = NULL;
F->inst_1811 = f_new_sym_181((((rt_int)8LL)), (*(P1030)rt_nil_check(F->y_1807)).name);
(*(P1030)rt_nil_check(F->inst_1811)).decl = (*(P1030)rt_nil_check(F->y_1807)).decl;
f_elaborate_capsule_449((*(P1030)rt_nil_check(F->y_1807)).decl, F->inst_1811, (*(P1020)rt_nil_check(F->d_466)).b, F->d_466);
F->y_1807 = F->inst_1811;
} else if ((((*(P1030)rt_nil_check(F->y_1807)).decl != NULL) && ((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_1807)).decl)).b != NULL))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_466)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("capsule ", 8), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_466)).name))->all)), rt_str(" has formal parameters and can only be invoked as NEW", 53)); b_; }));
} else if (((*(P1020)rt_nil_check(F->d_466)).b != NULL)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_466)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a capsule invoked as NEW takes actual parameters", 53); b_; }));
}
while ((F->r_1810 != NULL)) {
F->found_1812 = RT_R_EUNDEF;
F->found_1812 = 0;
F->m_1808 = (*(P1030)rt_nil_check(F->y_1807)).members;
while ((F->m_1808 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->m_1808)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->r_1810)).name))->all))) {
F->found_1812 = 1;
}
F->m_1808 = (*(P1030)rt_nil_check(F->m_1808)).mnext;
}
if ((!rt_r_echk(F->found_1812))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_466)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->r_1810)).name))->all), rt_str(" is renamed but not made known by ", 34)), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_466)).name))->all)); b_; }));
}
F->r_1810 = (*(P1020)rt_nil_check(F->r_1810)).next;
}
if ((rt_r_ichk((*(P1020)rt_nil_check(F->d_466)).ival) == ((rt_int)1LL))) {
F->m_1808 = (*(P1030)rt_nil_check(F->y_1807)).members;
while ((F->m_1808 != NULL)) {
F->z_1813 = NULL;
F->z_1813 = f_copy_sym_438(F->m_1808);
(*(P1030)rt_nil_check(F->z_1813)).name = f_renamed_455(F->d_466, F->m_1808);
f_define_168(F->z_1813, rt_r_ichk((*(P1020)rt_nil_check(F->d_466)).line));
F->m_1808 = (*(P1030)rt_nil_check(F->m_1808)).mnext;
}
goto ret_;
}
while ((F->p_1809 != NULL)) {
F->found_1814 = RT_R_EUNDEF;
F->found_1814 = 0;
F->m_1808 = (*(P1030)rt_nil_check(F->y_1807)).members;
while ((F->m_1808 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->m_1808)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1809)).name))->all))) {
F->z_1815 = NULL;
F->z_1815 = f_copy_sym_438(F->m_1808);
if ((rt_r_ichk((*(P1020)rt_nil_check(F->p_1809)).ival) == ((rt_int)1LL))) {
(*(P1030)rt_nil_check(F->z_1815)).ro_flag = 1;
}
(*(P1030)rt_nil_check(F->z_1815)).name = f_renamed_455(F->d_466, F->m_1808);
f_define_168(F->z_1815, rt_r_ichk((*(P1020)rt_nil_check(F->d_466)).line));
F->found_1814 = 1;
}
F->m_1808 = (*(P1030)rt_nil_check(F->m_1808)).mnext;
}
if ((!rt_r_echk(F->found_1814))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_466)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1809)).name))->all), rt_str(" is not exported by ", 20)), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_466)).name))->all)); b_; }));
}
F->p_1809 = (*(P1020)rt_nil_check(F->p_1809)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_finish_ptr_469(P1026 t_468) {
  struct f_finish_ptr_469fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_468 = t_468;
F->d_1816 = NULL;
F->d_1816 = (*(P1026)rt_nil_check(F->t_468)).decl;
F->p_1817 = NULL;
F->c_1818 = NULL;
F->dummy_1819 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->dummy_1819, rt_str(" ", 1));
if (((*(P1026)rt_nil_check(F->t_468)).target != NULL)) {
goto ret_;
}
f_open_scope_177();
{ rt_int lo1821 = ((rt_int)1LL), hi1822 = ((rt_int)2LL);
for (rt_int it1823 = lo1821; it1823 <= hi1822; it1823++) {
F->pass_1820 = it1823;
if ((F->pass_1820 == ((rt_int)1LL))) {
F->p_1817 = (*(P1020)rt_nil_check(F->d_1816)).d;
} else {
F->p_1817 = (*(P1020)rt_nil_check(F->d_1816)).b;
}
while ((F->p_1817 != NULL)) {
F->y_1824 = NULL;
F->y_1824 = f_new_sym_181((((rt_int)2LL)), (*(P1020)rt_nil_check(F->p_1817)).name);
F->pc_1825 = NULL;
(*(P1030)rt_nil_check(F->y_1824)).t = f_resolve_subtype_268((*(P1020)rt_nil_check(F->p_1817)).a, &F->pc_1825);
(*(P1030)rt_nil_check(F->y_1824)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_168(F->y_1824, rt_r_ichk((*(P1020)rt_nil_check(F->d_1816)).line));
F->p_1817 = (*(P1020)rt_nil_check(F->p_1817)).next;
}
}
}
(*(P1026)rt_nil_check(F->t_468)).target = f_resolve_subtype_268((*(P1020)rt_nil_check(F->d_1816)).a, &F->c_1818);
if (((*(P1020)rt_nil_check(F->d_1816)).c != NULL)) {
f_check_rep_332((*(P1020)rt_nil_check(F->d_1816)).c, (*(P1026)rt_nil_check(F->t_468)).target, F->c_1818, 1, 1, F->d_1816);
(*(P1026)rt_nil_check(F->t_468)).repn = (*(P1020)rt_nil_check(F->d_1816)).c;
}
f_close_scope_178();
(*rt_str_at(&F->dummy_1819, ((rt_int)1LL))) = rt_str_get(f_ctype_234(F->t_468), ((rt_int)1LL));
(*rt_str_at(&F->dummy_1819, ((rt_int)1LL))) = rt_str_get(f_ctype_234((*(P1026)rt_nil_check(F->t_468)).target), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static P1020 f_ptr_args_471(P1022 c_470) {
  struct f_ptr_args_471fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_470 = c_470;
if ((F->c_470 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = (*(P1022)rt_nil_check(F->c_470)).args;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_ptr_params_476(P1020 formals_472, P1020 actuals_473, rstr *cell_474, rt_int line_475) {
  struct f_bind_ptr_params_476fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->formals_472 = formals_472;
F->actuals_473 = actuals_473;
F->cell_474 = cell_474;
F->line_475 = line_475;
F->p_1826 = NULL;
F->p_1826 = F->formals_472;
F->a_1827 = NULL;
F->a_1827 = F->actuals_473;
F->vt_1828 = NULL;
if ((f_list_len_71(F->formals_472) != f_list_len_71(F->actuals_473))) {
f_fail_23(F->line_475, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the indirect subtype needs ", 27), f_itos_7(f_list_len_71(F->formals_472))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->p_1826 != NULL)) {
F->pc_1829 = NULL;
F->y_1830 = NULL;
F->y_1830 = f_new_sym_181((((rt_int)2LL)), (*(P1020)rt_nil_check(F->p_1826)).name);
(*(P1030)rt_nil_check(F->y_1830)).t = f_resolve_subtype_268((*(P1020)rt_nil_check(F->p_1826)).a, &F->pc_1829);
{
F->v_1831 = rt_str_copy(f_gexpr_794(F->a_1827, (*(P1030)rt_nil_check(F->y_1830)).t, &F->vt_1828));
F->pv_1832 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pv", 2); b_; })));
f_check_type_232(F->vt_1828, (*(P1030)rt_nil_check(F->y_1830)).t, F->line_475);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1030)rt_nil_check(F->y_1830)).t), rt_str(" ", 1)), F->pv_1832), rt_str(" = ", 3)), f_checked_213((*(P1030)rt_nil_check(F->y_1830)).t, F->pc_1829, &F->v_1831)), rt_str(";", 1)); b_; }));
if ((!rt_str_eq((*F->cell_474), rt_str("", 0)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->cell_474), rt_str("->p_", 4)), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1826)).name))->all))), rt_str(" = ", 3)), F->pv_1832), rt_str(";", 1)); b_; }));
}
(*(P1030)rt_nil_check(F->y_1830)).access = f_mk_3(&F->pv_1832);
}
f_define_168(F->y_1830, F->line_475);
F->p_1826 = (*(P1020)rt_nil_check(F->p_1826)).next;
F->a_1827 = (*(P1020)rt_nil_check(F->a_1827)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_alloc_cell_481(P1020 s_477, rstr *lv_478, P1026 t_479, P1022 c_480) {
  struct f_alloc_cell_481fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_477 = s_477;
F->lv_478 = lv_478;
F->t_479 = t_479;
F->c_480 = c_480;
F->d_1833 = NULL;
F->d_1833 = (*(P1026)rt_nil_check(F->t_479)).decl;
F->tc_1834 = NULL;
F->vt_1835 = NULL;
F->pt_1836 = rt_str_copy(f_ctype_234(F->t_479));
F->cell_1837 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_346((*(P1026)rt_nil_check(F->t_479)).target)) {
F->fn_1838 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_1085 = 1;
g_uses_findyn_1087 = 1;
f_put_27(g_out_protos_1069, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1838), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_1838), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_1076)) {
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1013)rt_nil_check((*(P1030)rt_nil_check(g_func_sym_1088)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(((", 3), F->pt_1836), rt_str(")cell_)->all)", 13)); b_; }), (*(P1026)rt_nil_check(F->t_479)).target)); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_1076)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1836), rt_str(" ", 1)), F->cell_1837), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1837), rt_str(", ", 2)), F->fn_1838), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->pt_1836), rt_str(" ", 1)), F->cell_1837), rt_str(" = rt_salloc_fin(sizeof *", 25)), F->cell_1837), rt_str(", ", 2)), F->fn_1838), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->pt_1836), rt_str(" ", 1)), F->cell_1837), rt_str(" = rt_alloc(sizeof *", 20)), F->cell_1837), rt_str(");", 2)); b_; }));
}
f_open_scope_177();
f_bind_ptr_params_476((*(P1020)rt_nil_check(F->d_1833)).d, f_ptr_args_471(F->c_480), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P1020)rt_nil_check(F->s_477)).line));
f_bind_ptr_params_476((*(P1020)rt_nil_check(F->d_1833)).b, (*(P1020)rt_nil_check(F->s_477)).b, &F->cell_1837, rt_r_ichk((*(P1020)rt_nil_check(F->s_477)).line));
F->vt_1835 = f_resolve_subtype_268((*(P1020)rt_nil_check(F->d_1833)).a, &F->tc_1834);
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1837, rt_str("->all", 5)); b_; }), (*(P1026)rt_nil_check(F->t_479)).target, F->tc_1834);
f_close_scope_178();
if (((*(P1020)rt_nil_check(F->s_477)).c != NULL)) {
F->v_1839 = rt_str_copy(f_gexpr_in_802((*(P1020)rt_nil_check(F->s_477)).c, (*(P1026)rt_nil_check(F->t_479)).target, F->tc_1834, &F->vt_1835));
f_check_type_232(F->vt_1835, (*(P1026)rt_nil_check(F->t_479)).target, rt_r_ichk((*(P1020)rt_nil_check(F->s_477)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->cell_1837, rt_str("->all", 5)); b_; }), (*(P1026)rt_nil_check(F->t_479)).target, &F->v_1839, F->tc_1834); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lv_478), rt_str(" = ", 3)), F->cell_1837), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1022 f_freeze_args_485(P1022 c_482, P1026 t_483, rt_int line_484) {
  struct f_freeze_args_485fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_482 = c_482;
F->t_483 = t_483;
F->line_484 = line_484;
F->r_1840 = NULL;
F->r_1840 = f_copy_cons_206(F->c_482);
F->p_1841 = NULL;
F->p_1841 = (*(P1020)rt_nil_check((*(P1026)rt_nil_check(F->t_483)).decl)).d;
F->a_1842 = NULL;
F->a_1842 = (*(P1022)rt_nil_check(F->c_482)).args;
F->head_1843 = NULL;
F->tail_1844 = NULL;
F->saved_1845 = NULL;
F->saved_1845 = g_st_field_1082;
if ((f_list_len_71(F->p_1841) != f_list_len_71(F->a_1842))) {
f_fail_23(F->line_484, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_483)).name))->all), rt_str(" needs ", 7)), f_itos_7(f_list_len_71(F->p_1841))), rt_str(" actual parameters", 18)); b_; }));
}
while ((F->a_1842 != NULL)) {
F->pc_1846 = NULL;
F->vt_1847 = NULL;
F->pt_1848 = NULL;
F->pt_1848 = f_resolve_subtype_268((*(P1020)rt_nil_check(F->p_1841)).a, &F->pc_1846);
F->nm_1849 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PTR_ARG_", 8); b_; })));
F->y_1850 = NULL;
F->y_1850 = f_new_sym_181((((rt_int)2LL)), f_mk_3(&F->nm_1849));
F->n_1851 = NULL;
F->n_1851 = f_nn_65((((rt_int)7LL)), F->line_484);
F->v_1852 = rt_str_copy(f_gexpr_794(F->a_1842, F->pt_1848, &F->vt_1847));
F->access_1853 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("pa", 2); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ctype_234(F->pt_1848); b_; })));
f_check_type_232(F->vt_1847, F->pt_1848, F->line_484);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1853, rt_str(" = ", 3)), f_checked_213(F->pt_1848, F->pc_1846, &F->v_1852)), rt_str(";", 1)); b_; }));
(*(P1030)rt_nil_check(F->y_1850)).t = F->pt_1848;
(*(P1030)rt_nil_check(F->y_1850)).ro_flag = 1;
f_bind_516(F->y_1850, &F->access_1853);
f_define_168(F->y_1850, F->line_484);
(*(P1020)rt_nil_check(F->n_1851)).name = f_mk_3(&F->nm_1849);
f_append_69(&F->head_1843, &F->tail_1844, F->n_1851);
F->a_1842 = (*(P1020)rt_nil_check(F->a_1842)).next;
F->p_1841 = (*(P1020)rt_nil_check(F->p_1841)).next;
}
(*(P1022)rt_nil_check(F->r_1840)).args = F->head_1843;
g_st_field_1082 = F->saved_1845;
F->result_ = F->r_1840;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_ptr_subtype_check_489(P1026 t_486, P1022 c_487, P1020 src_488) {
  struct f_ptr_subtype_check_489fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_486 = t_486;
F->c_487 = c_487;
F->src_488 = src_488;
F->lv_1854 = NULL;
F->st_1855 = NULL;
F->sc_1856 = NULL;
F->ro_1857 = RT_R_EUNDEF;
F->cond_1858 = NULL;
F->cond_1858 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->a_1859 = NULL;
F->b_1860 = NULL;
F->at_1861 = NULL;
F->bt_1862 = NULL;
if ((((((rt_r_ichk((*(P1026)rt_nil_check(F->t_486)).kind) != (((rt_int)8LL))) || (F->c_487 == NULL)) || ((*(P1022)rt_nil_check(F->c_487)).args == NULL)) || (F->src_488 == NULL)) || (!f_is_lvalue_757(F->src_488)))) {
goto ret_;
}
f_lvalue_763(F->src_488, &F->lv_1854, &F->st_1855, &F->sc_1856, &F->ro_1857);
if (((F->sc_1856 == NULL) || ((*(P1022)rt_nil_check(F->sc_1856)).args == NULL))) {
goto ret_;
}
F->a_1859 = (*(P1022)rt_nil_check(F->c_487)).args;
F->b_1860 = (*(P1022)rt_nil_check(F->sc_1856)).args;
while (((F->a_1859 != NULL) && (F->b_1860 != NULL))) {
F->x_1863 = rt_str_copy(f_gexpr_794(F->a_1859, NULL, &F->at_1861));
F->y_1864 = rt_str_copy(f_gexpr_794(F->b_1860, F->at_1861, &F->bt_1862));
F->cond_1858 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->cond_1858))->all), rt_str(" || !", 5)), f_eq_code_418(F->at_1861, &F->x_1863, &F->y_1864)); b_; }));
F->a_1859 = (*(P1020)rt_nil_check(F->a_1859)).next;
F->b_1860 = (*(P1020)rt_nil_check(F->b_1860)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1013)rt_nil_check(F->cond_1858))->all)), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("indirect subtype", 16)), f_q_18()), rt_str(");", 2)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_normal_function_492(P1020 d_490, P1030 y_491) {
  struct f_normal_function_492fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_490 = d_490;
F->y_491 = y_491;
F->p_1865 = NULL;
F->p_1865 = (*(P1030)rt_nil_check(F->y_491)).params;
F->imp_1866 = NULL;
F->imp_1866 = (*(P1020)rt_nil_check(F->d_490)).d;
if (((rt_r_ichk((*(P1020)rt_nil_check(F->d_490)).kind) != (((rt_int)46LL))) || (rt_mod(rt_r_ichk((*(P1020)rt_nil_check(F->d_490)).flag), ((rt_int)2LL)) == ((rt_int)1LL)))) {
goto ret_;
}
while ((F->p_1865 != NULL)) {
if (((rt_r_ichk((*(P1032)rt_nil_check(F->p_1865)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->p_1865)).mode) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_490)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may have only CONST and READONLY formal parameters: ", 70), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_490)).name))->all)); b_; }));
}
F->p_1865 = (*(P1032)rt_nil_check(F->p_1865)).next;
}
if ((((*(P1020)rt_nil_check(F->d_490)).d == NULL) && (rt_r_ichk((*(P1020)rt_nil_check(F->d_490)).flag) < ((rt_int)2LL)))) {
goto ret_;
}
if (((g_caps_1079 == NULL) || (rt_r_ichk(g_depth_1063) != rt_r_ichk((*(P1047)rt_nil_check(g_caps_1079)).depth)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_490)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function with an imports list must be local to a capsule body: ", 72), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_490)).name))->all)); b_; }));
}
while ((F->imp_1866 != NULL)) {
F->ro_1867 = RT_R_EUNDEF;
F->z_1868 = NULL;
F->z_1868 = f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->imp_1866)).name))->all));
if ((((F->z_1868 != NULL) && (rt_r_ichk((*(P1030)rt_nil_check(F->z_1868)).kind) == (((rt_int)1LL)))) && (rt_r_ichk((*(P1030)rt_nil_check(F->z_1868)).depth) != rt_r_ichk((*(P1047)rt_nil_check(g_caps_1079)).depth)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_490)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function imports only variables of its capsule body: ", 62), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->imp_1866)).name))->all)); b_; }));
}
if ((f_exported_436((*(P1047)rt_nil_check(g_caps_1079)).d, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->imp_1866)).name))->all), &F->ro_1867) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1047)rt_nil_check(g_caps_1079)).d)).ival) != ((rt_int)1LL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_490)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a normal function may not import an exported variable: ", 55), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->imp_1866)).name))->all)); b_; }));
}
F->imp_1866 = (*(P1020)rt_nil_check(F->imp_1866)).next;
}
(*(P1030)rt_nil_check(F->y_491)).capn = (*(P1047)rt_nil_check(g_caps_1079)).d;
ret_:
  RT_FPOP();
  return;
}

static void f_foreign_body_495(P1020 d_493, P1030 y_494) {
  struct f_foreign_body_495fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_493 = d_493;
F->y_494 = y_494;
F->pm_1869 = NULL;
F->pm_1869 = (*(P1030)rt_nil_check(F->y_494)).params;
F->proto_1870 = NULL;
F->proto_1870 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->args_1871 = NULL;
F->args_1871 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->cn_1872 = rt_str_copy(f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_493)).name))->all)));
if (((*(P1020)rt_nil_check(F->d_493)).c != NULL)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_493)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a foreign ", 10), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_493)).name))->all)), rt_str(" has an empty body", 18)); b_; }));
}
while ((F->pm_1869 != NULL)) {
if (((rt_r_ichk((*(P1032)rt_nil_check(F->pm_1869)).mode) != (((rt_int)1LL))) || (!(f_scalar_kind_186(f_base_of_223((*(P1032)rt_nil_check(F->pm_1869)).t)) || ((*(P1026)rt_nil_check(f_base_of_223((*(P1032)rt_nil_check(F->pm_1869)).t))).kind == (((rt_int)2LL))))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_493)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a foreign subprogram takes CONST INT, FLOAT, BOOL and ENUM formals", 66); b_; }));
}
if ((((rt_int)(((((P1013)rt_nil_check(F->proto_1870))->all)).len)) > ((rt_int)0LL))) {
F->proto_1870 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->proto_1870))->all), rt_str(", ", 2)); b_; }));
F->args_1871 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->args_1871))->all), rt_str(", ", 2)); b_; }));
}
F->proto_1870 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->proto_1870))->all), f_ctype_234((*(P1032)rt_nil_check(F->pm_1869)).t)); b_; }));
F->args_1871 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->args_1871))->all), rt_str("F->", 3)), (((P1013)rt_nil_check((*(P1032)rt_nil_check(F->pm_1869)).cfield))->all)); b_; }));
F->pm_1869 = (*(P1032)rt_nil_check(F->pm_1869)).next;
}
if ((((rt_int)(((((P1013)rt_nil_check(F->proto_1870))->all)).len)) == ((rt_int)0LL))) {
F->proto_1870 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if (((rt_r_ichk((*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_494)).result)).kind) != (((rt_int)9LL))) && (!(f_scalar_kind_186(f_base_of_223((*(P1030)rt_nil_check(F->y_494)).result)) || ((*(P1026)rt_nil_check(f_base_of_223((*(P1030)rt_nil_check(F->y_494)).result))).kind == (((rt_int)2LL))))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_493)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a foreign function returns an INT, FLOAT, BOOL or ENUM value", 60); b_; }));
}
f_put_27(g_out_protos_1069, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("extern ", 7), f_ctype_234((*(P1030)rt_nil_check(F->y_494)).result)), rt_str(" ", 1)), F->cn_1872), rt_str("(", 1)), (((P1013)rt_nil_check(F->proto_1870))->all)), rt_str(");", 2)); b_; }));
if ((rt_r_ichk((*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_494)).result)).kind) == (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->cn_1872, rt_str("(", 1)), (((P1013)rt_nil_check(F->args_1871))->all)), rt_str(");", 2)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), F->cn_1872), rt_str("(", 1)), (((P1013)rt_nil_check(F->args_1871))->all)), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_subprogram_497(P1020 d_496) {
  struct f_declare_subprogram_497fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_496 = d_496;
f_define_168(f_build_subprogram_499(F->d_496), rt_r_ichk((*(P1020)rt_nil_check(F->d_496)).line));
ret_:
  RT_FPOP();
  return;
}

static P1030 f_build_subprogram_499(P1020 d_498) {
  struct f_build_subprogram_499fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_498 = d_498;
F->y_1873 = NULL;
F->p_1874 = NULL;
F->p_1874 = (*(P1020)rt_nil_check(F->d_498)).a;
F->tail_1875 = NULL;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->d_498)).kind) == (((rt_int)46LL)))) {
F->y_1873 = f_new_sym_181((((rt_int)3LL)), (*(P1020)rt_nil_check(F->d_498)).name);
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->d_498)).kind) == (((rt_int)50LL)))) {
F->y_1873 = f_new_sym_181((((rt_int)9LL)), (*(P1020)rt_nil_check(F->d_498)).name);
} else {
F->y_1873 = f_new_sym_181((((rt_int)4LL)), (*(P1020)rt_nil_check(F->d_498)).name);
}
while ((F->p_1874 != NULL)) {
F->pm_1876 = NULL;
if (((rt_r_ichk((*(P1020)rt_nil_check(F->d_498)).kind) == (((rt_int)50LL))) && (rt_r_ichk((*(P1020)rt_nil_check(F->p_1874)).ival) == (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_498)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a task may not have OUT formal parameters", 41); b_; }));
}
{ R1033 *cell1877 = rt_alloc(sizeof(R1033));
(*cell1877).name = NULL;
(*cell1877).t = NULL;
(*cell1877).c = NULL;
(*cell1877).cfield = NULL;
(*cell1877).next = NULL;
F->pm_1876 = cell1877;
}
(*(P1032)rt_nil_check(F->pm_1876)).name = (*(P1020)rt_nil_check(F->p_1874)).name;
(*(P1032)rt_nil_check(F->pm_1876)).mode = rt_r_ichk((*(P1020)rt_nil_check(F->p_1874)).ival);
(*(P1032)rt_nil_check(F->pm_1876)).t = f_resolve_subtype_268((*(P1020)rt_nil_check(F->p_1874)).a, &(*(P1032)rt_nil_check(F->pm_1876)).c);
(*(P1032)rt_nil_check(F->pm_1876)).cfield = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1874)).name))->all)), rt_str("_", 1)); b_; })); b_; }));
if ((F->tail_1875 == NULL)) {
(*(P1030)rt_nil_check(F->y_1873)).params = F->pm_1876;
} else {
(*(P1032)rt_nil_check(F->tail_1875)).next = F->pm_1876;
}
F->tail_1875 = F->pm_1876;
F->p_1874 = (*(P1020)rt_nil_check(F->p_1874)).next;
}
(*(P1030)rt_nil_check(F->y_1873)).result = g_ty_void_1109;
if (((*(P1020)rt_nil_check(F->d_498)).b != NULL)) {
F->rc_1878 = NULL;
F->pm_1879 = NULL;
F->pm_1879 = (*(P1030)rt_nil_check(F->y_1873)).params;
F->saved_1880 = NULL;
F->saved_1880 = g_code_1074;
g_code_1074 = f_new_buffer_24();
f_open_scope_177();
while ((F->pm_1879 != NULL)) {
F->z_1881 = NULL;
F->z_1881 = f_new_sym_181((((rt_int)2LL)), (*(P1032)rt_nil_check(F->pm_1879)).name);
(*(P1030)rt_nil_check(F->z_1881)).t = (*(P1032)rt_nil_check(F->pm_1879)).t;
(*(P1030)rt_nil_check(F->z_1881)).c = (*(P1032)rt_nil_check(F->pm_1879)).c;
(*(P1030)rt_nil_check(F->z_1881)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
f_define_168(F->z_1881, rt_r_ichk((*(P1020)rt_nil_check(F->d_498)).line));
F->pm_1879 = (*(P1032)rt_nil_check(F->pm_1879)).next;
}
(*(P1030)rt_nil_check(F->y_1873)).result = f_resolve_subtype_268((*(P1020)rt_nil_check(F->d_498)).b, &F->rc_1878);
f_close_scope_178();
g_code_1074 = F->saved_1880;
}
(*(P1030)rt_nil_check(F->y_1873)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("f_", 2), f_c_ident_749(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_498)).name))->all))), rt_str("_", 1)); b_; })); b_; }));
(*(P1030)rt_nil_check(F->y_1873)).decl = F->d_498;
(*(P1030)rt_nil_check(F->y_1873)).level = rt_r_ichk(g_cur_level_1077);
if ((rt_r_ichk((*(P1020)rt_nil_check(F->d_498)).kind) == (((rt_int)50LL)))) {
f_put_27(g_out_globals_1070, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_taskdecl ", 19), (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_1873)).cname))->all)), rt_str("decl;", 5)); b_; }));
}
F->result_ = F->y_1873;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_pragmat_502(P1013 pr_500, rstr *p_501) {
  struct f_has_pragmat_502fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_500 = pr_500;
F->p_501 = p_501;
if ((F->pr_500 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1883 = ((rt_int)1LL), hi1884 = rt_sub(((rt_int)(((((P1013)rt_nil_check(F->pr_500))->all)).len)), ((rt_int)(((*F->p_501)).len)));
for (rt_int it1885 = lo1883; it1885 <= hi1884; it1885++) {
F->i_1882 = it1885;
if (((rt_str_eq(rt_str_slice((((P1013)rt_nil_check(F->pr_500))->all), F->i_1882, rt_sub(rt_add(F->i_1882, ((rt_int)(((*F->p_501)).len))), ((rt_int)1LL))), (*F->p_501)) && (rt_r_echk(rt_str_get((((P1013)rt_nil_check(F->pr_500))->all), rt_add(F->i_1882, ((rt_int)(((*F->p_501)).len))))) == 59)) && ((F->i_1882 == ((rt_int)1LL)) || (rt_r_echk(rt_str_get((((P1013)rt_nil_check(F->pr_500))->all), rt_sub(F->i_1882, ((rt_int)1LL)))) == 59)))) {
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

static P1013 f_suppressing_504(P1013 pr_503) {
  struct f_suppressing_504fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->pr_503 = pr_503;
F->r_1886 = NULL;
F->r_1886 = g_suppress_1094;
F->i_1887 = RT_R_IUNDEF;
F->i_1887 = ((rt_int)1LL);
if ((F->pr_503 == NULL)) {
F->result_ = F->r_1886;
goto ret_;
}
if ((F->r_1886 == NULL)) {
F->r_1886 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(" ", 1); b_; }));
}
while ((rt_add(rt_r_ichk(F->i_1887), ((rt_int)9LL)) <= ((rt_int)(((((P1013)rt_nil_check(F->pr_503))->all)).len)))) {
if (rt_str_eq(rt_str_slice((((P1013)rt_nil_check(F->pr_503))->all), rt_r_ichk(F->i_1887), rt_add(rt_r_ichk(F->i_1887), ((rt_int)8LL))), rt_str("SUPPRESS(", 9))) {
F->j_1888 = RT_R_IUNDEF;
F->j_1888 = rt_add(rt_r_ichk(F->i_1887), ((rt_int)9LL));
F->k_1889 = RT_R_IUNDEF;
F->k_1889 = rt_r_ichk(F->j_1888);
while ((rt_r_echk(rt_str_get((((P1013)rt_nil_check(F->pr_503))->all), rt_r_ichk(F->k_1889))) != 41)) {
if ((rt_r_echk(rt_str_get((((P1013)rt_nil_check(F->pr_503))->all), rt_r_ichk(F->k_1889))) == 44)) {
F->r_1886 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_1886))->all), rt_str_slice((((P1013)rt_nil_check(F->pr_503))->all), rt_r_ichk(F->j_1888), rt_sub(rt_r_ichk(F->k_1889), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->j_1888 = rt_add(rt_r_ichk(F->k_1889), ((rt_int)1LL));
}
F->k_1889 = rt_add(rt_r_ichk(F->k_1889), ((rt_int)1LL));
}
F->r_1886 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_1886))->all), rt_str_slice((((P1013)rt_nil_check(F->pr_503))->all), rt_r_ichk(F->j_1888), rt_sub(rt_r_ichk(F->k_1889), ((rt_int)1LL)))), rt_str(" ", 1)); b_; }));
F->i_1887 = rt_r_ichk(F->k_1889);
}
F->i_1887 = rt_add(rt_r_ichk(F->i_1887), ((rt_int)1LL));
}
F->result_ = F->r_1886;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_suppressed_506(rstr *x_505) {
  struct f_suppressed_506fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_505 = x_505;
F->w_1890 = rt_str_new(rt_add(((rt_int)(((*F->x_505)).len)), ((rt_int)2LL)));
rt_str_assign(&F->w_1890, rt_str_cat(rt_str_cat(rt_str(" ", 1), (*F->x_505)), rt_str(" ", 1)));
if ((g_suppress_1094 == NULL)) {
F->result_ = 0;
goto ret_;
}
{ rt_int lo1892 = ((rt_int)1LL), hi1893 = rt_add(rt_sub(((rt_int)(((((P1013)rt_nil_check(g_suppress_1094))->all)).len)), ((rt_int)((F->w_1890).len))), ((rt_int)1LL));
for (rt_int it1894 = lo1892; it1894 <= hi1893; it1894++) {
F->i_1891 = it1894;
if (rt_str_eq(rt_str_slice((((P1013)rt_nil_check(g_suppress_1094))->all), F->i_1891, rt_sub(rt_add(F->i_1891, ((rt_int)((F->w_1890).len))), ((rt_int)1LL))), F->w_1890)) {
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

static void f_element_508(P1020 e_507) {
  struct f_element_508fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_507 = e_507;
F->saved_1895 = NULL;
F->saved_1895 = g_suppress_1094;
g_suppress_1094 = f_suppressing_504((*(P1020)rt_nil_check(F->e_507)).prags);
f_element1_510(F->e_507);
g_suppress_1094 = F->saved_1895;
ret_:
  RT_FPOP();
  return;
}

static void f_element1_510(P1020 e_509) {
  struct f_element1_510fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_509 = e_509;
F->k_1896 = RT_R_IUNDEF;
F->k_1896 = rt_r_ichk((*(P1020)rt_nil_check(F->e_509)).kind);
if (((rt_r_ichk(F->k_1896) == (((rt_int)48LL))) && ((rt_r_ichk((*(P1020)rt_nil_check(F->e_509)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P1020)rt_nil_check(F->e_509)).flag) == ((rt_int)3LL))))) {
f_gen_expose_467(F->e_509);
} else if ((((rt_r_ichk(F->k_1896) == (((rt_int)45LL))) || (rt_r_ichk(F->k_1896) == (((rt_int)46LL)))) || (rt_r_ichk(F->k_1896) == (((rt_int)50LL))))) {
f_subprogram_567(F->e_509);
} else if ((rt_r_ichk(F->k_1896) == (((rt_int)51LL)))) {
F->g_1897 = NULL;
F->g_1897 = f_lookup_decl_165(F->e_509);
if ((F->g_1897 != NULL)) {
{ P1034 cell1898 = rt_alloc(sizeof *cell1898);
rt_int pv1899 = (((rt_int)4093LL));
cell1898->p_n = pv1899;
cell1898->all.lo = ((rt_int)0LL); cell1898->all.hi = pv1899;
cell1898->all.lo2 = cell1898->all.hi2 = 1;
cell1898->all.p = rt_alloc(sizeof(P1030) * (size_t)(RT_CNT(cell1898->all)) + 1);
for (rt_int i1900 = 0; i1900 < (RT_CNT(cell1898->all)); i1900++) {
cell1898->all.p[i1900] = NULL;
}
(*(P1030)rt_nil_check(F->g_1897)).env = cell1898;
}
{ rt_int lo1902 = ((rt_int)0LL), hi1903 = (((rt_int)4093LL));
for (rt_int it1904 = lo1902; it1904 <= hi1903; it1904++) {
F->i_1901 = it1904;
(((P1034)rt_nil_check((*(P1030)rt_nil_check(F->g_1897)).env))->all).p[(rt_index(F->i_1901, (((P1034)rt_nil_check((*(P1030)rt_nil_check(F->g_1897)).env))->all).lo, (((P1034)rt_nil_check((*(P1030)rt_nil_check(F->g_1897)).env))->all).hi) - (((P1034)rt_nil_check((*(P1030)rt_nil_check(F->g_1897)).env))->all).lo)] = ({ A1036 b_ = (((P1034)rt_nil_check(g_table_1060))->all); b_.p[(rt_index(F->i_1901, b_.lo, b_.hi) - b_.lo)]; });
}
}
}
} else if ((((rt_r_ichk(F->k_1896) == (((rt_int)43LL))) && ((*(P1020)rt_nil_check(F->e_509)).c != NULL)) && ((*(P1020)rt_nil_check(F->e_509)).b == NULL))) {
F->c_1905 = NULL;
F->st_1906 = NULL;
F->st_1906 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1020)rt_nil_check(F->e_509)).line));
F->t_1907 = NULL;
(*(P1020)rt_nil_check(F->st_1906)).name = (*(P1020)rt_nil_check(F->e_509)).name;
F->t_1907 = f_resolve_subtype_268(F->st_1906, &F->c_1905);
} else if ((((((rt_r_ichk(F->k_1896) == (((rt_int)49LL))) || (rt_r_ichk(F->k_1896) == (((rt_int)42LL)))) || (rt_r_ichk(F->k_1896) == (((rt_int)43LL)))) || (rt_r_ichk(F->k_1896) == (((rt_int)47LL)))) || (rt_r_ichk(F->k_1896) == (((rt_int)48LL))))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1896) == (((rt_int)44LL)))) {
f_finish_ptr_469((*(P1030)rt_nil_check(f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_509)).name))->all)))).t);
} else if ((rt_r_ichk(F->k_1896) == (((rt_int)40LL)))) {
f_var_decl_518(F->e_509);
} else if (((rt_r_ichk(F->k_1896) == (((rt_int)41LL))) && (rt_r_ichk((*(P1020)rt_nil_check(F->e_509)).flag) == ((rt_int)0LL)))) {
f_const_decl_565(F->e_509);
} else if ((rt_r_ichk(F->k_1896) == (((rt_int)41LL)))) {
goto ret_;
} else if ((rt_r_ichk(F->k_1896) == (((rt_int)33LL)))) {
F->t_1908 = NULL;
F->c_1909 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_509)).a, g_ty_bool_1105, &F->t_1908));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!(", 6), F->c_1909), rt_str(")) rt_raise(RT_X_ASSERT);", 25)); b_; }));
} else {
f_gen_statement_602(F->e_509);
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_storage_513(rstr *name_511, P1026 t_512) {
  struct f_storage_513fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_511 = name_511;
F->t_512 = t_512;
if ((!rt_r_echk(g_in_func_1076))) {
F->g_1910 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("g_", 2), f_lower_s_15(&(*F->name_511))), rt_str("_", 1)); b_; })));
f_put_27(g_out_globals_1070, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234(F->t_512)), rt_str(" ", 1)), F->g_1910), rt_str(";", 1)); b_; }));
f_put_27(g_out_roots_1084, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  RT_ROOT(", 10), F->g_1910), rt_str(");", 2)); b_; }));
g_st_field_1082 = f_mk_3(&F->g_1910);
F->result_ = F->g_1910;
goto ret_;
}
{
F->f_1911 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_lower_s_15(&(*F->name_511)), rt_str("_", 1)); b_; })));
f_put_27(g_fields_buf_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234(F->t_512)), rt_str(" ", 1)), F->f_1911), rt_str(";", 1)); b_; }));
g_st_field_1082 = f_mk_3(&F->f_1911);
F->result_ = rt_str_cat(rt_str("F->", 3), F->f_1911);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_bind_516(P1030 y_514, rstr *access_515) {
  struct f_bind_516fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_514 = y_514;
F->access_515 = access_515;
if (rt_r_echk(g_in_func_1076)) {
(*(P1030)rt_nil_check(F->y_514)).level = rt_r_ichk(g_cur_level_1077);
(*(P1030)rt_nil_check(F->y_514)).access = g_st_field_1082;
} else {
(*(P1030)rt_nil_check(F->y_514)).level = ((rt_int)0LL);
(*(P1030)rt_nil_check(F->y_514)).access = f_mk_3(&(*F->access_515));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl_518(P1020 d_517) {
  struct f_var_decl_518fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_517 = d_517;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->d_517)).ival) == ((rt_int)2LL))) {
f_located_var_520(F->d_517);
} else {
f_var_decl2_559(F->d_517);
}
ret_:
  RT_FPOP();
  return;
}

static void f_located_var_520(P1020 d_519) {
  struct f_located_var_520fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_519 = d_519;
F->c_1912 = NULL;
F->at_1913 = NULL;
F->t_1914 = NULL;
F->t_1914 = f_resolve_subtype_268((*(P1020)rt_nil_check(F->d_519)).a, &F->c_1912);
F->y_1915 = NULL;
F->y_1915 = f_new_sym_181((((rt_int)1LL)), (*(P1020)rt_nil_check(F->d_519)).name);
F->addr_1916 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->d_519)).c, g_ty_int_1104, &F->at_1913));
F->av_1917 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("loc", 3); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_int", 6); b_; })));
F->af_1918 = rt_str_copy((((P1013)rt_nil_check(g_st_field_1082))->all));
f_check_type_232(F->at_1913, g_ty_int_1104, rt_r_ichk((*(P1020)rt_nil_check(F->d_519)).line));
F->c_1912 = f_freeze_209(F->c_1912, F->t_1914);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->av_1917, rt_str(" = ", 3)), F->addr_1916), rt_str(";", 1)); b_; }));
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_1914)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->t_1914)).repn != NULL))) {
F->access_1919 = rt_str_copy(f_storage_513(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_519)).name))->all), F->t_1914));
g_mark_uninit_1096 = 1;
f_init_storage_341(&F->access_1919, F->t_1914, F->c_1912);
g_mark_uninit_1096 = 0;
(*(P1030)rt_nil_check(F->y_1915)).t = F->t_1914;
(*(P1030)rt_nil_check(F->y_1915)).c = F->c_1912;
f_bind_516(F->y_1915, &F->access_1919);
if (rt_r_echk(g_in_func_1076)) {
(*(P1030)rt_nil_check(F->y_1915)).loc = f_mk_3(&F->af_1918);
} else {
(*(P1030)rt_nil_check(F->y_1915)).loc = f_mk_3(&F->av_1917);
}
f_define_168(F->y_1915, rt_r_ichk((*(P1020)rt_nil_check(F->d_519)).line));
if (((*(P1020)rt_nil_check(F->d_519)).b != NULL)) {
F->vt_1920 = NULL;
F->v_1921 = rt_str_copy(f_gexpr_in_802((*(P1020)rt_nil_check(F->d_519)).b, F->t_1914, F->c_1912, &F->vt_1920));
f_check_type_232(F->vt_1920, F->t_1914, rt_r_ichk((*(P1020)rt_nil_check(F->d_519)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(&F->access_1919, F->t_1914, &F->v_1921, F->c_1912); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_523(F->y_1915, 1); b_; }));
}
goto ret_;
}
{
F->pv_1922 = rt_str_copy(f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_519)).name))->all)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_ctype_234(F->t_1914), rt_str(" *", 2)); b_; })));
F->pf_1923 = rt_str_copy((((P1013)rt_nil_check(g_st_field_1082))->all));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->pv_1922, rt_str(" = (", 4)), f_ctype_234(F->t_1914)), rt_str(" *)rt_r_mem_at(", 15)), F->av_1917), rt_str(", sizeof(", 9)), f_ctype_234(F->t_1914)), rt_str("));", 3)); b_; }));
(*(P1030)rt_nil_check(F->y_1915)).t = F->t_1914;
(*(P1030)rt_nil_check(F->y_1915)).c = F->c_1912;
if (rt_r_echk(g_in_func_1076)) {
(*(P1030)rt_nil_check(F->y_1915)).level = rt_r_ichk(g_cur_level_1077);
(*(P1030)rt_nil_check(F->y_1915)).access = f_mk_3(&F->pf_1923);
(*(P1030)rt_nil_check(F->y_1915)).byref = 1;
} else {
(*(P1030)rt_nil_check(F->y_1915)).level = ((rt_int)0LL);
(*(P1030)rt_nil_check(F->y_1915)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1922), rt_str(")", 1)); b_; }));
}
g_mark_uninit_1096 = 1;
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1922), rt_str(")", 1)); b_; }), F->t_1914, F->c_1912);
g_mark_uninit_1096 = 0;
f_define_168(F->y_1915, rt_r_ichk((*(P1020)rt_nil_check(F->d_519)).line));
if (((*(P1020)rt_nil_check(F->d_519)).b != NULL)) {
F->vt_1924 = NULL;
F->v_1925 = rt_str_copy(f_gexpr_in_802((*(P1020)rt_nil_check(F->d_519)).b, F->t_1914, F->c_1912, &F->vt_1924));
f_check_type_232(F->vt_1924, F->t_1914, rt_r_ichk((*(P1020)rt_nil_check(F->d_519)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->pv_1922), rt_str(")", 1)); b_; }), F->t_1914, &F->v_1925, F->c_1912); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_rep_sync_523(P1030 y_521, int pack_522) {
  struct f_rep_sync_523fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_521 = y_521;
F->pack_522 = pack_522;
F->lv_1926 = rt_str_copy(f_access_of_741(F->y_521));
F->base_1927 = rt_str_copy(f_cbound_access_525(F->y_521));
F->saved_1928 = NULL;
F->saved_1928 = g_psub_1081;
F->p_1929 = NULL;
F->p_1929 = (*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_521)).t)).tparams;
F->r_1930 = NULL;
F->inner_1931 = NULL;
F->inner_1931 = f_mk_3(&F->lv_1926);
if (((*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_521)).t)).tparams != NULL)) {
F->inner_1931 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->lv_1926, rt_str(".all", 4)); b_; }));
}
f_open_scope_177();
while ((F->p_1929 != NULL)) {
F->z_1932 = NULL;
F->z_1932 = f_new_sym_181((((rt_int)2LL)), (*(P1020)rt_nil_check(F->p_1929)).name);
(*(P1030)rt_nil_check(F->z_1932)).t = f_tparam_type_352((*(P1030)rt_nil_check(F->y_521)).t, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1929)).name))->all));
(*(P1030)rt_nil_check(F->z_1932)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->lv_1926), rt_str(".p_", 3)), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_1929)).name))->all))), rt_str(")", 1)); b_; }));
f_define_168(F->z_1932, rt_r_ichk((*(P1030)rt_nil_check(F->y_521)).decl_line));
F->p_1929 = (*(P1020)rt_nil_check(F->p_1929)).next;
}
F->r_1930 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_code_545((*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_521)).t)).under, (*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_521)).t)).elemcons, (*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_521)).t)).repn, &(((P1013)rt_nil_check(F->inner_1931))->all), &F->base_1927, F->pack_522); b_; }));
f_close_scope_178();
g_psub_1081 = F->saved_1928;
F->result_ = rt_str_cat(rt_str_cat(rt_str("{ ", 2), (((P1013)rt_nil_check(F->r_1930))->all)), rt_str(" }", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cbound_access_525(P1030 y_524) {
  struct f_cbound_access_525fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_524 = y_524;
F->c_1933 = NULL;
F->c_1933 = f_new_cons_184();
(*(P1022)rt_nil_check(F->c_1933)).dyn = (rt_r_ichk((*(P1030)rt_nil_check(F->y_524)).level) > ((rt_int)0LL));
(*(P1022)rt_nil_check(F->c_1933)).lvl = rt_r_ichk((*(P1030)rt_nil_check(F->y_524)).level);
F->result_ = f_cbound_191(F->c_1933, &(((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_524)).loc))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_rep_size_529(P1020 items_526, P1026 t_527, P1022 c_528) {
  struct f_rep_size_529fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_526 = items_526;
F->t_527 = t_527;
F->c_528 = c_528;
F->it_1934 = NULL;
F->it_1934 = f_rep_find_532(F->items_526, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SIZE", 4); b_; }));
F->at_1935 = NULL;
if ((F->it_1934 != NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_794((*(P1020)rt_nil_check(F->it_1934)).a, g_ty_int_1104, &F->at_1935)), rt_str(")", 1));
goto ret_;
}
F->result_ = f_itos_7(f_default_bits_538(F->t_527, F->c_528));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_rep_find_532(P1020 items_530, rstr *w_531) {
  struct f_rep_find_532fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_530 = items_530;
F->w_531 = w_531;
F->it_1936 = NULL;
F->it_1936 = F->items_530;
while ((F->it_1936 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->it_1936)).name))->all), (*F->w_531))) {
F->result_ = F->it_1936;
goto ret_;
}
F->it_1936 = (*(P1020)rt_nil_check(F->it_1936)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_rep_comp_535(P1020 items_533, rstr *name_534) {
  struct f_rep_comp_535fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_533 = items_533;
F->name_534 = name_534;
F->r_1937 = NULL;
F->r_1937 = f_rep_find_532(F->items_533, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RECORD", 6); b_; }));
F->comp_1938 = NULL;
if ((F->r_1937 == NULL)) {
F->r_1937 = f_rep_find_532(F->items_533, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNION", 5); b_; }));
}
if ((F->r_1937 == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->comp_1938 = (*(P1020)rt_nil_check(F->r_1937)).c;
while ((F->comp_1938 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->comp_1938)).name))->all), (*F->name_534))) {
F->result_ = (*(P1020)rt_nil_check(F->comp_1938)).a;
goto ret_;
}
F->comp_1938 = (*(P1020)rt_nil_check(F->comp_1938)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_default_bits_538(P1026 t_536, P1022 c_537) {
  struct f_default_bits_538fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_536 = t_536;
F->c_537 = c_537;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_536)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_536)).kind) == (((rt_int)17LL))))) {
F->f_1939 = NULL;
F->f_1939 = (*(P1026)rt_nil_check(F->t_536)).fields;
F->n_1940 = RT_R_IUNDEF;
F->n_1940 = ((rt_int)0LL);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_536)).kind) == (((rt_int)17LL)))) {
F->n_1940 = f_needed_bits_321((*(P1026)rt_nil_check(F->t_536)).elem, NULL);
}
while ((F->f_1939 != NULL)) {
F->n_1940 = rt_add(rt_r_ichk(F->n_1940), f_default_bits_538((*(P1028)rt_nil_check(F->f_1939)).t, (*(P1028)rt_nil_check(F->f_1939)).c));
F->f_1939 = (*(P1028)rt_nil_check(F->f_1939)).next;
}
F->result_ = rt_r_ichk(F->n_1940);
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_536)).kind) == (((rt_int)4LL))) && f_same_221(F->t_536, g_ty_ascii_1107))) {
F->result_ = ((rt_int)8LL);
goto ret_;
} else if ((f_needed_bits_321(F->t_536, F->c_537) > ((rt_int)0LL))) {
F->result_ = f_needed_bits_321(F->t_536, F->c_537);
goto ret_;
}
F->result_ = ((rt_int)64LL);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_rep_code_545(P1026 t_539, P1022 c_540, P1020 items_541, rstr *lval_542, rstr *addr_543, int pack_544) {
  struct f_rep_code_545fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_539 = t_539;
F->c_540 = c_540;
F->items_541 = items_541;
F->lval_542 = lval_542;
F->addr_543 = addr_543;
F->pack_544 = pack_544;
F->size_1941 = rt_str_copy(f_rep_size_529(F->items_541, F->t_539, F->c_540));
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_539)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_539)).kind) == (((rt_int)17LL))))) {
F->f_1942 = NULL;
F->f_1942 = (*(P1026)rt_nil_check(F->t_539)).fields;
F->r_1943 = NULL;
F->r_1943 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->off_1944 = NULL;
F->off_1944 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
F->i_1945 = RT_R_IUNDEF;
F->i_1945 = ((rt_int)0LL);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_539)).kind) == (((rt_int)17LL)))) {
F->ti_1946 = NULL;
F->ti_1946 = f_rep_comp_535(F->items_541, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TAG", 3); b_; }));
F->tsize_1947 = NULL;
F->tsize_1947 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(f_needed_bits_321((*(P1026)rt_nil_check(F->t_539)).elem, NULL)); b_; }));
F->toff_1948 = NULL;
F->toff_1948 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
if (((F->ti_1946 != NULL) && (f_rep_find_532(F->ti_1946, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SIZE", 4); b_; })) != NULL))) {
F->tsize_1947 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_size_529(F->ti_1946, (*(P1026)rt_nil_check(F->t_539)).elem, NULL); b_; }));
}
if (((F->ti_1946 != NULL) && (f_rep_find_532(F->ti_1946, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })) != NULL))) {
F->at_1949 = NULL;
F->toff_1948 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_794((*(P1020)rt_nil_check(f_rep_find_532(F->ti_1946, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })))).a, g_ty_int_1104, &F->at_1949)), rt_str(")", 1)); b_; }));
}
if (F->pack_544) {
F->r_1943 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_mem_put(", 13), (*F->addr_543)), rt_str(" + ", 3)), (((P1013)rt_nil_check(F->toff_1948))->all)), rt_str(", ", 2)), (((P1013)rt_nil_check(F->tsize_1947))->all)), rt_str(", (uint64_t)", 12)), (*F->lval_542)), rt_str(".tag);", 6)); b_; }));
} else {
F->r_1943 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_542), rt_str(".tag = (int)rt_r_mem_get(", 25)), (*F->addr_543)), rt_str(" + ", 3)), (((P1013)rt_nil_check(F->toff_1948))->all)), rt_str(", ", 2)), (((P1013)rt_nil_check(F->tsize_1947))->all)), rt_str(", 0);", 5)); b_; }));
}
F->off_1944 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1013)rt_nil_check(F->toff_1948))->all)), rt_str(" + ", 3)), (((P1013)rt_nil_check(F->tsize_1947))->all)), rt_str(")", 1)); b_; }));
}
while ((F->f_1942 != NULL)) {
F->ci_1950 = NULL;
F->ci_1950 = f_rep_comp_535(F->items_541, &(((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_1942)).name))->all));
F->fo_1951 = NULL;
F->fo_1951 = F->off_1944;
F->fl_1952 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_542), rt_str(".", 1)), f_union_part_547(F->t_539)), f_field_c_17(&(((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_1942)).name))->all))));
if (((F->ci_1950 != NULL) && (f_rep_find_532(F->ci_1950, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })) != NULL))) {
F->at_1953 = NULL;
F->fo_1951 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_794((*(P1020)rt_nil_check(f_rep_find_532(F->ci_1950, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OFFSET", 6); b_; })))).a, g_ty_int_1104, &F->at_1953)), rt_str(")", 1)); b_; }));
}
{
F->part_1954 = rt_str_copy(f_rep_code_545((*(P1028)rt_nil_check(F->f_1942)).t, (*(P1028)rt_nil_check(F->f_1942)).c, F->ci_1950, &F->fl_1952, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->addr_543), rt_str(" + ", 3)), (((P1013)rt_nil_check(F->fo_1951))->all)); b_; }), F->pack_544));
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_539)).kind) == (((rt_int)17LL)))) {
F->r_1943 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_1943))->all), rt_str(" if (", 5)), (*F->lval_542)), rt_str(".tag == ", 8)), f_itos_7(rt_r_ichk(F->i_1945))), rt_str(") { ", 4)), F->part_1954), rt_str(" }", 2)); b_; }));
} else {
F->r_1943 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_1943))->all), rt_str(" ", 1)), F->part_1954); b_; }));
}
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_539)).kind) == (((rt_int)7LL)))) {
F->off_1944 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1013)rt_nil_check(F->fo_1951))->all)), rt_str(" + ", 3)), f_rep_size_529(F->ci_1950, (*(P1028)rt_nil_check(F->f_1942)).t, (*(P1028)rt_nil_check(F->f_1942)).c)), rt_str(")", 1)); b_; }));
}
F->i_1945 = rt_add(rt_r_ichk(F->i_1945), ((rt_int)1LL));
F->f_1942 = (*(P1028)rt_nil_check(F->f_1942)).next;
}
F->result_ = (((P1013)rt_nil_check(F->r_1943))->all);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_539)).kind) == (((rt_int)6LL)))) {
F->ai_1955 = NULL;
F->ai_1955 = f_rep_find_532(F->items_541, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ARRAY", 5); b_; }));
F->ei_1956 = NULL;
if ((F->ai_1955 != NULL)) {
F->ei_1956 = (*(P1020)rt_nil_check(F->ai_1955)).c;
}
{
F->es_1957 = rt_str_copy(f_rep_size_529(F->ei_1956, (*(P1026)rt_nil_check(F->t_539)).elem, (*(P1026)rt_nil_check(F->t_539)).elemcons));
F->iv_1958 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ri", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->iv_1958), rt_str(" = 0; ", 6)), F->iv_1958), rt_str(" < ", 3)), f_acnt_249(F->t_539, &(*F->lval_542))), rt_str("; ", 2)), F->iv_1958), rt_str("++) { ", 6)), f_rep_code_545((*(P1026)rt_nil_check(F->t_539)).elem, (*(P1026)rt_nil_check(F->t_539)).elemcons, F->ei_1956, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_542), rt_str(".p[", 3)), F->iv_1958), rt_str("]", 1)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->addr_543), rt_str(" + ", 3)), F->iv_1958), rt_str(" * ", 3)), F->es_1957); b_; }), F->pack_544)), rt_str(" }", 2));
goto ret_;
}
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_539)).kind) == (((rt_int)5LL)))) {
F->iv_1959 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ri", 2); b_; })));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->iv_1959), rt_str(" = 0; ", 6)), F->iv_1959), rt_str(" < ", 3)), (*F->lval_542)), rt_str(".len; ", 6)), F->iv_1959), rt_str("++) { ", 6)), f_rep_scalar_554(f_str_elem_218(F->t_539), NULL, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_542), rt_str(".p[", 3)), F->iv_1959), rt_str("]", 1)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->addr_543), rt_str(" + ", 3)), F->iv_1959), rt_str(" * 8", 4)); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("8", 1); b_; }), F->pack_544)), rt_str(" }", 2));
goto ret_;
}
F->result_ = f_rep_scalar_554(F->t_539, F->c_540, &(*F->lval_542), &(*F->addr_543), &F->size_1941, F->pack_544);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_union_part_547(P1026 t_546) {
  struct f_union_part_547fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_546 = t_546;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_546)).kind) == (((rt_int)17LL)))) {
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

static rstr f_rep_scalar_554(P1026 t_548, P1022 c_549, rstr *lval_550, rstr *addr_551, rstr *size_552, int pack_553) {
  struct f_rep_scalar_554fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_548 = t_548;
F->c_549 = c_549;
F->lval_550 = lval_550;
F->addr_551 = addr_551;
F->size_552 = size_552;
F->pack_553 = pack_553;
F->signed_1960 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->signed_1960, rt_str("0", 1));
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_548)).kind) == (((rt_int)1LL))) && (!(((F->c_549 != NULL) && rt_r_echk((*(P1022)rt_nil_check(F->c_549)).hasm)) && (rt_r_ichk((*(P1022)rt_nil_check(F->c_549)).mlo) >= ((rt_int)0LL)))))) {
rt_str_assign(&F->signed_1960, rt_str("1", 1));
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_548)).kind) == (((rt_int)3LL)))) {
if (F->pack_553) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_mem_putf(", 14), (*F->addr_551)), rt_str(", ", 2)), (*F->size_552)), rt_str(", ", 2)), (*F->lval_550)), rt_str(");", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_550), rt_str(" = rt_r_mem_getf(", 17)), (*F->addr_551)), rt_str(", ", 2)), (*F->size_552)), rt_str(");", 2));
goto ret_;
} else if (F->pack_553) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (!rt_r_undef_", 16), f_kind_name_228(f_base_of_223(F->t_548))), rt_str("(", 1)), (*F->lval_550)), rt_str(")) rt_r_mem_put(", 16)), (*F->addr_551)), rt_str(", ", 2)), (*F->size_552)), rt_str(", rt_r_fits((rt_int)(", 21)), (*F->lval_550)), rt_str("), ", 3)), (*F->size_552)), rt_str(", ", 2)), F->signed_1960), rt_str("));", 3));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->lval_550), rt_str(" = rt_r_mem_get(", 16)), (*F->addr_551)), rt_str(", ", 2)), (*F->size_552)), rt_str(", ", 2)), F->signed_1960), rt_str(");", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_max_range_557(P1026 t_555, P1022 c_556) {
  struct f_max_range_557fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_555 = t_555;
F->c_556 = c_556;
if ((F->c_556 == NULL)) {
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_555)).kind) == (((rt_int)3LL))) && ((*(P1022)rt_nil_check(F->c_556)).prec != NULL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_maxprec(", 13), (((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_556)).prec))->all)), rt_str(");", 2)); b_; }));
}
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_555)).kind) == (((rt_int)3LL))) && ((*(P1022)rt_nil_check(F->c_556)).lo != NULL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_maxrange_f(", 16), f_clo_193(F->c_556)), rt_str(", ", 2)), f_chi_195(F->c_556)), rt_str(");", 2)); b_; }));
} else if ((((rt_r_ichk((*(P1026)rt_nil_check(F->t_555)).kind) == (((rt_int)1LL))) && ((*(P1022)rt_nil_check(F->c_556)).lo != NULL)) && (!rt_r_echk((*(P1022)rt_nil_check(F->c_556)).hasm)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_maxrange_i(", 16), f_clo_193(F->c_556)), rt_str(", ", 2)), f_chi_195(F->c_556)), rt_str(");", 2)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_var_decl2_559(P1020 d_558) {
  struct f_var_decl2_559fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_558 = d_558;
F->c_1961 = NULL;
F->t_1962 = NULL;
F->t_1962 = f_resolve_subtype_268((*(P1020)rt_nil_check(F->d_558)).a, &F->c_1961);
F->y_1963 = NULL;
F->y_1963 = f_new_sym_181((((rt_int)1LL)), (*(P1020)rt_nil_check(F->d_558)).name);
F->access_1964 = rt_str_copy(f_storage_513(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_558)).name))->all), F->t_1962));
F->c_1961 = f_freeze_209(F->c_1961, F->t_1962);
f_max_range_557(F->t_1962, F->c_1961);
if ((((rt_r_ichk((*(P1026)rt_nil_check(F->t_1962)).kind) == (((rt_int)8LL))) && (F->c_1961 != NULL)) && ((*(P1022)rt_nil_check(F->c_1961)).args != NULL))) {
F->c_1961 = f_freeze_args_485(F->c_1961, F->t_1962, rt_r_ichk((*(P1020)rt_nil_check(F->d_558)).line));
}
g_mark_uninit_1096 = 1;
f_init_storage_341(&F->access_1964, F->t_1962, F->c_1961);
g_mark_uninit_1096 = 0;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->d_558)).ival) == ((rt_int)1LL))) {
F->it_1965 = NULL;
F->n_1966 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->d_558)).c, g_ty_int_1104, &F->it_1965));
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_1962)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->d_558)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a mailbox can be located at an interrupt", 45); b_; }));
}
if (f_same_221((*(P1026)rt_nil_check(F->t_1962)).elem, g_ty_ascii_1107)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1964), rt_str(", ", 2)), F->n_1966), rt_str(", 1);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_interrupt_bind(", 18), F->access_1964), rt_str(", ", 2)), F->n_1966), rt_str(", 0);", 5)); b_; }));
}
}
if (((*(P1020)rt_nil_check(F->d_558)).b != NULL)) {
F->vt_1967 = NULL;
F->v_1968 = rt_str_copy(f_gexpr_in_802((*(P1020)rt_nil_check(F->d_558)).b, F->t_1962, F->c_1961, &F->vt_1967));
f_check_type_232(F->vt_1967, F->t_1962, rt_r_ichk((*(P1020)rt_nil_check(F->d_558)).line));
f_ptr_subtype_check_489(F->t_1962, F->c_1961, (*(P1020)rt_nil_check(F->d_558)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(&F->access_1964, F->t_1962, &F->v_1968, F->c_1961); b_; }));
}
(*(P1030)rt_nil_check(F->y_1963)).t = F->t_1962;
(*(P1030)rt_nil_check(F->y_1963)).c = F->c_1961;
f_bind_516(F->y_1963, &F->access_1964);
f_define_168(F->y_1963, rt_r_ichk((*(P1020)rt_nil_check(F->d_558)).line));
if (f_needs_fin_346(F->t_1962)) {
f_open_fin_561(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_349(&F->access_1964, F->t_1962); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_open_fin_561(rstr *fc_560) {
  struct f_open_fin_561fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->fc_560 = fc_560;
F->f_1969 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ff", 2); b_; })));
F->l_1970 = NULL;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_1969), rt_str("; if (RT_TRY(", 13)), F->f_1969), rt_str(")) {", 4)); b_; }));
f_push_cleanup_599(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1969), rt_str("); ", 3)), (*F->fc_560)); b_; }));
{ R1025 *cell1971 = rt_alloc(sizeof(R1025));
(*cell1971).s = NULL;
(*cell1971).next = NULL;
F->l_1970 = cell1971;
}
(*(P1024)rt_nil_check(F->l_1970)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_1969), rt_str("); ", 3)), (*F->fc_560)), rt_str(" } else { RT_POP(", 17)), F->f_1969), rt_str("); ", 3)), (*F->fc_560)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
(*(P1024)rt_nil_check(F->l_1970)).next = g_fins_1086;
g_fins_1086 = F->l_1970;
ret_:
  RT_FPOP();
  return;
}

static void f_close_fins_563(P1024 saved_562) {
  struct f_close_fins_563fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->saved_562 = saved_562;
while (((g_fins_1086 != F->saved_562) && (g_fins_1086 != NULL))) {
f_emit_29(&(((P1013)rt_nil_check((*(P1024)rt_nil_check(g_fins_1086)).s))->all));
f_pop_cleanup_600();
g_fins_1086 = (*(P1024)rt_nil_check(g_fins_1086)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_const_decl_565(P1020 d_564) {
  struct f_const_decl_565fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_564 = d_564;
F->c_1972 = NULL;
F->c_1972 = f_new_cons_184();
F->t_1973 = NULL;
F->vt_1974 = NULL;
F->y_1975 = NULL;
F->y_1975 = f_new_sym_181((((rt_int)2LL)), (*(P1020)rt_nil_check(F->d_564)).name);
F->ok_1976 = RT_R_EUNDEF;
if (((*(P1020)rt_nil_check(F->d_564)).a != NULL)) {
F->t_1973 = f_resolve_subtype_268((*(P1020)rt_nil_check(F->d_564)).a, &F->c_1972);
}
{
F->v_1977 = rt_str_copy(f_gexpr_in_802((*(P1020)rt_nil_check(F->d_564)).b, F->t_1973, F->c_1972, &F->vt_1974));
if ((F->t_1973 != NULL)) {
f_check_type_232(F->vt_1974, F->t_1973, rt_r_ichk((*(P1020)rt_nil_check(F->d_564)).line));
} else {
F->t_1973 = F->vt_1974;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_1973)).kind) == (((rt_int)1LL)))) {
(*(P1030)rt_nil_check(F->y_1975)).mvalue = f_manifest_366((*(P1020)rt_nil_check(F->d_564)).b, &F->ok_1976);
(*(P1030)rt_nil_check(F->y_1975)).hasmv = rt_r_echk(F->ok_1976);
}
{
F->access_1978 = rt_str_copy(f_storage_513(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_564)).name))->all), F->t_1973));
if (((*(P1026)rt_nil_check(F->t_1973)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1026)rt_nil_check(F->t_1973)).initp, &F->access_1978); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_1978, rt_str(" = ", 3)), f_checked_213(F->t_1973, F->c_1972, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_414(F->t_1973, &F->v_1977); b_; }))), rt_str(";", 1)); b_; }));
f_bind_516(F->y_1975, &F->access_1978);
if (f_needs_fin_346(F->t_1973)) {
f_open_fin_561(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_fin_code_349(&F->access_1978, F->t_1973); b_; }));
}
}
}
(*(P1030)rt_nil_check(F->y_1975)).t = F->t_1973;
(*(P1030)rt_nil_check(F->y_1975)).c = F->c_1972;
(*(P1030)rt_nil_check(F->y_1975)).ro_flag = 1;
f_define_168(F->y_1975, rt_r_ichk((*(P1020)rt_nil_check(F->d_564)).line));
ret_:
  RT_FPOP();
  return;
}

static void f_subprogram_567(P1020 d_566) {
  struct f_subprogram_567fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_566 = d_566;
f_gen_subprogram_570(F->d_566, f_lookup_decl_165(F->d_566));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_subprogram_570(P1020 d_568, P1030 y_569) {
  struct f_gen_subprogram_570fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_568 = d_568;
F->y_569 = y_569;
F->saved_code_1979 = NULL;
F->saved_code_1979 = g_code_1074;
F->saved_fields_1980 = NULL;
F->saved_fields_1980 = g_fields_buf_1075;
F->saved_in_1981 = RT_R_EUNDEF;
F->saved_in_1981 = rt_r_echk(g_in_func_1076);
F->saved_sym_1982 = NULL;
F->saved_sym_1982 = g_func_sym_1088;
F->saved_exits_1983 = NULL;
F->saved_exits_1983 = g_exits_1097;
F->saved_gotos_1984 = NULL;
F->saved_gotos_1984 = g_gotos_1098;
F->saved_frames_1985 = RT_R_IUNDEF;
F->saved_frames_1985 = rt_r_ichk(g_frames_1099);
F->args_1986 = NULL;
F->args_1986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pm_1987 = NULL;
F->pm_1987 = (*(P1030)rt_nil_check(F->y_569)).params;
F->saved_handlers_1988 = NULL;
F->saved_handlers_1988 = g_handlers_1100;
F->saved_cleanups_1989 = NULL;
F->saved_cleanups_1989 = g_cleanups_1101;
F->ctx_1990 = NULL;
F->head_1991 = NULL;
F->frame_1992 = NULL;
F->frame_1992 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_569)).cname))->all), rt_str("fr", 2)); b_; }));
F->parent_1993 = NULL;
F->copy_back_1994 = NULL;
F->copy_back_1994 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->pfin_1995 = NULL;
F->pfin_1995 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->saved_fins_1996 = NULL;
F->saved_fins_1996 = g_fins_1086;
F->saved_rc_1997 = NULL;
F->saved_rc_1997 = g_func_rc_1089;
F->saved_ret_1998 = NULL;
F->saved_ret_1998 = g_cap_ret_1090;
F->saved_rflag_1999 = NULL;
F->saved_rflag_1999 = g_cap_rflag_1091;
F->pn_2000 = NULL;
F->pn_2000 = (*(P1020)rt_nil_check(F->d_568)).a;
F->nonrec_end_2001 = NULL;
F->has_pfin_2002 = RT_R_EUNDEF;
if (rt_r_echk(g_in_func_1076)) {
F->parent_1993 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1030)rt_nil_check(g_func_sym_1088)).cname))->all), rt_str("fr", 2)); b_; }));
}
g_fins_1086 = NULL;
g_func_rc_1089 = NULL;
g_cap_ret_1090 = NULL;
g_cap_rflag_1091 = NULL;
g_code_1074 = f_new_buffer_24();
g_fields_buf_1075 = f_new_buffer_24();
g_in_func_1076 = 1;
g_func_sym_1088 = F->y_569;
g_exits_1097 = NULL;
g_gotos_1098 = NULL;
g_frames_1099 = ((rt_int)0LL);
g_handlers_1100 = NULL;
g_cleanups_1101 = NULL;
g_cur_level_1077 = rt_add(rt_r_ichk(g_cur_level_1077), ((rt_int)1LL));
f_open_scope_177();
{ R1038 *cell2003 = rt_alloc(sizeof(R1038));
(*cell2003).imps = NULL;
(*cell2003).next = NULL;
F->ctx_1990 = cell2003;
}
(*(P1037)rt_nil_check(F->ctx_1990)).depth = rt_r_ichk(g_depth_1063);
(*(P1037)rt_nil_check(F->ctx_1990)).imps = (*(P1020)rt_nil_check(F->d_568)).d;
(*(P1037)rt_nil_check(F->ctx_1990)).all_imp = (rt_r_ichk((*(P1020)rt_nil_check(F->d_568)).flag) >= ((rt_int)2LL));
(*(P1037)rt_nil_check(F->ctx_1990)).next = g_fctx_1078;
g_fctx_1078 = F->ctx_1990;
if ((F->parent_1993 != NULL)) {
f_put_27(g_fields_buf_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" struct ", 8), (((P1013)rt_nil_check(F->parent_1993))->all)), rt_str(" *up;", 5)); b_; }));
if ((rt_r_ichk((*(P1030)rt_nil_check(F->y_569)).kind) != (((rt_int)9LL)))) {
F->args_1986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1013)rt_nil_check(F->parent_1993))->all)), rt_str(" *up_", 5)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->up = up_;", 12); b_; }));
}
}
while ((F->pm_1987 != NULL)) {
F->ct_2004 = rt_str_copy(f_ctype_234((*(P1032)rt_nil_check(F->pm_1987)).t));
F->f_2005 = rt_str_copy((((P1013)rt_nil_check((*(P1032)rt_nil_check(F->pm_1987)).cfield))->all));
F->p_2006 = NULL;
F->pc_2007 = NULL;
F->pc_2007 = (*(P1032)rt_nil_check(F->pm_1987)).c;
F->ac_2008 = NULL;
if ((((rt_int)(((((P1013)rt_nil_check(F->args_1986))->all)).len)) > ((rt_int)0LL))) {
F->args_1986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->args_1986))->all), rt_str(", ", 2)); b_; }));
}
if (f_scalar_kind_186((*(P1032)rt_nil_check(F->pm_1987)).t)) {
F->fc_2009 = NULL;
F->ft_2010 = NULL;
F->ft_2010 = f_resolve_subtype_268((*(P1020)rt_nil_check(F->pn_2000)).a, &F->fc_2009);
F->pc_2007 = f_freeze_209(F->fc_2009, (*(P1032)rt_nil_check(F->pm_1987)).t);
}
if ((rt_r_ichk((*(P1032)rt_nil_check(F->pm_1987)).mode) == (((rt_int)1LL)))) {
F->p_2006 = f_new_sym_181((((rt_int)2LL)), (*(P1032)rt_nil_check(F->pm_1987)).name);
f_put_27(g_fields_buf_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_2004), rt_str(" ", 1)), F->f_2005), rt_str(";", 1)); b_; }));
F->args_1986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->args_1986))->all), F->ct_2004), rt_str(" ", 1)), F->f_2005); b_; }));
(*(P1030)rt_nil_check(F->p_2006)).access = f_mk_3(&F->f_2005);
if ((rt_r_ichk((*(P1030)rt_nil_check(F->y_569)).kind) != (((rt_int)9LL)))) {
if (((*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->pm_1987)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->pm_1987)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_2005); b_; })); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2005), rt_str(" = ", 3)), f_checked_213((*(P1032)rt_nil_check(F->pm_1987)).t, F->pc_2007, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_414((*(P1032)rt_nil_check(F->pm_1987)).t, &F->f_2005); b_; }))), rt_str(";", 1)); b_; }));
if ((((rt_r_ichk((*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->pm_1987)).t)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->pm_1987)).t)).assignp != NULL)) && ((*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->pm_1987)).t)).assignp != F->y_569))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_user_call2_400((*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->pm_1987)).t)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_2005); b_; }), 1, &F->f_2005, 0), rt_str(";", 1)); b_; }));
}
if (f_needs_fin_346((*(P1032)rt_nil_check(F->pm_1987)).t)) {
F->pfin_1995 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->pfin_1995))->all), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("F->", 3), F->f_2005); b_; }), (*(P1032)rt_nil_check(F->pm_1987)).t)), rt_str(" ", 1)); b_; }));
}
}
} else {
F->p_2006 = f_new_sym_181((((rt_int)1LL)), (*(P1032)rt_nil_check(F->pm_1987)).name);
f_put_27(g_fields_buf_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_2004), rt_str(" *", 2)), F->f_2005), rt_str(";", 1)); b_; }));
F->args_1986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->args_1986))->all), F->ct_2004), rt_str(" *", 2)), F->f_2005); b_; }));
(*(P1030)rt_nil_check(F->p_2006)).access = f_mk_3(&F->f_2005);
(*(P1030)rt_nil_check(F->p_2006)).byref = 1;
if ((rt_r_ichk((*(P1030)rt_nil_check(F->y_569)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2005), rt_str(" = ", 3)), F->f_2005), rt_str(";", 1)); b_; }));
}
if (f_scalar_kind_186((*(P1032)rt_nil_check(F->pm_1987)).t)) {
F->bt_2011 = rt_str_copy(f_bound_ctype_188((*(P1032)rt_nil_check(F->pm_1987)).t));
f_put_27(g_fields_buf_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->bt_2011), rt_str(" ", 1)), F->f_2005), rt_str("lo, ", 4)), F->f_2005), rt_str("hi;", 3)); b_; }));
F->args_1986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->args_1986))->all), rt_str(", ", 2)), F->bt_2011), rt_str(" ", 1)), F->f_2005), rt_str("lo, ", 4)), F->bt_2011), rt_str(" ", 1)), F->f_2005), rt_str("hi", 2)); b_; }));
if ((rt_r_ichk((*(P1030)rt_nil_check(F->y_569)).kind) != (((rt_int)9LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2005), rt_str("lo = ", 5)), F->f_2005), rt_str("lo; F->", 7)), F->f_2005), rt_str("hi = ", 5)), F->f_2005), rt_str("hi;", 3)); b_; }));
}
F->ac_2008 = f_new_cons_184();
(*(P1022)rt_nil_check(F->ac_2008)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_2005, rt_str("lo", 2)); b_; }));
(*(P1022)rt_nil_check(F->ac_2008)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_2005, rt_str("hi", 2)); b_; }));
(*(P1022)rt_nil_check(F->ac_2008)).dyn = 1;
(*(P1022)rt_nil_check(F->ac_2008)).lvl = rt_r_ichk(g_cur_level_1077);
if (((F->pc_2007 == NULL) || ((*(P1022)rt_nil_check(F->pc_2007)).lo == NULL))) {
F->pc_2007 = F->ac_2008;
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->pm_1987)).mode) != (((rt_int)3LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (F->", 7), F->f_2005), rt_str("lo <= F->", 9)), F->f_2005), rt_str("hi && (F->", 10)), F->f_2005), rt_str("lo != ", 6)), f_sub_lo_198((*(P1032)rt_nil_check(F->pm_1987)).t, F->pc_2007)), rt_str(" || F->", 7)), F->f_2005), rt_str("hi != ", 6)), f_sub_hi_201((*(P1032)rt_nil_check(F->pm_1987)).t, F->pc_2007)), rt_str(")) rt_raise_msg(RT_X_SUBTYPE, ", 30)), f_q_18()), rt_str("subtype of the actual", 21)), f_q_18()), rt_str(");", 2)); b_; }));
}
}
if (((rt_r_ichk((*(P1032)rt_nil_check(F->pm_1987)).mode) == (((rt_int)3LL))) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_569)).kind) != (((rt_int)9LL))))) {
f_put_27(g_fields_buf_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" ", 1), F->ct_2004), rt_str(" ", 1)), F->f_2005), rt_str("v;", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2005), rt_str("v = ", 4)), f_copy_code_414((*(P1032)rt_nil_check(F->pm_1987)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("*F->", 4), F->f_2005); b_; }))), rt_str(";", 1)); b_; }));
if (((*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->pm_1987)).t)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->pm_1987)).t)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2005), rt_str("v", 1)); b_; })); b_; }));
}
if ((F->ac_2008 == NULL)) {
F->ac_2008 = (*(P1032)rt_nil_check(F->pm_1987)).c;
}
if ((!rt_str_eq(f_uninit_value_360(f_base_of_223((*(P1032)rt_nil_check(F->pm_1987)).t)), rt_str("", 0)))) {
F->copy_back_1994 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->copy_back_1994))->all), rt_str("  if (!rt_r_undef_", 18)), f_kind_name_228(f_base_of_223((*(P1032)rt_nil_check(F->pm_1987)).t))), rt_str("(F->", 4)), F->f_2005), rt_str("v)) ", 4)), f_assign_code_411(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_2005), rt_str(")", 1)); b_; }), (*(P1032)rt_nil_check(F->pm_1987)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2005), rt_str("v", 1)); b_; }), F->ac_2008)); b_; }));
} else {
F->copy_back_1994 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->copy_back_1994))->all), rt_str("  ", 2)), f_assign_code_411(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*F->", 5), F->f_2005), rt_str(")", 1)); b_; }), (*(P1032)rt_nil_check(F->pm_1987)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2005), rt_str("v", 1)); b_; }), F->ac_2008)); b_; }));
}
if (f_needs_fin_346((*(P1032)rt_nil_check(F->pm_1987)).t)) {
F->pfin_1995 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->pfin_1995))->all), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->", 3), F->f_2005), rt_str("v", 1)); b_; }), (*(P1032)rt_nil_check(F->pm_1987)).t)), rt_str(" ", 1)); b_; }));
}
(*(P1030)rt_nil_check(F->p_2006)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->f_2005, rt_str("v", 1)); b_; }));
(*(P1030)rt_nil_check(F->p_2006)).byref = 0;
}
}
(*(P1030)rt_nil_check(F->p_2006)).t = (*(P1032)rt_nil_check(F->pm_1987)).t;
(*(P1030)rt_nil_check(F->p_2006)).c = F->pc_2007;
(*(P1030)rt_nil_check(F->p_2006)).level = rt_r_ichk(g_cur_level_1077);
(*(P1030)rt_nil_check(F->p_2006)).ro_flag = ((rt_r_ichk((*(P1032)rt_nil_check(F->pm_1987)).mode) == (((rt_int)1LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->pm_1987)).mode) == (((rt_int)4LL))));
f_define_168(F->p_2006, rt_r_ichk((*(P1020)rt_nil_check(F->d_568)).line));
F->pm_1987 = (*(P1032)rt_nil_check(F->pm_1987)).next;
F->pn_2000 = (*(P1020)rt_nil_check(F->pn_2000)).next;
}
if ((rt_r_ichk((*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_569)).result)).kind) != (((rt_int)9LL)))) {
if (((*(P1020)rt_nil_check(F->d_568)).b != NULL)) {
F->rc_2012 = NULL;
F->rt_2013 = NULL;
F->rt_2013 = f_resolve_subtype_268((*(P1020)rt_nil_check(F->d_568)).b, &F->rc_2012);
g_func_rc_1089 = f_freeze_209(F->rc_2012, (*(P1030)rt_nil_check(F->y_569)).result);
}
f_put_27(g_fields_buf_1075, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(" ", 1), f_ctype_234((*(P1030)rt_nil_check(F->y_569)).result)), rt_str(" result_;", 9)); b_; }));
if (((*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_569)).result)).initp != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_init_call_344((*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_569)).result)).initp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F->result_", 10); b_; })); b_; }));
}
}
F->has_pfin_2002 = (((rt_int)(((((P1013)rt_nil_check(F->pfin_1995))->all)).len)) > ((rt_int)0LL));
if (rt_r_echk(F->has_pfin_2002)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame pf_; if (RT_TRY(pf_)) {", 32); b_; }));
f_push_cleanup_599(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(pf_);", 12); b_; }));
}
if ((f_has_pragmat_502((*(P1020)rt_nil_check(F->d_568)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })) || f_has_pragmat_502((*(P1020)rt_nil_check(F->d_568)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))) {
F->g_2014 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("g_nonrec_", 9); b_; })));
F->leave_2015 = NULL;
F->leave_2015 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_leave(&", 19), F->g_2014), rt_str(");", 2)); b_; }));
f_put_27(g_out_globals_1070, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static rt_r_nonrec ", 19), F->g_2014), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_nonrec_enter(&", 19), F->g_2014), rt_str(", ", 2)), f_bool_text_382(f_has_pragmat_502((*(P1020)rt_nil_check(F->d_568)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONRECURSIVE", 12); b_; })))), rt_str(", ", 2)), f_bool_text_382(f_has_pragmat_502((*(P1020)rt_nil_check(F->d_568)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NONREENTRANT", 12); b_; })))), rt_str(", ", 2)), f_q_18()), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->d_568)).name))->all)), f_q_18()), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_frame nr_; if (RT_TRY(nr_)) {", 32); b_; }));
f_push_cleanup_599(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RT_POP(nr_);", 12); b_; }));
F->copy_back_1994 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->copy_back_1994))->all), rt_str("  ", 2)), (((P1013)rt_nil_check(F->leave_2015))->all)); b_; }));
F->nonrec_end_2001 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(nr_); } else { RT_POP(nr_); ", 35), (((P1013)rt_nil_check(F->leave_2015))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
}
if (f_has_pragmat_502((*(P1020)rt_nil_check(F->d_568)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FOREIGN", 7); b_; }))) {
f_foreign_body_495(F->d_568, F->y_569);
}
f_declare_labels_580((*(P1020)rt_nil_check(F->d_568)).c);
f_declare_body_430((*(P1020)rt_nil_check(F->d_568)).c);
{
F->xu_2016 = rt_str_copy(f_open_unhandled_593((*(P1020)rt_nil_check(F->d_568)).c));
f_body_elements_589((*(P1020)rt_nil_check(F->d_568)).c);
f_close_fins_563(NULL);
f_close_unhandled_595(&F->xu_2016);
}
if ((F->nonrec_end_2001 != NULL)) {
f_emit_29(&(((P1013)rt_nil_check(F->nonrec_end_2001))->all));
f_pop_cleanup_600();
}
if (rt_r_echk(F->has_pfin_2002)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(pf_); } else { RT_POP(pf_); ", 35), (((P1013)rt_nil_check(F->pfin_1995))->all)), rt_str(" rt_raise(rt_xcur); }", 21)); b_; }));
f_pop_cleanup_600();
F->copy_back_1994 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->copy_back_1994))->all), rt_str("  ", 2)), (((P1013)rt_nil_check(F->pfin_1995))->all)); b_; }));
}
f_close_scope_178();
g_fctx_1078 = (*(P1037)rt_nil_check(g_fctx_1078)).next;
g_cur_level_1077 = rt_sub(rt_r_ichk(g_cur_level_1077), ((rt_int)1LL));
if (((((rt_int)(((((P1013)rt_nil_check(F->args_1986))->all)).len)) == ((rt_int)0LL)) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_569)).kind) == (((rt_int)9LL))))) {
F->args_1986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void", 4); b_; }));
}
if ((rt_r_ichk((*(P1030)rt_nil_check(F->y_569)).kind) == (((rt_int)9LL)))) {
F->args_1986 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("void *fv_", 9); b_; }));
}
F->head_1991 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), f_ctype_234((*(P1030)rt_nil_check(F->y_569)).result)), rt_str(" ", 1)), (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_569)).cname))->all)), rt_str("(", 1)), (((P1013)rt_nil_check(F->args_1986))->all)), rt_str(")", 1)); b_; }));
f_put_27(g_out_protos_1069, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->head_1991))->all), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->head_1991))->all), rt_str(" {", 2)); b_; }));
f_put_27(g_out_frames_1083, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("struct ", 7), (((P1013)rt_nil_check(F->frame_1992))->all)), rt_str(" { int dummy;", 13)); b_; }));
f_splice_34(g_out_frames_1083, g_fields_buf_1075);
f_put_27(g_out_frames_1083, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("};", 2); b_; }));
if ((rt_r_ichk((*(P1030)rt_nil_check(F->y_569)).kind) == (((rt_int)9LL)))) {
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1013)rt_nil_check(F->frame_1992))->all)), rt_str(" *F = fv_;", 10)); b_; }));
} else {
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1013)rt_nil_check(F->frame_1992))->all)), rt_str(" *F = rt_alloc(sizeof *F);", 26)); b_; }));
}
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPUSH(F);", 14); b_; }));
f_splice_34(g_out_funcs_1071, g_code_1074);
if ((rt_r_ichk((*(P1026)rt_nil_check((*(P1030)rt_nil_check(F->y_569)).result)).kind) != (((rt_int)9LL)))) {
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("  rt_raise_msg(RT_X_ASSERT, ", 28), f_q_18()), rt_str("function ended without RETURN", 29)), f_q_18()), rt_str(");", 2)); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P1013)rt_nil_check(F->copy_back_1994))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_1071, &(((P1013)rt_nil_check(F->copy_back_1994))->all));
}
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return F->result_;", 20); b_; }));
} else {
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ret_:", 5); b_; }));
if ((((rt_int)(((((P1013)rt_nil_check(F->copy_back_1994))->all)).len)) > ((rt_int)0LL))) {
f_put_27(g_out_funcs_1071, &(((P1013)rt_nil_check(F->copy_back_1994))->all));
}
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  RT_FPOP();", 12); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return;", 9); b_; }));
}
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
g_code_1074 = F->saved_code_1979;
g_fields_buf_1075 = F->saved_fields_1980;
g_in_func_1076 = rt_r_echk(F->saved_in_1981);
g_func_sym_1088 = F->saved_sym_1982;
g_exits_1097 = F->saved_exits_1983;
g_gotos_1098 = F->saved_gotos_1984;
g_frames_1099 = rt_r_ichk(F->saved_frames_1985);
g_handlers_1100 = F->saved_handlers_1988;
g_cleanups_1101 = F->saved_cleanups_1989;
g_fins_1086 = F->saved_fins_1996;
g_func_rc_1089 = F->saved_rc_1997;
g_cap_ret_1090 = F->saved_ret_1998;
g_cap_rflag_1091 = F->saved_rflag_1999;
ret_:
  RT_FPOP();
  return;
}

static rstr f_waits_of_572(P1020 d_571) {
  struct f_waits_of_572fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->d_571 = d_571;
F->w_2017 = NULL;
F->w_2017 = g_cap_waits_1080;
while ((F->w_2017 != NULL)) {
if (((*(P1049)rt_nil_check(F->w_2017)).d == F->d_571)) {
F->result_ = (((P1013)rt_nil_check((*(P1049)rt_nil_check(F->w_2017)).w))->all);
goto ret_;
}
F->w_2017 = (*(P1049)rt_nil_check(F->w_2017)).next;
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_task_waits_574(P1020 elems_573) {
  struct f_task_waits_574fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_573 = elems_573;
F->e_2018 = NULL;
F->e_2018 = F->elems_573;
F->r_2019 = NULL;
F->r_2019 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->e_2018 != NULL)) {
if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_2018)).kind) == (((rt_int)50LL)))) {
F->r_2019 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_2019))->all), rt_str(" rt_await_decl(&", 16)), (((P1013)rt_nil_check((*(P1030)rt_nil_check(f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_2018)).name))->all)))).cname))->all)), rt_str("decl);", 6)); b_; }));
} else if (((rt_r_ichk((*(P1020)rt_nil_check(F->e_2018)).kind) == (((rt_int)47LL))) || ((rt_r_ichk((*(P1020)rt_nil_check(F->e_2018)).kind) == (((rt_int)48LL))) && ((rt_r_ichk((*(P1020)rt_nil_check(F->e_2018)).flag) == ((rt_int)1LL)) || (rt_r_ichk((*(P1020)rt_nil_check(F->e_2018)).flag) == ((rt_int)3LL)))))) {
F->r_2019 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_2019))->all), f_waits_of_572(F->e_2018)); b_; }));
}
F->e_2018 = (*(P1020)rt_nil_check(F->e_2018)).next;
}
F->result_ = (((P1013)rt_nil_check(F->r_2019))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_await_tasks_576(P1020 elems_575) {
  struct f_await_tasks_576fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_575 = elems_575;
F->w_2020 = rt_str_copy(f_task_waits_574(F->elems_575));
if ((((rt_int)((F->w_2020).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2020);
}
ret_:
  RT_FPOP();
  return;
}

static void f_capsule_elements_578(P1020 elems_577) {
  struct f_capsule_elements_578fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_577 = elems_577;
F->e_2021 = NULL;
F->e_2021 = F->elems_577;
while ((F->e_2021 != NULL)) {
if (((rt_r_ichk((*(P1020)rt_nil_check(F->e_2021)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P1020)rt_nil_check(F->e_2021)).kind) <= (((rt_int)36LL))))) {
f_start_labels_581();
}
f_element_508(F->e_2021);
F->e_2021 = (*(P1020)rt_nil_check(F->e_2021)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_declare_labels_580(P1020 elems_579) {
  struct f_declare_labels_580fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_579 = elems_579;
F->e_2022 = NULL;
F->e_2022 = F->elems_579;
while ((F->e_2022 != NULL)) {
F->l_2023 = NULL;
F->l_2023 = (*(P1020)rt_nil_check(F->e_2022)).labels;
while ((F->l_2023 != NULL)) {
F->x_2024 = NULL;
F->x_2024 = g_gotos_1098;
while (((F->x_2024 != NULL) && (rt_r_ichk((*(P1045)rt_nil_check(F->x_2024)).depth) == rt_neg(((rt_int)1LL))))) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1045)rt_nil_check(F->x_2024)).match))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->l_2023)).name))->all))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->l_2023)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto label ", 11), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->l_2023)).name))->all)), rt_str(" is already defined in this body", 32)); b_; }));
}
F->x_2024 = (*(P1045)rt_nil_check(F->x_2024)).next;
}
{ R1046 *cell2025 = rt_alloc(sizeof(R1046));
(*cell2025).match = NULL;
(*cell2025).label = NULL;
(*cell2025).next = NULL;
F->x_2024 = cell2025;
}
(*(P1045)rt_nil_check(F->x_2024)).match = (*(P1020)rt_nil_check(F->l_2023)).name;
(*(P1045)rt_nil_check(F->x_2024)).label = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_go_", 5); b_; })); b_; }));
(*(P1045)rt_nil_check(F->x_2024)).depth = rt_neg(((rt_int)1LL));
(*(P1045)rt_nil_check(F->x_2024)).next = g_gotos_1098;
g_gotos_1098 = F->x_2024;
F->l_2023 = (*(P1020)rt_nil_check(F->l_2023)).next;
}
F->e_2022 = (*(P1020)rt_nil_check(F->e_2022)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_start_labels_581(void) {
  struct f_start_labels_581fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_2026 = NULL;
F->x_2026 = g_gotos_1098;
while (((F->x_2026 != NULL) && (rt_r_ichk((*(P1045)rt_nil_check(F->x_2026)).depth) == rt_neg(((rt_int)1LL))))) {
(*(P1045)rt_nil_check(F->x_2026)).depth = rt_r_ichk(g_frames_1099);
F->x_2026 = (*(P1045)rt_nil_check(F->x_2026)).next;
}
ret_:
  RT_FPOP();
  return;
}

static P1045 f_goto_label_583(rstr *name_582) {
  struct f_goto_label_583fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_582 = name_582;
F->x_2027 = NULL;
F->x_2027 = g_gotos_1098;
while ((F->x_2027 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1045)rt_nil_check(F->x_2027)).match))->all), (*F->name_582))) {
F->result_ = F->x_2027;
goto ret_;
}
F->x_2027 = (*(P1045)rt_nil_check(F->x_2027)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_return_585(P1020 e_584) {
  struct f_has_return_585fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_584 = e_584;
F->x_2028 = NULL;
F->x_2028 = F->e_584;
while ((F->x_2028 != NULL)) {
if ((rt_r_ichk((*(P1020)rt_nil_check(F->x_2028)).kind) == (((rt_int)28LL)))) {
F->result_ = 1;
goto ret_;
}
if ((((((rt_r_ichk((*(P1020)rt_nil_check(F->x_2028)).kind) != (((rt_int)45LL))) && (rt_r_ichk((*(P1020)rt_nil_check(F->x_2028)).kind) != (((rt_int)46LL)))) && (rt_r_ichk((*(P1020)rt_nil_check(F->x_2028)).kind) != (((rt_int)50LL)))) && (rt_r_ichk((*(P1020)rt_nil_check(F->x_2028)).kind) != (((rt_int)47LL)))) && (rt_r_ichk((*(P1020)rt_nil_check(F->x_2028)).kind) != (((rt_int)51LL))))) {
if ((((((*(P1020)rt_nil_check(F->x_2028)).a != NULL) && f_has_return_585((*(P1020)rt_nil_check(F->x_2028)).a)) || (((*(P1020)rt_nil_check(F->x_2028)).b != NULL) && f_has_return_585((*(P1020)rt_nil_check(F->x_2028)).b))) || (((*(P1020)rt_nil_check(F->x_2028)).c != NULL) && f_has_return_585((*(P1020)rt_nil_check(F->x_2028)).c)))) {
F->result_ = 1;
goto ret_;
}
}
F->x_2028 = (*(P1020)rt_nil_check(F->x_2028)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_capsule_body_587(P1020 elems_586) {
  struct f_capsule_body_587fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_586 = elems_586;
F->saved_ret_2029 = NULL;
F->saved_ret_2029 = g_cap_ret_1090;
F->saved_flag_2030 = NULL;
F->saved_flag_2030 = g_cap_rflag_1091;
F->saved_frames_2031 = RT_R_IUNDEF;
F->saved_frames_2031 = rt_r_ichk(g_ret_frames_1092);
F->e_2032 = NULL;
F->e_2032 = F->elems_586;
if ((!f_has_return_585(F->elems_586))) {
g_cap_ret_1090 = NULL;
g_cap_rflag_1091 = NULL;
f_capsule_elements_578(F->elems_586);
} else {
g_cap_rflag_1091 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_raw_storage_204(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("capret", 6); b_; }), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("int", 3); b_; })); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(g_cap_rflag_1091))->all), rt_str(" = 0;", 5)); b_; }));
while ((F->e_2032 != NULL)) {
F->stmt_2033 = RT_R_EUNDEF;
F->stmt_2033 = ((rt_r_ichk((*(P1020)rt_nil_check(F->e_2032)).kind) >= (((rt_int)20LL))) && (rt_r_ichk((*(P1020)rt_nil_check(F->e_2032)).kind) <= (((rt_int)36LL))));
g_cap_ret_1090 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_capret_", 9); b_; })); b_; }));
g_ret_frames_1092 = rt_r_ichk(g_frames_1099);
if (rt_r_echk(F->stmt_2033)) {
f_start_labels_581();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (!", 5), (((P1013)rt_nil_check(g_cap_rflag_1091))->all)), rt_str(") {", 3)); b_; }));
}
f_element_508(F->e_2032);
if (rt_r_echk(F->stmt_2033)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(g_cap_ret_1090))->all), rt_str(": ;", 3)); b_; }));
F->e_2032 = (*(P1020)rt_nil_check(F->e_2032)).next;
}
}
g_cap_ret_1090 = F->saved_ret_2029;
g_cap_rflag_1091 = F->saved_flag_2030;
g_ret_frames_1092 = rt_r_ichk(F->saved_frames_2031);
ret_:
  RT_FPOP();
  return;
}

static void f_body_elements_589(P1020 elems_588) {
  struct f_body_elements_589fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_588 = elems_588;
f_capsule_elements_578(F->elems_588);
f_await_tasks_576(F->elems_588);
ret_:
  RT_FPOP();
  return;
}

static void f_gen_body_591(P1020 elems_590) {
  struct f_gen_body_591fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_590 = elems_590;
F->saved_2034 = NULL;
F->saved_2034 = g_fins_1086;
F->saved_gotos_2035 = NULL;
F->saved_gotos_2035 = g_gotos_1098;
f_open_scope_177();
f_declare_labels_580(F->elems_590);
f_declare_body_430(F->elems_590);
{
F->xu_2036 = rt_str_copy(f_open_unhandled_593(F->elems_590));
f_body_elements_589(F->elems_590);
f_close_fins_563(F->saved_2034);
f_close_unhandled_595(&F->xu_2036);
}
f_close_scope_178();
g_gotos_1098 = F->saved_gotos_2035;
ret_:
  RT_FPOP();
  return;
}

static rstr f_open_unhandled_593(P1020 elems_592) {
  struct f_open_unhandled_593fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_592 = elems_592;
F->e_2037 = NULL;
F->e_2037 = F->elems_592;
F->conds_2038 = NULL;
F->conds_2038 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->e_2037 != NULL)) {
if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_2037)).kind) == (((rt_int)49LL)))) {
F->conds_2038 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->conds_2038))->all), rt_str(" || rt_xcur == ", 15)), (((P1013)rt_nil_check((*(P1030)rt_nil_check(f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_2037)).name))->all)))).cname))->all)); b_; }));
}
F->e_2037 = (*(P1020)rt_nil_check(F->e_2037)).next;
}
if ((((rt_int)(((((P1013)rt_nil_check(F->conds_2038))->all)).len)) == ((rt_int)1LL))) {
F->result_ = rt_str("", 0);
goto ret_;
}
{
F->f_2039 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xu", 2); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2039), rt_str("; if (RT_TRY(", 13)), F->f_2039), rt_str(")) {", 4)); b_; }));
f_push_cleanup_599(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2039), rt_str(");", 2)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(F->f_2039, rt_str(":", 1)), (((P1013)rt_nil_check(F->conds_2038))->all));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_close_unhandled_595(rstr *xu_594) {
  struct f_close_unhandled_595fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->xu_594 = xu_594;
F->i_2040 = RT_R_IUNDEF;
F->i_2040 = ((rt_int)1LL);
if (rt_str_eq((*F->xu_594), rt_str("", 0))) {
goto ret_;
}
while ((rt_r_echk(rt_str_get((*F->xu_594), rt_r_ichk(F->i_2040))) != 58)) {
F->i_2040 = rt_add(rt_r_ichk(F->i_2040), ((rt_int)1LL));
}
{
F->f_2041 = rt_str_copy(rt_str_slice((*F->xu_594), ((rt_int)1LL), rt_sub(rt_r_ichk(F->i_2040), ((rt_int)1LL))));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2041), rt_str("); } else { RT_POP(", 19)), F->f_2041), rt_str("); if (", 7)), rt_str_slice((*F->xu_594), rt_add(rt_r_ichk(F->i_2040), ((rt_int)1LL)), ((rt_int)(((*F->xu_594)).len)))), rt_str(") rt_raise(rt_exc(", 18)), f_q_18()), rt_str("X_UNHANDLED", 11)), f_q_18()), rt_str(")); rt_raise(rt_xcur); }", 24)); b_; }));
f_pop_cleanup_600();
}
ret_:
  RT_FPOP();
  return;
}

static void f_pop_frames_597(rt_int upto_596) {
  struct f_pop_frames_597fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->upto_596 = upto_596;
F->i_2042 = RT_R_IUNDEF;
F->i_2042 = rt_r_ichk(g_frames_1099);
F->c_2043 = NULL;
F->c_2043 = g_cleanups_1101;
while ((rt_r_ichk(F->i_2042) > F->upto_596)) {
f_emit_29(&(((P1013)rt_nil_check((*(P1024)rt_nil_check(F->c_2043)).s))->all));
F->c_2043 = (*(P1024)rt_nil_check(F->c_2043)).next;
F->i_2042 = rt_sub(rt_r_ichk(F->i_2042), ((rt_int)1LL));
}
ret_:
  RT_FPOP();
  return;
}

static void f_push_cleanup_599(rstr *s_598) {
  struct f_push_cleanup_599fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_598 = s_598;
F->c_2044 = NULL;
{ R1025 *cell2045 = rt_alloc(sizeof(R1025));
(*cell2045).s = NULL;
(*cell2045).next = NULL;
F->c_2044 = cell2045;
}
(*(P1024)rt_nil_check(F->c_2044)).s = f_mk_3(&(*F->s_598));
(*(P1024)rt_nil_check(F->c_2044)).next = g_cleanups_1101;
g_cleanups_1101 = F->c_2044;
g_frames_1099 = rt_add(rt_r_ichk(g_frames_1099), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_pop_cleanup_600(void) {
  struct f_pop_cleanup_600fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
g_cleanups_1101 = (*(P1024)rt_nil_check(g_cleanups_1101)).next;
g_frames_1099 = rt_sub(rt_r_ichk(g_frames_1099), ((rt_int)1LL));
ret_:
  RT_FPOP();
  return;
}

static void f_gen_statement_602(P1020 s_601) {
  struct f_gen_statement_602fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_601 = s_601;
F->located_2046 = NULL;
F->located_2046 = f_located_in_605(f_copy_node_833(F->s_601), NULL);
F->l_2047 = NULL;
F->l_2047 = F->located_2046;
while ((F->l_2047 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_523(F->l_2047, 0); b_; }));
F->l_2047 = (*(P1030)rt_nil_check(F->l_2047)).reqs_sym;
}
f_gen_statement2_610(F->s_601);
F->l_2047 = F->located_2046;
while ((F->l_2047 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_rep_sync_523(F->l_2047, 1); b_; }));
F->l_2047 = (*(P1030)rt_nil_check(F->l_2047)).reqs_sym;
}
ret_:
  RT_FPOP();
  return;
}

static P1030 f_located_in_605(P1020 e_603, P1030 found_604) {
  struct f_located_in_605fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_603 = e_603;
F->found_604 = found_604;
F->x_2048 = NULL;
F->x_2048 = F->e_603;
F->r_2049 = NULL;
F->r_2049 = F->found_604;
while ((F->x_2048 != NULL)) {
if ((rt_r_ichk((*(P1020)rt_nil_check(F->x_2048)).kind) == (((rt_int)7LL)))) {
F->y_2050 = NULL;
F->y_2050 = f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_2048)).name))->all));
if (((((F->y_2050 != NULL) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_2050)).kind) == (((rt_int)1LL)))) && ((*(P1030)rt_nil_check(F->y_2050)).loc != NULL)) && (!f_sym_in_608(F->r_2049, F->y_2050)))) {
(*(P1030)rt_nil_check(F->y_2050)).reqs_sym = F->r_2049;
F->r_2049 = F->y_2050;
}
} else if ((((((rt_r_ichk((*(P1020)rt_nil_check(F->x_2048)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P1020)rt_nil_check(F->x_2048)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P1020)rt_nil_check(F->x_2048)).kind) == (((rt_int)50LL)))) || (rt_r_ichk((*(P1020)rt_nil_check(F->x_2048)).kind) == (((rt_int)47LL)))) || (rt_r_ichk((*(P1020)rt_nil_check(F->x_2048)).kind) == (((rt_int)51LL))))) {
F->result_ = F->r_2049;
goto ret_;
}
if (((*(P1020)rt_nil_check(F->x_2048)).a != NULL)) {
F->r_2049 = f_located_in_605((*(P1020)rt_nil_check(F->x_2048)).a, F->r_2049);
}
if (((*(P1020)rt_nil_check(F->x_2048)).b != NULL)) {
F->r_2049 = f_located_in_605((*(P1020)rt_nil_check(F->x_2048)).b, F->r_2049);
}
if (((*(P1020)rt_nil_check(F->x_2048)).c != NULL)) {
F->r_2049 = f_located_in_605((*(P1020)rt_nil_check(F->x_2048)).c, F->r_2049);
}
F->x_2048 = (*(P1020)rt_nil_check(F->x_2048)).next;
}
F->result_ = F->r_2049;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_sym_in_608(P1030 l_606, P1030 y_607) {
  struct f_sym_in_608fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_606 = l_606;
F->y_607 = y_607;
F->p_2051 = NULL;
F->p_2051 = F->l_606;
while ((F->p_2051 != NULL)) {
if ((F->p_2051 == F->y_607)) {
F->result_ = 1;
goto ret_;
}
F->p_2051 = (*(P1030)rt_nil_check(F->p_2051)).reqs_sym;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_gen_statement2_610(P1020 s_609) {
  struct f_gen_statement2_610fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_609 = s_609;
F->label_2052 = NULL;
F->gl_2053 = NULL;
F->gl_2053 = (*(P1020)rt_nil_check(F->s_609)).labels;
while ((F->gl_2053 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1045)rt_nil_check(f_goto_label_583(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->gl_2053)).name))->all)))).label))->all), rt_str(": ;", 3)); b_; }));
F->gl_2053 = (*(P1020)rt_nil_check(F->gl_2053)).next;
}
if (((*(P1020)rt_nil_check(F->s_609)).tag != NULL)) {
F->x_2054 = NULL;
{ R1046 *cell2055 = rt_alloc(sizeof(R1046));
(*cell2055).match = NULL;
(*cell2055).label = NULL;
(*cell2055).next = NULL;
F->x_2054 = cell2055;
}
F->label_2052 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("L_end_", 6); b_; })); b_; }));
(*(P1045)rt_nil_check(F->x_2054)).match = (*(P1020)rt_nil_check(F->s_609)).tag;
(*(P1045)rt_nil_check(F->x_2054)).label = F->label_2052;
(*(P1045)rt_nil_check(F->x_2054)).depth = rt_r_ichk(g_frames_1099);
(*(P1045)rt_nil_check(F->x_2054)).next = g_exits_1097;
g_exits_1097 = F->x_2054;
}
{ rt_int sel2056 = rt_r_ichk((*(P1020)rt_nil_check(F->s_609)).kind);
if (0 || (sel2056 == (((rt_int)20LL)))) {
f_st_assign_612(F->s_609);
} else if (0 || (sel2056 == (((rt_int)21LL)))) {
f_st_call_614(F->s_609);
} else if (0 || (sel2056 == (((rt_int)22LL)))) {
f_st_if_616(F->s_609);
} else if (0 || (sel2056 == (((rt_int)23LL)))) {
f_st_case_620(F->s_609);
} else if (0 || (sel2056 == (((rt_int)24LL)))) {
f_st_repeat_628(F->s_609);
} else if (0 || (sel2056 == (((rt_int)25LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_591((*(P1020)rt_nil_check(F->s_609)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
} else if (0 || (sel2056 == (((rt_int)27LL)))) {
f_st_exit_630(F->s_609);
} else if (0 || (sel2056 == (((rt_int)29LL)))) {
{
F->x_2057 = NULL;
F->x_2057 = f_goto_label_583(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->s_609)).name))->all));
if ((F->x_2057 == NULL)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_609)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->s_609)).name))->all), rt_str(" is not a goto label of this or an enclosing open scope", 55)); b_; }));
}
f_pop_frames_597(rt_r_ichk((*(P1045)rt_nil_check(F->x_2057)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P1013)rt_nil_check((*(P1045)rt_nil_check(F->x_2057)).label))->all)), rt_str(";", 1)); b_; }));
}
} else if (0 || (sel2056 == (((rt_int)28LL)))) {
f_st_return_632(F->s_609);
} else if (0 || (sel2056 == (((rt_int)30LL)))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), f_exc_id_639(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->s_609)).name))->all), rt_r_ichk((*(P1020)rt_nil_check(F->s_609)).line))), rt_str(");", 2)); b_; }));
} else if (0 || (sel2056 == (((rt_int)31LL)))) {
if ((g_handlers_1100 == NULL)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_609)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RERAISE outside a handler", 25); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), (((P1013)rt_nil_check((*(P1024)rt_nil_check(g_handlers_1100)).s))->all)), rt_str(");", 2)); b_; }));
} else if (0 || (sel2056 == (((rt_int)26LL)))) {
f_st_guard_641(F->s_609);
} else if (0 || (sel2056 == (((rt_int)32LL)))) {
f_st_alloc_643(F->s_609);
} else if (0 || (sel2056 == (((rt_int)34LL)))) {
f_st_create_647(F->s_609);
} else if (0 || (sel2056 == (((rt_int)35LL)))) {
f_st_wait_676(F->s_609);
} else if (0 || (sel2056 == (((rt_int)36LL)))) {
f_st_region_684(F->s_609);
} else {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_609)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this statement is not handled yet", 33); b_; }));
}
}
if (((*(P1020)rt_nil_check(F->s_609)).tag != NULL)) {
g_exits_1097 = (*(P1045)rt_nil_check(g_exits_1097)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->label_2052))->all), rt_str(": ;", 3)); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_assign_612(P1020 s_611) {
  struct f_st_assign_612fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_611 = s_611;
F->lv_2058 = NULL;
F->t_2059 = NULL;
F->vt_2060 = NULL;
F->c_2061 = NULL;
F->ro_2062 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->s_611)).a)).kind) == (((rt_int)10LL))) && ((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->s_611)).a)).b != NULL)) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->s_611)).a)).b)).kind) == (((rt_int)16LL))))) {
f_lvalue_763((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->s_611)).a)).a, &F->lv_2058, &F->t_2059, &F->c_2061, &F->ro_2062);
while ((rt_r_ichk((*(P1026)rt_nil_check(F->t_2059)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_469(F->t_2059);
F->lv_2058 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_755(&(((P1013)rt_nil_check(F->lv_2058))->all), F->t_2059); b_; }));
F->t_2059 = (*(P1026)rt_nil_check(F->t_2059)).target;
}
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_2059)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->t_2059)).tparams == NULL))) {
F->t_2059 = (*(P1026)rt_nil_check(F->t_2059)).under;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_2059)).kind) == (((rt_int)15LL)))) {
F->lv_2058 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->lv_2058))->all), rt_str(".all", 4)); b_; }));
F->t_2059 = (*(P1026)rt_nil_check(F->t_2059)).under;
}
if ((((!rt_r_echk(F->ro_2062)) && (rt_r_ichk((*(P1026)rt_nil_check(F->t_2059)).kind) == (((rt_int)6LL)))) && (rt_r_ichk((*(P1026)rt_nil_check(F->t_2059)).ndim) == ((rt_int)1LL)))) {
F->lo_2063 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->s_611)).a)).b)).a, (*(P1026)rt_nil_check(F->t_2059)).idx, &F->vt_2060));
F->hi_2064 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->s_611)).a)).b)).b, (*(P1026)rt_nil_check(F->t_2059)).idx, &F->vt_2060));
F->v_2065 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->s_611)).b, F->t_2059, &F->vt_2060));
f_need_slice_775(F->t_2059);
f_check_type_232(F->vt_2060, F->t_2059, rt_r_ichk((*(P1020)rt_nil_check(F->s_611)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->t_2059)), rt_str(" sl_ = rt_r_aslice_", 19)), f_ctype_234(F->t_2059)), rt_str("(", 1)), (((P1013)rt_nil_check(F->lv_2058))->all)), rt_str(", ", 2)), F->lo_2063), rt_str(", ", 2)), F->hi_2064), rt_str("); as_", 6)), f_ctype_234(F->t_2059)), rt_str("(&sl_, ", 7)), F->v_2065), rt_str("); }", 4)); b_; }));
goto ret_;
}
if ((rt_r_echk(F->ro_2062) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_2059)).kind) != (((rt_int)5LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_611)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("slice assignment needs a string or a one-dimensional array variable", 67); b_; }));
}
{
F->lo_2066 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->s_611)).a)).b)).a, g_ty_int_1104, &F->vt_2060));
F->hi_2067 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->s_611)).a)).b)).b, g_ty_int_1104, &F->vt_2060));
F->v_2068 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->s_611)).b, g_ty_string_1108, &F->vt_2060));
f_check_type_232(F->vt_2060, g_ty_string_1108, rt_r_ichk((*(P1020)rt_nil_check(F->s_611)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice_assign(&", 21), (((P1013)rt_nil_check(F->lv_2058))->all)), rt_str(", ", 2)), F->lo_2066), rt_str(", ", 2)), F->hi_2067), rt_str(", ", 2)), F->v_2068), rt_str(");", 2)); b_; }));
}
goto ret_;
}
f_lvalue_763((*(P1020)rt_nil_check(F->s_611)).a, &F->lv_2058, &F->t_2059, &F->c_2061, &F->ro_2062);
if (rt_r_echk(F->ro_2062)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_611)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("assignment to a readonly data item", 34); b_; }));
}
if (((!f_opened_308(F->t_2059)) && (!f_exports_op_452((*(P1026)rt_nil_check(F->t_2059)).ocap, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str(":=", 2); b_; }))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_611)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str(":= for ", 7), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_2059)).name))->all)), rt_str(" is not exported by its capsule", 31)); b_; }));
}
{
F->v_2069 = rt_str_copy(f_gexpr_in_802((*(P1020)rt_nil_check(F->s_611)).b, F->t_2059, F->c_2061, &F->vt_2060));
f_check_type_232(F->vt_2060, F->t_2059, rt_r_ichk((*(P1020)rt_nil_check(F->s_611)).line));
f_ptr_subtype_check_489(F->t_2059, F->c_2061, (*(P1020)rt_nil_check(F->s_611)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(&(((P1013)rt_nil_check(F->lv_2058))->all), F->t_2059, &F->v_2069, F->c_2061); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_call_614(P1020 s_613) {
  struct f_st_call_614fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_613 = s_613;
F->c_2070 = NULL;
F->c_2070 = (*(P1020)rt_nil_check(F->s_613)).a;
F->t_2071 = NULL;
if (((rt_r_ichk((*(P1020)rt_nil_check(F->c_2070)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1020)rt_nil_check(F->c_2070)).kind) == (((rt_int)12LL))))) {
F->x_2072 = NULL;
F->x_2072 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1020)rt_nil_check(F->c_2070)).line));
(*(P1020)rt_nil_check(F->x_2072)).a = F->c_2070;
F->c_2070 = F->x_2072;
}
if ((rt_r_ichk((*(P1020)rt_nil_check(F->c_2070)).kind) != (((rt_int)10LL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_613)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a procedure invocation", 26); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_942(F->c_2070, 1, &F->t_2071), rt_str(";", 1)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_if_616(P1020 s_615) {
  struct f_st_if_616fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_615 = s_615;
F->a_2073 = NULL;
F->a_2073 = (*(P1020)rt_nil_check(F->s_615)).a;
F->first_2074 = RT_R_EUNDEF;
F->first_2074 = 1;
F->t_2075 = NULL;
F->taken_2076 = RT_R_EUNDEF;
F->taken_2076 = 0;
F->ok_2077 = RT_R_EUNDEF;
F->mv_2078 = NULL;
while (((F->a_2073 != NULL) && (!rt_r_echk(F->taken_2076)))) {
F->mv_2078 = f_meval_375((*(P1020)rt_nil_check(F->a_2073)).a, &F->ok_2077);
if (((rt_r_echk(F->ok_2077) && (rt_r_ichk((*(P1039)rt_nil_check(F->mv_2078)).kind) == (((rt_int)2LL)))) && (rt_r_ichk((*(P1039)rt_nil_check(F->mv_2078)).i) == ((rt_int)0LL)))) {
F->a_2073 = (*(P1020)rt_nil_check(F->a_2073)).next;
} else {
if ((rt_r_echk(F->ok_2077) && (rt_r_ichk((*(P1039)rt_nil_check(F->mv_2078)).kind) == (((rt_int)2LL))))) {
F->taken_2076 = 1;
if (rt_r_echk(F->first_2074)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
} else {
F->c_2079 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->a_2073)).a, g_ty_bool_1105, &F->t_2075));
f_check_type_232(F->t_2075, g_ty_bool_1105, rt_r_ichk((*(P1020)rt_nil_check(F->s_615)).line));
if (rt_r_echk(F->first_2074)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), F->c_2079), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), F->c_2079), rt_str(") {", 3)); b_; }));
}
}
F->first_2074 = 0;
f_gen_body_591((*(P1020)rt_nil_check(F->a_2073)).b);
F->a_2073 = (*(P1020)rt_nil_check(F->a_2073)).next;
}
}
if (((rt_r_ichk((*(P1020)rt_nil_check(F->s_615)).flag) == ((rt_int)1LL)) && (!rt_r_echk(F->taken_2076)))) {
if (rt_r_echk(F->first_2074)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
F->first_2074 = 0;
f_gen_body_591((*(P1020)rt_nil_check(F->s_615)).b);
}
if ((!rt_r_echk(F->first_2074))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static int f_manifest_case_618(P1020 s_617) {
  struct f_manifest_case_618fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_617 = s_617;
F->ok_2080 = RT_R_EUNDEF;
F->sv_2081 = NULL;
F->sv_2081 = f_meval_375((*(P1020)rt_nil_check(F->s_617)).a, &F->ok_2080);
F->a_2082 = NULL;
F->a_2082 = (*(P1020)rt_nil_check(F->s_617)).b;
if (((!rt_r_echk(F->ok_2080)) || (((rt_r_ichk((*(P1039)rt_nil_check(F->sv_2081)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P1039)rt_nil_check(F->sv_2081)).kind) != (((rt_int)2LL)))) && (rt_r_ichk((*(P1039)rt_nil_check(F->sv_2081)).kind) != (((rt_int)4LL)))))) {
F->result_ = 0;
goto ret_;
}
while ((F->a_2082 != NULL)) {
F->lab_2083 = NULL;
F->lab_2083 = (*(P1020)rt_nil_check(F->a_2082)).a;
while ((F->lab_2083 != NULL)) {
F->lo_2084 = NULL;
F->lo_2084 = f_meval_375((*(P1020)rt_nil_check(F->lab_2083)).a, &F->ok_2080);
F->hi_2085 = NULL;
F->hi_2085 = F->lo_2084;
if (((!rt_r_echk(F->ok_2080)) || (rt_r_ichk((*(P1039)rt_nil_check(F->lo_2084)).kind) != rt_r_ichk((*(P1039)rt_nil_check(F->sv_2081)).kind)))) {
F->result_ = 0;
goto ret_;
}
if (((*(P1020)rt_nil_check(F->lab_2083)).b != NULL)) {
F->hi_2085 = f_meval_375((*(P1020)rt_nil_check(F->lab_2083)).b, &F->ok_2080);
if ((((!rt_r_echk(F->ok_2080)) || (rt_r_ichk((*(P1039)rt_nil_check(F->hi_2085)).kind) != rt_r_ichk((*(P1039)rt_nil_check(F->sv_2081)).kind))) || (rt_r_ichk((*(P1039)rt_nil_check(F->sv_2081)).kind) == (((rt_int)4LL))))) {
F->result_ = 0;
goto ret_;
}
}
if ((((rt_r_ichk((*(P1039)rt_nil_check(F->sv_2081)).kind) == (((rt_int)4LL))) && rt_str_eq((((P1013)rt_nil_check((*(P1039)rt_nil_check(F->sv_2081)).s))->all), (((P1013)rt_nil_check((*(P1039)rt_nil_check(F->lo_2084)).s))->all))) || (((rt_r_ichk((*(P1039)rt_nil_check(F->sv_2081)).kind) != (((rt_int)4LL))) && (rt_r_ichk((*(P1039)rt_nil_check(F->lo_2084)).i) <= rt_r_ichk((*(P1039)rt_nil_check(F->sv_2081)).i))) && (rt_r_ichk((*(P1039)rt_nil_check(F->sv_2081)).i) <= rt_r_ichk((*(P1039)rt_nil_check(F->hi_2085)).i))))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_591((*(P1020)rt_nil_check(F->a_2082)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
F->result_ = 1;
goto ret_;
}
F->lab_2083 = (*(P1020)rt_nil_check(F->lab_2083)).next;
}
F->a_2082 = (*(P1020)rt_nil_check(F->a_2082)).next;
}
if ((rt_r_ichk((*(P1020)rt_nil_check(F->s_617)).flag) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_gen_body_591((*(P1020)rt_nil_check(F->s_617)).c);
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

static void f_st_case_620(P1020 s_619) {
  struct f_st_case_620fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_619 = s_619;
F->st_2086 = NULL;
F->vt_2087 = NULL;
F->first_2088 = RT_R_EUNDEF;
F->first_2088 = 1;
F->a_2089 = NULL;
F->a_2089 = (*(P1020)rt_nil_check(F->s_619)).b;
if (f_manifest_case_618(F->s_619)) {
goto ret_;
}
f_st_case2_622(F->s_619);
ret_:
  RT_FPOP();
  return;
}

static void f_st_case2_622(P1020 s_621) {
  struct f_st_case2_622fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_621 = s_621;
F->st_2090 = NULL;
F->vt_2091 = NULL;
F->first_2092 = RT_R_EUNDEF;
F->first_2092 = 1;
F->a_2093 = NULL;
F->a_2093 = (*(P1020)rt_nil_check(F->s_621)).b;
F->sel_2094 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->s_621)).a, NULL, &F->st_2090));
F->tmp_2095 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel", 3); b_; })));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), f_ctype_234(F->st_2090)), rt_str(" ", 1)), F->tmp_2095), rt_str(" = ", 3)), F->sel_2094), rt_str(";", 1)); b_; }));
while ((F->a_2093 != NULL)) {
F->lab_2096 = NULL;
F->lab_2096 = (*(P1020)rt_nil_check(F->a_2093)).a;
F->conds_2097 = NULL;
F->conds_2097 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->lab_2096 != NULL)) {
if (((*(P1020)rt_nil_check(F->lab_2096)).b == NULL)) {
F->v_2098 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->lab_2096)).a, F->st_2090, &F->vt_2091));
f_check_type_232(F->vt_2091, F->st_2090, rt_r_ichk((*(P1020)rt_nil_check(F->s_621)).line));
F->conds_2097 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->conds_2097))->all), rt_str(" || ", 4)), f_eq_code_418(F->st_2090, &F->tmp_2095, &F->v_2098)); b_; }));
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->st_2090)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->st_2090)).ltp != NULL))) {
F->lo_2099 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->lab_2096)).a, F->st_2090, &F->vt_2091));
F->hi_2100 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->lab_2096)).b, F->st_2090, &F->vt_2091));
F->conds_2097 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->conds_2097))->all), rt_str(" || (!", 6)), f_user_call2_400((*(P1026)rt_nil_check(F->st_2090)).ltp, &F->tmp_2095, 1, &F->lo_2099, 0)), rt_str(" && !", 5)), f_user_call2_400((*(P1026)rt_nil_check(F->st_2090)).ltp, &F->hi_2100, 0, &F->tmp_2095, 1)), rt_str(")", 1)); b_; }));
} else {
F->lo_2101 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->lab_2096)).a, F->st_2090, &F->vt_2091));
F->hi_2102 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->lab_2096)).b, F->st_2090, &F->vt_2091));
F->conds_2097 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->conds_2097))->all), rt_str(" || (", 5)), F->tmp_2095), rt_str(" >= ", 4)), F->lo_2101), rt_str(" && ", 4)), F->tmp_2095), rt_str(" <= ", 4)), F->hi_2102), rt_str(")", 1)); b_; }));
}
F->lab_2096 = (*(P1020)rt_nil_check(F->lab_2096)).next;
}
if (rt_r_echk(F->first_2092)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1013)rt_nil_check(F->conds_2097))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1013)rt_nil_check(F->conds_2097))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2092 = 0;
f_gen_body_591((*(P1020)rt_nil_check(F->a_2093)).b);
F->a_2093 = (*(P1020)rt_nil_check(F->a_2093)).next;
}
if (rt_r_echk(F->first_2092)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P1020)rt_nil_check(F->s_621)).flag) == ((rt_int)1LL))) {
f_gen_body_591((*(P1020)rt_nil_check(F->s_621)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_raise(RT_X_CASE);", 20); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_user_for_626(P1020 s_623, P1026 t_624, P1022 c_625) {
  struct f_user_for_626fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_623 = s_623;
F->t_624 = t_624;
F->c_625 = c_625;
F->y_2103 = NULL;
F->y_2103 = f_new_sym_181((((rt_int)2LL)), (*(P1020)rt_nil_check(F->s_623)).name);
F->saved_2104 = NULL;
F->saved_2104 = g_psub_1081;
F->p_2105 = NULL;
F->p_2105 = (*(P1026)rt_nil_check(F->t_624)).tparams;
F->iv_2106 = NULL;
F->iv_2106 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1020)rt_nil_check(F->s_623)).line));
F->st_2107 = NULL;
F->access_2108 = rt_str_copy(f_storage_513(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->s_623)).name))->all), F->t_624));
F->uv_2109 = NULL;
F->uv_2109 = f_mk_3(&F->access_2108);
if (((*(P1026)rt_nil_check(F->t_624)).tparams != NULL)) {
F->uv_2109 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->access_2108, rt_str(".all", 4)); b_; }));
}
if ((((!f_scalar_kind_186(f_base_of_223((*(P1026)rt_nil_check(F->t_624)).under))) || ((*(P1026)rt_nil_check(F->t_624)).elemcons == NULL)) || ((*(P1022)rt_nil_check((*(P1026)rt_nil_check(F->t_624)).elemcons)).lo == NULL))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_623)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a FOR over ", 11), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_624)).name))->all)), rt_str(" needs an underlying subtype with a range", 41)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
f_init_storage_341(&F->access_2108, F->t_624, F->c_625);
while ((F->p_2105 != NULL)) {
F->l1_2110 = NULL;
F->l2_2111 = NULL;
{ R1025 *cell2112 = rt_alloc(sizeof(R1025));
(*cell2112).s = NULL;
(*cell2112).next = NULL;
F->l1_2110 = cell2112;
}
{ R1025 *cell2113 = rt_alloc(sizeof(R1025));
(*cell2113).s = NULL;
(*cell2113).next = NULL;
F->l2_2111 = cell2113;
}
(*(P1024)rt_nil_check(F->l1_2110)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("@P_", 3), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2105)).name))->all))), rt_str("@", 1)); b_; }));
(*(P1024)rt_nil_check(F->l2_2111)).s = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(F->access_2108, rt_str(".p_", 3)), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2105)).name))->all))); b_; }));
(*(P1024)rt_nil_check(F->l1_2110)).next = F->l2_2111;
(*(P1024)rt_nil_check(F->l2_2111)).next = g_psub_1081;
g_psub_1081 = F->l1_2110;
F->p_2105 = (*(P1020)rt_nil_check(F->p_2105)).next;
}
{
F->lo_2114 = rt_str_copy(f_subst_314(&(((P1013)rt_nil_check((*(P1022)rt_nil_check((*(P1026)rt_nil_check(F->t_624)).elemcons)).lo))->all)));
F->hi_2115 = rt_str_copy(f_subst_314(&(((P1013)rt_nil_check((*(P1022)rt_nil_check((*(P1026)rt_nil_check(F->t_624)).elemcons)).hi))->all)));
g_psub_1081 = F->saved_2104;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->s_623)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->uv_2109))->all), rt_str(" = ", 3)), F->hi_2115), rt_str("; if (", 6)), F->lo_2114), rt_str(" <= ", 4)), (((P1013)rt_nil_check(F->uv_2109))->all)), rt_str(") for (;;) {", 12)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->uv_2109))->all), rt_str(" = ", 3)), F->lo_2114), rt_str("; if (", 6)), (((P1013)rt_nil_check(F->uv_2109))->all)), rt_str(" <= ", 4)), F->hi_2115), rt_str(") for (;;) {", 12)); b_; }));
}
f_open_scope_177();
(*(P1030)rt_nil_check(F->y_2103)).t = F->t_624;
(*(P1030)rt_nil_check(F->y_2103)).c = F->c_625;
f_bind_516(F->y_2103, &F->access_2108);
(*(P1030)rt_nil_check(F->y_2103)).ro_flag = 1;
f_define_168(F->y_2103, rt_r_ichk((*(P1020)rt_nil_check(F->s_623)).line));
f_gen_body_591((*(P1020)rt_nil_check(F->s_623)).b);
(*(P1020)rt_nil_check(F->iv_2106)).name = (*(P1020)rt_nil_check(F->s_623)).name;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->s_623)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1013)rt_nil_check(F->uv_2109))->all)), rt_str(" == ", 4)), F->lo_2114), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(&F->access_2108, F->t_624, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_942(f_call_node_680(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("PRED", 4); b_; }), F->iv_2106, rt_r_ichk((*(P1020)rt_nil_check(F->s_623)).line)), 0, &F->st_2107); b_; }), F->c_625); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1013)rt_nil_check(F->uv_2109))->all)), rt_str(" == ", 4)), F->hi_2115), rt_str(") break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(&F->access_2108, F->t_624, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gcall_942(f_call_node_680(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SUCC", 4); b_; }), F->iv_2106, rt_r_ichk((*(P1020)rt_nil_check(F->s_623)).line)), 0, &F->st_2107); b_; }), F->c_625); b_; }));
}
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} }", 3); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_repeat_628(P1020 s_627) {
  struct f_st_repeat_628fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_627 = s_627;
F->t_2116 = NULL;
F->c_2117 = NULL;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->s_627)).flag) == ((rt_int)0LL))) {
F->cond_2118 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->s_627)).a, g_ty_bool_1105, &F->t_2116));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("while (", 7), F->cond_2118), rt_str(") {", 3)); b_; }));
f_gen_body_591((*(P1020)rt_nil_check(F->s_627)).b);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
goto ret_;
}
F->t_2116 = f_resolve_subtype_268((*(P1020)rt_nil_check(F->s_627)).a, &F->c_2117);
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_2116)).kind) == (((rt_int)15LL))) && (((*(P1026)rt_nil_check(F->t_2116)).tparams != NULL) || (!f_scalar_kind_186(f_base_of_223(F->t_2116)))))) {
f_user_for_626(F->s_627, F->t_2116, F->c_2117);
goto ret_;
}
F->c_2117 = f_base_cons_226(F->t_2116, F->c_2117);
if ((((*(P1026)rt_nil_check(f_base_of_223(F->t_2116))).kind == (((rt_int)4LL))) && ((*(P1022)rt_nil_check(F->c_2117)).lo == NULL))) {
F->c_2117 = f_new_cons_184();
(*(P1022)rt_nil_check(F->c_2117)).lo = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
(*(P1022)rt_nil_check(F->c_2117)).hi = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_itos_7(rt_sub(f_list_len_71((*(P1026)rt_nil_check(f_base_of_223(F->t_2116))).lits), ((rt_int)1LL))); b_; }));
} else if (((*(P1022)rt_nil_check(F->c_2117)).lo == NULL)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_627)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a FOR index needs a range", 25); b_; }));
}
{
F->access_2119 = rt_str_copy(f_storage_513(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->s_627)).name))->all), F->t_2116));
F->lov_2120 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lo", 2); b_; })));
F->hiv_2121 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("hi", 2); b_; })));
F->it_2122 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("it", 2); b_; })));
F->y_2123 = NULL;
F->y_2123 = f_new_sym_181((((rt_int)2LL)), (*(P1020)rt_nil_check(F->s_627)).name);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int ", 9), F->lov_2120), rt_str(" = ", 3)), f_clo_193(F->c_2117)), rt_str(", ", 2)), F->hiv_2121), rt_str(" = ", 3)), f_chi_195(F->c_2117)), rt_str(";", 1)); b_; }));
if ((rt_r_ichk((*(P1020)rt_nil_check(F->s_627)).ival) == ((rt_int)1LL))) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_2122), rt_str(" = ", 3)), F->hiv_2121), rt_str("; ", 2)), F->it_2122), rt_str(" >= ", 4)), F->lov_2120), rt_str("; ", 2)), F->it_2122), rt_str("--) {", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("for (rt_int ", 12), F->it_2122), rt_str(" = ", 3)), F->lov_2120), rt_str("; ", 2)), F->it_2122), rt_str(" <= ", 4)), F->hiv_2121), rt_str("; ", 2)), F->it_2122), rt_str("++) {", 5)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->access_2119, rt_str(" = ", 3)), F->it_2122), rt_str(";", 1)); b_; }));
f_open_scope_177();
(*(P1030)rt_nil_check(F->y_2123)).t = F->t_2116;
(*(P1030)rt_nil_check(F->y_2123)).c = F->c_2117;
f_bind_516(F->y_2123, &F->access_2119);
(*(P1030)rt_nil_check(F->y_2123)).ro_flag = 1;
f_define_168(F->y_2123, rt_r_ichk((*(P1020)rt_nil_check(F->s_627)).line));
f_gen_body_591((*(P1020)rt_nil_check(F->s_627)).b);
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_exit_630(P1020 s_629) {
  struct f_st_exit_630fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_629 = s_629;
F->x_2124 = NULL;
F->x_2124 = g_exits_1097;
while ((F->x_2124 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1045)rt_nil_check(F->x_2124)).match))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->s_629)).name))->all))) {
f_pop_frames_597(rt_r_ichk((*(P1045)rt_nil_check(F->x_2124)).depth));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("goto ", 5), (((P1013)rt_nil_check((*(P1045)rt_nil_check(F->x_2124)).label))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
F->x_2124 = (*(P1045)rt_nil_check(F->x_2124)).next;
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_629)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("EXIT ", 5), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->s_629)).name))->all)), rt_str(" names no enclosing statement", 29)); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_return_632(P1020 s_631) {
  struct f_st_return_632fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_631 = s_631;
F->vt_2125 = NULL;
if ((g_cap_ret_1090 != NULL)) {
if (((*(P1020)rt_nil_check(F->s_631)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_631)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN in a capsule body takes no value", 39); b_; }));
}
f_pop_frames_597(rt_r_ichk(g_ret_frames_1092));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(g_cap_rflag_1091))->all), rt_str(" = 1; goto ", 11)), (((P1013)rt_nil_check(g_cap_ret_1090))->all)), rt_str(";", 1)); b_; }));
goto ret_;
}
if ((!rt_r_echk(g_in_func_1076))) {
f_pop_frames_597(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_main_done();", 15); b_; }));
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check((*(P1030)rt_nil_check(g_func_sym_1088)).result)).kind) == (((rt_int)9LL)))) {
if (((*(P1020)rt_nil_check(F->s_631)).a != NULL)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_631)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a procedure returns no value", 28); b_; }));
}
f_pop_frames_597(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
goto ret_;
}
if (((*(P1020)rt_nil_check(F->s_631)).a == NULL)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_631)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("RETURN needs a value in a function", 34); b_; }));
}
{
F->v_2126 = rt_str_copy(f_gexpr_in_802((*(P1020)rt_nil_check(F->s_631)).a, (*(P1030)rt_nil_check(g_func_sym_1088)).result, g_func_rc_1089, &F->vt_2125));
f_check_type_232(F->vt_2125, (*(P1030)rt_nil_check(g_func_sym_1088)).result, rt_r_ichk((*(P1020)rt_nil_check(F->s_631)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("F->result_ = ", 13), f_result_checked_636((*(P1030)rt_nil_check(g_func_sym_1088)).result, g_func_rc_1089, &F->v_2126)), rt_str(";", 1)); b_; }));
f_pop_frames_597(((rt_int)0LL));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("goto ret_;", 10); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_result_checked_636(P1026 t_633, P1022 c_634, rstr *v_635) {
  struct f_result_checked_636fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_633 = t_633;
F->c_634 = c_634;
F->v_635 = v_635;
if ((F->c_634 == NULL)) {
F->result_ = (*F->v_635);
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_633)).kind) == (((rt_int)5LL))) && ((*(P1022)rt_nil_check(F->c_634)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_635)), rt_str(", ", 2)), (((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_634)).slen))->all)), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_633)).kind) == (((rt_int)6LL))) && ((*(P1022)rt_nil_check(F->c_634)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->t_633)), rt_str(" r_ = ", 6)), (*F->v_635)), rt_str("; if (RT_R_EXT(r_.lo, r_.hi) != RT_R_EXT(", 41)), (((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_634)).lo))->all)), rt_str(", ", 2)), (((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_634)).hi))->all)), rt_str(")) rt_raise_msg(rt_exc(", 23)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("array length", 12)), f_q_18()), rt_str("); r_; })", 9));
goto ret_;
}
F->result_ = f_checked_213(F->t_633, F->c_634, &(*F->v_635));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_exc_id_639(rstr *name_637, rt_int line_638) {
  struct f_exc_id_639fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_637 = name_637;
F->line_638 = line_638;
F->y_2127 = NULL;
F->y_2127 = f_lookup_163(&(*F->name_637));
if (((F->y_2127 != NULL) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_2127)).kind) == (((rt_int)7LL))))) {
F->result_ = (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_2127)).cname))->all);
goto ret_;
}
if (((((rt_int)(((*F->name_637)).len)) > ((rt_int)2LL)) && rt_str_eq(rt_str_slice((*F->name_637), ((rt_int)1LL), ((rt_int)2LL)), rt_str("X_", 2)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_exc(", 7), f_q_18()), (*F->name_637)), f_q_18()), rt_str(")", 1));
goto ret_;
}
f_fail_23(F->line_638, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_637), rt_str(" is not an exception", 20)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_guard_641(P1020 s_640) {
  struct f_st_guard_641fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_640 = s_640;
F->h_2128 = NULL;
F->h_2128 = (*(P1020)rt_nil_check(F->s_640)).b;
F->first_2129 = RT_R_EUNDEF;
F->first_2129 = 1;
F->hv_2130 = NULL;
{
F->f_2131 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->x_2132 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("x", 1); b_; })));
f_push_cleanup_599(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2131), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ rt_frame ", 11), F->f_2131), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2131), rt_str(")) {", 4)); b_; }));
f_gen_body_591((*(P1020)rt_nil_check(F->s_640)).a);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2131), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_pop_cleanup_600();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2131), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), F->x_2132), rt_str(" = rt_xcur;", 11)); b_; }));
{ R1025 *cell2133 = rt_alloc(sizeof(R1025));
(*cell2133).s = NULL;
(*cell2133).next = NULL;
F->hv_2130 = cell2133;
}
(*(P1024)rt_nil_check(F->hv_2130)).s = f_mk_3(&F->x_2132);
(*(P1024)rt_nil_check(F->hv_2130)).next = g_handlers_1100;
g_handlers_1100 = F->hv_2130;
{
F->h1_2134 = NULL;
F->h1_2134 = (*(P1020)rt_nil_check(F->s_640)).b;
F->seen_2135 = NULL;
while ((F->h1_2134 != NULL)) {
F->n1_2136 = NULL;
F->n1_2136 = (*(P1020)rt_nil_check(F->h1_2134)).a;
while ((F->n1_2136 != NULL)) {
if (f_seen_name_425(F->seen_2135, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->n1_2136)).name))->all))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->n1_2136)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->n1_2136)).name))->all), rt_str(" has two handlers in one guard statement", 40)); b_; }));
}
F->seen_2135 = f_add_line_892(F->seen_2135, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->n1_2136)).name))->all));
F->n1_2136 = (*(P1020)rt_nil_check(F->n1_2136)).next;
}
F->h1_2134 = (*(P1020)rt_nil_check(F->h1_2134)).next;
}
}
while ((F->h_2128 != NULL)) {
F->n_2137 = NULL;
F->n_2137 = (*(P1020)rt_nil_check(F->h_2128)).a;
F->conds_2138 = NULL;
F->conds_2138 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
while ((F->n_2137 != NULL)) {
F->conds_2138 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->conds_2138))->all), rt_str(" || ", 4)), F->x_2132), rt_str(" == ", 4)), f_exc_id_639(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->n_2137)).name))->all), rt_r_ichk((*(P1020)rt_nil_check(F->s_640)).line))); b_; }));
F->n_2137 = (*(P1020)rt_nil_check(F->n_2137)).next;
}
if (rt_r_echk(F->first_2129)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1013)rt_nil_check(F->conds_2138))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1013)rt_nil_check(F->conds_2138))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2129 = 0;
f_gen_body_591((*(P1020)rt_nil_check(F->h_2128)).b);
F->h_2128 = (*(P1020)rt_nil_check(F->h_2128)).next;
}
if (rt_r_echk(F->first_2129)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("{", 1); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
}
if ((rt_r_ichk((*(P1020)rt_nil_check(F->s_640)).flag) == ((rt_int)1LL))) {
f_gen_body_591((*(P1020)rt_nil_check(F->s_640)).c);
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_raise(", 9), F->x_2132), rt_str(");", 2)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_handlers_1100 = (*(P1024)rt_nil_check(g_handlers_1100)).next;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static void f_st_alloc_643(P1020 s_642) {
  struct f_st_alloc_643fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_642 = s_642;
F->lv_2139 = NULL;
F->t_2140 = NULL;
F->target_2141 = NULL;
F->vt_2142 = NULL;
F->c_2143 = NULL;
F->tc_2144 = NULL;
F->ro_2145 = RT_R_EUNDEF;
F->d_2146 = NULL;
F->p_2147 = NULL;
F->a_2148 = NULL;
f_lvalue_763((*(P1020)rt_nil_check(F->s_642)).a, &F->lv_2139, &F->t_2140, &F->c_2143, &F->ro_2145);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_2140)).kind) != (((rt_int)8LL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_642)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ALLOC needs an indirect variable", 32); b_; }));
}
f_finish_ptr_469(F->t_2140);
F->d_2146 = (*(P1026)rt_nil_check(F->t_2140)).decl;
F->target_2141 = (*(P1026)rt_nil_check(F->t_2140)).target;
if ((f_list_len_71((*(P1020)rt_nil_check(F->s_642)).b) != f_list_len_71((*(P1020)rt_nil_check(F->d_2146)).b))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_642)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("ALLOC needs ", 12), f_itos_7(f_list_len_71((*(P1020)rt_nil_check(F->d_2146)).b))), rt_str(" actual parameters", 18)); b_; }));
}
if (((*(P1020)rt_nil_check(F->d_2146)).b != NULL)) {
f_alloc_cell_481(F->s_642, &(((P1013)rt_nil_check(F->lv_2139))->all), F->t_2140, F->c_2143);
goto ret_;
}
{
F->tcn_2149 = rt_str_copy(f_ctype_234(F->target_2141));
F->cell_2150 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cell", 4); b_; })));
if (f_needs_fin_346(F->target_2141)) {
F->fn_2151 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("fin", 3); b_; })));
g_uses_free_1085 = 1;
g_uses_findyn_1087 = 1;
f_put_27(g_out_protos_1069, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_2151), rt_str("(void *cell_, void *env_);", 26)); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->fn_2151), rt_str("(void *cell_, void *env_) {", 27)); b_; }));
if (rt_r_echk(g_in_func_1076)) {
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1013)rt_nil_check((*(P1030)rt_nil_check(g_func_sym_1088)).cname))->all)), rt_str("fr *F = env_;", 13)); b_; }));
} else {
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  (void)env_;", 13); b_; }));
}
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("  ", 2), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), F->tcn_2149), rt_str(" *)cell_)", 9)); b_; }), F->target_2141)); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
if (rt_r_echk(g_in_func_1076)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_2149), rt_str(" *", 2)), F->cell_2150), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_2149), rt_str("), ", 3)), F->fn_2151), rt_str(", F);", 5)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_collect(); { ", 16), F->tcn_2149), rt_str(" *", 2)), F->cell_2150), rt_str(" = rt_salloc_fin(sizeof(", 24)), F->tcn_2149), rt_str("), ", 3)), F->fn_2151), rt_str(", NULL);", 8)); b_; }));
}
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ ", 2), F->tcn_2149), rt_str(" *", 2)), F->cell_2150), rt_str(" = rt_alloc(sizeof(", 19)), F->tcn_2149), rt_str("));", 3)); b_; }));
}
f_open_scope_177();
f_bind_ptr_params_476((*(P1020)rt_nil_check(F->d_2146)).d, f_ptr_args_471(F->c_2143), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }), rt_r_ichk((*(P1020)rt_nil_check(F->s_642)).line));
F->vt_2142 = f_resolve_subtype_268((*(P1020)rt_nil_check(F->d_2146)).a, &F->tc_2144);
f_init_storage_341(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_2150), rt_str(")", 1)); b_; }), F->target_2141, F->tc_2144);
f_close_scope_178();
if (((*(P1020)rt_nil_check(F->s_642)).c != NULL)) {
F->v_2152 = rt_str_copy(f_gexpr_in_802((*(P1020)rt_nil_check(F->s_642)).c, F->target_2141, F->tc_2144, &F->vt_2142));
f_check_type_232(F->vt_2142, F->target_2141, rt_r_ichk((*(P1020)rt_nil_check(F->s_642)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_assign_code_411(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), F->cell_2150), rt_str(")", 1)); b_; }), F->target_2141, &F->v_2152, F->tc_2144); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->lv_2139))->all), rt_str(" = ", 3)), F->cell_2150), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_ref_645(P1020 e_644) {
  struct f_act_ref_645fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_644 = e_644;
F->lv_2153 = NULL;
F->t_2154 = NULL;
F->c_2155 = NULL;
F->ro_2156 = RT_R_EUNDEF;
if ((((rt_r_ichk((*(P1020)rt_nil_check(F->e_644)).kind) == (((rt_int)7LL))) && rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_644)).name))->all), rt_str("ME", 2))) && (f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if ((!f_is_lvalue_757(F->e_644))) {
F->v_2157 = rt_str_copy(f_gexpr_794(F->e_644, g_ty_act_1114, &F->t_2154));
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_2154)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_644)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = F->v_2157;
goto ret_;
}
f_lvalue_763(F->e_644, &F->lv_2153, &F->t_2154, &F->c_2155, &F->ro_2156);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_2154)).kind) != (((rt_int)14LL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_644)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("an activation variable (ACT) is required", 40); b_; }));
}
F->result_ = (((P1013)rt_nil_check(F->lv_2153))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_st_create_647(P1020 s_646) {
  struct f_st_create_647fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_646 = s_646;
F->y_2158 = NULL;
F->y_2158 = f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->s_646)).name))->all));
F->pm_2159 = NULL;
F->a_2160 = NULL;
F->a_2160 = (*(P1020)rt_nil_check(F->s_646)).b;
F->lv_2161 = NULL;
F->lt_2162 = NULL;
F->vt_2163 = NULL;
F->lc_2164 = NULL;
F->ro_2165 = RT_R_EUNDEF;
if (((F->y_2158 != NULL) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_2158)).kind) == (((rt_int)10LL))))) {
F->y_2158 = f_instantiate_739(F->y_2158, (*(P1020)rt_nil_check(F->s_646)).e, (*(P1020)rt_nil_check(F->s_646)).b, rt_r_ichk((*(P1020)rt_nil_check(F->s_646)).line));
}
if (((F->y_2158 == NULL) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_2158)).kind) != (((rt_int)9LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_646)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->s_646)).name))->all), rt_str(" is not a task", 14)); b_; }));
}
F->pm_2159 = (*(P1030)rt_nil_check(F->y_2158)).params;
{
F->at_2166 = NULL;
F->ac_2167 = NULL;
F->aro_2168 = RT_R_EUNDEF;
F->act_2169 = NULL;
F->nf_2170 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("nf", 2); b_; })));
f_lvalue_763((*(P1020)rt_nil_check(F->s_646)).a, &F->lv_2161, &F->at_2166, &F->ac_2167, &F->aro_2168);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->at_2166)).kind) == (((rt_int)14LL)))) {
F->act_2169 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_act_ref_645((*(P1020)rt_nil_check(F->s_646)).a); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ struct ", 9), (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_2158)).cname))->all)), rt_str("fr *", 4)), F->nf_2170), rt_str(" = rt_alloc(sizeof *", 20)), F->nf_2170), rt_str(");", 2)); b_; }));
if ((rt_r_ichk((*(P1030)rt_nil_check(F->y_2158)).level) > ((rt_int)0LL))) {
F->link_2171 = NULL;
F->link_2171 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2173 = ((rt_int)1LL), hi2174 = rt_sub(rt_r_ichk(g_cur_level_1077), rt_r_ichk((*(P1030)rt_nil_check(F->y_2158)).level));
for (rt_int it2175 = lo2173; it2175 <= hi2174; it2175++) {
F->i_2172 = it2175;
F->link_2171 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->link_2171))->all), rt_str("->up", 4)); b_; }));
}
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2170, rt_str("->up = ", 7)), (((P1013)rt_nil_check(F->link_2171))->all)), rt_str(";", 1)); b_; }));
}
while (((F->a_2160 != NULL) && (F->pm_2159 != NULL))) {
if ((rt_r_ichk((*(P1032)rt_nil_check(F->pm_2159)).mode) == (((rt_int)1LL)))) {
F->v_2176 = rt_str_copy(f_gexpr_in_802(F->a_2160, (*(P1032)rt_nil_check(F->pm_2159)).t, (*(P1032)rt_nil_check(F->pm_2159)).c, &F->vt_2163));
f_check_type_232(F->vt_2163, (*(P1032)rt_nil_check(F->pm_2159)).t, rt_r_ichk((*(P1020)rt_nil_check(F->s_646)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2170, rt_str("->", 2)), (((P1013)rt_nil_check((*(P1032)rt_nil_check(F->pm_2159)).cfield))->all)), rt_str(" = ", 3)), f_copy_code_414((*(P1032)rt_nil_check(F->pm_2159)).t, &F->v_2176)), rt_str(";", 1)); b_; }));
} else {
f_lvalue_763(F->a_2160, &F->lv_2161, &F->lt_2162, &F->lc_2164, &F->ro_2165);
f_check_type_232(F->lt_2162, (*(P1032)rt_nil_check(F->pm_2159)).t, rt_r_ichk((*(P1020)rt_nil_check(F->s_646)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2170, rt_str("->", 2)), (((P1013)rt_nil_check((*(P1032)rt_nil_check(F->pm_2159)).cfield))->all)), rt_str(" = &", 4)), (((P1013)rt_nil_check(F->lv_2161))->all)), rt_str(";", 1)); b_; }));
if (f_scalar_kind_186((*(P1032)rt_nil_check(F->pm_2159)).t)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->nf_2170, rt_str("->", 2)), (((P1013)rt_nil_check((*(P1032)rt_nil_check(F->pm_2159)).cfield))->all)), rt_str("lo = ", 5)), f_sub_lo_198(F->lt_2162, F->lc_2164)), rt_str("; ", 2)), F->nf_2170), rt_str("->", 2)), (((P1013)rt_nil_check((*(P1032)rt_nil_check(F->pm_2159)).cfield))->all)), rt_str("hi = ", 5)), f_sub_hi_201(F->lt_2162, F->lc_2164)), rt_str(";", 1)); b_; }));
}
}
F->a_2160 = (*(P1020)rt_nil_check(F->a_2160)).next;
F->pm_2159 = (*(P1032)rt_nil_check(F->pm_2159)).next;
}
if (((F->a_2160 != NULL) || (F->pm_2159 != NULL))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->s_646)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("wrong number of actual parameters for task ", 43), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->s_646)).name))->all)); b_; }));
}
if ((F->act_2169 != NULL)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create(", 10), (((P1013)rt_nil_check(F->act_2169))->all)), rt_str(", &", 3)), (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_2158)).cname))->all)), rt_str("decl, ", 6)), (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_2158)).cname))->all)), rt_str(", ", 2)), F->nf_2170), rt_str("); }", 4)); b_; }));
} else {
f_user_create_657(F->s_646, F->y_2158, &(((P1013)rt_nil_check(F->lv_2161))->all), F->at_2166, &F->nf_2170);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
}
}
ret_:
  RT_FPOP();
  return;
}

static void f_hidden_var_651(rstr *name_648, P1026 t_649, rstr *place_650) {
  struct f_hidden_var_651fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_648 = name_648;
F->t_649 = t_649;
F->place_650 = place_650;
F->y_2177 = NULL;
F->y_2177 = f_new_sym_181((((rt_int)1LL)), f_mk_3(&(*F->name_648)));
(*(P1030)rt_nil_check(F->y_2177)).t = F->t_649;
(*(P1030)rt_nil_check(F->y_2177)).level = ((rt_int)0LL);
(*(P1030)rt_nil_check(F->y_2177)).access = f_mk_3(&(*F->place_650));
f_define_168(F->y_2177, ((rt_int)0LL));
ret_:
  RT_FPOP();
  return;
}

static void f_user_create_657(P1020 s_652, P1030 y_653, rstr *uv_654, P1026 ut_655, rstr *nf_656) {
  struct f_user_create_657fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_652 = s_652;
F->y_653 = y_653;
F->uv_654 = uv_654;
F->ut_655 = ut_655;
F->nf_656 = nf_656;
F->t_2178 = NULL;
F->saved_2179 = NULL;
F->saved_2179 = g_code_1074;
F->hook_2180 = NULL;
F->hook_2180 = f_new_buffer_24();
F->un_2181 = NULL;
F->un_2181 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1020)rt_nil_check(F->s_652)).line));
F->hn_2182 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sched_hook", 10); b_; })));
F->aa_2183 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("aa", 2); b_; })));
F->uname_2184 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_UA", 8); b_; })));
F->aname_2185 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SCHED_AA", 8); b_; })));
f_open_scope_177();
f_hidden_var_651(&F->uname_2184, F->ut_655, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->ut_655)), rt_str(" *)aa_->ua)", 11)); b_; }));
(*(P1020)rt_nil_check(F->un_2181)).name = f_mk_3(&F->uname_2184);
g_code_1074 = F->hook_2180;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("switch (op) {", 13); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_RESET: ", 20), f_gcall_942(f_call_node_680(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_RESET", 10); b_; }), F->un_2181, rt_r_ichk((*(P1020)rt_nil_check(F->s_652)).line)), 1, &F->t_2178)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_WAIT: ", 19), f_gcall_942(f_call_node_680(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_WAIT", 9); b_; }), F->un_2181, rt_r_ichk((*(P1020)rt_nil_check(F->s_652)).line)), 1, &F->t_2178)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_SIGNAL: ", 21), f_gcall_942(f_call_node_680(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("SYNC_SIGNAL", 11); b_; }), F->un_2181, rt_r_ichk((*(P1020)rt_nil_check(F->s_652)).line)), 1, &F->t_2178)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("case RT_HOOK_END: ", 18), f_gcall_942(f_call_node_680(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_END", 8); b_; }), F->un_2181, rt_r_ichk((*(P1020)rt_nil_check(F->s_652)).line)), 1, &F->t_2178)), rt_str("; break;", 8)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
g_code_1074 = F->saved_2179;
f_put_27(g_out_protos_1069, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_2182), rt_str("(int op, rt_act *aa_);", 22)); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("static void ", 12), F->hn_2182), rt_str("(int op, rt_act *aa_) {", 23)); b_; }));
if (rt_r_echk(g_in_func_1076)) {
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  struct ", 9), (((P1013)rt_nil_check((*(P1030)rt_nil_check(g_func_sym_1088)).cname))->all)), rt_str("fr *F = aa_->env;", 17)); b_; }));
}
f_splice_34(g_out_funcs_1071, F->hook_2180);
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_act *", 8), F->aa_2183), rt_str(" = rt_alloc(sizeof(rt_act));", 28)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->aa_2183, rt_str("->hook = ", 9)), F->hn_2182), rt_str("; ", 2)), F->aa_2183), rt_str("->ua = &", 8)), (*F->uv_654)), rt_str("; ", 2)), F->aa_2183), rt_str("->utype = ", 10)), f_q_18()), f_type_tag_932(F->ut_655)), f_q_18()), rt_str(";", 1)); b_; }));
if (rt_r_echk(g_in_func_1076)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->aa_2183, rt_str("->env = F;", 10)); b_; }));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_create_held(", 15), F->aa_2183), rt_str(", &", 3)), (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_653)).cname))->all)), rt_str("decl, ", 6)), (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_653)).cname))->all)), rt_str(", ", 2)), (*F->nf_656)), rt_str(");", 2)); b_; }));
f_hidden_var_651(&F->aname_2185, g_ty_act_1114, &F->aa_2183);
{
F->start_2186 = NULL;
F->start_2186 = f_call_node_680(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START", 10); b_; }), (*(P1020)rt_nil_check(F->s_652)).a, rt_r_ichk((*(P1020)rt_nil_check(F->s_652)).line));
F->an_2187 = NULL;
F->an_2187 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1020)rt_nil_check(F->s_652)).line));
(*(P1020)rt_nil_check(F->an_2187)).name = f_mk_3(&F->aname_2185);
(*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->start_2186)).b)).next = F->an_2187;
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_gcall_942(F->start_2186, 1, &F->t_2178), rt_str(";", 1)); b_; }));
}
f_close_scope_178();
ret_:
  RT_FPOP();
  return;
}

static rstr f_wait_alt_662(P1020 inv_658, rstr *arr_659, rt_int i_660, int mixed_661) {
  struct f_wait_alt_662fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_658 = inv_658;
F->arr_659 = arr_659;
F->i_660 = i_660;
F->mixed_661 = mixed_661;
F->lv_2188 = NULL;
F->t_2189 = NULL;
F->vt_2190 = NULL;
F->c_2191 = NULL;
F->ro_2192 = RT_R_EUNDEF;
F->fn_2193 = NULL;
F->args_2194 = NULL;
F->slot_2195 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_659), rt_str("[", 1)), f_itos_7(F->i_660)), rt_str("]", 1)));
if (((rt_r_ichk((*(P1020)rt_nil_check(F->inv_658)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->inv_658)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->inv_658)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a waiting invocation is SEND, RECEIVE or a DELAY", 48); b_; }));
}
F->fn_2193 = (*(P1020)rt_nil_check(F->inv_658)).a;
F->args_2194 = (*(P1020)rt_nil_check(F->inv_658)).b;
if ((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2193)).name))->all), rt_str("SEND", 4)) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2193)).name))->all), rt_str("RECEIVE", 7)))) {
f_lvalue_763(F->args_2194, &F->lv_2188, &F->t_2189, &F->c_2191, &F->ro_2192);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_2189)).kind) != (((rt_int)12LL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->inv_658)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a mailbox is required", 21); b_; }));
}
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2193)).name))->all), rt_str("RECEIVE", 7))) {
F->dv_2196 = NULL;
F->dt_2197 = NULL;
f_lvalue_763((*(P1020)rt_nil_check(F->args_2194)).next, &F->dv_2196, &F->dt_2197, &F->c_2191, &F->ro_2192);
f_check_type_232(F->dt_2197, (*(P1026)rt_nil_check(F->t_2189)).elem, rt_r_ichk((*(P1020)rt_nil_check(F->inv_658)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2195, rt_str(" = (rt_alt){RT_ALT_RECEIVE, 1, ", 31)), (((P1013)rt_nil_check(F->lv_2188))->all)), rt_str(", &", 3)), (((P1013)rt_nil_check(F->dv_2196))->all)), rt_str(", 0};", 5));
goto ret_;
}
{
F->tmp_2198 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("msg", 3); b_; })));
F->v_2199 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->args_2194)).next, (*(P1026)rt_nil_check(F->t_2189)).elem, &F->vt_2190));
f_check_type_232(F->vt_2190, (*(P1026)rt_nil_check(F->t_2189)).elem, rt_r_ichk((*(P1020)rt_nil_check(F->inv_658)).line));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1026)rt_nil_check(F->t_2189)).elem), rt_str(" ", 1)), F->tmp_2198), rt_str(" = ", 3)), F->v_2199), rt_str(";", 1)); b_; }));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2195, rt_str(" = (rt_alt){RT_ALT_SEND, 1, ", 28)), (((P1013)rt_nil_check(F->lv_2188))->all)), rt_str(", &", 3)), F->tmp_2198), rt_str(", 0};", 5));
goto ret_;
}
} else if ((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2193)).name))->all), rt_str("DELAY_UNTIL", 11)) && (f_list_len_71(F->args_2194) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2195, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_r_act_deadline(", 65)), f_act_delay_args_958(F->args_2194)), rt_str(")};", 3));
goto ret_;
} else if ((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2193)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2193)).name))->all), rt_str("DELAY_UNTIL", 11)))) {
F->v_2200 = rt_str_copy(f_gexpr_794(F->args_2194, g_ty_int_1104, &F->vt_2190));
if ((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2193)).name))->all), rt_str("DELAY", 5)) && F->mixed_661)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2195, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, rt_time() + ", 59)), F->v_2200), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2193)).name))->all), rt_str("DELAY", 5))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2195, rt_str(" = (rt_alt){RT_ALT_DELAY, 1, NULL, NULL, ", 41)), F->v_2200), rt_str("};", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2195, rt_str(" = (rt_alt){RT_ALT_DELAY_UNTIL, 1, NULL, NULL, ", 47)), F->v_2200), rt_str("};", 2));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2193)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(F->slot_2195, rt_str(" = (rt_alt){RT_ALT_INACTIVE, 1, ", 32)), f_act_ref_645(F->args_2194)), rt_str(", NULL, 0};", 11));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->inv_658)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2193)).name))->all), rt_str(" cannot be a waiting invocation", 31)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_builtin_wait_664(P1020 inv_663) {
  struct f_builtin_wait_664fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_663 = inv_663;
F->lv_2201 = NULL;
F->t_2202 = NULL;
F->c_2203 = NULL;
F->ro_2204 = RT_R_EUNDEF;
F->saved_2205 = NULL;
F->saved_2205 = g_code_1074;
F->ok_2206 = RT_R_EUNDEF;
F->ok_2206 = 0;
if (((rt_r_ichk((*(P1020)rt_nil_check(F->inv_663)).kind) != (((rt_int)10LL))) || (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->inv_663)).a)).kind) != (((rt_int)7LL))))) {
F->result_ = 1;
goto ret_;
}
if (((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->inv_663)).a)).name))->all), rt_str("DELAY", 5)) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->inv_663)).a)).name))->all), rt_str("DELAY_UNTIL", 11))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->inv_663)).a)).name))->all), rt_str("DELAY_UNTIL_INACTIVE", 20)))) {
F->result_ = 1;
goto ret_;
}
if (((!rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->inv_663)).a)).name))->all), rt_str("SEND", 4))) && (!rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->inv_663)).a)).name))->all), rt_str("RECEIVE", 7))))) {
F->result_ = 0;
goto ret_;
}
g_trial_1102 = rt_add(rt_r_ichk(g_trial_1102), ((rt_int)1LL));
g_code_1074 = f_new_buffer_24();
{ rt_frame xf2207;
if (RT_TRY(xf2207)) {
f_lvalue_763((*(P1020)rt_nil_check(F->inv_663)).b, &F->lv_2201, &F->t_2202, &F->c_2203, &F->ro_2204);
F->ok_2206 = (rt_r_ichk((*(P1026)rt_nil_check(F->t_2202)).kind) == (((rt_int)12LL)));
RT_POP(xf2207);
} else {
RT_POP(xf2207);
int x2208 = rt_xcur;
if (0 || x2208 == ex_compile_error_1) {
F->ok_2206 = 0;
} else {
rt_raise(x2208);
}
}
}
g_trial_1102 = rt_sub(rt_r_ichk(g_trial_1102), ((rt_int)1LL));
g_code_1074 = F->saved_2205;
F->result_ = rt_r_echk(F->ok_2206);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_wait_op_669(P1020 inv_665, rstr *op_666, rstr *q_667, int is_stmt_668) {
  struct f_wait_op_669fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->inv_665 = inv_665;
F->op_666 = op_666;
F->q_667 = q_667;
F->is_stmt_668 = is_stmt_668;
F->x_2209 = NULL;
F->x_2209 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1020)rt_nil_check(F->inv_665)).line));
F->f_2210 = NULL;
F->f_2210 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1020)rt_nil_check(F->inv_665)).line));
F->qn_2211 = NULL;
F->qn_2211 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1020)rt_nil_check(F->inv_665)).line));
F->t_2212 = NULL;
(*(P1020)rt_nil_check(F->f_2210)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->inv_665)).a)).name))->all), rt_str("_", 1)), (*F->op_666)); b_; }));
(*(P1020)rt_nil_check(F->qn_2211)).name = f_mk_3(&(*F->q_667));
(*(P1020)rt_nil_check(F->qn_2211)).next = (*(P1020)rt_nil_check(F->inv_665)).b;
(*(P1020)rt_nil_check(F->x_2209)).a = F->f_2210;
(*(P1020)rt_nil_check(F->x_2209)).b = F->qn_2211;
{
F->r_2213 = rt_str_copy(f_gcall_942(F->x_2209, F->is_stmt_668, &F->t_2212));
if ((!F->is_stmt_668)) {
f_check_type_232(F->t_2212, g_ty_bool_1105, rt_r_ichk((*(P1020)rt_nil_check(F->inv_665)).line));
}
F->result_ = F->r_2213;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_wait_674(P1020 s_670, rstr *arr_671, rstr *w_672, rt_int n_673) {
  struct f_user_wait_674fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_670 = s_670;
F->arr_671 = arr_671;
F->w_672 = w_672;
F->n_673 = n_673;
F->a_2214 = NULL;
F->a_2214 = (*(P1020)rt_nil_check(F->s_670)).a;
F->i_2215 = RT_R_IUNDEF;
F->i_2215 = ((rt_int)0LL);
F->tests_2216 = NULL;
F->tests_2216 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->revokes_2217 = NULL;
F->revokes_2217 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
f_open_scope_177();
while ((F->a_2214 != NULL)) {
F->inv_2218 = NULL;
F->inv_2218 = (*(P1020)rt_nil_check(F->a_2214)).a;
while ((F->inv_2218 != NULL)) {
if (f_builtin_wait_664(F->inv_2218)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_662(F->inv_2218, &(*F->arr_671), rt_r_ichk(F->i_2215), 1); b_; }));
} else {
F->st_2219 = NULL;
F->st_2219 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1020)rt_nil_check(F->inv_2218)).line));
F->c_2220 = NULL;
F->qt_2221 = NULL;
F->qname_2222 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("WAIT_Q", 6); b_; })));
F->y_2223 = NULL;
F->y_2223 = f_new_sym_181((((rt_int)1LL)), f_mk_3(&F->qname_2222));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->arr_671), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->i_2215))), rt_str("] = (rt_alt){RT_ALT_USER, 1, NULL, NULL, 0};", 44)); b_; }));
(*(P1020)rt_nil_check(F->st_2219)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->inv_2218)).a)).name))->all), rt_str("_ST", 3)); b_; }));
F->qt_2221 = f_resolve_subtype_268(F->st_2219, &F->c_2220);
{
F->access_2224 = rt_str_copy(f_storage_513(&F->qname_2222, F->qt_2221));
f_init_storage_341(&F->access_2224, F->qt_2221, F->c_2220);
(*(P1030)rt_nil_check(F->y_2223)).t = F->qt_2221;
(*(P1030)rt_nil_check(F->y_2223)).c = F->c_2220;
f_bind_516(F->y_2223, &F->access_2224);
f_define_168(F->y_2223, rt_r_ichk((*(P1020)rt_nil_check(F->inv_2218)).line));
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_wait_op_669(F->inv_2218, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REQUEST", 7); b_; }), &F->qname_2222, 1), rt_str(";", 1)); b_; }));
F->tests_2216 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->tests_2216))->all), rt_str("if (", 4)), f_wait_op_669(F->inv_2218, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TEST", 4); b_; }), &F->qname_2222, 0)), rt_str(") { ", 4)), f_wait_op_669(F->inv_2218, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("COMPLETE", 8); b_; }), &F->qname_2222, 1)), rt_str("; ", 2)), (*F->w_672)), rt_str(" = ", 3)), f_itos_7(rt_r_ichk(F->i_2215))), rt_str("; break; } ", 11)); b_; }));
F->revokes_2217 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->revokes_2217))->all), f_wait_op_669(F->inv_2218, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("REVOKE", 6); b_; }), &F->qname_2222, 1)), rt_str("; ", 2)); b_; }));
}
F->i_2215 = rt_add(rt_r_ichk(F->i_2215), ((rt_int)1LL));
F->inv_2218 = (*(P1020)rt_nil_check(F->inv_2218)).next;
}
F->a_2214 = (*(P1020)rt_nil_check(F->a_2214)).next;
}
f_close_scope_178();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("int ", 4), (*F->w_672)), rt_str(" = -1;", 6)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("for (;;) { rt_sync_reset(); ", 28), (((P1013)rt_nil_check(F->tests_2216))->all)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((*F->w_672), rt_str(" = rt_wait_poll(", 16)), f_itos_7(F->n_673)), rt_str(", ", 2)), (*F->arr_671)), rt_str("); if (", 7)), (*F->w_672)), rt_str(" >= 0) break;", 13)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_wait_arm(", 12), f_itos_7(F->n_673)), rt_str(", ", 2)), (*F->arr_671)), rt_str("); rt_sync_wait(); ", 19)), (*F->w_672)), rt_str(" = rt_wait_disarm(); if (", 25)), (*F->w_672)), rt_str(" >= 0) break; }", 15)); b_; }));
f_emit_29(&(((P1013)rt_nil_check(F->revokes_2217))->all));
ret_:
  RT_FPOP();
  return;
}

static void f_st_wait_676(P1020 s_675) {
  struct f_st_wait_676fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_675 = s_675;
F->a_2225 = NULL;
F->a_2225 = (*(P1020)rt_nil_check(F->s_675)).a;
F->n_2226 = RT_R_IUNDEF;
F->n_2226 = ((rt_int)0LL);
F->first_2227 = RT_R_EUNDEF;
F->first_2227 = 1;
F->inits_2228 = NULL;
F->inits_2228 = f_new_buffer_24();
F->user_2229 = RT_R_EUNDEF;
F->user_2229 = 0;
F->arr_2230 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("alts", 4); b_; })));
F->w_2231 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("w", 1); b_; })));
while ((F->a_2225 != NULL)) {
F->inv_2232 = NULL;
F->inv_2232 = (*(P1020)rt_nil_check(F->a_2225)).a;
F->n_2226 = rt_add(rt_r_ichk(F->n_2226), f_list_len_71((*(P1020)rt_nil_check(F->a_2225)).a));
while ((F->inv_2232 != NULL)) {
if ((!f_builtin_wait_664(F->inv_2232))) {
F->user_2229 = 1;
}
F->inv_2232 = (*(P1020)rt_nil_check(F->inv_2232)).next;
}
F->a_2225 = (*(P1020)rt_nil_check(F->a_2225)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_alt ", 9), F->arr_2230), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->n_2226))), rt_str("];", 2)); b_; }));
if (rt_r_echk(F->user_2229)) {
f_user_wait_674(F->s_675, &F->arr_2230, &F->w_2231, rt_r_ichk(F->n_2226));
} else {
F->a_2225 = (*(P1020)rt_nil_check(F->s_675)).a;
F->n_2226 = ((rt_int)0LL);
while ((F->a_2225 != NULL)) {
F->inv_2233 = NULL;
F->inv_2233 = (*(P1020)rt_nil_check(F->a_2225)).a;
while ((F->inv_2233 != NULL)) {
f_put_27(F->inits_2228, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_wait_alt_662(F->inv_2233, &F->arr_2230, rt_r_ichk(F->n_2226), 0); b_; }));
F->n_2226 = rt_add(rt_r_ichk(F->n_2226), ((rt_int)1LL));
F->inv_2233 = (*(P1020)rt_nil_check(F->inv_2233)).next;
}
F->a_2225 = (*(P1020)rt_nil_check(F->a_2225)).next;
}
f_splice_34(g_code_1074, F->inits_2228);
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("int ", 4), F->w_2231), rt_str(" = rt_wait(", 11)), f_itos_7(rt_r_ichk(F->n_2226))), rt_str(", ", 2)), F->arr_2230), rt_str(");", 2)); b_; }));
}
F->a_2225 = (*(P1020)rt_nil_check(F->s_675)).a;
F->n_2226 = ((rt_int)0LL);
while ((F->a_2225 != NULL)) {
F->conds_2234 = NULL;
F->conds_2234 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
{ rt_int lo2236 = ((rt_int)1LL), hi2237 = f_list_len_71((*(P1020)rt_nil_check(F->a_2225)).a);
for (rt_int it2238 = lo2236; it2238 <= hi2237; it2238++) {
F->i_2235 = it2238;
F->conds_2234 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->conds_2234))->all), rt_str(" || ", 4)), F->w_2231), rt_str(" == ", 4)), f_itos_7(rt_r_ichk(F->n_2226))); b_; }));
F->n_2226 = rt_add(rt_r_ichk(F->n_2226), ((rt_int)1LL));
}
}
if (rt_r_echk(F->first_2227)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (", 4), (((P1013)rt_nil_check(F->conds_2234))->all)), rt_str(") {", 3)); b_; }));
} else {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("} else if (", 11), (((P1013)rt_nil_check(F->conds_2234))->all)), rt_str(") {", 3)); b_; }));
}
F->first_2227 = 0;
f_gen_body_591((*(P1020)rt_nil_check(F->a_2225)).b);
F->a_2225 = (*(P1020)rt_nil_check(F->a_2225)).next;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1020 f_call_node_680(rstr *name_677, P1020 arg_678, rt_int line_679) {
  struct f_call_node_680fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_677 = name_677;
F->arg_678 = arg_678;
F->line_679 = line_679;
F->x_2239 = NULL;
F->x_2239 = f_nn_65((((rt_int)10LL)), F->line_679);
F->f_2240 = NULL;
F->f_2240 = f_nn_65((((rt_int)7LL)), F->line_679);
(*(P1020)rt_nil_check(F->f_2240)).name = f_mk_3(&(*F->name_677));
(*(P1020)rt_nil_check(F->x_2239)).a = F->f_2240;
(*(P1020)rt_nil_check(F->x_2239)).b = f_copy_node_833(F->arg_678);
(*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->x_2239)).b)).next = NULL;
F->result_ = F->x_2239;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_user_region_682(P1020 s_681) {
  struct f_user_region_682fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_681 = s_681;
F->t_2241 = NULL;
F->f_2242 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
F->lock_2243 = rt_str_copy(f_gcall_942(f_call_node_680(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LOCK", 4); b_; }), (*(P1020)rt_nil_check(F->s_681)).a, rt_r_ichk((*(P1020)rt_nil_check(F->s_681)).line)), 1, &F->t_2241));
F->unlock_2244 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str("{ int cr_ = rt_critical_save(); ", 32), f_gcall_942(f_call_node_680(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("UNLOCK", 6); b_; }), (*(P1020)rt_nil_check(F->s_681)).a, rt_r_ichk((*(P1020)rt_nil_check(F->s_681)).line)), 1, &F->t_2241)), rt_str("; rt_critical_restore(cr_); }", 29)));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("{ { int cr_ = rt_critical_save(); ", 34), F->lock_2243), rt_str("; rt_critical_restore(cr_); }", 29)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2242), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2242), rt_str(")) {", 4)); b_; }));
f_push_cleanup_599(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2242), rt_str("); ", 3)), F->unlock_2244); b_; }));
f_gen_body_591((*(P1020)rt_nil_check(F->s_681)).b);
f_pop_cleanup_600();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2242), rt_str("); ", 3)), F->unlock_2244); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2242), rt_str("); ", 3)), F->unlock_2244), rt_str(" rt_raise(rt_xcur);", 19)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static void f_st_region_684(P1020 s_683) {
  struct f_st_region_684fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_683 = s_683;
F->lv_2245 = NULL;
F->t_2246 = NULL;
F->c_2247 = NULL;
F->ro_2248 = RT_R_EUNDEF;
F->lk_2249 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("lk", 2); b_; })));
F->f_2250 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("xf", 2); b_; })));
f_lvalue_763((*(P1020)rt_nil_check(F->s_683)).a, &F->lv_2245, &F->t_2246, &F->c_2247, &F->ro_2248);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_2246)).kind) != (((rt_int)13LL)))) {
f_user_region_682(F->s_683);
goto ret_;
}
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_lock *", 11), F->lk_2249), rt_str(" = &", 4)), (((P1013)rt_nil_check(F->lv_2245))->all)), rt_str("; rt_region_enter(", 18)), F->lk_2249), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_frame ", 9), F->f_2250), rt_str(";", 1)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("if (RT_TRY(", 11), F->f_2250), rt_str(")) {", 4)); b_; }));
f_push_cleanup_599(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2250), rt_str("); rt_region_leave(", 19)), F->lk_2249), rt_str(");", 2)); b_; }));
f_gen_body_591((*(P1020)rt_nil_check(F->s_683)).b);
f_pop_cleanup_600();
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2250), rt_str("); rt_region_leave(", 19)), F->lk_2249), rt_str(");", 2)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("} else {", 8); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("RT_POP(", 7), F->f_2250), rt_str("); rt_region_leave(", 19)), F->lk_2249), rt_str("); rt_raise(rt_xcur);", 21)); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static P1020 f_gparam_687(P1020 g_685, rstr *name_686) {
  struct f_gparam_687fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_685 = g_685;
F->name_686 = name_686;
F->p_2251 = NULL;
F->p_2251 = (*(P1020)rt_nil_check(F->g_685)).a;
while ((F->p_2251 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2251)).name))->all), (*F->name_686))) {
F->result_ = F->p_2251;
goto ret_;
}
F->p_2251 = (*(P1020)rt_nil_check(F->p_2251)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1030 f_bind_sym_689(P1020 p_688) {
  struct f_bind_sym_689fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->p_688 = p_688;
F->y_2252 = NULL;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->p_688)).ival) <= ((rt_int)2LL))) {
F->y_2252 = f_new_sym_181((((rt_int)5LL)), (*(P1020)rt_nil_check(F->p_688)).name);
} else {
F->y_2252 = f_new_sym_181((((rt_int)2LL)), (*(P1020)rt_nil_check(F->p_688)).name);
}
F->result_ = F->y_2252;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binds_692(P1030 a_690, P1030 b_691) {
  struct f_same_binds_692fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_690 = a_690;
F->b_691 = b_691;
F->x_2253 = NULL;
F->x_2253 = F->a_690;
F->y_2254 = NULL;
F->y_2254 = F->b_691;
while (((F->x_2253 != NULL) && (F->y_2254 != NULL))) {
if (((!rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->x_2253)).name))->all), (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_2254)).name))->all))) || (!f_same_binding_695(F->x_2253, F->y_2254)))) {
F->result_ = 0;
goto ret_;
}
F->x_2253 = (*(P1030)rt_nil_check(F->x_2253)).mnext;
F->y_2254 = (*(P1030)rt_nil_check(F->y_2254)).mnext;
}
F->result_ = ((F->x_2253 == NULL) && (F->y_2254 == NULL));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_same_binding_695(P1030 a_693, P1030 b_694) {
  struct f_same_binding_695fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->a_693 = a_693;
F->b_694 = b_694;
if ((rt_r_ichk((*(P1030)rt_nil_check(F->a_693)).kind) == (((rt_int)5LL)))) {
F->result_ = ((rt_r_ichk((*(P1030)rt_nil_check(F->b_694)).kind) == (((rt_int)5LL))) && f_same_221((*(P1030)rt_nil_check(F->a_693)).t, (*(P1030)rt_nil_check(F->b_694)).t));
goto ret_;
}
if (((rt_r_ichk((*(P1030)rt_nil_check(F->a_693)).kind) == (((rt_int)2LL))) && rt_r_echk((*(P1030)rt_nil_check(F->a_693)).hasmv))) {
F->result_ = (rt_r_echk((*(P1030)rt_nil_check(F->b_694)).hasmv) && (rt_r_ichk((*(P1030)rt_nil_check(F->a_693)).mvalue) == rt_r_ichk((*(P1030)rt_nil_check(F->b_694)).mvalue)));
goto ret_;
}
if (((rt_r_ichk((*(P1030)rt_nil_check(F->a_693)).kind) == (((rt_int)2LL))) && ((*(P1030)rt_nil_check(F->a_693)).mv != NULL))) {
if (((((*(P1030)rt_nil_check(F->b_694)).mv == NULL) || (rt_r_ichk((*(P1039)rt_nil_check((*(P1030)rt_nil_check(F->a_693)).mv)).kind) != rt_r_ichk((*(P1039)rt_nil_check((*(P1030)rt_nil_check(F->b_694)).mv)).kind))) || (!f_same_221((*(P1030)rt_nil_check(F->a_693)).t, (*(P1030)rt_nil_check(F->b_694)).t)))) {
F->result_ = 0;
goto ret_;
} else if ((rt_r_ichk((*(P1039)rt_nil_check((*(P1030)rt_nil_check(F->a_693)).mv)).kind) == (((rt_int)5LL)))) {
F->result_ = rt_str_eq((((P1013)rt_nil_check((*(P1039)rt_nil_check((*(P1030)rt_nil_check(F->a_693)).mv)).s))->all), (((P1013)rt_nil_check((*(P1039)rt_nil_check((*(P1030)rt_nil_check(F->b_694)).mv)).s))->all));
goto ret_;
}
F->result_ = (rt_r_ichk((*(P1039)rt_nil_check((*(P1030)rt_nil_check(F->a_693)).mv)).i) == rt_r_ichk((*(P1039)rt_nil_check((*(P1030)rt_nil_check(F->b_694)).mv)).i));
goto ret_;
}
F->result_ = ((((*(P1030)rt_nil_check(F->a_693)).cname != NULL) && ((*(P1030)rt_nil_check(F->b_694)).cname != NULL)) && rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->a_693)).cname))->all), (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->b_694)).cname))->all)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1030 f_tt_binds_700(P1020 gd_696, P1020 formals_697, P1020 actuals_698, rt_int line_699) {
  struct f_tt_binds_700fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_696 = gd_696;
F->formals_697 = formals_697;
F->actuals_698 = actuals_698;
F->line_699 = line_699;
F->f_2255 = NULL;
F->f_2255 = F->formals_697;
F->a_2256 = NULL;
F->a_2256 = F->actuals_698;
F->binds_2257 = NULL;
F->c_2258 = NULL;
F->at_2259 = NULL;
while (((F->f_2255 != NULL) && (F->a_2256 != NULL))) {
F->p_2260 = NULL;
F->p_2260 = f_gparam_687(F->gd_696, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->f_2255)).name))->all));
F->b_2261 = NULL;
if ((F->p_2260 == NULL)) {
f_fail_23(F->line_699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->f_2255)).name))->all), rt_str(" is not a generic parameter", 27)); b_; }));
}
F->b_2261 = f_bind_sym_689(F->p_2260);
if ((rt_r_ichk((*(P1020)rt_nil_check(F->p_2260)).ival) <= ((rt_int)2LL))) {
if ((rt_r_ichk((*(P1020)rt_nil_check(F->a_2256)).kind) >= (((rt_int)70LL)))) {
(*(P1030)rt_nil_check(F->b_2261)).t = f_resolve_subtype_268(F->a_2256, &F->c_2258);
} else {
F->st_2262 = NULL;
F->st_2262 = f_nn_65((((rt_int)80LL)), F->line_699);
(*(P1020)rt_nil_check(F->st_2262)).name = (*(P1020)rt_nil_check(F->a_2256)).name;
(*(P1030)rt_nil_check(F->b_2261)).t = f_resolve_subtype_268(F->st_2262, &F->c_2258);
}
(*(P1030)rt_nil_check(F->b_2261)).c = F->c_2258;
if ((((*(P1020)rt_nil_check(F->p_2260)).b != NULL) && (!f_type_allowed_704((*(P1030)rt_nil_check(F->b_2261)).t, (*(P1020)rt_nil_check(F->p_2260)).b, F->binds_2257)))) {
f_fail_23(F->line_699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2260)).name))->all)); b_; }));
}
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->p_2260)).ival) <= ((rt_int)5LL))) {
if ((rt_r_ichk((*(P1020)rt_nil_check(F->a_2256)).kind) != (((rt_int)7LL)))) {
f_fail_23(F->line_699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("a procedure, function or task is required for ", 46), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2260)).name))->all)); b_; }));
}
F->b_2261 = f_copy_sym_438(f_pick_operation_715(rt_r_ichk((*(P1020)rt_nil_check(F->p_2260)).ival), &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->a_2256)).name))->all), (*(P1020)rt_nil_check(F->p_2260)).b, (*(P1020)rt_nil_check(F->p_2260)).a, F->binds_2257, F->line_699));
(*(P1030)rt_nil_check(F->b_2261)).name = (*(P1020)rt_nil_check(F->p_2260)).name;
} else if (((rt_r_ichk((*(P1020)rt_nil_check(F->p_2260)).ival) == ((rt_int)7LL)) || (rt_r_ichk((*(P1020)rt_nil_check(F->p_2260)).ival) == ((rt_int)8LL)))) {
F->ok_2263 = RT_R_EUNDEF;
(*(P1030)rt_nil_check(F->b_2261)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_gexpr_794(F->a_2256, NULL, &F->at_2259)), rt_str(")", 1)); b_; }));
(*(P1030)rt_nil_check(F->b_2261)).t = F->at_2259;
if ((((rt_r_ichk((*(P1020)rt_nil_check(F->p_2260)).ival) == ((rt_int)7LL)) && (rt_r_ichk((*(P1026)rt_nil_check(F->at_2259)).kind) != (((rt_int)5LL)))) || ((rt_r_ichk((*(P1020)rt_nil_check(F->p_2260)).ival) == ((rt_int)8LL)) && ((*(P1026)rt_nil_check(f_base_of_223(F->at_2259))).kind != (((rt_int)4LL)))))) {
f_fail_23(F->line_699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2260)).name))->all)), rt_str(" is not of the kind its constraint requires", 43)); b_; }));
}
(*(P1030)rt_nil_check(F->b_2261)).mv = f_meval_375(F->a_2256, &F->ok_2263);
if ((!rt_r_echk(F->ok_2263))) {
f_fail_23(F->line_699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2260)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
if ((rt_r_ichk((*(P1039)rt_nil_check((*(P1030)rt_nil_check(F->b_2261)).mv)).kind) == (((rt_int)4LL)))) {
(*(P1039)rt_nil_check((*(P1030)rt_nil_check(F->b_2261)).mv)).i = f_lit_index_265((*(P1026)rt_nil_check(f_base_of_223(F->at_2259))).lits, &(((P1013)rt_nil_check((*(P1039)rt_nil_check((*(P1030)rt_nil_check(F->b_2261)).mv)).s))->all));
}
} else {
F->ok_2264 = RT_R_EUNDEF;
(*(P1030)rt_nil_check(F->b_2261)).t = f_resolve_subtype_268((*(P1020)rt_nil_check(F->p_2260)).a, &F->c_2258);
(*(P1030)rt_nil_check(F->b_2261)).access = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), f_checked_213((*(P1030)rt_nil_check(F->b_2261)).t, F->c_2258, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_gexpr_794(F->a_2256, (*(P1030)rt_nil_check(F->b_2261)).t, &F->at_2259); b_; }))), rt_str(")", 1)); b_; }));
f_check_type_232(F->at_2259, (*(P1030)rt_nil_check(F->b_2261)).t, F->line_699);
(*(P1030)rt_nil_check(F->b_2261)).mvalue = f_manifest_366(F->a_2256, &F->ok_2264);
(*(P1030)rt_nil_check(F->b_2261)).hasmv = rt_r_echk(F->ok_2264);
(*(P1030)rt_nil_check(F->b_2261)).mv = f_meval_375(F->a_2256, &F->ok_2264);
if ((!rt_r_echk(F->ok_2264))) {
f_fail_23(F->line_699, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the value for ", 14), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2260)).name))->all)), rt_str(" must be manifest", 17)); b_; }));
}
}
(*(P1030)rt_nil_check(F->b_2261)).mnext = F->binds_2257;
F->binds_2257 = F->b_2261;
F->f_2255 = (*(P1020)rt_nil_check(F->f_2255)).next;
F->a_2256 = (*(P1020)rt_nil_check(F->a_2256)).next;
}
F->result_ = F->binds_2257;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_type_allowed_704(P1026 t_701, P1020 items_702, P1030 binds_703) {
  struct f_type_allowed_704fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_701 = t_701;
F->items_702 = items_702;
F->binds_703 = binds_703;
F->it_2265 = NULL;
F->it_2265 = F->items_702;
F->b_2266 = NULL;
F->b_2266 = f_base_of_223(F->t_701);
while ((F->it_2265 != NULL)) {
if ((((rt_r_ichk((*(P1020)rt_nil_check(F->it_2265)).kind) == (((rt_int)80LL))) && ((*(P1020)rt_nil_check(F->it_2265)).b == NULL)) && (f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->it_2265)).name))->all)) == NULL))) {
F->w_2267 = rt_str_copy((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->it_2265)).name))->all));
if (((((((((((rt_str_eq(F->w_2267, rt_str("INT", 3)) && (rt_r_ichk((*(P1026)rt_nil_check(F->b_2266)).kind) == (((rt_int)1LL)))) || (rt_str_eq(F->w_2267, rt_str("FLOAT", 5)) && (rt_r_ichk((*(P1026)rt_nil_check(F->b_2266)).kind) == (((rt_int)3LL))))) || (rt_str_eq(F->w_2267, rt_str("BOOL", 4)) && (rt_r_ichk((*(P1026)rt_nil_check(F->b_2266)).kind) == (((rt_int)2LL))))) || (rt_str_eq(F->w_2267, rt_str("ENUM", 4)) && (rt_r_ichk((*(P1026)rt_nil_check(F->b_2266)).kind) == (((rt_int)4LL))))) || (rt_str_eq(F->w_2267, rt_str("STRING", 6)) && (rt_r_ichk((*(P1026)rt_nil_check(F->b_2266)).kind) == (((rt_int)5LL))))) || (rt_str_eq(F->w_2267, rt_str("ARRAY", 5)) && (rt_r_ichk((*(P1026)rt_nil_check(F->b_2266)).kind) == (((rt_int)6LL))))) || (rt_str_eq(F->w_2267, rt_str("RECORD", 6)) && (rt_r_ichk((*(P1026)rt_nil_check(F->b_2266)).kind) == (((rt_int)7LL))))) || (rt_str_eq(F->w_2267, rt_str("UNION", 5)) && (rt_r_ichk((*(P1026)rt_nil_check(F->b_2266)).kind) == (((rt_int)17LL))))) || (rt_str_eq(F->w_2267, rt_str("SET", 3)) && (rt_r_ichk((*(P1026)rt_nil_check(F->b_2266)).kind) == (((rt_int)16LL))))) || (rt_str_eq(F->w_2267, rt_str("ASCII", 5)) && f_same_221(F->t_701, g_ty_ascii_1107)))) {
F->result_ = 1;
goto ret_;
}
} else {
F->c_2268 = NULL;
if (f_same_221(f_resolve_in_binds_708(F->it_2265, F->binds_703, &F->c_2268), F->t_701)) {
F->result_ = 1;
goto ret_;
}
}
F->it_2265 = (*(P1020)rt_nil_check(F->it_2265)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_resolve_in_binds_708(P1020 st_705, P1030 binds_706, P1022 *c_707) {
  struct f_resolve_in_binds_708fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_705 = st_705;
F->binds_706 = binds_706;
F->c_707 = c_707;
F->c_707v = *F->c_707;
F->b_2269 = NULL;
F->b_2269 = F->binds_706;
F->t_2270 = NULL;
f_open_scope_177();
while ((F->b_2269 != NULL)) {
F->z_2271 = NULL;
F->z_2271 = f_copy_sym_438(F->b_2269);
f_define_168(F->z_2271, rt_r_ichk((*(P1020)rt_nil_check(F->st_705)).line));
F->b_2269 = (*(P1030)rt_nil_check(F->b_2269)).mnext;
}
F->t_2270 = f_resolve_subtype_268(F->st_705, &F->c_707v);
f_close_scope_178();
F->result_ = F->t_2270;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_707) = F->c_707v;
  RT_FPOP();
  return F->result_;
}

static P1030 f_pick_operation_715(rt_int kind_709, rstr *name_710, P1020 sig_711, P1020 res_712, P1030 binds_713, rt_int line_714) {
  struct f_pick_operation_715fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_709 = kind_709;
F->name_710 = name_710;
F->sig_711 = sig_711;
F->res_712 = res_712;
F->binds_713 = binds_713;
F->line_714 = line_714;
F->y_2272 = NULL;
F->c_2273 = NULL;
F->want_2274 = RT_R_IUNDEF;
F->want_2274 = (((rt_int)4LL));
if ((F->kind_709 == ((rt_int)4LL))) {
F->want_2274 = (((rt_int)3LL));
} else if ((F->kind_709 == ((rt_int)5LL))) {
F->want_2274 = (((rt_int)9LL));
}
{ rt_int lo2276 = ((rt_int)1LL), hi2277 = ((rt_int)3LL);
for (rt_int it2278 = lo2276; it2278 <= hi2277; it2278++) {
F->pass_2275 = it2278;
F->y_2272 = f_overload_chain_922(&(*F->name_710), F->pass_2275);
while ((F->y_2272 != NULL)) {
if (((rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_2272)).name))->all), (*F->name_710)) && ((rt_r_ichk((*(P1030)rt_nil_check(F->y_2272)).kind) == rt_r_ichk(F->want_2274)) || ((F->kind_709 == ((rt_int)0LL)) && ((rt_r_ichk((*(P1030)rt_nil_check(F->y_2272)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_2272)).kind) == (((rt_int)3LL))))))) && ((F->pass_2275 != ((rt_int)1LL)) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_2272)).depth) >= rt_r_ichk(g_gdepth_1093))))) {
F->ok_2279 = RT_R_EUNDEF;
F->ok_2279 = 1;
if (((F->sig_711 != NULL) || (F->kind_709 == ((rt_int)0LL)))) {
F->s_2280 = NULL;
F->s_2280 = F->sig_711;
F->pm_2281 = NULL;
F->pm_2281 = (*(P1030)rt_nil_check(F->y_2272)).params;
while (((rt_r_echk(F->ok_2279) && (F->s_2280 != NULL)) && (F->pm_2281 != NULL))) {
F->ok_2279 = f_same_221(f_resolve_in_binds_708(F->s_2280, F->binds_713, &F->c_2273), (*(P1032)rt_nil_check(F->pm_2281)).t);
F->s_2280 = (*(P1020)rt_nil_check(F->s_2280)).next;
F->pm_2281 = (*(P1032)rt_nil_check(F->pm_2281)).next;
}
F->ok_2279 = ((rt_r_echk(F->ok_2279) && (F->s_2280 == NULL)) && (F->pm_2281 == NULL));
}
if ((rt_r_echk(F->ok_2279) && (F->res_712 != NULL))) {
F->ok_2279 = ((rt_r_ichk((*(P1030)rt_nil_check(F->y_2272)).kind) == (((rt_int)3LL))) && f_same_221(f_resolve_in_binds_708(F->res_712, F->binds_713, &F->c_2273), (*(P1030)rt_nil_check(F->y_2272)).result));
}
if (rt_r_echk(F->ok_2279)) {
F->result_ = F->y_2272;
goto ret_;
}
}
F->y_2272 = (*(P1030)rt_nil_check(F->y_2272)).chain;
}
}
}
f_fail_23(F->line_714, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str("no ", 3), f_kind_word_717(F->kind_709)), (*F->name_710)), rt_str(" has the interface the generic requires", 39)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_kind_word_717(rt_int kind_716) {
  struct f_kind_word_717fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->kind_716 = kind_716;
if ((F->kind_716 == ((rt_int)3LL))) {
F->result_ = rt_str("procedure ", 10);
goto ret_;
} else if ((F->kind_716 == ((rt_int)4LL))) {
F->result_ = rt_str("function ", 9);
goto ret_;
} else if ((F->kind_716 == ((rt_int)5LL))) {
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

static P1030 f_need_binds_721(P1020 gd_718, P1030 binds_719, rt_int line_720) {
  struct f_need_binds_721fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_718 = gd_718;
F->binds_719 = binds_719;
F->line_720 = line_720;
F->it_2282 = NULL;
F->it_2282 = (*(P1020)rt_nil_check(F->gd_718)).d;
F->r_2283 = NULL;
F->r_2283 = F->binds_719;
while ((F->it_2282 != NULL)) {
F->found_2284 = RT_R_EUNDEF;
F->found_2284 = 0;
F->y_2285 = NULL;
F->y_2285 = ({ A1036 b_ = (((P1034)rt_nil_check(g_table_1060))->all); b_.p[(rt_index(f_hash_161(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->it_2282)).name))->all)), b_.lo, b_.hi) - b_.lo)]; });
while (((F->y_2285 != NULL) && (!rt_r_echk(F->found_2284)))) {
if ((rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_2285)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->it_2282)).name))->all)) && (((rt_r_ichk((*(P1030)rt_nil_check(F->y_2285)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_2285)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_2285)).kind) == (((rt_int)9LL)))))) {
F->found_2284 = 1;
}
F->y_2285 = (*(P1030)rt_nil_check(F->y_2285)).chain;
}
if (rt_r_echk(F->found_2284)) {
F->z_2286 = NULL;
F->z_2286 = f_copy_sym_438(f_pick_operation_715(rt_r_ichk((*(P1020)rt_nil_check(F->it_2282)).ival), &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->it_2282)).name))->all), (*(P1020)rt_nil_check(F->it_2282)).b, (*(P1020)rt_nil_check(F->it_2282)).a, F->r_2283, F->line_720));
(*(P1030)rt_nil_check(F->z_2286)).mnext = F->r_2283;
F->r_2283 = F->z_2286;
} else if ((!f_is_definable_138(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->it_2282)).name))->all)))) {
f_fail_23(F->line_720, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the generic needs ", 18), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->it_2282)).name))->all)), rt_str(", which is not known where it is invoked", 40)); b_; }));
}
F->it_2282 = (*(P1020)rt_nil_check(F->it_2282)).next;
}
F->result_ = F->r_2283;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_generic_use_723(P1020 st_722) {
  struct f_generic_use_723fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_722 = st_722;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->st_722)).kind) == (((rt_int)78LL)))) {
F->result_ = ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })) != NULL) && ((*(P1030)rt_nil_check(f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("MAILBOX", 7); b_; })))).kind == (((rt_int)10LL))));
goto ret_;
}
F->result_ = ((((rt_r_ichk((*(P1020)rt_nil_check(F->st_722)).kind) == (((rt_int)80LL))) && ((*(P1020)rt_nil_check(F->st_722)).a != NULL)) && (f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->st_722)).name))->all)) != NULL)) && ((*(P1030)rt_nil_check(f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->st_722)).name))->all)))).kind == (((rt_int)10LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1030 f_infer_from_728(P1020 gd_724, P1020 pat_725, P1026 t_726, P1030 known_727) {
  struct f_infer_from_728fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_724 = gd_724;
F->pat_725 = pat_725;
F->t_726 = t_726;
F->known_727 = known_727;
F->binds_2287 = NULL;
F->binds_2287 = F->known_727;
F->e_2288 = NULL;
F->e_2288 = (*(P1020)rt_nil_check(F->pat_725)).a;
F->tp_2289 = NULL;
if (((F->t_726 == NULL) || ((*(P1026)rt_nil_check(F->t_726)).gen == NULL))) {
F->result_ = F->binds_2287;
goto ret_;
}
F->tp_2289 = (*(P1020)rt_nil_check((*(P1030)rt_nil_check((*(P1026)rt_nil_check(F->t_726)).gen)).decl)).a;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->pat_725)).kind) == (((rt_int)78LL)))) {
F->e_2288 = f_copy_node_833((*(P1020)rt_nil_check(F->pat_725)).a);
(*(P1020)rt_nil_check(F->e_2288)).next = NULL;
}
while (((F->e_2288 != NULL) && (F->tp_2289 != NULL))) {
F->nm_2290 = NULL;
if (((rt_r_ichk((*(P1020)rt_nil_check(F->e_2288)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1020)rt_nil_check(F->e_2288)).kind) == (((rt_int)80LL))))) {
F->nm_2290 = (*(P1020)rt_nil_check(F->e_2288)).name;
}
if ((((F->nm_2290 != NULL) && (f_gparam_687(F->gd_724, &(((P1013)rt_nil_check(F->nm_2290))->all)) != NULL)) && ((*(P1020)rt_nil_check(f_gparam_687(F->gd_724, &(((P1013)rt_nil_check(F->nm_2290))->all)))).ival <= ((rt_int)2LL)))) {
F->q_2291 = NULL;
F->q_2291 = F->binds_2287;
F->have_2292 = RT_R_EUNDEF;
F->have_2292 = 0;
while ((F->q_2291 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->q_2291)).name))->all), (((P1013)rt_nil_check(F->nm_2290))->all))) {
F->have_2292 = 1;
}
F->q_2291 = (*(P1030)rt_nil_check(F->q_2291)).mnext;
}
if ((!rt_r_echk(F->have_2292))) {
F->g_2293 = NULL;
F->g_2293 = (*(P1026)rt_nil_check(F->t_726)).gbinds;
while ((F->g_2293 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->g_2293)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->tp_2289)).name))->all))) {
F->b_2294 = NULL;
F->b_2294 = f_bind_sym_689(f_gparam_687(F->gd_724, &(((P1013)rt_nil_check(F->nm_2290))->all)));
(*(P1030)rt_nil_check(F->b_2294)).t = (*(P1030)rt_nil_check(F->g_2293)).t;
(*(P1030)rt_nil_check(F->b_2294)).c = (*(P1030)rt_nil_check(F->g_2293)).c;
(*(P1030)rt_nil_check(F->b_2294)).mnext = F->binds_2287;
F->binds_2287 = F->b_2294;
}
F->g_2293 = (*(P1030)rt_nil_check(F->g_2293)).mnext;
}
}
}
F->e_2288 = (*(P1020)rt_nil_check(F->e_2288)).next;
F->tp_2289 = (*(P1020)rt_nil_check(F->tp_2289)).next;
}
F->result_ = F->binds_2287;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_instantiate_type_734(P1030 g_729, P1020 tt_730, P1020 args_731, P1022 *c_732, rt_int line_733) {
  struct f_instantiate_type_734fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_729 = g_729;
F->tt_730 = tt_730;
F->args_731 = args_731;
F->c_732 = c_732;
F->c_732v = *F->c_732;
F->line_733 = line_733;
F->gd_2295 = NULL;
F->gd_2295 = (*(P1030)rt_nil_check(F->g_729)).decl;
F->pat_2296 = NULL;
F->pat_2296 = (*(P1020)rt_nil_check(F->gd_2295)).b;
F->binds_2297 = NULL;
F->binds_2297 = f_tt_binds_700(F->gd_2295, (*(P1020)rt_nil_check(F->pat_2296)).e, F->tt_730, F->line_733);
F->inst_2298 = NULL;
F->inst_2298 = g_all_insts_1062;
F->t_2299 = NULL;
F->saved_caps_2300 = NULL;
F->saved_caps_2300 = g_caps_1079;
F->saved_env_2301 = NULL;
F->saved_env_2301 = g_genv_1061;
F->saved_gdepth_2302 = RT_R_IUNDEF;
F->saved_gdepth_2302 = rt_r_ichk(g_gdepth_1093);
F->c_732v = f_new_cons_184();
(*(P1022)rt_nil_check(F->c_732v)).args = F->args_731;
while ((F->inst_2298 != NULL)) {
if ((((*(P1030)rt_nil_check(F->inst_2298)).decl == F->pat_2296) && f_same_binds_692((*(P1030)rt_nil_check(F->inst_2298)).members, F->binds_2297))) {
F->result_ = (*(P1030)rt_nil_check(F->inst_2298)).t;
goto ret_;
}
F->inst_2298 = (*(P1030)rt_nil_check(F->inst_2298)).insts;
}
f_open_scope_177();
{
F->b_2303 = NULL;
F->b_2303 = F->binds_2297;
while ((F->b_2303 != NULL)) {
f_define_168(F->b_2303, F->line_733);
F->b_2303 = (*(P1030)rt_nil_check(F->b_2303)).mnext;
}
}
g_caps_1079 = NULL;
g_genv_1061 = (*(P1030)rt_nil_check(F->g_729)).env;
g_gdepth_1093 = rt_r_ichk(g_depth_1063);
{
F->y_2304 = NULL;
F->y_2304 = f_new_sym_181((((rt_int)5LL)), (*(P1020)rt_nil_check(F->pat_2296)).name);
F->yc_2305 = NULL;
(*(P1030)rt_nil_check(F->y_2304)).decl = F->pat_2296;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->pat_2296)).kind) == (((rt_int)44LL)))) {
F->t_2299 = f_new_typ_183((((rt_int)8LL)));
(*(P1026)rt_nil_check(F->t_2299)).name = (*(P1020)rt_nil_check(F->pat_2296)).name;
(*(P1026)rt_nil_check(F->t_2299)).decl = F->pat_2296;
(*(P1030)rt_nil_check(F->y_2304)).t = F->t_2299;
f_define_168(F->y_2304, F->line_733);
f_finish_ptr_469(F->t_2299);
} else {
f_define_168(F->y_2304, F->line_733);
F->t_2299 = f_new_type_318(F->y_2304, f_nn_65((((rt_int)80LL)), F->line_733), &F->yc_2305);
}
}
g_caps_1079 = F->saved_caps_2300;
g_genv_1061 = F->saved_env_2301;
g_gdepth_1093 = rt_r_ichk(F->saved_gdepth_2302);
(*(P1026)rt_nil_check(F->t_2299)).gen = F->g_729;
(*(P1026)rt_nil_check(F->t_2299)).gbinds = F->binds_2297;
f_close_scope_178();
{ R1031 *cell2306 = rt_alloc(sizeof(R1031));
(*cell2306).name = NULL;
(*cell2306).t = NULL;
(*cell2306).c = NULL;
(*cell2306).access = NULL;
(*cell2306).cname = NULL;
(*cell2306).st = NULL;
(*cell2306).decl = NULL;
(*cell2306).params = NULL;
(*cell2306).result = NULL;
(*cell2306).members = NULL;
(*cell2306).mnext = NULL;
(*cell2306).binds = NULL;
(*cell2306).insts = NULL;
(*cell2306).env = NULL;
(*cell2306).chain = NULL;
(*cell2306).stack = NULL;
(*cell2306).owner = NULL;
(*cell2306).gctx = NULL;
(*cell2306).mv = NULL;
(*cell2306).reqs = NULL;
(*cell2306).home = NULL;
(*cell2306).capn = NULL;
(*cell2306).tbinds = NULL;
(*cell2306).loc = NULL;
(*cell2306).reqs_sym = NULL;
F->inst_2298 = cell2306;
}
(*(P1030)rt_nil_check(F->inst_2298)).kind = (((rt_int)5LL));
(*(P1030)rt_nil_check(F->inst_2298)).name = (*(P1030)rt_nil_check(F->g_729)).name;
(*(P1030)rt_nil_check(F->inst_2298)).decl = F->pat_2296;
(*(P1030)rt_nil_check(F->inst_2298)).t = F->t_2299;
(*(P1030)rt_nil_check(F->inst_2298)).members = F->binds_2297;
(*(P1030)rt_nil_check(F->inst_2298)).insts = g_all_insts_1062;
g_all_insts_1062 = F->inst_2298;
F->result_ = F->t_2299;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->c_732) = F->c_732v;
  RT_FPOP();
  return F->result_;
}

static P1030 f_instantiate_739(P1030 g_735, P1020 tt_736, P1020 args_737, rt_int line_738) {
  struct f_instantiate_739fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->g_735 = g_735;
F->tt_736 = tt_736;
F->args_737 = args_737;
F->line_738 = line_738;
F->gd_2307 = NULL;
F->gd_2307 = (*(P1030)rt_nil_check(F->g_735)).decl;
F->pat_2308 = NULL;
F->pat_2308 = (*(P1020)rt_nil_check(F->gd_2307)).b;
F->binds_2309 = NULL;
F->f_2310 = NULL;
F->f_2310 = (*(P1020)rt_nil_check(F->pat_2308)).e;
F->a_2311 = NULL;
F->a_2311 = F->tt_736;
F->fp_2312 = NULL;
F->fp_2312 = (*(P1020)rt_nil_check(F->pat_2308)).a;
F->inst_2313 = NULL;
F->at_2314 = NULL;
F->c_2315 = NULL;
F->saved_fctx_2316 = NULL;
F->saved_fctx_2316 = g_fctx_1078;
F->saved_in_2317 = RT_R_EUNDEF;
F->saved_in_2317 = rt_r_echk(g_in_func_1076);
F->saved_level_2318 = RT_R_IUNDEF;
F->saved_level_2318 = rt_r_ichk(g_cur_level_1077);
F->saved_sym_2319 = NULL;
F->saved_sym_2319 = g_func_sym_1088;
F->saved_code_2320 = NULL;
F->saved_code_2320 = g_code_1074;
F->saved_env_2321 = NULL;
F->saved_env_2321 = g_genv_1061;
F->saved_gdepth_2322 = RT_R_IUNDEF;
F->saved_gdepth_2322 = rt_r_ichk(g_gdepth_1093);
F->binds_2309 = f_tt_binds_700(F->gd_2307, F->f_2310, F->a_2311, F->line_738);
F->a_2311 = F->args_737;
while (((F->fp_2312 != NULL) && (F->a_2311 != NULL))) {
if (f_generic_use_723((*(P1020)rt_nil_check(F->fp_2312)).a)) {
F->v_2323 = rt_str_copy(f_gexpr_794(F->a_2311, NULL, &F->at_2314));
F->binds_2309 = f_infer_from_728(F->gd_2307, (*(P1020)rt_nil_check(F->fp_2312)).a, F->at_2314, F->binds_2309);
} else if ((((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->fp_2312)).a)).kind) == (((rt_int)80LL))) && (f_gparam_687(F->gd_2307, &(((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->fp_2312)).a)).name))->all)) != NULL)) && ((*(P1020)rt_nil_check(f_gparam_687(F->gd_2307, &(((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->fp_2312)).a)).name))->all)))).ival <= ((rt_int)2LL)))) {
F->known_2324 = RT_R_EUNDEF;
F->known_2324 = 0;
F->q_2325 = NULL;
F->q_2325 = F->binds_2309;
while ((F->q_2325 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->q_2325)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->fp_2312)).a)).name))->all))) {
F->known_2324 = 1;
}
F->q_2325 = (*(P1030)rt_nil_check(F->q_2325)).mnext;
}
if ((!rt_r_echk(F->known_2324))) {
F->b_2326 = NULL;
F->b_2326 = f_bind_sym_689(f_gparam_687(F->gd_2307, &(((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->fp_2312)).a)).name))->all)));
F->v_2327 = rt_str_copy(f_gexpr_794(F->a_2311, NULL, &F->at_2314));
(*(P1030)rt_nil_check(F->b_2326)).t = F->at_2314;
(*(P1030)rt_nil_check(F->b_2326)).c = g_no_cons_1122;
if ((((*(P1020)rt_nil_check(f_gparam_687(F->gd_2307, &(((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->fp_2312)).a)).name))->all)))).b != NULL) && (!f_type_allowed_704(F->at_2314, (*(P1020)rt_nil_check(f_gparam_687(F->gd_2307, &(((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->fp_2312)).a)).name))->all)))).b, F->binds_2309)))) {
f_fail_23(F->line_738, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("this type is not allowed for the generic parameter ", 51), (((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->fp_2312)).a)).name))->all)); b_; }));
}
(*(P1030)rt_nil_check(F->b_2326)).mnext = F->binds_2309;
F->binds_2309 = F->b_2326;
}
}
F->fp_2312 = (*(P1020)rt_nil_check(F->fp_2312)).next;
F->a_2311 = (*(P1020)rt_nil_check(F->a_2311)).next;
}
F->binds_2309 = f_need_binds_721(F->gd_2307, F->binds_2309, F->line_738);
F->inst_2313 = g_all_insts_1062;
while ((F->inst_2313 != NULL)) {
if ((((*(P1030)rt_nil_check(F->inst_2313)).decl == F->pat_2308) && f_same_binds_692((*(P1030)rt_nil_check(F->inst_2313)).members, F->binds_2309))) {
F->result_ = F->inst_2313;
goto ret_;
}
F->inst_2313 = (*(P1030)rt_nil_check(F->inst_2313)).insts;
}
g_fctx_1078 = (*(P1030)rt_nil_check(F->g_735)).gctx;
g_in_func_1076 = (rt_r_ichk((*(P1030)rt_nil_check(F->g_735)).level) > ((rt_int)0LL));
g_cur_level_1077 = rt_r_ichk((*(P1030)rt_nil_check(F->g_735)).level);
g_func_sym_1088 = (*(P1030)rt_nil_check(F->g_735)).owner;
g_code_1074 = f_new_buffer_24();
f_open_scope_177();
g_gdepth_1093 = rt_r_ichk(g_depth_1063);
{
F->b_2328 = NULL;
F->b_2328 = F->binds_2309;
while ((F->b_2328 != NULL)) {
f_define_168(F->b_2328, F->line_738);
F->b_2328 = (*(P1030)rt_nil_check(F->b_2328)).mnext;
}
}
g_genv_1061 = (*(P1030)rt_nil_check(F->g_735)).env;
F->inst_2313 = f_build_subprogram_499(F->pat_2308);
(*(P1030)rt_nil_check(F->inst_2313)).members = F->binds_2309;
(*(P1030)rt_nil_check(F->inst_2313)).insts = g_all_insts_1062;
g_all_insts_1062 = F->inst_2313;
f_define_168(F->inst_2313, F->line_738);
f_gen_subprogram_570(F->pat_2308, F->inst_2313);
f_close_scope_178();
g_fctx_1078 = F->saved_fctx_2316;
g_in_func_1076 = rt_r_echk(F->saved_in_2317);
g_cur_level_1077 = rt_r_ichk(F->saved_level_2318);
g_func_sym_1088 = F->saved_sym_2319;
g_code_1074 = F->saved_code_2320;
g_genv_1061 = F->saved_env_2321;
g_gdepth_1093 = rt_r_ichk(F->saved_gdepth_2322);
F->result_ = F->inst_2313;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_access_of_741(P1030 y_740) {
  struct f_access_of_741fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_740 = y_740;
F->p_2329 = NULL;
F->p_2329 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
if ((rt_r_ichk((*(P1030)rt_nil_check(F->y_740)).level) <= ((rt_int)0LL))) {
F->result_ = (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_740)).access))->all);
goto ret_;
}
{ rt_int lo2331 = ((rt_int)1LL), hi2332 = rt_sub(rt_r_ichk(g_cur_level_1077), rt_r_ichk((*(P1030)rt_nil_check(F->y_740)).level));
for (rt_int it2333 = lo2331; it2333 <= hi2332; it2333++) {
F->i_2330 = it2333;
F->p_2329 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->p_2329))->all), rt_str("->up", 4)); b_; }));
}
}
if (rt_r_echk((*(P1030)rt_nil_check(F->y_740)).byref)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*", 2), (((P1013)rt_nil_check(F->p_2329))->all)), rt_str("->", 2)), (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_740)).access))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->p_2329))->all), rt_str("->", 2)), (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_740)).access))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_import_of_744(P1020 l_742, rstr *name_743) {
  struct f_import_of_744fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_742 = l_742;
F->name_743 = name_743;
F->p_2334 = NULL;
F->p_2334 = F->l_742;
while ((F->p_2334 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2334)).name))->all), (*F->name_743))) {
F->result_ = F->p_2334;
goto ret_;
}
F->p_2334 = (*(P1020)rt_nil_check(F->p_2334)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_check_import_747(P1030 y_745, rt_int line_746) {
  struct f_check_import_747fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_745 = y_745;
F->line_746 = line_746;
F->c_2335 = NULL;
F->c_2335 = g_fctx_1078;
F->ro_2336 = RT_R_EUNDEF;
F->ro_2336 = 0;
while (((F->c_2335 != NULL) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_745)).depth) < rt_r_ichk((*(P1037)rt_nil_check(F->c_2335)).depth)))) {
if ((!rt_r_echk((*(P1037)rt_nil_check(F->c_2335)).all_imp))) {
F->imp_2337 = NULL;
F->imp_2337 = f_import_of_744((*(P1037)rt_nil_check(F->c_2335)).imps, &(((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_745)).name))->all));
if ((F->imp_2337 == NULL)) {
f_fail_23(F->line_746, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_745)).name))->all), rt_str(" is a variable of an enclosing scope and is not imported", 56)); b_; }));
}
if ((rt_r_ichk((*(P1020)rt_nil_check(F->imp_2337)).ival) == ((rt_int)1LL))) {
F->ro_2336 = 1;
}
}
F->c_2335 = (*(P1037)rt_nil_check(F->c_2335)).next;
}
F->result_ = rt_r_echk(F->ro_2336);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_ident_749(rstr *s_748) {
  struct f_c_ident_749fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_748 = s_748;
if (((((rt_int)(((*F->s_748)).len)) > ((rt_int)1LL)) && (rt_r_echk(rt_str_get((*F->s_748), ((rt_int)1LL))) == 46))) {
F->result_ = rt_str_cat(rt_str("dot_", 4), f_lower_s_15(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_slice((*F->s_748), ((rt_int)2LL), ((rt_int)(((*F->s_748)).len))); b_; })));
goto ret_;
} else if (((((rt_int)(((*F->s_748)).len)) > ((rt_int)1LL)) && (rt_r_echk(rt_str_get((*F->s_748), ((rt_int)1LL))) == 40))) {
F->r_2338 = NULL;
F->r_2338 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sel_", 4); b_; }));
{ rt_int lo2340 = ((rt_int)2LL), hi2341 = rt_sub(((rt_int)(((*F->s_748)).len)), ((rt_int)1LL));
for (rt_int it2342 = lo2340; it2342 <= hi2341; it2342++) {
F->i_2339 = it2342;
if ((rt_r_echk(rt_str_get((*F->s_748), F->i_2339)) == 42)) {
F->r_2338 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_2338))->all), rt_str("s", 1)); b_; }));
} else if ((rt_r_echk(rt_str_get((*F->s_748), F->i_2339)) == 44)) {
F->r_2338 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_2338))->all), rt_str("_", 1)); b_; }));
} else if ((rt_r_echk(rt_str_get((*F->s_748), F->i_2339)) == 46)) {
F->r_2338 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_2338))->all), rt_str("r", 1)); b_; }));
}
}
}
F->result_ = (((P1013)rt_nil_check(F->r_2338))->all);
goto ret_;
} else if (rt_str_eq((*F->s_748), rt_str("+", 1))) {
F->result_ = rt_str("op_plus", 7);
goto ret_;
} else if (rt_str_eq((*F->s_748), rt_str("-", 1))) {
F->result_ = rt_str("op_minus", 8);
goto ret_;
} else if (rt_str_eq((*F->s_748), rt_str("*", 1))) {
F->result_ = rt_str("op_times", 8);
goto ret_;
} else if (rt_str_eq((*F->s_748), rt_str("/", 1))) {
F->result_ = rt_str("op_slash", 8);
goto ret_;
} else if (rt_str_eq((*F->s_748), rt_str("**", 2))) {
F->result_ = rt_str("op_power", 8);
goto ret_;
} else if (rt_str_eq((*F->s_748), rt_str("&", 1))) {
F->result_ = rt_str("op_cat", 6);
goto ret_;
} else if (rt_str_eq((*F->s_748), rt_str("=", 1))) {
F->result_ = rt_str("op_eq", 5);
goto ret_;
} else if (rt_str_eq((*F->s_748), rt_str("/=", 2))) {
F->result_ = rt_str("op_ne", 5);
goto ret_;
} else if (rt_str_eq((*F->s_748), rt_str("<", 1))) {
F->result_ = rt_str("op_lt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_748), rt_str("<=", 2))) {
F->result_ = rt_str("op_le", 5);
goto ret_;
} else if (rt_str_eq((*F->s_748), rt_str(">", 1))) {
F->result_ = rt_str("op_gt", 5);
goto ret_;
} else if (rt_str_eq((*F->s_748), rt_str(">=", 2))) {
F->result_ = rt_str("op_ge", 5);
goto ret_;
} else if (rt_str_eq((*F->s_748), rt_str(":=", 2))) {
F->result_ = rt_str("op_assign", 9);
goto ret_;
} else if (rt_str_eq((*F->s_748), rt_str("#", 1))) {
F->result_ = rt_str("op_resolve", 10);
goto ret_;
}
F->result_ = f_lower_s_15(&(*F->s_748));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_cell_deref_752(P1026 t_750, rstr *p_751) {
  struct f_cell_deref_752fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_750 = t_750;
F->p_751 = p_751;
if ((((*(P1026)rt_nil_check(F->t_750)).decl != NULL) && ((*(P1020)rt_nil_check((*(P1026)rt_nil_check(F->t_750)).decl)).b != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->p_751)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(*", 2), (*F->p_751)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_deref_755(rstr *base_753, P1026 t_754) {
  struct f_deref_755fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_753 = base_753;
F->t_754 = t_754;
if ((((*(P1026)rt_nil_check(F->t_754)).decl != NULL) && ((*(P1020)rt_nil_check((*(P1026)rt_nil_check(F->t_754)).decl)).b != NULL))) {
if (f_suppressed_506(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((", 2), (*F->base_753)), rt_str(")->all)", 7));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_234(F->t_754)), rt_str(")rt_nil_check(", 14)), (*F->base_753)), rt_str("))->all)", 8));
goto ret_;
}
if (f_suppressed_506(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_NIL", 5); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->t_754)), rt_str(")(", 2)), (*F->base_753)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->t_754)), rt_str(")rt_nil_check(", 14)), (*F->base_753)), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_lvalue_757(P1020 e_756) {
  struct f_is_lvalue_757fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_756 = e_756;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_756)).kind) == (((rt_int)7LL)))) {
F->y_2343 = NULL;
F->y_2343 = f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_756)).name))->all));
F->result_ = ((F->y_2343 != NULL) && ((rt_r_ichk((*(P1030)rt_nil_check(F->y_2343)).kind) == (((rt_int)1LL))) || (((rt_r_ichk((*(P1030)rt_nil_check(F->y_2343)).kind) == (((rt_int)2LL))) && ((*(P1030)rt_nil_check(F->y_2343)).mv == NULL)) && (!rt_r_echk((*(P1030)rt_nil_check(F->y_2343)).hasmv)))));
goto ret_;
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_756)).kind) == (((rt_int)17LL)))) {
F->result_ = f_is_lvalue_757((*(P1020)rt_nil_check(F->e_756)).a);
goto ret_;
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_756)).kind) == (((rt_int)11LL)))) {
F->result_ = ((!rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_756)).name))->all), rt_str("LEN", 3))) && f_is_lvalue_757((*(P1020)rt_nil_check(F->e_756)).a));
goto ret_;
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_756)).kind) == (((rt_int)10LL)))) {
if ((((*(P1020)rt_nil_check(F->e_756)).b != NULL) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_756)).b)).kind) == (((rt_int)16LL))))) {
F->result_ = 0;
goto ret_;
}
F->result_ = f_is_lvalue_757((*(P1020)rt_nil_check(F->e_756)).a);
goto ret_;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_lvalue_763(P1020 e_758, P1013 *code_759, P1026 *t_760, P1022 *c_761, int *ro_762) {
  struct f_lvalue_763fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_758 = e_758;
F->code_759 = code_759;
F->code_759v = *F->code_759;
F->t_760 = t_760;
F->t_760v = *F->t_760;
F->c_761 = c_761;
F->c_761v = *F->c_761;
F->ro_762 = ro_762;
F->ro_762v = *F->ro_762;
F->base_2344 = NULL;
F->bt_2345 = NULL;
F->bc_2346 = NULL;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_758)).kind) == (((rt_int)7LL)))) {
F->y_2347 = NULL;
F->y_2347 = f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_758)).name))->all));
if ((F->y_2347 == NULL)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_758)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_758)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P1030)rt_nil_check(F->y_2347)).kind) != (((rt_int)1LL))) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_2347)).kind) != (((rt_int)2LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_758)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_758)).name))->all), rt_str(" is not a variable", 18)); b_; }));
}
F->code_759v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_741(F->y_2347); b_; }));
F->t_760v = (*(P1030)rt_nil_check(F->y_2347)).t;
F->c_761v = (*(P1030)rt_nil_check(F->y_2347)).c;
F->ro_762v = rt_r_echk((*(P1030)rt_nil_check(F->y_2347)).ro_flag);
if (((rt_r_ichk((*(P1030)rt_nil_check(F->y_2347)).kind) == (((rt_int)1LL))) && f_check_import_747(F->y_2347, rt_r_ichk((*(P1020)rt_nil_check(F->e_758)).line)))) {
F->ro_762v = 1;
}
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_758)).kind) == (((rt_int)17LL)))) {
f_lvalue_763((*(P1020)rt_nil_check(F->e_758)).a, &F->code_759v, &F->t_760v, &F->c_761v, &F->ro_762v);
} else if (((((rt_r_ichk((*(P1020)rt_nil_check(F->e_758)).kind) == (((rt_int)12LL))) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_758)).a)).kind) == (((rt_int)7LL)))) && rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_758)).a)).name))->all), rt_str("ME", 2))) && (f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME", 2); b_; })) == NULL))) {
F->code_759v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_me_high_930((*(P1020)rt_nil_check(F->e_758)).b, rt_r_ichk((*(P1020)rt_nil_check(F->e_758)).line), &F->t_760v); b_; }));
F->c_761v = g_no_cons_1122;
F->ro_762v = 0;
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_758)).kind) == (((rt_int)11LL)))) {
f_lvalue_763((*(P1020)rt_nil_check(F->e_758)).a, &F->base_2344, &F->bt_2345, &F->bc_2346, &F->ro_762v);
f_select_on_771(&(((P1013)rt_nil_check(F->base_2344))->all), F->bt_2345, F->e_758, &F->ro_762v, &F->code_759v, &F->t_760v, &F->c_761v);
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_758)).kind) == (((rt_int)10LL)))) {
f_lvalue_763((*(P1020)rt_nil_check(F->e_758)).a, &F->base_2344, &F->bt_2345, &F->bc_2346, &F->ro_762v);
f_index_on_788(&(((P1013)rt_nil_check(F->base_2344))->all), F->bt_2345, F->e_758, &F->ro_762v, 1, &F->code_759v, &F->t_760v, &F->c_761v);
} else {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_758)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("not a variable", 14); b_; }));
}
ret_:
  (*F->code_759) = F->code_759v;  (*F->t_760) = F->t_760v;  (*F->c_761) = F->c_761v;  if (!rt_r_undef_BOOL(F->ro_762v)) (*F->ro_762) = F->ro_762v;
  RT_FPOP();
  return;
}

static void f_select_on_771(rstr *base_764, P1026 bt_765, P1020 e_766, int *ro_767, P1013 *code_768, P1026 *t_769, P1022 *c_770) {
  struct f_select_on_771fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_764 = base_764;
F->bt_765 = bt_765;
F->e_766 = e_766;
F->ro_767 = ro_767;
F->code_768 = code_768;
F->code_768v = *F->code_768;
F->t_769 = t_769;
F->t_769v = *F->t_769;
F->c_770 = c_770;
F->c_770v = *F->c_770;
F->c_770v = g_no_cons_1122;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->bt_765)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_469(F->bt_765);
(*F->ro_767) = 0;
if (((*(P1026)rt_nil_check(F->bt_765)).decl != NULL)) {
F->p_2348 = NULL;
F->p_2348 = (*(P1020)rt_nil_check((*(P1026)rt_nil_check(F->bt_765)).decl)).b;
while ((F->p_2348 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2348)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_766)).name))->all))) {
F->pc_2349 = NULL;
F->code_768v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(((", 3), f_ctype_234(F->bt_765)), rt_str(")rt_nil_check(", 14)), (*F->base_764)), rt_str("))->p_", 6)), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2348)).name))->all))), rt_str(")", 1)); b_; }));
F->t_769v = f_resolve_subtype_268((*(P1020)rt_nil_check(F->p_2348)).a, &F->pc_2349);
(*F->ro_767) = 1;
goto ret_;
}
F->p_2348 = (*(P1020)rt_nil_check(F->p_2348)).next;
}
}
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_766)).name))->all), rt_str("ALL", 3))) {
F->code_768v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_755(&(*F->base_764), F->bt_765); b_; }));
F->t_769v = (*(P1026)rt_nil_check(F->bt_765)).target;
goto ret_;
}
f_select_on_771(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_755(&(*F->base_764), F->bt_765); b_; }), (*(P1026)rt_nil_check(F->bt_765)).target, F->e_766, &(*F->ro_767), &F->code_768v, &F->t_769v, &F->c_770v);
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->bt_765)).kind) == (((rt_int)15LL)))) {
F->p_2350 = NULL;
F->p_2350 = (*(P1026)rt_nil_check(F->bt_765)).tparams;
while ((F->p_2350 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2350)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_766)).name))->all))) {
F->code_768v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_764), rt_str(".p_", 3)), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2350)).name))->all))); b_; }));
F->t_769v = f_tparam_type_352(F->bt_765, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2350)).name))->all));
(*F->ro_767) = 1;
goto ret_;
}
F->p_2350 = (*(P1020)rt_nil_check(F->p_2350)).next;
}
F->p_2350 = (*(P1026)rt_nil_check(F->bt_765)).tparams;
if ((!f_opened_308(F->bt_765))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_766)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->bt_765)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P1026)rt_nil_check(F->bt_765)).tparams == NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_766)).name))->all), rt_str("ALL", 3))) {
F->code_768v = f_mk_3(&(*F->base_764));
F->t_769v = (*(P1026)rt_nil_check(F->bt_765)).under;
goto ret_;
}
f_select_on_771(&(*F->base_764), (*(P1026)rt_nil_check(F->bt_765)).under, F->e_766, &(*F->ro_767), &F->code_768v, &F->t_769v, &F->c_770v);
goto ret_;
}
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_766)).name))->all), rt_str("ALL", 3))) {
F->code_768v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_764), rt_str(".all", 4)); b_; }));
F->t_769v = (*(P1026)rt_nil_check(F->bt_765)).under;
goto ret_;
}
while ((F->p_2350 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2350)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_766)).name))->all))) {
F->code_768v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_764), rt_str(".p_", 3)), f_lower_s_15(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2350)).name))->all))); b_; }));
F->t_769v = f_tparam_type_352(F->bt_765, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2350)).name))->all));
(*F->ro_767) = 1;
goto ret_;
}
F->p_2350 = (*(P1020)rt_nil_check(F->p_2350)).next;
}
f_select_on_771(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_764), rt_str(".all", 4)); b_; }), (*(P1026)rt_nil_check(F->bt_765)).under, F->e_766, &(*F->ro_767), &F->code_768v, &F->t_769v, &F->c_770v);
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->bt_765)).kind) == (((rt_int)17LL)))) {
F->f_2351 = NULL;
F->f_2351 = (*(P1026)rt_nil_check(F->bt_765)).fields;
F->i_2352 = RT_R_IUNDEF;
F->i_2352 = ((rt_int)0LL);
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_766)).name))->all), rt_str("TAG", 3))) {
F->code_768v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_tag((", 10), (*F->base_764)), rt_str(").tag)", 6)); b_; }));
F->t_769v = (*(P1026)rt_nil_check(F->bt_765)).elem;
(*F->ro_767) = 1;
goto ret_;
}
while ((F->f_2351 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_2351)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_766)).name))->all))) {
F->fn_2353 = rt_str_copy(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->base_764)), rt_str(").u.", 4)), f_field_c_17(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_766)).name))->all))));
F->c_770v = (*(P1028)rt_nil_check(F->f_2351)).c;
F->code_768v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*((", 4), (*F->base_764)), rt_str(").tag == ", 9)), f_itos_7(rt_r_ichk(F->i_2352))), rt_str(" \? &", 4)), F->fn_2353), rt_str(" : (rt_r_xtag(), &", 18)), F->fn_2353), rt_str(")))", 3)); b_; }));
F->t_769v = (*(P1028)rt_nil_check(F->f_2351)).t;
goto ret_;
}
F->i_2352 = rt_add(rt_r_ichk(F->i_2352), ((rt_int)1LL));
F->f_2351 = (*(P1028)rt_nil_check(F->f_2351)).next;
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_766)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_766)).name))->all)); b_; }));
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->bt_765)).kind) == (((rt_int)7LL)))) {
F->f_2354 = NULL;
F->f_2354 = (*(P1026)rt_nil_check(F->bt_765)).fields;
while ((F->f_2354 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_2354)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_766)).name))->all))) {
F->c_770v = (*(P1028)rt_nil_check(F->f_2354)).c;
F->code_768v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((*F->base_764), rt_str(".", 1)), f_field_c_17(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_766)).name))->all))); b_; }));
F->t_769v = (*(P1028)rt_nil_check(F->f_2354)).t;
goto ret_;
}
F->f_2354 = (*(P1028)rt_nil_check(F->f_2354)).next;
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_766)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_766)).name))->all)); b_; }));
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_766)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot select ", 14), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_766)).name))->all)), rt_str(" here", 5)); b_; }));
ret_:
  (*F->code_768) = F->code_768v;  (*F->t_769) = F->t_769v;  (*F->c_770) = F->c_770v;
  RT_FPOP();
  return;
}

static int f_has_call_773(rstr *s_772) {
  struct f_has_call_773fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_772 = s_772;
{ rt_int lo2356 = ((rt_int)1LL), hi2357 = ((rt_int)(((*F->s_772)).len));
for (rt_int it2358 = lo2356; it2358 <= hi2357; it2358++) {
F->i_2355 = it2358;
if ((rt_r_echk(rt_str_get((*F->s_772), F->i_2355)) == 40)) {
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

static void f_need_slice_775(P1026 t_774) {
  struct f_need_slice_775fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_774 = t_774;
F->c_2359 = rt_str_copy(f_ctype_234(F->t_774));
F->n_2360 = rt_str_copy(rt_str_cat(rt_str("rt_r_aslice_", 12), F->c_2359));
F->l_2361 = NULL;
if (f_seen_name_425(g_mcopies_1103, &F->n_2360)) {
goto ret_;
}
{ R1025 *cell2362 = rt_alloc(sizeof(R1025));
(*cell2362).s = NULL;
(*cell2362).next = NULL;
F->l_2361 = cell2362;
}
(*(P1024)rt_nil_check(F->l_2361)).s = f_mk_3(&F->n_2360);
(*(P1024)rt_nil_check(F->l_2361)).next = g_mcopies_1103;
g_mcopies_1103 = F->l_2361;
f_put_27(g_out_protos_1069, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2359), rt_str(" ", 1)), F->n_2360), rt_str("(", 1)), F->c_2359), rt_str(" a, rt_int l, rt_int h);", 24)); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2359), rt_str(" ", 1)), F->n_2360), rt_str("(", 1)), F->c_2359), rt_str(" a, rt_int l, rt_int h) {", 25)); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l && (l < a.lo || h > a.hi)) rt_raise(RT_X_SUBSCRIPT);", 65); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  if (h >= l) a.p += l - a.lo;", 30); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  a.lo = l; a.hi = h; return a;", 31); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
f_put_27(g_out_protos_1069, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2359), rt_str(" rt_r_acat_", 11)), F->c_2359), rt_str("(", 1)), F->c_2359), rt_str(" a, ", 4)), F->c_2359), rt_str(" b);", 4)); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static ", 7), F->c_2359), rt_str(" rt_r_acat_", 11)), F->c_2359), rt_str("(", 1)), F->c_2359), rt_str(" a, ", 4)), F->c_2359), rt_str(" b) {", 5)); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  rt_int m = RT_R_EXT(a.lo, a.hi), n = RT_R_EXT(b.lo, b.hi); ", 61), F->c_2359), rt_str(" r;", 3)); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  r.lo = 1; r.hi = m + n; r.lo2 = r.hi2 = 1; r.p = rt_alloc(sizeof *r.p * (size_t)(m + n) + 1);", 95); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < m; i++) r.p[i] = ", 42), f_copy_code_414((*(P1026)rt_nil_check(F->t_774)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("  for (rt_int i = 0; i < n; i++) r.p[m + i] = ", 46), f_copy_code_414((*(P1026)rt_nil_check(F->t_774)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b.p[i]", 6); b_; }))), rt_str(";", 1)); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("  return r;", 11); b_; }));
f_put_27(g_out_funcs_1071, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("}", 1); b_; }));
ret_:
  RT_FPOP();
  return;
}

static rstr f_ix_779(rstr *i_776, rstr *lo_777, rstr *hi_778) {
  struct f_ix_779fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->i_776 = i_776;
F->lo_777 = lo_777;
F->hi_778 = hi_778;
if (f_suppressed_506(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_SUBSCRIPT", 11); b_; }))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (*F->i_776)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_index(", 9), (*F->i_776)), rt_str(", ", 2)), (*F->lo_777)), rt_str(", ", 2)), (*F->hi_778)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_index_on_788(rstr *base_780, P1026 bt_781, P1020 e_782, int *ro_783, int lv_784, P1013 *code_785, P1026 *t_786, P1022 *c_787) {
  struct f_index_on_788fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->base_780 = base_780;
F->bt_781 = bt_781;
F->e_782 = e_782;
F->ro_783 = ro_783;
F->lv_784 = lv_784;
F->code_785 = code_785;
F->code_785v = *F->code_785;
F->t_786 = t_786;
F->t_786v = *F->t_786;
F->c_787 = c_787;
F->c_787v = *F->c_787;
F->a_2363 = NULL;
F->a_2363 = (*(P1020)rt_nil_check(F->e_782)).b;
F->it_2364 = NULL;
F->c_787v = g_no_cons_1122;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->bt_781)).kind) == (((rt_int)8LL)))) {
f_finish_ptr_469(F->bt_781);
(*F->ro_783) = 0;
f_index_on_788(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_755(&(*F->base_780), F->bt_781); b_; }), (*(P1026)rt_nil_check(F->bt_781)).target, F->e_782, &(*F->ro_783), F->lv_784, &F->code_785v, &F->t_786v, &F->c_787v);
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->bt_781)).kind) == (((rt_int)15LL)))) {
if ((!f_opened_308(F->bt_781))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_782)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the components of ", 18), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->bt_781)).name))->all)), rt_str(" are not exported by its capsule", 32)); b_; }));
}
if (((*(P1026)rt_nil_check(F->bt_781)).tparams == NULL)) {
f_index_on_788(&(*F->base_780), (*(P1026)rt_nil_check(F->bt_781)).under, F->e_782, &(*F->ro_783), F->lv_784, &F->code_785v, &F->t_786v, &F->c_787v);
} else {
f_index_on_788(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->base_780), rt_str(".all", 4)); b_; }), (*(P1026)rt_nil_check(F->bt_781)).under, F->e_782, &(*F->ro_783), F->lv_784, &F->code_785v, &F->t_786v, &F->c_787v);
}
goto ret_;
}
if ((((rt_r_ichk((*(P1026)rt_nil_check(F->bt_781)).kind) == (((rt_int)6LL))) && (F->a_2363 != NULL)) && (rt_r_ichk((*(P1020)rt_nil_check(F->a_2363)).kind) == (((rt_int)16LL))))) {
if (((rt_r_ichk((*(P1026)rt_nil_check(F->bt_781)).ndim) != ((rt_int)1LL)) || ((*(P1020)rt_nil_check(F->a_2363)).next != NULL))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_782)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only a one-dimensional array can be sliced", 42); b_; }));
}
{
F->lo_2365 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->a_2363)).a, (*(P1026)rt_nil_check(F->bt_781)).idx, &F->it_2364));
F->hi_2366 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->a_2363)).b, (*(P1026)rt_nil_check(F->bt_781)).idx, &F->it_2364));
F->code_785v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_aslice_", 12), f_ctype_234(F->bt_781)), rt_str("(", 1)), (*F->base_780)), rt_str(", ", 2)), F->lo_2365), rt_str(", ", 2)), F->hi_2366), rt_str(")", 1)); b_; }));
f_need_slice_775(F->bt_781);
F->t_786v = F->bt_781;
(*F->ro_783) = 1;
}
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->bt_781)).kind) == (((rt_int)6LL)))) {
F->off_2367 = NULL;
F->k_2368 = RT_R_IUNDEF;
F->k_2368 = ((rt_int)0LL);
F->b_2369 = NULL;
F->b_2369 = f_mk_3(&(*F->base_780));
F->pre_2370 = NULL;
F->pre_2370 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if ((f_list_len_71(F->a_2363) != rt_r_ichk((*(P1026)rt_nil_check(F->bt_781)).ndim))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_782)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(f_itos_7(rt_r_ichk((*(P1026)rt_nil_check(F->bt_781)).ndim)), rt_str(" subscripts expected", 20)); b_; }));
}
if (((!F->lv_784) && f_has_call_773(&(*F->base_780)))) {
F->pre_2370 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->bt_781)), rt_str(" b_ = ", 6)), (*F->base_780)), rt_str("; ", 2)); b_; }));
F->b_2369 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("b_", 2); b_; }));
}
while ((F->a_2363 != NULL)) {
F->k_2368 = rt_add(rt_r_ichk(F->k_2368), ((rt_int)1LL));
{
F->i_2371 = rt_str_copy(f_gexpr_794(F->a_2363, f_idx_type_258(F->bt_781, rt_r_ichk(F->k_2368)), &F->it_2364));
F->l_2372 = rt_str_copy(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->b_2369))->all), rt_str(".", 1)), f_dim_lo_242(rt_r_ichk(F->k_2368))));
F->h_2373 = rt_str_copy(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->b_2369))->all), rt_str(".", 1)), f_dim_hi_244(rt_r_ichk(F->k_2368))));
f_check_type_232(F->it_2364, f_idx_type_258(F->bt_781, rt_r_ichk(F->k_2368)), rt_r_ichk((*(P1020)rt_nil_check(F->e_782)).line));
if ((F->off_2367 == NULL)) {
F->off_2367 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_ix_779(&F->i_2371, &F->l_2372, &F->h_2373)), rt_str(" - ", 3)), F->l_2372), rt_str(")", 1)); b_; }));
} else {
F->off_2367 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1013)rt_nil_check(F->off_2367))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2372), rt_str(", ", 2)), F->h_2373), rt_str(") + ", 4)), f_ix_779(&F->i_2371, &F->l_2372, &F->h_2373)), rt_str(" - ", 3)), F->l_2372), rt_str(")", 1)); b_; }));
}
}
F->a_2363 = (*(P1020)rt_nil_check(F->a_2363)).next;
}
if ((((rt_int)(((((P1013)rt_nil_check(F->pre_2370))->all)).len)) > ((rt_int)0LL))) {
F->code_785v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->pre_2370))->all), (((P1013)rt_nil_check(F->b_2369))->all)), rt_str(".p[", 3)), (((P1013)rt_nil_check(F->off_2367))->all)), rt_str("]; })", 5)); b_; }));
} else {
F->code_785v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->b_2369))->all), rt_str(".p[", 3)), (((P1013)rt_nil_check(F->off_2367))->all)), rt_str("]", 1)); b_; }));
}
F->t_786v = (*(P1026)rt_nil_check(F->bt_781)).elem;
F->c_787v = (*(P1026)rt_nil_check(F->bt_781)).elemcons;
goto ret_;
}
if ((f_list_len_71(F->a_2363) != ((rt_int)1LL))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_782)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("one subscript expected", 22); b_; }));
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->bt_781)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P1020)rt_nil_check(F->a_2363)).kind) == (((rt_int)16LL)))) {
F->lo_2374 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->a_2363)).a, g_ty_int_1104, &F->it_2364));
F->hi_2375 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->a_2363)).b, g_ty_int_1104, &F->it_2364));
F->code_785v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_slice(", 13), (*F->base_780)), rt_str(", ", 2)), F->lo_2374), rt_str(", ", 2)), F->hi_2375), rt_str(")", 1)); b_; }));
F->t_786v = F->bt_781;
(*F->ro_783) = 1;
goto ret_;
}
{
F->i_2376 = rt_str_copy(f_gexpr_794(F->a_2363, g_ty_int_1104, &F->it_2364));
F->t_786v = f_str_elem_218(F->bt_781);
F->c_787v = (*(P1026)rt_nil_check(F->bt_781)).elemcons;
if (F->lv_784) {
F->code_785v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*rt_str_at(&", 13), (*F->base_780)), rt_str(", ", 2)), F->i_2376), rt_str("))", 2)); b_; }));
} else {
F->code_785v = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_get(", 11), (*F->base_780)), rt_str(", ", 2)), F->i_2376), rt_str(")", 1)); b_; }));
(*F->ro_783) = 1;
}
}
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_782)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("cannot subscript this", 21); b_; }));
ret_:
  (*F->code_785) = F->code_785v;  (*F->t_786) = F->t_786v;  (*F->c_787) = F->c_787v;
  RT_FPOP();
  return;
}

static int f_own_attribute_790(P1020 e_789) {
  struct f_own_attribute_790fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_789 = e_789;
F->saved_2377 = NULL;
F->saved_2377 = g_code_1074;
F->bt_2378 = NULL;
F->ok_2379 = RT_R_EUNDEF;
F->ok_2379 = 0;
g_trial_1102 = rt_add(rt_r_ichk(g_trial_1102), ((rt_int)1LL));
g_code_1074 = f_new_buffer_24();
{ rt_frame xf2380;
if (RT_TRY(xf2380)) {
F->base_2382 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_789)).a, NULL, &F->bt_2378));
while (((F->bt_2378 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->bt_2378)).kind) == (((rt_int)8LL))))) {
f_finish_ptr_469(F->bt_2378);
F->bt_2378 = (*(P1026)rt_nil_check(F->bt_2378)).target;
}
while ((((F->bt_2378 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->bt_2378)).kind) == (((rt_int)15LL)))) && ((*(P1026)rt_nil_check(F->bt_2378)).tparams == NULL))) {
F->bt_2378 = (*(P1026)rt_nil_check(F->bt_2378)).under;
}
if (((F->bt_2378 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->bt_2378)).kind) == (((rt_int)15LL))))) {
F->p_2383 = NULL;
F->p_2383 = (*(P1026)rt_nil_check(F->bt_2378)).tparams;
while ((F->p_2383 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2383)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_789)).name))->all))) {
F->ok_2379 = 1;
}
F->p_2383 = (*(P1020)rt_nil_check(F->p_2383)).next;
}
F->bt_2378 = (*(P1026)rt_nil_check(F->bt_2378)).under;
}
if (((F->bt_2378 != NULL) && ((rt_r_ichk((*(P1026)rt_nil_check(F->bt_2378)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->bt_2378)).kind) == (((rt_int)17LL)))))) {
F->f_2384 = NULL;
F->f_2384 = (*(P1026)rt_nil_check(F->bt_2378)).fields;
while ((F->f_2384 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_2384)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_789)).name))->all))) {
F->ok_2379 = 1;
}
F->f_2384 = (*(P1028)rt_nil_check(F->f_2384)).next;
}
}
RT_POP(xf2380);
} else {
RT_POP(xf2380);
int x2381 = rt_xcur;
if (0 || x2381 == ex_compile_error_1) {
F->ok_2379 = 0;
} else {
rt_raise(x2381);
}
}
}
g_trial_1102 = rt_sub(rt_r_ichk(g_trial_1102), ((rt_int)1LL));
g_code_1074 = F->saved_2377;
F->result_ = rt_r_echk(F->ok_2379);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_794(P1020 e_791, P1026 want_792, P1026 *t_793) {
  struct f_gexpr_794fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_791 = e_791;
F->want_792 = want_792;
F->t_793 = t_793;
F->t_793v = *F->t_793;
F->k_2385 = RT_R_IUNDEF;
F->k_2385 = rt_r_ichk((*(P1020)rt_nil_check(F->e_791)).kind);
F->code_2386 = NULL;
F->c_2387 = NULL;
F->ro_2388 = RT_R_EUNDEF;
F->bt_2389 = NULL;
F->ctx_2390 = NULL;
F->ctx_2390 = g_cons_ctx_1095;
g_cons_ctx_1095 = NULL;
F->t_793v = g_ty_int_1104;
if ((rt_r_ichk(F->k_2385) == (((rt_int)1LL)))) {
if (((F->want_792 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->want_792)).kind) == (((rt_int)3LL))))) {
F->t_793v = g_ty_float_1106;
F->result_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str(".0", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)", 9), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all)), rt_str("LL)", 3));
goto ret_;
} else if ((rt_r_ichk(F->k_2385) == (((rt_int)2LL)))) {
F->t_793v = g_ty_float_1106;
F->result_ = (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all);
goto ret_;
} else if ((rt_r_ichk(F->k_2385) == (((rt_int)5LL)))) {
F->t_793v = g_ty_bool_1105;
F->result_ = f_itos_7(rt_r_ichk((*(P1020)rt_nil_check(F->e_791)).ival));
goto ret_;
} else if (((((rt_r_ichk(F->k_2385) == (((rt_int)3LL))) && (F->want_792 != NULL)) && (rt_r_ichk((*(P1026)rt_nil_check(F->want_792)).kind) == (((rt_int)5LL)))) && (!f_same_221(f_str_elem_218(F->want_792), g_ty_ascii_1107)))) {
F->r_2391 = NULL;
F->r_2391 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_q_18(); b_; }));
F->t_793v = F->want_792;
{ rt_int lo2393 = ((rt_int)1LL), hi2394 = ((rt_int)(((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all)).len));
for (rt_int it2395 = lo2393; it2395 <= hi2394; it2395++) {
F->i_2392 = it2395;
F->pos_2396 = RT_R_IUNDEF;
F->pos_2396 = f_lit_index_265((*(P1026)rt_nil_check(f_base_of_223(f_str_elem_218(F->want_792)))).lits, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_ascii_lit_804(rt_r_echk(rt_str_get((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), F->i_2392))); b_; }));
if ((rt_r_ichk(F->pos_2396) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_791)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), f_ascii_lit_804(rt_r_echk(rt_str_get((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), F->i_2392)))), rt_str(" is not a value of the component type", 37)); b_; }));
}
F->r_2391 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_2391))->all), rt_str("\\", 1)), f_octal_806(rt_r_ichk(F->pos_2396))); b_; }));
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), (((P1013)rt_nil_check(F->r_2391))->all)), f_q_18()), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2385) == (((rt_int)3LL)))) {
F->t_793v = g_ty_string_1108;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str(", 7), f_c_string_837(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all))), rt_str(", ", 2)), f_itos_7(((rt_int)(((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all)).len)))), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2385) == (((rt_int)6LL)))) {
F->t_793v = g_ty_nil_1111;
F->result_ = rt_str("NULL", 4);
goto ret_;
} else if ((rt_r_ichk(F->k_2385) == (((rt_int)4LL)))) {
if (((F->want_792 != NULL) && ((*(P1026)rt_nil_check(f_base_of_223(F->want_792))).kind == (((rt_int)4LL))))) {
F->t_793v = F->want_792;
} else {
F->t_793v = f_enum_type_of_840(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_r_ichk((*(P1020)rt_nil_check(F->e_791)).line));
}
{
F->i_2397 = RT_R_IUNDEF;
F->i_2397 = f_lit_index_265((*(P1026)rt_nil_check(f_base_of_223(F->t_793v))).lits, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all));
if ((rt_r_ichk(F->i_2397) < ((rt_int)0LL))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_791)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(f_chs_5(39), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all)), rt_str(" is not a value of this type", 28)); b_; }));
}
F->result_ = f_itos_7(rt_r_ichk(F->i_2397));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2385) == (((rt_int)17LL)))) {
g_cons_ctx_1095 = F->ctx_2390;
F->result_ = f_gexpr_794((*(P1020)rt_nil_check(F->e_791)).a, F->want_792, &F->t_793v);
goto ret_;
} else if ((rt_r_ichk(F->k_2385) == (((rt_int)7LL)))) {
F->y_2398 = NULL;
F->y_2398 = f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all));
if ((F->y_2398 == NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("ME", 2))) {
F->t_793v = g_ty_act_1114;
F->result_ = rt_str("rt_me()", 7);
goto ret_;
}
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("NIL_ACT", 7))) {
F->t_793v = g_ty_act_1114;
F->result_ = rt_str("((rt_act *)NULL)", 16);
goto ret_;
}
if ((((((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("CRITICAL", 8)) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("NONCRITICAL", 11))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("SYNC_RESET", 10))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("SYNC_WAIT", 9))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("LOW_SYNC_WAIT", 13)))) {
F->result_ = f_gcall_942(f_wrap_apply_835(F->e_791), 0, &F->t_793v);
goto ret_;
}
if (((((((((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("SIZELN", 6)) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("EOF", 3))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("SYS_IN", 6))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("SYS_OUT", 7))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("TIME", 4))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("MILLISECONDS", 12))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("SECONDS", 7))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("MINUTES", 7))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("HOURS", 5)))) {
F->result_ = f_gcall_942(f_wrap_apply_835(F->e_791), 0, &F->t_793v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_791)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str(" is not defined", 15)); b_; }));
}
if (((rt_r_ichk((*(P1030)rt_nil_check(F->y_2398)).kind) == (((rt_int)1LL))) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_2398)).kind) == (((rt_int)2LL))))) {
F->ro_2399 = RT_R_EUNDEF;
F->t_793v = (*(P1030)rt_nil_check(F->y_2398)).t;
if ((rt_r_ichk((*(P1030)rt_nil_check(F->y_2398)).kind) == (((rt_int)1LL)))) {
F->ro_2399 = f_check_import_747(F->y_2398, rt_r_ichk((*(P1020)rt_nil_check(F->e_791)).line));
F->result_ = f_init_chk_363((*(P1030)rt_nil_check(F->y_2398)).t, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_access_of_741(F->y_2398); b_; }));
goto ret_;
}
F->result_ = f_access_of_741(F->y_2398);
goto ret_;
}
if ((rt_r_ichk((*(P1030)rt_nil_check(F->y_2398)).kind) == (((rt_int)3LL)))) {
F->result_ = f_gcall_942(f_wrap_apply_835(F->e_791), 0, &F->t_793v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_791)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str(" cannot be used as a value", 26)); b_; }));
} else if ((((rt_r_ichk(F->k_2385) == (((rt_int)8LL))) && (f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all)) != NULL)) && (f_user_op_938(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), f_copy_node_833((*(P1020)rt_nil_check(F->e_791)).a)) != NULL))) {
F->call_2400 = NULL;
F->call_2400 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1020)rt_nil_check(F->e_791)).line));
F->fname_2401 = NULL;
F->fname_2401 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1020)rt_nil_check(F->e_791)).line));
(*(P1020)rt_nil_check(F->fname_2401)).name = (*(P1020)rt_nil_check(F->e_791)).name;
(*(P1020)rt_nil_check(F->call_2400)).a = F->fname_2401;
(*(P1020)rt_nil_check(F->call_2400)).b = f_copy_node_833((*(P1020)rt_nil_check(F->e_791)).a);
F->result_ = f_gcall_942(F->call_2400, 0, &F->t_793v);
goto ret_;
} else if (((((rt_r_ichk(F->k_2385) == (((rt_int)8LL))) && rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("NOT", 3))) && (F->want_792 != NULL)) && (rt_r_ichk((*(P1026)rt_nil_check(F->want_792)).kind) == (((rt_int)16LL))))) {
F->a_2402 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_791)).a, F->want_792, &F->t_793v));
F->result_ = rt_str_cat(rt_str_cat(rt_str("y_set_compl(", 12), F->a_2402), rt_str(")", 1));
goto ret_;
} else if ((rt_r_ichk(F->k_2385) == (((rt_int)8LL)))) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("NOT", 3))) {
F->a_2403 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_791)).a, g_ty_bool_1105, &F->t_793v));
f_check_type_232(F->t_793v, g_ty_bool_1105, rt_r_ichk((*(P1020)rt_nil_check(F->e_791)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), F->a_2403), rt_str(")", 1));
goto ret_;
}
{
F->a_2404 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_791)).a, F->want_792, &F->t_793v));
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("+", 1))) {
F->result_ = F->a_2404;
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_793v)).kind) == (((rt_int)3LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(-", 2), F->a_2404), rt_str(")", 1));
goto ret_;
}
f_check_type_232(F->t_793v, g_ty_int_1104, rt_r_ichk((*(P1020)rt_nil_check(F->e_791)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_neg(", 7), F->a_2404), rt_str(")", 1));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2385) == (((rt_int)9LL)))) {
F->result_ = f_gbinop_862(F->e_791, F->want_792, &F->t_793v);
goto ret_;
} else if ((rt_r_ichk(F->k_2385) == (((rt_int)10LL)))) {
if (((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).a)).kind) == (((rt_int)7LL))) || (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).a)).kind) == (((rt_int)12LL))))) {
F->nm_2405 = NULL;
F->nm_2405 = (*(P1020)rt_nil_check(F->e_791)).a;
F->y_2406 = NULL;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->nm_2405)).kind) == (((rt_int)12LL)))) {
F->nm_2405 = (*(P1020)rt_nil_check(F->nm_2405)).a;
}
F->y_2406 = f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->nm_2405)).name))->all));
if (((((F->y_2406 == NULL) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_2406)).kind) == (((rt_int)3LL)))) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_2406)).kind) == (((rt_int)4LL)))) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_2406)).kind) == (((rt_int)10LL))))) {
F->result_ = f_gcall_942(F->e_791, 0, &F->t_793v);
goto ret_;
}
}
if ((f_user_subscript_817(F->e_791) != NULL)) {
F->result_ = f_gcall_942(f_user_subscript_817(F->e_791), 0, &F->t_793v);
goto ret_;
}
{
F->base_2407 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_791)).a, NULL, &F->bt_2389));
F->ro_2388 = 1;
f_index_on_788(&F->base_2407, F->bt_2389, F->e_791, &F->ro_2388, 0, &F->code_2386, &F->t_793v, &F->c_2387);
if ((((!f_is_lvalue_757(F->e_791)) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_793v)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->t_793v)).kind) == (((rt_int)5LL))))) {
F->result_ = (((P1013)rt_nil_check(F->code_2386))->all);
goto ret_;
}
F->result_ = f_init_chk_363(F->t_793v, &(((P1013)rt_nil_check(F->code_2386))->all));
goto ret_;
}
} else if (((rt_r_ichk(F->k_2385) == (((rt_int)11LL))) && (f_user_dot_815(F->e_791) != NULL))) {
F->result_ = f_gcall_942(f_user_dot_815(F->e_791), 0, &F->t_793v);
goto ret_;
} else if ((rt_r_ichk(F->k_2385) == (((rt_int)11LL)))) {
if (((((((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("LEN", 3)) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("MIN", 3))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("MAX", 3))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("PREC", 4))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("ACCESS", 6))) || rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("USE", 3))) && (!f_own_attribute_790(F->e_791)))) {
F->result_ = f_attribute_845(F->e_791, &F->t_793v);
goto ret_;
} else if (((f_as_subtype_297((*(P1020)rt_nil_check(F->e_791)).a) != NULL) || f_ptr_attribute_842(F->e_791))) {
F->result_ = f_attribute_845(F->e_791, &F->t_793v);
goto ret_;
}
{
F->base_2408 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_791)).a, NULL, &F->bt_2389));
F->ro_2388 = 1;
f_select_on_771(&F->base_2408, F->bt_2389, F->e_791, &F->ro_2388, &F->code_2386, &F->t_793v, &F->c_2387);
if ((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_791)).name))->all), rt_str("TAG", 3)) || (!f_is_lvalue_757(F->e_791)))) {
F->result_ = (((P1013)rt_nil_check(F->code_2386))->all);
goto ret_;
}
F->result_ = f_init_chk_363(F->t_793v, &(((P1013)rt_nil_check(F->code_2386))->all));
goto ret_;
}
} else if ((rt_r_ichk(F->k_2385) == (((rt_int)12LL)))) {
F->result_ = f_gcall_942(f_wrap_apply_835(F->e_791), 0, &F->t_793v);
goto ret_;
} else if ((rt_r_ichk(F->k_2385) == (((rt_int)14LL)))) {
F->result_ = f_constructor_867(F->e_791, F->want_792, F->ctx_2390, &F->t_793v);
goto ret_;
} else if ((rt_r_ichk(F->k_2385) == (((rt_int)13LL)))) {
F->result_ = f_resolved_797(F->e_791, &F->t_793v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_791)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("this expression is not handled yet", 34); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_793) = F->t_793v;
  RT_FPOP();
  return F->result_;
}

static rstr f_resolved_797(P1020 e_795, P1026 *t_796) {
  struct f_resolved_797fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_795 = e_795;
F->t_796 = t_796;
F->t_796v = *F->t_796;
F->c_2409 = NULL;
F->vt_2410 = NULL;
F->y_2411 = NULL;
F->y_2411 = f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
F->tt_2412 = NULL;
F->tt_2412 = f_copy_node_833((*(P1020)rt_nil_check(F->e_795)).b);
(*(P1020)rt_nil_check(F->tt_2412)).next = NULL;
if (((F->y_2411 != NULL) && ((rt_r_ichk((*(P1030)rt_nil_check(F->y_2411)).kind) == (((rt_int)10LL))) || (f_resolve_overload_916(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }), F->tt_2412, f_copy_node_833((*(P1020)rt_nil_check(F->e_795)).a), 0, rt_r_ichk((*(P1020)rt_nil_check(F->e_795)).line)) != NULL)))) {
F->call_2413 = NULL;
F->call_2413 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1020)rt_nil_check(F->e_795)).line));
F->f_2414 = NULL;
F->f_2414 = f_nn_65((((rt_int)12LL)), rt_r_ichk((*(P1020)rt_nil_check(F->e_795)).line));
F->fname_2415 = NULL;
F->fname_2415 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1020)rt_nil_check(F->e_795)).line));
(*(P1020)rt_nil_check(F->fname_2415)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("#", 1); b_; }));
(*(P1020)rt_nil_check(F->f_2414)).a = F->fname_2415;
(*(P1020)rt_nil_check(F->f_2414)).b = F->tt_2412;
(*(P1020)rt_nil_check(F->call_2413)).a = F->f_2414;
(*(P1020)rt_nil_check(F->call_2413)).b = f_copy_node_833((*(P1020)rt_nil_check(F->e_795)).a);
(*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->call_2413)).b)).next = NULL;
F->result_ = f_gcall_942(F->call_2413, 0, &F->t_796v);
goto ret_;
}
F->t_796v = f_resolve_subtype_268((*(P1020)rt_nil_check(F->e_795)).b, &F->c_2409);
{
F->v_2416 = rt_str_copy(f_gexpr_in_802((*(P1020)rt_nil_check(F->e_795)).a, F->t_796v, F->c_2409, &F->vt_2410));
f_check_type_232(F->vt_2410, F->t_796v, rt_r_ichk((*(P1020)rt_nil_check(F->e_795)).line));
F->result_ = f_checked_213(F->t_796v, F->c_2409, &F->v_2416);
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_796) = F->t_796v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gexpr_in_802(P1020 e_798, P1026 want_799, P1022 c_800, P1026 *t_801) {
  struct f_gexpr_in_802fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_798 = e_798;
F->want_799 = want_799;
F->c_800 = c_800;
F->t_801 = t_801;
F->t_801v = *F->t_801;
g_cons_ctx_1095 = F->c_800;
F->result_ = f_gexpr_794(F->e_798, F->want_799, &F->t_801v);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_801) = F->t_801v;
  RT_FPOP();
  return F->result_;
}

static rstr f_ascii_lit_804(int ch_803) {
  struct f_ascii_lit_804fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ch_803 = ch_803;
F->l_2417 = NULL;
F->l_2417 = (*(P1026)rt_nil_check(g_ty_ascii_1107)).lits;
{ rt_int lo2419 = ((rt_int)1LL), hi2420 = rt_sub(((rt_int)(F->ch_803) + 1), ((rt_int)1LL));
for (rt_int it2421 = lo2419; it2421 <= hi2420; it2421++) {
F->i_2418 = it2421;
F->l_2417 = (*(P1020)rt_nil_check(F->l_2417)).next;
}
}
F->result_ = (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->l_2417)).name))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_octal_806(rt_int n_805) {
  struct f_octal_806fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_805 = n_805;
F->r_2422 = rt_str_new(((rt_int)3LL));
rt_str_assign(&F->r_2422, rt_str("000", 3));
(*rt_str_at(&F->r_2422, ((rt_int)1LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_805, ((rt_int)64LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2422, ((rt_int)2LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(rt_div(F->n_805, ((rt_int)8LL)), ((rt_int)8LL)), ((rt_int)1LL)));
(*rt_str_at(&F->r_2422, ((rt_int)3LL))) = rt_str_get((rt_str("01234567", 8)), rt_add(rt_mod(F->n_805, ((rt_int)8LL)), ((rt_int)1LL)));
F->result_ = F->r_2422;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_str_cat_part_808(P1026 t_807) {
  struct f_str_cat_part_808fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_807 = t_807;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_807)).kind) == (((rt_int)5LL)))) {
F->result_ = f_str_elem_218(F->t_807);
goto ret_;
}
F->result_ = F->t_807;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_peek_type_810(P1020 e_809) {
  struct f_peek_type_810fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_809 = e_809;
F->saved_2423 = NULL;
F->saved_2423 = g_code_1074;
F->t_2424 = NULL;
g_trial_1102 = rt_add(rt_r_ichk(g_trial_1102), ((rt_int)1LL));
g_code_1074 = f_new_buffer_24();
{ rt_frame xf2425;
if (RT_TRY(xf2425)) {
F->v_2427 = rt_str_copy(f_gexpr_794(F->e_809, NULL, &F->t_2424));
RT_POP(xf2425);
} else {
RT_POP(xf2425);
int x2426 = rt_xcur;
if (0 || x2426 == ex_compile_error_1) {
F->t_2424 = NULL;
} else {
rt_raise(x2426);
}
}
}
g_trial_1102 = rt_sub(rt_r_ichk(g_trial_1102), ((rt_int)1LL));
g_code_1074 = F->saved_2423;
F->result_ = F->t_2424;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_set_operands_813(P1020 e_811, P1026 want_812) {
  struct f_set_operands_813fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_811 = e_811;
F->want_812 = want_812;
F->t_2428 = NULL;
if (((F->want_812 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->want_812)).kind) == (((rt_int)16LL))))) {
F->result_ = F->want_812;
goto ret_;
} else if ((F->want_812 != NULL)) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_811)).a)).kind) != (((rt_int)14LL)))) {
F->t_2428 = f_peek_type_810((*(P1020)rt_nil_check(F->e_811)).a);
} else if ((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_811)).b)).kind) != (((rt_int)14LL)))) {
F->t_2428 = f_peek_type_810((*(P1020)rt_nil_check(F->e_811)).b);
}
if (((F->t_2428 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->t_2428)).kind) == (((rt_int)16LL))))) {
F->result_ = F->t_2428;
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_user_dot_815(P1020 e_814) {
  struct f_user_dot_815fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_814 = e_814;
F->arg_2429 = NULL;
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_814)).name))->all)); b_; })) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->arg_2429 = f_copy_node_833((*(P1020)rt_nil_check(F->e_814)).a);
if ((f_user_op_938(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_814)).name))->all)); b_; }), F->arg_2429) == NULL)) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_821(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str(".", 1), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_814)).name))->all)); b_; }), F->arg_2429, rt_r_ichk((*(P1020)rt_nil_check(F->e_814)).line));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_user_subscript_817(P1020 e_816) {
  struct f_user_subscript_817fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_816 = e_816;
F->name_2430 = NULL;
F->name_2430 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("(", 1); b_; }));
F->args_2431 = NULL;
F->tail_2432 = NULL;
F->a_2433 = NULL;
F->a_2433 = (*(P1020)rt_nil_check(F->e_816)).b;
if (((((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_816)).a)).kind) == (((rt_int)7LL))) && (f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_816)).a)).name))->all)) != NULL)) && ((*(P1030)rt_nil_check(f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_816)).a)).name))->all)))).kind != (((rt_int)1LL)))) && ((*(P1030)rt_nil_check(f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_816)).a)).name))->all)))).kind != (((rt_int)2LL))))) {
F->result_ = NULL;
goto ret_;
}
f_append_69(&F->args_2431, &F->tail_2432, f_copy_node_833((*(P1020)rt_nil_check(F->e_816)).a));
while ((F->a_2433 != NULL)) {
if ((((rt_int)(((((P1013)rt_nil_check(F->name_2430))->all)).len)) > ((rt_int)1LL))) {
F->name_2430 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->name_2430))->all), rt_str(",", 1)); b_; }));
}
if ((rt_r_ichk((*(P1020)rt_nil_check(F->a_2433)).kind) == (((rt_int)16LL)))) {
F->name_2430 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->name_2430))->all), rt_str("*..*", 4)); b_; }));
f_append_69(&F->args_2431, &F->tail_2432, f_copy_node_833((*(P1020)rt_nil_check(F->a_2433)).a));
f_append_69(&F->args_2431, &F->tail_2432, f_copy_node_833((*(P1020)rt_nil_check(F->a_2433)).b));
} else {
F->name_2430 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->name_2430))->all), rt_str("*", 1)); b_; }));
f_append_69(&F->args_2431, &F->tail_2432, f_copy_node_833(F->a_2433));
}
F->a_2433 = (*(P1020)rt_nil_check(F->a_2433)).next;
}
F->name_2430 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->name_2430))->all), rt_str(")", 1)); b_; }));
if (((f_lookup_163(&(((P1013)rt_nil_check(F->name_2430))->all)) == NULL) || (f_user_op_938(&(((P1013)rt_nil_check(F->name_2430))->all), F->args_2431) == NULL))) {
F->result_ = NULL;
goto ret_;
}
F->result_ = f_op_call_821(&(((P1013)rt_nil_check(F->name_2430))->all), F->args_2431, rt_r_ichk((*(P1020)rt_nil_check(F->e_816)).line));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_op_call_821(rstr *name_818, P1020 args_819, rt_int line_820) {
  struct f_op_call_821fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_818 = name_818;
F->args_819 = args_819;
F->line_820 = line_820;
F->call_2434 = NULL;
F->call_2434 = f_nn_65((((rt_int)10LL)), F->line_820);
F->f_2435 = NULL;
F->f_2435 = f_nn_65((((rt_int)7LL)), F->line_820);
(*(P1020)rt_nil_check(F->f_2435)).name = f_mk_3(&(*F->name_818));
(*(P1020)rt_nil_check(F->call_2434)).a = F->f_2435;
(*(P1020)rt_nil_check(F->call_2434)).b = F->args_819;
F->result_ = F->call_2434;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_derived_relation_823(P1020 e_822) {
  struct f_derived_relation_823fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_822 = e_822;
F->l_2436 = NULL;
F->r_2437 = NULL;
F->has_eq_2438 = RT_R_EUNDEF;
F->has_eq_2438 = 0;
F->has_lt_2439 = RT_R_EUNDEF;
F->has_lt_2439 = 0;
F->l_2436 = f_copy_node_833((*(P1020)rt_nil_check(F->e_822)).a);
F->r_2437 = f_copy_node_833((*(P1020)rt_nil_check(F->e_822)).b);
(*(P1020)rt_nil_check(F->l_2436)).next = F->r_2437;
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; })) != NULL)) {
F->has_eq_2438 = (f_user_op_938(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), F->l_2436) != NULL);
}
if ((f_lookup_163(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; })) != NULL)) {
F->l_2436 = f_copy_node_833((*(P1020)rt_nil_check(F->e_822)).a);
F->r_2437 = f_copy_node_833((*(P1020)rt_nil_check(F->e_822)).b);
(*(P1020)rt_nil_check(F->l_2436)).next = F->r_2437;
F->has_lt_2439 = (f_user_op_938(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), F->l_2436) != NULL);
}
if ((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_822)).name))->all), rt_str("/=", 2)) && rt_r_echk(F->has_eq_2438))) {
F->result_ = f_rel_not_831(f_rel_node_828(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1020)rt_nil_check(F->e_822)).a, (*(P1020)rt_nil_check(F->e_822)).b, rt_r_ichk((*(P1020)rt_nil_check(F->e_822)).line)), rt_r_ichk((*(P1020)rt_nil_check(F->e_822)).line));
goto ret_;
} else if ((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_822)).name))->all), rt_str(">", 1)) && rt_r_echk(F->has_lt_2439))) {
F->result_ = f_rel_node_828(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1020)rt_nil_check(F->e_822)).b, (*(P1020)rt_nil_check(F->e_822)).a, rt_r_ichk((*(P1020)rt_nil_check(F->e_822)).line));
goto ret_;
} else if (((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_822)).name))->all), rt_str("<=", 2)) && rt_r_echk(F->has_lt_2439)) && rt_r_echk(F->has_eq_2438))) {
F->result_ = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_828(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1020)rt_nil_check(F->e_822)).a, (*(P1020)rt_nil_check(F->e_822)).b, rt_r_ichk((*(P1020)rt_nil_check(F->e_822)).line)), f_rel_node_828(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1020)rt_nil_check(F->e_822)).a, (*(P1020)rt_nil_check(F->e_822)).b, rt_r_ichk((*(P1020)rt_nil_check(F->e_822)).line)), rt_r_ichk((*(P1020)rt_nil_check(F->e_822)).line));
goto ret_;
} else if (((rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_822)).name))->all), rt_str(">=", 2)) && rt_r_echk(F->has_lt_2439)) && rt_r_echk(F->has_eq_2438))) {
F->result_ = f_binop_106(f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("OR", 2); b_; })), f_rel_node_828(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("<", 1); b_; }), (*(P1020)rt_nil_check(F->e_822)).b, (*(P1020)rt_nil_check(F->e_822)).a, rt_r_ichk((*(P1020)rt_nil_check(F->e_822)).line)), f_rel_node_828(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("=", 1); b_; }), (*(P1020)rt_nil_check(F->e_822)).a, (*(P1020)rt_nil_check(F->e_822)).b, rt_r_ichk((*(P1020)rt_nil_check(F->e_822)).line)), rt_r_ichk((*(P1020)rt_nil_check(F->e_822)).line));
goto ret_;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_rel_node_828(rstr *op_824, P1020 a_825, P1020 b_826, rt_int line_827) {
  struct f_rel_node_828fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_824 = op_824;
F->a_825 = a_825;
F->b_826 = b_826;
F->line_827 = line_827;
F->result_ = f_binop_106(f_mk_3(&(*F->op_824)), f_copy_node_833(F->a_825), f_copy_node_833(F->b_826), F->line_827);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_rel_not_831(P1020 x_829, rt_int line_830) {
  struct f_rel_not_831fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->x_829 = x_829;
F->line_830 = line_830;
F->n_2440 = NULL;
F->n_2440 = f_nn_65((((rt_int)8LL)), F->line_830);
(*(P1020)rt_nil_check(F->n_2440)).name = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("NOT", 3); b_; }));
(*(P1020)rt_nil_check(F->n_2440)).a = F->x_829;
F->result_ = F->n_2440;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_copy_node_833(P1020 e_832) {
  struct f_copy_node_833fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_832 = e_832;
F->x_2441 = NULL;
{ R1021 *cell2442 = rt_alloc(sizeof(R1021));
(*cell2442).name = NULL;
(*cell2442).tag = NULL;
(*cell2442).prags = NULL;
(*cell2442).labels = NULL;
(*cell2442).a = NULL;
(*cell2442).b = NULL;
(*cell2442).c = NULL;
(*cell2442).d = NULL;
(*cell2442).e = NULL;
(*cell2442).next = NULL;
F->x_2441 = cell2442;
}
(*(P1020)rt_nil_check(F->x_2441)).kind = rt_r_ichk((*(P1020)rt_nil_check(F->e_832)).kind);
(*(P1020)rt_nil_check(F->x_2441)).line = rt_r_ichk((*(P1020)rt_nil_check(F->e_832)).line);
(*(P1020)rt_nil_check(F->x_2441)).ival = rt_r_ichk((*(P1020)rt_nil_check(F->e_832)).ival);
(*(P1020)rt_nil_check(F->x_2441)).flag = rt_r_ichk((*(P1020)rt_nil_check(F->e_832)).flag);
(*(P1020)rt_nil_check(F->x_2441)).name = (*(P1020)rt_nil_check(F->e_832)).name;
(*(P1020)rt_nil_check(F->x_2441)).tag = (*(P1020)rt_nil_check(F->e_832)).tag;
(*(P1020)rt_nil_check(F->x_2441)).a = (*(P1020)rt_nil_check(F->e_832)).a;
(*(P1020)rt_nil_check(F->x_2441)).b = (*(P1020)rt_nil_check(F->e_832)).b;
(*(P1020)rt_nil_check(F->x_2441)).c = (*(P1020)rt_nil_check(F->e_832)).c;
(*(P1020)rt_nil_check(F->x_2441)).d = (*(P1020)rt_nil_check(F->e_832)).d;
F->result_ = F->x_2441;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1020 f_wrap_apply_835(P1020 e_834) {
  struct f_wrap_apply_835fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_834 = e_834;
F->x_2443 = NULL;
F->x_2443 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1020)rt_nil_check(F->e_834)).line));
(*(P1020)rt_nil_check(F->x_2443)).a = F->e_834;
F->result_ = F->x_2443;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_c_string_837(rstr *s_836) {
  struct f_c_string_837fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_836 = s_836;
F->n_2444 = RT_R_IUNDEF;
F->n_2444 = ((rt_int)0LL);
{ rt_int lo2446 = ((rt_int)1LL), hi2447 = ((rt_int)(((*F->s_836)).len));
for (rt_int it2448 = lo2446; it2448 <= hi2447; it2448++) {
F->i_2445 = it2448;
if (((rt_r_echk(rt_str_get((*F->s_836), F->i_2445)) == 92) || (rt_r_echk(rt_str_get((*F->s_836), F->i_2445)) == 63))) {
F->n_2444 = rt_add(rt_r_ichk(F->n_2444), ((rt_int)1LL));
}
}
}
{
F->r_2449 = rt_str_new(rt_add(rt_add(((rt_int)(((*F->s_836)).len)), rt_r_ichk(F->n_2444)), ((rt_int)2LL)));
F->j_2450 = RT_R_IUNDEF;
F->j_2450 = ((rt_int)1LL);
(*rt_str_at(&F->r_2449, ((rt_int)1LL))) = 34;
{ rt_int lo2452 = ((rt_int)1LL), hi2453 = ((rt_int)(((*F->s_836)).len));
for (rt_int it2454 = lo2452; it2454 <= hi2453; it2454++) {
F->i_2451 = it2454;
F->j_2450 = rt_add(rt_r_ichk(F->j_2450), ((rt_int)1LL));
if (((rt_r_echk(rt_str_get((*F->s_836), F->i_2451)) == 92) || (rt_r_echk(rt_str_get((*F->s_836), F->i_2451)) == 63))) {
(*rt_str_at(&F->r_2449, rt_r_ichk(F->j_2450))) = 92;
F->j_2450 = rt_add(rt_r_ichk(F->j_2450), ((rt_int)1LL));
}
(*rt_str_at(&F->r_2449, rt_r_ichk(F->j_2450))) = rt_r_echk(rt_str_get((*F->s_836), F->i_2451));
}
}
(*rt_str_at(&F->r_2449, rt_add(rt_r_ichk(F->j_2450), ((rt_int)1LL)))) = 34;
F->result_ = F->r_2449;
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1026 f_enum_type_of_840(rstr *lit_838, rt_int line_839) {
  struct f_enum_type_of_840fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->lit_838 = lit_838;
F->line_839 = line_839;
F->y_2455 = NULL;
F->y_2455 = g_scope_stack_1064;
F->c_2456 = NULL;
if ((f_lit_index_265((*(P1026)rt_nil_check(g_ty_ascii_1107)).lits, &(*F->lit_838)) >= ((rt_int)0LL))) {
F->result_ = g_ty_ascii_1107;
goto ret_;
}
while ((F->y_2455 != NULL)) {
if (((((rt_r_ichk((*(P1030)rt_nil_check(F->y_2455)).kind) == (((rt_int)6LL))) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_2455)).kind) == (((rt_int)5LL)))) && ((*(P1030)rt_nil_check(F->y_2455)).st != NULL)) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_2455)).st)).kind) == (((rt_int)72LL))))) {
if ((f_lit_index_265((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_2455)).st)).a, &(*F->lit_838)) >= ((rt_int)0LL))) {
if ((rt_r_ichk((*(P1030)rt_nil_check(F->y_2455)).kind) == (((rt_int)5LL)))) {
F->st_2457 = NULL;
F->st_2457 = f_nn_65((((rt_int)80LL)), F->line_839);
(*(P1020)rt_nil_check(F->st_2457)).name = (*(P1030)rt_nil_check(F->y_2455)).name;
F->result_ = f_resolve_subtype_268(F->st_2457, &F->c_2456);
goto ret_;
}
F->result_ = f_resolve_subtype_268((*(P1030)rt_nil_check(F->y_2455)).st, &F->c_2456);
goto ret_;
}
}
F->y_2455 = (*(P1030)rt_nil_check(F->y_2455)).stack;
}
f_fail_23(F->line_839, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("cannot tell the type of ", 24), f_chs_5(39)), (*F->lit_838)); b_; }));
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_ptr_attribute_842(P1020 e_841) {
  struct f_ptr_attribute_842fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_841 = e_841;
F->lv_2458 = NULL;
F->t_2459 = NULL;
F->c_2460 = NULL;
F->ro_2461 = RT_R_EUNDEF;
F->p_2462 = NULL;
F->saved_2463 = NULL;
F->saved_2463 = g_code_1074;
if ((!f_is_lvalue_757((*(P1020)rt_nil_check(F->e_841)).a))) {
F->result_ = 0;
goto ret_;
}
g_code_1074 = f_new_buffer_24();
f_lvalue_763((*(P1020)rt_nil_check(F->e_841)).a, &F->lv_2458, &F->t_2459, &F->c_2460, &F->ro_2461);
g_code_1074 = F->saved_2463;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->t_2459)).kind) != (((rt_int)8LL))) || ((*(P1026)rt_nil_check(F->t_2459)).decl == NULL))) {
F->result_ = 0;
goto ret_;
}
F->p_2462 = (*(P1020)rt_nil_check((*(P1026)rt_nil_check(F->t_2459)).decl)).d;
while ((F->p_2462 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2462)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_841)).name))->all))) {
F->result_ = 1;
goto ret_;
}
F->p_2462 = (*(P1020)rt_nil_check(F->p_2462)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_attribute_845(P1020 e_843, P1026 *t_844) {
  struct f_attribute_845fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_843 = e_843;
F->t_844 = t_844;
F->t_844v = *F->t_844;
F->bt_2464 = NULL;
F->c_2465 = NULL;
F->base_2466 = NULL;
F->sub_2467 = NULL;
F->sub_2467 = f_as_subtype_297((*(P1020)rt_nil_check(F->e_843)).a);
F->name_2468 = rt_str_copy((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_843)).name))->all));
if ((F->sub_2467 != NULL)) {
F->bt_2464 = f_resolve_subtype_268(F->sub_2467, &F->c_2465);
} else {
F->bt_2464 = f_value_subtype_290((*(P1020)rt_nil_check(F->e_843)).a, &F->c_2465, &F->base_2466);
}
if (((((rt_r_ichk((*(P1026)rt_nil_check(F->bt_2464)).kind) == (((rt_int)8LL))) && (F->c_2465 != NULL)) && ((*(P1022)rt_nil_check(F->c_2465)).args != NULL)) && ((*(P1026)rt_nil_check(F->bt_2464)).decl != NULL))) {
F->p_2469 = NULL;
F->p_2469 = (*(P1020)rt_nil_check((*(P1026)rt_nil_check(F->bt_2464)).decl)).d;
F->a_2470 = NULL;
F->a_2470 = (*(P1022)rt_nil_check(F->c_2465)).args;
while (((F->p_2469 != NULL) && (F->a_2470 != NULL))) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2469)).name))->all), F->name_2468)) {
F->pc_2471 = NULL;
F->v_2472 = rt_str_copy(f_gexpr_794(F->a_2470, f_resolve_subtype_268((*(P1020)rt_nil_check(F->p_2469)).a, &F->pc_2471), &F->t_844v));
F->result_ = F->v_2472;
goto ret_;
}
F->p_2469 = (*(P1020)rt_nil_check(F->p_2469)).next;
F->a_2470 = (*(P1020)rt_nil_check(F->a_2470)).next;
}
}
while (((rt_r_ichk((*(P1026)rt_nil_check(F->bt_2464)).kind) == (((rt_int)8LL))) && (F->base_2466 != NULL))) {
f_finish_ptr_469(F->bt_2464);
F->base_2466 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_deref_755(&(((P1013)rt_nil_check(F->base_2466))->all), F->bt_2464); b_; }));
F->bt_2464 = (*(P1026)rt_nil_check(F->bt_2464)).target;
F->c_2465 = NULL;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->bt_2464)).kind) == (((rt_int)5LL)))) {
F->c_2465 = f_new_cons_184();
(*(P1022)rt_nil_check(F->c_2465)).slen = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1013)rt_nil_check(F->base_2466))->all)), rt_str(").len", 5)); b_; }));
}
}
if (((((rt_r_ichk((*(P1026)rt_nil_check(F->bt_2464)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->bt_2464)).tparams != NULL)) && (F->c_2465 != NULL)) && ((*(P1022)rt_nil_check(F->c_2465)).args != NULL))) {
F->p_2473 = NULL;
F->p_2473 = (*(P1026)rt_nil_check(F->bt_2464)).tparams;
F->a_2474 = NULL;
F->a_2474 = (*(P1022)rt_nil_check(F->c_2465)).args;
while (((F->p_2473 != NULL) && (F->a_2474 != NULL))) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2473)).name))->all), F->name_2468)) {
F->pt_2475 = f_tparam_type_352(F->bt_2464, &F->name_2468);
F->v_2476 = rt_str_copy(f_gexpr_794(F->a_2474, F->pt_2475, &F->t_844v));
F->result_ = F->v_2476;
goto ret_;
}
F->p_2473 = (*(P1020)rt_nil_check(F->p_2473)).next;
F->a_2474 = (*(P1020)rt_nil_check(F->a_2474)).next;
}
}
if (((rt_r_ichk((*(P1026)rt_nil_check(F->bt_2464)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->bt_2464)).tparams == NULL))) {
F->c_2465 = f_base_cons_226(F->bt_2464, F->c_2465);
F->bt_2464 = f_base_of_223(F->bt_2464);
}
F->t_844v = g_ty_int_1104;
if ((rt_str_eq(F->name_2468, rt_str("LEN", 3)) && (rt_r_ichk((*(P1026)rt_nil_check(F->bt_2464)).kind) == (((rt_int)5LL))))) {
if (((F->c_2465 != NULL) && ((*(P1022)rt_nil_check(F->c_2465)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_2465)).slen))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_843)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the length of this string subtype is not known", 46); b_; }));
} else if ((rt_str_eq(F->name_2468, rt_str("LEN", 3)) && (rt_r_ichk((*(P1026)rt_nil_check(F->bt_2464)).kind) == (((rt_int)12LL))))) {
if (((F->c_2465 != NULL) && ((*(P1022)rt_nil_check(F->c_2465)).lo != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_2465)).lo))->all)), rt_str("))", 2));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_843)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the size of this mailbox subtype is not known", 45); b_; }));
} else if (((rt_str_eq(F->name_2468, rt_str("MIN", 3)) || rt_str_eq(F->name_2468, rt_str("MAX", 3))) && f_scalar_kind_186(F->bt_2464))) {
F->t_844v = F->bt_2464;
if (rt_str_eq(F->name_2468, rt_str("MIN", 3))) {
F->result_ = f_sub_lo_198(F->bt_2464, F->c_2465);
goto ret_;
}
F->result_ = f_sub_hi_201(F->bt_2464, F->c_2465);
goto ret_;
} else if ((rt_str_eq(F->name_2468, rt_str("PREC", 4)) && (rt_r_ichk((*(P1026)rt_nil_check(F->bt_2464)).kind) == (((rt_int)3LL))))) {
if (((F->c_2465 != NULL) && ((*(P1022)rt_nil_check(F->c_2465)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), (((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_2465)).prec))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (((rt_str_eq(F->name_2468, rt_str("ACCESS", 6)) || rt_str_eq(F->name_2468, rt_str("USE", 3))) && (rt_r_ichk((*(P1026)rt_nil_check(F->bt_2464)).kind) == (((rt_int)10LL))))) {
F->result_ = f_file_attribute_858(F->e_843, F->bt_2464, F->c_2465, F->base_2466, &F->t_844v);
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_843)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(F->name_2468, rt_str(" is not an attribute of this subtype", 36)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_844) = F->t_844v;
  RT_FPOP();
  return F->result_;
}

static rstr f_subtype_compare_850(P1020 sa_846, P1020 sb_847, rstr *op_848, rt_int line_849) {
  struct f_subtype_compare_850fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->sa_846 = sa_846;
F->sb_847 = sb_847;
F->op_848 = op_848;
F->line_849 = line_849;
F->ca_2477 = NULL;
F->cb_2478 = NULL;
F->ta_2479 = NULL;
F->ta_2479 = f_resolve_subtype_268(F->sa_846, &F->ca_2477);
F->tb_2480 = NULL;
F->tb_2480 = f_resolve_subtype_268(F->sb_847, &F->cb_2478);
F->r_2481 = NULL;
F->r_2481 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
F->yes_2482 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->yes_2482, rt_str("1", 1));
F->no_2483 = rt_str_new(((rt_int)1LL));
rt_str_assign(&F->no_2483, rt_str("0", 1));
if (rt_str_eq((*F->op_848), rt_str("/=", 2))) {
rt_str_assign(&F->yes_2482, rt_str("0", 1));
rt_str_assign(&F->no_2483, rt_str("1", 1));
}
if ((!f_same_221(F->ta_2479, F->tb_2480))) {
F->result_ = F->no_2483;
goto ret_;
} else if ((((rt_r_ichk((*(P1020)rt_nil_check(F->sa_846)).kind) == (((rt_int)80LL))) && rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->sa_846)).name))->all), rt_str("TYPEOF", 6))) || ((rt_r_ichk((*(P1020)rt_nil_check(F->sb_847)).kind) == (((rt_int)80LL))) && rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->sb_847)).name))->all), rt_str("TYPEOF", 6))))) {
F->result_ = F->yes_2482;
goto ret_;
}
if (f_scalar_kind_186(F->ta_2479)) {
F->r_2481 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), f_sub_lo_198(F->ta_2479, F->ca_2477)), rt_str(") == (", 6)), f_sub_lo_198(F->tb_2480, F->cb_2478)), rt_str(") && (", 6)), f_sub_hi_201(F->ta_2479, F->ca_2477)), rt_str(") == (", 6)), f_sub_hi_201(F->tb_2480, F->cb_2478)), rt_str(")", 1)); b_; }));
if ((rt_r_ichk((*(P1026)rt_nil_check(F->ta_2479)).kind) == (((rt_int)3LL)))) {
F->r_2481 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_2481))->all), rt_str(" && ", 4)), f_float_prec_852(F->ca_2477)), rt_str(" == ", 4)), f_float_prec_852(F->cb_2478)); b_; }));
}
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->ta_2479)).kind) == (((rt_int)5LL)))) {
if (((((F->ca_2477 != NULL) && (F->cb_2478 != NULL)) && ((*(P1022)rt_nil_check(F->ca_2477)).slen != NULL)) && ((*(P1022)rt_nil_check(F->cb_2478)).slen != NULL))) {
F->r_2481 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1013)rt_nil_check((*(P1022)rt_nil_check(F->ca_2477)).slen))->all)), rt_str(") == (", 6)), (((P1013)rt_nil_check((*(P1022)rt_nil_check(F->cb_2478)).slen))->all)), rt_str(")", 1)); b_; }));
} else if ((!(((F->ca_2477 == NULL) || ((*(P1022)rt_nil_check(F->ca_2477)).slen == NULL)) && ((F->cb_2478 == NULL) || ((*(P1022)rt_nil_check(F->cb_2478)).slen == NULL))))) {
F->r_2481 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->ta_2479)).kind) == (((rt_int)6LL)))) {
{ rt_int lo2485 = ((rt_int)1LL), hi2486 = rt_r_ichk((*(P1026)rt_nil_check(F->ta_2479)).ndim);
for (rt_int it2487 = lo2485; it2487 <= hi2486; it2487++) {
F->k_2484 = it2487;
if (((((F->ca_2477 != NULL) && (F->cb_2478 != NULL)) && (f_cons_lo_252(F->ca_2477, F->k_2484) != NULL)) && (f_cons_lo_252(F->cb_2478, F->k_2484) != NULL))) {
F->r_2481 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_2481))->all), rt_str(" && (", 5)), (((P1013)rt_nil_check(f_cons_lo_252(F->ca_2477, F->k_2484)))->all)), rt_str(") == (", 6)), (((P1013)rt_nil_check(f_cons_lo_252(F->cb_2478, F->k_2484)))->all)), rt_str(") && (", 6)), (((P1013)rt_nil_check(f_cons_hi_255(F->ca_2477, F->k_2484)))->all)), rt_str(") == (", 6)), (((P1013)rt_nil_check(f_cons_hi_255(F->cb_2478, F->k_2484)))->all)), rt_str(")", 1)); b_; }));
}
}
}
} else if (((((rt_r_ichk((*(P1026)rt_nil_check(F->ta_2479)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->ta_2479)).tparams != NULL)) && (F->ca_2477 != NULL)) && (F->cb_2478 != NULL))) {
F->a_2488 = NULL;
F->a_2488 = (*(P1022)rt_nil_check(F->ca_2477)).args;
F->b_2489 = NULL;
F->b_2489 = (*(P1022)rt_nil_check(F->cb_2478)).args;
F->at_2490 = NULL;
F->bt2_2491 = NULL;
while (((F->a_2488 != NULL) && (F->b_2489 != NULL))) {
F->x_2492 = rt_str_copy(f_gexpr_794(F->a_2488, NULL, &F->at_2490));
F->y_2493 = rt_str_copy(f_gexpr_794(F->b_2489, F->at_2490, &F->bt2_2491));
F->r_2481 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_2481))->all), rt_str(" && ", 4)), f_eq_code_418(F->at_2490, &F->x_2492, &F->y_2493)); b_; }));
F->a_2488 = (*(P1020)rt_nil_check(F->a_2488)).next;
F->b_2489 = (*(P1020)rt_nil_check(F->b_2489)).next;
}
} else if ((((rt_r_ichk((*(P1026)rt_nil_check(F->ta_2479)).kind) == (((rt_int)17LL))) && (F->ca_2477 != NULL)) && (F->cb_2478 != NULL))) {
if ((((*(P1022)rt_nil_check(F->ca_2477)).lo != NULL) && ((*(P1022)rt_nil_check(F->cb_2478)).lo != NULL))) {
F->r_2481 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1013)rt_nil_check((*(P1022)rt_nil_check(F->ca_2477)).lo))->all)), rt_str(") == (", 6)), (((P1013)rt_nil_check((*(P1022)rt_nil_check(F->cb_2478)).lo))->all)), rt_str(")", 1)); b_; }));
} else if ((((*(P1022)rt_nil_check(F->ca_2477)).lo != NULL) || ((*(P1022)rt_nil_check(F->cb_2478)).lo != NULL))) {
F->r_2481 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
}
}
if (rt_str_eq((*F->op_848), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!(", 3), (((P1013)rt_nil_check(F->r_2481))->all)), rt_str("))", 2));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1013)rt_nil_check(F->r_2481))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_float_prec_852(P1022 c_851) {
  struct f_float_prec_852fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->c_851 = c_851;
if (((F->c_851 != NULL) && ((*(P1022)rt_nil_check(F->c_851)).prec != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_851)).prec))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str("15", 2);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_attribute_858(P1020 e_853, P1026 bt_854, P1022 c_855, P1013 base_856, P1026 *t_857) {
  struct f_file_attribute_858fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_853 = e_853;
F->bt_854 = bt_854;
F->c_855 = c_855;
F->base_856 = base_856;
F->t_857 = t_857;
F->t_857v = *F->t_857;
F->t_857v = g_file_mode_type_1115;
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_853)).name))->all), rt_str("ACCESS", 6))) {
F->t_857v = g_file_access_type_1121;
}
if ((F->base_856 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_853)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_access(", 17), (((P1013)rt_nil_check(F->base_856))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_file_use(", 14), (((P1013)rt_nil_check(F->base_856))->all)), rt_str(")", 1));
goto ret_;
} else if (((F->c_855 != NULL) && ((*(P1022)rt_nil_check(F->c_855)).args != NULL))) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_853)).name))->all), rt_str("ACCESS", 6))) {
F->result_ = f_gexpr_794((*(P1022)rt_nil_check(F->c_855)).args, F->t_857v, &F->t_857v);
goto ret_;
} else if (((*(P1020)rt_nil_check((*(P1022)rt_nil_check(F->c_855)).args)).next != NULL)) {
F->result_ = f_gexpr_794((*(P1020)rt_nil_check((*(P1022)rt_nil_check(F->c_855)).args)).next, F->t_857v, &F->t_857v);
goto ret_;
}
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_853)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("the ", 4), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_853)).name))->all)), rt_str(" of this file subtype is not known", 34)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_857) = F->t_857v;
  RT_FPOP();
  return F->result_;
}

static rstr f_gbinop_862(P1020 e_859, P1026 want_860, P1026 *t_861) {
  struct f_gbinop_862fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_859 = e_859;
F->want_860 = want_860;
F->t_861 = t_861;
F->t_861v = *F->t_861;
F->op_2494 = NULL;
F->op_2494 = (*(P1020)rt_nil_check(F->e_859)).name;
F->ta_2495 = NULL;
F->tb_2496 = NULL;
F->hint_2497 = NULL;
F->uy_2498 = NULL;
F->t_861v = g_ty_bool_1105;
if (((((rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("/=", 2)) || rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str(">", 1))) || rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("<=", 2))) || rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str(">=", 2))) && (f_derived_relation_823(F->e_859) != NULL))) {
F->result_ = f_gexpr_794(f_derived_relation_823(F->e_859), g_ty_bool_1105, &F->t_861v);
goto ret_;
}
if ((f_lookup_163(&(((P1013)rt_nil_check(F->op_2494))->all)) != NULL)) {
F->l_2499 = NULL;
F->r_2500 = NULL;
F->l_2499 = f_copy_node_833((*(P1020)rt_nil_check(F->e_859)).a);
F->r_2500 = f_copy_node_833((*(P1020)rt_nil_check(F->e_859)).b);
(*(P1020)rt_nil_check(F->l_2499)).next = F->r_2500;
F->uy_2498 = f_user_op_938(&(((P1013)rt_nil_check(F->op_2494))->all), F->l_2499);
if ((F->uy_2498 != NULL)) {
F->call_2501 = NULL;
F->call_2501 = f_nn_65((((rt_int)10LL)), rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
F->fname_2502 = NULL;
F->fname_2502 = f_nn_65((((rt_int)7LL)), rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
(*(P1020)rt_nil_check(F->fname_2502)).name = F->op_2494;
(*(P1020)rt_nil_check(F->call_2501)).a = F->fname_2502;
(*(P1020)rt_nil_check(F->call_2501)).b = F->l_2499;
F->result_ = f_gcall_942(F->call_2501, 0, &F->t_861v);
goto ret_;
}
}
if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("IN", 2))) {
F->s_2503 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_859)).b, NULL, &F->tb_2496));
if ((rt_r_ichk((*(P1026)rt_nil_check(F->tb_2496)).kind) != (((rt_int)16LL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("IN needs a set", 14); b_; }));
}
{
F->a_2504 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_859)).a, (*(P1026)rt_nil_check(F->tb_2496)).elem, &F->ta_2495));
f_check_type_232(F->ta_2495, (*(P1026)rt_nil_check(F->tb_2496)).elem, rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
F->t_861v = g_ty_bool_1105;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_in(", 9), F->a_2504), rt_str(", ", 2)), F->s_2503), rt_str(")", 1));
goto ret_;
}
}
if ((((rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("AND", 3)) || rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("OR", 2))) || rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("XOR", 3))) && (f_set_operands_813(F->e_859, F->want_860) != NULL))) {
F->a_2505 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_859)).a, f_set_operands_813(F->e_859, F->want_860), &F->ta_2495));
F->b_2506 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_859)).b, F->ta_2495, &F->tb_2496));
f_check_type_232(F->tb_2496, F->ta_2495, rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
F->t_861v = F->ta_2495;
if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_inter(", 12), F->a_2505), rt_str(", ", 2)), F->b_2506), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_union(", 12), F->a_2505), rt_str(", ", 2)), F->b_2506), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_xor(", 10), F->a_2505), rt_str(", ", 2)), F->b_2506), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("AND", 3)) || rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("OR", 2))) || rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("XOR", 3)))) {
F->a_2507 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_859)).a, g_ty_bool_1105, &F->ta_2495));
F->b_2508 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_859)).b, g_ty_bool_1105, &F->tb_2496));
f_check_type_232(F->ta_2495, g_ty_bool_1105, rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
f_check_type_232(F->tb_2496, g_ty_bool_1105, rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("AND", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2507), rt_str(" && ", 4)), F->b_2508), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("OR", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2507), rt_str(" || ", 4)), F->b_2508), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2507), rt_str(" != ", 4)), F->b_2508), rt_str(")", 1));
goto ret_;
}
if (((rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("&", 1)) && (F->want_860 != NULL)) && ((*(P1026)rt_nil_check(f_base_of_223(F->want_860))).kind == (((rt_int)6LL))))) {
F->at_2509 = NULL;
F->at_2509 = f_base_of_223(F->want_860);
F->a_2510 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_859)).a, F->at_2509, &F->ta_2495));
F->b_2511 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_859)).b, F->at_2509, &F->tb_2496));
f_check_type_232(F->ta_2495, F->at_2509, rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
f_check_type_232(F->tb_2496, F->at_2509, rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
if (((rt_r_ichk((*(P1026)rt_nil_check(F->at_2509)).ndim) != ((rt_int)1LL)) || ((*(P1026)rt_nil_check(f_base_of_223((*(P1026)rt_nil_check(F->at_2509)).idx))).kind != (((rt_int)1LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& catenates one-dimensional arrays indexed by INT", 49); b_; }));
}
f_need_slice_775(F->at_2509);
F->t_861v = F->at_2509;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_234(F->at_2509)), rt_str("(", 1)), F->a_2510), rt_str(", ", 2)), F->b_2511), rt_str(")", 1));
goto ret_;
}
if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("&", 1))) {
F->wa_2512 = NULL;
F->wb_2513 = NULL;
F->ws_2514 = NULL;
F->ce_2515 = NULL;
F->ce_2515 = g_ty_ascii_1107;
if (((F->want_860 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->want_860)).kind) == (((rt_int)5LL))))) {
F->ws_2514 = F->want_860;
F->ce_2515 = f_str_elem_218(F->want_860);
}
if ((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_859)).a)).kind) == (((rt_int)4LL)))) {
F->wa_2512 = F->ce_2515;
} else {
F->wa_2512 = F->ws_2514;
}
if ((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_859)).b)).kind) == (((rt_int)4LL)))) {
F->wb_2513 = F->ce_2515;
} else {
F->wb_2513 = F->ws_2514;
}
{
F->a_2516 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_859)).a, F->wa_2512, &F->ta_2495));
F->b_2517 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_859)).b, F->wb_2513, &F->tb_2496));
F->t_861v = g_ty_string_1108;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->ta_2495)).kind) == (((rt_int)5LL)))) {
F->t_861v = F->ta_2495;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->tb_2496)).kind) == (((rt_int)5LL)))) {
F->t_861v = F->tb_2496;
} else if ((!f_same_221(F->ta_2495, g_ty_ascii_1107))) {
F->t_861v = f_new_typ_183((((rt_int)5LL)));
(*(P1026)rt_nil_check(F->t_861v)).elem = F->ta_2495;
}
if (((rt_r_ichk((*(P1026)rt_nil_check(F->ta_2495)).kind) == (((rt_int)6LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->tb_2496)).kind) == (((rt_int)6LL))))) {
f_need_slice_775(F->ta_2495);
f_check_type_232(F->tb_2496, F->ta_2495, rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
F->t_861v = F->ta_2495;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_acat_", 10), f_ctype_234(F->ta_2495)), rt_str("(", 1)), F->a_2516), rt_str(", ", 2)), F->b_2517), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->ta_2495)).kind) == (((rt_int)5LL)))) {
f_check_type_232(f_str_cat_part_808(F->tb_2496), f_str_elem_218(F->ta_2495), rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->tb_2496)).kind) == (((rt_int)5LL)))) {
f_check_type_232(F->ta_2495, f_str_elem_218(F->tb_2496), rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
} else {
f_check_type_232(F->tb_2496, F->ta_2495, rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
}
if (((rt_r_ichk((*(P1026)rt_nil_check(F->ta_2495)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->tb_2496)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cat(", 11), F->a_2516), rt_str(", ", 2)), F->b_2517), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->ta_2495)).kind) == (((rt_int)5LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->tb_2496)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_catc(", 12), F->a_2516), rt_str(", ", 2)), F->b_2517), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->ta_2495)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->tb_2496)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_ccat(", 12), F->a_2516), rt_str(", ", 2)), F->b_2517), rt_str(")", 1));
goto ret_;
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->ta_2495)).kind) == (((rt_int)4LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->tb_2496)).kind) == (((rt_int)4LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_cc(", 10), F->a_2516), rt_str(", ", 2)), F->b_2517), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("& needs strings or characters", 29); b_; }));
}
}
if ((((rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("=", 1)) || rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("/=", 2))) && (f_as_subtype_297((*(P1020)rt_nil_check(F->e_859)).a) != NULL)) && (f_as_subtype_297((*(P1020)rt_nil_check(F->e_859)).b) != NULL))) {
F->t_861v = g_ty_bool_1105;
F->result_ = f_subtype_compare_850(f_as_subtype_297((*(P1020)rt_nil_check(F->e_859)).a), f_as_subtype_297((*(P1020)rt_nil_check(F->e_859)).b), &(((P1013)rt_nil_check(F->op_2494))->all), rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
goto ret_;
}
if ((f_is_rel_111(&(((P1013)rt_nil_check(F->op_2494))->all)) && (!rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("IN", 2))))) {
if ((((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_859)).a)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_859)).a)).kind) == (((rt_int)6LL)))) || (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_859)).a)).kind) == (((rt_int)1LL))))) {
F->dummy_2518 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_859)).b, NULL, &F->hint_2497));
} else if ((rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->e_859)).a)).kind) == (((rt_int)14LL)))) {
F->hint_2497 = f_peek_type_810((*(P1020)rt_nil_check(F->e_859)).b);
}
{
F->a_2519 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_859)).a, F->hint_2497, &F->ta_2495));
F->b_2520 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_859)).b, F->ta_2495, &F->tb_2496));
F->ct_2521 = NULL;
F->ct_2521 = f_base_of_223(F->ta_2495);
F->t_861v = g_ty_bool_1105;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->ta_2495)).kind) != (((rt_int)11LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->tb_2496)).kind) != (((rt_int)11LL))))) {
f_check_type_232(F->tb_2496, F->ta_2495, rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->ta_2495)).kind) == (((rt_int)11LL)))) {
F->ct_2521 = f_base_of_223(F->tb_2496);
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->ct_2521)).kind) == (((rt_int)5LL)))) {
if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_eq(", 10), F->a_2519), rt_str(", ", 2)), F->b_2520), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!rt_str_eq(", 12), F->a_2519), rt_str(", ", 2)), F->b_2520), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->a_2519), rt_str(", ", 2)), F->b_2520), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->a_2519), rt_str(", ", 2)), F->b_2520), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str(">", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_lt(", 10), F->b_2520), rt_str(", ", 2)), F->a_2519), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_str_le(", 10), F->b_2520), rt_str(", ", 2)), F->a_2519), rt_str(")", 1));
goto ret_;
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->ct_2521)).kind) == (((rt_int)16LL)))) {
if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_eq(", 9), F->a_2519), rt_str(", ", 2)), F->b_2520), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(!y_set_eq(", 11), F->a_2519), rt_str(", ", 2)), F->b_2520), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("<=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->a_2519), rt_str(", ", 2)), F->b_2520), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str(">=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_le(", 12), F->b_2520), rt_str(", ", 2)), F->a_2519), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("<", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->a_2519), rt_str(", ", 2)), F->b_2520), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_set_lt(", 12), F->b_2520), rt_str(", ", 2)), F->a_2519), rt_str(")", 1));
goto ret_;
}
if ((((((((rt_r_ichk((*(P1026)rt_nil_check(F->ct_2521)).kind) == (((rt_int)2LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->ct_2521)).kind) == (((rt_int)8LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->ct_2521)).kind) == (((rt_int)11LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->ct_2521)).kind) == (((rt_int)14LL)))) || (rt_r_ichk((*(P1026)rt_nil_check(F->ct_2521)).kind) == (((rt_int)12LL)))) && (!rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("=", 1)))) && (!rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("/=", 2))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("only = and /= compare values of this type", 41); b_; }));
}
if (f_composite_394(F->ct_2521)) {
if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("=", 1))) {
F->result_ = f_eq_code_418(F->ct_2521, &F->a_2519, &F->b_2520);
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("(!", 2), f_eq_code_418(F->ct_2521, &F->a_2519, &F->b_2520)), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("no ordering for composite values", 32); b_; }));
}
if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("=", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2519), rt_str(" == ", 4)), F->b_2520), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("/=", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2519), rt_str(" != ", 4)), F->b_2520), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), F->a_2519), rt_str(" ", 1)), (((P1013)rt_nil_check(F->op_2494))->all)), rt_str(" ", 1)), F->b_2520), rt_str(")", 1));
goto ret_;
}
}
{
F->a_2522 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_859)).a, F->want_860, &F->ta_2495));
F->b_2523 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->e_859)).b, f_exponent_want_969(&(((P1013)rt_nil_check(F->op_2494))->all), F->ta_2495), &F->tb_2496));
if (((rt_r_ichk((*(P1026)rt_nil_check(F->ta_2495)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1026)rt_nil_check(F->tb_2496)).kind) == (((rt_int)3LL))))) {
F->t_861v = g_ty_float_1106;
if (((rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("+", 1)) || rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("-", 1))) || rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("*", 1)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(", 10), F->a_2522), rt_str(" ", 1)), (((P1013)rt_nil_check(F->op_2494))->all)), rt_str(" ", 1)), F->b_2523), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("/", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fovf(rt_fdiv(", 18), F->a_2522), rt_str(", ", 2)), F->b_2523), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("**", 2))) {
f_check_type_232(F->tb_2496, g_ty_int_1104, rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fpow(", 10), F->a_2522), rt_str(", ", 2)), F->b_2523), rt_str(")", 1));
goto ret_;
}
}
f_check_type_232(F->ta_2495, g_ty_int_1104, rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
f_check_type_232(F->tb_2496, g_ty_int_1104, rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line));
F->t_861v = g_ty_int_1104;
if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("+", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2522), rt_str(", ", 2)), F->b_2523), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("-", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2522), rt_str(", ", 2)), F->b_2523), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("*", 1))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mul(", 7), F->a_2522), rt_str(", ", 2)), F->b_2523), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("DIV", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_div(", 7), F->a_2522), rt_str(", ", 2)), F->b_2523), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("MOD", 3))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_mod(", 7), F->a_2522), rt_str(", ", 2)), F->b_2523), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((((P1013)rt_nil_check(F->op_2494))->all), rt_str("**", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_pow(", 7), F->a_2522), rt_str(", ", 2)), F->b_2523), rt_str(")", 1));
goto ret_;
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_859)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("operator ", 9), (((P1013)rt_nil_check(F->op_2494))->all)), rt_str(" is not defined for INT", 23)); b_; }));
}
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_861) = F->t_861v;
  RT_FPOP();
  return F->result_;
}

static rstr f_constructor_867(P1020 e_863, P1026 want_864, P1022 ctx_865, P1026 *t_866) {
  struct f_constructor_867fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_863 = e_863;
F->want_864 = want_864;
F->ctx_865 = ctx_865;
F->t_866 = t_866;
F->t_866v = *F->t_866;
F->it_2524 = NULL;
F->it_2524 = (*(P1020)rt_nil_check(F->e_863)).a;
F->f_2525 = NULL;
F->vt_2526 = NULL;
if (((F->want_864 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->want_864)).kind) == (((rt_int)16LL))))) {
F->s_2527 = NULL;
F->s_2527 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_empty_set_306(F->want_864); b_; }));
F->t_866v = F->want_864;
while ((F->it_2524 != NULL)) {
F->v_2528 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->it_2524)).b, (*(P1026)rt_nil_check(F->want_864)).elem, &F->vt_2526));
f_check_type_232(F->vt_2526, (*(P1026)rt_nil_check(F->want_864)).elem, rt_r_ichk((*(P1020)rt_nil_check(F->e_863)).line));
F->s_2527 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("y_set_add(", 10), (((P1013)rt_nil_check(F->s_2527))->all)), rt_str(", ", 2)), F->v_2528), rt_str(")", 1)); b_; }));
F->it_2524 = (*(P1020)rt_nil_check(F->it_2524)).next;
}
F->result_ = (((P1013)rt_nil_check(F->s_2527))->all);
goto ret_;
}
if (((F->want_864 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->want_864)).kind) == (((rt_int)15LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_863)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor for ", 18), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->want_864)).name))->all)), rt_str(" needs the underlying type", 26)); b_; }));
}
if (((F->want_864 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->want_864)).kind) == (((rt_int)6LL))))) {
F->result_ = f_array_cons_881(F->e_863, F->want_864, F->ctx_865, &F->t_866v);
goto ret_;
}
if (((F->want_864 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->want_864)).kind) == (((rt_int)17LL))))) {
if ((((((F->it_2524 == NULL) || ((*(P1020)rt_nil_check(F->it_2524)).next != NULL)) || ((*(P1020)rt_nil_check(F->it_2524)).a == NULL)) || ((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->it_2524)).a)).next != NULL)) || (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->it_2524)).a)).a)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_863)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a union constructor gives one named component", 45); b_; }));
}
F->f_2525 = (*(P1026)rt_nil_check(F->want_864)).fields;
{
F->i_2529 = RT_R_IUNDEF;
F->i_2529 = ((rt_int)0LL);
F->tmp_2530 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("uc", 2); b_; })));
while (((F->f_2525 != NULL) && (!rt_str_eq((((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_2525)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->it_2524)).a)).a)).name))->all))))) {
F->i_2529 = rt_add(rt_r_ichk(F->i_2529), ((rt_int)1LL));
F->f_2525 = (*(P1028)rt_nil_check(F->f_2525)).next;
}
if ((F->f_2525 == NULL)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_863)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("no component ", 13), (((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->it_2524)).a)).a)).name))->all)); b_; }));
}
F->t_866v = F->want_864;
g_cons_ctx_1095 = (*(P1028)rt_nil_check(F->f_2525)).c;
{
F->v_2531 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->it_2524)).b, (*(P1028)rt_nil_check(F->f_2525)).t, &F->vt_2526));
f_check_type_232(F->vt_2526, (*(P1028)rt_nil_check(F->f_2525)).t, rt_r_ichk((*(P1020)rt_nil_check(F->e_863)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->want_864)), rt_str(" ", 1)), F->tmp_2530), rt_str("; ", 2)), F->tmp_2530), rt_str(".tag = ", 7)), f_itos_7(rt_r_ichk(F->i_2529))), rt_str("; ", 2)), F->tmp_2530), rt_str(".u.", 3)), f_field_c_17(&(((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_2525)).name))->all))), rt_str(" = ", 3)), f_comp_value_871((*(P1028)rt_nil_check(F->f_2525)).t, (*(P1028)rt_nil_check(F->f_2525)).c, &F->v_2531)), rt_str("; ", 2)), F->tmp_2530), rt_str("; })", 4));
goto ret_;
}
}
}
if (((F->want_864 == NULL) || (rt_r_ichk((*(P1026)rt_nil_check(F->want_864)).kind) != (((rt_int)7LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_863)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the type of this constructor is not known here", 46); b_; }));
}
F->t_866v = F->want_864;
F->f_2525 = (*(P1026)rt_nil_check(F->want_864)).fields;
{
F->tmp_2532 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rc", 2); b_; })));
F->parts_2533 = NULL;
F->parts_2533 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->want_864)), rt_str(" ", 1)), F->tmp_2532), rt_str(";", 1)); b_; }));
while ((F->it_2524 != NULL)) {
F->k_2534 = NULL;
F->k_2534 = (*(P1020)rt_nil_check(F->it_2524)).a;
F->shared_2535 = NULL;
if ((F->k_2534 == NULL)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_863)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor names its components", 41); b_; }));
}
while ((F->k_2534 != NULL)) {
if (((((F->f_2525 == NULL) || (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->k_2534)).a)).kind) != (((rt_int)7LL)))) || ((*(P1020)rt_nil_check(F->k_2534)).b != NULL)) || (!rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->k_2534)).a)).name))->all), (((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_2525)).name))->all))))) {
if ((F->f_2525 == NULL)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_863)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor has a value for each component, in order", 61); b_; }));
}
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_863)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("component ", 10), (((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_2525)).name))->all)), rt_str(" expected in the constructor", 28)); b_; }));
}
if (((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->it_2524)).a)).next == NULL)) {
g_cons_ctx_1095 = (*(P1028)rt_nil_check(F->f_2525)).c;
{
F->v_2536 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->it_2524)).b, (*(P1028)rt_nil_check(F->f_2525)).t, &F->vt_2526));
f_check_type_232(F->vt_2526, (*(P1028)rt_nil_check(F->f_2525)).t, rt_r_ichk((*(P1020)rt_nil_check(F->e_863)).line));
F->parts_2533 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->parts_2533))->all), rt_str(" ", 1)), F->tmp_2532), rt_str(".", 1)), f_field_c_17(&(((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_2525)).name))->all))), rt_str(" = ", 3)), f_comp_value_871((*(P1028)rt_nil_check(F->f_2525)).t, (*(P1028)rt_nil_check(F->f_2525)).c, &F->v_2536)), rt_str(";", 1)); b_; }));
}
} else {
if ((F->shared_2535 == NULL)) {
F->v_2537 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->it_2524)).b, (*(P1028)rt_nil_check(F->f_2525)).t, &F->vt_2526));
F->shared_2535 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("sv", 2); b_; })); b_; }));
f_check_type_232(F->vt_2526, (*(P1028)rt_nil_check(F->f_2525)).t, rt_r_ichk((*(P1020)rt_nil_check(F->e_863)).line));
F->parts_2533 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->parts_2533))->all), rt_str(" ", 1)), f_ctype_234((*(P1028)rt_nil_check(F->f_2525)).t)), rt_str(" ", 1)), (((P1013)rt_nil_check(F->shared_2535))->all)), rt_str(" = ", 3)), F->v_2537), rt_str(";", 1)); b_; }));
}
f_check_type_232(F->vt_2526, (*(P1028)rt_nil_check(F->f_2525)).t, rt_r_ichk((*(P1020)rt_nil_check(F->e_863)).line));
F->parts_2533 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->parts_2533))->all), rt_str(" ", 1)), F->tmp_2532), rt_str(".", 1)), f_field_c_17(&(((P1013)rt_nil_check((*(P1028)rt_nil_check(F->f_2525)).name))->all))), rt_str(" = ", 3)), f_comp_value_871((*(P1028)rt_nil_check(F->f_2525)).t, (*(P1028)rt_nil_check(F->f_2525)).c, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_414((*(P1028)rt_nil_check(F->f_2525)).t, &(((P1013)rt_nil_check(F->shared_2535))->all)); b_; }))), rt_str(";", 1)); b_; }));
}
F->f_2525 = (*(P1028)rt_nil_check(F->f_2525)).next;
F->k_2534 = (*(P1020)rt_nil_check(F->k_2534)).next;
}
F->it_2524 = (*(P1020)rt_nil_check(F->it_2524)).next;
}
if ((F->f_2525 != NULL)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_863)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a record constructor needs every component", 42); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->parts_2533))->all), rt_str(" ", 1)), F->tmp_2532), rt_str("; })", 4));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_866) = F->t_866v;
  RT_FPOP();
  return F->result_;
}

static rstr f_comp_value_871(P1026 t_868, P1022 c_869, rstr *v_870) {
  struct f_comp_value_871fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_868 = t_868;
F->c_869 = c_869;
F->v_870 = v_870;
if ((((rt_r_ichk((*(P1026)rt_nil_check(F->t_868)).kind) == (((rt_int)15LL))) && ((*(P1026)rt_nil_check(F->t_868)).assignp != NULL)) && (rt_r_echk(g_in_func_1076) || f_top_level_406((*(P1026)rt_nil_check(F->t_868)).assignp)))) {
F->ct_2538 = rt_str_copy(f_ctype_234(F->t_868));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), F->ct_2538), rt_str(" s_ = ", 6)), (*F->v_870)), rt_str("; ", 2)), F->ct_2538), rt_str(" t_ = ", 6)), f_copy_code_414(F->t_868, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s_", 2); b_; }))), rt_str("; ", 2)), f_user_call2_400((*(P1026)rt_nil_check(F->t_868)).assignp, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("t_", 2); b_; }), 1, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("s_", 2); b_; }), 0)), rt_str("; t_; })", 8));
goto ret_;
} else if (((F->c_869 == NULL) || (((*(P1022)rt_nil_check(F->c_869)).lo != NULL) && f_has_at_873(&(((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_869)).lo))->all))))) {
F->result_ = f_copy_code_414(F->t_868, &(*F->v_870));
goto ret_;
} else if ((((rt_r_ichk((*(P1026)rt_nil_check(F->t_868)).kind) == (((rt_int)5LL))) && ((*(P1022)rt_nil_check(F->c_869)).slen != NULL)) && (!f_has_at_873(&(((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_869)).slen))->all))))) {
F->result_ = f_copy_code_414(F->t_868, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_strsub(", 12), (*F->v_870)), rt_str(", ", 2)), (((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_869)).slen))->all)), rt_str(")", 1)); b_; }));
goto ret_;
}
F->result_ = f_checked_213(F->t_868, F->c_869, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_copy_code_414(F->t_868, &(*F->v_870)); b_; }));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_has_at_873(rstr *s_872) {
  struct f_has_at_873fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->s_872 = s_872;
{ rt_int lo2540 = ((rt_int)1LL), hi2541 = ((rt_int)(((*F->s_872)).len));
for (rt_int it2542 = lo2540; it2542 <= hi2541; it2542++) {
F->i_2539 = it2542;
if ((rt_r_echk(rt_str_get((*F->s_872), F->i_2539)) == 64)) {
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

static rstr f_set_elem_876(P1026 st_874, rstr *v_875) {
  struct f_set_elem_876fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->st_874 = st_874;
F->v_875 = v_875;
F->result_ = (*F->v_875);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_array_cons_881(P1020 e_877, P1026 at_878, P1022 ctx_879, P1026 *t_880) {
  struct f_array_cons_881fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_877 = e_877;
F->at_878 = at_878;
F->ctx_879 = ctx_879;
F->t_880 = t_880;
F->t_880v = *F->t_880;
F->tmp_2543 = rt_str_copy(f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ac", 2); b_; })));
F->parts_2544 = NULL;
F->parts_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->at_878)), rt_str(" ", 1)), F->tmp_2543), rt_str(";", 1)); b_; }));
F->it_2545 = NULL;
F->it_2545 = (*(P1020)rt_nil_check(F->e_877)).a;
F->positional_2546 = RT_R_EUNDEF;
F->positional_2546 = 1;
F->t_880v = F->at_878;
while ((F->it_2545 != NULL)) {
if (((*(P1020)rt_nil_check(F->it_2545)).a != NULL)) {
F->positional_2546 = 0;
}
F->it_2545 = (*(P1020)rt_nil_check(F->it_2545)).next;
}
{ rt_int lo2548 = ((rt_int)1LL), hi2549 = rt_r_ichk((*(P1026)rt_nil_check(F->at_878)).ndim);
for (rt_int it2550 = lo2548; it2550 <= hi2549; it2550++) {
F->k_2547 = it2550;
F->lo_2551 = NULL;
F->hi_2552 = NULL;
if ((((F->ctx_879 != NULL) && (f_cons_lo_252(F->ctx_879, F->k_2547) != NULL)) && (!f_has_at_873(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = (((P1013)rt_nil_check(f_cons_lo_252(F->ctx_879, F->k_2547)))->all); b_; }))))) {
F->lo_2551 = f_cons_lo_252(F->ctx_879, F->k_2547);
F->hi_2552 = f_cons_hi_255(F->ctx_879, F->k_2547);
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->at_878)).ndim) == ((rt_int)1LL)) && rt_r_echk(F->positional_2546))) {
if (((*(P1026)rt_nil_check(f_base_of_223((*(P1026)rt_nil_check(F->at_878)).idx))).kind == (((rt_int)4LL)))) {
F->lo_2551 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("0", 1); b_; }));
} else {
F->lo_2551 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("1", 1); b_; }));
}
F->hi_2552 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1013)rt_nil_check(F->lo_2551))->all)), rt_str(" + ", 3)), f_itos_7(f_list_len_71((*(P1020)rt_nil_check(F->e_877)).a))), rt_str(" - 1)", 5)); b_; }));
} else {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_877)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("the subtype of this array constructor is not known here (use #)", 63); b_; }));
}
F->parts_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->parts_2544))->all), rt_str(" ", 1)), F->tmp_2543), rt_str(".", 1)), f_dim_lo_242(F->k_2547)), rt_str(" = ", 3)), (((P1013)rt_nil_check(F->lo_2551))->all)), rt_str("; ", 2)), F->tmp_2543), rt_str(".", 1)), f_dim_hi_244(F->k_2547)), rt_str(" = ", 3)), (((P1013)rt_nil_check(F->hi_2552))->all)), rt_str(";", 1)); b_; }));
}
}
if ((rt_r_ichk((*(P1026)rt_nil_check(F->at_878)).ndim) == ((rt_int)1LL))) {
F->parts_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->parts_2544))->all), rt_str(" ", 1)), F->tmp_2543), rt_str(".lo2 = ", 7)), F->tmp_2543), rt_str(".hi2 = 1;", 9)); b_; }));
}
F->parts_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->parts_2544))->all), rt_str(" rt_int n_", 10)), F->tmp_2543), rt_str(" = ", 3)), f_acnt_249(F->at_878, &F->tmp_2543)), rt_str("; ", 2)), F->tmp_2543), rt_str(".p = rt_alloc(sizeof(", 21)), f_ctype_234((*(P1026)rt_nil_check(F->at_878)).elem)), rt_str(") * (size_t)n_", 14)), F->tmp_2543), rt_str(" + 1); unsigned char *seen_", 27)), F->tmp_2543), rt_str(" = rt_alloc((size_t)n_", 22)), F->tmp_2543), rt_str(" + 1);", 6)); b_; }));
F->parts_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->parts_2544))->all), f_fill_items_887((*(P1020)rt_nil_check(F->e_877)).a, F->at_878, &F->tmp_2543, NULL, ((rt_int)1LL))); b_; }));
F->parts_2544 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->parts_2544))->all), rt_str(" for (rt_int i_ = 0; i_ < n_", 28)), F->tmp_2543), rt_str("; i_++) if (seen_", 17)), F->tmp_2543), rt_str("[i_] != 1) rt_raise_msg(rt_exc(", 31)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), F->tmp_2543), rt_str("; })", 4)); b_; }));
F->result_ = (((P1013)rt_nil_check(F->parts_2544))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_880) = F->t_880v;
  RT_FPOP();
  return F->result_;
}

static rstr f_fill_items_887(P1020 items_882, P1026 at_883, rstr *tmp_884, P1024 prefix_885, rt_int dim_886) {
  struct f_fill_items_887fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->items_882 = items_882;
F->at_883 = at_883;
F->tmp_884 = tmp_884;
F->prefix_885 = prefix_885;
F->dim_886 = dim_886;
F->it_2553 = NULL;
F->it_2553 = F->items_882;
F->pos_2554 = RT_R_IUNDEF;
F->pos_2554 = ((rt_int)0LL);
F->r_2555 = NULL;
F->r_2555 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->vt_2556 = NULL;
while ((F->it_2553 != NULL)) {
if (((*(P1020)rt_nil_check(F->it_2553)).a == NULL)) {
if (((F->dim_886 < rt_r_ichk((*(P1026)rt_nil_check(F->at_883)).ndim)) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->it_2553)).b)).kind) == (((rt_int)14LL))))) {
F->r_2555 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_2555))->all), rt_str(" { rt_int x_", 12)), f_itos_7(F->dim_886)), rt_str(" = ", 3)), (*F->tmp_884)), rt_str(".", 1)), f_dim_lo_242(F->dim_886)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2554))), rt_str("; ", 2)), f_fill_items_887((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->it_2553)).b)).a, F->at_883, &(*F->tmp_884), f_add_line_892(F->prefix_885, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_886)); b_; })), rt_add(F->dim_886, ((rt_int)1LL)))), rt_str(" }", 2)); b_; }));
} else {
F->v_2557 = rt_str_copy(f_item_value_897((*(P1020)rt_nil_check(F->it_2553)).b, F->at_883, f_e_line_889(F->it_2553), &F->vt_2556));
if (((F->dim_886 == ((rt_int)1LL)) && (rt_r_ichk((*(P1026)rt_nil_check(F->at_883)).ndim) > ((rt_int)1LL)))) {
F->r_2555 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_2555))->all), rt_str(" { ", 3)), F->v_2557), rt_str(" if (", 5)), f_itos_7(rt_r_ichk(F->pos_2554))), rt_str(" >= n_", 6)), (*F->tmp_884)), rt_str(") rt_raise_msg(rt_exc(", 22)), f_q_18()), rt_str("X_ARRAY", 7)), f_q_18()), rt_str("), ", 3)), f_q_18()), rt_str("constructor", 11)), f_q_18()), rt_str("); ", 3)), (*F->tmp_884)), rt_str(".p[", 3)), f_itos_7(rt_r_ichk(F->pos_2554))), rt_str("] = ", 4)), f_copy_code_414((*(P1026)rt_nil_check(F->at_883)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_884)), rt_str("[", 1)), f_itos_7(rt_r_ichk(F->pos_2554))), rt_str("]++; }", 6)); b_; }));
} else {
F->r_2555 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_2555))->all), rt_str(" { ", 3)), F->v_2557), rt_str(" rt_int x_", 10)), f_itos_7(F->dim_886)), rt_str(" = ", 3)), (*F->tmp_884)), rt_str(".", 1)), f_dim_lo_242(F->dim_886)), rt_str(" + ", 3)), f_itos_7(rt_r_ichk(F->pos_2554))), rt_str("; ", 2)), f_store_at_907(F->at_883, &(*F->tmp_884), f_add_line_892(F->prefix_885, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_886)); b_; })), F->dim_886)), rt_str(" }", 2)); b_; }));
}
}
F->pos_2554 = rt_add(rt_r_ichk(F->pos_2554), ((rt_int)1LL));
} else if ((rt_sub(rt_add(F->dim_886, f_list_len_71((*(P1020)rt_nil_check(F->it_2553)).a)), ((rt_int)1LL)) == rt_r_ichk((*(P1026)rt_nil_check(F->at_883)).ndim))) {
F->k_2558 = NULL;
F->k_2558 = (*(P1020)rt_nil_check(F->it_2553)).a;
F->d_2559 = RT_R_IUNDEF;
F->d_2559 = F->dim_886;
F->pre_2560 = NULL;
F->pre_2560 = F->prefix_885;
F->loops_2561 = NULL;
F->loops_2561 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->ends_2562 = NULL;
F->ends_2562 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->v_2563 = rt_str_copy(f_item_value_897((*(P1020)rt_nil_check(F->it_2553)).b, F->at_883, rt_r_ichk((*(P1020)rt_nil_check(F->it_2553)).line), &F->vt_2556));
while ((F->k_2558 != NULL)) {
F->xv_2564 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(rt_r_ichk(F->d_2559))));
F->loops_2561 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->loops_2561))->all), f_key_loop_902(F->k_2558, F->at_883, rt_r_ichk(F->d_2559), &F->xv_2564)); b_; }));
F->ends_2562 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->ends_2562))->all), rt_str(" }", 2)); b_; }));
F->pre_2560 = f_add_line_892(F->pre_2560, &F->xv_2564);
F->d_2559 = rt_add(rt_r_ichk(F->d_2559), ((rt_int)1LL));
F->k_2558 = (*(P1020)rt_nil_check(F->k_2558)).next;
}
F->r_2555 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_2555))->all), rt_str(" { ", 3)), F->v_2563), (((P1013)rt_nil_check(F->loops_2561))->all)), rt_str(" ", 1)), f_store_at_907(F->at_883, &(*F->tmp_884), F->pre_2560, rt_r_ichk((*(P1026)rt_nil_check(F->at_883)).ndim))), (((P1013)rt_nil_check(F->ends_2562))->all)), rt_str(" }", 2)); b_; }));
} else if (((F->dim_886 == rt_r_ichk((*(P1026)rt_nil_check(F->at_883)).ndim)) || (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->it_2553)).b)).kind) == (((rt_int)14LL))))) {
F->k_2565 = NULL;
F->k_2565 = (*(P1020)rt_nil_check(F->it_2553)).a;
while ((F->k_2565 != NULL)) {
F->xv_2566 = rt_str_copy(rt_str_cat(rt_str("x_", 2), f_itos_7(F->dim_886)));
if ((F->dim_886 < rt_r_ichk((*(P1026)rt_nil_check(F->at_883)).ndim))) {
F->r_2555 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_2555))->all), rt_str(" {", 2)), f_key_loop_902(F->k_2565, F->at_883, F->dim_886, &F->xv_2566)), rt_str(" ", 1)), f_fill_items_887((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->it_2553)).b)).a, F->at_883, &(*F->tmp_884), f_add_line_892(F->prefix_885, &F->xv_2566), rt_add(F->dim_886, ((rt_int)1LL)))), rt_str(" } }", 4)); b_; }));
} else {
F->v_2567 = rt_str_copy(f_item_value_897((*(P1020)rt_nil_check(F->it_2553)).b, F->at_883, rt_r_ichk((*(P1020)rt_nil_check(F->it_2553)).line), &F->vt_2556));
F->r_2555 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_2555))->all), rt_str(" { ", 3)), F->v_2567), f_key_loop_902(F->k_2565, F->at_883, F->dim_886, &F->xv_2566)), rt_str(" ", 1)), f_store_at_907(F->at_883, &(*F->tmp_884), f_add_line_892(F->prefix_885, &F->xv_2566), F->dim_886)), rt_str(" } }", 4)); b_; }));
}
F->k_2565 = (*(P1020)rt_nil_check(F->k_2565)).next;
}
} else {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->it_2553)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a key of this array constructor gives ", 38), f_itos_7(rt_add(rt_sub(rt_r_ichk((*(P1026)rt_nil_check(F->at_883)).ndim), F->dim_886), ((rt_int)1LL)))), rt_str(" indexes", 8)); b_; }));
}
F->it_2553 = (*(P1020)rt_nil_check(F->it_2553)).next;
}
F->result_ = (((P1013)rt_nil_check(F->r_2555))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rt_int f_e_line_889(P1020 e_888) {
  struct f_e_line_889fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_888 = e_888;
F->result_ = rt_r_ichk((*(P1020)rt_nil_check(F->e_888)).line);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1024 f_add_line_892(P1024 l_890, rstr *s_891) {
  struct f_add_line_892fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->l_890 = l_890;
F->s_891 = s_891;
F->r_2568 = NULL;
F->tail_2569 = NULL;
F->x_2570 = NULL;
F->p_2571 = NULL;
F->p_2571 = F->l_890;
while ((F->p_2571 != NULL)) {
{ R1025 *cell2572 = rt_alloc(sizeof(R1025));
(*cell2572).s = NULL;
(*cell2572).next = NULL;
F->x_2570 = cell2572;
}
(*(P1024)rt_nil_check(F->x_2570)).s = (*(P1024)rt_nil_check(F->p_2571)).s;
if ((F->tail_2569 == NULL)) {
F->r_2568 = F->x_2570;
} else {
(*(P1024)rt_nil_check(F->tail_2569)).next = F->x_2570;
}
F->tail_2569 = F->x_2570;
F->p_2571 = (*(P1024)rt_nil_check(F->p_2571)).next;
}
{ R1025 *cell2573 = rt_alloc(sizeof(R1025));
(*cell2573).s = NULL;
(*cell2573).next = NULL;
F->x_2570 = cell2573;
}
(*(P1024)rt_nil_check(F->x_2570)).s = f_mk_3(&(*F->s_891));
if ((F->tail_2569 == NULL)) {
F->r_2568 = F->x_2570;
} else {
(*(P1024)rt_nil_check(F->tail_2569)).next = F->x_2570;
}
F->result_ = F->r_2568;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_item_value_897(P1020 e_893, P1026 at_894, rt_int line_895, P1026 *vt_896) {
  struct f_item_value_897fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_893 = e_893;
F->at_894 = at_894;
F->line_895 = line_895;
F->vt_896 = vt_896;
F->vt_896v = *F->vt_896;
g_cons_ctx_1095 = (*(P1026)rt_nil_check(F->at_894)).elemcons;
{
F->v_2574 = rt_str_copy(f_gexpr_794(F->e_893, (*(P1026)rt_nil_check(F->at_894)).elem, &F->vt_896v));
f_check_type_232(F->vt_896v, (*(P1026)rt_nil_check(F->at_894)).elem, F->line_895);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_ctype_234((*(P1026)rt_nil_check(F->at_894)).elem), rt_str(" v_ = ", 6)), f_comp_value_871((*(P1026)rt_nil_check(F->at_894)).elem, (*(P1026)rt_nil_check(F->at_894)).elemcons, &F->v_2574)), rt_str(";", 1));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->vt_896) = F->vt_896v;
  RT_FPOP();
  return F->result_;
}

static rstr f_key_loop_902(P1020 k_898, P1026 at_899, rt_int d_900, rstr *xv_901) {
  struct f_key_loop_902fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->k_898 = k_898;
F->at_899 = at_899;
F->d_900 = d_900;
F->xv_901 = xv_901;
F->it_2575 = NULL;
F->lo_2576 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->k_898)).a, f_idx_type_258(F->at_899, F->d_900), &F->it_2575));
f_check_type_232(F->it_2575, f_idx_type_258(F->at_899, F->d_900), rt_r_ichk((*(P1020)rt_nil_check(F->k_898)).line));
if (((*(P1020)rt_nil_check(F->k_898)).b == NULL)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" { rt_int ", 10), (*F->xv_901)), rt_str(" = ", 3)), F->lo_2576), rt_str(";", 1));
goto ret_;
}
{
F->hi_2577 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->k_898)).b, f_idx_type_258(F->at_899, F->d_900), &F->it_2575));
f_check_type_232(F->it_2575, f_idx_type_258(F->at_899, F->d_900), rt_r_ichk((*(P1020)rt_nil_check(F->k_898)).line));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str(" for (rt_int ", 13), (*F->xv_901)), rt_str(" = ", 3)), F->lo_2576), rt_str(", h", 3)), (*F->xv_901)), rt_str(" = ", 3)), F->hi_2577), rt_str("; ", 2)), (*F->xv_901)), rt_str(" <= h", 5)), (*F->xv_901)), rt_str("; ", 2)), (*F->xv_901)), rt_str("++) {", 5));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_store_at_907(P1026 at_903, rstr *tmp_904, P1024 xs_905, rt_int n_906) {
  struct f_store_at_907fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->at_903 = at_903;
F->tmp_904 = tmp_904;
F->xs_905 = xs_905;
F->n_906 = n_906;
F->off_2578 = NULL;
F->x_2579 = NULL;
F->x_2579 = F->xs_905;
F->k_2580 = RT_R_IUNDEF;
F->k_2580 = ((rt_int)0LL);
while ((F->x_2579 != NULL)) {
F->k_2580 = rt_add(rt_r_ichk(F->k_2580), ((rt_int)1LL));
{
F->l_2581 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_904), rt_str(".", 1)), f_dim_lo_242(rt_r_ichk(F->k_2580))));
F->h_2582 = rt_str_copy(rt_str_cat(rt_str_cat((*F->tmp_904), rt_str(".", 1)), f_dim_hi_244(rt_r_ichk(F->k_2580))));
if ((F->off_2578 == NULL)) {
F->off_2578 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(rt_index(", 10), (((P1013)rt_nil_check((*(P1024)rt_nil_check(F->x_2579)).s))->all)), rt_str(", ", 2)), F->l_2581), rt_str(", ", 2)), F->h_2582), rt_str(") - ", 4)), F->l_2581), rt_str(")", 1)); b_; }));
} else {
F->off_2578 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1013)rt_nil_check(F->off_2578))->all)), rt_str(" * RT_R_EXT(", 12)), F->l_2581), rt_str(", ", 2)), F->h_2582), rt_str(") + rt_index(", 13)), (((P1013)rt_nil_check((*(P1024)rt_nil_check(F->x_2579)).s))->all)), rt_str(", ", 2)), F->l_2581), rt_str(", ", 2)), F->h_2582), rt_str(") - ", 4)), F->l_2581), rt_str(")", 1)); b_; }));
}
}
F->x_2579 = (*(P1024)rt_nil_check(F->x_2579)).next;
}
if ((rt_r_ichk(F->k_2580) != rt_r_ichk((*(P1026)rt_nil_check(F->at_903)).ndim))) {
f_fail_23(((rt_int)0LL), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("a constructor component needs ", 30), f_itos_7(rt_r_ichk((*(P1026)rt_nil_check(F->at_903)).ndim))), rt_str(" indexes", 8)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("{ rt_int o_ = ", 14), (((P1013)rt_nil_check(F->off_2578))->all)), rt_str("; ", 2)), (*F->tmp_904)), rt_str(".p[o_] = ", 9)), f_copy_code_414((*(P1026)rt_nil_check(F->at_903)).elem, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("v_", 2); b_; }))), rt_str("; seen_", 7)), (*F->tmp_904)), rt_str("[o_]++; }", 9));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_fits_910(P1030 y_908, P1020 args_909) {
  struct f_fits_910fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_908 = y_908;
F->args_909 = args_909;
F->a_2583 = NULL;
F->a_2583 = F->args_909;
F->pm_2584 = NULL;
F->pm_2584 = (*(P1030)rt_nil_check(F->y_908)).params;
F->t_2585 = NULL;
F->saved_2586 = NULL;
F->saved_2586 = g_code_1074;
F->ok_2587 = RT_R_EUNDEF;
F->ok_2587 = 1;
F->lv_2588 = NULL;
F->lc_2589 = NULL;
F->ro_2590 = RT_R_EUNDEF;
g_trial_1102 = rt_add(rt_r_ichk(g_trial_1102), ((rt_int)1LL));
g_code_1074 = f_new_buffer_24();
{ rt_frame xf2591;
if (RT_TRY(xf2591)) {
while (((rt_r_echk(F->ok_2587) && (F->a_2583 != NULL)) && (F->pm_2584 != NULL))) {
if (((rt_r_ichk((*(P1032)rt_nil_check(F->pm_2584)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->pm_2584)).mode) == (((rt_int)3LL))))) {
f_lvalue_763(F->a_2583, &F->lv_2588, &F->t_2585, &F->lc_2589, &F->ro_2590);
} else {
F->v_2593 = rt_str_copy(f_gexpr_794(F->a_2583, (*(P1032)rt_nil_check(F->pm_2584)).t, &F->t_2585));
}
if ((!(f_same_221(F->t_2585, (*(P1032)rt_nil_check(F->pm_2584)).t) || ((rt_r_ichk((*(P1026)rt_nil_check(F->t_2585)).kind) == (((rt_int)11LL))) && (rt_r_ichk((*(P1026)rt_nil_check((*(P1032)rt_nil_check(F->pm_2584)).t)).kind) == (((rt_int)8LL))))))) {
F->ok_2587 = 0;
}
F->a_2583 = (*(P1020)rt_nil_check(F->a_2583)).next;
F->pm_2584 = (*(P1032)rt_nil_check(F->pm_2584)).next;
}
if (((F->a_2583 != NULL) || (F->pm_2584 != NULL))) {
F->ok_2587 = 0;
}
RT_POP(xf2591);
} else {
RT_POP(xf2591);
int x2592 = rt_xcur;
if (0 || x2592 == ex_compile_error_1) {
F->ok_2587 = 0;
} else {
rt_raise(x2592);
}
}
}
g_trial_1102 = rt_sub(rt_r_ichk(g_trial_1102), ((rt_int)1LL));
g_code_1074 = F->saved_2586;
F->result_ = rt_r_echk(F->ok_2587);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1030 f_resolve_overload_916(rstr *name_911, P1020 tt_912, P1020 args_913, int is_stmt_914, rt_int line_915) {
  struct f_resolve_overload_916fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_911 = name_911;
F->tt_912 = tt_912;
F->args_913 = args_913;
F->is_stmt_914 = is_stmt_914;
F->line_915 = line_915;
F->y_2594 = NULL;
F->first_2595 = NULL;
F->n_2596 = RT_R_IUNDEF;
F->n_2596 = ((rt_int)0LL);
{ rt_int lo2598 = ((rt_int)1LL), hi2599 = ((rt_int)3LL);
for (rt_int it2600 = lo2598; it2600 <= hi2599; it2600++) {
F->pass_2597 = it2600;
F->y_2594 = f_overload_chain_922(&(*F->name_911), F->pass_2597);
while ((F->y_2594 != NULL)) {
if (((rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_2594)).name))->all), (*F->name_911)) && ((rt_r_ichk((*(P1030)rt_nil_check(F->y_2594)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_2594)).kind) == (((rt_int)4LL))))) && ((F->pass_2597 != ((rt_int)1LL)) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_2594)).depth) >= rt_r_ichk(g_gdepth_1093))))) {
F->n_2596 = rt_add(rt_r_ichk(F->n_2596), ((rt_int)1LL));
if ((F->first_2595 == NULL)) {
F->first_2595 = F->y_2594;
}
if (((((rt_r_ichk((*(P1030)rt_nil_check(F->y_2594)).kind) == (((rt_int)4LL))) == F->is_stmt_914) && f_tt_fits_919(F->y_2594, F->tt_912)) && f_fits_910(F->y_2594, F->args_913))) {
F->result_ = F->y_2594;
goto ret_;
}
}
F->y_2594 = (*(P1030)rt_nil_check(F->y_2594)).chain;
}
}
}
if (f_is_builtin_924(&(*F->name_911))) {
F->result_ = NULL;
goto ret_;
}
if ((rt_r_ichk(F->n_2596) > ((rt_int)1LL))) {
f_fail_23(F->line_915, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("no definition of ", 17), (*F->name_911)), rt_str(" matches these actual parameters", 32)); b_; }));
}
F->result_ = F->first_2595;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tt_fits_919(P1030 y_917, P1020 tt_918) {
  struct f_tt_fits_919fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_917 = y_917;
F->tt_918 = tt_918;
F->f_2601 = NULL;
F->a_2602 = NULL;
F->saved_2603 = NULL;
F->saved_2603 = g_code_1074;
F->ok_2604 = RT_R_EUNDEF;
F->ok_2604 = 1;
if ((((*(P1030)rt_nil_check(F->y_917)).decl == NULL) || ((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_917)).decl)).e == NULL))) {
F->result_ = (F->tt_918 == NULL);
goto ret_;
} else if ((F->tt_918 == NULL)) {
F->result_ = 0;
goto ret_;
}
F->f_2601 = (*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_917)).decl)).e;
F->a_2602 = F->tt_918;
g_trial_1102 = rt_add(rt_r_ichk(g_trial_1102), ((rt_int)1LL));
g_code_1074 = f_new_buffer_24();
{ rt_frame xf2605;
if (RT_TRY(xf2605)) {
while (((rt_r_echk(F->ok_2604) && (F->f_2601 != NULL)) && (F->a_2602 != NULL))) {
F->fc_2607 = NULL;
F->ac_2608 = NULL;
F->fst_2609 = NULL;
F->fst_2609 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1020)rt_nil_check(F->f_2601)).line));
F->ft_2610 = NULL;
F->at_2611 = NULL;
(*(P1020)rt_nil_check(F->fst_2609)).name = (*(P1020)rt_nil_check(F->f_2601)).name;
F->ft_2610 = f_resolve_subtype_268(F->fst_2609, &F->fc_2607);
if ((rt_r_ichk((*(P1020)rt_nil_check(F->a_2602)).kind) >= (((rt_int)70LL)))) {
F->at_2611 = f_resolve_subtype_268(F->a_2602, &F->ac_2608);
} else {
F->ast_2612 = NULL;
F->ast_2612 = f_nn_65((((rt_int)80LL)), rt_r_ichk((*(P1020)rt_nil_check(F->a_2602)).line));
(*(P1020)rt_nil_check(F->ast_2612)).name = (*(P1020)rt_nil_check(F->a_2602)).name;
F->at_2611 = f_resolve_subtype_268(F->ast_2612, &F->ac_2608);
}
F->ok_2604 = f_same_221(F->ft_2610, F->at_2611);
F->f_2601 = (*(P1020)rt_nil_check(F->f_2601)).next;
F->a_2602 = (*(P1020)rt_nil_check(F->a_2602)).next;
}
F->ok_2604 = ((rt_r_echk(F->ok_2604) && (F->f_2601 == NULL)) && (F->a_2602 == NULL));
RT_POP(xf2605);
} else {
RT_POP(xf2605);
int x2606 = rt_xcur;
if (0 || x2606 == ex_compile_error_1) {
F->ok_2604 = 0;
} else {
rt_raise(x2606);
}
}
}
g_trial_1102 = rt_sub(rt_r_ichk(g_trial_1102), ((rt_int)1LL));
g_code_1074 = F->saved_2603;
F->result_ = rt_r_echk(F->ok_2604);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1030 f_overload_chain_922(rstr *name_920, rt_int pass_921) {
  struct f_overload_chain_922fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_920 = name_920;
F->pass_921 = pass_921;
if (((g_genv_1061 == NULL) && (F->pass_921 < ((rt_int)3LL)))) {
F->result_ = NULL;
goto ret_;
} else if ((F->pass_921 == ((rt_int)2LL))) {
F->result_ = ({ A1036 b_ = (((P1034)rt_nil_check(g_genv_1061))->all); b_.p[(rt_index(f_hash_161(&(*F->name_920)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
}
F->result_ = ({ A1036 b_ = (((P1034)rt_nil_check(g_table_1060))->all); b_.p[(rt_index(f_hash_161(&(*F->name_920)), b_.lo, b_.hi) - b_.lo)]; });
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_builtin_924(rstr *n_923) {
  struct f_is_builtin_924fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_923 = n_923;
F->result_ = (((((((((((((((rt_str_eq((*F->n_923), rt_str("ABS", 3)) || rt_str_eq((*F->n_923), rt_str("POS", 3))) || rt_str_eq((*F->n_923), rt_str("SUCC", 4))) || rt_str_eq((*F->n_923), rt_str("PRED", 4))) || rt_str_eq((*F->n_923), rt_str("SQRT", 4))) || rt_str_eq((*F->n_923), rt_str("FLOOR", 5))) || rt_str_eq((*F->n_923), rt_str("WRITELN", 7))) || rt_str_eq((*F->n_923), rt_str("WRITE", 5))) || rt_str_eq((*F->n_923), rt_str("READLN", 6))) || rt_str_eq((*F->n_923), rt_str("SEND", 4))) || rt_str_eq((*F->n_923), rt_str("RECEIVE", 7))) || rt_str_eq((*F->n_923), rt_str("DELAY", 5))) || rt_str_eq((*F->n_923), rt_str("TIME", 4))) || rt_str_eq((*F->n_923), rt_str("CNVT", 4))) || rt_str_eq((*F->n_923), rt_str("FORMAT", 6))) || f_is_low_level_926(&(*F->n_923)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_is_low_level_926(rstr *n_925) {
  struct f_is_low_level_926fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->n_925 = n_925;
F->result_ = ((((((((((((((((((rt_str_eq((*F->n_925), rt_str("SYNC_RESET", 10)) || rt_str_eq((*F->n_925), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->n_925), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->n_925), rt_str("TASK_START", 10))) || rt_str_eq((*F->n_925), rt_str("TASK_END", 8))) || rt_str_eq((*F->n_925), rt_str("LOCK", 4))) || rt_str_eq((*F->n_925), rt_str("UNLOCK", 6))) || rt_str_eq((*F->n_925), rt_str("COND_LOCK", 9))) || rt_str_eq((*F->n_925), rt_str("SUSPEND", 7))) || rt_str_eq((*F->n_925), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->n_925), rt_str("WAITING", 7))) || rt_str_eq((*F->n_925), rt_str("SUSPENDED", 9))) || rt_str_eq((*F->n_925), rt_str("ACTIVE", 6))) || rt_str_eq((*F->n_925), rt_str("EMPTY_SLOTS", 11))) || rt_str_eq((*F->n_925), rt_str("FULL_SLOTS", 10))) || rt_str_eq((*F->n_925), rt_str("COND_SEND", 9))) || rt_str_eq((*F->n_925), rt_str("COND_RECEIVE", 12))) || rt_str_eq((*F->n_925), rt_str("EXCESS_LOCKS", 12))) || rt_str_eq((*F->n_925), rt_str("OWNER", 5)));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_me_high_930(P1020 tt_927, rt_int line_928, P1026 *t_929) {
  struct f_me_high_930fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_927 = tt_927;
F->line_928 = line_928;
F->t_929 = t_929;
F->t_929v = *F->t_929;
F->c_2613 = NULL;
if ((F->tt_927 == NULL)) {
f_fail_23(F->line_928, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("ME[...] needs the type of an activation variable", 48); b_; }));
}
F->t_929v = f_resolve_subtype_268(F->tt_927, &F->c_2613);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("(*(", 3), f_ctype_234(F->t_929v)), rt_str(" *)rt_me_high(", 14)), f_q_18()), f_type_tag_932(F->t_929v)), f_q_18()), rt_str("))", 2));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_929) = F->t_929v;
  RT_FPOP();
  return F->result_;
}

static rstr f_type_tag_932(P1026 t_931) {
  struct f_type_tag_932fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_931 = t_931;
if (((*(P1026)rt_nil_check(F->t_931)).name != NULL)) {
F->result_ = (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_931)).name))->all);
goto ret_;
}
F->result_ = rt_str("\?", 1);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_lock_ref_935(P1020 e_933, rstr *name_934) {
  struct f_lock_ref_935fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_933 = e_933;
F->name_934 = name_934;
F->lv_2614 = NULL;
F->t_2615 = NULL;
F->c_2616 = NULL;
F->ro_2617 = RT_R_EUNDEF;
f_lvalue_763(F->e_933, &F->lv_2614, &F->t_2615, &F->c_2616, &F->ro_2617);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_2615)).kind) != (((rt_int)13LL)))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_933)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_934), rt_str(" needs a DATA_LOCK or a LATCH", 29)); b_; }));
}
F->result_ = rt_str_cat(rt_str("&", 1), (((P1013)rt_nil_check(F->lv_2614))->all));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1030 f_user_op_938(rstr *op_936, P1020 args_937) {
  struct f_user_op_938fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_936 = op_936;
F->args_937 = args_937;
F->y_2618 = NULL;
{ rt_int lo2620 = ((rt_int)1LL), hi2621 = ((rt_int)3LL);
for (rt_int it2622 = lo2620; it2622 <= hi2621; it2622++) {
F->pass_2619 = it2622;
F->y_2618 = f_overload_chain_922(&(*F->op_936), F->pass_2619);
while ((F->y_2618 != NULL)) {
if ((((rt_str_eq((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_2618)).name))->all), (*F->op_936)) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_2618)).kind) == (((rt_int)3LL)))) && ((F->pass_2619 != ((rt_int)1LL)) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_2618)).depth) >= rt_r_ichk(g_gdepth_1093)))) && f_fits_910(F->y_2618, F->args_937))) {
F->result_ = F->y_2618;
goto ret_;
}
F->y_2618 = (*(P1030)rt_nil_check(F->y_2618)).chain;
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

static rstr f_gcall_942(P1020 e_939, int is_stmt_940, P1026 *t_941) {
  struct f_gcall_942fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_939 = e_939;
F->is_stmt_940 = is_stmt_940;
F->t_941 = t_941;
F->t_941v = *F->t_941;
F->gd_2623 = NULL;
F->fn_2624 = NULL;
F->fn_2624 = (*(P1020)rt_nil_check(F->e_939)).a;
F->tt_2625 = NULL;
F->y_2626 = NULL;
F->args_2627 = NULL;
F->args_2627 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
F->a_2628 = NULL;
F->a_2628 = (*(P1020)rt_nil_check(F->e_939)).b;
F->pm_2629 = NULL;
F->lt_2630 = NULL;
F->vt_2631 = NULL;
F->lv_2632 = NULL;
F->lc_2633 = NULL;
F->ro_2634 = RT_R_EUNDEF;
if ((rt_r_ichk((*(P1020)rt_nil_check(F->fn_2624)).kind) == (((rt_int)12LL)))) {
F->tt_2625 = (*(P1020)rt_nil_check(F->fn_2624)).b;
F->fn_2624 = (*(P1020)rt_nil_check(F->fn_2624)).a;
}
F->y_2626 = f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2624)).name))->all));
if ((F->y_2626 == NULL)) {
F->result_ = f_builtin_997(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2624)).name))->all), F->tt_2625, (*(P1020)rt_nil_check(F->e_939)).b, rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line), F->is_stmt_940, &F->t_941v);
goto ret_;
}
if ((((rt_r_ichk((*(P1030)rt_nil_check(F->y_2626)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_2626)).kind) != (((rt_int)4LL)))) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_2626)).kind) != (((rt_int)10LL))))) {
F->alt_2635 = NULL;
F->alt_2635 = f_resolve_overload_916(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2624)).name))->all), F->tt_2625, (*(P1020)rt_nil_check(F->e_939)).b, F->is_stmt_940, rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line));
if ((F->alt_2635 != NULL)) {
F->y_2626 = F->alt_2635;
} else if (f_is_builtin_924(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2624)).name))->all))) {
F->result_ = f_builtin_997(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2624)).name))->all), F->tt_2625, (*(P1020)rt_nil_check(F->e_939)).b, rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line), F->is_stmt_940, &F->t_941v);
goto ret_;
}
}
if ((rt_r_ichk((*(P1030)rt_nil_check(F->y_2626)).kind) == (((rt_int)10LL)))) {
F->gd_2623 = (*(P1030)rt_nil_check(F->y_2626)).decl;
F->y_2626 = f_instantiate_739(F->y_2626, F->tt_2625, (*(P1020)rt_nil_check(F->e_939)).b, rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line));
} else if (((rt_r_ichk((*(P1030)rt_nil_check(F->y_2626)).kind) == (((rt_int)3LL))) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_2626)).kind) == (((rt_int)4LL))))) {
F->y_2626 = f_resolve_overload_916(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2624)).name))->all), F->tt_2625, (*(P1020)rt_nil_check(F->e_939)).b, F->is_stmt_940, rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line));
if ((F->y_2626 == NULL)) {
F->result_ = f_builtin_997(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2624)).name))->all), F->tt_2625, (*(P1020)rt_nil_check(F->e_939)).b, rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line), F->is_stmt_940, &F->t_941v);
goto ret_;
}
}
if (((rt_r_ichk((*(P1030)rt_nil_check(F->y_2626)).kind) != (((rt_int)3LL))) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_2626)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2624)).name))->all), rt_str(" cannot be invoked", 18)); b_; }));
}
f_check_requires_956(F->y_2626, rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line));
if (((*(P1030)rt_nil_check(F->y_2626)).capn != NULL)) {
F->cr_2636 = NULL;
F->cr_2636 = g_caps_1079;
while ((F->cr_2636 != NULL)) {
if (((*(P1047)rt_nil_check(F->cr_2636)).d == (*(P1030)rt_nil_check(F->y_2626)).capn)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_2626)).name))->all), rt_str(" is a normal function with an imports list: it may not be invoked inside its capsule", 84)); b_; }));
}
F->cr_2636 = (*(P1047)rt_nil_check(F->cr_2636)).next;
}
}
if ((F->is_stmt_940 && (rt_r_ichk((*(P1030)rt_nil_check(F->y_2626)).kind) != (((rt_int)4LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2624)).name))->all), rt_str(" is a function, not a procedure", 31)); b_; }));
}
if (((!F->is_stmt_940) && (rt_r_ichk((*(P1030)rt_nil_check(F->y_2626)).kind) != (((rt_int)3LL))))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2624)).name))->all), rt_str(" is a procedure, not a function", 31)); b_; }));
}
F->pm_2629 = (*(P1030)rt_nil_check(F->y_2626)).params;
if ((rt_r_ichk((*(P1030)rt_nil_check(F->y_2626)).level) > ((rt_int)0LL))) {
F->args_2627 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("F", 1); b_; }));
{ rt_int lo2638 = ((rt_int)1LL), hi2639 = rt_sub(rt_r_ichk(g_cur_level_1077), rt_r_ichk((*(P1030)rt_nil_check(F->y_2626)).level));
for (rt_int it2640 = lo2638; it2640 <= hi2639; it2640++) {
F->i_2637 = it2640;
F->args_2627 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->args_2627))->all), rt_str("->up", 4)); b_; }));
}
}
}
while (((F->a_2628 != NULL) && (F->pm_2629 != NULL))) {
if ((((rt_int)(((((P1013)rt_nil_check(F->args_2627))->all)).len)) > ((rt_int)0LL))) {
F->args_2627 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->args_2627))->all), rt_str(", ", 2)); b_; }));
}
if ((((rt_r_ichk((*(P1032)rt_nil_check(F->pm_2629)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->pm_2629)).mode) == (((rt_int)4LL)))) && f_explicit_rep_986(F->a_2628))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("data with an explicit representation may not be bound to a VAR or READONLY formal", 81); b_; }));
}
if (((rt_r_ichk((*(P1032)rt_nil_check(F->pm_2629)).mode) == (((rt_int)2LL))) || (rt_r_ichk((*(P1032)rt_nil_check(F->pm_2629)).mode) == (((rt_int)3LL))))) {
f_lvalue_763(F->a_2628, &F->lv_2632, &F->lt_2630, &F->lc_2633, &F->ro_2634);
if (rt_r_echk(F->ro_2634)) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check((*(P1032)rt_nil_check(F->pm_2629)).name))->all), rt_str(" needs a variable", 17)); b_; }));
}
f_check_type_232(F->lt_2630, (*(P1032)rt_nil_check(F->pm_2629)).t, rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line));
F->args_2627 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->args_2627))->all), rt_str("&", 1)), (((P1013)rt_nil_check(F->lv_2632))->all)), f_actual_bounds_990((*(P1032)rt_nil_check(F->pm_2629)).t, F->lt_2630, F->lc_2633)); b_; }));
} else if (((rt_r_ichk((*(P1032)rt_nil_check(F->pm_2629)).mode) == (((rt_int)4LL))) && f_is_lvalue_757(F->a_2628))) {
f_lvalue_763(F->a_2628, &F->lv_2632, &F->lt_2630, &F->lc_2633, &F->ro_2634);
f_check_type_232(F->lt_2630, (*(P1032)rt_nil_check(F->pm_2629)).t, rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line));
F->args_2627 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->args_2627))->all), rt_str("&", 1)), (((P1013)rt_nil_check(F->lv_2632))->all)), f_actual_bounds_990((*(P1032)rt_nil_check(F->pm_2629)).t, F->lt_2630, F->lc_2633)); b_; }));
} else if ((rt_r_ichk((*(P1032)rt_nil_check(F->pm_2629)).mode) == (((rt_int)4LL)))) {
F->v_2641 = rt_str_copy(f_gexpr_in_802(F->a_2628, (*(P1032)rt_nil_check(F->pm_2629)).t, (*(P1032)rt_nil_check(F->pm_2629)).c, &F->vt_2631));
F->ct_2642 = rt_str_copy(f_ctype_234((*(P1032)rt_nil_check(F->pm_2629)).t));
f_check_type_232(F->vt_2631, (*(P1032)rt_nil_check(F->pm_2629)).t, rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line));
F->args_2627 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->args_2627))->all), rt_str("({ ", 3)), F->ct_2642), rt_str(" *b_ = rt_alloc(sizeof(", 23)), F->ct_2642), rt_str(")); *b_ = ", 10)), F->v_2641), rt_str("; b_; })", 8)); b_; }));
if (f_scalar_kind_186((*(P1032)rt_nil_check(F->pm_2629)).t)) {
F->args_2627 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->args_2627))->all), rt_str(", 1, 0", 6)); b_; }));
}
} else {
F->v_2643 = rt_str_copy(f_gexpr_in_802(F->a_2628, (*(P1032)rt_nil_check(F->pm_2629)).t, (*(P1032)rt_nil_check(F->pm_2629)).c, &F->vt_2631));
f_check_type_232(F->vt_2631, (*(P1032)rt_nil_check(F->pm_2629)).t, rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line));
F->args_2627 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->args_2627))->all), F->v_2643); b_; }));
}
F->a_2628 = (*(P1020)rt_nil_check(F->a_2628)).next;
F->pm_2629 = (*(P1032)rt_nil_check(F->pm_2629)).next;
}
if (((F->a_2628 != NULL) || (F->pm_2629 != NULL))) {
f_fail_23(rt_r_ichk((*(P1020)rt_nil_check(F->e_939)).line), ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->fn_2624)).name))->all), rt_str(" needs ", 7)), f_itos_7(rt_sub(f_list_len_71((*(P1020)rt_nil_check(F->e_939)).b), f_list_len_71(F->a_2628)))), rt_str(" more or fewer actual parameters", 32)); b_; }));
}
F->t_941v = (*(P1030)rt_nil_check(F->y_2626)).result;
if ((F->gd_2623 != NULL)) {
F->chk_2644 = rt_str_copy(f_same_subtypes_961(F->gd_2623, (*(P1020)rt_nil_check(F->e_939)).b));
if ((!rt_str_eq(F->chk_2644, rt_str("", 0)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), F->chk_2644), rt_str(") rt_raise_msg(RT_X_SUBTYPE, ", 29)), f_q_18()), rt_str("generic subtype", 15)), f_q_18()), rt_str("); ", 3)), (((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_2626)).cname))->all)), rt_str("(", 1)), (((P1013)rt_nil_check(F->args_2627))->all)), rt_str("); })", 5));
goto ret_;
}
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_2626)).cname))->all), rt_str("(", 1)), (((P1013)rt_nil_check(F->args_2627))->all)), rt_str(")", 1));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_941) = F->t_941v;
  RT_FPOP();
  return F->result_;
}

static P1024 f_requires_944(P1030 y_943) {
  struct f_requires_944fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_943 = y_943;
if (rt_r_echk((*(P1030)rt_nil_check(F->y_943)).reqdone)) {
F->result_ = (*(P1030)rt_nil_check(F->y_943)).reqs;
goto ret_;
}
(*(P1030)rt_nil_check(F->y_943)).reqdone = 1;
if ((((*(P1030)rt_nil_check(F->y_943)).decl != NULL) && (((rt_r_ichk((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_943)).decl)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_943)).decl)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_943)).decl)).kind) == (((rt_int)50LL)))))) {
F->imp_2645 = NULL;
F->imp_2645 = (*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_943)).decl)).d;
while ((F->imp_2645 != NULL)) {
f_add_req_947(F->y_943, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->imp_2645)).name))->all));
F->imp_2645 = (*(P1020)rt_nil_check(F->imp_2645)).next;
}
f_require_calls_950(F->y_943, (*(P1020)rt_nil_check((*(P1030)rt_nil_check(F->y_943)).decl)).c);
}
F->result_ = (*(P1030)rt_nil_check(F->y_943)).reqs;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_add_req_947(P1030 y_945, rstr *name_946) {
  struct f_add_req_947fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_945 = y_945;
F->name_946 = name_946;
F->l_2646 = NULL;
if ((!f_seen_name_425((*(P1030)rt_nil_check(F->y_945)).reqs, &(*F->name_946)))) {
{ R1025 *cell2647 = rt_alloc(sizeof(R1025));
(*cell2647).s = NULL;
(*cell2647).next = NULL;
F->l_2646 = cell2647;
}
(*(P1024)rt_nil_check(F->l_2646)).s = f_mk_3(&(*F->name_946));
(*(P1024)rt_nil_check(F->l_2646)).next = (*(P1030)rt_nil_check(F->y_945)).reqs;
(*(P1030)rt_nil_check(F->y_945)).reqs = F->l_2646;
}
ret_:
  RT_FPOP();
  return;
}

static void f_require_calls_950(P1030 y_948, P1020 e_949) {
  struct f_require_calls_950fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_948 = y_948;
F->e_949 = e_949;
F->x_2648 = NULL;
F->x_2648 = F->e_949;
while ((F->x_2648 != NULL)) {
if ((((((rt_r_ichk((*(P1020)rt_nil_check(F->x_2648)).kind) == (((rt_int)45LL))) || (rt_r_ichk((*(P1020)rt_nil_check(F->x_2648)).kind) == (((rt_int)46LL)))) || (rt_r_ichk((*(P1020)rt_nil_check(F->x_2648)).kind) == (((rt_int)50LL)))) || (rt_r_ichk((*(P1020)rt_nil_check(F->x_2648)).kind) == (((rt_int)47LL)))) || (rt_r_ichk((*(P1020)rt_nil_check(F->x_2648)).kind) == (((rt_int)51LL))))) {
F->x_2648 = (*(P1020)rt_nil_check(F->x_2648)).next;
} else {
F->callee_2649 = NULL;
if (((((rt_r_ichk((*(P1020)rt_nil_check(F->x_2648)).kind) == (((rt_int)10LL))) || (rt_r_ichk((*(P1020)rt_nil_check(F->x_2648)).kind) == (((rt_int)21LL)))) && ((*(P1020)rt_nil_check(F->x_2648)).a != NULL)) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->x_2648)).a)).kind) == (((rt_int)7LL))))) {
F->callee_2649 = (*(P1020)rt_nil_check(F->x_2648)).a;
}
if ((F->callee_2649 != NULL)) {
F->z_2650 = NULL;
F->z_2650 = f_lookup_163(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->callee_2649)).name))->all));
if ((((F->z_2650 != NULL) && (F->z_2650 != F->y_948)) && ((rt_r_ichk((*(P1030)rt_nil_check(F->z_2650)).kind) == (((rt_int)4LL))) || (rt_r_ichk((*(P1030)rt_nil_check(F->z_2650)).kind) == (((rt_int)3LL)))))) {
F->l_2651 = NULL;
F->l_2651 = f_requires_944(F->z_2650);
while ((F->l_2651 != NULL)) {
f_add_req_947(F->y_948, &(((P1013)rt_nil_check((*(P1024)rt_nil_check(F->l_2651)).s))->all));
F->l_2651 = (*(P1024)rt_nil_check(F->l_2651)).next;
}
}
}
if (((*(P1020)rt_nil_check(F->x_2648)).a != NULL)) {
f_require_calls_950(F->y_948, (*(P1020)rt_nil_check(F->x_2648)).a);
}
if (((*(P1020)rt_nil_check(F->x_2648)).b != NULL)) {
f_require_calls_950(F->y_948, (*(P1020)rt_nil_check(F->x_2648)).b);
}
if (((*(P1020)rt_nil_check(F->x_2648)).c != NULL)) {
f_require_calls_950(F->y_948, (*(P1020)rt_nil_check(F->x_2648)).c);
}
F->x_2648 = (*(P1020)rt_nil_check(F->x_2648)).next;
}
}
ret_:
  RT_FPOP();
  return;
}

static int f_declared_in_953(P1020 elems_951, rstr *name_952) {
  struct f_declared_in_953fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->elems_951 = elems_951;
F->name_952 = name_952;
F->e_2652 = NULL;
F->e_2652 = F->elems_951;
while ((F->e_2652 != NULL)) {
if ((((rt_r_ichk((*(P1020)rt_nil_check(F->e_2652)).kind) == (((rt_int)40LL))) || (rt_r_ichk((*(P1020)rt_nil_check(F->e_2652)).kind) == (((rt_int)41LL)))) && rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_2652)).name))->all), (*F->name_952)))) {
F->result_ = 1;
goto ret_;
}
F->e_2652 = (*(P1020)rt_nil_check(F->e_2652)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_check_requires_956(P1030 y_954, rt_int line_955) {
  struct f_check_requires_956fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->y_954 = y_954;
F->line_955 = line_955;
F->l_2653 = NULL;
F->l_2653 = f_requires_944(F->y_954);
if ((((*(P1030)rt_nil_check(F->y_954)).home == NULL) || (rt_r_ichk((*(P1030)rt_nil_check(F->y_954)).level) != rt_r_ichk(g_cur_level_1077)))) {
goto ret_;
}
while ((F->l_2653 != NULL)) {
F->z_2654 = NULL;
F->z_2654 = f_lookup_163(&(((P1013)rt_nil_check((*(P1024)rt_nil_check(F->l_2653)).s))->all));
if ((f_declared_in_953((*(P1030)rt_nil_check(F->y_954)).home, &(((P1013)rt_nil_check((*(P1024)rt_nil_check(F->l_2653)).s))->all)) && ((F->z_2654 == NULL) || (rt_r_ichk((*(P1030)rt_nil_check(F->z_2654)).depth) < rt_r_ichk((*(P1030)rt_nil_check(F->y_954)).depth))))) {
f_fail_23(F->line_955, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check((*(P1030)rt_nil_check(F->y_954)).name))->all), rt_str(" requires ", 10)), (((P1013)rt_nil_check((*(P1024)rt_nil_check(F->l_2653)).s))->all)), rt_str(", which is not yet defined here", 31)); b_; }));
}
F->l_2653 = (*(P1024)rt_nil_check(F->l_2653)).next;
}
ret_:
  RT_FPOP();
  return;
}

static rstr f_act_delay_args_958(P1020 args_957) {
  struct f_act_delay_args_958fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->args_957 = args_957;
F->at_2655 = NULL;
F->t1_2656 = NULL;
F->t1_2656 = f_peek_type_810(F->args_957);
if (((F->t1_2656 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->t1_2656)).kind) == (((rt_int)14LL))))) {
F->a_2657 = rt_str_copy(f_act_ref_645(F->args_957));
F->v_2658 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->args_957)).next, g_ty_int_1104, &F->at_2655));
f_check_type_232(F->at_2655, g_ty_int_1104, rt_r_ichk((*(P1020)rt_nil_check(F->args_957)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2658, rt_str(", ", 2)), F->a_2657);
goto ret_;
}
{
F->v_2659 = rt_str_copy(f_gexpr_794(F->args_957, g_ty_int_1104, &F->at_2655));
f_check_type_232(F->at_2655, g_ty_int_1104, rt_r_ichk((*(P1020)rt_nil_check(F->args_957)).line));
F->result_ = rt_str_cat(rt_str_cat(F->v_2659, rt_str(", ", 2)), f_act_ref_645((*(P1020)rt_nil_check(F->args_957)).next));
goto ret_;
}
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_same_subtypes_961(P1020 gd_959, P1020 args_960) {
  struct f_same_subtypes_961fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->gd_959 = gd_959;
F->args_960 = args_960;
F->p_2660 = NULL;
F->p_2660 = (*(P1020)rt_nil_check(F->gd_959)).a;
F->r_2661 = NULL;
F->r_2661 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
while ((F->p_2660 != NULL)) {
if ((rt_r_ichk((*(P1020)rt_nil_check(F->p_2660)).ival) == ((rt_int)2LL))) {
F->fp_2662 = NULL;
F->fp_2662 = (*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->gd_959)).b)).a;
F->a_2663 = NULL;
F->a_2663 = F->args_960;
F->flo_2664 = NULL;
F->fhi_2665 = NULL;
while (((F->fp_2662 != NULL) && (F->a_2663 != NULL))) {
if ((((((*(P1020)rt_nil_check(F->fp_2662)).a != NULL) && (rt_r_ichk((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->fp_2662)).a)).kind) == (((rt_int)80LL)))) && rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->fp_2662)).a)).name))->all), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->p_2660)).name))->all))) && ((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->fp_2662)).a)).b == NULL))) {
F->st_2666 = NULL;
F->c_2667 = NULL;
F->base_2668 = NULL;
F->lo_2669 = NULL;
F->hi_2670 = NULL;
F->st_2666 = f_value_subtype_290(F->a_2663, &F->c_2667, &F->base_2668);
if (f_scalar_kind_186(F->st_2666)) {
F->lo_2669 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_lo_198(F->st_2666, F->c_2667); b_; }));
F->hi_2670 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_sub_hi_201(F->st_2666, F->c_2667); b_; }));
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->st_2666)).kind) == (((rt_int)5LL))) && ((*(P1022)rt_nil_check(F->c_2667)).slen != NULL))) {
F->lo_2669 = (*(P1022)rt_nil_check(F->c_2667)).slen;
F->hi_2670 = (*(P1022)rt_nil_check(F->c_2667)).slen;
}
if (((F->lo_2669 != NULL) && (F->flo_2664 != NULL))) {
if ((((rt_int)(((((P1013)rt_nil_check(F->r_2661))->all)).len)) > ((rt_int)0LL))) {
F->r_2661 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_2661))->all), rt_str(" || ", 4)); b_; }));
}
F->r_2661 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_2661))->all), rt_str("(", 1)), (((P1013)rt_nil_check(F->flo_2664))->all)), rt_str(") != (", 6)), (((P1013)rt_nil_check(F->lo_2669))->all)), rt_str(") || (", 6)), (((P1013)rt_nil_check(F->fhi_2665))->all)), rt_str(") != (", 6)), (((P1013)rt_nil_check(F->hi_2670))->all)), rt_str(")", 1)); b_; }));
} else if ((F->lo_2669 != NULL)) {
F->flo_2664 = F->lo_2669;
F->fhi_2665 = F->hi_2670;
}
}
F->fp_2662 = (*(P1020)rt_nil_check(F->fp_2662)).next;
F->a_2663 = (*(P1020)rt_nil_check(F->a_2663)).next;
}
}
F->p_2660 = (*(P1020)rt_nil_check(F->p_2660)).next;
}
F->result_ = (((P1013)rt_nil_check(F->r_2661))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_mailbox_low_966(rstr *name_962, P1020 args_963, rt_int line_964, P1026 *t_965) {
  struct f_mailbox_low_966fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_962 = name_962;
F->args_963 = args_963;
F->line_964 = line_964;
F->t_965 = t_965;
F->t_965v = *F->t_965;
F->qv_2671 = NULL;
F->mv_2672 = NULL;
F->dv_2673 = NULL;
F->qt_2674 = NULL;
F->mt_2675 = NULL;
F->dt_2676 = NULL;
F->at_2677 = NULL;
F->c_2678 = NULL;
F->ro_2679 = RT_R_EUNDEF;
F->send_2680 = RT_R_EUNDEF;
F->send_2680 = rt_str_eq(rt_str_slice((*F->name_962), ((rt_int)1LL), ((rt_int)4LL)), rt_str("SEND", 4));
f_lvalue_763(F->args_963, &F->qv_2671, &F->qt_2674, &F->c_2678, &F->ro_2679);
f_lvalue_763((*(P1020)rt_nil_check(F->args_963)).next, &F->mv_2672, &F->mt_2675, &F->c_2678, &F->ro_2679);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->mt_2675)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_962), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_965v = g_ty_void_1109;
if (((rt_r_echk(F->send_2680) && (F->qt_2674 != g_ty_send_st_1116)) || ((!rt_r_echk(F->send_2680)) && (F->qt_2674 != g_ty_receive_st_1117)))) {
f_fail_23(F->line_964, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((*F->name_962), rt_str(" needs a variable of subtype ", 29)), rt_str_slice((*F->name_962), ((rt_int)1LL), ((rt_int)4LL))), rt_str("_ST", 3)); b_; }));
}
if ((rt_str_eq((*F->name_962), rt_str("SEND_TEST", 9)) || rt_str_eq((*F->name_962), rt_str("RECEIVE_TEST", 12)))) {
F->t_965v = g_ty_bool_1105;
if (rt_r_echk(F->send_2680)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_send(", 14), (((P1013)rt_nil_check(F->mv_2672))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_can_receive(", 17), (((P1013)rt_nil_check(F->mv_2672))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_962), rt_str("SEND_COMPLETE", 13))) {
F->v_2681 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_963)).next)).next, (*(P1026)rt_nil_check(F->mt_2675)).elem, &F->at_2677));
f_check_type_232(F->at_2677, (*(P1026)rt_nil_check(F->mt_2675)).elem, F->line_964);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1026)rt_nil_check(F->mt_2675)).elem)), rt_str(" m_ = ", 6)), F->v_2681), rt_str("; if (!rt_cond_send(", 20)), (((P1013)rt_nil_check(F->mv_2672))->all)), rt_str(", &m_)) rt_raise(RT_X_EMPTY_MAILBOX); })", 40));
goto ret_;
} else if (rt_str_eq((*F->name_962), rt_str("RECEIVE_COMPLETE", 16))) {
f_lvalue_763((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_963)).next)).next, &F->dv_2673, &F->dt_2676, &F->c_2678, &F->ro_2679);
f_check_type_232(F->dt_2676, (*(P1026)rt_nil_check(F->mt_2675)).elem, F->line_964);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (!rt_cond_receive(", 24), (((P1013)rt_nil_check(F->mv_2672))->all)), rt_str(", &", 3)), (((P1013)rt_nil_check(F->dv_2673))->all)), rt_str(")) rt_raise(RT_X_EMPTY_MAILBOX); })", 35));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("(", 1), (((P1013)rt_nil_check(F->qv_2671))->all)), rt_str(" = 1)", 5));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_965) = F->t_965v;
  RT_FPOP();
  return F->result_;
}

static P1026 f_exponent_want_969(rstr *op_967, P1026 ta_968) {
  struct f_exponent_want_969fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->op_967 = op_967;
F->ta_968 = ta_968;
if (rt_str_eq((*F->op_967), rt_str("**", 2))) {
F->result_ = g_ty_int_1104;
goto ret_;
}
F->result_ = F->ta_968;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_file_ref_973(P1020 e_970, int text_971, rt_int line_972) {
  struct f_file_ref_973fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_970 = e_970;
F->text_971 = text_971;
F->line_972 = line_972;
F->t_2682 = NULL;
F->f_2683 = rt_str_copy(f_gexpr_794(F->e_970, NULL, &F->t_2682));
if ((rt_r_ichk((*(P1026)rt_nil_check(F->t_2682)).kind) != (((rt_int)10LL)))) {
f_fail_23(F->line_972, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a file is required", 18); b_; }));
} else if ((F->text_971 && (!f_text_file_975(F->t_2682)))) {
f_fail_23(F->line_972, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("a text file, whose components are characters, is required", 57); b_; }));
}
F->result_ = F->f_2683;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_text_file_975(P1026 t_974) {
  struct f_text_file_975fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_974 = t_974;
F->result_ = (((F->t_974 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->t_974)).kind) == (((rt_int)10LL)))) && ((*(P1026)rt_nil_check(f_base_of_223(f_str_elem_218(F->t_974)))).kind == (((rt_int)4LL))));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_conversion_980(P1020 tt_976, P1020 args_977, rt_int line_978, P1026 *t_979) {
  struct f_conversion_980fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->tt_976 = tt_976;
F->args_977 = args_977;
F->line_978 = line_978;
F->t_979 = t_979;
F->t_979v = *F->t_979;
F->c_2684 = NULL;
F->at_2685 = NULL;
F->target_2686 = NULL;
F->target_2686 = f_resolve_subtype_268(F->tt_976, &F->c_2684);
F->a_2687 = rt_str_copy(f_gexpr_794(F->args_977, NULL, &F->at_2685));
F->t_979v = F->target_2686;
if (((rt_r_ichk((*(P1026)rt_nil_check(F->target_2686)).kind) == (((rt_int)5LL))) && f_same_221(f_str_elem_218(F->target_2686), g_ty_ascii_1107))) {
F->r_2688 = NULL;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->at_2685)).kind) == (((rt_int)1LL)))) {
F->r_2688 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_str_of_int(", 14), F->a_2687), rt_str(")", 1)); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->at_2685)).kind) == (((rt_int)3LL)))) {
F->r_2688 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_str_of_float(", 18), F->a_2687), rt_str(", ", 2)), f_float_digits_982(F->args_977)), rt_str(")", 1)); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->at_2685)).kind) == (((rt_int)2LL)))) {
F->r_2688 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("((", 2), F->a_2687), rt_str(") \? rt_str(", 11)), f_q_18()), rt_str("TRUE", 4)), f_q_18()), rt_str(", 4) : rt_str(", 14)), f_q_18()), rt_str("FALSE", 5)), f_q_18()), rt_str(", 5))", 5)); b_; }));
} else if (((*(P1026)rt_nil_check(f_base_of_223(F->at_2685))).kind == (((rt_int)4LL)))) {
F->r_2688 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_enum_image(", 16), f_enum_names_984(f_base_of_223(F->at_2685))), rt_str(", ", 2)), F->a_2687), rt_str(")", 1)); b_; }));
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->at_2685)).kind) == (((rt_int)5LL)))) {
F->r_2688 = f_mk_3(&F->a_2687);
} else {
f_fail_23(F->line_978, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT converts BOOL, INT, FLOAT and ENUM values to strings", 57); b_; }));
}
if (((F->c_2684 != NULL) && ((*(P1022)rt_nil_check(F->c_2684)).slen != NULL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_str_pad(", 13), (((P1013)rt_nil_check(F->r_2688))->all)), rt_str(", ", 2)), (((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_2684)).slen))->all)), rt_str(")", 1));
goto ret_;
}
F->result_ = (((P1013)rt_nil_check(F->r_2688))->all);
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->at_2685)).kind) == (((rt_int)5LL)))) {
if ((rt_r_ichk((*(P1026)rt_nil_check(F->target_2686)).kind) == (((rt_int)1LL)))) {
F->result_ = f_checked_213(F->target_2686, F->c_2684, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_int_of_str(", 14), F->a_2687), rt_str(")", 1)); b_; }));
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->target_2686)).kind) == (((rt_int)3LL)))) {
F->result_ = f_checked_213(F->target_2686, F->c_2684, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_float_of_str(", 18), F->a_2687), rt_str(")", 1)); b_; }));
goto ret_;
} else if ((rt_r_ichk((*(P1026)rt_nil_check(F->target_2686)).kind) == (((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_bool_of_str(", 17), F->a_2687), rt_str(")", 1));
goto ret_;
} else if (((*(P1026)rt_nil_check(f_base_of_223(F->target_2686))).kind == (((rt_int)4LL)))) {
F->result_ = f_checked_213(F->target_2686, F->c_2684, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_enum_of_str(", 17), f_enum_names_984(f_base_of_223(F->target_2686))), rt_str(", ", 2)), f_itos_7(f_list_len_71((*(P1026)rt_nil_check(f_base_of_223(F->target_2686))).lits))), rt_str(", ", 2)), F->a_2687), rt_str(")", 1)); b_; }));
goto ret_;
}
} else if (((rt_r_ichk((*(P1026)rt_nil_check(F->target_2686)).kind) == (((rt_int)3LL))) && (rt_r_ichk((*(P1026)rt_nil_check(F->at_2685)).kind) == (((rt_int)1LL))))) {
F->result_ = f_checked_213(F->target_2686, F->c_2684, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2687), rt_str("))", 2)); b_; }));
goto ret_;
} else if (f_same_221(F->target_2686, F->at_2685)) {
F->result_ = f_checked_213(F->target_2686, F->c_2684, &F->a_2687);
goto ret_;
}
f_fail_23(F->line_978, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT does not convert between these types", 41); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_979) = F->t_979v;
  RT_FPOP();
  return F->result_;
}

static rstr f_float_digits_982(P1020 e_981) {
  struct f_float_digits_982fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_981 = e_981;
F->lv_2689 = NULL;
F->t_2690 = NULL;
F->c_2691 = NULL;
F->ro_2692 = RT_R_EUNDEF;
if (((rt_r_ichk((*(P1020)rt_nil_check(F->e_981)).kind) == (((rt_int)8LL))) || (rt_r_ichk((*(P1020)rt_nil_check(F->e_981)).kind) == (((rt_int)17LL))))) {
F->result_ = f_float_digits_982((*(P1020)rt_nil_check(F->e_981)).a);
goto ret_;
} else if ((rt_r_ichk((*(P1020)rt_nil_check(F->e_981)).kind) == (((rt_int)2LL)))) {
F->n_2693 = RT_R_IUNDEF;
F->n_2693 = ((rt_int)0LL);
F->lead_2694 = RT_R_EUNDEF;
F->lead_2694 = 1;
{ rt_int lo2696 = ((rt_int)1LL), hi2697 = ((rt_int)(((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_981)).name))->all)).len));
for (rt_int it2698 = lo2696; it2698 <= hi2697; it2698++) {
F->i_2695 = it2698;
if (((rt_r_echk(rt_str_get((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_981)).name))->all), F->i_2695)) == 69) || (rt_r_echk(rt_str_get((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_981)).name))->all), F->i_2695)) == 101))) {
F->result_ = f_itos_7(rt_r_ichk(F->n_2693));
goto ret_;
} else if ((f_is_digit_11(rt_r_echk(rt_str_get((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_981)).name))->all), F->i_2695))) && (!(rt_r_echk(F->lead_2694) && (rt_r_echk(rt_str_get((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_981)).name))->all), F->i_2695)) == 48))))) {
F->n_2693 = rt_add(rt_r_ichk(F->n_2693), ((rt_int)1LL));
F->lead_2694 = 0;
} else if ((f_is_digit_11(rt_r_echk(rt_str_get((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->e_981)).name))->all), F->i_2695))) && (!rt_r_echk(F->lead_2694)))) {
F->n_2693 = rt_add(rt_r_ichk(F->n_2693), ((rt_int)1LL));
}
}
}
F->result_ = f_itos_7(rt_r_ichk(F->n_2693));
goto ret_;
} else if (f_is_lvalue_757(F->e_981)) {
F->saved_2699 = NULL;
F->saved_2699 = g_code_1074;
g_code_1074 = f_new_buffer_24();
f_lvalue_763(F->e_981, &F->lv_2689, &F->t_2690, &F->c_2691, &F->ro_2692);
g_code_1074 = F->saved_2699;
if (((F->c_2691 != NULL) && ((*(P1022)rt_nil_check(F->c_2691)).prec != NULL))) {
F->result_ = (((P1013)rt_nil_check((*(P1022)rt_nil_check(F->c_2691)).prec))->all);
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

static rstr f_enum_names_984(P1026 t_983) {
  struct f_enum_names_984fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->t_983 = t_983;
F->l_2700 = NULL;
F->l_2700 = (*(P1026)rt_nil_check(F->t_983)).lits;
F->r_2701 = NULL;
F->r_2701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("", 0); b_; }));
if (((*(P1026)rt_nil_check(F->t_983)).cname != NULL)) {
F->result_ = (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_983)).cname))->all);
goto ret_;
}
while ((F->l_2700 != NULL)) {
if ((((rt_int)(((((P1013)rt_nil_check(F->r_2701))->all)).len)) > ((rt_int)0LL))) {
F->r_2701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((((P1013)rt_nil_check(F->r_2701))->all), rt_str(", ", 2)); b_; }));
}
F->r_2701 = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->r_2701))->all), f_q_18()), (((P1013)rt_nil_check((*(P1020)rt_nil_check(F->l_2700)).name))->all)), f_q_18()); b_; }));
F->l_2700 = (*(P1020)rt_nil_check(F->l_2700)).next;
}
(*(P1026)rt_nil_check(F->t_983)).cname = f_mk_3(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_new_name_20(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("en_", 3); b_; })); b_; }));
f_put_27(g_out_globals_1070, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("static const char *const ", 25), (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_983)).cname))->all)), rt_str("[] = {", 6)), (((P1013)rt_nil_check(F->r_2701))->all)), rt_str("};", 2)); b_; }));
F->result_ = (((P1013)rt_nil_check((*(P1026)rt_nil_check(F->t_983)).cname))->all);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_explicit_rep_986(P1020 e_985) {
  struct f_explicit_rep_986fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_985 = e_985;
F->bt_2702 = NULL;
if (((rt_r_ichk((*(P1020)rt_nil_check(F->e_985)).kind) != (((rt_int)11LL))) && (!((rt_r_ichk((*(P1020)rt_nil_check(F->e_985)).kind) == (((rt_int)10LL))) && f_is_lvalue_757(F->e_985))))) {
F->result_ = 0;
goto ret_;
}
F->bt_2702 = f_peek_type_810((*(P1020)rt_nil_check(F->e_985)).a);
while ((((F->bt_2702 != NULL) && (rt_r_ichk((*(P1026)rt_nil_check(F->bt_2702)).kind) == (((rt_int)8LL)))) && ((*(P1026)rt_nil_check(F->bt_2702)).repn == NULL))) {
f_finish_ptr_469(F->bt_2702);
F->bt_2702 = (*(P1026)rt_nil_check(F->bt_2702)).target;
}
if (((F->bt_2702 != NULL) && ((*(P1026)rt_nil_check(F->bt_2702)).repn != NULL))) {
F->result_ = 1;
goto ret_;
}
F->result_ = f_explicit_rep_986((*(P1020)rt_nil_check(F->e_985)).a);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_actual_bounds_990(P1026 ft_987, P1026 t_988, P1022 c_989) {
  struct f_actual_bounds_990fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->ft_987 = ft_987;
F->t_988 = t_988;
F->c_989 = c_989;
if ((!f_scalar_kind_186(F->ft_987))) {
F->result_ = rt_str("", 0);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str(", ", 2), f_sub_lo_198(F->t_988, F->c_989)), rt_str(", ", 2)), f_sub_hi_201(F->t_988, F->c_989));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static rstr f_builtin_997(rstr *name_991, P1020 tt_992, P1020 args_993, rt_int line_994, int is_stmt_995, P1026 *t_996) {
  struct f_builtin_997fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_991 = name_991;
F->tt_992 = tt_992;
F->args_993 = args_993;
F->line_994 = line_994;
F->is_stmt_995 = is_stmt_995;
F->t_996 = t_996;
F->t_996v = *F->t_996;
F->at_2703 = NULL;
F->n_2704 = RT_R_IUNDEF;
F->n_2704 = f_list_len_71(F->args_993);
F->t_996v = g_ty_void_1109;
if (((rt_str_eq((*F->name_991), rt_str("POS", 3)) || rt_str_eq((*F->name_991), rt_str("SUCC", 4))) || rt_str_eq((*F->name_991), rt_str("PRED", 4)))) {
F->a_2705 = rt_str_copy(f_gexpr_794(F->args_993, NULL, &F->at_2703));
if (rt_str_eq((*F->name_991), rt_str("POS", 3))) {
if (((*(P1026)rt_nil_check(f_base_of_223(F->at_2703))).kind != (((rt_int)4LL)))) {
f_fail_23(F->line_994, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("POS needs an enumeration value", 30); b_; }));
}
F->t_996v = g_ty_int_1104;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2705), rt_str(") + 1)", 6));
goto ret_;
}
F->t_996v = F->at_2703;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->at_2703)).kind) == (((rt_int)1LL)))) {
if (rt_str_eq((*F->name_991), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_add(", 7), F->a_2705), rt_str(", 1)", 4));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_sub(", 7), F->a_2705), rt_str(", 1)", 4));
goto ret_;
}
if (rt_str_eq((*F->name_991), rt_str("SUCC", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2705), rt_str(" + 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_71((*(P1026)rt_nil_check(f_base_of_223(F->at_2703))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_range(", 9), F->a_2705), rt_str(" - 1, 0, ", 9)), f_itos_7(rt_sub(f_list_len_71((*(P1026)rt_nil_check(f_base_of_223(F->at_2703))).lits), ((rt_int)1LL)))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("FLOOR", 5))) {
F->a_2706 = rt_str_copy(f_gexpr_794(F->args_993, g_ty_float_1106, &F->at_2703));
f_check_type_232(F->at_2703, g_ty_float_1106, F->line_994);
F->t_996v = g_ty_int_1104;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_floor(", 11), F->a_2706), rt_str(")", 1));
goto ret_;
} else if ((((rt_str_eq((*F->name_991), rt_str("ACTP", 4)) || rt_str_eq((*F->name_991), rt_str("RADIX", 5))) || rt_str_eq((*F->name_991), rt_str("EMIN", 4))) || rt_str_eq((*F->name_991), rt_str("EMAX", 4)))) {
F->a_2707 = rt_str_copy(f_gexpr_794(F->args_993, g_ty_float_1106, &F->at_2703));
f_check_type_232(F->at_2703, g_ty_float_1106, F->line_994);
F->t_996v = g_ty_int_1104;
if (rt_str_eq((*F->name_991), rt_str("ACTP", 4))) {
F->result_ = rt_str("((rt_int)15)", 12);
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("RADIX", 5))) {
F->result_ = rt_str("((rt_int)2)", 11);
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("EMIN", 4))) {
F->result_ = rt_str("((rt_int)-1021)", 15);
goto ret_;
}
F->result_ = rt_str("((rt_int)1024)", 14);
goto ret_;
} else if (((((rt_str_eq((*F->name_991), rt_str("SQRT", 4)) || rt_str_eq((*F->name_991), rt_str("SIN", 3))) || rt_str_eq((*F->name_991), rt_str("COS", 3))) || rt_str_eq((*F->name_991), rt_str("EXP", 3))) || rt_str_eq((*F->name_991), rt_str("LN", 2)))) {
F->a_2708 = rt_str_copy(f_gexpr_794(F->args_993, g_ty_float_1106, &F->at_2703));
F->t_996v = g_ty_float_1106;
if (rt_str_eq((*F->name_991), rt_str("LN", 2))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("log(", 4), F->a_2708), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(f_lower_s_15(&(*F->name_991)), rt_str("(", 1)), F->a_2708), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("IFLOAT", 6))) {
F->a_2709 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->args_993)).next, g_ty_int_1104, &F->at_2703));
F->t_996v = g_ty_float_1106;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((double)(", 10), F->a_2709), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("IFIX", 4))) {
F->a_2710 = rt_str_copy(f_gexpr_794(F->args_993, g_ty_float_1106, &F->at_2703));
F->t_996v = g_ty_int_1104;
F->result_ = rt_str_cat(rt_str_cat(rt_str("((rt_int)(", 10), F->a_2710), rt_str("))", 2));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("FORMAT", 6))) {
F->a_2711 = rt_str_copy(f_gexpr_794(F->args_993, g_ty_float_1106, &F->at_2703));
F->n1_2712 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->args_993)).next, g_ty_int_1104, &F->at_2703));
F->m1_2713 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_993)).next)).next, g_ty_int_1104, &F->at_2703));
F->t_996v = g_ty_string_1108;
if ((rt_r_ichk(F->n_2704) == ((rt_int)4LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_format_e(", 14), F->a_2711), rt_str(", ", 2)), F->n1_2712), rt_str(", ", 2)), F->m1_2713), rt_str(", ", 2)), f_gexpr_794((*(P1020)rt_nil_check((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_993)).next)).next)).next, g_ty_int_1104, &F->at_2703)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_format(", 12), F->a_2711), rt_str(", ", 2)), F->n1_2712), rt_str(", ", 2)), F->m1_2713), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("ABS", 3))) {
F->a_2714 = rt_str_copy(f_gexpr_794(F->args_993, NULL, &F->at_2703));
F->t_996v = F->at_2703;
if ((rt_r_ichk((*(P1026)rt_nil_check(F->at_2703)).kind) == (((rt_int)1LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_abs(", 7), F->a_2714), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("fabs(", 5), F->a_2714), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("CNVT", 4))) {
if ((F->tt_992 == NULL)) {
f_fail_23(F->line_994, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("CNVT needs a target type in [ ]", 31); b_; }));
}
F->result_ = f_conversion_980(F->tt_992, F->args_993, F->line_994, &F->t_996v);
goto ret_;
} else if ((rt_str_eq((*F->name_991), rt_str("WRITELN", 7)) && (rt_r_ichk(F->n_2704) == ((rt_int)2LL)))) {
F->f_2715 = rt_str_copy(f_file_ref_973(F->args_993, 1, F->line_994));
F->a_2716 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->args_993)).next, g_ty_string_1108, &F->at_2703));
f_check_type_232(F->at_2703, g_ty_string_1108, F->line_994);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fwriteln(", 14), F->f_2715), rt_str(", ", 2)), F->a_2716), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("WRITELN", 7))) {
if ((rt_r_ichk(F->n_2704) == ((rt_int)0LL))) {
F->result_ = rt_str("rt_newline()", 12);
goto ret_;
}
{
F->a_2717 = rt_str_copy(f_gexpr_794(F->args_993, g_ty_string_1108, &F->at_2703));
f_check_type_232(F->at_2703, g_ty_string_1108, F->line_994);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_putln(", 9), F->a_2717), rt_str(")", 1));
goto ret_;
}
} else if ((rt_str_eq((*F->name_991), rt_str("WRITE", 5)) || rt_str_eq((*F->name_991), rt_str("READ", 4)))) {
F->ft_2718 = NULL;
F->f_2719 = rt_str_copy(f_file_ref_973(F->args_993, 0, F->line_994));
F->ft_2718 = f_peek_type_810(F->args_993);
if (rt_str_eq((*F->name_991), rt_str("READ", 4))) {
F->lv_2720 = NULL;
F->lc_2721 = NULL;
F->ro_2722 = RT_R_EUNDEF;
f_lvalue_763((*(P1020)rt_nil_check(F->args_993)).next, &F->lv_2720, &F->at_2703, &F->lc_2721, &F->ro_2722);
if (rt_r_echk(F->ro_2722)) {
f_fail_23(F->line_994, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("READ needs a variable", 21); b_; }));
}
f_check_type_232(F->at_2703, f_str_elem_218(F->ft_2718), F->line_994);
if (f_text_file_975(F->ft_2718)) {
F->result_ = f_assign_code_411(&(((P1013)rt_nil_check(F->lv_2720))->all), F->at_2703, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fgetc(", 11), F->f_2719), rt_str(")", 1)); b_; }), F->lc_2721);
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fread(", 11), F->f_2719), rt_str(", &", 3)), (((P1013)rt_nil_check(F->lv_2720))->all)), rt_str(")", 1));
goto ret_;
}
{
F->a_2723 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->args_993)).next, f_str_elem_218(F->ft_2718), &F->at_2703));
if ((f_text_file_975(F->ft_2718) && (rt_r_ichk((*(P1026)rt_nil_check(F->at_2703)).kind) == (((rt_int)5LL))))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fputs(", 11), F->f_2719), rt_str(", ", 2)), F->a_2723), rt_str(")", 1));
goto ret_;
}
f_check_type_232(F->at_2703, f_str_elem_218(F->ft_2718), F->line_994);
if (f_text_file_975(F->ft_2718)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fputc(", 11), F->f_2719), rt_str(", ", 2)), F->a_2723), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234(F->at_2703)), rt_str(" w_ = ", 6)), F->a_2723), rt_str("; rt_r_fwrite(", 14)), F->f_2719), rt_str(", &w_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_991), rt_str("READLN", 6)) && (rt_r_ichk(F->n_2704) == ((rt_int)2LL)))) {
F->lv_2724 = NULL;
F->lc_2725 = NULL;
F->ro_2726 = RT_R_EUNDEF;
F->f_2727 = rt_str_copy(f_file_ref_973(F->args_993, 1, F->line_994));
f_lvalue_763((*(P1020)rt_nil_check(F->args_993)).next, &F->lv_2724, &F->at_2703, &F->lc_2725, &F->ro_2726);
f_check_type_232(F->at_2703, g_ty_string_1108, F->line_994);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_freadln(", 13), F->f_2727), rt_str(", &", 3)), (((P1013)rt_nil_check(F->lv_2724))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("READLN", 6))) {
F->lv_2728 = NULL;
F->lc_2729 = NULL;
F->ro_2730 = RT_R_EUNDEF;
f_lvalue_763(F->args_993, &F->lv_2728, &F->at_2703, &F->lc_2729, &F->ro_2730);
f_check_type_232(F->at_2703, g_ty_string_1108, F->line_994);
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_readln(&", 13), (((P1013)rt_nil_check(F->lv_2728))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_991), rt_str("SIZELN", 6)) && (rt_r_ichk(F->n_2704) == ((rt_int)1LL)))) {
F->t_996v = g_ty_int_1104;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fsizeln(", 13), f_file_ref_973(F->args_993, 1, F->line_994)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("SIZELN", 6))) {
F->t_996v = g_ty_int_1104;
F->result_ = rt_str("rt_sizeln()", 11);
goto ret_;
} else if ((rt_str_eq((*F->name_991), rt_str("EOF", 3)) && (rt_r_ichk(F->n_2704) == ((rt_int)1LL)))) {
F->t_996v = g_ty_bool_1105;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_feof(", 10), f_file_ref_973(F->args_993, 0, F->line_994)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("EOF", 3))) {
F->t_996v = g_ty_bool_1105;
F->result_ = rt_str("rt_eof()", 8);
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("SYS_IN", 6))) {
F->t_996v = g_ty_text_file_1118;
F->result_ = rt_str("rt_r_sys_in()", 13);
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("SYS_OUT", 7))) {
F->t_996v = g_ty_text_file_1118;
F->result_ = rt_str("rt_r_sys_out()", 14);
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("OPEN", 4))) {
F->f_2731 = rt_str_copy(f_file_ref_973(F->args_993, 0, F->line_994));
F->nm_2732 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->args_993)).next, g_ty_string_1108, &F->at_2703));
F->st_2733 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_993)).next)).next, g_file_state_type_1119, &F->at_2703));
f_check_type_232(F->at_2703, g_file_state_type_1119, F->line_994);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_open(", 10), F->f_2731), rt_str(", ", 2)), F->nm_2732), rt_str(", ", 2)), F->st_2733), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("CLOSE", 5))) {
F->f_2734 = rt_str_copy(f_file_ref_973(F->args_993, 0, F->line_994));
F->d_2735 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->args_993)).next, g_file_disp_type_1120, &F->at_2703));
f_check_type_232(F->at_2703, g_file_disp_type_1120, F->line_994);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_close(", 11), F->f_2734), rt_str(", ", 2)), F->d_2735), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_991), rt_str("SIZE", 4)) || rt_str_eq((*F->name_991), rt_str("POSITION", 8)))) {
F->t_996v = g_ty_int_1104;
if (rt_str_eq((*F->name_991), rt_str("SIZE", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fsize(", 11), f_file_ref_973(F->args_993, 0, F->line_994)), rt_str(")", 1));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_fpos(", 10), f_file_ref_973(F->args_993, 0, F->line_994)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("SET_POSITION", 12))) {
F->f_2736 = rt_str_copy(f_file_ref_973(F->args_993, 0, F->line_994));
F->v_2737 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->args_993)).next, g_ty_int_1104, &F->at_2703));
f_check_type_232(F->at_2703, g_ty_int_1104, F->line_994);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_fsetpos(", 13), F->f_2736), rt_str(", ", 2)), F->v_2737), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("FILE_RENAME", 11))) {
F->a_2738 = rt_str_copy(f_gexpr_794(F->args_993, g_ty_string_1108, &F->at_2703));
F->b_2739 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->args_993)).next, g_ty_string_1108, &F->at_2703));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_rename(", 12), F->a_2738), rt_str(", ", 2)), F->b_2739), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_991), rt_str("SEND", 4)) || rt_str_eq((*F->name_991), rt_str("RECEIVE", 7)))) {
F->lv_2740 = NULL;
F->dv_2741 = NULL;
F->lc_2742 = NULL;
F->ro_2743 = RT_R_EUNDEF;
F->mt_2744 = NULL;
F->dt_2745 = NULL;
f_lvalue_763(F->args_993, &F->lv_2740, &F->mt_2744, &F->lc_2742, &F->ro_2743);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->mt_2744)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_994, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_991), rt_str(" needs a mailbox", 16)); b_; }));
}
if (rt_str_eq((*F->name_991), rt_str("RECEIVE", 7))) {
f_lvalue_763((*(P1020)rt_nil_check(F->args_993)).next, &F->dv_2741, &F->dt_2745, &F->lc_2742, &F->ro_2743);
f_check_type_232(F->dt_2745, (*(P1026)rt_nil_check(F->mt_2744)).elem, F->line_994);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_receive(", 11), (((P1013)rt_nil_check(F->lv_2740))->all)), rt_str(", &", 3)), (((P1013)rt_nil_check(F->dv_2741))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2746 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->args_993)).next, (*(P1026)rt_nil_check(F->mt_2744)).elem, &F->at_2703));
f_check_type_232(F->at_2703, (*(P1026)rt_nil_check(F->mt_2744)).elem, F->line_994);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1026)rt_nil_check(F->mt_2744)).elem)), rt_str(" m_ = ", 6)), F->v_2746), rt_str("; rt_send(", 10)), (((P1013)rt_nil_check(F->lv_2740))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if ((rt_str_eq((*F->name_991), rt_str("FULL_SLOTS", 10)) || rt_str_eq((*F->name_991), rt_str("EMPTY_SLOTS", 11)))) {
F->lv_2747 = NULL;
F->lc_2748 = NULL;
F->ro_2749 = RT_R_EUNDEF;
F->mt_2750 = NULL;
f_lvalue_763(F->args_993, &F->lv_2747, &F->mt_2750, &F->lc_2748, &F->ro_2749);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->mt_2750)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_994, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_991), rt_str(" needs a mailbox", 16)); b_; }));
}
F->t_996v = g_ty_int_1104;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_991))), rt_str("(", 1)), (((P1013)rt_nil_check(F->lv_2747))->all)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_991), rt_str("COND_SEND", 9)) || rt_str_eq((*F->name_991), rt_str("COND_RECEIVE", 12)))) {
F->lv_2751 = NULL;
F->dv_2752 = NULL;
F->bv_2753 = NULL;
F->lc_2754 = NULL;
F->ro_2755 = RT_R_EUNDEF;
F->mt_2756 = NULL;
F->dt_2757 = NULL;
F->bt_2758 = NULL;
f_lvalue_763(F->args_993, &F->lv_2751, &F->mt_2756, &F->lc_2754, &F->ro_2755);
if ((rt_r_ichk((*(P1026)rt_nil_check(F->mt_2756)).kind) != (((rt_int)12LL)))) {
f_fail_23(F->line_994, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_991), rt_str(" needs a mailbox", 16)); b_; }));
}
f_lvalue_763((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_993)).next)).next, &F->bv_2753, &F->bt_2758, &F->lc_2754, &F->ro_2755);
f_check_type_232(F->bt_2758, g_ty_bool_1105, F->line_994);
if (rt_str_eq((*F->name_991), rt_str("COND_RECEIVE", 12))) {
f_lvalue_763((*(P1020)rt_nil_check(F->args_993)).next, &F->dv_2752, &F->dt_2757, &F->lc_2754, &F->ro_2755);
f_check_type_232(F->dt_2757, (*(P1026)rt_nil_check(F->mt_2756)).elem, F->line_994);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->bv_2753))->all), rt_str(" = rt_cond_receive(", 19)), (((P1013)rt_nil_check(F->lv_2751))->all)), rt_str(", &", 3)), (((P1013)rt_nil_check(F->dv_2752))->all)), rt_str(")", 1));
goto ret_;
}
{
F->v_2759 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->args_993)).next, (*(P1026)rt_nil_check(F->mt_2756)).elem, &F->at_2703));
f_check_type_232(F->at_2703, (*(P1026)rt_nil_check(F->mt_2756)).elem, F->line_994);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ ", 3), f_ctype_234((*(P1026)rt_nil_check(F->mt_2756)).elem)), rt_str(" m_ = ", 6)), F->v_2759), rt_str("; ", 2)), (((P1013)rt_nil_check(F->bv_2753))->all)), rt_str(" = rt_cond_send(", 16)), (((P1013)rt_nil_check(F->lv_2751))->all)), rt_str(", &m_); })", 10));
goto ret_;
}
} else if (rt_str_eq((*F->name_991), rt_str("PRIORITY", 8))) {
F->t_996v = g_ty_int_1104;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_priority(", 12), f_act_ref_645(F->args_993)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("SET_PRIORITY", 12))) {
F->v_2760 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->args_993)).next, g_ty_int_1104, &F->at_2703));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_set_priority(", 16), f_act_ref_645(F->args_993)), rt_str(", ", 2)), F->v_2760), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("EXTERMINATE", 11))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exterminate(", 15), f_act_ref_645(F->args_993)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("ACTIVE", 6))) {
F->t_996v = g_ty_bool_1105;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_active(", 12), f_act_ref_645(F->args_993)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("DELAY", 5))) {
F->v_2761 = rt_str_copy(f_gexpr_794(F->args_993, g_ty_int_1104, &F->at_2703));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay(", 9), F->v_2761), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_991), rt_str("DELAY_UNTIL", 11)) && (rt_r_ichk(F->n_2704) == ((rt_int)2LL)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_delay_act(", 15), f_act_delay_args_958(F->args_993)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("DELAY_UNTIL", 11))) {
F->v_2762 = rt_str_copy(f_gexpr_794(F->args_993, g_ty_int_1104, &F->at_2703));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until(", 15), F->v_2762), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("DELAY_UNTIL_INACTIVE", 20))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_delay_until_inactive(", 24), f_act_ref_645(F->args_993)), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_991), rt_str("TIME", 4)) && (rt_r_ichk(F->n_2704) == ((rt_int)1LL)))) {
F->t_996v = g_ty_int_1104;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_act_time(", 14), f_act_ref_645(F->args_993)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("TIME", 4))) {
F->t_996v = g_ty_int_1104;
F->result_ = rt_str("rt_time()", 9);
goto ret_;
} else if ((((rt_str_eq((*F->name_991), rt_str("MILLISECONDS", 12)) || rt_str_eq((*F->name_991), rt_str("SECONDS", 7))) || rt_str_eq((*F->name_991), rt_str("MINUTES", 7))) || rt_str_eq((*F->name_991), rt_str("HOURS", 5)))) {
F->t_996v = g_ty_int_1104;
F->result_ = rt_str_cat(rt_str("RT_", 3), (*F->name_991));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("HALT", 4))) {
F->a_2763 = rt_str_copy(f_gexpr_794(F->args_993, g_ty_int_1104, &F->at_2703));
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_exit(", 8), F->a_2763), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_991), rt_str("ME", 2)) && (F->tt_992 != NULL))) {
F->result_ = f_me_high_930(F->tt_992, F->line_994, &F->t_996v);
goto ret_;
} else if ((rt_str_eq((*F->name_991), rt_str("WAITING", 7)) || rt_str_eq((*F->name_991), rt_str("SUSPENDED", 9)))) {
F->t_996v = g_ty_bool_1105;
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_is_", 6), f_lower_s_15(&(*F->name_991))), rt_str("(", 1)), f_act_ref_645(F->args_993)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_991), rt_str("SUSPEND", 7)) || rt_str_eq((*F->name_991), rt_str("UNSUSPEND", 9))) || rt_str_eq((*F->name_991), rt_str("LOW_SYNC_SIGNAL", 15))) || rt_str_eq((*F->name_991), rt_str("LOW_TASK_END", 12))) || rt_str_eq((*F->name_991), rt_str("SYNC_SIGNAL", 11))) || rt_str_eq((*F->name_991), rt_str("TASK_END", 8)))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_991))), rt_str("(", 1)), f_act_ref_645(F->args_993)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("TASK_START", 10))) {
if ((rt_r_ichk(F->n_2704) != ((rt_int)2LL))) {
f_fail_23(F->line_994, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("TASK_START needs two activation variables", 41); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_task_start(", 14), f_act_ref_645(F->args_993)), rt_str(", ", 2)), f_act_ref_645((*(P1020)rt_nil_check(F->args_993)).next)), rt_str(")", 1));
goto ret_;
} else if ((((((rt_str_eq((*F->name_991), rt_str("CRITICAL", 8)) || rt_str_eq((*F->name_991), rt_str("NONCRITICAL", 11))) || rt_str_eq((*F->name_991), rt_str("SYNC_RESET", 10))) || rt_str_eq((*F->name_991), rt_str("SYNC_WAIT", 9))) || rt_str_eq((*F->name_991), rt_str("LOW_SYNC_RESET", 14))) || rt_str_eq((*F->name_991), rt_str("LOW_SYNC_WAIT", 13)))) {
if ((rt_r_ichk(F->n_2704) != ((rt_int)0LL))) {
f_fail_23(F->line_994, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_991), rt_str(" takes no actual parameters here", 32)); b_; }));
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_", 3), f_lower_s_15(&(*F->name_991))), rt_str("()", 2));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("LOCK", 4))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_enter(", 16), f_lock_ref_935(F->args_993, &(*F->name_991))), rt_str(")", 1));
goto ret_;
} else if ((rt_str_eq((*F->name_991), rt_str("UNLOCK", 6)) && (f_peek_type_810(F->args_993) != g_ty_latch_1113))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_unlock(", 12), f_lock_ref_935(F->args_993, &(*F->name_991))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("UNLOCK", 6))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_region_leave(", 16), f_lock_ref_935(F->args_993, &(*F->name_991))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("COND_LOCK", 9))) {
F->bv_2764 = NULL;
F->bc_2765 = NULL;
F->ro_2766 = RT_R_EUNDEF;
F->bt_2767 = NULL;
F->l_2768 = rt_str_copy(f_lock_ref_935(F->args_993, &(*F->name_991)));
f_lvalue_763((*(P1020)rt_nil_check(F->args_993)).next, &F->bv_2764, &F->bt_2767, &F->bc_2765, &F->ro_2766);
f_check_type_232(F->bt_2767, g_ty_bool_1105, F->line_994);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat((((P1013)rt_nil_check(F->bv_2764))->all), rt_str(" = rt_cond_lock(", 16)), F->l_2768), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("EXCESS_LOCKS", 12))) {
F->t_996v = g_ty_int_1104;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_excess_locks(", 16), f_lock_ref_935(F->args_993, &(*F->name_991))), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("OWNER", 5))) {
F->t_996v = g_ty_act_1114;
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_owner(", 11), f_lock_ref_935(F->args_993, &(*F->name_991))), rt_str(")", 1));
goto ret_;
} else if (((((((((rt_str_eq((*F->name_991), rt_str("SEND_REQUEST", 12)) || rt_str_eq((*F->name_991), rt_str("SEND_TEST", 9))) || rt_str_eq((*F->name_991), rt_str("SEND_COMPLETE", 13))) || rt_str_eq((*F->name_991), rt_str("SEND_REVOKE", 11))) || rt_str_eq((*F->name_991), rt_str("RECEIVE_REQUEST", 15))) || rt_str_eq((*F->name_991), rt_str("RECEIVE_TEST", 12))) || rt_str_eq((*F->name_991), rt_str("RECEIVE_COMPLETE", 16))) || rt_str_eq((*F->name_991), rt_str("RECEIVE_REVOKE", 14))) && (rt_r_ichk(F->n_2704) == ((rt_int)3LL)))) {
F->result_ = f_mailbox_low_966(&(*F->name_991), F->args_993, F->line_994, &F->t_996v);
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("FREE", 4))) {
F->pv_2769 = NULL;
F->pc_2770 = NULL;
F->ro_2771 = RT_R_EUNDEF;
F->pt_2772 = NULL;
f_lvalue_763(F->args_993, &F->pv_2769, &F->pt_2772, &F->pc_2770, &F->ro_2771);
if (((rt_r_ichk((*(P1026)rt_nil_check(F->pt_2772)).kind) != (((rt_int)8LL))) || rt_r_echk(F->ro_2771))) {
f_fail_23(F->line_994, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("FREE needs a variable of an indirect type", 41); b_; }));
}
g_uses_free_1085 = 1;
f_finish_ptr_469(F->pt_2772);
if ((f_suppressed_506(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("X_FREE", 6); b_; })) || f_unchecked_free_337(F->pt_2772))) {
if (f_needs_fin_346((*(P1026)rt_nil_check(F->pt_2772)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ if (", 7), (((P1013)rt_nil_check(F->pv_2769))->all)), rt_str(") { ", 4)), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_752(F->pt_2772, &(((P1013)rt_nil_check(F->pv_2769))->all)); b_; }), (*(P1026)rt_nil_check(F->pt_2772)).target)), rt_str(" } rt_r_free_unchecked((void **)&", 33)), (((P1013)rt_nil_check(F->pv_2769))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_r_free_unchecked((void **)&", 30), (((P1013)rt_nil_check(F->pv_2769))->all)), rt_str(")", 1));
goto ret_;
} else if (f_needs_fin_346((*(P1026)rt_nil_check(F->pt_2772)).target)) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_free_check((void **)&", 27), (((P1013)rt_nil_check(F->pv_2769))->all)), rt_str("); if (", 7)), (((P1013)rt_nil_check(F->pv_2769))->all)), rt_str(") { ", 4)), f_fin_code_349(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = f_cell_deref_752(F->pt_2772, &(((P1013)rt_nil_check(F->pv_2769))->all)); b_; }), (*(P1026)rt_nil_check(F->pt_2772)).target)), rt_str(" } rt_free((void **)&", 21)), (((P1013)rt_nil_check(F->pv_2769))->all)), rt_str("); })", 5));
goto ret_;
}
F->result_ = rt_str_cat(rt_str_cat(rt_str("rt_free((void **)&", 18), (((P1013)rt_nil_check(F->pv_2769))->all)), rt_str(")", 1));
goto ret_;
} else if (rt_str_eq((*F->name_991), rt_str("LOW_IO", 6))) {
F->dev_2773 = rt_str_copy(f_gexpr_794(F->args_993, g_ty_int_1104, &F->at_2703));
F->cmd_2774 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check(F->args_993)).next, g_ty_int_1104, &F->at_2703));
if ((rt_r_ichk(F->n_2704) == ((rt_int)2LL))) {
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = 0; rt_r_low_io(", 30), F->dev_2773), rt_str(", ", 2)), F->cmd_2774), rt_str(", &d_); })", 10));
goto ret_;
} else if ((!f_is_lvalue_757((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_993)).next)).next))) {
F->v_2775 = rt_str_copy(f_gexpr_794((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_993)).next)).next, g_ty_int_1104, &F->at_2703));
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("({ rt_int d_ = ", 15), F->v_2775), rt_str("; rt_r_low_io(", 14)), F->dev_2773), rt_str(", ", 2)), F->cmd_2774), rt_str(", &d_); })", 10));
goto ret_;
}
{
F->dv_2776 = NULL;
F->dc_2777 = NULL;
F->ro_2778 = RT_R_EUNDEF;
F->dt_2779 = NULL;
f_lvalue_763((*(P1020)rt_nil_check((*(P1020)rt_nil_check(F->args_993)).next)).next, &F->dv_2776, &F->dt_2779, &F->dc_2777, &F->ro_2778);
f_check_type_232(F->dt_2779, g_ty_int_1104, F->line_994);
F->result_ = rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("rt_r_low_io(", 12), F->dev_2773), rt_str(", ", 2)), F->cmd_2774), rt_str(", &", 3)), (((P1013)rt_nil_check(F->dv_2776))->all)), rt_str(")", 1));
goto ret_;
}
}
f_fail_23(F->line_994, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str_cat((*F->name_991), rt_str(" is not defined", 15)); b_; }));
F->result_ = rt_str("", 0);
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  (*F->t_996) = F->t_996v;
  RT_FPOP();
  return F->result_;
}

static P1020 f_with_library_999(P1020 units_998) {
  struct f_with_library_999fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_998 = units_998;
F->r_2780 = NULL;
F->r_2780 = F->units_998;
F->more_2781 = RT_R_EUNDEF;
F->more_2781 = 1;
while (rt_r_echk(F->more_2781)) {
F->missing_2782 = NULL;
F->missing_2782 = f_external_missing_1002(F->r_2780, F->r_2780);
F->more_2781 = 0;
if ((F->missing_2782 != NULL)) {
F->saved_2783 = RT_R_IUNDEF;
F->saved_2783 = rt_r_ichk(g_tpos_1053);
if (f_read_library_60(&(((P1013)rt_nil_check(F->missing_2782))->all))) {
F->lib_2784 = NULL;
g_tpos_1053 = rt_r_ichk(g_ntoks_before_library_1058);
F->lib_2784 = f_program_159();
g_tpos_1053 = rt_r_ichk(F->saved_2783);
if ((F->lib_2784 != NULL)) {
F->t_2785 = NULL;
F->t_2785 = F->lib_2784;
while (((*(P1020)rt_nil_check(F->t_2785)).next != NULL)) {
F->t_2785 = (*(P1020)rt_nil_check(F->t_2785)).next;
}
(*(P1020)rt_nil_check(F->t_2785)).next = F->r_2780;
F->r_2780 = F->lib_2784;
F->more_2781 = 1;
}
}
}
g_ntoks_before_library_1058 = rt_add(rt_r_ichk(g_ntoks_1052), ((rt_int)1LL));
}
F->result_ = F->r_2780;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static P1013 f_external_missing_1002(P1020 e_1000, P1020 units_1001) {
  struct f_external_missing_1002fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->e_1000 = e_1000;
F->units_1001 = units_1001;
F->x_2786 = NULL;
F->x_2786 = F->e_1000;
while ((F->x_2786 != NULL)) {
if (((((rt_r_ichk((*(P1020)rt_nil_check(F->x_2786)).kind) == (((rt_int)48LL))) && (rt_r_ichk((*(P1020)rt_nil_check(F->x_2786)).flag) >= ((rt_int)2LL))) && (!f_unit_named_1005(F->units_1001, &(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_2786)).name))->all)))) && (!f_tried_1007(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_2786)).name))->all))))) {
f_mark_tried_1009(&(((P1013)rt_nil_check((*(P1020)rt_nil_check(F->x_2786)).name))->all));
F->result_ = (*(P1020)rt_nil_check(F->x_2786)).name;
goto ret_;
}
if ((((*(P1020)rt_nil_check(F->x_2786)).a != NULL) && (rt_r_ichk((*(P1020)rt_nil_check(F->x_2786)).kind) != (((rt_int)48LL))))) {
F->r_2787 = NULL;
F->r_2787 = f_external_missing_1002((*(P1020)rt_nil_check(F->x_2786)).a, F->units_1001);
if ((F->r_2787 != NULL)) {
F->result_ = F->r_2787;
goto ret_;
}
}
if ((((*(P1020)rt_nil_check(F->x_2786)).c != NULL) && (rt_r_ichk((*(P1020)rt_nil_check(F->x_2786)).kind) != (((rt_int)48LL))))) {
F->r_2788 = NULL;
F->r_2788 = f_external_missing_1002((*(P1020)rt_nil_check(F->x_2786)).c, F->units_1001);
if ((F->r_2788 != NULL)) {
F->result_ = F->r_2788;
goto ret_;
}
}
F->x_2786 = (*(P1020)rt_nil_check(F->x_2786)).next;
}
F->result_ = NULL;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_unit_named_1005(P1020 units_1003, rstr *name_1004) {
  struct f_unit_named_1005fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_1003 = units_1003;
F->name_1004 = name_1004;
F->u_2789 = NULL;
F->u_2789 = F->units_1003;
while ((F->u_2789 != NULL)) {
if (rt_str_eq((((P1013)rt_nil_check((*(P1020)rt_nil_check(F->u_2789)).name))->all), (*F->name_1004))) {
F->result_ = 1;
goto ret_;
}
F->u_2789 = (*(P1020)rt_nil_check(F->u_2789)).next;
}
F->result_ = 0;
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static int f_tried_1007(rstr *name_1006) {
  struct f_tried_1007fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_1006 = name_1006;
F->result_ = f_seen_name_425(g_library_tried_1059, &(*F->name_1006));
goto ret_;
  rt_raise_msg(RT_X_ASSERT, "function ended without RETURN");
ret_:
  RT_FPOP();
  return F->result_;
}

static void f_mark_tried_1009(rstr *name_1008) {
  struct f_mark_tried_1009fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->name_1008 = name_1008;
F->l_2790 = NULL;
{ R1025 *cell2791 = rt_alloc(sizeof(R1025));
(*cell2791).s = NULL;
(*cell2791).next = NULL;
F->l_2790 = cell2791;
}
(*(P1024)rt_nil_check(F->l_2790)).s = f_mk_3(&(*F->name_1008));
(*(P1024)rt_nil_check(F->l_2790)).next = g_library_tried_1059;
g_library_tried_1059 = F->l_2790;
ret_:
  RT_FPOP();
  return;
}

static void f_translate_1011(P1020 units_1010) {
  struct f_translate_1011fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
F->units_1010 = units_1010;
F->u_2792 = NULL;
F->u_2792 = F->units_1010;
while ((F->u_2792 != NULL)) {
if (f_has_pragmat_502((*(P1020)rt_nil_check(F->u_2792)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LIBRARY", 7); b_; }))) {
f_write_library_62(F->u_2792);
}
if ((((*(P1020)rt_nil_check(F->u_2792)).next == NULL) && (!f_has_pragmat_502((*(P1020)rt_nil_check(F->u_2792)).prags, ({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("LIBRARY", 7); b_; }))))) {
{ R1048 *cell2793 = rt_alloc(sizeof(R1048));
(*cell2793).d = NULL;
(*cell2793).next = NULL;
g_caps_1079 = cell2793;
}
(*(P1047)rt_nil_check(g_caps_1079)).d = F->u_2792;
(*(P1047)rt_nil_check(g_caps_1079)).depth = rt_r_ichk(g_depth_1063);
f_declare_labels_580((*(P1020)rt_nil_check(F->u_2792)).c);
f_declare_body_430((*(P1020)rt_nil_check(F->u_2792)).c);
f_capsule_body_587((*(P1020)rt_nil_check(F->u_2792)).c);
f_await_tasks_576((*(P1020)rt_nil_check(F->u_2792)).c);
{
F->l_2794 = NULL;
F->l_2794 = F->units_1010;
while ((F->l_2794 != F->u_2792)) {
{
F->w_2795 = rt_str_copy(f_waits_of_572(F->l_2794));
if ((((rt_int)((F->w_2795).len)) > ((rt_int)0LL))) {
f_emit_29(&F->w_2795);
}
}
F->l_2794 = (*(P1020)rt_nil_check(F->l_2794)).next;
}
}
f_close_fins_563(NULL);
if (rt_r_echk(g_uses_findyn_1087)) {
f_emit_29(({ rstr *b_ = rt_alloc(sizeof(rstr)); *b_ = rt_str("rt_finalize_all();", 18); b_; }));
}
} else {
f_gen_capsule_440(F->u_2792);
}
F->u_2792 = (*(P1020)rt_nil_check(F->u_2792)).next;
}
ret_:
  RT_FPOP();
  return;
}

static void f_print_program_1012(void) {
  struct f_print_program_1012fr *F = rt_alloc(sizeof *F);
  RT_FPUSH(F);
f_emit_helpers_426();
if (rt_r_echk(g_uses_free_1085)) {
rt_putln(rt_str("#define RT_SCAN 1", 17));
}
rt_putln(rt_str_cat(rt_str_cat(rt_str_cat(rt_str("#include ", 9), f_q_18()), rt_str("paleo.h", 7)), f_q_18()));
rt_putln(rt_str("#include <math.h>", 17));
f_print_buffer_31(g_out_types_1067);
f_print_buffer_31(g_out_frames_1083);
f_print_buffer_31(g_out_helpers_1068);
f_print_buffer_31(g_out_protos_1069);
f_print_buffer_31(g_out_globals_1070);
f_print_buffer_31(g_out_funcs_1071);
rt_putln(rt_str("int main(int argc, char **argv) {", 33));
rt_putln(rt_str("  rt_init(argc, argv);", 22));
rt_putln(rt_str("  rt_set_lang(0);", 17));
f_print_buffer_31(g_out_roots_1084);
f_print_buffer_31(g_out_excs_1073);
f_print_buffer_31(g_out_init_1072);
rt_putln(rt_str("  rt_main_done();", 17));
rt_putln(rt_str("  return 0;", 11));
rt_putln(rt_str("}", 1));
ret_:
  RT_FPOP();
  return;
}

static void as_R1050(R1050 *d, R1050 s) {
  d->d = s.d;
  d->w = s.w;
  d->next = s.next;
}
static R1050 cp_R1050(R1050 s) {
  R1050 d = s;
  d.d = s.d;
  d.w = s.w;
  d.next = s.next;
  return d;
}
static int eq_R1050(R1050 a, R1050 b) {
  return 1 && (a.d == b.d) && (a.w == b.w) && (a.next == b.next);
}
static void as_R1048(R1048 *d, R1048 s) {
  d->d = s.d;
  d->next = s.next;
  d->depth = s.depth;
}
static R1048 cp_R1048(R1048 s) {
  R1048 d = s;
  d.d = s.d;
  d.next = s.next;
  d.depth = s.depth;
  return d;
}
static int eq_R1048(R1048 a, R1048 b) {
  return 1 && (a.d == b.d) && (a.next == b.next) && (a.depth == b.depth);
}
static void as_R1046(R1046 *d, R1046 s) {
  d->match = s.match;
  d->label = s.label;
  d->depth = s.depth;
  d->next = s.next;
}
static R1046 cp_R1046(R1046 s) {
  R1046 d = s;
  d.match = s.match;
  d.label = s.label;
  d.depth = s.depth;
  d.next = s.next;
  return d;
}
static int eq_R1046(R1046 a, R1046 b) {
  return 1 && (a.match == b.match) && (a.label == b.label) && (a.depth == b.depth) && (a.next == b.next);
}
static void as_R1044(R1044 *d, R1044 s) {
  d->head = s.head;
  d->tail = s.tail;
}
static R1044 cp_R1044(R1044 s) {
  R1044 d = s;
  d.head = s.head;
  d.tail = s.tail;
  return d;
}
static int eq_R1044(R1044 a, R1044 b) {
  return 1 && (a.head == b.head) && (a.tail == b.tail);
}
static void as_R1042(R1042 *d, R1042 s) {
  d->t = s.t;
  d->next = s.next;
}
static R1042 cp_R1042(R1042 s) {
  R1042 d = s;
  d.t = s.t;
  d.next = s.next;
  return d;
}
static int eq_R1042(R1042 a, R1042 b) {
  return 1 && (a.t == b.t) && (a.next == b.next);
}
static void as_R1040(R1040 *d, R1040 s) {
  d->kind = s.kind;
  d->i = s.i;
  d->s = s.s;
  d->t = s.t;
  d->f = s.f;
}
static R1040 cp_R1040(R1040 s) {
  R1040 d = s;
  d.kind = s.kind;
  d.i = s.i;
  d.s = s.s;
  d.t = s.t;
  d.f = s.f;
  return d;
}
static int eq_R1040(R1040 a, R1040 b) {
  return 1 && (a.kind == b.kind) && (a.i == b.i) && (a.s == b.s) && (a.t == b.t) && (a.f == b.f);
}
static void as_R1038(R1038 *d, R1038 s) {
  d->depth = s.depth;
  d->imps = s.imps;
  d->all_imp = s.all_imp;
  d->next = s.next;
}
static R1038 cp_R1038(R1038 s) {
  R1038 d = s;
  d.depth = s.depth;
  d.imps = s.imps;
  d.all_imp = s.all_imp;
  d.next = s.next;
  return d;
}
static int eq_R1038(R1038 a, R1038 b) {
  return 1 && (a.depth == b.depth) && (a.imps == b.imps) && (a.all_imp == b.all_imp) && (a.next == b.next);
}
static void as_A1036(A1036 *d, A1036 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A1036 cp_A1036(A1036 s) {
  A1036 d = s; d.p = rt_alloc(sizeof(P1030) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A1036(A1036 a, A1036 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R1033(R1033 *d, R1033 s) {
  d->name = s.name;
  d->mode = s.mode;
  d->t = s.t;
  d->c = s.c;
  d->cfield = s.cfield;
  d->next = s.next;
}
static R1033 cp_R1033(R1033 s) {
  R1033 d = s;
  d.name = s.name;
  d.mode = s.mode;
  d.t = s.t;
  d.c = s.c;
  d.cfield = s.cfield;
  d.next = s.next;
  return d;
}
static int eq_R1033(R1033 a, R1033 b) {
  return 1 && (a.name == b.name) && (a.mode == b.mode) && (a.t == b.t) && (a.c == b.c) && (a.cfield == b.cfield) && (a.next == b.next);
}
static void as_R1031(R1031 *d, R1031 s) {
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
static R1031 cp_R1031(R1031 s) {
  R1031 d = s;
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
static int eq_R1031(R1031 a, R1031 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.access == b.access) && (a.cname == b.cname) && (a.ro_flag == b.ro_flag) && (a.mvalue == b.mvalue) && (a.hasmv == b.hasmv) && (a.st == b.st) && (a.decl == b.decl) && (a.params == b.params) && (a.result == b.result) && (a.depth == b.depth) && (a.level == b.level) && (a.byref == b.byref) && (a.members == b.members) && (a.mnext == b.mnext) && (a.binds == b.binds) && (a.insts == b.insts) && (a.env == b.env) && (a.chain == b.chain) && (a.stack == b.stack) && (a.owner == b.owner) && (a.gctx == b.gctx) && (a.mv == b.mv) && (a.reqs == b.reqs) && (a.reqdone == b.reqdone) && (a.home == b.home) && (a.capn == b.capn) && (a.tbinds == b.tbinds) && (a.loc == b.loc) && (a.reqs_sym == b.reqs_sym) && (a.decl_line == b.decl_line);
}
static void as_R1029(R1029 *d, R1029 s) {
  d->name = s.name;
  d->t = s.t;
  d->c = s.c;
  d->st = s.st;
  d->next = s.next;
}
static R1029 cp_R1029(R1029 s) {
  R1029 d = s;
  d.name = s.name;
  d.t = s.t;
  d.c = s.c;
  d.st = s.st;
  d.next = s.next;
  return d;
}
static int eq_R1029(R1029 a, R1029 b) {
  return 1 && (a.name == b.name) && (a.t == b.t) && (a.c == b.c) && (a.st == b.st) && (a.next == b.next);
}
static void as_R1027(R1027 *d, R1027 s) {
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
static R1027 cp_R1027(R1027 s) {
  R1027 d = s;
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
static int eq_R1027(R1027 a, R1027 b) {
  return 1 && (a.kind == b.kind) && (a.name == b.name) && (a.lits == b.lits) && (a.elem == b.elem) && (a.idx == b.idx) && (a.idx2 == b.idx2) && (a.elemcons == b.elemcons) && (a.elemst == b.elemst) && (a.under == b.under) && (a.tparams == b.tparams) && (a.ocap == b.ocap) && (a.fields == b.fields) && (a.target == b.target) && (a.decl == b.decl) && (a.cname == b.cname) && (a.forward == b.forward) && (a.defined == b.defined) && (a.helpers == b.helpers) && (a.initp == b.initp) && (a.finalp == b.finalp) && (a.tpsyms == b.tpsyms) && (a.gen == b.gen) && (a.gbinds == b.gbinds) && (a.next == b.next) && (a.ndim == b.ndim) && (a.idxs == b.idxs) && (a.assignp == b.assignp) && (a.eqp == b.eqp) && (a.ltp == b.ltp) && (a.repn == b.repn);
}
static void as_R1025(R1025 *d, R1025 s) {
  d->s = s.s;
  d->next = s.next;
}
static R1025 cp_R1025(R1025 s) {
  R1025 d = s;
  d.s = s.s;
  d.next = s.next;
  return d;
}
static int eq_R1025(R1025 a, R1025 b) {
  return 1 && (a.s == b.s) && (a.next == b.next);
}
static void as_R1023(R1023 *d, R1023 s) {
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
static R1023 cp_R1023(R1023 s) {
  R1023 d = s;
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
static int eq_R1023(R1023 a, R1023 b) {
  return 1 && (a.lo == b.lo) && (a.hi == b.hi) && (a.lo2 == b.lo2) && (a.hi2 == b.hi2) && (a.slen == b.slen) && (a.mlo == b.mlo) && (a.mhi == b.mhi) && (a.hasm == b.hasm) && (a.args == b.args) && (a.dyn == b.dyn) && (a.lvl == b.lvl) && (a.prec == b.prec) && (a.bnds == b.bnds);
}
static void as_R1021(R1021 *d, R1021 s) {
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
static R1021 cp_R1021(R1021 s) {
  R1021 d = s;
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
static int eq_R1021(R1021 a, R1021 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.flag == b.flag) && (a.name == b.name) && (a.tag == b.tag) && (a.prags == b.prags) && (a.labels == b.labels) && (a.eline == b.eline) && (a.a == b.a) && (a.b == b.b) && (a.c == b.c) && (a.d == b.d) && (a.e == b.e) && (a.next == b.next);
}
static void as_A1019(A1019 *d, A1019 s) {
  if (0 || RT_R_EXT(d->lo, d->hi) != RT_R_EXT(s.lo, s.hi)) rt_raise_msg(rt_exc("X_ARRAY"), "array length");
  rt_int n_ = (RT_CNT(s));
  if (d->p > s.p && d->p < s.p + n_) { for (rt_int i = n_ - 1; i >= 0; i--) { d->p[i] = s.p[i]; } return; }
  for (rt_int i = 0; i < n_; i++) { d->p[i] = s.p[i]; }
}
static A1019 cp_A1019(A1019 s) {
  A1019 d = s; d.p = rt_alloc(sizeof(P1015) * (size_t)(RT_CNT(s)) + 1);
  for (rt_int i = 0; i < (RT_CNT(s)); i++) d.p[i] = s.p[i];
  return d;
}
static int eq_A1019(A1019 a, A1019 b) {
  if (0 || a.lo != b.lo || a.hi != b.hi) return 0;
  for (rt_int i = 0; i < (RT_CNT(a)); i++) if (!((a.p[i] == b.p[i]))) return 0;
  return 1;
}
static void as_R1016(R1016 *d, R1016 s) {
  d->kind = s.kind;
  d->line = s.line;
  d->ival = s.ival;
  d->s = s.s;
  d->prags = s.prags;
}
static R1016 cp_R1016(R1016 s) {
  R1016 d = s;
  d.kind = s.kind;
  d.line = s.line;
  d.ival = s.ival;
  d.s = s.s;
  d.prags = s.prags;
  return d;
}
static int eq_R1016(R1016 a, R1016 b) {
  return 1 && (a.kind == b.kind) && (a.line == b.line) && (a.ival == b.ival) && (a.s == b.s) && (a.prags == b.prags);
}
int main(int argc, char **argv) {
  rt_init(argc, argv);
  rt_set_lang(0);
  RT_ROOT(g_toks_1051);
  RT_ROOT(g_ntoks_1052);
  RT_ROOT(g_tpos_1053);
  RT_ROOT(g_src_line_1054);
  RT_ROOT(g_pending_prag_1055);
  RT_ROOT(g_src_head_1056);
  RT_ROOT(g_src_tail_1057);
  RT_ROOT(g_ntoks_before_library_1058);
  RT_ROOT(g_library_tried_1059);
  RT_ROOT(g_table_1060);
  RT_ROOT(g_genv_1061);
  RT_ROOT(g_all_insts_1062);
  RT_ROOT(g_depth_1063);
  RT_ROOT(g_scope_stack_1064);
  RT_ROOT(g_all_types_1065);
  RT_ROOT(g_serial_1066);
  RT_ROOT(g_out_types_1067);
  RT_ROOT(g_out_helpers_1068);
  RT_ROOT(g_out_protos_1069);
  RT_ROOT(g_out_globals_1070);
  RT_ROOT(g_out_funcs_1071);
  RT_ROOT(g_out_init_1072);
  RT_ROOT(g_out_excs_1073);
  RT_ROOT(g_code_1074);
  RT_ROOT(g_fields_buf_1075);
  RT_ROOT(g_in_func_1076);
  RT_ROOT(g_cur_level_1077);
  RT_ROOT(g_fctx_1078);
  RT_ROOT(g_caps_1079);
  RT_ROOT(g_cap_waits_1080);
  RT_ROOT(g_psub_1081);
  RT_ROOT(g_st_field_1082);
  RT_ROOT(g_out_frames_1083);
  RT_ROOT(g_out_roots_1084);
  RT_ROOT(g_uses_free_1085);
  RT_ROOT(g_fins_1086);
  RT_ROOT(g_uses_findyn_1087);
  RT_ROOT(g_func_sym_1088);
  RT_ROOT(g_func_rc_1089);
  RT_ROOT(g_cap_ret_1090);
  RT_ROOT(g_cap_rflag_1091);
  RT_ROOT(g_ret_frames_1092);
  RT_ROOT(g_gdepth_1093);
  RT_ROOT(g_suppress_1094);
  RT_ROOT(g_cons_ctx_1095);
  RT_ROOT(g_mark_uninit_1096);
  RT_ROOT(g_exits_1097);
  RT_ROOT(g_gotos_1098);
  RT_ROOT(g_frames_1099);
  RT_ROOT(g_handlers_1100);
  RT_ROOT(g_cleanups_1101);
  RT_ROOT(g_trial_1102);
  RT_ROOT(g_mcopies_1103);
  RT_ROOT(g_ty_int_1104);
  RT_ROOT(g_ty_bool_1105);
  RT_ROOT(g_ty_float_1106);
  RT_ROOT(g_ty_ascii_1107);
  RT_ROOT(g_ty_string_1108);
  RT_ROOT(g_ty_void_1109);
  RT_ROOT(g_ty_file_1110);
  RT_ROOT(g_ty_nil_1111);
  RT_ROOT(g_ty_lock_1112);
  RT_ROOT(g_ty_latch_1113);
  RT_ROOT(g_ty_act_1114);
  RT_ROOT(g_file_mode_type_1115);
  RT_ROOT(g_ty_send_st_1116);
  RT_ROOT(g_ty_receive_st_1117);
  RT_ROOT(g_ty_text_file_1118);
  RT_ROOT(g_file_state_type_1119);
  RT_ROOT(g_file_disp_type_1120);
  RT_ROOT(g_file_access_type_1121);
  RT_ROOT(g_no_cons_1122);
  ex_compile_error_1 = rt_exc("COMPILE_ERROR");
g_toks_1051 = NULL;
g_ntoks_1052 = RT_R_IUNDEF;
g_ntoks_1052 = ((rt_int)0LL);
g_tpos_1053 = RT_R_IUNDEF;
g_tpos_1053 = ((rt_int)1LL);
g_src_line_1054 = RT_R_IUNDEF;
g_src_line_1054 = ((rt_int)0LL);
g_pending_prag_1055 = NULL;
g_src_head_1056 = NULL;
g_src_tail_1057 = NULL;
g_ntoks_before_library_1058 = RT_R_IUNDEF;
g_ntoks_before_library_1058 = ((rt_int)0LL);
g_library_tried_1059 = NULL;
g_table_1060 = NULL;
g_genv_1061 = NULL;
g_all_insts_1062 = NULL;
g_depth_1063 = RT_R_IUNDEF;
g_depth_1063 = ((rt_int)0LL);
g_scope_stack_1064 = NULL;
g_all_types_1065 = NULL;
g_serial_1066 = RT_R_IUNDEF;
g_serial_1066 = ((rt_int)0LL);
g_out_types_1067 = NULL;
g_out_helpers_1068 = NULL;
g_out_protos_1069 = NULL;
g_out_globals_1070 = NULL;
g_out_funcs_1071 = NULL;
g_out_init_1072 = NULL;
g_out_excs_1073 = NULL;
g_code_1074 = NULL;
g_fields_buf_1075 = NULL;
g_in_func_1076 = RT_R_EUNDEF;
g_in_func_1076 = 0;
g_cur_level_1077 = RT_R_IUNDEF;
g_cur_level_1077 = ((rt_int)0LL);
g_fctx_1078 = NULL;
g_caps_1079 = NULL;
g_cap_waits_1080 = NULL;
g_psub_1081 = NULL;
g_st_field_1082 = NULL;
g_out_frames_1083 = NULL;
g_out_roots_1084 = NULL;
g_uses_free_1085 = RT_R_EUNDEF;
g_uses_free_1085 = 0;
g_fins_1086 = NULL;
g_uses_findyn_1087 = RT_R_EUNDEF;
g_uses_findyn_1087 = 0;
g_func_sym_1088 = NULL;
g_func_rc_1089 = NULL;
g_cap_ret_1090 = NULL;
g_cap_rflag_1091 = NULL;
g_ret_frames_1092 = RT_R_IUNDEF;
g_ret_frames_1092 = ((rt_int)0LL);
g_gdepth_1093 = RT_R_IUNDEF;
g_gdepth_1093 = ((rt_int)0LL);
g_suppress_1094 = NULL;
g_cons_ctx_1095 = NULL;
g_mark_uninit_1096 = RT_R_EUNDEF;
g_mark_uninit_1096 = 0;
g_exits_1097 = NULL;
g_gotos_1098 = NULL;
g_frames_1099 = RT_R_IUNDEF;
g_frames_1099 = ((rt_int)0LL);
g_handlers_1100 = NULL;
g_cleanups_1101 = NULL;
g_trial_1102 = RT_R_IUNDEF;
g_trial_1102 = ((rt_int)0LL);
g_mcopies_1103 = NULL;
g_ty_int_1104 = NULL;
g_ty_bool_1105 = NULL;
g_ty_float_1106 = NULL;
g_ty_ascii_1107 = NULL;
g_ty_string_1108 = NULL;
g_ty_void_1109 = NULL;
g_ty_file_1110 = NULL;
g_ty_nil_1111 = NULL;
g_ty_lock_1112 = NULL;
g_ty_latch_1113 = NULL;
g_ty_act_1114 = NULL;
g_file_mode_type_1115 = NULL;
g_ty_send_st_1116 = NULL;
g_ty_receive_st_1117 = NULL;
g_ty_text_file_1118 = NULL;
g_file_state_type_1119 = NULL;
g_file_disp_type_1120 = NULL;
g_file_access_type_1121 = NULL;
g_no_cons_1122 = NULL;
{ P1017 cell2796 = rt_alloc(sizeof *cell2796);
rt_int pv2797 = ((rt_int)1000000LL);
cell2796->p_n = pv2797;
cell2796->all.lo = ((rt_int)1LL); cell2796->all.hi = pv2797;
cell2796->all.lo2 = cell2796->all.hi2 = 1;
cell2796->all.p = rt_alloc(sizeof(P1015) * (size_t)(RT_CNT(cell2796->all)) + 1);
for (rt_int i2798 = 0; i2798 < (RT_CNT(cell2796->all)); i2798++) {
cell2796->all.p[i2798] = NULL;
}
g_toks_1051 = cell2796;
}
{ P1034 cell2799 = rt_alloc(sizeof *cell2799);
rt_int pv2800 = (((rt_int)4093LL));
cell2799->p_n = pv2800;
cell2799->all.lo = ((rt_int)0LL); cell2799->all.hi = pv2800;
cell2799->all.lo2 = cell2799->all.hi2 = 1;
cell2799->all.p = rt_alloc(sizeof(P1030) * (size_t)(RT_CNT(cell2799->all)) + 1);
for (rt_int i2801 = 0; i2801 < (RT_CNT(cell2799->all)); i2801++) {
cell2799->all.p[i2801] = NULL;
}
g_table_1060 = cell2799;
}
g_out_types_1067 = f_new_buffer_24();
g_out_helpers_1068 = f_new_buffer_24();
g_out_protos_1069 = f_new_buffer_24();
g_out_globals_1070 = f_new_buffer_24();
g_out_funcs_1071 = f_new_buffer_24();
g_out_init_1072 = f_new_buffer_24();
g_out_excs_1073 = f_new_buffer_24();
g_out_frames_1083 = f_new_buffer_24();
g_out_roots_1084 = f_new_buffer_24();
g_code_1074 = g_out_init_1072;
g_no_cons_1122 = f_new_cons_184();
g_ty_int_1104 = f_new_typ_183((((rt_int)1LL)));
g_ty_bool_1105 = f_new_typ_183((((rt_int)2LL)));
g_ty_float_1106 = f_new_typ_183((((rt_int)3LL)));
g_ty_string_1108 = f_new_typ_183((((rt_int)5LL)));
g_ty_void_1109 = f_new_typ_183((((rt_int)9LL)));
g_ty_file_1110 = f_new_typ_183((((rt_int)10LL)));
g_ty_nil_1111 = f_new_typ_183((((rt_int)11LL)));
g_ty_lock_1112 = f_new_typ_183((((rt_int)13LL)));
g_ty_latch_1113 = f_new_typ_183((((rt_int)13LL)));
g_ty_act_1114 = f_new_typ_183((((rt_int)14LL)));
{ rt_frame xf2802;
if (RT_TRY(xf2802)) {
f_init_ascii_259();
f_read_source_58();
g_ntoks_before_library_1058 = rt_add(rt_r_ichk(g_ntoks_1052), ((rt_int)1LL));
f_translate_1011(f_with_library_999(f_program_159()));
f_print_program_1012();
RT_POP(xf2802);
} else {
RT_POP(xf2802);
int x2803 = rt_xcur;
if (0 || x2803 == ex_compile_error_1) {
rt_exit(((rt_int)1LL));
} else {
rt_raise(x2803);
}
}
}
  rt_main_done();
  return 0;
}
